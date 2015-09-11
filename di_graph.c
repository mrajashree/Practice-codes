#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 5
int queue[MAX],rear=-1,front=-1;
int visited[MAX];
int adj[MAX][MAX];
char graph[5][2] = {"a","b","c","d","e"};
int src, dest;

void insert(int ele)
{
	if(rear == MAX)
		printf("queue full\n");
	else
		queue[++rear] = ele;
}

int del()
{
	int ele;
	if(front == -1 && rear == -1)
	{
		printf("Queue underflow\n");
		return 0;
	}
	else
	{
		ele = queue[++front];
		return ele;
	}
}

int queue_empty()
{
	if(front == rear)
		return 1;
	else	
		return 0;
}

int visit_dest()
{
	if(visited[dest] == 1)
		return 1;
	else	
		return 0;
}

void bfs(int start, int n)
{
	int i,j,b_flag = 0;
	for(i=0;i<n;i++)
		visited[i] = 0;
	insert(start);

	while(!queue_empty())
	{
		start = del();
		printf("Deleted ele : %d, queue front : %d, rear : %d\n",start,front,rear );
		for(j=0;j<n;j++)
		{
			if(adj[start][j]==1 && visited[j]==0)
			{
				visited[j] = 1;
				insert(j);
				if(j==dest)
				{
					printf("Nodes connected\n");
					b_flag = 1;
					break;
				}
			}
		}
		if(b_flag)
			break;
	}

	if(!b_flag)
		printf("Nodes not connected\n");
}

int main(int argc, char *argv[])
{
	
	int num = MAX,i,j;

	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			adj[i][j]=0;
		}
	}

	adj[0][1] = 1;
	adj[1][3] = 1;
	adj[3][2] = 1;
	adj[3][4] = 1;

	for(i=0;i<num;i++)
	{
		printf("node: %s, src : %s\n", graph[i],argv[1]);
		if(strcmp(graph[i],argv[1])==0)
		{
			src=i;
			break;
		}
	}

	for(i=0;i<num;i++)
	{
		if(strcmp(graph[i],argv[2])==0)
		{
			dest=i;
			break;
		}
	}
	printf("src : %d, dest : %d\n", src, dest);

	bfs(src,num);
}




