#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "gfx.h"

int win;
int lost;
int Level1();
int Level2();
int Level3();
void stats();
void game();
void MainMenu();


void game(){
	while(1) {
        MainMenu();
        char c = gfx_wait();
        if(c==27) break;
	}
}

void MainMenu(){
    gfx_clear();
    // Set the current drawing color to green.
    gfx_color(200,10,20);
	// Draw a triangle on the screen.
	int rect = 250;
	int recty = 600;
	int mousex = 0;
	int mousey = 0;

	//GAME NAME
    gfx_color(255,255,255);
    gfx_text(300, 100, "GUESS IT!");
	//Draw the level buttons
	//Menu and buttons
	gfx_color(50,117,168);
    gfx_fillrectangle(250, 200, 200, 50);
    gfx_color(255,255,255);
    gfx_text(320, 230, "Level 1");
    gfx_color(200,10,20);
    gfx_fillrectangle(250, 280, 200, 50);
    gfx_color(255,255,255);
    gfx_text(320, 310, "Level 2");
    gfx_color(255,94,212);
    gfx_fillrectangle(250, 360, 200, 50);
    gfx_color(255,255,255);
    gfx_text(320, 390, "Level 3");
    gfx_color(150,94,212);
    gfx_fillrectangle(250, 440, 200, 50);
    gfx_color(255,255,255);
    gfx_text(300, 470, "Game Stats");

    gfx_color(255,255,255);
    gfx_text(260, 600, "Press Esc to quit!");
    int x = gfx_xpos();
    int y = gfx_ypos();

    //Click Event
    if(x>=250 && x<=450 && y>=200 && y<=250){
        x = 0;
        y = 0;
        if(Level1()) win++;
        else lost++;
        char c = gfx_wait();
    }
    else if(x>=250 && x<=450 && y>=280 && y<=330){
        x = 0;
        y = 0;
        if(Level2()) win++;
        else lost++;
        char c = gfx_wait();
    }
    else if(x>=250 && x<=450 && y>=360 && y<=410){
        x = 0;
        y = 0;
        if(Level3()) win++;
        else lost++;
        char c = gfx_wait();
    }
    else if(x>=250 && x<=450 && y>=440 && y<=490){
        x = 0;
        y = 0;
        stats();
    }
}

void stats(){
    //show statistics
    char c = 0;
    char wnum[20];
    char winnum[3];
    char lnum[20];
    char lostnum[3];
    while(1){
        gfx_clear();
        gfx_color(255,255,255);
        strcpy(wnum, "Games won : ");
        sprintf(winnum,"%d",win);
        strcat(wnum, winnum);
        gfx_text(280, 200, wnum);
        strcpy(lnum, "Games lost : ");
        sprintf(lostnum,"%d",lost);
        strcat(lnum, lostnum);
        gfx_text(280, 400, lnum);
        gfx_text(260, 600, "Press Esc to quit!");
        c = gfx_wait();
        if(c==27) break;
    }
    MainMenu();
}

