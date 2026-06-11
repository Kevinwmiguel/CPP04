Polymorphism - Create array of Dogs and Cats
Deep Copy (Dog) - Copy constructor shows independent Brain objects
Deep Copy (Cat) - Same for Cat
Assignment Operator - Dog assignment creates a new Brain (not shared)
Tests show deep copy works when:

Modifying dog2's ideas doesn't affect dog1's ideas
Modifying cat2's ideas doesn't affect cat1's ideas
Modifying dog4's ideas doesn't affect dog3's ideas after assignment


1. Herança: O que é e porquê usarHerança permite criar novas classes que herdam características (atributos e métodos) de classes existentes.Conceito: Cria uma relação de "é um" (ex: um Cachorro é um Animal).Porquê usar: Evita a repetição de código e cria uma hierarquia organizada.cppclass Animal {
public:
    void comer() { /* Código comum a todos os animais */ }
};

// Cachorro herda de Animal
class Cachorro : public Animal {
public:
    void latir() { /* Código específico do cachorro */ }
};
Use o código com cuidado.2. Polimorfismo: O que é e porquê usarPolimorfismo significa "muitas formas". Permite tratar objetos de classes diferentes (mas que herdam da mesma base) de maneira uniforme.Conceito: Chamar o mesmo método em objetos diferentes e obter comportamentos diferentes.Porquê usar: Permite que o programa seja genérico e expansível sem alterar o código principal.


3. virtual: Quando e porquê usarPor padrão, o C++ decide qual função chamar em tempo de compilação (Static Binding). A palavra-chave virtual avisa o compilador para decidir em tempo de execução (Dynamic Binding), com base no tipo real do objeto.Quando usar: Sempre que uma classe base definir um método que as classes derivadas precisam reescrever (override).Porquê usar: Sem o virtual, se usar um ponteiro da classe base para apontar para a classe derivada, o C++ vai chamar o método da classe base por engano.cppclass Animal {
public:
    virtual void fazerSom() { std::cout << "Som genérico"; }
};

class Gato : public Animal {
public:
    void fazerSom() override { std::cout << "Miau"; } // Sobrescreve o método
};

// Uso prático do Polimorfismo com Virtual:
Animal* meuAnimal = new Gato();
meuAnimal->fazerSom(); // Imprime "Miau" graças ao 'virtual'
Use o código com cuidado.4. pure virtual: Quando e porquê usarUma função virtual pura é uma função que não tem comportamento padrão na classe base. Ela obriga as classes derivadas a fornecerem a sua própria implementação. É declarada com = 0.Quando usar: Quando a classe base é apenas um conceito abstrato e não faz sentido criar uma implementação para ela.Porquê usar:Cria um contrato: o código não compila se a classe derivada esquecer de implementar a função.Transforma a classe base numa Classe Abstrata, impedindo que alguém crie um objeto genérico dela por engano (ex: Animal a; gera erro).

Por que usar funções virtuais puras?

Criação de Contratos (Interfaces): Garante que todas as subclasses (classes derivadas) tenham obrigatoriamente a mesma função implementada.

Abstração: Torna a classe base uma classe abstrata, o que significa que não pode ser instanciada diretamente (não pode fazer Forma f;).

Polimorfismo Seguro: Permite usar ponteiros ou referências da classe base para chamar métodos de diferentes classes derivadas em tempo de execução.

Em programação orientada a objetos (POO), Interface e Contrato Rígido são conceitos arquitetónicos para garantir que diferentes partes de um sistema comuniquem sem falhas.O que é uma Interface?Uma interface é uma estrutura que define o que uma classe deve fazer, mas não como o deve fazer. Ela não contém lógica de programação (código), apenas assinaturas de funções (nomes, parâmetros e retornos).Na prática: É como a ficha técnica de uma tomada elétrica. A tomada define onde entram os pinos (a interface), mas não importa se a eletricidade atrás dela vem de energia solar, hídrica ou eólica (a implementação).Em C++, não existe a palavra-chave interface (como no Java ou C#). Em vez disso, criamos uma interface usando uma classe puramente abstrata (uma classe onde todas as funções são virtuais puras).cpp// Isto funciona estritamente como uma Interface em C++
class Autenticador {
public:
    virtual bool login(std::string usuario, std::string senha) = 0;
    virtual void logout() = 0;
};
Use o código com cuidado.O que são Contratos Rígidos?Um "contrato rígido" é uma garantia assegurada pelo compilador de que qualquer classe que herde da interface irá implementar obrigatoriamente todas as suas funções.Quando dizemos que uma interface estabelece um contrato rígido, significa que:Obrigação de Cumprimento: Se a classe LoginGoogle herdar de Autenticador, ela é obrigada a escrever o código para login() e logout(). Se esquecer de uma delas, o código não compila.Impedimento de Instanciação: Não se pode criar um objeto direto da interface (ex: Autenticador auth; gera erro). Ela serve apenas como molde.Segurança para o Desenvolvedor: Quem vai usar a classe (o cliente do código) tem a certeza absoluta de que aquelas funções existem e funcionam, sem precisar de ler o código interno.Exemplo Prático: O Contrato em AçãoImagine que está a criar um sistema de pagamentos.cpp// A INTERFACE (O CONTRATO)
class MetodoPagamento {
public:
    virtual void processarPagamento(double valor) = 0; // Contrato: todos DEVEM ter isto
};

// Implementação 1: Cumpre o contrato
class CartaoCredito : public MetodoPagamento {
public:
    void processarPagamento(double valor) override {
        // Código para falar com o banco
    }
};

// Implementação 2: Cumpre o contrato
class PayPal : public MetodoPagamento {
public:
    void processarPagamento(double valor) override {
        // Código para ligar à API do PayPal
    }
};
Use o código com cuidado.Por que o contrato rígido é útil aqui?Se amanhã precisar de adicionar o método Bitcoin, basta criar a classe herdando de MetodoPagamento. O resto do seu sistema (a loja virtual) não precisa de ser alterado, pois ele já sabe comunicar com a interface através da função processarPagamento. O contrato garante que a nova classe não vai quebrar o sistema.Se quiser avançar na estruturação do seu código, pode dizer-me:Que funcionalidade ou sistema está a tentar desenhar com estas interfaces?Gostaria de ver como estruturar um ficheiro Header (.h) e um ficheiro Source (.cpp) usando este conceito?