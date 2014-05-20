//
//  BooksViewController.h
//  XML
//
//  Created by Rahul Morade on 20/05/14.
//  Copyright (c) 2014 Rahul Morade. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Book.h"

@interface BooksViewController : UITableViewController <NSXMLParserDelegate>

{
    NSMutableArray * dataArray;
    NSXMLParser * myParser;
    
    NSMutableString * dataString;
    Book * tempBook;
    
    
}


@end
