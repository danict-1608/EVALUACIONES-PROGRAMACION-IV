object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 286
  ClientWidth = 514
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 90
    Top = 8
    Width = 271
    Height = 25
    Caption = 'Registro de Datos Personales'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 24
    Top = 112
    Width = 152
    Height = 19
    Caption = 'Fecha de Nacimiento:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 247
    Top = 149
    Width = 36
    Height = 19
    Caption = 'Civil:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 24
    Top = 179
    Width = 122
    Height = 19
    Caption = 'Telefono Celular:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 26
    Top = 147
    Width = 40
    Height = 19
    Caption = 'Sexo:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Nombres: TLabel
    Left = 26
    Top = 73
    Width = 70
    Height = 19
    Caption = 'Nombres:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 25
    Top = 48
    Width = 71
    Height = 19
    Caption = 'Apellidos:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ComboBox_Año: TComboBox
    Left = 331
    Top = 114
    Width = 53
    Height = 21
    TabOrder = 0
    Text = 'A'#241'o'
    Items.Strings = (
      '1970'
      '1971'
      '1972'
      '1973'
      '1974'
      '1975'
      '1976'
      '1977'
      '1978'
      '1979'
      '1980'
      '1981'
      '1982'
      '1983'
      '1984'
      '1985'
      '1986'
      '1987'
      '1988'
      '1989'
      '1990'
      '1991'
      '1992'
      '1993'
      '1994'
      '1995'
      '1996'
      '1997'
      '1998'
      '1999'
      '2000'
      '2001'
      '2002'
      '2003'
      '2004'
      '2005'
      '2006'
      '2007'
      '2008'
      '2009'
      '2010'
      '2011'
      '2012'
      '2013'
      '2014'
      '2015'
      '2016'
      '2017'
      '2018'
      '2019'
      '2020'
      '2021')
  end
  object ComboBox_Mes: TComboBox
    Left = 247
    Top = 114
    Width = 78
    Height = 21
    TabOrder = 1
    Text = 'Mes'
    Items.Strings = (
      'Enero'
      'Febrero'
      'Marzo'
      'Abril'
      'Mayo'
      'Junio'
      'Julio'
      'Agosto'
      'Septiembre'
      'Octubre'
      'Noviembre'
      'Diciembre')
  end
  object ComboBox_Dia: TComboBox
    Left = 182
    Top = 114
    Width = 59
    Height = 21
    TabOrder = 2
    Text = 'Dia'
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5'
      '6'
      '7'
      '8'
      '9'
      '10'
      '11'
      '12'
      '13'
      '14'
      '15'
      '16'
      '17'
      '18'
      '19'
      '20'
      '21'
      '22'
      '23'
      '24'
      '25'
      '26'
      '27'
      '28'
      '29'
      '30'
      '31')
  end
  object Edit_Telefono1: TEdit
    Left = 152
    Top = 179
    Width = 131
    Height = 23
    TabOrder = 3
    Text = '[.......][..................]'
  end
  object ComboBox_Civil: TComboBox
    Left = 289
    Top = 149
    Width = 145
    Height = 21
    TabOrder = 4
    Text = 'Selecionar'
    Items.Strings = (
      'Soltero/a'
      'Casado/a'
      'Divorciado/a')
  end
  object Edit_Nombres1: TEdit
    Left = 111
    Top = 77
    Width = 250
    Height = 21
    TabOrder = 5
  end
  object Edit_Apellidos1: TEdit
    Left = 111
    Top = 50
    Width = 250
    Height = 21
    TabOrder = 6
  end
  object Button1: TButton
    Left = 111
    Top = 232
    Width = 271
    Height = 40
    Caption = 'Mostrar los datos en otro Formulario'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = Button1Click
  end
  object ComboBox_Sexo: TComboBox
    Left = 72
    Top = 149
    Width = 145
    Height = 21
    TabOrder = 8
    Text = 'Selecionar'
    Items.Strings = (
      'Masculino'
      'Femenino')
  end
end
