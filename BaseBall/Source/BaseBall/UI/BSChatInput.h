// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BSChatInput.generated.h"

class UEditableTextBox;
/**
 * 
 */
UCLASS()
class BASEBALL_API UBSChatInput : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	
protected:
	
	UFUNCTION()
	void OnChatInputTextCommited(const FText& InText, ETextCommit::Type CommitMethod);
	
public:
	
	UPROPERTY(meta=(BindWidget))
	TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;
};
