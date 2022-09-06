#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int jam1,jam2,menit1,menit2,selisihj, selisihm;
	
	cout<<"Waktu pertama (12.01 - 00.00):"<<endl;
	cout<<"Masukkan jam : "; cin>>jam1;
	cout<<"Masukkan menit : "; cin>>menit1; 
	cout<<jam1<<":"<<menit1;
	if(jam1>24 || menit1>60){
		exit(0);
	}
	
	cout<<endl;
	cout<<"Waktu kedua (00.01 - 12.00):"<<endl;
	cout<<"Masukkan jam : "; cin>>jam2;
	cout<<"Masukkan menit : "; cin>>menit2;
	cout<<jam2<<":"<<menit2;
	if(jam2>12 || menit2>60){
		exit(0);
	}
	cout<<endl;

	if(menit2<menit1){
		menit2=menit2+60; 
		jam2=jam2-1;
	}
	
	else	if(jam1==0){
		jam1=24;
	}
	
		else if(jam2<jam1){
		jam2+=24;
	}
	
	selisihj=jam2-jam1; 
	selisihm=menit2-menit1;
	
	cout<<"Selisih dari kedua waktu tersebut : "<<selisihj<<" jam "<<selisihm<<" menit ";
	
}
