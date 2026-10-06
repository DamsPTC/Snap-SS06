/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106976c10; end: 106976c27; -[SCSelectionStoryObservableRepositoryImpl _setShowBestOfSpectacles:] */

void FUN_106976c10(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0xf8) == param_3) {
    return;
  }
  *(char *)(param_1 + 0xf8) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106976c28; end: 106976cdf; -[SCSelectionStoryObservableRepositoryImpl setAllowPostingToMapStories:] */

void FUN_106976c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106976ce0; end: 106976d13;  */

void FUN_106976ce0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea1c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106976d14; end: 106976d2b; -[SCSelectionStoryObservableRepositoryImpl _setAllowPostingToMapStories:] */

void FUN_106976d14(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x108) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x108) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106976d2c; end: 106976de3; -[SCSelectionStoryObservableRepositoryImpl setAllowPostingToPublicStories:] */

void FUN_106976d2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106976de4; end: 106976e17;  */

void FUN_106976de4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea1cc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106976e18; end: 106976e1f; -[SCSelectionStoryObservableRepositoryImpl _setAllowPostingToPublicStories:] */

void FUN_106976e18(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x161) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106976e20; end: 106976ed7; -[SCSelectionStoryObservableRepositoryImpl setAllowSavingHighlights:] */

void FUN_106976e20(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106976ed8; end: 106976f0b;  */

void FUN_106976ed8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea1ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106976f0c; end: 106976f13; -[SCSelectionStoryObservableRepositoryImpl _setAllowSavingHighlights:] */

void FUN_106976f0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x162) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106976f14; end: 106976f17; -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forSelectionStory:] */

void FUN_106976f14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setCustomTTL_forSelectionStory__1125866b0);
  return;
}



/* Entry: 106976f18; end: 106976fd3; -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forMyStoryType:] */

void FUN_106976f18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_50,auStack_38);
  uStack_48 = param_4;
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106976fd4; end: 106977093;  */

void FUN_106976fd4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 2) {
      if (*(long *)(param_1 + 0x30) == *(long *)(lVar1 + 0x130)) goto LAB_106977080;
      *(long *)(lVar1 + 0x130) = *(long *)(param_1 + 0x30);
    }
    else if (lVar3 == 1) {
      if (*(long *)(param_1 + 0x30) == *(long *)(lVar1 + 0x128)) goto LAB_106977080;
      *(long *)(lVar1 + 0x128) = *(long *)(param_1 + 0x30);
    }
    else if (lVar3 == 0) {
      if (*(long *)(param_1 + 0x30) == *(long *)(lVar1 + 0x120)) goto LAB_106977080;
      *(long *)(lVar1 + 0x120) = *(long *)(param_1 + 0x30);
    }
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188d60();
    _objc_release(uVar2);
    func_0x00010bedf920(lVar1);
  }
LAB_106977080:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106977094; end: 106977173; -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forBusinessStoryId:] */

void FUN_106977094(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_4);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 106977174; end: 10697720f;  */

void FUN_106977174(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x150),param_2,puVar2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188cc0();
    _objc_release(uVar3);
    func_0x00010bedf920(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106977210; end: 1069772ef; -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forCustomStoryPublicationId:] */

void FUN_106977210(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_4);
  uStack_40 = param_3;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1069772f0; end: 10697738b;  */

