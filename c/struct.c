#include <stdio.h>

int main(int argc, char *argv[])
{
	struct person {
		size_t size;
		char name[64];
		int answer_to_ultimat_question;
		unsigned shoe_size;
	};

	struct person josh;
	
	josh.name[0] = 'j';
	josh.name[1] = 'o';

	printf("josh.name\t%c\n", josh.name[0]);
	printf("josh.name\t%c\n", josh.name[1]);

	struct person *josh_ptr;

	josh_ptr = &josh;

	printf("josh_ptr.name\t%c%c\n", josh_ptr->name[0], josh_ptr->name[1]);
	return 0;
}
