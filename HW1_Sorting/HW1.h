//---------------------------------------------------------------------------

#ifndef HW1H
#define HW1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *Edit1;
	TButton *Button1;
	TMemo *Memo1;
	TLabel *Label2;
	TEdit *Edit2;
	TButton *Button2;
	TCheckBox *CheckBox1;
	TMemo *Memo2;
	TCheckBox *CheckBox2;
	TButton *Button3;
	TMemo *Memo3;
	TMemo *Memo4;
	TButton *Button4;
	TEdit *Edit3;
	TLabel *Label3;
	TButton *Button5;
	TStatusBar *StatusBar1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