void FUN_1069772f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined8 *)(param_1 + 0x30)
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x148),param_2,puVar2,
                        *(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c188d00();
    _objc_release(uVar3);
    func_0x00010bedf920(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697738c; end: 10697745b; -[SCSelectionStoryObservableRepositoryImpl _setCustomTTL:forSelectionStory:] */

void FUN_10697738c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10697745c;
  puStack_28 = &UNK_11094e360;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106977468;
  puStack_58 = &UNK_11094e390;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x106977478;
  puStack_88 = &UNK_11094e3c0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x106977488;
  puStack_b8 = &UNK_11094e3f0;
  uStack_b0 = param_1;
  uStack_a8 = param_3;
  uStack_80 = param_1;
  uStack_78 = param_3;
  uStack_50 = param_1;
  uStack_48 = param_3;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x00010c0bee40(param_4,param_2,&puStack_40,0,&puStack_70,&puStack_a0,0,0,&puStack_d0);
  return;
}



/* Entry: 10697745c; end: 106977497;  */

void FUN_10697745c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c188d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCustomTTL_forMyStoryType__11263fd68,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106977498; end: 1069774af; -[SCSelectionStoryObservableRepositoryImpl _setMyStoryCustomTTLIsAvailable:] */

void FUN_106977498(long param_1,undefined8 param_2,uint param_3)

{
  if (*(byte *)(param_1 + 0x119) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x119) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 1069774b0; end: 106977557; -[SCSelectionStoryObservableRepositoryImpl didSetMyStoryAudience] */

void FUN_1069774b0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106977558; end: 106977583;  */

void FUN_106977558(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedf920();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106977584; end: 1069775a3; -[SCSelectionStoryObservableRepositoryImpl warmUp] */

void FUN_106977584(long param_1)

{
  func_0x00010bf57500(*(undefined8 *)(param_1 + 200));
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}



/* Entry: 1069775a4; end: 1069775f3; -[SCSelectionStoryObservableRepositoryImpl _showMyStory] */

byte FUN_1069775a4(long param_1)

{
  long lVar1;
  byte bVar2;
  
  if (*(long *)(param_1 + 0xd8) == 0) {
    bVar2 = *(byte *)(param_1 + 0x161);
  }
  else {
    bVar2 = 1;
  }
  lVar1 = param_1;
  func_0x00010be43d80();
  if (((int)lVar1 != 0) && (func_0x00010be34780(), (int)param_1 == 0)) {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Entry: 1069775f4; end: 106977643; -[SCSelectionStoryObservableRepositoryImpl _showMyStoryFriendsOnly] */

uint FUN_1069775f4(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = param_1;
  func_0x00010be43d80();
  if ((int)lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x00010be34780(param_1);
    uVar3 = (uint)lVar2 ^ 1;
  }
  uVar1 = 0;
  if (*(long *)(param_1 + 0xd8) != 2) {
    uVar1 = uVar3;
  }
  uVar3 = 1;
  if (*(long *)(param_1 + 0xd8) != 0) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 106977644; end: 106977687; -[SCSelectionStoryObservableRepositoryImpl _showMyStoryCustom] */

void FUN_106977644(int param_1)

{
  func_0x00010be43d80();
  if (param_1 != 0) {
    func_0x00010be34780();
  }
  return;
}



/* Entry: 106977688; end: 1069776eb; -[SCSelectionStoryObservableRepositoryImpl _isSnapProUser] */

bool FUN_106977688(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 0;
}



/* Entry: 1069776ec; end: 10697772b; -[SCSelectionStoryObservableRepositoryImpl _hasSnapProStandardProfile] */

undefined8 FUN_1069776ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdc4a0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10697772c; end: 10697777b; -[SCSelectionStoryObservableRepositoryImpl _isCreateHighlightEnabled] */

byte FUN_10697772c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c239b40();
  if ((uVar2 & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0x162);
  }
  else {
    bVar3 = 1;
  }
  _objc_release(uVar1);
  return bVar3 & 1;
}



/* Entry: 10697777c; end: 10697777f; -[SCSelectionStoryObservableRepositoryImpl fetchFromRemote:] */

void FUN_10697777c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15aa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_selectionStoryObservable_1126344c0);
  return;
}



/* Entry: 106977780; end: 106977783; -[SCSelectionStoryObservableRepositoryImpl sync] */

void FUN_106977780(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bedf930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateSelectionStories_1125957f0);
  return;
}



/* Entry: 106977784; end: 106977827; -[SCSelectionStoryObservableRepositoryImpl provideSnapMapSelectionStoryIfAllowed] */

void FUN_106977784(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((((*(byte *)(param_1 + 0x108) & 1) == 0) && (*(char *)(param_1 + 0xf8) != '\x01')) ||
     (*(char *)(param_1 + 0x161) != '\x01')) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c0e58;
    _objc_alloc(PTR_PTR_1126c0e58);
    func_0x00010c04f280();
    puVar2 = puVar1;
    func_0x00010853f454();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x0001069716dc();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106977828; end: 106977adb; -[SCSelectionStoryObservableRepositoryImpl .cxx_destruct] */

void FUN_106977828(long param_1)

{
  _objc_storeStrong(param_1 + 400,0);
  _objc_storeStrong(param_1 + 0x180,0);
  _objc_storeStrong(param_1 + 0x178,0);
  _objc_storeStrong(param_1 + 0x170,0);
  _objc_storeStrong(param_1 + 0x168,0);
  _objc_storeStrong(param_1 + 0x158,0);
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106977adc; end: 106977ae3;  */

undefined8 FUN_106977adc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c122a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15ab60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 106977ae4; end: 106977ceb;  */

bool FUN_106977ae4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_2);
  func_0x00010bf655e0(0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c08a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = puVar1;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c08a4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf655e0(0,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010c08a460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = puVar1;
  if (puVar2 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x00010c08a460(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08a480(param_2);
  uVar5 = param_2;
  func_0x00010bf5e5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c08a440(param_2);
  uVar5 = param_2;
  func_0x00010bf5e5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar6 = puVar1;
  func_0x00010bf64e60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar7 = puVar2;
  func_0x00010bf433a0();
  puVar8 = puVar6;
  func_0x00010bf433a0(puVar6);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_1);
  return puVar7 == (undefined *)0xffffffffffffffff || puVar8 == (undefined *)0xffffffffffffffff;
}



/* Entry: 106977cec; end: 106977e8f;  */

void FUN_106977cec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010c08a4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c08a4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_1;
  func_0x00010c08a460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c08a460(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  puVar3 = puVar1;
  func_0x00010c296f80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd6d18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106977e90; end: 106977f53; -[SCSelectionStoryRanker initWithParameters:circumstanceEngine:] */

undefined1 * FUN_106977e90(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3e88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(long *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    uVar3 = param_4;
    func_0x000108f3dfd8();
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)((long)puVar1 + 8) = 0;
    }
    else {
      lVar4 = param_3;
      func_0x00010c0ee3c0();
      _objc_retainAutoreleasedReturnValue();
      *(bool *)((long)puVar1 + 8) = lVar4 != 0;
      _objc_release();
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106977f54; end: 10697802f; -[SCSelectionStoryRanker sortedSelectionStoryRankingDataItemsByLastTimePostedTimestamp:] */

void FUN_106977f54(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c020a80();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010c246cc0(param_3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar2 = puVar1;
    func_0x00010c0f3840();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c114340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246f00(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar3 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106978030; end: 10697809f; -[SCSelectionStoryRanker getRankedPrivateStories] */

void FUN_106978030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c114340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246f00(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1069780a0; end: 10697810f; -[SCSelectionStoryRanker getRankedMyStories] */

void FUN_1069780a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d4ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c246f00(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106978110; end: 10697821f; -[SCSelectionStoryRanker getMultiplePostersStories] */

void FUN_106978110(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010c0f3840(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22c020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010befa160(puVar1,param_2,lVar3);
  lVar2 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf43160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar4 != 0) {
    func_0x00010befa120(puVar1,param_2,lVar4);
  }
  lVar2 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c0bae80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if ((lVar5 != 0) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
    func_0x00010befa120(puVar1,param_2,lVar5);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106978220; end: 1069782c3; -[SCSelectionStoryRanker getNumberOfElementsToBeAboveTheFoldWithAboveTheFoldStoriesCandidates:topStories:] */

ulong FUN_106978220(ulong param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0c27e0();
  _objc_release(param_1);
  uVar2 = param_4;
  func_0x00010bf529e0();
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  uVar3 = param_4;
  func_0x00010bf529e0();
  _objc_release(param_4);
  uVar2 = param_3;
  func_0x00010bf529e0();
  _objc_release(param_3);
  if (uVar1 - uVar3 <= uVar2) {
    uVar2 = uVar1 - uVar3;
  }
  return uVar2;
}



/* Entry: 1069782c4; end: 106978903; -[SCSelectionStoryRanker getRankedStoriesAndThreshold] */

undefined * FUN_1069782c4(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  long lVar24;
  int iVar25;
  undefined *puVar26;
  ulong uVar27;
  
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bfc9560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar1;
    func_0x00010bfb1920(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar3);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c0bae80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0bae80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar2);
      _objc_release(uVar5);
    }
  }
  uVar3 = param_1;
  func_0x00010bfc9580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c0d3c80();
  _objc_release(uVar3);
  uVar3 = uVar6;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = uVar6;
    func_0x00010bfb1920(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(uVar3);
    uVar3 = uVar6;
    func_0x00010bfb1920(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d360(uVar6);
    _objc_release(uVar3);
  }
  uVar3 = param_1;
  func_0x00010c0f3840();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010bf25240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar7 != 0) {
    func_0x00010befa160(puVar2);
  }
  uVar3 = uVar6;
  func_0x00010c0d3c80();
  uVar8 = uVar1;
  func_0x00010bf529e0();
  if (1 < uVar8) {
    uVar8 = uVar1;
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(uVar3);
    _objc_release(uVar8);
  }
  uVar9 = param_1;
  func_0x00010bfc7b60();
  _objc_retainAutoreleasedReturnValue();
  puVar26 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar3);
  uVar8 = uVar3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar3);
      }
      iVar25 = (int)*(undefined8 *)(uVar27 * 8);
      uVar11 = param_1;
      func_0x00010c0f3840();
      _objc_retainAutoreleasedReturnValue();
      param_2 = uVar11;
      FUN_106977ae4();
      puVar12 = puVar26;
      if (iVar25 == 0) {
        puVar12 = puVar10;
      }
      _objc_retain(puVar12);
      _objc_release(uVar11);
      func_0x00010befa120(puVar12);
      _objc_release(puVar12);
      uVar27 = uVar27 + 1;
    } while (uVar8 != uVar27);
    uVar8 = uVar3;
    func_0x00010bf52a60();
  }
  _objc_release(uVar3);
  puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar9);
  uVar8 = uVar9;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  while (uVar8 != 0) {
    uVar27 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(uVar9);
      }
      iVar25 = (int)*(undefined8 *)(uVar27 * 8);
      uVar11 = param_1;
      func_0x00010c0f3840();
      _objc_retainAutoreleasedReturnValue();
      param_2 = uVar11;
      FUN_106977ae4();
      puVar14 = puVar12;
      if (iVar25 == 0) {
        puVar14 = puVar13;
      }
      _objc_retain(puVar14);
      _objc_release(uVar11);
      func_0x00010befa120(puVar14);
      _objc_release(puVar14);
      uVar27 = uVar27 + 1;
    } while (uVar8 != uVar27);
    uVar8 = uVar9;
    func_0x00010bf52a60();
  }
  _objc_release(uVar9);
  puVar14 = puVar26;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar14;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc8240(param_1);
  func_0x00010bf529e0(puVar14);
  puVar17 = puVar16;
  func_0x00010c25e980(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c25e980(puVar16);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar2;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar15;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar20);
  puVar20 = puVar19;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR_PTR_1126cf508;
  _objc_alloc();
  func_0x00010bf529e0(puVar19);
  puVar23 = puVar20;
  func_0x00010c03fd20();
  _objc_release(puVar20);
  _objc_release(puVar21);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar10);
  _objc_release(puVar26);
  _objc_release(uVar9);
  _objc_release(uVar3);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar22);
    return puVar22;
  }
  ___stack_chk_fail();
  _objc_retain(puVar23);
  FUN_106977cec();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar23;
  FUN_106977cec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar23);
  if (param_2 == 0 && puVar2 == (undefined *)0x0) {
    puVar26 = (undefined *)0x0;
  }
  else if ((param_2 == 0) || (puVar2 != (undefined *)0x0)) {
    if ((param_2 == 0) && (puVar2 != (undefined *)0x0)) {
      puVar26 = (undefined *)0x1;
    }
    else {
      puVar26 = puVar2;
      func_0x00010bf433a0(puVar2);
    }
  }
  else {
    puVar26 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  return puVar26;
}



