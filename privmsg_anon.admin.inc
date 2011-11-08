<?php

/**
 *  Admin editing page.
 */
function privmsg_anon_admin() {
	
  $form['privmsg_anon_msg_sent'] = array(
    '#type' => 'textarea',
    '#title' => t('Message Sent Text'),
	'#description' => t('Text that appears on the sent page after a message is sent.'),
	'#default_value' => variable_get('privmsg_anon_msg_sent', 'Your message has been sent to the node author.'),
  );
  /*
  $form['privmsg_anon_'] = array(
    '#type' => 'textfield',
    '#title' => t(''),
	'#description' => t(''),
	'#default_value' => variable_get('privmsg_anon_', ''),
  );*/
  
  return system_settings_form($form);
}