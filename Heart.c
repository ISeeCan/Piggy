#include<stdio.h>
int main()
{
    printf("Hey Piggy~, do you want some hearts from Bunny?\n");
    getchar();
    int a;
    printf("Tell me how many heart do you want:_____\b\b\b");

    scanf("%d",&a);
    getchar();
    int i;
    printf("Here the heart,take them carefully\n");
    getchar();

    for(i=0;i<=a;i++)
    {
        printf(" ___   ___\n");
        printf("/   \\_/   \\\n");
        printf("\\          /\n");
        printf(" \\        /\n");
        printf("  \\      /\n");
        printf("   \\    /\n");
        printf("    \\__/\n");
    }
    getchar();

}