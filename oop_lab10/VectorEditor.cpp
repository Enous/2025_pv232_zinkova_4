#include "VectorEditor.h"

VectorEditor::VectorEditor(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    setFixedSize(500, 500);

    scene = new QGraphicsScene(this);
    ui.view->setScene(scene);
    ui.view->scale(1, -1);
    scene->addLine(-500, 0, 500, 0, QPen(Qt::black));
    scene->addLine(0, -500, 0, 500, QPen(Qt::black));
    ui.view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui.view->setInteractive(true);

    connect(ui.addButton, &QPushButton::clicked, this, &VectorEditor::onAddButtonClicked);
    connect(ui.deleteButton, &QPushButton::clicked, this, &VectorEditor::onDeleteButtonClicked);
    connect(ui.sumButton, &QPushButton::clicked, this, &VectorEditor::onSumButtonClicked);
}


VectorEditor::~VectorEditor()
{
    delete scene;
}


void VectorEditor::onAddButtonClicked()
{
    bool ok;

    double xCoordStart = QInputDialog::getDouble(this, "Координаты", "Введите x1:", 0, -200, 200, 1, &ok);

    if (!ok)
        return;

    double yCoordStart = QInputDialog::getDouble(this, "Координаты", "Введите y1:", 0, -200, 200, 1, &ok);

    if (!ok)
        return;

    double xCoordEnd = QInputDialog::getDouble(this, "Координаты", "Введите x2:", 0, -200, 200, 1, &ok);

    if (!ok)
        return;

    double yCoordEnd = QInputDialog::getDouble(this, "Координаты", "Введите y2:", 0, -200, 200, 1, &ok);

    if (!ok)
        return;

    QPointF start(xCoordStart, yCoordStart);
    QPointF end(xCoordEnd, yCoordEnd);

    Vector* vector = new Vector(start, end);
    addVector(vector);
    vectors.append(vector);
}


void VectorEditor::addVector(Vector* v)
{
    scene->addItem(v);
}


QList<Vector*> VectorEditor::getSelectedVectors()
{
    QList<Vector*> selectedVectors;

    for (auto v : vectors)
    {
        if (v->isSelected)
            selectedVectors.push_back(v);
    }

    return selectedVectors;
}


void VectorEditor::onDeleteButtonClicked()
{
    QList<Vector*> selectedVectors = getSelectedVectors();

    if (selectedVectors.size() == 0)
    {
        QMessageBox msgBox;
        msgBox.setText("Выберите векторы");
        msgBox.exec();
        return;
    }

    for (auto v : selectedVectors)
    {
        scene->removeItem(v);
        vectors.removeOne(v);
        delete v;
    }
}


void VectorEditor::onSumButtonClicked()
{
    QList<Vector*> selectedVectors = getSelectedVectors();

    if (selectedVectors.size() == 0)
    {
        QMessageBox msgBox;
        msgBox.setText("Выберите векторы");
        msgBox.exec();
        return;
    }
    else if (selectedVectors.size() == 1)
        return;

    QPointF start(0, 0);
    QPointF end(0, 0);

    for (auto v : selectedVectors)
    {
        QPointF p1 = v->getStart();
        QPointF p2 = v->getEnd();

        start.rx() += p1.x();
        start.ry() += p1.y();

        end.rx() += p2.x();
        end.ry() += p2.y();
    }

    Vector* vector = new Vector(start, end);
    addVector(vector);
    vectors.append(vector);
}