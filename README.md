```
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aachhoub <aachhoub@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18          by aachhoub          #+#    #+#              #
#    Updated: 2022/08/23          by aachhoub         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
```

<html><head><meta http-equiv="Content-Type" content="text/html; charset=utf-8"/><title>Libft</title><style>
/* cspell:disable-file */
/* webkit printing magic: print all background colors */
html {
	-webkit-print-color-adjust: exact;
}
* {
	box-sizing: border-box;
	-webkit-print-color-adjust: exact;
}

html,
body {
	margin: 0;
	padding: 0;
}
@media only screen {
	body {
		margin: 2em auto;
		max-width: 900px;
		color: rgb(55, 53, 47);
	}
}

body {
	line-height: 1.5;
	white-space: pre-wrap;
}

a,
a.visited {
	color: inherit;
	text-decoration: underline;
}

.pdf-relative-link-path {
	font-size: 80%;
	color: #444;
}

h1,
h2,
h3 {
	letter-spacing: -0.01em;
	line-height: 1.2;
	font-weight: 600;
	margin-bottom: 0;
}

.page-title {
	font-size: 2.5rem;
	font-weight: 700;
	margin-top: 0;
	margin-bottom: 0.75em;
}

h1 {
	font-size: 1.875rem;
	margin-top: 1.875rem;
}

h2 {
	font-size: 1.5rem;
	margin-top: 1.5rem;
}

h3 {
	font-size: 1.25rem;
	margin-top: 1.25rem;
}

.source {
	border: 1px solid #ddd;
	border-radius: 3px;
	padding: 1.5em;
	word-break: break-all;
}

.callout {
	border-radius: 3px;
	padding: 1rem;
}

figure {
	margin: 1.25em 0;
	page-break-inside: avoid;
}

figcaption {
	opacity: 0.5;
	font-size: 85%;
	margin-top: 0.5em;
}

mark {
	background-color: transparent;
}

.indented {
	padding-left: 1.5em;
}

hr {
	background: transparent;
	display: block;
	width: 100%;
	height: 1px;
	visibility: visible;
	border: none;
	border-bottom: 1px solid rgba(55, 53, 47, 0.09);
}

img {
	max-width: 100%;
}

@media only print {
	img {
		max-height: 100vh;
		object-fit: contain;
	}
}

@page {
	margin: 1in;
}

.collection-content {
	font-size: 0.875rem;
}

.column-list {
	display: flex;
	justify-content: space-between;
}

.column {
	padding: 0 1em;
}

.column:first-child {
	padding-left: 0;
}

.column:last-child {
	padding-right: 0;
}

.table_of_contents-item {
	display: block;
	font-size: 0.875rem;
	line-height: 1.3;
	padding: 0.125rem;
}

.table_of_contents-indent-1 {
	margin-left: 1.5rem;
}

.table_of_contents-indent-2 {
	margin-left: 3rem;
}

.table_of_contents-indent-3 {
	margin-left: 4.5rem;
}

.table_of_contents-link {
	text-decoration: none;
	opacity: 0.7;
	border-bottom: 1px solid rgba(55, 53, 47, 0.18);
}

table,
th,
td {
	border: 1px solid rgba(55, 53, 47, 0.09);
	border-collapse: collapse;
}

table {
	border-left: none;
	border-right: none;
}

th,
td {
	font-weight: normal;
	padding: 0.25em 0.5em;
	line-height: 1.5;
	min-height: 1.5em;
	text-align: left;
}

th {
	color: rgba(55, 53, 47, 0.6);
}

ol,
ul {
	margin: 0;
	margin-block-start: 0.6em;
	margin-block-end: 0.6em;
}

li > ol:first-child,
li > ul:first-child {
	margin-block-start: 0.6em;
}

ul > li {
	list-style: disc;
}

ul.to-do-list {
	text-indent: -1.7em;
}

ul.to-do-list > li {
	list-style: none;
}

