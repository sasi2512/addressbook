#include <QApplication>
#include <QtGui>
#include <QtSql>
#include<QTableView>
#include<QTableWidget>
#include<QMessageBox>
#include<QWidget>
#include "mysqlconnect.h"


int main(int argc,char *argv[])

{

   QApplication a(argc,argv);
   mysqlconnect *t = new mysqlconnect();
   t ->test();
   return a.exec();

}






