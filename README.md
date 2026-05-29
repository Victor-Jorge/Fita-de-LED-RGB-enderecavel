# Projeto Fita de LED NeoPixel com Arduino

## Visão Geral

Este projeto demonstra como controlar uma fita de LED endereçável (NeoPixel) usando um microcontrolador Arduino e a biblioteca Adafruit NeoPixel. O código fornecido inicializa a fita de LED e acende todos os LEDs em branco.

## Funcionalidades

*   Controle de uma fita de LED NeoPixel.
*   Definição do número de LEDs e do pino de dados.
*   Ajuste de brilho da fita de LED.
*   Acende todos os LEDs da fita na cor branca.

## Requisitos

### Hardware

*   **Arduino**: Qualquer placa compatível (ex: Arduino Uno, Nano, Mega).
*   **Fita de LED NeoPixel**: Uma fita de LED endereçável compatível com a biblioteca Adafruit NeoPixel (ex: WS2812B).
*   **Fonte de Alimentação Externa**: Para a fita de LED, dependendo do número de LEDs e do consumo de corrente (geralmente 5V).
*   **Resistor (opcional)**: Um resistor de 300-500 Ohm entre o pino de dados do Arduino e o pino de dados da fita de LED para proteção.
*   **Capacitor (opcional)**: Um capacitor de 1000 µF, 6.3V ou superior, entre os pinos de alimentação da fita de LED para estabilização.

### Software

*   **Arduino IDE**: Ambiente de Desenvolvimento Integrado para programar o Arduino.
*   **Biblioteca Adafruit NeoPixel**: Necessária para controlar a fita de LED. Pode ser instalada via Gerenciador de Bibliotecas do Arduino IDE.

## Instalação da Biblioteca

1.  Abra o **Arduino IDE**.
2.  Vá em `Sketch > Incluir Biblioteca > Gerenciar Bibliotecas...`.
3.  Na caixa de pesquisa, digite `Adafruit NeoPixel`.
4.  Selecione a biblioteca `Adafruit NeoPixel by Adafruit` e clique em `Instalar`.

## Esquema de Conexão

Conecte a fita de LED ao Arduino da seguinte forma:

*   **Pino de Dados da Fita de LED (DIN)**: Conecte ao **Pino Digital 7** do Arduino.
*   **Pino de Alimentação da Fita de LED (5V)**: Conecte à **Fonte de Alimentação Externa de 5V**.
*   **Pino de Aterramento da Fita de LED (GND)**: Conecte ao **GND do Arduino** e ao **GND da Fonte de Alimentação Externa** (terra comum).

**Importante**: Certifique-se de que a fonte de alimentação externa seja capaz de fornecer corrente suficiente para todos os LEDs. Não alimente a fita de LED diretamente pelo pino de 5V do Arduino, especialmente para fitas com muitos LEDs, pois isso pode danificar a placa.

## Uso

1.  Abra o arquivo `.ino` (o código C fornecido) no Arduino IDE.
2.  Verifique se o `LED_COUNT` no código corresponde ao número de LEDs na sua fita.
3.  Selecione a placa Arduino correta em `Ferramentas > Placa`.
4.  Selecione a porta serial correta em `Ferramentas > Porta`.
5.  Faça o upload do código para o seu Arduino.

Após o upload, a fita de LED deverá acender todos os seus 15 LEDs na cor branca.

## Personalização

Você pode modificar o código para alterar o comportamento da fita de LED:

*   **Número de LEDs**: Altere o valor de `LED_COUNT`.
*   **Pino de Dados**: Altere o valor de `LED_PIN`.
*   **Brilho**: Altere o valor em `strip.setBrightness()` (de 0 a 255).
*   **Cores**: Altere os valores RGB em `strip.Color(R, G, B)` para definir outras cores. Por exemplo, `strip.Color(255, 0, 0)` para vermelho.
*   **Animações**: Implemente diferentes padrões e animações no `loop()` usando as funções da biblioteca Adafruit NeoPixel.

## Licença

Este projeto é distribuído sob a licença MIT. Veja o arquivo `LICENSE` para mais detalhes. (Se você não tiver um arquivo LICENSE, considere criar um ou remover esta seção.)

## Contribuições

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests no repositório do projeto. (Se este não for um repositório, remova esta seção.)

## Autor
-- victor Jorge

