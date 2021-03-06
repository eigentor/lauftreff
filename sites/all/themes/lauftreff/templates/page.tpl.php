  <div id="page-wrapper"><div id="page">

    <div id="header"><div class="section clearfix">

      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
          <img src="<?php print $logo ?>" alt="<?php print t('Home'); ?>" />
        </a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <div id="name-and-slogan">
          <?php if ($site_name): ?>
            <?php if ($title): ?>
              <div id="site-name"><strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </strong></div>
            <?php else: /* Use h1 when the content title is empty */ ?>
              <h1 id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>
          <?php endif; ?>

          <div id="slogan-info-wrapper">
            <?php if ($site_slogan): ?>
                      <div id="site-slogan"><?php print $site_slogan; ?></div>
                    <?php endif; ?>
                    <!-- Additional header_info region for Meeting point time or other info below or besides site title -->
                    <?php if ($page['header_info']): ?><div id="header-info"><?php print render($page['header_info']); ?></div><?php endif; ?>
              </div>
        </div> <!-- /#name-and-slogan -->
      <?php endif; ?>
      <div id="header-image">
      </div>

      <?php print render($page['header']); ?>

      <?php if ($main_menu || $secondary_menu): ?> <!-- Main Menu is inside Header -->
      <?php endif; ?>
    <div id="header-bottom" class="clearfix">
      
            <div id="header-bottom-left">
              <div class="header-bottom-left-inner">               
              </div>
              <?php print theme('links__system_main_menu', array('links' => $main_menu, 'attributes' => array('id' => 'main-menu', 'class' => array('links', 'inline', 'clearfix')))); ?>
            </div>
          </div>

    </div></div> <!-- /.section, /#header -->

    

    <!--<?php if ($breadcrumb): ?>
      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
    <?php endif; ?>-->

    <?php print $messages; ?>

    <div id="main-wrapper" class="clearfix"><div id="main" class="clearfix">

      <div id="content" class="column"><div class="section">
        <?php if ($page['highlighted']): ?><div id="highlighted"><?php print render($page['highlighted']); ?></div><?php endif; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($tabs): ?><div class="tabs"><?php print render($tabs); ?></div><?php endif; ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>

        <?php if ($page['pagetop']): ?>
          <div id="page-top" class="page-top"><div class="section">
            <?php print render($page['pagetop']); ?>
          </div></div> <!-- /.section, /#sidebar-first -->
        <?php endif; ?>

        <?php print render($page['content']); ?>

        <?php if ($page['pagebottom']): ?>
          <div id="page-bottom" class="page-bottom"><div class="section">
            <?php print render($page['pagebottom']); ?>
         </div></div> <!-- /.section, /#sidebar-first -->
        <?php endif; ?>

        <?php print $feed_icons; ?>
      </div></div> <!-- /.section, /#content -->

      <?php if ($page['sidebar_first']): ?>
        <div id="sidebar-first" class="column sidebar"><div class="section">
          <?php print render($page['sidebar_first']); ?>
        </div></div> <!-- /.section, /#sidebar-first -->
      <?php endif; ?>

      <?php if ($page['sidebar_second']): ?>
        <div id="sidebar-second" class="column sidebar"><div class="section">
          <?php print render($page['sidebar_second']); ?>
        </div></div> <!-- /.section, /#sidebar-second -->
      <?php endif; ?>

    </div></div> <!-- /#main, /#main-wrapper -->

    <div id="footer"><div class="section">
      <?php print render($page['footer']); ?>
    </div></div> <!-- /.section, /#footer -->

  </div></div> <!-- /#page, /#page-wrapper -->
