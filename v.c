#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
printf("Hello\n");
fork();
printf("bye \n”);
return 0;
}
