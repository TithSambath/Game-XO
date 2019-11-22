#include "winner.h"
#include "ui_winner.h"

Winner::Winner(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Winner)
{
    ui->setupUi(this);

    setWindowFlags(Qt::Window | Qt::FramelessWindowHint); // remove title bar.

}

Winner::~Winner()
{
    delete ui;
}

void Winner::setscore(int Player)
{
    ui->label->setNum(Player);
}
