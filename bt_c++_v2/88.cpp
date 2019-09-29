#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int b[]){ // mang
	for(int i=0;i<n;i++) cin>>b[i];
}
void bcd(int n,int a[]){ // mang bcd
	for(int i=0;i<n;i++) a[i]=0;
}
void result(int n,int a[]){ // thay doi mang bcd
	int i=n-1;
	while(i>0 && a[i]!=0){
		a[i]=0;
		i--;
	}
	a[i]=1;
}
int continuity(int n,int a[]){ // xet tinh lien tuc cua bcd ,return 0 la khong lien tuc
	int i=n-1,j=0;
	while(i>0 && a[i]!=1) i--;
	while(j<n && a[j]!=1) j++;
	for(int x=j+1;x<i;x++)
	if(a[x]==0) return 0;	
	return 1;
}

int sum(int n,int k,int a[],int b[]){ //tong day con > k
	int i=n-1,j=0,sum=0;
	while(i>0 && a[i]!=1) i--;
	while(j<n && a[j]!=1) j++;
	for(int x=j;x<=i;x++)
	sum+=b[x];	
	if(sum>k) return i-j+1;	else return -1;
}

int out(int n,int k,int a[],int b[]){
	   	int Sum=0;
		for(int i=0;i<n;i++)
		Sum+=b[i];
		if(Sum<k) return -1;
		
		int x=pow(2,n),min=n-1,l;
		while(--x){
			result(n,a);
			if(continuity(n,a)==1 && sum(n,k,a,b) != 0) l=sum(n,k,a,b);		
			if(l !=-1 && l<min) min=l;
		}	
		if(min>0) return min;
}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n],b[n];
		arr(n,b);
		bcd(n,a);
        cout<<out(n,k,a,b)<<endl;
	}
}

