#include <iostream> 
#include <conio.h>
#include <iomanip> 
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
using namespace std;

int pil; void pilih(); 
void buat_baru(); 
void buat_baru2();
void nabung(); 
void nasabah(); 
//void hapus_belakang(); 
void tarik(); 
void tampil(); 

struct node {
     string noant,waktu;
     char data[20];
     char prio[20];
     char jenis[20];
     char ket[20];
     int lama;
     char menit[20];
     char keluar[10];
     node *prev, *next;
}; 

node *baru, *head=NULL, *tail=NULL,*hapus,*bantu; 

int main(){
     do{
		system("cls");
		 cout<<"\n\t\t ====================================";
         cout<<"\n\t\t ||  PROGRAM ANTRIAN BANK BRI  ||";
         cout<<"\n\t\t ===================================="<<endl<<endl;
         cout<<"1. Nasabah Baru"<<endl;
         cout<<"2. Nabung"<<endl;
         cout<<"3. Narik"<<endl;
//         cout<<"4. Hapus Belakang"<<endl;
         cout<<"4. Tampilkan"<<endl;
         cout<<"5. Selesai"<<endl;
         cout<<"Pilihan Anda 	: ";
         cin>>pil;
         pilih();
     }
 while(pil!=6);
 } 

void pilih(){
     if(pil==1)
         nasabah();
     else if(pil==2)
         nabung();
     else if(pil==3)
         tarik();
     else if(pil==4)
         tampil();
     else
         cout<<"selesai";
 } 

void buat_baru(){   
     baru = new(node);
     cout<<"no antrian      : ";cin>>baru->noant;
     cout<<"Data		: ";cin>>baru->data;
//     cout<<"jenis antrian\t: \n";
//     cout<<"\t A.Teller\n";
//     cout<<"\t B.Customer Service\n"<<"Pilih		: ";
//     cin>>baru->jenis;
     cout <<"Waktu Masuk 	: ";cin>>baru->waktu;
     cout<<"lama antrian	: ";cin>>baru->lama;
     cout<<"keterangan   	: ";cin>>baru->ket;
     cout<<"Waktu keluar	: ";cin>>baru->keluar;
	 baru->prev=NULL;
     baru->next=NULL; 
}


void buat_baru2(){   
     baru = new(node);
     cout<<"no antrian      : ";cin>>baru->noant;
     cout<<"Data		: ";cin>>baru->data;
//     cout<<"jenis antrian\t: \n";
//     cout<<"\t A.Teller\n";
//     cout<<"\t B.Customer Service\n"<<"Pilih		: ";
//     cin>>baru->jenis;
//     cout <<"Waktu Masuk 	: ";cin>>baru->waktu;
//     cout<<"lama antrian	: ";cin>>baru->lama;
//     cout<<"keterangan   	: ";cin>>baru->ket;
//     cout<<"Waktu keluar	: ";cin>>baru->keluar;
//     cout<<"Prioritas       : \n";
//     cout<<"\t A.Ibu Hamil\n";
//     cout<<"\t B.Orang Tua(Lansia)\n";
//     cout<<"\t C.Membawa Bayi \n"<<"Pilih		: ";
//     cin>>baru->prio;     
     baru->prev=NULL;
     baru->next=NULL; 
}  

void jumlah(){
	cout<<"masukkan jumlah yg akan di tabung" <<endl;
	
}
void nabung(){
     jumlah();
     if(head==NULL)
      {
         head=baru;
         tail=baru;
      }
     else
     {
         tail->next=baru;
         baru->prev=tail;
         tail=baru;
     }
     cout<<endl<<endl;
     tampil();
} 

void nasabah()
 {
     buat_baru2();
     if(head==NULL)
     {
         head=baru;
         tail=baru;
     }
     else
     {
         baru->next=head;
         head->prev=baru;
         head=baru;
     }
     cout<<endl<<endl;
     tampil();
 } 

void tarik()
 {
     if (head==NULL)
         cout<<"Kosong";
     else if (head->next==NULL)
     {
       hapus=head;
       head=NULL;
       tail=NULL;
       delete hapus;
     }
     else
     {
         hapus=head;
         head=hapus->next;
         head->prev=NULL;
         delete hapus;
     }
     cout<<endl<<endl;
     tampil();
 } 

//void hapus_belakang()
// {
//     if (head==NULL)
//         cout<<"Kosong";
//     else if (head->next==NULL)
//     {
//       hapus=head;
//       head=NULL;
//       tail=NULL;
//       delete hapus;
//     }
//     else
//     {
//      hapus=tail;
//      tail=hapus->prev;
//      tail->next=NULL;
//      delete hapus; 
//     }
//     cout<<endl<<endl;
//     tampil();
//} 

void tampil()
 {
      if (head==NULL)
           cout<<"Kosong";
      else
      {		ofstream  tam;
			tam.open ("TampilanTP.txt",ios::app);
			cout << "============================================================================================================================================================="<<endl;
			cout <<setw(50)<<"DATA NASABAH"<<setw(50)<<endl;
			cout << "============================================================================================================================================================="<<endl;
			cout <<"NO Antian"<<"||"<<setw(10)<<"Data"<<setw(10)<<"||"<<endl;
			cout << "============================================================================================================================================================="<<endl;
         	tam << "============================================================================================================================================================="<<endl;
			tam <<setw(80)<<"DATA NASABAH"<<setw(80)<<endl;
			tam << "============================================================================================================================================================="<<endl;
			tam <<setw(10)<<"NO Antian"<<"||"<<setw(10)<<"Tanggal"<<setw(10)<<"||"<<setw(10)<<"Waktu Masuk"<<setw(10)<<"||"<<setw(10)<<"Jenis Antrian"<<setw(5)<<"||"<<setw(10)<<"Lama Antrian"<<setw(10)<<"||"<<setw(10)<<"Keterangan"<<setw(10)<<"||"<<setw(10)<<"Waktu Keluar"<<setw(10)<<"||"<<setw(10)<<"Prioritas"<<setw(10)<<"||"<<endl;
			tam << "============================================================================================================================================================="<<endl;
			
		  bantu=head;
          while(bantu!=NULL)
          {
             cout <<setw(10)<<bantu->noant<<"||"<<setw(10)<<bantu->data<<setw(10)<<"||"<<bantu->jenis<<setw(10)<<"||"<<setw(10)<<" ||"<<endl;
		//	  tam <<setw(10)<<bantu->noant<<"||"<<setw(10)<<bantu->tgl<<setw(10)<<"||"<<setw(10)<<bantu->waktu<<setw(10)<<" ||"<<setw(10)<<bantu->jenis<<setw(10)<<"||"<<setw(10)<<bantu->lama<<setw(10)<<"menit"<<"||"<<setw(10)<<bantu->ket<<setw(10)<<"||"<<setw(10)<<bantu->keluar<<setw(10)<<"||"<<setw(10)<<bantu->prio<<setw(10)<<" ||"<<endl;
    
    //         bantu=bantu->next;
            // cout<<endl<<endl;
            
	     bantu=bantu->next;
            tam.close();
          }
      }
      getch();
}
