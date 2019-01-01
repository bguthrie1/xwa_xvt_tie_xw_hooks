#pragma once
#include "hook_function.h"

bool isPatched = false;

static const HookPatchItem g_setupXWDInputHookPatch[] =
{
	{ 0x1A7F20, "00000000000000000000000000000000", "506033C054505050E8AB8FF0FF6158C3" },
	{ 0x1A7F30, "00000000000000000000000000000000", "536033C054505050E89B8FF0FF615BC3" },
};


static const HookPatchItem g_setupTIEDInputHookPatch[] =
{
	{ 0x10F3B0, "00000000000000000000000000000000", "506033C054505050E83BE5F8FF6158C3" },
	{ 0x10F3C0, "00000000000000000000000000000000", "536033C054505050E82BE5F8FF615BC3" },
};


static const HookPatchItem g_setupXVTDInputHookPatch[] =
{
	{ 0x1A7F20, "00000000000000000000000000000000", "506033C054505050E8EBC5F0FF6158C3" },
	{ 0x1A7F30, "00000000000000000000000000000000", "536033C054505050E8DBC5F0FF615BC3" },
};


static const HookPatchItem g_setupBOPDInputHookPatch[] =
{
	{ 0x1A7F20, "00000000000000000000000000000000", "506033C054505050E8EB7FF0FF6158C3" },
	{ 0x1A7F30, "00000000000000000000000000000000", "536033C054505050E8DB7FF0FF615BC3" },
};


static const HookPatchItem g_setupXWADInputHookPatch[] =
{
	{ 0x1A7F20, "00000000000000000000000000000000", "506033C054505050E8EB42F7FF6158C3" },
	{ 0x1A7F30, "00000000000000000000000000000000", "536033C054505050E8DB42F7FF615BC3" },
};

static const HookPatch g_XWpatches[] =
{
	MAKE_HOOK_PATCH("To setup the Xwing dinput hook", g_setupXWDInputHookPatch),
};

static const HookPatch g_TIEpatches[] =
{
	MAKE_HOOK_PATCH("To setup the TIE Fighter dinput hook", g_setupTIEDInputHookPatch),
};

static const HookPatch g_XVTpatches[] =
{
	MAKE_HOOK_PATCH("To setup the Xwing vs TIE Fighter dinput hook", g_setupXVTDInputHookPatch),
};

static const HookPatch g_BOPpatches[] =
{
	MAKE_HOOK_PATCH("To setup the Balance of Power dinput hook", g_setupBOPDInputHookPatch),
};

static const HookPatch g_XWApatches[] =
{
	MAKE_HOOK_PATCH("To setup the Xwing Alliance dinput hook", g_setupXWADInputHookPatch),
};

