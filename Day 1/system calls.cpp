#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("BHARATH TP\n");
  printf("Process ID: %d\n", getpid() );
  printf("Parent Process ID: %d\n", getpid() );
  return 0;
}
