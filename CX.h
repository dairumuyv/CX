#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CX.h"

class CX : public QMainWindow
{
    Q_OBJECT

public:
    CX(QWidget *parent = nullptr);
    ~CX();

private:
    Ui::CXClass ui;
};
