#include <stdio.h> // Necessary for printf()
#include <time.h>
#include <stdlib.h>

// TODO Other includes
int get_random_int() {
	srand(time(NULL));
	return(rand() % 11);
}

int main() {
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	int myrand = get_random_int();
	if (myrand >= 0 && myrand <= 4) {
		printf("Eat more beef, kick less cats\n");
	}
	else if (myrand >=5 && myrand <= 9) {
		printf("FRODO LIVES\n");
	}
	else {
		printf("Larn is the best roguelike\n");
	}
	// TODO Complete the program
	printf("The random number was: %d\n", myrand);
}
