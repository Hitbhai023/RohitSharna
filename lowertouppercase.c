#include<stdio.h>
main()
{   
    char st[80];
	int i;
	printf("Enter a sentence: \n");
	gets(st);
    for (i= 0; i<strlen(st); i++)
    if(st[i] >= 'a' && st[i] <= 'z')
    st[i] =st[i] - 32;
    printf("\n The converted upper case string is \n %s" ,st);
}
