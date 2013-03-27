//
//  QuizViewController.h
//  Quiz
//
//  Created by Ryan Transfiguracion on 3/26/13.
//  Copyright (c) 2013 Ryan Transfiguracion. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface QuizViewController : UIViewController
{
    int                 currentQuestionIndex;
    
    // THe model objects
    NSMutableArray*     questions;
    NSMutableArray*     answers;
    
    // The view objects
    IBOutlet UILabel*   questionField;
    IBOutlet UILabel*   answerField;
}

- (IBAction)            showQuestion: (id) sender;
- (IBAction)            showAnswer: (id) sender;

@end
