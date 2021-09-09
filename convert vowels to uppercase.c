#include<stdio.h>

int main()
{
    char string1[255];
    int  i;
   printf("Input a sentence: ");
   gets(string1);
   printf("The original string:\n");
   puts(string1);
   i=0;
    while(string1[i]!='\0')
    {
        if(string1[i]=='a' ||string1[i]=='e' ||string1[i]=='i' ||string1[i]=='o' ||string1[i]=='u')
            string1[i]=string1[i]-32;
        i++;
    }
    printf("After converting vowels into upper case the sentence becomes:\n");
    puts(string1);
}
