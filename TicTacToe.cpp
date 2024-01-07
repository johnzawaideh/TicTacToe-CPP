#include <iostream>
using namespace std;


char board[] = {'1','2','3','4','5','6','7','8','9'};



void Play() {

	int num; 
	bool draw = 1; 
	for(int i = 0; i<10; i++) {
		if(i<10)
			system("cls");
		cout<<endl;
		for(int z = 0; z<9; z+=3) {
			cout<<"   "<<board[z]<<" | "<<board[z+1]<<" | "<<board[z+2]<<endl;
			if (z<6)
				cout<<"  ---|---|---"<<endl;
		}
		if(i<10) {
			if(board[0]==board[1]&&board[1]==board[2]){
				if (board [0] == 'X') {
					draw = 0;
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
				}
				else {
					cout<<endl<<"  PLAYER 2 WINS"<<endl; 
					draw = 0;
				}
				break;
			}
			if (board[3]==board[4]&&board[4]==board[5]) {
				if (board[3]=='X') {
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
					draw = 0;
				}
				else {
					cout<<endl<<"  PLAYER 2 WINS"<<endl;
					draw = 0;
				}
				break;
			}
			if (board[6]==board[7]&&board[7]==board[8]) {
				if (board[6]=='X') {
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
					draw = 0;
				}
				else {
					cout<<endl<<"  PLAYER 2 WINS"<<endl; 
					draw = 0;
				}
				break;
			}
			if (board[0]==board[3]&&board[3]==board[6]) {
				if (board[0]=='X') {
					draw = 0;
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
				}
				else {
					cout<<endl<<"  PLAYER 2 WINS"<<endl;
					draw = 0;
				}
				break;
			}
			if (board[1]==board[4]&&board[4]==board[7]) {
				if (board[1]=='X') {
					draw = 0;
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
				}
				else {
					draw = 0;
					cout<<endl<<"  PLAYER 2 WINS"<<endl;
				}
				break;
			}
			if (board[2]==board[5]&&board[5]==board[8]) {
				if (board[2]=='X') {
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
					draw = 0;
				}
				else {
					cout<<endl<<"  PLAYER 2 WINS"<<endl;
					draw = 0;
				}
				break;
			}
			if (board[0]==board[4]&&board[4]==board[8]) {
				if (board[0]=='X') {
					draw = 0;
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
				}
				else {
					cout<<endl<<"  PLAYER 2 WINS"<<endl;
					draw = 0;
				}
				break;
			}
			if (board[2]==board[4]&&board[4]==board[6]){
				if (board[2]=='X') {
					draw = 0;
					cout<<endl<<"  PLAYER 1 WINS"<<endl;
				}
				else {
					draw = 0;
					cout<<endl<<"  PLAYER 2 WINS"<<endl;
				}
				break;
			}
		}
		if (i<9) {
			bool flag = 0;
			if(i%2==0){
			cout<<endl<<"Player 1: ";
			cin>>num;
			while (board[num-1] == 'X' || board[num-1] == 'O') {
				cout<<"Number has been picked, please choose another one: "; 
				cin>>num;	
			}
				board[num-1] = 'X';
	}
			else {
			cout<<endl<<"Player 2: ";
			cin>>num;
			while (board[num-1] == 'X' || board[num-1] == 'O') {
				cout<<"Number has been picked, please choose another one: "; 
				cin>>num;	
			}
			board[num-1] = 'O';
		}
			
		}
		if (i==9)
			if (draw)
				cout<<"GAME IS A DRAW"<<endl;
		}
}

int main() {

	Play();
	system("pause");
}
