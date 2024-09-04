int vermelho = 2;
int amarelo = 3;
int verde = 4;
int botao = 6;
int fase = 0;
int tempo = 1000;

void setup()
{
    pinMode(vermelho, OUTPUT);
    pinMode(amarelo, OUTPUT);
    pinMode(verde, OUTPUT);
    pinMode(botao, INPUT);
}

void liga_vermelho(int tempo)
{
    digitalWrite(vermelho, HIGH);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, LOW);
    delay(tempo);
}

void liga_amarelo(int tempo)
{
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(verde, LOW);
    delay(tempo);
}

void liga_verde(int tempo)
{
    digitalWrite(vermelho, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(verde, HIGH);
    delay(tempo);
}

void loop()
{
    int pedestre = digitalRead(botao);
    if (pedestre == HIGH)
    {
        tempo = 5000;
        fase = 2;
    }
    else
    {
        tempo = 1000;
    }
    switch (fase)
    {
    case 0:
        liga_verde(tempo);
        fase++;
        break;
    case 1:
        liga_amarelo(tempo);
        fase++;
        break;
    case 2:
        liga_vermelho(tempo);
        fase = 0;
        break;
    }
}
