#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void max(int n,int k,int a[]){
	int max=0;
	int vt=0;
	for(int i=0;i<=k-1;i++)
	max=max+a[i];
	
	for(int i=0;i<=n-k;i++){
		int sum=0;
		int vtm=i;
		for(int j=i;j<=k+i-1;j++){
			sum=sum+a[j];
		}
		if(sum>max) {
			max=sum;
			vt=vtm;
		}
	}
	for(int i=vt;i<=vt+k-1;i++)
	cout<<a[i]<<" ";
	cout<<endl;
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
        max(n,k,a);
	}
}

