#include <iostream>  
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;

int pil;
int pil1;
void pilih2();
void pilih();
void bawa_stnk();
void masuk();
//void tambah_tengah();
//void tambah_belakang();
//void hapus_belakang();
//void hapus_depan();
void tambahstnk();
void update();
void tidak_bawastnk();
void buat_baru();
void tampil();
void tampil2();

struct node{
    char no [20];
    string nopol ;
    char tanggal [50];
    char wmasuk [10];
    char wkeluar [10];
    char lama [10];
    char nim [20];
    char yn;
    int antri, plat;
    char kecamatan[3], kota [3];
    string prodi;
    string nopol2;
    char no2 [20];
    
    
   
    node *start_ptr=NULL;
//    node *current = start_ptr;
    node *prev, *next;
    node *prev2, *next2;
};
node *baru, *head=NULL, *tail=NULL,*hapus,*bantu, *bantu2, *bantu3, *edit, *tail2=NULL, *baru2, *head2=NULL;
int main(){
//	cout<<"Bawa STNK : ";cin>>baru->yn;
//    if (baru->yn=='Y' || baru->yn=='y'){
//    	goto bawa_stnk();
//	}
//	else if(baru->yn=='N' || baru->yn=='n'){
//		goto tidak_bawastnk();
//	}
//	else{
//		return 0;
//	}
	
     do{
//     	home:
		int masuk;
        system("cls");
        cout<<"=================================================\n";
        cout<<"||			MENU			||"<<endl;
        cout<<"=================================================\n";
        cout<<"1. Masuk Parkiran"<<endl;cin>>masuk;
        if(masuk==1){
		
        do{
    	baru = new (node);
    	system("cls");
		cout<<"Bawa STNK ? : "<<endl<< " 1. YA "<<endl<<" 2. TIDAK "<<endl<< " 3. Balik ke M E N U "<<endl;
    	cout<<"pilih : "; cin>>pil1;
    	pilih2();
    	}while(pil1!=4);
    }
//        cout<<"2. Tambah Tengah"<<endl;
//        cout<<"3. Tambah Belakang"<<endl;
//        cout<<"4. Hapus Depan"<<endl;
//        cout<<"5. Hapus Belakang"<<endl;
//        cout<<"2. Update"<<endl;
//        cout<<"3. Tidak bawa STNK"<<endl;
		else if(masuk!=1){
		
        cout<<"2. Tampil Kendaraan Yang membawa STNK"<<endl;
        cout<<"3. Tampil Kendaraan Yang tidak membawa STNK"<<endl;
        cout<<"4. Selesai"<<endl;
        cout<<"=================================================\n"<<endl;
        cout<<"Pilihan Anda : ";
        cin>>pil;
        pilih();
     }
	 } while(pil!=6);
     
    }
void pilih(){
//    if(pil==1)
//        buat_baru();
//    else if(pil==2)
//        tambah_tengah();
//    else if(pil==3)
//        tambah_belakang();
//    else if(pil==4)
//        hapus_depan();
//    else if(pil==5)
//        hapus_belakang();
//    else if(pil==2)
//        update();
//	else if(pil==3)
//    	tambahstnk();
    if(pil==2)
    	tampil();
    else if(pil==3)
    	tampil2();
    else
        cout<<"selesai";
}

//void buat_baru(){
//    do{
//    baru = new (node);
//    system("cls");
//	cout<<"Bawa STNK ? : "<<endl<< " 1. YA "<<endl<<" 2. TIDAK "<<endl<< " 3. Balik ke M E N U "<<endl;
//    cout<<"pilih : "; cin>>pil1;
//    pilih2();
//    }while(pil1!=4);
////    cout<<"Antrian : ";cin>>baru->antri;
////    cout<<"Plat Nomor : ";cin>>baru->kota>>baru->plat>>baru->kecamatan;
////    cout<<"input tinggi : ";cin>>baru->tinggi;
////    baru->prev=NULL;
////    baru->next=NULL;
//}
void pilih2(){
	
	if(pil1==1)
		bawa_stnk();
	else if(pil1==2)
		tambahstnk();
	else
		cout<<"Hanya Lewat Mas";
//		goto home;
}
//void tambah_belakang(){
//    buat_baru();
//   
//        if(head==NULL)
//        {
//            head=baru;
//            tail=baru;
//        }
//        else
//        {
//            tail->next=baru;
//            baru->prev=tail;
//            tail=baru;
//        }
//    cout<<endl<<endl;
//   
//    tampil();
//}

//void update(){
//	
//}
void tambahstnk(){
 tidak_bawastnk();
   
        if(head2==NULL)
        {
            head2=baru2;
            tail2=baru2;
        }
        else
        {
            tail2->next2=baru2;
            baru2->prev2=tail2;
            tail2=baru2;
        }
    cout<<endl<<endl;
}
//void masuk(){
//    buat_baru();
//    if(head==NULL){
//        head=baru;
//        tail=baru;
//    }
//    else
//    {
//        baru->next=head;
//        head->prev=baru;
//        head=baru;
//    }
//    cout<<endl<<endl;
////    tampil();
//}
void hapus_depan(){
    if (head==NULL)
    cout<<"Kosong";
    else if (head->next==NULL){
        hapus=head;
        head=NULL;
        tail=NULL;
        delete hapus;
    }
    else{
    hapus=head;
    head=hapus->next;
    head->prev=NULL;
    delete hapus;
    }
    cout<<endl<<endl;
    tampil();
}

