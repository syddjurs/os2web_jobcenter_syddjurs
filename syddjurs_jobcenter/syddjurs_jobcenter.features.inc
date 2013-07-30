<?php
/**
 * @file
 * syddjurs_jobcenter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function syddjurs_jobcenter_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
