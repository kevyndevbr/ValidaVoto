# Verificador de Elegibilidade de Voto

Um sistema simples, eficiente e estruturado em C/C++, desenvolvido com foco em boas práticas, clareza de código e validação de entrada básica. O objetivo é determinar se o usuário está apto a votar com base em sua idade informada.

---

## 📘 Visão Geral

Este projeto consiste em um programa que coleta o nome e a idade do usuário e verifica sua elegibilidade ao voto conforme critérios lógicos definidos no código. O sistema foi desenvolvido com foco em:

* Estruturação limpa e objetiva
* Prevenção de overflow de entrada
* Boas práticas fundamentais de C/C++
* Fluxo simples e direto

---

## 🎯 Objetivo

Demonstrar domínio de conceitos fundamentais de programação, incluindo:

* Entrada e saída de dados (I/O)
* Estruturas condicionais
* Manipulação básica de strings
* Organização de código

Este projeto também serve como base para futuras expansões, como cálculo de indicadores, menus interativos e modularização.

---

## 🛠 Tecnologias Utilizadas

* **Linguagem:** C/C++
* **Compilador:** GCC / G++
* **Editor recomendado:** Visual Studio Code
* **Versionamento:** Git + GitHub

---

## 📁 Estrutura do Repositório

```
VerificadorDeVoto/
├── main.cpp
└── README.md
```

---

## ⚙️ Funcionamento do Sistema

O programa realiza as seguintes etapas:

1. Solicita o **nome** do usuário (com controle de tamanho de buffer).
2. Solicita a **idade** do usuário.
3. Valida a idade de acordo com o critério estabelecido:

   * Menor que 18 anos → Não está apto a votar.
   * Igual ou acima de 18 → Está apto a votar.
4. Exibe o resultado de forma personalizada.

---

## 🔍 Exemplo de Execução

```
Digite seu nome: Kevyn
Digite sua idade: 21
Kevyn, voce pode votar
```

---

## ▶️ Como Compilar e Executar

### **Compilação:**

```
gcc main.cpp -o verificador
```

### **Execução:**

```
./verificador
```

---

## 📌 Próximas Melhorias (Roadmap)

* Implementação de validação robusta de entrada (evitar valores inválidos)
* Internacionalização (mensagens em múltiplos idiomas)
* Modularização do código em arquivos `.h` e `.c`
* Criação de testes automatizados
* Inclusão de logs e métricas de execução
* Versão interativa com menu e múltiplas opções

---

## 👤 Autor

**Kevyn Leal**

GitHub: [https://github.com/kevyndevbr](https://github.com/kevyndevbr)

---

Se este projeto ajudar em seus estudos, contribuições e sugestões são bem-vindas!
