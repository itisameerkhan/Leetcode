/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let nextValue = init;
    function increment() { return ++nextValue }
    function decrement() { return --nextValue }
    function reset() { return nextValue=init }

    return { increment, decrement, reset } 
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */

/*
Time
61ms
Beats 41.72% of users with JavaScript

Memory
44.24MB
Beats 82.33% of users with JavaScript
*/