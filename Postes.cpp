#include "iostream"
#include "string"
#include "math.h"

using namespace std;
class postes{
     friend ostream& operator<<(ostream&, postes&);
     friend istream& operator>>(istream&, postes&);

private:
    float pertama, kedua, nilai;
};
istream& operator>>(istream& in, postes& masukkan){
	int n;
	cout<<"Masukkan Perulangan Nilai = "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Masukkan Nilai = "<<masukkan.nilai<<endl;
	}
//    cout << "masukkan bilangan pertama : ";
//    in >> masukkan.pertama;
//    cout << "masukkan bilangan kedua : ";
//    in >> masukkan.kedua;
}
ostream& operator<<(ostream& out, postes& keluaran){
	out<<"masukkan perulangan";
//    out<<"Bilangan pertama adalah : " << keluaran.pertama << endl;
//    out<<"Bilangan kedua adalah : " << keluaran.kedua<< endl;
//    out<<"Jumlah total bilangan adalah : " << keluaran.pertama+keluaran.kedua << endl;
//    out<<"Rata-Rata bilangan adalah : " << keluaran.pertama/keluaran.kedua << endl;
      if (keluaran.pertama>keluaran.kedua)
    {
        cout << "Bilangan terbesar adalah :  " << keluaran.pertama << endl;
    }else
    {
        cout << "Bilangan terbesar adalah : " <<keluaran.kedua << endl;
    }
}

int main(){
	postes l;
	cin >> l;
	cout << l;
	return 0;
}
