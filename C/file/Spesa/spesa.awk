#!/bin/awk -f

BEGIN{
FORMAT="\t\t\t %s \t %d"
printf("--------START--------\n")
printf("\tSOMMA\t\tPRODOTTI\tPERCENTUALE\n")
}

{
spesa[$2]+=$1
somma+=$1
}

END{
printf("\t%d\n",somma);
for(i in spesa)
	{
	#printf("\t\t\t %s : \t\t\t\t%d % \n",i,(100*spesa[i])/somma)
	printf(FORMAT,i,(100*spesa[i])/somma)
	printf("\n");
	}
printf("-------END-------\n")
}
