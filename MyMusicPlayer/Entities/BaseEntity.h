//
//  BaseEntity.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <Mantle/Mantle.h>
#import "NSValueTransformer+MTLPredefinedTransformerAdditions.h"

@interface BaseEntity : MTLModel <MTLJSONSerializing>

#pragma mark - Class Methods to create Entity
+ (NSDateFormatter *)dateFormatter;
+ (id)entityFromDictionary:(NSDictionary *)data;
+ (NSArray *)arrayOfEntitiesFromArray:(NSArray *)array;

#pragma mark - Instancce Method
- (NSDictionary *)transformToDictionary;
+ (NSArray *)transformToArray:(NSArray *)array;

@end
