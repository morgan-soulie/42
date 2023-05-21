#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, sizeof(c));
}

void fc(int n, int c, int *tab)
{
    if (c == n)
    {
        for (int i = 0; i < n; i++)
        {
            ft_putchar(tab[i]);
        }
        write(1, ", ", 1);
        return;
    }

    int start = 48;
    if(c > 0) {
        start = tab[c - 1] + 1;
    }

    for (int i = start; i < 58; i++)
    {
        tab[c] = i;
        fc(n, c + 1, tab);
    }
}

void ft_print_combn(int n)
{
    int tab[n];
    fc(n, 0, tab);
}

int main()
{

    ft_print_combn(2);
    return 0;
}