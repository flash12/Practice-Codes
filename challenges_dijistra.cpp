
//#include<bits/stdc++.h>
#include <iostream>
using namespace std;
#include<unordered_map>
#include<map>
#include<set>
#include<climits>
#include<list>

template<typename T>

class Graph { 

    unordered_map<T, list<pair<T, int>> > m; 

    public:

    void addEdge(T u, T v, int dist, bool bidir=true) {
        m[u].push_back(make_pair(v,dist));
        if(bidir){
            m[v].push_back(make_pair(u,dist));
        }
    }   
    void printAdj(){
        
        for(auto j: m){
            cout<<j.first<<"->";

            for(auto l: j.second) {
                cout<<"("<<l.first<<","<<l.second<<")";
            }
            cout<<endl;
        }
    }

    void dijsktraSSSP(T src) {

        map<T, int> dist;
        for(auto j: m){
            dist[j.first] = INT_MAX;
        }
        set<pair<int, T>> s;

        dist[src] = 0;
        s.insert(make_pair(0,src));

        while(!s.empty()){
            //Find the pair at the front.
            auto p = *(s.begin());
            T node = p.second;
            int nodeDist = p.first;
            s.erase(s.begin());

            //Iterrate over nbrs of the current node
            for(auto childPair: m[node]) {
                
                if(nodeDist + childPair.second < dist[childPair.first]){
                    T dest = childPair.first ;
                    auto f = s.find(make_pair(dist[dest], dest));;
                    if(f!= s.end()) {
                        s.erase(f);
                    }
                    //Insert new Pair
                    dist[dest] = nodeDist + childPair.second;
                    s.insert(make_pair(dist[dest],dest));
                }
            }
        }
        //Lets print distance to all other node from src
        dist.erase(src);
        for(auto d:dist) {
            //cout<<d.first<<" is located at distance of "<<d.second<<endl;
            cout<<d.second<<" ";
        }
        
    }
};

int main() {

    // Graph<string> india;
    // india.addEdge("Amritsar", "Delhi", 1);
    // india.addEdge("Amritsar", "Jaipur", 4);
    // india.addEdge("Jaipur", "Delhi", 2);
    // india.addEdge("Jaipur", "Mumbai", 8);
    // india.addEdge("Bhopal", "Agra", 2);
    // india.addEdge("Mumbai", "Bhopal", 3);
    // india.addEdge("Agra", "Delhi", 1);

    // india.printAdj();
    // india.dijsktraSSSP("Amritsar");

    int t;
    cin>>t;
    while(t--) {

        Graph<int> a;
        int n,m;
        cin>>n>>m;

        for(int i=0; i<m; i++){
            int x,y,w;
            cin>>x>>y>>w;
            a.addEdge(x,y,w);
        }
        int k;
        cin>>k;
    //    a.printAdj();
        a.dijsktraSSSP(k);
        cout<<endl;
    }

return 0;
}
