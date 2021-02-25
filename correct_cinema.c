#include <stdio.h>


int movie_name_display(int x);
void movie_name_choice(int y);
int seat_choose_row(char a);
int seat_choose_no(int b);
void seat_graphic();
void display_date();
int choose_date(int r);
int main()

{
   system("COLOR B4");

    char conti;

printf("\n\n\n\n\t\t\t\t\t  ***************\n\n\t\t\t\t\t| Welcome to online cinema ticket booking system |\n\n\t\t\t\t\t  *****************\t\t\t\t\t");
    printf("\n\t\t\t\t\t\t Designed by: \n\t\t\t\t\t\t\t      ~Safwan Uddin Mairaj. \t\t\t\t");
    printf("\n\n \t\t\t\t\t\t               ~Syeda Sara Naqvi. \t\t\t\t");
    printf("\n\n \t\t\t\t\t\t                ~Rabeya Tasleem. \t\t\t\t");

    printf("\n\nPress and enter c to continue...\n");
    scanf("%c",&conti);

    int count,b=0,c,i=1;


    int x=12;
    //To Display Movies
    do
    {
        x=movie_name_display(x);
        if(x>12)
            printf("\n\n\t\t\t\t\t\t!! Invalid choice !!\n\n\t\t\t\t\t\t  !!! TRY AGAIN !!! \n\n");
    }

    //No.of receipts
    while(x>13);
    do
    {
        printf("\n\nHow Many Receipts Do You Want For The Particular Movie?  ");
        scanf("%d",&count);
        if(count>10)
            printf("\n\nSORRY YOU CAN NOT ACCESS PARTICULAR RECIEPTS AT A SINGLE TIME! \n_____");
    }
    while(count>10);

    //Choose seat
    seat_graphic(c);

    while(i<=count)
    {
        b=seat_choose_no(b);
        i++;
    }


    //Displaying Date
    display_date();


    //Choosing Date
    int r=31;
    printf("\nEnter the date: ");

    do
    {
        scanf("%d",&r);
        if(r>31)
            printf("\nEnter Correct Day! \n");
    }
    while(r>=32);


               //For Displaying Receipt

               int h;
    for(i=1; i<=count; i++)
    {
        printf("\n\n\t\t\t\t\t\tRECEIPT No.%d",i);
        h++;
        printf("\n\t\t\t\t\t\t===================\n\n");
        printf("MOVIE NAME: ");

        movie_name_choice(x);
        printf("\nSEAT NO.: %d\n__\n",b);
        printf("\nDATE: %d January 2021\n___\n",r);
    }
}

int movie_name_display(int x)

{

    printf("\n\nChoose a movie: \n\n");
    printf("\nHOLLYWOOD MOVIES:\n");
    printf("\n1.JOKER (Ratings: 8.5/10)\n__\n");
    printf("\n2.Fast and Furious 8 (Ratings: 6.7/10)\n__\n");
    printf("\n3.Avengers:Endgame (Ratings: 8.4/10)\n__\n");
    printf("\n4.John Wick (Ratings: 7.4/10)\n__\n");
    printf("\n\nBOLLWOOD MOVIES: \n");
    printf("\n5.Ghajni (Ratings: 7.3/10)\n__\n");
    printf("\n6.Dhammal (Ratings: 7.3/10)\n__\n");
    printf("\n7.DDLJ (Ratings: 8.1/10)\n__\n");
    printf("\n8.Golmaal (Ratings: 7.4/10)\n__\n");
    printf("\n9.Entertainment (Ratings: 7.4/10)\n__\n");
    printf("\n10.Ludo (Ratings: 7.4/10)\n__\n");
    printf("\n11.Empty Movie Slot\n__\n");
    printf("\n12.Empty Movie Slot\n__\n");
    printf("\n\nEnter The Movie No.: ");

    scanf("%d",&x);

    return x;
}

void movie_name_choice(int y)
{

    switch(y)
    {
    case 1:
        printf("Joker\n__ ");
        break;
    case 2:
        printf("Fast and Furious 8\n___");
        break;
    case 3:
        printf("Avengers:Endgame\n___");
        break;
    case 4:
        printf("John Wick\n___");
        break;
    case 5:
        printf("Ghajni\n___");
        break;
    case 6:
        printf("Dhammal\n__\n");
        break;
    case 7:
        printf("DDLJ\n__\n");
        break;
    case 8:
        printf("Golmaal\n__\n");
        break;
    case 9:
        printf("Entertainment\n__\n");
        break;
    case 10:
        printf("Ludo\n__\n");
        break;
    case 11:
        printf("Empty Movie Slot\n__\n");
        break;
    case 12:
        printf("Empty Movie Slot\n__\n");
        break;
    default:
        printf("Enter the correct movie number");
    }
}


int seat_choose_no(int b)
{

    printf("\n\nENTER SEAT NO.: ");

    scanf("%d",&b);
    printf("\n\n------------------------------------------------------------------------------------------------------------------------\n");
    return b;
}

void seat_graphic()
{

    int z;
    printf("\n\n------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("WHICH SEAT NUMBER YOU WANT TO CHOOSE? \n\n");
    for(z=1; z<=15; z++)
    {
        printf(" %d\t",z);
    }
    printf("\n\n\t");
    for(z=16; z<=28; z++)
    {
        printf(" %d\t",z);
    }
    printf("\t\n\n\t\t");
    for(z=29; z<=39; z++)
    {
        printf(" %d\t",z);
    }
    printf("\t\t\n\n\t\t\t");
    for(z=40; z<=48; z++)
    {
        printf(" %d\t",z);
    }
    printf("\t\t\t\n\n\t\t\t\t");

    for(z=49; z<=55; z++)
    {
        printf(" %d\t",z);
    }
    printf("\t\t\t\t\n\n\t\t\t\t\t");
    for(z=56; z<=60; z++)
    {
        printf(" %d\t",z);
    }
    printf("\t\t\t\t\n\n\t\t\t\t\t\t");
    for(z=61; z<=63; z++)
    {
        printf(" %d\t",z);
    }

}
void display_date()
{

    printf("\nChoose Date:  \n\n");
    for(int x=1; x<=31; x++)
    {
        // printf("day\tmonth\tyear\t\n");
        printf("%d January 2021\t\n",x);
    }
}
