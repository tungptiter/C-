#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int b[]){//mang 
	for(int i=0;i<n;i++)
	cin>>b[i];
}
void arrBcd(int n,int a[]){//mang nhi phan
	for(int i=0;i<n;i++)
	a[i]=0;
}
void result(int n,int a[]){//thay doi mang nhi phan
	int i=n-1;
	while(i > 0 && a[i] != 0){
		a[i]=0;
		i--;
	}
	a[i]=1;
}
int text(int n,int a[],int b[]){//kiem tra chuoi tang
	int i=0;
	while(i<n && a[i] !=1) i++;
	int max=b[i];
	for(int j=i+1;j<n;j++)
	if(a[j]==1 && b[j] > max) max=b[j];
	else if(a[j]==1 && b[j] < max) return 0;
	return 1;
}
int sum(int n,int a[],int b[]){//tinh tong day so
	int sum=0;
	
	for(int i=0;i<n;i++)
	if(a[i]==1) sum=sum+b[i];
	
	return sum;
}

int sumMax(int n,int a[],int b[]){
	int x=pow(2,n);
	arr(n,b);//mang
	arrBcd(n,a);//mang nhi phan
	int sumMax=a[0];
	while(--x){
         result(n,a);
         if(text(n,a,b)==1) {
         	int max=sum(n,a,b);
         	if(max > sumMax) sumMax=max;
		 }
	}
	return sumMax;
}



int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n];
        cout<<sumMax(n,a,b)<<endl;	
	}	
	
}

