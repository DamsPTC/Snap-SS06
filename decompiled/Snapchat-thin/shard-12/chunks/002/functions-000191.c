/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f5471c; end: 108f5472f;  */

void FUN_108f5471c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0ee98,0,0);
  return;
}



/* Entry: 108f54730; end: 108f5476b;  */

bool FUN_108f54730(undefined8 param_1,ulong param_2)

{
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110f0eef8,0,0);
  return (param_2 & (long)(int)param_1) != 0;
}



/* Entry: 108f5476c; end: 108f547af;  */

undefined8 FUN_108f5476c(void)

{
  return 0xc;
}



/* Entry: 108f547b0; end: 108f5481b;  */

ulong FUN_108f547b0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110e16778,0,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0ef78,0,0);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f5481c; end: 108f54857;  */

void FUN_108f5481c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110f0ef98,1,0);
  return;
}



/* Entry: 108f54858; end: 108f548fb;  */

undefined1 FUN_108f54858(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam0000000113829b40;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108f548fc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113829b40,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam0000000113829b38;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f548fc; end: 108f5492b;  */

void FUN_108f548fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110f0f018,0,0);
  uRam0000000113829b38 = (char)uVar1;
  return;
}



/* Entry: 108f5492c; end: 108f549cf;  */

undefined1 FUN_108f5492c(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar2 = lRam0000000113829b50;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108f549d0;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  _objc_retain(param_1);
  uVar3 = param_1;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113829b50,&puStack_48);
    uVar3 = uStack_28;
  }
  uVar1 = uRam0000000113829b48;
  _objc_release(uVar3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f549d0; end: 108f549ff;  */

void FUN_108f549d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110f0f038,0,0);
  uRam0000000113829b48 = (char)uVar1;
  return;
}



/* Entry: 108f54a00; end: 108f54a47;  */

undefined8 FUN_108f54a00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0f058,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108f54a48; end: 108f54a97;  */

void FUN_108f54a48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c067f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_intValueForConfigKeySync_default_1125f79d0,
             &PTR____CFConstantStringClassReference_110f0f078,0x4b0,0);
  return;
}



/* Entry: 108f54a98; end: 108f54aef;  */

ulong FUN_108f54a98(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110f0f0d8,0,0);
    uVar2 = 0;
    if ((uVar1 & 1) != 0) goto LAB_108f54ad8;
  }
  func_0x000107c30a6c();
  uVar2 = uVar1;
LAB_108f54ad8:
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 108f54af0; end: 108f54ba3;  */

undefined8 FUN_108f54af0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  lVar2 = lRam0000000113829b58;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108f54ba4;
  puStack_48 = &UNK_110848c48;
  uStack_40 = param_2;
  uStack_38 = param_1;
  _objc_retain(param_2);
  uVar3 = param_2;
  if (lVar2 != -1) {
    func_0x000107c27d9c(0x113829b58,&puStack_60);
    uVar3 = uStack_40;
  }
  uVar1 = uRam00000001132b0be0;
  _objc_release(uVar3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108f54ba4; end: 108f54bdf;  */

void FUN_108f54ba4(long param_1,undefined8 param_2)

{
  float fVar1;
  
  fVar1 = (float)*(double *)(param_1 + 0x28);
  func_0x00010bfb2cc0(*(undefined8 *)(param_1 + 0x20),param_2,
                      &PTR____CFConstantStringClassReference_110f0f0f8,0);
  dRam00000001132b0be0 = (double)fVar1;
  return;
}



/* Entry: 108f54be0; end: 108f54c47; +[ClientRecentEventUploadConfig descriptor] */

void FUN_108f54be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd99c0,
                        &PTR____CFConstantStringClassReference_110f0f118,&PTR_DAT_1132b0be8,
                        &PTR_DAT_1132b0c00,8,0x24,0x1c);
    puRam0000000113730350 = puVar1;
  }
  return;
}



/* Entry: 108f54c48; end: 108f54ccf; +[SCDiscoverFeedTweaks sharedInstance] */

