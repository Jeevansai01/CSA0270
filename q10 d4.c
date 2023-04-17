#include <stdio.h>

#define MAX_PLAYERS 11

struct player {
    char name[20];
    int runs_scored;
};

int main() {
    struct player players[MAX_PLAYERS];
    int num_players, i, total_runs = 0;
    
    printf("Enter the number of players in the team (max 11): ");
    scanf("%d", &num_players);
    
    if (num_players > MAX_PLAYERS) {
        printf("Error: Too many players!\n");
        return 1;
    }
    
    for (i = 0; i < num_players; i++) {
        printf("Enter name of player %d: ", i+1);
        scanf("%s", players[i].name);
        
        printf("Enter runs scored by player %d: ", i+1);
        scanf("%d", &players[i].runs_scored);
        
        total_runs += players[i].runs_scored;
    }
    
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    
    return 0;
}