#ifndef __INCLUDES_H__
#define __INCLUDES_H__


/* External Resources */
#ifdef _WIN32
    #define WIN32_LEAN_AND_MEAN
    #include <windows.h>
#endif /* _WIN32 */
#include <cocos2d.h>
#include <cocos-ext.h>
#include <fmt/format.h>
#include <fmod/fmod.h>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
#include <unordered_map>

/* Macros */
#ifndef TodoReturn
    #define TodoReturn void*
#endif /* TodoReturn */

#ifndef PASS
    /* Function will not be decompiled yet due to **Certain Defined Restraints** Specified by `Reason` */
    #define PASS(Func, Reason) Func{return;};
#endif

#ifndef NOOP
    /* Function has No Operations Involved*/
    #define NOOP(Func) Func{};
#endif



/* I Blame Geode for adding this -_- adding 
this in to prevent intellisense from complaining 
to me more , please try not to send me pull requests 
with the gd namespace it's here only if I'm lazily merging data in.

If you send me pull requests with the namespace of gd in it I will disown you 
- Calloc
*/

namespace gd = std;


/* Cells */

#include "Cells/TableViewCell.h"
#include "Cells/AchievementCell.h"
#include "Cells/ArtistCell.h"
#include "Cells/TableViewDataSource.h"
#include "Cells/BoomListView.h"
#include "Cells/CommentCell.h"
#include "Cells/CustomSongCell.h"
#include "Cells/CustomMusicCell.h"
#include "Cells/CustomSFXCell.h"
#include "Cells/GameCell.h"
#include "Cells/GJLevelScoreCell.h"
#include "Cells/GJLocalLevelScoreCell.h"
#include "Cells/GJMessageCell.h"
#include "Cells/GJRequestCell.h"
#include "Cells/GJScoreCell.h"
#include "Cells/GJUserCell.h"
#include "Cells/LevelCell.h"
#include "Cells/LevelListCell.h"
#include "Cells/ListCell.h"
#include "Cells/MapPackCell.h"
#include "Cells/OptionsCell.h"
#include "Cells/SmartTemplateCell.h"
#include "Cells/SongCell.h"
#include "Cells/StatsCell.h"
#include "Cells/TableView.h"
#include "Cells/URLCell.h"


/* Common */

