
# Arduino-shield-attiny45

###Repository che contiene info su come costruire e usare uno shield per la programmazione del chip Attiny45
####Tutte le info riportate sono sotto licenza Public Domain.
####Tutti i documenti/software allegati hanno la propria licenza
Per la programmazione è NECESSARIO usare arduino 1.0.2 perché le nuove versioni danno errore con la libreria Arduino tiny

La libreria serve all’ambiente di sviluppo poiché non è possibile programmare nativamente questi chip.

Scarichiamo dalla cartella Arduino-Tiny o seguiamo questo indirizzo per scaricare i relativi file di configurazione.
[Arduino-Tiny](http://code.google.com/p/arduino-tiny/downloads/list) (prendere la versione per Arduino IDE 1.0.X)

Nella cartella degli sketchbook  (File ->  Preferences -> Sketchbook location) creo una directory di nome hardware 
e ci copio la cartella tiny (ottenuta scompattando arduino-tiny-xxx.zip).

All'interno della cartella tiny è presente un file "Prospective Boards.txt" che contiene le configurazioni per molti chip differenti.
Bisogna modificare tale file lasciando solamente i chip a cui si è interessati e salvando con nome "boards.txt".

Nella cartella Arduino-Tiny è presente la mia versione di tale file che contiene solo le 
configuarazioni corrette per Attiny45@1MHz.
Consiglio di copiare tale file nella cartella tiny "vicino" a "Prospective Boards.txt".

A questo punto aprendo Arduino IDE 1.0.2 dovrei trovare nell'elenco "Strumenti -> Tipo di Arduino" anche il nostro bel Attiny45@1MHz.

Una volta costruito lo shield lo sovrapponiamo ad un Arduino UNO o simile **(senza l'Attiny45 inserito!)**

Carichiamo sull'arduino lo sketch **"ArduinoISP"** che si trova in "File -> Esempi"

Ora l'Arduino è pronto per fare da "programmatore di Attiny"

Assicurarsi di aver selezionato **Strumenti -> Programmatore -> Arduino as ISP** come modalità di upload!

A questo punto in Arduino IDE possiamo scrivere lo sketch da caricare sull'Attiny e,
 **una volta inserito l'Attiny45 sullo shield**, possiamo procedere con l'upload.

A questo punto l'Attiny sarà programmato e potrà essere inserito nelle nostre schede custom!

##Pinout Attiny45


| Pin del Chip | Pin digitale | Pin Analogico |
|:---:|:---:|:---:|
| 1 | RESET | RESET |
| 2 | 3 | A3 |
| 3 | 4 (PWM) | A2 |
| 4 | GND | GND |
| 5 | 0 (PWM) |---|
| 6 | 1 (PWM)|---|
| 7 | 2 | A1 |
| 8 | VCC | VCC |

####Le istruzioni compatibili con l’Attiny sono solo le seguenti ([documentazione](https://www.arduino.cc/en/Reference/HomePage)):
* `pinMode()`
* `digitalWrite()`
* `digitalRead()`
* `analogRead()`
* `analogWrite() – PWM`
* `shiftOut() – Software SPI`
* `pulseIn()`
* `millis()`
* `micros()`
* `delay()`
* `delayMicroseconds()`



