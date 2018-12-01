using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Hook_General
{
    static class Hooks
    {
        private static HookFunction[] hookFunctions = new HookFunction[]
        {
            new HookFunction(0x4A5A9D, General.GeneralHook)
        };

        public static HookFunctionPtr[] hookFunctionsPtr = Array.ConvertAll(hookFunctions, t => t.Struct);

        private static HookPatchItem[] generalPatch = new HookPatchItem[]
        {
            new HookPatchItem(0xA4E98, "E833930000", "E883301000"),
            new HookPatchItem(0xA4E9D, "E84E820000", "E95E351100")
        };

        public static HookPatchItemPtr[] generalPatchPtr = Array.ConvertAll(generalPatch, t => t.Struct);

        private static HookPatch[] patches = new HookPatch[]
        {
            new HookPatch("X-Wing General Bugfix Patch", generalPatchPtr),
        };

        public static HookPatchPtr[] patchesPtr = Array.ConvertAll(patches, t => t.Struct);
    }
}
