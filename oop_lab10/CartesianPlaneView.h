#pragma once

#include <QGraphicsView>
#include <QMouseEvent>

class CartesianPlaneView : public QGraphicsView
{
    Q_OBJECT
public:
    CartesianPlaneView(QWidget* parent = nullptr);
    ~CartesianPlaneView();

signals:
    void mouseMoved(const QPointF& scenePos);
    void mouseEntered();
    void mouseLeft();
    void resized();

protected:
    void mouseMoveEvent(QMouseEvent* event);
    void leaveEvent(QEvent* event) override;
    void resizeEvent(QResizeEvent* event) override;
};

