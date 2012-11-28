//
//  DataViewController.h
//  cykelfix
//
//  Created by Oscar Dollas on 28/11/12.
//  Copyright (c) 2012 PurePictures.dk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