void drawl1(int on[10], bool done[10]){
                if(on[0]==1 || done[0]){
                    gfx_color(255,100,100);
                    gfx_fillrectangle(80, 200, 100, 100);
                }
                else{
                    gfx_rectangle(80, 200, 100, 100);
                }

                if(on[1]==1 || done[1]){
                    gfx_color(255,200,100);
                    gfx_fillrectangle(190, 200, 100, 100);
                }
                else{
                    gfx_rectangle(190, 200, 100, 100);
                }

                //
                if(on[2]==1 || done[2]){
                    gfx_color(100, 200, 100);
                    gfx_fillrectangle(300, 200, 100, 100);
                }
                else{
                    gfx_rectangle(300, 200, 100, 100);
                }
                if(on[3]==1 || done[3]){
                    gfx_color(100, 200, 100);
                    gfx_fillrectangle(410, 200, 100, 100);
                }
                else{
                    gfx_rectangle(410, 200, 100, 100);
                }

                if(on[4]==1 || done[4]){
                    gfx_color(10,100,100);
                    gfx_fillrectangle(520, 200, 100, 100);
                }
                else{
                    gfx_rectangle(520, 200, 100, 100);
                }

                if(on[5]==1 || done[5]){
                    gfx_color(100,100,200);
                    gfx_fillrectangle(80, 310, 100, 100);
                }
                else{
                    gfx_rectangle(80, 310, 100, 100);
                }

                if(on[6]==1 || done[6]){
                    gfx_color(255,100,100);
                    gfx_fillrectangle(190, 310, 100, 100);
                }
                else{
                    gfx_rectangle(190, 310, 100, 100);
                }

                if(on[7]==1 || done[7]){
                    gfx_color(100,100,200);
                    gfx_fillrectangle(300, 310, 100, 100);
                }
                else{
                    gfx_rectangle(300, 310, 100, 100);
                }

                if(on[8]==1 || done[8]){
                    gfx_color(10,100,100);
                    gfx_fillrectangle(410, 310, 100, 100);
                }
                else{
                    gfx_rectangle(410, 310, 100, 100);
                }

                if(on[9]==1 || done[9]){
                    gfx_color(255,200,100);
                    gfx_fillrectangle(520, 310, 100, 100);
                }
                else{
                    gfx_rectangle(520, 310, 100, 100);
                }
}

void drawl2(int on[12], bool done[12]){
                if(on[0]==1 || done[0]){
                    gfx_color(255,100,100);
                    gfx_fillrectangle(120, 200, 100, 100);
                }
                else{
                    gfx_rectangle(120, 200, 100, 100);
                }

                if(on[1]==1 || done[1]){
                    gfx_color(255,200,100);
                    gfx_fillrectangle(230, 200, 100, 100);
                }
                else{
                    gfx_rectangle(230, 200, 100, 100);
                }

                //
                if(on[2]==1 || done[2]){
                    gfx_color(140, 210, 10);
                    gfx_fillrectangle(340, 200, 100, 100);
                }
                else{
                    gfx_rectangle(340, 200, 100, 100);
                }
                if(on[3]==1 || done[3]){
                    gfx_color(40,75,80);
                    gfx_fillrectangle(450, 200, 100, 100);
                }
                else{
                    gfx_rectangle(450, 200, 100, 100);
                }

                if(on[4]==1 || done[4]){
                    gfx_color(255,100,100);
                    gfx_fillrectangle(120, 310, 100, 100);
                }
                else{
                    gfx_rectangle(120, 310, 100, 100);
                }

                if(on[5]==1 || done[5]){
                    gfx_color(40,75,80);
                    gfx_fillrectangle(230, 310, 100, 100);
                }
                else{
                    gfx_rectangle(230, 310, 100, 100);
                }

                if(on[6]==1 || done[6]){
                    gfx_color(80,80,50);
                    gfx_fillrectangle(340, 310, 100, 100);
                }
                else{
                    gfx_rectangle(340, 310, 100, 100);
                }

                if(on[7]==1 || done[7]){
                    gfx_color(100, 200, 100);
                    gfx_fillrectangle(450, 310, 100, 100);
                }
                else{
                    gfx_rectangle(450, 310, 100, 100);
                }

                if(on[8]==1 || done[8]){
                    gfx_color(255,200,100);
                    gfx_fillrectangle(120, 420, 100, 100);
                }
                else{
                    gfx_rectangle(120, 420, 100, 100);
                }

                if(on[9]==1 || done[9]){
                    gfx_color(100, 200, 100);
                    gfx_fillrectangle(230, 420, 100, 100);
                }
                else{
                    gfx_rectangle(230, 420, 100, 100);
                }

                if(on[10]==1 || done[10]){
                    gfx_color(140, 210, 10);
                    gfx_fillrectangle(340, 420, 100, 100);
                }
                else{
                    gfx_rectangle(340, 420, 100, 100);
                }

                if(on[11]==1 || done[11]){
                    gfx_color(80,80,50);
                    gfx_fillrectangle(450, 420, 100, 100);
                }
                else{
                    gfx_rectangle(450, 420, 100, 100);
                }
}

