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
int array(int n,int a[]){
	for(int i=0;i<n-1;i++)
	if(a[i]!=a[i+1]) return 1;
	return 0;
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		arr(n,a);
		result(a,0,n-1);
		if(array(n,a)==1) cout<<a[0]<<" "<<a[1]<<endl;
		else cout<<"-1\n";
	}
}

