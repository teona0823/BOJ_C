#include <stdio.h>

int node = -1;
int stack[10000];

void push(int x);
int pop();
int size();
int empty();
int top();

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		char order[6];
		scanf("%s", order);

		int x;

		if (strcmp(order, "push") == 0)
		{
			scanf("%d", &x);
			push(x);
		}
		else if (strcmp(order, "pop") == 0)
			printf("%d\n", pop());
		else if (strcmp(order, "size") == 0)
			printf("%d\n", size());
		else if (strcmp(order, "empty") == 0)
			printf("%d\n", empty());
		else if (strcmp(order, "top") == 0)
			printf("%d\n", top());
	}

	return 0;
}

void push(int x)
{
	stack[++node] = x;
}

int pop()
{
	if (node == -1)
		return -1;
	else
		return stack[node--];
}

int size()
{
	return node + 1;
}

int empty()
{
	if (node == -1)
		return 1;
	else
		return 0;
}

int top()
{
	if (node == -1)
		return -1;
	else
		return stack[node];
}