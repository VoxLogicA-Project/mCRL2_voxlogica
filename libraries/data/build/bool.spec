% specification for booleans

sort Bool <"bool_">;

cons true <"true_"> : Bool;
     false <"false_"> : Bool;

map == <"equal_to"> : Bool <"left"> # Bool <"right"> -> Bool;
    != <"not_equal_to"> : Bool <"left"> # Bool <"right"> -> Bool;
    if <"if_"> : Bool <"condition"> # Bool <"ifcase"> # Bool <"elsecase"> -> Bool;
    ! <"not_"> : Bool <"arg"> -> Bool;
    && <"and_"> : Bool <"left"> # Bool <"right"> -> Bool;
    || <"or_"> : Bool <"left"> # Bool <"right"> -> Bool;
    => <"implies"> : Bool <"left"> # Bool <"right"> -> Bool;

var b:Bool;
    c:Bool;
eqn ==(b,b) = true;
    ==(true,b) = b;
    ==(false,b) = !(b);
    ==(b,true) = b;
    ==(b,false) = !(b);
    !=(b,c) = !(==(b,c));
    if(true,b,c) = b;
    if(false,b,c) = c;
    if(b,c,c) = c;
    !(true) = false;
    !(false) = true;
    !(!(b)) = b;
    &&(b,true) = b;
    &&(b,false) = false;
    &&(true,b) = b;
    &&(false,b) = false;
    ||(b,true) = true;
    ||(b,false) = b;
    ||(true,b) = true;
    ||(false,b) = false;
    =>(b,true) = true;
    =>(b,false) = !(b);
    =>(true,b) = b;
    =>(false,b) = true;

