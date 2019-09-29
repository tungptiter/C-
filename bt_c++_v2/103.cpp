#include<iostream>
using namespace std;

void array(int n,int a[],int arr[]){
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<10;i++) arr[i]=0;
}

void listNumber(int n,int a[],int arr[]){
	int i=0;
	while(i<n){
		for(int j=a[i];j>=1;j=j/10){
			int x=j%10;
			arr[x]++;
		}
		i++;
	}
}
void out(int arr[]){
	for(int i=0;i<10;i++)
	if(arr[i]>0) cout<<i<<" ";
	cout<<endl;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],arr[10];
		array(n,a,arr);
		listNumber(n,a,arr);
		out(arr);
	}
}

