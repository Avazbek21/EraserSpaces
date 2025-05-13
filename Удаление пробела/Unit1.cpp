//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1DblClick(TObject *Sender)
{
    String s=Memo1->Text;  Memo1->Clear();
    for(int i=1;i<s.Length()+1;i++) {
         if(s[i]!=' ')
             Memo1->Text=Memo1->Text+s[i];
    }
}
//---------------------------------------------------------------------------
