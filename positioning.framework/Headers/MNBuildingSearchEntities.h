//
//  MNBuildingSearchEntities.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-27.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNBuildingSearchEntities_h
#define MNBuildingSearchEntities_h


@class MNSearchEntity;

/// Represents building search entities

@interface MNBuildingSearchEntities : NSObject


/***************************************************************************/

/// Creates an instance of an building search entity objects for the specified 'buildingId'.
///
/// - Parameter buildingId:  A number identifying the building
/// - Returns: The new `MNBuildingSearchEntities` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId;

/***************************************************************************/

/// A number identifying the building
- (NSInteger)buildingId;

/// A number identifying the property
- (NSInteger)propertyId;

/***************************************************************************/

/// Creates an MNSearchEntity instance with the specified 'searchEntityId'.
///
/// - Parameter searchEntityId: A number identifying the search entity
/// - Returns: The new `MNSearchEntity` instance.

- (nullable MNSearchEntity *)searchEntity:(NSInteger)searchEntityId;

/***************************************************************************/

/// Returns a list of search entities
- (nullable NSArray<MNSearchEntity *> *)searchEntities;


/***************************************************************************/

@end


#endif /* MNBuildingSearchEntities_h */
