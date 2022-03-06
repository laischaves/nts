set number relativenumber
set hlsearch
set incsearch
set clipboard=unnamedplus
set expandtab
set autoindent
syntax on
set nocompatible
"Autocomplete"
set wildmode=longest,list,full
"splits open bottom and right
set splitbelow splitright
map <C-h> <C-w>h
map <C-j> <C-w>j
map <C-k> <C-w>k
map <C-l> <C-w>l
"replace S to global replace
nnoremap S :%//g<Left><Left
"replace Ctrl T to new tab
nnoremap <silent> <C-t> :tabnew<CR>
"paste from system clipboard with ctrl i
map <S-Insert> <C-i>
"delete whitespace on save
autocmd BufWritePre * %s/\s\+$//e
map kj <Esc>

"PLUGINGS
call plug#begin()

Plug 'NLKNguyen/papercolor-theme'
Plug 'scrooloose/nerdtree'

call plug#end()
""""

"theme config
"set t_Co=256   " This is may or may not needed.
set background=light
colorscheme PaperColor
""

"nerdtree config
" Start NERDTree when Vim is started without file arguments.
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 0 && !exists('s:std_in') | NERDTree | endif
""
