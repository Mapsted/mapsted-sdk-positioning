//
//  MNSearchEntity.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-26.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNSearchEntity_h
#define MNSearchEntity_h
#import "Searchable.h"

typedef NS_ENUM(NSInteger, MNDataType);

@class MNMercator;
@class MNZoneLabel;
@class MNEntityZone;

/// Represents a search entity
@interface MNSearchEntity : NSObject<Searchable>

/***************************************************************************/

/// Represents the type of data (Building, property, etc)
@property (readonly) MNDataType dataType;

/***************************************************************************/

/// Represents the text to show as subtitle of searched keywords
@property (nullable) NSString *searchkeyword;


/***************************************************************************/

/// Creates an instance with the specified 'propertyId' and 'searchEntityId' values.
///
/// - Parameter propertyId:  A number identifying the property
/// - Parameter searchEntityId:  A number identifying the search entity
/// - Returns: The new `MNSearchEntity` instance.

- (nullable id)initWithPropertyId:(NSInteger)propertyId searchEntityId:(NSInteger)searchEntityId;

/***************************************************************************/

/// Creates an instance with the specified 'buildingId' and 'searchEntityId' values.
///
/// - Parameter buildingId:  A number identifying the property
/// - Parameter searchEntityId:  A number identifying the search entity
/// - Returns: The new `MNSearchEntity` instance.

- (nullable id)initWithBuildingId:(NSInteger)buildingId searchEntityId:(NSInteger)searchEntityId;

/**
 * Returns a list of entity zones, which enables identification of nearby landmarks
 * @return list of entity zones
 */
- (nullable NSArray<MNEntityZone *> *)entityZones;

/***************************************************************************/

/// A number identifying the search entity
- (NSInteger)searchEntityId;

/// Represents the type of data (Building, property, etc)
- (MNDataType)dataType;

/// A string identifier for the logo image
- (nonnull NSString *)logoImageUid;

/// A string identifyer for the cateogry
- (nonnull NSString *)categoryUid;

/// Represents an array collection of numbers identifying entities
- (nonnull NSArray<NSNumber *> *)entityIds;

/// Represents an array collection of search keywords
- (nonnull NSArray<NSString *> *)keywords;

/***************************************************************************/

/// Returns the centroid for a given entity
///
/// - Parameter entityId:  A number identifying the entity
/// - Returns: The centroid of a matching entity as mercator.

- (nonnull MNMercator *)getCentroid:(NSInteger)entityId;

/***************************************************************************/

/// Returns an array collectionn of all zone labels relevant to the search entity

- (nullable NSArray<MNZoneLabel *> *)zoneLabels;

/***************************************************************************/

- (nullable MNSearchEntity* )uniqueSearchEntityClone:(NSInteger)entityId;

@end

#endif /* MNSearchEntity_h */
