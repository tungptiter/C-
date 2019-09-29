#include<iostream>
#include<cstring>
using namespace std;

long long UCLN(long long a,long long b){
	int r=1;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int T,x,y;
	string a;
	cin>>T;
	while(T--){
		cin.ignore(1);
		cin>>a>>x>>y;
		string result;
		int z=UCLN(x,y);
		for(int i=1;i<=z;i++)
		result+=a;
		cout<<result<<endl;
	}
}

