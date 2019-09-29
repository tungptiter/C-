#include<iostream>
using namespace std;

void arr(int n,int a[]){
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

int find(int n,int a[]){
	int i=0;
	while(i<n && a[i]<0) i++;
	int x=a[i];
    while(i<n-1){
    	if(x+1<a[i+1]) return x+1;else
    	x=a[i+1];
    	i++;
	}
	return a[n-1]+1;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		arr(n,a);
		result(a,0,n-1);
		cout<<find(n,a)<<endl;
	}
}

