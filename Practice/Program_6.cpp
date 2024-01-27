#include<iostream>
using namespace std;

void word(char str1[100],char str2[25])
{
    int i,j,str1len=0,str2len=0,k=0,count=0,flag;
    char temp[25];
    
    for(i=0;str1[i]!='\0';i++)
        str1len++;

    for(i=0;str2[i]!='\0';i++)
        str2len++;

    for(i=0;i<str1len;i++)
    {
        if(str1[i]==str2[0])
        {
            for(j=0;j<str2len;j++)
            {
                temp[j]=str1[i];
                i++;
            }

            flag=0;
            for(j=0;j<str2len;j++)
            {
                if(temp[j]==str2[j])
                    flag=1;

                else
                {
                    flag=0;
                    break;
                }
            }

            if(flag==1)
                count++;
        }
    }

    cout<<"No. of repetition: "<<count;
}

int main()
{
    word("Ena Meena Deeka sheeka peeka Reeka","eeka");
}