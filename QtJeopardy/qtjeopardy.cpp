#include "qtjeopardy.h"
#include "ui_qtjeopardy.h"
#include <string>

QtJeopardy::QtJeopardy(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtJeopardy)
{
    ui->setupUi(this);
    ui->ui_handle->setCurrentIndex(0);
    QtJeopardy::InitQuestions();
}

QtJeopardy::~QtJeopardy()
{
    delete ui;
}

void QtJeopardy::on_ui_mm_play_clicked()
{
    ui->ui_handle->setCurrentIndex(1);
}

void QtJeopardy::on_ui_mm_how_clicked()
{
    return;
}

void QtJeopardy::on_ui_mm_high_clicked()
{
    return;
}

void QtJeopardy::on_ui_mm_quit_clicked()
{
    QtJeopardy::close();
}

void QtJeopardy::on_ui_ng_next_clicked()
{
    // Set global player names from text input
    QtJeopardy::PlayerOneName = ui->ui_ng_p1input->text();
    QtJeopardy::PlayerTwoName = ui->ui_ng_p2input->text();
    // Call Game init method
    QtJeopardy::SetupGame();
    // Changes to Main Game screen
    ui->ui_handle->setCurrentIndex(2);
}

void QtJeopardy::SetupGame()
{
    // Stops music
    QtJeopardy::Music = 0;
    // Init Turn Status
    QtJeopardy::TurnStatus = 1;
    // Init Score Values
    QtJeopardy::PlayerOneScore = 0;
    QtJeopardy::PlayerTwoScore = 0;
    // Set Player Names on Game Screens (Static Elements Only)
    ui->ui_mg_p1->setText("Player 1: " + QtJeopardy::PlayerOneName);
    ui->ui_mg_p2->setText("Player 2: " + QtJeopardy::PlayerTwoName);

}

void QtJeopardy::PlayQuestionMusic() {
    QMediaPlayer *player = new QMediaPlayer;
    player->setVolume(25);
    player->stop();

    if (QtJeopardy::Music == 0) {
        player->stop();
    } else if (QtJeopardy::Music == 1) {
        player->setMedia(QUrl("qrc:/rsc/rsc/Jeopardy-Theme.mp3"));
        player->play();
    } else if (QtJeopardy::Music == 2) {
        player->setMedia(QUrl("qrc:/rsc/rsc/Theme.mp3"));
        player->play();
    }
}

void QtJeopardy::on_ui_handle_currentChanged(int arg1)
{
    // Handle Change to Main Game Screen (Changing Elements Only)
    if(arg1 == 2)
    {
        if(QtJeopardy::TurnStatus == 1)
        {
            ui->ui_mg_turn->setText("Turn: " + QtJeopardy::PlayerOneName);
        } else if (QtJeopardy::TurnStatus == 2) {
            ui->ui_mg_turn->setText("Turn: " + QtJeopardy::PlayerTwoName);
        } else {
            ui->ui_mg_turn->setText("Turn: Error");
        }
        ui->ui_gm_p1score->setText("Score: " + QString::number(QtJeopardy::PlayerOneScore));
        ui->ui_gm_p2score->setText("Score: " + QString::number(QtJeopardy::PlayerTwoScore));
        QtJeopardy::Music = 2;
    }

    if(arg1 == 3)
    {
        // UPDATE PLAYER DATA
       ui->ui_qm_p1label->setText("Player 1: " + QtJeopardy::PlayerOneName);
       ui->ui_qm_p2label->setText("Player 2: " + QtJeopardy::PlayerTwoName);
       ui->ui_qm_p1score->setText("Score: " + QString::fromStdString(std::to_string(QtJeopardy::PlayerOneScore)));
       ui->ui_qm_p2score->setText("Score: " + QString::fromStdString(std::to_string(QtJeopardy::PlayerTwoScore)));
       // SETUP QUESTIONS
       ui->ui_qm_questionlabel->setText(QtJeopardy::QuestionText);
       ui->ui_qm_ans1->setText(QtJeopardy::QAnswer1);
       ui->ui_qm_ans2->setText(QtJeopardy::QAnswer2);
       ui->ui_qm_ans3->setText(QtJeopardy::QAnswer3);
       ui->ui_qm_ans4->setText(QtJeopardy::QAnswer4);

       if(QtJeopardy::TurnStatus == 1)
       {
           ui->ui_qm_turn->setText("Turn: " + QtJeopardy::PlayerOneName);
       } else if (QtJeopardy::TurnStatus == 2) {
           ui->ui_qm_turn->setText("Turn: " + QtJeopardy::PlayerTwoName);
       } else {ui->ui_qm_turn->setText("Turn: Error");};
        QtJeopardy::Music = 2;

    }
    QtJeopardy::PlayQuestionMusic();
}