void drawl3(int on[12], bool done[12]){
                if(on[0]==1 || done[0]){
                    gfx_color(255,100,100);
                    gfx_fillrectangle(120, 200, 100, 100);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(120, 200, 100, 100);
                }

                if(on[1]==1 || done[1]){
                    gfx_color(255,200,100);
                    gfx_fillrectangle(230, 200, 100, 100);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(230, 200, 100, 100);
                }

                //
                if(on[2]==1 || done[2]){
                    gfx_color(140, 210, 10);
                    gfx_fillrectangle(340, 200, 100, 100);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(340, 200, 100, 100);
                }
                if(on[3]==1 || done[3]){
                    gfx_color(40,75,80);
                    gfx_fillrectangle(450, 200, 100, 100);
                    gfx_color(0,0,0);
                    gfx_fillrectangle(450, 200, 40, 40);
                    gfx_fillrectangle(510, 260, 40, 40);
                    gfx_fillrectangle(450, 260, 40, 40);
                    gfx_fillrectangle(510, 200, 40, 40);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(450, 200, 100, 100);
                }

                if(on[4]==1 || done[4]){
                    gfx_color(255,100,100);
                    gfx_fillcircle(170, 360, 100);
                    gfx_color(0,0,0);
                    gfx_fillcircle(150, 400, 100);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(120, 310, 100, 100);
                }

                if(on[5]==1 || done[5]){
                    gfx_color(40,75,80);
                    gfx_fillrectangle(230, 310, 100, 100);
                    gfx_color(0,0,0);
                    gfx_fillrectangle(230, 310, 40, 40);
                    gfx_fillrectangle(290, 310, 40, 40);
                    gfx_fillrectangle(290, 370, 40, 40);
                    gfx_fillrectangle(230, 370, 40, 40);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(230, 310, 100, 100);
                }

                if(on[6]==1 || done[6]){
                    gfx_color(80,80,50);
                    gfx_fillrectangle(340, 310, 100, 100);
                    gfx_color(0,0,0);
                    gfx_fillrectangle(340, 310, 100, 40);
                    gfx_fillrectangle(340, 370, 100, 40);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(340, 310, 100, 100);
                }

                if(on[7]==1 || done[7]){
                    gfx_color(100, 200, 100);
                    gfx_fillrectangle(450, 310, 100, 100);
                    gfx_color(0,0,0);
                    gfx_fillcircle(500, 360, 80);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(450, 310, 100, 100);
                }

                if(on[8]==1 || done[8]){
                    gfx_color(255,200,100);
                    gfx_fillrectangle(120, 420, 100, 100);
                    gfx_color(0,0,0);
                    gfx_fillcircle(170, 450, 50);
                    gfx_fillcircle(170, 490, 50);
                    gfx_fillcircle(140, 470, 50);
                    gfx_fillcircle(200, 470, 50);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(120, 420, 100, 100);
                }

                if(on[9]==1 || done[9]){
                    gfx_color(100, 200, 100);
                    gfx_fillrectangle(230, 420, 100, 100);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(230, 420, 100, 100);
                }

                if(on[10]==1 || done[10]){
                    gfx_color(140, 210, 10);
                    gfx_fillcircle(390, 480, 70);
                    gfx_fillcircle(365, 455, 40);
                    gfx_fillcircle(415, 455, 40);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(340, 420, 100, 100);
                }

                if(on[11]==1 || done[11]){
                    gfx_color(80,80,50);
                    gfx_fillrectangle(450, 420, 100, 100);
                }
                else{
                    gfx_color(255,255,255);
                    gfx_rectangle(450, 420, 100, 100);
                }
}