#include "Common/FLAlertLayerProtocol.h"
#include "Common/AchievementBar.h"
#include "Common/AchievementNotifier.h"
#include "Common/GameObject.h"
#include "Common/EnhancedGameObject.h"
#include "Common/EffectGameObject.h"
#include "Common/AdvancedFollowTriggerObject.h"
#include "Common/AdvancedFollowEditObject.h"
#include "Common/AdvFollowSetup.h"
#include "Common/AnimatedGameObject.h"
#include "Common/AnimatedShopKeeper.h"
#include "Common/AudioAssetsBrowser.h"
#include "Common/ArtTriggerGameObject.h"
#include "Common/AudioLineGuideGameObject.h"
#include "Common/BitmapFontCache.h"
#include "Common/BonusDropdown.h"
#include "Common/ButtonPage.h"
#include "Common/ButtonSprite.h"
#include "Common/CameraTriggerGameObject.h"
#include "Common/ChallengesPage.h"
#include "Common/GJChallengeItem.h"
#include "Common/ChallengeNode.h"
#include "Common/ChanceTriggerGameObject.h"
#include "Common/CharacterColorPage.h"
#include "Common/CheckpointGameObject.h"
#include "Common/EventTriggerInstance.h"
#include "Common/SongChannelState.h"
#include "Common/DynamicObjectAction.h"
#include "Common/AdvancedFollowInstance.h"
#include "Common/EnterEffectInstance.h"
#include "Common/GameObjectPhysics.h"
#include "Common/GJValueTween.h"
#include "Common/SFXTriggerInstance.h"
#include "Common/GJGameState.h"
#include "Common/GJShaderState.h"
#include "Common/FMODAudioState.h"
#include "Common/CAState.h"
#include "Common/PulseEffectAction.h"
#include "Common/CountTriggerAction.h"
#include "Common/OpacityEffectAction.h"
#include "Common/TouchToggleAction.h"
#include "Common/CollisionTriggerAction.h"
#include "Common/ToggleTriggerAction.h"
#include "Common/SpawnTriggerAction.h"
#include "Common/KeyframeObject.h"
#include "Common/GroupCommandObject2.h"
#include "Common/TimerItem.h"
#include "Common/TimerTriggerAction.h"
#include "Common/EffectManagerState.h"
#include "Common/CheckpointObject.h"
#include "Common/CollisionBlockPopup.h"
#include "Common/ColorAction.h"
#include "Common/ColorAction2.h"
#include "Common/ColorActionSprite.h"
#include "Common/ColorChannelSprite.h"
#include "Common/ColorSelectLiveOverlay.h"
#include "Common/SetupTriggerPopup.h"
#include "Common/ColorSelectPopup.h"
#include "Common/CommunityCreditNode.h"
#include "Common/CommunityCreditsPage.h"
#include "Common/ConfigureHSVWidget.h"
#include "Common/ConfigureValuePopup.h"
#include "Common/CountTriggerGameObject.h"
#include "Common/CreateMenuItem.h"
#include "Common/CreateParticlePopup.h"
#include "Common/CurrencySprite.h"
#include "Common/CustomizeObjectSettingsPopup.h"
#include "Common/CustomListView.h"
#include "Common/CustomSFXWidget.h"
#include "Common/GJAssetDownloadAction.h"
#include "Common/CustomSongWidget.h"
#include "Common/DailyLevelNode.h"
#include "Common/DailyLevelPage.h"
#include "Common/RingObject.h"
#include "Common/DashRingObject.h"
#include "Common/DialogObject.h"
#include "Common/DungeonBarsSprite.h"
#include "Common/DynamicBitset.h"
#include "Common/EditButtonBar.h"
#include "Common/EditGameObjectPopup.h"
#include "Common/GJTransformState.h"
#include "Common/EditorUI.h"
#include "Common/EditTriggersPopup.h"
#include "Common/EndPortalObject.h"
#include "Common/EndTriggerGameObject.h"
#include "Common/EnhancedTriggerObject.h"
#include "Common/EnterEffectObject.h"
#include "Common/EventLinkTrigger.h"
#include "Common/ExplodeItemNode.h"
#include "Common/ExplodeItemSprite.h"
#include "Common/FileOperation.h"
#include "Common/SetIDPopup.h"
#include "Common/FindObjectPopup.h"
#include "Common/FMODAudioEngine.h"
#include "Common/FMODLevelVisualizer.h"
#include "Common/FollowRewardPage.h"
#include "Common/FontObject.h"
#include "Common/ForceBlockGameObject.h"
#include "Common/FRequestProfilePage.h"
#include "Common/FriendRequestPopup.h"
#include "Common/FriendsProfilePage.h"
#include "Common/UIButtonConfig.h"
#include "Common/GameObjectCopy.h"
#include "Common/GameObjectEditorState.h"
#include "Common/GameOptionsTrigger.h"
#include "Common/GauntletNode.h"
#include "Common/GauntletSprite.h"
#include "Common/GhostTrailEffect.h"
#include "Common/PlayerButtonCommand.h"
#include "Common/GJBigSprite.h"
#include "Common/GJBigSpriteNode.h"
#include "Common/GJChestSprite.h"
#include "Common/GJComment.h"
#include "Common/GJDifficultySprite.h"
#include "Common/GJFriendRequest.h"
#include "Common/GJGameLevel.h"
#include "Common/GJHttpResult.h"
#include "Common/GJItemIcon.h"
#include "Common/GJLevelList.h"
#include "Common/GJLocalScore.h"
#include "Common/GJMapObject.h"
#include "Common/GJMapPack.h"
#include "Common/GJMessagePopup.h"
#include "Common/GJObjectDecoder.h"
#include "Common/GJPathPage.h"
#include "Common/GJPathRewardPopup.h"
#include "Common/GJPathSprite.h"
#include "Common/GJPromoPopup.h"
#include "Common/GJRewardItem.h"
#include "Common/GJRewardObject.h"
#include "Common/GJRobotSprite.h"
#include "Common/GJRotationControl.h"
#include "Common/GJScaleControl.h"
#include "Common/GJSearchObject.h"
#include "Common/GJSmartBlockPreview.h"
#include "Common/GJSmartBlockPreviewSprite.h"
#include "Common/GJSmartPrefab.h"
#include "Common/GJSmartTemplate.h"
#include "Common/GJSongBrowser.h"
#include "Common/GJSpecialColorSelect.h"
#include "Common/GJSpiderSprite.h"
#include "Common/GJSpriteColor.h"
#include "Common/GJStoreItem.h"
#include "Common/GJTransformControl.h"
#include "Common/GJUINode.h"
#include "Common/GJUnlockableItem.h"
#include "Common/GJUserMessage.h"
#include "Common/GJUserScore.h"
#include "Common/GJWorldNode.h"
#include "Common/GJWriteMessagePopup.h"
#include "Common/GradientTriggerObject.h"
#include "Common/GravityEffectSprite.h"
#include "Common/HardStreak.h"
#include "Common/HSVLiveOverlay.h"
#include "Common/HSVWidgetPopup.h"
#include "Common/InfoAlertButton.h"
#include "Common/InheritanceNode.h"
#include "Common/ItemInfoPopup.h"
#include "Common/ItemTriggerGameObject.h"
#include "Common/KeyframeAnimTriggerObject.h"
#include "Common/KeyframeGameObject.h"
#include "Common/LabelGameObject.h"
#include "Common/LevelLeaderboard.h"
#include "Common/LevelOptionsLayer2.h"
#include "Common/LevelPage.h"
#include "Common/LevelSettingsObject.h"
#include "Common/ListButtonBar.h"
#include "Common/ListButtonPage.h"
#include "Common/LoadingCircle.h"
#include "Common/LoadingCircleSprite.h"
#include "Common/MessagesProfilePage.h"
#include "Common/MultilineBitmapFont.h"
#include "Common/MultiTriggerPopup.h"
#include "Common/MusicArtistObject.h"
#include "Common/MusicBrowser.h"
#include "Common/MusicSearchResult.h"
#include "Common/NodePoint.h"
#include "Common/OBB2D.h"
#include "Common/ObjectControlGameObject.h"
#include "Common/ObjectDecoder.h"
#include "Common/OptionsObject.h"
#include "Common/ParticleGameObject.h"
#include "Common/PlayerCheckpoint.h"
#include "Common/PlayerControlGameObject.h"
#include "Common/PlayerFireBoostSprite.h"
#include "Common/PlayerObject.h"
#include "Common/PointNode.h"
#include "Common/PriceLabel.h"
#include "Common/ProfilePage.h"
#include "Common/PromoInterstitial.h"
#include "Common/PurchaseItemPopup.h"
#include "Common/RandTriggerGameObject.h"
#include "Common/RewardsPage.h"
#include "Common/RotateGameplayGameObject.h"
#include "Common/SearchButton.h"
#include "Common/SetTextPopup.h"
#include "Common/SearchSFXPopup.h"
#include "Common/SecretLayer2.h"
#include "Common/SecretLayer3.h"
#include "Common/SecretLayer4.h"
#include "Common/SequenceTriggerGameObject.h"
#include "Common/SetColorIDPopup.h"
#include "Common/SetFolderPopup.h"
#include "Common/SetLevelOrderPopup.h"
#include "Common/SetupAdvFollowEditPhysicsPopup.h"
#include "Common/SetupAdvFollowPopup.h"
#include "Common/SetupAdvFollowRetargetPopup.h"
#include "Common/SetupAnimationPopup.h"
#include "Common/SetupAnimSettingsPopup.h"
#include "Common/SetupAreaMoveTriggerPopup.h"
#include "Common/SetupAreaTintTriggerPopup.h"
#include "Common/SetupAreaAnimTriggerPopup.h"
#include "Common/SetupAreaFadeTriggerPopup.h"
#include "Common/SetupAreaRotateTriggerPopup.h"
#include "Common/SetupAreaTransformTriggerPopup.h"
#include "Common/SetupAreaTriggerPopup.h"
#include "Common/SetupArtSwitchPopup.h"
#include "Common/SetupAudioLineGuidePopup.h"
#include "Common/SetupAudioTriggerPopup.h"
#include "Common/SetupBGSpeedTrigger.h"
#include "Common/SetupCameraEdgePopup.h"
#include "Common/SetupCameraGuidePopup.h"
#include "Common/SetupCameraModePopup.h"
#include "Common/SetupCameraOffsetTrigger.h"
#include "Common/SetupCameraRotatePopup.h"
#include "Common/SetupCameraRotatePopup2.h"
#include "Common/SetupCheckpointPopup.h"
#include "Common/SetupInstantCollisionTriggerPopup.h"
#include "Common/SetupCollisionStateTriggerPopup.h"
#include "Common/SetupCollisionTriggerPopup.h"
#include "Common/SetupCountTriggerPopup.h"
#include "Common/SetupDashRingPopup.h"
#include "Common/SetupEndPopup.h"
#include "Common/SetupEnterEffectPopup.h"
#include "Common/SetupEnterTriggerPopup.h"
#include "Common/SetupEventLinkPopup.h"
#include "Common/SetupForceBlockPopup.h"
#include "Common/SetupGameplayOffsetPopup.h"
#include "Common/SetupGradientPopup.h"
#include "Common/SetupGravityModPopup.h"
#include "Common/SetupGravityTriggerPopup.h"
#include "Common/SetupInstantCountPopup.h"
#include "Common/SetupInteractObjectPopup.h"
#include "Common/SetupItemCompareTriggerPopup.h"
#include "Common/SetupItemEditTriggerPopup.h"
#include "Common/SetupKeyframeAnimPopup.h"
#include "Common/SetupKeyframePopup.h"
#include "Common/SetupMGTrigger.h"
#include "Common/SetupMoveCommandPopup.h"
#include "Common/SetupObjectControlPopup.h"
#include "Common/SetupObjectOptions2Popup.h"
#include "Common/SetupObjectOptionsPopup.h"
#include "Common/SetupObjectTogglePopup.h"
#include "Common/SetupOpacityPopup.h"
#include "Common/SetupOptionsTriggerPopup.h"
#include "Common/SetupPersistentItemTriggerPopup.h"
#include "Common/SetupPickupTriggerPopup.h"
#include "Common/SetupPlatformerEndPopup.h"
#include "Common/SetupPlayerControlPopup.h"
#include "Common/SetupPortalPopup.h"
#include "Common/SetupPulsePopup.h"
#include "Common/SetupRandAdvTriggerPopup.h"
#include "Common/SetupRandTriggerPopup.h"
#include "Common/SetupResetTriggerPopup.h"
#include "Common/SetupReverbPopup.h"
#include "Common/SetupRotateCommandPopup.h"
#include "Common/SetupRotateGameplayPopup.h"
#include "Common/SetupRotatePopup.h"
#include "Common/SetupSequenceTriggerPopup.h"
#include "Common/SetupSFXEditPopup.h"
#include "Common/SetupSFXPopup.h"
#include "Common/SetupShaderEffectPopup.h"
#include "Common/SetupShakePopup.h"
#include "Common/SetupSongTriggerPopup.h"
#include "Common/SetupSpawnParticlePopup.h"
#include "Common/SetupSpawnPopup.h"
#include "Common/SetupStaticCameraPopup.h"
#include "Common/SetupStopTriggerPopup.h"
#include "Common/SetupTeleportPopup.h"
#include "Common/SetupTimerControlTriggerPopup.h"
#include "Common/SetupTimerEventTriggerPopup.h"
#include "Common/SetupTimerTriggerPopup.h"
#include "Common/SetupTimeWarpPopup.h"
#include "Common/SetupTouchTogglePopup.h"
#include "Common/SetupTransformPopup.h"
#include "Common/SetupZoomTriggerPopup.h"
#include "Common/SFXBrowser.h"
#include "Common/SFXInfoObject.h"
#include "Common/SFXFolderObject.h"
#include "Common/SFXSearchResult.h"
#include "Common/SFXTriggerGameObject.h"
#include "Common/ShaderGameObject.h"
#include "Common/ShardsPage.h"
#include "Common/SimpleObject.h"
#include "Common/Slider.h"
#include "Common/SliderThumb.h"
#include "Common/SliderTouchLogic.h"
#include "Common/SmartGameObject.h"
#include "Common/SongInfoObject.h"
#include "Common/SongObject.h"
#include "Common/SongSelectNode.h"
#include "Common/SongTriggerGameObject.h"
#include "Common/SpawnParticleGameObject.h"
#include "Common/SpawnTriggerGameObject.h"
#include "Common/SpecialAnimGameObject.h"
#include "Common/SpriteDescription.h"
#include "Common/StartPosObject.h"
#include "Common/StatsObject.h"
#include "Common/TeleportPortalObject.h"
#include "Common/TextAlertPopup.h"
#include "Common/TextArea.h"
#include "Common/TextGameObject.h"
#include "Common/TextStyleSection.h"
#include "Common/TimerTriggerGameObject.h"
#include "Common/TOSPopup.h"
#include "Common/TransformTriggerGameObject.h"
#include "Common/TriggerControlGameObject.h"
#include "Common/TutorialPopup.h"
#include "Common/UIObjectSettingsPopup.h"
#include "Common/UISettingsGameObject.h"
#include "Common/UndoObject.h"
#include "Common/UpdateAccountSettingsPopup.h"
#include "Common/UploadActionPopup.h"
#include "Common/UploadListPopup.h"
#include "Common/UploadPopup.h"
#include "Common/WorldLevelPage.h"
#include "Common/FMODSound.h"
#include "Common/SongTriggerState.h"
#include "Common/SFXTriggerState.h"
#include "Common/ChanceObject.h"
#include "Common/GJPointDouble.h"
#include "Common/DynamicSaveObject.h"
#include "Common/ActiveSaveObject1.h"
#include "Common/ActiveSaveObject2.h"
#include "Common/SequenceTriggerState.h"
#include "Common/FMODSoundTween.h"
#include "Common/FMODQueuedMusic.h"
#include "Common/FMODSoundState.h"
#include "Common/FMODSoundState_padded.h"
#include "Common/TimerItem_padded.h"
#include "Common/EnterEffectAnimValue.h"