void FUN_108f54c48(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108f54cd0;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113730358 != -1) {
    func_0x000107c27d9c(0x113730358,&puStack_48);
  }
  uVar1 = uRam0000000113730360;
  _objc_retain(uRam0000000113730360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f54cd0; end: 108f54cf7;  */

void FUN_108f54cd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113730360;
  uRam0000000113730360 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f54cf8; end: 108f54d77; -[SCDiscoverFeedTweaks _savedDiscoverFeedURL] */

void FUN_108f54cf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f54d78; end: 108f54db7; -[SCDiscoverFeedTweaks _removeDiscoverFeedURLFromUserDefaults] */

void FUN_108f54d78(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f54db8; end: 108f54e1b; -[SCDiscoverFeedTweaks _writeDiscoverFeedURLToUserDefault:] */

void FUN_108f54db8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_retain(param_3);
  func_0x00010c24d8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
  func_0x00010c266b80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f54e1c; end: 108f54e6f; -[SCDiscoverFeedTweaks discoverFeedBaseURL] */

void FUN_108f54e1c(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x00010be9a500();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0f158;
  }
  else {
    ppuVar1 = param_1;
    func_0x00010bf51e00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f54e70; end: 108f54ee3; -[SCDiscoverFeedTweaks updateBypassFSNEndpointBaseURL:] */

void FUN_108f54e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0f158);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010beeb9a0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be8be20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f54ee4; end: 108f54eef;  */

undefined ** FUN_108f54ee4(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108f54ef0; end: 108f54f3b;  */

void FUN_108f54ef0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126caa30;
  func_0x00010c22ba80(PTR_PTR_1126caa30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be9a500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f54f3c; end: 108f54f5f;  */

undefined ** FUN_108f54f3c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108f54f60; end: 108f54fe7; +[SCSpotlightTweaks sharedInstance] */

void FUN_108f54f60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_108f54fe8;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam0000000113730368 != -1) {
    func_0x000107c27d9c(0x113730368,&puStack_48);
  }
  uVar1 = uRam0000000113730370;
  _objc_retain(uRam0000000113730370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108f54fe8; end: 108f5500f;  */

void FUN_108f54fe8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000113730370;
  uRam0000000113730370 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f55010; end: 108f5508f; -[SCSpotlightTweaks _savedSpotlightCustomCompositeId] */

void FUN_108f55010(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f55090; end: 108f550cf; -[SCSpotlightTweaks _removeSpotlightCustomCompositeIdFromUserDefaults] */

void FUN_108f55090(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f550d0; end: 108f55133; -[SCSpotlightTweaks _writeSpotlightCompositeIdToUserDefaults:] */

void FUN_108f550d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_retain(param_3);
  func_0x00010c24d8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
  func_0x00010c266b80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f55134; end: 108f551b3; -[SCSpotlightTweaks _savedSpotlightCustomURL] */

void FUN_108f55134(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d300();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f551b4; end: 108f551f3; -[SCSpotlightTweaks _removeSpotlightCustomURLFromUserDefaults] */

void FUN_108f551b4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x00010c24d8e0(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f551f4; end: 108f55257; -[SCSpotlightTweaks _writeSpotlightURLToUserDefaults:] */

void FUN_108f551f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  _objc_retain(param_3);
  func_0x00010c24d8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(param_3);
  func_0x00010c266b80(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108f55258; end: 108f552ab; -[SCSpotlightTweaks spotlightEndpointCustomURL] */

void FUN_108f55258(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x00010be9a580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f0f158;
  }
  else {
    ppuVar1 = param_1;
    func_0x00010bf51e00(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 108f552ac; end: 108f5531f; -[SCSpotlightTweaks updateCustomEndpointBaseURL:] */

void FUN_108f552ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f0f158);
  if ((int)uVar1 == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010beebba0(param_1,param_2,uVar1);
    _objc_release(uVar1);
  }
  else {
    func_0x00010be8d500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f55320; end: 108f5538b; -[SCSpotlightTweaks updateCustomCompositeId:] */

void FUN_108f55320(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    func_0x00010be8d4e0(param_1);
  }
  else {
    lVar1 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010beebb80(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f5538c; end: 108f55397;  */

undefined ** FUN_108f5538c(void)

{
  return &PTR____CFConstantStringClassReference_110daafd8;
}



/* Entry: 108f55398; end: 108f553e3;  */

void FUN_108f55398(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dcaa0;
  func_0x00010c22ba80(PTR_PTR_1126dcaa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010be9a580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f553e4; end: 108f55417;  */

undefined8 FUN_108f553e4(void)

{
  return 0x20;
}



/* Entry: 108f55418; end: 108f567b3;  */

void FUN_108f55418(undefined *param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar2 = param_1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = puVar23;
  func_0x00010c08fa60();
  _objc_release(puVar23);
  puVar23 = (undefined *)0x0;
  if (puVar2 == (undefined *)0x0) goto LAB_108f5676c;
  _objc_retain(param_1);
  puVar2 = param_1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar23;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar3;
    func_0x00010bfda560();
    _objc_release(puVar3);
  }
  else {
    puVar22 = (undefined *)0x1;
  }
  _objc_release(puVar23);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar23;
  func_0x00010bf529e0();
  _objc_release(puVar23);
  _objc_release(puVar2);
  puVar2 = param_1;
  func_0x00010c0c6280();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010bf529e0();
  _objc_release(puVar2);
  _objc_release(param_1);
  if (((((ulong)puVar22 & 1) != 0) || (puVar3 != (undefined *)0x0)) || (puVar23 != (undefined *)0x0)
     ) {
    _objc_retain(param_1);
    puVar23 = param_1;
    goto LAB_108f5676c;
  }
  puVar3 = param_1;
  FUN_108f5729c();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b25c0;
  _objc_alloc_init();
  puVar2 = param_1;
  func_0x00010bfe5ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar23);
  _objc_release(puVar2);
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar24 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar2);
  puVar2 = puVar4;
  if (((ulong)puVar24 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  _objc_retain(puVar2);
  _objc_release(puVar4);
  _objc_retain(puVar2);
  puVar4 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      uVar25 = *(undefined8 *)((long)puVar24 * 8);
      uVar5 = uVar25;
      func_0x00010c0c6180();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0c6c20();
      if ((int)uVar6 == 0) {
        func_0x00010c27dd80();
        func_0x00010c1c5440(uVar5);
      }
      puVar7 = puVar23;
      FUN_108f567b4(puVar23,uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(uVar25);
      func_0x00010c1c50e0(uVar25);
      puVar8 = PTR_PTR_1126b25d0;
      _objc_alloc_init(PTR_PTR_1126b25d0);
      func_0x00010c1c4020();
      func_0x000108f56970(puVar23,puVar8);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar5);
      puVar24 = puVar24 + 1;
    } while (puVar4 != puVar24);
    puVar4 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  puVar24 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3068;
  _objc_opt_class(PTR_PTR_1126b3068);
  puVar7 = puVar24;
  _objc_opt_isKindOfClass(puVar24,puVar4);
  puVar4 = puVar24;
  if (((ulong)puVar7 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar24);
  if (puVar4 != (undefined *)0x0) {
    puVar24 = puVar23;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar24 == (undefined *)0x0) {
      puVar7 = PTR_PTR_1126b25e0;
      _objc_alloc_init(PTR_PTR_1126b25e0);
      func_0x00010c1dd3e0(puVar23);
      _objc_release(puVar7);
    }
    else {
      func_0x00010c1dd3e0(puVar23);
    }
    _objc_release(puVar24);
    puVar24 = puVar23;
    func_0x00010c0fee00(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1dd500();
    _objc_release(puVar24);
  }
  puVar7 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar24 = PTR_PTR_1126dcaa8;
  _objc_opt_class(PTR_PTR_1126dcaa8);
  puVar8 = puVar7;
  _objc_opt_isKindOfClass(puVar7,puVar24);
  puVar24 = puVar7;
  if (((ulong)puVar8 & 1) == 0) {
    puVar24 = (undefined *)0x0;
  }
  _objc_retain(puVar24);
  _objc_release(puVar7);
  if (puVar24 != (undefined *)0x0) {
    puVar8 = puVar23;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar26 = PTR_PTR_1126b25e0;
      _objc_alloc_init(PTR_PTR_1126b25e0);
      func_0x00010c1dd3e0(puVar23);
      _objc_release(puVar26);
    }
    else {
      func_0x00010c1dd3e0(puVar23);
    }
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bfd8fc0();
    if ((int)puVar8 == 0) {
LAB_108f55958:
      puVar8 = PTR_PTR_1126b25d8;
      _objc_opt_new(PTR_PTR_1126b25d8);
      puVar26 = puVar7;
      func_0x00010c260e00(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar8);
      _objc_release(puVar26);
      puVar26 = puVar23;
      FUN_108f567b4(puVar23,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c4880(puVar7);
      _objc_release(puVar26);
      func_0x00010c20f6e0(puVar7);
      _objc_release(puVar8);
    }
    else {
      puVar8 = puVar7;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar8;
      func_0x00010c0c55e0();
      _objc_release(puVar8);
      if (puVar26 == (undefined *)0x0) goto LAB_108f55958;
    }
    puVar7 = puVar23;
    func_0x00010c0fee00(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20f7e0();
    _objc_release(puVar7);
  }
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cc6d8;
  _objc_opt_class(PTR_PTR_1126cc6d8);
  puVar26 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar7);
  puVar7 = puVar8;
  if (((ulong)puVar26 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  puVar26 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cc6e0;
  _objc_opt_class(PTR_PTR_1126cc6e0);
  puVar9 = puVar26;
  _objc_opt_isKindOfClass(puVar26,puVar8);
  puVar8 = puVar26;
  if (((ulong)puVar9 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar26);
  _objc_retain(puVar23);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar26 = puVar7;
  func_0x00010bfd5020();
  if ((int)puVar26 != 0) {
    puVar26 = puVar7;
    func_0x00010bf28b80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar26;
    func_0x00010bf28aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c08fa60();
    _objc_release(puVar9);
    _objc_release(puVar26);
    if (puVar10 != (undefined *)0x0) {
      puVar26 = PTR_PTR_1126b25d8;
      _objc_opt_new(PTR_PTR_1126b25d8);
      puVar9 = puVar7;
      func_0x00010bf28b80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf28aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1822a0(puVar26);
      _objc_release(puVar10);
      _objc_release(puVar9);
      func_0x00010c1c5440(puVar26);
      puVar9 = puVar23;
      FUN_108f567b4(puVar23,puVar26);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b25c8;
      _objc_opt_new(PTR_PTR_1126b25c8);
      func_0x00010c16a960();
      func_0x00010c1c4880(puVar10);
      func_0x00010c1c50e0(puVar10);
      puVar11 = PTR_PTR_1126cc6e0;
      _objc_opt_new(PTR_PTR_1126cc6e0);
      puVar12 = puVar7;
      func_0x00010bf28b80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010bfbec20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a2660(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar12 = puVar7;
      func_0x00010bf28b80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c26a000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212480(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      puVar12 = puVar7;
      func_0x00010bf28b80(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1ba8a0(puVar11);
      _objc_release(puVar13);
      _objc_release(puVar12);
      func_0x00010c175d40(puVar23);
      puVar12 = PTR_PTR_1126b25d0;
      _objc_alloc_init(PTR_PTR_1126b25d0);
      func_0x00010c1c4020();
      func_0x000108f56970(puVar23,puVar12);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar26);
    }
  }
  if (puVar8 != (undefined *)0x0) {
    func_0x00010c175d40(puVar23);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar23);
  _objc_release(puVar8);
  _objc_release(puVar7);
  puVar8 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar26 = puVar8;
  _objc_opt_isKindOfClass(puVar8,puVar7);
  puVar7 = puVar8;
  if (((ulong)puVar26 & 1) == 0) {
    puVar7 = (undefined *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar8);
  _objc_retain(puVar7);
  puVar8 = puVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar8 != (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar7);
      }
      puVar9 = puVar23;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x000107c31910();
      puVar12 = puVar11;
      func_0x00010bf529e0();
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      if (puVar12 == (undefined *)0x0) {
        puVar9 = PTR_PTR_1126b25d0;
        _objc_alloc_init(PTR_PTR_1126b25d0);
        func_0x00010c224ee0();
        func_0x000108f56970(puVar23,puVar9);
      }
      else {
        puVar9 = PTR_PTR_1126b25f0;
        _objc_alloc_init(PTR_PTR_1126b25f0);
        func_0x00010c224ee0();
        func_0x00010befa120(puVar22);
      }
      _objc_release(puVar9);
      puVar26 = puVar26 + 1;
    } while (puVar8 != puVar26);
    puVar8 = puVar7;
    func_0x00010bf52a60();
  }
  _objc_release(puVar7);
  puVar26 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126cc748;
  _objc_opt_class(PTR_PTR_1126cc748);
  puVar9 = puVar26;
  _objc_opt_isKindOfClass(puVar26,puVar8);
  puVar8 = puVar26;
  if (((ulong)puVar9 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar26);
  if (puVar8 != (undefined *)0x0) {
    puVar9 = puVar26;
    func_0x00010c29a620(puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar23;
    FUN_108f567b4(puVar23,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c221ac0(puVar26);
    puVar9 = puVar26;
    func_0x00010c0fd9a0(puVar26);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar23;
    FUN_108f567b4(puVar23,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c1dcb00(puVar26);
    puVar26 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c1c0e60();
    func_0x00010befa120(puVar22);
    _objc_release(puVar26);
    _objc_release(puVar11);
    _objc_release(puVar10);
  }
  puVar9 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR_PTR_1126cc738;
  _objc_opt_class(PTR_PTR_1126cc738);
  puVar10 = puVar9;
  _objc_opt_isKindOfClass(puVar9,puVar26);
  puVar26 = puVar9;
  if (((ulong)puVar10 & 1) == 0) {
    puVar26 = (undefined *)0x0;
  }
  _objc_retain(puVar26);
  _objc_release(puVar9);
  puVar9 = puVar26;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf529e0();
  _objc_release(puVar9);
  if (puVar10 != (undefined *)0x0) {
    puVar9 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c17f0a0();
    func_0x00010befa120(puVar22);
    _objc_release(puVar9);
  }
  puVar10 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126dcab0;
  _objc_opt_class(PTR_PTR_1126dcab0);
  puVar11 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar9);
  puVar9 = puVar10;
  if (((ulong)puVar11 & 1) == 0) {
    puVar9 = (undefined *)0x0;
  }
  _objc_retain(puVar9);
  _objc_release(puVar10);
  if (puVar9 != (undefined *)0x0) {
    puVar10 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c1688e0();
    func_0x00010befa120(puVar22);
    _objc_release(puVar10);
  }
  puVar11 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126cc778;
  _objc_opt_class(PTR_PTR_1126cc778);
  puVar12 = puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar10);
  puVar10 = puVar11;
  if (((ulong)puVar12 & 1) == 0) {
    puVar10 = (undefined *)0x0;
  }
  _objc_retain(puVar10);
  _objc_release(puVar11);
  if (puVar10 != (undefined *)0x0) {
    func_0x00010c1dac80(puVar23);
  }
  puVar12 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126cc768;
  _objc_opt_class(PTR_PTR_1126cc768);
  puVar13 = puVar12;
  _objc_opt_isKindOfClass(puVar12,puVar11);
  puVar11 = puVar12;
  if (((ulong)puVar13 & 1) == 0) {
    puVar11 = (undefined *)0x0;
  }
  _objc_retain(puVar11);
  _objc_release(puVar12);
  if (puVar11 != (undefined *)0x0) {
    puVar12 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c20f500();
    func_0x00010befa120(puVar22);
    _objc_release(puVar12);
  }
  puVar13 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126dcab8;
  _objc_opt_class(PTR_PTR_1126dcab8);
  puVar14 = puVar13;
  _objc_opt_isKindOfClass(puVar13,puVar12);
  puVar12 = puVar13;
  if (((ulong)puVar14 & 1) == 0) {
    puVar12 = (undefined *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar13);
  if (puVar12 != (undefined *)0x0) {
    puVar13 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c168c20();
    func_0x00010befa120(puVar22);
    _objc_release(puVar13);
  }
  puVar14 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126cc740;
  _objc_opt_class(PTR_PTR_1126cc740);
  puVar15 = puVar14;
  _objc_opt_isKindOfClass(puVar14,puVar13);
  puVar13 = puVar14;
  if (((ulong)puVar15 & 1) == 0) {
    puVar13 = (undefined *)0x0;
  }
  _objc_retain(puVar13);
  _objc_release(puVar14);
  if (puVar13 != (undefined *)0x0) {
    puVar14 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c176240();
    func_0x00010befa120(puVar22);
    _objc_release(puVar14);
  }
  puVar15 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126dcac0;
  _objc_opt_class(PTR_PTR_1126dcac0);
  puVar16 = puVar15;
  _objc_opt_isKindOfClass(puVar15,puVar14);
  puVar14 = puVar15;
  if (((ulong)puVar16 & 1) == 0) {
    puVar14 = (undefined *)0x0;
  }
  _objc_retain(puVar14);
  _objc_release(puVar15);
  if (puVar14 != (undefined *)0x0) {
    puVar15 = PTR_PTR_1126b25f0;
    _objc_alloc_init(PTR_PTR_1126b25f0);
    func_0x00010c1ce640();
    func_0x00010befa120(puVar22);
    _objc_release(puVar15);
  }
  puVar16 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126dcac8;
  _objc_opt_class(PTR_PTR_1126dcac8);
  puVar17 = puVar16;
  _objc_opt_isKindOfClass(puVar16,puVar15);
  puVar15 = puVar16;
  if (((ulong)puVar17 & 1) == 0) {
    puVar15 = (undefined *)0x0;
  }
  _objc_retain(puVar15);
  _objc_release(puVar16);
  puVar16 = puVar15;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c08fa60();
  _objc_release(puVar16);
  if (puVar17 != (undefined *)0x0) {
    puVar16 = puVar23;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar16 == (undefined *)0x0) {
      puVar17 = PTR_PTR_1126cf388;
      _objc_alloc_init(PTR_PTR_1126cf388);
      func_0x00010c16b420(puVar23);
      _objc_release(puVar17);
    }
    else {
      func_0x00010c16b420(puVar23);
    }
    _objc_release(puVar16);
    puVar16 = puVar15;
    func_0x00010c26b700(puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar23;
    func_0x00010bf0d7e0(puVar23);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1882e0();
    _objc_release(puVar17);
    _objc_release(puVar16);
  }
  puVar17 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR_PTR_1126b00c0;
  _objc_opt_class(PTR_PTR_1126b00c0);
  puVar18 = puVar17;
  _objc_opt_isKindOfClass(puVar17,puVar16);
  puVar16 = puVar17;
  if (((ulong)puVar18 & 1) == 0) {
    puVar16 = (undefined *)0x0;
  }
  _objc_retain(puVar16);
  _objc_release(puVar17);
  puVar17 = puVar16;
  func_0x00010bfe5ea0();
  if (puVar17 != (undefined *)0x0) {
    func_0x00010c1ba8a0(puVar23);
  }
  puVar17 = puVar23;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar17 == (undefined *)0x0) {
    puVar18 = PTR_PTR_1126cf388;
    _objc_alloc_init(PTR_PTR_1126cf388);
    func_0x00010c16b420(puVar23);
    _objc_release(puVar18);
  }
  else {
    func_0x00010c16b420(puVar23);
  }
  _objc_release(puVar17);
  puVar17 = puVar23;
  func_0x00010bf0d7e0(puVar23);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b440();
  _objc_release(puVar17);
  puVar18 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126cc760;
  _objc_opt_class(PTR_PTR_1126cc760);
  puVar19 = puVar18;
  _objc_opt_isKindOfClass(puVar18,puVar17);
  puVar17 = puVar18;
  if (((ulong)puVar19 & 1) == 0) {
    puVar17 = (undefined *)0x0;
  }
  _objc_retain(puVar17);
  _objc_release(puVar18);
  func_0x00010c1d7e00(puVar23);
  _objc_release(puVar17);
  puVar18 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126dcad0;
  _objc_opt_class(PTR_PTR_1126dcad0);
  puVar19 = puVar18;
  _objc_opt_isKindOfClass(puVar18,puVar17);
  puVar17 = puVar18;
  if (((ulong)puVar19 & 1) == 0) {
    puVar17 = (undefined *)0x0;
  }
  _objc_retain(puVar17);
  _objc_release(puVar18);
  puVar18 = puVar17;
  func_0x00010c26e280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar18 != (undefined *)0x0) {
    func_0x00010c213e20(puVar23);
    puVar18 = puVar17;
    func_0x00010c26e280(puVar17);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c6c20();
    puVar19 = puVar23;
    FUN_108f567b4(puVar23,puVar18);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c214220(puVar17);
    _objc_release(puVar19);
    _objc_release(puVar18);
  }
  puVar19 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR_PTR_1126cc770;
  _objc_opt_class(PTR_PTR_1126cc770);
  puVar20 = puVar19;
  _objc_opt_isKindOfClass(puVar19,puVar18);
  puVar18 = puVar19;
  if (((ulong)puVar20 & 1) == 0) {
    puVar18 = (undefined *)0x0;
  }
  _objc_retain(puVar18);
  _objc_release(puVar19);
  func_0x00010c207640(puVar23);
  _objc_release(puVar18);
  puVar19 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  param_2 = PTR_PTR_1126cc7a8;
  _objc_opt_class();
  puVar20 = puVar19;
  _objc_opt_isKindOfClass();
  puVar18 = puVar19;
  if (((ulong)puVar20 & 1) == 0) {
    puVar18 = (undefined *)0x0;
  }
  _objc_retain(puVar18);
  _objc_release(puVar19);
  puVar19 = puVar18;
  func_0x00010c15ebe0();
  if (puVar19 != (undefined *)0x0) {
    func_0x00010c1e5280(puVar23);
  }
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar26);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar24);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar22);
  _objc_release(puVar3);
LAB_108f5676c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
    ___stack_chk_fail();
    _objc_retain();
    puVar23 = (undefined *)0x0;
    if ((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) {
      _objc_retain(param_2);
      puVar2 = param_1;
      func_0x00010c0c6280();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1c5120(param_1);
        _objc_release(puVar23);
      }
      else {
        func_0x00010c1c5120(param_1);
      }
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0c5600(param_1);
      func_0x00010c0df7c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0b4ca0();
      func_0x00010c1c4aa0(param_2);
      _objc_release(puVar2);
      puVar23 = PTR_PTR_1126bcf20;
      _objc_alloc_init(PTR_PTR_1126bcf20);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0c55e0(param_2);
      func_0x00010c0df7c0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c1c4aa0(puVar23);
      _objc_release(puVar2);
      puVar2 = param_1;
      func_0x00010c0c6280(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120();
      _objc_release(param_2);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      puVar3 = param_1;
      func_0x00010c0c6280(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010c0df840(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c1c4ac0(param_1);
      _objc_release(puVar2);
      _objc_release(puVar3);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 108f567b4; end: 108f56ad3;  */

void FUN_108f567b4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = (undefined *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _objc_retain(param_2);
    lVar1 = param_1;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c5120(param_1);
      _objc_release(puVar3);
    }
    else {
      func_0x00010c1c5120(param_1);
    }
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c5600(param_1);
    func_0x00010c0df7c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b4ca0();
    func_0x00010c1c4aa0(param_2);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126bcf20;
    _objc_alloc_init(PTR_PTR_1126bcf20);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0c55e0(param_2);
    func_0x00010c0df7c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1c4aa0(puVar3);
    _objc_release(puVar2);
    lVar1 = param_1;
    func_0x00010c0c6280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(param_2);
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    lVar1 = param_1;
    func_0x00010c0c6280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c1c4ac0(param_1);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108f56ad4; end: 108f56bcb;  */

bool FUN_108f56ad4(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar3 = param_2;
    func_0x00010c2a3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108f56bcc; end: 108f56d37;  */

ulong FUN_108f56bcc(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if ((param_1 == 0) || (uVar7 = param_1, func_0x00010c0c55e0(), (long)uVar7 < 0)) {
    uVar7 = 0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar6 = uVar7;
        func_0x00010c0c55e0();
        uVar4 = param_1;
        func_0x00010c0c55e0();
        if (uVar6 == uVar4) {
          _objc_retain(uVar7);
          goto LAB_108f56ce0;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    }
    uVar7 = 0;
LAB_108f56ce0:
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return uVar7;
  }
  ___stack_chk_fail();
  FUN_108f55418();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x000108f56b50();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf0d0a0();
  if ((int)uVar6 == 10) {
    uVar6 = uVar7;
    func_0x00010c2606c0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = (ulong)(uVar6 != 0);
    _objc_release();
  }
  else {
    uVar6 = 0;
  }
  _objc_release(uVar7);
  _objc_release(param_1);
  return uVar6;
}



/* Entry: 108f56d38; end: 108f57027;  */

bool FUN_108f56d38(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  FUN_108f55418();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x000108f56b50();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0d0a0();
  if ((int)lVar3 == 10) {
    lVar3 = lVar2;
    func_0x00010c2606c0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 != 0;
    _objc_release();
  }
  else {
    bVar1 = false;
  }
  _objc_release(lVar2);
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108f57028; end: 108f571b3;  */

bool FUN_108f57028(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar3 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
  lVar7 = 0;
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        lVar4 = lVar7;
        func_0x00010c2a3a80();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c08fa60();
        _objc_release(lVar5);
        _objc_release(lVar4);
        if (lVar6 != 0) {
          func_0x00010c2a3a80();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_108f57154;
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar3 != 0);
    lVar7 = 0;
  }
LAB_108f57154:
  _objc_release(lVar2);
  lVar2 = lVar7;
  func_0x00010bdc33c0();
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return (int)lVar2 == 1;
  }
  ___stack_chk_fail();
  _objc_retain();
  lVar2 = lVar7;
  func_0x00010bfd5000();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = lVar7;
    func_0x00010bf28a40(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar3;
    func_0x00010c094540();
    bVar1 = lVar8 == 0;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar7);
  return bVar1;
}



/* Entry: 108f571b4; end: 108f5729b;  */

bool FUN_108f571b4(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bfd5000();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_1;
    func_0x00010bf28a40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    bVar1 = lVar4 == 0;
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 108f5729c; end: 108f575ef;  */

undefined * FUN_108f5729c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar2 = param_1;
  func_0x00010bf981c0(param_1);
  func_0x00010bf71fe0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar2 = param_1;
  func_0x00010bf981a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(lVar2);
        }
        lVar15 = *(long *)(lStack_138 + lVar14 * 8);
        lVar7 = lVar15;
        func_0x00010bf44560();
        uVar1 = (int)lVar7 - 1;
        if ((uVar1 < 0x36) && ((0x38d7e75de7ffffU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
          lVar7 = *(long *)(&PTR_PTR_110aceb18)[uVar1];
          _objc_opt_class();
          if (lVar7 != 0) {
            lVar8 = lVar15;
            func_0x00010bf44380();
            _objc_retainAutoreleasedReturnValue();
            lVar9 = lVar8;
            func_0x00010c08fa60();
            _objc_release(lVar8);
            if (lVar9 != 0) {
              lVar9 = lVar15;
              func_0x00010bf44380(lVar15);
              _objc_retainAutoreleasedReturnValue();
              _objc_retain();
              _objc_alloc();
              lStack_f8 = 0;
              func_0x00010c008360();
              _objc_release(lVar9);
              lVar8 = lStack_f8;
              _objc_retain(lStack_f8);
              if (lVar8 == 0) {
                _objc_retain(lVar7);
                lVar12 = lVar7;
              }
              else {
                _objc_retainAutorelease(lVar8);
                lVar12 = 0;
              }
              _objc_release(lVar7);
              _objc_release(lVar8);
              _objc_retain(lVar8);
              _objc_release(lVar9);
              if ((lVar8 == 0) && (lVar12 != 0)) {
                lVar7 = lVar15;
                func_0x00010bf44560();
                puVar11 = puVar4;
                if (((int)lVar7 == 1) ||
                   (lVar7 = lVar15, func_0x00010bf44560(),
                   puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570, puVar11 = puVar5,
                   (int)lVar7 == 0x13)) {
                  func_0x00010befa120(puVar11,param_2,lVar12);
                }
                else {
                  func_0x00010bf44560(lVar15);
                  func_0x00010c0df760(puVar10,param_2,lVar15);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar3,param_2,lVar12,puVar10);
                  _objc_release(puVar10);
                }
              }
              _objc_release(lVar12);
              _objc_release(lVar8);
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar6 != lVar14);
      lVar6 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(lVar2);
  puVar11 = puVar4;
  func_0x00010bf529e0();
  if (puVar11 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar3,param_2,puVar4,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1020);
  }
  puVar11 = puVar5;
  func_0x00010bf529e0();
  if (puVar11 != (undefined *)0x0) {
    func_0x00010c1d0640(puVar3,param_2,puVar5,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d1038);
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    if (puRam0000000113730378 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126ae978;
      func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9b00,
                          &PTR____CFConstantStringClassReference_110dcb6d8,&PTR_DAT_1132b0d00,
                          &PTR_DAT_1132b0d18,1,0x10,0x1c);
      func_0x00010c2289e0();
      puRam0000000113730378 = puVar3;
    }
    return puRam0000000113730378;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return puVar3;
}



/* Entry: 108f575f0; end: 108f5766b; +[SDMAttachment descriptor] */

undefined * FUN_108f575f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9b00,
                        &PTR____CFConstantStringClassReference_110dcb6d8,&PTR_DAT_1132b0d00,
                        &PTR_DAT_1132b0d18,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam0000000113730378 = puVar1;
  }
  return puRam0000000113730378;
}



/* Entry: 108f5766c; end: 108f576d3; +[SDMCameoSnapResource descriptor] */

void FUN_108f5766c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9ba0,
                        &PTR____CFConstantStringClassReference_110f0f1b8,&PTR_DAT_1132b0d38,
                        &PTR_DAT_1132b0d50,1,0x10,0x1c);
    puRam0000000113730380 = puVar1;
  }
  return;
}



/* Entry: 108f576d4; end: 108f5773b; +[SDMContentAnalysis descriptor] */

void FUN_108f576d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9c40,
                        &PTR____CFConstantStringClassReference_110f0f1d8,&PTR_DAT_1132b0d70,
                        &PTR_DAT_1132b0d88,2,8,0x1c);
    puRam0000000113730388 = puVar1;
  }
  return;
}



/* Entry: 108f5773c; end: 108f577c7; +[SDMDuration descriptor] */

undefined * FUN_108f5773c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9ce0,
                        &PTR____CFConstantStringClassReference_110f0f1f8,&PTR_DAT_1132b0dd0,
                        &PTR_DAT_1132b0de8,4,0x20,0x1c);
    func_0x00010c229040();
    puRam0000000113730390 = puVar1;
  }
  return puRam0000000113730390;
}



/* Entry: 108f577c8; end: 108f578ab; +[SDMSnappable descriptor] */

void FUN_108f577c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9d80,
                        &PTR____CFConstantStringClassReference_110f0f218,&PTR_DAT_1132b0e68,
                        &PTR_DAT_1132b0e80,1,0x10,0x1c);
    puRam0000000113730398 = puVar1;
  }
  return;
}



/* Entry: 108f578ac; end: 108f578b7;  */

bool FUN_108f578ac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108f578b8; end: 108f5791f; +[SDMStoryMetadata descriptor] */

void FUN_108f578b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137303a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9e20,
                        &PTR____CFConstantStringClassReference_110ec8b18,&PTR_DAT_1132b0ea0,
                        &PTR_DAT_1132b0eb8,2,0x18,0x1c);
    puRam00000001137303a8 = puVar1;
  }
  return;
}



/* Entry: 108f57920; end: 108f57987; +[SDMGroupStory descriptor] */

void FUN_108f57920(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137303b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9e70,
                        &PTR____CFConstantStringClassReference_110ed87d8,&PTR_DAT_1132b0ea0,
                        &PTR_DAT_1132b0ef8,2,0x10,0x1c);
    puRam00000001137303b0 = puVar1;
  }
  return;
}



/* Entry: 108f57988; end: 108f579ef; +[SDMOurStory descriptor] */

void FUN_108f57988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137303b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9ec0,
                        &PTR____CFConstantStringClassReference_110eb9518,&PTR_DAT_1132b0ea0,
                        &PTR_DAT_1132b0f38,2,0x18,0x1c);
    puRam00000001137303b8 = puVar1;
  }
  return;
}



