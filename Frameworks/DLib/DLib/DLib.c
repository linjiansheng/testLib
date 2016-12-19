//
//  DLib.c
//  testLib
//
//  Created by linjiansheng on 12/19/16.
//  Copyright © 2016 youshixiu. All rights reserved.
//

#include <stdio.h>
#include "CLib.h"

void boo()
{
    printf("boo in DLib.\n");
}

void call_foo_d()
{
    printf("call_foo in DLib.\n");
    foo();
}
