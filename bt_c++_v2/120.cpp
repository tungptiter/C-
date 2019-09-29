#include<iostream>
#include<cmath>
using namespace std;

int snt(int n ){
	if(n==1) return 0;
	if(n==2) return 1;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}
void out(int n){
	int i=2;
	while(i<n){
		if(snt(i)==1 && snt(n-i)==1) {
			cout<<i<<" "<<n-i<<endl;
			break;
		}
		i++;
	}
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		out(n);
	}
}

