<?php
/**
 * @file
 * ottawa_toggle_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ottawa_toggle_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-toggle_block-field_a_body'
  $field_instances['bean-toggle_block-field_a_body'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The \'A\' body content of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field_a_body',
    'label' => '\'A\' Body',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-field_b_body'
  $field_instances['bean-toggle_block-field_b_body'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The \'B\' body content of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field_b_body',
    'label' => '\'B\' Body',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-field_b_title'
  $field_instances['bean-toggle_block-field_b_title'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The \'B\' title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'h3',
    'field_name' => 'field_b_title',
    'label' => '\'B\' Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-field_block_state'
  $field_instances['bean-toggle_block-field_block_state'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select \'A\' to display the \'A\' title and body and select \'B\' to display the \'B\' title and body.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field_block_state',
    'label' => 'Block State',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-title_field'
  $field_instances['bean-toggle_block-title_field'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The \'A\' title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'h3',
    'field_name' => 'title_field',
    'label' => '\'A\' Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('\'A\' Body');
  t('\'A\' Title');
  t('\'B\' Body');
  t('\'B\' Title');
  t('Block State');
  t('Select \'A\' to display the \'A\' title and body and select \'B\' to display the \'B\' title and body.');
  t('The \'A\' body content of the block.');
  t('The \'A\' title of the block.');
  t('The \'B\' body content of the block.');
  t('The \'B\' title of the block.');

  return $field_instances;
}
