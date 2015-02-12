<?php
/**
 * @file
 * ottawa_toggle_block.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function ottawa_toggle_block_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'toggle_block';
  $bean_type->label = 'Toggle Block';
  $bean_type->options = '';
  $bean_type->description = 'A block type for beans that have content for an on and off state.';
  $export['toggle_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'toggle_block_group';
  $bean_type->label = 'Toggle Block Group';
  $bean_type->options = '';
  $bean_type->description = 'A quick status block showing the icon, title and label for a selected set of toggle blocks.';
  $export['toggle_block_group'] = $bean_type;

  return $export;
}
