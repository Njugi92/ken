#include <stdio.h>

struct student
{
	char *name;
	char *email;
	float scores;
};

int main()
{
	struct student student1 = {"Njugi", "kenkaruma.kk@gmail.com", 150.76};
	printf("\t\nName	: %s", student1.name);
	printf("\t\nEmail	: %s", student1.email);
	printf("\t\nScores	: %f", student1.scores);
	printf("\n");

	return (0);
}
