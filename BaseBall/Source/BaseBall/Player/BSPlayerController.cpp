// Fill out your copyright notice in the Description page of Project Settings.


#include "BSPlayerController.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EngineUtils.h"

void ABSPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UBSChatInput>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}
}

void ABSPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;
	if (IsLocalController() == true)
	{
		ServerRPCPrintChatMessageString(InChatMessageString);
	}
}

void ABSPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	UKismetSystemLibrary::PrintString(
		this,
		InChatMessageString,
		true,
		true,
		FLinearColor::White,
		5.0f);
}

void ABSPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	for (TActorIterator<ABSPlayerController> It(GetWorld()); It; ++It)
	{
		ABSPlayerController* ABSPlayerController = *It;
		if (IsValid(ABSPlayerController) == true)
		{
			ABSPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
		}
	}
}

void ABSPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}
