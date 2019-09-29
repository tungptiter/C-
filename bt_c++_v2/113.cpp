#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n-1;i++)
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
	for(int i=0;i<n-1;i++)
	if(i+1 != a[i]) return i+1;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		arr(n,a);
		result(a,0,n-2);
		cout<<find(n,a)<<endl;
	}
}

