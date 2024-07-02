#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int x, y, v;
	double time;
	int index;
} Robot;

int compare(const void* a, const void* b)
{
	Robot* ra = (Robot*)a;
	Robot* rb = (Robot*)b;

	if (fabs(ra->time == rb->time))
		return ra->index - rb->index;

	return ra->time > rb->time;
}

int main()
{
	int n;
	scanf("%d", &n);

	Robot* robot = (Robot*)malloc(sizeof(Robot) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &robot[i].x, &robot[i].y, &robot[i].v);

		robot[i].index = i + 1;
		robot[i].time = sqrt(robot[i].x * robot[i].x + robot[i].y * robot[i].y) / (double)robot[i].v;
	}

	qsort(robot, n, sizeof(Robot), compare);

	for (int i = 0; i < n; i++)
		printf("%d\n", robot[i].index);

	free(robot);

	return 0;
}