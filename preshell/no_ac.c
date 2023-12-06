#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{

int i;

printf("argv content is argv[]\n");

while (*av != NULL)
{
printf("argv = %s\n", *av);
av++;
}

return (0);
}
