/*
*
* Brief: 使用qss设置皮肤demo
*
* Author: Chenjm
*
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_comboBox_currentIndexChanged(int index);

private:
    void formInit(void);
    void styleInit(const QString& style);
    void pushButtonInit(void);
    void lineEditInit(void);
    void LabelInit(void);
    void comboBoxInit(void);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
