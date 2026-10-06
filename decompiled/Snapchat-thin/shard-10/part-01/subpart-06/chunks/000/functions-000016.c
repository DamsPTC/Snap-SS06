/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792b670; end: 10792b72f; -[SCNMapSdkResourceRequesterResourceRequester deleteCachedEntry:callback:] */

void FUN_10792b670(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_178 [312];
  
  func_0x00010792b8f8();
  func_0x00010792b924();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x00010792ac28(auStack_178);
  func_0x00010792b92c();
  func_0x00010792b914(*(undefined8 *)(*plVar1 + 0x20));
  func_0x00010792b90c();
  func_0x0001072d59ac(auStack_178);
  func_0x00010792b8e8();
  func_0x00010792b8f0();
  return;
}



/* Entry: 10792ba8c; end: 10792badb;  */

void FUN_10792ba8c(undefined8 *param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    param_1[1] = *(undefined8 *)(param_2 + 0x20);
    *param_1 = uVar2;
    if (lVar1 != 0) {
      do {
        func_0x00010792bbd4();
      } while (extraout_w10 != 0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10792bfac; end: 10792c143; -[SCNMapSdkResourceRequesterResponse initWithSource:fetchTime:error:noContent:notModified:mustRevalidate:data:modified:expires:etag:] */

undefined8 *
FUN_10792bfac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126f8e98;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    _objc_retain(param_9);
    uVar2 = puVar1[5];
    puVar1[5] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[7];
    puVar1[7] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10792c17c; end: 10792c183; -[SCNMapSdkResourceRequesterResponse modified] */

undefined8 FUN_10792c17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10792c3a4; end: 10792c3ab; -[SCNMapSdkResourceRequesterTileData urlTemplate] */

undefined8 FUN_10792c3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10792c428; end: 10792c4d7;  */

void FUN_10792c428(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_1109ebcf8;
    lStack_40 = param_2;
    func_0x0001000de59c(&uStack_30,&ppuStack_38,&lStack_40,&UNK_10792c4d8);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x0001000df524(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    func_0x00010792c784(&uStack_50);
  }
  func_0x00010792c7b0();
  return;
}



/* Entry: 10792c774; end: 10792c783;  */

void FUN_10792c774(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109ebd38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792ca50; end: 10792cac7; -[SCNBitmojiFetcherBitmojiUriParser .cxx_construct] */

undefined8 * FUN_10792ca50(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  func_0x00010015c19c();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792ce08; end: 10792ce7b;  */

void FUN_10792ce08(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5728;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010792ce7c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x0001072fbdc4(&uStack_30);
  return;
}



/* Entry: 10792d440; end: 10792d4af;  */

long FUN_10792d440(long param_1)

{
  _bzero(param_1,0xd0);
  func_0x00010792d4b0(param_1);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 **)(param_1 + 0xe8) = (undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  func_0x00010b4e18b8(param_1 + 0xf8,param_1);
  return param_1;
}



/* Entry: 10792d600; end: 10792d613;  */

void FUN_10792d600(void)

{
  __ZNSt9exceptionD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10792d7b4; end: 10792d82b; -[SCNMapCommonAuthContextFetchedCallback initWithCpp:] */

undefined1 * FUN_10792d7b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f8ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010792db7c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000104bff90c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10792daf8; end: 10792db6b;  */

void FUN_10792daf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126d5730;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x00010792db7c();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x000104bff90c(&uStack_30);
  return;
}



/* Entry: 10792de14; end: 10792de87;  */

void FUN_10792de14(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010792d9bc(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5180(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10792e044; end: 10792e04b;  */

bool FUN_10792e044(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10792e204; end: 10792e20b;  */

bool FUN_10792e204(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10792e3c8; end: 10792e3cb;  */

bool FUN_10792e3c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10792e588; end: 10792e5d3; +[SMSdkLatLngAltitude descriptor] */

long FUN_10792e588(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726be0;
  if (lRam0000000113726be0 == 0) {
    FUN_107930980();
    func_0x000107930a20();
    func_0x000107930b24();
  }
  lRam0000000113726be0 = lVar1;
  return lVar1;
}



/* Entry: 10792e7f8; end: 10792e843; +[SMSdkFeature descriptor] */

void FUN_10792e7f8(void)

{
  long lVar1;
  
  if (lRam0000000113726c20 == 0) {
    lVar1 = lRam0000000113726c20;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930b58();
    lRam0000000113726c20 = lVar1;
  }
  return;
}



/* Entry: 10792eaa4; end: 10792eae7; +[SMSdkThemeColors descriptor] */

void FUN_10792eaa4(void)

{
  long lVar1;
  
  if (lRam0000000113726c60 == 0) {
    lVar1 = lRam0000000113726c60;
    FUN_107930980();
    func_0x000107930a04();
    lRam0000000113726c60 = lVar1;
  }
  return;
}



/* Entry: 10792ece8; end: 10792ed3b; +[SMSdkSticker descriptor] */

void FUN_10792ece8(void)

{
  long lVar1;
  
  if (lRam0000000113726ca0 == 0) {
    lVar1 = lRam0000000113726ca0;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    lRam0000000113726ca0 = lVar1;
  }
  return;
}



/* Entry: 10792efc4; end: 10792f007; +[SMSdkFriendsUpdate descriptor] */

void FUN_10792efc4(void)

{
  long lVar1;
  
  if (lRam0000000113726ce0 == 0) {
    lVar1 = lRam0000000113726ce0;
    FUN_107930980();
    func_0x000107930a2c();
    lRam0000000113726ce0 = lVar1;
  }
  return;
}



/* Entry: 10792f26c; end: 10792f2af; +[SMSdkMutedFriendLocationsUpdate descriptor] */

void FUN_10792f26c(void)

{
  long lVar1;
  
  if (lRam0000000113726d20 == 0) {
    lVar1 = lRam0000000113726d20;
    FUN_107930980();
    func_0x000107930a04();
    lRam0000000113726d20 = lVar1;
  }
  return;
}



/* Entry: 10792f4b8; end: 10792f4fb; +[SMSdkMapLiveLocationRequestState descriptor] */

void FUN_10792f4b8(void)

{
  long lVar1;
  
  if (lRam0000000113726d60 == 0) {
    lVar1 = lRam0000000113726d60;
    FUN_107930980();
    func_0x000107930a2c();
    lRam0000000113726d60 = lVar1;
  }
  return;
}



/* Entry: 10792f744; end: 10792f78f; +[SMSdkLocationSharingPreferences_LocationSharingSettings_Everyone descriptor] */

long FUN_10792f744(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726da0;
  if (lRam0000000113726da0 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x000107930a60();
  }
  lRam0000000113726da0 = lVar1;
  return lVar1;
}



/* Entry: 10792f9ac; end: 10792fa07; +[SMSdkMapDebugOptions descriptor] */

long FUN_10792f9ac(long param_1)

{
  if (lRam0000000113726de0 == 0) {
    FUN_107930980();
    func_0x000107930b0c();
    func_0x00010c2289e0();
    lRam0000000113726de0 = param_1;
  }
  return lRam0000000113726de0;
}



/* Entry: 10792fc64; end: 10792fcaf; +[SMSdkValue_List descriptor] */

long FUN_10792fc64(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e20;
  if (lRam0000000113726e20 == 0) {
    FUN_107930980();
    func_0x000107930a04();
    func_0x000107930a50();
  }
  lRam0000000113726e20 = lVar1;
  return lVar1;
}



/* Entry: 10792fed4; end: 10792ff2b; +[SMSdkPrefetchResource descriptor] */

long FUN_10792fed4(long param_1)

{
  if (lRam0000000113726e60 == 0) {
    FUN_107930980();
    func_0x000107930a2c();
    func_0x00010c2289e0();
    lRam0000000113726e60 = param_1;
  }
  return lRam0000000113726e60;
}



/* Entry: 1079301b0; end: 1079301fb; +[SMSdkMapBrowsingContext_PlacesTrayBrowsingContext descriptor] */

long FUN_1079301b0(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ea0;
  if (lRam0000000113726ea0 == 0) {
    FUN_107930980();
    func_0x000107930a2c();
    func_0x0001079309d8();
  }
  lRam0000000113726ea0 = lVar1;
  return lVar1;
}



/* Entry: 10793043c; end: 107930487; +[SMSdkMapBrowsingContext_MemoriesToggleBrowsingContext descriptor] */

long FUN_10793043c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ee0;
  if (lRam0000000113726ee0 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x0001079309d8();
  }
  lRam0000000113726ee0 = lVar1;
  return lVar1;
}



/* Entry: 1079306cc; end: 10793070f; +[SMSdkClearCachedTilesRequest descriptor] */

void FUN_1079306cc(void)

{
  long lVar1;
  
  if (lRam0000000113726f20 == 0) {
    lVar1 = lRam0000000113726f20;
    FUN_107930980();
    func_0x000107930a20();
    lRam0000000113726f20 = lVar1;
  }
  return;
}



/* Entry: 107930980; end: 107930b63;  */

undefined * FUN_107930980(void)

{
  return PTR_PTR_1126ae978;
}



/* Entry: 107930d60; end: 107930d8f;  */

long FUN_107930d60(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x0001079310e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 107931020; end: 10793102f;  */

void FUN_107931020(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 1079311f0; end: 107931233;  */

undefined8 * FUN_1079311f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ec560;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  func_0x00010793119c(param_1,param_3);
  return param_1;
}



/* Entry: 107931394; end: 1079313b7;  */

undefined8 FUN_107931394(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793151c; end: 10793151f;  */

undefined1  [16] FUN_10793151c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x10);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x10); puVar2 != (undefined1 *)(param_1 + 0x20);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x20);
  return auVar6;
}



/* Entry: 107931600; end: 1079316a7;  */

long * FUN_107931600(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (param_1[2] != 0) {
    func_0x00010794668c();
    func_0x000107946ec0();
    func_0x000107946a44();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x000107946a44();
    param_4 = param_1;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010794668c();
    func_0x000107946e70();
    func_0x000107946a44();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 107931828; end: 10793184f;  */

undefined ** FUN_107931828(void)

{
  return &PTR_DAT_1109ee410;
}



/* Entry: 1079319e4; end: 1079319ef;  */

undefined ** FUN_1079319e4(void)

{
  return &PTR_DAT_1109ee450;
}



/* Entry: 107931b98; end: 107931bc3;  */

undefined8 FUN_107931b98(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107931bc4(param_1);
  return param_1;
}



/* Entry: 107931dfc; end: 107931dff;  */

long FUN_107931dfc(long param_1)

{
  func_0x000107946a94();
  func_0x00010794374c(param_1 + 0x10);
  return param_1;
}



/* Entry: 107931f28; end: 107931f57;  */

void FUN_107931f28(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107931f58();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10793207c; end: 10793207f;  */

undefined8 FUN_10793207c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107932058(param_1);
  return param_1;
}



/* Entry: 1079323e0; end: 10793240f;  */

void FUN_1079323e0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x0001079320a0();
  func_0x000107946c18();
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  uVar2 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107944e4c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010793228c();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107932550; end: 107932553;  */

void FUN_107932550(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107932584();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107932750; end: 10793275b;  */

undefined ** FUN_107932750(void)

{
  return &PTR_DAT_1109ee628;
}



/* Entry: 1079329ec; end: 1079329ef;  */

undefined8 FUN_1079329ec(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079329c8(param_1);
  return param_1;
}



/* Entry: 107932bd4; end: 107932c03;  */

void FUN_107932bd4(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107932a10();
  func_0x000107946c18();
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  uVar2 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar2 = param_2[1];
  }
  if (uVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      func_0x000107944e4c();
      *(ulong **)(unaff_x21 + 0x20) = puVar1;
      param_1 = puVar1;
    }
    else {
      func_0x00010793228c();
    }
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107932d80; end: 107932ddf;  */

void FUN_107932d80(void)

{
  char in_NG;
  char in_OV;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946fd4();
  if (in_NG == in_OV) {
    func_0x000107947114();
  }
  func_0x00010794710c();
  func_0x00010029b2d4(unaff_x19 + 7);
  func_0x00010029b2d4(unaff_x19 + 8);
  func_0x00010029b2d4(unaff_x19 + 9);
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000107931bf8(unaff_x19[10]);
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1079332dc; end: 10793330b;  */

void FUN_1079332dc(void)

{
  long unaff_x19;
  
  func_0x000107946934();
  if (*(int *)(unaff_x19 + 0x24) != 0) {
    if (*(int *)(unaff_x19 + 0x24) == 7 || *(int *)(unaff_x19 + 0x24) == 4) {
      func_0x000107946c10();
    }
    *(undefined4 *)(unaff_x19 + 0x24) = 0;
  }
  return;
}



/* Entry: 1079335d8; end: 1079335db;  */

void FUN_1079335d8(ulong *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined *extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  ulong uVar6;
  
  func_0x000107946614();
  uVar6 = param_3;
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
    uVar6 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_2 + 8);
  }
  if (lVar5 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x0001079470b8();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 == 0) goto code_r0x0001079336e8;
  iVar2 = *(int *)((long)unaff_x21 + 0x24);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x000107933324();
    }
    *(int *)((long)unaff_x21 + 0x24) = iVar1;
  }
  bVar3 = iVar1 + -2 == 5;
  switch(iVar1 + -2) {
  case 0:
    *(undefined1 *)(unaff_x21 + 3) = *(undefined1 *)(unaff_x20 + 0x18);
    break;
  case 1:
  case 3:
    *(undefined4 *)(unaff_x21 + 3) = *(undefined4 *)(unaff_x20 + 0x18);
    break;
  case 2:
    if (iVar2 != iVar1) {
      unaff_x21[3] = (ulong)&DAT_11383d918;
    }
    puVar4 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(unaff_x20 + 0x24) != 4) {
      puVar4 = &DAT_11383d918;
    }
    goto code_r0x0001079336dc;
  case 4:
    unaff_x21[3] = *(ulong *)(unaff_x20 + 0x18);
    break;
  case 5:
    func_0x0001079471b8();
    if (!bVar3) {
      unaff_x21[3] = (ulong)extraout_x8_00;
    }
    puVar4 = (undefined *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    if (*(int *)(unaff_x20 + 0x24) != 7) {
      puVar4 = extraout_x8_00;
    }
code_r0x0001079336dc:
    param_1 = unaff_x21 + 3;
    func_0x0001001a53d4(param_1,puVar4,uVar6);
  }
code_r0x0001079336e8:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079337c4; end: 1079337f3;  */

void FUN_1079337c4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1079339fc; end: 107933abb;  */

long * FUN_1079339fc(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x00010794635c();
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    func_0x0001079467a0();
    func_0x000107946d7c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 107933bb4; end: 107933bb7;  */

undefined8 FUN_107933bb4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107933b8c(param_1);
  return param_1;
}



/* Entry: 107933f74; end: 107933f77;  */

long FUN_107933f74(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107934430();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107934564();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 1079342e8; end: 1079342eb;  */

long FUN_1079342e8(long param_1)

{
  func_0x000107946a94();
  func_0x000107943834(param_1 + 0x10);
  return param_1;
}



/* Entry: 10793445c; end: 10793446f;  */

void FUN_10793445c(void)

{
  func_0x000107934430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079345a4; end: 1079345af;  */

undefined ** FUN_1079345a4(void)

{
  return &PTR_DAT_1109ee8f0;
}



/* Entry: 1079346e8; end: 10793471b;  */

void FUN_1079346e8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10793497c; end: 107934af3;  */

long * FUN_10793497c(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946984();
  func_0x000107946824();
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1079349b0;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1079349b0:
      param_4 = (long *)&UNK_10f438512;
      func_0x000107946aa4();
      func_0x000107946634();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x18));
  if ((long)param_2 < 0) {
    param_2 = (long *)unaff_x22[1];
    if (param_2 != (long *)0x0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1079349e8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1079349e8:
      param_4 = (long *)&UNK_10f438540;
      func_0x000107946aa4();
      func_0x000107946cd0();
      func_0x000107946758();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x20));
  if ((long)param_2 < 0) {
    param_2 = (long *)0x0;
    if (unaff_x22[1] != 0) goto LAB_107934a24;
  }
  else if ((int)param_2 != 0) {
LAB_107934a24:
    param_4 = (long *)&UNK_10f43856f;
    func_0x000107946aa4();
    param_2 = (long *)0x3;
    param_1 = unaff_x19;
    func_0x000107946758();
    unaff_x21 = param_1;
  }
  func_0x000107947390();
  if ((bool)in_ZR) {
    func_0x0001079466b8();
    param_2 = param_1;
    func_0x000107946ef8();
    func_0x0001079466ac();
    unaff_x21 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x28));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107934aa0;
  }
  else if ((int)param_2 == 0) goto LAB_107934aa0;
  param_4 = (long *)&UNK_10f43859f;
  func_0x000107946aa4();
  func_0x000107946758();
  param_1 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_107934aa0:
  func_0x000107947384();
  if ((bool)in_ZR) {
    func_0x0001079466b8();
    func_0x000107946f8c();
    func_0x0001079466ac();
    unaff_x21 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107934cec; end: 107934d1b;  */

void FUN_107934cec(long param_1)

{
  if ((*(uint *)(param_1 + 0x34) & 0xfffffffe) == 100) {
    func_0x0001079470b0();
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}



/* Entry: 10793508c; end: 107935107;  */

void FUN_10793508c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  func_0x000107946be8();
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  return;
}



/* Entry: 107935670; end: 107935687;  */

void FUN_107935670(void)

{
  func_0x000107934af4();
  func_0x0001079462e4();
  return;
}



/* Entry: 10793598c; end: 1079359a3;  */

void FUN_10793598c(void)

{
  func_0x00010bd1b660();
  func_0x0001079462e4();
  return;
}



/* Entry: 107935c04; end: 107935cfb;  */

void FUN_107935c04(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  
  func_0x000107946514();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  lVar3 = 0;
  if (lVar2 != 0) {
    func_0x0001001a5744();
    lVar3 = param_1 + 1;
  }
  iVar1 = (int)param_1;
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    lVar3 = lVar3 + 9;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar3 = lVar3 + 9;
  }
  func_0x00010794711c(lVar3 + (ulong)*(byte *)(unaff_x19 + 0x28) * 2);
  if ((extraout_x8_00 & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  return;
}



/* Entry: 107935e38; end: 107935e4f;  */

void FUN_107935e38(void)

{
  FUN_107935c04();
  func_0x0001079462e4();
  return;
}



/* Entry: 107935ef8; end: 107935f03;  */

undefined ** FUN_107935ef8(void)

{
  return &PTR_DAT_1109eeb28;
}



/* Entry: 1079361a8; end: 107936207;  */

long FUN_1079361a8(long param_1)

{
  func_0x000100067de0(param_1 + 0x48);
  func_0x000100067de0(param_1 + 0x50);
  if (*(long *)(param_1 + 0x58) != 0) {
    func_0x000107935e94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x000107935e94();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x000107935cfc();
  }
  __ZdlPv();
  func_0x0001000682a4(param_1 + 0x30);
  func_0x000107943884(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 107936654; end: 107936657;  */

void FUN_107936654(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x0001079465bc();
  if (((ulong)unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000107946f50();
  }
  puVar2 = (ulong *)(unaff_x21 + 0x30);
  lVar3 = unaff_x20 + 0x30;
  func_0x00010598fce8();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x48);
    func_0x0001001a53d4();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x50);
    func_0x0001001a53d4();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x58);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010794729c();
        *(ulong **)(unaff_x21 + 0x58) = puVar2;
      }
      else {
        func_0x0001079360b4();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x60);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010794729c();
        *(ulong **)(unaff_x21 + 0x60) = puVar2;
      }
      else {
        func_0x0001079360b4();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x68);
      if (puVar2 == (ulong *)0x0) {
        func_0x00010794517c();
        *(ulong **)(unaff_x21 + 0x68) = unaff_x22;
        puVar2 = unaff_x22;
      }
      else {
        func_0x000107935e54();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x70) != 0) {
    *(int *)(unaff_x21 + 0x70) = *(int *)(unaff_x20 + 0x70);
  }
  if (*(int *)(unaff_x20 + 0x74) != 0) {
    *(int *)(unaff_x21 + 0x74) = *(int *)(unaff_x20 + 0x74);
  }
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x78) = 1;
  }
  func_0x000107946584();
  if ((extraout_x8_01 & 1) == 0) {
    return;
  }
  func_0x00010794672c();
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 107936850; end: 107936927;  */

long * FUN_107936850(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar3;
  int iVar4;
  
  func_0x0001079463c8();
  while (unaff_w22 != unaff_w21) {
    func_0x000107946318();
    func_0x000107946d7c();
  }
  if ((*(byte *)(unaff_x20 + 0x28) & 1) != 0) {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 107936a48; end: 107936a5b;  */

void FUN_107936a48(void)

{
  func_0x0001079369e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107936d64; end: 107936ddf;  */

void FUN_107936d64(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong extraout_x8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed730);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  uVar1 = *(uint *)(unaff_x21 + 0x10);
  *(uint *)(unaff_x19 + 0x10) = uVar1;
  *(undefined4 *)(unaff_x19 + 0x14) = 0;
  uVar3 = *(uint *)(unaff_x21 + 0x28);
  *(uint *)(unaff_x19 + 0x28) = uVar3;
  if ((uVar1 & 1) == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x0001079451cc();
    uVar3 = *(uint *)(unaff_x19 + 0x28);
  }
  *(undefined8 *)(unaff_x19 + 0x18) = unaff_x20;
  if ((uVar3 & 0xfffffffe) == 2) {
    lVar2 = unaff_x21 + 0x20;
    func_0x000107946ba4();
    *(long *)(unaff_x19 + 0x20) = lVar2;
  }
  return;
}



/* Entry: 107936edc; end: 107936f9b;  */

long * FUN_107936edc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  ulong unaff_x22;
  int iVar3;
  
  func_0x000107946704();
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x18) + 0x28);
    param_1 = (long *)0x1;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  if (*(int *)(unaff_x21 + 0x28) == 3) {
    func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x20));
    param_4 = (long *)&UNK_10f4387ea;
    func_0x000107946aa4();
  }
  else {
    unaff_x19 = param_1;
    unaff_x22 = param_3;
    if (*(int *)(unaff_x21 + 0x28) != 2) goto LAB_107936f68;
    unaff_x22 = *(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc;
    func_0x000107946cd0();
    unaff_x19 = param_1;
  }
  func_0x000107946ac0();
  unaff_x20 = unaff_x19;
LAB_107936f68:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)unaff_x22 < 0) {
    unaff_x22 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)unaff_x22 <= *unaff_x19 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)unaff_x22);
  }
  while( true ) {
    iVar3 = ((int)*unaff_x19 - (int)param_4) + 0x10;
    iVar2 = (int)unaff_x22;
    unaff_x22 = (ulong)(uint)(iVar2 - iVar3);
    if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar3);
    param_4 = unaff_x19;
    func_0x000107c303e4(unaff_x19,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar2);
}



