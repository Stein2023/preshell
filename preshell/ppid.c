#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(void)
{

pid_t parent_pid;
parent_pid = getppid();
printf("%u\n", parent_pid);
return (0);
}
