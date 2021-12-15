object frmControl: TfrmControl
  Left = 443
  Top = 275
  Width = 240
  Height = 224
  Caption = 'frmControl'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Position = poDefault
  Visible = True
  WindowState = wsMinimized
  PixelsPerInch = 96
  TextHeight = 13
  object ApplicationEvents1: TApplicationEvents
    OnMessage = ApplicationEvents1Message
    OnShortCut = ApplicationEvents1ShortCut
    Left = 186
    Top = 9
  end
  object tmMainProcess: TTimer
    Interval = 1
    OnTimer = tmMainProcessTimer
    Left = 153
    Top = 9
  end
end
