#include<stdio.h>
#include<conio.h>

int main()
{
	int time,hours,minutes,seconds,rest;
    printf("Input time in seconds :");
	scanf("%d",&time);
	if (time < 60){
		printf("time is  hours= 0 minutes= 0 seconds= %d",time);
		
	}else if(( time >= 60) && (time < 3600)){
		seconds = time % 60;
		minutes = time / 60;
		hours = 0;
		printf("time is  hours= %d minutes= %d seconds= %d",hours,minutes,seconds);
		
	}else if(time >= 3600){
		rest = time % 3600;
		hours = time / 3600;
		minutes = rest / 60;
		seconds = rest % 60;
		printf("time is  hours= %d minutes= %d seconds= %d",hours,minutes,seconds);
			
	}
	
	getch();
	return 0;
}