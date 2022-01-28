#include <gtk/gtk.h>
int m,k;

typedef struct
{
    int jour;
    int mois;
    int annee;

}Date;

typedef struct 
{ 
char id[200] ; 
char NOM[200];
char Prenom[200];
char CIN[200];
char Mail[200];
char chambre[200];
char sexe[200];
Date dt_ns;

}foyer;

void Ajouter_ch(foyer o);
void supp_ch(char id[]);
void modi_ch(char id[],foyer o);
foyer rechercher_foyer(char id[]);
void affi_ch(GtkWidget* treeview1,char*l);
void affi_ad_ch(GtkWidget* treeview6,char*l);

 





