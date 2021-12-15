object frmDisplay: TfrmDisplay
  Left = 467
  Top = 190
  BorderStyle = bsNone
  Caption = 'frmDisplay'
  ClientHeight = 550
  ClientWidth = 861
  Color = clBtnFace
  ParentFont = True
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Position = poMainFormCenter
  PrintScale = poNone
  Visible = True
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 13
  object shpOpponent: TShape
    Tag = 103
    Left = 340
    Top = 6
    Width = 199
    Height = 28
    Brush.Color = clRed
  end
  object shpBall: TShape
    Tag = 102
    Left = 411
    Top = 249
    Width = 61
    Height = 58
    Brush.Color = clMaroon
    Shape = stCircle
  end
  object shpUser: TShape
    Tag = 101
    Left = 340
    Top = 516
    Width = 199
    Height = 28
    Brush.Color = clLime
  end
  object tmCheckBound: TTimer
    Interval = 1
    OnTimer = tmCheckBoundTimer
    Left = 813
    Top = 12
  end
end
