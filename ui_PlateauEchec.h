/********************************************************************************
** Form generated from reading UI file 'PlateauEchec.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLATEAUECHEC_H
#define UI_PLATEAUECHEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlateauEchec
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *listeBlanche;
    QTableWidget *listeNoire;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QPushButton *resetButton;
    QLabel *tourRole;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PlateauEchec)
    {
        if (PlateauEchec->objectName().isEmpty())
            PlateauEchec->setObjectName(QString::fromUtf8("PlateauEchec"));
        PlateauEchec->resize(960, 710);
        PlateauEchec->setMinimumSize(QSize(287, 370));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(15, 15, 15, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 241, 225, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(238, 209, 177, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(110, 89, 64, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(147, 119, 86, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush6);
        QBrush brush7(QColor(238, 216, 192, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        QBrush brush10(QColor(221, 178, 129, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        PlateauEchec->setPalette(palette);
        PlateauEchec->setStyleSheet(QString::fromUtf8("QHeaderView::section{\n"
"	background-color: #0f0f0f;\n"
"border : none;\n"
"}\n"
"QTableView {\n"
" \n"
"    gridline-color:  rgba(49, 49, 49, 160);\n"
"\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QWidget {\n"
"    background-color: #0f0f0f;\n"
"}\n"
"\n"
"\n"
"QDialog{background-color:#0f0f0f;}\n"
"QPushButton{background-color:white;}\n"
"\n"
"QTableWidget QTableCornerButton::section {\n"
"background-color: #0f0f0f;\n"
"} \n"
"\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
""));
        centralwidget = new QWidget(PlateauEchec);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(1000, 2000));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listeBlanche = new QTableWidget(centralwidget);
        if (listeBlanche->columnCount() < 2)
            listeBlanche->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        listeBlanche->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        listeBlanche->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (listeBlanche->rowCount() < 8)
            listeBlanche->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        listeBlanche->setVerticalHeaderItem(7, __qtablewidgetitem9);
        listeBlanche->setObjectName(QString::fromUtf8("listeBlanche"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listeBlanche->sizePolicy().hasHeightForWidth());
        listeBlanche->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QLinearGradient gradient(0.470339, 1, 0.474576, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(0, 85, 255, 255));
        gradient.setColorAt(1, QColor(0, 0, 0, 100));
        QBrush brush11(gradient);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush11);
        QBrush brush12(QColor(0, 0, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush12);
        QLinearGradient gradient1(0.470339, 1, 0.474576, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(0, 85, 255, 255));
        gradient1.setColorAt(1, QColor(0, 0, 0, 100));
        QBrush brush13(gradient1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush13);
        QBrush brush14(QColor(255, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush14);
        QLinearGradient gradient2(0.470339, 1, 0.474576, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(0, 85, 255, 255));
        gradient2.setColorAt(1, QColor(0, 0, 0, 100));
        QBrush brush15(gradient2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush15);
        QBrush brush16(QColor(0, 0, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush16);
        QLinearGradient gradient3(0.470339, 1, 0.474576, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(0, 85, 255, 255));
        gradient3.setColorAt(1, QColor(0, 0, 0, 100));
        QBrush brush17(gradient3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush17);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush14);
        QLinearGradient gradient4(0.470339, 1, 0.474576, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(0, 85, 255, 255));
        gradient4.setColorAt(1, QColor(0, 0, 0, 100));
        QBrush brush18(gradient4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush18);
        QBrush brush19(QColor(0, 0, 0, 255));
        brush19.setStyle(Qt::NoBrush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush19);
        QLinearGradient gradient5(0.470339, 1, 0.474576, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(0, 85, 255, 255));
        gradient5.setColorAt(1, QColor(0, 0, 0, 100));
        QBrush brush20(gradient5);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        QBrush brush21(QColor(0, 120, 215, 255));
        brush21.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush21);
        listeBlanche->setPalette(palette1);
        listeBlanche->setFocusPolicy(Qt::NoFocus);
        listeBlanche->setAutoFillBackground(false);
        listeBlanche->setStyleSheet(QString::fromUtf8("\n"
"gridline-color: rgb(0, 0, 0);\n"
"border: 2px outset rgb(0, 0, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0.470339, y1:1, x2:0.474576, y2:0, stop:0 rgba(0, 85, 255, 255), stop:1 rgba(0, 0, 0, 100));"));
        listeBlanche->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listeBlanche->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listeBlanche->setAutoScroll(false);
        listeBlanche->setAutoScrollMargin(6);
        listeBlanche->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listeBlanche->setDragEnabled(false);
        listeBlanche->setDragDropOverwriteMode(false);
        listeBlanche->setDragDropMode(QAbstractItemView::NoDragDrop);
        listeBlanche->setSelectionMode(QAbstractItemView::NoSelection);
        listeBlanche->setIconSize(QSize(0, 0));
        listeBlanche->setShowGrid(true);
        listeBlanche->horizontalHeader()->setVisible(false);
        listeBlanche->horizontalHeader()->setCascadingSectionResizes(false);
        listeBlanche->horizontalHeader()->setMinimumSectionSize(30);
        listeBlanche->horizontalHeader()->setDefaultSectionSize(30);
        listeBlanche->horizontalHeader()->setStretchLastSection(false);
        listeBlanche->verticalHeader()->setVisible(false);
        listeBlanche->verticalHeader()->setCascadingSectionResizes(false);
        listeBlanche->verticalHeader()->setMinimumSectionSize(30);
        listeBlanche->verticalHeader()->setDefaultSectionSize(30);
        listeBlanche->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        listeBlanche->verticalHeader()->setStretchLastSection(false);

        gridLayout->addWidget(listeBlanche, 1, 2, 1, 1, Qt::AlignRight);

        listeNoire = new QTableWidget(centralwidget);
        if (listeNoire->columnCount() < 2)
            listeNoire->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        listeNoire->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        listeNoire->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        if (listeNoire->rowCount() < 8)
            listeNoire->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        listeNoire->setVerticalHeaderItem(7, __qtablewidgetitem19);
        listeNoire->setObjectName(QString::fromUtf8("listeNoire"));
        listeNoire->setFocusPolicy(Qt::NoFocus);
        listeNoire->setStyleSheet(QString::fromUtf8("gridline-color: rgb(0, 0, 0);\n"
"\n"
"border: 2px outset red;\n"
"\n"
"\n"
"background-color: qlineargradient(spread:pad, x1:0.470339, y1:1, x2:0.7, y2:0, stop:0 rgba(255, 28, 28, 139), stop:1 rgba(0, 0, 0, 100));"));
        listeNoire->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listeNoire->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listeNoire->setAutoScroll(false);
        listeNoire->setSelectionMode(QAbstractItemView::NoSelection);
        listeNoire->horizontalHeader()->setVisible(false);
        listeNoire->horizontalHeader()->setMinimumSectionSize(30);
        listeNoire->horizontalHeader()->setDefaultSectionSize(30);
        listeNoire->verticalHeader()->setVisible(false);
        listeNoire->verticalHeader()->setMinimumSectionSize(30);
        listeNoire->verticalHeader()->setDefaultSectionSize(30);

        gridLayout->addWidget(listeNoire, 1, 0, 1, 1, Qt::AlignLeft);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font);
        __qtablewidgetitem20->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font);
        __qtablewidgetitem21->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFont(font);
        __qtablewidgetitem22->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFont(font);
        __qtablewidgetitem23->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFont(font);
        __qtablewidgetitem24->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFont(font);
        __qtablewidgetitem25->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFont(font);
        __qtablewidgetitem26->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFont(font);
        __qtablewidgetitem27->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem27);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFont(font);
        __qtablewidgetitem28->setForeground(brush);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFont(font);
        __qtablewidgetitem29->setForeground(brush);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font);
        __qtablewidgetitem30->setForeground(brush);
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFont(font);
        __qtablewidgetitem31->setForeground(brush);
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFont(font);
        __qtablewidgetitem32->setForeground(brush);
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFont(font);
        __qtablewidgetitem33->setForeground(brush);
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFont(font);
        __qtablewidgetitem34->setForeground(brush);
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setFont(font);
        __qtablewidgetitem35->setForeground(brush);
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem35);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Modern"));
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setFont(font1);
        __qtablewidgetitem36->setBackground(brush1);
        __qtablewidgetitem36->setForeground(brush6);
        tableWidget->setItem(0, 0, __qtablewidgetitem36);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Ressource/image/cavalierBlanc.png"), QSize(), QIcon::Normal, QIcon::Off);
        QBrush brush22(QColor(0, 0, 0, 255));
        brush22.setStyle(Qt::BDiagPattern);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setBackground(brush);
        __qtablewidgetitem37->setForeground(brush22);
        __qtablewidgetitem37->setIcon(icon);
        tableWidget->setItem(0, 1, __qtablewidgetitem37);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Ressource/image/fouBlanc.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setBackground(brush1);
        __qtablewidgetitem38->setIcon(icon1);
        tableWidget->setItem(0, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setBackground(brush);
        tableWidget->setItem(0, 3, __qtablewidgetitem39);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Ressource/image/roiBlanc.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setBackground(brush1);
        __qtablewidgetitem40->setIcon(icon2);
        tableWidget->setItem(0, 4, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setBackground(brush);
        __qtablewidgetitem41->setIcon(icon1);
        tableWidget->setItem(0, 5, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setBackground(brush1);
        __qtablewidgetitem42->setIcon(icon);
        tableWidget->setItem(0, 6, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setBackground(brush);
        tableWidget->setItem(0, 7, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setBackground(brush);
        tableWidget->setItem(1, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setBackground(brush1);
        tableWidget->setItem(1, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setBackground(brush);
        tableWidget->setItem(1, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setBackground(brush1);
        tableWidget->setItem(1, 3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setBackground(brush);
        tableWidget->setItem(1, 4, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setBackground(brush1);
        tableWidget->setItem(1, 5, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setBackground(brush);
        tableWidget->setItem(1, 6, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setBackground(brush1);
        tableWidget->setItem(1, 7, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setBackground(brush1);
        tableWidget->setItem(2, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setBackground(brush);
        tableWidget->setItem(2, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setBackground(brush1);
        tableWidget->setItem(2, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setBackground(brush);
        tableWidget->setItem(2, 3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setBackground(brush1);
        tableWidget->setItem(2, 4, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setBackground(brush);
        tableWidget->setItem(2, 5, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setBackground(brush1);
        tableWidget->setItem(2, 6, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setBackground(brush);
        tableWidget->setItem(2, 7, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setBackground(brush);
        tableWidget->setItem(3, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setBackground(brush1);
        tableWidget->setItem(3, 1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setBackground(brush);
        tableWidget->setItem(3, 2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setBackground(brush1);
        tableWidget->setItem(3, 3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setBackground(brush);
        tableWidget->setItem(3, 4, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setBackground(brush1);
        tableWidget->setItem(3, 5, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setBackground(brush);
        tableWidget->setItem(3, 6, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setBackground(brush1);
        tableWidget->setItem(3, 7, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setBackground(brush1);
        tableWidget->setItem(4, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setBackground(brush);
        tableWidget->setItem(4, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setBackground(brush1);
        tableWidget->setItem(4, 2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setBackground(brush);
        tableWidget->setItem(4, 3, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        __qtablewidgetitem72->setBackground(brush1);
        tableWidget->setItem(4, 4, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        __qtablewidgetitem73->setBackground(brush);
        tableWidget->setItem(4, 5, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        __qtablewidgetitem74->setBackground(brush1);
        tableWidget->setItem(4, 6, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        __qtablewidgetitem75->setBackground(brush);
        tableWidget->setItem(4, 7, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        __qtablewidgetitem76->setBackground(brush);
        tableWidget->setItem(5, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        __qtablewidgetitem77->setBackground(brush1);
        tableWidget->setItem(5, 1, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        __qtablewidgetitem78->setBackground(brush);
        tableWidget->setItem(5, 2, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        __qtablewidgetitem79->setBackground(brush1);
        tableWidget->setItem(5, 3, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        __qtablewidgetitem80->setBackground(brush);
        tableWidget->setItem(5, 4, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        __qtablewidgetitem81->setBackground(brush1);
        tableWidget->setItem(5, 5, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        __qtablewidgetitem82->setBackground(brush);
        tableWidget->setItem(5, 6, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        __qtablewidgetitem83->setBackground(brush1);
        tableWidget->setItem(5, 7, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setBackground(brush1);
        tableWidget->setItem(6, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setBackground(brush);
        tableWidget->setItem(6, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setBackground(brush1);
        tableWidget->setItem(6, 2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        __qtablewidgetitem87->setBackground(brush);
        tableWidget->setItem(6, 3, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        __qtablewidgetitem88->setBackground(brush1);
        tableWidget->setItem(6, 4, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        __qtablewidgetitem89->setBackground(brush);
        tableWidget->setItem(6, 5, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        __qtablewidgetitem90->setBackground(brush1);
        tableWidget->setItem(6, 6, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        __qtablewidgetitem91->setBackground(brush);
        tableWidget->setItem(6, 7, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        __qtablewidgetitem92->setBackground(brush);
        tableWidget->setItem(7, 0, __qtablewidgetitem92);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Ressource/image/cavalierNoir.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        __qtablewidgetitem93->setBackground(brush1);
        __qtablewidgetitem93->setIcon(icon3);
        tableWidget->setItem(7, 1, __qtablewidgetitem93);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Ressource/image/fouNoir.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        __qtablewidgetitem94->setBackground(brush);
        __qtablewidgetitem94->setIcon(icon4);
        tableWidget->setItem(7, 2, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        __qtablewidgetitem95->setBackground(brush1);
        tableWidget->setItem(7, 3, __qtablewidgetitem95);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Ressource/image/roiNoir.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        __qtablewidgetitem96->setBackground(brush);
        __qtablewidgetitem96->setIcon(icon5);
        tableWidget->setItem(7, 4, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        __qtablewidgetitem97->setBackground(brush1);
        __qtablewidgetitem97->setIcon(icon4);
        tableWidget->setItem(7, 5, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        __qtablewidgetitem98->setBackground(brush);
        __qtablewidgetitem98->setIcon(icon3);
        tableWidget->setItem(7, 6, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        __qtablewidgetitem99->setBackground(brush1);
        tableWidget->setItem(7, 7, __qtablewidgetitem99);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        tableWidget->setPalette(palette2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Rockwell Condensed"));
        font2.setBold(false);
        font2.setWeight(50);
        tableWidget->setFont(font2);
        tableWidget->setFocusPolicy(Qt::NoFocus);
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->setFrameShape(QFrame::Panel);
        tableWidget->setFrameShadow(QFrame::Plain);
        tableWidget->setLineWidth(0);
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setAutoScroll(true);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setDragDropMode(QAbstractItemView::DragOnly);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setIconSize(QSize(20, 30));
        tableWidget->setShowGrid(true);
        tableWidget->setSortingEnabled(false);
        tableWidget->horizontalHeader()->setVisible(true);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(70);
        tableWidget->horizontalHeader()->setDefaultSectionSize(70);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(70);
        tableWidget->verticalHeader()->setDefaultSectionSize(70);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_4->addWidget(tableWidget);


        verticalLayout_3->addLayout(horizontalLayout_4);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        QPalette palette3;
        QBrush brush23(QColor(104, 104, 104, 255));
        brush23.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush23);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush23);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush23);
        QBrush brush24(QColor(218, 30, 33, 255));
        brush24.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::HighlightedText, brush24);
        QBrush brush25(QColor(255, 255, 255, 128));
        brush25.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush25);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush23);
        palette3.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush24);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush25);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush23);
        QBrush brush26(QColor(120, 120, 120, 255));
        brush26.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush26);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        palette3.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush24);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        resetButton->setPalette(palette3);
        resetButton->setFont(font);
        resetButton->setStyleSheet(QString::fromUtf8("selection-color: rgb(218, 30, 33);\n"
"background-color: rgb(104, 104, 104);"));
        resetButton->setAutoDefault(false);
        resetButton->setFlat(false);

        verticalLayout_3->addWidget(resetButton);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        tourRole = new QLabel(centralwidget);
        tourRole->setObjectName(QString::fromUtf8("tourRole"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Agency FB"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        tourRole->setFont(font3);
        tourRole->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(tourRole, 0, 1, 1, 1);

        PlateauEchec->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PlateauEchec);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PlateauEchec->setStatusBar(statusbar);

        retranslateUi(PlateauEchec);

        resetButton->setDefault(false);


        QMetaObject::connectSlotsByName(PlateauEchec);
    } // setupUi

    void retranslateUi(QMainWindow *PlateauEchec)
    {
        PlateauEchec->setWindowTitle(QCoreApplication::translate("PlateauEchec", "PlateauEchec", nullptr));
        QTableWidgetItem *___qtablewidgetitem = listeBlanche->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("PlateauEchec", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = listeBlanche->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("PlateauEchec", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = listeBlanche->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = listeBlanche->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = listeBlanche->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = listeBlanche->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = listeBlanche->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = listeBlanche->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = listeBlanche->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = listeBlanche->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = listeNoire->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("PlateauEchec", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = listeNoire->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("PlateauEchec", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = listeNoire->verticalHeaderItem(0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = listeNoire->verticalHeaderItem(1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = listeNoire->verticalHeaderItem(2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = listeNoire->verticalHeaderItem(3);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = listeNoire->verticalHeaderItem(4);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = listeNoire->verticalHeaderItem(5);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = listeNoire->verticalHeaderItem(6);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = listeNoire->verticalHeaderItem(7);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("PlateauEchec", "New Row", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("PlateauEchec", "A", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("PlateauEchec", "B", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("PlateauEchec", "C", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("PlateauEchec", "D", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("PlateauEchec", "E", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("PlateauEchec", "F", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("PlateauEchec", "G", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("PlateauEchec", "H", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("PlateauEchec", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("PlateauEchec", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("PlateauEchec", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("PlateauEchec", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("PlateauEchec", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("PlateauEchec", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("PlateauEchec", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("PlateauEchec", "8", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        resetButton->setText(QCoreApplication::translate("PlateauEchec", "RESET", nullptr));
        tourRole->setText(QCoreApplication::translate("PlateauEchec", "Echec", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlateauEchec: public Ui_PlateauEchec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLATEAUECHEC_H
