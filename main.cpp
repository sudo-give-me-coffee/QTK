#include "gtk/gtk.h"

int main(int argc, char *argv[])
{

    // Infelizmente a ordem que as coisas são executadas
    // em Qt e GTK são muito diferentes então não dá pra
    // usar exatamente a mesma função ;(
    GtkApplication *app = gtk_application_new(argc,argv);

    // mas daqui pra baixo é copia e cola do demo do site
    // do GTK :p

    int status;

    GtkWidget *window;
    GtkWidget *button;

    window = gtk_application_window_new (app);
    gtk_window_set_title (GTK_WINDOW (window), "Window");
    gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

    button = gtk_button_new_with_label ("Hello World");
    gtk_window_set_child (GTK_WINDOW (window), button);

    gtk_window_present(GTK_WINDOW (window));

    status = g_application_run(G_APPLICATION (app), argc, argv);

    g_object_unref(app);
    return status;
}
