//
//  MusicViewController.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DOUAudioStreamer.h"
#import "GVUserDefaults+Properities.h"
#import "MusicEntity.h"

@protocol MusicViewControllerDelegate <NSObject>
@optional
- (void)updatePlaybackIndicatorOfVisibleCells;

@end

@interface MusicViewController : UIViewController

@property (nonatomic, strong) NSMutableArray *musicEntities;
@property (nonatomic, copy) NSString *musicTitle;
@property (nonatomic, strong) DOUAudioStreamer *streamer;
@property (nonatomic, assign) BOOL dontReloadMusic;
@property (nonatomic, assign) NSInteger specialIndex;
@property (nonatomic, copy) NSNumber *parentId;
@property (nonatomic, weak) id <MusicViewControllerDelegate> delegate;
@property (nonatomic, assign) BOOL isNotPresenting;
@property (nonatomic, assign) MusicCycleType musicCycleType;

+ (instancetype)sharedInstance;
- (IBAction)playPreviousMusic:(id)sender;
- (IBAction)playNextMusic:(id)sender;

- (MusicEntity *)currentPlayingMusic;
@end