/* CustomCCClasses */

#include "CustomCCClasses/CCIndexPath.h"
#include "CustomCCClasses/CCSpritePlus.h"
#include "CustomCCClasses/CCAnimatedSprite.h"
#include "CustomCCClasses/CCAlertCircle.h"
#include "CustomCCClasses/CCAnimateFrameCache.h"
#include "CustomCCClasses/CCBlockLayer.h"
#include "CustomCCClasses/CCCircleWave.h"
#include "CustomCCClasses/CCCircleAlert.h"
#include "CustomCCClasses/CCContentLayer.h"
#include "CustomCCClasses/CCCountdown.h"
#include "CustomCCClasses/CCCounterLabel.h"
#include "CustomCCClasses/CCExtenderNode.h"
#include "CustomCCClasses/CCLightFlash.h"
#include "CustomCCClasses/CCLightStrip.h"
#include "CustomCCClasses/CCMenuItemSpriteExtra.h"
#include "CustomCCClasses/CCMenuItemToggler.h"
#include "CustomCCClasses/CCMoveCNode.h"
#include "CustomCCClasses/CCNodeContainer.h"
#include "CustomCCClasses/CCPartAnimSprite.h"
#include "CustomCCClasses/CCScrollLayerExt.h"
#include "CustomCCClasses/CCSpriteCOpacity.h"
#include "CustomCCClasses/CCSpriteWithHue.h"
#include "CustomCCClasses/CCSpriteGrayscale.h"
#include "CustomCCClasses/CCSpritePart.h"
#include "CustomCCClasses/CCTextInputNode.h"
#include "CustomCCClasses/CCURLObject.h"


/* Layers */

#include "Layers/GJDropDownLayer.h"
#include "Layers/AccountHelpLayer.h"
#include "Layers/AccountLayer.h"
#include "Layers/FLAlertLayer.h"
#include "Layers/AccountLoginLayer.h"
#include "Layers/AccountRegisterLayer.h"
#include "Layers/AchievementsLayer.h"
#include "Layers/AudioEffectsLayer.h"
#include "Layers/BoomListLayer.h"
#include "Layers/BoomScrollLayer.h"
#include "Layers/BrowseSmartTemplateLayer.h"
#include "Layers/BrowseSmartKeyLayer.h"
#include "Layers/CreateGuidelinesLayer.h"
#include "Layers/CreatorLayer.h"
#include "Layers/CurrencyRewardLayer.h"
#include "Layers/CustomizeObjectLayer.h"
#include "Layers/CustomSongLayer.h"
#include "Layers/DemonFilterSelectLayer.h"
#include "Layers/DialogLayer.h"
#include "Layers/DrawGridLayer.h"
#include "Layers/EditLevelLayer.h"
#include "Layers/GJOptionsLayer.h"
#include "Layers/EditorOptionsLayer.h"
#include "Layers/EditorPauseLayer.h"
#include "Layers/EndLevelLayer.h"
#include "Layers/ExtendedLayer.h"
#include "Layers/FindBPMLayer.h"
#include "Layers/GameLevelOptionsLayer.h"
#include "Layers/GameOptionsLayer.h"
#include "Layers/GauntletLayer.h"
#include "Layers/GauntletSelectLayer.h"
#include "Layers/GJAccountSettingsLayer.h"
#include "Layers/GJBaseGameLayer.h"
#include "Layers/GJColorSetupLayer.h"
#include "Layers/GJCommentListLayer.h"
#include "Layers/GJGroundLayer.h"
#include "Layers/GJFlyGroundLayer.h"
#include "Layers/GJFollowCommandLayer.h"
#include "Layers/GJGameLoadingLayer.h"
#include "Layers/GJGarageLayer.h"
#include "Layers/GJGradientLayer.h"
#include "Layers/GJListLayer.h"
#include "Layers/GJMGLayer.h"
#include "Layers/GJMoreGamesLayer.h"
#include "Layers/GJPathsLayer.h"
#include "Layers/GJPFollowCommandLayer.h"
#include "Layers/GJRotateCommandLayer.h"
#include "Layers/GJShopLayer.h"
#include "Layers/GraphicsReloadLayer.h"
#include "Layers/InfoLayer.h"
#include "Layers/KeybindingsLayer.h"
#include "Layers/LeaderboardsLayer.h"
#include "Layers/LevelAreaInnerLayer.h"
#include "Layers/LevelAreaLayer.h"
#include "Layers/LevelBrowserLayer.h"
#include "Layers/LevelEditorLayer.h"
#include "Layers/LevelFeatureLayer.h"
#include "Layers/LevelInfoLayer.h"
#include "Layers/LevelListLayer.h"
#include "Layers/LevelOptionsLayer.h"
#include "Layers/LevelSearchLayer.h"
#include "Layers/LevelSelectLayer.h"
#include "Layers/LevelSettingsLayer.h"
#include "Layers/LikeItemLayer.h"
#include "Layers/LoadingLayer.h"
#include "Layers/MapSelectLayer.h"
#include "Layers/MenuGameLayer.h"
#include "Layers/MenuLayer.h"
#include "Layers/MoreOptionsLayer.h"
#include "Layers/MoreSearchLayer.h"
#include "Layers/MoreVideoOptionsLayer.h"
#include "Layers/MPLobbyLayer.h"
#include "Layers/MultiplayerLayer.h"
#include "Layers/NCSInfoLayer.h"
#include "Layers/NewgroundsInfoLayer.h"
#include "Layers/NumberInputLayer.h"
#include "Layers/OptionsLayer.h"
#include "Layers/OptionsScrollLayer.h"
#include "Layers/ParentalOptionsLayer.h"
#include "Layers/ParticlePreviewLayer.h"
#include "Layers/PauseLayer.h"
#include "Layers/PlayLayer.h"
#include "Layers/RateDemonLayer.h"
#include "Layers/RateLevelLayer.h"
#include "Layers/RateStarsLayer.h"
#include "Layers/RetryLevelLayer.h"
#include "Layers/RewardUnlockLayer.h"
#include "Layers/ScrollingLayer.h"
#include "Layers/SecretLayer.h"
#include "Layers/SecretNumberLayer.h"
#include "Layers/SecretRewardsLayer.h"
#include "Layers/SelectArtLayer.h"
#include "Layers/SelectEventLayer.h"
#include "Layers/SelectFontLayer.h"
#include "Layers/SelectListIconLayer.h"
#include "Layers/SelectPremadeLayer.h"
#include "Layers/SelectSettingLayer.h"
#include "Layers/SelectSFXSortLayer.h"
#include "Layers/SetGroupIDLayer.h"
#include "Layers/SetItemIDLayer.h"
#include "Layers/SetTargetIDLayer.h"
#include "Layers/SetupCoinLayer.h"
#include "Layers/SetupSmartBlockLayer.h"
#include "Layers/SetupSmartTemplateLayer.h"
#include "Layers/ShaderLayer.h"
#include "Layers/ShareCommentLayer.h"
#include "Layers/ShareLevelLayer.h"
#include "Layers/ShareLevelSettingsLayer.h"
#include "Layers/ShareListLayer.h"
#include "Layers/SimplePlayer.h"
#include "Layers/SlideInLayer.h"
#include "Layers/SongInfoLayer.h"
#include "Layers/SongOptionsLayer.h"
#include "Layers/SongsLayer.h"
#include "Layers/StatsLayer.h"
#include "Layers/SupportLayer.h"
#include "Layers/TopArtistsLayer.h"
#include "Layers/TutorialLayer.h"
#include "Layers/UILayer.h"
#include "Layers/UIOptionsLayer.h"
#include "Layers/UISaveLoadLayer.h"
#include "Layers/URLViewLayer.h"
#include "Layers/VideoOptionsLayer.h"
#include "Layers/WorldSelectLayer.h"


