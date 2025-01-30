#include <stdio.h>
#include <conio.h>
void greet()
{
    printf("Good Morning\n");
    printf("How are you?\n");
    printf("Are you fine?\n");
    return;
}

void england()
{
    printf("You are in england\n");
    return;
}

void australia()
{
    printf("You are in australiya\n");
    england();
    return;
}

void india()
{
    printf("You are in India\n");
    australia();
    return;
}




int main()
{
    india();
    return 0;
}

