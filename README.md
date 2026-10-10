# Exercícios Práticos em C e C++ — Entrada/Saída de Dados e Condicionais

Repositório com 5 exercícios da lista **"Exercícios Práticos em C++: Entrada/Saída de Dados, Condicionais e Repetição"**, da disciplina **Algoritmos e Programação de Computadores (2026/2)**. Desenvolvidos durante meus estudos de Engenharia de Software na UniSenai.

Conforme a proposta da atividade, foram escolhidos **5 exercícios que não constam resolvidos** na lista, sendo **3 em C** e **2 em C++**.

## Objetivo

Praticar entrada e saída de dados, cálculos e estruturas de decisão (`if` / `else if` / `else` e `switch/case`) aplicadas a problemas do dia a dia de uma equipe de desenvolvimento de software.

## Tópicos abordados

- Entrada e saída de dados — em C (`scanf`, `printf`) e em C++ (`cin`, `cout`, `getline`)
- Variáveis e tipos (`int`, `double`, `char`, `string`)
- Estruturas condicionais encadeadas (`if` / `else if` / `else`)
- Estrutura de seleção múltipla (`switch/case` com `default`)
- Operadores aritméticos, relacionais e lógicos (`||`)
- Validação de entrada (evitando divisão por zero e opções inválidas)

## Exercícios

### Em C — pasta [`c/`](c/)
| Arquivo | Exercício | Descrição |
|---|---|---|
| [`exercicio05_status_servidor.c`](c/exercicio05_status_servidor.c) | 5 — Status de um servidor | Classifica o uso da CPU em **Uso normal** (< 50%), **Atenção** (50% a 80%) ou **Uso crítico** (> 80%) |
| [`exercicio06_aprovacao_versao.c`](c/exercicio06_aprovacao_versao.c) | 6 — Aprovação de versão de software | Calcula o percentual de testes aprovados e classifica a versão em **Aprovada** (≥ 90%), **Requer revisão** (70% a 89,99%) ou **Reprovada** (< 70%) |
| [`exercicio07_prioridade_chamado.c`](c/exercicio07_prioridade_chamado.c) | 7 — Prioridade de chamado | Usa `switch` para classificar o código 1 a 4 em **Baixa**, **Média**, **Alta** ou **Crítica** |

### Em C++ — pasta [`cpp/`](cpp/)
| Arquivo | Exercício | Descrição |
|---|---|---|
| [`exercicio09_complexidade_tarefa.cpp`](cpp/exercicio09_complexidade_tarefa.cpp) | 9 — Complexidade de uma tarefa | Lê o nome da tarefa e as horas estimadas, e classifica em **simples**, **média**, **complexa** ou **muito complexa** |
| [`exercicio10_orcamento_software.cpp`](cpp/exercicio10_orcamento_software.cpp) | 10 — Orçamento de software *(Desafio)* | Lê cliente e tipo de projeto, define o valor com `switch` e acrescenta **20%** se o projeto for urgente |

## Exemplos de execução

**Exercício 5 — Status de um servidor (C)**
```
Uso da CPU (%): 85
Status: Uso critico
```

**Exercício 6 — Aprovação de versão de software (C)**
```
Quantidade total de testes executados: 100
Quantidade de testes aprovados: 75

Percentual de aprovacao: 75.00%
Resultado: Versao requer revisao
```

**Exercício 7 — Prioridade de chamado (C)**
```
Codigos: 1-Baixa  2-Media  3-Alta  4-Critica
Informe o codigo da prioridade: 3
Prioridade: Alta
```

**Exercício 9 — Complexidade de uma tarefa (C++)**
```
Nome da tarefa: Tela de login
Quantidade estimada de horas: 12.5

Tarefa: Tela de login
Classificacao: Tarefa complexa
```

**Exercício 10 — Orçamento de software (C++)**
```
Nome do cliente: Empresa ABC

Tipos de projeto:
1 - Site institucional: R$ 2000
2 - Aplicativo mobile:  R$ 5000
3 - Sistema web:        R$ 8000
Opcao de projeto: 3
O projeto e urgente? (S/N): S

Cliente: Empresa ABC
Projeto: Sistema web
Urgente: S
Valor final: R$ 9600
```

## Como executar

**Pelo terminal**, compile com o GCC (C) ou G++ (C++):

```bash
# C
gcc c/exercicio05_status_servidor.c -o exercicio05
./exercicio05

# C++
g++ cpp/exercicio10_orcamento_software.cpp -o exercicio10
./exercicio10
```

**Pelo VS Code**, abra a pasta do projeto, abra o arquivo `.c` ou `.cpp` desejado e pressione `Ctrl + Shift + B`. A tarefa configurada em `.vscode/tasks.json` escolhe automaticamente o compilador correto, compila e executa o programa no terminal.

## Estrutura do projeto

```
├── c/                      # Exercícios em linguagem C
│   ├── exercicio05_status_servidor.c
│   ├── exercicio06_aprovacao_versao.c
│   └── exercicio07_prioridade_chamado.c
├── cpp/                    # Exercícios em linguagem C++
│   ├── exercicio09_complexidade_tarefa.cpp
│   └── exercicio10_orcamento_software.cpp
└── .vscode/                # Configuração para compilar e executar no VS Code
```

## Tecnologias

- Linguagem C e C++
- Compiladores GCC / G++ (MSYS2 UCRT64)
- Visual Studio Code

## Autor

**Willian Kraft**
Estudante de Engenharia de Software | UniSenai
[LinkedIn](https://www.linkedin.com/in/willian-kraft-7107b7266)
