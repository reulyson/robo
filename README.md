# Braço Robótico - Projeto de Controle de Movimentos e Sensores

### Autor: Reulyson  
**Data**: 29/05/2020  
**Licença**: Domínio Público  

## Descrição do Projeto

Este projeto consiste em um braço robótico com funcionalidades de controle de movimento usando motores e sensores. Ele é projetado para realizar movimentos automáticos, controlando o ângulo de suas articulações com base nos sinais recebidos dos sensores.

## Componentes Principais

- **Sensores de Fim de Curso**: Sensores usados para detectar quando o braço atinge um limite de movimento em cada articulação.
- **Motores**: Controlados por uma ponte H, os motores movem as articulações do braço robótico.
- **Botão de Start**: Um botão físico para iniciar a operação do braço.

## Instruções de Instalação

### Passo 1: Montagem do Circuito

Monte o circuito de acordo com o diagrama `layout.png` incluído no projeto. Conecte os sensores, motores e o botão de start corretamente nos pinos designados.

### Passo 2: Carregamento do Código

1. Abra o arquivo `robo.ino` ou `teste.ino` no Arduino IDE.
2. Conecte sua placa Arduino ao computador.
3. Compile e faça o upload do código para a placa.

### Passo 3: Inicialização do Braço

1. Pressione o botão de start para iniciar a operação.
2. O braço robótico começará a mover-se automaticamente de acordo com os sinais recebidos dos sensores.
3. Dependendo da posição detectada pelos sensores, o braço realizará diferentes movimentos.

## Estrutura de Pastas

- **robo.ino**: Código principal que controla o braço robótico.
- **teste.ino**: Código de teste para verificar o funcionamento dos motores e sensores.
- **README.md**: Este arquivo de documentação.

## Como Funciona

- **Movimento para Frente**: Quando todos os sensores detectam uma condição normal, o braço se move para frente.
- **Movimento de Recuo**: Caso os sensores detectem uma barreira ou linha, o braço entra em modo de recuo, movendo-se para trás por um tempo determinado.
- **Movimento de Girar**: Após o recuo, o braço executa uma manobra de giro para reposicionar suas articulações.

## Materiais Necessários (BOM)

| ID  | Componente           | Código     | Quantidade |
|-----|----------------------|------------|------------|
| R1  | Resistor de 10k       | 1234-abcd  | 1          |
| L1  | LED Vermelho          | 2345-asdf  | 1          |
| A1  | Arduino Uno           | ABX00066   | 1          |
| M1  | Motor DC              | 9876-zyxw  | 2          |
| H1  | Ponte H L298N         | 4567-ghij  | 1          |
| S1  | Sensor de Fim de Curso| 3456-uvwx  | 2          |
| S2  | Sensor de Fim de Curso| 8765-lmno  | 2          |
| B1  | Botão de Start        | 7654-qwer  | 1          |

## Contribuições

Para contribuir com este projeto, entre em contato com Reulyson no link: [Perfil Arduino](https://id.arduino.cc/reulyson).

## Licença

Este projeto está licenciado sob Domínio Público.

## Ajuda

Este documento foi escrito em formato Markdown. Caso precise de ajuda para editar ou melhorar o documento, consulte a [documentação do Markdown](https://www.markdownguide.org/).
