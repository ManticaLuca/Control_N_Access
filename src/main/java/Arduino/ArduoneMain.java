package Arduino;

import Shared.Settings;
import Shared.SocketUDP;
import purejavacomm.NoSuchPortException;
import purejavacomm.PortInUseException;
import purejavacomm.SerialPortEvent;
import purejavacomm.UnsupportedCommOperationException;

import java.io.IOException;
import java.util.TooManyListenersException;


/**
 * @author Giacomo Orsenigo
 */
public class ArduoneMain {

    public static void main(String[] args) {

        try {
            final Seriale seriale = new Seriale();

            //SocketUDP socket = new SocketUDP();
            new ReceiveThread(seriale).start();

            //Aggiungo un event listener alla porta seriale in modo da sapere quando arrivano le richieste
            seriale.getPort().addEventListener(event -> {
                if (event.getEventType() == SerialPortEvent.DATA_AVAILABLE) {
                    try {
                        String receive = seriale.receiveLine();
                        if (!receive.equals(""))
                            System.out.println(receive);
                        //socket.sendString(receive, Settings.SERVER_ARDUINO_PORT, Settings.SERVER_IP);
                    } catch (IOException e) {
                        e.printStackTrace();
                    }
                }
            });


        } catch (PortInUseException | UnsupportedCommOperationException | IOException | TooManyListenersException | NoSuchPortException e) {
            e.printStackTrace();
        }

    }
} 