.to-do-children-checked {
	text-decoration: line-through;
	opacity: 0.375;
}

ul.toggle > li {
	list-style: none;
}

ul {
	padding-inline-start: 1.7em;
}

ul > li {
	padding-left: 0.1em;
}

ol {
	padding-inline-start: 1.6em;
}

ol > li {
	padding-left: 0.2em;
}

.mono ol {
	padding-inline-start: 2em;
}

.mono ol > li {
	text-indent: -0.4em;
}

.toggle {
	padding-inline-start: 0em;
	list-style-type: none;
}

/* Indent toggle children */
.toggle > li > details {
	padding-left: 1.7em;
}

.toggle > li > details > summary {
	margin-left: -1.1em;
}

.selected-value {
	display: inline-block;
	padding: 0 0.5em;
	background: rgba(206, 205, 202, 0.5);
	border-radius: 3px;
	margin-right: 0.5em;
	margin-top: 0.3em;
	margin-bottom: 0.3em;
	white-space: nowrap;
}

.collection-title {
	display: inline-block;
	margin-right: 1em;
}

.simple-table {
	margin-top: 1em;
	font-size: 0.875rem;
	empty-cells: show;
}
.simple-table td {
	height: 29px;
	min-width: 120px;
}

.simple-table th {
	height: 29px;
	min-width: 120px;
}

.simple-table-header-color {
	background: rgb(247, 246, 243);
	color: black;
}
.simple-table-header {
	font-weight: 500;
}

time {
	opacity: 0.5;
}

.icon {
	display: inline-block;
	max-width: 1.2em;
	max-height: 1.2em;
	text-decoration: none;
	vertical-align: text-bottom;
	margin-right: 0.5em;
}

img.icon {
	border-radius: 3px;
}

.user-icon {
	width: 1.5em;
	height: 1.5em;
	border-radius: 100%;
	margin-right: 0.5rem;
}

.user-icon-inner {
	font-size: 0.8em;
}

.text-icon {
	border: 1px solid #000;
	text-align: center;
}

.page-cover-image {
	display: block;
	object-fit: cover;
	width: 100%;
	max-height: 30vh;
}

.page-header-icon {
	font-size: 3rem;
	margin-bottom: 1rem;
}

.page-header-icon-with-cover {
	margin-top: -0.72em;
	margin-left: 0.07em;
}

.page-header-icon img {
	border-radius: 3px;
}

.link-to-page {
	margin: 1em 0;
	padding: 0;
	border: none;
	font-weight: 500;
}

p > .user {
	opacity: 0.5;
}

td > .user,
td > time {
	white-space: nowrap;
}

input[type="checkbox"] {
	transform: scale(1.5);
	margin-right: 0.6em;
	vertical-align: middle;
}

p {
	margin-top: 0.5em;
	margin-bottom: 0.5em;
}

.image {
	border: none;
	margin: 1.5em 0;
	padding: 0;
	border-radius: 0;
	text-align: center;
}

.code,
code {
	background: rgba(135, 131, 120, 0.15);
	border-radius: 3px;
	padding: 0.2em 0.4em;
	border-radius: 3px;
	font-size: 85%;
	tab-size: 2;
}

code {
	color: #eb5757;
}

.code {
	padding: 1.5em 1em;
}

.code-wrap {
	white-space: pre-wrap;
	word-break: break-all;
}

.code > code {
	background: none;
	padding: 0;
	font-size: 100%;
	color: inherit;
}

blockquote {
	font-size: 1.25em;
	margin: 1em 0;
	padding-left: 1em;
	border-left: 3px solid rgb(55, 53, 47);
}

.bookmark {
	text-decoration: none;
	max-height: 8em;
	padding: 0;
	display: flex;
	width: 100%;
	align-items: stretch;
}

.bookmark-title {
	font-size: 0.85em;
	overflow: hidden;
	text-overflow: ellipsis;
	height: 1.75em;
	white-space: nowrap;
}

