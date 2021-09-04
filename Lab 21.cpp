//Lab 21		2021/07/08
//Create a structure time(hour, minute, second) then create two time variables t1(1,40,30) and t2(2,30,50) and then them bys stroring sum on time t3
#include<stdio.h>
struct time
{
	int hour, min, sec;
};
struct time sum(struct time t1, struct time t2, struct time t3);
int main(void)
{
	struct time t1 = {1,40,30};
	struct time t2 = {2,30,50};
	struct time t3;
	t3=sum(t1,t2,t3);
	printf("Total time is %d:%d:%d",t3.hour,t3.min,t3.sec);
}
struct time sum(struct time t1, struct time t2, struct time t3)
{
	struct time temp;
	temp.sec=t1.sec+t2.sec;
	temp.min=t1.min+t2.min;
	temp.hour=t1.hour+t2.hour;
	
	while(temp.sec>59){
		temp.sec-=60;
		temp.min++;
	}
	while(temp.min>59){
		temp.min-=60;
		temp.hour++;
	}
	return temp;
}
