object frmConnectForm: TfrmConnectForm
  Left = 694
  Top = 434
  BorderStyle = bsToolWindow
  Caption = 'Connect Info'
  ClientHeight = 130
  ClientWidth = 387
  Color = clBtnFace
  TransparentColor = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Position = poMainFormCenter
  Scaled = False
  Visible = True
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object gbConnectInfo: TGroupBox
    Left = 0
    Top = 0
    Width = 387
    Height = 130
    Align = alClient
    Caption = 'Connect Info'
    TabOrder = 0
    object bbtnConnect: TBitBtn
      Left = 306
      Top = 51
      Width = 61
      Height = 46
      Caption = 'Connect'
      TabOrder = 0
      OnClick = bbtnConnectClick
    end
    object ledtServerIP: TLabeledEdit
      Left = 12
      Top = 39
      Width = 217
      Height = 21
      EditLabel.Width = 50
      EditLabel.Height = 13
      EditLabel.Caption = 'Server IP: '
      LabelPosition = lpAbove
      LabelSpacing = 3
      TabOrder = 1
      Text = '127.0.0.1'
    end
    object ledtPort: TLabeledEdit
      Left = 12
      Top = 90
      Width = 97
      Height = 21
      EditLabel.Width = 25
      EditLabel.Height = 13
      EditLabel.Caption = 'Port: '
      LabelPosition = lpAbove
      LabelSpacing = 3
      TabOrder = 2
      Text = '1314'
    end
  end
end
