int main()
{
 	int Amount;
 
 	printf("\n Please Enter the Amount of Cash  =  ");
 	scanf("%d", &Amount);
 
	Total_Notes(Amount);

 	return 0;
}

void Total_Notes(int Amount)
{
	int a[8] = {500, 100, 50, 20, 10, 5, 2, 1};
	int i, temp;
	
	temp = Amount;
  
 	for(i = 0; i < 8; i ++)
 	{
 		printf("\n %d Notes is = %d", a[i], temp / a[i]);
 		temp = temp % a[i];
 	}
}
