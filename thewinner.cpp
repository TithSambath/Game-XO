#include "thewinner.h"
#include "ui_thewinner.h"
#include <QDebug>

TheWinner::TheWinner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TheWinner)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);

}

TheWinner::~TheWinner()
{
    delete ui;
}
void TheWinner::setscore(int PlayerScore)
{
    ui->label->setNum(PlayerScore);
    ui->label_2->setPixmap(QPixmap(":/BOY.png"));
}

void TheWinner::GenerateWinner(int ScorePlayer2, int ScorePlayer1)
{
    if (ScorePlayer1 > ScorePlayer2){
        setscore(ScorePlayer1);
    }else {
        setscore(ScorePlayer2);
    }
}


void TheWinner::on_pushButton_2_clicked()
{
    emit backtoHome();
    this->close();
}

void TheWinner::on_pushButton_clicked()
{
    emit Reset();
    this->close();
}