/* Entry: 106978904; end: 10697891b;  */

long FUN_106978904(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  FUN_106977cec();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  FUN_106977cec();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (param_2 == 0 && lVar1 == 0) {
    lVar2 = 0;
  }
  else if ((param_2 == 0) || (lVar1 != 0)) {
    if ((param_2 == 0) && (lVar1 != 0)) {
      lVar2 = 1;
    }
    else {
      lVar2 = lVar1;
      func_0x00010bf433a0(lVar1);
    }
  }
  else {
    lVar2 = -1;
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2;
}



/* Entry: 10697891c; end: 106978923; -[SCSelectionStoryRanker parameters] */

undefined8 FUN_10697891c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106978924; end: 106978953; -[SCSelectionStoryRanker setParameters:] */

void FUN_106978924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106978954; end: 10697895f; -[SCSelectionStoryRanker rankTaggedMapStoryAboveFold] */

byte FUN_106978954(long param_1)

{
  return *(byte *)(param_1 + 8) & 1;
}



/* Entry: 106978960; end: 106978967; -[SCSelectionStoryRanker setRankTaggedMapStoryAboveFold:] */

void FUN_106978960(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 106978968; end: 106978973; -[SCSelectionStoryRanker .cxx_destruct] */

void FUN_106978968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106978974; end: 1069789bb;  */

void FUN_106978974(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c067f80(param_1,param_2,&PTR____CFConstantStringClassReference_110e66318);
  return;
}



/* Entry: 1069789bc; end: 1069789cf;  */

void FUN_1069789bc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1add50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setInteger_forKey__112649178,param_1,
             &PTR____CFConstantStringClassReference_110e66318);
  return;
}



/* Entry: 1069789d0; end: 106978a53;  */

double FUN_1069789d0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf5a820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ab40();
  dVar2 = param_1;
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c246f40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0d4780(uVar1);
  _objc_release(uVar1);
  if (dVar2 <= param_1) {
    dVar2 = param_1;
  }
  return dVar2;
}



/* Entry: 106978a54; end: 10697969b;  */

