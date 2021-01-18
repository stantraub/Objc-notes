@implementation Book 

-(instancetype)initWithTitle:(NSString*)title
                      author:(NSString*)author
                        year:(int)year {
    self = [super init];
    if(self) {
        _title = title;
        _author = author;
        _yearOfPublication = year;
    }

    return self;
}

@end 