#include<stdio.h>
#include<conio.h>

int main(){
	int t,h,m,s,r;
    printf("Input time in seconds :");
	scanf("%d",&t);
	if (t < 60){
		printf("time is  h= 0 m= 0 s= %d",t);
		
	}else if(( t >= 60) && (t < 3600)){
		s = t % 60;
		m = t / 60;
		h = 0;
		printf("time is  h= %d m= %d s= %d",h,m,s);
		
	}else if(t >= 3600){
		r = t % 3600;
		h = t / 3600;
		m = r / 60;
		s = r % 60;
		printf("time is  h= %d m= %d s= %d",h,m,s);
			
	}
	
	getch();
	return 0;
}