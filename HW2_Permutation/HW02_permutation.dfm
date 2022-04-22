object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Permutation and Towers of Hanoi'
  ClientHeight = 650
  ClientWidth = 693
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 177
    Top = 0
    Height = 650
    ExplicitLeft = 5
    ExplicitTop = 64
    ExplicitHeight = 545
  end
  object PageControl1: TPageControl
    AlignWithMargins = True
    Left = 183
    Top = 3
    Width = 509
    Height = 644
    ActivePage = TabSheet3
    Align = alLeft
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'Permutations'
      object Label7: TLabel
        Left = 192
        Top = 64
        Width = 31
        Height = 13
        Caption = 'Label7'
      end
      object Memo1: TMemo
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 495
        Height = 610
        Align = alClient
        Lines.Strings = (
          'Memo1')
        ScrollBars = ssVertical
        TabOrder = 0
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Permutations with Tracing'
      ImageIndex = 1
      object Memo2: TMemo
        Left = 0
        Top = 0
        Width = 501
        Height = 616
        Align = alClient
        Lines.Strings = (
          'Memo2')
        ScrollBars = ssVertical
        TabOrder = 0
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Tower of Hanoi'
      ImageIndex = 2
      object Memo3: TMemo
        Left = 0
        Top = 0
        Width = 501
        Height = 616
        Align = alClient
        Lines.Strings = (
          'Memo3')
        TabOrder = 0
      end
    end
  end
  object PageControl2: TPageControl
    Left = 0
    Top = 0
    Width = 177
    Height = 650
    Margins.Bottom = 8
    ActivePage = TabSheet4
    Align = alLeft
    TabOrder = 1
    object TabSheet4: TTabSheet
      Caption = 'Permutation'
      object Panel1: TPanel
        Left = 0
        Top = 0
        Width = 169
        Height = 622
        Align = alClient
        TabOrder = 0
        object Label1: TLabel
          Left = 15
          Top = 53
          Width = 20
          Height = 13
          Caption = 'n = '
        end
        object Label2: TLabel
          Left = 15
          Top = 91
          Width = 16
          Height = 13
          Caption = 'k ='
        end
        object Label3: TLabel
          Left = 28
          Top = 138
          Width = 71
          Height = 13
          Caption = '1 <= n <=  26'
        end
        object Label4: TLabel
          Left = 28
          Top = 157
          Width = 61
          Height = 13
          Caption = '0 <= k <= n'
        end
        object Label5: TLabel
          Left = 28
          Top = 228
          Width = 68
          Height = 13
          Caption = '1 <= n <= 10'
        end
        object Label6: TLabel
          Left = 28
          Top = 247
          Width = 61
          Height = 13
          Caption = '0 <= k <= n'
        end
        object Label9: TLabel
          Left = 15
          Top = 337
          Width = 77
          Height = 17
          BiDiMode = bdRightToLeft
          Caption = 'Permute Texts'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tempus Sans ITC'
          Font.Style = [fsUnderline]
          ParentBiDiMode = False
          ParentFont = False
        end
        object Label10: TLabel
          Left = 15
          Top = 373
          Width = 31
          Height = 13
          Caption = 'text ='
        end
        object Label11: TLabel
          Left = 15
          Top = 411
          Width = 16
          Height = 13
          Caption = 'k ='
        end
        object Edit1: TEdit
          Left = 41
          Top = 53
          Width = 79
          Height = 21
          TabOrder = 0
          Text = 'Edit1'
        end
        object Edit2: TEdit
          Left = 41
          Top = 88
          Width = 79
          Height = 21
          TabOrder = 1
          Text = 'Edit2'
        end
        object Button1: TButton
          Left = 15
          Top = 176
          Width = 105
          Height = 25
          Caption = 'Permute Alphabets'
          TabOrder = 2
          OnClick = Button1Click
        end
        object CheckBox1: TCheckBox
          Left = 15
          Top = 513
          Width = 97
          Height = 17
          Caption = 'Tracing'
          TabOrder = 3
        end
        object Button2: TButton
          Left = 15
          Top = 266
          Width = 105
          Height = 25
          Caption = 'Permute Numbers'
          TabOrder = 4
          OnClick = Button2Click
        end
        object Button3: TButton
          Left = 15
          Top = 536
          Width = 105
          Height = 25
          Caption = 'Clear All'
          TabOrder = 5
          OnClick = Button3Click
        end
        object Edit4: TEdit
          Left = 52
          Top = 370
          Width = 96
          Height = 21
          TabOrder = 6
          Text = 'Edit4'
        end
        object Button5: TButton
          Left = 15
          Top = 443
          Width = 105
          Height = 25
          Caption = 'Permute Texts'
          TabOrder = 7
          OnClick = Button5Click
        end
        object Edit5: TEdit
          Left = 37
          Top = 408
          Width = 111
          Height = 21
          TabOrder = 8
          Text = 'Edit5'
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'Towers of Hanoi'
      ImageIndex = 1
      object Panel2: TPanel
        Left = 0
        Top = 0
        Width = 169
        Height = 622
        Align = alClient
        TabOrder = 0
        object Label8: TLabel
          Left = 32
          Top = 56
          Width = 101
          Height = 14
          Caption = 'number of disk = '
          Color = clHotLight
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -11
          Font.Name = 'Showcard Gothic'
          Font.Style = []
          ParentColor = False
          ParentFont = False
        end
        object Edit3: TEdit
          Left = 32
          Top = 76
          Width = 101
          Height = 21
          TabOrder = 0
          Text = 'Edit3'
        end
        object Button4: TButton
          Left = 32
          Top = 136
          Width = 101
          Height = 25
          Caption = 'START !'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -15
          Font.Name = 'Tw Cen MT Condensed Extra Bold'
          Font.Style = []
          ParentFont = False
          TabOrder = 1
          OnClick = Button4Click
        end
        object Button6: TButton
          Left = 32
          Top = 232
          Width = 101
          Height = 25
          Caption = 'Clear All'
          TabOrder = 2
          OnClick = Button6Click
        end
      end
    end
  end
end
