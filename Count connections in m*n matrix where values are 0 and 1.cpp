
#include <bits/stdc++.h> 
using namespace std; 

#define ROW 5 
#define COL 5 


bool isSafe(int M[][COL], int row, int col) 
{ 
    if((row >= 0) && (row < ROW) && (col >= 0) && (col < COL) && (M[row][col]))
	return true;
	else
	return false;
} 

void DFS(int M[][COL], int row, int col, int &count) 
{ 

	static int rowNbr[] = { 0, 1, 1, -1 }; 
	static int colNbr[] = { 1, 1, 0, 0 }; 


	for (int k = 0; k < 4; ++k) 
		if (isSafe(M, row + rowNbr[k], col + colNbr[k])) {
		    if(M[row + rowNbr[k]][col + colNbr[k]]==1)
		    count++;
		}

} 

int countConn(int M[][COL]) 
{ 
	int count = 0; 
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {

			if (M[i][j]==1) { 
				
				DFS(M, i, j,count); 

			} }
	}

	return count; 
} 

int main() 
{ 
	int M[][COL] = { { 1, 0, 0, 1 }, 
					{ 0, 1, 1, 1 }, 
					{ 1, 0, 0, 1 } }; 

	cout << countConn(M); 

	return 0; 
} 

