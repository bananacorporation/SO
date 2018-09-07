#!/bin/awk -f

{
vettore[1] = "ciao"
vettore[2] = "come" 

for(i in vettore)
	{
	print vettore[i]
	}

}
