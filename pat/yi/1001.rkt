#lang racket

(define (claz n i)
  (cond
    [(= n 1) i]
    [(odd? n) (claz (/ (+ (* n 3) 1) 2) (add1 i))]
    [else (claz (/ n 2) (add1 i))]))

(define n (read))
(display  (claz n 0))