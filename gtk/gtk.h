#ifndef GTK_H
#define GTK_H

#include <QApplication>
#include <QWidget>

typedef QWidget GtkWidget;
typedef QApplication GtkApplication;
typedef QObject gpointer;


extern GtkApplication *gtk_application_new(int &argc, char **argv, int f = 0);
extern GtkApplication *G_APPLICATION (GtkApplication*app);
int g_application_run(GtkApplication*app, int &argc, char **argv);

extern GtkWidget*GTK_WINDOW(GtkWidget*widget);
extern GtkWidget*gtk_application_window_new(GtkApplication*app);
extern GtkWidget*gtk_button_new_with_label(QString label);

extern void gtk_window_set_child (GtkWidget*parent,GtkWidget*children);
extern void gtk_window_present (GtkWidget*window);
extern void gtk_window_set_default_size (GtkWidget*window,int w, int h);
extern void gtk_window_set_title (GtkWidget*window, QString title);

extern void g_object_unref(gpointer *obj);

#define GTK_WIDGET GTK_WINDOW

#endif // GTK_H
