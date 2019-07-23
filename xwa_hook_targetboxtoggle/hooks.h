#pragma once
#include "hook_function.h"
#include "TargetboxToggle.h"


static const HookFunction g_hookFunctions[] =
{
	{ 0x4FBAA1, TargetboxToggleHook },
};

static const HookPatchItem g_Patch[] =
{
	{ 0xFAE9C, "8B86E0948B00", "E87FD00A0090" },
};

static const HookPatch g_patches[] =
{
	MAKE_HOOK_PATCH("Targetbox Toggle hook", g_Patch),
};
