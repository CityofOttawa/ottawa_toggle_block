<?php
/**
 * @file
 * ottawa_toggle_block.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ottawa_toggle_block_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__toggle_block';
  $strongarm->value = array(
    'view_modes' => array(
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'toggle_icons' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '0',
        ),
        'revision' => array(
          'weight' => '5',
        ),
        'view_mode' => array(
          'weight' => '4',
        ),
        'redirect' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'toggle_icons' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__toggle_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_bean__toggle_block_group';
  $strongarm->value = array(
    'view_modes' => array(
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'toggle_icons' => array(
        'custom_settings' => TRUE,
      ),
      'default' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'label' => array(
          'weight' => '-10',
        ),
        'revision' => array(
          'weight' => '10',
        ),
        'view_mode' => array(
          'weight' => '10',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'title' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_bean__toggle_block_group'] = $strongarm;

  return $export;
}
