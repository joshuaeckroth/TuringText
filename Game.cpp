//
// Created by josh on 4/29/23.
//

#include "Game.h"

Game::Game(string playerPhonenum, string judgePhonenum) {
    this->playerPhonenum = playerPhonenum;
    this->judgePhonenum = judgePhonenum;
    string aiLetter = rand() % 2 == 0 ? "A" : "B";
    this->aiLetter = aiLetter;
}

bool Game::isJudge(string phonenum) {
    return judgePhonenum == phonenum;
}

bool Game::isAI(string letter) {
    return aiLetter == letter;
}

string Game::getPlayerPhonenum() {
    return playerPhonenum;
}

string Game::getJudgePhonenum() {
    return judgePhonenum;
}

int Game::getNoOfMessages() {
    return no_of_messages;
}

void Game::incrementNoOfMessages() {
    no_of_messages++;
}

bool Game::isGameOver() {
    return game_over;
}

void Game::setGameOver(bool game_over) {
    this->game_over = game_over;
}

void Game::addAIMessage(string message) {
    AI_messages.push_back(message);
}

vector <string> Game::getAIMessages() {
    return AI_messages;
}
