/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_ober_stat1 (void)
{
  GtkWidget *ober_stat1;
  GtkWidget *fixed1;
  GtkWidget *montaha;
  GtkWidget *montaha2;
  GtkWidget *montaha3;
  GtkWidget *mont2;
  GtkWidget *mont3;
  GtkWidget *mont1;

  ober_stat1 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (ober_stat1), _("window1"));

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (ober_stat1), fixed1);

  montaha = gtk_label_new (_("total d\342\200\231observateurs"));
  gtk_widget_show (montaha);
  gtk_fixed_put (GTK_FIXED (fixed1), montaha, 16, 72);
  gtk_widget_set_size_request (montaha, 160, 33);

  montaha2 = gtk_label_new (_("Le taux des observateurs nationaux"));
  gtk_widget_show (montaha2);
  gtk_fixed_put (GTK_FIXED (fixed1), montaha2, 8, 112);
  gtk_widget_set_size_request (montaha2, 256, 32);

  montaha3 = gtk_label_new (_("Le taux des observateurs \303\251trangers\n"));
  gtk_widget_show (montaha3);
  gtk_fixed_put (GTK_FIXED (fixed1), montaha3, 8, 160);
  gtk_widget_set_size_request (montaha3, 248, 33);

  mont2 = gtk_button_new_with_mnemonic (_("afficher"));
  gtk_widget_show (mont2);
  gtk_fixed_put (GTK_FIXED (fixed1), mont2, 280, 112);
  gtk_widget_set_size_request (mont2, 66, 29);

  mont3 = gtk_button_new_with_mnemonic (_("afficher"));
  gtk_widget_show (mont3);
  gtk_fixed_put (GTK_FIXED (fixed1), mont3, 280, 152);
  gtk_widget_set_size_request (mont3, 66, 29);

  mont1 = gtk_button_new_with_mnemonic (_("afficher"));
  gtk_widget_show (mont1);
  gtk_fixed_put (GTK_FIXED (fixed1), mont1, 280, 72);
  gtk_widget_set_size_request (mont1, 66, 29);

  g_signal_connect ((gpointer) mont2, "clicked",
                    G_CALLBACK (on_button2_clicked),
                    NULL);
  g_signal_connect ((gpointer) mont3, "clicked",
                    G_CALLBACK (on_button3_clicked),
                    NULL);
  g_signal_connect ((gpointer) mont1, "clicked",
                    G_CALLBACK (on_button1_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (ober_stat1, ober_stat1, "ober_stat1");
  GLADE_HOOKUP_OBJECT (ober_stat1, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (ober_stat1, montaha, "montaha");
  GLADE_HOOKUP_OBJECT (ober_stat1, montaha2, "montaha2");
  GLADE_HOOKUP_OBJECT (ober_stat1, montaha3, "montaha3");
  GLADE_HOOKUP_OBJECT (ober_stat1, mont2, "mont2");
  GLADE_HOOKUP_OBJECT (ober_stat1, mont3, "mont3");
  GLADE_HOOKUP_OBJECT (ober_stat1, mont1, "mont1");

  return ober_stat1;
}

GtkWidget*
create_obser_stat2 (void)
{
  GtkWidget *obser_stat2;
  GtkWidget *fixed2;
  GtkWidget *montaha5;
  GtkWidget *mont4;
  GtkWidget *montaha4;

  obser_stat2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (obser_stat2), _("window2"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (obser_stat2), fixed2);

  montaha5 = gtk_label_new (_("nombre"));
  gtk_widget_show (montaha5);
  gtk_fixed_put (GTK_FIXED (fixed2), montaha5, 112, 153);
  gtk_widget_set_size_request (montaha5, 152, 16);

  mont4 = gtk_button_new_with_mnemonic (_("quitter"));
  gtk_widget_show (mont4);
  gtk_fixed_put (GTK_FIXED (fixed2), mont4, 160, 216);
  gtk_widget_set_size_request (mont4, 66, 29);

  montaha4 = gtk_label_new (_("Le total des observateurs :"));
  gtk_widget_show (montaha4);
  gtk_fixed_put (GTK_FIXED (fixed2), montaha4, 64, 56);
  gtk_widget_set_size_request (montaha4, 256, 88);

  g_signal_connect ((gpointer) mont4, "clicked",
                    G_CALLBACK (on_button4_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (obser_stat2, obser_stat2, "obser_stat2");
  GLADE_HOOKUP_OBJECT (obser_stat2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (obser_stat2, montaha5, "montaha5");
  GLADE_HOOKUP_OBJECT (obser_stat2, mont4, "mont4");
  GLADE_HOOKUP_OBJECT (obser_stat2, montaha4, "montaha4");

  return obser_stat2;
}

GtkWidget*
create_obser_stat3 (void)
{
  GtkWidget *obser_stat3;
  GtkWidget *fixed3;
  GtkWidget *montaha6;
  GtkWidget *montaha7;
  GtkWidget *mont5;

  obser_stat3 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (obser_stat3), _("window3"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (obser_stat3), fixed3);

  montaha6 = gtk_label_new (_("Le taux des observateurs nationaux"));
  gtk_widget_show (montaha6);
  gtk_fixed_put (GTK_FIXED (fixed3), montaha6, 56, 48);
  gtk_widget_set_size_request (montaha6, 288, 88);

  montaha7 = gtk_label_new (_("nb nationaux/ nb total observateurs"));
  gtk_widget_show (montaha7);
  gtk_fixed_put (GTK_FIXED (fixed3), montaha7, 80, 128);
  gtk_widget_set_size_request (montaha7, 264, 80);

  mont5 = gtk_button_new_with_mnemonic (_("quitter"));
  gtk_widget_show (mont5);
  gtk_fixed_put (GTK_FIXED (fixed3), mont5, 144, 240);
  gtk_widget_set_size_request (mont5, 66, 29);

  g_signal_connect ((gpointer) mont5, "clicked",
                    G_CALLBACK (on_button5_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (obser_stat3, obser_stat3, "obser_stat3");
  GLADE_HOOKUP_OBJECT (obser_stat3, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (obser_stat3, montaha6, "montaha6");
  GLADE_HOOKUP_OBJECT (obser_stat3, montaha7, "montaha7");
  GLADE_HOOKUP_OBJECT (obser_stat3, mont5, "mont5");

  return obser_stat3;
}

GtkWidget*
create_obser_stat4 (void)
{
  GtkWidget *obser_stat4;
  GtkWidget *fixed4;
  GtkWidget *montaha8;
  GtkWidget *montaha9;
  GtkWidget *mont6;

  obser_stat4 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (obser_stat4), _("window4"));

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (obser_stat4), fixed4);

  montaha8 = gtk_label_new (_("le taux des observateurs \303\251trangers"));
  gtk_widget_show (montaha8);
  gtk_fixed_put (GTK_FIXED (fixed4), montaha8, 72, 24);
  gtk_widget_set_size_request (montaha8, 296, 104);

  montaha9 = gtk_label_new (_("nb \303\251trangers/ nb total observateurs"));
  gtk_widget_show (montaha9);
  gtk_fixed_put (GTK_FIXED (fixed4), montaha9, 96, 128);
  gtk_widget_set_size_request (montaha9, 256, 80);

  mont6 = gtk_button_new_with_mnemonic (_("quitter"));
  gtk_widget_show (mont6);
  gtk_fixed_put (GTK_FIXED (fixed4), mont6, 176, 208);
  gtk_widget_set_size_request (mont6, 66, 29);

  g_signal_connect ((gpointer) mont6, "clicked",
                    G_CALLBACK (on_button6_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (obser_stat4, obser_stat4, "obser_stat4");
  GLADE_HOOKUP_OBJECT (obser_stat4, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (obser_stat4, montaha8, "montaha8");
  GLADE_HOOKUP_OBJECT (obser_stat4, montaha9, "montaha9");
  GLADE_HOOKUP_OBJECT (obser_stat4, mont6, "mont6");

  return obser_stat4;
}

