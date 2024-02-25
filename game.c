#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h>
int main () {
char response;
char name[100];
char want;

do {
 int i;
   printf("\nREGISTER YOUR NAME: ");
   gets(name);
   for (i = 0; name[i]!='\0'; i++) {
      if(name[i] >= 'a' && name[i] <= 'z') {
         name[i] = name[i] - 32;
      }
   }
       system("cls");

// TO CLEAR PREVIOUS SCREEN //
    void clearscreen() {   
    #ifdef _WIN32         
        system("cls");    
    #else                 
        system("clear");  
    #endif                
        }

    printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");


printf("\n\n-----------------------------------------------------------------------------------------------------\n");
printf("****************************************************************************************************\n");
printf("****************************************  WELCOME TO THE GAME  *************************************\n");
printf("****************************************************************************************************\n");
printf("-----------------------------------------------------------------------------------------------------\n");


            system("cls");
    

printf("                                        INSTRUCTION                                      \n\n");
printf("********************************************************************************************\n");
printf("---------------------------------------------------------------------------------------------\n");
printf("  -->  WELCOME %s , THERE ARE 5 QUESTION IN EACH CATEGORY. EACH QUESTION CARRY 2 MARKS.\n  -->  FOUR OPTIONS ARE PROVIDED FOR EACH QUESTION.\n",name);
printf("  -->  CHOOSE YOUR ANSWER CAREAREFULLY....!!\n");
printf("  -->  PRESS 'ENTER' TO CONTINUE...\n");
printf("---------------------------------------------------------------------------------------------\n");
printf("*********************************************************************************************\n");

         while(getchar() != '\n');  // TO CLEAR INPUT BUFFER 
         
         //PROMT THE PLAYER IF THEY ARE READY
		printf("\n\nARE YOU READY FOR THE QUIZ ( Y/N ) : ");
            scanf("%c",&response);

        if (response == 'y' || response == 'Y')
    {
        // SELECT DIFFICULTY LEVEL
    	int diff;
    	 	printf("\n\n   # WHICH TYPE OF QUESTION WOULD YOU LIKE TO ANSWER --> \n   1.GENERAL KNOWLEDGE QUESTION\n   2.FACULTY OF SCIENCE & TECHNOLOGY .\n   3.FACULTY OF SCIENCE(ZOOLOGY).\n   4.DEPARTMENT OF LEGAL STUDIES.\n   5.DEPARTMENT OF AGRICULTURE RESEARCH (DARE)\n   6.FACULTY OF PHARMACEUTICAL\n   7.MATHEMATICAL QUESTIONS\n");
                printf("    ENTER YOUR CHOICE : ");
    	 	        scanf("%d",&diff);
                    system("cls");

                   


            	 	if (diff==1){

// FUNCTION TO DISPLAY  HEADER 
void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                QUESTIONS MODE  < GENERAL KNOWLEDGE >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");



}


	displayheader();		 
	int score = 0;
	int answer;
    int a;

        
    // QUESTIONS FOR EASY MODE 

        printf("\nQ.1 Who Created Bitcoin ?\n");
            printf("1.ELON MUSK.\n2.SATOSHI NAKAMOTO.\n3.TADASHI YANAI.\n4.JEFF BEZOS.\n\nYOUR ANSWER : ");
                scanf("%d",&a);

        if (a==2)
        {
            printf("CORRECT\n\n");
            score = score +2;
            while(getchar() != '\n');  
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : SATOSHI NAKAMOTO )\n\n");
            while(getchar() != '\n');  
        }
            while(getchar() != '\n');  
            system("cls");
            displayheader();
    int b;
        printf("Q.2 Who has Been Appointed as the new Chief of the indian air force ?\n");
            printf("1.VIVEK RAM CHAUDHARI.\n2.NARENDRA MODI.\n3.RAHUL GANDHI.\n4.RAKESH KUMAR SINGH BHADAURIA\n\nYOUR ANSWER :  ");
                scanf("%d",&b);

        if (b==1)
        {
            printf("CORRECT\n\n");
        	score = score +2;
            while(getchar() != '\n'); 
		}
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : VIVEK RAM CHAUDHARI )\n\n");
            while(getchar() != '\n');   
        }
        while(getchar() != '\n');  
        system("cls");
        displayheader();
    
    int c;
        printf("Q.3 What is The Name of The Largest Country in The World By Area ?\n");
            printf("1.INDIA.\n2.RUSSIA\n3.NEPAL\n4.AFRICA\n\nYOUR ANSWER : ");
                scanf("%d",&c);
        
        if (c==2)
        {
            printf("CORRECT\n\n");
            score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : RUSSIA )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
        
    int d;
        printf("Q.4 What is The Most Popular Sport in The World ?\n");
            printf("1.CRICKET.\n2.SOCCER (FOOTBALL).\n3.GOLF.\n4.TEGRIDIRON FOOTBALL.\n\nYOUR ANSWER : ");
                scanf("%d",&d);

        if (d==2)
        {
            printf("CORRECT\n\n");
            score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRRECT ( CORRECT ANSWER IS : SOCCER (FOOTBALL) )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();

    int e;
        printf("Q.5 Who Penned the Book 'WINGS OF FIRE' ?\n");
            printf("1.RABINDRA NATH TAGORE.\n2.APJ ABDUL KALAM.\n3.ARUN TIWARI.\n4.BOTH 2 & 3.\n\nYOUR ANSWER : ");
                scanf("%d",&e);

        if (e==4)
        {
            printf("CORRECT\n\n");
            score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT (CORRECT ANSWER IS : BOTH  2 & 3)\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE
            }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
           else if (diff==2)
        {


            // FUNCTION TO DISPLAY  HEADER 
void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                 < FACULTY OF SCIENCE & TECHNOLOGY >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");



}
            displayheader();
            int score = 0;
	        int answer;
            int f;
            printf("    CHOOSE CATEGORY -->\n   1.PROGRAMMING QUESTION.\n   2.DBMS QUESTIONS\n   3.GENERAL QUESTIONS.\n");
            scanf("%d",&f);
            system("cls");
            if (f==1)
            {

// FUNCTION TO DISPLAY  HEADER 
void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                QUESTIONS MODE  < PROGRAMMING QUESTION >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");



}


      displayheader();
        int g;
        printf("Q1. _________________IS THE PROCESS OF FINDING ERRORS AND FIXING THEM WITHIN A PROGRAM.\n");
        printf("1.COMPILING.\n2.EXECUTING\n3.DEBUGGING\n4.SCANNING\n\nYOUR ANSWER : ");
            scanf("%d",&g);
                if (g==2)
                {
                 printf("CORRECT\n\n");
                  score = score +2;
                while(getchar() != '\n'); 
                 }
                else 
                    {
                        printf("INCORRECT (correct answer is debugging)");
                        while(getchar() != '\n'); 
                    }
                    while(getchar() != '\n'); 
                    system("cls");
                    displayheader();
                
                  int h;
                     printf("Q.2 WHICH COMMAND WILL STOP AN INFINITE LOOP?\n");
                            printf("1.ALt+C.\n2.SHIFT+C.\n3.Esc.\n4.Ctrl+c.\n\nYOUR ANSWER : ");
                            scanf("%d",&h);

                      if (h==4)
                      {
                      printf("CORRECT\n\n");
                       score = score +2;
                      while(getchar() != '\n'); 
                     }
                      else
                     {
                   printf("INCORRECT ( CORRECT ANSWER IS : Ctrl+c )\n\n");
                  while(getchar() != '\n'); 
                  }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
                          int i;
        printf("Q.3 WHICH SYMBOL IS USED TO REPRESENT AN input/output OPERATION IN THE FLOW CHART?\n");
            printf("1.RECTANGLE.\n2.OVAL.\n3.CIRCLE.\n4.PARALLELOGRAM.\n\nYOUR ANSWER : ");
                scanf("%d",&i);

        if (i==4)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : PARALLELOGRAM )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
          int J;
        printf("Q.4 IN THE 'C' LANGUAGE, LOCAL VARIABLES________CAN RETAIN THEIR VALUE BETWEEN FUNCTION CALLS.\n");
            printf("1.REGISTER.\n2.EXTERN.\n3.STATIC.\n4.AUTO.\n\nYOUR ANSWER : ");
                scanf("%d",&J);

        if (J==3)
        {
            printf("CORRECT\n\n");
            score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : STATIC )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
          int k;
        printf("Q.5 A FUNCTION WHICH CALLS ITSELF IS CALLED A.\n");
            printf("1.RECURSIVE FUNCTION.\n2.STATIC FUNCTION.\n3.AUTO FUNCTION.\n4.SELF FUNCTION.\n\nYOUR ANSWER : ");
                scanf("%d",&k);

        if (k==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : RECURSIVE FUNCTION)\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);
            }

        /////////////////////////////////////////////////////////////////////////////////////////////////////
             if (f==2)
             {
            int score = 0;
	        int answer;
 // FUNCTION TO DISPLAY  HEADER 
void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                QUESTIONS MODE  < DBMS QUESTION >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");



}
           displayheader();    
          int l;
        printf("Q.1 WHICH ONE OF THE FOLLOWING IS NOT A TYPE OF DATABASE.\n");
            printf("1.RECURSIVE FUNCTION.\n2.STATIC FUNCTION.\n3.AUTO FUNCTION.\n4.SELF FUNCTION.\n\nYOUR ANSWER : ");
                scanf("%d",&l);

        if (l==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : RECURSIVE FUNCTION)\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
            int m;
        printf("Q.2 WHAT IS INFORMATION OF DATA CALLED?\n");
            printf("1.HYPER DATA.\n2.TERA DATA.\n3.META DATA.\n4.RELATIONS.\n\nYOUR ANSWER : ");
                scanf("%d",&m);

        if (m==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : META DATA)\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();

        int n;
        printf("Q.3 WHAT DOES AN 'RDBMS' CONSIST OF ?\n");
            printf("1.COLLECTION OF RECORDS.\n2.COLLECTION OF KEYS.\n3.COLLECTION OF TABLES.\n4.COLLECTION OF FIELDS.\n\nYOUR ANSWER : ");
                scanf("%d",&n);

        if (n==3)
        {
            printf("CORRECT/n/n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : COLLECTION OF TABLES)\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();

        int o;
        printf("Q.4 WHICH FORMS HAVE A RELATION THAT CONTAINS INFORMATION ABOUT A SINGLE ENTITY.\n");
            printf("1.4NF.\n2.2NF.\n3.5NF.\n4.3NF.\n\nYOUR ANSWER : ");
                scanf("%d",&o);

        if (o==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 4NF )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
        int p;
        printf("Q.5 WHICH OF THE FOLLOWING IS NOT THE UTILITY OF DBMS.\n");
            printf("1.BACKUP.\n2.DATA LOADING.\n3.PROCESS ORGANIZATION.\n4.FILE ORGANIZATION.\n\nYOUR ANSWER : ");
                scanf("%d",&p);

        if (p==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : PROCESS ORGANIZATION)\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);
       }
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
             if (f==3){
            int score = 0;
	        int answer;

void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                QUESTIONS MODE  < GENERAL QUESTION >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");



}
   displayheader();

             
                int q;
            printf("Q.1 Block Cache and Buffer Cache are Used.\n");
                printf("1.TO SPEED UP MAIN MEMORY\n2.TO INCREASE THE CAPACITY OF THE MAIN MEMORY\n3.TO HANDLE INTERRUPTS\n4.TO IMPROVE DISK PERFORMANCE\n\nYOUR ANSWER : ");
                    scanf("%d",&q);
    if (q==4)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : TO IMPROVE DISK PERFORMANCE )\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

        int r;
            printf("Q.2 Fifth-Generation Language are The_____________.\n");
                printf("1.ASEMBLY LANGUAGES\n2.MACHINE LANGUAGES\n3.CONSTRAINT BASED LANGUAGES\n4.HIGH-LEVEL LANGUAGE\n\nYOUR ANSWER : ");
                    scanf("%d",&r);

    if (r==3)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : CONSTRAINT BASED LANGUAGES)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

        int s;
            printf("Q.3 Which one of The Following is not a Data Type in C ?\n");
                printf("1.PRIMARY DATA TYPE.\n2.SECONDARY DATA TYPE.\n3.DERIVED DATA TYPE.\n4.USER DEFINED DATA TYPE\n\nYOUR ANSWER : ");
                    scanf("%d",&s);

    if (s==2)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : SECONDARY DATA TYPE )\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

         int t; 
        printf("Q.4 What is The Name of The New Technological Breakthrough That has Been Made Recently ?\n");
            printf("1.QUANTUM COMPUTING\n2.CLOUD COMPUTING\n3.BLOCKCHAIN\n4.YOUTUBE\n\nYOUR ANSWER : "); 
                scanf("%d",&t);

    if (t==1)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : QUANTUM COMPUTING)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

         int u;
            printf("Real time System Are_______.\n");
                printf("1.USED FOR REAL TIME INTERACTIVE USER\n2.USED FOR PROGRAM ANALYSIS\n3.PRIMARILY USED ON MAINFRAME COMPUTERS\n4.USED FOR MONITORING EVENTS AS THEY OCCUR\n\nYOUR ANSWER : ");
                    scanf("%d",&u);
    if (u==4)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : USED FOR MONITORING EVENTS AS THEY OCCUR)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
		printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE
        
             }
        }
    
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////             
       
             
        else if (diff==3)
        {

        
            int score = 0;
	        int answer;
            void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                         QUESTIONS MODE  < FACULTY OF SCIENCE (ZOOLOGY) >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
}
        displayheader();
                int a1;
            printf("Q.1 WHICH OF THE FOLLOWING DEVELOPED FOR THE FIRST TIME IN ANNELIDS?\n");
                printf("1.CEPHALIZATION\n2.DEVELOPMENT OF A TRUE COELOM\n3.METAMERIC SEGMENTATION\n4.BOTH 2 & 3\n\nYOUR ANSWER : ");
                    scanf("%d",&a1);

    if (a1==2)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : DEVELOPMENT OF A TRUE COELOM)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

                int w;
            printf("Q.2 WHAT IS NOT TRUE FOR A GENERALIZED MOLLUSC?\n");
                printf("1.BODY SEGMENTED INTO HEAD, VISCERAL MASS AND FOOT.\n2.A RASPING TOUNGE LIKE ORGAN-RADULA PRESENT.\n3.MANTLE CAVITY WITH GILLS\n4.EXCRETORY-NEPHRIDIA\n\nYOUR ANSWER : ");
                    scanf("%d",&w);

    if (w==1)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : BODY SEGMENTED INTO HEAD, VISCERAL MASS AND FOOT)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

          int x;
            printf("Q.3 WHICH OF THE FOLLOWING IS NOT SEEN IN HEMICHORDATES?\n");
                printf("1.A TRIPARTITE BODY ORGANIZATION.\n2.STOMOCHORD.\n3.RUDIMENTARY NOTOCHORD\n4.PROBCSCIS GLAND\n\nYOUR ANSWER : ");
                    scanf("%d",&x);

    if (x==3)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : RUDIMENTARY NOTOCHORD)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

         int y;
            printf("Q.4 WHICH ONE OF THE FOLLOWING IS NOT A FEATURE OF TUNICATES?\n");
                printf("1.ONLY THE LARVAE.\n2.PRESENCE OF ENDOSTYLE.\n3.SECRETION OF CELLULOSE\n4.LARVAE ARE VORACIOUS EATERS.\n\nYOUR ANSWER : ");
                    scanf("%d",&y);

    if (y==4)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : LARVAE ARE VORACIOUS EATERS)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
        displayheader();

         int z;
            printf("Q.5 AN INCREASE IN THE BLOOD FLOW TO THE ATRIA OF THE HEART CAN CAUSE THE RELEASE OF : \n");
                printf("1.ERYTHROPOEITIN.\n2.ATRIAL NATRIURETIC FACTOR\n3.RENIN.\n4.ALDOSTERONE\n\nYOUR ANSWER : ");
                    scanf("%d",&z);

    if (z==2)
    {
        printf("CORRECT\n\n");
         score = score +2;
        while(getchar() != '\n'); 
    }
    else
    {
        printf("INCORRECT (CORRECT ANSWER IS : ATRIAL NATRIURETIC FACTOR)\n\n");
        while(getchar() != '\n'); 
    }
    while(getchar() != '\n'); 
    system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE
        }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////        
    if (diff==4)
    {
        int score = 0;
	    int answer;
        void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                         QUESTIONS MODE  < DEPARTMENT OF LEGAL STUDIES >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
}
     displayheader();    
          int a2;
        printf("Q.1  The word 'Secular' was added in the Preamble to the Constitution of India by\n");
            printf("1.FIRST AMENDENT ACT.\n2.SEVENTH AMENDENT ACT.\n3.FORTY-SECOND AMENDENT ACT.\n4.FORTY-FOURTH AMENDENT ACT.\n\nYOUR ANSWER : ");
                scanf("%d",&a2);

        if (a2==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : FORTY-SECOND AMENDENT ACT )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
         int a3;
        printf("Q.2 A Judge of the Supreme Court can be removed from his office on the ground(s) of\n");
            printf("1.Proved misbehaviour or incapacity.\n2.Violation of the Constitution.\n3.Both (A) and (B) above.\n4.None of the above.\n\nYOUR ANSWER : ");
                scanf("%d",&a3);

        if (a3==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : Proved misbehaviour or incapacity )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
        int a4;
        printf("Q.3 Who used the word 'Sociology' for the first time ?\n");
            printf("1.Auguste Comte.\n2.Herbert Spencer.\n3.Diguit.\n4.None of the above.\n\nYOUR ANSWER : ");
                scanf("%d",&a4);

        if (a4==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : Auguste Comte )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
        int a5;
        printf("Q.4 Which provision of the Constitution imposes a duty on the Union to ensure that the Government of every State is carrying on in accordance with the provisions of the Constitution ??\n");
            printf("1.Article 352.\n2.Article 355.\n3.Article 356.\n4.Article 360.\n\nYOUR ANSWER : ");
                scanf("%d",&a5);

        if (a5==2)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : Article 355 )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
        int a6;
        printf("Q.5 Parliament has power to legislate with respect to a matter in the State List, provided it is in the\n");
            printf("1.Public interest.\n2.National interest.\n3.Both (A) and (B) above.\n4.None of the above.\n\nYOUR ANSWER : ");
                scanf("%d",&a6);

        if (a6==2)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : National interest )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (diff==5)
    {
        int score = 0;
	    int answer;
        void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                QUESTIONS MODE  < DEPARTMENT OF AGRICULTURE RESEARCH (DARE) >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
}
     displayheader(); 
      int a7;
        printf("Q.1  How does the moisture stressaffect the cell\n");
            printf("1.Affect cell division.\n2. Affect cell expansion.\n3. Cell mortality rate is affected.\n4.No effect on cell.\n\nYOUR ANSWER : ");
                scanf("%d",&a7);

        if (a7==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : Affect cell division )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int a8;
        printf("Q.2  How much radiation energypercentage radiating on plant isused in photosynthesis ?\n");
            printf("1. 0-50%-210%.\n2. 0-42%-1.66%n.\n3. 0-25%-0-30%.\n4.0-16%-0-24%.\n\nYOUR ANSWER : ");
                scanf("%d",&a8);

        if (a8==2)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 0-42%-1.66% )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
         int a9;
        printf("Q.3  At the vegetative growth stage,flowering is stopped in food-grain crops, known as-\n");
            printf("1. sigmoid growth curve.\n2. determinate growth.\n3. determinate growth.\n4. grand growth period.\n\nYOUR ANSWER : ");
                scanf("%d",&a9);

        if (a9==2)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : determinate growth )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int a10;
        printf("Q.4 The crop with yarns of sunnhemp is prepared in-\n");
            printf("1. 12-15 weeks.\n2. 15-17 weeks.\n3. 10-12 weeks.\n4. 8-10 weeks.\n\nYOUR ANSWER : ");
                scanf("%d",&a10);

        if (a10==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 12-15 weeks )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();
        int a11;
        printf("Q.5 Which is not an inorganic matterin the following \n");
            printf("1. Magnesium.\n2. Iron.\n3. Fat.\n4. Iodine.\n\nYOUR ANSWER : ");
                scanf("%d",&a11);

        if (a11==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : fat )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");   
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE
    }
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if (diff==6)
    {
    int score = 0;
	    int answer;
        void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                QUESTIONS MODE  < FACULTY OF PHARMACEUTICAL >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
}


