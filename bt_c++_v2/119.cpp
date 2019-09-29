#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int find(int n,int k,int a[]){
	int i=0,j=n-1;
	while(i<=n-1 && a[i]!=k) i++;
	while(j>=0 && a[j]!=k) j--;
	if(j>=i) return j-i+1;
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


