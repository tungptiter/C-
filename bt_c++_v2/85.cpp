#include<iostream>
#include<cmath>
using namespace std;

void arr(int n,int b[]){ // mang nhap
	for(int i=0;i<n;i++)
	cin>>b[i];
}
void bcd(int n,int a[]){ // mang benary code decima
	for(int i=0;i<n;i++)
	a[i]=0;
}
void result(int n,int a[]){ // sinh xau nhi phan
	int i=n-1;
	while(i>0 && a[i]!=0){
		a[i]=0;
		i--;
	}
	a[i]=1;
}
int text(int n,int a[]){ // kiem tra lien tuc xau 1
	int i=n-1;
	while(i>0 && a[i]!=1) i--;
	int j=0;
	while(j<n && a[j]!=1) j++;
	for(int x=j;x<=i;x++)
	if(a[x]==0) return 0;
	return 1;
}

int sum(int n,int a[],int b[]){ // tinh tong xau lien tuc 1
	int sum=0;
	int i=n-1;
	while(i>0 && a[i]!=1) i--;
	int j=0;
	while(j<n && a[j]!=1) j++;
	for(int x=j;x<=i;x++)
	sum=sum+b[x];
	return sum;	
}

int sumOfList(int n,int a[],int b[]){
	int x=pow(2,n);
	int max=b[n-1];
	while(--x){
		result(n,a);
		if(text(n,a)==1) {
			int Sum=sum(n,a,b);
			if(Sum>max) max=Sum;
		}
	}
	return max;
	
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		arr(n,b);
		bcd(n,a);
		cout<<sumOfList(n,a,b)<<endl;
	}
}

