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

  // Exported field_instance: 'bean-toggle_block-field__a_icon'
  $field_instances['bean-toggle_block-field__a_icon'] = array(
    'bundle' => 'toggle_block',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'toggle_icons' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field__a_icon',
    'label' => '\'A\' Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 0,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 0,
          'colorbox__apps_featured_screenshot' => 0,
          'colorbox__apps_logo' => 0,
          'colorbox__apps_logo_small' => 0,
          'colorbox__apps_screenshot' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__image_link_blurb_medium' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__magazine_lrg' => 0,
          'colorbox__magazine_med' => 0,
          'colorbox__magazine_thumb' => 0,
          'colorbox__medium' => 0,
          'colorbox__nco_banner' => 0,
          'colorbox__panopoly_image_featured' => 0,
          'colorbox__panopoly_image_full' => 0,
          'colorbox__panopoly_image_half' => 0,
          'colorbox__panopoly_image_quarter' => 0,
          'colorbox__panopoly_image_spotlight' => 0,
          'colorbox__panopoly_image_square' => 0,
          'colorbox__panopoly_image_thumbnail' => 0,
          'colorbox__panopoly_image_video' => 0,
          'colorbox__slider' => 0,
          'colorbox__small_thumbnail' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__stephen_term_image_test' => 0,
          'colorbox__stephen_test_terms' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__wetkit_image_featured' => 0,
          'colorbox__wetkit_image_full' => 0,
          'colorbox__wetkit_image_half' => 0,
          'colorbox__wetkit_image_quarter' => 0,
          'colorbox__wetkit_image_spotlight' => 0,
          'colorbox__wetkit_image_square' => 0,
          'colorbox__wetkit_image_thumbnail' => 0,
          'colorbox__wysiwyg_template_thumbnail' => 0,
          'custom_formatters_wetkit_lightbox' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_apps_featured_screenshot' => 0,
          'image_apps_logo' => 0,
          'image_apps_logo_small' => 0,
          'image_apps_screenshot' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_image_link_blurb_medium' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_magazine_lrg' => 0,
          'image_magazine_med' => 0,
          'image_magazine_thumb' => 0,
          'image_medium' => 0,
          'image_nco_banner' => 0,
          'image_panopoly_image_featured' => 0,
          'image_panopoly_image_full' => 0,
          'image_panopoly_image_half' => 0,
          'image_panopoly_image_quarter' => 0,
          'image_panopoly_image_spotlight' => 0,
          'image_panopoly_image_square' => 0,
          'image_panopoly_image_thumbnail' => 0,
          'image_panopoly_image_video' => 0,
          'image_slider' => 0,
          'image_small_thumbnail' => 0,
          'image_square_thumbnail' => 0,
          'image_stephen_term_image_test' => 0,
          'image_stephen_test_terms' => 0,
          'image_thumbnail' => 0,
          'image_wetkit_image_featured' => 0,
          'image_wetkit_image_full' => 0,
          'image_wetkit_image_half' => 0,
          'image_wetkit_image_quarter' => 0,
          'image_wetkit_image_spotlight' => 0,
          'image_wetkit_image_square' => 0,
          'image_wetkit_image_thumbnail' => 0,
          'image_wysiwyg_template_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-field__a_label'
  $field_instances['bean-toggle_block-field__a_label'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'toggle_icons' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field__a_label',
    'label' => '\'A\' Label',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-field__b_icon'
  $field_instances['bean-toggle_block-field__b_icon'] = array(
    'bundle' => 'toggle_block',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'toggle_icons' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field__b_icon',
    'label' => '\'B\' Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'caption_from_title' => 0,
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 0,
          'colorbox__apps_featured_screenshot' => 0,
          'colorbox__apps_logo' => 0,
          'colorbox__apps_logo_small' => 0,
          'colorbox__apps_screenshot' => 0,
          'colorbox__flexslider_full' => 0,
          'colorbox__flexslider_thumbnail' => 0,
          'colorbox__image_link_blurb_medium' => 0,
          'colorbox__large' => 0,
          'colorbox__linkit_thumb' => 0,
          'colorbox__magazine_lrg' => 0,
          'colorbox__magazine_med' => 0,
          'colorbox__magazine_thumb' => 0,
          'colorbox__medium' => 0,
          'colorbox__nco_banner' => 0,
          'colorbox__panopoly_image_featured' => 0,
          'colorbox__panopoly_image_full' => 0,
          'colorbox__panopoly_image_half' => 0,
          'colorbox__panopoly_image_quarter' => 0,
          'colorbox__panopoly_image_spotlight' => 0,
          'colorbox__panopoly_image_square' => 0,
          'colorbox__panopoly_image_thumbnail' => 0,
          'colorbox__panopoly_image_video' => 0,
          'colorbox__slider' => 0,
          'colorbox__small_thumbnail' => 0,
          'colorbox__square_thumbnail' => 0,
          'colorbox__stephen_term_image_test' => 0,
          'colorbox__stephen_test_terms' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__wetkit_image_featured' => 0,
          'colorbox__wetkit_image_full' => 0,
          'colorbox__wetkit_image_half' => 0,
          'colorbox__wetkit_image_quarter' => 0,
          'colorbox__wetkit_image_spotlight' => 0,
          'colorbox__wetkit_image_square' => 0,
          'colorbox__wetkit_image_thumbnail' => 0,
          'colorbox__wysiwyg_template_thumbnail' => 0,
          'custom_formatters_wetkit_lightbox' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_apps_featured_screenshot' => 0,
          'image_apps_logo' => 0,
          'image_apps_logo_small' => 0,
          'image_apps_screenshot' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_image_link_blurb_medium' => 0,
          'image_large' => 0,
          'image_linkit_thumb' => 0,
          'image_magazine_lrg' => 0,
          'image_magazine_med' => 0,
          'image_magazine_thumb' => 0,
          'image_medium' => 0,
          'image_nco_banner' => 0,
          'image_panopoly_image_featured' => 0,
          'image_panopoly_image_full' => 0,
          'image_panopoly_image_half' => 0,
          'image_panopoly_image_quarter' => 0,
          'image_panopoly_image_spotlight' => 0,
          'image_panopoly_image_square' => 0,
          'image_panopoly_image_thumbnail' => 0,
          'image_panopoly_image_video' => 0,
          'image_slider' => 0,
          'image_small_thumbnail' => 0,
          'image_square_thumbnail' => 0,
          'image_stephen_term_image_test' => 0,
          'image_stephen_test_terms' => 0,
          'image_thumbnail' => 0,
          'image_wetkit_image_featured' => 0,
          'image_wetkit_image_full' => 0,
          'image_wetkit_image_half' => 0,
          'image_wetkit_image_quarter' => 0,
          'image_wetkit_image_spotlight' => 0,
          'image_wetkit_image_square' => 0,
          'image_wetkit_image_thumbnail' => 0,
          'image_wysiwyg_template_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'bean-toggle_block-field__b_label'
  $field_instances['bean-toggle_block-field__b_label'] = array(
    'bundle' => 'toggle_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'toggle_icons' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field__b_label',
    'label' => '\'B\' Label',
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
      'weight' => 6,
    ),
  );

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
        'weight' => 3,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'toggle_icons' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'weight' => 3,
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
        'weight' => 4,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'toggle_icons' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
      'weight' => 5,
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
        'weight' => 2,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'toggle_icons' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
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
      'weight' => 4,
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
      'toggle_icons' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
      'weight' => 1,
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
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'toggle_icons' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bean-toggle_block_group-field_toggle_blocks'
  $field_instances['bean-toggle_block_group-field_toggle_blocks'] = array(
    'bundle' => 'toggle_block_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'view_mode' => 'toggle_icons',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'toggle_icons' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'field_toggle_blocks',
    'label' => 'Toggle Blocks',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'setlineage' => array(
          'lineage' => 0,
          'status' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'bean-toggle_block_group-title_field'
  $field_instances['bean-toggle_block_group-title_field'] = array(
    'bundle' => 'toggle_block_group',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Title of the block.  This will not be displayed.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'ical' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'toggle_icons' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'fences_wrapper' => 'div',
    'field_name' => 'title_field',
    'label' => 'Title',
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
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('\'A\' Body');
  t('\'A\' Icon');
  t('\'A\' Label');
  t('\'A\' Title');
  t('\'B\' Body');
  t('\'B\' Icon');
  t('\'B\' Label');
  t('\'B\' Title');
  t('Block State');
  t('Select \'A\' to display the \'A\' title and body and select \'B\' to display the \'B\' title and body.');
  t('The \'A\' body content of the block.');
  t('The \'A\' title of the block.');
  t('The \'B\' body content of the block.');
  t('The \'B\' title of the block.');
  t('The Title of the block.  This will not be displayed.');
  t('Title');
  t('Toggle Blocks');

  return $field_instances;
}