int Level1(){
        //generate a random number
        char color[50];
        int on[10];
        gfx_clear();
        int point = 0;
        int chance = 5;
        char text[30];
        char num[2];
        int arr[10] = {1,1,1,1,1,1,1,1,1,1};
        bool arr2[10] = {1,1,1,1,1,1,1,1,1,1};
        int sec = 5;
        for(long long j = 0; j < 1e4*sec; j++){
            gfx_color(255,255,255);
            gfx_text(300, 50, "MEMORIZE THIS!");
            drawl1(arr,arr2);
        }
        //game loop
        while(1){
            char c = 0;
            int clicks = 0;
            bool done[10];
            for(int i = 0; i < 10; i++) done[i] = false;
            int prev = 6;
            bool ok = false; //won or lost
            while(c != 27){
                gfx_clear();
                strcpy(text,"Tries left : ");
                sprintf(num,"%d",chance);
                strcat(text, num);

                gfx_color(255,255,255);
                gfx_text(300,50,text);
                //Shapes and colors
                if(clicks==0){
                    memset(on,0,sizeof(on));
                }
                drawl1(on,done);
                c = gfx_wait();
                int x = gfx_xpos();
                int y = gfx_ypos();
                if(c==27) break;
                //click event for the color guessing
                if(x>=80 && x<=180 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 6){
                            done[0]=true;
                            done[6]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[0] = 1;
                        prev = 0;
                    }
                }
                else if(x>=190 && x<=290 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 9){
                            done[1]=true;
                            done[9]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[1] = 1;
                        prev = 1;
                    }
                }
                else if(x>=300 && x<=400 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 3){
                            done[3]=true;
                            done[2]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[2] = 1;
                        prev = 2;
                    }
                }
                else if(x>=410 && x<=510 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 2){
                            done[2]=true;
                            done[3]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[3] = 1;
                        prev = 3;
                    }
                }
                else if(x>=520 && x<=620 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 8){
                            done[4]=true;
                            done[8]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[4] = 1;
                        prev = 4;
                    }
                }
                else if(x>=80 && x<=180 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 7){
                            done[5]=true;
                            done[7]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[5] = 1;
                        prev = 5;
                    }
                }
                else if(x>=190 && x<=290 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 0){
                            done[0]=true;
                            done[6]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[6] = 1;
                        prev = 6;
                    }
                }
                else if(x>=300 && x<=400 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 5){
                            done[7]=true;
                            done[5]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[7] = 1;
                        prev = 7;
                    }
                }
                else if(x>=410 && x<=510 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 4){
                            done[4]=true;
                            done[8]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[8] = 1;
                        prev = 8;
                    }
                }
                else if(x>=520 && x<=620 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 1){
                            done[1]=true;
                            done[9]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[9] = 1;
                        prev = 9;
                    }
                }
                if(point==5){
                    ok = true;
                    break;
                }
                if(chance==0){
                    break;
                }
            }

            //Final message display
            if(!ok){
                gfx_clear();
                gfx_color(255,255,255);
                gfx_text(300, 100, "Game Over!");
                gfx_color(150,20,20);
                gfx_fillrectangle(100, 550, 500, 50);
                gfx_color(255,255,255);
                gfx_text(200, 580, "Please Click here to return");
                return 0;
            }
            if(ok){
                gfx_clear();
                gfx_color(255,255,255);
                gfx_text(300, 100, "You've won!");
                gfx_color(150,20,20);
                gfx_fillrectangle(100, 550, 500, 50);
                gfx_color(255,255,255);
                gfx_text(200, 580, "Please Click here to return");
                return 1 + Level2();
            }
    }
    return 0;
}

