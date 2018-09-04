#!/bin/awk -f
{
for (i=1;i<=NF;i++)
	s+=$i
}


END{
printf("---%d",s);
}
