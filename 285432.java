class Main {
    public static void main(String[]args){
        String linea = new java.util.Scanner(System.in).useDelimiter("\n").next();
        String lineas[] = linea.split(" ");
        long resul=0;
        for(int i=0; i<lineas[0].length(); i++){
            for(int j=0; j<lineas[1].length(); j++){
                resul+= Long.parseLong(lineas[0].charAt(i)+"")*Long.parseLong(lineas[1].charAt(j)+"");
            }
        }
        System.out.println(resul);
    }
}