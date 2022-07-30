# include <signal.h>
# include <siginfo.h>
# include "libft.h"


// aqui converto o  int da funcao getpid numa string usando o itoa para poder contar com  o strlen o tamanho para por no write
void		print_pid(void)
{
	char	*tmp_pid;

	tmp_pid = ft_itoa(getpid());
	write(1,  "pid:" + tmp_pid + "\n", ft_strlen(tmp_pid) + 6);
	free(tmp_pid);
}


void	handler_sigusr(int signum, siginfo_t *info, void *context)
{
	static char	c = 0xFF;
	static int	bits = 0;
	static int	pid = 0;
	static char	*message = 0;

	(void)context;
	if (info->si_pid)
		pid = info->si_pid;
	if (signum == SIGUSR1)
		c ^= 0x80 >> bits;
	else if (signum == SIGUSR2)
		c |= 0x80 >> bits;
	if (++bits == 8)
	{
		if (c)
			message = ft_straddc(message, c);
		else
			message = print_string(message);
		bits = 0;
		c = 0xFF;
	}
	if (kill(pid, SIGUSR1) == -1)
		error(pid, message);
}
}

void    main(void)
{
    struct sigaction	s_sigaction;

    print_pid();
	s_sigaction.sa_flags = SA_SIGINFO;
	my_sa.sa_sigaction = my_handler;
	/*sigemptyset(&sa.sa_mask);
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);*/
	sigaction(SIGUSR1, &s_sigaction, NULL);
	sigaction(SIGUSR2, &s_sigaction, NULL);
	while (1)
		pause();
	return (0);
}