void FUN_106978a54(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,ulong param_5,
                  long param_6,long param_7,int param_8,long param_9,long param_10)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  undefined *puVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined *puStack_3d8;
  long lStack_3c0;
  long lStack_3b8;
  
  lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  func_0x00010bf529e0(puVar9);
  puStack_3d8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  dVar35 = 0.0;
  _objc_retain(puVar9);
  puVar11 = puVar9;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  uVar31 = param_5;
  while (puVar11 != (undefined *)0x0) {
    puVar33 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar9);
      }
      lVar32 = *(long *)((long)puVar33 * 8);
      lVar12 = lVar32;
      func_0x00010c27dd80();
      if ((((uVar31 & 1) != 0) || (lVar12 != 7)) &&
         (lVar12 = lVar32, func_0x00010c1143e0(), lVar12 != 3)) {
        _objc_retain(lVar32);
        _objc_retain(param_2);
        _objc_retain(param_6);
        _objc_retain(param_7);
        lVar12 = lVar32;
        func_0x00010c246f40(lVar32);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b360();
        dVar34 = dVar35;
        _objc_release(lVar12);
        lVar12 = lVar32;
        func_0x00010c246f40();
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c29ee80();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar12);
        if ((param_7 == 0) ||
           ((lVar12 = lVar32, func_0x00010c27dd80(), lVar12 != 6 &&
            (lVar12 = lVar32, func_0x00010c27dd80(), lVar12 != 10)))) {
          if (param_6 == 0) {
            bVar5 = false;
            bVar6 = false;
            bVar4 = false;
            lStack_3c0 = 0x2d0;
            lStack_3b8 = 0xa8;
          }
          else {
            lStack_3b8 = param_6;
            func_0x00010c2bd2e0();
            lStack_3b8 = lStack_3b8 * 0x18;
            lStack_3c0 = param_6;
            func_0x00010c2bd320();
            bVar5 = false;
            bVar6 = false;
            bVar4 = false;
            lStack_3c0 = lStack_3c0 * 0x18;
          }
        }
        else {
          lVar12 = param_7;
          func_0x00010c2bd2e0();
          if (lVar12 < 0) {
            lStack_3b8 = 0xa8;
          }
          else {
            lStack_3b8 = param_7;
            func_0x00010c2bd2e0();
            lStack_3b8 = lStack_3b8 * 0x18;
          }
          lVar12 = param_7;
          func_0x00010c2bd320();
          if (lVar12 < 0) {
            lStack_3c0 = 0x2d0;
          }
          else {
            lStack_3c0 = param_7;
            func_0x00010c2bd320();
            lStack_3c0 = lStack_3c0 * 0x18;
          }
          lVar12 = param_7;
          func_0x00010c2bd300();
          bVar4 = false;
          if (-1 < lVar12) {
            dVar34 = dVar35 / 1000.0;
            if (0 < (long)dVar34) {
              dVar35 = (double)(ulong)(long)dVar34;
              func_0x000109021670();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c26f380(param_2);
              lVar30 = param_7;
              func_0x00010c2bd300();
              dVar34 = (double)(ulong)(lVar30 * 0x15180);
              bVar4 = dVar35 < dVar34;
              _objc_release(lVar12);
            }
          }
          lVar12 = param_7;
          func_0x00010c29ec00();
          if ((lVar12 < 0) || (lVar12 = lVar13, func_0x00010bf529e0(), lVar12 == 0)) {
            bVar5 = false;
          }
          else {
            lVar30 = param_7;
            func_0x00010c29ec00();
            _objc_retain(param_2);
            lVar14 = lVar13;
            func_0x00010c246ca0();
            _objc_retainAutoreleasedReturnValue();
            dVar34 = 0.0;
            _objc_retain();
            lVar15 = lVar14;
            func_0x00010bf52a60();
            lVar12 = lRam0000000000000000;
            if (lVar15 != 0) {
              uVar31 = 0;
              do {
                lVar27 = 0;
                do {
                  if (lRam0000000000000000 != lVar12) {
                    _objc_enumerationMutation(lVar14);
                  }
                  uVar16 = *(undefined8 *)(lVar27 * 8);
                  func_0x00010bf885a0(uVar16);
                  dVar35 = dVar34 / 1000.0;
                  func_0x000109021670();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26f380(param_2);
                  _objc_release(uVar16);
                  dVar34 = (double)((uVar31 + 1) * 0x15180);
                  bVar5 = false;
                  if (((double)(uVar31 * 0x15180) <= dVar35) &&
                     (bVar5 = false, !NAN(dVar35) && !NAN(dVar34))) {
                    bVar5 = dVar35 < dVar34;
                  }
                  if (bVar5) {
                    uVar31 = uVar31 + 1;
                  }
                  bVar5 = lVar30 <= (long)uVar31;
                  if ((6 < uVar31) || (lVar30 <= (long)uVar31)) goto LAB_106978ed0;
                  lVar27 = lVar27 + 1;
                } while (lVar15 != lVar27);
                lVar15 = lVar14;
                func_0x00010bf52a60();
              } while (lVar15 != 0);
            }
            bVar5 = false;
LAB_106978ed0:
            _objc_release(lVar14);
            _objc_release(param_2);
            _objc_release(lVar14);
          }
          lVar12 = param_7;
          func_0x00010c29edc0();
          if ((lVar12 < 0) || (lVar12 = lVar13, func_0x00010bf529e0(), lVar12 == 0)) {
            bVar6 = false;
          }
          else {
            lVar30 = param_7;
            func_0x00010c29edc0();
            _objc_retain(param_2);
            lVar14 = lVar13;
            func_0x00010c246ca0();
            _objc_retainAutoreleasedReturnValue();
            dVar34 = 0.0;
            lVar15 = lVar14;
            func_0x00010bf52a60();
            lVar12 = lRam0000000000000000;
            if (lVar15 == 0) {
              bVar6 = false;
            }
            else {
              lVar27 = 0;
              do {
                lVar28 = 0;
                lVar1 = lVar15 + lVar27;
                do {
                  lVar27 = lVar27 + 1;
                  if (lRam0000000000000000 != lVar12) {
                    _objc_enumerationMutation(lVar14);
                  }
                  uVar16 = *(undefined8 *)(lVar28 * 8);
                  func_0x00010bf885a0(uVar16);
                  dVar35 = dVar34 / 1000.0;
                  func_0x000109021670();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c26f380(param_2);
                  dVar34 = dVar35;
                  _objc_release(uVar16);
                  bVar6 = dVar35 < 86400.0;
                  if (!bVar6 || lVar30 <= lVar27) goto LAB_10697903c;
                  lVar28 = lVar28 + 1;
                } while (lVar15 != lVar28);
                lVar15 = lVar14;
                func_0x00010bf52a60();
                lVar27 = lVar1;
              } while (lVar15 != 0);
              bVar6 = false;
            }
LAB_10697903c:
            _objc_release(param_2);
            _objc_release(lVar14);
          }
        }
        lVar12 = lVar32;
        func_0x00010bf5a820(lVar32);
        _objc_retainAutoreleasedReturnValue();
        lVar30 = lVar12;
        func_0x00010bf5ab40();
        func_0x000109021670();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(param_2);
        dVar35 = dVar34;
        _objc_release(lVar30);
        _objc_release(lVar12);
        lVar12 = lVar32;
        func_0x00010c246f40(lVar32);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d4780();
        dVar36 = dVar35;
        _objc_release(lVar12);
        if (dVar35 <= 0.0) {
          bVar7 = false;
        }
        else {
          lVar12 = lVar32;
          func_0x00010c246f40(lVar32);
          _objc_retainAutoreleasedReturnValue();
          lVar30 = lVar12;
          func_0x00010c0d4780();
          func_0x000109021670();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f380(param_2);
          bVar7 = dVar36 < (double)(ulong)(lStack_3c0 * 0xe10);
          _objc_release(lVar30);
          _objc_release(lVar12);
        }
        dVar35 = (double)(ulong)(lStack_3b8 * 0xe10);
        bVar8 = dVar35 <= dVar34;
        _objc_release(lVar13);
        _objc_release(param_7);
        _objc_release(param_6);
        _objc_release(param_2);
        _objc_release(lVar32);
        puVar18 = puStack_3d8;
        if (!bVar6 && ((!bVar5 && (!bVar7 && !bVar4)) && bVar8)) {
          puVar18 = puVar10;
        }
        func_0x00010befa120(puVar18);
        uVar31 = param_5 & 0xffffffff;
      }
      puVar33 = puVar33 + 1;
    } while (puVar33 != puVar11);
    puVar11 = puVar9;
    func_0x00010bf52a60();
  }
  _objc_release(puVar9);
  _objc_retain(param_9);
  _objc_retain(param_10);
  if (((((param_9 == 0) || (param_10 == 0)) || (lVar17 = param_9, func_0x00010c0cd800(), lVar17 < 0)
       ) || ((lVar17 = param_9, func_0x00010c0c23a0(), lVar17 < 0 ||
             (lVar17 = param_10, func_0x00010c0cd800(), lVar17 < 0)))) ||
     (lVar17 = param_10, func_0x00010c0c23a0(), lVar17 < 0)) {
    _objc_release(param_10);
    _objc_release(param_9);
    puVar11 = (undefined *)0x5;
    if (param_8 == 0) {
      puVar11 = (undefined *)0x6;
    }
    puVar33 = puStack_3d8;
    func_0x00010bf529e0();
    if (puVar33 <= puVar11) goto joined_r0x000106979690;
    func_0x00010c246ba0(puStack_3d8);
    func_0x00010bf529e0(puStack_3d8);
    puVar11 = puStack_3d8;
    func_0x00010c25e980(puStack_3d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar10);
    func_0x00010c12d520(puStack_3d8);
  }
  else {
    _objc_release(param_10);
    _objc_release(param_9);
    lVar17 = param_9;
    func_0x00010c0cd800();
    lVar12 = param_9;
    func_0x00010c0c23a0();
    lVar32 = param_10;
    func_0x00010c0cd800();
    lVar13 = param_10;
    func_0x00010c0c23a0();
    puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246ba0();
    puVar18 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c246ba0();
    puVar19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar20 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(puVar11);
    puVar33 = puVar11;
    func_0x00010bf52a60();
    lVar30 = lRam0000000000000000;
    while (puVar33 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      lVar14 = lVar17;
      do {
        if (lRam0000000000000000 != lVar30) {
          _objc_enumerationMutation(puVar11);
        }
        lVar27 = *(long *)((long)puVar29 * 8);
        func_0x00010c27dd80();
        lVar17 = lVar14;
        lVar15 = lVar12;
        puVar2 = puVar20;
        if (0 < lVar12) {
          lVar17 = lVar14 + -1;
          lVar15 = lVar12 + -1;
          puVar2 = puVar19;
        }
        lVar28 = lVar32;
        lVar1 = lVar13;
        puVar3 = puVar20;
        if (0 < lVar13) {
          lVar28 = lVar32 + -1;
          lVar1 = lVar13 + -1;
          puVar3 = puVar19;
        }
        if (lVar27 == 1) {
          lVar17 = lVar14;
          lVar15 = lVar12;
          lVar32 = lVar28;
          lVar13 = lVar1;
          puVar2 = puVar3;
        }
        lVar12 = lVar15;
        func_0x00010befa120(puVar2);
        puVar29 = puVar29 + 1;
        lVar14 = lVar17;
      } while (puVar33 != puVar29);
      puVar33 = puVar11;
      func_0x00010bf52a60();
    }
    _objc_release(puVar11);
    dVar35 = 0.0;
    _objc_retain(puVar18);
    puVar33 = puVar18;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (puVar33 != (undefined *)0x0) {
      puVar29 = (undefined *)0x0;
      lVar13 = lVar17;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(puVar18);
        }
        lVar30 = *(long *)((long)puVar29 * 8);
        func_0x00010c27dd80();
        puVar2 = puVar19;
        if (lVar13 < 1) {
          puVar2 = puVar20;
        }
        puVar3 = puVar19;
        if (lVar32 < 1) {
          puVar3 = puVar20;
        }
        lVar17 = lVar13 - (ulong)(0 < lVar13);
        if (lVar30 == 1) {
          lVar17 = lVar13;
          lVar32 = lVar32 - (ulong)(0 < lVar32);
          puVar2 = puVar3;
        }
        func_0x00010befa120(puVar2);
        puVar29 = puVar29 + 1;
        lVar13 = lVar17;
      } while (puVar33 != puVar29);
      puVar33 = puVar18;
      func_0x00010bf52a60();
    }
    _objc_release(puVar18);
    puVar33 = puVar19;
    func_0x00010c0d3c80();
    _objc_release(puStack_3d8);
    puVar29 = puVar20;
    func_0x00010c0d3c80();
    _objc_release(puVar10);
    _objc_release(puVar20);
    _objc_release(puVar19);
    _objc_release(puVar18);
    puVar10 = puVar29;
    puStack_3d8 = puVar33;
  }
  _objc_release(puVar11);
