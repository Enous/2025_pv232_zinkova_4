#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VectorEditor.h"

class VectorEditor : public QMainWindow
{
    Q_OBJECT

public:
    VectorEditor(QWidget *parent = nullptr);
    ~VectorEditor();

private:
    Ui::VectorEditorClass ui;
};