/* Entry: 108f579f0; end: 108f57a6b;  */

void FUN_108f579f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfe2ee0(param_1);
  uVar2 = param_1;
  func_0x00010c0b5940(param_1);
  _objc_release(param_1);
  func_0x000107c30948(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108f57a6c; end: 108f599f7;  */

void FUN_108f57a6c(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0f258;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f0f258,
                      &PTR____CFConstantStringClassReference_110f0f278,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 108f599f8; end: 108f59a5f; +[SCHideNavigationConfig descriptor] */

void FUN_108f599f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137303c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bd9f60,
                        &PTR____CFConstantStringClassReference_110f11a98,&PTR_DAT_1132b0f78,
                        &PTR_DAT_1132b0f90,4,0x10,0x1c);
    puRam00000001137303c0 = puVar1;
  }
  return;
}



/* Entry: 108f59a60; end: 108f59b43; +[SCSpotlightForUsWebUpsellConfig descriptor] */

void FUN_108f59a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137303c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bda000,
                        &PTR____CFConstantStringClassReference_110f11ab8,&PTR_DAT_1132b1010,
                        &PTR_DAT_1132b1028,1,0x10,0x1c);
    puRam00000001137303c8 = puVar1;
  }
  return;
}



/* Entry: 108f59b44; end: 108f59b4f;  */

