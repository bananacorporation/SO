#!/bin/awk -f

{
for(i=1;i<=NF;i++)
	if(NR==2)
	{
	printf("elemento: %d\n",$i);
	s+=$i;
	}
}

END{
printf("-->%d",s);
}
