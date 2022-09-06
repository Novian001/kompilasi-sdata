#include "iostream"
#include "fstream"
using namespace std;
struct mahasiswa{
	string nim;
	string nama;
};
struct Presensi{
	mahasiswa mhs;
	bool kehadiran[14];
};
void tambahData(char namaFlie[], mahasiswa mhs){
	ofstream file("presensi.txt", ios::app);
	
	if(file.is_open()){
		file<<mhs.nim<< '#' <<mhs.nama;
		file.close();
	}else{
		cout<<"File gagal di buka"<<endl;
	}
}
int main(){
	char namaFile[] = "presensi.txt";
	mahasiswa mhs;
	Presensi presensi;
	int pilihan;
	
	cout<<"MENU"<<endl;
	cout<<"1. Tambah Data Mahasiswa "<< endl;
	cout<<"2. Lihat presensi "<<endl;
	cout<<"3. Cek presesensi "<<endl;
	cout<<"Pilihan : "; cin>>pilihan;
	if(pilihan==1){
		cout<<"TAMBAH DATA MAHASISWA"<<endl;
		
		cout<<"NIM Mahasiswa : "; cin>>mhs.nim;cin.ignore();
		cout<<"Nama Mahasiswa : "; getline(cin, mhs.nama);
		tambahData(namaFile, mhs);
	}
	//baca data MHS
//	cout<<"NIM Mahasiswa : "; cin>>mhs.nim;cin.ignore();
//	cout<<"Nama Mahasiswa : "; getline(cin, mhs.nama);
//	
	//menampilkan data mahasiswa
	cout<<"NIM : "<<mhs.nim<<endl;
	cout<<"Nama : "<<mhs.nama<<endl;
}
