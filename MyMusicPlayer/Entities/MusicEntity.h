//
//  MusicEntity.h
//  MyMusicPlayer
//
//  Created by king on 15/12/31.
//  Copyright © 2015年 songs. All rights reserved.
//

#import "BaseEntity.h"

@interface MusicEntity : BaseEntity

@property (nonatomic, copy) NSNumber *musicId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *musicUrl;
@property (nonatomic, copy) NSString *cover;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, assign) BOOL isFavorited;

@end
