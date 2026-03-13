// Fill out your copyright notice in the Description page of Project Settings.


#include "BSGameModeBase.h"
#include "BSGameStateBase.h"

void ABSGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);
	
	ABSGameStateBase* BSGameStateBase = GetGameState<ABSGameStateBase>();
	if (IsValid(BSGameStateBase) == true)
	{
		BSGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXX"));
	}
}
