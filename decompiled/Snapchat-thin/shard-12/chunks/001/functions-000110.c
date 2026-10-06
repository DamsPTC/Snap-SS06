/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e0039c; end: 108e003ab; -[SCFeatureSettingsService setGalleryBackupOnCellular:] */

void FUN_108e0039c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa7b8,param_3);
  return;
}



/* Entry: 108e003ac; end: 108e003b3; -[SCFeatureSettingsService gallery_back_up_on_cellular_client_value:] */

undefined * FUN_108e003ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e003b4; end: 108e003bb; -[SCFeatureSettingsService gallery_back_up_on_cellular_server_value:] */

void FUN_108e003b4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e003bc; end: 108e003cb; -[SCFeatureSettingsService galleryBackupOnCellular] */

void FUN_108e003bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa7b8,0);
  return;
}



/* Entry: 108e003cc; end: 108e003d7; -[SCFeatureSettingsService isGalleryFlashbackStoriesEnabled] */

void FUN_108e003cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa7d8);
  return;
}



/* Entry: 108e003d8; end: 108e003e3; -[SCFeatureSettingsService galleryFlashbackStoriesEnabledServerParam] */

undefined ** FUN_108e003d8(void)

{
  return &PTR____CFConstantStringClassReference_110efa7d8;
}



/* Entry: 108e003e4; end: 108e003f3; -[SCFeatureSettingsService setGalleryFlashbackStoriesEnabled:] */

void FUN_108e003e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa7d8,param_3);
  return;
}



/* Entry: 108e003f4; end: 108e003fb; -[SCFeatureSettingsService gallery_flashback_stories_enabled_client_value:] */

undefined * FUN_108e003f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e003fc; end: 108e00403; -[SCFeatureSettingsService gallery_flashback_stories_enabled_server_value:] */

void FUN_108e003fc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00404; end: 108e00413; -[SCFeatureSettingsService galleryFlashbackStoriesEnabled] */

void FUN_108e00404(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa7d8,1);
  return;
}



/* Entry: 108e00414; end: 108e0041f; -[SCFeatureSettingsService isGalleryCollectionsSyncRequiredAvailable] */

void FUN_108e00414(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa7f8);
  return;
}



/* Entry: 108e00420; end: 108e0042b; -[SCFeatureSettingsService galleryCollectionsSyncRequiredServerParam] */

undefined ** FUN_108e00420(void)

{
  return &PTR____CFConstantStringClassReference_110efa7f8;
}



/* Entry: 108e0042c; end: 108e0043b; -[SCFeatureSettingsService setGalleryCollectionsSyncRequired:] */

void FUN_108e0042c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa7f8,param_3);
  return;
}



/* Entry: 108e0043c; end: 108e00443; -[SCFeatureSettingsService gallery_collections_sync_required_client_value:] */

undefined * FUN_108e0043c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00444; end: 108e0044b; -[SCFeatureSettingsService gallery_collections_sync_required_server_value:] */

void FUN_108e00444(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e0044c; end: 108e0045b; -[SCFeatureSettingsService galleryCollectionsSyncRequired] */

void FUN_108e0044c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa7f8,0);
  return;
}



/* Entry: 108e0045c; end: 108e00467; -[SCFeatureSettingsService isGallerySyncRequired] */

void FUN_108e0045c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa818);
  return;
}



/* Entry: 108e00468; end: 108e00473; -[SCFeatureSettingsService gallerySyncRequiredServerParam] */

undefined ** FUN_108e00468(void)

{
  return &PTR____CFConstantStringClassReference_110efa818;
}



/* Entry: 108e00474; end: 108e00483; -[SCFeatureSettingsService setGallerySyncRequired:] */

void FUN_108e00474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa818,param_3);
  return;
}



/* Entry: 108e00484; end: 108e0048b; -[SCFeatureSettingsService gallery_sync_required_client_value:] */

undefined * FUN_108e00484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e0048c; end: 108e00493; -[SCFeatureSettingsService gallery_sync_required_server_value:] */

