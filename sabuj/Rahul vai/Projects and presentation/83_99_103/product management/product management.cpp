#include<stdio.h>
#include<conio.h>
//#include<stdlib.h>
#include<string.h>
struct info{
    char brand_name[100];
    int count;
    int price;
    char weight[100];
}s[100];

int main()
{
    FILE *fp1;
    char choice;
    char c[100];
    system("cls");
    system("color 72");
    printf("\n\n\n");
    printf("\t\t\t\xDB\xDB\xDB\xDB\xDB\xDb\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xdB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2 PRODUCT MANAGEMENT SYSTEM \xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xDB\xDB\xDB\xDb\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xdB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PRODUCT KEYWORD: \xb2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 1=water \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 2=oil \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 3=drinks \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 4=snacks \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 5=rice \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 6=tea \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 7=fruits \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 8=noodles \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 9=plastic accessories\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 10=Detergent and Soap\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 11=Mosquito coil\xB2\xB2\xB2\xB2\xB2\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xDB\xDB\xDB\xDb\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xdB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\t\t\t\xDB\xDB\xDB\xDB\xDB\xDb\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xdB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n");
    printf("\n\n\t\t\t");
    while(1)
    {
    printf("ENTER YOUR PRODUCT TYPE NUMBER: ");
    scanf("%d",&choice);

    if(choice==1)
        fp1=fopen("water.txt","r");
    else if(choice==2)
        fp1=fopen("oil.txt","r");
    else if(choice==3)
        fp1=fopen("drinks.txt","r");
    else if(choice==4)
        fp1=fopen("snacks.txt","r");
    else if(choice==5)
        fp1=fopen("rice.txt","r");
    else if(choice==6)
        fp1=fopen("tea.txt","r");
    else if(choice==7)
        fp1=fopen("fruits.txt","r");
    else if(choice==8)
        fp1=fopen("noodles.txt","r");
    else if(choice==9)
        fp1=fopen("plastic accessories.txt","r");
    else if(choice==10)
        fp1=fopen("Detergent and Soap.txt","r");
    else if(choice==11)
        fp1=fopen("Mosquito coil.txt","r");

    for(int i=0;i<3;i++)
        fscanf(fp1,"%s %d %d %s",&s[i].brand_name,&s[i].count,&s[i].price,&s[i].weight);

    fclose(fp1);
    for(int h=0;h<3;h++)
    {

        puts(s[h].brand_name);
    }
    printf("ENTER YOUR BRAND NAME: ");
    fflush(stdin);
    scanf("%s",&c);
    for(int i=0;i<3;i++)
    {
        if(strcmp(s[i].brand_name,c)==0)
        {
            printf("count=%d\n",s[i].count);
            printf("price=%d\n",s[i].price);
            printf("weight=");
            puts(s[i].weight);
            printf("\n\n");
            printf("\t\t        ");
        }
    }
    }
   return 0;
}
