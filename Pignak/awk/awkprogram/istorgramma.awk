#!/bin/awk -f

{
n=int($5/1024)
d[n]++
if(n>max)
	max=n 
}

END{
printf("RISULTATI\n")
for(i=0;i<max;i++)
	{
	printf("[%d - %d]",i,i+1)
	for(j=0;j<d[i];j++)
		printf("*")
	printf("\n")
	}
}
