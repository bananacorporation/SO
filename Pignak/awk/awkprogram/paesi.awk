#!/bin/awk -f

{
	s[$1]+=$2
}

END{
for(i in s)
	printf("%d\n",s[i])
}
