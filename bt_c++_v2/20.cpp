#include<iostream>
using namespace std;

int number(int n){
	int d=0;
	for(int i=1;i<=n;i=i+2)
		if(n % i==0) d++;
	return d;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		cout<<number(n)<<endl;
	}
}




