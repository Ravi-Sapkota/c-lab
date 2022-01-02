//21 Create structure time(hour ,minute ,second) then create two time variable t1(1,40,30)and t2(2,30,50) and then add them by storing sum on t3
#include <stdio.h>
struct time{
	int hour;
	int min;
	int sec;
};
int main(){
	struct time t1, t2, t3;
	puts("Enter the first time as HH MM SS here:");
	scanf("%d%d%d",&t1.hour,&t1.min,&t1.sec);
	puts("Enter the second time as HH MM SS here:");
	scanf("%d%d%d",&t2.hour,&t2.min,&t2.sec);
	t3.hour=t1.hour+t2.hour;
	t3.min=t1.min+t2.min;
	t3.sec=t1.sec+t2.sec;
	while(t3.sec>=60){
		t3.sec-=60;
		t3.min++;
	}
	while(t3.min>=60){
		t3.min-=60;
		t3.hour++;
	}
	printf("The sum is %d:%d:%d",t3.hour,t3.min,t3.sec);
	return 0;
}
