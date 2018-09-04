#!/bin/awk -f
{conta=0;
for(i=1;i<=NF;i++)
        {
        conta+=$i;
	}
printf ("%d ",conta);
}
