#include <string.h>
#include <stdio.h>

	void say_text(const char *text)	
	{	
		int size = strlen(text);
		printf("Hello '%s', it is %d bytes\n", text, size);
	}

	void my_respect()
	{
		printf("Respect for you!\n");
	}

	int main ()  
	{
		char input[256];
		printf("Please, enter the number: ");
		fgets(input, sizeof(input), stdin);

		input[strcspn(input, "\n")] = 0;

		say_text(input);
		my_respect();

		return 0;
	}


