#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->update_use = new QTimer(this);
    this->Change_wid = new QTimer(this);
    connect(this->update_use, SIGNAL(timeout()), this, SLOT(update_Use_Persend()));
    connect(this->Change_wid, SIGNAL(timeout()), this, SLOT(update_Change_Wid()));
    this->Change_wid->start(50);
    this->update_use->start(1000);
    info_Manager = Info_Manager::getInstance();
    ui->Cpu_use->setText(info_Manager->cpu_info(0));
    ui->Mem_use->setText(info_Manager->mem_info());

    vector<Node_Pid> v = info_Manager->Pics_dir();
    ui->Thread->setText("进程数："+ QString::number(v.size()));

    ui->l1->setAlignment(Qt::AlignCenter);
    ui->l2->setAlignment(Qt::AlignCenter);
    ui->l3->setAlignment(Qt::AlignCenter);
    ui->l4->setAlignment(Qt::AlignCenter);

    ui->opentime->setText(this->info_Manager->get_uptime());
    ui->version->setText(this->info_Manager->get_version());
    ui->username->setText(this->info_Manager->get_Hostname());

    pLayout = new QGridLayout();

    int nums = v.size();
    //QString time, pid;
    /*QString name;
    QString VMsize;*/
    for(int i=0; i<nums; i++){
        QLabel  *time = new QLabel();
        QLabel *pid = new QLabel();
        QLabel *vmsize = new QLabel();
        QLabel *name = new QLabel();

        time->setText(v[i].time);
        pid->setText(v[i].pid);
        vmsize->setText(v[i].VMsize);
        name->setText(v[i].name);

        time->setAlignment(Qt::AlignCenter);
        pid->setAlignment(Qt::AlignCenter);
        vmsize->setAlignment(Qt::AlignCenter);
        name->setAlignment(Qt::AlignCenter);

        pLayout->addWidget(time, i, 3, 1, 1);
        pLayout->addWidget(pid, i, 1, 1, 1);
        pLayout->addWidget(vmsize, i, 2, 1, 1);
        pLayout->addWidget(name, i, 0, 1, 1);
    }
    ui->scrollArea->widget()->setLayout(pLayout);
}

void MainWindow::update_Use_Persend(){
    ui->Cpu_use->setText(info_Manager->cpu_info(0));
    ui->Mem_use->setText(info_Manager->mem_info());
    vector<Node_Pid> v = info_Manager->Pics_dir();
    ui->Thread->setText("进程数："+ QString::number(v.size()));

    QLayoutItem *item;
    while((item = pLayout->takeAt(0) )!= 0){
        if(item->widget()){
            delete item->widget();
        }
        delete item;
    }

    int nums = v.size();
    //QString time, pid;
    /*QString name;
    QString VMsize;*/
    for(int i=0; i<nums; i++){
        QLabel  *time = new QLabel();
        QLabel *pid = new QLabel();
        QLabel *vmsize = new QLabel();
        QLabel *name = new QLabel();

        time->setText(v[i].time);
        pid->setText(v[i].pid);
        vmsize->setText(v[i].VMsize);
        name->setText(v[i].name);

        time->setAlignment(Qt::AlignCenter);
        pid->setAlignment(Qt::AlignCenter);
        vmsize->setAlignment(Qt::AlignCenter);
        name->setAlignment(Qt::AlignCenter);

        pLayout->addWidget(time, i, 3, 1, 1);
        pLayout->addWidget(pid, i, 1, 1, 1);
        pLayout->addWidget(vmsize, i, 2, 1, 1);
        pLayout->addWidget(name, i, 0, 1, 1);
    }


}

void MainWindow::update_Change_Wid(){
    int w  = this->size().width();
    int h = this->size().height();

    ui->scrollArea->resize(w, h/10*7);
    ui->scrollArea->move(0, h/10);

    ui->Thread->move(0, h/10*8 + 15);
    ui->Mem_use->move( w/10*2, h/10*8 + 15);
    ui->Cpu_use->move(w/10 * 6, h/10*8 + 15);

    ui->l1->resize(w/4, h/10);
    ui->l2->resize(w/4, h/10);
    ui->l3->resize(w/4, h/10);
    ui->l4->resize(w/4, h/10);

    ui->l1->move(0, 0);
    ui->l2->move(w/4, 0);
    ui->l3->move(w/2, 0);
    ui->l4->move(w/4*3, 0);

    ui->username->move(0, h/10*8);
    ui->version->move(w/5, h/10*8);
    ui->opentime->move(w/10 * 6, h/10*8);
}

MainWindow::~MainWindow()
{
    delete ui;
}
