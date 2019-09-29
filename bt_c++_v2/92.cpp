#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}

int min(int n,int a[]){
	int MIN=abs(a[0]-a[1]);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			int min=abs(a[i]-a[j]);
			if(min<MIN) MIN=min;
		}
	}
	return MIN;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		arr(n,a);
		cout<<min(n,a)<<endl;
	}
}

