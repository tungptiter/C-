#include<iostream>
using namespace std;

long long LCM(int a,int b){
	int r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

long long GCD(int a,int b){
	return a*b/LCM(a,b);
}


int main()
{
	int T,n;
	cin>>T;
	while(T--){
		int BCNN;
		cin>>n;
		int a[n+1];
		a[1]=1;
		for(int i=2;i<=n;i++){
			a[i]=GCD(a[i-1],i);
		}
		cout<<a[n]<<endl;
		    
	}

}




