//
//  MusicListCell.h
//  MyMusicPlayer
//
//  Created by king on 15/12/31.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MusicEntity.h"
#import "NAKPlaybackIndicatorView.h"

@protocol MusicListCellDelegate <NSObject>

@optional
- (void)jumpToMusicListVCWithCurrentIndex:(NSInteger)index;

@end

@interface MusicListCell : UITableViewCell

@property (nonatomic, assign) NSInteger musicNumber;
@property (nonatomic, strong) MusicEntity *musicEntity;
@property (nonatomic, weak) id <MusicListCellDelegate> delegate;
@property (nonatomic, assign) NAKPlaybackIndicatorViewState state;

@end