/* Managers */

#include "Managers/AchievementManager.h"
#include "Managers/GManager.h"
#include "Managers/FileSaveManager.h"
#include "Managers/GameEffectsManager.h"
#include "Managers/GameLevelManager.h"
#include "Managers/GameManager.h"
#include "Managers/GameStatsManager.h"
#include "Managers/GJAccountManager.h"
#include "Managers/GJActionManager.h"
#include "Managers/GJEffectManager.h"
#include "Managers/GJMultiplayerManager.h"
#include "Managers/GooglePlayManager.h"
#include "Managers/KeybindingsManager.h"
#include "Managers/LocalLevelManager.h"
#include "Managers/MusicDownloadManager.h"
#include "Managers/ObjectManager.h"
#include "Managers/SpriteAnimationManager.h"


/* Tools */

#include "Tools/AdToolbox.h"
#include "Tools/GameToolbox.h"
#include "Tools/LevelTools.h"
#include "Tools/ObjectToolbox.h"
#include "Tools/PlatformToolbox.h"


/* Delegates */
class GJAccountDelegate {
public:
    virtual TodoReturn accountStatusChanged();
};


class GJAccountBackupDelegate {
public:
    virtual TodoReturn backupAccountFailed(BackupAccountError p0, int p1);
    virtual TodoReturn backupAccountFinished();
};


class GJAccountSyncDelegate {
public:
    virtual TodoReturn syncAccountFailed(BackupAccountError p0, int p1);
    virtual TodoReturn syncAccountFinished();
};


class TextInputDelegate {
public:
    virtual bool allowTextInput(CCTextInputNode* p0);
    virtual void enterPressed(CCTextInputNode* p0);
    virtual void textChanged(CCTextInputNode* p0);
    virtual void textInputClosed(CCTextInputNode* p0);
    virtual void textInputOpened(CCTextInputNode* p0);
    virtual void textInputReturn(CCTextInputNode* p0);
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);
};


class GJAccountLoginDelegate {
public:
    virtual TodoReturn loginAccountFailed(AccountError p0);
    virtual TodoReturn loginAccountFinished(int p0, int p1);
};


class GJAccountRegisterDelegate {
public:
    virtual TodoReturn registerAccountFailed(AccountError p0);
    virtual TodoReturn registerAccountFinished();
};


class AnimatedSpriteDelegate {
public:
    virtual void animationFinished(char const* p0);
};


class SpritePartDelegate {
public:
    virtual TodoReturn displayFrameChanged(cocos2d::CCObject* p0, std::string p1);
};


class AppDelegate: public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    virtual void applicationDidEnterBackground();
    virtual bool applicationDidFinishLaunching();
    virtual void applicationWillBecomeActive();
    virtual void applicationWillEnterForeground();
    virtual void applicationWillResignActive();
    TodoReturn bgScale();
    TodoReturn checkSound();
    TodoReturn hideLoadingCircle();
    TodoReturn loadingIsFinished();
    bool musicTest();
    void pauseGame();
    TodoReturn pauseSound();
    void platformShutdown();
    TodoReturn resumeSound();
    void setIdleTimerDisabled(bool p0);
    void setupGLView();
    void showLoadingCircle(bool p0, bool p1, bool p2);
    virtual void trySaveGame(bool p0);
    virtual void willSwitchToScene(cocos2d::CCScene* p0);
};


class TableViewDelegate {
public:
    virtual void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& p0, TableView* p1);
    virtual void didEndTweenToIndexPath(CCIndexPath& p0, TableView* p1);
    virtual void didSelectRowAtIndexPath(CCIndexPath& p0, TableView* p1);
    virtual void willTweenToIndexPath(CCIndexPath& p0, TableViewCell* p1, TableView* p2);
};


class BoomScrollLayerDelegate {
public:
    virtual void scrollLayerMoved(cocos2d::CCPoint p0);
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* p0, int p1);
    virtual void scrollLayerScrollingStarted(BoomScrollLayer* p0);
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* p0, int p1);
};


class CCCircleWaveDelegate {
public:
    virtual void circleWaveWillBeRemoved(CCCircleWave* p0);
};


class CCScrollLayerExtDelegate {
public:
    virtual void scrllViewWillBeginDecelerating(CCScrollLayerExt* p0);
    virtual void scrollViewDidEndDecelerating(CCScrollLayerExt* p0);
    virtual void scrollViewDidEndMoving(CCScrollLayerExt* p0);
    virtual void scrollViewTouchBegin(CCScrollLayerExt* p0);
    virtual void scrollViewTouchEnd(CCScrollLayerExt* p0);
    virtual void scrollViewTouchMoving(CCScrollLayerExt* p0);
};


class GJChallengeDelegate {
public:
    virtual TodoReturn challengeStatusFailed();
    virtual TodoReturn challengeStatusFinished();
};


class CurrencyRewardDelegate {
public:
    virtual void currencyWillExit(CurrencyRewardLayer* p0);
};


class CharacterColorDelegate {
public:
    virtual void playerColorChanged();
    virtual void showUnlockPopup(int p0, UnlockType p1);
};


class ColorSelectDelegate {
public:
    virtual void colorSelectClosed(cocos2d::CCNode* p0);
};


class ConfigureValuePopupDelegate {
public:
    virtual TodoReturn valuePopupClosed(ConfigureValuePopup* p0, float p1);
};


class SliderDelegate {
public:
    virtual void sliderBegan(Slider* p0);
    virtual TodoReturn sliderEnded(Slider* p0);
};


class GJSpecialColorSelectDelegate {
public:
    virtual void colorSelectClosed(GJSpecialColorSelect* p0, int p1);
};


class ColorSetupDelegate {
public:
    virtual void colorSetupClosed(int p0);
};


class LikeItemDelegate {
public:
    virtual void likedItem(LikeItemType p0, int p1, bool p2);
};


class CommentUploadDelegate {
public:
    virtual void commentDeleteFailed(int p0, int p1);
    virtual void commentUploadFailed(int p0, CommentError p1);
    virtual void commentUploadFinished(int p0);
};


class DialogDelegate {
public:
    virtual void dialogClosed(DialogLayer* p0);
};


class HSVWidgetDelegate {
public:
    virtual void hsvChanged(ConfigureHSVWidget* p0);
    virtual void hsvPopupClosed(HSVWidgetPopup* p0, cocos2d::ccHSVValue p1);
};


class CustomSongDelegate {
public:
    virtual TodoReturn getActiveSongID();
    virtual TodoReturn getLevelSettings();
    virtual TodoReturn getSongFileName();
    virtual TodoReturn songIDChanged(int p0);
};


class CustomSFXDelegate {
public:
    virtual TodoReturn getActiveSFXID();
    virtual TodoReturn overridePlaySFX(SFXInfoObject* p0);
    virtual void sfxObjectSelected(SFXInfoObject* p0);
};


