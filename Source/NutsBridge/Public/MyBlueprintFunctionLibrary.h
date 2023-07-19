// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

//! @brief �u���[�v�����g����Ăяo���֐����`����N���X
//! @note ���܂�ď��߂Ă� UE C++ �Ȃ̂ŁC���������܂����������
UCLASS()
class NUTSBRIDGE_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GraphSearch")
	static bool canMove(const TArray<bool>& field);

	UFUNCTION(BlueprintCallable, Category = "GraphSearch")
	static void printField(const TArray<bool>& field);

private:
	const int m_start_x = 0;
	const int m_start_y = 4;

	static const int FIELD_SIZE_X;
	static const int FIELD_SIZE_Y;
};
