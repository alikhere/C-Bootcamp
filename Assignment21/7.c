#include<stdio.h>
struct TimePeriod input();
struct TimePeriod
{
    int hour;
    int minute;
    int second;
};
int main()
{
    struct TimePeriod b[3];
    int i;
    for(i=0;i<2;i++)
    {
        if(i==0)
        printf("Enter start Hours : minutes : second\n");
        if(i==1)
        printf("Enter end Hours : minutes : second:\n");
        b[i]=input();
    }
    if(b[0].second>b[1].second)
    {
        b[1].second+=60;
        b[1].minute--;
    }
      if(b[0].minute>b[1].minute)
    {
        b[1].minute+=60;
        b[1].hour--;
    }
    b[2].hour=b[1].hour-b[0].hour;
    b[2].minute=b[1].minute-b[0].minute;
    b[2].second=b[1].second-b[0].second;
    printf("Difference between time period %d : %d : %d\n",b[2].hour,b[2].minute,b[2].second);
    return 0;
}
struct TimePeriod input()
{

    struct TimePeriod a;
    char dummy; // using a dummy char.to empty buffer coz. fflush is not working in linux os
    scanf("%d",&a.hour);
    scanf("%d",&a.minute);
    scanf("%d",&a.second);
    return a;
}