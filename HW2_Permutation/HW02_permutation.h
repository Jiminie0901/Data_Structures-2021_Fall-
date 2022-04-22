//---------------------------------------------------------------------------

#ifndef HW02_permutationH
#define HW02_permutationH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TSplitter *Splitter1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TEdit *Edit1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button1;
	TCheckBox *CheckBox1;
	TButton *Button2;
	TMemo *Memo1;
	TMemo *Memo2;
	TButton *Button3;
	TLabel *Label5;
	TLabel *Label6;
	TTabSheet *TabSheet4;
	TTabSheet *TabSheet5;
	TPanel *Panel2;
	TLabel *Label7;
	TLabel *Label8;
	TEdit *Edit3;
	TButton *Button4;
	TMemo *Memo3;
	TPageControl *PageControl2;
	TLabel *Label9;
	TEdit *Edit4;
	TLabel *Label10;
	TButton *Button5;
	TLabel *Label11;
	TEdit *Edit5;
	TButton *Button6;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
