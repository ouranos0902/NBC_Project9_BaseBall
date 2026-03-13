// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UI/BSChatInput.h"
#include "BSPlayerController.generated.h"

class UUserWidget;
/**
 * 
 */
UCLASS()
class BASEBALL_API ABSPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ABSPlayerController();
	
	virtual void BeginPlay() override;
	
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
public:
	
	
	void SetChatMessageString(const FString &InChatMessageString);
	
	void PrintChatMessageString(const FString &InChatMessageString);
	
	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString &InChatMessageString);
	
	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString &InChatMessageString);

protected:
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UBSChatInput> ChatInputWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UBSChatInput> ChatInputWidgetInstance;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;
	
	FString ChatMessageString;
	
public:
	UPROPERTY(Replicated, BlueprintReadOnly)
	FText NotificationText;
};
