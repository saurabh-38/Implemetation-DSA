#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int > prr[2001];
ll visi[2001]={0};

//col[2001];

bool dfs(ll a,ll p){
	visi[a]=1;
	for(auto &e:prr[a]){

if(!visi[e])
{
	bool pr=dfs(e,a);//cyclic checking
	if(pr)
	return true; 
	
	}
else if(p!=e){
	return true;
}


}

return false;


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
	//col[i]=-1;
}
for(i=1;i<=m;i++){
	cin>>v1>>v2,prr[v1].push_back(v2) , prr[v2].push_back(v1);

}

if(dfs(1,-1)){

	cout<<"present"<<endl;

}else{

cout<<"Not Present"<<endl;


}

}




return 0;
}
