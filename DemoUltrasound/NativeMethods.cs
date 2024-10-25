using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace DemoUltrasound
{

    public static class NativeMethods
    {
        // Importar SetFrameDataListener desde la DLL
        [DllImport("ColorImageEngineServer.dll", EntryPoint = "?SetFrameDataListener@ColorImageEngineServer@CIES@@QAEXPAVFrameDataListener@2@@Z", CallingConvention = CallingConvention.StdCall)]
        public static extern void SetFrameDataListener(IntPtr listener);
    }
}
