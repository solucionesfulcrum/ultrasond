   M S B A M L   `   `   `  ����I  EDemoUltrasound, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null/clr-namespace:DemoUltrasoundDemoUltrasound  5      %    DemoUltrasound.FlowScaleControl   5      R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    5      R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     5      Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     5      @d2http://schemas.microsoft.com/expression/blend/2008     5      .localclr-namespace:DemoUltrasound     5      .��5	      �   � ColumnDefinitions  5
   
   �� 5      �� 5      $
��Auto �6   .+�5   
   � $��1��6   .+�5      �� -   5        $��CanvasScaleMarks��5       J� IsHitTestVisible . ��6Y   �� *ScaleMarksWidth+��6{   �� *BackgroundBrush+5      5      � 5   
   -   5         �Name$ CanvasA��5      $��0��6    .+�5      �� -   5        $��
TimerScale��5      ��6L   �� *BackgroundBrush+5      �� 5      ��6   �� *ImageShowHeigth+��68   �� *ImageShowWidth+.+�5      F� -   5         F�Name$ BaseLinePath��5      
�������$��2��6<   5      �� 5      -   5        $��VideoCanvas��5      
������ }�.  6V   �� *VideoCanUse+5      5      $   DemoUltrasound.EnvelopeControl  5   
   -   5          Name$ EnvelopeCtrl_Max��5       $��0��6:      EnvelopeVisibility$ 	Collapsed=�6J     5   
   -   5        $ EnvelopeCtrl_Mean��5       $��0��6;   $ 	Collapsed=�6K   5       5"      