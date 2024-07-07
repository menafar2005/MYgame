#ifndef TRIVIAAPI_H
#define TRIVIAAPI_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>

class TriviaAPI : public QObject {
    Q_OBJECT

public:
    TriviaAPI(QObject *parent = nullptr);
    void fetchQuestions();

private slots:
    void onQuestionsFetched(QNetworkReply *reply);

private:
    QNetworkAccessManager *networkManager;
};

#endif // TRIVIAAPI_H
