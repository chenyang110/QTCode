#include "widget.h"
#include "ui_widget.h"
#include <QDataStream>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#define cout qDebug() << "[" << __FILE__ <<":" << __LINE__ << "]"

/*
QTextStream – 文本流, 操作轻量级数据(int, double, QString),
数据写入文件中之后以文本的方式呈现。
QDataStream – 数据流, 通过数据流可以操作各种数据类型,
包括类对象, 存储到文件中数据可以还原到内存。
QTextStream, QDataStream可以操作磁盘文件,
也可以操作内存数据, 通过流对象可以将数据打包到内存, 进行数据的传输.*/

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    writeData();
    readData();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::writeData()
{
    //创建文件对象
    QFile file("../test.txt");

    //打开文件， 只写方式打开
    bool isOk = file.open(QIODevice::WriteOnly);
    if(true == isOk)
    {
        //创建数据流，和file文件关联
        //往数据流中写数据，相当于往文件里写数据
        QDataStream stream(&file);

        stream << QString("主要看气质 ") << 250;

        file.close();

    }

}

void Widget::readData()
{
    //创建文件对象
    QFile file("../test.txt");

    //打开文件， 只读方式打开
    bool isOk = file.open(QIODevice::ReadOnly);
    if(true == isOk)
    {
        //创建数据流，和file文件关联
        //往数据流中读数据，相当于往文件里读数据
        QDataStream stream(&file);
        //读的时候，按写的顺序取数据
        QString str;
        int a;
        stream >> str >> a;
        qDebug() << str.toUtf8().data() << a;
        cout << str.toUtf8().data() << a;

        file.close();

    }
}






