#include<iostream>
using namespace std;

int number(int n,int k){
	int s=(n/k)*(k*(k-1))/2;
	for(int i=n+1-n%k;i<=n;i++)
	s+=i%k;
	return s;
	
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		cout<<number(n,k)<<endl;
	}
}




