//
//  CameraViewController.h
//  SlideShow
//
//  Created by Rushan on 2017-05-27.
//  Copyright © 2017 RushanBenazir. All rights reserved.
//

#import <UIKit/UIKit.h>
@import AVFoundation;

@interface ViewController : UIViewController{
    
    IBOutlet UIView *frameForCapture;
    IBOutlet UIImageView *imageView;
    
}


-(IBAction)takePhoto:(id)sender;

@end
