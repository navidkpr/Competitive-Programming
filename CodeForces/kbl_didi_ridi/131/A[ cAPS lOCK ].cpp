/EN">
<html>
<head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="df74def5ecea548aec50e1d9da6fc768"/>
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01"/>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery-1.8.3.js"></script>
    <script type="application/javascript">
        window.standaloneContest = false;
        function adjustViewport() {
            var screenWidthPx = Math.min($(window).width(), window.screen.width);
            var siteWidthPx = 1100; // min width of site
            var ratio = Math.min(screenWidthPx / siteWidthPx, 1.0);
            var viewport = "width=device-width, initial-scale=" + ratio;
            $('#viewport').attr('content', viewport);
            var style = $('<style>html * { max-height: 1000000px; }</style>');
            $('html > head').append(style);
        }

        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent) ) {
            adjustViewport();
        }
    </script>
    <meta http-equiv="pragma" content="no-cache">
    <meta http-equiv="expires" content="-1">
    <meta http-equiv="profileName" content="d2">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90"/>
    <meta property="fb:admins" content="100001352546622" />
    <meta property="og:image" content="//st.codeforces.com/s/65787/images/codeforces-telegram-square.png" />
    <link rel="image_src" href="//st.codeforces.com/s/65787/images/codeforces-telegram-square.png" />
    <meta property="og:title" content="Submission #10201524 - Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    
    <meta name="cc" content="fc1639e23b8c549dcc104d558849f45e2397ba25"/>
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Submission #10201524 - Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community" />
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup" />
    <meta name="robots" content="index, follow" />

    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/font-awesome.min.css" type="text/css" charset="utf-8" />

        <link href='//fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700&subset=latin,cyrillic' rel='stylesheet' type='text/css'>
        <link href='//fonts.googleapis.com/css?family=Cuprum&subset=latin,cyrillic' rel='stylesheet' type='text/css'>


    <link rel="shortcut icon" type="image/png" href="//st.codeforces.com/s/65787/favicon.png">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/prettify.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/clear.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/ttypography.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/problem-statement.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/second-level-menu.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/roundbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/datatable.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/table-form.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/topic.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/jquery.jgrowl.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/facebox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/jquery.wysiwyg.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/jquery.autocomplete.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/codeforces.datepick.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/colorbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/jquery.drafts.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/status.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="//st.codeforces.com/s/65787/css/community.css" type="text/css" charset="utf-8" />

    <!-- MathJax -->
    <script type="text/x-mathjax-config">
    MathJax.Hub.Config({
      tex2jax: {inlineMath: [['$$$','$$$']], displayMath: [['$$$$$$','$$$$$$']]}
    });
    </script>
    <script type="text/javascript" async
            src="https://assets.codeforces.com/mathjax/MathJax.js?config=TeX-AMS_HTML-full"
    >
    </script>
    <!-- /MathJax -->

    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/prettify/prettify.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/moment-with-locales.min.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/pushstream.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.easing.min.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.swipe.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/facebox.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/controls/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/controls/wysiwyg.table.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/controls/wysiwyg.image.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/controls/wysiwyg.link.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.datepick.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/jquery.drafts.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/clipboard.min.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/autosize.min.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/sjcl.js"></script>
    <script type="text/javascript" src="/scripts/d9d01113700aeb6004d3fdbb52f5b55a/en/codeforces-options.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/codeforces.js?v=20160131"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/EventCatcher.js?v=20160131"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/js/preparedVerdictFormats-en.js"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="//st.codeforces.com/s/65787/markitup/skins/markitup/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//st.codeforces.com/s/65787/markitup/sets/markdown/style.css" type="text/css" charset="utf-8" />

    <script type="text/javascript" src="//yandex.st/share/share.js" charset="utf-8"></script>

    <script type="text/javascript" src="//st.codeforces.com/s/65787/markitup/jquery.markitup.js"></script>
    <script type="text/javascript" src="//st.codeforces.com/s/65787/markitup/sets/markdown/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->


