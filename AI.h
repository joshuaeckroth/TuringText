//
// Created by josh on 4/29/23.
//

#ifndef TURINGTEXT_AI_H
#define TURINGTEXT_AI_H

#include <vector>
#include <string>
using namespace std;

class AI {
private:
    string openai_api_key;
public:
    AI(string openai_api_key);
    string askGPT(string q, vector <string> prior_messages);
};

#endif //TURINGTEXT_AI_H
