#include<bits/stdc++.h>
#define ll int
const ll nax=1e9+7;
#define vl vector<ll>
#define pairs pair<ll ,ll>
using namespace std;
#define test cin>>t;while(t--)
#define f(a,b) for(ll i=a;i<b;i++)
ll mo(ll a) {return a%nax;}
#define sp '\n' 
 int subarraySum(vector<int>& arr, int k) {
        
    
       ll n=arr.size(); 
ll count=0;
ll sum=0;
map<ll,ll >st;
st[0]=1;
for(ll i=0;i<n;i++){

sum+=arr[i];

if(st.find(sum-k)!=st.end())
{

count+=st[sum-k];


}

st[sum]++;

}


return count;

        }


int main(){

  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll t;
test{

ll n,k;
cin>>n>>k;
vl arr;
arr.resize(n+1);
for(ll i=0;i<n;i++){
	cin>>arr[i];
}


cout<<subarraySum(arr,n)<<endl;

}


}