bool FUN_108f59b44(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f59b50; end: 108f59c33; +[SCSpotlightProgressBarConfig descriptor] */

void FUN_108f59b50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137303d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bda0a0,
                        &PTR____CFConstantStringClassReference_110f11af8,&PTR_DAT_1132b1048,
                        &PTR_s_enabled_1132b1060,6,0x10,0x1c);
    puRam00000001137303d8 = puVar1;
  }
  return;
}



/* Entry: 108f59c34; end: 108f59c3f;  */

bool FUN_108f59c34(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f59c40; end: 108f59cbb;  */

undefined * FUN_108f59c40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137303e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f11b38,
                        &UNK_10dfb0d1c,&UNK_10dfb0d50,2,FUN_108f59cbc,0);
    do {
      if (puRam00000001137303e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137303e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137303e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137303e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137303e8;
}



/* Entry: 108f59cbc; end: 108f59cc7;  */

bool FUN_108f59cbc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f59cc8; end: 108f59d43;  */

undefined * FUN_108f59cc8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137303f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f11b58,
                        &UNK_10dfb0d58,&UNK_10dfb0de4,5,FUN_108f59d44,0);
    do {
      if (puRam00000001137303f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137303f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137303f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137303f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137303f0;
}



/* Entry: 108f59d44; end: 108f59d4f;  */

bool FUN_108f59d44(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108f59d50; end: 108f59dcb;  */

undefined * FUN_108f59d50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137303f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f11b78,
                        &UNK_10dfb0df8,&UNK_10dfb0e38,2,FUN_108f59dcc,0);
    do {
      if (puRam00000001137303f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137303f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137303f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137303f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137303f8;
}



/* Entry: 108f59dcc; end: 108f59dd7;  */

bool FUN_108f59dcc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f59dd8; end: 108f59e53;  */

undefined * FUN_108f59dd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730400 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f11b98,
                        &UNK_10dfb0e40,&UNK_10dfb0e78,2,FUN_108f59e54,0);
    do {
      if (puRam0000000113730400 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730400;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730400,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730400 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730400;
}



/* Entry: 108f59e54; end: 108f59e5f;  */

bool FUN_108f59e54(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f59e60; end: 108f59edb;  */

undefined * FUN_108f59e60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000113730408 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f11bb8,
                        &UNK_10dfb0e80,&UNK_10dfb0eb4,2,FUN_108f59edc,0);
    do {
      if (puRam0000000113730408 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000113730408;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113730408,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000113730408 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000113730408;
}



/* Entry: 108f59edc; end: 108f59ee7;  */

bool FUN_108f59edc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f59ee8; end: 108f59f73; +[SCSpotlightSendToCellSpotlightSendToCellConfig descriptor] */

undefined * FUN_108f59ee8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113730410 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bda140,
                        &PTR____CFConstantStringClassReference_110f11bd8,&PTR_DAT_1132b1120,
                        &PTR_DAT_1132b1158,0x12,0x78,0x1c);
    func_0x00010c229040();
    puRam0000000113730410 = puVar1;
  }
  return puRam0000000113730410;
}



