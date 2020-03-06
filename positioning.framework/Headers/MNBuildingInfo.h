//
//  MNBuildingInfo.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingInfo_h
#define MNBuildingInfo_h

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
