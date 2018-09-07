#!/bin/awk -f

{
	if($3>$4)
		{ c[$1]+=3; c[$2]+=0;}
	if($3<$4)
		{ c[$1]+=0; c[$2]+=3;}
	if($3==$4)
		{ c[$1]+=1; c[$2]+=1;}
	printf("%s-%s\n", $1,$2);
}

END{
ordina = "sort -k 2nr";
printf("\n");

for(i in c)
{
	for(i in c){
	#printf("%s --> %d\n", i,c[i]) | ordina;
	printf i , c[i] | ordina
}
}
close(ordina) 
printf("\n");
}
