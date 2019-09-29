#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int find(int n,int k,int a[]){
	for(int i=0;i<n;i++)
	if(k==a[i]) return i+1;
	return -1;
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
		cout<<find(n,k,a)<<endl;
	}
}

