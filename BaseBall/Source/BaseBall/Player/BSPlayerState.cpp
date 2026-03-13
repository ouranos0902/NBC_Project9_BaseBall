// Fill out your copyright notice in the Description page of Project Settings.


#include "BSPlayerState.h"
#include "Net/UnrealNetwork.h"

ABSPlayerState::ABSPlayerState()
	: PlayerNameString(TEXT("None"))
{
	bReplicates = true;
}

void ABSPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ThisClass, PlayerNameString);
}
