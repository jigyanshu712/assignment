#include<stdio.h>
struct time{
    int sec;
    int min;
    int hrs;
};
void diff_between_time( struct time t1,struct time t2,struct time *diff);
int main(){
    struct time start_time,stop_time,diff;
    printf("enter start time\n");
    printf("enter hours ,minutes and seconds : ");
    scanf("%d %d %d",&start_time.hrs,&start_time.min,&start_time.sec);


     printf("enter stop time\n");
    printf("enter hours ,minutes and seconds : ");
    scanf("%d %d %d",&stop_time.hrs,&stop_time.min,&stop_time.sec);


    diff_between_time(start_time,stop_time ,&diff);
    printf("\ntime diff: %d:%d:%d ",start_time.hrs,start_time.min,start_time.sec);
        printf(" %d:%d:%d ",stop_time.hrs,stop_time.min,stop_time.sec);
            printf("= %d:%d:%d ",diff.hrs,diff.min,diff.sec);

return 0;
}



void diff_between_time(struct time start,struct time stop, struct  time *diff){
while(stop.sec<start.sec){
    --stop.min;
    stop.sec+=60;
}
diff->sec=stop.sec-start.sec;
while(stop.min<start.min){
    --stop.hrs;
    stop.min+=60;
}
diff->min=stop.min-start.min;
diff->hrs=stop.hrs-start.hrs;
}

