//  String class test program
//
//  Name:  XXX
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  left('p');
    String  right('q');

    // TEST
    left.swap(right);

    // VERIFY
    assert(left   == 'q');
    assert(right  == 'p');
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  left("pppppppppppp");
    String  right("qqqqqqqqqqqqqq");

    // TEST
    left.swap(right);

    // VERIFY
    assert(left   == "qqqqqqqqqqqqqq");
    assert(right  == "pppppppppppp");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  left("ppppppppppppaaaadddd");
    String  right("qqqqqqqqqqqqqqbbbbbbbeeeeeeeewwwwwwwwww");

    // TEST
    left.swap(right);

    // VERIFY
    assert(left   == "qqqqqqqqqqqqqqbbbbbbbeeeeeeeewwwwwwwwww");
    assert(right  == "ppppppppppppaaaadddd");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  left("ppppppppppppaaqjunviubqebrvpfawiorejrpiueghvqugiupaadddd");
    String  right("qqqqqqqqqqqqqqbbbbbbbeeeeeeeewwwwwwwwwwaierfboqiubrfuibqfqourebvqiouerhfuiqhefuib");

    // TEST
    left.swap(right);

    // VERIFY
    assert(left   == "qqqqqqqqqqqqqqbbbbbbbeeeeeeeewwwwwwwwwwaierfboqiubrfuibqfqourebvqiouerhfuiqhefuib");
    assert(right  == "ppppppppppppaaqjunviubqebrvpfawiorejrpiueghvqugiupaadddd");
  }


  std::cout<< "done testing swap assignment" << std::endl;
}
