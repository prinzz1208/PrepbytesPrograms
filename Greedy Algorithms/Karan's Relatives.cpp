
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define fop first
#define sop second
#define ll long long int
#define vi vector<ll>
#define vs vector<string>
#define print(a) cout << a

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define test(string,a) cout<<string<<a

#define FEI(el,s) for(int el : s)
#define FOR(index,a,n) for (int index = a; index < n; index++)
#define FORD(index,a,n) for (ll index = a; index >= n; index--)
#define NL cout<<"\n"
#define TAB '\t'



struct Edge {
    int vertex1;
    int vertex2;
    int weight;
    Edge(int v1, int v2, int w):vertex1(v1), vertex2(v2), weight(w) {}
};

struct Graph {
    vector<int> vertice;
    vector<Edge> edges;
    vector< pair<int, Edge> > adjacent(int u) {
        vector< pair<int, Edge> > res;
        for (Edge e : edges) {
            if (e.vertex1 == u) {
                res.push_back( make_pair(e.vertex2, e));
            } else if (e.vertex2 == u) {
                res.push_back( make_pair(e.vertex1, e));
            }
        }
        return res;
    }
};

int prim(Graph& g, int root) 
{
    unordered_map<int, int> res;
    unordered_map<int, int> PARENT;
    unordered_map<int, int> KEY;
    int sum = 0;

    for (auto c : g.vertice) {
        PARENT[c] = '\0';
        KEY[c] = INT_MAX;
    }
    KEY[root] = 0;
    vector<int> Q = g.vertice;

    while (!Q.empty()) {    // O(V)
        int u = *(min_element(Q.begin(), Q.end(), [&](int x, int y) {return KEY[x] < KEY[y];}));  // O(v) returns an iterator to the element

    vector<int>::iterator itr = remove(Q.begin(), Q.end(), u);  // O(V) retruns an iterator to the element which was following the removed eleAment

    Q.erase(itr, Q.end());  // erase() following remove()

        if (PARENT[u] != '\0') {

            res[u] = PARENT[u];   // This is one edge of MST
            //cout<<"\nres[u]:"<<res[u]<<"\tPARENT[u]:"<<PARENT[u];
        }
        vector< pair<int, Edge> > adj = g.adjacent(u);   // O(E)
        for (pair<int, Edge> v : adj) {
            if (find(Q.begin(), Q.end(), v.first) != Q.end()) {   // O(V)
                //cout<<"\nv:"<<v.first;
                if (v.second.weight < KEY[v.first]) {
                    PARENT[v.first] = u;
                    KEY[v.first] = v.second.weight;
                    sum += v.second.weight;
                }
            }
        }
    }


    //for (auto e : res) {
        //cout << e.first << " -- " << e.second << endl;
    //}
    return sum;
}

int main() {

    sync;
    int nodes,v1,v2,w,r;
    cin>>nodes;
    int m;
    cin >> m;
    Graph g;
    g.vertice = vector<int>(nodes);
    
    for(int i=1; i<=nodes; i++)
    {
      g.vertice.pb(i);
    }
    for(int i=0; i<m; i++)
    {
        cin >> v1 >> v2 >> w;
        g.edges.push_back(Edge(v1,v2,w));
    
    }
    cin >> r;
    //for ( auto itr = g.edges.begin(); itr!=g.edges.end(); itr++)
    //{
            //cout<<(*itr).vertex1<<"\t";
            //cout<<(*itr).vertex2<<"\t";
            //cout<<(*itr).weight<<"\t";
            //cout<<"\n";
    //}

    vi ans;

    // for (int i = 1; i <=nodes; i++)
    // {
    //     ans.pb(prim(g,i));
    //     //NL;
    // }
    // print(*min_element(ans.begin(),ans.end()));
    print(prim(g,r));
    return 0;
}
