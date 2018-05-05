(add-to-list 'load-path' "~/.emacs.d/mod")
(setq default-tab-width 4)
(setq-default indent-tabs-mode nil)
(setq c-default-style "linux")
(setq c-basic-offset 4)
(global-linum-mode t)
(require 'color-theme) 
(color-theme-initialize)
;(color-theme-blue-mood)
(color-theme-dark-blue2)
(setq backup-directory-alist (quote (("." . "~/.backups"))))

(defun insert-oi()
  "insert oi code"
  (interactive)
  (insert "#include<bits/stdc++.h>
#define For(a,b,c) for(int a=b;a<=c;a++)
using namespace std;
//define
int n;
//function

//main
int main(){
    ios::sync_with_stdio(false);
    
    return 0;
}"))

(defun compile-cpp()
  "compile the cpp"
  (interactive)
  (let ((file (file-name-nondirectory buffer-file-name)))
    (compile (format "g++ -lm %s -o %s.out" file (file-name-sans-externsion)))))

(global-set-key (kbd "C-x C-e") 'insert-oi)
(global-set-key (kbd "<C-f9>") 'compile-cpp)
