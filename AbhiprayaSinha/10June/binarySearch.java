import java.util.*;
public class binary {
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);


        int size=sc.nextInt();
        
        int[] arr=new int[size];
        
        for(int a=0;a<size;a++)
        {
            arr[a]=sc.nextInt();
        }
        int search =sc.nextInt();
        int left=0;
        int right=size-1;
        while(left<=right)
        {
            int  mid= left +(right-left)/2;
            if(search>arr[mid])
            left=mid+1;
            else if(search<arr[mid])
            right=mid-1;
            else
            {
                System.out.println(arr[mid]+"  idx="+mid);
                break;
            }
            
        }
    }
    
}
