#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
void MainWindow::question_creator()
{
                q[0]="0Which is the brightest planet in the solar system? \n a. sun \n b. jupiter \n c. venus \n d.mars \n";
                a[0]='c';
                q[1]="0What is the name of Nepal's 2nd president \na. KP OLI \n b. Ram Baran yadav \n c. Bidhya Devi Bhandari \n d. Sishir Bastola \n";
                a[1]='c';
                q[2]="0Which is the highest mountain in the world \n a. Sagarmatha \n b. Kanchanjung \n c. K2 \n d. Cho Olo \n";
                a[2]='a';
                q[3]="0How many rings are present on the logo of Olympic \na. 5\n b.6 \n c. 7 \n d. 8 \n";
                a[3]='a';
                q[4]="0Which is the most populated country in the world? \na. India \n b. Russia \n c. USA \n d. China";
                a[4]='d';
                q[5]="0What is the SI unit of magnetic flux? \n a. Gauss \n b. Watt \n c. Ampere \n d. Gauss \n";
                a[5]='d';
                q[6]="0Which team won EPL 2019-20? \n a. Chelsea \n b. Liverpool \n c. Totenham \n d. Manchester United \n";
                a[6]='b';
                q[7]="0What is the pH value of Water at normal temperature? \n a. 6 \n b. 7 \n c. 8\n d.9 \n" ;
                a[7]='b';
                q[8]="0Who is known as father of science? \n a. Albert Einstein \n b. Issac Newton \n c. Gallileo Gallielo \n d. Charles Babbage \n";
                a[8]='c';
                q[9]="0Who wrote the first hello world program? \n a.Brian Kernighan \n b. Bjarne Stroutsop \n c. Wang Lee \n d. Dennis Ritchie \n";
                a[9]='d';
                srand (time(NULL));
                this->i=rand()%10;
                ui->textEdit->setText(q[i]);
                level++;



}

void MainWindow::question_creator1()
{

                q[0]="Which is the brightest planet in the solar system? \n a. sun \n b. jupiter \n c. venus \n d.mars \n";
                a[0]='c';
                q[1]="What is the name of Nepal's 2nd president \na. KP OLI \n b. Ram Baran yadav \n c. Bidhya Devi Bhandari \n d. Sishir Bastola \n";
                a[1]='c';
                q[2]="Which is the highest mountain in the world \n a. Sagarmatha \n b. Kanchanjung \n c. K2 \n d. Cho Olo \n";
                a[2]='a';
                q[3]="How many rings are present on the logo of Olympic \na. 5\n b.6 \n c. 7 \n d. 8 \n";
                a[3]='a';
                q[4]="Which is the most populated country in the world? \na. India \n b. Russia \n c. USA \n d. China";
                a[4]='d';
                q[5]="What is the SI unit of magnetic flux? \n a. Gauss \n b. Watt \n c. Ampere \n d. Gauss \n";
                a[5]='d';
                q[6]="Which team won EPL 2019-20? \n a. Chelsea \n b. Liverpool \n c. Totenham \n d. Manchester United \n";
                a[6]='b';
                q[7]="What is the pH value of Water at normal temperature? \n a. 6 \n b. 7 \n c. 8\n d.9 \n" ;
                a[7]='b';
                q[8]="Who is known as father of science? \n a. Albert Einstein \n b. Issac Newton \n c. Gallileo Gallielo \n d. Charles Babbage \n";
                a[8]='c';
                q[9]="Who wrote the first hello world program? \n a.Brian Kernighan \n b. Bjarne Stroutsop \n c. Wang Lee \n d. Dennis Ritchie \n";
                a[9]='d';
                srand (time(NULL));
                this->i=rand()%10;
                ui->textEdit->setText(q[i]);
                level++;




}

