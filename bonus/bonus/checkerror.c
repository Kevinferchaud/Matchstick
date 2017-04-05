/*
** checkerror.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 20:26:16 2017 ferchaud kevin
** Last update Wed Feb 15 18:58:49 2017 ferchaud kevin
*/

#include "my.h"

int		isnum(char *str)
{
  int		cpt;

  cpt =-1;
  while (str[++cpt] != '\0')
    if (str[cpt] < '0' || str[cpt] > '9')
      return (1);
  return (0);
}

int     checkerror(int ac, char **av)
{
  if (ac != 3)
    return (84);
  if (isnum(av[1]) == 1 || isnum(av[2]) == 1)
    return (84);
  if (my_getnbr(av[1]) < 1 || my_getnbr(av[1]) > 100)
    return (84);
  if (my_getnbr(av[2]) == 0)
    return (84);
  return (0);
}
