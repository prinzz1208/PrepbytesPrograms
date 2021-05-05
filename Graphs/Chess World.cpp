#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FOR(index,a,n) for (int index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'


int kx[]={-2, -1, 1, 2, -2, -1, 1, 2};
int ky[]={-1, -2, -2, -1, 1, 2, 2, 1};
int n = 8;
bool visited[1001][1001] = {0};
struct node{
	pair<int,int> move;
	int dist;
	
	node(pair<int,int> move, int dist){
		this->move = move;
		this->dist = dist;
	}
};
int BFS(pair<int,int> root,int dist){
	queue<node*> q;
	q.push(new node(root,dist));
	//bool found = false;
	while(!q.empty()){
		node *p = q.front();
		if(p->move.fop == 1 && p->move.sop == 1){
			return p->dist;
		}
		q.pop();
		vector<node*> neighbours;
		
		FOR(i,0,n){
			int move1 = p->move.fop - kx[i], 
			move2 = p->move.sop - ky[i];
			if((move1 >= 1 && move1 <= 1000) && (move2 >= 1 && move2 <= 1000)){
				neighbours.pb(new node(mk(move1,move2),p->dist+1));
			}
		} 
		
		for(auto x : neighbours){
			if(x->move.first <= root.fop && x->move.sop <= root.sop && !visited[x->move.fop][x->move.sop]){	
				test("x:",x->move.fop)<<TAB;
				test("y:",x->move.sop);
				NL;
				q.push(x);
				visited[x->move.fop][x->move.sop] = true;
			}
		}
	}
	return 0;	
}
int main()
{
	sync;
	int t; cin >> t;
	while (t--)
	{
		int x,y;
		FOR(i,0,1001)
			FOR(j,0,1001)
				visited[i][j] = 0;

		cin >> x >> y;
		print(BFS(mk(x,y),0));
		NL;
	}
	
}