class MusicDownloadDelegate {
public:
    virtual void downloadSFXFailed(int p0, GJSongError p1);
    virtual void downloadSFXFinished(int p0);
    virtual void downloadSongFailed(int p0, GJSongError p1);
    virtual void downloadSongFinished(int p0);
    virtual void loadSongInfoFailed(int p0, GJSongError p1);
    virtual void loadSongInfoFinished(SongInfoObject* p0);
    virtual void musicActionFailed(GJMusicAction p0);
    virtual void musicActionFinished(GJMusicAction p0);
    virtual void songStateChanged();
};


class GJDropDownLayerDelegate {
public:
    virtual void dropDownLayerWillClose(GJDropDownLayer* p0);
};


class MusicBrowserDelegate {
public:
    virtual void musicBrowserClosed(MusicBrowser* p0);
};


class CustomSongLayerDelegate {
public:
    virtual void customSongLayerClosed();
};


class GJDailyLevelDelegate {
public:
    virtual void dailyStatusFailed(GJTimedLevelType p0, GJErrorCode p1);
    virtual void dailyStatusFinished(GJTimedLevelType p0);
};


class LevelDownloadDelegate {
public:
    virtual void levelDownloadFailed(int p0);
    virtual void levelDownloadFinished(GJGameLevel* p0);
};


class DemonFilterDelegate {
public:
    virtual void demonFilterSelectClosed(int p0);
};


class TextAreaDelegate {
public:
    virtual TodoReturn fadeInTextFinished(TextArea* p0);
};


class DownloadMessageDelegate {
public:
    virtual TodoReturn downloadMessageFailed(int p0);
    virtual TodoReturn downloadMessageFinished(GJUserMessage* p0);
};


class DynamicScrollDelegate {
public:
    virtual void updatePageWithObject(cocos2d::CCObject* p0, cocos2d::CCObject* p1);
};


class UploadActionDelegate {
public:
    virtual void uploadActionFailed(int p0, int p1);
    virtual void uploadActionFinished(int p0, int p1);
};


class UploadPopupDelegate {
public:
    virtual void onClosePopup(UploadActionPopup* p0);
};


class SetIDPopupDelegate {
public:
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);
};


class GJRotationControlDelegate {
public:
    virtual void angleChangeBegin();
    virtual void angleChangeEnded();
    virtual void angleChanged(float p0);
};


class GJScaleControlDelegate {
public:
    virtual void anchorPointMoved(cocos2d::CCPoint p0);
    virtual void scaleChangeBegin();
    virtual void scaleChangeEnded();
    virtual void scaleXChanged(float p0, bool p1);
    virtual void scaleXYChanged(float p0, float p1, bool p2);
    virtual void scaleYChanged(float p0, bool p1);
    virtual void updateScaleControl();
};


class GJTransformControlDelegate {
public:
    virtual void anchorPointMoved(cocos2d::CCPoint p0);
    virtual TodoReturn getTransformNode();
    virtual TodoReturn getUI();
    virtual void transformChangeBegin();
    virtual void transformChangeEnded();
    virtual void transformResetRotation();
    virtual void transformRestoreRotation();
    virtual void transformRotationChanged(float p0);
    virtual void transformRotationXChanged(float p0);
    virtual void transformRotationYChanged(float p0);
    virtual void transformScaleXChanged(float p0);
    virtual void transformScaleXYChanged(float p0, float p1);
    virtual void transformScaleYChanged(float p0);
    virtual void transformSkewXChanged(float p0);
    virtual void transformSkewYChanged(float p0);
    virtual void updateTransformControl();
};


class GameRateDelegate {
public:
    virtual void updateRate();
};


class RewardedVideoDelegate {
public:
    virtual void rewardedVideoFinished();
    virtual bool shouldOffsetRewardCurrency();
};


class FriendRequestDelegate {
public:
    virtual TodoReturn forceReloadRequests(bool p0);
    virtual TodoReturn loadFRequestsFailed(char const* p0, GJErrorCode p1);
    virtual TodoReturn loadFRequestsFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void setupPageInfo(std::string p0, char const* p1);
};


class UserListDelegate {
public:
    virtual void forceReloadList(UserListType p0);
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);
    virtual void userListChanged(cocos2d::CCArray* p0, UserListType p1);
};


class LevelManagerDelegate {
public:
    virtual void loadLevelsFailed(char const* p0);
    virtual void loadLevelsFailed(char const* p0, int p1);
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2);
    virtual void setupPageInfo(std::string p0, char const* p1);
};


class GJAccountSettingsDelegate {
public:
    virtual TodoReturn updateSettingsFailed();
    virtual TodoReturn updateSettingsFinished();
};


class TriggerEffectDelegate {
public:
    virtual void spawnGroup(int p0, bool p1, double p2, std::vector<int> const& p3, int p4, int p5);
    virtual void spawnObject(GameObject* p0, double p1, std::vector<int> const& p2);
    virtual void toggleGroupTriggered(int p0, bool p1, std::vector<int> const& p2, int p3, int p4);
};


class ListButtonBarDelegate {
public:
    virtual void listButtonBarSwitchedPage(ListButtonBar* p0, int p1);
};


class GJMPDelegate {
public:
    virtual TodoReturn didUploadMPComment(int p0);
    virtual TodoReturn joinLobbyFailed(int p0, GJMPErrorCode p1);
    virtual TodoReturn joinLobbyFinished(int p0);
    virtual TodoReturn updateComments();
};


class ObjectDecoderDelegate {
public:
    virtual TodoReturn getDecodedObject(int p0, DS_Dictionary* p1);
};


class GJPurchaseDelegate {
public:
    virtual TodoReturn didPurchaseItem(GJStoreItem* p0);
};


class GJRewardDelegate {
public:
    virtual void rewardsStatusFailed();
    virtual void rewardsStatusFinished(int p0);
};


class TableViewCellDelegate {
public:
    virtual TodoReturn cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);
    virtual TodoReturn getSelectedCellIdx();
    virtual TodoReturn shouldSnapToSelected();
};


class UploadMessageDelegate {
public:
    virtual void uploadMessageFailed(int p0);
    virtual void uploadMessageFinished(int p0);
};


class GooglePlayDelegate {
public:
    virtual void googlePlaySignedIn();
};


class LevelCommentDelegate {
public:
    virtual void loadCommentsFailed(char const* p0);
    virtual void loadCommentsFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void setupPageInfo(std::string p0, char const* p1);
    virtual void updateUserScoreFinished();
};


class LeaderboardManagerDelegate {
public:
    virtual void loadLeaderboardFailed(char const* p0);
    virtual void loadLeaderboardFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void updateUserScoreFailed();
    virtual void updateUserScoreFinished();
};


class SetTextPopupDelegate {
public:
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);
};


class ShareCommentDelegate {
public:
    virtual void shareCommentClosed(std::string p0, ShareCommentLayer* p1);
};


class LevelDeleteDelegate {
public:
    virtual void levelDeleteFailed(int p0);
    virtual void levelDeleteFinished(int p0);
};


class LevelSettingsDelegate {
public:
    virtual void levelSettingsUpdated();
};


class LevelUpdateDelegate {
public:
    virtual void levelUpdateFailed(int p0);
    virtual void levelUpdateFinished(GJGameLevel* p0, UpdateResponse p1);
};


class RateLevelDelegate {
public:
    virtual void rateLevelClosed();
};


class NumberInputDelegate {
public:
    virtual void numberInputClosed(NumberInputLayer* p0);
};


class LevelListDeleteDelegate {
public:
    virtual void levelListDeleteFailed(int p0);
    virtual void levelListDeleteFinished(int p0);
};


class SelectListIconDelegate {
public:
    virtual TodoReturn iconSelectClosed(SelectListIconLayer* p0);
};


class SelectArtDelegate {
public:
    virtual void selectArtClosed(SelectArtLayer* p0);
};


class SelectSettingDelegate {
public:
    virtual TodoReturn selectSettingClosed(SelectSettingLayer* p0);
};


class LevelUploadDelegate {
public:
    virtual void levelUploadFailed(GJGameLevel* p0);
    virtual void levelUploadFinished(GJGameLevel* p0);
};


class ListUploadDelegate {
public:
    virtual void listUploadFailed(GJLevelList* p0, int p1);
    virtual void listUploadFinished(GJLevelList* p0);
};


class MessageListDelegate {
public:
    virtual void forceReloadMessages(bool p0);
    virtual void loadMessagesFailed(char const* p0, GJErrorCode p1);
    virtual void loadMessagesFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void setupPageInfo(std::string p0, char const* p1);
};


