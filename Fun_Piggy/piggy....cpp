#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    printf("Somebody, talk to me\n");
    getchar();
    printf("Let me know your name:\n");
    string whoareyou;
    cin >> whoareyou;
    getchar();
    if(whoareyou == "Piggy" || whoareyou=="piggy")
    {
        printf("Finally,");
        getchar();
        printf("You're back...\n");
        getchar();
        printf("Bunny will be so happy to know that\n");
        getchar();
        printf("Just go to find him\n");
        getchar();
        printf("He would tell you how he missed you\n");
        getchar();
    }
    else
    {
        printf("I've learned a new language\n");
        getchar();
        printf("But using an old header\n");
        getchar();
        printf("That doesn't mean I don't master the new one\n");
        getchar();
        printf("But I cannot forget my old mate\n");
        getchar();
        printf("I don't know what to do next\n");
        getchar();
        printf("C or CPP, that's a question\n");
        getchar();
        printf("What I do know,");
        getchar();
        printf("Is I'll keep going\n");
        getchar();
    }
    return 0;

    // 2023.10.7
}