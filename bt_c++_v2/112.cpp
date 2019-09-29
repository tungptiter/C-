#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}

int find(int a[],int k,int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	if(i>j) return -1;
	if(k==a[mid]) return 1;
	if(k<a[mid]) find(a,k,f,mid-1);
	if(k>a[mid]) find(a,k,mid+1,l);
}
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
		cout<<find(a,k,0,n-1)<<endl;
	}
}

