# Control_N_Access

### Proponente/proponenti
Mantica Luca, Colombo Alessandro, Turati Marco


### Descrizione della soluzione proposta
Sistema di riconoscimento persone con tag RFID (controllando sul db l’autorizzazione) e autenticazione a due fattori.
Log accessi.


### Innovatività della soluzione rispetto ai prodotti attualmente sul mercato
Vorremmo implementare un sistema di autenticazione con tessera per ogni entrata di un edificio, in modo da visualizzare il "traffico" e che il personale sia autorizzato.

Il sistema è capace di gestire un gruppo di aziende con la possibilità di diversi sedi per ognuno.
Ogni azienda ha il proprio admin che gestisce le sue sedi.
 

### Descrizione delle caratteristiche tecniche della soluzione proposta, condizioni di utilizzo
Per accedere all'area è necessario passare il tag RFID sul lettore. 
I dati verranno salvati in un database online MySQL (che contiene utenti autorizzati e log accessi). 

Ci sarà poi un sito web php o un'applicazione che visualizza le statistiche di accesso e permette di gestire gli utenti autorizzati.
 
Per realizzare il prototipo hardware vorremmo utilizzare un Arduino (o Raspberry) con un lettore RFID. 
Un programma in Java leggerà dalla seriale i dati inviati da Arduino e li salverà sul database. 
 

### Competenze del/i proponente/i coerenti con la soluzione proposta
 Linguaggi PHP, SQL, Java e Arduino

 
### Attuali ambiti di applicazione della soluzione proposta
Ogni luogo che necessita di identificare il personale autorizzato all'accesso ad un'area riservata.


![presentazione](/docs/presentazione.png)
![ER](/docs/SchemaER.png)
