
<h1 align="center">
    <img width="600" src="cplusplus.png" />
</h1>


<p align="center">
Grafico sobre Pêndulo Gravítico
</p>

📌 Minha pagina do Pêndulo Gravítico
------------------
EfolioB de Física Geral, programa que simula o grafico do movimento de um Pêndulo, baseando numa formula para angulos pequenos, o metodo aplicado foi o Huen, este programa também cria um ficheiro .CSV com a tabela com os resultados esperados.
A forma de criar o gráfico foi com a biblioteca GNUPLOT, não existe parte gráfica no C++, existe bibliotecas feitas em C++ que utilizão interfaces gráficas.

O pêndulo gravítico tem um movimento harmónico simples quando todas as forças resistentes não, são consideradas.
Quando as forças resistentes, como a resistência do ar, são apreciáveis então verifica-se uma diminuição exponencial da amplitude e da velocidade angular ao longo do tempo.
Pela análise do gráfico obtido verifica-se que ocorre um amortecimento gradual da amplitude e da velocidade angular devido à resistência do ar. 
 
Para compilar colocamos na mesma pasta o ficheiro CMakeLists e o main.cpp e no terminal escrevemos:
<strong>cmake -S . -B out</strong>
<strong>cmake --build out</strong>

<strong>OU</strong>

<strong>cmake -S . -B out</strong> 
<strong>cd out </strong>
<strong>make</strong>



<img src="grafico.jpg" >


🔧 Tecnologias utilizadas:
------------------

- <strong>C++</strong>
- <strong>QtCreator</strong>
- <strong>CMake</strong>
- - <strong>MacOS</strong>

💬 Fale comigo
------------------
[*Entre em contato comigo*](https://www.linkedin.com/in/ivo-baptista-3712144/)















