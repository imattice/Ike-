<?php
/**
 * @file
 * views_for_coffee_types.features.inc
 */

/**
 * Implements hook_views_api().
 */
function views_for_coffee_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function views_for_coffee_types_node_info() {
  $items = array(
    'coffee' => array(
      'name' => t('coffee'),
      'base' => 'node_content',
      'description' => t('coffee'),
      'has_title' => '1',
      'title_label' => t('coffee name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