/* Entry: 108f59f74; end: 108f5a093; -[SCCheetahSendToPreviewViewModel initWithViewStyle:title:subTitle:chatMessage:mediaViewInsets:mediaViewAspectRatio:] */

undefined1 *
FUN_108f59f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  puVar1 = &uStack_80;
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_78 = PTR_PTR_1126ff510;
  uStack_80 = param_6;
  _objc_msgSendSuper2(&uStack_80,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x38) = param_2;
    *(undefined8 *)((long)puVar1 + 0x40) = param_3;
    *(undefined8 *)((long)puVar1 + 0x48) = param_4;
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5a094; end: 108f5a0b7; -[SCCheetahSendToPreviewViewModel copyWithZone:] */

undefined8 FUN_108f5a094(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5a0b8; end: 108f5a1e7; -[SCCheetahSendToPreviewViewModel hash] */

long * FUN_108f5a0b8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  double dVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ushort uVar11;
  double dVar12;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  plVar6 = &lStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *(long *)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  lStack_70 = -lVar8;
  if (-1 < lVar8) {
    lStack_70 = lVar8;
  }
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uStack_68 = uVar5;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar9 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_50 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_48 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar9 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_40 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_38 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar9 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar9 = (uVar9 ^ uVar9 >> 0x1f) * 0x15;
  uStack_30 = (uVar9 ^ uVar9 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_58 = uVar5;
  func_0x000107c3191c(&lStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar6 == (long *)param_3) {
LAB_108f5a2e8:
    puVar10 = (undefined1 *)0x1;
  }
  else {
    puVar10 = (undefined1 *)0x0;
    if ((plVar6 == (long *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5a2f4;
    puVar10 = (undefined1 *)plVar6;
    _objc_opt_class(plVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar10);
    if ((((ulong)puVar7 & 1) != 0) &&
       ((*(long *)((long)plVar6 + 8) == *(long *)(param_3 + 8) &&
        (uVar11 = NEON_uminv(CONCAT26(-(ushort)(*(double *)((long)plVar6 + 0x48) ==
                                               *(double *)(param_3 + 0x48)),
                                      CONCAT24(-(ushort)(*(double *)((long)plVar6 + 0x40) ==
                                                        *(double *)(param_3 + 0x40)),
                                               CONCAT22(-(ushort)(*(double *)((long)plVar6 + 0x38)
                                                                 == *(double *)(param_3 + 0x38)),
                                                        -(ushort)(*(double *)((long)plVar6 + 0x30)
                                                                 == *(double *)(param_3 + 0x30))))),
                             2), (uVar11 & 1) != 0)))) {
      dVar12 = ABS(*(double *)((long)plVar6 + 0x28) - *(double *)(param_3 + 0x28));
      dVar2 = ABS(*(double *)((long)plVar6 + 0x28) + *(double *)(param_3 + 0x28)) *
              2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar12) && (bVar3 = false, !NAN(dVar12) && !NAN(dVar2))) {
        bVar3 = dVar12 < dVar2;
      }
      if (((bVar3) &&
          ((lVar8 = *(long *)((long)plVar6 + 0x10), lVar8 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar8 != 0)))) &&
         ((lVar8 = *(long *)((long)plVar6 + 0x18), lVar8 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar8 != 0)))) {
        puVar10 = *(undefined1 **)((long)plVar6 + 0x20);
        if (puVar10 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_108f5a2f4;
        }
        goto LAB_108f5a2e8;
      }
    }
    puVar10 = (undefined1 *)0x0;
  }
LAB_108f5a2f4:
  _objc_release(param_3);
  return (long *)puVar10;
}