int Level2(){
    //generate a random number
        char color[50];
        int on[12];
        gfx_clear();
        int point = 0;
        int chance = 5;
        char text[30];
        char num[2];
        int arr[12] = {1,1,1,1,1,1,1,1,1,1,1,1};
        bool arr2[12] = {1,1,1,1,1,1,1,1,1,1,1,1};
        int sec = 5;
        for(long long j = 0; j < 1e4*sec; j++){
            gfx_color(255,255,255);
            gfx_text(275, 50, "MEMORIZE THIS!");
            drawl2(arr,arr2);
        }
        //game loop
        while(1){
            char c = 0;
            int clicks = 0;
            bool done[12];
            for(int i = 0; i < 12; i++) done[i] = false;
            int prev = 100;
            bool ok = false; //won or lost
            while(c != 27){
                gfx_clear();
                strcpy(text,"Tries left : ");
                sprintf(num,"%d",chance);
                strcat(text, num);

                gfx_color(255,255,255);
                gfx_text(300,50,text);
                //Shapes and colors
                if(clicks==0){
                    memset(on,0,sizeof(on));
                }
                drawl2(on,done);
                c = gfx_wait();
                int x = gfx_xpos();
                int y = gfx_ypos();
                if(c==27) break;
                //click event for the color guessing
                if(x>=120 && x<=220 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 4){
                            done[4]=true;
                            done[0]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[0] = 1;
                        prev = 0;
                    }
                }
                else if(x>=230 && x<=330 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 8){
                            done[1]=true;
                            done[8]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[1] = 1;
                        prev = 1;
                    }
                }
                else if(x>=340 && x<=440 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 10){
                            done[10]=true;
                            done[2]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[2] = 1;
                        prev = 2;
                    }
                }
                else if(x>=450 && x<=550 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 5){
                            done[5]=true;
                            done[3]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[3] = 1;
                        prev = 3;
                    }
                }
                else if(x>=120 && x<=220 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 0){
                            done[4]=true;
                            done[0]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[4] = 1;
                        prev = 4;
                    }
                }
                else if(x>=230 && x<=330 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 3){
                            done[5]=true;
                            done[3]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[5] = 1;
                        prev = 5;
                    }
                }
                else if(x>=340 && x<=440 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 11){
                            done[11]=true;
                            done[6]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[6] = 1;
                        prev = 6;
                    }
                }
                else if(x>=450 && x<=550 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 9){
                            done[9]=true;
                            done[7]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[7] = 1;
                        prev = 7;
                    }
                }
                else if(x>=120 && x<=220 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 1){
                            done[1]=true;
                            done[8]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[8] = 1;
                        prev = 8;
                    }
                }
                else if(x>=230 && x<=330 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 7){
                            done[7]=true;
                            done[9]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[9] = 1;
                        prev = 9;
                    }
                }
                else if(x>=340 && x<=440 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 2){
                            done[10]=true;
                            done[2]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[10] = 1;
                        prev = 10;
                    }
                }
                else if(x>=450 && x<=550 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 6){
                            done[6]=true;
                            done[11]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[11] = 1;
                        prev = 11;
                    }
                }
                if(point==6){
                    ok = true;
                    break;
                }
                if(chance==0){
                    break;
                }
            }

            //Final message display
            if(!ok){
                gfx_clear();
                gfx_color(255,255,255);
                gfx_text(300, 100, "Game Over!");
                gfx_color(150,20,20);
                gfx_fillrectangle(100, 550, 500, 50);
                gfx_color(255,255,255);
                gfx_text(200, 580, "Please Click here to return");
                return 0;
            }
            if(ok){
                gfx_clear();
                gfx_color(255,255,255);
                gfx_text(300, 100, "You've won!");
                gfx_color(150,20,20);
                gfx_fillrectangle(100, 550, 500, 50);
                gfx_color(255,255,255);
                gfx_text(200, 580, "Please Click here to return");
                return 1+Level3();
            }
    }
    return 0;
}

