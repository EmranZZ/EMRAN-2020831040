#include<stdio.h>
#include<math.h>
struct cricketer{
      char name[50];
      int score[5];
    };
int main()
{
    struct cricketer Ponting,Warner,Watson,Clark,Bailey;
    int i;
    printf("Enter the Scores of Ponting");
    double sum=0,temp=0;
    for(i=0;i<5;i++){
        scanf("%d",&Ponting.score[i]);
        sum = sum + Ponting.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp = temp + (sum-Ponting.score[i])*(sum-Ponting.score[i]);
    }
    temp = sqrt(temp/2);

    printf("Enter the Scores of Watson");
    sum = 0;
    double temp2=0;
    for(i=0;i<5;i++){
        scanf("%d",&Watson.score[i]);
        sum = sum + Watson.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp2 = temp2 + (sum-Watson.score[i])*(sum-Watson.score[i]);
    }
    temp2 = sqrt(temp2/2);


    printf("Enter the Scores of Warner");
    double temp3=0;
    for(i=0;i<5;i++){
        scanf("%lld",&Warner.score[i]);
        sum = sum + Warner.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp3 = temp3 + (sum-Warner.score[i])*(sum-Warner.score[i]);
    }
    temp3 = sqrt(temp3/2);

    printf("Enter the Scores of Clark");
    double temp4=0;
    for(i=0;i<5;i++){
        scanf("%lld",&Clark.score[i]);
        sum = sum + Clark.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp4 = temp4 + (sum-Clark.score[i])*(sum-Clark.score[i]);
    }
    temp4 = sqrt(temp4/2);

    printf("Enter the Scores of Bailey");
    double temp5=0;
    for(i=0;i<5;i++){
        scanf("%lld",&Bailey.score[i]);
        sum = sum + Bailey.score[i];
    }
    sum = sum/5;
    for(i=0;i<5;i++){
        temp5 = temp5 + (sum-Bailey.score[i])*(sum-Bailey.score[i]);
    }
    temp5 = sqrt(temp5/2);

    double k=temp;
    double score[5]={temp,temp2,temp3,temp4,temp5};
    for(i=1;i<=4;i++)
    {
        if(k<score[i]) k=score[i];
    }

    if(k==temp) printf("Ponting is a Consistent Player\n");
    else if(k==temp2) printf("Shane Watson is a Consistent Player\n");
    else if(k==temp3) printf("Warner is a Consistent Player\n");
    else if(k==temp4) printf("Clark is a Consistent Player\n");
    else if(k==temp5) printf("Bailey is a Consistent Player\n");

    return 0;
}
