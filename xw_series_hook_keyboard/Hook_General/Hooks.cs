using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Hook_Keyboard
{
    static class XWHooks
    {
        private static HookFunction[] hookFunctions = new HookFunction[]
        {
            new HookFunction(0x4AC3AD, XWKeyboard.KeyboardHook),
            //new HookFunction(0x47BFDC, XWKeyboard.MessageHook)
        };

        public static HookFunctionPtr[] hookFunctionsPtr = Array.ConvertAll(hookFunctions, t => t.Struct);

        private static HookPatchItem[] keyboardPatch = new HookPatchItem[]
        {
            new HookPatchItem(0xAB7A8, "FF1574314C008B0DF8785600", "E873C70F0090EB1490909090"),
            //new HookPatchItem(0x7B3D7, "6A0068EC9C4D00", "E844CB1200EB0D"),

            new HookPatchItem(0x7B3D5, "741A", "EB1A"),
        };

        public static HookPatchItemPtr[] keyboardPatchPtr = Array.ConvertAll(keyboardPatch, t => t.Struct);

        private static HookPatch[] patches = new HookPatch[]
        {
            new HookPatch("X-Wing Keyboard Reaquire Hook", keyboardPatchPtr),
        };

        public static HookPatchPtr[] patchesPtr = Array.ConvertAll(patches, t => t.Struct);
    }

    static class TIEHooks
    {
        private static HookFunction[] hookFunctions = new HookFunction[]
        {
            new HookFunction(0x49A11D, TIEKeyboard.KeyboardHook),
        };

        public static HookFunctionPtr[] hookFunctionsPtr = Array.ConvertAll(hookFunctions, t => t.Struct);

        private static HookPatchItem[] keyboardPatch = new HookPatchItem[]
        {
            new HookPatchItem(0x99518, "FF15D0C14D003B056CCA5800", "E8935E0700EB269090909090"),
            new HookPatchItem(0x164C5, "741A", "EB1A"),
        };

        public static HookPatchItemPtr[] keyboardPatchPtr = Array.ConvertAll(keyboardPatch, t => t.Struct);

        private static HookPatch[] patches = new HookPatch[]
        {
            new HookPatch("TIE Fighter Keyboard Reaquire Hook", keyboardPatchPtr),
        };

        public static HookPatchPtr[] patchesPtr = Array.ConvertAll(patches, t => t.Struct);
    }

    static class BOPHooks
    {
        private static HookFunction[] hookFunctions = new HookFunction[]
        {
            new HookFunction(0x4AA72A, BOPKeyboard.KeyboardHook)
        };

        public static HookFunctionPtr[] hookFunctionsPtr = Array.ConvertAll(hookFunctions, t => t.Struct);

        private static HookPatchItem[] keyboardPatch = new HookPatchItem[]
        {
            new HookPatchItem(0xA9B25, "FF151096BB008B0DD0DD6600", "E8F6E30F0090EB2290909090"),
        };

        public static HookPatchItemPtr[] keyboardPatchPtr = Array.ConvertAll(keyboardPatch, t => t.Struct);

        private static HookPatch[] patches = new HookPatch[]
        {
            new HookPatch("Balance Of Power Keyboard Reaquire Hook", keyboardPatchPtr),
        };

        public static HookPatchPtr[] patchesPtr = Array.ConvertAll(patches, t => t.Struct);
    }
}
