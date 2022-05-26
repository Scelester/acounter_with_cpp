#include <QApplication>
#include <QGridLayout>
#include <QLabel>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QString name = "Accounter";

    QLabel label1(name);

    label1.show();

    return app.exec();
}
