(function (x) {
    return (function (y) {
        console.log(x);
    }(2))
}(5))

// output will be five as nested IIFEE has access to parent because of closure
