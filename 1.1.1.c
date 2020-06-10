#include <stdio.h>
#include <stdlib.h>

int intcomp(const void *px, const void *py)
{
  int x = *(const int *)px;
  int y = *(const int *)py;
  return x - y;
}

int a[1000000];

int main(void)
{
  int i, n = 0;

  while (scanf("%d", &a[n]) != EOF)
  {
    n++;
  }
  qsort(a, n, sizeof(int), intcomp);

  printf("---\n");

  for (i = 0; i < n; i++)
  {
    printf("%d\n", a[i]);
  }

  return 0;
}
