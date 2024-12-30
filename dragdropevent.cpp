#include "dragdropevent.h"
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QDrag>
#include <QMouseEvent>
#include <QMimeData>
#include <QDebug>

DragDropEvent::DragDropEvent(QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(400, 300);
    setAcceptDrops(true);

    boatIcon = new QLabel(this);
    QPixmap boatPixmap(":/images/images/boat.png");
    boatIcon->setPixmap(boatPixmap);
    boatIcon->move(10, 10);
    boatIcon->show();
    boatIcon->setAttribute(Qt::WA_DeleteOnClose);

    carIcon = new QLabel(this);
    QPixmap carPixmap(":/images/images/car.png");
    carIcon->setPixmap(carPixmap);
    carIcon->move(100, 10);
    carIcon->show();
    carIcon->setAttribute(Qt::WA_DeleteOnClose);

    houseIcon = new QLabel(this);
    QPixmap housePixmap(":/images/images/house.png");
    houseIcon->setPixmap(housePixmap);
    houseIcon->move(10, 80);
    houseIcon->show();
    houseIcon->setAttribute(Qt::WA_DeleteOnClose);
}

DragDropEvent::~DragDropEvent()
{
}

void DragDropEvent::mousePressEvent(QMouseEvent *event)
{
    QLabel *child=static_cast<QLabel>(childAt(event->pos()));
    if(!child)
    {
        return;
    }
    QPixmap pixmap =*child->pixmap();
}

void DragDropEvent::dragEnterEvent(QDragEnterEvent *event)
{
}

void DragDropEvent::dropEvent(QDropEvent *event)
{
}

void DragDropEvent::dragMoveEvent(QDragMoveEvent *event)
{
}
