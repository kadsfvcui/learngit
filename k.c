#include <stdio.h>
#include <string.h>
int main()
{
	long a,k,s[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},m;
    scanf("%ld%ld",&a,&k);
    m=k;
    for(int i=0;;i++)
    {
    	s[i]=a%m*k/m;
    	if(a/m==0) break;
    	m*=k;
	}
	char str[10];
	for(int i=0;i<10;i++)
	{
		if(s[i]<=9&&s[i]!=-1)
		    str[i]=s[i]+'0';
		else if(s[i]>9)
		    str[i]=s[i]-10+'A';
		else if(s[i]=-1)
		    str[i]=' ';
	}
	int len=strlen(str);
	for(int i=len-1;i>=0;i--)
	    printf("%c",str[i]);
	return 0;
}