#include<stdio.h>
int main()
{
	int ne=1,n,i,j,min,mincost=0,u,v,adj[10][10],visited[10]={0};
	printf("enter the number of vertices:");
	scanf("%d",&n);
	printf("enter the adjucency metrices:");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
			if(adj[i][j]==0)
			{
				adj[i][j]=9999;
			}
		}
	}
	visited[1]=1;
	while(ne<n)
	{
		for(i=1,min=999;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(visited[i]!=0 && adj[i][j]<min)
			{
				min=adj[i][j];
				u=i;
				v=j;
			}
		}
	}
	if(visited[u]==0 || visited[v]==0)
	{
		printf("/n edges%d (%d,%d):%d",ne++,u,v,min);
		mincost=min+mincost;
		visited[v]=1;
	}
      adj[u][v]=adj[v][u]=9999;
  }
  printf("minimum cost:%d",mincost);
  return 0;
}
		
		
