#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=1;i<=n;i++)
	cin>>a[i];
}
void maxOfK(int n,int k,int a[]){
	int i=1,max=a[1];
	while(i<=n-k+1){
		for(int j=i;j<i+k;j++)
		if(a[j]>max) max=a[j];
		cout<<max<<" ";
		i++;
	}
	cout<<endl;
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n+1];
		arr(n,a);
		maxOfK(n,k,a);
	}
}

