#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int row, col, init_col, mov;
string sym;
int** matrix;
int** block;
fstream in_file;
fstream out_file;

int T1[4][4]={0,0,0,0,
              0,0,0,0,
              1,1,1,0,
              0,1,0,0};

int T2[4][4]={0,0,0,0,
              0,1,0,0,
              1,1,0,0,
              0,1,0,0};

int T3[4][4]={0,0,0,0,
              0,0,0,0,
              0,1,0,0,
              1,1,1,0};

int T4[4][4]={0,0,0,0,
              1,0,0,0,
              1,1,0,0,
              1,0,0,0};

int L1[4][4]={0,0,0,0,
              1,0,0,0,
              1,0,0,0,
              1,1,0,0};

int L2[4][4]={0,0,0,0,
              0,0,0,0,
              1,1,1,0,
              1,0,0,0};

int L3[4][4]={0,0,0,0,
              1,1,0,0,
              0,1,0,0,
              0,1,0,0};

int L4[4][4]={0,0,0,0,
              0,0,0,0,
              0,0,1,0,
              1,1,1,0};

int J1[4][4]={0,0,0,0,
              0,1,0,0,
              0,1,0,0,
              1,1,0,0};

int J2[4][4]={0,0,0,0,
              0,0,0,0,
              1,0,0,0,
              1,1,1,0};

int J3[4][4]={0,0,0,0,
              1,1,0,0,
              1,0,0,0,
              1,0,0,0};

int J4[4][4]={0,0,0,0,
              0,0,0,0,
              1,1,1,0,
              0,0,1,0};

int S1[4][4]={0,0,0,0,
              0,0,0,0,
              0,1,1,0,
              1,1,0,0};

int S2[4][4]={0,0,0,0,
              1,0,0,0,
              1,1,0,0,
              0,1,0,0};

int Z1[4][4]={0,0,0,0,
              0,0,0,0,
              1,1,0,0,
              0,1,1,0};

int Z2[4][4]={0,0,0,0,
              0,1,0,0,
              1,1,0,0,
              1,0,0,0};

int I1[4][4]={1,0,0,0,
              1,0,0,0,
              1,0,0,0,
              1,0,0,0};

int I2[4][4]={0,0,0,0,
              0,0,0,0,
              0,0,0,0,
              1,1,1,1};

int O[4][4]={0,0,0,0,
             0,0,0,0,
             1,1,0,0,
             1,1,0,0};
void choose_block(string sym) {
    if(sym=="T1")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=T1[i][j];
                    
                
    else if(sym=="T2")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=T2[i][j];
                        
                    
    else if(sym=="T3")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=T3[i][j];
                        
                    
    else if(sym=="T4")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=T4[i][j];
                        
                    
    else if(sym=="L1")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=L1[i][j];
                        
                    
    else if(sym=="L2")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=L2[i][j];
                        
                    
    else if(sym=="L3")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=L3[i][j];
                        
                    
    else if(sym=="L4")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=L4[i][j];
                        
                    
    else if(sym=="J1")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=J1[i][j];
                        
                    
    else if(sym=="J2")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=J2[i][j];
                        
                    
    else if(sym=="J3")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=J3[i][j];
                        
                    
    else if(sym=="J4")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=J4[i][j];
                        
                    
    else if(sym=="S1")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=S1[i][j];
                        
                    
    else if(sym=="S2")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=S2[i][j];
                        
                    
    else if(sym=="Z1")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=Z1[i][j];
                        
                    
    else if(sym=="Z2")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=Z2[i][j];
                        
                    
    else if(sym=="I1")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=I1[i][j];
                        
                    
    else if(sym=="I2")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=I2[i][j];
            
    else if(sym=="O")
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                block[i][j]=O[i][j];
}



