#include<stdio.h>
int main()
{
int x,y;
FILE *f;
f=fopen("curve_dataset.csv","w");
x=-100;
while(x<=100)
{
y=x*x;
fprintf(f,"%d,%d\n",x,y);
x=x+5;
}
fclose(f);
return 0;
}