/* Entry: 107937260; end: 107937263;  */

undefined8 FUN_107937260(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793722c(param_1);
  return param_1;
}



/* Entry: 107937670; end: 1079376e7;  */

void FUN_107937670(ulong *param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107937284();
  func_0x000107946c18();
  func_0x000107946614();
  puVar3 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar3 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar4 = param_2[1];
  }
  if (uVar4 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x0001079470b8();
  }
  func_0x0001079467d4();
  uVar4 = extraout_x8_00;
  if ((long)extraout_x8_00 < 0) {
    uVar4 = param_2[1];
  }
  if (uVar4 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if (*(ulong *)(unaff_x20 + 0x20) != 0) {
    unaff_x21[4] = *(ulong *)(unaff_x20 + 0x20);
  }
  if (*(ulong *)(unaff_x20 + 0x28) != 0) {
    unaff_x21[5] = *(ulong *)(unaff_x20 + 0x28);
  }
  if (*(ulong *)(unaff_x20 + 0x30) != 0) {
    unaff_x21[6] = *(ulong *)(unaff_x20 + 0x30);
  }
  if (*(ulong *)(unaff_x20 + 0x38) != 0) {
    unaff_x21[7] = *(ulong *)(unaff_x20 + 0x38);
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    *(undefined1 *)(unaff_x21 + 8) = 1;
  }
  iVar1 = *(int *)(unaff_x20 + 0x54);
  if (iVar1 == 0) goto code_r0x00010793764c;
  iVar2 = *(int *)((long)unaff_x21 + 0x54);
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      param_1 = unaff_x21;
      func_0x0001079370ec();
    }
    *(int *)((long)unaff_x21 + 0x54) = iVar1;
  }
  if (iVar1 == 3) {
    if (iVar2 == 3) {
      param_1 = (ulong *)unaff_x21[9];
      func_0x000107936c90();
      goto code_r0x00010793764c;
    }
    func_0x0001079451cc();
  }
  else {
    if (iVar1 != 2) goto code_r0x00010793764c;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[9];
      func_0x00010794736c(*(undefined4 *)(unaff_x20 + 0x54));
      func_0x0001079360b4();
      goto code_r0x00010793764c;
    }
    func_0x00010794729c();
    puVar3 = param_1;
  }
  unaff_x21[9] = (ulong)puVar3;
  param_1 = puVar3;
