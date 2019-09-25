#include <limits.h>
#include <stdio.h>
#define V 9
int dist[V];

int minDistance(int dist[], bool sptSet[])
{
	int min = INT_MAX, min_index;
	for (int v = 0; v < V; v++)
		if (sptSet[v] == false && dist[v] <= min)
			min = dist[v], min_index = v;

	return min_index;
}
void dijkstra(int graph[V][V], int src)
{

	bool sptSet[V];
	for (int i = 0; i < V; i++)
		dist[i] = INT_MAX, sptSet[i] = false;
	dist[src] = 0;
	for (int count = 0; count < V - 1; count++) {
		int u = minDistance(dist, sptSet);
		sptSet[u] = true;
		for (int v = 0; v < V; v++)
			if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX
				&& dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
	}
}
int main()
{
	int graph[V][V];
	for(int i=0;i<V;i++)
        for(int j=0;j<V;j++)
            graph[i][j]=0;

    for(int i=0;i<14;i++){
        int a,b,w;
        scanf("%d %d %d", &a, &b, &w);
        graph[a][b]=w;
        graph[b][a]=w;
    }
	dijkstra(graph, 0);
	int dest;
	scanf("%d",&dest);
	printf("%d",dist[dest]);
	return 0;
}
/*

0 1 4
0 7 8
1 7 11
1 2 8
7 8 7
7 6 1
2 8 2
2 5 4
2 3 7
8 6 6
6 5 2
3 5 14
3 4 9
5 4 10
5

Output:
11

*/
