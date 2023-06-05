#include <stdio.h>
#include <stdlib.h>

// "void" quando a aplicação não retorna nada.
void main()
{
    int a = 10;
    int b = 20;

    printf("O valor da variável a e: %d", a);
    printf("\nO valor da variável b e: %d", b);

    int c = a;
    a = b;
    b = c;

    printf("\nO valor da variável a e: %d", a);
    printf("\nO valor da variável b e: %d", b);
    return 0;
}