.bookmark-text {
	display: flex;
	flex-direction: column;
}

.bookmark-info {
	flex: 4 1 180px;
	padding: 12px 14px 14px;
	display: flex;
	flex-direction: column;
	justify-content: space-between;
}

.bookmark-image {
	width: 33%;
	flex: 1 1 180px;
	display: block;
	position: relative;
	object-fit: cover;
	border-radius: 1px;
}

.bookmark-description {
	color: rgba(55, 53, 47, 0.6);
	font-size: 0.75em;
	overflow: hidden;
	max-height: 4.5em;
	word-break: break-word;
}

.bookmark-href {
	font-size: 0.75em;
	margin-top: 0.25em;
}

.sans { font-family: ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol"; }
.code { font-family: "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace; }
.serif { font-family: Lyon-Text, Georgia, ui-serif, serif; }
.mono { font-family: iawriter-mono, Nitti, Menlo, Courier, monospace; }
.pdf .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK JP'; }
.pdf:lang(zh-CN) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK SC'; }
.pdf:lang(zh-TW) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK TC'; }
.pdf:lang(ko-KR) .sans { font-family: Inter, ui-sans-serif, -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, "Apple Color Emoji", Arial, sans-serif, "Segoe UI Emoji", "Segoe UI Symbol", 'Twemoji', 'Noto Color Emoji', 'Noto Sans CJK KR'; }
.pdf .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .code { font-family: Source Code Pro, "SFMono-Regular", Menlo, Consolas, "PT Mono", "Liberation Mono", Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.pdf .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK JP'; }
.pdf:lang(zh-CN) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK SC'; }
.pdf:lang(zh-TW) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK TC'; }
.pdf:lang(ko-KR) .serif { font-family: PT Serif, Lyon-Text, Georgia, ui-serif, serif, 'Twemoji', 'Noto Color Emoji', 'Noto Serif CJK KR'; }
.pdf .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK JP'; }
.pdf:lang(zh-CN) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK SC'; }
.pdf:lang(zh-TW) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK TC'; }
.pdf:lang(ko-KR) .mono { font-family: PT Mono, iawriter-mono, Nitti, Menlo, Courier, monospace, 'Twemoji', 'Noto Color Emoji', 'Noto Sans Mono CJK KR'; }
.highlight-default {
	color: rgba(55, 53, 47, 1);
}
.highlight-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.highlight-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.highlight-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.highlight-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.highlight-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.highlight-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.highlight-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.highlight-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.highlight-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.highlight-gray_background {
	background: rgba(241, 241, 239, 1);
}
.highlight-brown_background {
	background: rgba(244, 238, 238, 1);
}
.highlight-orange_background {
	background: rgba(251, 236, 221, 1);
}
.highlight-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.highlight-teal_background {
	background: rgba(237, 243, 236, 1);
}
.highlight-blue_background {
	background: rgba(231, 243, 248, 1);
}
.highlight-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.highlight-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.highlight-red_background {
	background: rgba(253, 235, 236, 1);
}
.block-color-default {
	color: inherit;
	fill: inherit;
}
.block-color-gray {
	color: rgba(120, 119, 116, 1);
	fill: rgba(120, 119, 116, 1);
}
.block-color-brown {
	color: rgba(159, 107, 83, 1);
	fill: rgba(159, 107, 83, 1);
}
.block-color-orange {
	color: rgba(217, 115, 13, 1);
	fill: rgba(217, 115, 13, 1);
}
.block-color-yellow {
	color: rgba(203, 145, 47, 1);
	fill: rgba(203, 145, 47, 1);
}
.block-color-teal {
	color: rgba(68, 131, 97, 1);
	fill: rgba(68, 131, 97, 1);
}
.block-color-blue {
	color: rgba(51, 126, 169, 1);
	fill: rgba(51, 126, 169, 1);
}
.block-color-purple {
	color: rgba(144, 101, 176, 1);
	fill: rgba(144, 101, 176, 1);
}
.block-color-pink {
	color: rgba(193, 76, 138, 1);
	fill: rgba(193, 76, 138, 1);
}
.block-color-red {
	color: rgba(212, 76, 71, 1);
	fill: rgba(212, 76, 71, 1);
}
.block-color-gray_background {
	background: rgba(241, 241, 239, 1);
}
.block-color-brown_background {
	background: rgba(244, 238, 238, 1);
}
.block-color-orange_background {
	background: rgba(251, 236, 221, 1);
}
.block-color-yellow_background {
	background: rgba(251, 243, 219, 1);
}
.block-color-teal_background {
	background: rgba(237, 243, 236, 1);
}
.block-color-blue_background {
	background: rgba(231, 243, 248, 1);
}
.block-color-purple_background {
	background: rgba(244, 240, 247, 0.8);
}
.block-color-pink_background {
	background: rgba(249, 238, 243, 0.8);
}
.block-color-red_background {
	background: rgba(253, 235, 236, 1);
}
.select-value-color-pink { background-color: rgba(245, 224, 233, 1); }
.select-value-color-purple { background-color: rgba(232, 222, 238, 1); }
.select-value-color-green { background-color: rgba(219, 237, 219, 1); }
.select-value-color-gray { background-color: rgba(227, 226, 224, 1); }
.select-value-color-opaquegray { background-color: rgba(255, 255, 255, 0.0375); }
.select-value-color-orange { background-color: rgba(250, 222, 201, 1); }
.select-value-color-brown { background-color: rgba(238, 224, 218, 1); }
.select-value-color-red { background-color: rgba(255, 226, 221, 1); }
.select-value-color-yellow { background-color: rgba(253, 236, 200, 1); }
.select-value-color-blue { background-color: rgba(211, 229, 239, 1); }

.checkbox {
	display: inline-flex;
	vertical-align: text-bottom;
	width: 16;
	height: 16;
	background-size: 16px;
	margin-left: 2px;
	margin-right: 5px;
}

.checkbox-on {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20width%3D%2216%22%20height%3D%2216%22%20fill%3D%22%2358A9D7%22%2F%3E%0A%3Cpath%20d%3D%22M6.71429%2012.2852L14%204.9995L12.7143%203.71436L6.71429%209.71378L3.28571%206.2831L2%207.57092L6.71429%2012.2852Z%22%20fill%3D%22white%22%2F%3E%0A%3C%2Fsvg%3E");
}

.checkbox-off {
	background-image: url("data:image/svg+xml;charset=UTF-8,%3Csvg%20width%3D%2216%22%20height%3D%2216%22%20viewBox%3D%220%200%2016%2016%22%20fill%3D%22none%22%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%3E%0A%3Crect%20x%3D%220.75%22%20y%3D%220.75%22%20width%3D%2214.5%22%20height%3D%2214.5%22%20fill%3D%22white%22%20stroke%3D%22%2336352F%22%20stroke-width%3D%221.5%22%2F%3E%0A%3C%2Fsvg%3E");
}
	
</style></head><body><article id="ca824403-4421-48fd-8069-b0917a1c1eb5" class="page sans"><header><h1 class="page-title">Libft</h1></header><div class="page-body"><p id="297bb18f-240a-4cc7-a400-2af5d1239755" class="">The aim of this project is to code a C library regrouping usual functions that you&#x27;ll be allowed to use in all your other projects.</p><h2 id="f54cf3f6-69e5-4ed0-b49d-1b76f1b26d86" class="">1. &lt;ctype.h&gt; Functions:</h2><ul id="b85b262d-bf5b-49dc-92b1-ec55ebcf6830" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_isascii - test for ASCII character.</span></li></ul><ul id="acf204e9-34cc-47f8-8956-f94ce012d711" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_isalnum - alphanumeric character test.</span></li></ul><ul id="a19b0e63-3094-4a18-bc68-ccef8dd59bef" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_isalpha - alphabetic character test.</span></li></ul><ul id="0e9e6a3a-fc92-461a-90fa-85d47ca78ddc" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_isdigit - decimal-digit character test.</span></li></ul><ul id="7075f40f-6a54-4177-ac1e-5f88c59f39ca" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_isprint - printing character test (space character inclusive).</span></li></ul><ul id="b4cf86f9-8489-4c51-8c7a-80a6f868692e" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_tolower - upper case to lower case letter conversion.</span></li></ul><ul id="5c0b74d2-2223-42c0-82aa-c5e36b6265c9" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_toupper - lower case to upper case letter conversion.</span></li></ul><h2 id="8bd00e4c-1b86-4780-947f-bb8d345f1d68" class="">2. &lt;stdlib.h&gt; Functions:</h2><ul id="c0587dc6-8a65-4c3d-bfd2-5824db314048" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_atoi - convert ASCII string to integer.</span></li></ul><ul id="62b82598-2def-46a8-a8f2-dd0d6caa61bf" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_calloc - memory allocation.</span></li></ul><h2 id="4dccfc4b-834b-4b84-95aa-5d28c985923a" class="">3. &lt;string.h&gt; Functions:</h2><ul id="724596ca-1149-4abc-8d8b-5f9ca08d7896" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_memset - write a byte to a byte string.</span></li></ul><ul id="f20e3241-37b5-482e-9339-f63439990a88" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_memchr - locate byte in byte string.</span></li></ul><ul id="7fee4a32-cce2-4792-8ba9-38ec131c6291" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_memcmp - compare byte string.</span></li></ul><ul id="a9165e7c-3325-4dc9-897a-da3db9246ced" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_memmove - copy byte string.</span></li></ul><ul id="d00d32d7-b110-43d6-bb5a-60c87f65244f" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_memcpy - copy memory area.</span></li></ul><ul id="0b0a0fda-fdbf-4601-adbf-4c7d87579cdc" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_memccpy - copy string until character found.</span></li></ul><ul id="4e3ef9be-6a20-475d-b482-b2e598b61b2e" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strlen - find length of string.</span></li></ul><ul id="d64aecfa-552d-44a1-b28e-cfb1a6e1c702" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strchr - locate character in string (first occurrence).</span></li></ul><ul id="36d64976-7beb-42e2-a431-78783c197070" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strrchr - locate character in string (last occurence).</span></li></ul><ul id="8c185571-c1c7-4c5b-b166-fecc1908b76d" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strnstr - locate a substring in a string (size-bounded).</span></li></ul><ul id="8a6f984b-ff2b-4c8a-91c0-cab7333bf804" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strncmp - compare strings (size-bounded).</span></li></ul><ul id="822c7fc6-9f62-4263-b28c-a2edd1c0bd20" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strdup - save a copy of a string (with malloc).</span></li></ul><ul id="8e2a7d7f-9249-429b-830d-7ec005382101" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strlcpy - size-bounded string copying.</span></li></ul><ul id="25bf5761-4dc5-4c2c-a1db-d18b010ec9b9" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strlcat - size-bounded string concatenation.</span></li></ul><h2 id="e56f8a1e-6c03-4f2b-9a0b-c0454cbbdc54" class="">4. &lt;strings.h&gt; Functions:</h2><ul id="a7c58d27-ce41-4966-a175-67fc22752b15" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_bzero - write zeroes to a byte string.</span></li></ul><h2 id="a70161d6-33a6-4df3-ad31-130df1a09573" class="">5. Non Standard Functions:</h2><ul id="53c27ff4-9ac2-44c3-b1a5-1c0fb0ce9b3f" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_putchar_fd - output a character to given file.</span></li></ul><ul id="72b16c71-b7d8-4287-9504-081c3d3ff6a1" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_putstr_fd - output string to given file.</span></li></ul><ul id="68dcc6c0-3ab5-4f97-a281-9418a8a5b896" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_putendl_fd - output string to given file with newline.</span></li></ul><ul id="31ab5ba4-4d81-412e-9141-50e0ba8ac365" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_putnbr_fd - output integer to given file.</span></li></ul><ul id="dc8ba527-e097-44f6-a780-c1fbf5007299" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_itoa - convert integer to ASCII string.</span></li></ul><ul id="6f1d66f7-1663-4140-a776-5fd2dc47a333" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strsub - extract substring from string.</span></li></ul><ul id="e905207c-5c6f-44fd-9b14-fa9c953f5024" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_strtrim - trim beginning and end of string with the specified characters.</span></li></ul><ul id="77e0a2df-a75d-49bd-9ba6-5454ef6e6e85" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strjoin - concatenate two strings into a new string (with malloc).</span></li></ul><ul id="c6daffaa-59d7-497b-9ef1-980ea8f38210" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_split - split string, with specified character as delimiter, into an array of strings.</span></li></ul><ul id="743f0205-2e78-4ef2-bf2a-7ab8283ec85c" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">ft_strmapi - create new string from modifying string with specified function.</span></li></ul><h2 id="1dbbceb5-f9ed-4bb7-9675-6eefa06a251e" class="">6. Linked Lists Functions:</h2><ul id="c62c932c-e98a-4b5f-8a37-c59b0d01c566" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstnew - create new list.</span></li></ul><ul id="99ed852c-b043-417f-995a-c586d5fa874c" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstsize - count elements of a list.</span></li></ul><ul id="b531ea05-7603-45a5-978c-02822489b22f" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstlast - find last element of list.</span></li></ul><ul id="89bb4b9a-59d9-4000-a5d8-78c8141dc18f" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstadd_back - add new element at end of list.</span></li></ul><ul id="5b7a00f8-ac27-4604-8067-74cf9e8a2b09" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstadd_front - add new element at beginning of list.</span></li></ul><ul id="0e9b75bd-c75f-4d8e-b737-f122991d67eb" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstdelone - delete element from list.</span></li></ul><ul id="0169323c-8903-45f8-9694-286c088754b7" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstclear - delete sequence of elements of list from a starting point.</span></li></ul><ul id="21c62510-c877-4ed7-a7e6-e852489328d9" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstiter - apply function to content of all list&#x27;s elements.</span></li></ul><ul id="e3e77db8-bb79-4207-91ff-48109cb37c93" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked">ft_lstmap - apply function to content of all list&#x27;s elements into new list.</span></li></ul><h2 id="e99118f1-a2ae-4723-915e-c6787ef3534c" class="">7. Header and Makefile:</h2><ul id="38f7217d-7bf5-4f61-9fbb-97163ae1b55e" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">libft.h</span></li></ul><ul id="07ea2eaf-b3f1-48f9-a769-0225bd7fd675" class="to-do-list"><li><div class="checkbox checkbox-on"></div> <span class="to-do-children-checked">Makefile</span></li></ul><h2 id="eb5dee4f-9899-408f-87f0-7d3ce95e1f77" class="">8. Testing:</h2><ul id="796e7cd6-b56b-47a7-90d3-5f39c506810c" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked"><a href="https://github.com/jtoty/Libftest">Libftest</a></span></li></ul><ul id="6c30f8cf-85de-4ed8-97e5-a6a9209200c6" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked"><a href="https://github.com/alelievr/libft-unit-test">Libft Unit Test</a></span></li></ul><ul id="6f9c8304-06fa-47a9-a995-3d553e7c1cb1" class="to-do-list"><li><div class="checkbox checkbox-off"></div> <span class="to-do-children-unchecked"><a href="https://github.com/t0mm4rx/libftdestructor">Libft Destructor</a></span></li></ul></div></article></body></html>
