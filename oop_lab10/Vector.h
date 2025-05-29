#pragma once

#include <QGraphicsItemGroup>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsItem>
#include <QPen>

class Vector : public QGraphicsItemGroup
{
private:
    QPointF start;
    QPointF end;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override
    {
        setColor();
        isSelected = !isSelected;
        update();
    }

public:
    Vector(const QPointF& p1, const QPointF& p2, QGraphicsItem* parent = nullptr)
        : QGraphicsItemGroup(parent)
    {
        QGraphicsLineItem* line = new QGraphicsLineItem(QLineF(p1, p2), this);
        line->setPen(QPen(Qt::black, 3));

        QPolygonF arrowHead;
        QPointF direction = p2 - p1;
        direction = direction / sqrt(direction.x() * direction.x() + direction.y() * direction.y());

        arrowHead << p2
            << p2 - 12 * direction + 7 * QPointF(-direction.y(), direction.x())
            << p2 - 12 * direction + 7 * QPointF(direction.y(), -direction.x());

        QGraphicsPolygonItem* arrow = new QGraphicsPolygonItem(arrowHead, this);
        arrow->setBrush(Qt::black);

        addToGroup(line);
        addToGroup(arrow);

        start = p1;
        end = p2;

        setFlag(QGraphicsItem::ItemIsSelectable);

        isSelected = false;
    }

    bool isSelected;
    void setColor();
    QPointF getStart();
    QPointF getEnd();
};