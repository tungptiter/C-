#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
void arr(int n,int a[]){ // mang
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void bcd(int n,int b[]){ // mang bcd
	for(int i=0;i<n;i++)
	b[i]=0;
}
void result(int n,int b[]){ // sinh xau nhi phan
	int i=n-1;
	while(i>0 && b[i]!=0){
		b[i]=0;
		i--;
	}
	b[i]=1;
}
int listPlus(int n,int a[],int b[]){ // kiem tra day tang
    int i=0;
    while(i<n && b[i]!=1) i++; // so 1 dau tien trong bcd
    int max=a[i],d=1; // d de dem so so trong list
    for(int j=i+1;j<n;j++)
    if(b[j]==1) {
    	if(a[j] > max) {
    		max=a[j];
    		d++;
		}
    	if(a[j] < max) return 0; // khong phai day tang
	}
	return d;
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		arr(n,a);
		bcd(n,b);
		int x=pow(2,n),MAX=0;
		while(--x){
			result(n,b);
			int max=listPlus(n,a,b);
			if(max>MAX) MAX=max;
		}
		cout<<MAX<<endl;
	}
}

