#include<iostream>
#include<cstring>
using namespace std;
void arr(int n,int a[],string s){
     for(int i=0;i<n;i++){
     	cin>>a[i];
     	s[a[i]]++;
	 } 
	 for(int i=0;i<n;i++)
	 if(s[a[i]]>=2) {
	 	cout<<a[i]<<endl;
	 	break;
	 }    
}
int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int a[n];
		string s;
		arr(n,a,s);
	}	
}

