// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BSGameModeBase.generated.h"

class ABSPlayerController;
/**
 * 
 */
UCLASS()
class BASEBALL_API ABSGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	public:
	
	virtual void BeginPlay() override;
	
	virtual void OnPostLogin(AController* NewPlayer) override;
	
	void PrintChatMessageString(ABSPlayerController* InChattingPlayerController, const FString& InChatMessageString);
	
	FString GenerateRandomSecretNumber();
		
	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);
	
	bool bIsGuessNumberString(const FString& InNumberString);
	
	protected:
	
	FString SecretNumberString;
	TArray<TObjectPtr<ABSPlayerController>> AllPlayerControllers;
};
