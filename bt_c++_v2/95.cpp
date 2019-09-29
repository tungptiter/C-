#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int k,int a[],int b[]){
	for(int i=0;i<n;i++){
		cin>>a[i];//a chay theo b
		b[i]=abs(k-a[i]);//sap xep b
	}
}

void result(int a[],int b[],int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(b[i]<b[mid]) i++;
		while(b[j]>b[mid]) j--;
		if(i<=j){
			swap(b[i],b[j]);
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) result(a,b,i,l);
		if(j>f) result(a,b,f,j);
	}
}
void out(int n,int a[]){
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}


int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n],b[n];
		arr(n,k,a,b);
		result(a,b,0,n-1);
		out(n,a);
	}
}

