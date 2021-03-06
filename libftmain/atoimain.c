#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    printf("%d\n", ft_atoi("-123"));
    printf("%d\n", atoi("-123"));
    printf("--------\n");
    printf("%d\n", ft_atoi("98993489"));
    printf("%d\n", atoi("98993489"));
    printf("--------\n");

    printf("%d\n", ft_atoi("-2147483648"));
    printf("%d\n", atoi("-2147483648"));
    printf("--------\n");
    printf("%d\n", ft_atoi("2147483647"));
    printf("%d\n", atoi("2147483647"));
    printf("--------\n");

    printf("%d\n", ft_atoi("tutorialspoint.com"));
    printf("%d\n", atoi("tutorialspoint.com"));
    printf("--------\n");

    printf("%d\n", ft_atoi("  \t\r--451"));
    printf("%d\n", atoi("  \t\r--451"));
    printf("--------\n");
    printf("%d\n", ft_atoi("  ---+--+1234ab567"));
    printf("%d\n", atoi("  ---+--+1234ab567"));
    printf("--------\n");
    printf("%d\n", ft_atoi("  ---+--+--+6451-1ab567"));
    printf("%d\n", atoi("  ---+--+--+6451-1ab567"));
    printf("--------\n");
    return (0);
}
