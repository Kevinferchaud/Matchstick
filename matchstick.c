/*
** matchstick.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 14:04:47 2017 ferchaud kevin
** Last update Thu Feb 16 19:59:33 2017 ferchaud kevin
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

int	main(int ac, char **av)
{
  char	**map;
  char	**test;

  if (checkerror(ac, av) == 84)
    return (84);
  srand(getpid());
  map = do_mymap(av);
  return (main2(map, av, test));
}
