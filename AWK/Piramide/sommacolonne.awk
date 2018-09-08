#!/bin/awk -f

{
for(i=1;i<=NF;i++)
	s[i]+=$i
}

END{
for(i=1;i<=NF;i++)
	printf("%d-", s[i])
printf("\n")
}
