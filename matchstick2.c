/*
** matchstick2.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Thu Feb 16 18:00:07 2017 ferchaud kevin
** Last update Wed Feb 22 18:41:02 2017 ferchaud kevin
*/

#include "my.h"

char	**myexiteu()
{
  char	**exiteu;

  exiteu = malloc(sizeof(char *) * 2);
  exiteu[0] = my_strdup("exit");
  exiteu[1] = NULL;
  return (exiteu);
}

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  int   cpt;

  cpt = -1;
  while (str[++cpt] != '\0')
    my_putchar(str[cpt]);
}

int	main2(char **map, char **av, char **test)
{
  while (1)
    {
      printmap(map);
      my_putstr("\nYour turn:\n");
      while ((test = my_turn(map, av[1], av[2], 0)) == NULL);
      if (isexit(test) == 1)
	{
	  my_putchar('\n');
	  return (0);
	}
      map = my_turn(map, av[1], av[2], 1);
      if (isfinished(map) == 1)
	{
	  printmap(map);
	  my_putstr("You lost, too bad...\n");
	  return (2);
	}
      map = ia_turn(map, av[1], av[2]);
      if (isfinished(map) == 1)
	{
	  printmap(map);
	  my_putstr("I lost... snif... but I'll get you next time!!\n");
	  return (1);
	}
    }
}
