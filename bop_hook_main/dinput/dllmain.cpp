#include "common.h"
#include "hook.h"
#include "hook_function.h"
#include "hooks.h"

bool IsXvTExe()
{
	char filename[4096];

	if (GetModuleFileName(nullptr, filename, sizeof(filename)) == 0)
	{
		return false;
	}

	int length = strlen(filename);

	if (length < 11)
	{
		return false;
	}

	return _stricmp(filename + length - 11, "z_xvt__.exe") == 0;
}

bool MainPatchMemory()
{
	for (const auto& patch : g_patches)
	{
		if (!PatchMemory(patch))
		{
			return false;
		}
	}

	return true;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
	{
		if (IsXvTExe())
		{
			if (MainPatchMemory())
			{
				LoadAndPatchHooks();
				VirtualProtectHookMemory();
			}
		}

		break;
	}

	case DLL_THREAD_ATTACH:
		break;

	case DLL_THREAD_DETACH:
		break;

	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}
