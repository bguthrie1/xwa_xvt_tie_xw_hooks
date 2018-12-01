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
            // Custom variables:
            // 00550CCC 4 bytes (might change this down to 1 byte later)

            // Entry point for function
            IntPtr BeginPtr = new IntPtr(0x550C84);

            // Keyboard input loss and window spam foreground fix
            IntPtr KeyboardFixPtr = new IntPtr(0x4AA731);
            IntPtr KeyboardFixPtr2 = new IntPtr(0x550C93);

            byte[] begin1 = HexStringToByteArray.StrToByteArray("E8C7C2F7FF6854A85100E9CAA4F7FF");


            byte[] keyboard1 = HexStringToByteArray.StrToByteArray("E95D650A00");
            byte[] keyboard2 = HexStringToByteArray.StrToByteArray("39C8740FC705CC0C550000000000E9A99AF5FF833DCC0C5500000F859C9AF5FFC705CC0C550001000000E85E2BEFFFE86926EFFFE9839AF5FF");

            
            Marshal.Copy(begin1, 0, BeginPtr, begin1.Length);

            Marshal.Copy(keyboard1, 0, KeyboardFixPtr, keyboard1.Length);
            Marshal.Copy(keyboard2, 0, KeyboardFixPtr2, keyboard2.Length);

            return 0;
        }
    }
}
