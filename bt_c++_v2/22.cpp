#include<iostream>
#include<cmath>
using namespace std;

int SNT(int n){
	int x=sqrt(n)+1;
	for(int i=2;i<x;i++)
	if(n % i==0) return 0;
	return 1;
}

int number(int n){
	if(n==1) return 1; else if(n % 2 ==0) return 2;else if(SNT(n)==1) return n;else if(SNT(n)==0) {
		for(int i=2;i<n;i++)
		if(n % i==0 && SNT(i)==1) return i;
	}
}

int main()
{
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)
		cout<<number(i)<<" ";
		cout<<endl;
	}
	

}





