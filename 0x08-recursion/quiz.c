#include <stdio.h>

// unsigned long long int factorial(unsigned int i) 
// {

//    if(i <= 1) 
// 	{
//       return 1;
//    }
//    return i * factorial(i - 1);
// }

// int  main() 
// {
//    int i = 12;
//    printf("Factorial of %d is %d\n", i, factorial(i));
//    return 0;
// }
// void print(int nb)
// {
//     printf("%d", nb);
//     nb --;
//     if (nb > 0) 
//     {
//         print(nb);
//     }
// }

// int main(void)
// {
//     print(2);
//     return (0);
// }
// void print(int nb)
// {
//     printf("%d", nb);
//     -- nb;
//     if (nb > 0) 
//     {
//         print(nb);
//     }
// }

// int main(void)
// {
//     print(4);
//     return (0);
// }
// void print(int nb)
// {
//     printf("%d", nb);
//     nb ++;
//     if (nb < 10) 
//     {
//         print(nb);
//     }
// }

// int main(void)
// {
//     print(4);
//     return (0);
// }
// void print(int nb)
// {
//     if (nb < 0) 
//     {
//         return;
//     }
//     printf("%d", nb);
//     nb --;
//     print(nb);
// }

// int main(void)
// {
//     print(4);
//     return (0);
// }
int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}