//this algorithm work on the basic of removing atmost one element from the array  
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

ll n;
cin>>n;
ll arr[n+1];
ll i,j,k;
for(i=0;i<n;i++){
	cin>>arr[i];
}

ll cur_max,max_far;
cur_max=arr[0];
max_far=arr[0];
ll fw[n+1],bc[n+1];
fw[0]=arr[0];

for(i=1;i<n;i++){
cur_max=max(cur_max+arr[i],arr[i]);
max_far=max(max_far,cur_max);
fw[i]=max_far;}


bc[n-1]=arr[n-1];
max_far=arr[n-1];
cur_max=arr[n-1];
for(i=n-2;i>=0;i--){
cur_max=max(cur_max+arr[i],arr[i]);
max_far=max(max_far,cur_max);
bc[i]=max_far;

}

ll taa=max_far;

for(i=1;i<n-1;i++){

taa=max(taa,bc[i+1]+fw[i-1]);



}







cout<<taa<<endl;

}
int main(){

ll t;
cin>>t;
while(t--){
	solve();
}

} 