#include<iostream>
#include<cmath>
using namespace std;

int SNT(int n){//kiem tra so nguyen to
	if(n==1) return 0;else if(n==2) return 1;else {
		int x=sqrt(n)+1;
		for(int i=2;i<x;i++)
		if(n % i == 0) return 0;
		return 1;
	}
}

int list(int n){
	if(n<4) return 0;
	int d=1;
	int x=sqrt(n);
	for(int i=3;i<=x;i=i+2)
	if(SNT(i)==1)d++;
	return d;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<list(n)<<endl;
	}
}





