//
// Created by josh on 4/29/23.
//

#ifndef TURINGTEXT_GAME_H
#define TURINGTEXT_GAME_H

#include <vector>
#include <string>
using namespace std;

class Game {
private:
    string judgePhonenum;
    string aiLetter;
    string playerPhonenum;
    int no_of_messages = 0;
    bool game_over = false;
    vector <string> AI_messages;


public:
    Game(string judgePhonenum, string playerPhonenum);
    bool isJudge(string phonenum);
    bool isAI(string letter);
    string getPlayerPhonenum();
    string getJudgePhonenum();
    int getNoOfMessages();
    void incrementNoOfMessages();
    bool isGameOver();
    void setGameOver(bool game_over);
    void addAIMessage(string message);
    vector <string> getAIMessages();
};


#endif //TURINGTEXT_GAME_H
