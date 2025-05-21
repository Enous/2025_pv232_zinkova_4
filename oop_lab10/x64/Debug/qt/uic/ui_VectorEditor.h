/********************************************************************************
** Form generated from reading UI file 'VectorEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTOREDITOR_H
#define UI_VECTOREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VectorEditorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VectorEditorClass)
    {
        if (VectorEditorClass->objectName().isEmpty())
            VectorEditorClass->setObjectName("VectorEditorClass");
        VectorEditorClass->resize(600, 400);
        menuBar = new QMenuBar(VectorEditorClass);
        menuBar->setObjectName("menuBar");
        VectorEditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VectorEditorClass);
        mainToolBar->setObjectName("mainToolBar");
        VectorEditorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VectorEditorClass);
        centralWidget->setObjectName("centralWidget");
        VectorEditorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VectorEditorClass);
        statusBar->setObjectName("statusBar");
        VectorEditorClass->setStatusBar(statusBar);

        retranslateUi(VectorEditorClass);

        QMetaObject::connectSlotsByName(VectorEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *VectorEditorClass)
    {
        VectorEditorClass->setWindowTitle(QCoreApplication::translate("VectorEditorClass", "VectorEditor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VectorEditorClass: public Ui_VectorEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTOREDITOR_H
