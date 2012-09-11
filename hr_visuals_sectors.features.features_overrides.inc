<?php
/**
 * @file
 * hr_visuals_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_visuals_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-map-field_clusters.field_instance|label"] = 'Sectors';

  // Exported overrides for: views_view
  $overrides["views_view.maps_view.display|default|display_options|fields|field_clusters|label"] = 'Sector';
  $overrides["views_view.maps_view.display|page_1|display_options|filters|field_clusters_tid|expose|label"] = 'Sector';

 return $overrides;
}
