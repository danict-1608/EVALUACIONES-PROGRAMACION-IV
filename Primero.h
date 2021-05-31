//---------------------------------------------------------------------------

#ifndef PrimeroH
#define PrimeroH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label2;
	TComboBox *ComboBox_Año;
	TComboBox *ComboBox_Mes;
	TComboBox *ComboBox_Dia;
	TLabel *Label6;
	TEdit *Edit_Telefono1;
	TComboBox *ComboBox_Civil;
	TLabel *Label5;
	TEdit *Edit_Nombres1;
	TEdit *Edit_Apellidos1;
	TButton *Button1;
	TLabel *Label4;
	TLabel *Label3;
	TLabel *Nombres;
	TLabel *Label1;
	TComboBox *ComboBox_Sexo;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
