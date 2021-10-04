#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <cstring>
using namespace std;
string t4="                                |0000000|",t1="                                   _|_  ",t2="                                   |||   ",t3="                                 __|||__ ",t5="                                |/\\\/\\/\\/|";
string b1="                                ___| |______| |______| |______| |______| |______| |______| |______| |______| |___",b2="                               |___| |______| |______| |______| |______| |______| |______| |______| |______| |___|",b3="                                   | |      | |      | |      | |      | |      | |      | |      | |      | |   ",b4="                               ___________________________________________________________________________________";
string spc="                               *",enstr="*";


bool getInput(char *c); 
void horipos1(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos2(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos3(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos4(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos5(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos6(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos7(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos8(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos9(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos10(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos11(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos12(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos13(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos14(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos15(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos16(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos17(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos18(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos19(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void horipos20(string,int,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string);
void delay(int );

int L_PER_INCR = 2;
int main(void){
int m=1;

while(m>0){

cout<<"\n\n\n\n\n                                   Please Maximize the console and press enter"<<endl;
cin.get();
system("CLS");
system("COLOR 06");

 for(int i=0;i<100;i++)
   {
       system("cls");
       cout<<"\n";
        cout<<"\n";
         cout<<"\n";
          cout<<"\n";
           cout<<"\n";
            cout<<"\n";
             cout<<"\n";
              cout<<"\n";
              
           cout<<"\n";
            cout<<"\n";
             cout<<"\n";
              cout<<"\n";
               cout<<"\n";
       cout<<"                                           LOADING PLEASE WAIT.... :";
       for(int k=0;k<i/L_PER_INCR;k++)
            cout<<char(219);
        delay(100/L_PER_INCR);
   }
   
   
   system("CLS");
	system("COLOR 06");



	cout<<endl<<endl<<endl;
    cout<<"                         *******************************************************************************************************************  "<<endl;
    Sleep(500);
	cout<<"                         ********************         |  /     /\\     |      |     /\\     |\\     |     /\\               ********************   "<<endl;
	Sleep(500);
	cout<<"                                             *        | /     /  \\    |      |    /  \\    | \\    |    /  \\             *                  "<<endl;
	Sleep(500);
	cout<<"                               ****************       |/     /    \\   |      |   /    \\   |  \\   |   /    \\           ****************       "<<endl;
	Sleep(500);
	cout<<"                               *****************      |\\    /------\\  |  /\\  |  /------\\  |   \\  |  /------\\         *****************       "<<endl;
	Sleep(500);
	cout<<"                                                *     | \\  /        \\ | /  \\ | /        \\ |    \\ | /        \\       *                     "<<endl;
	Sleep(500);
	cout<<"                                        **********    |  \\/          \\|/    \\|/          \\|     \\|/          \\     **********           "<<endl;
	Sleep(500);
	cout<<"                                        ***********                    _____    _ ____                            ***********           "<<endl;
	Sleep(500);
	cout<<"                                                   *                        |    |    |                          *                   "<<endl;
	Sleep(500);
	cout<<"                                                    *                  _____|    | [] |                         *                  "<<endl;
	Sleep(500);
	cout<<"                                                     *                |______   _|____|                        *                 "<<endl;
	Sleep(500);
	cout<<"                                                      *                                                       *              "<<endl;
	Sleep(500);
	cout<<"                                                       *******************************************************               "<<endl;
	cout<<"                                                        *****************************************************              "  <<endl;
	cout<<"                                                         ***************************************************            "<<endl;
	cout<<"                                                          *************************************************                                "<<endl;
	cout<<"                                                           ***********************************************                               "<<endl;
	cout<<"                                                            *********************************************           "<<endl;
	cout<<"                                                             *******************************************       "<<endl;
Sleep(500);
//	cout<<"                                                              *****************************************       "<<endl;
//	cout<<"                                                               ***************************************          "<<endl;
//	cout<<"                                                                *************************************      "              <<endl;
//	cout<<"                                                                 ***********************************          "<<endl;
	


//	system("PAUSE");
	system("CLS");



	system("COLOR 06");


	cout<<endl<<endl<<endl;
	cout<<"                                                *******************************************************************                                                                      "<<endl;
	cout<<"                                                *    _____                     _____ _           _               *                "<<endl;
	cout<<"                                                *   |   __|___ ___ ___ ___    |   . | |___ ___ _| |_ ___ ___         *                "<<endl;
	cout<<"                                                *   |__   | . | .||  _| ._|   | ----| | .|| --|_   _| ._| __|         *                "<<endl;
	cout<<"                                                *   |_____|  _|__,|___|___|   |___._|_|__,|- _| |_| |___|_|          *                "<<endl;
	cout<<"                                                *         |_|                                                     *                "<<endl;
	cout<<"                                                *******************************************************************                "<<endl;
	cout<<endl<<endl<<endl;
	
	
	
	cout<<"                                                developed by KAWANA 2D - 2020"<<endl;
	cout<<"                                                All Right Resevered"<<endl;


Sleep(3000);
system("COLOR 09");

int u=1,w,w1;

while(u>0){

cout<<"\n\n\n\n\n\n\			1)Enter the game"<<endl;
cout<<"\n\n\			2)Instructions"<<endl;
cout<<"\n\n\			3)Credits"<<endl;
cout<<"\n\n				4)Exit"<<endl;
cin>>w;
if(w==1){
	break;
}
if(w==2){
	system("CLS");
	cout<<"This is a simpe console based galxis game which is called space blasters.\This represents mainly the enimies and attacker.\nenimies come from the top end of  the cosole to the bottom."<<endl;
	cout<<"The attacking tanker is located at the bottom,by using left and right arrow keys tanker can be moved left or right"<<endl;
	cout<<"If player need to destroy enimies,space bar should be pressed,it will release a signal which is equal to the natural frequency of enimy and it will destroyed"<<endl;
	 cout<<"Every signal releasing will be marked as a two point increment in marks.\nTtotal health is 100%,if a enimy comes until the barrier without destroying and tanker horizontal position is same\n 10% health will be deceased."<<endl;
	cout<<"After some time period the speed of the game will increse\nenjoy the game"<<endl;
	cout<<"\n\n\n\n\n\n\nn\n\n\n\n\n\ Press 0 to exit"<<endl;
	cin>>w1;
	if(w1==0){
		system("CLS");
		u++;
	}
}

if(w==3){
	system("CLS");
   cout<<"we could succeed our assignment in this level,SO ALL CREDITS GOES TO DR.RANDIMA,,Thank you sir"<<endl;
   cout<<"As a group we faced pack of questions and it was a grate opportunity for us explore the programming ocean"<<endl;
   cout<<"Every one did their job well..............."<<endl;
   cout<<"We hope to devolop this as KAWANA 2D team"<<endl;
	cout<<"\n\n\n\n\n\n\nn\n\n\n\n\n\ Press 0 to exit"<<endl;
	cin>>w1;
	if(w1==0){
		system("CLS");
		u++;
	}
}
if(w==4){
	break;
}

}

int m=1;



char y = ' ';
int n=1,s=300,tp=4,j=-1,marks=0,health=100;
string hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs1818,hs19,ai19,hs1919,hs20,ai20,hs2020,ts;
while (int(y)!= 27)
	{
		if(w==4){
	break;
}
		while (!getInput(&y))
      		{
      			if(w==4){
	break;
}
      		srand ( time(NULL));
      		int RandIndex1 = rand();
      		int RandIndex2=rand();
      		string att[6]={"-.)(.)(.-","-0><0><0-","-0}{0}{0-","-#######-","-|0:0:0|-","-^><^><^-"};
			cout<<"MARKS = "<<marks;
			cout<<" , LIFE  = "<<health<<"%";
      		string horpos[9]= {"","         ","                  ","                           ","                                    ","                                             ","                                                      ","                                                               ","                                                                        "};
      		string tankpos[9]={"","         ","                  ","                           ","                                    ","                                             ","                                                      ","                                                               ","                                                                        "};
      		ts=horpos[tp];
      		if(n%400==0){
      			s=s-50;
			  }
			  switch(n%20){
      			case 1:{

				  	system("CLS");
      				hs1=horpos[RandIndex1%9];
      				ai1=att[RandIndex2%6];
      				hs11=horpos[8-RandIndex1%9];
      				horipos1(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);
      				  if(j==1){
                        if(hs2==ts){hs2="         ";}
                   else if(hs3==ts){hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";    }
                       marks=marks+2;
                       
					    j=0;
			         }
			         else{
			         	if(hs2==ts){
			         		health=health-10;
						 }
					 }
					   break;
      			}

      			case 2:{
      					system("CLS");
      				hs2=horpos[RandIndex1%9];
      				ai2=att[RandIndex2%6];
      				hs22=horpos[8-RandIndex1%9];
      				horipos2(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);
                    if(j==1){

                   if(hs3==ts){hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts){hs2="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs3==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 3:{
				  		system("CLS");
      				hs3=horpos[RandIndex1%9];
      				ai3=att[RandIndex2%6];
      				hs33=horpos[8-RandIndex1%9];
      				horipos3(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

                    if(j==1){


                   if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts){hs2="         ";}
                   else if(hs3==ts) {hs3="         ";}
                       marks=marks+2;
					    j=0;
			         }
			         
			         else{
			         	if(hs4==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 4:{
				  		system("CLS");
      				hs4=horpos[RandIndex1%9];
      				ai4=att[RandIndex2%6];
      				hs44=horpos[8-RandIndex1%9];
      				horipos4(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

                    if(j==1){



                   if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                        marks=marks+2;
						j=0;
			         }
			         else{
			         	if(hs5==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 5:{

				  		system("CLS");
      				hs5=horpos[RandIndex1%9];
      				ai5=att[RandIndex2%6];
      				hs55=horpos[8-RandIndex1%9];
      				horipos5(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

					if(j==1){




                   if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs6==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 6:{
				  		system("CLS");
      				hs6=horpos[RandIndex1%9];
      				ai6=att[RandIndex2%6];
      				hs66=horpos[8-RandIndex1%9];
      				horipos6(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

						if(j==1){





                   if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs7==ts){
			         		health=health-10;
						 }
					 }

					break;
				  }
				  case 7:{
				  		system("CLS");
      				hs7=horpos[RandIndex1%9];
      				ai7=att[RandIndex2%6];
      				hs77=horpos[8-RandIndex1%9];
      				horipos7(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

				if(j==1){






                   if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs8==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 8:{
				  		system("CLS");
      				hs8=horpos[RandIndex1%9];
      				ai8=att[RandIndex2%6];
      				hs88=horpos[8-RandIndex1%9];
      				horipos8(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

					if(j==1){




                   if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs9==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 9:{
				  		system("CLS");
      				hs9=horpos[RandIndex1%9];
      				ai9=att[RandIndex2%6];
      				hs99=horpos[8-RandIndex1%9];
      				horipos9(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

						if(j==1){


                   if(hs10==ts){hs10="         ";}
                   else if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs10==ts){
			         		health=health-10;
						 }
					 }

					break;
				  }
				  case 10:{
				  		system("CLS");
      				hs10=horpos[RandIndex1%9];
      				ai10=att[RandIndex2%6];
      				hs1010=horpos[8-RandIndex1%9];
      				horipos10(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);
						if(j==1){



                   if(hs110==ts){hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if(hs10==ts){hs10="         ";}
                        j=0;
                        marks=marks+2;
			         }
					else{
			         	if(hs110==ts){
			         		health=health-10;
						 }
					 }

					break;
				  }
				  case 11:{
				  		system("CLS");
      				hs110=horpos[RandIndex1%9];
      				ai11=att[RandIndex2%6];
      				hs1111=horpos[8-RandIndex1%9];
      				horipos11(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

					if(j==1){




                   if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts)  {hs110="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         
			         else{
			         	if(hs12==ts){
			         		health=health-10;
						 }
					 }

					break;
				  }
				  case 12:{
				  		system("CLS");
      				hs12=horpos[RandIndex1%9];
      				ai12=att[RandIndex2%6];
      				hs1212=horpos[8-RandIndex1%9];
      				horipos12(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

						if(j==1){





                   if(hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         
			         else{
			         	if(hs13==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 13:{
				  		system("CLS");
      				hs13=horpos[RandIndex1%9];
      				ai13=att[RandIndex2%6];
      				hs1313=horpos[8-RandIndex1%9];
      				horipos13(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

                   if(j==1){






                   if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if(hs13==ts){hs13="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         
			         else{
			         	if(hs14==ts){
			         		health=health-10;
						 }
					 }



					break;
				  }
				  case 14:{
				  		system("CLS");
      				hs14=horpos[RandIndex1%9];
      				ai14=att[RandIndex2%6];
      				hs1414=horpos[8-RandIndex1%9];
      			 horipos14(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

				if(j==1){







                   if(hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}

                        j=0;
                        marks=marks+2;
			         }
			         
			         else{
			         	if(hs15==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 15:{
				  		system("CLS");
      				hs15=horpos[RandIndex1%9];
      				ai15=att[RandIndex2%6];
      				hs1515=horpos[8-RandIndex1%9];
      				 horipos15(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);


					if(j==1){








                   if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if(hs15==ts){hs15="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs16==ts){
			         		health=health-10;
						 }
					 }

					break;
				  }
				  case 16:{
				  		system("CLS");
      				hs16=horpos[RandIndex1%9];
      				ai6=att[RandIndex2%6];
      				hs1616=horpos[8-RandIndex1%9];
      			     horipos16(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

						if(j==1){

                   if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if (hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs17==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 17:{
				  		system("CLS");
      				hs17=horpos[RandIndex1%9];
      				ai17=att[RandIndex2%6];
      				hs1717=horpos[8-RandIndex1%9];
      			 horipos17(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

				if(j==1){


                   if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if (hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs18==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 18:{
				  		system("CLS");
      				hs18=horpos[RandIndex1%9];
      				ai18=att[RandIndex2%6];
      				hs1818=horpos[8-RandIndex1%9];
      				horipos18(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

					if(j==1){



                   if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if (hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs19==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 19:{
				  		system("CLS");
      				hs19=horpos[RandIndex1%9];
      				ai19=att[RandIndex2%6];
      				hs1919=horpos[8-RandIndex1%9];
      				horipos19(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

					if(j==1){




                   if(hs20==ts){hs20="         ";}
                   else if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if (hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         else{
			         	if(hs20==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }
				  case 0:{
				  		system("CLS");
      				hs20=horpos[RandIndex1%9];
      				ai20=att[RandIndex2%6];
      				hs2020=horpos[8-RandIndex1%9];
      			horipos20(ts,s,hs1,ai1,hs11,hs2,ai2,hs22,hs3,ai3,hs33,hs4,ai4,hs44,hs5,ai5,hs55,hs6,ai6,hs66,hs7,ai7,hs77,hs8,ai8,hs88,hs9,ai9,hs99,hs10,ai10,hs1010,hs110,ai11,hs1111,hs12,ai12,hs1212,hs13,ai13,hs1313,hs14,ai14,hs1414,hs15,ai15,hs1515,hs16,ai16,hs1616,hs17,ai17,hs1717,hs18,ai18,hs18,hs19,ai19,hs1919,hs20,ai20,hs2020);

				if(j==1){





                   if(hs1==ts){hs1="         ";  }
                   else if(hs2==ts) {hs2="         ";}
                   else if(hs3==ts)  {hs3="         ";}
                   else if(hs4==ts){hs4="         ";}
                   else if(hs5==ts){hs5="         ";}
                   else if(hs6==ts){hs6="         ";}
                   else if(hs7==ts){hs7="         ";}
                   else if(hs8==ts){hs8="         ";}
                   else if(hs9==ts){hs9="         ";}
                   else if (hs10==ts){hs10="         ";}
                   else if(hs110==ts) {hs110="         ";}
                   else if(hs12==ts){hs12="         ";}
                   else if (hs13==ts){hs13="         ";}
                   else if(hs14==ts){hs14="         ";}
                   else if (hs15==ts){hs15="         ";}
                   else if(hs16==ts){hs16="         ";}
                   else if(hs17==ts){hs17="         ";}
                   else if(hs18==ts){hs18="         ";}
                   else if(hs19==ts){hs19="         ";}
                   else if(hs20==ts){hs20="         ";}
                        j=0;
                        marks=marks+2;
			         }
			         
			         else{
			         	if(hs1==ts){
			         		health=health-10;
						 }
					 }


					break;
				  }



			  }
			n++;







            	}

            	if(int(y)==77){
            		tp++;
            		if(tp==10){
            			tp=8;
					}
				}
				if(int(y)==75){
					tp--;
					if(tp<-1){
						tp=0;
					}
				}

				if(int(y)==32){

                j=1;
				}


                 if(health<1){
                 	system("CLS");
                 	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout<<"                ****************************************************************************************************************************************"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *       **********            *          **            **   *************                                                              *"   <<endl;
	cout<<"                *      *  *********          ***         ***          ***   *************                                                              *"   <<endl;
	cout<<"                *      * *                  ** **        ****        ****   ***                                                                        *"   <<endl;
	cout<<"                *      * *    *****        **   **       ** **      ** **   ********                                                                   *"   <<endl;
	cout<<"                *      * *    **** *      *********      **  **    **  **   ********                                                                   *"   <<endl;
	cout<<"                *      * *       * *     ***********     **   **  **   **   ***                                                                        *"   <<endl;
	cout<<"                *      *  ******* *     **         **    **    ****    **   *************                                                              *"   <<endl;
	cout<<"                *        *********     **           **   **     **     **   *************                                                              *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                 **************    **                **  ***************   **************     **      *"   <<endl;
	cout<<"                *                                               ******************   **              **   ***************   ************* *    **      *"   <<endl;
	cout<<"                *                                               **              **    **            **    ***               *            **    **      *"   <<endl;
	cout<<"                *                                               **              **     **          **     ***               *            **    **      *"   <<endl;
	cout<<"                *                                               **              **      **        **      *********         ************* *    **      *"   <<endl;
	cout<<"                *                                               **              **       **      **       *********         **************     **      *"   <<endl;
	cout<<"                *                                               **              **        **    **        ***               ** **              **      *"   <<endl;
	cout<<"                *                                               **              **         **  **         ***               **   ***           **      *"   <<endl;
	cout<<"                *                                               ******************          ****          ***************   **      ***                *"   <<endl;
	cout<<"                *                                                 **************             **           ***************   **         ***     **      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                *                                                                                                                                      *"   <<endl;
	cout<<"                ****************************************************************************************************************************************"   <<endl;
	
	Sleep(3000);
	
	
					 break;
				 }
               	
				}
				   
				   system("CLS");
				   int uin;
					
				 	cout<<"\n\n\n\n\n\n            1)Restart"<<endl;
					cout<<"\n\n\            2)Exit"<<endl;
					cin>>uin;
					
					if(uin==1){
						m++;
					}
				 	if(uin==2){
				 		m=-m;
				 		break;
					 }   }
				
                  	return 0; }
                     // Get Input





                     bool getInput(char *c)
                     {

					  if (kbhit())
                     { *c = getch();
                      return true; // Key Was Hit
                      }
                      	return false;                         }




void horipos1(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
				  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;

		            cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
				    cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
					 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
				cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
				cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
		   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
			  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
					cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
				cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
			 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
		          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
				   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
				  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
			   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
				  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
				  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
				 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
					 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
		          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
				    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;

			  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);


		}



	void horipos2(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
				  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;

	          cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
			 cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;

			   cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos3(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;


            cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
            cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
            cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
            cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
            cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
            cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		    cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
            cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		    cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
            cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
            cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
            cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		    cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
            cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
            cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
            cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
            cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;

		  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}

		void horipos4(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
			  cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
              cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
              cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;

			   cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}

		void horipos5(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
				  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
                cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
                cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	            cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			    cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
			    cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
                cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			    cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			    cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	            cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		        cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			    cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		        cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	            cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			    cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			    cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		        cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			    cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			    cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;

			  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}

		void horipos6(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	         cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
             cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
             cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
             cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
             cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		     cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
             cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
             cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			 cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	         cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		     cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
             cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			 cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		     cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
             cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
             cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
             cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		     cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
             cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;


			   cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos7(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	          cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			  cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
              cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
              cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		      cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
              cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			  cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			  cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
              cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		      cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
              cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			  cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		      cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
              cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		      cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;

			  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos8(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){
			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	          cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
	 cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;

			 cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos9(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	       cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;

			 cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos10(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	          cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		      cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			   cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
			cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;

			 cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos11(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;

			  cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
			cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
		      cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos12(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
			cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
			cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;

			  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos13(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	 		cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
			cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;

 cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos14(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;

			cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;

	  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos15(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
				cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			    cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		            cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;

			  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}

		void horipos16(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	     cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;

			 cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}

		void horipos17(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	   cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;

		 cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}

		void horipos18(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	    	cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
	cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
		       cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos19(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	    cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;
		cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;

		  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


		void horipos20(string ts,int s,string hs1,string ai1,string hs11,string hs2,string ai2,string hs22,string hs3,string ai3,string hs33,string hs4,string ai4,string hs44,string hs5,string ai5,string hs55,string hs6,string ai6,string hs66,string hs7,string ai7,string hs77,string hs8,string ai8,string hs88,string hs9,string ai9,string hs99,string hs10,string ai10,string hs1010,string hs110,string ai11,string hs1111,string hs12,string ai12,string hs1212,string hs13,string ai13,string hs1313,string hs14,string ai14,string hs1414,string hs15,string ai15,string hs1515,string hs16,string ai16,string hs1616,string hs17,string ai17,string hs1717,string hs18,string ai18,string hs1818,string hs19,string ai19,string hs1919,string hs20,string ai20,string hs2020){

			  cout<<endl;
			   cout<<endl;
			    cout<<endl;
			     cout<<endl;
			      cout<<endl;
			       cout<<endl;
			        cout<<endl;
			         cout<<endl;
	     	    cout<<spc<<hs20<<ai20<<hs2020<<enstr<<endl;
				 cout<<spc<<hs19<<ai19<<hs1919<<enstr<<endl;
			cout<<spc<<hs18<<ai18<<hs1818<<enstr<<endl;
			cout<<spc<<hs17<<ai17<<hs1717<<enstr<<endl;
	   cout<<spc<<hs16<<ai16<<hs1616<<enstr<<endl;
		  cout<<spc<<hs15<<ai15<<hs1515<<enstr<<endl;
				cout<<spc<<hs14<<ai14<<hs1414<<enstr<<endl;
			cout<<spc<<hs13<<ai13<<hs1313<<enstr<<endl;
		 cout<<spc<<hs12<<ai12<<hs1212<<enstr<<endl;
	          cout<<spc<<hs110<<ai11<<hs1111<<enstr<<endl;
			   cout<<spc<<hs10<<ai10<<hs1010<<enstr<<endl;
			  cout<<spc<<hs9<<ai9<<hs99<<enstr<<endl;
		   cout<<spc<<hs8<<ai8<<hs88<<enstr<<endl;
			  cout<<spc<<hs7<<ai7<<hs77<<enstr<<endl;
			  cout<<spc<<hs6<<ai6<<hs66<<enstr<<endl;
			 cout<<spc<<hs5<<ai5<<hs55<<enstr<<endl;
				 cout<<spc<<hs4<<ai4<<hs44<<enstr<<endl;
	          cout<<spc<<hs3<<ai3<<hs33<<enstr<<endl;
			    cout<<spc<<hs2<<ai2<<hs22<<enstr<<endl;
			  cout<<spc<<hs1<<ai1<<hs11<<enstr<<endl;

			  cout<<b1<<endl;
			  cout<<b2<<endl;
			  cout<<b3<<endl;
			  cout<<ts<<t1<<endl;
			  cout<<ts<<t2<<endl;
			  cout<<ts<<t3<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t4<<endl;
			  cout<<ts<<t5<<endl;
			  cout<<b4;
			  Sleep(s);
		}


void delay(int milliseconds)
{
    clock_t start = clock();
    while((clock() - start)*1000/CLOCKS_PER_SEC < milliseconds);
}