void FUN_108e0048c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00494; end: 108e004a3; -[SCFeatureSettingsService gallerySyncRequired] */

void FUN_108e00494(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa818,0);
  return;
}



/* Entry: 108e004a4; end: 108e004af; -[SCFeatureSettingsService isGalleryPrivateGalleryEnabledAvailable] */

void FUN_108e004a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa838);
  return;
}



/* Entry: 108e004b0; end: 108e004bb; -[SCFeatureSettingsService galleryPrivateGalleryEnabledServerParam] */

undefined ** FUN_108e004b0(void)

{
  return &PTR____CFConstantStringClassReference_110efa838;
}



/* Entry: 108e004bc; end: 108e004cb; -[SCFeatureSettingsService setGalleryPrivateGalleryEnabled:] */

void FUN_108e004bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa838,param_3);
  return;
}



/* Entry: 108e004cc; end: 108e004d3; -[SCFeatureSettingsService gallery_private_gallery_enabled_client_value:] */

undefined * FUN_108e004cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e004d4; end: 108e004db; -[SCFeatureSettingsService gallery_private_gallery_enabled_server_value:] */

void FUN_108e004d4(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e004dc; end: 108e004eb; -[SCFeatureSettingsService galleryPrivateGalleryEnabled] */

void FUN_108e004dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa838,0);
  return;
}



/* Entry: 108e004ec; end: 108e004f7; -[SCFeatureSettingsService isGalleryTopSecretPrivateGalleryEnabledAvailable] */

void FUN_108e004ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa858);
  return;
}



/* Entry: 108e004f8; end: 108e00503; -[SCFeatureSettingsService galleryTopSecretPrivateGalleryEnabledServerParam] */

undefined ** FUN_108e004f8(void)

{
  return &PTR____CFConstantStringClassReference_110efa858;
}



/* Entry: 108e00504; end: 108e00513; -[SCFeatureSettingsService setGalleryTopSecretPrivateGalleryEnabled:] */

void FUN_108e00504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa858,param_3);
  return;
}



/* Entry: 108e00514; end: 108e0051b; -[SCFeatureSettingsService gallery_top_secret_private_gallery_enabled_client_value:] */

undefined * FUN_108e00514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e0051c; end: 108e00523; -[SCFeatureSettingsService gallery_top_secret_private_gallery_enabled_server_value:] */

void FUN_108e0051c(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00524; end: 108e00533; -[SCFeatureSettingsService galleryTopSecretPrivateGalleryEnabled] */

void FUN_108e00524(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa858,0);
  return;
}



/* Entry: 108e00534; end: 108e0053f; -[SCFeatureSettingsService isGallerySaveToPrivateGalleryByDefaultAvailable] */

void FUN_108e00534(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa878);
  return;
}



/* Entry: 108e00540; end: 108e0054b; -[SCFeatureSettingsService gallerySaveToPrivateGalleryByDefaultServerParam] */

undefined ** FUN_108e00540(void)

{
  return &PTR____CFConstantStringClassReference_110efa878;
}



/* Entry: 108e0054c; end: 108e0055b; -[SCFeatureSettingsService setGallerySaveToPrivateGalleryByDefault:] */

void FUN_108e0054c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa878,param_3);
  return;
}



/* Entry: 108e0055c; end: 108e00563; -[SCFeatureSettingsService gallery_save_to_private_gallery_by_default_client_value:] */

undefined * FUN_108e0055c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00564; end: 108e0056b; -[SCFeatureSettingsService gallery_save_to_private_gallery_by_default_server_value:] */

void FUN_108e00564(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e0056c; end: 108e0057b; -[SCFeatureSettingsService gallerySaveToPrivateGalleryByDefault] */

void FUN_108e0056c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa878,0);
  return;
}



/* Entry: 108e0057c; end: 108e00587; -[SCFeatureSettingsService isGallerySnapSaveOptionAvailable] */

