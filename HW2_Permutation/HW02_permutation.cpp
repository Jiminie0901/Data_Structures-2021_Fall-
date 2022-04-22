//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HW02_permutation.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

int k, n;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Edit1->Text = "Input n";
	Edit2->Text = "Input k";
	Edit3->Text = "Input n";
	Edit4->Text = "Input Texts";
	Edit5->Text = "Input k";
	Memo1->Text = "";
	Memo2->Text = "";
	Memo3->Text = "";
}
//---------------------------------------------------------------------------

void SWAP(char &a, char &b, char &tmp)
{   tmp = a;
	a = b;
	b = tmp;
}

void SWAP_w(wchar_t &a, wchar_t &b, wchar_t &tmp)
{   tmp = a;
	a = b;
	b = tmp;
}

int cnt_perm = 0;
void perm(char abc[], int n, int k)
{
	if(k == n - 1)
	{
		String str_tmp = abc;
		str_tmp = str_tmp.SubString(0,n);
		Form1->Memo1->Lines->Add(str_tmp + " [" + cnt_perm + "]");
		if(Form1->CheckBox1->Checked)
		{
			Form1->Memo2->Lines->Add("	->Now list = [" + str_tmp+"]");
			Form1->Memo2->Lines->Add("	(n, k) = ("+IntToStr(n)+", "+IntToStr(k)+"), k == n - 1  =>  print!");
			Form1->Memo2->Lines->Add(str_tmp + " [" + cnt_perm + "]");
		}
		cnt_perm++;
	}
	else
	{   char tmp;
		for(int i = k; i < n; i++)
		{
			String str_tmp = abc;
			str_tmp = str_tmp.SubString(0,n);

			SWAP(abc[i], abc[k], tmp);
			if(Form1->CheckBox1->Checked)
			{
				Form1->Memo2->Lines->Add("		->Now list = [" + str_tmp + "]");
				Form1->Memo2->Lines->Add("	i = " + IntToStr(i) + ", k = " + IntToStr(k)+ " // SWAP " + abc[i] + " and " +abc[k]);
			}

			perm(abc, n, k+1);

			str_tmp = abc;
			str_tmp = str_tmp.SubString(0,n);

			SWAP(abc[i], abc[k], tmp);
			if(Form1->CheckBox1->Checked)
			{
				Form1->Memo2->Lines->Add("		->Now list = [" + str_tmp + "]");
				Form1->Memo2->Lines->Add("	i = " + IntToStr(i) + ", k = " + IntToStr(k)+ " // SWAP " + abc[i] + " and " +abc[k]);
			}
		}
	}
}

int cnt_perm_str = 0;
void permStr(String in_string, int n, int k)
{   int i;
	wchar_t tmp;
	if (k == n)
	{
		String str_tmp = in_string;
		str_tmp = str_tmp.SubString(0,n);
		Form1->Memo1->Lines->Add(in_string+"  ["+IntToStr(cnt_perm_str)+"]");

		if(Form1->CheckBox1->Checked)
		{
			Form1->Memo2->Lines->Add("	->Now list = [" + str_tmp+"]");
			Form1->Memo2->Lines->Add("	(n, k) = ("+IntToStr(n)+", "+IntToStr(k)+"), k == n - 1  =>  print!");
			Form1->Memo2->Lines->Add(str_tmp + " [" + cnt_perm_str + "]");
		}
		cnt_perm_str++;
	}
	else
	{
		for (i=k; i<=n; i++)
		{
            String str_tmp = in_string;
			str_tmp = str_tmp.SubString(0,n);

			SWAP_w(in_string[i], in_string[k], tmp);
            if(Form1->CheckBox1->Checked)
			{
				Form1->Memo2->Lines->Add("		->Now list = [" + str_tmp + "]");
				Form1->Memo2->Lines->Add("	i = " + IntToStr(i) + ", k = " + IntToStr(k)+ " // SWAP " + in_string[i] + " and " +in_string[k]);
			}

			permStr(in_string, n, k+1);

            str_tmp = in_string;
			str_tmp = str_tmp.SubString(0,n);

			SWAP_w(in_string[i], in_string[k], tmp);
            if(Form1->CheckBox1->Checked)
			{
				Form1->Memo2->Lines->Add("		->Now list = [" + str_tmp + "]");
				Form1->Memo2->Lines->Add("	i = " + IntToStr(i) + ", k = " + IntToStr(k)+ " // SWAP " + in_string[i] + " and " + in_string[k]);
			}
		}
	}
}



int cnt_hanoi = 0;
void tower_of_hanoi(int disk, char from, char to, char aux)
{
	String str_from = from, str_to = to;
	if(disk == 1)
	{
		Form1->Memo3->Lines->Add("| Move disk 1 from " + str_from + " to " + str_to + " |");
		cnt_hanoi++;
		return;
	}
	else
	{
		tower_of_hanoi(disk - 1, from, aux, to);
		Form1->Memo3->Lines->Add("| Move disk 1 from " + str_from + " to " + str_to + " |");
		cnt_hanoi++;
		tower_of_hanoi(disk - 1, aux, to, from);
    }
}



//Permute Alphabets a-z
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	cnt_perm = 0;
	char abc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	n = StrToInt(Edit1->Text);
	k = StrToInt(Edit2->Text);
	if(Form1->CheckBox1->Checked)
	{
		Form1->Memo2->Lines->Add("Permutation of " + IntToStr(n) + " alphabets starting at the " + IntToStr(k+1) + "th letter." );
	}
	perm(abc, n, k);

}
//---------------------------------------------------------------------------
//Clear All
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Edit1->Text = "Input n";
	Edit2->Text = "Input k";
	Edit4->Text = "Input Texts";
    Edit5->Text = "Input k";
	Memo1->Text = "";
	Memo2->Text = "";
}
//---------------------------------------------------------------------------
//Permute Numbers
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	cnt_perm = 0;
	char nums[10] = {'0','1','2','3','4','5','6','7','8','9'};
	n = StrToInt(Edit1->Text);
	k = StrToInt(Edit2->Text);
	if(Form1->CheckBox1->Checked)
	{
		Form1->Memo2->Lines->Add("Permutation of " + IntToStr(n) + " numbers starting at the " + IntToStr(k+1) + "th number." );
	}
	perm(nums, n, k);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	cnt_hanoi = 0;
	int disk_n = StrToInt(Edit3->Text);
	Form1->Memo3->Lines->Add(" Tower of Hanoi with " + IntToStr(n) + " starts!");
	Form1->Memo3->Lines->Add("_____________________");
	tower_of_hanoi(disk_n, 'A', 'C', 'B');
	Form1->Memo3->Lines->Add("--------------------------------   Total steps ->  "+IntToStr(cnt_hanoi));
	Form1->Memo3->Lines->Add("");
    Form1->Memo3->Lines->Add("");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button5Click(TObject *Sender)
{
	String in_string;
	cnt_perm_str = 0;

	in_string = Edit4->Text;
	n = in_string.Length();
	k = StrToInt(Edit5->Text);

	if(Form1->CheckBox1->Checked)
	{
		Form1->Memo2->Lines->Add("Permutation of texts with length " + IntToStr(n) + " starting at the " + IntToStr(k+1) + "th character." );
	}
	permStr(in_string, n, k + 1);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
    Form1->Edit3->Text = "Input n";
}
//---------------------------------------------------------------------------

