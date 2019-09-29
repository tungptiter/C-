#include<iostream>
using namespace std;

int X(int a,int m){
	for(int i=0;i<m;i++)
	if(a*i % m ==1) return i;
}

int main(){
	int T,a,m;
	cin>>T;
	while(T--){
		cin>>a>>m;
		cout<<X(a,m)<<endl;
	}
}




