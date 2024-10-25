using System;
using System.Runtime.InteropServices;
using System.Windows;

namespace DemoUltrasound
{
    public class UltrasoundListener
    {
        private int size;

        public UltrasoundListener(int dataSize)
        {
            this.size = dataSize;
        }

        public void OnFrameDataUpdated(IntPtr frameData)
        {
            try
            {
                if (frameData == IntPtr.Zero || size <= 0)
                {
                    ShowMessage("No se recibieron datos de imagen.");
                    return;
                }

                byte[] data = new byte[size];
                Marshal.Copy(frameData, data, 0, size);
                ProcessFrameData(data);
                
                // Muestra un mensaje indicando que los datos se recibieron correctamente
                MessageBox.Show(string.Format("Datos de imagen recibidos. Tamaño {0}", size));
            }
            catch (Exception ex)
            {
                // Maneja cualquier excepción que ocurra durante el proceso
                MessageBox.Show(string.Format("Error al procesar los datos de la imagen: {0}", ex.Message));
            }
        }

        private void ShowMessage(string message)
        {
            Application.Current.Dispatcher.Invoke(() =>
            {
                MessageBox.Show(message);
            });
        }

        private void ProcessFrameData(byte[] data)
        {
            // Agrega aquí la lógica para procesar los datos del marco
        }
    }

    public delegate void FrameDataUpdatedCallback(IntPtr frameData);
}