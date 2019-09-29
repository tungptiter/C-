#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void array(int n,int m,int a[],int b[],int c[]){
	for(int i=0;i<n;i++)
	c[i]=a[i];
	for(int i=0;i<m;i++)
	c[n+i]=b[i];
}
void quicksort(int a[],int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(a[i]<a[mid]) i++;
		while(a[j]>a[mid]) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) quicksort(a,i,l);
		if(j>f) quicksort(a,f,j);
	}
}
void out(int n,int m,int c[]){
	for(int i=0;i<m+n;i++)
	cout<<c[i]<<" ";
	cout<<endl;
}
int main(){
	int T,n,m;
	cin>>T;
	while(T--){
		cin>>n>>m;
		int a[n],b[m],c[n+m];
		arr(n,a);
		arr(m,b);
		array(n,m,a,b,c);
		quicksort(c,0,m+n-1);
		out(n,m,c);
	}
}

