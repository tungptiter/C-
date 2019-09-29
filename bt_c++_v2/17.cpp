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

int sum(int n){
	int sum=0;
	for(int i=n;i>=1;i/=10)
	sum+=i % 10;
	return sum;
}

int sumOfSnt(int n){
	int sumOfSnt=0;
	for(int i=2;i<=n;i++){
		if(n % i==0 && SNT(i)==1) sumOfSnt+=sum(i);
	}
	return sumOfSnt;
}

int main()
{
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
//		cout<<sum(n);
//		cout<<sumOfSnt(n);
		if(SNT(n)==1 && sum(n)==sumOfSnt(n)) cout<<"YES"<<endl;else cout<<"NO"<<endl;
	}

}




