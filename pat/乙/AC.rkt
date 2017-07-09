#lang racket
(require racket/date
         racket/path)
;;查看今天ac的题目的数量

(define (cpp? p)
  (if  (equal? #".cpp" (path-get-extension p))
       #t
       #f))


(define (todayfile? p)
  (let ([today  (find-seconds 0 0 0
                              (date-day (current-date))
                              (date-month (current-date))
                              (date-year (current-date)))])
    (> (file-or-directory-modify-seconds p)
       today)))

(define (today-cpp? p)
  (and  (cpp? p)
        (todayfile? p)))

(define (file-fileter fun)
  (for ([p  (in-directory (current-directory))])
    (if (fun p)
        (printf "~a\n" (file-name-from-path p))
        (void))))

(file-fileter today-cpp?)
