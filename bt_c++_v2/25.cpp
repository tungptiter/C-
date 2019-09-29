#include<iostream>
using namespace std;

int ucln(int c,int d){
	int r=1;
	while(r!=0){
		r=c%d;
		c=d;
		d=r;
	}
	return c;
}
int bcnn(int c,int d){
	return c*d/ucln(c,d);
}
int so(int a,int b,int c,int d){
	int n=0;
	int x=bcnn(c,d);
	float A=(float)a/x,B=(float)b/x;
	int i;
	for(int i=a/x;i<=B;i++)
	if(i>=A && i<=B) n++;
	return n;
}
int main(){
	int T,a,b,c,d;
	cin>>T;
	while(T--){
		cin>>a>>b>>c>>d;
		cout<<so(a,b,c,d)<<endl;
	}
}




