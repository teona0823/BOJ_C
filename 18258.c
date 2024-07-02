#include <stdio.h>

int node = -1;
int minus = 0;
int queue[2000000];

void push(int x);
int pop();
int size();
int empty();
int front();
int back();

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
		else if (strcmp(order, "front") == 0)
			printf("%d\n", front());
		else if (strcmp(order, "back") == 0)
			printf("%d\n", back());
	}

	return 0;
}

void push(int x)
{
	queue[++node] = x;
}

int pop()
{
	if (size() == 0)
		return -1;
	else
		return queue[minus++];
}

int size()
{
	return node - minus + 1;
}

int empty()
{
	if (size() == 0)
		return 1;
	else
		return 0;
}

int front()
{
	if (size() == 0)
		return -1;
	else
		return queue[minus];
}

int back()
{
	if (size() == 0)
		return -1;
	else
		return queue[node];
}