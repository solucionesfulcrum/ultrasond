﻿#pragma checksum "..\..\..\..\Doppler\FlowScaleControl.xaml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "EDD70E113DDC495AA392EF6DE5073D179C652D3A"
//------------------------------------------------------------------------------
// <auto-generated>
//     Este código fue generado por una herramienta.
//     Versión de runtime:4.0.30319.42000
//
//     Los cambios en este archivo podrían causar un comportamiento incorrecto y se perderán si
//     se vuelve a generar el código.
// </auto-generated>
//------------------------------------------------------------------------------

using DemoUltrasound;
using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;


namespace DemoUltrasound {
    
    
    /// <summary>
    /// FlowScaleControl
    /// </summary>
    public partial class FlowScaleControl : System.Windows.Controls.UserControl, System.Windows.Markup.IComponentConnector {
        
        
        #line 15 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas CanvasScaleMarks;
        
        #line default
        #line hidden
        
        
        #line 19 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Grid CanvasA;
        
        #line default
        #line hidden
        
        
        #line 20 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas TimerScale;
        
        #line default
        #line hidden
        
        
        #line 23 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Shapes.Path BaseLinePath;
        
        #line default
        #line hidden
        
        
        #line 25 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas VideoCanvas;
        
        #line default
        #line hidden
        
        
        #line 30 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal DemoUltrasound.EnvelopeControl EnvelopeCtrl_Max;
        
        #line default
        #line hidden
        
        
        #line 31 "..\..\..\..\Doppler\FlowScaleControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal DemoUltrasound.EnvelopeControl EnvelopeCtrl_Mean;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/DemoUltrasound;component/doppler/flowscalecontrol.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1811:AvoidUncalledPrivateCode")]
        internal System.Delegate _CreateDelegate(System.Type delegateType, string handler) {
            return System.Delegate.CreateDelegate(delegateType, this, handler);
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            this.CanvasScaleMarks = ((System.Windows.Controls.Canvas)(target));
            
            #line 15 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.CanvasScaleMarks.SizeChanged += new System.Windows.SizeChangedEventHandler(this.CanvasScaleMarks_SizeChanged);
            
            #line default
            #line hidden
            
            #line 16 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.CanvasScaleMarks.PreviewMouseLeftButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.CanvasScaleMarks_PreviewMouseLeftButtonDown);
            
            #line default
            #line hidden
            
            #line 16 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.CanvasScaleMarks.PreviewMouseLeftButtonUp += new System.Windows.Input.MouseButtonEventHandler(this.CanvasScaleMarks_PreviewMouseLeftButtonUp);
            
            #line default
            #line hidden
            
            #line 16 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.CanvasScaleMarks.PreviewMouseMove += new System.Windows.Input.MouseEventHandler(this.CanvasScaleMarks_PreviewMouseMove);
            
            #line default
            #line hidden
            
            #line 16 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.CanvasScaleMarks.MouseLeave += new System.Windows.Input.MouseEventHandler(this.CanvasScaleMarks_MouseLeave);
            
            #line default
            #line hidden
            return;
            case 2:
            this.CanvasA = ((System.Windows.Controls.Grid)(target));
            return;
            case 3:
            this.TimerScale = ((System.Windows.Controls.Canvas)(target));
            
            #line 20 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.TimerScale.SizeChanged += new System.Windows.SizeChangedEventHandler(this.TimerScale_SizeChanged);
            
            #line default
            #line hidden
            return;
            case 4:
            this.BaseLinePath = ((System.Windows.Shapes.Path)(target));
            return;
            case 5:
            this.VideoCanvas = ((System.Windows.Controls.Canvas)(target));
            
            #line 26 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.VideoCanvas.PreviewMouseLeftButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.VideoCanvas_PreviewMouseLeftButtonDown);
            
            #line default
            #line hidden
            
            #line 26 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.VideoCanvas.PreviewMouseLeftButtonUp += new System.Windows.Input.MouseButtonEventHandler(this.VideoCanvas_PreviewMouseLeftButtonUp);
            
            #line default
            #line hidden
            
            #line 26 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.VideoCanvas.PreviewMouseMove += new System.Windows.Input.MouseEventHandler(this.VideoCanvas_PreviewMouseMove);
            
            #line default
            #line hidden
            
            #line 26 "..\..\..\..\Doppler\FlowScaleControl.xaml"
            this.VideoCanvas.MouseLeave += new System.Windows.Input.MouseEventHandler(this.VideoCanvas_MouseLeave);
            
            #line default
            #line hidden
            return;
            case 6:
            this.EnvelopeCtrl_Max = ((DemoUltrasound.EnvelopeControl)(target));
            return;
            case 7:
            this.EnvelopeCtrl_Mean = ((DemoUltrasound.EnvelopeControl)(target));
            return;
            }
            this._contentLoaded = true;
        }
    }
}

