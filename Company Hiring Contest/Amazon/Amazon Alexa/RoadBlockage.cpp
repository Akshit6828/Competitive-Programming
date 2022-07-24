#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define deb(x) cout << #x <<" = "<< x <<"\n" 
#define vi vector<int>



void addAdjacencyList(vector<vector<int>> &graph, int node1, int node2, bool bidirectional = true){
    graph[node1].push_back(node2);
    if(bidirectional)
        graph[node2].push_back(node1);
}

void printGraph(vector<vector<int>> &graph){
    for(int i = 0; i< graph.size(); i++){
        cout<<i <<": ";
        for(int x: graph[i])
            cout<<x<<" ";
        cout<<endl;
    }
}

int printBFS(std::vector<vector<int>> &graph, int source, vector<bool>  isProcessed, vector<int> query){
    int totalNodes= graph.size();
    
    int start = query[0];
    int end = query[1];

    queue<int> processingNodes;
    isProcessed[source] = true;
    processingNodes.push(source);
    
    int path = 0;
    
    while(!processingNodes.empty()){
        int currentNode = processingNodes.front();
        int curPath = 0;
        processingNodes.pop();
        cout<<"CurrentNode = "<<currentNode<<endl;
        for(int neighbour : graph[currentNode]){

            cout<<" : neighbour  = "<<neighbour<<endl;

            if(neighbour == start && isProcessed[neighbour] == end){
                cout<<"Break point Opps!"<<endl;
                path = max(path,curPath);
                break;
            }
            if(isProcessed[neighbour] == false){
                curPath += 1;
                isProcessed[neighbour] = true;
                processingNodes.push(neighbour);
            }
        }
    }
    return path;


}
int main(){
    int edges;
    cin>>edges;

    vector<vector<int>> graph(edges + 1, vector<int>(0)); // edge + 1 if graph is starting from 0.
    // vector<vector<int>> graph(edges, vector<int>(0)); // edge if graph is starting from 1
    
    for(int i = 1; i<=edges;i++){
        int from , to;
        cin>>from>>to;
        addAdjacencyList(graph,from,to);
    }

    //cout<<"Printing Graph\n";
    //printGraph(graph);

    int totalNodes = graph.size();
    vector<bool> isProcessed(totalNodes, false);


    vector<vector<int>> queries  ={{0,1},{1,4}};

    for(int i = 0; i< queries.size() ; i++){
        vector<int> query = queries[i];
        cout<<printBFS(graph, 0, isProcessed, query)<<endl;
    }
    
    return 0;
}