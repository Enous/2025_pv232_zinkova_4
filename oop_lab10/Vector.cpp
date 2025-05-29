#include "Vector.h"


void Vector::setColor()
{
    QColor color;

    if (isSelected)
        color = Qt::black;
    else
        color = Qt::blue;

    auto childGraphicsItems = childItems();

    for (QGraphicsItem* item : childGraphicsItems)
    {
        if (auto line = dynamic_cast<QGraphicsLineItem*>(item))
            line->setPen(QPen(color, line->pen().width()));
        else if (auto arrow = dynamic_cast<QGraphicsPolygonItem*>(item))
        {
            arrow->setBrush(color);
            arrow->setPen(QPen(color, 1));
        }
    }
}


QPointF Vector::getStart()
{
    return start;
}


QPointF Vector::getEnd()
{
    return end;
}