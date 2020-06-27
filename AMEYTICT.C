//

#include <stdio.h>
#include <conio.h>
int main()
{
	char arr[3][3],x;                      // ทธนGป=187
	int i,j;                                  //       ผ=188
	clrscr();
					  //          ฝพฟภมยรฤลฦวศ=200
textcolor(11);   gotoxy(45,9);	cprintf("ษออออออออออออออออออออออออป\n");
   gotoxy(45,10);	printf("บ");gotoxy(52,10);textcolor(4);cprintf("W E L C O M E");printf("     บ\n");		    //    
   gotoxy(45,11);    printf("บ");	   gotoxy(55,11); printf("\t     	     บ\n");
   gotoxy(45,12);   printf("บ");gotoxy(48,11);textcolor(2); cprintf("       TO THE"); gotoxy(55,12);	printf("\      	     บ	\n") ;				//                  บ=186
   gotoxy(45,13);  printf("บ");gotoxy(52,7);textcolor(5+128);cprintf(" LETS PLAY!");
   gotoxy(45,14);  printf("บ");gotoxy(48,13);textcolor(9);	cprintf("      WORLD OF "); gotoxy(-1,14); printf("       บ\n") ;
   gotoxy(45,15);  printf("บ");	  gotoxy(55,15);   printf("\t             บ\n") ;
   gotoxy(45,16);  printf("บ");gotoxy(48,14);textcolor(14+128);	cprintf("  TIC - TAC - TOE ! ");  gotoxy(55,16);      printf("\t      	     บ\n");
textcolor(11);     gotoxy(45,17);  cprintf("ศออออออออออออออออออออออออผ") ; gotoxy(70,14);printf("บ\n");
	gotoxy(75,18);textcolor(14+128);
	cprintf("                                  RULES:-\n");
	gotoxy(80,21);textcolor(13);
	cprintf("                             * GAME HAS 3 ROWS & COLUMNS!\n");
	gotoxy(80,22);textcolor(13);
	cprintf("                             * PLAYER MUST ENTER ROW NO FOLLOWED BY COLUMN NO!\n");
	gotoxy(80,23);textcolor(13);
	cprintf("                             * PRESS ENTER KEY AFTER ENTERING ANY ROW OR COL NO!\n");
	gotoxy(80,24);textcolor(14+128);
	cprintf("                             *   HAVE A GOOD PLAYING EXPERIENCE!");
	gotoxy(1,1);textcolor(14+128);
	cprintf("GAME BEGINS!");
	printf("\n");
	textcolor(3);
	cprintf("PLAYER 1 ENTER THE ROW AND COL:-");
	printf("\n");
	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);

									//  ษ=201


	if(i==0&&j==0)
	{
		arr[0][0]='X';
		textcolor(11);
		cprintf("%c",arr[0][0]);

	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='X';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='X';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='X';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='X';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='X';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}

	 else if(i==2&&j==0)
	{
		arr[2][0]='X';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='X';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='X';
		textcolor(11);
		cprintf("%c",arr[2][2]);

	}
	printf("\n");

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if((arr[i][j])!='X')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}




	  printf("\n");








	textcolor(3);
	cprintf("PLAYER 2 ENTER THE ROW AND COL:-");
	printf("\n");

	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='0';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='0';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='0';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='0';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='0';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='0';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='0';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='0';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='0';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0' )

			{
				arr[i][j]='_';
			}

		}
	}

	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}




	  printf("\n");




















	textcolor(3);
	cprintf("PLAYER 1 ENTER THE ROW AND COL:-");
	printf("\n");



	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='X';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='X';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='X';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='X';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='X';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='X';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='X';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='X';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='X';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}


	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}


	printf("\n");


















	textcolor(3);
	cprintf("PLAYER 2 ENTER THE ROW AND COL:-");
	printf("\n");


	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='0';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='0';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='0';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='0';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='0';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='0';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='0';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='0';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='0';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}







       printf("\n");
















	textcolor(3);
	cprintf("PLAYER 1 ENTER THE ROW AND COL:-");
	printf("\n");


	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='X';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='X';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='X';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='X';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='X';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='X';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='X';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='X';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='X';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}


	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}




	if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='X' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='X' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='X' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='X' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='X' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='X' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='X' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == 'X')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 1 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;

	}
	else if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='0' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='0' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='0' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='0' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='0' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='0' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='0' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == '0')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 2 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;

	}

       printf("\n");





	textcolor(3);
	cprintf("PLAYER 2 ENTER THE ROW AND COL:-");
	printf("\n");


	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='0';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='0';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='0';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='0';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='0';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='0';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='0';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='0';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='0';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}


	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}


	if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='X' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='X' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='X' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='X' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='X' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='X' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='X' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == 'X')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 1 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}
	else if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='0' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='0' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='0' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='0' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='0' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='0' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='0' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == '0')
	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 2 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}



       printf("\n");









	textcolor(3);
	cprintf("PLAYER 1 ENTER THE ROW AND COL:-");
	printf("\n");


	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='X';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='X';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='X';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='X';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='X';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='X';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='X';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='X';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='X';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}


	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}


       printf("\n");

	if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='X' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='X' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='X' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='X' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='X' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='X' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='X' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == 'X')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 1 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}
	else if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='0' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='0' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='0' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='0' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='0' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='0' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='0' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == '0')
	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 2 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}


	printf("\n");


	textcolor(3);
	cprintf("PLAYER 2 ENTER THE ROW AND COL:-");
	printf("\n");

	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='0';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='0';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='0';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='0';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='0';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='0';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='0';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='0';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='0';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}


	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}
       printf("\n");

	if(arr[0][0]&&arr[0][1]&&arr[0][2] || arr[0][0]&&arr[1][0]&&arr[2][0] || arr[1][0]&&arr[1][1]&&arr[1][2] || arr[2][0]&&arr[2][1]&&arr[2][2] || arr[0][1]&&arr[1][1]&&arr[2][1] || arr[0][2]&&arr[1][2]&&arr[2][2] || arr[0][0]&&arr[1][1]&&arr[2][2] || arr[0][2]&&arr[1][1]&&arr[2][0] == 'X')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 1 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}
	else if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='0' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='0' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='0' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='0' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='0' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='0' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='0' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == '0')
	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 2 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}
	printf("\n");






	textcolor(3);
	cprintf("PLAYER 1 ENTER THE ROW AND COL:-");
	printf("\n");

	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='X';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='X';
		textcolor(11);
		cprintf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='X';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='X';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='X';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='X';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='X';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='X';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='X';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	printf("\n");


	if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='X' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='X' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='X' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='X' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='X' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='X' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='X' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == 'X')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 1 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}
	else if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='0' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='0' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='0' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='0' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='0' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='0' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='0' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == '0')
	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER  2  WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
		goto x;
	}


       printf("\n");



	textcolor(3);
	cprintf("PLAYER 2 ENTER THE ROW AND COL:-");
	printf("\n");

	textcolor(11);
	cscanf("%d",&i);
	printf("\n");
	textcolor(11);
	cscanf("%d",&j);


	if(i==0&&j==0)
	{
		arr[0][0]='X';
		textcolor(11);
		cprintf("%c",arr[0][0]);
	}



	 else if(i==0&&j==1)
	{
		arr[0][1]='0';
		textcolor(11);
		printf("%c",arr[0][1]);
	}			  //00//01//00//01
	else if(i==0&&j==2)
	{
		arr[0][2]='0';
		textcolor(11);
		cprintf("%c",arr[0][2]);
	}
	 else if(i==1&&j==0)
	{
		arr[1][0]='0';
		textcolor(11);
		cprintf("%c",arr[1][0]);
	}
	 else if(i==1&&j==1)
	{
		arr[1][1]='0';
		textcolor(11);
		cprintf("%c",arr[1][1]);
	}
	 else if(i==1&&j==2)
	{
		arr[1][2]='0';
		textcolor(11);
		cprintf("%c",arr[1][2]);
	}
	 else if(i==2&&j==0)
	{
		arr[2][0]='0';
		textcolor(11);
		cprintf("%c",arr[2][0]);
	}
	 else if(i==2&&j==1)
	{
		arr[2][1]='0';
		textcolor(11);
		cprintf("%c",arr[2][1]);
	}
	 else if(i==2&&j==2)
	{
		arr[2][2]='0';
		textcolor(11);
		cprintf("%c",arr[2][2]);
	}



	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(arr[i][j]!='X' &&  arr[i][j] != '0')
			{
				arr[i][j]='_';
			}
		}
	}
	printf("\n");

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			textcolor(11);
			cprintf("%7c  ",arr[i][j]);
		}
		printf("\n");
		printf("\n");
	}




	if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='X' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='X' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='X' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='X' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='X' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='X' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='X' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == 'X')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PlAYER 1 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");

	}

	else if(arr[0][0]==arr[0][1]&&arr[0][0]==arr[0][2]&&arr[0][0]=='0' || arr[0][0]==arr[1][0]&&arr[0][0]==arr[2][0]&&arr[0][0]=='0' || arr[1][0]==arr[1][1]&&arr[1][0]==arr[1][2]&&arr[1][0]=='0' || arr[2][0]==arr[2][1]&&arr[2][0]==arr[2][2]&&arr[2][0]=='0' || arr[0][1]==arr[1][1]&&arr[0][1]==arr[2][1]&&arr[0][1]=='0' || arr[0][2]==arr[1][2]&&arr[0][2]==arr[2][2]&&arr[0][2]=='0' || arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2]&&arr[0][0]=='0' || arr[0][2]==arr[1][1]&&arr[0][2]==arr[2][0]&&arr[0][2] == '0')

	{
		textcolor(11+128);gotoxy(40,10);
		cprintf(" PLAYER 2 WINS ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
	}
	else
	{
		textcolor(11+128);gotoxy(40,10);
		cprintf("  ITS A TIE ! ");
		textcolor(14+128);gotoxy(40,15);
		cprintf("T H A N K Y O U !");
	}
	x:

	getch();
	return 0;
}
