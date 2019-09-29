#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int min(int n,int a[]){
	int i=0;
	while(i<n && a[i]<a[i+1]) i++;
	if(i>0)return a[i+1];
	return a[n-1];
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		arr(n,a);
		cout<<min(n,a)<<endl;
	}
}

