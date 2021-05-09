#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define f(a,b) for(ll i=a;i<b;i++)
#define lcm(a,b) (a*b)/gcd(a,b)
#define vll vector<ll>
#define vlll vector<vl>
#define mp map<ll,ll>
ll const tax=1e9+7;
#define pb push_back
#define take_input freopen("input.txt","r",stdin),freopen("output.txt","w",stdout)
#define SIZE 26
struct node{
	bool endofword;
	node* ar[SIZE];
	 ll ct;
};

node* getnode(){
node* n=new node();
n->endofword=false;
n->ct=0;
for(ll i=0;i<26;i++)
{n->ar[i]=NULL;}
return n;
}
void insert(node *root,string in){
node *temp=root;
ll i=0;
while(i<in.length()){

ll x=in[i]-'a';


if(temp->ar[x]==NULL)
{ temp->ar[x]=getnode();

}
temp->ar[x]->ct++;
temp=temp->ar[x];
i++;
}
temp->endofword=true;

}
ll search(node *root,string kt)
{
	node *temp=root,*slop=root;
ll x;
for(ll i=0;i<kt.length();i++){
x=kt[i]-'a';
if(temp->ar[x]==NULL){
	return 0;
}
slop=temp;
temp=temp->ar[x];

}
return slop->ar[x]->ct;


}


signed main(){
//take_input;
node *root=getnode();
ll n,q;

cin>>n>>q;
for(ll i=0;i<n;i++){
	string at;
	cin>>at;
	insert(root,at);

}
for(ll i=0;i<q;i++){
string kt;
	cin>>kt;
	cout<<search(root,kt)<<endl;
}

return 0;

}


 