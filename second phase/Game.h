#ifndef GAME_H
#define GAME_H

#include <QObject>
#include "Player.h"
#include "TriviaAPI.h"

class Game : public QObject {
    Q_OBJECT

public:
    enum Mode { PvP, Survival };
    Game(Mode mode, QObject *parent = nullptr);
    void start();

private:
    Mode gameMode;
    Player *player1;
    Player *player2;
    TriviaAPI *triviaAPI;

    void setupGame();
    void handleAnswer(bool correct);
};

#endif // GAME_H