void MainWindow::question_creator2()
{

                q[0]="Which is the brightest planet in the solar system? \n a. sun \n b. jupiter \n c. venus \n d.mars \n";
                a[0]='c';
                q[1]="What is the name of Nepal's 2nd president \na. KP OLI \n b. Ram Baran yadav \n c. Bidhya Devi Bhandari \n d. Sishir Bastola \n";
                a[1]='c';
                q[2]="Which is the highest mountain in the world \n a. Sagarmatha \n b. Kanchanjung \n c. K2 \n d. Cho Olo \n";
                a[2]='a';
                q[3]="How many rings are present on the logo of Olympic \na. 5\n b.6 \n c. 7 \n d. 8 \n";
                a[3]='a';
                q[4]="Which is the most populated country in the world? \na. India \n b. Russia \n c. USA \n d. China";
                a[4]='d';
                q[5]="What is the SI unit of magnetic flux? \n a. Gauss \n b. Watt \n c. Ampere \n d. Gauss \n";
                a[5]='d';
                q[6]="Which team won EPL 2019-20? \n a. Chelsea \n b. Liverpool \n c. Totenham \n d. Manchester United \n";
                a[6]='b';
                q[7]="What is the pH value of Water at normal temperature? \n a. 6 \n b. 7 \n c. 8\n d.9 \n" ;
                a[7]='b';
                q[8]="Who is known as father of science? \n a. Albert Einstein \n b. Issac Newton \n c. Gallileo Gallielo \n d. Charles Babbage \n";
                a[8]='c';
                q[9]="Who wrote the first hello world program? \n a.Brian Kernighan \n b. Bjarne Stroutsop \n c. Wang Lee \n d. Dennis Ritchie \n";
                a[9]='d';
                srand (time(NULL));
                this->i=rand()%10;
                ui->textEdit->setText(q[i]);
                level++;



}

void MainWindow::question_creator3()
{

                q[0]="Which is the brightest planet in the solar system? \n a. sun \n b. jupiter \n c. venus \n d.mars \n";
                a[0]='c';
                q[1]="What is the name of Nepal's 2nd president \na. KP OLI \n b. Ram Baran yadav \n c. Bidhya Devi Bhandari \n d. Sishir Bastola \n";
                a[1]='c';
                q[2]="Which is the highest mountain in the world \n a. Sagarmatha \n b. Kanchanjung \n c. K2 \n d. Cho Olo \n";
                a[2]='a';
                q[3]="How many rings are present on the logo of Olympic \na. 5\n b.6 \n c. 7 \n d. 8 \n";
                a[3]='a';
                q[4]="Which is the most populated country in the world? \na. India \n b. Russia \n c. USA \n d. China";
                a[4]='d';
                q[5]="What is the SI unit of magnetic flux? \n a. Gauss \n b. Watt \n c. Ampere \n d. Gauss \n";
                a[5]='d';
                q[6]="Which team won EPL 2019-20? \n a. Chelsea \n b. Liverpool \n c. Totenham \n d. Manchester United \n";
                a[6]='b';
                q[7]="What is the pH value of Water at normal temperature? \n a. 6 \n b. 7 \n c. 8\n d.9 \n" ;
                a[7]='b';
                q[8]="Who is known as father of science? \n a. Albert Einstein \n b. Issac Newton \n c. Gallileo Gallielo \n d. Charles Babbage \n";
                a[8]='c';
                q[9]="Who wrote the first hello world program? \n a.Brian Kernighan \n b. Bjarne Stroutsop \n c. Wang Lee \n d. Dennis Ritchie \n";
                a[9]='d';
                srand (time(NULL));
                this->i=rand()%10;
                ui->textEdit->setText(q[i]);
                level++;



}

bool MainWindow::answer_checkor(){

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ok_clicked()
{
    if(level==1)
    {
    opt = ui->lineEdit_getoption->text();
    if (opt == a[i])
    {
        ui->label_answercheckor->setText("CORRECT");
        question_creator1();
        if(level == 2)
        {
            opt = ui->lineEdit_getoption->text();
        {if (opt == a[i])
        {
            ui->label_answercheckor->setText("CORRECT");
        }
        else
        {
            ui->label_answercheckor->setText("INCORRECT");

            exit(0);
        }

        }
        }
    }

    else
    {
        ui->label_answercheckor->setText("INcorrect")        ;
        exit(0);

    }

    }
}
/*
    if(level == 1)
    {
        t = answer_checkor();
    }

            while(t == true)
            {

            if(level==1)
            {question_creator1();
             t = answer_checkor();

            }
            }

            else if(level == 2)
            {
            question_creator2();
            t = answer_checkor();
            }

            else
            {
                ui->label_answercheckor->setText("PROGRAM IN DEVELOPING STAGE");
            }
       }

    }*/

