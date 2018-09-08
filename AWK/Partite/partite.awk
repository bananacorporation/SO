#!/bin/awk -f

{
printf("match %s - %s\n",$1,$2)
printf("RISULTATO: %d - %d\n",$3,$4)
if($3>$4)
{
	s[$1]+=3
	s[$2]+=0
}
if($3<$4)
{
	s[$1]+=0
	s[$2]+=3
}
if($3==$4)
{
	s[$1]+=1
	s[$2]+=1
}
printf("\n")
}

END{
ordina = "sort -k 2nr"
printf("\n")
for(i in s)
	{
	print i,s[i] | ordina

	}
printf("\n")
}
