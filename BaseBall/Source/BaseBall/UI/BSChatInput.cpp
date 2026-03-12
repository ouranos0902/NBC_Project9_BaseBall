// Fill out your copyright notice in the Description page of Project Settings.


#include "BSChatInput.h"

#include "Components/EditableTextBox.h"
#include "Player/BSPlayerController.h"

void UBSChatInput::NativeConstruct()
{
	Super::NativeConstruct();
	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommited)==false)
	{
		EditableTextBox_ChatInput->OnTextCommitted.AddDynamic(this, &ThisClass::OnChatInputTextCommited);
	}
		
}

void UBSChatInput::NativeDestruct()
{
	Super::NativeDestruct();
	if (EditableTextBox_ChatInput->OnTextCommitted.IsAlreadyBound(this, &ThisClass::OnChatInputTextCommited)==true)
	{
		EditableTextBox_ChatInput->OnTextCommitted.RemoveDynamic(this, &ThisClass::OnChatInputTextCommited);
	}
}

void UBSChatInput::OnChatInputTextCommited(const FText& InText, ETextCommit::Type CommitMethod)
{
	if (CommitMethod==ETextCommit::OnEnter)
	{
		APlayerController* OwningPlayerController = GetOwningPlayer();
		
		if (OwningPlayerController)
		{
			ABSPlayerController* OwningBSPlayerController = Cast<ABSPlayerController>(OwningPlayerController);
			if (OwningBSPlayerController)
			{
				OwningBSPlayerController->SetChatMessageString(InText.ToString());
				EditableTextBox_ChatInput->SetText(FText());
			}
		}
	}
}

