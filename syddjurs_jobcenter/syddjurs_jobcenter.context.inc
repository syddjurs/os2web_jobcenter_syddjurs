<?php
/**
 * @file
 * syddjurs_jobcenter.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function syddjurs_jobcenter_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'os2web_jobcenter_syddjurs_diverse';
  $context->description = '';
  $context->tag = '';
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
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'menu-menu-top-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-top-menu',
          'region' => 'user_second',
          'weight' => '-64',
        ),
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'preface_first',
          'weight' => '-64',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['os2web_jobcenter_syddjurs_diverse'] = $context;

  return $export;
}
