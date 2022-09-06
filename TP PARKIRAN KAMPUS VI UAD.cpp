#include <iostream>  
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;
//mendeskripsikan varible yg akan di gunakan
int pil;
//mendeklarasikan void yg akan di pakai nanti
void pilih();
void buat_baru();
void motor_masuk();
void motor_keluar();
void bawa_stnk();
void tidak_bawastnk();
void tampil();
void tampil2();
//sebuah struct yg berisikan type data yg nantinya akan di pakai di fungsi
struct node{
    char no [20]; //no itu dedeklarasikan sebagai array dengan jumlah data 20
    string nopol ; // di deklarasikan sebagai string atau sebagai tipe kalimat
    char tanggal [50];
    char wmasuk [10];
    char wkeluar [10];
    char lama [10];
    char nim [20];
    char prodi [30];
    string nopol2;
    char no2 [20];
    
    
   
    node *start_ptr=NULL;
    node *prev, *next;
    node *prev2, *next2;
};
node *baru, *head=NULL, *tail=NULL,*hapus,*bantu, *bantu2, *bantu3, *edit, *tail2=NULL, *baru2, *head2=NULL;
int main(){ //fungsi atau bagian kepala dari program / bagian halaman utama
     do{ //menggunakan perulangan do while
        system("cls"); // berfungsi untuk menghapus tampilan atas yg sudah tercetak di atas atau di bagian jendela program / compile
        cout<<"=================================================\n";
        cout<<"||			MENU			||"<<endl;
        cout<<"=================================================\n"; // fungsi \n itu sebagai pengatur space di tampilan program nanti

        cout<<"1. Motor Masuk parkiran"<<endl;
        cout<<"2. Motor keluar parkiran"<<endl;

        cout<<"3. Pengendara Tidak membawa STNK"<<endl;
        cout<<"4. Tampil Kendaraan Yang membawa STNK"<<endl;
        cout<<"5. Tampil Kendaraan Yang tidak membawa STNK"<<endl;
        cout<<"6. Selesai"<<endl;
        cout<<"=================================================\n"<<endl;
        cout<<"Pilihan Anda : ";
        cin>>pil;
        pilih(); // jika user sudah memasukkan data maka data akan di alih / user akan di alih kan ke fungsi lain contoh bila user masukkan angka 1 dia akan di alih kan ke motor_masuk()
     } while(pil!=6); // di bagian while user di batasi dengan nilai input tidak sama dengan 6 maksudnya user hanya boleh input data 1 - 6 jika lebih dari itu user akan di minta untuk mengulangi inputannya
    }
void pilih(){ // jika user sudah memasukkan nilai inputnya maka fungsi pilih ini akan bekerja mengarahkan user ke tampilan selanjutnya
     if(pil==1)
        motor_masuk();
    else if(pil==2)
        motor_keluar();
	else if(pil==3)
    	bawa_stnk();
    else if(pil==4)
    	tampil();
    else if(pil==5)
    	tampil2();
    else
        cout<<"selesai";
}
void buat_baru(){ // fungsi ini berfungsi untuk menambahkan data kendaraan yg masuk ke parkiran
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
void motor_masuk(){//fungsi ini berguna untuk menjalankan / isi dari fungsi buat_baru() sistem kerjanya
    buat_baru();
   
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
   
    tampil(); //jika sudah selesai program akan mengarahkan / menampilkan ke fungsi tampil()
    
}
void bawa_stnk(){//fungsi ini di peruntukan untuk pengguna parkir yg tidak membawa stnk
 tidak_bawastnk();//sama kaya di atasnya
   
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
    
   tampil2();

}

void motor_keluar(){//fungsi untuk menghapus data yg sudah ada/ mengeluarkan kendaraan yg memang sudah memenuhi waktunya
    if (head==NULL) // data awal atau head itu sama dengan NULL / kosong maka akan keluat "kosong"
    cout<<"Kosong";
    else if (head->next==NULL){ // jika data ada maka head->next==NULL artinya data awal geser sampai ke null
        hapus=head; // hapus = head/ head / data awal tadi itu akan di hapus dengan sistem pencarian sesusai dgn fungsi
        head=NULL;
        tail=NULL;
        delete hapus; //delete itu merupakan perintah untuk node hapus
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



void tampil(){
	ofstream  tampil; // untuk menulis data tampil
	tampil.open ("TampilanTP.txt"); // untuk menaruh dara tampil ke file .txt
	
    if (head==NULL)
        cout<<"Kosong";
    else
    {
        bantu=head;
        	cout<<"=================================================================================================================================\n";
        	cout<<"||"<<setw(70)<<" MASUK DAN KELUAR PARKIRAN YANG MEMBAWA STNK "<<setw(55)<<"||"<<endl;
        	cout<<"=================================================================================================================================\n";
        	cout<<"||	No Antrian	||	Nomor Kendaraan	||	Tanggal	||	Waktu Masuk	||	Waktu Keluar	||	Lama     ||"<<endl;
        	cout<<"=================================================================================================================================\n";
        	cout<<endl;
        
        while(bantu!=NULL)
        {
        
            cout<<"||  "<<setw(10)<<bantu->no<<setw(10)<<"||"<<setw(10)<<bantu->nopol<<setw(10)<<"||"<<setw(10)<<bantu->tanggal<<setw(10)<<"||"<<setw(10)<<bantu->wmasuk<<setw(10)<<"||"<<setw(10)<<bantu->wkeluar<<setw(10)<<"||"<<setw(10)<<bantu->lama <<setw(15)<<"||"<<endl;
            cout<<"==================================================================================================================================\n";
            
            tampil<<"=======================================================================================================================\n";
            tampil<<"||"<<setw(25)<<" MASUK DAN KELUAR PARKIRAN YANG MEMBAWA STNK "<<setw(30)<<"||"<<endl;
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
    else
    {
        bantu3=head2;
        	cout<<"==========================================================================================\n";
        	cout<<"||"<<setw(65)<<"MASUK DAN KELUAR PARKIRAN YANG TIDAK MEMBAWA STNK "<<setw(25)<<"||"<<endl;
        	cout<<"==========================================================================================\n";
        	cout<<"||	No Antrian	||	NIM	||	Prodi	||	Nomor Kendaraan	"<<setw(10)<<"||"<<endl;
        	cout<<"==========================================================================================\n"<<endl;
        
        while(bantu3!=NULL)
        {
        
        
            cout<<"||  "<<setw(10)<<bantu3->no2<<setw(10)<<"||"<<setw(10)<<bantu3->nim<<setw(10)<<"||"<<setw(10)<<bantu3->prodi<<setw(10)<<"||"<<setw(10)<<bantu3->nopol2<<setw(10)<<"||"<<endl;
            cout<<"==========================================================================================\n";
            
            
            tampil2<<"=======================================================================================================================\n";
        	tampil2<<"||"<<setw(15)<<"MASUK DAN KELUAR PARKIRAN YANG TIDAK MEMBAWA STNK	"<<setw(10)<<"||"<<endl;
        	tampil2<<"=======================================================================================================================\n";
			tampil2<<"||  "<<setw(10)<<bantu3->no2<<setw(10)<<"||"<<setw(10)<<bantu3->nim<<setw(10)<<"||"<<setw(10)<<bantu3->prodi<<setw(15)<<"||"<<setw(10)<<bantu3->nopol2<<setw(10)<<"||"<<endl;
            
            bantu3=bantu3->next2;
            tampil2<<"=======================================================================================================================\n";
            
        }
    }
    tampil2.close();
    getch();
}


