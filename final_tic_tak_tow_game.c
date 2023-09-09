#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void check(char,char);
char a[9]={'1','2','3','4','5','6','7','8','9'};
void gamename()
{
    printf("\t\t\t\t\t      TIK TACK GAME\n\n\n");
}
void show()
{
    printf("\t\t\t\t\t- | - - | - - | - - | -\n");
    printf("\t\t\t\t\t  | %c   | %c   | %C   |\n",a[0],a[1],a[2]);
    printf("\t\t\t\t\t- | - - | - - | - - | -\n");
    printf("\t\t\t\t\t  | %c   | %c   | %C   |\n",a[3],a[4],a[5]);
    printf("\t\t\t\t\t- | - - | - - | - - | -\n");
    printf("\t\t\t\t\t  | %c   | %c   | %C   |\n",a[6],a[7],a[8]);
    printf("\t\t\t\t\t- | - - | - - | - - | -\n\n\n");
}
void inputsymbol()
{
    printf("Symbol for 1st player is :X:\n");
    printf("Symbol for 2nd player is :O:\n");
}
void start()
{
    int o;
    printf("\n\nWho will start the game : PLAYER:1: OR PLAYER:2:\n");
    scanf("%d",&o);
}
int count;
void play()
{
    char p,s;
    printf("\n\nEnter your symbol :-\n");
    fflush(stdin);
    scanf("%c",&s);
    printf("Enter your position :-\n");
    fflush(stdin);
    scanf("%c",&p);
    count++;
    check(p,s);
}
void check(char p,char s)
{
    int i;
    for(i=0;i<9;i++)
    {
        if(a[i]==p)
        a[i]=s;

    }
}
int end()
{
	int i;
	for(i=0;i<9;i++)
	{
		if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
		
		return 1;
		else if((a[0]=='O'&&a[1]=='O'&&a[2]=='O')||(a[0]=='O'&&a[3]=='O'&&a[6]=='O')||(a[0]=='O'&&a[4]=='O'&&a[8]=='O')||(a[1]=='O'&&a[4]=='O'&&a[7]=='O')||(a[2]=='O'&&a[5]=='O'&&a[8]=='O')||(a[2]=='O'&&a[4]=='O'&&a[6]=='O')||(a[3]=='O'&&a[4]=='O'&&a[5]=='O')||(a[6]=='O'&&a[7]=='O'&&a[8]=='O'))
		return 2;
		else
		return 3;
	}
}
void main()
{
int r;
char ch;
labll :
system("cls");

    gamename();
    show();
    //lable :
    inputsymbol();
    start();
    play();
    lable :
    system("cls");
    gamename();
    show();
    inputsymbol();
    play();
    show();
    r=end();
    if(count<9)
    {
    if(r==1)
    {
    printf("player having 'X' symbol win the game\n");
    count=0;
	}
    else
    if(r==2)
    {
    printf("player having 'O' symbol win the game\n");
    count=0;
	}
    else
        goto lable;
		}
		else
		{
			printf("MATCH DRAWN\n");
			count=0;
		}
        
        printf("\n\nDo you want to play again\nPress y to continue \t Press any key to exit");
        fflush(stdin);
        scanf("%c",&ch);
        if(ch=='y'||ch=='Y')
        {
        	a[0]='1';
        	a[1]='2';
        	a[2]='3';
        	a[3]='4';
        	a[4]='5';
        	a[5]='6';
        	a[6]='7';
        	a[7]='8';
        	a[8]='9';
        	goto labll;
		}
    getch();
}
