#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void start(int n,int s[]){
	for(int i=0;i<n;i++)
	s[i]=0;
}

void arr(int n,long long a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void array(int n,long long a[],int s[]){
	for(int i=0;i<n;i++)
	s[a[i]]++;
}
void display(int s[],int n1,long long a[]){
	for(int i=0;i<n1;i++)
	if(s[a[i]]>=3) cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	long long T,n1,n2,n3;
	cin>>T;
	while(T--){
		cin>>n1>>n2>>n3;
		int s[n1];
		start(n1,s);
		long long a[n1],b[n2],c[n3];
		arr(n1,a);arr(n2,b);arr(n3,c);
		array(n1,a,s);array(n2,b,s);array(n3,c,s);
		display(s,n1,a);
	}
}

