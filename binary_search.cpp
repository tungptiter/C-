
using namespace std;

int main(){
  int n ;
  cout<<"Nhap n: ";
  cin>>n;
  int a[n + 1];
  for(int i = 0;i < n;i++)
    cin>> a[i];
  int x;
  int r = n - 1, l = 0;
  cout <<"x can tim: ";
  cin>>x;
  int mid = (l + r)/2;

  while (r >= l){
    if (a[mid] < x){
      l++;
    }
    else if( a[mid] == x){
      cout<< x << " found at location " << mid + 1;
      break;
    }
    else {
      r--;
    }
    mid = (l + r)/2;
  }
  if (l > r){
  cout<<" Not found" << x;
  }
}
