#include<iostream>

using namespace std;

void tukar(int *a, int *b){
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
}
void sort(int A[],int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(A[j+1]%2 != 0){
				tukar(&A[j],&A[j+1]);
			}
			
		}
	}
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}
int main(){
	int A[5]={5,4,3,2,1};
	sort(A,5);
}
