#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void array(int n,int x,int a[],int b[]){
	for(int i=0;i<n;i++)
	b[i]=abs(x-a[i]);
}
void result(int a[],int b[],int f,int l){
    int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(b[i]<b[mid]) i++;
		while(b[j]>b[mid]) j--;
		if(i<=j){
			swap(b[i],b[j]);
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) result(a,b,i,l);
		if(j>f) result(a,b,f,j);
	}	
}
void display(int k,int a[]){
	for(int i=0;i<k;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int T,n,k,x;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		arr(n,a);
		cin>>k>>x;
		array(n,x,a,b);
	    result(a,b,0,n-1);
	    display(k,a);
	}
}

