/*
** my.h for emacs in /home/kevin.ferchaud/CPE_2016_matchstick/bonus
** 
** Made by ferchaud kevin
** Login   <kevin.ferchaud@epitech.net>
** 
** Started on  Tue Feb 14 15:27:24 2017 ferchaud kevin
** Last update Tue Feb 14 17:46:57 2017 ferchaud kevin
*/

#include <SFML/Graphics/FontInfo.h>
#include <SFML/Graphics/Glyph.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include <SFML/Config.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <math.h>
#include <SFML/System/Export.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Window/Types.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Types.h>
#include <stddef.h>
#include <SFML/System/InputStream.h>
#include <SFML/Graphics/Transform.h>
#include <SFML/Graphics/Color.h>

typedef struct          s_my_framebuffer
{
  sfUint8               *pixels;
  int                   width;
  int                   height;
}                       t_my_framebuffer;

int	matchstick(int ac, char **av);
int	checkerror(int ac, char **av);
void	my_putchar(char c);
char    **map1();
char    **map2();
char    **map3();
char    **map4();
char    **map5();
char    **map6();
char    **map7();
char    **map8();
char    **map9();
char    **map10();
char    *my_strdup(char *src);
int     my_strlen(char *str);
char    *my_strcatwoman(char *concat, char *suppr);
char    *my_getline();
void    my_printf(const char *, ...);
char    **ia_turn(char **map, char *nbr);
int     matchforia(char **map, int line, char *nbr);
int     checktwobat(char **map);
int     lineforia(char **map, char *nbr);
char    **do_thestick2(int line, int match, char **map);
int     checkbaton(int line, char **map);
char    **my_turn(char **map, char *nbr, int opt);
int     verifplayer(char *line, char *match, char **map, char *nbr);
void    my_putstr(char *str);
int     my_getnbr(char *str);
int     isfinished(char **map);
char    **do_thestick(char *line, char *match, char **map);
char    **do_mymap(char **av);
void    printmap(char **map);
void            my_put_pixel(t_my_framebuffer *a, int b, int c, sfColor d);
void            my_draw_line(t_my_framebuffer *a, sfVector2i b, \
			     sfVector2i c, sfColor color);
