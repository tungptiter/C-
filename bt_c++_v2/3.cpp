#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int a[]){
	for(int i=1;i<=n;i++)
	cin>>a[i];
}

int hx(int n,int a[]){
	int hx=1;
	for(int i=1;i<=n;i++)
	hx=hx*a[i];
	return hx;
}

int LCM(int a,int b){
	int r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int gx(int n,int a[]){
	int gx=a[1];
	for(int i=2;i<=n;i++)
	gx=LCM(gx,a[i]);
	return gx;
}

int main()
{
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int a[n+1];
		arr(n,a);
		long long fx=pow(hx(n,a),gx(n,a));
		cout<<fx<<endl;
		
	}

}




