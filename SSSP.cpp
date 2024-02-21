#include<iostream>
#include<limits.h>
using namespace std;

#define V 9
int mindist(int dist[V],bool set_v[V])
{
    int min_val=INT_MAX;
    int min_index;
    for(int i=0;i<V;i++)
    {
        if(!set_v[i] && dist[i]<min_val)
        {
            min_val=dist[i];
            min_index=i;
        }
    }
    return min_index;
}

void print(int dist[], int parent[], int n) {
    for (int i = 0; i < V; i++) {
        cout << "\t" << i << "\t\t\t\t" << dist[i];
        cout << endl;
    }
}

void dijkstra(int graph[V][V],int source)
{
    int dist[V];
    bool set_v[V];
    int parent[V];

    for(int i=0;i<V-1;i++)
    {
        dist[i]=INT_MAX;
        set_v[i]=false;
        parent[i]=-1;
    }

    dist[source]=0;
    for(int count = 0;count < V ;count++)
    {
        int u = mindist(dist,set_v);
        set_v[u]=true;
        for(int v=0;v<V;v++)
        {
            if(!set_v[v] && dist[u] + graph[u][v] < dist[v]&& graph[u][v] && dist[u] != INT_MAX)
            {
                dist[v]=dist[u]+graph[u][v];
                parent[v]=u;
            }
        }
    }
    print(dist,parent,V);
}

int main() {
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    dijkstra(graph, 0);

    return 0;
}