void FUN_108e0057c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa898);
  return;
}



/* Entry: 108e00588; end: 108e00593; -[SCFeatureSettingsService gallerySnapSaveOptionServerParam] */

undefined ** FUN_108e00588(void)

{
  return &PTR____CFConstantStringClassReference_110efa898;
}



/* Entry: 108e00594; end: 108e005a3; -[SCFeatureSettingsService setGallerySnapSaveOption:] */

void FUN_108e00594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110efa898,param_3);
  return;
}



/* Entry: 108e005a4; end: 108e005cb; -[SCFeatureSettingsService gallery_snap_save_option_client_value:] */

void FUN_108e005a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e005cc; end: 108e005f3; -[SCFeatureSettingsService gallery_snap_save_option_server_value:] */

void FUN_108e005cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108e005f4; end: 108e00607; -[SCFeatureSettingsService gallerySnapSaveOption] */

void FUN_108e005f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110efa898,
             &PTR____CFConstantStringClassReference_110dbaad8);
  return;
}



/* Entry: 108e00608; end: 108e00613; -[SCFeatureSettingsService isGalleryForcedResyncRequiredAvailable] */

void FUN_108e00608(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa8b8);
  return;
}



/* Entry: 108e00614; end: 108e0061f; -[SCFeatureSettingsService galleryForcedResyncRequiredServerParam] */

undefined ** FUN_108e00614(void)

{
  return &PTR____CFConstantStringClassReference_110efa8b8;
}



/* Entry: 108e00620; end: 108e0062f; -[SCFeatureSettingsService setGalleryForcedResyncRequired:] */

void FUN_108e00620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa8b8,param_3);
  return;
}



/* Entry: 108e00630; end: 108e00637; -[SCFeatureSettingsService gallery_forced_resync_required_client_value:] */

undefined * FUN_108e00630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00638; end: 108e0063f; -[SCFeatureSettingsService gallery_forced_resync_required_server_value:] */

void FUN_108e00638(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00640; end: 108e0064f; -[SCFeatureSettingsService galleryForcedResyncRequired] */

void FUN_108e00640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa8b8,0);
  return;
}



/* Entry: 108e00650; end: 108e0065b; -[SCFeatureSettingsService isGalleryStoryAutoSavingAvailable] */

void FUN_108e00650(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa8d8);
  return;
}



/* Entry: 108e0065c; end: 108e00667; -[SCFeatureSettingsService galleryStoryAutoSavingServerParam] */

undefined ** FUN_108e0065c(void)

{
  return &PTR____CFConstantStringClassReference_110efa8d8;
}



/* Entry: 108e00668; end: 108e00677; -[SCFeatureSettingsService setGalleryStoryAutoSaving:] */

void FUN_108e00668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa8d8,param_3);
  return;
}



/* Entry: 108e00678; end: 108e0067f; -[SCFeatureSettingsService gallery_story_auto_saving_client_value:] */

undefined * FUN_108e00678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00680; end: 108e00687; -[SCFeatureSettingsService gallery_story_auto_saving_server_value:] */

void FUN_108e00680(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00688; end: 108e00697; -[SCFeatureSettingsService galleryStoryAutoSaving] */

void FUN_108e00688(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa8d8,0);
  return;
}



/* Entry: 108e00698; end: 108e006a3; -[SCFeatureSettingsService isSeenMemoriesAutoSavePostsTooltipAvailable] */

void FUN_108e00698(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa8f8);
  return;
}



/* Entry: 108e006a4; end: 108e006af; -[SCFeatureSettingsService seenMemoriesAutoSavePostsTooltipServerParam] */

undefined ** FUN_108e006a4(void)

{
  return &PTR____CFConstantStringClassReference_110efa8f8;
}



/* Entry: 108e006b0; end: 108e006bf; -[SCFeatureSettingsService setSeenMemoriesAutoSavePostsTooltip:] */

void FUN_108e006b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa8f8,param_3);
  return;
}



