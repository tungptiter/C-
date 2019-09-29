#include<iostream>
using namespace std;
void arr(int n,int a[]){
	for(int i=1;i<=n;i++)
	cin>>a[i];
}
void result(int n,int k,int a[],int b[]){
	int x=1;
	for(int i=k+1;i<=n;i++){
       b[x]=a[i];
       x++;
	}int i=1;
	for(int j=x;j<=n;j++){
		b[j]=a[i];
		i++;
	}
	for(i=1;i<=n;i++)
	cout<<b[i]<<" ";
	cout<<endl;
	    

}
int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n+1],b[n+1];
		arr(n,a);
		result(n,k,a,b);
	}
}

