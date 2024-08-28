import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class Pr3jess {

    public static boolean esEntero(String str) {
        for (char c : str.toCharArray()) {
            if (!Character.isDigit(c)) return false;
        }
        return !str.isEmpty();
    }

    public static boolean esPalabra(String str) {
        for (char c : str.toCharArray()) {
            if (!Character.isLetter(c)) return false;
        }
        return !str.isEmpty();
    }

    public static boolean esCompuesta(String str) {
        boolean tieneLetra = false, tieneNumero = false;
        for (char c : str.toCharArray()) {
            if (Character.isLetter(c)) tieneLetra = true;
            if (Character.isDigit(c)) tieneNumero = true;
        }
        return tieneLetra && tieneNumero;
    }

    public static void main(String[] args) {
        String nombreArchivo = "C:\\Users\\sergi\\Downloads\\1.4 Programa 3.txt";
        StringBuilder contenido = new StringBuilder();
        int caracteresConEspacios = 0;
        int caracteresSinEspacios = 0;
        int totalLexemas = 0;
        int enteros = 0, palabras = 0, compuestas = 0;

        try (BufferedReader br = new BufferedReader(new FileReader(nombreArchivo))) {
            String linea;
            while ((linea = br.readLine()) != null) {
                contenido.append(linea).append(" ");
                caracteresConEspacios += linea.length();
                for (char c : linea.toCharArray()) {
                    if (!Character.isWhitespace(c)) {
                        caracteresSinEspacios++;
                    }
                }
            }
        } catch (IOException e) {
            System.err.println("Error al leer el archivo: " + e.getMessage());
            return;
        }

        StringTokenizer st = new StringTokenizer(contenido.toString());

        while (st.hasMoreTokens()) {
            String lexema = st.nextToken();
            totalLexemas++;

            if (esEntero(lexema)) {
                enteros++;
            } else if (esPalabra(lexema)) {
                palabras++;
            } else if (esCompuesta(lexema)) {
                compuestas++;
            }
        }
        System.out.println("--- El texto contiene ---");
        System.out.println("Total de caracteres (con espacios): " + caracteresConEspacios);
        System.out.println("Total de caracteres (sin espacios): " + caracteresSinEspacios);
        System.out.println("Total de lexemas: " + totalLexemas);
        System.out.println("Total de palabras: " + palabras);
        System.out.println("Total de numeros: " + enteros);
        System.out.println("Total de combinadas:" + compuestas);
    }
}