//
//  MusicListViewController.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MusicListViewControllerDelegate <NSObject>

- (void)playMusicWithSpecialIndex:(NSInteger)index;

@end

@interface MusicListViewController : UITableViewController

@property (nonatomic, weak) id <MusicListViewControllerDelegate> delegate;

@end
