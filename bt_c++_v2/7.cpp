#include<iostream>
#include<cmath>
using namespace std;

int LCM(int a,int b){
	int r=1;
	while(r!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int GCD(int a,int b){
	return a*b/LCM(a,b);
}

int BCNN(int a,int b,int c){
	int UCLN=LCM(a,b);
	UCLN=LCM(UCLN,c);
	return a*b*c/UCLN;
}

int number(int a,int b,int c,int n){
	int N;
	int min=pow(10,n-1)/BCNN(a,b,c);
	int max=(pow(10,n)-1)/BCNN(a,b,c);
	if(max < 1) return N=-1; else return N=(min+1)*BCNN(a,b,c);
}

int main()
{
	int T,a,b,c,n;
	cin>>T;
	while(T--){
		cin>>a>>b>>c>>n;
		cout<<number(a,b,c,n)<<endl;
	}
	

}




