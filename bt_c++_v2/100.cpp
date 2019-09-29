#include<iostream>
using namespace std;

void arr(int n,int a[],int b[]){
	for(int i=0;i<n;i++){
		cin>>a[i];// mang a de nguyen
		b[i]=a[i];// mang b xap xep tu mang a... sau do so sanh
	}
}
void result(int b[],int f,int l){ // sap xep mang b
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(b[i]<b[mid]) i++;
		while(b[j]>b[mid]) j--;
		if(i<=j) {
			swap(b[i],b[j]);
			i++;
			j--;
		}
		if(i<l) result(b,i,l);
		if(j>f) result(b,f,j);
	}
}
void display(int n,int a[],int b[]){ // duyet cac so khac nhau
	result(b,0,n-1);
	int i=0,j=n-1;
	while(i<n-1 && a[i]==b[i]) i++;
	while(j>0 && a[j]==b[j]) j--;
	cout<<i<<" "<<j<<endl;
}


int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n];
		arr(n,a,b);
		display(n,a,b);
	}
}

