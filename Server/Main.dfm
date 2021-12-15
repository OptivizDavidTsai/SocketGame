object Form1: TForm1
  Left = 1232
  Top = 219
  Width = 491
  Height = 484
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 387
    Width = 475
    Height = 58
    Align = alBottom
    Caption = 'Server Info'
    TabOrder = 0
    object sbnServerOn: TSpeedButton
      Left = 333
      Top = 21
      Width = 82
      Height = 25
      AllowAllUp = True
      GroupIndex = 1
      Caption = 'Server On'
      OnClick = sbnServerOnClick
    end
    object ledtPort: TLabeledEdit
      Left = 9
      Top = 30
      Width = 184
      Height = 21
      EditLabel.Width = 25
      EditLabel.Height = 13
      EditLabel.Caption = 'Port: '
      LabelPosition = lpAbove
      LabelSpacing = 3
      TabOrder = 0
      Text = '1314'
    end
  end
  object redtLog: TRichEdit
    Left = 0
    Top = 0
    Width = 475
    Height = 387
    Align = alClient
    Color = clMenuText
    Font.Charset = CHINESEBIG5_CHARSET
    Font.Color = clLime
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 1
    WantReturns = False
  end
  object ServerSocket1: TServerSocket
    Active = False
    Port = 0
    ServerType = stNonBlocking
    OnAccept = ServerSocket1Accept
    OnClientConnect = ServerSocket1ClientConnect
    OnClientDisconnect = ServerSocket1ClientDisconnect
    OnClientRead = ServerSocket1ClientRead
    Left = 441
    Top = 405
  end
  object tmPost: TTimer
    Interval = 1
    Left = 429
    Top = 12
  end
  object tmRead: TTimer
    Interval = 1
    Left = 396
    Top = 12
  end
end
