#include <stdio.h>
#include <string.h>

int deque[10000];

void push_front(int x);
void push_back(int x);
int pop_front();
int pop_back();
int size();
int empty();
int front();
int back();

int main()
{
	int n;
	char order[11];
	int x;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", order);

		if (strcmp(order, "push_front") == 0)
		{
			scanf("%d", &x);
			push_front(x);
		}
		else if (strcmp(order, "push_back") == 0)
		{
			scanf("%d", &x);
			push_back(x);
		}
		else if (strcmp(order, "pop_front") == 0)
			printf("%d\n", pop_front());
		else if (strcmp(order, "pop_back") == 0)
			printf("%d\n", pop_back());
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

void push_front(int x)
{
	for (int i = size() - 1; i >= 0; i--)
		deque[i + 1] = deque[i];

	deque[0] = x;
}

void push_back(int x)
{
	deque[size()] = x;
}

int pop_front()
{
	if (empty() != 1)
	{
		int res = deque[0];

		for (int i = 0; i < size() - 1; i++)
			deque[i] = deque[i + 1];

		deque[size() - 1] = 0;

		return res;
	}
	else
		return -1;
}

int pop_back()
{
	if (empty() != 1)
	{
		int res = deque[size() - 1];
		deque[size() - 1] = 0;

		return res;
	}
	else
		return -1;
}

int size()
{
	int cnt = 0;

	for (int i = 0; i < 10000; i++)
	{
		if (deque[i] != 0)
			cnt++;
		else
			return cnt;
	}
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
	if (empty() != 1)
		return deque[0];
	else
		return -1;
}

int back()
{
	if (empty() != 1)
		return deque[size() - 1];
	else
		return -1;
}