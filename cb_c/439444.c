 #include<stdio.h>
long i,j,k,u,v,n;
char p[82];
double r;

struct nodo{
 long pre; // Numero de palabras que tienen el prefijo
 char pro; // Altura del nodo en el arbol
 long sig[28]; // Posicion de los nodos hijos en el arreglo
}T[1000004];

void a(){
 long in=0,no=0; // in es el indice del caracter, no es la posicion del nodo en que estamos dentro del arrelo
 while(p[in]){ // Mientras no lleguemos al final de la palabra
  if(T[no].sig[p[in]]){ // Si el prefijo ya esta, avanzamos a la posicion
   no=T[no].sig[p[in]];
  }else{ // Si no, creamos el nodo
   T[no].sig[p[in]]=u;
   no=u;
   u++;
  }
  T[no].pre++; // Aumentamos el contador de palabras con el prefijo
  T[no].pro=in; // Marcamos la altura del nodo
  in++;
 }
}

void dfs(long po, long rep){
 long ii;
 if(rep!=T[po].pre&&T[po].pro){ k=k+T[po].pre;  } // Si cambia la cantidad de palabras con el prefijo y no estamos en el primer caracter, agrega al contador el numero de palabras
 rep=T[po].pre; // Actualiza el numero de palabras con el prefijo que se esta revisando
 for(ii=1;ii<28;ii++){ // Revisamos todos los nodos hijos recursivamente
    if(T[po].sig[ii]){
     dfs(T[po].sig[ii],rep);
    }
  T[po].sig[ii]=0; // Aprovechando que estamos recorriendo todo en DFS, borramos lo necesario para el siguiente caso
  T[po].pre=0;
 }
}

int main(){
 while(scanf("%ld",&n)==1){
  u=1;
  for(i=0;i<n;i++){
   scanf("%s",p);
   j=0;
   while(p[j]){ p[j]=p[j]-'a'+1; j++;  } // Asignamos a las letras de la a a la z un numero del 1 al 26 para facilitar su manejo
   a(); // Agregamos la palabra al TRIE
  }
  k=0; // Inicializamos el contador k
  v=0;
  dfs(0,v);
  r=(double)(k+n)/(double)(n);
  printf("%.2lf\n",r);
 }
}
