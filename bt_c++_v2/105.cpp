#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
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

int main(){
	int T,n,m;
	cin>>T;
	while(T--){
		cin>>n>>m;
		int a[n],b[m];
		arr(n,a);
		arr(m,b);
		quicksort(a,0,n-1);
		quicksort(b,0,m-1);
		cout<<a[n-1]*b[0]<<endl;
	}
}

