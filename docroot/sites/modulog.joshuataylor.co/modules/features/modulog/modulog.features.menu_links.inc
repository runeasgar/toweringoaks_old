<?php
/**
 * @file
 * modulog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function modulog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:public-profile/joshuataylor
  $menu_links['main-menu:public-profile/joshuataylor'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'public-profile/joshuataylor',
    'router_path' => 'public-profile/%',
    'link_title' => 'My Public Profile',
    'options' => array(
      'menu_token_link_path' => 'public-profile/[current-user:name]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:user
  $menu_links['main-menu:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Bookmarklets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Bookmarklets');
  t('My Public Profile');


  return $menu_links;
}
