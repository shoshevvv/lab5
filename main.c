#include <stdio.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    printf("length = %d\n", strlen(name)); /* debug line */
    name[strlen(name)-1] = '\0'; /* remove the newline at the end */

    printf("Hello %s!\n", name);
    printf("Hello world!\n");
    return 0;
}
// commit by Ilya Danilkin IU5-103