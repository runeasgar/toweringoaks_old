<?php
/**
 * @file
 * modulog.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function modulog_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'bookmarklets_block';
  $context->description = '';
  $context->tag = 'modulog';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user' => 'user',
        'user/*' => 'user/*',
        '~user/login' => '~user/login',
        '~user/register' => '~user/register',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'modulog-bookmarklets' => array(
          'module' => 'modulog',
          'delta' => 'bookmarklets',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('modulog');
  $export['bookmarklets_block'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'drupal_org_username_search';
  $context->description = '';
  $context->tag = 'modulog';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_search-block' => array(
          'module' => 'views',
          'delta' => 'user_search-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('modulog');
  $export['drupal_org_username_search'] = $context;

  return $export;
}
