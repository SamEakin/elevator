#include <stdio.h> 

/* Function Declarations */
void move(int destination);
void print();
int listen();
int call();

/* Elevator Object */
struct Elevator {
	int input;
	int destination;
	int floor;
} Elevator;

/* Button */
struct Button {
	int up;
	int down;
} Floor1, Floor2, Floor3, Floor4, Floor5;	

int main(void) {
	do {
		Elevator.input = listen();
		print();
	}
	while (Elevator.input != 0);
	printf("Shutting down...\n");
	return 0;
}

int listen() {
	int input = 0;
	printf("Listening...\n");
	scanf("%d", &input);
	return input;
}

void move(int destination) {
}

void print(int output) {
	printf("Floor: %d\n", Elevator.floor);
	printf("Input: %d\n", Elevator.input);
	printf("Destination: %d\n", Elevator.destination);
}

int call() {
	
}
