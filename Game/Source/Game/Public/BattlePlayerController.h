// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BattlePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAME_API ABattlePlayerController : public APlayerController
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
		/// <summary>
		/// 初始化指针显示
		/// </summary>
		void InitCursorDisplay();
public:
	/// <summary>
	/// 获取指针在世界上的位置
	/// </summary>
	FVector GetMouseCursorWorldLocation();

	/// <summary>
	/// 移动到鼠标位置
	/// </summary>
	void MoveToMousePosition();
};
