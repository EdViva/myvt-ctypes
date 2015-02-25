<?php
/**
 * @file
 * directory_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function directory_content_types_node_info() {
  $items = array(
    'places_to_eat' => array(
      'name' => t('Places to eat'),
      'base' => 'node_content',
      'description' => t('Cafes, restaurants etc.'),
      'has_title' => '1',
      'title_label' => t('Name of place'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
