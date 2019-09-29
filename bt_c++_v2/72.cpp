#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int b[]){//mang
	for(int i=0;i<n;i++)
	cin>>b[i];
}
void bcd(int n,int a[]){//mang bcd
	for(int i=0;i<n;i++)
	a[i]=0;
}
int result(int n,int a[]){//thay doi bcd
	int i=n-1;
	while(i>0&&a[i]!=0){
		a[i]=0;
		i--;
	}
	a[i]=1;
	int d=0;
	i--;
	while(i>=0){//bcd co 2 so
		if(a[i]==1) d++;
		i--;
	}
	if(d==1) return 1;else return 0;
}
int max(int n,int a[],int b[]){
	int max=b[n-1]-b[n-2];
	int x=pow(2,n);
	while(--x){
		if(result(n,a)==1){
			   int i=n-1;
			   while(i>=0&&a[i]!=1) i--;
			   int j=i-1;
			   while(j>=0&&a[j]!=1) j--;
			   if(b[i]>b[j]){
			   	  int minus=b[i]-b[j];
			   	  if(minus>max) max=minus;
			   }
			}
		}
		if(max>0) return max; else return -1;
	}
	




int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		arr(n,b);
		bcd(n,a);
		cout<<max(n,a,b)<<endl;
	}
}

