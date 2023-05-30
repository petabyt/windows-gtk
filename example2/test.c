#include <gtk/gtk.h>

#include "ui.h"

static void function(GtkWidget *widget, gpointer data) {
	puts("Hello, World");
}

int main(int argc, char **argv) {
	gtk_init(&argc, &argv);

	GtkBuilder *builder = gtk_builder_new();
	gtk_builder_add_from_string(builder, test_ui, test_ui_len, NULL);

	GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "window"));
	g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);
	gtk_window_set_title(GTK_WINDOW(window), "Demo Window");
	gtk_window_set_default_size(GTK_WINDOW(window), 300, 100);

	GtkWidget *button = GTK_WIDGET(gtk_builder_get_object(builder, "btn"));
	g_signal_connect(button, "clicked", G_CALLBACK(function), NULL);

	gtk_widget_show_all(window);
	gtk_main();
	return 0;
}
