#ifndef PLAYER_H
#define PLAYER_H

#include <QString>

class Player {
public:
    Player(const QString &name);
    void increaseScore();
    int getScore() const;

private:
    QString playerName;
    int score;
};

#endif // PLAYER_H
