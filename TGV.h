//
//  TGV.hpp
//  
//
//  Created by Jack Cook on 6/20/18.
//

#ifndef TGV_hpp
#define TGV_hpp

#include <stdio.h>

class TGVClass : public :: Global_domain
{
public:
    double Re;
    std::unordered_map< Map_3D, std::shared_ptr< FVCell >, hasher_key_3D > FVCell_Map;
    
    // Default constructor
    TGVClass() :
    Re( 0.0 )
    {}
    
    // Member constructor
    TGVClass(
             double const Re_
             ) :
    Re( Re_ )
    {}
    
    // Destructor
    ~TGVClass(){};
    
    // Member Functions
    void init_domain();//Initialize this in main.cpp
};


#endif /* TGV_hpp */
