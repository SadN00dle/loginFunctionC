#include <stdio.h>


int main()
{
    int i = 0;
    char ch;
    char pass[20];
    printf("Enter your password: ");

    scanf("%c", &ch);

    if (ch==13)
    {
        pass[i] = '\0';
        
    }else
    {
        pass[i++] = ch;
    }
    
    


    return 0;
}