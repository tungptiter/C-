#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int list(int n,int l,int r,int a[]){
	int i=l;
    while(i<=r-1 && a[i]<=a[i+1]) i++;
	if(i==r-1) return 1;
	int j=i+1;
	while(j<=r-1) {
		if(a[i] < a[i+1]) return 0;
		i++;		
	}
	return 1;
}

int main(){
	int T,n,l,r;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		arr(n,a);
		cin>>l>>r;
		if(list(n,l,r,a)==1) cout<<"Yes\n"; else if(list(n,l,r,a)==0) cout<<"No\n";
	}
}