void QtJeopardy::InitQuestions() {
    // Question 1_1
    QtJeopardy::Q1_1.QuestionText = "What is 50 + 56 * 5"; QtJeopardy::Q1_1.QAnswer1 = "330"; QtJeopardy::Q1_1.QAnswer2 = "111"; QtJeopardy::Q1_1.QAnswer3 = " 110";
    QtJeopardy::Q1_1.QAnswer4 = "200"; QtJeopardy::Q1_1.CorrectAnswer = 1; QtJeopardy::Q1_1.QuestionScore = 100;
    // Question 1_2
    QtJeopardy::Q1_2.QuestionText = "What is 95 x 56"; QtJeopardy::Q1_2.QAnswer1 = "5320"; QtJeopardy::Q1_2.QAnswer2 = "500"; QtJeopardy::Q1_2.QAnswer3 = "2506"; QtJeopardy::Q1_2.QAnswer4 = "5602";
    QtJeopardy::Q1_2.CorrectAnswer = 1; QtJeopardy::Q1_2.QuestionScore = 200;
    // Question 1_3
    // Question 1_4
    // Question 1_5
    // Question 2_1
    QtJeopardy::Q2_1.QuestionText = "When was World War 2"; QtJeopardy::Q2_1.QAnswer1 = "1914-1918"; QtJeopardy::Q2_1.QAnswer2 = "1920-1940";
    QtJeopardy::Q2_1.QAnswer3 = "1939-1945"; QtJeopardy::Q2_1.QAnswer4 = "1999-2001"; QtJeopardy::Q2_1.CorrectAnswer = 3; QtJeopardy::Q2_1.QuestionScore = 100;
    // Question 2_2
}

void QtJeopardy::HandleAnswer(int answerint) {
    if (answerint == QtJeopardy::AnswerCorrect) {
        switch (QtJeopardy::TurnStatus) {
        case 1: QtJeopardy::PlayerOneScore = QtJeopardy::PlayerOneScore + QtJeopardy::QuestionScore; break;
        case 2: QtJeopardy::PlayerTwoScore = QtJeopardy::PlayerTwoScore + QtJeopardy::QuestionScore; break;
        }
        switch (QtJeopardy::TurnStatus) {
        case 1: QtJeopardy::TurnStatus = 2; ui->ui_handle->setCurrentIndex(2); break;
        case 2: QtJeopardy::TurnStatus = 1; ui->ui_handle->setCurrentIndex(2); break;
        }
    } else if (answerint != QtJeopardy::AnswerCorrect) {
        switch (QtJeopardy::TurnStatus) {
        case 1: QtJeopardy::TurnStatus = 2; break;
        case 2: QtJeopardy::TurnStatus = 1; break;
        }
    }
}

