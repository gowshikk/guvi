#include <stdio.h>

int main() {
	
	int num;
	char str[100000];
	scanf("%d\n",&num);
    scanf("%[^\n]",str);
    //printf("%s",str);
	int i;
	for(i=num-1;i>=0;i--)
	{
	    if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
	    {
	        //do nothing
	    }
	   else
	   {
	       printf("%c",str[i]);
	   }
	}
	
	
	return 0;
}
