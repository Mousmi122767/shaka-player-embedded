// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Include language-agnostic headers.
#include "config_names.h"
#include "shaka_config.h"
#include "version.h"

// Include Objective-C headers if we are compiling Objective-C or Objective-C++.
#if defined(__OBJC__)
#  import "ShakaPlayerView.h"
#  import "manifest_objc.h"
#  import "player_externs_objc.h"
#  import "stats_objc.h"
#  import "track_objc.h"
#endif

// Include C++ headers if we are compiling in C++ or Objective-C++.
#ifdef __cplusplus
#  include "async_results.h"
#  include "error.h"
#  include "frame.h"
#  include "js_manager.h"
#  include "manifest.h"
#  include "player.h"
#  include "player_externs.h"
#  include "stats.h"
#  ifdef SHAKA_SDL_UTILS
#    include "sdl_frame_drawer.h"
#  endif
#  include "text_track.h"
#  include "track.h"
#  include "utils.h"
#  include "video.h"
#  include "vtt_cue.h"

#  include "eme/configuration.h"
#  include "eme/data.h"
#  include "eme/implementation.h"
#  include "eme/implementation_factory.h"
#  include "eme/implementation_helper.h"
#  include "eme/implementation_registry.h"
#endif
