// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cafebabe.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"



void FShaderBitsModule::StartupModule()
{
	FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders")); // add this!
	AddShaderSourceDirectoryMapping("/Project", ShaderDirectory);
}

void FShaderBitsModule::ShutdownModule(){}

//IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, Cafebabe, "Cafebabe" );
IMPLEMENT_PRIMARY_GAME_MODULE( FShaderBitsModule, Cafebabe, "Cafebabe" );