int i,n,a,b,vv[]={4,16,121,529,4096,17956,139129,609961,4726276,20720704,160554241,703893961};main(){scanf("%d%d",&a,&b);while(a||b){int count=0;for(i=0;i<12;i++)if(vv[i]>a&&vv[i]<b)count++;printf("Case %d: %d\n",++n,count);scanf("%d%d",&a,&b);}}