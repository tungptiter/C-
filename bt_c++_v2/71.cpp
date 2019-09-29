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
void result(int n,int a[]){
	int i=n-1;
	while(i>0&&a[i]!=0){
		a[i]=0;
		i--;
	}
	a[i]=1;
}
int text(int n,int a[]){
	int i=1;
	while(i<n-1){
		if(a[i]==1){
			if(a[i-1]==1 || a[i+1]==1) return 0;
		}
		i++;
	}
	return 1;
}
int max(int n,int a[],int b[]){
	int max=0,x=pow(2,n);
	while(--x){
		result(n,a);
		if(text(n,a)==1){
			int sum=0;
			for(int i=0;i<n;i++)
			if(a[i]==1) sum+=b[i];
			if(sum>max) max=sum;
		}
	}
	return max;
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

