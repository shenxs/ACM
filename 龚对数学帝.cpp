#include <stdio.h>
#include <string.h>
static char map[1001][400];
static void _do(char *src, char *dst)
{
  int i = 0;
  int tmp;
  while(src[i])
    {
      tmp = src[i] - '0';
      tmp *= 2;
      tmp += dst[i];
      dst[i] = (tmp % 10) + '0';
      dst[i + 1] += tmp/10;
      i ++;
    }
  if(dst[i]) dst[i] += '0';
}
static void create_map(void)
{
  int i;
  memset(map, 0, sizeof(map));
  strcpy(map[0], "1");
  for(i = 1; i <= 1000; i ++)
    {
      _do(map[i - 1], map[i]);
    }
}
int main()
{
  int i = 1000, j;
  //scanf("%d", &i);
  create_map();
  while(scanf("%d", &i) != EOF)
    {
      if(i < 0 || i > 1000)
        {
          printf("input error, should be 0-1000\n");
          continue;
        }
      j = strlen(map[i]);
      while(--j >= 0)
        printf("%c", map[i][j]);
      printf("\n");
    }
  return 0;
}
