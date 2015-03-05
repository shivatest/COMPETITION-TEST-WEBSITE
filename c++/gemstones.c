#include<stdio.h>

int main()
{
    int t,i,j,tempcount=0,finalcount=0;
    scanf("%d",&t);
    char arr[t][100];
    for(i=0;i<t;++i)
    {
        scanf("%s \n",&arr[i]);
    }

    for(j=0;arr[j]!='\0';++j)
    {

            int k=1;
            while(k<=(t-1))
            {
            for(i=0;i<100;++i)
            {
                if(arr[0][j]==arr[k][i])
                {
                    tempcount++;
                }
            }
            k++;
            }
        if(tempcount>=t)
        {
            finalcount++;
        }
        tempcount=0;
    }

    printf("%d",finalcount);
}
