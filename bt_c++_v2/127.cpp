#include<iostream>
using namespace std;
void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void result(int a[],int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while(i < j){
		while(a[i] < a[mid]) i++;
		while(a[j] > a[mid]) j--;
		if(i <= j) {
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) result(a,i,l);
		if(j>f) result(a,f,j);
	}
}
int main(){
	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
		result(a,0,n-1);
		cout<<a[k-1]<<endl;
	}
}

