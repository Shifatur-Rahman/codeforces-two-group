#include <iostream>
using namespace std;
#define ll long long
int main(){

ll t, n, i, sum;
cin>>t;

while(t--){
   cin>>n;
   int arr[n];
   sum = 0;
   for(i=0; i<n; i++){
	cin>>arr[i];
   }
   for(i=0; i<n; i++){
    sum += arr[i];
   }
   cout<<abs(sum)<<endl;
}



}
