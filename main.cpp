/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//João Kleber Magalhães dos Santos
//221006781
//Lista 2 POO
//Questão 3 
//Uma papelaria precisa melhorar seu sistema de cadastros de produtos, 
//desenvolva um sistema de cadastro que guarde os diferentes produtos 
//( cadernos, canetas e mochilas) em um arquivo de texto.

#include <iostream>
#include <fstream>
using namespace std;

class Produto{
  
    //Classe que representa os produtos de uma 
    //papelaria
  
    protected:
  
    string nome;
    int quantidade;
    float preco;
  
    public:
  
    Produto(){
        
        //Construtor da classe Produto
        
        this -> nome = "N/A";
        this -> quantidade = 0;
        this -> preco = 0;
    }
    
    void setNome (string nome_entrada){
        
        //Método set, que recebe uma string de 
        //entrada, que altera o atributo nome
        
        this -> nome = nome_entrada;
    }
    
    string getNome (){
        
        //Método get que retorna o atributo
        //string nome
        
        return this -> nome; 
    }
    
    void setQuantidade (int quantidade_entrada){
        
        //Método set, que recebe um inteiro de 
        //entrada, que altera o atributo quantidade
        
        this -> quantidade = quantidade_entrada;
    }
    
    int getQuantidade (){
        
        //Método get que retorna o atributo
        //inteiro quantidade
        
        return this -> quantidade; 
    }
    
    void setPreco (float preco_entrada){
        
        //Método set, que recebe um real de 
        //entrada, que altera o atributo preço
        
        this -> preco = preco_entrada;
    }
    
    int getPreco (){
        
        //Método get que retorna o atributo
        //real preço
        
        return this -> preco; 
    }
    
    void exibe (){
        
        //Método que imprime, pela saída padrão,
        //os valores dos atributos da classe.
        
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Quantidade: " << quantidade << endl;
    }
    
    void cadastra(){
        
        //Método que cadastra um objeto da classe produto 
        
        cout << "Digite o nome: " << endl;
        cin >> nome;
        cout << "Digite o preco: " << endl;
        cin >> preco;
        cout << "Digite a quantidade: " << endl;
        cin >> quantidade;
    }
    
    void imprimir(){
        
        //Método que escreve as informções em um arquivo .txt
        
        ofstream MyFile("arquivos.txt",ios::app);
        
        // Write to the file
        MyFile << "{ Nome:" << nome << " Preço:" << preco << " Quantidade:"
               << quantidade << " }\n";
    
        // Close the file
        MyFile.close();
    }
};

class Caneta: public Produto{
  
    //Classe que representa uma caneta
  
    string cor;
    string marca;
  
    public:
  
    Caneta (){
        
        //Método construtor da classe caneta, 
        //inicializando-os com valores sem
        //significado
        
        this -> nome = "Caneta";
        this -> quantidade = 0;
        this -> preco = 0;
        this -> cor = "N/A";
        this -> marca = "N/A";
    }
  
    void setCor (string cor_entrada){
        
        //Método set, que recebe uma string, que 
        //altera o atributo cor
        
        this -> cor = cor_entrada;
    }
    
    string getCor (){
        
        //Método get que recupera o valor do 
        //atributo cor
        
        return this -> cor;
    }
    
    void setMarca (string marca_entrada){
        
        //Método set, que recebe uma string, que 
        //altera o atributo marca
        
        this -> marca = marca_entrada;
    }
    
    string getMarca (){
        
        //Método get que recupera o valor do 
        //atributo marca 
        
        return this -> marca;
    }
    
    void exibe (){
        
        //Método que imprime, pela saída padrão,
        //os valores dos atributos da classe.
        
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Quantidade: " << quantidade << endl;
        cout << "Marca: " << marca << endl;
        cout << "Cor: " << cor << endl; 
    }
    
    void cadastra(){
        
        //Método que cadastra um objeto da classe caneta 
        
        cout << "Digite o preco da caneta: " << endl;
        cin >> preco;
        cout << "Digite a quantidade de canetas: " << endl;
        cin >> quantidade;
        cout << "Digite a marca da caneta: " << endl;
        cin >> marca;
        cout << "Digite a cor da caneta" << endl;
        cin >> cor;
    }
    
    void imprimir(){
        
        //Método que escreve as informções em um arquivo .txt
        
        ofstream MyFile("arquivos.txt",ios::app);
        
        // Write to the file
        MyFile << "{ Nome:" << nome << " Preço:" << preco << " Quantidade:"
               << quantidade << " Marca: " << marca << " Cor: " << cor 
               << " }\n";
    
        // Close the file
        MyFile.close();
    }
};

class Caderno:public Produto{
    
    //Classe que representa um Caderno
  
    int quantidade_materias;
    string marca;
  
    public:
  
    Caderno (){
        
        //Método construtor da classe caderno, 
        //inicializando-os com valores sem
        //significado
        
        this -> nome = "Caderno";
        this -> quantidade = 0;
        this -> preco = 0;
        this -> quantidade_materias = 0;
        this -> marca = "N/A";
    }
  
    void setQuantidadeMaterias (int quantidade_materias_entrada){
        
        //Método set, que recebe um inteiro, que 
        //altera o atributo quantidade de matérias
        
        this -> quantidade_materias = quantidade_materias_entrada;
    }
    
    int getQuantidadeMaterias (){
        
        //Método get que recupera o valor do 
        //atributo quantidade_materias
        
        return this -> quantidade_materias;
    }
    
    void setMarca (string marca_entrada){
        
        //Método set, que recebe uma string, que 
        //altera o atributo marca
        
        this -> marca = marca_entrada;
    }
    
    string getMarca (){
        
        //Método get que recupera o valor do 
        //atributo marca 
        
        return this -> marca;
    }
    
