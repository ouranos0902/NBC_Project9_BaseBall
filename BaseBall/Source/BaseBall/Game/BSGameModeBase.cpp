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

FString ABSGameModeBase::GenerateRandomSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i =1; i<=9; ++i)
	{
		Numbers.Add(i);
	}
	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers =Numbers.FilterByPredicate([](int32 Num){return Num > 0;});
	
	FString Result;
	for (int32 i=0; i<3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Numbers.Num() - 1, 1);
	}
	return Result;
}

FString ABSGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0;
	int32 BallCount = 0;
	
	for (int32 i=0; i<3; ++i)
	{
		if (InSecretNumberString.Len() == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"),InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}
	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}
	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

bool ABSGameModeBase::bIsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;
	
	do
	{
		if (InNumberString.Len() != 3)
		{
			break;
		}
		
		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C: InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}
			UniqueDigits.Add(C);
		}
		if (bIsUnique==false)
		{
			bCanPlay = true;
		}
	}while (false);
	
    return bCanPlay;
}