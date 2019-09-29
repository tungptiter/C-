#include<iostream>
using namespace std;
void array(int n,int b[]){ // mang nhap
	for(int i=0;i<n;i++)
	cin>>b[i];
}
void result(int b[],int f,int l){ //sap xep tang dan mang nhap 
	int i=f,j=l,mid=(i+j)/2;
	while(i<j){
		while(b[i]<b[mid]) i++;
		while(b[j]>b[mid]) j--;
		if(i<=j){
			swap(b[i],b[j]);
			i++;
			j--;
		}
		if(i<l) result(b,i,l);
		if(j>f) result(b,f,j);
	}
}
int find(int b[],int x,int f,int l){ // tim kiem ,k co -1,co dua ra x
	if(f>l) return -1;
	else {
		int mid=(f+l)/2;
		if(x==b[mid]) return x;
		if(x<b[mid]) return find(b,x,f,mid-1);
		if(x>b[mid]) return find(b,x,mid+1,l);
	}
}
void display(int n,int a[],int b[]){
	result(b,0,n-1);// sap xep mang
	for(int i=0;i<n;i++){
		a[i]=find(b,i,0,n-1);// tim kiem i co trong mang k
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n],b[n];
		array(n,b);
		display(n,a,b);
	}
}

