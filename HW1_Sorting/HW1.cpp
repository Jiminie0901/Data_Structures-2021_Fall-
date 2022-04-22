//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "HW1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

int data_0[100000];
int data_1[100000];
int flag = 0;
int flag_ge = 0;
int n;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Edit1->Text = "Input number";
	Edit2->Text = "Input range";
	Edit3->Text = "Input target";
	Memo1->Text = "";
	Memo2->Text = "";
	Memo3->Text = "";
	Memo4->Text = "";
}


void SelectionSort(int data[], int n)
{   int i, j, tmp;
	int min;
	for(i = 0; i < n; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(data[min] > data[j]){
				min = j;
			}
		}
		if(i != min)
		{
            tmp = data[i];
			data[i] = data[min];
			data[min] = tmp;
		}

	}

}


void bubbleSort(int data[], int n){
	int tmp;
	for(int i = 0; i < n; i++){

		for(int j = 0; j < n - i - 1; j++){
			if(data[j] > data[j+1]){
				tmp = data[j];
				data[j] = data[j+1];
				data[j+1] = tmp;
				//Form1->Memo3->Lines->Add("SWAP " + IntToStr(data[j+1]) + " & " + IntToStr(data[j]) + " --> " + IntToStr(data[j]) + " & " + IntToStr(data[j+1]));
			}
        }
	}
}

int binarySearch(int data[], int left, int right, int x){
	int mid = (left + right + 1) / 2;
	if(data[mid] == x)
	{
        if(Form1->CheckBox1->Checked)
		{
			Form1->Memo4->Lines->Add("Mid Index = " + IntToStr(mid) + ", which is number " + IntToStr(data[mid]));
		}
        return mid;
	}
    if(right > left){
        //if mid is larger than the target, move to the left size
		if(data[mid] > x){
			if(Form1->CheckBox1->Checked)
			{
				Form1->Memo4->Lines->Add("Mid Index = " + IntToStr(mid) + ", which is number " + IntToStr(data[mid]));
			}
			return binarySearch(data, left, mid - 1, x);
		}
		else{
            if(Form1->CheckBox1->Checked)
			{
				Form1->Memo4->Lines->Add("Mid Index = " + IntToStr(mid) + ", which is number " + IntToStr(data[mid]));
			}
			return binarySearch(data, mid + 1, right, x);
        }
	}
    return -1;
}

void printData2(int data[], int n)
{
	for(int i = 0; i < n; i++)
	{
        Form1->Memo2->Lines->Add("data["+IntToStr(i)+"] = " + IntToStr(data[i]));
	}
}


void printData3(int data[], int n)
{
	for(int i = 0; i < n; i++)
	{
		Form1->Memo3->Lines->Add("data["+IntToStr(i)+"] = " + IntToStr(data[i]));
	}
}

void printData4(int data[], int n)
{
	for(int i = 0; i < n; i++)
	{
		Form1->Memo4->Lines->Add("data["+IntToStr(i)+"] = " + IntToStr(data[i]));
	}
}

bool selfCheck(int data[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(data[i] > data[i + 1])
		{
			return false;
		}
	}
	return true;
}


//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	n = StrToInt(Edit1->Text);
	int range = StrToInt(Edit2->Text);
	if(n > 100000)
	{
		ShowMessage("Your input n is too large. Try to input a smaller number.");
	}
	int i;
	int seed = time(NULL);
	srand(seed);
    flag = 0;
	for(i = 0; i < n; i++)
	{   flag_ge = 1;
		data_0[i] = rand() % range + 1;
		data_1[i] = data_0[i];
		if(CheckBox1->Checked)
		{
			Form1->Memo1->Lines->Add("data["+IntToStr(i)+"] = " + IntToStr(data_0[i]));
		}
	}
	Form1->Memo1->Lines->Add(IntToStr(n) + " random numbers with range " + IntToStr(range) + " have been generated.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	clock_t t_start, t_end;
	t_start = clock();
	SelectionSort(data_0, n);
	flag = 1;
	t_end = clock();
	Form1->Memo2->Lines->Add("CPU time (sec.) = " + FloatToStr((float)(t_end - t_start)/(CLOCKS_PER_SEC)));

	if(Form1->CheckBox1->Checked)
	{   int k;
		printData2(data_0, n);
	}
	if(Form1->CheckBox2->Checked)
	{
		if(selfCheck(data_0, n))
		{
			Form1->Memo2->Lines->Add("Correctly Sorted");
		}
		else
		{
			Form1->Memo2->Lines->Add("Incorrectly Sorted");
		}
	}

}

//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
    clock_t t_start, t_end;

	t_start = clock();
	bubbleSort(data_1, n);
	flag = 2;
	t_end = clock();
	Form1->Memo3->Lines->Add("CPU time (sec.) = " + FloatToStr((float)(t_end - t_start)/(CLOCKS_PER_SEC)));
	if(Form1->CheckBox1->Checked)
	{
		printData3(data_1, n);
	}



	if(Form1->CheckBox2->Checked)
	{
		if(selfCheck(data_1, n))
		{
			Form1->Memo3->Lines->Add("Correctly Sorted");
		}
		else
		{
			Form1->Memo3->Lines->Add("Incorrectly Sorted");
		}
	}

}
//---------------------------------------------------------------------------


//data should be sorted first!!!!!
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	int target = StrToInt(Edit3->Text);
	int index;
	clock_t t_start, t_end;

	t_start = clock();
	if(flag_ge == 0)
	{
		ShowMessage("The data has not been generated!");
        return;
	}
	if(flag == 0)
	{
		ShowMessage("The data has not been sorted yet! Click 'Selection Sort' or 'Bubble Sort' first.");
	}
	else if(flag == 1)
	{
		index = binarySearch(data_0, 0, n - 1, target);
	}
	else if(flag == 2)
	{
		index = binarySearch(data_1, 0, n - 1, target);
	}

	t_end = clock();
	Form1->Memo4->Lines->Add("CPU time (sec.) = " + FloatToStr((float)(t_end - t_start)/(CLOCKS_PER_SEC)));
	if(index >= 0){
		if(flag == 1)
		{
			Form1->Memo4->Lines->Add("Your target " + IntToStr(data_0[index]) + " is at " + IntToStr(index));
		}
		else if(flag == 2)
		{
			Form1->Memo4->Lines->Add("Your target " + IntToStr(data_1[index]) + " is at " + IntToStr(index));
		}
	}
	else
	{
        Form1->Memo4->Lines->Add("Your target is not in the data!");
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Form1->CheckBox1->Checked = 0;
    Form1->CheckBox2->Checked = 0;
	Edit1->Text = "Input number";
	Edit2->Text = "Input range";
	Edit3->Text = "Input target";
	Form1->Memo1->Text = "";
	Form1->Memo2->Text = "";
	Form1->Memo3->Text = "";
	Form1->Memo4->Text = "";
	flag = 0;
	//clear all data
	for(int i = 0; i < 100000; i++)
	{
		data_1[i] = 0;
		data_0[i] = 0;
	}
}
//---------------------------------------------------------------------------

