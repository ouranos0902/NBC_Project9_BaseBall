// Fill out your copyright notice in the Description page of Project Settings.


#include "BSGameStateBase.h"
#include "Kismet/GameplayStatics.h"
#include "Player/BSPlayerController.h"

void ABSGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString)
{
	if (HasAuthority() == false)
	{
		APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		if (IsValid(PC) == true)
		{
			ABSPlayerController* BSPC = Cast<ABSPlayerController>(PC);
			if (IsValid(BSPC) == true)
			{
				FString NotificationString = InNameString + TEXT("로그인");
				BSPC->PrintChatMessageString(NotificationString);
			}
		}
	}
}