/* Entry: 108f5a1e8; end: 108f5a30f; -[SCCheetahSendToPreviewViewModel isEqual:] */

long FUN_108f5a1e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  double dVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ushort uVar6;
  double dVar7;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5a2e8:
    lVar5 = 1;
  }
  else {
    lVar5 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5a2f4;
    uVar3 = param_1;
    _objc_opt_class(param_1);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar3);
    if (((uVar4 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (uVar6 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x48) ==
                                              *(double *)(param_3 + 0x48)),
                                     CONCAT24(-(ushort)(*(double *)(param_1 + 0x40) ==
                                                       *(double *)(param_3 + 0x40)),
                                              CONCAT22(-(ushort)(*(double *)(param_1 + 0x38) ==
                                                                *(double *)(param_3 + 0x38)),
                                                       -(ushort)(*(double *)(param_1 + 0x30) ==
                                                                *(double *)(param_3 + 0x30))))),2),
        (uVar6 & 1) != 0)))) {
      dVar7 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar1 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar1))) {
        bVar2 = dVar7 < dVar1;
      }
      if (((bVar2) &&
          ((lVar5 = *(long *)(param_1 + 0x10), lVar5 == *(long *)(param_3 + 0x10) ||
           (func_0x00010c071ae0(), (int)lVar5 != 0)))) &&
         ((lVar5 = *(long *)(param_1 + 0x18), lVar5 == *(long *)(param_3 + 0x18) ||
          (func_0x00010c071ae0(), (int)lVar5 != 0)))) {
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_108f5a2f4;
        }
        goto LAB_108f5a2e8;
      }
    }
    lVar5 = 0;
  }
