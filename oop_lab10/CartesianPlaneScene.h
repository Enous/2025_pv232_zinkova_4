#pragma once

#include <QGraphicsScene>
#include <QGraphicsSceneResizeEvent> 
#include <QGraphicsLineItem>
#include <QDebug>
#include "SmartPointer.h"

class CartesianPlaneScene  : public QGraphicsScene
{
	Q_OBJECT

public:
	CartesianPlaneScene(QObject *parent);
	~CartesianPlaneScene();

	void addVector(QPointF& start, const QPointF& end);
};
