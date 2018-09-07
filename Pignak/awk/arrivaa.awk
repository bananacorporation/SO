#!/bin/awk -f

{
for(i=1;i<=NF;i++)
	{
	if($i=="aperta")
		exit
		#stop=1;
	if(stop==0)
		printf("%s ",$i);
}
}
