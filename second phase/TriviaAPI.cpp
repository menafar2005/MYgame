#include "TriviaAPI.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

TriviaAPI::TriviaAPI(QObject *parent) : QObject(parent) {
    networkManager = new QNetworkAccessManager(this);
}

void TriviaAPI::fetchQuestions() {
    QUrl url("https://opentdb.com/api.php?amount=10&type=multiple");
    QNetworkRequest request(url);
    connect(networkManager, &QNetworkAccessManager::finished, this, &TriviaAPI::onQuestionsFetched);
    networkManager->get(request);
}

void TriviaAPI::onQuestionsFetched(QNetworkReply *reply) {
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray response = reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(response);
        QJsonObject json = doc.object();
        QJsonArray questions = json["results"].toArray();
        // Process questions
    }
    reply->deleteLater();
}
