﻿//------------------------------------------------------------------------------
// <auto-generated>
//     Ce code a été généré par un outil.
//     Version du runtime :4.0.30319.17929
//
//     Les modifications apportées à ce fichier peuvent provoquer un comportement incorrect et seront perdues si
//     le code est régénéré.
// </auto-generated>
//------------------------------------------------------------------------------

namespace EtherCATExplorer.Properties {
    
    
    [global::System.Runtime.CompilerServices.CompilerGeneratedAttribute()]
    [global::System.CodeDom.Compiler.GeneratedCodeAttribute("Microsoft.VisualStudio.Editors.SettingsDesigner.SettingsSingleFileGenerator", "10.0.0.0")]
    internal sealed partial class Settings : global::System.Configuration.ApplicationSettingsBase {
        
        private static Settings defaultInstance = ((Settings)(global::System.Configuration.ApplicationSettingsBase.Synchronized(new Settings())));
        
        public static Settings Default {
            get {
                return defaultInstance;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("0, 0")]
        public global::System.Drawing.Size GUI_FormSize {
            get {
                return ((global::System.Drawing.Size)(this["GUI_FormSize"]));
            }
            set {
                this["GUI_FormSize"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("Normal")]
        public global::System.Windows.Forms.FormWindowState GUI_State {
            get {
                return ((global::System.Windows.Forms.FormWindowState)(this["GUI_State"]));
            }
            set {
                this["GUI_State"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("1000")]
        public int DelayUpMs {
            get {
                return ((int)(this["DelayUpMs"]));
            }
            set {
                this["DelayUpMs"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("2")]
        public int RefreshStatePeriod {
            get {
                return ((int)(this["RefreshStatePeriod"]));
            }
            set {
                this["RefreshStatePeriod"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("200")]
        public int InputRefreshPeriod {
            get {
                return ((int)(this["InputRefreshPeriod"]));
            }
            set {
                this["InputRefreshPeriod"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("")]
        public string DatabaseFile {
            get {
                return ((string)(this["DatabaseFile"]));
            }
            set {
                this["DatabaseFile"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("Indigo")]
        public global::System.Drawing.Color ReadOnlyAttributColor {
            get {
                return ((global::System.Drawing.Color)(this["ReadOnlyAttributColor"]));
            }
            set {
                this["ReadOnlyAttributColor"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("DarkRed")]
        public global::System.Drawing.Color ReadWriteAttributColor {
            get {
                return ((global::System.Drawing.Color)(this["ReadWriteAttributColor"]));
            }
            set {
                this["ReadWriteAttributColor"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("False")]
        public bool EEPROMWriteEnable {
            get {
                return ((bool)(this["EEPROMWriteEnable"]));
            }
            set {
                this["EEPROMWriteEnable"] = value;
            }
        }
        
        [global::System.Configuration.UserScopedSettingAttribute()]
        [global::System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [global::System.Configuration.DefaultSettingValueAttribute("True")]
        public bool ShowSDOIdx {
            get {
                return ((bool)(this["ShowSDOIdx"]));
            }
            set {
                this["ShowSDOIdx"] = value;
            }
        }
    }
}
