#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
int main()
{
	int a,b,c,d;
	char usersentry[350];
	double time_spent=0.0, mins,min,speed;
	char string[]="\nalsk sdk jrieo sla e sdfjs wer ds clajl fr ioqjoiew fjsja lksa wq sadjfklja oirijalsjf asjfijw fljswe riwafjaw dc lkcmvn wjoit vj vcerw sljljre sjferoij vjlkj fsgjoi jsfdjiodj sjrej erjrjij erpooit  ietuwioetoj sjfklgj dvjfdsv bwoi sep jfiof v lrejejr vlmdglkjs cljvjlkjsl er gewjg jogj oijlfdkv lswp wsjl ssjlj wioru sjzs sgjdvj\n\n\n";
	printf("INSTRUCTION \nCopy the text that appears on the screen and then press ENTER key \nPress any key to continue \n\n\n\n\n");
	getch();
	printf("%s",string);
	time_t begin = clock();
	gets(usersentry);
	time_t end = clock();
	a = strcmp(string,usersentry);
	b=strlen(usersentry);
	time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	mins= time_spent/60.0;
	min=4*mins;
	speed=b/min;
	if (a==0)
	{
		printf("your typing speed is %d wpm\n",speed);
	}
	else
	printf("your typing speed is %f wpm and you need to improve accuracy\n\n\n\n\n",speed);
	
	printf("Enter any key to exit");
	getch();
	return 0;
}
