#include "libft.h"
#include <signal.h>
#include "minitalk.h"

void    message(void)
{
    write(1, "usage: ./client [server-pid] [message]\n", 39);
	exit(0);
}
void	success(int sig)
{
	(void)sig;
	write(1, "Data has been received.\n", 25);
}



int main(int argc, char **argv)
{
    if (argc != 3)
        message()
    signal(SIGUSR1, success);
	handler(argv[1], argv[2]);
	return (0);
}