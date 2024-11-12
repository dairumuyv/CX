#include "CX.h"
#include "qdebug.h"

CX::CX(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeout()));
    timer->setInterval(1000);
    timer->start();

}

CX::~CX()
{}

void CX::timeout()
{
    if (count < 86400)
    {
        count++;
    }
    else {
        count = 0;
    }
    ui.label->setText(QString::number(count));
}
