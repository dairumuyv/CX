#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CX.h"
#include "qtimer.h"

class CX : public QMainWindow
{
    Q_OBJECT

public:
    CX(QWidget *parent = nullptr);
    ~CX();
public slots:
    void timeout();
private:
    Ui::CXClass ui;
    QTimer* timer;

    int count = 0;
    int day = 0;
};
