
     // selection sort   
     #include<stdio.h>
     int main()
     {      int n; //array size
            printf("enter the value of array size");
            scanf("%d",&n);
            int a[n];
            printf("enter the values of array");
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);   //scaning array
            }
          int minindex;
          for(int i=0;i<n-1;i++)
          {       minindex=i;
              for(int j=i+1;j<n;j++)
              {    if (a[j] < a[minindex])
                 {
                minindex = j;
                  }
                      int temp = a[minindex];
                       a[minindex] = a[i];
                       a[i] = temp;
                  }
          }
          
          printf("Sorted array: ");
          for(int i=0;i<n;i++)
            {
                printf("%d",a[i]);   //printing array
            }
     }     
         
         
    