int Level3(){
    //generate a random number
        char color[50];
        int on[12];
        gfx_clear();
        int point = 0;
        int chance = 5;
        char text[30];
        char num[2];
        int arr[12] = {1,1,1,1,1,1,1,1,1,1,1,1};
        bool arr2[12] = {1,1,1,1,1,1,1,1,1,1,1,1};
        int sec = 5;
        for(long long j = 0; j < 1e4*sec; j++){
            gfx_color(255,255,255);
            gfx_text(275, 50, "MEMORIZE THIS!");
            drawl3(arr,arr2);
        }
        //game loop
        while(1){
            char c = 0;
            int clicks = 0;
            bool done[12];
            for(int i = 0; i < 12; i++) done[i] = false;
            int prev = 100;
            bool ok = false; //won or lost
            while(c != 27){
                gfx_clear();
                strcpy(text,"Tries left : ");
                sprintf(num,"%d",chance);
                strcat(text, num);

                gfx_color(255,255,255);
                gfx_text(300,50,text);
                //Shapes and colors
                if(clicks==0){
                    memset(on,0,sizeof(on));
                }
                drawl3(on,done);
                c = gfx_wait();
                int x = gfx_xpos();
                int y = gfx_ypos();
                if(c==27) break;
                //click event for the color guessing
                if(x>=120 && x<=220 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 4){
                            done[4]=true;
                            done[0]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[0] = 1;
                        prev = 0;
                    }
                }
                else if(x>=230 && x<=330 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 8){
                            done[1]=true;
                            done[8]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[1] = 1;
                        prev = 1;
                    }
                }
                else if(x>=340 && x<=440 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 10){
                            done[10]=true;
                            done[2]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[2] = 1;
                        prev = 2;
                    }
                }
                else if(x>=450 && x<=550 && y>=200 && y<=300){
                    clicks++;
                    if(clicks==2){
                        if(prev == 5){
                            done[5]=true;
                            done[3]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[3] = 1;
                        prev = 3;
                    }
                }
                else if(x>=120 && x<=220 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 0){
                            done[4]=true;
                            done[0]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[4] = 1;
                        prev = 4;
                    }
                }
                else if(x>=230 && x<=330 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 3){
                            done[5]=true;
                            done[3]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[5] = 1;
                        prev = 5;
                    }
                }
                else if(x>=340 && x<=440 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 11){
                            done[11]=true;
                            done[6]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[6] = 1;
                        prev = 6;
                    }
                }
                else if(x>=450 && x<=550 && y>=310 && y<=410){
                    clicks++;
                    if(clicks==2){
                        if(prev == 9){
                            done[9]=true;
                            done[7]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[7] = 1;
                        prev = 7;
                    }
                }
                else if(x>=120 && x<=220 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 1){
                            done[1]=true;
                            done[8]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[8] = 1;
                        prev = 8;
                    }
                }
                else if(x>=230 && x<=330 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 7){
                            done[7]=true;
                            done[9]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[9] = 1;
                        prev = 9;
                    }
                }
                else if(x>=340 && x<=440 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 2){
                            done[10]=true;
                            done[2]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[10] = 1;
                        prev = 10;
                    }
                }
                else if(x>=450 && x<=550 && y>=420 && y<=520){
                    clicks++;
                    if(clicks==2){
                        if(prev == 6){
                            done[6]=true;
                            done[11]=true;
                            point++;
                        }
                        else{
                            chance--;
                        }
                        clicks=0;
                    }
                    else{
                        on[11] = 1;
                        prev = 11;
                    }
                }
                if(point==6){
                    ok = true;
                    break;
                }
                if(chance==0){
                    break;
                }
            }

            //Final message display
            if(!ok){
                gfx_clear();
                gfx_color(255,255,255);
                gfx_text(300, 100, "Game Over!");
                gfx_color(150,20,20);
                gfx_fillrectangle(100, 550, 500, 50);
                gfx_color(255,255,255);
                gfx_text(200, 580, "Please Click here to return");
                return 0;
            }
            if(ok){
                gfx_clear();
                gfx_color(255,255,255);
                gfx_text(300, 100, "You've won!");
                gfx_color(150,20,20);
                gfx_fillrectangle(100, 550, 500, 50);
                gfx_color(255,255,255);
                gfx_text(200, 580, "Please Click here to return");
                return 1;
            }
    }
    return 0;
}

int main()
{
	int ysize = 700;
	int xsize = 700;
    FILE *fp;
    fp = fopen("score.txt", "r");
    fscanf(fp, "%d",&win);
    fscanf(fp, "%d",&lost);
    fclose(fp);
	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Game Project");
    game();
    fp = fopen("score.txt", "w");
    fprintf(fp,"%d\n",win);
    fprintf(fp,"%d\n",lost);
    fclose(fp);
	return 0;
}
