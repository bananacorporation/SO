#!/bin/awk -f
{
for (i=1;i<=NF;i++){
	if ($1=="A:")
	{	if ($i~/^[0-9]*/)
		print ($i*2)>> "doppio.txt";
	}else 
		print($i)>>"doppio.txt";
	print ("\t")>>"doppio.txt";
}
}
