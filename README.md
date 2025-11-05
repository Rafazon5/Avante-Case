Projeto: Controle de LED com LDR e Sensor IR

Descrição

Este é um projeto Arduino para automação básica de iluminação. O sistema acende ou apaga um LED de acordo com a combinação das leituras de um sensor de luminosidade (LDR) e um sensor infravermelho digital. Ele pode ser usado como ponto de partida em projetos experimentais de automação residencial.
Funcionalidades

    Leitura em tempo real de sensores de luz (LDR) e infravermelho

    Ligamento ou desligamento automático do LED conforme condições do ambiente

    Monitoramento dos valores dos sensores via Serial Monitor

    Fácil adaptação para outros dispositivos de saída

Requisitos

    Arduino Uno ou compatível

    1 LED, 1 resistência 220Ω

    1 LDR, 1 sensor

    Protoboard e jumpers

    IDE Arduino

Instalação

    Realize a montagem do circuito conforme o diagrama disponível na pasta /docs.

    Faça upload do firmware usando a Arduino IDE.

    Conecte o Arduino ao computador e abra o Monitor Serial (ajuste para 9600 baud).

Como usar

    Em ambientes claros ou quando o sensor IR detecta presença, o LED permanecerá desligado.

    Em ambientes escuros e sem detecção IR, o LED acende automaticamente.

    Acompanhe os valores dos sensores pelo Monitor Serial para calibração ou depuração.

