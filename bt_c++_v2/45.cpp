#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void arr(int n,int b[]){
	for(int i=0;i<n;i++)
	b[i]=i+1;
}
void bcd(int n,int a[]){
	for(int i=0;i<n;i++)
	a[i]=1;
}

void out(int n,int a[],int b[]){
	for(int i=0;i<n;i++)
	if(a[i]==1) cout<<b[i];
	cout<<" ";
	
}
void result(int n,int a[]){
	int i=n-1;
	while(i>0 && a[i]!=1){
		a[i]=1;
		i--;
	}
	a[i]=0;
}
int text(int n,int k,int a[]){
	int d=0;
	for(int i=0;i<n;i++)
	if(a[i]==1) d++;
	if(d==k) return 1;else return 0;
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n],b[n],x=pow(2,n);
		arr(n,b);//mang
		bcd(n,a);//mang nhi phan
		while(--x){
			result(n,a);//thay doi
			if(text(n,k,a)==1) out(n,a,b);
		}
	}
}
