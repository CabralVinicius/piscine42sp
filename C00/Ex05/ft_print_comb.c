#include <unistd.h>

void  virgula(char a, char b, char c)
{
  write(1, &a, 1);
  write(1, &b, 1);
  write(1, &c, 1);

  if(a != '7'|| b != '8' || c != '9')
  {
    write(1, " ,", 2);
  }
}

void  ft_print_comb(void)
{
  char a1;
  char b1;
  char c1;

  a1 = '0';
  while(a1 <= '7')
  {
    b1 = a1 + 1;
    while (b1 <= '8')
    {
      c1 = b1 + 1;
      while (c1 <= '9')
      {
        virgula(a1, b1, c1);
        c1++;
      }
      b1++;
    }
    a1++;
  }
}