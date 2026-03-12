// Fill out your copyright notice in the Description page of Project Settings.


#include "BSPlayerController.h"

void ABSPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);
	
	if (IsValid(ChatInputClass)==true)
	{
		ChatInputWidgetInstance = CreateWidget<UBSChatInput>(this, ChatInputClass);
		if (IsValid(ChatInputWidgetInstance))
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}
}
