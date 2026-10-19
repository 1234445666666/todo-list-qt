#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString todo = ui->lineEdit->text();
    if (todo.isEmpty()) {
        return;
    }
    QListWidgetItem *item = new QListWidgetItem(todo, ui->listWidget);
    item->setCheckState(Qt::Unchecked);

    item->setFlags(item->flags() | Qt::ItemIsEnabled);

    ui->lineEdit->clear();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
}


void MainWindow::on_pushButton_3_clicked()
{
    QListWidgetItem *currentItem = ui->listWidget->currentItem();
    if (currentItem !=nullptr) {
        delete currentItem;
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QString rename_todo = ui->lineEdit->text();
    if(rename_todo.isEmpty()) {
        return;
    }
    QListWidgetItem *currentItem = ui->listWidget->currentItem();
    if (currentItem  !=nullptr) {
        currentItem->setText(rename_todo);
        ui->lineEdit->clear();
    }
}


void MainWindow::on_listWidget_itemChanged(QListWidgetItem *item)
{
    QFont font = item->font();
    if(item->checkState() == Qt::Checked) {
        font.setStrikeOut(true);
    } else {
        font.setStrikeOut(false);
    }

    item->setFont(font);
}

