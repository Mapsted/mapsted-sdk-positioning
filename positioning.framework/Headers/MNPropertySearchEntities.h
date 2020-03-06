//
//  MNPropertySearchEntities.h
//  positioning
//
//  Created by Tianyun Shan on 2018-11-27.
//  Copyright © 2018 Mapsted. All rights reserved.
//

#ifndef MNPropertySearchEntities_h
#define MNPropertySearchEntities_h

@class MNSearchEntity;


/**
 An interface to retrieve search entities corresponding to a specified property.
 */

@interface MNPropertySearchEntities : NSObject
/**
   Function to instantiate a property search object.
   - Parameter propertyId: a number identifying the property to search.
 
 */

- (nullable id)initWithPropertyId:(NSInteger)propertyId;

/**
  Unique identifying number for a Property.
 */

- (NSInteger)propertyId;

/**
   Function to get a Search Entity object corresponding to a given Search entity ID
 - Parameter: searchEntityId: a number identifying a specific search entity
 - Returns: A matching SearchEntity object, or nil if no matches found
 */

- (nullable MNSearchEntity *)searchEntity:(NSInteger)searchEntityId;

/**
 Function to get all Search Entity objects
- Returns: A list of all available SearchEntity objects, or nil if none are found
*/

- (nullable NSArray<MNSearchEntity *> *)searchEntities;

@end


#endif /* MNPropertySearchEntities_h */