/* Entry: 108e006c0; end: 108e006c7; -[SCFeatureSettingsService seen_memories_auto_save_posts_tooltip_client_value:] */

undefined * FUN_108e006c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e006c8; end: 108e006cf; -[SCFeatureSettingsService seen_memories_auto_save_posts_tooltip_server_value:] */

void FUN_108e006c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e006d0; end: 108e006df; -[SCFeatureSettingsService seenMemoriesAutoSavePostsTooltip] */

void FUN_108e006d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa8f8,0);
  return;
}



/* Entry: 108e006e0; end: 108e006eb; -[SCFeatureSettingsService isfirstMemoriesSaveBadgeAvailable] */

void FUN_108e006e0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa918);
  return;
}



/* Entry: 108e006ec; end: 108e006f7; -[SCFeatureSettingsService firstMemoriesSaveBadgeServerParam] */

undefined ** FUN_108e006ec(void)

{
  return &PTR____CFConstantStringClassReference_110efa918;
}



/* Entry: 108e006f8; end: 108e00707; -[SCFeatureSettingsService setFirstMemoriesSaveBadge:] */

void FUN_108e006f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa918,param_3);
  return;
}



/* Entry: 108e00708; end: 108e0070f; -[SCFeatureSettingsService first_memories_save_badge_client_value:] */

undefined * FUN_108e00708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00710; end: 108e00717; -[SCFeatureSettingsService first_memories_save_badge_server_value:] */

void FUN_108e00710(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00718; end: 108e00727; -[SCFeatureSettingsService firstMemoriesSaveBadge] */

void FUN_108e00718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa918,1);
  return;
}



/* Entry: 108e00728; end: 108e00733; -[SCFeatureSettingsService isScreenshopEnabledAvailable] */

void FUN_108e00728(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa938);
  return;
}



/* Entry: 108e00734; end: 108e0073f; -[SCFeatureSettingsService screenshopEnabledServerParam] */

undefined ** FUN_108e00734(void)

{
  return &PTR____CFConstantStringClassReference_110efa938;
}



/* Entry: 108e00740; end: 108e0074f; -[SCFeatureSettingsService setScreenshopEnabled:] */

void FUN_108e00740(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110efa938,param_3);
  return;
}



/* Entry: 108e00750; end: 108e00757; -[SCFeatureSettingsService memories_enabled_screenshop_client_value:] */

undefined * FUN_108e00750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 108e00758; end: 108e0075f; -[SCFeatureSettingsService memories_enabled_screenshop_server_value:] */

void FUN_108e00758(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108e00760; end: 108e0076f; -[SCFeatureSettingsService screenshopEnabled] */

void FUN_108e00760(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd5110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__boolForFeatureSetting_defaultVa_112552de0,
             &PTR____CFConstantStringClassReference_110efa938,1);
  return;
}



/* Entry: 108e00770; end: 108e0077b; -[SCFeatureSettingsService isScreenshopEducationalUnitSeenCountAvailable] */

void FUN_108e00770(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa958);
  return;
}



/* Entry: 108e0077c; end: 108e00787; -[SCFeatureSettingsService screenshopEducationalUnitSeenCountServerParam] */

undefined ** FUN_108e0077c(void)

{
  return &PTR____CFConstantStringClassReference_110efa958;
}



/* Entry: 108e00788; end: 108e00797; -[SCFeatureSettingsService setScreenshopEducationalUnitSeenCount:] */

void FUN_108e00788(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efa958,param_3);
  return;
}



/* Entry: 108e00798; end: 108e0079f; -[SCFeatureSettingsService screenshop_educational_unit_seen_count_client_value:] */

void FUN_108e00798(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e007a0; end: 108e007a7; -[SCFeatureSettingsService screenshop_educational_unit_seen_count_server_value:] */

void FUN_108e007a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e007a8; end: 108e007b7; -[SCFeatureSettingsService screenshopEducationalUnitSeenCount] */

void FUN_108e007a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efa958,0);
  return;
}



