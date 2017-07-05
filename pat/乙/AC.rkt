#lang racket
(require racket/date)
;;查看今天ac的题目的数量

(define (cpp? p)
  (string=? "cpp"  (bytes->string/utf-8 (filename-extension p))))

(define (todayfile? p)
  (let ([today  (find-seconds 0 0 0 (date-day (current-date))
                              (date-month (current-date))
                              (date-year (current-date))
                              )])
    (> (file-or-directory-modify-seconds p)
       today)))

(define (today-cpp? p)
  (and  (cpp? p)
        (todayfile? p)))

(for ([p  (in-directory (current-directory))])
  (if (today-cpp? p)
      (printf "~a\n" (file-name-from-path p))
      (void)))

