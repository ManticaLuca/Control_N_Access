# Control_N_Access

### Proponente/proponenti
Mantica Luca, Orsenigo Giacomo, Turati Marco

 

### Descrizione della soluzione proposta
Sistema di riconoscimento persone con tag RFID (controllando sul db l’autorizzazione) e autenticazione a due fattori. 

Utilizzo di un sistema di autenticazione a due fattori con riconoscimento delle impronte digitali o riconoscimento facciale.

 

### Innovatività della soluzione rispetto ai prodotti attualmente sul mercato
Rispetto ai modelli attualmente utilizzati, vorremmo implementare un sistema di autenticazione a due fattori. 

 

### Descrizione delle caratteristiche tecniche della soluzione proposta, condizioni di utilizzo
Per accedere all'area è necessario passare il tag RFID sul lettore. A questo punto è necessario una seconda autenticazione con impronta digitale o riconoscimento facciale.

Una foto viene scattata automaticamente quando viene negato l'accesso a una persona non autorizzata. In questo modo è possibile identificare lo sconosciuto. 

I dati verranno salvati in un database online MySQL (che contiene utenti autorizzati e log accessi). Ci sarà poi un sito web php o un'applicazione che visualizza le statistiche di accesso (con le foto scattate) e permette di gestire gli utenti autorizzati.

 

Per realizzare il progetto vorremmo utilizzare un Arduino (o Raspberry) con un lettore RFID, (*una webcam*) e un sensore di impronte digitali. 

Un programma in Java leggerà dalla seriale i dati inviati da Arduino e li salverà sul database. 

 

### Competenze del/i proponente/i coerenti con la soluzione proposta
 Linguaggi PHP, SQL, Java e Arduino

 

### Attuali ambiti di applicazione della soluzione proposta
Ogni luogo che necessita di identificare il personale autorizzato all'accesso ad un'area riservata.
