#include <stdio.h>

int main()
{
int ary[ ] = {3, 4, 5, 1, 6, 9, 9, 6, 10, 6, -5, -5, -5, -6};
int size = sizeof(ary)/sizeof(0);
int count = 0;
for (int i = 0; i < size;)
{
for (int j = 0; j < i; j++)
{
if (ary[ j ] == ary[ i ]) goto end;
}
for (int k = 0; k < size; k++)
{
if (ary[ i ] == ary[ k ]) count++;
}
printf("\n%d ace %d bar.", ary[ i ], count);
count = 0;
end:
i++;
}
}
