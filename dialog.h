﻿#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <windows.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
   explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void receiveData(QString);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H