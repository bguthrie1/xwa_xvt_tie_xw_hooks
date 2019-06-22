#include "cockpitlook.h"
#include "XWAFramework.h"
#include "targetver.h"
#include "Hex.h"


int CockpitLookHook(int* params)
{
	int playerIndex = params[-10];

	
	if (!PlayerDataTable[playerIndex].externalCamera
		&& !PlayerDataTable[playerIndex].hyperspacePhase
		&& PlayerDataTable[playerIndex].cockpitDisplayed
		&& !PlayerDataTable[playerIndex].gunnerTurretActive
		&& PlayerDataTable[playerIndex].cockpitDisplayed2
		&& *numberOfPlayersInGame == 1)
	{
		// Keyboard code for moving the cockpit camera angle
		__int16 keycodePressed = *keyPressedAfterLocaleAfterMapping;

		if (*win32NumPad4Pressed || *keyPressedAfterLocaleAfterMapping == KeyCode_NUMPAD4)
			PlayerDataTable[playerIndex].cockpitCameraYaw -= 1200;
		if (*win32NumPad6Pressed || keycodePressed == KeyCode_NUMPAD6)
			PlayerDataTable[playerIndex].cockpitCameraYaw += 1200;
		if (*win32NumPad8Pressed || keycodePressed == KeyCode_NUMPAD8)
			PlayerDataTable[playerIndex].cockpitCameraPitch += 1200;
		if (*win32NumPad2Pressed || keycodePressed == KeyCode_NUMPAD2)
			PlayerDataTable[playerIndex].cockpitCameraPitch -= 1200;
		if (*win32NumPad5Pressed || keycodePressed == KeyCode_NUMPAD5)
		{
			// Cockpit camera is reset to center position
			PlayerDataTable[playerIndex].cockpitCameraYaw = 0;
			PlayerDataTable[playerIndex].cockpitCameraPitch = 0;
		}
		// Mouse look code
		if (*mouseLook && !*inMissionFilmState && !*viewingFilmState)
		{
			DirectInputKeyboardReaquire();
			if (!*mouseLookWasNotEnabled)
			{
				__int16 _mouseLook_Y = *mouseLook_Y;
				if (*mouseLook_X || *mouseLook_Y)
				{
					if (abs(*mouseLook_X) > 85 || abs(*mouseLook_Y) > 85)
					{
						char _mouseLookInverted = *mouseLookInverted;

						PlayerDataTable[playerIndex].cockpitCameraYaw += 40 * *mouseLook_X;
						if (_mouseLookInverted)
							PlayerDataTable[playerIndex].cockpitCameraPitch += 40 * _mouseLook_Y;
						else
							PlayerDataTable[playerIndex].cockpitCameraPitch += -40 * _mouseLook_Y;
					}
					else
					{
						char _mouseLookInverted = *mouseLookInverted;
						PlayerDataTable[playerIndex].cockpitCameraYaw += 15 * *mouseLook_X;
						if (_mouseLookInverted)
							PlayerDataTable[playerIndex].cockpitCameraPitch += 15 * _mouseLook_Y;
						else
							PlayerDataTable[playerIndex].cockpitCameraPitch += -15 * _mouseLook_Y;
					}
				}
					
			}
			if (*mouseLookResetPosition)
			{
				PlayerDataTable[playerIndex].cockpitCameraYaw = 0;
				PlayerDataTable[playerIndex].cockpitCameraPitch = 0;
			}
			if (*mouseLookWasNotEnabled)
				*mouseLookWasNotEnabled = 0;
		}
	}
	
	params[-1] = 0x4F9C33;

	return 0;
}