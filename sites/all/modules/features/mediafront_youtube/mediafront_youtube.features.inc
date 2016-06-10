<?php
/**
 * @file
 * mediafront_youtube.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediafront_youtube_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mediafront_youtube_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_mediafront_default_presets().
 */
function mediafront_youtube_mediafront_default_presets() {
  $items = array(
    'youtube_landing' => array(
      'name' => 'youtube_landing',
      'description' => 'The top media player for the landing page.',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.sonna.net',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 1,
        'controllerOnly' => 0,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'Aristo',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-logo-settings',
      ),
    ),
    'youtube_nodeplayer' => array(
      'name' => 'youtube_nodeplayer',
      'description' => 'The node player for YouTube content.',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.sonna.net',
        'width' => '100%',
        'height' => '450px',
        'template' => 'default',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'Aristo',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-logo-settings',
      ),
    ),
    'youtube_player' => array(
      'name' => 'youtube_player',
      'description' => 'The full media player for YouTube',
      'player' => 'osmplayer',
      'connect' => array(
        'iscontroller' => array(
          0 => 0,
        ),
        'isplaylist' => array(
          0 => 0,
        ),
      ),
      'settings' => array(
        'debug' => 0,
        'disptime' => 0,
        'duration' => 0,
        'volume' => 80,
        'wmode' => 'transparent',
        'preload' => TRUE,
        'autoplay' => 0,
        'autoload' => 1,
        'scrollMode' => 'auto',
        'scrollSpeed' => 20,
        'showPlaylist' => 1,
        'vertical' => 1,
        'node' => array(),
        'playlist' => '',
        'pageLimit' => 10,
        'preset' => '',
        'autoNext' => 1,
        'shuffle' => 0,
        'loop' => 0,
        'logo' => '/sites/all/modules/mediafront/players/osmplayer/player/logo.png',
        'swfplayer' => '/sites/all/modules/mediafront/players/osmplayer/player/minplayer/flash/minplayer.swf',
        'link' => 'http://www.sonna.net/',
        'width' => '100%',
        'height' => '600px',
        'template' => 'electric',
        'playlistOnly' => 0,
        'disablePlaylist' => 0,
        'controllerOnly' => 0,
        'volumeVertical' => 1,
        'plugins' => array(
          'timeline_indicator' => 0,
        ),
        'theme' => 'Aristo',
        'showWhenEmpty' => 1,
        'showController' => 1,
        'prereel' => '',
        'postreel' => '',
        'player_settings__active_tab' => 'edit-player-settings-logo-settings',
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_mediafront_views_default_options().
 */
function mediafront_youtube_mediafront_views_default_options() {
  $options = array(
    'youtube_media' => array(
      'title' => array(
        'link_to_player' => 1,
        'field_type' => 'title',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
      'field_youtube_poster' => array(
        'link_to_player' => 1,
        'field_type' => 'image',
        'media_type' => 'media',
        'preview' => 'large',
        'thumbnail' => 'thumbnail',
        'custom' => '',
      ),
      'field_youtube_url' => array(
        'link_to_player' => 0,
        'field_type' => 'media',
        'media_type' => 'media',
        'preview' => 0,
        'thumbnail' => 0,
        'custom' => '',
      ),
    ),
  );
  return $options;
}

/**
 * Implements hook_node_info().
 */
function mediafront_youtube_node_info() {
  $items = array(
    'youtube_channel' => array(
      'name' => t('YouTube Channel'),
      'base' => 'node_content',
      'description' => t('Add a new YouTube Channel to this site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'youtube_media' => array(
      'name' => t('YouTube Media'),
      'base' => 'node_content',
      'description' => t('Media Content from YouTube.com.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
