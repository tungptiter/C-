#include<iostream>
#include<cmath>
using namespace std;
int numberMax(int n,int p){
	int d=0,mu=1;
    for(int i=p;i<=n;i=i*p){
    	if(i==pow(p,mu)) {
    		d=d+mu;
    		mu++;
		} else
    	if(i != pow(p,mu)) d=d+mu;
	}
	return d;	
}
int main(){
	int T,n,p;
	cin>>T;
	while(T--){
		cin>>n>>p;
		cout<<numberMax(n,p)<<endl;
	}
}


