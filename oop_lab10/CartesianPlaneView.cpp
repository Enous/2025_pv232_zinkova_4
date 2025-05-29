#include "CartesianPlaneView.h"

CartesianPlaneView::CartesianPlaneView(QWidget *parent)
	: QGraphicsView(parent)
{}


CartesianPlaneView::~CartesianPlaneView()
{}


void CartesianPlaneView::mouseMoveEvent(QMouseEvent* event)
{
    QPointF pos = event->pos();

    int x = pos.x();
    x -= width() / 2;
    int y = pos.y();
    y = height() / 2 - y;
    QPointF new_pos(x, y);

    emit mouseMoved(new_pos);
    QGraphicsView::mouseMoveEvent(event);
}


void CartesianPlaneView::leaveEvent(QEvent* event)
{
    emit mouseLeft();
    QGraphicsView::leaveEvent(event);
}


void CartesianPlaneView::resizeEvent(QResizeEvent* event)
{
    emit resized();
    QGraphicsView::resizeEvent(event);
}
