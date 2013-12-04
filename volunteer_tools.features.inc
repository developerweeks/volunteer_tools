<?php
/**
 * @file
 * site_volunteer_tools.features.inc
 */

/**
 * Implements hook_views_api().
 */
function site_volunteer_tools_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function site_volunteer_tools_node_info() {
  $items = array(
    'need' => array(
      'name' => t('Need'),
      'base' => 'node_content',
      'description' => t('Volunteer opportunities'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'volunteer' => array(
      'name' => t('Volunteer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
