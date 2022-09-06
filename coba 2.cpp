#include<iostream>
#include <conio.h>
using namespace std;

void tampil();
void masuk();
int pil;
char per[3];
void pilih();
void prioritas();
void lanjut();
void nasabah();
void menabung();
void tarik();

int main(){
     do{
		system("cls");
         cout<<"1. Masukan Antrian"<<endl;
         cout<<"2. prioritas"<<endl;
         cout<<"3. Tampil"<<endl;
         cout<<"Pilihan Anda 	: ";
         cin>>pil;
         pilih();
     }
 while(pil!=3);
 }
 
 
 void pilih(){
     if(pil==1)
         masuk();
 //    else if(pil==2)
//         priorias();
//     else if(pil==5)
//         tampil();
     else
         cout<<"selesai";
 } 
 
void masuk(){
int n;
int *A;
char per[20];
cout<<"No antrian=";
cin>>n;
A = new int [n];
for (int i=1;i<n;i++) {
cout<<"no antrian = ";
cin>>A[i];
cout<<"keperluan\t: \n";
cout<<"\t A.nasabah baru\n";
cout<<"\t B.Menabung\n";
cout<<"\t C.Tarik tunai\n"<<"Pilih		: ";
cin>>per; 
}
}

void lanjut(){
	void masuk();
	int a,b,c;
     if(per=='a')
         nasabah();
     else if(per=='b')
         menabung();
     else if(per=='c')
         tarik();
     else
         cout<<"selesai";
 } 

void nasabah(){
	
}

void menabung(){
	
}
void tarik(){
	
}
