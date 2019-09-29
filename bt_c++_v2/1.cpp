#include<iostream>
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

int main()
{
	int t,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<GCD(a,b)<<" "<<LCM(a,b)<<" "<<endl;
	}
	

}



