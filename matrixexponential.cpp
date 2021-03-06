#include<bits/stdc++.h>
#define ll long long
const ll nax=1e8+7;
#define vl vector<ll>
#define pairs pair<ll ,ll>
using namespace std;
#define test cin>>t;while(t--)
ll mo(ll a) {return a%nax;}
#define sp '\n'
void multiply(ll f[2][2],ll m[2][2]){

ll a=mo(f[0][0]*m[0][0]+f[0][1]*m[1][0]);
ll b=mo(f[0][0]*m[0][1]+f[0][1]*m[1][1]);
ll c=mo(f[1][0]*m[0][0]+f[1][1]*m[1][0]);
ll d=mo(f[1][0]*m[0][1]+f[1][1]*m[1][1]);
f[0][0]=a;
f[0][1]=b;
f[1][0]=c;
f[1][1]=d;


}

void  power_(ll f[2][2],ll n ){


if(n==0||n==1)return ;
ll m[2][2]={{1,1},{1,0}};
power_(f,n/2);
multiply(f,f);
if(n&1){
	multiply(f,m);
}



}

int main(){

  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
ll t;
test{

 ll n;

cin>>n;
//ll f[2][2]={{1 1},{1,0}};
ll arr[2][2]={{1,1},{1,0}};

//cout<<"1"<<endl;
power_(arr,n);
cout<<arr[0][0]+arr[0][1]<<endl;












}
}