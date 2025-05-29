#include "CartesianPlaneScene.h"

CartesianPlaneScene::CartesianPlaneScene(QObject *parent)
	: QGraphicsScene(parent)
{ }


CartesianPlaneScene::~CartesianPlaneScene()
{ }


void CartesianPlaneScene::addVector(QPointF& start, const QPointF& end)
{
    QGraphicsLineItem* line = addLine(QLineF(start, end), QPen(Qt::red, 2));
    QPolygonF arrowHead;
    arrowHead << end << end + QPointF(-10, 5) << end + QPointF(-10, -5);
    addPolygon(arrowHead, QPen(Qt::red), QBrush(Qt::red));
}