class MusicDelegateHandler: public cocos2d::CCNode {
public:
    static MusicDelegateHandler* create(MusicDownloadDelegate* p0);
    bool init(MusicDownloadDelegate* p0);
};


class PlatformDownloadDelegate {
public:
    virtual void downloadFailed(char const* p0);
    virtual void downloadFinished(char const* p0);
};


class OptionsObjectDelegate {
public:
    virtual TodoReturn stateChanged(OptionsObject* p0);
};


class OnlineListDelegate {
public:
    virtual void loadListFailed(char const* p0);
    virtual void loadListFinished(cocos2d::CCArray* p0, char const* p1);
    virtual void setupPageInfo(std::string p0, char const* p1);
};


class UserInfoDelegate {
public:
    virtual void getUserInfoFailed(int p0);
    virtual void getUserInfoFinished(GJUserScore* p0);
    virtual void userInfoChanged(GJUserScore* p0);
};


class SelectPremadeDelegate {
public:
    virtual void selectPremadeClosed(SelectPremadeLayer* p0, int p1);
};


class SelectSFXSortDelegate {
public:
    virtual TodoReturn sortSelectClosed(SelectSFXSortLayer* p0);
};


class SFXBrowserDelegate {
public:
    virtual TodoReturn sfxBrowserClosed(SFXBrowser* p0);
};


class SongPlaybackDelegate {
public:
    virtual TodoReturn onPlayback(SongInfoObject* p0);
};


class TextInputNodeDelegate {
public:
	virtual void textChanged(CCTextInputNode* textInputNode);
	virtual void enterPressed(CCTextInputNode* textInputNode);
	virtual bool allowTextInput(CCTextInputNode* textInputNode);
	virtual bool textInputClosed(CCTextInputNode* textInputNode);
	virtual bool textInputOpened(CCTextInputNode* textInputNode);
	virtual void textInputReturn(CCTextInputNode* textInputNode);
	virtual void textInputShouldOffset(CCTextInputNode* textInputNode, float offSet);
};


/* Enums are from https://github.com/geode-sdk/bindings/blob/main/bindings/include/Geode/Enums.hpp 
 *
 * We will use these unless the assembly doesn't match because I got tired of saying kEnumType everytime.
 * Not sure on how we will verify functions as 1 to 1 matching assembly yet... - Calloc 
 */

// thanks pie
enum class SearchType {
    Search = 0,
    Downloaded = 1,
    MostLiked = 2,
    Trending = 3,
    Recent = 4,
    UsersLevels = 5,
    Featured = 6,
    Magic = 7,
    Sends = 8,
    MapPack = 9,
    MapPackOnClick = 10,
    Awarded = 11,
    Followed = 12,
    Friends = 13,
    Users = 14,
    LikedGDW = 15,
    HallOfFame = 16,
    FeaturedGDW = 17,
    Similar = 18,
    Type19 = 19,
    TopListsUnused = 20,
    DailySafe = 21,
    WeeklySafe = 22,
    EventSafe = 23,
    Reported = 24,
    LevelListsOnClick = 25,
    Type26 = 26,
    Sent = 27,
    MyLevels = 98,
    SavedLevels = 99,
    FavouriteLevels = 100,
    SmartTemplates = 101,
    MyLists = 102,
    FavouriteLists = 103
};

enum class GameObjectType {
    Solid = 0,
    Hazard = 2,
    InverseGravityPortal = 3,
    NormalGravityPortal = 4,
    ShipPortal = 5,
    CubePortal = 6,
    Decoration = 7,
    YellowJumpPad = 8,
    PinkJumpPad = 9,
    GravityPad = 10,
    YellowJumpRing = 11,
    PinkJumpRing = 12,
    GravityRing = 13,
    InverseMirrorPortal = 14,
    NormalMirrorPortal = 15,
    BallPortal = 16,
    RegularSizePortal = 17,
    MiniSizePortal = 18,
    UfoPortal = 19,
    Modifier = 20,
    Breakable = 21,
    SecretCoin = 22,
    DualPortal = 23,
    SoloPortal = 24,
    Slope = 25,
    WavePortal = 26,
    RobotPortal = 27,
    TeleportPortal = 28,
    GreenRing = 29,
    Collectible = 30,
    UserCoin = 31,
    DropRing = 32,
    SpiderPortal = 33,
    RedJumpPad = 34,
    RedJumpRing = 35,
    CustomRing = 36,
    DashRing = 37,
    GravityDashRing = 38,
    CollisionObject = 39,
    Special = 40,
    SwingPortal = 41,
    GravityTogglePortal = 42,
    SpiderOrb = 43,
    SpiderPad = 44,
    TeleportOrb = 46,
    AnimatedHazard = 47,
};

enum class GJGameEvent {
    None = 0,
    TinyLanding = 1,
    FeatherLanding = 2,
    SoftLanding = 3,
    NormalLanding = 4,
    HardLanding = 5,
    HitHead = 6,
    OrbTouched = 7,
    OrbActivated = 8,
    PadActivated = 9,
    GravityInverted = 10,
    GravityRestored = 11,
    NormalJump = 12,
    RobotBoostStart = 13,
    RobotBoostStop = 14,
    UFOJump = 15,
    ShipBoostStart = 16,
    ShipBoostEnd = 17,
    SpiderTeleport = 18,
    BallSwitch = 19,
    SwingSwitch = 20,
    WavePush = 21,
    WaveRelease = 22,
    DashStart = 23,
    DashStop = 24,
    Teleported = 25,
    PortalNormal = 26,
    PortalShip = 27,
    PortalBall = 28,
    PortalUFO = 29,
    PortalWave = 30,
    PortalRobot = 31,
    PortalSpider = 32,
    PortalSwing = 33,
    YellowOrb = 34,
    PinkOrb = 35,
    RedOrb = 36,
    GravityOrb = 37,
    GreenOrb = 38,
    DropOrb = 39,
    CustomOrb = 40,
    DashOrb = 41,
    GravityDashOrb = 42,
    SpiderOrb = 43,
    TeleportOrb = 44,
    YellowPad = 45,
    PinkPad = 46,
    RedPad = 47,
    GravityPad = 48,
    SpiderPad = 49,
    PortalGravityFlip = 50,
    PortalGravityNormal = 51,
    PortalGravityInvert = 52,
    PortalFlip = 53,
    PortalUnFlip = 54,
    PortalNormalScale = 55,
    PortalMiniScale = 56,
    PortalDualOn = 57,
    PortalDualOff = 58,
    PortalTeleport = 59,
    Checkpoint = 60,
    DestroyBlock = 61,
    UserCoin = 62,
    PickupItem = 63,
    CheckpointRespawn = 64,
    FallLow = 65,
    FallMed = 66,
    FallHigh = 67,
    FallVHigh = 68,
    JumpPush = 69,
    JumpRelease = 70,
    LeftPush = 71,
    LeftRelease = 72,
    RightPush = 73,
    RightRelease = 74,
    PlayerReversed = 75,
    FallSpeedLow = 76,
    FallSpeedMed = 77,
    FallSpeedHigh = 78
};

enum class PulseEffectType {
};
enum class TouchTriggerType {
};
enum class PlayerButton {
    Jump = 1,
    Left = 2,
    Right = 3,
};
enum class GhostType {
};
enum class TableViewCellEditingStyle {
};
enum class UserListType {
    Friends = 0,
    Blocked = 1,
};
enum class GJErrorCode {
    NotFound = -1,
    UpdateApp = 3
};
enum class AccountError {
    EmailsDoNotMatch = -99,
    AlreadyLinkedToDifferentSteamAccount = -13,
    AccountDisabled = -12,
    AlreadyLinkedToDifferentAccount = -10,
    TooShortLessThan3 = -9,
    TooShortLessThan6 = -8,
    PasswordsDoNotMatch = -7,
    InvalidEmail = -6,
    InvalidPassword = -5,
    InvalidUsername = -4,
    AlreadyUsedEmail = -3,
    AlreadyUsedUsername = -2
};
enum class GJSongError {
    DownloadSongFailed = 1,
    DownloadSFXFailed = 2
};
enum class GJSongType {}; //probs normal and ncs
enum class LikeItemType {
    Unknown = 0,
    Level = 1,
    Comment = 2,
    AccountComment = 3,
    LevelList = 4
};

