import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[]args){



        ArrayList<String>currentLine=new ArrayList<>();
        String newCurrentLine="";

        try{

            File f = new File("src\\Data.txt");
            Scanner s=new Scanner(f);

            if(!f.exists()){
                System.out.println("Error getting file");
            }

            File ff=new File("src\\NewData.txt");
            if(!ff.exists())
                System.out.println("Error getting output file");

            FileWriter myWriter = new FileWriter("src\\NewData.txt");

            int lineCounter=1;
            while(s.hasNextLine()){
                String[] data = s.nextLine().split("aaaa");

                for(String x: data){
                    currentLine.add(x);
                }

                lineCounter++;

                if(lineCounter == 8){
                    for(String x: currentLine){
                        newCurrentLine+=x+",";
                    }
                    System.out.println(newCurrentLine);
                    myWriter.write(newCurrentLine+"\n");
                    currentLine=new ArrayList<>();
                    newCurrentLine="";
                    lineCounter=1;
                    }

            }
            myWriter.close();
            System.out.println("Done");



        }catch(Exception e){e.printStackTrace();}


    }
}