void QtJeopardy::on_ui_qm_btn1_1_clicked()
{
    QtJeopardy::QuestionText = QtJeopardy::Q1_1.QuestionText;
    QtJeopardy::QAnswer1 = QtJeopardy::Q1_1.QAnswer1; QtJeopardy::QAnswer2 = QtJeopardy::Q1_1.QAnswer2; QtJeopardy::QAnswer3 = QtJeopardy::Q1_1.QAnswer3; QtJeopardy::QAnswer4 = QtJeopardy::Q1_1.QAnswer4;
    QtJeopardy::AnswerCorrect = QtJeopardy::Q1_1.CorrectAnswer; QtJeopardy::QuestionScore = QtJeopardy::Q1_1.QuestionScore;
    ui->ui_handle->setCurrentIndex(3);
    ui->ui_mg_btn1_2->hide();
}

void QtJeopardy::on_ui_qm_ans1_clicked()
{
    int answerint = 1;
    QtJeopardy::HandleAnswer(answerint);
}

void QtJeopardy::on_ui_qm_ans2_clicked()
{
    int answerint = 2;
    QtJeopardy::HandleAnswer(answerint);
}

void QtJeopardy::on_ui_qm_ans3_clicked()
{
    int answerint = 3;
    QtJeopardy::HandleAnswer(answerint);
}

void QtJeopardy::on_ui_qm_ans4_clicked()
{
    int answerint = 3;
    QtJeopardy::HandleAnswer(answerint);
}

void QtJeopardy::on_ui_mg_btn1_1_clicked()
{
    QtJeopardy::QuestionText = QtJeopardy::Q1_1.QuestionText;
    QtJeopardy::QAnswer1 = QtJeopardy::Q1_1.QAnswer1; QtJeopardy::QAnswer2 = QtJeopardy::Q1_1.QAnswer2; QtJeopardy::QAnswer3 = QtJeopardy::Q1_1.QAnswer3; QtJeopardy::QAnswer4 = QtJeopardy::Q1_1.QAnswer4;
    QtJeopardy::AnswerCorrect = QtJeopardy::Q1_1.CorrectAnswer; QtJeopardy::QuestionScore = QtJeopardy::Q1_1.QuestionScore;
    ui->ui_handle->setCurrentIndex(3);
    ui->ui_mg_btn1_1->hide();
}

void QtJeopardy::on_ui_mg_btn1_2_clicked()
{
    QtJeopardy::QuestionText = QtJeopardy::Q1_2.QuestionText;
    QtJeopardy::QAnswer1 = QtJeopardy::Q1_2.QAnswer1; QtJeopardy::QAnswer2 = QtJeopardy::Q1_2.QAnswer2; QtJeopardy::QAnswer3 = QtJeopardy::Q1_2.QAnswer3; QtJeopardy::QAnswer4 = QtJeopardy::Q1_2.QAnswer4;
    QtJeopardy::AnswerCorrect = QtJeopardy::Q1_2.CorrectAnswer; QtJeopardy::QuestionScore = QtJeopardy::Q1_2.QuestionScore;
    ui->ui_handle->setCurrentIndex(3);
    ui->ui_mg_btn1_1->hide();
}

void QtJeopardy::on_ui_mg_btn1_3_clicked()
{

}

void QtJeopardy::on_ui_mg_btn1_4_clicked()
{

}

void QtJeopardy::on_ui_mg_btn1_5_clicked()
{

}

void QtJeopardy::on_ui_mg_btn2_1_clicked()
{
    QtJeopardy::QuestionText = QtJeopardy::Q2_1.QuestionText;
    QtJeopardy::QAnswer1 = QtJeopardy::Q2_1.QAnswer1; QtJeopardy::QAnswer2 = QtJeopardy::Q2_1.QAnswer2; QtJeopardy::QAnswer3 = QtJeopardy::Q2_1.QAnswer3; QtJeopardy::QAnswer4 = QtJeopardy::Q2_1.QAnswer4;
    QtJeopardy::AnswerCorrect = QtJeopardy::Q2_1.CorrectAnswer; QtJeopardy::QuestionScore = QtJeopardy::Q2_1.QuestionScore;
    ui->ui_handle->setCurrentIndex(3);
    ui->ui_mg_btn2_1->hide();
}
