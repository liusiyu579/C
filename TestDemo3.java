public class TestDemo3 {
    public static void Move(char pos1,char pos2) {
        System.out.print(pos1+"->"+pos2+" ");
    }
    public static void Han(int n,char pos1,char pos2,char pos3) {
        if(n==1) {
            Move(pos1,pos3);
        }else {
            Han(n-1,pos1,pos3,pos2);
            Move(pos1,pos3);
            Han(n-1,pos2,pos1,pos3);
        }
    }
    public static void main(String[] args) {
        Han(1,'A','B','C');
        System.out.println();
        Han(2,'A','B','C');
        System.out.println();
        Han(3,'A','B','C');
    }

}
