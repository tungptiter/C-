#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n*n;i++)
	cin>>a[i];
}

void swap(int &a,int &b){
	int c=a;
	a=b;
	b=c;
}

int pastion(int a[],int l,int h){
	int p=a[h];
	int i=l-1;
	for(int j=l;j<h;j++) {
		if(a[j] < p) {
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[h]);
	return i+1;
}

void quickSort(int a[],int l,int h){
	if(l < h) {
		int pi=pastion(a,l,h);
		quickSort(a,l,pi-1);
		quickSort(a,pi+1,h);
	}
}

void out(int n,int a[]){
	for(int i=0;i<n*n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n*n];
		arr(n,a);
		quickSort(a,0,n*n-1);
		out(n,a);
	}
}




