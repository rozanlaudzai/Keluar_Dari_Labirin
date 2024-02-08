#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

const short batas = 10;
short x = 8, y = 0, menang = 0;

char arr[batas][batas] = {
  {'&','&','&','&','&','&','&','&','*','&'},
  {'&','*','*','*','*','*','*','*','*','&'},
  {'&','&','*','&','&','&','&','&','*','&'},
  {'&','&','*','&','*','*','*','*','*','&'},
  {'&','&','*','&','*','&','&','&','*','&'},
  {'&','*','*','*','&','*','*','*','*','&'},
  {'&','*','&','&','&','&','*','&','*','&'},
  {'&','*','*','&','&','*','&','*','*','&'},
  {'&','&','*','*','*','*','&','*','&','&'},
  {'&','&','&','&','&','#','&','&','&','&'}
};

void print() {
  printf("\n");
  for (short i = 0; i < batas; ++i) {
    for (short j = 0; j < batas; ++j) {
      if (i == y && j == x)
        printf(" ");
      else
        printf("%c ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {

  system("cls");
  printf("\n======= Keluar Dari Labirin =======\n\n\n\n\n\n\n\n\n\n");
  system("pause");
  system("cls");
  printf("\n============ Ketentuan ============\n\n1. '' => ini kamu\n2. '*' => jalan kosong\n3. '&' => dinding\n4. '#' => jalan keluar\n5. Kamu akan kalah jika kamu nabrak dinding\n6. Keluarlah dari labirin tersebut\n\n\n");
  system("pause");
  system("cls");
  printf("\n============= Kontrol =============\n\n1. 'w' => atas\n2. 'a' => kiri\n3. 's' => bawah\n4. 'd' => kanan\n\n\n\n\n");
  system("pause");
  system("cls");

  print();

  while (true) {
    char a = getch();
    if (a == 'w')
      --y;
    else if (a == 's')
      ++y;
    else if (a == 'a')
      --x;
    else if (a == 'd')
      ++x;
    
    if (y < 0)
      ++y;
    system("cls");
    print();
    
    if (arr[y][x] == '#') {
      menang = 1;
      break;
    }
    if (arr[y][x] == '&')
      break;
  }

  if (menang)
    printf("\n\nSELAMAT KAMU MENANG!!!!\n\n\n");
  else
    printf("\n\nYAAHHH KAMU KALAH :(\n\n\n");
  system("pause");

}
