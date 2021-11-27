# QTK
Uma prova de conceito para mostrar como rodar código nativo GTK dentro do Qt Framework :)

# Como isso funciona?
Basicamente traduz chamadas GTK para Qt, por exemplo:

```CPP
GtkWidget*button = gtk_button_new_with_label ("Hello World");
```

Faz uma chamada para:

```CPP
#include <QPushButton>
GtkWidget*gtk_button_new_with_label(QString label){
    QPushButton *btn = new QPushButton();
    btn->setText(label);
    return btn;
}
```

O GtkWidget é apenas um `typedef` para `QWidget`

```CPP
#include <QWidget>

typedef QWidget GtkWidget;
```

E é isso!

# Compilando

Abra o arquivo `QTK-demo.pro` no `Qt Creator`e mande compilar, vc verá código GTK sendo executado através das bibliotecas Qt puras

# Aviso importante

Esse projeto foi feito por diversão pra fazer referência ao QTK da [pegadinha de primeiro de Abril KNOME](https://medium.com/linux-plus-plus/the-best-of-both-worlds-knome-176f19202769)
