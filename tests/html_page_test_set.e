note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	HTML_PAGE_TEST_SET

inherit
	EQA_TEST_SET
		rename
			assert as assert_old
		end

	EQA_COMMONLY_USED_ASSERTIONS
		undefine
			default_create
		end

	TEST_SET_BRIDGE
		undefine
			default_create
		end

	HTML_ELEMENT_FACTORY
		undefine
			default_create
		end

feature -- Test Web Pages

	html_hello_world
			-- basic hello world
		note
			testing:  "execution/isolated"
		local
			l_file: PLAIN_TEXT_FILE
		do
			new_html_with_head_and_body
			last_head.add_subelem (meta)
				last_meta.set_lang ("eng")
			last_body.add_subelem (div)
				last_div.add_subelem (h1)
				last_h1.set_text ("Hello World!")

			create l_file.make_open_write ("test_page_1.html")
			l_file.put_string (last_html.html_out)
			l_file.close
		end

feature -- Carver: Example

	carver_example_test
			--
		note
			EIS: "name=google_for_examples", "src=https://www.google.com/search?q=moderately+complex+web+page+example&rlz=1C1CHBF_enUS822US822&oq=moderately+complex+web+page+example&aqs=chrome..69i57j33.6079j0j7&sourceid=chrome&ie=UTF-8"
			EIS: "name=moderate_examples", "src=https://designmodo.com/responsive-design-examples/"
			EIS: "name=carver_example", "src=http://stephencaver.com/"
		local
			l_file: PLAIN_TEXT_FILE
		do
			new_html_with_head_and_body

				-- Save file
			create l_file.make_open_write ("carver_example.html")
			l_file.put_string (last_html.html_out)
			l_file.close
		end

feature {NONE} -- Carver: HTML

	carver_html: STRING_32 = "[
