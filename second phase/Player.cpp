#include "Player.h"

Player::Player(const QString &name) : playerName(name), score(0) {}

void Player::increaseScore() {
    score++;
}

int Player::getScore() const {
    return score;
}
