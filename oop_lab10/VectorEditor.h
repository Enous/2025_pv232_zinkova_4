#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VectorEditor.h"
#include <QInputDialog>
#include <QMessageBox>
#include "Vector.h"
#include "SmartPointer.h"


class VectorEditor : public QMainWindow
{
    Q_OBJECT

private:
    Ui::VectorEditorClass ui;
    SmartPointer<QGraphicsScene> scene;
    QList<Vector*> vectors;

    void addVector(Vector* v);
    QList<Vector*> getSelectedVectors();
    void deleteVectors();

public:
    VectorEditor(QWidget* parent = nullptr);
    ~VectorEditor();

public slots:
    void onAddButtonClicked();
    void onDeleteButtonClicked();
    void onSumButtonClicked();
};

