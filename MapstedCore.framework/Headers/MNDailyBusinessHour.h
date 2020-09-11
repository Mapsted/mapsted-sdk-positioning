//
//  MNDailyBusinessHour.h
//  positioning
//
//  Created by Mapsted on 2019-03-01.
//  Copyright © 2019 Maspted. All rights reserved.
//

#ifndef MNDailyBusinessHour_h
#define MNDailyBusinessHour_h

/***************************************************************************/

/// An enumeration representing each day of the week by number, starting with Sunday.

typedef NS_ENUM(NSInteger, MNDayOfWeek) {
  MNDayOfWeekSunday = 1,
  MNDayOfWeekMonday = 2,
  MNDayOfWeekTuesday = 3,
  MNDayOfWeekWednesday = 4,
  MNDayOfWeekThursday = 5,
  MNDayOfWeekFriday = 6,
  MNDayOfWeekSaturday = 7
};


/***************************************************************************/

/// Represents the daily hours of operation for a specified day of the week.

@interface MNDailyBusinessHour : NSObject

/***************************************************************************/

/// The day of the week
@property MNDayOfWeek day;

/***************************************************************************/

/// True if open on thihs day of the week
@property Boolean open;

/***************************************************************************/
/// Time of opening
@property NSDate *openTime;

/***************************************************************************/
/// Time of closing
@property NSDate *closeTime;

/***************************************************************************/

@end


#endif /* MNDailyBusinessHour_h */
