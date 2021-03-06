//this code for finding maximum length of  subarray have  contain equal number of 0 and 1
.//https://www.youtube.com/watch?v=1WugaISSWx8 
	//watch this video

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

ll n;
cin>>n;
ll arr[n+1];
ll i,j,k;
for(i=0;i<n;i++){cin>>arr[i];
if(arr[i]==0)arr[i]=-1;
}
map<ll,ll> st;
st[0]=-1;
ll sum=0;
ll max_length=0;

for(i=0;i<n;i++){

sum=sum+arr[i];


if(st[sum]!=0){

	ll tr=i-st[sum];
	if(tr>max_length){
		max_length=tr;
	}

}else
{
	st[sum]=i;
}
}

cout<<max_length<<endl;





}
