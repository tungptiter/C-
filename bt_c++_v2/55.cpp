#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=1;i<=n;i++)
	cin>>a[i];
}

void quickSort(int a[],int f,int l){
	int i=f,j=l,mid=(i+j)/2;
	while( i < j ){
		while(a[i] < a[mid]) i++;
		while(a[j] > a[mid]) j--;
		if(i <= j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		if(i<l) quickSort(a,i,l);
		if(j>f) quickSort(a,f,j);
	}
}

void out(int n,int a[]){
	int mid=n/2,i=1;
	while(i<=mid){
		cout<<a[n+1-i]<<" "<<a[i]<<" ";
		i++;
	}
	if(n%2==1) cout<<a[n/2+1];
	cout<<endl;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n+1];
		arr(n,a);
		quickSort(a,1,n);
		out(n,a);
	}
}

