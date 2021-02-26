#include<stdio.h>
#include<string.h>
#define INFINITY 9999
#define MAX 10
 
void dijkstra(int G[MAX][MAX],int n,int startnode);


struct routingtable
{
char desnet[20];
char interface[20];

};

 
int main()
{
   
    int G[MAX][MAX],D[MAX][MAX],i,j,n,u,k;
    int port;
     
    
    
    printf("\nEnter no. of routers:");
    scanf("%d",&n);
    
    struct routingtable str[n];
   
    
    

    printf("\nEnter the distance matrix for routers:\n");
    printf("  R0 R1 R2 R3\n");
    for(i=0;i<n;i++)
{
    printf("R%d",i);
        for(j=0;j<n;j++)
{
            
            scanf("%d",&G[i][j]);
}
}
   printf("\nEnter the routing table information i.e. destination network and interface\n");
   printf("       Port  RouterID  Cost  Destination Network  Interface  \n");
    
    for(i=0;i<n;i++)
{
       printf("\nFor R%d",i);
     port=1;

        for(j=0;j<n;j++)
 {
           if(G[i][j]!=0)
              {
                 printf("\n           ");
                 printf("%d     R%d        %d",port,j,G[i][j]);
                  scanf("%s%s",&str[j].desnet,&str[j].interface);
                 
                  port++;
              }


}  
            
}



    



    
    printf("\nEnter the source router:");
    scanf("%d",&u);
    
    printf("\nCosts and paths from source router to other routers-");
    dijkstra(G,n,u);
    
    for(i=0;i<n;i++)
    {
    printf("\n-------------------------------------------------\n");
    printf("\nCosts and paths from router number %d to other routers-",i);
    dijkstra(G,n,i);
    }

    printf("\n-------------------------------------------------\n");
    printf("\n-------------------------------------------------\n");
    
    printf("\n Let one router for example: router number %d gets disconnected",n);
    
    for(i=0;i<n-1;i++)
      for(j=0;j<n-1;j++)
    
    D[i][j]=G[i][j];
    
   
    for(i=0;i<n-1;i++)
    {
    printf("\n-------------------------------------------------\n");
    printf("\nNew costs and paths from router number %d to other routers-",i);
    k=n-1;
    dijkstra(D ,k,i);

  
    }


   printf("       Port  RouterID  Cost  Destination Network  Interface  \n");
    
    for(i=0;i<n-1;i++)
{
       printf("\nFor R%d",i);
     port=1;

        for(j=0;j<n-1;j++)

 {
         
           if(G[i][j]!=0)
              {
                 printf("\n           ");
                 printf("%d     R%d        %d",port,j,G[i][j]);
                  printf("     %s                 %s",str[j].desnet,str[j].interface);
                 
                  port++;
              }


}  
            
}


   return 0;
}
 



void dijkstra(int G[MAX][MAX],int n,int startnode)
{
 
    int cost[MAX][MAX],distance[MAX],pred[MAX];
    int visited[MAX],count,mindistance,nextnode,i,j;
    
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(G[i][j]==0)
                cost[i][j]=INFINITY;
            else
                cost[i][j]=G[i][j];
    
    
    for(i=0;i<n;i++)
    {
        distance[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }
    
    distance[startnode]=0;
    visited[startnode]=1;
    count=1;
    
    while(count<n-1)
    {
        mindistance=INFINITY;
        
        
        for(i=0;i<n;i++)
            if(distance[i]<mindistance&&!visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }
            
                     
            visited[nextnode]=1;
            for(i=0;i<n;i++)
                if(!visited[i])
                    if(mindistance+cost[nextnode][i]<distance[i])
                    {
                        distance[i]=mindistance+cost[nextnode][i];
                        pred[i]=nextnode;
                    }
        count++;
    }
 
    
    for(i=0;i<n;i++)
        if(i!=startnode)
        {
            printf("\nMinimum cost of router %d=%d",i,distance[i]);
            printf("\nPath taken=%d",i);
            
            j=i;
            do
            {
                j=pred[j];
                printf("<-%d",j);
            }while(j!=startnode);
      }
}
