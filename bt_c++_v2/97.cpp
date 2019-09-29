#include<iostream>
#include<cstring>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void stringS(int n,int m,int a[],int b[],int s[]){
	int x;
	if(a[n-1]>b[m-1]) x=a[n-1]; else x=b[m-1];
	for(int i=0;i<x;i++)
	s[i]=0;
	for(int i=0;i<n;i++)
	s[a[i]]++;
	for(int i=0;i<m;i++)
	s[b[i]]++;
	for(int i=0;i<m+n;i++)
	if(s[i]>0) cout<<i<<" ";
	cout<<endl;
	for(int i=0;i<n;i++)
	if(s[a[i]]==2) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int T,n,m;
	cin>>T;
	while(T--){
		cin>>n>>m;
		int a[n],b[m];
		arr(n,a);
		arr(m,b);
		int s[100001];
		stringS(n,m,a,b,s);
	}
}

