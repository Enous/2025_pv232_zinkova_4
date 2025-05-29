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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VectorEditorClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QPushButton *sumButton;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QGraphicsView *view;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VectorEditorClass)
    {
        if (VectorEditorClass->objectName().isEmpty())
            VectorEditorClass->setObjectName("VectorEditorClass");
        VectorEditorClass->resize(636, 546);
        centralWidget = new QWidget(VectorEditorClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        sumButton = new QPushButton(centralWidget);
        sumButton->setObjectName("sumButton");

        gridLayout->addWidget(sumButton, 1, 2, 1, 1);

        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName("deleteButton");

        gridLayout->addWidget(deleteButton, 1, 1, 1, 1);

        addButton = new QPushButton(centralWidget);
        addButton->setObjectName("addButton");

        gridLayout->addWidget(addButton, 1, 0, 1, 1);

        view = new QGraphicsView(centralWidget);
        view->setObjectName("view");

        gridLayout->addWidget(view, 0, 0, 1, 3);

        VectorEditorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(VectorEditorClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 636, 21));
        VectorEditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VectorEditorClass);
        mainToolBar->setObjectName("mainToolBar");
        VectorEditorClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(VectorEditorClass);
        statusBar->setObjectName("statusBar");
        VectorEditorClass->setStatusBar(statusBar);

        retranslateUi(VectorEditorClass);

        QMetaObject::connectSlotsByName(VectorEditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *VectorEditorClass)
    {
        VectorEditorClass->setWindowTitle(QCoreApplication::translate("VectorEditorClass", "VectorEditor", nullptr));
        sumButton->setText(QCoreApplication::translate("VectorEditorClass", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203", nullptr));
        deleteButton->setText(QCoreApplication::translate("VectorEditorClass", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addButton->setText(QCoreApplication::translate("VectorEditorClass", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VectorEditorClass: public Ui_VectorEditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTOREDITOR_H
