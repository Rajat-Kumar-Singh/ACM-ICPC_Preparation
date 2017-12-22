#include <bits/stdc++.h>

#define REP(i,a,b) for(int i=a;i<=b;++i)
#define PER(i,a,b) for(int i=a;i>=b;--i)
#define PB push_back
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define DBG(x) cerr<<"Line "<<__LINE__<<" => "<<" "<<#x<<" : "<< x;

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

//=============================//
mt19937 mrand(random_device{}());
int rnd(int x){return mrand()%x;}
//=============================//

const long long MOD = 1000000007;
ll pw(ll a,ll b){ll res=1LL;while(b){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b>>=1;}return res;}
const int MAXN = 15;
string op[MAXN];
int ans=0,val[MAXN];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n; cin>>n;
	REP(i,1,n) cin>>op[i]>>val[i];
	REP(i,1,100){
		int tmp=i,flag=0;
		REP(j,1,n){
			if(op[j]=="SUBTRACT"){
				tmp-=val[j];
				if(tmp<0)flag=1;
			}else if(op[j]=="ADD"){
				tmp+=val[j];
			}else if(op[j]=="MULTIPLY"){
				tmp*=val[j];
			}else{
				if(tmp%val[j]!=0)flag=1;
				tmp/=val[j];	
			}
		}
		if(flag){++ans;}
	}			
	cout<<ans;
	return 0;
}
