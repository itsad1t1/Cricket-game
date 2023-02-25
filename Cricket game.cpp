//Cricket Game application
#include <iostream>
#include<string>
#include<ctime>
#include<unistd.h>
#include<cstdlib>

using namespace std;


class Team{
	
	public:
		void welcomeUsers();
		void displayPlayers();
		void display();
		int runs;
  		
};

//Declaring prototypes

int playInning();
void selectBatsmanAndBowlerTeamA();
void selectBatsmanAndBowlerTeamB();
void decideWinner(int, int);
void DisplayB();
void DisplayA();


/* Greeting users with a welcome message*/
void Team::welcomeUsers(){
	cout<<"\n****************************************************************************************************\n"<<endl;
	cout<<"\t\t\t\tWelcome to the mini Cricket Game\n\n";
	cout<<"\n****************************************************************************************************\n"<<endl;
	usleep(20000);
}

void Team::displayPlayers(){
	string TeamA,TeamB;
	cout<<"\n Displaying the Players name.....";
	cin.get();
	
	usleep(1000*1000);
	cout<<"---------------------------------------------------------------------------------------------------"<<endl;
	cout<<"****************************************TeamA******************************************************\n(1) Aditya  \n(2) Sachin  \n(3) Aishin\n  "<<TeamA<<endl;
  	cout<<"****************************************TeamA******************************************************\n(1) Aditi   \n(2) Saloni  \n(3) Iltabish\n"<<TeamB<<endl;
    cout<<"---------------------------------------------------------------------------------------------------"<<endl;

}

void Team::display(){
	cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t[ThankYou]"<<endl;
	cout<<"\n---------------------------------------------------------------------------------------------------"<<endl;
	usleep(20000);
	
}

int main(){
	
	Team obj;
	obj.welcomeUsers();
	obj.displayPlayers();
	
	Team teamA;
	DisplayA();
	selectBatsmanAndBowlerTeamA();
	teamA.runs=playInning();
	
	
	Team teamB;
	DisplayB();
	selectBatsmanAndBowlerTeamB();
	teamB.runs=playInning();
	
	obj.display();
	decideWinner(teamA.runs,teamB.runs);
	
	return 0;
}

void DisplayA(){
	cout<<"\nPress Enter to start first inning";
	cin.get();
	usleep(300000);
	cout<<"First Inning Starts.................\n";
}

void selectBatsmanAndBowlerTeamA(){
	
	cout<<"----------------------------------------Team A will be the Batting Team------------------------------------\n";
	srand((unsigned) time(0));
	int res=1+(rand()%3);
	switch(res){
		case 1:
		printf("Aditya");
		break;
		case 2:
		printf("Sachin");
		break;
		case 3:
		printf("Aishin");
		break;
		default:
			printf("Error");
			break;
		
	}
	
	cout<<"  is the batsman from batting team\n"<<endl;
	usleep(30000*10000);
	cout<<"-------------------------------------Team B will be the Bowling Team-----------------------------------------\n";
	srand((unsigned)time(0));
	int Result=1+(rand()%3);
	switch(Result){
		case 1:
			printf("Aditi");
			break;
		case 2:
		    printf("Saloni");
		    break;
		case 3:
			printf("Iltabish");
			break;
			
	}
	cout<<" is the bowler from the bowling team\n"<<endl;
	
	}
	
	int playInning(){
		int runs,totalRuns=0;
		srand((unsigned)time(0));
		
		for(int i=0;i<5;i++){
			runs=(rand()%6)+1;
			cout<<"\nGenerating Runs.......";
			cin.get();
			usleep(10000);
			cout<<"runs:"<<runs<<endl;
			totalRuns+=runs;
		}
		cout<<"\nPress enter to get Final Result";
		cin.get();
		usleep(20000);
		cout<<"Final runs scored by the team:-"<<totalRuns<<endl;
		return runs;
	}
	
	void DisplayB(){
		
		cout<<"\nStarting Second Inning............";
		cin.get();
		usleep(30000*10000);
		cout<<"Second Inning starts.............\n";
	}


    void selectBatsmanAndBowlerTeamB(){
    	
    	cout<<"---------------------------------------------Team B is the batting team----------------------------------------\n";
    	srand((unsigned)time(0));
    	int result=1+(rand()%3);
    	switch(result){
    		case 1:
    			printf("Aditi");
    			break;
    		case 2:
				printf("Saloni");
				break;
			case 3:
				printf("Iltabish");
				break;
		}
		cout<<"  is the Batsman from the Batting team\n"<<endl;
		usleep(20000);
		cout<<"--------------------------------------------Team A is Bowling Team----------------------------------------------\n";
		srand((unsigned)time(0));
		int Result=1+(rand()%3);
		switch(Result){
			case 1:
				printf("Aditya");
				break;
				case 2:
					printf("Sachin");
					break;
					case 3:
						printf("Aishin");
						break;
						default:
							printf("Error");
							break;
		}
		cout<<" is the bowler from the Bowling Team"<<endl;
	}
	void decideWinner(int teamAScore,int teamBScore){
		
		if(teamAScore> teamBScore){
			cout<<"\t\t\t [Team A is the Winner!!!!!]"<<endl;
		}
		else if(teamAScore< teamBScore){
			cout<<"\t\t\t[Team B is the Winner!!!!!]"<<endl;
		}
		else{
			cout<<"\t\t\tMatch Draw"<<endl;
		}
	}
