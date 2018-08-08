#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int i;

void handler()
{
    printf("hello\n");
    i=0;
}
main()
{
    int i;
    signal(SIGALRM, handler);
    alarm(5);
    for(; 1; )
    {
        printf("sleep %d ...\n", i);
        i++;
        sleep(1);
    }
}