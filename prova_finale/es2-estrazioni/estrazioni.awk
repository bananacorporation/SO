#!/bin/awk -f

{
for(i=2;i<=NF;i++)
	if($i>1 && $i<90)
		s[$i]+=1;
}
END{
ordina = "sort -k 1nr"
for(i in s)
	print i,s[i] | ordina
}
