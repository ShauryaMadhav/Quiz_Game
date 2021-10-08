#include <stdio.h>
#include <stdlib.h>

int main() {
	int entry_choice;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     Start Quiz");
	printf("\n\t\t\t\t\t\t   Yes[1] | NO[2]\t");
	scanf("%d", &entry_choice);

	if (entry_choice == 1)
	{
		void questions();
	} else if (entry_choice == 2) {
		exit(0);
	}
	
}

void questions() {

	//  struct questions {
	//  	char *question_name[5] = {
	//  		"What is python?","What language is this application made of?","What language is layout of websites made up of?", "Which language is used in scientific projects?", "What language is used to make games in UNITY games"
	//  	};
	//  	char *options[5][4] = {
	//  		{"Low Level Language","High Level Language","Assembly Language","Translation Language"},
	//  		{"C language","Python Language","C++ Language","C#"},
	//  		{"HTML","CSS","JavaScript","C language"},
	//  		{"CSS","JavaScript","C#","Python"},
	//  		{"C","JavaScript","C#","Python"}
	//  	};
	//  } questions;

	char choice;
	system("cls");
	question1:
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t1. What is python?\n");
		printf("\n\t\t\t\t   A) Low Level Language\t C) High Level Language\n");
		printf("\n\t\t\t\t   B) Assembly Language\t D) Translation Language\n\n");
		printf("\t\t\t\t\t\t      Choice: ");
		scanf("%s", &choice);

		if (choice == 'C' || choice == 'c')
		{
			printf("\t\t\t\t\t\t   Correct answer!");
		} else {
			printf("\t\t\t\t\t\t   Wrong answer!");
		}

		sleep(3);
		
	question2:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t2. What language is this application made of?\n");
		printf("\n\t\t\t\t\t   A) C language\t C) C++ Language\n");
		printf("\n\t\t\t\t\t   B) Python Language\t D) C#\n\n");
		printf("\t\t\t\t\t\t      Choice: ");
		scanf("%s", &choice);

		if (choice == 'A' || choice == 'a')
		{
			printf("\t\t\t\t\t\t   Correct answer!");
		} else {
			printf("\t\t\t\t\t\t   Wrong answer!");
		}

		sleep(3);

	question3:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t3. What language is layout of websites made up of?\n");
		printf("\n\t\t\t\t\t\t   A) HTML\t C) CSS\n");
		printf("\n\t\t\t\t\t   B) JavaScript\t D) C language\n\n");
		printf("\t\t\t\t\t\t      Choice: ");
		scanf("%s", &choice);

		if (choice == 'A' || choice == 'a')
		{
			printf("\t\t\t\t\t\t   Correct answer!");
		} else {
			printf("\t\t\t\t\t\t   Wrong answer!");
		}

		sleep(3);

	question4:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t4. Which language is used in scientific projects?\n");
		printf("\n\t\t\t\t\t   A) CSS\t\t C) C#\n");
		printf("\n\t\t\t\t\t   B) JavaScript\t D) Python\n\n");
		printf("\t\t\t\t\t\t      Choice: ");
		scanf("%s", &choice);
		//{"CSS","JavaScript","C#","Python"},

		if (choice == 'D' || choice == 'd')
		{
			printf("\t\t\t\t\t\t   Correct answer!");
		} else {
			printf("\t\t\t\t\t\t   Wrong answer!");
		}

		sleep(3);

	question5:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t5. What language is used to make games in UNITY games\n");
		printf("\n\t\t\t\t\t   A) C\t\t\t C) C#\n");
		printf("\n\t\t\t\t\t   B) JavaScript\t D) Python\n\n");
		printf("\t\t\t\t\t\t      Choice: ");
		scanf("%s", &choice);

		if (choice == 'C' || choice == 'c')
		{
			printf("\t\t\t\t\t\t   Correct answer!");
		} else {
			printf("\t\t\t\t\t\t   Wrong answer!");
		}

		sleep(3);
}