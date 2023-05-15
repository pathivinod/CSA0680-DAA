#include<stdio.h>
int main()
{
	int i,num,array[100],count=0,largest,loop;
	printf("enter the no.of elements:\n");
	count++;
	scanf("%d",&num);
	count++;
	printf("enter the elements:\n");
	count++;
	for(i=1;i<=num;i++)
	{
		count++;
		count++;
		scanf("%d",&array[i]);
	}
	count++;
	largest=array[0];
	count++;
	count++;
	for(loop=1;loop<=num;loop++)
	{
		count++;
		count++;
		count++;
	    if(largest<array[loop])
		{
			largest=array[loop];
			count++;
		}
	}
	count++;
	printf("the largest no.of element is:%d\n",largest);
	count++;
	printf("the time complexity is :%d\n",count);	
}
