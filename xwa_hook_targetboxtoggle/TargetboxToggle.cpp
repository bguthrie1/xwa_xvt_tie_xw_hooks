#include "targetver.h"
#include "TargetboxToggle.h"
#include "config.h"

void* hexstr_to_char_address(unsigned char* address, const char* hexstr)
{
	size_t len = strlen(hexstr);
	if (len % 2 != 0)
		return NULL;
	size_t final_len = len / 2;
	unsigned char* chrs = address;
	for (size_t i = 0, j = 0; j < final_len; i += 2, j++)
		chrs[j] = (hexstr[i] % 32 + 9) % 25 * 16 + (hexstr[i + 1] % 32 + 9) % 25;
	return 0;
}

bool ConfigTargetBox()
{
	vector<string> lines = GetFileLines("hook_targetboxtoggle.cfg");

	if (lines.size())
	{
		if (GetFileKeyValueInt(lines, "TargetBox") == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	return true;
}

int TargetboxToggleHook(int* params)
{
	int playerIndex = params[-10];
	Player* PlayerPtr = (Player*)0x8B94E0;
	params[-2] = PlayerPtr[playerIndex].ObjectIndex;

	if (!ConfigTargetBox())
	{
		hexstr_to_char_address((unsigned char*)0x503A30, "C39090");
		return 0;
	}
	else
	{
		hexstr_to_char_address((unsigned char*)0x503A30, "83EC08");
	}

	if (*KeyPressed == Key_CONTROL_T)
	{
		PlayerPtr[playerIndex].ShowTargetBox = PlayerPtr[playerIndex].ShowTargetBox == 0;
		PlaySoundFromObject(Sound_Click1, 0xFFFF, playerIndex);
	}

	
	return 0;
}