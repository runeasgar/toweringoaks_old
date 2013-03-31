<?php
/**
 * @file
 * modulog.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function modulog_taxonomy_default_vocabularies() {
  return array(
    'major_drupal_version_compatibility' => array(
      'name' => 'Major Drupal Version Compatibility',
      'machine_name' => 'major_drupal_version_compatibility',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
