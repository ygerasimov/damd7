<?php

/**
 * @file
 * Definition of RemoteStreamWrapperMediaBrowser.
 */

// If the Media Browser plugin class does not exist, prevent the rest of this
// file from being loaded.
if (!class_exists('MediaBrowserPlugin')) {
  return;
}

/**
 * Media browser plugin for remote files.
 */
class DAMediaMediaBrowserSearch extends MediaBrowserPlugin {

  /**
   * Implements MediaBrowserPluginInterface::access().
   */
  public function access($account = NULL) {
    return file_entity_access('create', NULL, $account);
  }

  /**
   * Implements MediaBrowserPlugin::view().
   */
  public function view() {
    $build['form'] = drupal_get_form('damedia_entity_add_search');
    return $build;
  }

}
