/*javascript:
(
    function()
    {
        var msnShoppingGamePane=document.querySelector("shopping-page-base")
        ?.shadowRoot.querySelector("shopping-homepage")
        ?.shadowRoot.querySelector("msft-feed-layout")
        ?.shadowRoot.querySelector("msn-shopping-game-pane");
        var shoppingGame=document.querySelector("shopping-page-base")
        ?.shadowRoot.querySelector("shopping-homepage")
        ?.shadowRoot.querySelector("msft-feed-layout")
        ?.shadowRoot.querySelector("msn-shopping-game-pane")
        ?.shadowRoot.querySelector("msft-stripe");
        function getObjectIndexFromArray(objects,id)
        {
            for(let i=0;i<objects.length;i++)
            {
                if(objects[i].id===id)
                {
                    return i
                }
            }
            return-1
        }
        
        function getLowestPriceItemID(priceMap)
        {
        var lowestPriceItemID;
        var currLowestPrice=Infinity;
        for(const[itemID,item]of Object.entries(priceMap))
        {
            let price=parseFloat(item.price.substring(1));
            if(currLowestPrice>price)
            {
                lowestPriceItemID=itemID;
                currLowestPrice=price
            }
        }
        return lowestPriceItemID
        }
        
        function highlightItems(correctIndex,items)
        {
            for(let i=0;i<items.length;i++)
            {
                if(i==correctIndex)
                {
                    items[i].style.borderColor="green"
                }
                else
                {
                    items[i].style.borderColor="";
                    items[i].style.display="none"
                }
            }
        }
        
        if(msnShoppingGamePane!=null)
        {
            msnShoppingGamePane.scrollIntoView()
        }
        else 
        alert("Unable to locate the shopping game!");
        
        var lowestPriceItemID=getLowestPriceItemID(msnShoppingGamePane.originalPricesbyId);
        var itemIndex=getObjectIndexFromArray(msnShoppingGamePane.displayedShoppingEntities,lowestPriceItemID);
        highlightItems(itemIndex,shoppingGame.getElementsByClassName("shopping-game-card-outline"))
    }
)();*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0,count=0;
        cin>>n;
        for(int i=1;i+1<=n;i++)
        {
            if((i&(i+1))>0)
            {
                count++;
                if(i+1==n)
                {
                    count++;
                    maxi=max(maxi,count);
                }
            }
            else
            {
                if(count==0)
                continue;
                else
                {
                    count++;
                    maxi=max(maxi,count);
                }
                count=0;
            }
        }
        if(n==1 || maxi==0)
        cout<<1<<endl;
        else
        cout<<maxi<<endl;
    }
}