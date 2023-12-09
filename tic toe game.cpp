#include<stdio.h>
#include<stdlib.h>
void print();
int checkwin();
char arr[]={'0','1','2','3','4','5','6','7','8','9'};
int system();

int main()//main method
{
    print();
    int player=1 , input,status=-1;
    while(status=-1)
    {
    	player=player%2==0?2:1;
    	printf("enter value for player %d\n",player);
    	scanf("%d",&input);
    char mark;
    if(player==1)
    {
        mark='X';
    }
    else
    {
        mark='O';
    }
    if(input<1 || input>9)
    {
    	printf("invalid input.");
    	exit(0);
	}
	arr[input]=mark;
	print();
    int result=checkwin();
     if(result==1)
     {
     	printf("winner is player %d",player);
     	return 0;
	 }
	 else if(result==0)
	 {
	 	printf("draw");
	 	return 0;
	 }
	player++;
    }
}

void print()//calling function print
{
	system("cls");
    printf("\n\n\tTIC TOE Game\n\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n",arr[1],arr[2],arr[3]);
    printf("\t___|___|___\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n",arr[4],arr[5],arr[6]);
    printf("\t___|___|___\n");
    printf("\t   |   |   \n");
    printf("\t %c | %c | %c \n",arr[7],arr[8],arr[9]);
    printf("\t   |   |   \n");
}  

int checkwin()//calling function
 
{ 
	if(arr[1]==arr[2] && arr[2]==arr[3])
	{
		return 1;
	}
	if(arr[1]==arr[4] && arr[4]==arr[7])
	{
		return 1;
	}
	if(arr[1]==arr[5] && arr[5]==arr[9])
	{
		return 1;
	}
	if(arr[4]==arr[5] && arr[5]==arr[6])
	{
		return 1;
	}
	if(arr[7]==arr[8] && arr[8]==arr[9])
	{
		return 1;
	}
	if(arr[2]==arr[5] && arr[5]==arr[8])
	{
		return 1;
	}
	if(arr[3]==arr[6] && arr[6]==arr[9])
	{
		return 1;
	}
	if(arr[1]==arr[2] && arr[2]==arr[3])
	{
		return 1;
	}
	int count=0;
	for(int i=1;i<=9;i++)
	{
		if(arr[i]=='X' || arr[i]=='O')
		{
			count++;
		}
	}
	if(count==9)
	{
		return 0;
	}
	return -1;
}
