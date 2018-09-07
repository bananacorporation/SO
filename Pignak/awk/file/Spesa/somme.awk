#!bin/awk -f

BEGIN{
FS="+"
}

{
printf("%d\n",$1+$2);
}
