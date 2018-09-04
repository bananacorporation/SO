#!/bin/awk -f
#somma tutti i numeri del file
{
for(i=1;i<=NF;i++)
	s[i]+=$i;
}

END{
for(i=1;i<=NF;i++)	
	a+=s[i];
printf("%d\n",a);
}