//void hapus_belakang(){
//    if (head==NULL)
//    cout<<"Kosong";
//    else if (head->next==NULL){
//        hapus=head;
//        head=NULL;
//        tail=NULL;
//        delete hapus;
//    }
//    else{
//        hapus=tail;
//        tail=hapus->prev;
//        tail->next=NULL;
//        delete hapus;
//    }
//    cout<<endl<<endl;
//    tampil();
//}
void bawa_stnk(){
    baru = new (node);
    cout<<"=================================================\n";
	cout<<"input no antrian : ";cin>>baru->no;
    cout<<"input nopol : ";cin>>baru->nopol;
    cout<<"input tanggal : ";cin>>baru->tanggal;
    cout<<"input waktu masuk : ";cin>>baru->wmasuk;
    cout<<"input waktu keluar : ";cin>>baru->wkeluar;
    cout<<"input lama : ";cin>>baru->lama;
    cout<<"=================================================\n";
    baru->prev=NULL;
    baru->next=NULL;
}
void tampil(){
	ofstream  tampil;
	tampil.open ("TampilanTP.txt");
	
    if (head==NULL)
        cout<<"Kosong";
    else{
        bantu=head;
        	cout<<"==========================================================================================================================\n";
        	cout<<"||"<<setw(15)<<"MASUK DAN KELUAR PARKIRAN	"<<setw(10)<<"||"<<endl;
        	cout<<"==========================================================================================================================\n";
        	cout<<"||	No Antrian	||	Nomor Kendaraan	||	Tanggal	||	Waktu Masuk	||	Waktu Keluar	||	Lama	||"<<endl;
        	cout<<"==========================================================================================================================\n";
        	cout<<endl;
        while(bantu!=NULL){
            cout<<"||  "<<setw(10)<<bantu->no<<setw(10)<<"||"<<setw(10)<<bantu->nopol<<setw(10)<<"||"<<setw(10)<<bantu->tanggal<<setw(10)<<"||"<<setw(10)<<bantu->wmasuk<<setw(10)<<"||"<<setw(10)<<bantu->wkeluar<<setw(10)<<"||"<<setw(10)<<bantu->lama <<setw(10)<<"||"<<endl;

            tampil<<"=======================================================================================================================\n";
        	tampil<<"||"<<setw(15)<<"MASUK DAN KELUAR PARKIRAN	"<<setw(10)<<"||"<<endl;
        	tampil<<"=======================================================================================================================\n";
			tampil<<"||"<<setw(10)<<bantu->no<<setw(10)<<"||"<<setw(10)<<bantu->nopol<<setw(10)<<"||"<<setw(10)<<bantu->tanggal<<setw(10)<<"||"<<setw(10)<<bantu->wmasuk<<setw(10)<<"||"<<setw(10)<<bantu->wkeluar<<setw(10)<<"||"<<setw(10)<<bantu->lama;
            
            bantu=bantu->next;
            tampil<<"=======================================================================================================================\n";            
        }
    }
    tampil.close();
    getch();
}

void tidak_bawastnk(){
    baru2 = new (node);
    cout<<"=================================================\n";
    cout<<"input No antrian : ";cin>>baru2->no2;
    cout<<"input NIM : ";cin>>baru2->nim;
    cout<<"input Prodi : ";cin>>baru2->prodi;
    cout<<"input Nopol : ";cin>>baru2->nopol2;
    cout<<"=================================================\n";
    baru2->prev2=NULL;
    baru2->next2=NULL;
}

void tampil2(){
	ofstream  tampil2;
	tampil2.open ("TampilanTPtdk.txt");
    if (head2==NULL)
        cout<<"Kosong";
    else{
        bantu3=head2;
        	cout<<"==========================================================================================================================\n";
        	cout<<"||"<<setw(15)<<"MASUK DAN KELUAR PARKIRAN YANG TIDAK MEMBAWA STNK "<<setw(10)<<"||"<<endl;
        	cout<<"==========================================================================================================================\n";
        	cout<<"||	No Antrian	||	NIM	||	Prodi	||	Nomor Kendaraan	||"<<endl;
        	cout<<"==========================================================================================================================\n";
        	cout<<endl;
        while(bantu3!=NULL){
            cout<<"||  "<<setw(10)<<bantu3->no2<<setw(10)<<"||"<<setw(10)<<bantu3->nim<<setw(10)<<"||"<<setw(10)<<bantu3->prodi<<setw(10)<<"||"<<setw(10)<<bantu3->nopol2<<setw(10)<<"||"<<endl;

            tampil2<<"=======================================================================================================================\n";
        	tampil2<<"||"<<setw(15)<<"MASUK DAN KELUAR PARKIRAN YANG TIDAK MEMBAWA STNK	"<<setw(10)<<"||";
        	tampil2<<"=======================================================================================================================\n";
			tampil2<<"||  "<<setw(10)<<bantu3->no2<<setw(10)<<"||"<<setw(10)<<bantu3->nim<<setw(10)<<"||"<<setw(10)<<bantu3->prodi<<setw(10)<<"||"<<setw(10)<<bantu3->nopol2<<setw(10)<<"||"<<endl;
            
            bantu3=bantu3->next2;
            tampil2<<"=======================================================================================================================\n";
            
        }
    }
    tampil2.close();
    getch();
}

void tambah_tengah(){
 int posisi_sisip;
 if(head!=NULL){
     cout<<"akan disisipkan diposisi data ke- : ";cin>>posisi_sisip;
	baru=new node;
	baru->next=NULL;
	baru->prev=NULL;
	bantu=head;
 for(int i=1;i<posisi_sisip-1;i++){
	bantu=bantu->next;}
//    buat_baru();
    bantu2= bantu->next;
    baru->next=bantu2;
	bantu2->prev=baru;
    bantu->next=baru;
    baru->prev=bantu;
   }
   else{
       cout<<"belum ada data"<<endl;
   }
   cout<<endl;
   tampil();
   getch();
}