/* Entry: 108e007b8; end: 108e007c3; -[SCFeatureSettingsService isScreenshopEducationalUnitDismissCountAvailable] */

void FUN_108e007b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa978);
  return;
}



/* Entry: 108e007c4; end: 108e007cf; -[SCFeatureSettingsService screenshopEducationalUnitDismissCountServerParam] */

undefined ** FUN_108e007c4(void)

{
  return &PTR____CFConstantStringClassReference_110efa978;
}



/* Entry: 108e007d0; end: 108e007df; -[SCFeatureSettingsService setScreenshopEducationalUnitDismissCount:] */

void FUN_108e007d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efa978,param_3);
  return;
}



/* Entry: 108e007e0; end: 108e007e7; -[SCFeatureSettingsService screenshop_educational_unit_dismiss_count_client_value:] */

void FUN_108e007e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e007e8; end: 108e007ef; -[SCFeatureSettingsService screenshop_educational_unit_dismiss_count_server_value:] */

void FUN_108e007e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e007f0; end: 108e007ff; -[SCFeatureSettingsService screenshopEducationalUnitDismissCount] */

void FUN_108e007f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efa978,0);
  return;
}



/* Entry: 108e00800; end: 108e0080b; -[SCFeatureSettingsService isScreenshopEducationalUnitDismissTimestampAvailable] */

void FUN_108e00800(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa998);
  return;
}



/* Entry: 108e0080c; end: 108e00817; -[SCFeatureSettingsService screenshopEducationalUnitDismissTimestampServerParam] */

undefined ** FUN_108e0080c(void)

{
  return &PTR____CFConstantStringClassReference_110efa998;
}



/* Entry: 108e00818; end: 108e00827; -[SCFeatureSettingsService setScreenshopEducationalUnitDismissTimestamp:] */

void FUN_108e00818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efa998,param_3);
  return;
}



/* Entry: 108e00828; end: 108e0082f; -[SCFeatureSettingsService screenshop_educational_unit_dismiss_timestamp_client_value:] */

void FUN_108e00828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00830; end: 108e00837; -[SCFeatureSettingsService screenshop_educational_unit_dismiss_timestamp_server_value:] */

void FUN_108e00830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e00838; end: 108e00847; -[SCFeatureSettingsService screenshopEducationalUnitDismissTimestamp] */

void FUN_108e00838(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efa998,0);
  return;
}



/* Entry: 108e00848; end: 108e00853; -[SCFeatureSettingsService isFirstMemoriesSaveTooltipSeenCountAvailable] */

void FUN_108e00848(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110efa9b8);
  return;
}



/* Entry: 108e00854; end: 108e0085f; -[SCFeatureSettingsService firstMemoriesSaveTooltipSeenCountServerParam] */

undefined ** FUN_108e00854(void)

{
  return &PTR____CFConstantStringClassReference_110efa9b8;
}



/* Entry: 108e00860; end: 108e0086f; -[SCFeatureSettingsService setFirstMemoriesSaveTooltipSeenCount:] */

void FUN_108e00860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_longValue__112586910,
             &PTR____CFConstantStringClassReference_110efa9b8,param_3);
  return;
}



/* Entry: 108e00870; end: 108e00877; -[SCFeatureSettingsService first_memories_save_tooltip_seen_count_client_value:] */

void FUN_108e00870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c067fc0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c0df790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithInteger__1126157f8,param_3);
  return;
}



/* Entry: 108e00878; end: 108e0087f; -[SCFeatureSettingsService first_memories_save_tooltip_seen_count_server_value:] */

void FUN_108e00878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25d710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_stringValue_112674fe8);
  return;
}



/* Entry: 108e00880; end: 108e0088f; -[SCFeatureSettingsService firstMemoriesSaveTooltipSeenCount] */

void FUN_108e00880(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__integerForFeatureSetting_defaul_11256cde0,
             &PTR____CFConstantStringClassReference_110efa9b8,0);
  return;
}


