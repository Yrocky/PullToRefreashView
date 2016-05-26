//
//  HLLPullToRefreshView.h
//  PullToRefreashViewDemo
//
//  Created by Youngrocky on 16/5/26.
//  Copyright © 2016年 Rocky Young. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const PullToRefreshNormalInfo;
extern NSString * const PullToRefreshReleaseInfo;

extern CGFloat const OffsetThreshold;

@interface HLLPullToRefreshView : UIView

@property (nonatomic ,weak) UIScrollView * scrollView;

@property (nonatomic ,strong ,readwrite) UIColor * refreshControlColor;

@property (nonatomic ,strong ,readwrite) UIColor * refreshInfoColor;

- (void) refreshInfoWithOffset:(CGFloat)offset;
@end
