@interface Book : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) NSString *author;
@property (nonatomic) int yearOfPublication;

-(instancetype)initWithTitle:(NSString *)title 
                    author:(NSString*)author
                    year:(int)year;

@end