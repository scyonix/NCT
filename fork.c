#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
fork();
fork();
printf("Welcome to Eshwar college and pid is %d\n",getpid());
return 0;
}
