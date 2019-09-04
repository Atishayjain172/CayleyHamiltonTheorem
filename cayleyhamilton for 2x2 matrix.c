#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
     //declaration of variables::::::::::::::::::::::::::::::::::::::::::::::::::::::::

    int r,c;
    int a[2][2];
    int i,j,x;
    int eqo,eqt,finaleq,finaleqo;
    int sum =0;
    int sqa[2][2];
    int finale[2][2];
    int tem1,tem2;
    int g[2][2];
    int l[2][2];
    int y[2][2];



//insertion of question of the matrix that needs to be verified::::::::::::::::::::::::::::::::

    printf("enter the no. of rows and columns \n");
    scanf("%d%d",&r,&c);
    printf("enter %d * %d matrix:::: \n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

     //enter the value for identity matrix::::::::::::::::::::::::::;

    printf("\n enter values for identity matrix \n");
    for(i=0;i<=1;i++)
  {

    for(j=0;j<=1;j++)
    {
        scanf("%d",&l[i][j]);
    }
  }

    //making expression in terms of matrix format:::::::::::::::::::::::::

     printf("\n expressing in terms of matrix \n");

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i==j)
            {
                printf("%d - A \t",a[i][j]);
            }
            else
            {
              printf("%d \t",a[i][j]);
            }

        }
        printf("\n");
    }

    //for calculating square matrix::::::::::::::::::::::::::::::(a*a)

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            for(x=0;x<=1;x++)
            {
                sum = sum + (a[i][x] * a[x][j]);
            }
            sqa[i][j]=sum;
            sum = 0;
        }
    }

//for simplifying matrix and printing out equations:::::::::::::::::::::::::::::;

    printf("\n Generated equation after simplifying the matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            eqo = a[0][0] * a[1][1];
            eqt = a[0][1] * a[1][0];
            finaleq = eqo - eqt;

        }
    }

     //we need to also check for the negative and positive signs before generation of equation:::::::::::::::

    tem1 = a[0][0];
    tem2 = a[1][1];



                if(tem1>=0)
            {
                tem1 = (-1 * tem1);

            }
            else
            {
                tem1 = abs(tem1);

            }


               if(tem2 >=0)
            {
                tem2 = (-1 * tem2);

            }
            else
            {
                tem2 = abs(tem2);

            }

    finaleqo = tem1 + tem2;

    //printing out equation:::::::::::::::::::::::::::::::::::::::::::::::::::::::

    printf("\n A*A + (%dA) + (%dI) \n",finaleqo,finaleq);

    //calculation of middle element for eg(7A)::here we need to multiply 7 to the matrix A::::::::::::::::::

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            g[i][j] = finaleqo * a[i][j];
        }
    }
printf("\n");

//calculation for last element that needs to be mutiplied to identity matrix::::::::::::::::::

for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        y[i][j] = finaleq * l[i][j];
    }
}

//printing out all the elements that we have got till now:::::::::::::::::::::::
printf("\n A*A==:::::::::::\n");
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("%d \t",sqa[i][j]);
    }
    printf("\n");
}
printf("\n %d*A==::::::::::::::\n",finaleqo);
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("%d \t",g[i][j]);
    }
    printf("\n");
}
printf("\n %d*I==:::::::::::::::::::\n",finaleq);
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("%d \t",y[i][j]);
    }
    printf("\n");
}

//calculation of final result:::::::::::::::::::::::::::::::::::::::::::::::


for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        finale[i][j] =  sqa[i][j] + g[i][j] + y[i][j];
    }
}
printf("\n final result:::::\n");

for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        printf("%d \t",finale[i][j]);
    }
    printf("\n");
}

//giving condition if it satisfies the cayley hamilton theorem::::::::::::::::::::::::

if(finale[0][0]==0 && finale[0][1]==0 && finale[1][0]==0 && finale[1][1]==0)
{
    printf("it satisfies the theorem \n");
}
else
{
    printf("\n it doesnot satisfies the theorem");
}

    getch();
}
