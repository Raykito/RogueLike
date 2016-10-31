/*
** main.c for roguelike in /home/nathan/Perso/Games/RogueLike
** 
** Made by Nathan
** Login   <nathan.tual@epitech.eu>
** 
** Started on  Mon Oct 31 22:43:12 2016 Nathan
** Last update Mon Oct 31 22:54:26 2016 Nathan
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	main()
{
  int	nb_room;

  srand(time(NULL));
  nb_room = rand() % 13;
  printf("%d\n", nb_room);
  return (0);
}
