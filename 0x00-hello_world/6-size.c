#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
  printf("\nsize of char pointer: %d"     ,sizeof(char*));
  printf("\nsize of int pointer: %d"      ,sizeof(int*));
  printf("\nsize of float pointer: %d"    ,sizeof(float*));
  printf("\nsize of long int pointer: %d" ,sizeof(long int*));
  printf("\nsize of double pointer: %d\n" ,sizeof(double*));
  return 0;
}
