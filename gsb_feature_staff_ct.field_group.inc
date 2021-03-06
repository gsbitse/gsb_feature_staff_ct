<?php
/**
 * @file
 * gsb_feature_staff_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_staff_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_department|node|staff|form';
  $field_group->group_name = 'group_department';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Department',
    'weight' => '13',
    'children' => array(
      0 => 'field_department',
      1 => 'field_department_office',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_department|node|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|staff|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tagging',
    'weight' => '12',
    'children' => array(
      0 => 'group_keywords',
      1 => 'group_department',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_taxonomy|node|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_contact|node|staff|field_program_director';
  $field_group->group_name = 'group_wrapper_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'field_program_director';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '0',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
      2 => 'field_staff_item',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-contact field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_contact|node|staff|field_program_director'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_information|node|staff|default';
  $field_group->group_name = 'group_wrapper_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact Info',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact Info',
      'instance_settings' => array(
        'classes' => 'group-wrapper-information',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_wrapper_information|node|staff|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_info|node|staff|program_contact';
  $field_group->group_name = 'group_wrapper_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'program_contact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_phone',
      2 => 'field_staff_item',
      3 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_info|node|staff|program_contact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|staff|media_contact';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'media_contact';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact PR',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_middle_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact PR',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-name',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|node|staff|media_contact'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|staff|people_fpp';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'people_fpp';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'classes' => 'person-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|node|staff|people_fpp'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_name|node|staff|teaser';
  $field_group->group_name = 'group_wrapper_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Name wrapper',
      'instance_settings' => array(
        'classes' => 'person-name',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_name|node|staff|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_position|node|staff|people_fpp';
  $field_group->group_name = 'group_wrapper_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'people_fpp';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_staff_item',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Position wrapper',
      'instance_settings' => array(
        'item_count' => '0',
        'classes' => 'person-position',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_position|node|staff|people_fpp'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_position|node|staff|teaser';
  $field_group->group_name = 'group_wrapper_position';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'staff';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position wrapper',
    'weight' => '2',
    'children' => array(
      0 => 'field_title_position_unlimited',
      1 => 'field_department',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Position wrapper',
      'instance_settings' => array(
        'classes' => 'person-position',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_position|node|staff|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Contact Info');
  t('Contact PR');
  t('Department');
  t('Info wrapper');
  t('Name wrapper');
  t('Position wrapper');
  t('Tagging');

  return $field_groups;
}
