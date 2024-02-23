#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int infinite_while(void);

/**
 * main - Create zombie children and abandon them
 *
 * After creation of a zombie process, enter an infinite loop
 *
 * Return: 0
*/
int main(void)
{
	int zombies_num = 5;

	while (zombies_num > 0)
	{
		if (fork() == 0)
		{
			printf("Zombie process created, PID: %d\n", getpid());
			exit(0);
		} else
		{
			zombies_num--;
		}
	}

	infinite_while();

	return (0);
}

/**
 * infinite_while - Enter a (?) loop
 *
 * Return: 0
*/
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

