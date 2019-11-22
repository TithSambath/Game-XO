#ifndef WINNER_H
#define WINNER_H

#include <QWidget>
#include <QString>

namespace Ui {
class Winner;
}

class Winner : public QWidget
{
    Q_OBJECT

public:
    explicit Winner(QWidget *parent = nullptr);
    ~Winner();
    void setscore (int Player);

private:
    Ui::Winner *ui;
};

#endif // WINNER_H
