#include "ostream"
#include "catch_with_main.hpp"
#include "rational.hpp"
#include "vector.h"



TEST_CASE( "constructor, two_parameters" ){
   rational v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "[3/4]" );   
}

TEST_CASE( "equality, equal" ){
   rational v( 1, 2 );
   REQUIRE( v == rational( 1, 2 ) ); 
}

TEST_CASE( "equality, unequal" ){
   rational v( 1, 2 );
   REQUIRE( ! ( v == rational( 1, 3 )) ); 
}

TEST_CASE( "constructor, two_parameters; reduction" ){
   rational v( 10, 2 );
   REQUIRE( v == rational( 5, 1 ) ); 
}

TEST_CASE( "constructor, one parameter" ){
   rational v( 6 );
   REQUIRE( v == rational( 6, 1 ) );   
}

TEST_CASE( "multiply by integer" ){
   rational v( 3, 4 );
   rational x = v * 7;
   REQUIRE( v == rational( 3, 4 ) );   
   REQUIRE( x == rational( 21, 4 ) );   
}

TEST_CASE( "multiply by integer; reduction" ){
   rational v( 3, 10 );
   rational x = v * 5;
   REQUIRE( v == rational( 3, 10 ) );   
   REQUIRE( x == rational( 3, 2 ) );   
}

TEST_CASE( "multiply by rational" ){
   rational v( 3, 4 );
   rational x = v * rational( 9, 7 );
   REQUIRE( v == rational( 3, 4 ) );   
   REQUIRE( x == rational( 27, 28 ) );   
}

TEST_CASE( "multiply by rational; reduction" ){
   rational v( 3, 10 );
   rational x = v * rational( 4, 6 );
   REQUIRE( v == rational( 3, 10 ) );   
   REQUIRE( x == rational( 1, 5 ) );   
}

TEST_CASE( "add rational into rational" ){
   rational v( 3, 10 );
   v += rational( 6, 7 ); 
   REQUIRE( v == rational( 81, 70 ) );     
}

TEST_CASE( "add rational into rational; reduction" ){
   rational v( 23, 147 );
   v += rational( 5, 91 ); 
   REQUIRE( v == rational( 404, 1911 ) );     
}

TEST_CASE( "add rational into rational; return value" ){
   rational v( 1, 2 );
   rational x = ( v += rational( 1, 4 )); 
   REQUIRE( v == rational( 3, 4 ) );     
   REQUIRE( x == rational( 3, 4 ) );     
}

TEST_CASE( "multiply rational into rational" ){
   rational v( 3, 10 );
   v *= rational( 1, 2 ); 
   REQUIRE( v == rational( 3, 20 ) );     
}

TEST_CASE( "multiply rational into rational; reduction" ){
   rational v( 2, 3 );
   v *= rational( 3, 2 ); 
   REQUIRE( v == rational( 1, 1 ) );     
}

TEST_CASE( "multiply rational into rational; return value" ){
   rational v( 3, 10 );
   rational x = ( v *= rational( 1, 2 )); 
   REQUIRE( x == rational( 3, 20 ) );     
}

TEST_CASE("add vector to vector"){
    vector v(1, 3);
    vector x = v + vector(2, 3);
    REQUIRE(x == vector(3,6));
}

TEST_CASE("add vector to 1vector"){
    vector v(1, 3);
    vector z(1, 5);
    vector x = v + z;
    REQUIRE(x == vector(2,8));
}

TEST_CASE("add vector to 2vector"){
    vector v(1, 3);
    vector z(1, 5);
    v += z;
    REQUIRE(v == vector(2,8));
}

TEST_CASE("multiply vector to integer"){
    vector v(1, 3);
    int k =8;
    v = v*k;
    REQUIRE(v == vector(8,24));
}

TEST_CASE("multiply integer to vector"){
    vector v(1, 3);
    int k =8;
    v = k*v;
    REQUIRE(v == vector(8,24));
}

TEST_CASE( "operator<<" ){
 std::stringstream s;

 vector v( 1, 2 );

 s << v;

 REQUIRE( s.str() == "(1,2)" );
}






