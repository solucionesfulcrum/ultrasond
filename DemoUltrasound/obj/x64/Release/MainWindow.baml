   M S B A M L   `   `   `  ���� I  EDemoUltrasound, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null/clr-namespace:DemoUltrasoundDemoUltrasound      DemoUltrasound.MainWindow   R NWindowsBase, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35W SPresentationCore, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35\ XPresentationFramework, Version=4.0.0.0, Culture=neutral, PublicKeyToken=31bf3856ad364e35D 9http://schemas.microsoft.com/winfx/2006/xaml/presentation    R NSystem.Xaml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b77a5c561934e089:x,http://schemas.microsoft.com/winfx/2006/xaml     @d2http://schemas.microsoft.com/expression/blend/2008     Jmc;http://schemas.openxmlformats.org/markup-compatibility/2006     .localclr-namespace:DemoUltrasound     -     � WindowState$  	Maximized=� � WindowStyle$
 None=� � 
ResizeMode$ NoResize=� � Title$ 
MainWindow��
���   � � 	Resources    NomeButtonDefaulted �� Color  TitleAHelpForeground  UpdateForeground �� 
TargetType �� Property �� Value  FocusVisual	 J� SnapsToDevicePixels
 �� StrokeDashArray  ButtonBaseControlTemplate1 �� 
TargetType ��Name ��Name �� ContentStringFormat �� ContentStringFormat �� Triggers P� Property P� Value �� 
TargetName  Button.Static.Background  Button.Static.Border  Button.MouseOver.Background  Button.MouseOver.Border 	 Button.Pressed.Background 
 Button.Pressed.Border  Button.Disabled.Background  Button.Disabled.Border  Button.Disabled.Foreground  ToggleButtonStyle1 �� BasedOn��%�
  &	        &	      &	 *     '�� 9     '�� �     '�� k    '�� �    '�� <    '�� s    &	 �    &	     '��     &	 �    &	 �    &	      &	     &		 *    &	
 ?    &	 T    &	 i    &	 ~    &	 �    7  7  'd� �	    7  �� $ 	#FF1987EA���� $ 	#FFC8C8C8���� $	 Red���� " ��.���  � �� �� *CurrentFontSize+��  � �� �	#FF00A0A0��  � ��$ 10q��� " ��.���  � ��$ 50����  � ��$ 5,0,5,0q���  � ��$ Center=���  �@��TextAlignment$ Right=���  � �� �� *CurrentFontSize+��  � �� �	#FF00A0A0�� " ��.���  � ��$	 300����  � ��$ 5,0,5,0q���  � ��$ Center=���  � �� �� *CurrentFontSize+�� " ��.���  � ��$	 150����  � �� �� *CurrentFontSize+�� " ��.���  � �� �� *CurrentFontSize+�� " ��.���  � ��$	 120����  � �� �� *CurrentFontSize+�� .���  � �� �� .R��� $��2q�	 . #��� ��$��1��$	
 1 2R��� " ��.R��� $ border��#��z��#��z��#��z��	 . ._��� $ contentPresenter��#��z��#��z��# z |�.  #��z��#��z����. #	 z	 #��z�� P�  �@��IsDefaulted . . ��� $ border��# � �� � ��P�  �@J�IsMouseOver . P�  � �� . . ��� $ border�� � �� �	#FF0070C0�� $ border�� � �� �	#FF2C628BP�  � {� .  . ��� $ border�� � �� �	#FFA9A9A9�� $ border�� � �� �	#FFADB2B5��  � �� �	#FF838383�� " ��.���  � ��# �   ��  � ��# �  ��  � ��$ 0q���  � ��$ 70����  � ��$ 5q���  � ��$ Center=���  � ��$ 20(���  � ��$ 3q���  � ��# �  �� $ 	#FFDDDDDD���� $ 	#FF707070���� $ 	#FFBEE6FD���� $ 	#FF3C7FB1���� $ 	#FFC4E5F6���� $ 	#FF2C628B���� $ 	#FFF4F4F4���� $ 	#FFADB2B5���� $ 	#FF838383���� " d�.���  �@�FocusVisualStyle8   ��  � ��# �   ��  � ��# �  ��  � ��$ 0q���  � ��$ Center=���  � ��$ Center=���  � ��$ 1q���  � �� �� " d�.R��� $ border��#��z��#��z��#��z��	 . ._��� $ contentPresenter��|�.  #��z��#��z����. #	 z	 #��z�� P�  �@��IsDefaulted . . ��� $ border��# � �� � ��P�  �@J�IsMouseOver . P�  �@d�	IsChecked$
 trueY�. ��� $ border�� � �� �	#FF0070C0�� $ border�� � �� �	#FF2C628BP�  � �� . . ��� $ border�� � �� �	#FF0070C0�� $ border�� � �� �	#FF2C628BP�  � {� .  . ��� $ border�� � �� �	#FFA9A9A9�� $ border�� � �� �	#FFADB2B5�� $ contentPresenter��8   � ���� " d�8   .���  � ��$ 20(���  � ��$ 70��.��� ���	#FF282850 � RowDefinitions �� $��60 ��� �� $��58 � � ColumnDefinitions �� $	��430 ��� $��10 ��� �� $��30 ��� $��8 �.+�� $��0��$��0��$��4�� �� $��1* ��� $
��Auto ��� $��2* �.+��� $��40(�$��0��$��	Demo v1.0��$
��Left=�$��40,10q���  �� Orientation$ 
Horizontal=�$��1��$
��Left=�$��10,10q�.+��� $��20(�$��SDK Ver:���� -    ��Name$ 
SDKVersion��$��20(�$��2��$	��5,0q��� $��20(�$��HW Ver:��$
��10,0q��� -   $ HardWareVersion��$��20(�$��2��$	��5,0q��� -    ��Name$ UsbConnState��$��2��$��UniformToFill=�$��50��$��50��� $��0��$��1��.+��  �� $
��Auto ���  �� �� $
��Auto �.+�� $��0��$��Center=�$	��Top=� �� $
��Auto ��� $
��Auto �.+��� $��0��$ 
Horizontal=�$��0,5,0,5q�.+��� $��Seleccionar sonda:��$��5q��� -    ��Name$ UseProbeName��$��5q��� $��1��$ 
Horizontal=�$��0,5,0,5q�$y�Visible=�.+��� $!��Seleccionar modo de examen:��$��5q��� -   $ UseExameName��$��5q��� $��1��$��Parámetros��$��Stretch=�$	��Top=�$��	10,0,10,0q�.���� 
������  �� TabStripPlacement$	 Top=�.@��� $��Parámetros B��.���� .��� $��Center=�$	��Top=�$
��0,20q� �� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto �.+��� $��0��$ 
Horizontal=�$��0,0,0,5q�.+��� $��	Ganancia:��$��5q��� -    ��Name$
 Gain��$��5q� � Minimum$ 1Q� � Maximum$	 100Q� � Value$ 50Q�  �� TickFrequency$  1Q�! �� IsSnapToTickEnabled! . " �� TickPlacement$" TopLeft=��� # �� TextAlignment$
# Left=�$��5q����� $ �� ElementName$
$ Gain��% �� Path$% Value��� $��1��$ 
Horizontal=�$��0,5,0,5q�.+��� $��Profundidad:��$��5q��� -   $ Depth��$��5q�$  1Q�! . $" TopLeft=��� -	   $ 
DepthValue��$
# Left=�$��5q��� $��2��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Rango dinámico:��$��5q��� -
   $ DynamicRange��$��5q�$ 1Q�$	 100Q�$ 50Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ DynamicRange��$% Value��� $��3��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Mejora de imagen:��$��5q��� -   $	 SRI��$��5q�$ 1Q�$ 8Q�$ 4Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $	$ SRI��$% Value��� $��4��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Correlación de cuadros:��$��5q��� -   $ Correlation��$��5q�$ 1Q�$ 4Q�$ 2Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ Correlation��$% Value��� $��5��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Nivel de gris:��$��5q��� -   $ 	GrayLevel��$��5q�$ 1Q�$ 8Q�$ 1Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ 	GrayLevel��$% Value��� $��6��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Pseudocolor:��$��5q��� -   $ PseudocolorLevel��$��5q�$ 0Q�$ 8Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ PseudocolorLevel��$% Value��� $��7��$ 
Horizontal=�$��0,0,0,5q�.+��� $��
Armónico:��$��5q��� -   $ Harmonic��$��5q�.@��� $��Apagado��& �� 
IsSelected& . �� $��	Encendido���� $��8��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Área de enfoque:��$��5q��� -   $ 	FocusArea��$��5q�.@��� $	��0cm���� $	��0cm���� $	��0cm���� $	��0cm���� $	��0cm���� $	��0cm���� $��Área completa��& . �� -   $ FocusAreaNew��$
# Left=�$��5q��� $��9��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Frecuencia:��$��5q��� -   $ 	Frequency��$��5q�.@��� $��Frecuencia baja��& . �� $��Frecuencia media���� $��Frecuencia alta���� $��10��$ Vertical=�$��0,0,0,5q�.+��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��TGC1:��$��5q��� -   $
 TGC1��
' � Tag$
' TGC1��$��5q�$	 -15Q�$ 15Q�$ 0Q�$" TopLeft=��� $
# Left=�$��5q����� $
$ TGC1��$% Value��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��TGC2:��$��5q��� -   $
 TGC2��$
' TGC2��$��5q�$	 -15Q�$ 15Q�$ 0Q�$" TopLeft=��� $
# Left=�$��5q����� $
$ TGC2��$% Value��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��TGC3:��$��5q��� -   $
 TGC3��$
' TGC3��$��5q�$	 -15Q�$ 15Q�$ 0Q�$" TopLeft=��� $
# Left=�$��5q����� $
$ TGC3��$% Value��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��TGC4:��$��5q��� -   $
 TGC4��$
' TGC4��$��5q�$	 -15Q�$ 15Q�$ 0Q�$" TopLeft=��� $
# Left=�$��5q����� $
$ TGC4��$% Value��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��TGC5:��$��5q��� -   $
 TGC5��$
' TGC5��$��5q�$	 -15Q�$ 15Q�$ 0Q�$" TopLeft=��� $
# Left=�$��5q����� $
$ TGC5��$% Value��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��TGC6:��$��5q��� -   $
 TGC6��$
' TGC6��$��5q�$	 -15Q�$ 15Q�$ 0Q�$" TopLeft=��� $
# Left=�$��5q����� $
$ TGC6��$% Value��� $ 
Horizontal=�$��0,0,0,5q�.+��� -   ( ��Name$( AutoTGC��$��TGC Automático��$
��Auto���� $��11��$ Vertical=�$��0,0,0,5q�y��� *NEVisibility+.+��� $ 
Horizontal=�$��0,0,0,5q�.+��� $��Mejora de cuadros:��$��5q��� -   $ NEONOFF��$��5q�.@��� $��Apagado��& . �� $��	Encendido���� $ 
Horizontal=�$��0,0,0,5q�.+��� $��Ángulo de mejora:��$��5q��� -   $ NeAngle��$��5q�$	 -30Q�$ 30Q�$ 30Q�$  15Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ NeAngle��$% Value��� $��Parámetros C��.���� .��� $��Center=�$	��Top=�$
��0,20q� �� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto �.+��� $��0��$ 
Horizontal=�$��0,0,0,5q�.+��� $��	Ganancia:��$��5q��� -   $ C_Gain��$��5q�$ 1Q�$	 100Q�$ 50Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ C_Gain��$% Value��� $��1��$ 
Horizontal=�$��0,5,0,5q�.+��� $��Filtrado de pared:��$��5q��� -   $
 C_WF��$��5q�$ 0Q�$ 4Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $
$ C_WF��$% Value��� $��2��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Correlación de cuadros:��$��5q��� -   $ C_Correlation��$��5q�$ 0Q�$ 4Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ C_Correlation��$% Value��� $��3��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Velocidad del flujo:��$��5q��� -   $ C_Scale��$��5q�$ 0Q�$ 7Q�$ 0Q�$  1Q�! . $" TopLeft=��� -    $ C_ScaleValue��$
# Left=�$��5q��� -!   ) ��Name$) C_Steer_StackPanel��$��4��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Desviación:��$��5q��� -"   $ C_Steer��$��5q�$	 -20Q�$ 20Q�$ 0Q�$  10Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ C_Steer��$% Value��� $��5��$ 
Horizontal=�$��0,0,0,5q�.+��� $��
Prioridad:��$��5q��� -#   $ 
C_Priority��$��5q�$ 0Q�$ 4Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ 
C_Priority��$% Value��� $��6��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Modo:��$��5q��� -$   $ C_Mode��$��5q�.@��� $��Flujo sanguíneo��& . �� $��Energía���� $��7��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Mapeo:��$��5q��� -%   $ C_Map��$��5q�$ 0Q�$ 11Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ C_Map��$% Value��� $��8��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Frecuencia:��$��5q��� -&   $ C_Speed��$��5q�.@��� $��Alta velocidad��& . �� $��Baja velocidad���� $��9��$ 
Horizontal=�$��0,0,0,5q�.+��� $��	Invertir:��$��5q��� -'   $ C_Invert��$��5q�.@��� $��Apagado��& . �� $��	Encendido���� $��Parámetros D��.���� .��� $��Center=�$	��Top=�$
��0,20q� �� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto �.+��� $��0��$ 
Horizontal=�$��0,0,0,5q�.+��� $��	Ganancia:��$��5q��� -(   $ D_Gain��$��5q�$	 -20Q�$ 20Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_Gain��$% Value��� $��1��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Rango dinámico:��$��5q��� -)   $ D_DynamicRange��$��5q�$ 20Q�$ 60Q�$ 40Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_DynamicRange��$% Value��� $��2��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Velocidad del flujo:��$��5q��� -*   $ D_Scale��$��5q�$ 0Q�$ 7Q�$ 0Q�$  1Q�! . $" TopLeft=��� -+   $ D_ScaleValue��$
# Left=�$��5q��� $��3��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Línea base:��$��5q��� -,   $ 
D_BaseLine��$��5q�$ -3Q�$ 3Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ 
D_BaseLine��$% Value��� $��4��$ 
Horizontal=�$��0,5,0,5q�.+��� $��Filtrado de pared:��$��5q��� --   $
 D_WF��$��5q�$ 0Q�$ 2Q�$ 1Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $
$ D_WF��$% Value��� $��5��$ 
Horizontal=�$��0,5,0,5q�.+��� $��Ángulo:��$��5q��� -.   $ D_Angle��$��5q�$	 -80Q�$ 80Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_Angle��$% Value��� $��6��$ 
Horizontal=�$��0,5,0,5q�.+��� $��Tiempo por pantalla:��$��5q��� -/   $ D_TimeScale��$��5q�.@��� $��4s��& . �� $��6s���� $��8s���� $��1s���� $��7��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Frecuencia:��$��5q��� -0   $ D_Speed��$��5q�.@��� $��Alta velocidad��& . �� $��Baja velocidad���� -1   $) D_Steer_StackPanel��$��8��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Desviación:��$��5q��� -2   $ D_Steer��$��5q�$	 -20Q�$ 20Q�$ 0Q�$  10Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_Steer��$% Value��� $��9��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Volumen de muestreo:��$��5q��� -3   $ D_SamplingVolume��$��5q�$ 1Q�$ 10Q�$ 5Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_SamplingVolume��$% Value��� $��10��$ 
Horizontal=�$��0,0,0,5q�.+��� $��	Invertir:��$��5q��� -4   $ D_Invert��$��5q�.@��� $��Apagado��& . �� $��	Encendido���� $��11��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Mapeo:��$��5q��� -5   $ D_Map��$��5q�$ 1Q�$ 8Q�$ 1Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_Map��$% Value��� $��12��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Pseudocolor:��$��5q��� -6   $ D_PseudocolorLevel��$��5q�$ 0Q�$ 8Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ D_PseudocolorLevel��$% Value��� $��Parámetros M��.���� .��� $��Center=�$	��Top=�$
��0,20q� �� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto �.+��� $��0��$ 
Horizontal=�$��0,0,0,5q�.+��� $��	Ganancia:��$��5q��� -7   $ M_Gain��$��5q�$ 0Q�$	 100Q�$ 50Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ M_Gain��$% Value��� $��1��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Tiempo por pantalla:��$��5q��� -8   $ M_TimeScale��$��5q�.@��� $��4s��& . �� $��6s���� $��8s���� $��1s���� $��2��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Mapeo:��$��5q��� -9   $ M_Map��$��5q�$ 1Q�$ 8Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ M_Map��$% Value��� $��3��$ 
Horizontal=�$��0,0,0,5q�.+��� $��Pseudocolor:��$��5q��� -:   $ M_PseudocolorLevel��$��5q�$ 0Q�$ 8Q�$ 0Q�$  1Q�! . $" TopLeft=��� $
# Left=�$��5q����� $$ M_PseudocolorLevel��$% Value�� -;   * �Name$* PWCtrl��$��0��$��2��$��1��$��70��$	��5,5q� �� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� $
��Auto ��� �� $
��Auto �.+�d� -<   + d�Name$+ FreezeOrUnFreeze��$��0��$��0,0,0,5q�, d� 	IsChecked$
, TrueY�$��Descongelar��$��50��d� -=   $+ 	VideoPlay��$��1��$y�	Collapsed=�$��0,0,0,5q�$��
Reproducir��$��50��d� ->   $+ B��$��2��$, FalseY�$��0,0,0,5q�$��B��$��50��d� -?   $+ C��$��3��$, FalseY�$��0,0,0,5q�$��C��$��50��d� -@   $+ D��$��4��$, FalseY�$��0,0,0,5q�$��D��$��50��d� -A   $+ M��$��5��$, FalseY�$��0,0,0,5q�$��M��$��50��d� -B   $+ StartRecording��$��7��$, FalseY�$��0,0,0,5q�$��START��$��50��$y�Hidden=�d� -C   $+ StopRecording��$��8��$, FalseY�$��0,0,0,5q�$
��STOP��$��50��$y�Hidden=�d� -D   $+ GenerarDatosSimulados��$��9��$, FalseY�$��0,0,0,5q�$��Go��$��50���� -E   $( Update��$��6��$��0,0,0,5q�$��50��$y�	Collapsed=����  ��%   '��       �� " �� �� �� $
��Auto ��� .+��� -F   $ Update_B_BC��$��0��$��B��$��20(�#���  �� $��|��$��1��#���  �� -G   $ Update_D��$��2��$��D��$��20(�#���  � -H   $* 
ImageAreas��$��2��$��1�� �� �� $
��Auto �.+�/   )DemoUltrasound.BC_Mode_UltraSound_Control  -I   -  Name$- BAWBUtrs��$��0��$��0q�
������ 
���   ��� -J   . ��Name$. SelectionCanvas��$��0��
������ .+��� -K   $��SelectionRectangle��
���  ��$��2��$	��200��$	��150��/ �� Left$	/ 100��
0 �� Top$	0 100��
������ n� -L   $��	MoveThumb��$��20��$��20��
����  �$	/ 280��$	0 230��n� -M   $��ResizeThumb��$��20��$��20��
��� � �$	/ 280��$	0 230��$   DemoUltrasound.DM_Mode_Control  -N   1  Name$1 DopplerCtrl��$��1��$y�	Collapsed=�$��0q�
������ 
���   ��� -O   $ ErrorMsg��$��0��$��2��$��Center=�$��Center=�$y�	Collapsed=�$��25(�
��� ����� -P   $( CloseSoftWare��$��2��$��Cerrar��$	��100��$��50��� -Q   $* ColorMapGrid��$��3��$��1�� �� $	��256 ��� $
��Auto ��� $	��256 ��� $
��Auto ��� $
��Auto �.+�� $��0��
������ $
��Left=�.+�$   DemoUltrasound.ColorMapControl  -R   2  Name$2 GrayMap��$	��256��$��16���� -S   $ MaxScale��$��1��$	��0,5q�$��12(�3 �� Padding$3 0q�$
# Left=�$��16��y��� $$ ColorMap��$% 
Visibility��� -T   $ MinScale��$��3��$	��0,5q�$��12(�$3 0q�$
# Left=�$��16��y��� $$ ColorMap��$% 
Visibility�� $��2��
������ $
��Left=�.+�  -U   $2 ColorMap��$��1��$	��256��$��16��$y�	Collapsed=�� $��4��$
��Left=�.+�  -V   $2 
DM_GrayMap��$	��256��$��16��y��� $$ DopplerCtrl��$% 
Visibility