#include <stdio.h>

int deque[1000000];

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
	int order, x;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &order);

		switch (order)
		{
		case 1:
			scanf("%d", &x);
			push_front(x);
			break;

		case 2:
			scanf("%d", &x);
			push_back(x);
			break;

		case 3:
			printf("%d\n", pop_front());
			break;

		case 4:
			printf("%d\n", pop_back());
			break;

		case 5:
			printf("%d\n", size());
			break;

		case 6:
			printf("%d\n", empty());
			break;

		case 7:
			printf("%d\n", front());
			break;

		case 8:
			printf("%d\n", back());
			break;
		}
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

	for (int i = 0; i < 1000000; i++)
	{
		if (deque[i] != 0)
			cnt++;
		else
			return cnt;
	}
}

int empty()
{
	if (deque[0] == 0)
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