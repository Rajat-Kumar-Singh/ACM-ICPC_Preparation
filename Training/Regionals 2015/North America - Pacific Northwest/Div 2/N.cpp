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
const int MAXN = 115;
int n,k,fl[MAXN],ans1=0,ans2=MAXN;
string result[MAXN];

int main(){
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
	cin>>n>>k;
	REP(i,1,k)result[i]=" ";
	REP(i,1,n){cin>>fl[i];cin>>result[fl[i]];}
	result[1]="SAFE"; result[k]="BROKEN";
	PER(i,k,1)if(result[i]=="SAFE"){ans1=i+1;break;}
	REP(i,1,k)if(result[i]=="BROKEN"){ans2=i-1;break;}
	cout<<ans1<<" "<<ans2<<'\n';		
	return 0;
}
