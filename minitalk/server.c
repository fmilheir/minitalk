#include "libft.h"
#include <signal.h>
#include "minitalk.h"


// aqui converto o  int da funcao getpid numa string usango o itoa para poderr contar co  o strlen o tamanho para por no write
void		print_pid(void)
{
	char	*tmp_pid;

	tmp_pid = ft_itoa(getpid());
	write(1,  "pid: " , tmp_pid ,"\n", ft_strlen(tmp_pid) + 6);
	free(tmp_pid);
}

void main(void)
{
    struct sigaction	s_sigaction;

    print_pid();
    s_sigaction.sa_sigaction = action;
	s_sigaction.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &s_sigaction, 0);
	sigaction(SIGUSR2, &s_sigaction, 0);
	while (1)
		pause();
	return (0);
}

