// A non GUI based Tic Tac Toe
// Works over the nth location over a 3*3 grid (same as in real life tic tac toe)


// program stars
//Created by Shivam Maheshwari.....


//program starts...


#include<stdio.h>
#include<stdlib.h>
int win1[]={1,2,3},win2[]={1,4,7},win3[]={1,5,9},win4[]={3,6,9},win5[]={3,5,7},win6[]={9,7,8},win7[]={6,5,8},win8[]={6,5,4};
void comp(int p[],int c,int s)
{
    int f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0;
    //1st
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f1<3)
            {
                if(p[i]==win1[j])
                    f1++;

            }
            if(f1==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //2nd
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f2<3)
            {
                if(p[i]==win2[j])
                    f2++;
            }
            if(f2==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //3rd
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f3<3)
            {
                if(p[i]==win3[j])
                    f3++;
            }
            if(f3==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //4th
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f4<3)
            {
                if(p[i]==win4[j])
                    f4++;
            }
            if(f4==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //5th
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f5<3)
            {
                if(p[i]==win5[j])
                    f5++;
            }
            if(f5==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //6th
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f6<3)
            {
                if(p[i]==win6[j])
                    f6++;
            }
            if(f6==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //7th
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f7<3)
            {
                if(p[i]==win7[j])
                    f7++;
            }
            if(f7==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    //8th
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(f8<3)
            {
                if(p[i]==win8[j])
                    f8++;
            }
            if(f8==3)
            {
                if(s==0)
                printf("\nPlayer 1 wins..");
                else
                printf("\nPlayer 2 wins..");
                exit(0);
            }
        }
    }
    printf("\n next---->");

}
int main()
{
    int i,c1=0,c2=0,m,n,s=0,sum=0;
    int p1[100],p2[100],end=0;
    for(i=0;;i++)
    {
        printf("Player 1 chance.......\nEnter the location");
        scanf("%d",&n);
        p1[i]=n;
        c1=c1+1;
        s=0;
        comp(p1,c1,s);
        sum=c1+c2;
        if(sum==9)
        {
            printf("Draw match....");
            exit(0);
        }
        printf("Player 2 chance.......\nEnter the location");
        scanf("%d",&m);
        p2[i]=m;
        c2=c2+1;
        s=1;
        comp(p2,c2,s);
    }
return 0;
}
