// Fill out your copyright notice in the Description page of Project Settings.


#include "BattlePlayerController.h"

void ABattlePlayerController::BeginPlay()
{
	Super::BeginPlay();
	InitCursorDisplay();
}

void ABattlePlayerController::Tick(float DeltaSeconds)
{
}
void ABattlePlayerController::InitCursorDisplay()
{
	//显示鼠标，并且限制鼠标在屏幕内
	SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockAlways);
	InputMode.SetHideCursorDuringCapture(false);
	SetInputMode(InputMode);
}

FVector ABattlePlayerController::GetMouseCursorWorldLocation()
{
	FHitResult HitResult;
	FVector	 Start, Dir, End;
	DeprojectMousePositionToWorld(Start, Dir);//获取初始位置和方向
	End = Start + (Dir * 8000.0f);//设置追踪终点
	GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility);
	return  HitResult.Location;//位置
}

void ABattlePlayerController::MoveToMousePosition()
{

}