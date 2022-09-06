#include<iostream>
#define maks 8

using namespace std;

class Tumpukan{
	char data[maks];
	int banyak, index;
	public:
		Tumpukan(int);
		void push(char);
		char pop();
		void show();
		
};

Tumpukan::Tumpukan(int x){
	index = 0;
	banyak = x;
	for(int i=0; i<x; i++){
		data[i] = '0';
	}
}

void Tumpukan::push(char x){
	if(index < banyak){
		data[index] = x;
		index++;
	}else{
		cout << "Datanya Sudah penuh" << endl;
		
	}
}

char Tumpukan::pop(){
	char tmp;
	if(index >= 0){
		tmp = data[index-1];
		data[index-1] = '0';
		index--;
		
		return tmp;
	}else{
		cout << "Datanya Sudah Habis" << endl;
	}
}

void Tumpukan::show(){
	for(int i=0; i<banyak; i++){
		cout << data[i] << " ";
		
	}
	cout << endl;
}

int main(){
	char tmp;
	
	Tumpukan tumpukan(8);
	Tumpukan tumpuk1(4);
	Tumpukan tumpuk2(4);
	
	
	cout << "Tumpuk 1 sekarang : ";
	tumpuk1.push('c');
	tumpuk1.push('b');
	tumpuk1.push('c');
	tumpuk1.push('a');
	
	tumpuk1.show();
	
	cout << "Tumpuk 2 sekarang : ";
	tumpuk2.push('b');
	tumpuk2.push('a');
	tumpuk2.push('c');
	tumpuk2.push('a');
	
	tumpuk2.show();
	
	cout << endl << endl;
	
	cout << "Tumpuk 1 melakukan POP";
	tmp =tumpuk1.pop();
	cout << "data : " << tmp << endl << "Tumpuk 1 sekarang : ";
	tumpuk1.show();
	cout << "Tumpukan melakukan push data : " <<  tmp << endl;
	tumpukan.push(tmp);
	cout << "Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	cout << "Tumpuk 1 melakukan POP";
	tmp =tumpuk1.pop();
	cout << "data : " << tmp << endl << "Tumpuk 1 sekarang : ";
	tumpuk1.show();
	cout << "Tumpukan melakukan push data : " <<  tmp << endl;
	tumpukan.push(tmp);
	cout << "Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	
	cout << "Tumpukan 1 melakukan POP ";
	tmp = tumpuk1.pop();
	cout << "data : " << tmp << endl << "Tumpuk 1 sekarang :";
	tumpuk1.show();
	cout << "Tumpuk melakukan push data : " << tmp << endl;
	tumpukan.push(tmp);
	cout <<"Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	
	cout << "Tumpukan 1 melakukan POP ";
	tmp = tumpuk1.pop();
	cout << "data : " << tmp << endl << "Tumpuk 1 sekarang :";
	tumpuk1.show();
	cout << "Tumpuk melakukan push data : " << tmp << endl;
	tumpukan.push(tmp);
	cout <<"Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	
	cout << "Tumpukan 2 melakukan POP ";
	tmp = tumpuk2.pop();
	cout << "data : " << tmp << endl << "Tumpuk 2 sekarang :";
	tumpuk2.show();
	cout << "Tumpuk melakukan push data : " << tmp << endl;
	tumpukan.push(tmp);
	cout <<"Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	
		cout << "Tumpukan 2 melakukan POP ";
	tmp = tumpuk2.pop();
	cout << "data : " << tmp << endl << "Tumpuk 2 sekarang :";
	tumpuk2.show();
	cout << "Tumpuk melakukan push data : " << tmp << endl;
	tumpukan.push(tmp);
	cout <<"Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	
	cout << "Tumpukan 2 melakukan POP ";
	tmp = tumpuk2.pop();
	cout << "data : " << tmp << endl << "Tumpuk 2 sekarang :";
	tumpuk2.show();
	cout << "Tumpuk melakukan push data : " << tmp << endl;
	tumpukan.push(tmp);
	cout <<"Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	cout << "Tumpukan 2 melakukan POP ";
	tmp = tumpuk2.pop();
	cout << "data : " << tmp << endl << "Tumpuk 2 sekarang :";
	tumpuk2.show();
	cout << "Tumpuk melakukan push data : " << tmp << endl;
	tumpukan.push(tmp);
	cout <<"Tumpukan sekarang : ";
	tumpukan.show();
	cout << endl << endl;
	
	
	return 0;
	
	
}
