// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Blur_PP.h"
#include "Interfaces/IPluginManager.h"
#include "RHI.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "GlobalShader.h"

#define LOCTEXT_NAMESPACE "FBlur_PPModule"

void FBlur_PPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FString ShaderDirectory = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("Blur_PP"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping("/BlurShaders", ShaderDirectory);
}

void FBlur_PPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlur_PPModule, Blur_PP)