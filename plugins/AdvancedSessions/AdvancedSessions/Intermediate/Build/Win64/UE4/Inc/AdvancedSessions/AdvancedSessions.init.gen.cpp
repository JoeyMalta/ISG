// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedSessions_init() {}
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetRecentPlayersDelegate__DelegateSignature();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature();
	ADVANCEDSESSIONS_API UFunction* Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AdvancedSessions()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintFindFriendSessionDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetFriendsListDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetRecentPlayersDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintGetUserPrivilegeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AdvancedSessions_BlueprintSendFriendInviteDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AdvancedSessions",
				SingletonFuncArray,
				ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B0E8A89,
				0xE4B3F93E,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