</head>
<body><span style='display:none;' class='csrf-token' data-csrf='df74def5ecea548aec50e1d9da6fc768'>&nbsp;</span>
<div class="button-up" style="display: none; opacity: 0.7; width: 50px; height:100%; position: fixed; left: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 3.0rem;"><i class="icon-circle-arrow-up"></i></div>
<div class="verdictPrototypeDiv" style="display: none;"></div>

<!-- Codeforces JavaScripts. -->
<script type="text/javascript">
    var queryMobile = Codeforces.queryString.mobile;
    if (queryMobile === "true" || queryMobile === "false") {
        Codeforces.putToStorage("useMobile", queryMobile == "true");
    } else {
        var useMobile = Codeforces.getFromStorage("useMobile");
        if (useMobile === true || useMobile === false) {
            if (useMobile != false) {
                Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile));
            }
        }
    }
</script>
<script type="text/javascript">
    if (window.parent.frames.length > 0) {
        window.stop();
    }
</script>
<script type="text/javascript">
    window.fbAsyncInit = function() {
        FB.init({
            appId      : '554666954583323',
            xfbml      : true,
            version    : 'v2.8'
        });
        FB.AppEvents.logPageView();
    };

    (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
</script>

    <script type="text/javascript">
        $(document).ready(function () {
    (function () {
        jQuery.expr[':'].containsCI = function(elem, index, match) {
            return !match || !match.length || match.length < 4 || !match[3] || (
                    elem.textContent || elem.innerText || jQuery(elem).text() || ''
            ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0;
        }
    }(jQuery));

    $.ajaxPrefilter(function(options, originalOptions, xhr) {
        var csrf = Codeforces.getCsrfToken();

        if (csrf) {
            var data = originalOptions.data;
            if (originalOptions.data !== undefined) {
                if (Object.prototype.toString.call(originalOptions.data) === '[object String]') {
                    data = $.deparam(originalOptions.data);
                }
            } else {
                data = {};
            }
            options.data = $.param($.extend(data, { csrf_token: csrf }));
        }
    });

    window.getCodeforcesServerTime = function(callback) {
        $.post("/data/time", {}, callback, "json");
    }

    window.updateTypography = function () {
        $("div.ttypography code").addClass("tt");
        $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt");
        $("div.ttypography table").addClass("bordertable");
        prettyPrint();
    }

    $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: {
        'X-Csrf-Token': Codeforces.getCsrfToken()
    }});

    window.updateTypography();

    Codeforces.signForms();

    setTimeout(function() {
        $(".second-level-menu-list").lavaLamp({
            fx: "backout",
            speed: 1000
        });
    }, 0);


    Codeforces.countdown();
    $("a[rel='photobox']").colorbox();


    function showAnnouncements(json) {
        //info("j=" + JSON.stringify(json));

        if (json.t != "a") {
            return;
        }
        // console.log("Got announcement from channel");
        setTimeout(function() {
            Codeforces.showAnnouncements(json.d, "en");
        }, Math.random() * 500);
    }

    function showEventCatcherUserMessage(json) {
        if (json.t == "s") {
            var points = json.d[5];
            var passedTestCount = json.d[7];
            var judgedTestCount = json.d[8];
            var verdict = preparedVerdictFormats[json.d[12]];
            var verdictPrototypeDiv = $(".verdictPrototypeDiv");
            verdictPrototypeDiv.html(verdict);
            if (judgedTestCount != null && judgedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-judged").text(judgedTestCount);
            }
            if (passedTestCount != null && passedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-passed").text(passedTestCount);
            }
            if (points != null && points != undefined) {
                verdictPrototypeDiv.find(".verdict-format-points").text(points);
            }
            Codeforces.showMessage(verdictPrototypeDiv.text());
        }
    }

    $(".clickable-title").click(function() {
        Codeforces.alert($(this).attr("title"));
    }).css("position", "relative").css("bottom", "3px");


    Codeforces.reformatTimes();

    //Codeforces.initializePubSub();
    if (window.codeforcesOptions.subscribeServerUrl) {
        window.eventCatcher = new EventCatcher(
            window.codeforcesOptions.subscribeServerUrl,
            [
                Codeforces.getGlobalChannel(),
                Codeforces.getUserChannel(),
                Codeforces.getUserShowMessageChannel(),
                Codeforces.getContestChannel(),
                Codeforces.getParticipantChannel(),
                Codeforces.getTalkChannel()
            ]
        );

        if (Codeforces.getParticipantChannel()) {
            window.eventCatcher.subscribe(Codeforces.getParticipantChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getContestChannel()) {
            window.eventCatcher.subscribe(Codeforces.getContestChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getGlobalChannel()) {
            window.eventCatcher.subscribe(Codeforces.getGlobalChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserShowMessageChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserShowMessageChannel(), function(json) {
                showEventCatcherUserMessage(json);
            });
        }
    }

    Codeforces.setupContestTimes("/data/contests");
    Codeforces.setupSpoilers();
    Codeforces.setupTutorials("/data/problemTutorial");
        });
    </script>

<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-743380-5']);
  _gaq.push(['_trackPageview']);

  (function () {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = (document.location.protocol == 'https:' ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>


<div id="body">
        

<div class="side-bell" style="visibility: hidden; display: none; opacity: 0.7; width: 40px; position: fixed; right: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 1.5rem;">
    <span class="icon-stack" style="width: 100%;">
        <i class="icon-circle icon-stack-base"></i>
        <i class="icon-bell-alt icon-light"></i>
    </span>
    <br/>
    <span class="side-bell__count" style="position: relative; top: -10px;"></span>
</div>


<div id="header" style="position: relative;">
    <div style="float:left;">
            <a href="/"><img src="//st.codeforces.com/s/65787/images/codeforces-logo-with-telegram.png"/></a>
    </div>
    <div class="lang-chooser">
        <div style="text-align: right;">
            <a href="?locale=en"><img src="//st.codeforces.com/s/65787/images/flags/24/gb.png" title="In English" alt="In English"/></a>
            <a href="?locale=ru"><img src="//st.codeforces.com/s/65787/images/flags/24/ru.png" title="По-русски" alt="По-русски"/></a>
        </div>

        <div >
                        <a href="/enter?back=%2Fcontest%2F131%2Fsubmission%2F10201524">Enter</a>
                     | 
                        <a href="/register">Register</a>
                    
        </div>



    </div>
    <br style="clear: both;"/>
</div>
        

    <div class="roundbox menu-box" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
    <div class="menu-list-container">
    <ul class="menu-list main-menu-list">
                <li class=""><a href="/">Home</a></li>
                <li class=""><a href="/top">Top</a></li>
                <li class="current"><a href="/contests">Contests</a></li>
                <li class=""><a href="/gyms">Gym</a></li>
                <li class=""><a href="/problemset">Problemset</a></li>
                <li class=""><a href="/groups">Groups</a></li>
                <li class=""><a href="/ratings">Rating</a></li>
                <li class=""><a href="/api/help">API</a></li>
                <li class=""><a href="/help">Help</a></li>
                <li class=""><a href="/calendar">Calendar</a></li>
    </ul>
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='df74def5ecea548aec50e1d9da6fc768'/>
            <input class="search" name="query" data-isPlaceholder="true" value=""/>
        </form>
    <br style="clear: both;"/>
</div>

    </div>

    <script type="text/javascript">
        $(document).ready(function () {
            $("input.search").focus(function () {
                if ($(this).attr("data-isPlaceholder") === "true") {
                    $(this).val("");
                    $(this).removeAttr("data-isPlaceholder");
                }
            });
        });
    </script>
    <div style="margin:1em;text-align: center;" class="alert alert-success" data-infoBarId="24">
        <i class="icon-info"></i> Reminder: in case of any technical issues, you can use lightweight websites
<a href="http://m1.codeforces.com">m1.codeforces.com</a>,
<a href="http://m2.codeforces.com">m2.codeforces.com</a> or
<a href="http://m3.codeforces.com">m3.codeforces.com</a>

        <span class="infobar-close" style="float: right; cursor: pointer; font-size: 1.4em;">&times;</span>
    </div>
    <script type="text/javascript">
        $(document).ready(function () {
    $(".infobar-close").click(function () {
        $(this).parent().fadeOut();
        $.post("/data/infobars", {action: "hide", infoBarId: $(this).parent().attr("data-infoBarId")}, function (response) {
            // No operations.
        }, "json");
    });
        });
    </script>
            <br style="height: 3em; clear: both;"/>

        <div style="position: relative;">
                <div id="pageContent">
                    <div class="second-level-menu">
<ul class="second-level-menu-list">
        <li><a
                                        href="/contest/131">Problems</a></li>
        <li><a
                                        href="/contest/131/submit">Submit Code</a></li>
        <li><a
                                        href="/contest/131/my">My Submissions</a></li>
        <li class="current selectedLava"><a
                                        href="/contest/131/status">Status</a></li>
        <li><a
                                        href="/contest/131/hacks">Hacks</a></li>
        <li><a
                                        href="/contest/131/room/1">Room</a></li>
        <li><a
                                        href="/contest/131/standings">Standings</a></li>
        <li><a
                                        href="/contest/131/customtest">Custom Invocation</a></li>
</ul>
</div>

    <style>
        .source-copier {
            font-size: 1.2rem;
            float: right;
            color: #888 !important;
            cursor: pointer;
            border: 1px solid rgb(185, 185, 185);
            padding: 3px;
            margin: 1px;
            margin-right: 3px;
            line-height: 1.1rem;
            text-transform: none;
        }

        .source-copier:hover {
            background-color: #def;
        }
    </style>



<div class="datatable"
     
     style="background-color: #E1E1E1; padding-bottom: 3px;">
            <div class="lt">&nbsp;</div>
            <div class="rt">&nbsp;</div>
            <div class="lb">&nbsp;</div>
            <div class="rb">&nbsp;</div>

            <div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">
                General

                <div style="position:absolute;right:0.25em;top:0.35em;">
                    <span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>

                    <img class="closed" src="//st.codeforces.com/s/65787/images/icons/control.png"/>

                    <span class="filter" style="display:none;">
                        <img class="opened" src="//st.codeforces.com/s/65787/images/icons/control-270.png"/>
                        <input style="padding:0;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;"/>
                    </span>
                </div>
            </div>
            <div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">
            <div class="ilt">&nbsp;</div>
            <div class="irt">&nbsp;</div>
            <table class="">
<tr>
    <th style="width:2em;">#</th>
    <th style="width:12em;">Author</th>
    <th style="width:2em;">Problem</th>
    <th style="width:2em;">Lang</th>
    <th style="width:8em;">Verdict</th>
        <th style="width:2em;">Time</th>
        <th style="width:2em;">Memory</th>
    <th style="width:4em;">Sent</th>
    <th style="width:4em;">Judged</th>
    <th style="width:4em;">&nbsp;</th>
</tr>
<tr>
    <td>10201524</td>
    <td>
            Practice:<br/>
<a href="/profile/kbl_didi_ridi" title="Expert kbl_didi_ridi" class="rated-user user-blue">kbl_didi_ridi</a>    </td>
    <td>
        <a title="A - cAPS lOCK" href="/contest/131/problem/A">131A</a>
         - <span title="problem revision">19</span>
    </td>
    <td>
    GNU C++
    </td>
    <td>
    <span class='verdict-accepted'>Accepted</span>
    </td>
        <td>
            31 ms
        </td>
        <td>
            8 KB
        </td>
    <td>2015-03-08 10:11:46</td>
    <td>2015-03-08 10:11:46</td>
    <td>
        <button style="padding: 0.05em; width: 80px;" class="showDiff" title="Compare">Compare</button>
    </td>
</tr>
            </table>
            </div>
        </div>
    <script type="text/javascript">
        $(document).ready(function () {
                // Create new ':containsIgnoreCase' selector for search
                jQuery.expr[':'].containsIgnoreCase = function(a, i, m) {
                    return jQuery(a).text().toUpperCase()
                            .indexOf(m[3].toUpperCase()) >= 0;
                };

                if (window.updateDatatableFilter == undefined) {
                    window.updateDatatableFilter = function(i) {
                        var parent = $(i).parent().parent().parent().parent();
                        $("tr.no-items", parent).remove();
                        $("tr", parent).hide().removeClass('visible');
                        var text = $(i).val();
                        if (text) {
                            $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible');
                        } else {
                            parent.find(".rowCount").text("");
                            $("tr", parent).show().addClass('visible');
                        }

                        var found = false;
                        var visibleRowCount = 0;
                        $("tr", parent).each(function () {
                            if (!found) {
                                if ($(this).find("th").size() > 0) {
                                    $(this).show().addClass('visible');
                                    found = true;
                                }
                            }
                            if ($(this).hasClass('visible')) {
                                visibleRowCount++;
                            }
                        });
                        if (text) {
                            parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0)));
                        }
                        if (visibleRowCount == (found ? 1 : 0)) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table'));
                        }
                        $(parent).find("tr td").removeClass("dark");
                        $(parent).find("tr.visible:odd td").addClass("dark");
                    }

                    $(".datatable .closed").click(function () {
                        var parent = $(this).parent();
                        $(this).hide();
                        $(".filter", parent).fadeIn(function () {
                            $("input", parent).val("").focus().css("border", "1px solid #aaa");
                        });
                    });

                    $(".datatable .opened").click(function () {
                        var parent = $(this).parent().parent();
                        $(".filter", parent).fadeOut(function () {
                            $(".closed", parent).show();
                            $("input", parent).val("").each(function () {
                                window.updateDatatableFilter(this);
                            });
                        });
                    });

                    $(".datatable .filter input").keyup(function(e) {
                        window.updateDatatableFilter(this);
                        e.preventDefault();
                        e.stopPropagation();
                    });

                    $(".datatable table").each(function () {
                        var found = false;
                        $("tr", this).each(function () {
                            if (!found && $(this).find("th").size() == 0) {
                                found = true;
                            }
                        });
                        if (!found) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this);
                        }
                    });

                    // Applies styles to datatables.
                    $(".datatable").each(function () {
                        $(this).find("tr:first th").addClass("top");
                        $(this).find("tr:last td").addClass("bottom");
                        $(this).find("tr:odd td").addClass("dark");
                        $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                        $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                    });

                    $(".datatable table.tablesorter").each(function () {
                        $(this).bind("sortEnd", function () {
                            $(".datatable").each(function () {
                                $(this).find("th, td")
                                    .removeClass("top").removeClass("bottom")
                                    .removeClass("left").removeClass("right")
                                    .removeClass("dark");
                                $(this).find("tr:first th").addClass("top");
                                $(this).find("tr:last td").addClass("bottom");
                                $(this).find("tr:odd td").addClass("dark");
                                $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                                $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                            });
                        });
                    });
                }
        });
    </script>

    <div class="roundbox " style="margin-top:2em;font-size:1.1rem;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">&rarr; Source
            <div class="top-links">
            </div>
        </div>
    <pre id="program-source-text" class="prettyprint lang-cpp program-source" style="padding: 0.5em;">#include <iostream>

using namespace std;

int main()
{
	string s;
	cin >> s;

	bool h = true;
	for (int i = 1; i < s.size(); i++)
		if (s[i] >= &#39;a&#39; && s[i] <= &#39;z&#39;)
			h = false;
	if (h == false)
	{
		cout << s;
		return 0;
	}
	for (int i = 0; i < s.size(); i++)
		if (s[i] >= &#39;a&#39; && s[i] <= &#39;z&#39;)
			s[i] = &#39;A&#39; + s[i] - &#39;a&#39;;
		else
			s[i] = &#39;a&#39; + s[i] - &#39;A&#39;;
	cout << s;
}
