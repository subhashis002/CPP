#include<iostream>
#include<list>

using namespace std;

//Graph class represents a directed graph
//using adjacency list representation

class Graph{
        int V;  //No of vertices

        //pointer to an array containing adjacency list
        list<int> *adj;
        
        //A recursive function used by the DFS
        void DFSUtil(int v,bool visited[]);
    public:
        Graph(int V); //Constructor

        //function to add an edge to graph
        void addEdge(int v, int w);

        //DFS traversal of the vertices
        //reachable from v
        void DFS(int v);
};


Graph::Graph(int v){
    this->V = v ;
    adj = new list<int>[V];
}

void Graph::addEdge(int u,int w){
    adj[u].push_back(w); 
}

void Graph::DFSUtil(int v,bool visited[]){
    //Mark the current node as visisted and print it
    
    visited[v] = true;
    cout<<v<<" ";

    //Recur for all the vertices adjacent to this vertex
    
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i){
        if(!visited[*i]){
            DFSUtil(*i,visited);
        }
    }
}

void Graph::DFS(int v){
    //mark all the vertices as not visited
    
    bool *visited = new bool[V];
    for(int i=0; i<V; i++)
        visited[i] = false;


    //call the recursive helper function to print DFS traversal
    //
    DFSUtil(v, visited);
}

//Driver code
//
int main(){
    Graph g(4);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,3);
    g.addEdge(2,0);
    g.addEdge(1,2);

    cout<<"Following is Depth First Traversal"
        <<"(starting from vertex 2)\n";

    g.DFS(2);
    return 0;
}


