#include<iostream>
#include<cstring>
using namespace std;
int a[100000];
void arr(int a[]){
    for(int i=2;i<=100000;i++) a[i]=1;
	a[1]=0;
	for(int i=2;i<=100000;i++){
		if(a[i]==1){
			for(int j=2;i*j<=100000;j++)
			a[i*j]=0;
		}
	}
}

int numbers(int a[],int n,int m){
	int d=0;
	for(int i=n;i<=m;i++)
	if(a[i]==1) d++;
	return d;
}


int main(){
	arr(a);
	int T,n,m;
	cin>>T;
	while(T--){
		cin>>n>>m;
		cout<<numbers(a,n,m)<<endl;
    }
}

