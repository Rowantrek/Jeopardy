#ifndef QTJEOPARDY_H
#define QTJEOPARDY_H

#include <QMainWindow>
#include <QtXml>
#include <QMediaPlayer>
#include <logic.h>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <mmstream.h>

namespace Ui {
class QtJeopardy;
}

class QtJeopardy : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtJeopardy(QWidget *parent = nullptr);
    ~QtJeopardy();
    void SetupGame();
    void InitQuestions();
    void HandleAnswer(int answerint);
    void PlayQuestionMusic();

private slots:
    void on_ui_mm_play_clicked();

    void on_ui_mm_how_clicked();

    void on_ui_mm_high_clicked();

    void on_ui_mm_quit_clicked();

    void on_ui_ng_next_clicked();

    void on_ui_handle_currentChanged(int arg1);

    void on_ui_qm_btn1_1_clicked();

    void on_ui_qm_ans1_clicked();

    void on_ui_qm_ans2_clicked();

    void on_ui_qm_ans3_clicked();

    void on_ui_qm_ans4_clicked();

    void on_ui_mg_btn1_1_clicked();

    void on_ui_mg_btn1_2_clicked();

    void on_ui_mg_btn1_3_clicked();

    void on_ui_mg_btn1_4_clicked();

    void on_ui_mg_btn1_5_clicked();

    void on_ui_mg_btn2_1_clicked();

private:
    Ui::QtJeopardy *ui;
    QString PlayerOneName;
    QString PlayerTwoName;
    int TurnStatus;
    int PlayerOneScore;
    int PlayerTwoScore;
    QDomElement rootxml;
    std::string QuestionID;
    QString QuestionText;
    QString QAnswer1;
    QString QAnswer2;
    QString QAnswer3;
    QString QAnswer4;
    int AnswerCorrect;
    int QuestionScore;
    // Define Question Structures
    struct QuestionData
    {
        std::string QuestionID;
        QString QuestionText;
        QString QAnswer1;
        QString QAnswer2;
        QString QAnswer3;
        QString QAnswer4;
        int CorrectAnswer;
        int QuestionScore;
    };
    QuestionData Q1_1;
    QuestionData Q1_2;
    QuestionData Q1_3;
    QuestionData Q1_4;
    QuestionData Q1_5;
    QuestionData Q2_1;
    QuestionData Q2_2;
    QuestionData Q2_3;
    QuestionData Q2_4;
    QuestionData Q2_5;
    QuestionData Q3_1;
    QuestionData Q3_2;
    QuestionData Q3_3;
    QuestionData Q3_4;
    QuestionData Q3_5;
    QuestionData Q4_1;
    QuestionData Q4_2;
    QuestionData Q4_3;
    QuestionData Q4_4;
    QuestionData Q4_5;
    QuestionData Q5_1;
    QuestionData Q5_2;
    QuestionData Q5_3;
    QuestionData Q5_4;
    QuestionData Q5_5;
    int Music;
};

#endif // QTJEOPARDY_H
