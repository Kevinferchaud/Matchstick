/*
** modifmap.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 20:50:40 2017 ferchaud kevin
** Last update Thu Feb 16 17:35:40 2017 ferchaud kevin
*/

#include "my.h"

char    **do_thestick(char *line, char *match, char **map)
{
  int   len;
  int   end;

  end = my_getnbr(match);
  len = my_strlen(map[my_getnbr(line)]);
  while (--end >= 0)
    {
      while (map[my_getnbr(line)][--len] != '|');
      map[my_getnbr(line)][len] = ' ';
    }
  return (map);
}

char	**mapmalloc(char **av)
{
  int	val;
  char  **map;
  int	empt;

  empt = -1;
  val = my_getnbr(av[1]);
  map = malloc(sizeof(char *) * (val + 3));
  while (++empt < val + 3)
    map[empt] = malloc(sizeof(char) * ((val * 2) + 3));
  return (map);
}

char	**mybaton(char **map, int len)
{
  int	bat;
  int	cpt;
  int	cpt2;
  int	cpt3;

  bat = 1;
  cpt = -1;
  while (++cpt < len)
    {
      cpt3 = -1;
      cpt2 = -1;
      while ((++cpt2 + cpt) < len);
      while (++cpt3 < bat)
	map[cpt + 1][cpt2 + cpt3] = '|';
      bat += 2;
    }
  return (map);
}

char    **do_mymap(char **av)
{
  char  **map;
  int	cpt;
  int	cpt2;
  int	val;

  map = mapmalloc(av);
  val = my_getnbr(av[1]);
  cpt = -1;
  while (++cpt < val + 2)
    {
      cpt2 = -1;
      while (++cpt2 <= (val * 2))
	if (cpt == 0 || cpt == (val + 1) ||
	    cpt2 == 0 || cpt2 == (val * 2))
	  map[cpt][cpt2] = '*';
	else
	  map[cpt][cpt2] = ' ';
      map[cpt][cpt2] = '\n';
      map[cpt][cpt2 + 1] = '\0';
    }
  map = mybaton(map, val);
  map[cpt] = NULL;
  return (map);
}

void    printmap(char **map)
{
  int   cpt;

  cpt = -1;
  while (map[++cpt] != NULL)
    my_putstr(map[cpt]);
}
