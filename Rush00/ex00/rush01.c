

void ft_putchar(char c);

void firstline(int width, int a)
{
  if (width==0)
    ft_putchar('/');
      if (a ==1)
        ft_putchar('\n');
  else if (width == a-1)
  {
      ft_putchar('\\');
      ft_putchar('\n');
  }
  else
    ft_putchar('*');
}
void lastline(int width, int a)
{
  if (width==0)
    ft_putchar('\\');
      if (a ==1)
        ft_putchar('\n');
  else if (width == a-1)
  {
      ft_putchar('/');
      ft_putchar('\n');
  }
  else
    ft_putchar('*');
}

void mid(int width, int a)
{
  if (width==0)
    ft_putchar('*');
      if (a ==1)
        ft_putchar('\n');
  else if (width == a-1)
    {
      ft_putchar('*');
      ft_putchar('\n');
    }
  else
    ft_putchar(' ');
}

void rush(int a,int b)
{
  int height;
  int width;

  height=0;
  width=0;
  if (a > 0 || b > 0)
  {
    while(height<b)
      {
        if ( height == 0 || height == b-1)
          {
            while (width < a)
              {
                if (height == 0)
                {
                firstline(width,a);
                }
                else
                {
                lastline(width, a);
                }
                width++;
              }

              width = 0;
          }
      else
        {
          while(width < a)
            {
              mid(width, a);
              width++;
            }
          width = 0;
        }
        height++;
      }
  }
}
