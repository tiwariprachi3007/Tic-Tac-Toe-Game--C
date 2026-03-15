#include <stdio.h>

char board[3][3];
char currentPlayer = 'X';

/* Initialize board */
void initBoard() {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j] = ' ';
}

/* Display position guide */
void showGuide(){
    printf("\nPosition Guide:\n");
    printf(" 0,0 | 0,1 | 0,2\n");
    printf(" ----|-----|----\n");
    printf(" 1,0 | 1,1 | 1,2\n");
    printf(" ----|-----|----\n");
    printf(" 2,0 | 2,1 | 2,2\n\n");
}

/* Print board */
void printBoard() {
    printf("\nCurrent Board:\n\n");

    for(int i=0;i<3;i++) {
        printf(" ");
        for(int j=0;j<3;j++) {
            printf(" %c ", board[i][j]);
            if(j<2) printf("|");
        }
        printf("\n");

        if(i<2)
            printf(" ---|---|---\n");
    }
    printf("\n");
}

/* Check winner */
char checkWinner() {

    for(int i=0;i<3;i++){
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=' ')
            return board[i][0];

        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=' ')
            return board[0][i];
    }

    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=' ')
        return board[0][0];

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[0][2]!=' ')
        return board[0][2];

    return ' ';
}

/* Check if board full */
int isFull(){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[i][j]==' ')
                return 0;

    return 1;
}

/* Switch player */
void switchPlayer(){
    currentPlayer = (currentPlayer=='X') ? 'O' : 'X';
}

/* Main game logic */
void playGame(){

    int row,col;
    char winner=' ';

    initBoard();
    currentPlayer='X';

    printf("\n🎮 Welcome to Tic-Tac-Toe!\n");
    printf("Player 1 = X\nPlayer 2 = O\n");

    showGuide();

    while(winner==' ' && !isFull()){

        printBoard();

        printf("Player %c, enter row and column (0-2): ",currentPlayer);

        if(scanf("%d %d",&row,&col)!=2){
            printf("⚠ Invalid input! Please enter numbers.\n");

            while(getchar()!='\n');
            continue;
        }

        if(row<0 || row>2 || col<0 || col>2){
            printf("⚠ Position out of range. Try again.\n");
            continue;
        }

        if(board[row][col] != ' '){
            printf("⚠ That spot is already taken!\n");
            continue;
        }

        board[row][col] = currentPlayer;

        winner = checkWinner();

        if(winner!=' ')
            break;

        switchPlayer();
    }

    printBoard();

    if(winner!=' ')
        printf("🏆 Congratulations! Player %c wins!\n",winner);
    else
        printf("🤝 It's a draw! Good game!\n");
}

/* Main function */
int main(){

    char choice;

    do{
        playGame();

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c",&choice);

    }while(choice=='y' || choice=='Y');

    printf("\nThanks for playing Tic-Tac-Toe! 👋\n");

    return 0;
}
