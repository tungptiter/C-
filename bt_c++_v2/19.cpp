#include<iostream>
#include<cmath>
using namespace std;

int phantich(int n,int k)
{
	int i=2,j=1,x=n;
	int d[n+1];
	for(int i=1;i<=x;i++)
	d[i]=-1;
	i=2;
    while(i<=x){
    	if(n%i==0) {
    		          d[j]=i;
    		          j++;
			          n/=i; 
			          if(n==1) break;
		           } else i++;		                    		                    				          
	}
	return d[k];
}  
	

int main()
{
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		cout<<phantich(n,k)<<endl;
	}

}



