/*
** map.c for emacs in /home/kevin.ferchaud/CPE_2016_matchstick
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Mon Feb 13 14:33:58 2017 ferchaud kevin
** Last update Mon Feb 13 16:56:28 2017 ferchaud kevin
*/

#include "my.h"

char	**map1()
{
  char	**map;

  map = malloc(sizeof(char *) * 4);
  map[0] = my_strdup("*****\n");
  map[1] = my_strdup("* | *\n");
  map[2] = my_strdup("*****\n");
  map[3] = NULL;
  return (map);
}

char	**map2()
{
  char	**map;

  map = malloc(sizeof(char *) * 5);
  map[0] = my_strdup("*******\n");
  map[1] = my_strdup("*  |  *\n");
  map[2] = my_strdup("* ||| *\n");
  map[3] = my_strdup("*******\n");
  map[4] = NULL;
  return (map);
}

char	**map3()
{
  char	**map;

  map = malloc(sizeof(char *) * 6);
  map[0] = my_strdup("*********\n");
  map[1] = my_strdup("*   |   *\n");
  map[2] = my_strdup("*  |||  *\n");
  map[3] = my_strdup("* ||||| *\n");
  map[4] = my_strdup("*********\n");
  map[5] = NULL;
  return (map);
}

char	**map4()
{
  char	**map;

  map = malloc(sizeof(char *) * 7);
  map[0] = my_strdup("***********\n");
  map[1] = my_strdup("*    |    *\n");
  map[2] = my_strdup("*   |||   *\n");
  map[3] = my_strdup("*  |||||  *\n");
  map[4] = my_strdup("* ||||||| *\n");
  map[5] = my_strdup("***********\n");
  map[6] = NULL;
  return (map);
}

char	**map5()
{
  char	**map;

  map = malloc(sizeof(char *) * 8);
  map[0] = my_strdup("*************\n");
  map[1] = my_strdup("*     |     *\n");
  map[2] = my_strdup("*    |||    *\n");
  map[3] = my_strdup("*   |||||   *\n");
  map[4] = my_strdup("*  |||||||  *\n");
  map[5] = my_strdup("* ||||||||| *\n");
  map[6] = my_strdup("*************\n");
  map[7] = NULL;
  return (map);
}
