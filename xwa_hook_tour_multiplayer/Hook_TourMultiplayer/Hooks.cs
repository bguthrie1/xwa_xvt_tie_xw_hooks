using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Hook_TourMultiplayer
{
    static class Hooks
    {
        private static HookFunction[] hookFunctions = new HookFunction[]
        {
            //new HookFunction(0x43B81A, TourMultiplayer.TourMultiplayerHook)
            new HookFunction(0x528BC0, TourMultiplayer.TourMultiplayerHook)
        };

        public static HookFunctionPtr[] hookFunctionsPtr = Array.ConvertAll(hookFunctions, t => t.Struct);

        private static HookPatchItem[] tourMultiplayerPatch = new HookPatchItem[]
        {
            new HookPatchItem(0x127FBB, "BF602AAE00", "E860FF0700"),
            new HookPatchItem(0x127FC0, "68201F6000", "E915A41600")
        };

        public static HookPatchItemPtr[] tourMultiplayerPatchPtr = Array.ConvertAll(tourMultiplayerPatch, t => t.Struct);

        private static HookPatch[] patches = new HookPatch[]
        {
            new HookPatch("Tour Multiplayer Patch", tourMultiplayerPatchPtr),
        };

        public static HookPatchPtr[] patchesPtr = Array.ConvertAll(patches, t => t.Struct);
    }
}
