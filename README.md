# Nodemcu-01 Presentation


## Arduinos två basfunktioner

Arduino-program använder två grundläggande funktioner: `setup()` och `loop()`.

### setup()

`setup()` körs en gång när Arduino-kortet startas eller återställs. Här skriver man inställningar som ska göras innan programmet börjar köras.

I denna kod används `setup()` för att ställa in LED-lampan som en utgång med `pinMode()`.

### loop()

`loop()` körs om och om igen så länge Arduino-kortet har ström. Här placeras själva programmet som ska utföras.

I denna kod ansvarar `loop()` för att få LED-lampan att blinka fem gånger, vänta en sekund och sedan börja om från början.

## Kod med förklaringar

Denna Arduino-kod får den inbyggda LED-lampan på Arduino-kortet att blinka fem gånger. Efter blinkningarna väntar programmet i en sekund innan det börjar om.

### Hela koden

```cpp
int i = 5;
int myDelay = 50;

void setup() {
  // Körs en gång när Arduino startar

  // Ställer in den inbyggda LED-lampan som en utgång
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Körs om och om igen

  // Upprepar så länge i är större än 0
  while (i > 0) {

    // Släcker LED-lampan
    digitalWrite(LED_BUILTIN, LOW);

    // Väntar 50 millisekunder
    delay(myDelay);

    // Tänder LED-lampan
    digitalWrite(LED_BUILTIN, HIGH);

    // Minskar räknaren med 1
    i--;
  }

  // Väntar 1 sekund
  delay(1000);

  // Återställer räknaren till 5
  i = 5;
}
```

### Kodens olika delar

- `int i = 5;` – Skapar en variabel som bestämmer hur många gånger lampan ska blinka.
- `int myDelay = 50;` – Bestämmer väntetiden mellan varje ändring i millisekunder.
- `pinMode(LED_BUILTIN, OUTPUT);` – Ställer in den inbyggda LED-lampan som en utgång.
- `digitalWrite(LED_BUILTIN, LOW);` – Släcker LED-lampan.
- `digitalWrite(LED_BUILTIN, HIGH);` – Tänder LED-lampan.
- `delay(myDelay);` – Pausar programmet i 50 millisekunder.
- `i--;` – Minskar värdet på variabeln `i` med ett.
- `while (i > 0)` – Upprepar blinkningen så länge `i` är större än noll.
- `delay(1000);` – Väntar en sekund innan programmet börjar om.
- `i = 5;` – Återställer räknaren så att lampan kan blinka fem gånger igen.
