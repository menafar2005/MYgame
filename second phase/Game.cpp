#include "Game.h"

Game::Game(Mode mode, QObject *parent) : QObject(parent), gameMode(mode) {
    triviaAPI = new TriviaAPI(this);
    setupGame();
}

void Game::setupGame() {
    if (gameMode == PvP) {
        player1 = new Player("Player 1");
        player2 = new Player("Player 2");
    } else {
        player1 = new Player("Player");
    }
}

void Game::start() {
    triviaAPI->fetchQuestions();
}

void Game::handleAnswer(bool correct) {
    if (correct) {
        player1->increaseScore();
    } else {
        // Handle incorrect answer
    }
}
