//
// Created by josh on 4/29/23.
//

#ifndef TURINGTEXT_GAME_H
#define TURINGTEXT_GAME_H

#include <string>
using namespace std;

class Game {
private:
    string judgePhonenum;
    string aiLetter;
    string playerPhonenum;
    int no_of_messages = 0;
public:
    Game(string judgePhonenum, string playerPhonenum);
    bool isJudge(string phonenum);
    bool isAI(string letter);
    string getPlayerPhonenum();
    string getJudgePhonenum();
    int getNoOfMessages();
    void incrementNoOfMessages();
};


#endif //TURINGTEXT_GAME_H
