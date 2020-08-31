//
//  MNValidationType.h
//  positioning
//
//  Created by Mapsted on 2020-04-30.
//  Copyright © 2020 Mapsted. All rights reserved.
//

#ifndef MNValidationType_h
#define MNValidationType_h
typedef NS_ENUM(NSInteger, MNValidationType) {
  MNUknown = 0,
  MNNavigation = 1,
  MNCalibration = 2,
  MNKiosk,
  MNDataCapture,
  MNSandbox,
  MNWayFinding = 30
};
#endif /* MNValidationType_h */
