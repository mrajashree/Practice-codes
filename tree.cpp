#include <iostream>
#include <string.h>
using namespace std;

typedef struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
}TREE;

TREE *root=NULL;

int main()
{
	int pre[] = {7,5,4,6,9,8,10};
	int i=0,size = sizeof(pre);
	//first ele root;
	
	construct(pre,i,size);

}

void construct(int pre[],int l, int h)
{
	int s;
	s = h-l;
	int r = pre[l];
	int init_l = l;
	
	root->data = pre[0];
	
	if(s>1)
	{
		while(l<h)
		{
			if(pre[l]<pre[r])
				l++;
			else
			{
				construct(pre,init_l,)
			}
		}
	}
}











