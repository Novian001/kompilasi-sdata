#include "iostream"
#include "math.h"
using namespace std;

class penyewaan{
	public:
		void tanggalsewa();//--//
		void harisewa();
		void totalsewa(){
		}
		void klarifikasisewa(){ //masukkin nomor tanda penyewa
		}
	
	private:
		 int tanggal,bulan,tahun;
		 float total2;
}sew;


void penyewaan::tanggalsewa(){
	system("CLS");
	cout<<"Masukkan bulan sewa(1-12): "; cin>>bulan;
	
	if(bulan==1 || bulan==3 || bulan==5 || bulan==7 || bulan==8 || bulan==10 || bulan==12){
		cout<<"Masukkan tanggal sewa (1-31): "; cin>>tanggal;
		if(tanggal<1 || tanggal>31){
			cout<<"Input tidak terdefinisi.";
			sew.tanggalsewa();
		}
//		bulanhar=
	}
	else if(bulan=2){
		if(tahun%4==0 && tahun%100!=0 && tahun%400!=0){
//			setahun=366;
			if(tanggal>29){
				cout<<"Input salah! Tidak ada tanggal tersebut pada tahun ini.";
				sew.tanggalsewa();
			}	 
		}
		else{
//			setahun=365;
			if(tanggal>28){
				cout<<"Input salah! Tidak ada tanggal tersebut pada tahun ini.";
				sew.tanggalsewa();
			}
		}
	}
		
	else if(bulan==4 || bulan==6 || bulan==9 || bulan==11){
		cout<<"Masukkan tanggal sewa (1-30)"; cin>>tanggal;
		if(tanggal<1 || tanggal>30){
			cout<<"Input tidak terdefinisi.";
			sew.tanggalsewa();
		}
	}
	
	else{
		cout<<"Input tidak terdefinisi.";
		sew.tanggalsewa();
	}
		
	cout<<"Masukkan tahun sewa(4 digit): "; cin>>tahun;
}

class pengembalian{
	public:
		void tanggalkembali();
		void dendalambat();
		void dendarusak(){
		}
		void dendahilang(){
		}
		
	private:
		int tanggal2, bulan2, tahun2, hari;
	
}kem;

void pengembalian::tanggalkembali(){
	cout<<"Masukkan bulan pengembalian(1-12): "; cin>>bulan2;
	
	if(bulan2==1 || bulan2==3 || bulan2==5 || bulan2==7 || bulan2==8 || bulan2==10 || bulan2==12){
		cout<<"Masukkan tanggal  pengembalian(1-31): "; cin>>tanggal2;
		if(tanggal2<1 || tanggal2>31){
			cout<<"Input tidak terdefinisi.";
			kem.tanggalkembali();
		}
	}
	else if(bulan2=2){
		if(tahun2%4==0 && tahun2%100!=0 && tahun2%400!=0){
			if(tanggal2>29){
				cout<<"Input salah! Tidak ada tanggal tersebut pada tahun2 ini.";
				kem.tanggalkembali();
			}	 
		}
		else{
			if(tanggal2>28){
				cout<<"Input salah! Tidak ada tanggal tersebut pada tahun2 ini.";
				kem.tanggalkembali();
			}
		}
	}
		
	else if(bulan2==4 || bulan2==6 || bulan2==9 || bulan2==11){
		cout<<"Masukkan tanggal sewa (1-30)"; cin>>tanggal2;
		if(tanggal2<1 || tanggal2>30){
			cout<<"Input tidak terdefinisi.";
			kem.tanggalkembali();
		}
	}
	
	else{
		cout<<"Input tidak terdefinisi.";
		kem.tanggalkembali();
	}
		
	cout<<"Masukkan tahun sewa(4 digit): "; cin>>tahun2;
//	
//	dendalambat();
}
int main(){
	int c, x;
	sew;
	kem;
}
