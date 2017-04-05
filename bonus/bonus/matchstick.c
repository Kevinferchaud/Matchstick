/*
** matchstick.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 14:04:47 2017 ferchaud kevin
** Last update Thu Feb 16 18:00:01 2017 ferchaud kevin
*/

#include "my.h"

int	my_getnbr(char *str)
{
  int	res;
  int	i;
  int	test;

  i = 0;
  res = 0;
  test = 0;
  if (str[0] == '-')
    {
      i++;
      test = 1;
    }
  while (str[i])
    {
      res = res * 10 + (str[i] - '0');
      i++;
    }
  if (test == 1)
    res *= -1;
  return (res);
}

int	isfinished(char **map)
{
  int	cpt;
  int	cpt2;

  cpt = -1;
  while (map[++cpt] != NULL)
    {
      cpt2 = -1;
      while (map[cpt][++cpt2] != '\0')
	if (map[cpt][cpt2] == '|')
	  return (0);
    }
  return (1);
}

int	isexit(char **test)
{
  if (test[0][0] == 'e' &&
      test[0][1] == 'x' &&
      test[0][2] == 'i' &&
      test[0][3] == 't' &&
      test[0][4] == '\0' &&
      test[1] == NULL)
    return (1);
  return (0);
}

int	main2(char **map, char **av)
{
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
  return (0);
}

int	main(int ac, char **av)
{
  char	**map;
  char	**test;
  int	res;

  if (checkerror(ac, av) == 84)
    return (84);
  srand(getpid());
  map = do_mymap(av);
  while (1)
    {
      printmap(map);
      my_putchar('\n');
      while ((test = my_turn(map, av[1], av[2], 0)) == NULL);
      if (isexit(test) == 1)
	{
	  my_putchar('\n');
	  return (0);
	}
      if ((res = main2(map, av)) != 0)
	return (res);
    }
}