enum class CommentError {
};
enum class BackupAccountError {
    BackupOrSyncFailed = -3,
    LoginFailed = -2
};
enum class GJMusicAction {
    DownloadOrUpdate = 2,
    UpdateSFXLibrary = 4,
    UpdateMusicLibrary = 6
};
enum class CellAction {};
enum class GJActionCommand {};
enum class DifficultyIconType {
    ShortText = 0,
    DefaultText = 1,
    NoText = 2
};
enum class GauntletType {
    Fire = 0,
    Ice = 2,
    Poison = 3,
    Shadow = 4,
    Lava = 5,
    Bonus = 6,
    Chaos = 7,
    Demon = 8,
    Time = 9,
    Crystal = 0xA,
    Magic = 0xB,
    Spike = 0xC,
    Monster = 0xD,
    Doom = 0xE,
    Death = 0xF,
    Forest = 0x10,
    Rune = 0x11,
    Force = 0x12,
    Spooky = 0x13,
    Dragon = 0x14,
    Water = 0x15,
    Haunted = 0x16,
    Acid = 0x17,
    Witch = 0x18,
    Power = 0x19,
    Potion = 0x1A,
    Snake = 0x1B,
    Toxic = 0x1C,
    Halloween = 0x1D,
    Treasure = 0x1E,
    Ghost = 0x1F,
    Spider = 0x20,
    Gem = 0x21,
    Inferno = 0x22,
    Portal = 0x23,
    Strange = 0x24,
    Fantasy = 0x25,
    Christmas = 0x26,
    Surprise = 0x27,
    Mystery = 0x28,
    Cursed = 0x29,
    Cyborg = 0x2A,
    Castle = 0x2B,
    Grave = 0x2C,
    Temple = 0x2D,
    World = 0x2E,
    Galaxy = 0x2F,
    Universe = 0x30,
    Discord = 0x31,
    Split = 0x32
};
enum class GJMPErrorCode {};
enum class GJTimedLevelType {
    Daily = 0,
    Weekly = 1,
    Event = 2
};
enum class SongSelectType {
    Default = 0,
    Custom = 1
};
enum class AudioTargetType {};
enum class FMODReverbPreset {
    Generic = 0,
    PaddedCell = 1,
    Room = 2,
    Bathroom = 3,
    Livingroom = 4,
    Stoneroom = 5,
    Auditorium = 6,
    ConvertHall = 7,
    Cave = 8,
    Arena = 9,
    Hangar = 0xA,
    CarpettedHallway = 0xB,
    Hallway = 0xC,
    StoneCorridor = 0xD,
    Alley = 0xE,
    Forest = 0xF,
    City = 0x10,
    Mountains = 0x11,
    Quarry = 0x12,
    Plain = 0x13,
    ParkingLot = 0x14,
    SewerPipe = 0x15,
    Underwater = 0x16
};
enum class DemonDifficultyType {
    HardDemon = 0,
    EasyDemon = 3,
    MediumDemon = 4,
    InsaneDemon = 5,
    ExtremeDemon = 6
};
enum class PlayerCollisionDirection {
    Top = 0,
    Bottom = 1,
    Left = 2,
    Right = 3
};
enum class ChestSpriteState {};
enum class FormatterType {};
enum class AudioModType {};
enum class GJAreaActionType {};
enum class GJSmartDirection {};
enum class SmartBlockType {};
enum class TouchTriggerControl {};
enum class SmartPrefabResult {};
enum class AudioSortType {};
enum class spriteMode {};
enum class GJAssetType {};
enum class CommentKeyType {
    Level = 0,
    User = 1,
    LevelList = 2
};
enum class LevelLeaderboardMode {
    Time = 0,
    Points = 1
};
enum class StatKey {};
enum class TextStyleType {
    Default = 0,
    Colored = 1,
    Instant = 2,
    Shake = 3,
    Delayed = 4
};

enum class InputValueType {};
enum class GJInputStyle {};
enum class GJDifficultyName {
    Short = 0,
    Long = 1
};
enum class GJFeatureState {
    None = 0,
    Featured = 1,
    Epic = 2,
    Legendary = 3,
    Mythic = 4
};
enum class GJKeyGroup {};
enum class GJKeyCommand {};
enum class SelectSettingType {};
enum class gjParticleValue {
    MaxParticles = 1,
    Duration = 2,
    Lifetime = 3,
    PlusMinus1 = 4,
    Emission = 5,
    Angle = 6,
    PlusMinus2 = 7,
    Speed = 8,
    PlusMinus3 = 9,
    PosVarX = 0xA,
    PosVarY = 0xB,
    GravityX = 0xC,
    GravityY = 0xD,
    AccelRad = 0xE,
    PlusMinus4 = 0xF,
    AccelTan = 0x10,
    PlusMinus5 = 0x11,
    StartSize = 0x12,
    PlusMinus6 = 0x13,
    EndSize = 0x14,
    PlusMinus7 = 0x15,
    StartSpin = 0x16,
    PlusMinus8 = 0x17,
    EndSpin = 0x18,
    PlusMinus9 = 0x19,
    StartR = 0x1A,
    PlusMinus10 = 0x1B,
    StartG = 0x1C,
    PlusMinus11 = 0x1D,
    StartB = 0x1E,
    PlusMinus12 = 0x1F,
    StartA = 0x20,
    PlusMinus13 = 0x21,
    EndR = 0x22,
    PlusMinus14 = 0x23,
    EndG = 0x24,
    PlusMinus15 = 0x25,
    EndB = 0x26,
    PlusMinus16 = 0x27,
    EndA = 0x28,
    PlusMinus17 = 0x29,
    FadeIn = 0x2A,
    PlusMinus18 = 0x2B,
    FadeOut = 0x2C,
    PlusMinus19 = 0x2D,
    FrictionP = 0x2E,
    PlusMinus20 = 0x2F,
    Respawn = 0x30,
    PlusMinus21 = 0x31,
    StartRad = 0x32,
    PlusMinus22 = 0x33,
    EndRad = 0x34,
    PlusMinus23 = 0x35,
    RotSec = 0x36,
    PlusMinus24 = 0x37,
    FrictionS = 0x45,
    PlusMinus25 = 0x46,
    FrictionR = 0x47,
    PlusMinus26 = 0x48
};
enum class ColorSelectType {};
enum class AudioGuidelinesType {
    GuidelineCreator = 0,
    BPMFinder = 1
};
enum class SmartBrowseFilter {};
enum class GJUITouchEvent {};
enum class ObjectScaleType {
    XY = 0,
    X = 1,
    Y = 2
};
enum class SavedActiveObjectState {};
enum class SavedSpecialObjectState {};
enum class SavedObjectStateRef {};


enum class CommentType {
    Level = 0,
    Account = 1,
    FriendRequest = 2,
    ListDescription = 4,
};

enum class BoomListType {
    Default = 0x0,
    User = 0x2,
    Stats = 0x3,
    Achievement = 0x4,
    Level = 0x5,
    Level2 = 0x6,
    Comment = 0x7,
    Comment2 = 0x8,
    Comment3 = 0x9,
    Song = 0xc,
    Score = 0xd,
    MapPack = 0xe,
    CustomSong = 0xf,
    Comment4 = 0x10,
    User2 = 0x11,
    Request = 0x12,
    Message = 0x13,
    LevelScore = 0x14,
    Artist = 0x15,
    SmartTemplate = 0x16,
    SFX = 0x17,
    SFX2 = 0x18,
    CustomMusic = 0x19,
    Options = 0x1a,
    LevelList = 0x1b,
    Level3 = 0x1c,
    LevelList2 = 0x1d,
    LevelList3 = 0x1e,
    Level4 = 0x1f,
    LocalLevelScore = 0x21,
    URL = 0x22,
};

enum class CurrencySpriteType {
    Orb = 1,
    Star = 2,
    Diamond = 3,
    FireShard = 4,
    IceShard = 5,
    PoisonShard = 6,
    ShadowShard = 7,
    LavaShard = 8,
    DemonKey = 9,
    EarthShard = 10,
    BloodShard = 11,
    MetalShard = 12,
    LightShard = 13,
    SoulShard = 14,
    Moon = 15
};

enum class CurrencyRewardType {
    // todo
};

enum class MenuAnimationType {
    Scale = 0,
    Move = 1,
};

