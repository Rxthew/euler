
public class solution_1{
    static final int threshold = 1000;
    static int sum = 0;

    static int sumMultiples(){
        for(int i = 0;i < threshold;++i){
            if(i % 3 == 0 || i%5 == 0){
                sum += i; 
            } 

        }
        return sum;
    
    }

    public static void main(String args[]){
        System.out.println(sumMultiples());
    }

}

