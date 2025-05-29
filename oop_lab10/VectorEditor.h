#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VectorEditor.h"
#include <QInputDialog>
#include "Vector.h"
#include <QMessageBox>

class VectorEditor : public QMainWindow
{
    Q_OBJECT

private:
    Ui::VectorEditorClass ui;
    QGraphicsScene* scene;
    QList<Vector*> vectors;

    void addVector(Vector* v);
    QList<Vector*> getSelectedVectors();

public:
    VectorEditor(QWidget* parent = nullptr);
    ~VectorEditor();

public slots:
    void onAddButtonClicked();
    void onDeleteButtonClicked();
    void onSumButtonClicked();
};

