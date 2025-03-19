//#if 0
#include <iostream>
#include<string.h>
#include <ctype.h>
#include<stdio.h>
using namespace std;


struct polyNode
{
int coeff;
int pow;
struct polyNode *next;
};

int addedpoly[10]={0};
        int n=0;
int main()
{
    polyNode *head1[2],*temp;
    head1[0]=NULL;
    head1[1]=NULL;
        printf("Enter the two Polynomials\n");
    for (int z=0;z<2;z++)
    {

        char poly1[50];
        gets(poly1);
        strcat(poly1,"x");
        char plus[100]="+";
        strcat(plus,poly1);
        strcpy(poly1,plus);


        //printf("%s\n",poly1);
        char ch[10];
        int k=0;
        int arr[10];

        int flag=0;
        n=0;

        //+4x^3+3x^2+2x+1x
            for (int i=0;i<strlen(poly1);i++)
            {
                    if (poly1[i]=='+' )
                    {
                        for(int m=i+1;poly1[m]!='x' && poly1[m]!='\0';m++)
                        {
                            ch[k]=poly1[m];
                            k++;
                        }
                        ch[k]='\0';
                        k=0;
                        arr[n]=atoi(ch);
                        if (arr[n]==0)
                            arr[n]=1;


                        //printf("%d\n",arr[n]);

                        n++;

                    }

            }

        polyNode *previous;
        for(int j=0;j<n;j++)
        {
            temp=(polyNode*)malloc(sizeof(polyNode));
            temp-> coeff=arr[j];
            temp->pow=n-j-1;
            temp->next=NULL;
            //printf("%d\n",temp-> coeff);
            //printf("%d\n",temp-> pow);

            if (head1[z]==NULL)
            {
                head1[z]=temp;
                previous=head1[z];
            }
            else
            {
                previous->next=temp;
                previous=temp;
            }
        }

        temp=head1[z];
        int l=0;
        while(temp!=NULL)
        {
            addedpoly[l]+=temp->coeff;
            //printf("...%d\n",addedpoly[l]);
            temp=temp->next;
            l++;
        }

    }

    printf("----------------\n");
    for(int i=0;i<n;i++)
    {
        if (i<2)
        {
            printf("%dx^%d+",addedpoly[i],n-1-i);
        }
        else if (i==2)
        {
            printf("%dx+",addedpoly[i]);
        }
        else
        {
            printf("%d",addedpoly[i] );
        }


    }
    printf("\n----------------\n\n");
}

//#endif // 0


#if 0
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


main()
{

    char poly[25]="14x^3+23x^2+143x+123";
    //+14x^3+23x^2+143x+123x
    printf("Before : %s\n",poly);
    strcat(poly,"x");
    printf("After x concat : %s\n",poly);
    char plus[100]="+";
    strcat(plus,poly);
    printf("After + concat : %s\n",plus);
    //printf("%s\n",plus);
    strcpy(poly,plus);


 char ch[10];
 int k=0;
 int arr[10];
 int n=0;
    for(int i=0;i<strlen(poly);i++)
    {
        if (poly[i]=='+')
        {
                    for(int m=i+1;poly[m]!='x' && poly[m]!='\0';m++)
                        {
                            ch[k]=poly[m];
                            k++;
                        }
                            ch[k]='\0';
                            arr[n]=atoi(ch);
                            k=0;
                            n++;

        }

    }
for(int j=0;j<n;j++)
    printf("%d\n",arr[j]);

}

#endif






















