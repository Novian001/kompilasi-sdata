#include <iostream>
#include <fstream>
using namespace std;

ofstream tulis;
ifstream baca;

struct presensi{
	string nama, nim;
	int hadir;
}pr[3];

class pres{
	private:
		int sett,i,x;
		string line;
		char hadirr;
	public:
		void cek(){
		sett=0, i=0;
		
		int n=sett;
		
		tulis.open("presensi.txt", ios::app);
		tulis.close();
		
		baca.open("presensi.txt");
		
		if(baca.is_open())
		{
			while(getline(baca,line))
			{
				baca>>pr[i].nama;
				baca>>pr[i].nim;
				baca>>pr[i].hadir;
				i++;
				sett++;
			}

			baca.close();
		}
		}
		
		void out(){
			for(int i=0; i<3; i++){
				cout<<pr[i].nama<<endl;
				cout<<pr[i].nim<<endl;
				cout<<pr[i].hadir<<endl;
			}
		}
		
		void present(){
			for(int h=0; h<3; h++){
				cout<<"Pertemuan "<<h+1<<endl<<endl;
				cout<<"NIM\t\t\t\tNama\t\t\t\tHadir?[Y/N]"<<endl;
				
				for(int i=0; i<3; i++){
					cout<<pr[i].nim<<"\t\t\t"<<pr[i].nama<<"\t\t\t\t\t"; cin>>hadirr;
					
					if(hadirr=='y' || hadirr=='Y'){
						pr[i].hadir++;
						tulis.open("presensi.txt");
						tulis << "Presensi:" << endl;
						for(int i=0;i<3;i++){
							tulis<<pr[i].nama<<endl;
							tulis<<pr[i].nim<<endl;	
							tulis<<pr[i].hadir<<endl;
						}
					}
				}
				cout<<endl<<endl;
			}
		}
		
};

int main(){
	pres pr;
	pr.cek();
	pr.present();
//	pr.out();
//	presensi pr[20]={{"Ryan Kurniawan", "1400018089", ""},{"Dimas Kurnia Fajar Prasetya", "1400018100"},{}};
}


