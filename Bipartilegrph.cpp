#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int > prr[2001];
ll visi[2001]={0},col[2001];





bool dfs(ll a,ll c){//c is color of p

	int q;
	col[a]=c;
	//visited[a]=true;


visi[a]=true;
for(auto &e:prr[a]){

if(!visi[e])
{


if(dfs(e,c^1)==false){//we change the colour of parent
return false;

}
}else{
if(col[a]==col[e])
	return false;


}
}

return true;

}









int main(){

ll p,t,n;
cin>>t;
for(p=1;p<=t;p++){
ll j,k,i,v1,v2;

ll n,m;
cin>>n>>m;
for(i=1;i<n;i++){
	prr[i].clear();

	visi[i]=0;
	col[i]=-1;
}
for(i=1;i<=m;i++){
	cin>>v1>>v2,prr[v1].push_back(v2) , prr[v2].push_back(v1);

}

bool flag=true;

for(i=1;i<=n;i++){
	if(visi[i]==0){
		flag=dfs(i,0);

		if(flag==false){     
break;
		}
	}}

if(flag){
	cout<<"Scenario #"<<p<<":\nNo suspicious bugs found!"<<endl;

}else{
	cout<<"Scenario #"<<p<<":\nSuspicious bugs found!"<<endl;

}




}




}