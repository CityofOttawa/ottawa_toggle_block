<?php
/**
 * @file
 * ottawa_toggle_block.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ottawa_toggle_block_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a_content|bean|toggle_block|form';
  $field_group->group_name = 'group_a_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'toggle_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '\'A\' Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_a_body',
      1 => 'title_field',
      2 => 'field__a_label',
      3 => 'field__a_icon',
      4 => 'field__a_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_a_content|bean|toggle_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b_content|bean|toggle_block|form';
  $field_group->group_name = 'group_b_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'toggle_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '\'B\' Content',
    'weight' => '4',
    'children' => array(
      0 => 'field_b_body',
      1 => 'field_b_title',
      2 => 'field__b_label',
      3 => 'field__b_icon',
      4 => 'field__b_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_b_content|bean|toggle_block|form'] = $field_group;

  return $export;
}
