//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Primero.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{


	 Form4->Hide();
	 Form3->Show();
	 Form3->Edit_Apellidos2->Text=Edit_Apellidos1->Text;
	 Form3->Edit_Nombres2->Text=Edit_Nombres1->Text;
	 Form3->Edit_Telefono2->Text=Edit_Telefono1->Text;
	 Form3->Edit_Fecha2->Text=ComboBox_Dia->Text+"/"+ComboBox_Mes->Text+"/"+ComboBox_Año->Text;
	 Form3->Edit_Sexo2->Text=ComboBox_Sexo->Text;
	 Form3->Edit_Civil2->Text=ComboBox_Civil->Text;




}
//---------------------------------------------------------------------------
