#include<bits/stdc++.h>
#define ll long long
const ll nax=1e9+7;
#define vl vector<ll>
#define pairs pair<ll ,ll>
using namespace std;
#define test cin>>t;while(t--)
ll mo(ll a) {return a%nax;}
#define sp '\n' 
ll binary(ll arr[],ll x,ll l,ll r){

ll mid=l+(r-l)/2;

while(l<=r){
ll mid=l+(r-l)/2;

if(arr[mid]==x)return mid;
if(arr[mid]>x)r=mid-1;
else{l=mid+1;}}return -1;} 
ll binay_r(ll arr[],ll x,ll l,ll r){

	ll ans=-1;
 ll mid;
   while(l<=r){

mid=l+(r-l)/2;

if(arr[mid]>=x){

ans=mid;
r=mid-1;
}else{
	l=mid+1;
}



   }

return ans;

}

int main(){

  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll t;
test{


ll n,x;
cin>>n>>x;
ll arr[n+1];
for(ll i=0;i<n;i++)cin>>arr[i];


	sort(arr,arr+n);
ll z=binary(arr,x,0,n-1);
//z==-1?(cout<<"continue"endl;):
x=binary_l(arr,x,0,n-1);
cout<<"a"<<arr[x]<<" x"<<x<<endl;
if(z==-1){
	cout<<"element not exist"<<endl;
continue;
}

cout<<"element exist "<<arr[z]<<endl;




  
}


}