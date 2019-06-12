# wsf_markup - An Eiffel-based HTML Generation Library

## Eiffel Only
This library is written in pure Eiffel code and Eiffel only. There are no other technologies required for this "stack". The library is designed to be consumed together with the Eiffel Web Framework.
## Purpose
The purpose of this library is to write Eiffel code that faithfully generates well-formed HTML-5 (and other) markup code. Perhaps the fastest way to communicate is to demonstrate.
## Quick Demo
Let us say we have a code snippet of HTML that we want to generate using Eiffel by way of the wsf_markup library.
```html
<main>
...
        <section class="sc-home-hero">
          <header class="sc-home-hero__header">
            <div class="logo">
              <img class="sc-home-hero__logo" src="/img/logo.svg" alt="Stephen Caver">
            </div>
            <h1>I’m Stephen Caver. A designer &amp; developer in Austin,&nbsp;TX. I build&nbsp;websites.</h1>
          </header>
          <div class="sc-home-hero__body">
            <div class="sc-home-hero__body-copy">
              <h2>Crafting the&nbsp;Web</h2>
              <p>Whatever the craft demands, that’s what I desire to do. I build websites. That means writing, it means architecting, coding, and it has always meant design.</p>
              <p>The craft of the web is knowing, doing, and loving all these things and putting the user experience first.</p>
            </div>
          </div>
          <figure class="sc-home-hero__figure">
            <div>
              <img src="/img/hero-photo.png" alt="Photo of Stephen">
              <figcaption>Head-cover enthusiast</figcaption>
            </div>
          </figure>
        </section>
...
<main>
```
The Eiffel code used to generate this code is:
```c#
last_main.add_subelem (section_with_class ("sc-home-hero"))
   last_section.add_subelem (header_with_class ("sc-home-hero__header"))
      last_header.add_subelem (div_with_class ("logo"))
         last_div.add_subelem (img_with_class_src_alt ("sc-home-hero__logo", "/img/logo.svg", "Stephen Carver"))
            last_header.add_subelem (h1_with_text ("I am Stephen Caver. A designer &amp; developer in Austin,&nbsp;TX. I build&nbsp;websites."))
   last_section.add_subelem (div_with_class ("sc-home-hero__body"))
      last_div.add_subelem (div_with_class ("sc-home-hero__body-copy"))
         last_div.add_subelem (h2_with_text ("Crafting the&nbsp;Web"))
            last_div.add_subelem (p_with_text ({STRING_32} "Whatever the craft demands, that’s what I desire to do. I build websites. That means writing, it means architecting, coding, and it has always meant design."))
            last_div.add_subelem (p_with_text ({STRING_32} "The craft of the web is knowing, doing, and loving all these things and putting the user experience first."))
   last_section.add_subelem (figure_with_class ("sc-home-hero__figure"))
      last_figure.add_subelem (div)
         last_div.add_subelem (img_with_src_alt ("/img/hero-photo.png", "Photo of Stephen"))
         last_div.add_subelem (figcaption_with_text ("Head-cover enthusiast"))
```
## Side-by-Side
Let's examine an HTML markup line and compare it to the Eiffel wsf_markup code which will generate it.
```html
<section class="sc-home-hero">
```
Here, we have a `<section>` tag with a class attribute. This tag is enclosed in an already created `<main>` tag, which is represented as `last_main`, when referencing a tag already created (and ready for later generation).
```c#
last_main.add_subelem (section_with_class ("sc-home-hero"))
```
The call to `last_main.add_subelem ( ... )` is what will take our `section` object and add it to the `main`.

To create our `section` object, we make a call to `{HTML_ELEMENT_FACTORY}.section_with_class (a_class_name: STRING_32)`.

This call will create an `{HTML_SECTION}` object and set its `class=` attribute to the value of `a_class_name`. The resulting object will later generate the needed HTML markup when its `html_out` feature is called.

**NOTE: Generating an entire segment of HTML—including nested HTML—is performed by a call to `html_out` on any {HTML_ELEMENT}.**
