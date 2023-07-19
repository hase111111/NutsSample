// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

const int UMyBlueprintFunctionLibrary::FIELD_SIZE_X = 9;
const int UMyBlueprintFunctionLibrary::FIELD_SIZE_Y = 16;

bool UMyBlueprintFunctionLibrary::canMove(const TArray<bool>& field)
{

	return false;
}

void UMyBlueprintFunctionLibrary::printField(const TArray<bool>& field)
{
	if(field.Num() == FIELD_SIZE_X* FIELD_SIZE_Y-1)
	{
		UE_LOG(LogTemp, Log, TEXT("Field size is not correct"));
		return;
	}

	UE_LOG(LogTemp, Log, TEXT("Field size is correct"));

	FString str = "";

	for (size_t i = 0; i < FIELD_SIZE_X; ++i)
	{
		for (size_t j = 0; j < FIELD_SIZE_Y; ++j)
		{
			str += field[i + j * FIELD_SIZE_X] ? "1" : "0";
		}
		str += "\n";
	}

	UE_LOG(LogTemp, Log, TEXT("%s"), *str);

	//for (int i = 0; i < field.Num(); i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("\n"));
	//	}
	//	UE_LOG(LogTemp, Warning, TEXT("%d"), field[i]);
	//}
	//UE_LOG(LogTemp, Display, TEXT("\n"));
}
