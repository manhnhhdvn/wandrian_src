/*
 * orientation.hpp
 *
 *  Created on: Dec 7, 2015
 *      Author: cslab
 */

#ifndef WANDRIAN_RUN_INCLUDE_COMMON_ORIENTATION_HPP_
#define WANDRIAN_RUN_INCLUDE_COMMON_ORIENTATION_HPP_

namespace wandrian {
namespace common {

enum Orientation {
  AT_RIGHT_SIDE, IN_FRONT, AT_LEFT_SIDE, BEHIND
};

inline Orientation operator++(Orientation &o, int) {
  Orientation orientation = o;
  switch (o) {
  case AT_RIGHT_SIDE:
    o = IN_FRONT;
    break;
  case IN_FRONT:
    o = AT_LEFT_SIDE;
    break;
  case AT_LEFT_SIDE:
    o = BEHIND;
    break;
  case BEHIND:
    o = AT_RIGHT_SIDE;
    break;
  }
  return orientation;
}

}
}

#endif /* WANDRIAN_RUN_INCLUDE_COMMON_ORIENTATION_HPP_ */
