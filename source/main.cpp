

#include <QApplication>
#include <QFile>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFile file(":/wps.qss");
    file.open(QFile::ReadOnly);

    if (file.isOpen()) {
        QString styleSheet = QLatin1String(file.readAll());
        app.setStyleSheet(styleSheet);
		file.close();
    }

	QPushButton button;

	button.setText("Hello");
	button.show();

    return app.exec();
}

