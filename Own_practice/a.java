public class NQueenPeoblem{
    class Position{
        int row,col;
        Position(int row,int col){
            this.row=row;
            this.col=col;
        }
    }

    public Position[] solveNQueen(int n){
        Position[] positions = new Position[n];

        boolean hassoln= solveNQueenUtil(n,0,positions);
        if(hassoln)
            return positions;
        else
            return new Position[0];
    }
}

private boolean solveNQueenUtil(int n,int row,Position[] positions){
    if(n==row) return true;
    int col;
    for(col=0;col<n;col++){
        boolean foundsafe=true;

        for(int queen=0;queen<row;queen++){
            if(positions[queen].col==col || positions[queen].col==positions[queen].row==row-col || 
                positions[queen].row+positions[queen].col=row+col){
                     foundsafe=false;
                     break;
                }
            if(foundsafe){
                positions[row]=new Position(row,col);
                if(solveNQueenUtil(n,row+1,positions))
                    return true;
            }  
            
        }
    }
    return false;
}

class Main{
    public stativ void main(String args[]){
        int n=4;
        Position[] x=solveNQueen(n);

        for(auto i : x){
            cout<<i.row<<" "<<i.col<<endl;
        }
    }

}