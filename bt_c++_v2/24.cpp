#include<iostream>
#include<cmath>
using namespace std;

int SNT(long long n){//kiem tra so nguyen to
	if(n==1) return 0;else if(n==2) return 1;else {
		int x=sqrt(n)+1;
		for(int i=2;i<x;i++)
		if(n % i == 0) return 0;
		return 1;
	}
}

long long numbers(long long L,long long R){
	long long l=sqrt(L),r=sqrt(R),d=0;
	for(int i=l;i<=r;i++)
	if(SNT(i)==1) d++;
	return d;
}

int main(){
	long long T,L,R;
	cin>>T;
	while(T--){
		cin>>L>>R;
		cout<<numbers(L,R)<<endl;
		
	}
}




