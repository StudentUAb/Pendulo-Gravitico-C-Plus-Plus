/*
 *  UC: 21048 - Física Geral
 *  Ano 2022/23 - EFOLIO B - Gráfico Pêndulo Gravítico - UAb
 *  Aluno: 2100927 - Ivo Baptista
*/

#include <iostream>
#include <fstream>
#include <cmath>

#include "gnuplot-iostream.h"

int main() {
  // Constantes
  const double m = 0.0026;  // Massa em g
  const double L = 1.0;  // Comprimento em m
  const double rho = 1.28; // Coeficiente de arrasto aerodinâmico
  const double g = 9.81; // Aceleração da gravidade em m/s^2
  const double cd = 0.1;
  const double R = 0.3;

  const double A = M_PI * std::pow(R,2);

  const double b = (rho*cd*A)/2.0;

  // Valores iniciais
  double theta0 = 0.05;  // Ângulo inicial em rad
  double w0 = 0.0;       // Velocidade angular inicial em rad/s
  double t0 = 0.0;       // Tempo inicial em s
  const double h = 0.1;  // Passo de tempo em s

  // Arquivo para armazenar os resultados
  std::ofstream out("pendulo.csv");

  // Loop de tempo
  while (t0 < 100.0) {
    // Cálculo dos valores intermediários
      const double k1x = w0;
      const double k1v = -std::copysign(1, w0) * (((b*L)/m) * std::pow(w0,2)) - (g / L) * theta0;
      const double k2x = w0 + k1v * h;
      const double k2v = -std::copysign(1, w0 + k1v * h) * (((b*L)/m )* std::pow((w0 + k1v * h),2)) - (g / L) * (theta0 + k1x * h);


    // Atualização dos valores de θ e w
    theta0 = theta0 + ((k1x + k2x) / 2.0)*h;
    w0 = w0 + ((k1v + k2v) / 2.0)*h;

    // Atualização do tempo
    t0 = t0 + h;

    // Salva os resultados no arquivo
    out << t0 << " " << theta0 << " " << w0<< " " << k1x << " " << k1v << " "<< k2x<< " " << k2v<< " " << std::endl;
  }
  out.close();

  // Cria o gráfico usando a biblioteca Gnuplot
  Gnuplot gp;
  gp << "set xlabel 't (s)'"<< std::endl;
  gp << "set ylabel 'θ (rad), w (rad/s)'" << std::endl;
  gp << "plot 'pendulo.dat' using 1:2 with lines lc rgb 'red', 'pendulo.dat' using 1:3 with lines lc rgb 'blue'" << std::endl;

 return 0;
 }