int fall_blocks(void) {
    int ini_col = init_col-1;
    int tmp_col, down_num = 60;
    int pos[4] = {60, 60, 60, 60};
    bool fall_again = false;
    for(int j=0; j<4; j++){                 //計算第一次的fall，j為column
        int i = 0, m = 3, n = 0;
        
        tmp_col = ini_col + j;
        if(tmp_col >= col)
            break;
        
        while(i < row) {
            if(matrix[i][tmp_col] == 0)
                i++;
            else break;
        }
        
        while(m >= 0 && block[m][j] == 0) {
            m--;
            n++;
            if(m < 0)
                n = 60;
        }
        pos[j] = n;                         //計算這種block裡面
                                            //各個column最底部的1在哪個位子
        i = i + n;
        if(i < down_num)
            down_num = i;                   //down_num是第一次下降格數
    }
    int second_down = 60;                   //second_down是第二次下降格數
    for(int j=0; j<4; j++) {                //計算平移後第二次的fall
        if(pos[j] != 60){
            int tmp_row = down_num-1-pos[j];
            int cout_space = 0;
            for(int k = tmp_row+1 ; k<row; k++){
                if(matrix[k][j+ini_col+mov] == 0) cout_space++;
                else break;
            }
            if(cout_space < second_down) second_down = cout_space;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(block[3-i][j] == 1 && down_num+second_down-1-i >= 0){
                matrix[down_num+second_down-1-i][j+ini_col+mov] += block[3-i][j];
                block[3-i][j] = 0;
            }else if(down_num+second_down-1-i < 0)
                fall_again = true;
        }
    }
    
    if(fall_again) return 0;
    else return 1;
}

int fall_again(void){
    int ini_col = init_col-1;
    int tmp_col, down_num = 60;
    bool valid = true;
    
    for(int j=0; j<4; j++){
        int i = 0, m = 3, n = 0;
        tmp_col = ini_col + j;
        if(tmp_col >= col)
            break;
       
        while(i < row) {
            if(matrix[i][tmp_col] == 0)
                i++;
            else break;
        }
        
        while(m >= 0 && block[m][j] == 0) {
            m--;
            n++;
            if(m < 0)
                n = 60;
        }
        i = i + n;
        if(i < down_num)
            down_num = i;
    }
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++){
            if(block[3-i][j] == 1 && down_num-1-i >= 0) {
                matrix[down_num-i-1][j+ini_col] += block[3-i][j];
            }else if(down_num-1-i < 0) valid = false;
        }
    
    if(!valid) return 0;
    else return 1;
}

void check_matrix(void) {
    bool delete_row;
    for(int i=0; i<row; i++) {
        delete_row = true;
        for(int j=0;j<col;j++)
            if(matrix[i][j]==0)
                delete_row=false;

        if(delete_row) {
            for(int m=i; m>0; m--)
                for(int n=0; n<col; n++)
                    matrix[m][n] = matrix[m-1][n];
            for(int j=0; j<col; j++)
                matrix[0][j]=0;
        }
        
    }
}
int main(int argc, char *argv[]) {
    string filename(argv[1]);
    in_file.open(filename, ios::in);
    if(!in_file) {
            cout<< "Can't open in_file!\n";
    }
    in_file>>row>>col;
    matrix = new int*[row];
    for(int i=0; i<row; i++) {
        matrix[i] = new int[col];
    }

    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            matrix[i][j] = 0;

    block = new int*[4];
    for(int i=0; i<4; i++) {
        block[i] = new int[4];
    }

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            block[i][j]=0;

    while(in_file >> sym) {
        int valid;
        if(sym == "End") {
            break;
        }
        in_file >> init_col >> mov;
        
        choose_block(sym);
        
        valid = fall_blocks();
        check_matrix();
        if(!valid){
            valid = fall_again();
        }
        check_matrix();
    }
    in_file.close();
    out_file.open("108000210_proj1.final", ios::out);

    if(!out_file) {
        cout<< "Can't open out_file!\n";
    }
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++){
            if(j == 0) out_file << matrix[i][j];
            else out_file << " " << matrix[i][j];
        }
        out_file << endl;
    }
    out_file.close();
    return 0;
}
