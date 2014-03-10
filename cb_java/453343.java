import java.io.BufferedReader;
import java.io.InputStreamReader;
 
class Main
{
   public static void main( String[] args ) throws Exception
   {
      BufferedReader br = new BufferedReader( new InputStreamReader( System.in ) );
   
      int N = Integer.parseInt( br.readLine() );
      int K = Integer.parseInt( br.readLine() );
   
      int numPosibles = ( K - 1 ) * F( N - 1, K );
   
      System.out.println( numPosibles );
   }
  
   public static int F( int N, int K )
   {
      // Casos Bases
      if( N == 1 )
         return K;
   
      if( N == 2 )
         return K * K - 1;
   
      // Calculamos previamente los casos iniciales
      int ant = K;
      int act = K * K - 1;
      int temp;
   
      /*
      * Partimos de los casos mas pequeños hasta llegar
      * al caso mas grande N.
      */
      for( int i = 3; i <= N; i ++ )
      {
         temp = ( K - 1 ) * ( ant + act );
         ant = act;
         act = temp;
      }
   
      return act;
   }
}