<!doctype html>
<html class="no-js" lang="">
    <head>
        <meta charset="utf-8">
        <meta http-equiv="x-ua-compatible" content="ie=edge">
        <title>Stephen Caver &mdash; Designer &amp; Developer</title>
        <meta name="description" content="">
        <meta name="viewport" content="width=device-width, initial-scale=1">

        <link rel="apple-touch-icon" href="apple-touch-icon.png">
        <!-- Place favicon.ico in the root directory -->

        <link rel="stylesheet" href="/css/main.css">
        <script src="/js/vendor/modernizr-2.8.3-min.js"></script>
        <script src="https://use.typekit.net/igu3ymi.js"></script>
        <script>try{Typekit.load({ async: true });}catch(e){}</script>
    </head>
    <body>

      <main>

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

        <section class="sc-home-work">
          <header class="sc-home-work__header">
            <h2>My Wor<span class="last-char">k</span></h2>
          </header>
          <div class="sc-home-work__intro">
            <p>Over my decade-plus career I've produced industry-leading work for many clients including national consumer and media brands, major universities, e-commerce and start&#8209;ups.</p>
          </div>
          <div class="sc-home-work__body">
            <section class="sc-home-work__item tile-able">
              <a href="/portfolio/ablelending">
                <div>
                  <h3>Able Lending</h3>
                  <p>2016&ndash;2017</p>
                </div>
              </a>
            </section>
            <section class="sc-home-work__item tile-papajohns">
              <a href="/portfolio/papajohns">
                <div>
                  <h3>Papa John’s</h3>
                  <p>2014</p>
                </div>
              </a>
            </section>
            <section class="sc-home-work__item tile-harvard">
              <a href="/portfolio/harvardextension">
                <div>
                  <h3>Harvard Extension School</h3>
                  <p>2014</p>
                </div>
              </a>
            </section>
            <section class="sc-home-work__item tile-weil">
              <a href="/portfolio/weil">
                <div>
                  <h3>Weil, Gotshal &amp; Manges</h3>
                  <p>2013</p>
                </div>
              </a>
            </section>
            <section class="sc-home-work__item tile-cirruslogic">
              <a href="/portfolio/cirruslogic">
                <div>
                  <h3>Cirrus Logic</h3>
                  <p>2016</p>
                </div>
              </a>
            </section>
          </div>
        </section>

        <section class="sc-home-expertise">
          <header class="sc-home-expertise__header">
            <h2>Expertise</h2>
          </header>
          <div class="sc-home-expertise__intro">
            <p>I’ve been building websites since the days of table-based layouts—I actually started in grade school—through the dark days of IE6 and Flash-only sites, Zeldman and the Web Standards revolution and the emergence of Responsive Design and the JavaScript renaissance.</p>
            <aside>
              <p>Stephen has a decade-plus of web experience.</p>
            </aside>
            <p>But the web is constantly changing, and I work to keep my skills current. My skillset includes web and ui-design, strategy, and user experience—whether it be a single page or a whole design system—as well as web development using HTML, CSS and JavaScript. The web evolves at lightning speed, now more than ever, but my goal is to always bring a dedication to quality, and a drive to continue growing.</p>
          </div>
        </section>

        <section class="sc-home-background">
          <header class="sc-home-background__header">
            <h2>My Background</h2>
          </header>
          <div class="sc-home-background__body">
            <section>
              <header>
                <img src="/img/logo-able-white.svg" alt="">
                <h3>Able Lending</h3>
                <p>Senior Front-End Developer<br>
                2016&ndash;2017</p>
              </header>
              <p>I worked for Austin start-up Able Lending as a Senior Front-end Developer. During my time with Able Lending we overhauled the company branding and illustrative style, and worked continuously to improve the core product. I also served as a designer, re-working UX and UI as the companies priorities evolved.</p>
            </section>
            <section>
              <header>
                <img src="/img/logo-happycog-white.svg" alt="">
                <h3>Happy Cog</h3>
                <p>Designer &amp; Developer<br>
                2007&ndash;2016</p>
              </header>
              <p>During my eight years working with Happy Cog, an industry-leading web studio, I served as both a designer and developer. At Happy Cog all employees are expected to wear many different hats; I was involved in every aspect of projects, from content strategy to design and development, for some of the most recognizable brands in the country.</p>
            </section>
            <section>
              <header>
                <img src="/img/logo-ai-white.svg" alt="">
                <h3>Art Institute of California&mdash;Orange&nbsp;County</h3>
                <p>B.S. Interactive Media Design<br>
                2004&ndash;2007</p>
              </header>
              <p>While attending the Art Institute of Orange County I learned the basics of design, art, film, photography, and web development. Not satisfied with the state of web development at the time, I pushed my own instructors to explore emerging web standards.</p>
            </section>
          </div>
        </section>

        <section class="sc-home-writing">
          <header class="sc-home-writing__header">
            <h2>Writing</h2>
            <p>Words in a sequence to convey meaning</p>
          </header>
          <div class="sc-home-writing__body">
            <article>
              <a href="http://cognition.happycog.com/article/how-to-build-development-systems-for-a-web-site">
                <h3>How to build development systems (for a web site)</h3>
                <p>12/10/15</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/enquire-for-backgrounds">
                <h3>Enquire for Backgrounds</h3>
                <p>9/10/15</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/keep-the-web-healthy">
                <h3>Keep The Web Healthy</h3>
                <p>6/11/15</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/put-a-pseudo-class-on-it">
                <h3>Put a Pseudo-Class On It</h3>
                <p>4/30/15</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/structured-typography-with-sass-maps">
                <h3>Structured Typography with Sass Maps</h3>
                <p>3/19/15</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/a-web-development-highlight-reel">
                <h3>A Web Development Highlight Reel</h3>
                <p>12/11/14</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/auto-prefix-all-the-things">
                <h3>(Auto) Prefix All The Things</h3>
                <p>10/30/14</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/why-developers-need-to-learn-design">
                <h3>Why Developers Need to Learn Design</h3>
                <p>5/1/14</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/progressive-enhancement-its-about-the-content">
                <h3>Progressive Enhancement: It’s About the Content</h3>
                <p>9/12/13</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
            <article>
              <a href="http://cognition.happycog.com/article/take-a-break">
                <h3>Take a Break!</h3>
                <p>4/25/13</p>
                <p>On Cognition</p>
                <p><span class="icon-arrow">Read</span></p>
              </a>
            </article>
          </div>
        </section>

      </main>

      <footer class="sc-global-footer">
        <div class="sc-global-footer__body">
          <h2>Thanks for stopping by!</h2>
          <ul>
            <li><a href="https://twitter.com/stephencaver"><img src="/img/social/twitter.svg" alt="Twitter"></a></li>
            <li><a href="https://www.facebook.com/stephen.caver"><img src="/img/social/facebook.svg" alt="Facebook"></a></li>
            <li><a href="https://www.linkedin.com/in/stephen-caver-473930a7/"><img src="/img/social/linkedin.svg" alt="LinkedIn"></a></li>
            <li><a href="https://github.com/stephencaver"><img src="/img/social/github.svg" alt="Github"></a></li>
            <li><a href="https://codepen.io/stephencaver/"><img src="/img/social/codepen.svg" alt="CodePen"></a></li>
            <li><a href="https://dribbble.com/stephen"><img src="/img/social/dribbble.svg" alt="Dribbble"></a></li>
            <li><a href="https://www.goodreads.com/user/show/39443446-stephen-caver"><img src="/img/social/goodreads.svg" alt="Goodreads"></a></li>
          </ul>
          <p><a class="button" href="mailto:stephencaver+website@gmail.com?subject=Hi%20Stephen">Email Me</a></p>
          <div class="sc-global-footer__copyright">
            <p>&copy; 2017 Stephen Caver.</p>
            <p>Photo, Joshua Tree National Park, <a href="https://unsplash.com/@elliottengelmann?utm_medium=referral&amp;utm_campaign=photographer-credit&amp;utm_content=creditBadge">Elliott Engelmann</a></p>
          </div>
        </div>
      </footer>

        <script src="https://code.jquery.com/jquery-1.12.0.min.js"></script>
        <script>window.jQuery || document.write('<script src="/js/vendor/jquery-1.12.0-min.js"><\/script>')</script>
        <script src="/js/plugins-min.js"></script>
        <script src="/js/main-min.js"></script>

        <!-- Google Analytics -->
        <script>
          (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
          (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
          m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
          })(window,document,'script','https://www.google-analytics.com/analytics.js','ga');
          ga('create', 'UA-601224-4', 'auto');
          ga('send', 'pageview');
        </script>
    </body>
</html>
]"

end
