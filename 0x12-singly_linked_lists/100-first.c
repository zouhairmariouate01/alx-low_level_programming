#include <stdio.h>

void __attribute__((constructor)) start_game(void)
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
