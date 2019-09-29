#include<iostream>
using namespace std;

void arr(int n,int a[],int b[]){
	for(int i=0;i<3;i++) b[i]=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[a[i]]++;
	}
}
void out(int n,int a[],int b[]){
	int i=0;
	while(i<3){
		while(b[a[i]]>0){
			cout<<i<<" ";
			b[a[i]]--;
		}
		i++;
	}

	cout<<endl;
}

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[2];
		arr(n,a,b);
		out(n,a,b);
	}
}

