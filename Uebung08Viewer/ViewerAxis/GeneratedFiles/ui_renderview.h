/********************************************************************************
** Form generated from reading UI file 'renderview.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDERVIEW_H
#define UI_RENDERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenderView
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *viewarea;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_7b;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_6j;
    QCheckBox *checkBox_6k;
    QCheckBox *checkBox_6l;
    QCheckBox *checkBox_6m;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_7c;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_7b;
    QCheckBox *checkBox_7c;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *RenderView)
    {
        if (RenderView->objectName().isEmpty())
            RenderView->setObjectName(QStringLiteral("RenderView"));
        RenderView->resize(814, 604);
        horizontalLayout = new QHBoxLayout(RenderView);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        viewarea = new QWidget(RenderView);
        viewarea->setObjectName(QStringLiteral("viewarea"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewarea->sizePolicy().hasHeightForWidth());
        viewarea->setSizePolicy(sizePolicy);
        viewarea->setMinimumSize(QSize(200, 200));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(127, 127, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(63, 63, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(0, 0, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(0, 0, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        viewarea->setPalette(palette);
        viewarea->setAutoFillBackground(true);

        horizontalLayout->addWidget(viewarea);

        scrollArea = new QScrollArea(RenderView);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(200, 580));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 223, 588));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        verticalLayout_3->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        groupBox_7b = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7b->setObjectName(QStringLiteral("groupBox_7b"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        groupBox_7b->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox_7b);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        checkBox_6j = new QCheckBox(groupBox_7b);
        checkBox_6j->setObjectName(QStringLiteral("checkBox_6j"));
        checkBox_6j->setChecked(true);

        verticalLayout->addWidget(checkBox_6j);

        checkBox_6k = new QCheckBox(groupBox_7b);
        checkBox_6k->setObjectName(QStringLiteral("checkBox_6k"));
        checkBox_6k->setChecked(true);

        verticalLayout->addWidget(checkBox_6k);

        checkBox_6l = new QCheckBox(groupBox_7b);
        checkBox_6l->setObjectName(QStringLiteral("checkBox_6l"));
        checkBox_6l->setChecked(true);

        verticalLayout->addWidget(checkBox_6l);

        checkBox_6m = new QCheckBox(groupBox_7b);
        checkBox_6m->setObjectName(QStringLiteral("checkBox_6m"));
        checkBox_6m->setChecked(true);

        verticalLayout->addWidget(checkBox_6m);


        verticalLayout_3->addWidget(groupBox_7b);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_3->addItem(verticalSpacer_2);

        groupBox_7c = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7c->setObjectName(QStringLiteral("groupBox_7c"));
        groupBox_7c->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox_7c);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        checkBox_7b = new QCheckBox(groupBox_7c);
        checkBox_7b->setObjectName(QStringLiteral("checkBox_7b"));
        checkBox_7b->setChecked(true);

        verticalLayout_2->addWidget(checkBox_7b);

        checkBox_7c = new QCheckBox(groupBox_7c);
        checkBox_7c->setObjectName(QStringLiteral("checkBox_7c"));
        QFont font2;
        font2.setBold(false);
        font2.setWeight(50);
        checkBox_7c->setFont(font2);
        checkBox_7c->setChecked(true);

        verticalLayout_2->addWidget(checkBox_7c);


        verticalLayout_3->addWidget(groupBox_7c);

        verticalSpacer_3 = new QSpacerItem(20, 252, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(RenderView);

        QMetaObject::connectSlotsByName(RenderView);
    } // setupUi

    void retranslateUi(QWidget *RenderView)
    {
        RenderView->setWindowTitle(QApplication::translate("RenderView", "RenderView", Q_NULLPTR));
        label->setText(QApplication::translate("RenderView", "Toggle Object Visibility", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_7b->setToolTip(QApplication::translate("RenderView", "Set transformed boxes visible/invisible", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_7b->setTitle(QApplication::translate("RenderView", "Exercise 7.b)", Q_NULLPTR));
        checkBox_6j->setText(QApplication::translate("RenderView", "Transformed Object 6.j)", Q_NULLPTR));
        checkBox_6k->setText(QApplication::translate("RenderView", "Transformed Object 6.k)", Q_NULLPTR));
        checkBox_6l->setText(QApplication::translate("RenderView", "Transformed Object 6.l)", Q_NULLPTR));
        checkBox_6m->setText(QApplication::translate("RenderView", "Transformed Object 6.m)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        groupBox_7c->setToolTip(QApplication::translate("RenderView", "Set transformed boxes visible/invisible", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox_7c->setTitle(QApplication::translate("RenderView", "Exercise 7.c)", Q_NULLPTR));
        checkBox_7b->setText(QApplication::translate("RenderView", "Untransformed 3d Object", Q_NULLPTR));
        checkBox_7c->setText(QApplication::translate("RenderView", "Transformed Object 6.m)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RenderView: public Ui_RenderView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDERVIEW_H
