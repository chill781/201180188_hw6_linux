#include<stdio.h>
void con(char a[])
{
#ifndef UNCONVERT
#ifdef CONVERT
	int i=0;
    while (a[i]!='\0')
	{
		if (a[i] >= 'A' && a[i] <= 'Z')a[i] += 32;
		else if (a[i] >= 'a' && a[i] <= 'z')a[i] -= 32;
		i++;
	}
    printf("%s\n",a);
    
#endif
#ifndef CONVERT
    printf("201180188\n");
#endif
#endif
#ifdef UNCONVERT
    printf("%s\n",a);
#endif
}
