#include <stdio.h>

int node = -1;
int stack[1000000];

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
		int order;
		scanf("%d", &order);

		int x;

		switch (order)
		{
		case 1:
			scanf("%d", &x);
			push(x);
			break;
		case 2:
			printf("%d\n", pop());
			break;
		case 3:
			printf("%d\n", size());
			break;
		case 4:
			printf("%d\n", empty());
			break;
		default:
			printf("%d\n", top());
			break;
		}
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