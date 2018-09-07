#!/bin/awk -f

{
for(i=0;i<NF;i++)
	{
	if($i=="andrea")
		count++;
	}
}

END{
printf("-->%d",count);
}
