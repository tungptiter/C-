#include<iostream>
#include<cmath>
using namespace std;

void array(int n,int arr[]){
	for(int i=0;i<n;i++)
	cin>>arr[i];
}
void firstZero(int n,int arr[]){
	int i=0;
	while(i<n){
		if(arr[i]==0){
			for(int j=i+1;j<n;j++)
			if(arr[j] != 0){
				swap(arr[i],arr[j]);
				break;
			}
		}
		i++;
	}
}

void result(int n,int arr[]){
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			arr[i]=arr[i]*2;
			arr[i+1]=0;
			firstZero(n,arr);
		}
	}
}

void output(int n,int arr[]){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int T,n;
	cin>>T;
	while(T--){
		cin>>n;
		int arr[n];
		array(n,arr);
		firstZero(n,arr);
		result(n,arr);
		output(n,arr);
		
	}
}