LAB_108f5a2f4:
  _objc_release(param_3);
  return lVar5;
}



/* Entry: 108f5a310; end: 108f5a317; -[SCCheetahSendToPreviewViewModel viewStyle] */

undefined8 FUN_108f5a310(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5a318; end: 108f5a31f; -[SCCheetahSendToPreviewViewModel title] */

undefined8 FUN_108f5a318(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5a320; end: 108f5a327; -[SCCheetahSendToPreviewViewModel subTitle] */

undefined8 FUN_108f5a320(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5a328; end: 108f5a32f; -[SCCheetahSendToPreviewViewModel chatMessage] */

undefined8 FUN_108f5a328(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5a330; end: 108f5a33b; -[SCCheetahSendToPreviewViewModel mediaViewInsets] */

undefined8 FUN_108f5a330(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5a33c; end: 108f5a343; -[SCCheetahSendToPreviewViewModel mediaViewAspectRatio] */

undefined8 FUN_108f5a33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5a344; end: 108f5a37f; -[SCCheetahSendToPreviewViewModel .cxx_destruct] */

void FUN_108f5a344(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f5a380; end: 108f5a52b; -[SCCheetahSendToStoryDataModel initWithLabelText:subtext:officialBadgeType:officialFriendmoji:itemType:itemId:mischiefId:unselectedImage:timestamp:] */

undefined1 *
FUN_108f5a380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ff518;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f5a52c; end: 108f5a54f; -[SCCheetahSendToStoryDataModel copyWithZone:] */

undefined8 FUN_108f5a52c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f5a550; end: 108f5a617; -[SCCheetahSendToStoryDataModel hash] */

undefined8 * FUN_108f5a550(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_70;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x18);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  lStack_50 = -lVar5;
  if (-1 < lVar5) {
    lStack_50 = lVar5;
  }
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_70,9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_108f5a730:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f5a73c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x30);
            if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x38);
              if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x40);
                if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  puVar6 = *(undefined1 **)((long)puVar3 + 0x48);
                  if (puVar6 != *(undefined1 **)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_108f5a73c;
                  }
                  goto LAB_108f5a730;
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f5a73c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f5a618; end: 108f5a757; -[SCCheetahSendToStoryDataModel isEqual:] */

long FUN_108f5a618(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f5a730:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f5a73c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if (lVar3 != *(long *)(param_3 + 0x48)) {
                    func_0x00010c071ae0();
                    goto LAB_108f5a73c;
                  }
                  goto LAB_108f5a730;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f5a73c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f5a758; end: 108f5a75f; -[SCCheetahSendToStoryDataModel labelText] */

undefined8 FUN_108f5a758(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f5a760; end: 108f5a767; -[SCCheetahSendToStoryDataModel subtext] */

undefined8 FUN_108f5a760(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f5a768; end: 108f5a76f; -[SCCheetahSendToStoryDataModel officialBadgeType] */

undefined8 FUN_108f5a768(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f5a770; end: 108f5a777; -[SCCheetahSendToStoryDataModel officialFriendmoji] */

undefined8 FUN_108f5a770(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f5a778; end: 108f5a77f; -[SCCheetahSendToStoryDataModel itemType] */

undefined8 FUN_108f5a778(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f5a780; end: 108f5a787; -[SCCheetahSendToStoryDataModel itemId] */

undefined8 FUN_108f5a780(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108f5a788; end: 108f5a78f; -[SCCheetahSendToStoryDataModel mischiefId] */

undefined8 FUN_108f5a788(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108f5a790; end: 108f5a797; -[SCCheetahSendToStoryDataModel unselectedImage] */

undefined8 FUN_108f5a790(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108f5a798; end: 108f5a79f; -[SCCheetahSendToStoryDataModel timestamp] */

undefined8 FUN_108f5a798(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 108f5a7a0; end: 108f5a80b; -[SCCheetahSendToStoryDataModel .cxx_destruct] */

void FUN_108f5a7a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f5a80c; end: 108f5a853; -[SCSendToCreatorsConfigurableDataModel initWithIsCreateHighlightSelected:] */

void FUN_108f5a80c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ff520;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}


