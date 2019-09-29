#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	a[i]=0;
}

void out(int n,int a[]){
	for(int i=0;i<n;i++)
	cout<<a[i];
	cout<<" ";
	
}
void result(int n,int a[]){
	int i=n-1;
	while(i>0 && a[i]!=0){
		a[i]=0;
		i--;
	}
	a[i]=1;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],x=pow(2,n);
		arr(n,a);
		out(n,a);
		while(--x){
			result(n,a);
			out(n,a);
		}
		cout<<endl;
	}
}

