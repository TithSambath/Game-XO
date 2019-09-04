#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>

namespace Ui {
class interface;
}

class interface : public QWidget
{
    Q_OBJECT

public:
    explicit interface(QWidget *parent = nullptr);
    ~interface();

private slots:
    void on_PLAY_BUTTON_3_clicked();

private:
    Ui::interface *ui;
};

#endif // INTERFACE_H
