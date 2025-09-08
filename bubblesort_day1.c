
        
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

          for(int i=0;i<n-1;i++)
          {
              for(int j=0;j<n-i-1;j++)
              {
                  if(a[j]>a[j+1])
                  {
                      int temp=a[j];
                      a[j]=a[j+1];
                      a[j+1]=temp;
                  }
              }
          }
          printf("Sorted array: ");
          for(int i=0;i<n;i++)
            {
                printf("%d",a[i]);   //printing array
            }
     }     
         
         
    
