#include<stdio.h>
#include<conio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Udhay.K"
#define CANDIDATE2 "Bala Kiranmai.D"
#define CANDIDATE3 "Pranay Deep.K"
#define CANDIDATE4 "Imran Basha.A"

int votesCount1=0, votesCount2=0, votesCount3=0, votesCount4=0, spoiledtvotes=0;
void main();
void castVote(){
int choice,age;
clrscr();
printf("Enter your age\n");
scanf("%d",&age);
if(age>=18){
printf("You are eligible for voting\n");
printf("\n\n------Please choose your Candidate------\n\n");
printf("\n 1. %s", CANDIDATE1);
printf("\n 2. %s", CANDIDATE2);
printf("\n 3. %s", CANDIDATE3);
printf("\n 4. %s", CANDIDATE4);
printf("\n 5. %s", "NOTA");

printf("\n\n Input your choice (1 - 5) : ");
scanf("%d",&choice);

switch(choice){
    case 1: votesCount1++; break;
    case 2: votesCount2++; break;
    case 3: votesCount3++; break;
    case 4: votesCount4++; break;
    case 5: spoiledtvotes++; break;
    default: printf("\n Error: Wrong Choice !! Please retry");

             getchar();
}
printf("\n thanks for vote !!");

getch();
main();
}else
printf("You are not eligible to Vote\n");
}

void votesCount(){
clrscr();
printf("\n\n ------Voting Statics------");
printf("\n %s - %d ", CANDIDATE1, votesCount1);
printf("\n %s - %d ", CANDIDATE2, votesCount2);
printf("\n %s - %d ", CANDIDATE3, votesCount3);
printf("\n %s - %d ", CANDIDATE4, votesCount4);
printf("\n %s - %d ", "NOTA", spoiledtvotes);

getch();
main();

}

void getLeadingCandidate(){
    clrscr();
	printf("\n\n ------Leading Candiate------\n\n");
    if(votesCount1>votesCount2 && votesCount1>votesCount3 && votesCount1 >votesCount4)
    printf("%s",CANDIDATE1);
    else if (votesCount2>votesCount3 && votesCount2>votesCount4 && votesCount2 >votesCount1)
    printf("%s",CANDIDATE2);
    else if(votesCount3>votesCount4 && votesCount3>votesCount2 && votesCount3 >votesCount1)
    printf("%s",CANDIDATE3);
    else if(votesCount4>votesCount1 && votesCount4>votesCount2 && votesCount4 >votesCount3)
    printf("%s",CANDIDATE4);
    else
    printf("----- Warning !!! No-win situation----");


    getch();
    main();
}
void main()
{

int choice;
clrscr();

do{
printf("\n\n ------Welcome to College Election 2022------");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Find Vote Count");
printf("\n 3. Find leading Candidate");
printf("\n 4. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);
switch(choice)
{

case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
case 4: exit(0);break;

}
}

while(choice!=0);

getchar();
getch();
}
