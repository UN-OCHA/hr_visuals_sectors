<?php
/**
 * @file
 * hr_visuals_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_visuals_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-map-field_clusters'])) {
    $data['node-map-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster(s)' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function hr_visuals_sectors_views_default_views_alter(&$data) {
  if (isset($data['maps_view'])) {
    $data['maps_view']->display['default']->display_options['fields']['field_clusters']['label'] = 'Sector'; /* WAS: 'Cluster' */
    $data['maps_view']->display['page_1']->display_options['filters']['field_clusters_tid']['expose']['label'] = 'Sector'; /* WAS: 'Cluster' */
  }
}
