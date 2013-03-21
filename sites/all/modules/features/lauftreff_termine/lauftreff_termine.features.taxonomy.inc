<?php
/**
 * @file
 * lauftreff_termine.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lauftreff_termine_taxonomy_default_vocabularies() {
  return array(
    'termine_aktualit_t' => array(
      'name' => 'Termine Aktualität',
      'machine_name' => 'termine_aktualit_t',
      'description' => 'Ob ein Termin aktuell oder vergangen ist',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
