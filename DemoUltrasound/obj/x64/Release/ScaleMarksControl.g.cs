﻿#pragma checksum "..\..\..\ScaleMarksControl.xaml" "{ff1816ec-aa5e-4d10-87f7-6f4963833460}" "AE5E3CF7A5C088F8F723B1CBA634FFEBA3F64404"
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
    /// ScaleMarksControl
    /// </summary>
    public partial class ScaleMarksControl : System.Windows.Controls.UserControl, System.Windows.Markup.IComponentConnector {
        
        
        #line 10 "..\..\..\ScaleMarksControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas CanvasScaleMarks;
        
        #line default
        #line hidden
        
        
        #line 15 "..\..\..\ScaleMarksControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas NELineCanvas;
        
        #line default
        #line hidden
        
        
        #line 16 "..\..\..\ScaleMarksControl.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas CanvasFocusArea;
        
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
            System.Uri resourceLocater = new System.Uri("/DemoUltrasound;component/scalemarkscontrol.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\ScaleMarksControl.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
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
            
            #line 8 "..\..\..\ScaleMarksControl.xaml"
            ((DemoUltrasound.ScaleMarksControl)(target)).SizeChanged += new System.Windows.SizeChangedEventHandler(this.UserControl_SizeChanged);
            
            #line default
            #line hidden
            return;
            case 2:
            this.CanvasScaleMarks = ((System.Windows.Controls.Canvas)(target));
            
            #line 10 "..\..\..\ScaleMarksControl.xaml"
            this.CanvasScaleMarks.Loaded += new System.Windows.RoutedEventHandler(this.CanvasScaleMarks_Loaded);
            
            #line default
            #line hidden
            
            #line 10 "..\..\..\ScaleMarksControl.xaml"
            this.CanvasScaleMarks.SizeChanged += new System.Windows.SizeChangedEventHandler(this.CanvasScaleMarks_SizeChanged);
            
            #line default
            #line hidden
            return;
            case 3:
            this.NELineCanvas = ((System.Windows.Controls.Canvas)(target));
            return;
            case 4:
            this.CanvasFocusArea = ((System.Windows.Controls.Canvas)(target));
            
            #line 16 "..\..\..\ScaleMarksControl.xaml"
            this.CanvasFocusArea.Loaded += new System.Windows.RoutedEventHandler(this.FocusArea_Loaded);
            
            #line default
            #line hidden
            
            #line 16 "..\..\..\ScaleMarksControl.xaml"
            this.CanvasFocusArea.SizeChanged += new System.Windows.SizeChangedEventHandler(this.FocusArea_SizeChanged);
            
            #line default
            #line hidden
            
            #line 17 "..\..\..\ScaleMarksControl.xaml"
            this.CanvasFocusArea.PreviewMouseLeftButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.CanvasFocusArea_PreviewMouseLeftButtonDown);
            
            #line default
            #line hidden
            return;
            }
            this._contentLoaded = true;
        }
    }
}

