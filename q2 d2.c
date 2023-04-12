#include <stdio.h>
int main()
{
	int  i, j, Count, n;	
	printf("\n Enter the number of elements in an array  :   ");
	scanf("%d", &n);               	
    int a[n], Freq[n];            
	printf("\n Enter the elements of an Array  :  ");
	for (i = 0; i < n; i++)       
	{
    	    scanf("%d", &a[i]);
    	    Freq[i] = -1;         
   	}      
	for (i = 0; i < n; i++)
	{
		Count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(a[i] == a[j])    
    		{
    			Count++;
    			Freq[j] = 0;    
    		}
    	}
    	if(Freq[i] != 0)        
    	{
    		Freq[i] = Count;
		}
	}
    
 	printf("\n The Frequency of the elements in this Array is : \n");
 	for (i = 0; i < n; i++)
  	{
  		if(Freq[i] != 0)        
  		{
  			printf("%d Occurs %d Times \n", a[i], Freq[i]);
		}		
  	}	     
 	return 0;
}