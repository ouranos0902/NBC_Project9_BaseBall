// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UI/BSChatInput.h"
#include "BSPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BASEBALL_API ABSPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;
	
	void SetChatMessageString(const FString &InChatMessageString);
	
	void PrintChatMessageString(const FString &ChatMessageString);
	
protected:
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBSChatInput> ChatInputClass;
	
	UPROPERTY()
	TObjectPtr<UBSChatInput> ChatInputWidgetInstance;
	
	FString ChatMessageString;
};