displayheader();
int b1;
        printf("Q.1 Which among the following  drug formulation is required to be stored in refrigerator \n");
            printf("1. Emulsions.\n2. Suspensions.\n3. vaccines.\n4. Non of the above.\n\nYOUR ANSWER : ");
                scanf("%d",&b1);

        if (b1==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : vaccines )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int b2;
        printf("Q.2 Which among the following is a sterile preparation \n");
            printf("1. Nasal drops.\n2. Effervescent granules.\n3. ophthalmic preparations.\n4. otic preparations.\n\nYOUR ANSWER : ");
                scanf("%d",&b2);

        if (b2==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : ophthalmic preparations )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
         int b3;
        printf("Q.3 One tanle spoon is equivalent to \n");
            printf("1. 10ml.\n2. 15ml.\n3. 20ml.\n4. 5ml.\n\nYOUR ANSWER : ");
                scanf("%d",&b3);

        if (b3==2)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 15ml )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int b4;
        printf("Q.4 Major chemical constituent present in the clove oil \n");
            printf("1. fenchone.\n2. citral.\n3. AnetholC.\n4. Eugenol.\n\nYOUR ANSWER : ");
                scanf("%d",&b4);

        if (b4==4)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : Eugenol )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
         int b5;
        printf("Q.5 In a clincal trial, coparison of efficacy of a new drug with an existing drug is done in \n");
            printf("1. Phase I.\n2. Phase II.\n3. Phase III.\n4. Phase IV.\n\nYOUR ANSWER : ");
                scanf("%d",&b5);

        if (b5==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : Phase III )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");   
        printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE
}
    if (diff==7)
    {
        int score = 0;
	    int answer;
        void displayheader () {
                
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                          QUESTIONS MODE  < MATHEMATICAL QUESTIONS >                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");
}


displayheader();
        int b6;
        printf("Q.1  If r is the radius of the sphere, then the surface area of the sphere is given by.. \n");
            printf("1. 4 pie r2.\n2. 2 pie r2.\n3.  pie r2.\n4. 4/3 pie r2.\n\nYOUR ANSWER : ");
                scanf("%d",&b6);

        if (b6==1)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 4 π r2 )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int b7;
        printf("Q.2 If we join two hemispheres of same radius along their bases, then we get a \n");
            printf("1. CONE.\n2. CYLINDER.\n3.  SPHERE.\n4. CUBOID.\n\nYOUR ANSWER : ");
                scanf("%d",&b7);

        if (b7==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : SPHERE )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int b8;
        printf("Q.3 If the mean of first n natural numbers is 3n/5, then the value of n is: \n");
            printf("1. 3.\n2. 4.\n3. 5.\n4. 6.\n\nYOUR ANSWER : ");
                scanf("%d",&b8);

        if (b8==3)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 5 )\n\nExplanation: Sum of natural numbers = n(n + 1)/2\nGiven, mean = 3n/5\nMean = sum of natural numbers/n\n3n/5 = n(n + 1)/2n\n3n/5 = (n + 1)/2\n6n = 5n + 5\nn = 5\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
         int b9;
        printf("Q.4 The distance between two parallel tangents of acircle of radius 4 cm is \n");
            printf("1. 2 cm.\n2. 4 cm.\n3. 6 cm.\n4. 8 cm.\n\nYOUR ANSWER : ");
                scanf("%d",&b9);

        if (b9==4)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : 8 cm )\n\nExplanation: Here radius, r = 4 cm\nRequired distance,\nAB = OA + OB\n= r + r = 2r = 2x4 = 8 cm\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
        displayheader();   
        int b10;
        printf("Q.5 The quadratic equation has \n");
            printf("1. two distinet real roots.\n2. two equal real roots.\n3. no real roots.\n4. more than 2 real roots.\n\nYOUR ANSWER : ");
                scanf("%d",&b10);

        if (b10==2)
        {
            printf("CORRECT\n\n");
             score = score +2;
            while(getchar() != '\n'); 
        }
        else
        {
            printf("INCORRECT ( CORRECT ANSWER IS : two equal real roots )\n\n");
            while(getchar() != '\n'); 
        }
        while(getchar() != '\n'); 
        system("cls");
printf("-----------------------------------------------------------------------------------------------------\n");
printf("                                     QUIZ GAME USING C                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n");

printf("\n-----------------------------------------------------------------------------------------------------\n");
printf("                                       SCORE BOARD                                              \n");
printf("-----------------------------------------------------------------------------------------------------\n\n");   
       printf("%s, YOUR SCORE OUT OF 10 IS : %d\n",name,score);   // DISPLAY FINAL SCORE

    }
    else if (response != 'y' || response != 'Y')
    {
        printf("THANKS FOR PLAYING");
    }
              

    }
     else if (response != 'y' || response != 'Y')
    {
        printf("Okay %s, Maybe Next Time!!...\n",name);
        break;
    }
    printf("\n");
     printf("DO YOU WANT TO PLAY AGAIN (Y/N) : ");
     scanf("%c",&want);
}   while (want=='y' || want=='Y');

        



return 0;
}