joined_r0x000106979690:
  if (param_3 != (long *)0x0) {
    func_0x00010c246ba0(puStack_3d8);
    puVar11 = puStack_3d8;
    func_0x00010bf51e00();
    _objc_autorelease();
    *param_3 = (long)puVar11;
  }
  if (param_4 != (long *)0x0) {
    func_0x00010c246ba0(puVar10);
    puVar11 = puVar10;
    func_0x00010bf51e00();
    _objc_autorelease();
    *param_4 = (long)puVar11;
  }
  ppuVar25 = &PTR___NSConcreteGlobalBlock_11094e4e0;
  func_0x000100504554(puStack_3d8);
  _objc_release();
  _objc_release(puVar10);
  _objc_release(puStack_3d8);
  _objc_release(puVar9);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar25);
  ppuVar21 = ppuVar25;
  func_0x00010c246f40(ppuVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  _objc_release(ppuVar21);
  puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  ppuVar21 = ppuVar25;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar22 = ppuVar25;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar23 = ppuVar25;
  func_0x00010bf5a820(ppuVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ab40();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(dVar35);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27dd80(ppuVar25);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuVar24 = ppuVar25;
  func_0x00010c246f40(ppuVar25);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d10a0();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c085be0(ppuVar25);
  _objc_release(ppuVar25);
  func_0x00010c0df720(dVar35);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar33);
  _objc_release(ppuVar24);
  _objc_release(puVar9);
  _objc_release(puVar19);
  _objc_release(puVar10);
  _objc_release(ppuVar23);
  _objc_release(ppuVar22);
  _objc_release(ppuVar21);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 10697969c; end: 10697988f;  */

void FUN_10697969c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c246f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d4780();
  _objc_release(uVar1);
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_3;
  func_0x00010bf5a820(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5ab40();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c27dd80(param_3);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = param_3;
  func_0x00010c246f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d10a0();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c085be0(param_3);
  _objc_release(param_3);
  func_0x00010c0df720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 106979890; end: 1069798c3;  */

void FUN_106979890(void)

{
  _objc_alloc(PTR_PTR_1126cf510);
  func_0x00010c063420();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069798c4; end: 1069798fb;  */

void FUN_1069798c4(void)

{
  _objc_alloc(PTR_PTR_1126cf518);
  func_0x00010c02c060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1069798fc; end: 106979957;  */

ulong FUN_1069798fc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  double dVar2;
  
  _objc_retain(param_4);
  FUN_1069789d0(param_3);
  dVar2 = param_1;
  FUN_1069789d0(param_4);
  _objc_release(param_4);
  uVar1 = (ulong)(param_1 < dVar2);
  if (dVar2 < param_1) {
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}



/* Entry: 106979958; end: 10697996f;  */

void FUN_106979958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf433b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_compare__1125ae690,param_2);
  return;
}



/* Entry: 106979970; end: 1069799df; -[SCStoriesSendToPriorityRule initWithWithinCreatedDays:withinPostedDays:withinLatestViewedDays:viewedDaysWithinOneWeek:viewedSnapsWithinOneDay:] */

void FUN_106979970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f3e90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  return;
}



/* Entry: 1069799e0; end: 106979a03; -[SCStoriesSendToPriorityRule copyWithZone:] */

undefined8 FUN_1069799e0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106979a04; end: 106979a77; -[SCStoriesSendToPriorityRule hash] */

undefined8 * FUN_106979a04(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_20;
  long lStack_18;
  
  puVar1 = &uStack_40;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_38 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  lVar3 = *(long *)(param_1 + 0x28);
  lStack_20 = -lVar3;
  if (-1 < lVar3) {
    lStack_20 = lVar3;
  }
  func_0x000100505190(&uStack_40,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x1;
  }
  else {
    puVar4 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar4 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar4);
      if (((((ulong)puVar2 & 1) == 0) ||
          (((*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)((long)puVar1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)((long)puVar1 + 0x20) != *(long *)(param_3 + 0x20))) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        puVar4 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x28) == *(long *)(param_3 + 0x28));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106979a78; end: 106979b3f; -[SCStoriesSendToPriorityRule isEqual:] */

bool FUN_106979a78(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((((uVar3 & 1) == 0) ||
          (((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
            (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
           (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))))) ||
         (*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106979b40; end: 106979b47; -[SCStoriesSendToPriorityRule withinCreatedDays] */

undefined8 FUN_106979b40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106979b48; end: 106979b4f; -[SCStoriesSendToPriorityRule withinPostedDays] */

undefined8 FUN_106979b48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106979b50; end: 106979b57; -[SCStoriesSendToPriorityRule withinLatestViewedDays] */

undefined8 FUN_106979b50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106979b58; end: 106979b5f; -[SCStoriesSendToPriorityRule viewedDaysWithinOneWeek] */

undefined8 FUN_106979b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106979b60; end: 106979b67; -[SCStoriesSendToPriorityRule viewedSnapsWithinOneDay] */

undefined8 FUN_106979b60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106979b68; end: 106979bb3; -[SCStoriesSendToHighPriorityThreshold initWithMinHighPriorityCount:maxHighPriorityCount:] */

void FUN_106979b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3e98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 106979bb4; end: 106979bd7; -[SCStoriesSendToHighPriorityThreshold copyWithZone:] */

undefined8 FUN_106979bb4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106979bd8; end: 106979c33; -[SCStoriesSendToHighPriorityThreshold hash] */

undefined8 * FUN_106979bd8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = MP_INT_ABS(*(undefined8 *)(param_1 + 8));
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  func_0x000100505190(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 106979c34; end: 106979ccb; -[SCStoriesSendToHighPriorityThreshold isEqual:] */

bool FUN_106979c34(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106979ccc; end: 106979cd3; -[SCStoriesSendToHighPriorityThreshold minHighPriorityCount] */

undefined8 FUN_106979ccc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106979cd4; end: 106979cdb; -[SCStoriesSendToHighPriorityThreshold maxHighPriorityCount] */

undefined8 FUN_106979cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106979cdc; end: 10697a09b;  */

ulong FUN_106979cdc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **in_x5;
  undefined **in_x7;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined *puStack_200;
  undefined8 *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *apuStack_f8 [16];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lStack_138 = 0;
  puStack_140 = (undefined *)0x0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_2);
  ppuVar8 = &puStack_140;
  ppuVar9 = apuStack_f8;
  ppuVar10 = (undefined **)0x10;
  lVar5 = param_2;
  func_0x00010bf52a60();
  if (lVar5 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        uVar12 = *(ulong *)(lStack_138 + lVar14 * 8);
        uVar7 = uVar12;
        func_0x000108425a5c();
        if (((uVar7 & 1) == 0) && (uVar7 = uVar12, func_0x000108425b30(), (uVar7 & 1) == 0)) {
          uVar7 = uVar12;
          func_0x000108425950();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3);
          _objc_release(uVar7);
          func_0x0001084259b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar4);
          _objc_release(uVar12);
        }
        lVar14 = lVar14 + 1;
      } while (lVar5 != lVar14);
      ppuVar8 = &puStack_140;
      ppuVar9 = apuStack_f8;
      ppuVar10 = (undefined **)0x10;
      lVar5 = param_2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_2);
  puVar6 = puVar3;
  func_0x00010bf529e0();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 == (undefined *)0x0) {
    uVar11 = 0;
  }
  else {
    uStack_160 = 0;
    uStack_150 = 0x2020000000;
    uStack_148 = 0;
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_10697a09c;
    puStack_178 = &UNK_11094e560;
    puStack_168 = &uStack_160;
    puStack_158 = &uStack_160;
    _objc_retain(puVar4);
    puStack_1c0 = puVar1;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_10697a190;
    puStack_1a8 = &UNK_11094e590;
    puStack_198 = &uStack_160;
    puStack_170 = puVar4;
    _objc_retain(puVar3);
    puStack_1f0 = puVar1;
    uStack_1e8 = 0xc2000000;
    uStack_1e0 = 0x10697a1c4;
    puStack_1d8 = &UNK_11094e5c0;
    puStack_1c8 = &uStack_160;
    puStack_1a0 = puVar3;
    _objc_retain(puVar3);
    puStack_220 = puVar1;
    uStack_218 = 0xc2000000;
    uStack_210 = 0x10697a1f8;
    puStack_208 = &UNK_11094e5f0;
    puStack_1f8 = &uStack_160;
    puStack_1d0 = puVar3;
    _objc_retain(puVar3);
    puStack_250 = puVar1;
    uStack_248 = 0xc2000000;
    uStack_240 = 0x10697a22c;
    puStack_238 = &UNK_11094e620;
    puStack_228 = &uStack_160;
    puStack_200 = puVar3;
    _objc_retain(puVar3);
    puStack_280 = puVar1;
    uStack_278 = 0xc2000000;
    uStack_270 = 0x10697a260;
    puStack_268 = &UNK_11094e650;
    puStack_258 = &uStack_160;
    puStack_230 = puVar3;
    _objc_retain(param_2);
    lStack_260 = param_2;
    _objc_retain(puVar3);
    ppuVar8 = &puStack_190;
    ppuVar9 = &puStack_1c0;
    ppuVar10 = &puStack_1f0;
    in_x5 = &puStack_220;
    in_x7 = &puStack_280;
    func_0x00010c0bee40(param_1);
    uVar11 = (uint)*(byte *)(puStack_158 + 3);
    _objc_release(puVar3);
    _objc_release(lStack_260);
    _objc_release(puStack_230);
    _objc_release(puStack_200);
    _objc_release(puStack_1d0);
    _objc_release(puStack_1a0);
    _objc_release(puStack_170);
    __Block_object_dispose(&uStack_160,8);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (ulong)(uVar11 & 1);
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_160,8);
  __Unwind_Resume();
  _objc_retain(uVar7);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar10);
  _objc_retain(in_x5);
  _objc_retain(in_x7);
  if (ppuVar9 == (undefined **)0x2) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  else if (ppuVar9 == (undefined **)0x1) {
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  else {
    if (ppuVar9 != (undefined **)0x0) goto LAB_10697a154;
    uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar2;
LAB_10697a154:
  _objc_release(in_x7);
  _objc_release(in_x5);
  _objc_release(ppuVar10);
  _objc_release(ppuVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return uVar7;
}



/* Entry: 10697a09c; end: 10697a18f;  */

void FUN_10697a09c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  if (param_4 == 2) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  else if (param_4 == 1) {
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  else {
    if (param_4 != 0) goto LAB_10697a154;
    uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  }
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
LAB_10697a154:
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10697a190; end: 10697a2c7;  */

void FUN_10697a190(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10697a2c8; end: 10697a2d3;  */

undefined ** FUN_10697a2c8(void)

{
  return &PTR___NSConcreteGlobalBlock_11094e6d0;
}



/* Entry: 10697a2d4; end: 10697a35f;  */

void FUN_10697a2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10697a360;
  puStack_30 = &UNK_11086b9c0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001006372a4(param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10697a360; end: 10697a5cb;  */

byte FUN_10697a360(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    bVar2 = 1;
  }
  else {
    puStack_68 = &uStack_70;
    uStack_70 = 0;
    uStack_60 = 0x2020000000;
    uStack_58 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar8);
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar9);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0bee40(param_2);
    bVar2 = *(byte *)(puStack_68 + 3);
    _objc_release(uVar3);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    __Block_object_dispose(&uStack_70,8);
  }
  _objc_release(param_2);
  return bVar2 & 1;
}



/* Entry: 10697a5cc; end: 10697a61f;  */

void FUN_10697a5cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1;
  func_0x000108f57dfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fd6d1c(uVar2,lVar1);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697a620; end: 10697a6ef;  */

void FUN_10697a620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108fd6d1c(uVar1,param_3);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10697a6f0; end: 10697a743;  */

void FUN_10697a6f0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_1;
  func_0x000108f57dfc();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108fd6d1c(uVar2,lVar1);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697a744; end: 10697a7ff;  */

void FUN_10697a744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000108fd6d1c(uVar1,param_3);
  *(char *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 10697a800; end: 10697aa9b; -[SCSnapDocServiceProvider _snapDocConfigurerWithSnapDocOperaParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10697a800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar19 = (long)_DAT_11275450c;
  _objc_retain(param_3);
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar1 = lVar19;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar19);
  puVar2 = PTR_PTR_1126cf528;
  _objc_alloc();
  lVar19 = param_1 + _DAT_112754510;
  _objc_loadWeakRetained();
  lVar3 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112754514;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c2402c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112754518;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11275451c;
  _objc_loadWeakRetained();
  lVar9 = lVar8;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112754520;
  _objc_loadWeakRetained();
  lVar11 = lVar10;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112754524;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112754528;
  _objc_loadWeakRetained();
  lVar15 = lVar14;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_11275452c;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112754530;
  _objc_loadWeakRetained();
  lVar18 = param_1;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05d320(puVar2,param_2,lVar3,lVar1,lVar5,param_3,lVar7,lVar9,lVar11,lVar13,lVar15,
                      lVar17,lVar18);
  _objc_release(param_3);
  _objc_release(lVar18);
  _objc_release(param_1);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10697aa9c; end: 10697ab1f; -[SCSnapDocServiceProvider _snapDocParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10697aa9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126cf530;
  _objc_alloc(PTR_PTR_1126cf530);
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112754538;
    _objc_loadWeakRetained(lVar2);
  }
  lVar3 = lVar2;
  func_0x00010c2403a0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c047920(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10697ab20; end: 10697abcf; -[SCSnapDocServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10697ab20(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275452c);
  _objc_destroyWeak(param_1 + _DAT_112754530);
  _objc_destroyWeak(param_1 + _DAT_112754528);
  _objc_destroyWeak(param_1 + _DAT_112754524);
  _objc_destroyWeak(param_1 + _DAT_112754520);
  _objc_destroyWeak(param_1 + _DAT_11275451c);
  _objc_destroyWeak(param_1 + _DAT_112754538);
  _objc_destroyWeak(param_1 + _DAT_112754518);
  _objc_destroyWeak(param_1 + _DAT_112754514);
  _objc_destroyWeak(param_1 + _DAT_11275450c);
  _objc_destroyWeak(param_1 + _DAT_112754510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112754534);
  return;
}



/* Entry: 10697abd0; end: 10697ac93; -[SCAdAdToCallAttachmentPresenter initWithAttachment:deeplinkURLHandler:delegate:] */

undefined1 *
FUN_10697abd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3ea0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10697ac94; end: 10697acb3; -[SCAdAdToCallAttachmentPresenter canHandleAttachment:] */

bool FUN_10697ac94(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0d600(param_3);
  return param_3 == 4;
}



/* Entry: 10697acb4; end: 10697acbb; -[SCAdAdToCallAttachmentPresenter isPresenting] */

undefined8 FUN_10697acb4(void)

{
  return 0;
}



/* Entry: 10697acbc; end: 10697aeff; -[SCAdAdToCallAttachmentPresenter presentAttachment] */

void FUN_10697acbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0faf60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be73a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar2 == 0) {
    func_0x00010c0fb060(PTR_PTR_1126cf538);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0faf60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar1);
    _objc_release(lVar3);
    param_1 = param_1 + 0x18;
    _objc_loadWeakRetained(param_1);
    puVar4 = PTR_PTR_1126bdc88;
    func_0x00010bef59a0(PTR_PTR_1126bdc88);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cf540;
    func_0x00010bef5940(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(param_1);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar5);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfd1b80(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10697af00; end: 10697af33;  */

void FUN_10697af00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10697af34; end: 10697afe3; -[SCAdAdToCallAttachmentPresenter dismissAttachment] */

void FUN_10697af34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126bdc88;
  func_0x00010bef59a0(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cf540;
  func_0x00010bef5940(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar1,param_2,puVar2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10697afe4; end: 10697b287; -[SCAdAdToCallAttachmentPresenter _handleDeepLinkWithSuccess:] */

void FUN_10697afe4(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf68140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf68140();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  puVar3 = PTR_PTR_1126bdc88;
  func_0x00010bef59a0(PTR_PTR_1126bdc88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (param_3 == 0) {
    func_0x00010bf2f8c0(PTR_PTR_1126cf538);
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar2 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0faf60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010be73a40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0d260(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar1);
    _objc_release(uVar4);
    _objc_release(lVar2);
    puVar5 = (undefined *)(param_1 + 0x18);
    _objc_loadWeakRetained(puVar5);
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126cf540;
    func_0x00010bef5940(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(puVar5);
    _objc_release(puVar8);
  }
  else {
    lVar2 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar2);
    puVar6 = PTR_PTR_1126cf540;
    func_0x00010bef5940(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1ec0(lVar2);
    _objc_release(puVar6);
    _objc_release(lVar2);
    puVar6 = (undefined *)(param_1 + 0x18);
    _objc_loadWeakRetained(puVar6);
    puVar5 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126cf540;
    func_0x00010bef5940(PTR_PTR_1126cf540);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef1e80(puVar6);
  }
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10697b288; end: 10697b347; -[SCAdAdToCallAttachmentPresenter _phoneUriFromPhoneNumber:] */

void FUN_10697b288(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = param_3;
    func_0x00010bfda7c0(param_3,param_2,&PTR____CFConstantStringClassReference_110e66398);
    if ((int)puVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110dba218);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(param_3);
      puVar1 = param_3;
    }
    puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10697b348; end: 10697b37f; -[SCAdAdToCallAttachmentPresenter .cxx_destruct] */

void FUN_10697b348(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10697b380; end: 10697b44b; -[SCAdAppInstallAttachmentPresenter initWithAttachment:storeProductPresenter:uiContainer:] */

undefined1 *
FUN_10697b380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3ea8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10697b44c; end: 10697b46b; -[SCAdAppInstallAttachmentPresenter canHandleAttachment:] */

bool FUN_10697b44c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf0d600(param_3);
  return param_3 == 2;
}



/* Entry: 10697b46c; end: 10697b473; -[SCAdAppInstallAttachmentPresenter isPresenting] */

undefined1 FUN_10697b46c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 10697b474; end: 10697b5d3; -[SCAdAppInstallAttachmentPresenter presentAttachment] */

void FUN_10697b474(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  FUN_106987180(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2720e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = *(long *)(param_1 + 8);
  func_0x00010bf286c0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2a68e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar5);
  if (lVar6 != 0) {
    lVar5 = *(long *)(param_1 + 8);
    func_0x00010bf286c0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c2a68e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar6 + 0x10))();
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf13f60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c23dde0(uVar8);
  func_0x00010c10e580(uVar1,param_2,uVar3,uVar4,uVar2,uVar7,uVar8);
  _objc_release(uVar7);
  lVar6 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar6);
  puVar9 = PTR_PTR_1126bdc88;
  func_0x00010bf05740(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1ee0(lVar6,param_2,puVar9);
  _objc_release(puVar9);
  _objc_release(lVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10697b5d4; end: 10697b69f; -[SCAdAppInstallAttachmentPresenter dismissAttachment] */

void FUN_10697b5d4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  func_0x00010bf845c0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  puVar3 = PTR_PTR_1126bdc88;
  func_0x00010bf05740(PTR_PTR_1126bdc88,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cf540;
  func_0x00010bf054e0(PTR_PTR_1126cf540);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef1e80(lVar2,param_2,puVar3,puVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


