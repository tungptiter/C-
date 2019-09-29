#include<iostream>
#include<cmath>
using namespace std;

int SNT(int n){//kiem tra so nguyen to
	if(n==1) return 0;else if(n==2) return 1;else {
		int x=sqrt(n)+1;
		for(int i=2;i<x;i++)
		if(n % i == 0) return 0;
		return 1;
	}
}

int text(int n){
	if(SNT(n)==1) return 0;
	if(SNT(n)!=1) {
		for(int i=2;i<n;i++){
			if(n% i==0 && SNT(i)==0) return 0;
			if(n% i==0 && SNT(i)==1){
				n/=i;
				for(int j=2;j<n;j++){
					if(n%j==0 && SNT(j)==0) return 0;
					if(n%j==0 && SNT(j)==1 && SNT(n/j)==1) return 1;
				}
			}
			
		}
	}
	return 0;
}

int main()
{
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		cout<<text(n)<<endl;
	}

}




