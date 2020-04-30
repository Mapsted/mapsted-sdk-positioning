//
//  MNBuildingInfo.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingInfo_h
#define MNBuildingInfo_h


/// Represents an enumeration of routing instruction types
typedef NS_ENUM(int, CurrentStatus) {
    eStatusUnknown = -1,
    eStatusInactive = 0,
    eStatusActive = 1,
    eStatusCalibration = 2,
    eStatusTesting = 3
};



@class MNFloorInfo;
/***************************************************************************/

/// Represents information about a building

@interface MNBuildingInfo: NSObject

/***************************************************************************/

/// Creates an instance with the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the building
// - Returns: The new `MNBuildingInfo` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// Represents a number identifying the property
- (NSInteger)propertyId;

/// Represents a number identifying the building
- (NSInteger)buildingId;

/// Represents the name of the building
- (nonnull NSString *)name;

/// Represents a short name of the building
- (nonnull NSString *)shortName;

/// Represents the center mercator point for the building
- (nonnull MNMercator *)centroid;

/// Represents a number identifying the default floor in a building
- (NSInteger)defaultFloorId;

/// Represents a long name of the building
- (nonnull NSString *)longName;

/// Represents a description of the building
- (nonnull NSString *)description;

/// Represents the hours of operation of the building
- (nonnull NSString *)hours;

/// Represents the website address of the building
- (nonnull NSString *)website;

/// Represents the phone number of the building
- (nonnull NSString *)phoneNumber;

/// Represents the postal code of the building
- (nonnull NSString *)postalCode;

/// Represents the full address of the building
- (nonnull NSString *)fullAddress;

/// Represents the street address of the building
- (nonnull NSString *)streetAddress;

/// Represents a string identifying the image representing the building
- (nonnull NSString *)imageId;

/// Represents a string identifying the icon representing the building
- (nonnull NSString *)iconImageId;

/// Represents the current status of the building.
- (CurrentStatus) currentStatus;

/***************************************************************************/

/// Creates a floor information object instance with the specified 'floorId'.
///
/// - Parameter floorId:  A number identifying the floor
/// - Returns: The new `MNFloorInfo` instance.

- (nullable MNFloorInfo *)floorInfoWithFloorId: (NSInteger)floorId;

/***************************************************************************/

/// Returns a list of all floors associated with the building
- (nonnull NSArray<MNFloorInfo *> *)floorInfos;

/***************************************************************************/

@end


#endif /* MNBuildingInfo_h */
