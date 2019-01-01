using System;
using System.Diagnostics;
using System.Runtime.InteropServices;

namespace Hook_Keyboard
{
    static class XWKeyboard
    {
        [DllImport("user32.dll")]
        private static extern IntPtr GetForegroundWindow();

        public static bool GameWasSelected = false;

        public static int KeyboardHook(IntPtr @params)
        {
            IntPtr unloadKeyboardPtr = new IntPtr(0x47C2B0);
            IntPtr loadKeyboardPtr = new IntPtr(0x47BE60);
            IntPtr gameFocusedPtr = new IntPtr(0x5678F0);
            IntPtr windowHandle = Process.GetCurrentProcess().MainWindowHandle;

            IntPtr selectedWindow = GetForegroundWindow();


            if (selectedWindow == windowHandle)
            {
                if (!GameWasSelected)
                {
                    GameWasSelected = true;
                    Invoker.InvokeCallback(unloadKeyboardPtr);
                    Invoker.InvokeCallback(loadKeyboardPtr);
                    Marshal.WriteByte(gameFocusedPtr, 0x1);
                }
            }
            else
            {
                GameWasSelected = false;
                Marshal.WriteByte(gameFocusedPtr, 0x0);
            }

            return 0;
        }
    }

    static class TIEKeyboard
    {
        [DllImport("user32.dll")]
        private static extern IntPtr GetForegroundWindow();


        public static bool GameWasSelected = false;

        public static int KeyboardHook(IntPtr @params)
        {
            IntPtr unloadKeyboardPtr = new IntPtr(0x4173C0);
            IntPtr loadKeyboardPtr = new IntPtr(0x416F50);
            IntPtr gameFocusedPtr = new IntPtr(0x58CA60);
            

            IntPtr windowHandle = Process.GetCurrentProcess().MainWindowHandle;

            IntPtr selectedWindow = GetForegroundWindow();


            if (selectedWindow == windowHandle)
            {
                if (!GameWasSelected)
                {
                    GameWasSelected = true;
                    Invoker.InvokeCallback(unloadKeyboardPtr);
                    Invoker.InvokeCallback(loadKeyboardPtr);
                    Marshal.WriteByte(gameFocusedPtr, 0x1);
                }
            }
            else
            {
                GameWasSelected = false;
                Marshal.WriteByte(gameFocusedPtr, 0x0);
            }

            return 0;
        }
    }
    static class BOPKeyboard
    {
        [DllImport("user32.dll")]
        private static extern IntPtr GetForegroundWindow();

        public static bool GameWasSelected = false;

        public static int KeyboardHook(IntPtr @params)
        {
            IntPtr unloadKeyboardPtr = new IntPtr(0x443820);
            IntPtr loadKeyboardPtr = new IntPtr(0x443330);
            IntPtr windowHandle = Process.GetCurrentProcess().MainWindowHandle;


            IntPtr selectedWindow = GetForegroundWindow();


            if (selectedWindow == windowHandle)
            {
                if (!GameWasSelected)
                {
                    GameWasSelected = true;
                    Invoker.InvokeCallback(unloadKeyboardPtr);
                    Invoker.InvokeCallback(loadKeyboardPtr);
                }
            }
            else
            {
                GameWasSelected = false;
            }

            return 0;
        }
    }
}
