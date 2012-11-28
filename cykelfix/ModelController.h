//
//  ModelController.h
//  cykelfix
//
//  Created by Oscar Dollas on 28/11/12.
//  Copyright (c) 2012 PurePictures.dk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
