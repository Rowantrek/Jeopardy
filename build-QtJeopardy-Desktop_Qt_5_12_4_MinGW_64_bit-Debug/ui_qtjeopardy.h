/********************************************************************************
** Form generated from reading UI file 'qtjeopardy.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTJEOPARDY_H
#define UI_QTJEOPARDY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtJeopardy
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *ui_handle;
    QWidget *ui_menu;
    QGridLayout *gridLayout_3;
    QGridLayout *ui_menu_container;
    QPushButton *ui_mm_high;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *ui_mm_title;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_4;
    QPushButton *ui_mm_how;
    QSpacerItem *verticalSpacer_3;
    QPushButton *ui_mm_play;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *ui_mm_quit;
    QWidget *ui_newgame;
    QGridLayout *gridLayout_4;
    QGridLayout *ui_ng_container;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *ui_ng_next;
    QSpacerItem *horizontalSpacer_7;
    QLabel *ui_ng_title;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *ui_ng_p1input;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *ui_ng_p2input;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *ui_ng_labelp1;
    QLabel *ui_ng_labelp2;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_10;
    QWidget *ui_gamemain;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_12;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_7;
    QLabel *ui_mg_turn;
    QSpacerItem *horizontalSpacer_11;
    QLabel *ui_mg_p1;
    QSpacerItem *horizontalSpacer_10;
    QLabel *ui_mg_p2;
    QLabel *ui_gm_p1score;
    QLabel *ui_gm_p2score;
    QSpacerItem *verticalSpacer_11;
    QGridLayout *gridLayout_6;
    QPushButton *ui_mg_btn2_1;
    QPushButton *ui_mg_btn4_4;
    QPushButton *ui_mg_btn2_5;
    QLabel *ui_gm_cat2;
    QPushButton *ui_mg_btn3_1;
    QPushButton *ui_mg_btn5_3;
    QPushButton *ui_mg_btn4_3;
    QPushButton *ui_mg_btn1_3;
    QLabel *ui_gm_cat5;
    QPushButton *ui_mg_btn4_2;
    QPushButton *ui_mg_btn2_4;
    QPushButton *ui_mg_btn5_5;
    QPushButton *ui_mg_btn2_2;
    QPushButton *ui_mg_btn3_3;
    QPushButton *ui_mg_btn4_1;
    QLabel *ui_gm_cat1;
    QLabel *ui_gm_cat4;
    QPushButton *ui_mg_btn5_2;
    QPushButton *ui_mg_btn3_5;
    QPushButton *ui_mg_btn2_3;
    QPushButton *ui_mg_btn3_2;
    QLabel *ui_gm_cat3;
    QPushButton *ui_mg_btn3_4;
    QPushButton *ui_mg_btn5_4;
    QPushButton *ui_mg_btn4_5;
    QPushButton *ui_mg_btn1_4;
    QPushButton *ui_mg_btn1_5;
    QPushButton *ui_mg_btn1_2;
    QPushButton *ui_mg_btn1_1;
    QPushButton *ui_mg_btn5_1;
    QSpacerItem *verticalSpacer_12;
    QWidget *ui_questionmenu;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *horizontalSpacer_15;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_11;
    QPushButton *ui_qm_ans4;
    QPushButton *ui_qm_ans3;
    QPushButton *ui_qm_ans1;
    QPushButton *ui_qm_ans2;
    QSpacerItem *verticalSpacer_13;
    QGridLayout *gridLayout_10;
    QLabel *ui_qm_p2label;
    QLabel *ui_qm_p1score;
    QLabel *ui_qm_p2score;
    QLabel *ui_qm_turn;
    QLabel *ui_qm_p1label;
    QLabel *ui_qm_questionlabel;
    QSpacerItem *verticalSpacer_14;
    QWidget *page;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtJeopardy)
    {
        if (QtJeopardy->objectName().isEmpty())
            QtJeopardy->setObjectName(QString::fromUtf8("QtJeopardy"));
        QtJeopardy->resize(1296, 849);
        centralWidget = new QWidget(QtJeopardy);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ui_handle = new QStackedWidget(centralWidget);
        ui_handle->setObjectName(QString::fromUtf8("ui_handle"));
        ui_menu = new QWidget();
        ui_menu->setObjectName(QString::fromUtf8("ui_menu"));
        gridLayout_3 = new QGridLayout(ui_menu);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ui_menu_container = new QGridLayout();
        ui_menu_container->setSpacing(6);
        ui_menu_container->setObjectName(QString::fromUtf8("ui_menu_container"));
        ui_mm_high = new QPushButton(ui_menu);
        ui_mm_high->setObjectName(QString::fromUtf8("ui_mm_high"));
        QFont font;
        font.setPointSize(24);
        ui_mm_high->setFont(font);
        ui_mm_high->setCheckable(true);

        ui_menu_container->addWidget(ui_mm_high, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ui_menu_container->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        ui_menu_container->addItem(verticalSpacer_6, 8, 1, 1, 1);

        ui_mm_title = new QLabel(ui_menu);
        ui_mm_title->setObjectName(QString::fromUtf8("ui_mm_title"));
        QFont font1;
        font1.setPointSize(72);
        ui_mm_title->setFont(font1);
        ui_mm_title->setAlignment(Qt::AlignCenter);

        ui_menu_container->addWidget(ui_mm_title, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ui_menu_container->addItem(verticalSpacer_2, 10, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ui_menu_container->addItem(verticalSpacer, 0, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        ui_menu_container->addItem(verticalSpacer_4, 4, 1, 1, 1);

        ui_mm_how = new QPushButton(ui_menu);
        ui_mm_how->setObjectName(QString::fromUtf8("ui_mm_how"));
        ui_mm_how->setFont(font);
        ui_mm_how->setCheckable(true);

        ui_menu_container->addWidget(ui_mm_how, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        ui_menu_container->addItem(verticalSpacer_3, 2, 1, 1, 1);

        ui_mm_play = new QPushButton(ui_menu);
        ui_mm_play->setObjectName(QString::fromUtf8("ui_mm_play"));
        ui_mm_play->setFont(font);
        ui_mm_play->setCheckable(true);

        ui_menu_container->addWidget(ui_mm_play, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        ui_menu_container->addItem(verticalSpacer_5, 6, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ui_menu_container->addItem(horizontalSpacer, 1, 0, 1, 1);

        ui_mm_quit = new QPushButton(ui_menu);
        ui_mm_quit->setObjectName(QString::fromUtf8("ui_mm_quit"));
        ui_mm_quit->setFont(font);
        ui_mm_quit->setCheckable(true);

        ui_menu_container->addWidget(ui_mm_quit, 9, 1, 1, 1);


        gridLayout_3->addLayout(ui_menu_container, 0, 0, 1, 1);

        ui_handle->addWidget(ui_menu);
        ui_newgame = new QWidget();
        ui_newgame->setObjectName(QString::fromUtf8("ui_newgame"));
        gridLayout_4 = new QGridLayout(ui_newgame);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        ui_ng_container = new QGridLayout();
        ui_ng_container->setSpacing(6);
        ui_ng_container->setObjectName(QString::fromUtf8("ui_ng_container"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ui_ng_container->addItem(horizontalSpacer_9, 2, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ui_ng_container->addItem(verticalSpacer_8, 7, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ui_ng_container->addItem(horizontalSpacer_8, 2, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        ui_ng_next = new QPushButton(ui_newgame);
        ui_ng_next->setObjectName(QString::fromUtf8("ui_ng_next"));
        ui_ng_next->setFont(font);
        ui_ng_next->setCheckable(true);

        horizontalLayout_3->addWidget(ui_ng_next);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        ui_ng_container->addLayout(horizontalLayout_3, 6, 1, 1, 1);

        ui_ng_title = new QLabel(ui_newgame);
        ui_ng_title->setObjectName(QString::fromUtf8("ui_ng_title"));
        QFont font2;
        font2.setPointSize(48);
        ui_ng_title->setFont(font2);
        ui_ng_title->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        ui_ng_container->addWidget(ui_ng_title, 1, 1, 1, 1);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        ui_ng_container->addItem(verticalSpacer_9, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ui_ng_p1input = new QLineEdit(ui_newgame);
        ui_ng_p1input->setObjectName(QString::fromUtf8("ui_ng_p1input"));
        QFont font3;
        font3.setPointSize(20);
        ui_ng_p1input->setFont(font3);

        horizontalLayout_2->addWidget(ui_ng_p1input);

        horizontalSpacer_3 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        ui_ng_p2input = new QLineEdit(ui_newgame);
        ui_ng_p2input->setObjectName(QString::fromUtf8("ui_ng_p2input"));
        ui_ng_p2input->setFont(font3);

        horizontalLayout_2->addWidget(ui_ng_p2input);

        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        ui_ng_container->addLayout(horizontalLayout_2, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ui_ng_labelp1 = new QLabel(ui_newgame);
        ui_ng_labelp1->setObjectName(QString::fromUtf8("ui_ng_labelp1"));
        QFont font4;
        font4.setPointSize(36);
        ui_ng_labelp1->setFont(font4);
        ui_ng_labelp1->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ui_ng_labelp1);

        ui_ng_labelp2 = new QLabel(ui_newgame);
        ui_ng_labelp2->setObjectName(QString::fromUtf8("ui_ng_labelp2"));
        ui_ng_labelp2->setFont(font4);
        ui_ng_labelp2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(ui_ng_labelp2);


        ui_ng_container->addLayout(horizontalLayout, 3, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        ui_ng_container->addItem(verticalSpacer_7, 2, 1, 1, 1);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        ui_ng_container->addItem(verticalSpacer_10, 5, 1, 1, 1);


        gridLayout_4->addLayout(ui_ng_container, 0, 0, 1, 1);

        ui_handle->addWidget(ui_newgame);
        ui_gamemain = new QWidget();
        ui_gamemain->setObjectName(QString::fromUtf8("ui_gamemain"));
        gridLayout_5 = new QGridLayout(ui_gamemain);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 2, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_12, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        ui_mg_turn = new QLabel(ui_gamemain);
        ui_mg_turn->setObjectName(QString::fromUtf8("ui_mg_turn"));
        ui_mg_turn->setFont(font4);

        gridLayout_7->addWidget(ui_mg_turn, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        ui_mg_p1 = new QLabel(ui_gamemain);
        ui_mg_p1->setObjectName(QString::fromUtf8("ui_mg_p1"));
        ui_mg_p1->setFont(font);

        gridLayout_7->addWidget(ui_mg_p1, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_10, 0, 1, 1, 1);

        ui_mg_p2 = new QLabel(ui_gamemain);
        ui_mg_p2->setObjectName(QString::fromUtf8("ui_mg_p2"));
        ui_mg_p2->setFont(font);
        ui_mg_p2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(ui_mg_p2, 0, 4, 1, 1);

        ui_gm_p1score = new QLabel(ui_gamemain);
        ui_gm_p1score->setObjectName(QString::fromUtf8("ui_gm_p1score"));
        ui_gm_p1score->setFont(font);
        ui_gm_p1score->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(ui_gm_p1score, 1, 0, 1, 1);

        ui_gm_p2score = new QLabel(ui_gamemain);
        ui_gm_p2score->setObjectName(QString::fromUtf8("ui_gm_p2score"));
        ui_gm_p2score->setFont(font);
        ui_gm_p2score->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(ui_gm_p2score, 1, 4, 1, 1);


        gridLayout->addLayout(gridLayout_7, 0, 0, 1, 1);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_11, 1, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        ui_mg_btn2_1 = new QPushButton(ui_gamemain);
        ui_mg_btn2_1->setObjectName(QString::fromUtf8("ui_mg_btn2_1"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rsc/rsc/Question100.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_mg_btn2_1->setIcon(icon);
        ui_mg_btn2_1->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn2_1, 5, 1, 1, 1);

        ui_mg_btn4_4 = new QPushButton(ui_gamemain);
        ui_mg_btn4_4->setObjectName(QString::fromUtf8("ui_mg_btn4_4"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rsc/rsc/Question1000.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_mg_btn4_4->setIcon(icon1);
        ui_mg_btn4_4->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn4_4, 2, 3, 1, 1);

        ui_mg_btn2_5 = new QPushButton(ui_gamemain);
        ui_mg_btn2_5->setObjectName(QString::fromUtf8("ui_mg_btn2_5"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rsc/rsc/Question2000.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_mg_btn2_5->setIcon(icon2);
        ui_mg_btn2_5->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn2_5, 1, 1, 1, 1);

        ui_gm_cat2 = new QLabel(ui_gamemain);
        ui_gm_cat2->setObjectName(QString::fromUtf8("ui_gm_cat2"));
        QFont font5;
        font5.setPointSize(16);
        ui_gm_cat2->setFont(font5);
        ui_gm_cat2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(ui_gm_cat2, 0, 1, 1, 1);

        ui_mg_btn3_1 = new QPushButton(ui_gamemain);
        ui_mg_btn3_1->setObjectName(QString::fromUtf8("ui_mg_btn3_1"));
        ui_mg_btn3_1->setIcon(icon);
        ui_mg_btn3_1->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn3_1, 5, 2, 1, 1);

        ui_mg_btn5_3 = new QPushButton(ui_gamemain);
        ui_mg_btn5_3->setObjectName(QString::fromUtf8("ui_mg_btn5_3"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rsc/rsc/Question500.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_mg_btn5_3->setIcon(icon3);
        ui_mg_btn5_3->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn5_3, 3, 4, 1, 1);

        ui_mg_btn4_3 = new QPushButton(ui_gamemain);
        ui_mg_btn4_3->setObjectName(QString::fromUtf8("ui_mg_btn4_3"));
        ui_mg_btn4_3->setIcon(icon3);
        ui_mg_btn4_3->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn4_3, 3, 3, 1, 1);

        ui_mg_btn1_3 = new QPushButton(ui_gamemain);
        ui_mg_btn1_3->setObjectName(QString::fromUtf8("ui_mg_btn1_3"));
        ui_mg_btn1_3->setIcon(icon3);
        ui_mg_btn1_3->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn1_3, 3, 0, 1, 1);

        ui_gm_cat5 = new QLabel(ui_gamemain);
        ui_gm_cat5->setObjectName(QString::fromUtf8("ui_gm_cat5"));
        ui_gm_cat5->setFont(font5);
        ui_gm_cat5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(ui_gm_cat5, 0, 4, 1, 1);

        ui_mg_btn4_2 = new QPushButton(ui_gamemain);
        ui_mg_btn4_2->setObjectName(QString::fromUtf8("ui_mg_btn4_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rsc/rsc/Question200.png"), QSize(), QIcon::Normal, QIcon::Off);
        ui_mg_btn4_2->setIcon(icon4);
        ui_mg_btn4_2->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn4_2, 4, 3, 1, 1);

        ui_mg_btn2_4 = new QPushButton(ui_gamemain);
        ui_mg_btn2_4->setObjectName(QString::fromUtf8("ui_mg_btn2_4"));
        ui_mg_btn2_4->setIcon(icon1);
        ui_mg_btn2_4->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn2_4, 2, 1, 1, 1);

        ui_mg_btn5_5 = new QPushButton(ui_gamemain);
        ui_mg_btn5_5->setObjectName(QString::fromUtf8("ui_mg_btn5_5"));
        ui_mg_btn5_5->setIcon(icon2);
        ui_mg_btn5_5->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn5_5, 1, 4, 1, 1);

        ui_mg_btn2_2 = new QPushButton(ui_gamemain);
        ui_mg_btn2_2->setObjectName(QString::fromUtf8("ui_mg_btn2_2"));
        ui_mg_btn2_2->setIcon(icon4);
        ui_mg_btn2_2->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn2_2, 4, 1, 1, 1);

        ui_mg_btn3_3 = new QPushButton(ui_gamemain);
        ui_mg_btn3_3->setObjectName(QString::fromUtf8("ui_mg_btn3_3"));
        ui_mg_btn3_3->setIcon(icon3);
        ui_mg_btn3_3->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn3_3, 3, 2, 1, 1);

        ui_mg_btn4_1 = new QPushButton(ui_gamemain);
        ui_mg_btn4_1->setObjectName(QString::fromUtf8("ui_mg_btn4_1"));
        ui_mg_btn4_1->setIcon(icon);
        ui_mg_btn4_1->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn4_1, 5, 3, 1, 1);

        ui_gm_cat1 = new QLabel(ui_gamemain);
        ui_gm_cat1->setObjectName(QString::fromUtf8("ui_gm_cat1"));
        ui_gm_cat1->setFont(font5);
        ui_gm_cat1->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(ui_gm_cat1, 0, 0, 1, 1);

        ui_gm_cat4 = new QLabel(ui_gamemain);
        ui_gm_cat4->setObjectName(QString::fromUtf8("ui_gm_cat4"));
        ui_gm_cat4->setFont(font5);
        ui_gm_cat4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(ui_gm_cat4, 0, 3, 1, 1);

        ui_mg_btn5_2 = new QPushButton(ui_gamemain);
        ui_mg_btn5_2->setObjectName(QString::fromUtf8("ui_mg_btn5_2"));
        ui_mg_btn5_2->setIcon(icon4);
        ui_mg_btn5_2->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn5_2, 4, 4, 1, 1);

        ui_mg_btn3_5 = new QPushButton(ui_gamemain);
        ui_mg_btn3_5->setObjectName(QString::fromUtf8("ui_mg_btn3_5"));
        ui_mg_btn3_5->setIcon(icon2);
        ui_mg_btn3_5->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn3_5, 1, 2, 1, 1);

        ui_mg_btn2_3 = new QPushButton(ui_gamemain);
        ui_mg_btn2_3->setObjectName(QString::fromUtf8("ui_mg_btn2_3"));
        ui_mg_btn2_3->setIcon(icon3);
        ui_mg_btn2_3->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn2_3, 3, 1, 1, 1);

        ui_mg_btn3_2 = new QPushButton(ui_gamemain);
        ui_mg_btn3_2->setObjectName(QString::fromUtf8("ui_mg_btn3_2"));
        ui_mg_btn3_2->setIcon(icon4);
        ui_mg_btn3_2->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn3_2, 4, 2, 1, 1);

        ui_gm_cat3 = new QLabel(ui_gamemain);
        ui_gm_cat3->setObjectName(QString::fromUtf8("ui_gm_cat3"));
        ui_gm_cat3->setFont(font5);
        ui_gm_cat3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(ui_gm_cat3, 0, 2, 1, 1);

        ui_mg_btn3_4 = new QPushButton(ui_gamemain);
        ui_mg_btn3_4->setObjectName(QString::fromUtf8("ui_mg_btn3_4"));
        ui_mg_btn3_4->setIcon(icon1);
        ui_mg_btn3_4->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn3_4, 2, 2, 1, 1);

        ui_mg_btn5_4 = new QPushButton(ui_gamemain);
        ui_mg_btn5_4->setObjectName(QString::fromUtf8("ui_mg_btn5_4"));
        ui_mg_btn5_4->setIcon(icon1);
        ui_mg_btn5_4->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn5_4, 2, 4, 1, 1);

        ui_mg_btn4_5 = new QPushButton(ui_gamemain);
        ui_mg_btn4_5->setObjectName(QString::fromUtf8("ui_mg_btn4_5"));
        ui_mg_btn4_5->setIcon(icon2);
        ui_mg_btn4_5->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn4_5, 1, 3, 1, 1);

        ui_mg_btn1_4 = new QPushButton(ui_gamemain);
        ui_mg_btn1_4->setObjectName(QString::fromUtf8("ui_mg_btn1_4"));
        ui_mg_btn1_4->setIcon(icon1);
        ui_mg_btn1_4->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn1_4, 2, 0, 1, 1);

        ui_mg_btn1_5 = new QPushButton(ui_gamemain);
        ui_mg_btn1_5->setObjectName(QString::fromUtf8("ui_mg_btn1_5"));
        ui_mg_btn1_5->setIcon(icon2);
        ui_mg_btn1_5->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn1_5, 1, 0, 1, 1);

        ui_mg_btn1_2 = new QPushButton(ui_gamemain);
        ui_mg_btn1_2->setObjectName(QString::fromUtf8("ui_mg_btn1_2"));
        ui_mg_btn1_2->setIcon(icon4);
        ui_mg_btn1_2->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn1_2, 4, 0, 1, 1);

        ui_mg_btn1_1 = new QPushButton(ui_gamemain);
        ui_mg_btn1_1->setObjectName(QString::fromUtf8("ui_mg_btn1_1"));
        ui_mg_btn1_1->setIcon(icon);
        ui_mg_btn1_1->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn1_1, 5, 0, 1, 1);

        ui_mg_btn5_1 = new QPushButton(ui_gamemain);
        ui_mg_btn5_1->setObjectName(QString::fromUtf8("ui_mg_btn5_1"));
        ui_mg_btn5_1->setIcon(icon);
        ui_mg_btn5_1->setIconSize(QSize(100, 100));

        gridLayout_6->addWidget(ui_mg_btn5_1, 5, 4, 1, 1);


        gridLayout->addLayout(gridLayout_6, 2, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 1, 1, 1);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_12, 1, 1, 1, 1);

        ui_handle->addWidget(ui_gamemain);
        ui_questionmenu = new QWidget();
        ui_questionmenu->setObjectName(QString::fromUtf8("ui_questionmenu"));
        gridLayout_9 = new QGridLayout(ui_questionmenu);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_14, 0, 0, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_15, 0, 2, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(-1, 0, -1, -1);
        ui_qm_ans4 = new QPushButton(ui_questionmenu);
        ui_qm_ans4->setObjectName(QString::fromUtf8("ui_qm_ans4"));
        ui_qm_ans4->setFont(font5);

        gridLayout_11->addWidget(ui_qm_ans4, 1, 1, 1, 1);

        ui_qm_ans3 = new QPushButton(ui_questionmenu);
        ui_qm_ans3->setObjectName(QString::fromUtf8("ui_qm_ans3"));
        ui_qm_ans3->setFont(font5);

        gridLayout_11->addWidget(ui_qm_ans3, 1, 0, 1, 1);

        ui_qm_ans1 = new QPushButton(ui_questionmenu);
        ui_qm_ans1->setObjectName(QString::fromUtf8("ui_qm_ans1"));
        ui_qm_ans1->setFont(font5);

        gridLayout_11->addWidget(ui_qm_ans1, 0, 0, 1, 1);

        ui_qm_ans2 = new QPushButton(ui_questionmenu);
        ui_qm_ans2->setObjectName(QString::fromUtf8("ui_qm_ans2"));
        ui_qm_ans2->setFont(font5);

        gridLayout_11->addWidget(ui_qm_ans2, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_11, 3, 0, 1, 1);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_8->addItem(verticalSpacer_13, 1, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        ui_qm_p2label = new QLabel(ui_questionmenu);
        ui_qm_p2label->setObjectName(QString::fromUtf8("ui_qm_p2label"));
        ui_qm_p2label->setFont(font);
        ui_qm_p2label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_10->addWidget(ui_qm_p2label, 0, 2, 1, 1);

        ui_qm_p1score = new QLabel(ui_questionmenu);
        ui_qm_p1score->setObjectName(QString::fromUtf8("ui_qm_p1score"));
        ui_qm_p1score->setFont(font);

        gridLayout_10->addWidget(ui_qm_p1score, 1, 0, 1, 1);

        ui_qm_p2score = new QLabel(ui_questionmenu);
        ui_qm_p2score->setObjectName(QString::fromUtf8("ui_qm_p2score"));
        ui_qm_p2score->setFont(font);

        gridLayout_10->addWidget(ui_qm_p2score, 1, 2, 1, 1);

        ui_qm_turn = new QLabel(ui_questionmenu);
        ui_qm_turn->setObjectName(QString::fromUtf8("ui_qm_turn"));
        ui_qm_turn->setFont(font4);
        ui_qm_turn->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(ui_qm_turn, 0, 1, 1, 1);

        ui_qm_p1label = new QLabel(ui_questionmenu);
        ui_qm_p1label->setObjectName(QString::fromUtf8("ui_qm_p1label"));
        ui_qm_p1label->setFont(font);

        gridLayout_10->addWidget(ui_qm_p1label, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_10, 0, 0, 1, 1);

        ui_qm_questionlabel = new QLabel(ui_questionmenu);
        ui_qm_questionlabel->setObjectName(QString::fromUtf8("ui_qm_questionlabel"));
        ui_qm_questionlabel->setFont(font5);
        ui_qm_questionlabel->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(ui_qm_questionlabel, 2, 0, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 0, 1, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_14, 1, 0, 1, 1);

        ui_handle->addWidget(ui_questionmenu);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        ui_handle->addWidget(page);

        gridLayout_2->addWidget(ui_handle, 0, 0, 1, 1);

        QtJeopardy->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtJeopardy);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1296, 21));
        QtJeopardy->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtJeopardy);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtJeopardy->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtJeopardy);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtJeopardy->setStatusBar(statusBar);

        retranslateUi(QtJeopardy);

        ui_handle->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(QtJeopardy);
    } // setupUi

    void retranslateUi(QMainWindow *QtJeopardy)
    {
        QtJeopardy->setWindowTitle(QApplication::translate("QtJeopardy", "Jeopardy", nullptr));
        ui_mm_high->setText(QApplication::translate("QtJeopardy", "High Scores", nullptr));
        ui_mm_title->setText(QApplication::translate("QtJeopardy", "Jeopardy", nullptr));
        ui_mm_how->setText(QApplication::translate("QtJeopardy", "How to Play", nullptr));
        ui_mm_play->setText(QApplication::translate("QtJeopardy", "Play", nullptr));
        ui_mm_quit->setText(QApplication::translate("QtJeopardy", "Quit", nullptr));
        ui_ng_next->setText(QApplication::translate("QtJeopardy", "  Start  ", nullptr));
        ui_ng_title->setText(QApplication::translate("QtJeopardy", "New Game", nullptr));
        ui_ng_labelp1->setText(QApplication::translate("QtJeopardy", "Player 1:", nullptr));
        ui_ng_labelp2->setText(QApplication::translate("QtJeopardy", "Player 2:", nullptr));
        ui_mg_turn->setText(QApplication::translate("QtJeopardy", "Turn:", nullptr));
        ui_mg_p1->setText(QApplication::translate("QtJeopardy", "Player One:", nullptr));
        ui_mg_p2->setText(QApplication::translate("QtJeopardy", "TextLabel", nullptr));
        ui_gm_p1score->setText(QApplication::translate("QtJeopardy", "Score:", nullptr));
        ui_gm_p2score->setText(QApplication::translate("QtJeopardy", "Score:", nullptr));
        ui_mg_btn2_1->setText(QString());
        ui_mg_btn4_4->setText(QString());
        ui_mg_btn2_5->setText(QString());
        ui_gm_cat2->setText(QApplication::translate("QtJeopardy", "History", nullptr));
        ui_mg_btn3_1->setText(QString());
        ui_mg_btn5_3->setText(QString());
        ui_mg_btn4_3->setText(QString());
        ui_mg_btn1_3->setText(QString());
        ui_gm_cat5->setText(QApplication::translate("QtJeopardy", "Politics", nullptr));
        ui_mg_btn4_2->setText(QString());
        ui_mg_btn2_4->setText(QString());
        ui_mg_btn5_5->setText(QString());
        ui_mg_btn2_2->setText(QString());
        ui_mg_btn3_3->setText(QString());
        ui_mg_btn4_1->setText(QString());
        ui_gm_cat1->setText(QApplication::translate("QtJeopardy", "Maths", nullptr));
        ui_gm_cat4->setText(QApplication::translate("QtJeopardy", "Computing", nullptr));
        ui_mg_btn5_2->setText(QString());
        ui_mg_btn3_5->setText(QString());
        ui_mg_btn2_3->setText(QString());
        ui_mg_btn3_2->setText(QString());
        ui_gm_cat3->setText(QApplication::translate("QtJeopardy", "Science", nullptr));
        ui_mg_btn3_4->setText(QString());
        ui_mg_btn5_4->setText(QString());
        ui_mg_btn4_5->setText(QString());
        ui_mg_btn1_4->setText(QString());
        ui_mg_btn1_5->setText(QString());
        ui_mg_btn1_2->setText(QString());
        ui_mg_btn1_1->setText(QString());
        ui_mg_btn5_1->setText(QString());
        ui_qm_ans4->setText(QApplication::translate("QtJeopardy", "PushButton", nullptr));
        ui_qm_ans3->setText(QApplication::translate("QtJeopardy", "PushButton", nullptr));
        ui_qm_ans1->setText(QApplication::translate("QtJeopardy", "PushButton", nullptr));
        ui_qm_ans2->setText(QApplication::translate("QtJeopardy", "PushButton", nullptr));
        ui_qm_p2label->setText(QApplication::translate("QtJeopardy", "Player 2:", nullptr));
        ui_qm_p1score->setText(QApplication::translate("QtJeopardy", "TextLabel", nullptr));
        ui_qm_p2score->setText(QApplication::translate("QtJeopardy", "TextLabel", nullptr));
        ui_qm_turn->setText(QApplication::translate("QtJeopardy", "Turn:", nullptr));
        ui_qm_p1label->setText(QApplication::translate("QtJeopardy", "Player 1:", nullptr));
        ui_qm_questionlabel->setText(QApplication::translate("QtJeopardy", "Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtJeopardy: public Ui_QtJeopardy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTJEOPARDY_H
