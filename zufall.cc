#include <iostream>


double zufall() {
  int static Ij = 5;
  int a = 5;
  int c = 3;
  int static m = 16;
  double u =0;
  Ij = (a*Ij + c) % m;
  u = ((double) Ij)/m;
  /* std::cout << Ij << " " << u << std::endl;*/
  return u;
}

int main() {
  int N = 100;
  int Nin = 0;
  double x = 0;
  double y = 0;
  for(int k = 1; k < N; k++){
    x = zufall();
    y = zufall();
  /*std::cout << x << " " << y << std::endl;*/
    if(x*x + y*y <= 1){
      Nin++;
    }
    }
  double out = 4*Nin/N;
  std::cout << "Nin: " << Nin << "pi: " << out << std::endl;
}
