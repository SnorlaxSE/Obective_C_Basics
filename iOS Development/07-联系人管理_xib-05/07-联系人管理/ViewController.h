//
//  ViewController.h
//  07-联系人管理
//
//  Created by Captain on 07/02/2018.
//  Copyright © 2018 captain. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

// 添加
- (IBAction)add:(UIBarButtonItem *)sender;


// 删除
- (IBAction)remove:(UIBarButtonItem *)sender;

// 监听每一行的删除按钮
- (IBAction)deleteClick:(UIButton *)btn;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *trashItem;

@end

