import java.io.IOException;
 
class Main {
 
    static char bufferSalida[] = new char[ 800000 ];
    static int longitud;
    static int tamanio = 0;
     
    public static void main(String[] args) throws IOException 
    {
         
        // Cantidad de casos que se analizaran
        int N = sig();
         
        // Almacenara todos los palindromos menores que 200009
        int palin[] = new int[ 1000 ];
         
        // Limites del intervalo donde se buscaran los primos binarios
        int inf, sup;
        int cont = 0;
         
        // Indica si se encontro al menos un palindromo
        boolean hayPalin;
         
        for( int i = 1; i <= 200000; i = i + 2 )
        {
            if( esPalindromo( i ) )
                palin[ cont ++ ] = i;
        }
         
        // Palindromo que servira como limite superior
        palin[ cont ++ ] = 200009;
         
         
        for( int i = 0; i < N; i ++ )
        {
            // Limites inferior y superior del intervalo
            inf = sig(); sup = sig();
             
            cont = 0;
             
            // Ubicamos el primer palindromo
            while( palin[ cont ] < inf )
                cont ++;
             
            hayPalin = false;
             
            while( true )
            {
                if( palin[ cont ] > sup )
                    break;
                 
                // Mientras sea menor que sup, lo anadimos a la salida
                salida( palin[ cont ] + " " );    
                 
                cont ++;
                 
                // Se encontro al menos un palindromo 
                hayPalin = true;
            }
             
            // Eliminamos el ultimo espacio en blanco
            if( hayPalin )
                tamanio --;
             
            bufferSalida[ tamanio ++ ] = '\n';
        }
         
         
        System.out.print( new String( bufferSalida, 0, tamanio ) );
    }
     
    // Anade salida, al buffer que almacena el output del problema
    public static void salida( String salida )
    {
        longitud = salida.length();        
        salida.getChars( 0, longitud, bufferSalida, tamanio );    
        tamanio = tamanio + longitud;    
    }
     
    public static int sig() throws IOException
    {
        int car = System.in.read();
        int num = 0;
         
        do
        {
            num = 10 * num + car - 48;
            car = System.in.read();
        }
        while( car > 47 && car < 58 );
         
         
        return num;
    }
     
    public static boolean esPalindromo( int num )
    {
        int inverso = 0;
         
        while( num > inverso )
        {
            inverso = ( inverso << 1 ) + ( num & 1 );            
            num = num >> 1;
        }
         
        if( num == inverso )
            return true;
         
        return num == ( inverso >> 1 );
    }
}