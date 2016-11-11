#include <mysql.h>
#include <QtSql>


QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
//db.setHostName("localhost");
db.setDatabaseName("address25");
db.setUserName("root");
db.setPassword("root");
//db.setDatabaseName("contacts");

if(db.open())
{
    qDebug() << "connected " << db.hostName();
}else{
    qDebug() << "Connection FAILED.";

}
