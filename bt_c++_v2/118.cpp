#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int array(int n,int k,int a[]){
	int i=n-1,j=0;
	while(i>0 && a[i]!=k) i--;
	while(j<n && a[j]!=k) j++;
	return (i-j+1>0)? i-j+1:-1;	
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
		cout<<array(n,k,a)<<endl;
	}
}