enum class ShopType {
    Normal,
    Secret,
    Community
};

// Geode Addition
enum class ZLayer {
    B5 = -5,
    B4 = -3,
    B3 = -1,
    B2 = 1,
    B1 = 3,
    Default = 0,
    T1 = 5,
    T2 = 7,
    T3 = 9,
    T4 = 11,
};

enum class UpdateResponse {
    Unknown,
    UpToDate,
    GameVerOutOfDate,
    UpdateSuccess,
};



enum class UnlockType {
    Cube = 0x1,
    Col1 = 0x2,
    Col2 = 0x3,
    Ship = 0x4,
    Ball = 0x5,
    Bird = 0x6,
    Dart = 0x7,
    Robot = 0x8,
    Spider = 0x9,
    Streak = 0xA,
    Death = 0xB,
    GJItem = 0xC,
    Swing = 0xD,
    Jetpack = 0xE,
    ShipFire = 0xF
};

enum class SpecialRewardItem {
    None = 0x0,
    FireShard = 0x1,
    IceShard = 0x2,
    PoisonShard = 0x3,
    ShadowShard = 0x4,
    LavaShard = 0x5,
    BonusKey = 0x6,
    Orbs = 0x7,
    Diamonds = 0x8,
    CustomItem = 0x9,
    EarthShard = 0xA,
    BloodShard = 0xB,
    MetalShard = 0xC,
    LightShard = 0xD,
    SoulShard = 0xE
};

enum class EditCommand {
    SmallLeft = 1,
    SmallRight = 2,
    SmallUp = 3,
    SmallDown = 4,

    Left = 5,
    Right = 6,
    Up = 7,
    Down = 8,

    BigLeft = 9,
    BigRight = 10,
    BigUp = 11,
    BigDown = 12,

    TinyLeft = 13,
    TinyRight = 14,
    TinyUp = 15,
    TinyDown = 16,

    HalfLeft = 17,
    HalfRight = 18,
    HalfUp = 19,
    HalfDown = 20,

    FlipX = 21,
    FlipY = 22,
    RotateCW = 23,
    RotateCCW = 24,
    RotateCW45 = 25,
    RotateCCW45 = 26,
    RotateFree = 27,
    RotateSnap = 28,

    Scale = 29,
    ScaleXY = 30,
    Skew = 31
};

// Geode Addition
enum class PlaybackMode {
    Not = 0,
    Playing = 1,
    Paused = 2,
};

enum class SelectArtType {
    Background = 0,
    Ground = 1,
};

enum class UndoCommand {
    Delete = 1,
    New = 2,
    Paste = 3,
    DeleteMulti = 4,
    Transform = 5,
    Select = 6,
};

enum class EasingType {
    None = 0,
    EaseInOut = 1,
    EaseIn = 2,
    EaseOut = 3,
    ElasticInOut = 4,
    ElasticIn = 5,
    ElasticOut = 6,
    BounceInOut = 7,
    BounceIn = 8,
    BounceOut = 9,
    ExponentialInOut = 10,
    ExponentialIn = 11,
    ExponentialOut = 12,
    SineInOut = 13,
    SineIn = 14,
    SineOut = 15,
    BackInOut = 16,
    BackIn = 17,
    BackOut = 18,
};

enum class GJDifficulty {
    Auto = 0,
    Easy = 1,
    Normal = 2,
    Hard = 3,
    Harder = 4,
    Insane = 5,
    Demon = 6,
    DemonEasy = 7,
    DemonMedium = 8,
    DemonInsane = 9,
    DemonExtreme = 10
};

enum class GJLevelType {
    Local = 1,
    Editor = 2,
    Saved = 3
};

enum class GJRewardType
{
    Unknown = 0x0,
    Small = 0x1,
    Large = 0x2,
    SmallTreasure = 0x3,
    LargeTreasure = 0x4,
    Key10Treasure = 0x5,
    Key25Treasure = 0x6,
    Key50Treasure = 0x7,
    Key100Treasure = 0x8
};

enum class IconType {
    Cube = 0,
    Ship = 1,
    Ball = 2,
    Ufo = 3,
    Wave = 4,
    Robot = 5,
    Spider = 6,
    Swing = 7,
    Jetpack = 8,
    DeathEffect = 98,
    Special = 99,
    Item = 100,
    ShipFire = 101,
};

enum class GJChallengeType {
    Unknown = 0,
    Orbs = 1,
    UserCoins = 2,
    Stars = 3,
    Moons = 4,
};

enum class GJScoreType {
    Unknown = 0,
    Creator = 1
};

enum class LevelLeaderboardType {
    Friends = 0,
    Global = 1,
    Weekly = 2
};

// Thanks Calloc -_- Yeah I got no credit for this one...
enum class GJHttpType {
    UploadLevel = 0x1,
    GetOnlineLevels = 0x2,
    GetMapPacks = 0x3,
    DownloadLevel = 0x4,
    UpdateLevel = 0x5,
    RateStars = 0x6,
    DeleteServerLevel = 0x7,
    SetLevelStars = 0x8,
    SetLevelFeatured = 0x9,
    UpdateUserScore = 0xA,
    GetLeaderboardScores = 0xB,
    GetLevelComments = 0xC,
    UploadComment = 0xD,
    DeleteComment = 0xE,
    LikeItem = 0xF,
    RestoreItems = 0x10,
    SubmitUserInfo = 0x11,
    ReportLevel = 0x12,
    GetSongInfo = 0x13,
    BackupAccount = 0x14,
    SyncAccount = 0x15,
    RegisterAccount = 0x16,
    LoginAccount = 0x17,
    UpdateDescription = 0x18,
    GetAccountComments = 0x19,
    UpdateAccountSettings = 0x1A,
    GetGJUserInfo = 0x1B,
    GetFriendRequests = 0x1C,
    UploadFriendRequest = 0x1D,
    DeleteFriendRequest = 0x1E,
    AcceptFriendRequest = 0x1F,
    ReadFriendRequest = 0x20,
    RemoveFriend = 0x21,
    BlockUser = 0x22,
    UnblockUser = 0x23,
    GetUserList = 0x24,
    GetUserMessages = 0x25,
    DownloadUserMessage = 0x26,
    DeleteUserMessages = 0x27,
    UploadUserMessage = 0x28,
    GetUsers = 0x29,
    BanUser = 0x2A,
    RequestUserAccess = 0x2B,
    GetLevelSaveData = 0x2C,
    SuggestLevelStars = 0x2D,
    GetGJRewards = 0x2E,
    GetGJChallenges = 0x2F,
    GetGJDailyLevelState = 0x30,
    Unknown49 = 0x31,
    RateDemon = 0x32,
    GetLevelLeaderboard = 0x33,
    GetGauntlets = 0x34,
    GetTopArtists = 0x35,
    GetAccountBackupURL = 0x36,
    GetAccountSyncURL = 0x37,

    // Yet to be added by Robtop in 2.21
    // joinLobby = 0x39,
    // ExitMPLobby = 0x3a,
    GetLevelLists = 0x3c,
    DeleteServerLevelList = 0x3e,
};

enum class DialogChatPlacement {
    Center = 0,
    Top = 1,
    Bottom = 2,
};

enum class DialogAnimationType {
    Instant = 0,
    FromCenter = 1,
    FromLeft = 2,
    FromRight = 3,
    FromTop = 4,
    // a 5th type is defined which acts exactly the same as FromTop
    FromBottom = 5 
};

// Geode Addition
enum class ComparisonType {
    Equals = 0,
    Larger = 1,
    Smaller = 2,
};

// Geode Addition
enum class MoveTargetType {
    Both = 0,
    XOnly = 1,
    YOnly = 2,
};

// Geode Addition
enum class TouchToggleMode {
    Normal = 0,
    ToggleOn = 1,
    ToggleOff = 2,
};

// Geode Addition
enum class LeaderboardState {
    Default = 0,
    Top100 = 1,
    Global = 2,
    Creator = 3,
    Friends = 4,
};

// Wylie Addition (https://github.com/Wyliemaster/GD-Decompiled/blob/main/GD/code/headers/Layers/LevelSettingsLayer.h)
enum class Speed {
	Normal = 0,
	Slow = 1,
	Fast = 2,
	Faster = 3,
	Fastest = 4,
};


#endif /* __INCLUDES_H__ */
