#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QFile>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    formInit();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::formInit(void)
{
    pushButtonInit();
    lineEditInit();
    LabelInit();
    comboBoxInit();
    setFixedSize(900,600);

}

void MainWindow::styleInit(const QString &style)
{
    QFile qss(style);
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();

}
void MainWindow::pushButtonInit(void)
{
    ui->pushButton->setText("按钮");


}
void MainWindow::lineEditInit(void)
{
    ui->lineEdit->setText("天若有情天亦老，人间正道是沧桑。");
}

void MainWindow::comboBoxInit(void)
{
    QStringList styleList;
    styleList << "样式1" << "样式2"<< "样式3";
    ui->comboBox->addItems(styleList);
    ui->comboBox->setCurrentIndex(0);
}



void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(index == 0)
        styleInit("://white.qss");
    if(index == 1)
        styleInit("://black.qss");
     if(index == 2)
        styleInit("");

}
