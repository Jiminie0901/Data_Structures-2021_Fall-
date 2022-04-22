object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Selection Sort v.s. Bubble Sort by Jean Chen 2021/10/05'
  ClientHeight = 427
  ClientWidth = 878
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 81
    Top = 40
    Width = 17
    Height = 13
    Caption = 'n ='
  end
  object Label2: TLabel
    Left = 56
    Top = 64
    Width = 42
    Height = 13
    Caption = 'range = '
  end
  object Label3: TLabel
    Left = 672
    Top = 40
    Width = 44
    Height = 13
    Caption = 'target = '
  end
  object Edit1: TEdit
    Left = 104
    Top = 37
    Width = 110
    Height = 21
    TabOrder = 0
    Text = 'Edit1'
  end
  object Button1: TButton
    Left = 56
    Top = 96
    Width = 158
    Height = 25
    Caption = 'Generate Random Numbers'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 48
    Top = 152
    Width = 185
    Height = 169
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 104
    Top = 64
    Width = 110
    Height = 21
    TabOrder = 3
    Text = 'Edit2'
  end
  object Button2: TButton
    Left = 296
    Top = 96
    Width = 113
    Height = 25
    Caption = 'Selection Sort'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Memo2: TMemo
    Left = 280
    Top = 152
    Width = 137
    Height = 169
    Lines.Strings = (
      'Memo2')
    ScrollBars = ssVertical
    TabOrder = 5
  end
  object CheckBox1: TCheckBox
    Left = 280
    Top = 39
    Width = 73
    Height = 17
    Caption = 'Echo Print'
    TabOrder = 6
  end
  object CheckBox2: TCheckBox
    Left = 376
    Top = 39
    Width = 97
    Height = 17
    Caption = 'Self Check'
    TabOrder = 7
  end
  object Button3: TButton
    Left = 480
    Top = 96
    Width = 105
    Height = 25
    Caption = 'Bubble Sort'
    TabOrder = 8
    OnClick = Button3Click
  end
  object Memo3: TMemo
    Left = 464
    Top = 152
    Width = 137
    Height = 169
    Lines.Strings = (
      'Memo2')
    ScrollBars = ssVertical
    TabOrder = 9
  end
  object Memo4: TMemo
    Left = 648
    Top = 152
    Width = 205
    Height = 169
    Lines.Strings = (
      'Memo2')
    ScrollBars = ssVertical
    TabOrder = 10
  end
  object Button4: TButton
    Left = 696
    Top = 96
    Width = 113
    Height = 25
    Caption = 'Binary Search'
    TabOrder = 11
    OnClick = Button4Click
  end
  object Edit3: TEdit
    Left = 722
    Top = 37
    Width = 87
    Height = 21
    TabOrder = 12
    Text = 'Edit3'
  end
  object Button5: TButton
    Left = 280
    Top = 344
    Width = 337
    Height = 25
    Caption = 'Clear All'
    TabOrder = 13
    OnClick = Button5Click
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 408
    Width = 878
    Height = 19
    Panels = <>
    ExplicitLeft = 448
    ExplicitTop = 224
    ExplicitWidth = 0
  end
end
