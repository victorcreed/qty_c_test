#include <QApplication>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextEdit textEdit;
    textEdit.show();
    return a.exec();
}
