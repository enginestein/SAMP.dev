#pragma once

namespace Shared
{
	enum class PipeMessages : short
	{
		
		Ping = 1,

		
		TextCreate,
		TextDestroy,
		TextSetShadow,
		TextSetShown,
		TextSetColor,
		TextSetPos,
		TextSetString,
		TextUpdate,

		
		BoxCreate,
		BoxDestroy,
		BoxSetShown,
		BoxSetBorder,
		BoxSetBorderColor,
		BoxSetColor,
		BoxSetHeight,
		BoxSetPos,
		BoxSetWidth,

		
		LineCreate,
		LineDestroy,
		LineSetShown,
		LineSetColor,
		LineSetWidth,
		LineSetPos,

		
		ImageCreate,
		ImageDestroy,
		ImageSetShown,
		ImageSetAlign,
		ImageSetPos,
		ImageSetRotation,

		
		DestroyAllVisual,
		ShowAllVisual,
		HideAllVisual,
		GetFrameRate,
		GetScreenSpecs,
		SetCalculationRatio,
		SetOverlayPriority,
		SetOverlayCalculationEnabled,

		
		GetGTACommandLine,

		
		SendChat,
		ShowGameText,
		AddChatMessage,
		ShowDialog,
		GetPlayerNameByID,
		IsChatOpen,
		IsDialogOpen,

		
		ReadMemory,

		
		ScreenToWorld,
		WorldToScreen
	};
}
