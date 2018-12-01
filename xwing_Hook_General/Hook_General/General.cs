using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Hook_General
{
    static class General
    {
        public static int GeneralHook(IntPtr @params)
        {
            // Entry point for function
            IntPtr BeginPtr = new IntPtr(0x5B9000);
            IntPtr BeginPtr2 = new IntPtr(0x5B9005);
            IntPtr BeginPtr3 = new IntPtr(0x5B900A);

            // Fix for keyboard input loss, triggers when Joystick button 2 is pressed
            //IntPtr KeyboardFix1 = new IntPtr(0x42ABFF);
            //IntPtr KeyboardFix2 = new IntPtr(0x5B900F);

            // Fixes foreground spam, input read when not focused and keyboard input loss when alt+tabbing
            IntPtr ForegroundFix = new IntPtr(0x4AC3B4);
            IntPtr ForegroundFix2 = new IntPtr(0x5B9025);

            // Entry
            byte[] begin1 = HexStringToByteArray.StrToByteArray("E8CB5DEFFF");
            byte[] begin2 = HexStringToByteArray.StrToByteArray("E8E64CEFFF");
            byte[] begin3 = HexStringToByteArray.StrToByteArray("E993CAEEFF");

            // Fix for keyboard input loss, triggers when Joystick button 2 is pressed
            //byte[] keyboard1 = HexStringToByteArray.StrToByteArray("E90BE418009090");
            //byte[] keyboard2 = HexStringToByteArray.StrToByteArray("E89C32ECFFE8472EECFF66890D9CBD6200E9E11BE7FF");

            // Fixes foreground spam, input read when not focused and keyboard input loss when alt+tabbing
            byte[] foreground1 = HexStringToByteArray.StrToByteArray("E96CCC1000");
            byte[] foreground2 = HexStringToByteArray.StrToByteArray("39C8740FC7055E905B0000000000E98C33EFFF833D5E905B00000F857F33EFFFC7055E905B0001000000E85C32ECFFE8072EECFFE96633EFFF");

            // Entry
            Marshal.Copy(begin1, 0, BeginPtr, begin1.Length);
            Marshal.Copy(begin2, 0, BeginPtr2, begin2.Length);
            Marshal.Copy(begin3, 0, BeginPtr3, begin3.Length);

            // Fix for keyboard input loss, triggers when Joystick button 2 is pressed
            //Marshal.Copy(keyboard1, 0, KeyboardFix1, keyboard1.Length);
            //Marshal.Copy(keyboard2, 0, KeyboardFix2, keyboard2.Length);

            // Fixes foreground spam, input read when not focused and keyboard input loss when alt+tabbing
            Marshal.Copy(foreground1, 0, ForegroundFix, foreground1.Length);
            Marshal.Copy(foreground2, 0, ForegroundFix2, foreground2.Length);

            return 0;
        }
    }
}
