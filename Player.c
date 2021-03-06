#include <stdio.h>
#include <stdlib.h>
#include "stringHandling.h"
#include "Player.h"


#define DEBUG if(1)

Player newPlayer(String name) {
	Player player = (Player) malloc(sizeof(PLAYER_SIZE));
	copyString(player->name, name);
	player->score = 0;
	return player;
}

Player _newPlayer(String name, int score) {
	Player player = (Player) malloc(sizeof(PLAYER_SIZE));
	copyString(player->name, name);
	player->score = score;
	return player;
}

void destroyPlayer(Player player) {
	free(player);
}

int getPlayerScore(Player player) {
	return player->score;
}

void setPlayerScore(Player player, int score) {
	player->score = score;
}

String getPlayerName(Player this) {
	return this->name;
}
