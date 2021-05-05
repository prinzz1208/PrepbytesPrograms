#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define NL cout<<"\n"
#define TAB '\t'

class graph{
	int nodes = 0;
	vi *adj;
	
	public:
		bool *visited;
		vi *ordering;
		bool hasCycle = false;
		graph(int nodes){
			this->nodes = nodes;
			adj = new vi[nodes];
			ordering = new vi[nodes];
			visited = new bool[nodes];
			FOR(i,0,nodes) {
				visited[i] = false;
				adj[i] = vi();
				ordering[i] = vi();
			}
			
		}
		
		void add_node(int u, int v){
			adj[u].pb(v);
			//adj[v].pb(u);
		}
		void clearVisited(){
			FOR(i,0,nodes) visited[i] = false;
		}
		bool isConnected(){
			FOR(i,0,nodes){
				if(!visited[i])
					return false;
			}
			return true;
		}
		void DFS(int node, int root){
		 	//print(node)<<"->";
			visited[node] = true;
			vi neighbours = adj[node];
			//sort(neighbours.begin(),neighbours.end());
			FEI(i, neighbours){
				if(!visited[i]){
					DFS(i,root);
				}
			}
			ordering[root].pb(node);
		
		}
		void topsort() {	
			//DFS(0,0);
			FOR(i,0,nodes){				
				FOR(j,i,nodes) {
					//clearVisited();
					if(!visited[j]){
						DFS(j,j);
					}
					//reverse(ordering[j].begin(),ordering[j].end());
				}
				clearVisited();
				FOR(i,0,nodes){
					FEI(el,ordering[i]){
						print(el)<<TAB;
					}
				//NL;
				}
				FOR(i,0,nodes){ ordering[i] = vi();}
				NL;
			}

		}


};
int main()
{
	sync;

	int v,e; 
	//int t;
	//cin >> t;
	//while (t--)
	//{
	cin >> v >> e;
	graph g = graph(v);
	FOR(i,0,e){
		int x,y;
		cin >> x >> y;
		g.add_node(x,y);
	}
	g.topsort();
	//if(g.isConnected()){
		////FEI(el,g.ordering)
			////print(el)<<TAB;
	//}
		
	//}
}




