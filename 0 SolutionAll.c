#include <stdio.h>

int main()
{
    int n = 5;

    printf("%40d\n",1);
    // Pattern 01 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            printf("*");
            if(j<n) printf(" ");
        }
        printf("\n");
    }

    printf("%40d\n",2);
    // Pattern 02 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("*");
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }

    printf("%40d\n",3);
    // Pattern 03 ===================================

    for( int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=(n-i+1); j++)
        {
            printf("*");
            if(j< (n-i+1))
                printf(" ");
        }
        printf("\n");
    }

    printf("%40d\n",4);
    // Pattern 04 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=(n-i); j++)
        {
            printf("  ");
        }

        for(int k = 1; k<=i; k++)
        {
            printf("*");
            if(k<i)
                printf("   ");
        }
        printf("\n");
    }


    printf("%40d\n",5);
    // Pattern 05 ===================================

   for(int i = 1; i<=n; i++)
   {
       for(int j = 1; j<=i; j++)
       {
           printf("*");
           if(j<i)
                printf(" ");
       }
       printf("\n");
   }
   for(int i = 1; i<=n-1; i++)
   {
       for(int j = 1; j<=n-i; j++)
       {
           printf("*");
           if(j< n-1)
                printf(" ");
       }
       printf("\n");
   }


    printf("%40d\n",6);
    // Pattern 06 ===================================

    for(int i =1; i<=n; i++)
    {
        for(int spc = 1; spc<=i-1; spc++)
        {
            printf("  ");
        }
        for(int j = 1; j<=n-i+1; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }


    printf("%40d\n",7);
    // Pattern 07 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",j);

            if(j<i)
                printf(" ");
        }
        printf("\n");
    }


    printf("%40d\n",8);
    // Pattern 08 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<= n -i +1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }


    printf("%40d\n",9);
    // Pattern 09 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j =n-i+1; j>=1; j--)
        {
            printf("%d",j);
            if(j> 1)
                printf(" ");
        }
        printf("\n");
    }



    printf("%40d\n",10);
    // Pattern 10 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = n; j>=i; j--)
        {
            printf("%d",j);

            if(j> i)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 11 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = i ; j<=n; j++)
        {
            printf("%d",j);

            if(j<n)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 12 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = n-i+1; j<=n; j++)
        {
            printf("%d",j);
            if(j<n)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 13 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j =  i; j>=1; j-- )
        {
            printf("%d",j);
            if(j>1)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 14 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = n; j>=n-i+1; j--)
        {
            printf("%d",j);
            if(j> n -i +1)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 15 ===================================

    for(int i  = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",i);
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 16 ===================================

    for(int i = n; i>=1; i--)
    {
        for (int j = n; j>=i; j--)
        {
            printf("%d",i);
            if(j>i)
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");
    // Pattern 17 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n-i+1; j++)
        {
            printf("%d",i);
            if(j<n-i+1)
                printf(" ");
        }
        printf("\n");
    }



    printf("\n\n");
    // Pattern 18 ===================================

    for(int i = n; i>= 1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",i);
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 19 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",j%2==1);
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 20 ===================================


    for(int i = 1;i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",j%2==0);
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }



    printf("\n\n");
    // Pattern 21 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j=1; j<=n-i+1; j++)
        {
            printf("%d",j%2==1);
            if(j<n-i+1)
                printf(" ");
        }
        printf("\n");
    }



    printf("\n\n");
    // Pattern 22 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n-i+1; j++)
        {
            printf("%d",j%2==0);
            if(j<n-i+1)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 23 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",i%2==0);
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");
    // Pattern 24 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n-i+1; j++)
        {
            printf("%d",i%2==1);
            if(j<n-i+i)
                printf(" ");
        }
        printf("\n");
    }

    printf("\n\n");
    // Pattern 25 ===================================


    int cnt = 0;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cnt++;
            printf("%d",cnt);
            if(j<i)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n"); // Start Hard
    // Pattern 26 ===================================

    for(int i = 1; i<=n; i++)
    {
        int sum = 0;
        for(int s = 1 ; s<=i; s++)
        {
            sum += s;
        }

        for(int j = sum; j>=sum-i+1; j--)
        {
            printf("%d",j);
            if(j>sum-i+1)
                printf(" ");
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 27 ===================================

    int sum = 0;
    for(int s = 1; s<=n; s++)
    {
        sum+=s;
    }

    for(int i =1; i<=n; i++)
    {
        for(int j = n; j>=i; j--)
        {
            printf("%d",sum);
            if(j>i)
                printf(" ");
            sum--;
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 28 ===================================


    for(int i = n; i>=1; i--)
    {
        sum = 0;
        for(int s = i; s >= 1; s--)
        {
            sum+=s; // s = 15 , 15 - i +1 = 11
        }

        for(int j = sum - i+1; j<=sum ; j++)
        {
            printf("%d",j);
            if(j<sum)
                printf(" ");
        }
        printf("\n");
    }


        printf("\n\n");
    // Pattern 29 ===================================

        printf("\nPrint Error 29. No. \n -------------");


        printf("\n\n");
    // Pattern 30 ===================================

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d",j);
            if(j<i)
                printf(" ");
        }
        for(int j = i-1; j>=1; j--)
        {
            printf(" ");
            printf("%d",j);
        }
        printf("\n");
    }


    printf("\n\n");
    // Pattern 31 ===================================
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++)
        {
            printf("%d ",j);
        }
        for(int j = n - i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }




        printf("\n\n");
    // Pattern 32 ===================================

    for(int i = n; i>=1; i--)
    {
        for(int j = i; j<=n; j++)
        {
            printf("%d ",j);
        }
        for(int j = n-1; j>=i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }



        printf("\n%40d\n",33);
    // Pattern 33 ===================================

        for(int i = 1; i<=n; i++)
        {
            for(int j = i; j<=n; j++)
            {
                printf("%d ",j);
            }
            for(int j = n-1; j>= i; j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }


        printf("\n%40d\n",34);
    // Pattern 34 ===================================

    for(int i = 1; i<=n*2; i=i+2)
    {
        for(int j = 1; j<=n*2 - i +1 ; j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }




    printf("\n%40d\n",35);
    // Pattern 35 ===================================

    for(int i = 2 ; i<= n*2; i=i+2)
    {
        for(int j = 2; j<=i; j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }



    printf("\n%40d\n",36);
    // Pattern 36 ===================================

    for(int i = 2 ; i<= n*2; i=i+2)
    {
        for(int j = 2; j<=n*2-i+2; j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }



        printf("\n%40d\n",37);
    // Pattern 34 ===================================

    for(int i = 1; i<=n*2; i=i+2)
    {
        for(int j = i; j<=n*2 ; j=j+2)
        {
            printf("%d ",j);
        }
        printf("\n");
    }








    return 0;
}
