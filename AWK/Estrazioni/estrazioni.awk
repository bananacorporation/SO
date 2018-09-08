#!/bin/awk -f

{
errato=0
#riempio
for(i=0;i<5;i++)
	a[i]=$(i+2)
printf("\n")
#stampo
printf("%s: ",$1)
for(i=0;i<5;i++)
	printf("%d -",a[i])
printf("\n")
#controllo
for(j=0;j<5;j++)
	for(h=0;h<5;h++)
		if(h>j)
			if(a[j]==a[h])
				errato++
if(errato>=1)
	printf("non valida")
else
	printf("valida")
printf("\n")
}
