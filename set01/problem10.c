#include<stdio.h>
#include<string.h>
void  input_two_strings(char*string1,char*string2);
int stringcompare(char*string1,char*string2);
void output(char*string1,char*string2,int result);
int main()
{
    char str1[100],str2[100];
    input_two_strings(str1,str2);
    int result = stringcompare(str1,str2);
    output(str1,str2,result);
    return 0;
}
void input_two_strings(char*string1,char*string2)
{
    printf("enter the first string\n");
    scanf("%s",string1);
    printf("enter the second string:\n");
    scanf("%s",string2);
}
int stringcompare(char*string1,char*string2)
{
    int result = strcmp(string1,string2);
    return result;
}
void output(char*string1,char*string2,int result)
{
    if(result<0)
    {
        printf("%s is less than %s\n",string1,string2);
    }
    else if(result>0)
    {
        printf("%s is greater than %s\n",string1,string2);
    }
    else if(result ==0)
    {
        printf("%s is equal to  %s\n",string1,string2);
    }
}