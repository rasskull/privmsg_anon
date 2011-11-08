<?php 

/**
 * Page to bring in contact form.
 * @param integer $nid node ID 
 * @param integer $thread_id for replying to pm, default null
*/
function privmsg_anon_respond($nid, $thread_id = null) {

  $thread_id = ($thread_id == 'new') ? '' : $thread_id ;
  $vars = array('nid' => $nid, 'thread_id' => $thread_id);
  
  return drupal_get_form('privmsg_anon_contact',$vars);
}

/**
 * Message sent page.
 */
function privmsg_anon_message_sent() {
  return variable_get('privmsg_anon_msg_sent', 'Your message has been sent to the node author.');
}
