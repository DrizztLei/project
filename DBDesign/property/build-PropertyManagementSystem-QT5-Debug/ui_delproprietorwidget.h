/********************************************************************************
** Form generated from reading UI file 'delproprietorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELPROPRIETORWIDGET_H
#define UI_DELPROPRIETORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DelProprietorWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *buildComboBox;
    QLabel *label;
    QComboBox *roomComboBox;
    QLabel *label_2;
    QLabel *proprietorIdLabel;
    QLabel *label_4;
    QLabel *proprietorLabel;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;

    void setupUi(QWidget *DelProprietorWidget)
    {
        if (DelProprietorWidget->objectName().isEmpty())
            DelProprietorWidget->setObjectName(QStringLiteral("DelProprietorWidget"));
        DelProprietorWidget->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DelProprietorWidget->sizePolicy().hasHeightForWidth());
        DelProprietorWidget->setSizePolicy(sizePolicy);
        DelProprietorWidget->setMinimumSize(QSize(800, 600));
        gridLayout = new QGridLayout(DelProprietorWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label_5 = new QLabel(DelProprietorWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(DelProprietorWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        buildComboBox = new QComboBox(DelProprietorWidget);
        buildComboBox->setObjectName(QStringLiteral("buildComboBox"));

        horizontalLayout->addWidget(buildComboBox);

        label = new QLabel(DelProprietorWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        roomComboBox = new QComboBox(DelProprietorWidget);
        roomComboBox->setObjectName(QStringLiteral("roomComboBox"));

        horizontalLayout->addWidget(roomComboBox);

        label_2 = new QLabel(DelProprietorWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        proprietorIdLabel = new QLabel(DelProprietorWidget);
        proprietorIdLabel->setObjectName(QStringLiteral("proprietorIdLabel"));

        horizontalLayout->addWidget(proprietorIdLabel);

        label_4 = new QLabel(DelProprietorWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        proprietorLabel = new QLabel(DelProprietorWidget);
        proprietorLabel->setObjectName(QStringLiteral("proprietorLabel"));

        horizontalLayout->addWidget(proprietorLabel);

        pushButton = new QPushButton(DelProprietorWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(DelProprietorWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(DelProprietorWidget);

        QMetaObject::connectSlotsByName(DelProprietorWidget);
    } // setupUi

    void retranslateUi(QWidget *DelProprietorWidget)
    {
        DelProprietorWidget->setWindowTitle(QApplication::translate("DelProprietorWidget", "Form", Q_NULLPTR));
        label_5->setText(QApplication::translate("DelProprietorWidget", "\345\210\240\351\231\244\344\270\232\344\270\273", Q_NULLPTR));
        label_3->setText(QApplication::translate("DelProprietorWidget", "\346\245\274\346\240\213\345\217\267\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("DelProprietorWidget", "\346\210\277\345\261\213\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("DelProprietorWidget", "\344\270\232\344\270\273\350\272\253\344\273\275\350\257\201\345\217\267\357\274\232", Q_NULLPTR));
        proprietorIdLabel->setText(QString());
        label_4->setText(QApplication::translate("DelProprietorWidget", "\344\270\232\344\270\273\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        proprietorLabel->setText(QString());
        pushButton->setText(QApplication::translate("DelProprietorWidget", "\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DelProprietorWidget: public Ui_DelProprietorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELPROPRIETORWIDGET_H
