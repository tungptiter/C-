#include<iostream>
using namespace std;
void arr(int n ,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void result(int a[],int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(a[i]<a[mid]) i++;
		while(a[j]>a[mid]) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) result(a,i,l);
		if(j>f) result(a,f,j);
	}
}
void out(int n,int k,int a[]){
	for(int i=n-1;i>n-k-1;i--)
	cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
		result(a,0,n-1);
		out(n,k,a);
	}
}

