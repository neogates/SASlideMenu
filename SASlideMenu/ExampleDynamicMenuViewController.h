//
//  ExampleDynamicMenuViewController.h
//  SASlideMenu
//
//  Created by Stefano Antonelli on 11/20/12.
//  Copyright (c) 2012 Stefano Antonelli. All rights reserved.
//

#import "SASlideMenuDynamicViewController.h"
#import "SASlideMenuDataSource.h"
#import "SASlideMenuDelegate.h"
@interface ExampleDynamicMenuViewController : SASlideMenuDynamicViewController<SASlideMenuDataSource,SASlideMenuDelegate, UITableViewDataSource>

-(void) tap:(id) sender;
@end
