#include<iostream>
#include<cmath>
using namespace std;

int number(int n){
	if(n==2) return 1;else {
		int x=sqrt(n)+1;
		for(int i=2;i<x;i++)
		if(n % i == 0) return 0;
		return 1;
	}
}

int arr(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	for(int i=2;i<=n;i++)
	if(n%i==0&&number(i)==1) return i;
}

int main()
{
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
	    for(int i=1;i<=n;i++)
	    cout<<arr(i)<<" ";
	    cout<<endl;
	}

}
