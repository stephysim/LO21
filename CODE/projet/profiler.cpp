#include "Profiler.h"
#include "UVEditeur.h"
#include "UTProfiler.h"
#include "affichage.h"
#include "CursusEditeur.h"
#include <QMenuBar>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>
#include <QStackedWidget>
#include <QTableView>
Profiler::Profiler(QWidget *parent):QMainWindow(parent){
    setWindowTitle("LO21 UTProfiler");
    centralWidget = new QWidget(this);
    this->setCentralWidget( centralWidget );
    QMenu* mFichier = menuBar()->addMenu("&Fichier");
    QMenu* mCharger=mFichier->addMenu("&Charger");
    QAction * actionChargerUV=mCharger->addAction("Catalogue UVs");
    QAction * actionChargerCursus=mCharger->addAction("Catalogue Cursus");
    QAction * actionChargerDossier=mCharger->addAction("Dossier");
    mFichier->addSeparator();
    QAction *actionQuitter = mFichier->addAction("&Quitter");
    QMenu* mEdition = menuBar()->addMenu("&Edition");
    QMenu* mUV=mEdition->addMenu("&UV");
    QAction * actionNewUV=mUV->addAction("Créer");
    QAction * actionChangeUV=mUV->addAction("Apporter des modifications");
    QMenu* mCursus=mEdition->addMenu("&Cursus");
    QAction * actionNewCursus=mCursus->addAction("Créer");
    QAction * actionChangeCursus=mCursus->addAction("Apporter des modifications");
    mEdition->addSeparator();
    QAction* actionDossier=mEdition->addAction("&Dossier");
    if(!connectDb()){
       qDebug()<<"failed";
    }
   /* try {
    stratSQL->connect();
    }catch(UTProfilerException& e){
    QMessageBox::warning(this, "Connexion", QString("connexion a la base de donnée impossible"));
    }
    */
    //connections
    connect(actionChargerUV, SIGNAL(triggered()),this,SLOT(openChargerUV()));
    connect(actionChargerCursus, SIGNAL(triggered()),this,SLOT(openChargerCursus()));
    connect(actionQuitter, SIGNAL(triggered()), qApp, SLOT(quit()));
    connect(actionNewUV, SIGNAL(triggered()),this,SLOT(NewUV()));
    connect(actionChangeUV, SIGNAL(triggered()),this,SLOT(ChangeUV()));
    connect(actionNewCursus, SIGNAL(triggered()),this,SLOT(NewCursus()));
    connect(actionChangeCursus, SIGNAL(triggered()),this,SLOT(ChangeCursus()));
}

void Profiler::quit(){
    //deconnect();
    //stratSQL->disconnect();
    //delete stratSQL;
}


void Profiler::NewUV(){
    UVEditeurNew* fenetre=new UVEditeurNew(mydb,this);
    this->setCentralWidget(fenetre);
}

void Profiler::ChangeUV(){

}

void Profiler::NewCursus(){
    //addcursus = new CursusEditeurNew( centralWidget );
    CursusEditeurNew* fenetre=new CursusEditeurNew(mydb,this);
    this->setCentralWidget(fenetre);
}

void Profiler::ChangeCursus(){
}

void Profiler::openChargerUV(){

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("SELECT code, titre, uvCategorie,nbCredits, saison  FROM UV");
         model->setHeaderData(0, Qt::Horizontal, tr("Code"));
         model->setHeaderData(1, Qt::Horizontal, tr("Titre"));
         model->setHeaderData(2, Qt::Horizontal, tr("Categorie"));
         model->setHeaderData(3, Qt::Horizontal, tr("Nombre de Credits"));
         model->setHeaderData(4, Qt::Horizontal, tr("Saison"));


         QTableView *view = new QTableView;
         view->setModel(model);
         view->show();

}



void Profiler::openChargerCursus(){
   /* QSqlQueryModel model;
         model.setQuery("SELECT * FROM Cursus");
         Qstring code = model.record(4).value("Code").toString();*/

    QSqlQueryModel *model = new QSqlQueryModel;
         model->setQuery("SELECT code, titre, duree,equivalence, codeUV, nbCS, nbTM, nbTSH, nbSP  FROM Cursus");
         model->setHeaderData(0, Qt::Horizontal, tr("Code"));
         model->setHeaderData(1, Qt::Horizontal, tr("Titre"));
         model->setHeaderData(2, Qt::Horizontal, tr("Duree en semestre"));
         model->setHeaderData(3, Qt::Horizontal, tr("Equivalence"));
         model->setHeaderData(4, Qt::Horizontal, tr("UV"));
         model->setHeaderData(5, Qt::Horizontal, tr("Credits CS"));
         model->setHeaderData(6, Qt::Horizontal, tr("Credits TM"));
         model->setHeaderData(7, Qt::Horizontal, tr("Credits TSH"));
         model->setHeaderData(8, Qt::Horizontal, tr("Credits SP"));


         QTableView *view = new QTableView;
         view->setModel(model);
         view->show();


}

