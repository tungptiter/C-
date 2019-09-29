#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int a[]){ // mang
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void bcd(int n,int b[]){ // mang bcd
	for(int i=0;i<n;i++)
	b[i]=0;
}
int result(int n,int a[]){ // sinh xau nhi phan
	int i=n-1;
	while(i>0 && a[i]!=0){
		a[i]=0;
		i--;
	}
	a[i]=1;
	int j=0;
	while(j<n && a[j]!=1) j++;
	for(int x=j+1;x<i;x++)
	if(a[x]==0) return 0;
	return 1;
}
int display(int n,int a[],int b[]){ // tinh tich
	int s=1;
	for(int i=0;i<n;i++)
	if(b[i]==1) s=s*a[i];
	return s;
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		arr(n,a);
		bcd(n,b);
		int x=pow(2,n);
		int max=a[n-1];
		while(--x){
			if(result(n,b)==1) {
				int m=display(n,a,b);
				if(m>max) max=m;
			}
		}
		cout<<max<<endl;
	}
}

