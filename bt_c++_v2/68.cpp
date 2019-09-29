#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=1;i<=n;i++)
	cin>>a[i];
}
void quickSort(int a[],int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(a[i]<a[mid]) i++;
		while(a[j]>a[mid]) j--;
		if(i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) quickSort(a,i,l);
		if(j>f) quickSort(a,f,j);
	}
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n+1];
		arr(n,a);
		quickSort(a,1,n);
		cout<<a[k]<<endl;
	}
}

