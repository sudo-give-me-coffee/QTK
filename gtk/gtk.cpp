#include "gtk.h"


GtkApplication *G_APPLICATION (GtkApplication*app){
    return app;
}

GtkApplication *gtk_application_new(int &argc, char **argv, int f){
    GtkApplication *app = new GtkApplication(argc, argv,f);
    return app;
}

int g_application_run(GtkApplication*app, int &argc, char **argv){
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    int status = app->exec();
    return status;
}

GtkWidget*GTK_WINDOW(GtkWidget*widget){
    return widget;
}

GtkWidget*gtk_application_window_new(GtkApplication*app){
    Q_UNUSED(app);
    QWidget *window = new QWidget ();
    return window;
}

#include <QPushButton>
GtkWidget*gtk_button_new_with_label(QString label){
    QPushButton *btn = new QPushButton();
    btn->setText(label);
    return btn;
}

#include <QLayout>
void gtk_window_set_child (GtkWidget*parent,GtkWidget*children){
    if (parent->layout()==nullptr){
        children->setParent(parent);
    } else {
        parent->layout()->addWidget(children);
    }
}

void gtk_window_present (GtkWidget*window){
    window->show();
}

void gtk_window_set_default_size (GtkWidget*window,int w, int h) {
    window->setMinimumSize(w,h);
    window->resize(w,h);
}

void gtk_window_set_title (GtkWidget*window, QString title){
    window->setWindowTitle(title);
}

void g_object_unref(gpointer *obj){
    QApplication *widget = qobject_cast<QApplication*>(obj);
    if (not (widget == NULL)) {
        return;
    }
    delete obj;
}
