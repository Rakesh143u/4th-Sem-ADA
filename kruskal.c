#include <stdio.h>

struct edge {
    int u;
    int v;
    int wt;
};

typedef struct edge EDGE;

void union_set(int i, int j, int s[]) {
    if (i < j)
        s[j] = i;
    else
        s[i] = j;
}

int find(int p, int s[]) {
    while (p != s[p])
        p = s[p];
    return p;
}

int create_edge(int n, int cost[20][20], EDGE e[50]) {
    int k = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (cost[i][j] != 999) {
                e[k].u = i;
                e[k].v = j;
                e[k].wt = cost[i][j];
                k++;
            }
        }
    }
    return k - 1;
}

int minimum(int n, EDGE e[50]) {
    int min = 999, pos = -1;
    for (int i = 1; i <= n; i++) {
        if (e[i].wt < min) { 
            min = e[i].wt;
            pos = i;
        }
    }
    return pos;
}

void kruskal(int n, int cost[20][20]) {
    EDGE e[50];
    int s[20],t[20][20];
    int m= create_edge(n, cost, e);

    for (int i = 1; i <= n; i++){
        s[i] = i;
    }

    int count = 0, sum = 0,k=1;

    while (count != n - 1) {
        int pos = minimum(m, e);
        if (pos == -1)
            break;

        int u = e[pos].u;
        int v = e[pos].v;
        int wt = e[pos].wt;
        e[pos].wt = 999;

        int i = find(u, s);
        int j = find(v, s);

        if (i != j) {
            t[k][1]=u;
            t[k][2]=v;
            k=k+1;
            sum=sum+cost[u][v];
            count+=1;
            union_set(i,j,s);
            
    }
}

    if (count == n - 1){
    for(int i=1;i<=n-1;i++){
        printf("%d-%d\n",t[i][1],t[i][2]);
    }
    
        printf("Minimum cost of spanning tree = %d\n", sum);
}
    else{
        printf("Spanning tree doesn't exist.\n");
    }

}

void main() {
    int cost[20][20], n;
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter the cost matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            printf("Cost between %d and %d: ", i, j);
            scanf("%d", &cost[i][j]);
            cost[j][i] = cost[i][j]; // symmetric matrix
        }
    }

    kruskal(n, cost);
}