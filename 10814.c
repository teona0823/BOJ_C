#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int age;
	char name[101];
} Member;

int compare(const void* a, const void* b)
{
	Member* ta = (Member*)a;
	Member* tb = (Member*)b;
	if (ta->age <= tb->age)
		return -1;
	else
		return 1;
}

int main(void)
{
	int n;
	scanf("%d", &n);

	Member* member = (Member*)malloc(sizeof(Member) * n);

	for (int i = 0; i < n; i++)
		scanf("%d %s", &member[i].age, member[i].name);

	qsort(member, n, sizeof(Member), compare);

	for (int i = 0; i < n; i++)
		printf("%d %s\n", member[i].age, member[i].name);

	free(member);

	return 0;
}