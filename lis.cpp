#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define  mp map<ll>
#define fi first
#define si second
#define f(a,b) for(ll i=a;i<b;i++)
#define pb push_back
const ll nax=1e6+3;
int main(){
ll n;
cin>>n;
ll arr[n+1];
ll i,j,k;
for(i=0;i<n;i++)cin>>arr[i];

ll dp[n+2];
for(i=0;i<n;i++){
	dp[i]=1;
for(j=0;j<i;j++){
	if(arr[i]>arr[j])
	dp[i]=max(dp[i],dp[j]+1);

}
}



cout<<*max_element(dp,dp+n)<<endl;


return 0;}