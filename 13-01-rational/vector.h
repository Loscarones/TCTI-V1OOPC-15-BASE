#ifndef VECTOR_HPP
#define VECTOR_HPP

class vector {
private:
   int x;
   int y;

public:

   /// constructor from explicit values
   //
   /// This constructor initializes a vector from its x and y.
   vector( int x, int y ):
     x( x ), y( y )
   {}
   
   ///plus operator
   // returns a vector from 2 vectors added up to eachother
   vector operator+() {
        
   }
   
   vector operator+( const vector & rhs ) {
        return(vector(x + rhs.x, y + rhs.y));
   }
   
   vector operator+=(const vector & rhs){
       x = x + rhs.x;
       y = y + rhs.y;
       return(vector(x, y));
   }
   
    bool operator==( const vector & rhs ) const {
        return (x==rhs.x) && (y == rhs.y) ;
   }
   
    vector operator-() {
        
   }
   
   vector operator-( const vector & rhs ) {
        return(vector(x + rhs.x, y + rhs.y));
   }
   
    vector operator-=(const vector & rhs){
       x = x - rhs.x;
       y = y - rhs.y;
       return(vector(x, y));
   }
   
   
    friend vector operator*(int number, vector vec){
       return(vector(vec.x * number, vec.y * number));
   }
   
   friend vector operator*(vector vec ,int number){
       return(vector(vec.x * number, vec.y * number));
   }
   
   vector operator*=(int number){
       x = x * number;
       y = y * number;
       return(vector(x,y));
   }
    friend vector operator/(int number, vector vec){
       return(vector(vec.x / number, vec.y / number));
   }
   
   friend vector operator/(vector vec ,int number){
       return(vector(vec.x / number, vec.y / number));
   }
   
    vector operator/=(int number){
       x = x / number;
       y = y / number;
       return(vector(x,y));
   }
   
   friend std::ostream & operator<<( std::ostream & lhs, vector pos ){
    lhs << "(" << pos.x << "," << pos.y << ")";
    return lhs;
    }
};
#endif