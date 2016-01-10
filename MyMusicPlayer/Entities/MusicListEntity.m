//
//  MusicListEntity.m
//  MyMusicPlayer
//
//  Created by king on 15/12/31.
//  Copyright © 2015年 songs. All rights reserved.
//

#import "MusicListEntity.h"

@implementation MusicListEntity

+ (NSDictionary *)JSONKeyPathsByPropertyKey
{
    return @{
             @"musicListId" : @"id",
             @"name" : @"name",
             @"musicDescription" : @"description",
             @"cover" : @"cover",
             @"musicCount" : @"music_count",
             @"musicLength" : @"music_length",
             @"favoriteCount" : @"favorite_count",
             @"commentCount" : @"comment_count",
             @"boxCurrentUsedCount" : @"box_current_used_count",
             @"userId" : @"user_id",
             @"createAtDate" : @"created_at",
             @"updateAtDate" : @"updated–at",
             };
}

@end
