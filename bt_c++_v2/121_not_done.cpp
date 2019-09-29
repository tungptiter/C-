#include<iostream>
using namespace std;

void arr(int n,int a[]){
	for(int i=0;i<n;i++)
	cin>>a[i];
}
int tang(int a[],int k,int f,int l){ // tang dan
	if(f>l) return -1;
	int mid=(f+l)/2;
	if(k==a[mid]) return mid;
	if(k<a[mid]) return tang(a,k,f,mid);
	if(k>a[mid]) return tang(a,k,mid,l);
}
int giam(int a[],int k,int f,int l){ // giam dan
	if(f>l) return -1;
	int mid=(f+l)/2;
	if(k==a[mid]) return mid;
	if(k<a[mid]) return giam(a,k,mid,l);
	if(k>a[mid]) return giam(a,k,f,mid);
}
//void search(int n,int k,int a[]){
//	int mid=n/2;
//	int x=tang(a,k,0,n-1);
//	int y=giam(a,k,0,n-1);
//	if(x==-1 && y==-1) cout<<"-1\n";else if(x!=-1) cout<<x<<endl;else if(y!=-1) cout<<y<<endl;
//}

int main(){
	int T,n,k;
	cin>>T;
	while(T--){
		cin>>n>>k;
		int a[n];
		arr(n,a);
	    int x=tang(a,k,0,n/2-1);
	    int y=giam(a,k,n/2,n-1);
	    cout<<x<<" "<<y;	
	}
}

