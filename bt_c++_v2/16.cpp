#include<iostream>
#include<cmath>
using namespace std;

int number(int n){
	int x=sqrt(n)+1;
	for(int i=2;i<x;i++)
	if(n % i ==0) return 1;
	return 0;
}

void phantich(int n)
{
if(number(n)==1) {
	int i=2,x=n;
	int d[n+1];
	for(i=2;i<=x;i++)
	d[i]=0;
	i=2;
    while(i<=x){
    	if(n%i==0) {
    		          ++d[i];
			          n/=i; 
			          if(n==1) break;
		           } else  i++;			          
	}
	for(int i=2;i<=x;i++)
	if(d[i]!=0) cout<<i<<" "<<d[i]<<" ";
	cout<<endl;
	
}  else cout<<n<<" "<<"1\n";
	

}

int main()
{
	int T;
	cin>>T;
	while(T--){
	int n;
    cin>>n;
    phantich(n);
	}

}




