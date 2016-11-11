#ifndef MYSQLCONNECT_H
#define MYSQLCONNECT_H
#include <QtGui>
#include <QtSql>
#include<QTableView>
#include <QApplication>
#include<QTableWidget>
#include<QMessageBox>
#include<QWidget>

class mysqlconnect
{
public:
    QTableWidget* table;
    QSqlDatabase db;
  //  mysqlconnect();
     void test();
};

#endif // MYSQLCONNECT_H
