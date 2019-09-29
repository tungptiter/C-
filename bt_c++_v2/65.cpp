#include <iostream>
#include <string>

using namespace std;
int Whichputfirst(string a, string b)
{
    string ab=a.append(b);
    string ba=b.append(a);
    if(ab.compare(ba)>0) return 1;
    return 0;
}

void swap(string & a,string & b){
	string c=a;
	a=b;
	b=c;
}

void arrSwap(int n,string a[]){
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	if(Whichputfirst(a[i],a[j])) swap(a[i],a[j]);
}

void out(int n,string a[]){
	for(int i=0; i<n; i++) cin >> a[i];
    arrSwap(n,a);
    for(int i=0; i<n; i++) cout << a[i];
    cout<<endl;
}
main()
{
int T;
cin>>T;
while(T--){
	int n; 
	cin >> n; 
	string a[n];
    out(n,a);
   
}
}



