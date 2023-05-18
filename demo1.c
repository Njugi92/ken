#include <stdio.h>

struct student
{
	char *name;
	char *email;
	float scores;
};

int main()
{
	struct student student1 = {"Njugi Karuma", "kenkaruma.kk@gmail.com", 170.556};
	struct student student2 = {"Stephen Karanja", "steveCool2@gmail.com", 150.78};
	struct student student3 = {"judy wanjala", "judy@gmail.com", 90.77};
	struct student student4 = {"mwangi mbugi", "mwangimbbugi2g@gmail.com", 107.9};
	struct student student5 = {"lucy muthoni", "lucymuthoni22@yahoo.com",100.09};


	printf("\t\nName	: %s", student1.name);
	printf("\t\nEmail	: %s", student1.email);
	printf("\t\nScores	: %f", student1.scores);
	printf("\n");
	printf("\t\nName	: %s", student2.name);
	printf("\t\nEmail	: %s", student2.email);
	printf("\t\nScores	: %f", student2.scores);
	printf("\n");
	printf("\t\nName        : %s", student3.name);
        printf("\t\nEmail       : %s", student3.email);
        printf("\t\nScores      : %f", student3.scores);
        printf("\n");
	printf("\t\nName        : %s", student4.name);
        printf("\t\nEmail       : %s", student4.email);
        printf("\t\nScores      : %f", student4.scores);
        printf("\n");
	printf("\t\nName        : %s", student5.name);
        printf("\t\nEmail       : %s", student5.email);
        printf("\t\nScores      : %f", student5.scores);
        printf("\n");

	return (0);
}
