#include <stdio.h>
#include <string.h>

// Define the structure
struct Player {
    char name[50];
    int score;
};

// Function that takes a struct by reference (Pointer)
// This is more efficient as it doesn't copy the whole struct
void updateScore(struct Player *p, int points) {
    p->score += points; // Use the arrow operator (->) for pointers
}

// Function that takes a struct by value
void displayPlayer(struct Player p) {
    printf("Player: %s | Score: %d\n", p.name, p.score);
}

int main() {
    struct Player p1 = {"Alice", 100};

    updateScore(&p1, 50); // Pass the address
    displayPlayer(p1);    // Pass the copy

    return 0;
}
