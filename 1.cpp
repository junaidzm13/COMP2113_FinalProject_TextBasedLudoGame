#include <iostream>


using namespace std;


int main() {
  string a[15][15];
  for (int i=0; i<15; ++i){
    for (int j=0; j<15;++j){
      if ((j==6|| j==7||j==8||i==6||i==7||i==8) && (j!=i) && (j+i!=14)){
        a[i][j]="XX";
      }
      else{
        a[i][j]="  ";
      }
    }
  }
  a[1][1]="R1";
  a[1][3]="R2";
  a[3][1]="R3";
  a[3][3]="R4";
  a[1][11]="Y1";
  a[1][13]="Y2";
  a[3][11]="Y3";
  a[3][13]="Y4";
  a[11][1]="B1";
  a[11][3]="B2";
  a[13][1]="B3";
  a[13][3]="B4";
  a[11][11]="G1";
  a[11][13]="G2";
  a[13][11]="G3";
  a[13][13]="G4";
  a[6][1]="SS";
  a[1][8]="SS";
  a[8][13]="SS";
  a[13][6]="SS";
  a[7][6]="RH";
  a[6][7]="YH";
  a[7][8]="GH";
  a[8][7]="BH";
  a[7][1]="RS";
  a[7][2]="RS";
  a[7][3]="RS";
  a[7][4]="RS";
  a[7][5]="RS";
  a[1][7]="YS";
  a[2][7]="YS";
  a[3][7]="YS";
  a[4][7]="YS";
  a[5][7]="YS";
  a[7][13]="GS";
  a[7][12]="GS";
  a[7][11]="GS";
  a[7][10]="GS";
  a[7][9]="GS";
  a[13][7]="BS";
  a[12][7]="BS";
  a[11][7]="BS";
  a[10][7]="BS";
  a[9][7]="BS";
  for (int i=0; i<15; ++i){
    for (int j=0; j<15;++j){
      cout << a[i][j]<<" ";
    }
    cout <<endl;
  }

}