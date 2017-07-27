#lang racket
(define (main)
  (let ([n (read)])
    (for ([i (range 1 (+ n 1))])
      (let ([a (read)]
            [b (read)]
            [c (read)])
        (if (> (+ a b) c)
            (printf "Case #~a: true\n" i)
            (printf "Case #~a: false\n" i))))))
(main)
