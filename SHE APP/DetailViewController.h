//
//  DetailViewController.h
//  SHE APP
//
//  Created by Joe E. Romero on 10/23/14.
//  Copyright (c) 2014 Society Of Hispanic Engineers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
