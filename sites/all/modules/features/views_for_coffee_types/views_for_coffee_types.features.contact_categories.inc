<?php
/**
 * @file
 * views_for_coffee_types.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function views_for_coffee_types_contact_categories_defaults() {
  return array(
    'Coffee Order' => array(
      'category' => 'Coffee Order',
      'recipients' => 'elane@gmail.gmail',
      'reply' => 'Thank you for your order.  We may send the order within 15 days or we may just keep the money',
      'weight' => 0,
      'selected' => 0,
    ),
  );
}
