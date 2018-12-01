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
            // Make sure the address is the next one after the call to the main hook or it will not work
            new HookFunction(0x4CB158, General.GeneralHook)
        };

        public static HookFunctionPtr[] hookFunctionsPtr = Array.ConvertAll(hookFunctions, t => t.Struct);

        private static HookPatchItem[] generalPatch = new HookPatchItem[]
        {
            new HookPatchItem(0xCA553, "E8F81D00006854A85100", "E8C8D90D00E9275B0800"),
        };

        public static HookPatchItemPtr[] generalPatchPtr = Array.ConvertAll(generalPatch, t => t.Struct);

        private static HookPatch[] patches = new HookPatch[]
        {
            new HookPatch("Balance Of Power General bug fix Patch", generalPatchPtr),
        };

        public static HookPatchPtr[] patchesPtr = Array.ConvertAll(patches, t => t.Struct);
    }
}