code_r0x00010793764c:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010794672c();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1079379d0; end: 107937a0f;  */

void FUN_1079379d0(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ee180);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x0001079438d8();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 107937b50; end: 107937b7f;  */

void FUN_107937b50(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107937b80();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107937c90; end: 107937ca3;  */

void FUN_107937c90(void)

{
  func_0x000107937c3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107938044; end: 107938083;  */

void FUN_107938044(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed5f0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x000107943920();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 1079381cc; end: 1079381fb;  */

void FUN_1079381cc(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x0001079381fc();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10793828c; end: 1079382b7;  */

void FUN_10793828c(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10793846c; end: 107938477;  */

undefined ** FUN_10793846c(void)

{
  return &PTR_DAT_1109eee40;
}



/* Entry: 107938770; end: 10793877b;  */

undefined ** FUN_107938770(void)

{
  return &PTR_DAT_1109eee88;
}



/* Entry: 107938990; end: 1079389cb;  */

void FUN_107938990(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946940();
  if ((unaff_x19[2] & 1) != 0) {
    func_0x000107934940(unaff_x19[4]);
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 107938ba4; end: 107938bd7;  */

void FUN_107938ba4(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468f4();
  if (in_NG == in_OV) {
    func_0x000107946cbc();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107938d14; end: 107938d1f;  */

undefined ** FUN_107938d14(void)

{
  return &PTR_DAT_1109eef70;
}



/* Entry: 107938f64; end: 107938f77;  */

void FUN_107938f64(void)

{
  func_0x000107938f0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793940c; end: 10793944b;  */

void FUN_10793940c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed820);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946f70();
  func_0x000107943968();
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  return;
}



/* Entry: 107939594; end: 1079395c3;  */

void FUN_107939594(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x0001079395c4();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 107939654; end: 107939683;  */

void FUN_107939654(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x18) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 107939a00; end: 107939c47;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107939a00(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x000107946fd4();
  if (in_NG == in_OV) {
    func_0x000107947114();
  }
  if (0 < (int)unaff_x19[7]) {
    func_0x0001079472b4();
  }
  if (0 < (int)unaff_x19[10]) {
    func_0x0001053936e4(unaff_x19 + 9);
  }
  uVar1 = (uint)unaff_x19[2];
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010bceb764(unaff_x19[0xc]);
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00010bcebce4(unaff_x19[0xd]);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x00010bcebce4(unaff_x19[0xe]);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      func_0x000107934940(unaff_x19[0xf]);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      func_0x000107931420(unaff_x19[0x10]);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      func_0x000107938478(unaff_x19[0x11]);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      func_0x000107936818(unaff_x19[0x12]);
    }
    if ((uVar1 >> 7 & 1) != 0) {
      func_0x000107937a60(unaff_x19[0x13]);
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      func_0x0001079380d4(unaff_x19[0x14]);
    }
    if ((uVar1 >> 9 & 1) != 0) {
      FUN_10793828c(unaff_x19[0x15]);
    }
    if ((uVar1 >> 10 & 1) != 0) {
      func_0x000107939bd4(unaff_x19[0x16]);
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      func_0x000107939c48(unaff_x19[0x17]);
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[0x18]);
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      func_0x000107939c60(unaff_x19[0x19]);
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      FUN_107938ba4(unaff_x19[0x1a]);
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      func_0x000107939c74(unaff_x19[0x1b]);
    }
  }
  if ((uVar1 & 0x3f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[0x1c]);
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[0x1d]);
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      func_0x00010bcebce4(unaff_x19[0x1e]);
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      func_0x000107939ca8(unaff_x19[0x1f]);
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[0x20]);
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      func_0x00010793949c(unaff_x19[0x21]);
    }
  }
  func_0x000107946df4();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  if ((*unaff_x19 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    unaff_x19 = (ulong *)((*unaff_x19 & 0xfffffffffffffffe) + 8);
  }
  if (*(char *)((long)unaff_x19 + 0x17) < '\0') {
    *(undefined1 *)*unaff_x19 = 0;
    unaff_x19[1] = 0;
    return;
  }
  *(undefined1 *)unaff_x19 = 0;
  *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
  return;
}



/* Entry: 10793a7ec; end: 10793a81b;  */

void FUN_10793a7ec(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x00010793c3b8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*param_1 & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10793a920; end: 10793a9bf;  */

long * FUN_10793a920(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if ((int)param_1[2] != 0) {
    func_0x000107946fc8();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x14) == '\x01') {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x15) == '\x01') {
    func_0x00010794668c();
    func_0x000107946e70();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10793ab34; end: 10793ab77;  */

long FUN_10793ab34(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = ((ulong)((uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x10) +
                  (uint)*(byte *)(param_1 + 0x12)) & 7) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x14) = (int)lVar1;
  return lVar1;
}



/* Entry: 10793ac40; end: 10793ad17;  */

long * FUN_10793ac40(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  int extraout_w8;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x23;
  int iVar4;
  long unaff_x26;
  long *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946448();
  while (unaff_x26 != 0) {
    func_0x000107946378();
    param_1 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      param_1 = (long *)*unaff_x23;
    }
    func_0x000107946894();
    cVar2 = *(char *)((long)unaff_x23 + 0x17);
    if ((((long)cVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x000107946764(), in_NG != in_OV)) {
      func_0x000107946598();
      unaff_x20 = param_1;
    }
    else {
      func_0x0001079469b8();
      if (extraout_w8 < 0) {
        unaff_x23 = (long *)*unaff_x23;
      }
      func_0x0001079464f0();
      unaff_x20 = (long *)((long)unaff_x20 + (long)cVar2);
    }
    func_0x000107946e98();
  }
  if ((*(byte *)(unaff_x21 + 0x28) & 1) != 0) {
    func_0x0001079468c8();
    func_0x000107946bd4();
    func_0x000107946b6c();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if ((long)(int)param_3 <= *param_1 - (long)unaff_x30) {
    _memcpy(unaff_x30);
    return (long *)((long)unaff_x30 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)unaff_x30) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    lVar1 = (long)unaff_x30 + (long)iVar4;
    unaff_x30 = param_1;
    func_0x000107c303e4(param_1,lVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)unaff_x30 + (long)iVar3);
}



/* Entry: 10793adec; end: 10793ae73;  */

undefined ** FUN_10793adec(void)

{
  return &PTR_DAT_1109ef1d8;
}



/* Entry: 10793af6c; end: 10793af77;  */

undefined ** FUN_10793af6c(void)

{
  return &PTR_DAT_1109ef2b8;
}



/* Entry: 10793b108; end: 10793b11b;  */

void FUN_10793b108(void)

{
  func_0x00010793b0dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793b39c; end: 10793b39f;  */

long FUN_10793b39c(long param_1)

{
  func_0x000107946a94();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x00010793b28c(param_1);
  }
  return param_1;
}


