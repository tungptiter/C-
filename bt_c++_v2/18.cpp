#include<iostream>
#include<cmath>
using namespace std;
int number(int n){
	int x=sqrt(n)+1;
	for(int i=2;i<x;i++)
	if(n % i ==0) return 1;
	return 0;
}

int phantich(int n)
{
	if(n==1) return 1;
if(number(n)==1) {
	int i=2,x=n;
	int d[n+1];
	for(i=2;i<=x;i++)
	d[i]=0;
	i=2;
	int sum=1;//tong uoc
    while(i<=x){
    	if(n%i==0) {
    		          d[i]++;
			          n/=i; 
			          if(n==1) break;
		           } else  {
		           	sum*=(pow(i,d[i]+1)-1)/(i-1);
		           	i++;
				   }			          
	}
	sum*=(pow(i,d[i]+1)-1)/(i-1);
	return sum-x;
}  else return n+1;
	

}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		if(n==phantich(n)) cout<<"1\n";else cout<<"0\n";
	}
	
}




