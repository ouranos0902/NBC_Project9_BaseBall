// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BaseBall : ModuleRules
{
	public BaseBall(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput"
			
			,"UMG", "Slate", "SlateCore"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		PublicIncludePaths.AddRange(new string[] { "BaseBall" });
		//PublicIncludePathModuleNames.AddRange(new string[] {  });
		//"MouduleName" 같은 모듈 이름 지정
		//모듈 의존성을 명확히 선언 -> 유지보수 및 빌드 관리에 용이하다.
		//단점은 모듈이 퍼블릭 헤더를 제공하지 않으면 사용 불가 하다  -> 소스 / 모듈 or 파일 이름(BaseBall) /Public/...

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