    void exibe (){
        
        //Método que imprime, pela saída padrão,
        //os valores dos atributos da classe.
        
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Quantidade: " << quantidade << endl;
        cout << "Marca: " << marca << endl;
        cout << "Quantidade de materias: " << quantidade_materias << endl; 
    }
    
    void cadastra(){
        
        //Método que cadastra um objeto da classe caderno 
    
        cout << "Digite o preco do caderno: " << endl;
        cin >> preco;
        cout << "Digite a quantidade de cadernos: " << endl;
        cin >> quantidade;
        cout << "Digite a marca do caderno: " << endl;
        cin >> marca;
        cout << "Digite quantas materias o caderno possui: " << endl;
        cin >> quantidade_materias;
    }
    
    void imprimir(){
        
        //Método que escreve as informções em um arquivo .txt
        
        ofstream MyFile("arquivos.txt",ios::app);
        
        // Write to the file
        MyFile << "{ Nome:" << nome << " Preço:" << preco << " Quantidade:"
               << quantidade << " Marca: " << marca 
               << " Quantidade de matérias: " << quantidade_materias 
               << " }\n";
    
        // Close the file
        MyFile.close();
    }
};

class Mochila : public Produto{
  
    //Classe que representa uma mochila
  
    string cor;
    string marca;
    float volume;
  
    public:
  
    Mochila (){
        
        //Método construtor da classe caneta, 
        //inicializando-os com valores sem
        //significado
        
        this -> nome = "Mochila";
        this -> quantidade = 0;
        this -> preco = 0;
        this -> cor = "N/A";
        this -> marca = "N/A";
        this -> volume = 0;
    }
  
    void setCor (string cor_entrada){
        
        //Método set, que recebe uma string, que 
        //altera o atributo cor
        
        this -> cor = cor_entrada;
    }
    
    string getCor (){
        
        //Método get que recupera o valor do 
        //atributo cor
        
        return this -> cor;
    }
    
    void setMarca (string marca_entrada){
        
        //Método set, que recebe uma string, que 
        //altera o atributo marca
        
        this -> marca = marca_entrada;
    }
    
    string getMarca (){
        
        //Método get que recupera o valor do 
        //atributo marca 
        
        return this -> marca;
    }
    
    void setVolume (float volume_entrada){
        
        //Método set, que recebe um float, que 
        //altera o atributo volume
        
        this -> volume = volume_entrada;
    }
    
    float getVolume (){
        
        //Método get que recupera o valor do 
        //atributo volume 
        
        return this -> volume;
    }
    
    void exibe (){
        
        //Método que imprime, pela saída padrão,
        //os valores dos atributos da classe.
        
        cout << "Nome: " << nome << endl;
        cout << "Preco: " << preco << endl;
        cout << "Quantidade: " << quantidade << endl;
        cout << "Marca: " << marca << endl;
        cout << "Cor: " << cor << endl;
        cout << "Volume: " << volume << endl;
    }
    
    void cadastra(){
        
        //Método que cadastra um objeto da classe mochila 
        
        cout << "Digite o preco da mochila: " << endl;
        cin >> preco;
        cout << "Digite a quantidade de mochilas: " << endl;
        cin >> quantidade;
        cout << "Digite a marca da mochila:" << endl;
        cin >> marca;
        cout << "Digite a cor da mochila: " << endl;
        cin >> cor;
        cout << "Digite o volume que cabe na mochila:" << endl;
        cin >> volume;
    }
    
    void imprimir(){
        
        //Método que escreve as informções em um arquivo .txt
        
        ofstream MyFile("arquivos.txt",ios::app);
        
        // Write to the file
        MyFile << "{ Nome:" << nome << " Preço:" << preco << " Quantidade:"
               << quantidade << " Marca: " << marca << " Cor: " << cor 
               << " Volume: " << volume << " }\n";
    
        // Close the file
        MyFile.close();
    }
};

int main()
{
    
    //Declaração dos objetos e variáveis auxiliares
    
    Mochila backpack;
    Caneta pencil;
    Caderno notebook;
    int menu;
    char prod;
    
    while(3){
		
		// Menu para controle do programa.
		
		cout << "1- Verificar um produto" << endl;
		cout << "2- Cadastrar um produto" << endl;
		cout << "3- Sair" << endl;
		
		cin >> menu;
		
		switch(menu){
			
			case 1:{
			    
			    //Menu para selecionar o tipo de produto
			    
			    cout << "Qual produto deseja verificar?" << endl;
			    cout << "caderno - c" << endl;
			    cout << "caneta - p" << endl;
			    cout << "mochila - m" << endl;
			    cin >> prod;
				switch(prod){
				    case 'p':{
				        pencil.exibe();
				        break;
				    }
				    case 'c':{
				        notebook.exibe();
				        break;
				    }
				    case 'm':{
				        backpack.exibe();
				        break;
				    }
				    default:{
				        break;
				    }
				}
				break;
			}
			
			case 2:{
			    
			    //Menu para selecionar o tipo de produto
			    
				cout << "Qual produto deseja cadastrar?" << endl;
			    cout << "caderno - c" << endl;
			    cout << "caneta - p" << endl;
			    cout << "mochila - m" << endl;
			    cin >> prod;
			    
			    switch (prod){
			        case 'c':{
			            notebook.cadastra();
			            notebook.imprimir();
			            break;
			        }
			        case 'p':{
			            pencil.cadastra();
			            pencil.imprimir();
			            break;
			        }
			        case 'm':{
			            backpack.cadastra();
			            backpack.imprimir();
			            break;
			        }
			        default:{
			            break;
			        }
			    }
				break;
			}
			
			case 3:{
				
				exit(3);  // Comando de saída do menu
				
				break;
			}
		
			
		}		
}	
    
    return 0;
}