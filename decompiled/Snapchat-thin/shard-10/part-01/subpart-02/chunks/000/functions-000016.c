/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792c15c; end: 10792c163; -[SCNMapSdkResourceRequesterResponse noContent] */

undefined1 FUN_10792c15c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10792c1d8; end: 10792c1df;  */

void FUN_10792c1d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 10792c3c4; end: 10792c3cb; -[SCNMapSdkResourceRequesterTileData z] */

long FUN_10792c3c4(long param_1)

{
  return (long)*(char *)(param_1 + 9);
}



/* Entry: 10792c5f0; end: 10792c5fb;  */

long FUN_10792c5f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ebcf8;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x00010792c7c4();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10792c86c; end: 10792c877;  */

void FUN_10792c86c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792ccd8; end: 10792cd2b; -[SCNBitmojiFetcherCallback .cxx_destruct] */

void FUN_10792ccd8(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebdd8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072fbdc4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792d338; end: 10792d3b7;  */

void FUN_10792d338(long param_1)

{
  func_0x00010015b888(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xd0);
  func_0x0001001148fc(param_1 + 0xa8);
  func_0x0001001148fc(param_1 + 0x88);
  func_0x0001000e30f4(param_1 + 0x70);
  func_0x0001001148fc(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 10792d560; end: 10792d5a3;  */

void FUN_10792d560(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  __ZNSt13runtime_errorC2EPKc(param_1,&UNK_10f436e6f);
  *param_1 = &PTR_DAT_1109ebe10;
  param_1[2] = param_2;
  param_1[3] = param_3;
  return;
}



/* Entry: 10792d690; end: 10792d6fb;  */

void FUN_10792d690(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  
  func_0x00010bfe02c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100626d7c(auStack_48);
  func_0x00010028acf0(param_1,auStack_48);
  func_0x00010028ad98(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10792d9bc; end: 10792d9e7;  */

void FUN_10792d9bc(long *param_1)

{
  if (*param_1 != 0) {
    func_0x00010792da80();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10792ddb0; end: 10792ddb3;  */

void FUN_10792ddb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109ebf00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10792df58; end: 10792df63;  */

long FUN_10792df58(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 8;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ebec0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10792e124; end: 10792e12b;  */

bool FUN_10792e124(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10792e2e8; end: 10792e2eb;  */

bool FUN_10792e2e8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10792e4b8; end: 10792e4bb;  */

bool FUN_10792e4b8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10792e6a8; end: 10792e6f3; +[SMSdkCameraOptions descriptor] */

void FUN_10792e6a8(void)

{
  long lVar1;
  
  if (lRam0000000113726c00 == 0) {
    lVar1 = lRam0000000113726c00;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930b58();
    lRam0000000113726c00 = lVar1;
  }
  return;
}



/* Entry: 10792e958; end: 10792e9a3; +[SMSdkFeature_Property_Value_NullValue descriptor] */

long FUN_10792e958(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c40;
  if (lRam0000000113726c40 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x000107930a70();
  }
  lRam0000000113726c40 = lVar1;
  return lVar1;
}



/* Entry: 10792ebd4; end: 10792ec17; +[SMSdkGetPlacesProfileResponse descriptor] */

void FUN_10792ebd4(void)

{
  long lVar1;
  
  if (lRam0000000113726c80 == 0) {
    lVar1 = lRam0000000113726c80;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726c80 = lVar1;
  }
  return;
}



/* Entry: 10792ee64; end: 10792eea7; +[SMSdkWorldEffectSet descriptor] */

void FUN_10792ee64(void)

{
  long lVar1;
  
  if (lRam0000000113726cc0 == 0) {
    lVar1 = lRam0000000113726cc0;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726cc0 = lVar1;
  }
  return;
}



/* Entry: 10792f144; end: 10792f193; +[SMSdkFriendFeedItem descriptor] */

void FUN_10792f144(void)

{
  long lVar1;
  
  if (lRam0000000113726d00 == 0) {
    lVar1 = lRam0000000113726d00;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930ac0();
    lRam0000000113726d00 = lVar1;
  }
  return;
}



/* Entry: 10792f384; end: 10792f3db; +[SMSdkStickerOverrides_StickerOverride descriptor] */

long FUN_10792f384(long param_1)

{
  if (lRam0000000113726d40 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c228780();
    lRam0000000113726d40 = param_1;
  }
  return lRam0000000113726d40;
}



/* Entry: 10792f5e4; end: 10792f62f; +[SMSdkLocationSharingPreferences descriptor] */

void FUN_10792f5e4(void)

{
  long lVar1;
  
  if (lRam0000000113726d80 == 0) {
    lVar1 = lRam0000000113726d80;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a44();
    lRam0000000113726d80 = lVar1;
  }
  return;
}



/* Entry: 10792f870; end: 10792f8bf; +[SMSdkFriendInfo descriptor] */

void FUN_10792f870(void)

{
  long lVar1;
  
  if (lRam0000000113726dc0 == 0) {
    lVar1 = lRam0000000113726dc0;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a98();
    lRam0000000113726dc0 = lVar1;
  }
  return;
}



/* Entry: 10792fb08; end: 10792fb57; +[SMSdkMapSdkSessionInitializationParams descriptor] */

void FUN_10792fb08(void)

{
  long lVar1;
  
  if (lRam0000000113726e00 == 0) {
    lVar1 = lRam0000000113726e00;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930ac0();
    lRam0000000113726e00 = lVar1;
  }
  return;
}



/* Entry: 10792fd94; end: 10792fddf; +[SMSdkTriggerParams descriptor] */

void FUN_10792fd94(void)

{
  long lVar1;
  
  if (lRam0000000113726e40 == 0) {
    lVar1 = lRam0000000113726e40;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a44();
    lRam0000000113726e40 = lVar1;
  }
  return;
}



/* Entry: 107930058; end: 1079300ab; +[SMSdkRelativeDateTimeFormatOptions descriptor] */

void FUN_107930058(void)

{
  long lVar1;
  
  if (lRam0000000113726e80 == 0) {
    lVar1 = lRam0000000113726e80;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    lRam0000000113726e80 = lVar1;
  }
  return;
}



/* Entry: 1079302e8; end: 107930357; +[SMSdkMapBrowsingContext_PlaceProfileBrowsingContext descriptor] */

long FUN_1079302e8(long param_1)

{
  if (lRam0000000113726ec0 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a98();
    func_0x00010c2289e0();
    func_0x000107930ae4();
    lRam0000000113726ec0 = param_1;
  }
  return lRam0000000113726ec0;
}



/* Entry: 10793056c; end: 1079305cb; +[SMSdkEnableInspectorRequest descriptor] */

long FUN_10793056c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726f00;
  if (lRam0000000113726f00 == 0) {
    func_0x0001079309f4();
    func_0x000107930a20();
    func_0x0001079309b4();
  }
  lRam0000000113726f00 = lVar1;
  return lVar1;
}



/* Entry: 10793081c; end: 107930877; +[SMSdkViewportInfo_Timezone descriptor] */

long FUN_10793081c(long param_1)

{
  if (lRam0000000113726f40 == 0) {
    func_0x000107930980();
    func_0x000107930a2c();
    func_0x00010c2289e0();
    func_0x000107930aa0();
    lRam0000000113726f40 = param_1;
  }
  return lRam0000000113726f40;
}



/* Entry: 107930ba4; end: 107930bc3;  */

undefined ** FUN_107930ba4(void)

{
  return &PTR_DAT_1109ec030;
}



/* Entry: 107930db4; end: 107930e03;  */

void FUN_107930db4(long param_1)

{
  ulong *puVar1;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x0001053936e4(param_1 + 0x10);
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
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



/* Entry: 1079310e8; end: 107931117;  */

long * FUN_1079310e8(long *param_1)

{
  if (*param_1 != 0) {
    func_0x0001000681a0(param_1);
  }
  return param_1;
}



/* Entry: 10793126c; end: 1079312df;  */

long * FUN_10793126c(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010794668c();
    func_0x000107946a50();
    func_0x000107946ec8();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010794668c();
    func_0x000107947244();
    func_0x00010794714c();
    func_0x000107946ec8();
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



/* Entry: 107931414; end: 107931433;  */

undefined ** FUN_107931414(void)

{
  return &PTR_DAT_1109ee390;
}



/* Entry: 107931590; end: 1079315c3;  */

undefined8 FUN_107931590(undefined8 param_1)

{
  func_0x000107947410();
  func_0x000107931538();
  return param_1;
}



/* Entry: 1079317b8; end: 1079317db;  */

undefined8 FUN_1079317b8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107931990; end: 10793199f;  */

undefined1  [16] FUN_107931990(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107946da8();
  puVar1 = param_1 + 0x20;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 107931ad8; end: 107931adb;  */

void FUN_107931ad8(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107931b0c();
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



/* Entry: 107931bf8; end: 107931d03;  */

void FUN_107931bf8(long param_1)

{
  ulong *puVar1;
  
  func_0x000107931b1c();
  puVar1 = (ulong *)(param_1 + 8);
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



/* Entry: 107931e54; end: 107931ebb;  */

long * FUN_107931e54(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
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



/* Entry: 107931f9c; end: 107931faf;  */

void FUN_107931f9c(void)

{
  func_0x000107931f74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793210c; end: 107932197;  */

long * FUN_10793210c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001079464c0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107932150;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107932150;
  param_4 = (long *)&UNK_10f43821a;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107932150:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    func_0x0001079466f0();
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
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107932444; end: 107932457;  */

void FUN_107932444(void)

{
  func_0x000107932414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107932654; end: 1079326fb;  */

void FUN_107932654(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109edaa0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946c64();
  if ((uint)extraout_x8_00 < 8) {
                    /* WARNING: Could not recover jumptable at 0x00010793269c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dedef27)[extraout_x8_00] * 4 + 0x1079326a0))();
    return;
  }
  return;
}



/* Entry: 107932968; end: 107932997;  */

void FUN_107932968(ulong *param_1,ulong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  uVar3 = param_2 == param_1;
  if ((bool)uVar3) {
    return;
  }
  func_0x00010068f438();
  func_0x0001079320dc();
  func_0x000107946c18();
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 == 0) goto code_r0x0001079323c4;
  func_0x000107947068();
  if (!(bool)uVar3) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x000107932594();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  bVar2 = iVar1 + -1 == 7;
  switch(iVar1 + -1) {
  case 0:
    *(undefined1 *)(unaff_x21 + 2) = *(undefined1 *)(unaff_x20 + 0x10);
    break;
  case 1:
    func_0x0001079471b8();
    if (!bVar2) {
      unaff_x21[2] = extraout_x8;
    }
    func_0x000107946e78();
    break;
  case 2:
  case 3:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    break;
  case 4:
    unaff_x21[2] = *(ulong *)(unaff_x20 + 0x10);
    break;
  case 5:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107931f28();
      break;
    }
    func_0x000107946bdc();
    func_0x000107944e7c();
    goto code_r0x0001079323c0;
  case 6:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107946f24();
      func_0x000107931f68();
      break;
    }
    func_0x000107946bdc();
    func_0x000107944ecc();
    goto code_r0x0001079323c0;
  case 7:
    if (unaff_w24 == iVar1) {
      param_1 = (ulong *)unaff_x21[2];
      func_0x000107946bbc();
      func_0x000107932554();
      break;
    }
    func_0x000107946bdc();
    func_0x000107944f1c();
code_r0x0001079323c0:
    unaff_x21[2] = (ulong)param_1;
  }
code_r0x0001079323c4:
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



/* Entry: 107932a4c; end: 107932adf;  */

long * FUN_107932a4c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0001079464c0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107932a90;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107932a90;
  param_4 = (long *)&UNK_10f43828c;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107932a90:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x18);
    param_1 = (long *)0x3;
    func_0x0001079467f0();
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
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107932d0c; end: 107932d5b;  */

undefined8 FUN_107932d0c(long param_1)

{
  long extraout_x8;
  undefined8 unaff_x19;
  
  func_0x000100067de0(param_1 + 0x30);
  func_0x000100067de0(param_1 + 0x38);
  func_0x000100067de0(param_1 + 0x40);
  func_0x000100067de0(param_1 + 0x48);
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000107931b98();
  }
  __ZdlPv();
  func_0x000107946d94(param_1 + 0x18);
  if (extraout_x8 != 0) {
    func_0x000107946c24();
  }
  return unaff_x19;
}



/* Entry: 107933160; end: 10793316f;  */

void FUN_107933160(long *param_1,long param_2)

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



/* Entry: 107933354; end: 10793335f;  */

undefined ** FUN_107933354(void)

{
  return &PTR_DAT_1109ee700;
}



/* Entry: 107933774; end: 10793379f;  */

undefined8 FUN_107933774(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 1079339a4; end: 1079339a7;  */

long FUN_1079339a4(long param_1)

{
  func_0x000107946a94();
  func_0x0001079437e4(param_1 + 0x10);
  return param_1;
}



/* Entry: 107933b00; end: 107933b2b;  */

undefined8 * FUN_107933b00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ed000;
  param_1[1] = param_2;
  func_0x000107933b2c();
  return param_1;
}



/* Entry: 107933c14; end: 107933dcb;  */

byte * FUN_107933c14(byte *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  byte bVar2;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar3;
  ulong uVar4;
  long extraout_x8;
  byte *unaff_x19;
  long unaff_x20;
  byte *unaff_x21;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *unaff_x23;
  int iVar9;
  byte *unaff_x30;
  
  func_0x000107946ffc();
  func_0x000107946984();
  uVar6 = *(uint *)(param_1 + 0x18);
  pbVar5 = &UNK_10f4383e8;
  while ((uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x000107946378();
    puVar3 = unaff_x23;
    if (param_2 < 0) {
      param_2 = unaff_x23[1];
      puVar3 = (undefined8 *)*unaff_x23;
    }
    func_0x000107946894(puVar3);
    bVar2 = *(byte *)((long)unaff_x23 + 0x17);
    if ((((long)(char)bVar2 < 0) && (func_0x000107946ea4(), !(bool)in_ZR && in_NG == in_OV)) ||
       (func_0x00010794731c(), in_NG != in_OV)) {
      param_2 = 1;
      param_1 = unaff_x19;
      func_0x00010794726c();
      unaff_x21 = param_1;
    }
    else {
      *unaff_x21 = 10;
      unaff_x21[1] = bVar2;
      if (*(char *)((long)unaff_x23 + 0x17) < '\0') {
        unaff_x23 = (undefined8 *)*unaff_x23;
      }
      param_1 = unaff_x21 + 2;
      func_0x0001079468a0();
      unaff_x21 = unaff_x21 + 2 + (char)bVar2;
    }
    func_0x000107946e98();
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x40));
  if (param_2 < 0) {
    pbVar5 = (byte *)0x616e732e70616e73;
  }
  else if ((int)param_2 == 0) goto LAB_107933cfc;
  unaff_x30 = &UNK_10f43841d;
  func_0x000107946aa4();
  func_0x000107946cd0();
  func_0x000107946758();
  param_1 = pbVar5;
  unaff_x21 = pbVar5;
LAB_107933cfc:
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x0001079466b8();
    func_0x000107946e70();
    func_0x000107946a6c();
    unaff_x21 = param_1;
  }
  uVar6 = *(uint *)(unaff_x20 + 0x38);
  if (uVar6 != 0) {
    func_0x0001079466b8();
    pbVar5 = param_1 + 2;
    *param_1 = 0x22;
    for (; 0x7f < uVar6; uVar6 = uVar6 >> 7) {
      pbVar5[-1] = (byte)uVar6 | 0x80;
      pbVar5 = pbVar5 + 1;
    }
    pbVar5[-1] = (byte)uVar6;
    piVar8 = *(int **)(unaff_x20 + 0x30);
    piVar1 = piVar8 + *(int *)(unaff_x20 + 0x28);
    do {
      func_0x0001079466b8();
      uVar4 = (ulong)*piVar8;
      pbVar5 = param_1;
      while( true ) {
        unaff_x21 = pbVar5 + 1;
        if (uVar4 < 0x80) break;
        *pbVar5 = (byte)uVar4 | 0x80;
        uVar4 = uVar4 >> 7;
        pbVar5 = unaff_x21;
      }
      piVar8 = piVar8 + 1;
      *pbVar5 = (byte)uVar4;
    } while (piVar8 < piVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x000107946ee4();
    if (*(long *)param_1 - (long)unaff_x30 < (long)(int)param_3) {
      while( true ) {
        iVar9 = ((int)*(undefined8 *)param_1 - (int)unaff_x30) + 0x10;
        iVar7 = (int)param_3;
        param_3 = (ulong)(uint)(iVar7 - iVar9);
        if (iVar7 - iVar9 == 0 || iVar7 < iVar9) break;
        func_0x00010b4d5738();
        pbVar5 = unaff_x30 + iVar9;
        unaff_x30 = param_1;
        func_0x000107c303e4(param_1,pbVar5);
      }
      func_0x00010b4d5738();
      return unaff_x30 + iVar7;
    }
    _memcpy(unaff_x30);
    return unaff_x30 + (int)param_3;
  }
  return unaff_x21;
}



/* Entry: 107934040; end: 10793417f;  */

long * FUN_107934040(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  func_0x000107946704();
  uVar2 = *(uint *)(param_1 + 2);
  puVar4 = (undefined8 *)(ulong)uVar2;
  if ((uVar2 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_1 = (long *)0x1;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x28);
    func_0x0001079466f0();
    unaff_x20 = param_1;
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (puVar4[1] == 0) goto LAB_1079340bc;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if ((int)param_2 == 0) goto LAB_1079340bc;
  param_4 = (long *)&UNK_10f43844f;
  func_0x000107946aa4(puVar4);
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1079340bc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107934340; end: 1079343f7;  */

long * FUN_107934340(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 107934560; end: 107934563;  */

void FUN_107934560(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
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



/* Entry: 107934698; end: 1079346c3;  */

undefined8 FUN_107934698(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  return param_1;
}



/* Entry: 10793491c; end: 10793491f;  */

undefined8 FUN_10793491c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  func_0x000107946c10();
  func_0x000107946f1c();
  func_0x0001079470b0();
  return param_1;
}



/* Entry: 107934c74; end: 107934c9f;  */

undefined8 FUN_107934c74(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107934ca0(param_1);
  return param_1;
}



/* Entry: 107934e98; end: 107934f5f;  */

long FUN_107934e98(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long extraout_x8_01;
  long extraout_x9;
  long unaff_x19;
  long lVar2;
  
  func_0x000107946514();
  if (extraout_x8 < 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_107934ec4;
LAB_107934eb0:
    func_0x0001001a5744();
    lVar2 = param_1 + 1;
  }
  else {
    if (extraout_x8 != 0) goto LAB_107934eb0;
LAB_107934ec4:
    lVar2 = 0;
  }
  func_0x0001079468ac();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  if (*(int *)(unaff_x19 + 0x20) != 0) {
    lVar2 = lVar2 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x20)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(unaff_x19 + 0x34) == 0x65) {
    func_0x0001006016cc(*(ulong *)(unaff_x19 + 0x28) & 0xfffffffffffffffc);
  }
  else {
    if (*(int *)(unaff_x19 + 0x34) != 100) goto LAB_107934f34;
    func_0x000107946f5c(*(undefined8 *)(unaff_x19 + 0x28));
  }
  func_0x000107947050();
LAB_107934f34:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar1 = extraout_x8_01;
    if (extraout_x8_01 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    lVar2 = lVar1 + lVar2;
  }
  *(int *)(unaff_x19 + 0x30) = (int)lVar2;
  return lVar2;
}



/* Entry: 1079351a8; end: 1079351b3;  */

undefined ** FUN_1079351a8(void)

{
  return &PTR_DAT_1109eea00;
}



/* Entry: 10793587c; end: 10793587f;  */

long FUN_10793587c(long param_1)

{
  func_0x000107946a94();
  if (*(int *)(param_1 + 0x1c) != 0) {
    func_0x0001079357ec(param_1);
  }
  return param_1;
}



/* Entry: 107935aac; end: 107935abf;  */

void FUN_107935aac(void)

{
  func_0x000107935a80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107935d40; end: 107935d4b;  */

undefined ** FUN_107935d40(void)

{
  return &PTR_DAT_1109eeae0;
}



/* Entry: 107935e94; end: 107935ebf;  */

undefined8 FUN_107935e94(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107935ec0(param_1);
  return param_1;
}



/* Entry: 1079360b0; end: 1079360b3;  */

void FUN_1079360b0(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946430();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946bb4();
  }
  func_0x0001079467d4();
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946d64();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107947144();
  }
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



/* Entry: 10793622c; end: 1079362bf;  */

void FUN_10793622c(void)

{
  uint uVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar2;
  
  func_0x000107946fd4();
  if (in_NG == in_OV) {
    func_0x000107947114();
  }
  func_0x0001000636c0(unaff_x19 + 0x30);
  func_0x00010029b2d4(unaff_x19 + 0x48);
  func_0x00010029b2d4(unaff_x19 + 0x50);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 7) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107935f04(*(undefined8 *)(unaff_x19 + 0x58));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107935f04(*(undefined8 *)(unaff_x19 + 0x60));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x000107935d4c(*(undefined8 *)(unaff_x19 + 0x68));
    }
  }
  puVar2 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x78) = 0;
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
  *(undefined4 *)(unaff_x19 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 1079367f4; end: 1079367f7;  */

long FUN_1079367f4(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 107936978; end: 1079369e3;  */

void FUN_107936978(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x000107946698();
  func_0x000107946d88(&PTR_DAT_1109ed2d0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  func_0x000107946b2c();
  *(undefined8 *)(unaff_x19 + 0x10) = param_1;
  lVar2 = unaff_x21 + 0x18;
  func_0x000107946ba4();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x28) = 0;
  iVar1 = *(int *)(unaff_x21 + 0x2c);
  *(int *)(unaff_x19 + 0x2c) = iVar1;
  if (iVar1 - 1U < 2) {
    lVar2 = unaff_x21 + 0x20;
    func_0x000107946ba4();
    *(long *)(unaff_x19 + 0x20) = lVar2;
  }
  return;
}



/* Entry: 107936ad0; end: 107936bef;  */

long * FUN_107936ad0(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946704();
  if (*(int *)((long)param_1 + 0x2c) == 2) {
    func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x20));
    param_1 = unaff_x22;
    if (param_2 < 0) {
      param_2 = unaff_x22[1];
      param_1 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f43877c;
    func_0x000107946aa4();
    func_0x000107946cd0();
    param_3 = unaff_x22;
LAB_107936b38:
    func_0x000107946ac0();
    unaff_x20 = param_1;
  }
  else if (*(int *)((long)param_1 + 0x2c) == 1) {
    param_2 = 1;
    param_1 = unaff_x19;
    param_3 = (long *)(*(ulong *)(unaff_x21 + 0x20) & 0xfffffffffffffffc);
    goto LAB_107936b38;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    param_2 = 0;
    if (unaff_x22[1] != 0) goto LAB_107936b64;
  }
  else if ((int)param_2 != 0) {
LAB_107936b64:
    param_4 = (long *)&UNK_10f4387a1;
    func_0x000107946aa4();
    param_2 = 3;
    param_1 = unaff_x19;
    func_0x000107946674();
    unaff_x20 = param_1;
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107936bbc;
  }
  else if ((int)param_2 == 0) goto LAB_107936bbc;
  param_4 = (long *)&UNK_10f4387c6;
  func_0x000107946aa4();
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_107936bbc:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x000107946b90();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar3);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107936e4c; end: 107936e5f;  */

void FUN_107936e4c(void)

{
  func_0x000107936de0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079370ec; end: 10793716b;  */

void FUN_1079370ec(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  
  if (*(int *)(param_1 + 0x54) == 3) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_107937148;
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x0001079369e4();
    }
  }
  else {
    if (*(int *)(param_1 + 0x54) != 2) goto LAB_107937148;
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_107937148;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_107935e94();
    }
  }
  __ZdlPv();
LAB_107937148:
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



/* Entry: 1079372c8; end: 107937417;  */

long * FUN_1079372c8(undefined8 param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x000107946984();
  func_0x000107946824();
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1079372fc;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1079372fc:
      param_4 = (long *)&UNK_10f438821;
      func_0x000107946aa4();
      func_0x000107946634();
      unaff_x21 = plVar2;
    }
  }
  plVar2 = (long *)(ulong)*(uint *)(unaff_x20 + 0x54);
  if ((*(uint *)(unaff_x20 + 0x54) & 0xfffffffe) == 2) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x48) + 0x28);
    func_0x0001079467ac();
    unaff_x21 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x000107946f3c();
    func_0x000100628298();
    unaff_x21 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x40) == '\x01') {
    func_0x0001079466b8();
    func_0x00010794703c();
    func_0x0001079466ac();
    unaff_x21 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107946f3c();
    func_0x000106af68d0();
    unaff_x21 = plVar2;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107946f3c();
    func_0x000106af6880();
    unaff_x21 = plVar2;
  }
  lVar3 = *(long *)(unaff_x20 + 0x38);
  if (lVar3 != 0) {
    func_0x000107946f3c();
    func_0x00010599ce18();
    unaff_x21 = plVar2;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x18));
  if (lVar3 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1079373e4;
  }
  else if ((int)lVar3 == 0) goto LAB_1079373e4;
  param_4 = (long *)&UNK_10f43884e;
  func_0x000107946aa4();
  func_0x000107946758();
  plVar2 = unaff_x19;
  unaff_x21 = unaff_x19;
LAB_1079373e4:
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
  if (*plVar2 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar5 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107937748; end: 107937753;  */

undefined ** FUN_107937748(void)

{
  return &PTR_DAT_1109eecd8;
}



/* Entry: 107937a54; end: 107937a5f;  */

undefined ** FUN_107937a54(void)

{
  return &PTR_DAT_1109eed20;
}



/* Entry: 107937bc4; end: 107937c3b;  */

void FUN_107937bc4(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946c50();
  func_0x000107946d88(&PTR_DAT_1109ec2e0);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  lVar2 = unaff_x20 + 0x10;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x10) = lVar2;
  lVar2 = unaff_x20 + 0x18;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x18) = lVar2;
  lVar2 = unaff_x20 + 0x20;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x20) = lVar2;
  lVar2 = unaff_x20 + 0x28;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x28) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x3c) = 0;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined4 *)(unaff_x19 + 0x38) = uVar1;
  return;
}



/* Entry: 107937e50; end: 107937f23;  */

long FUN_107937e50(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long unaff_x19;
  long lVar3;
  
  func_0x000107946514();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar3 = param_1 + 1;
  }
  func_0x0001079468ac();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    func_0x000107946714();
    iVar1 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x38) != 0) {
    func_0x000107946e08((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x38)) * iVar1 + 0x280);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_03;
    if (extraout_x8_03 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x3c) = (int)lVar3;
  return lVar3;
}



/* Entry: 1079380c8; end: 1079380d3;  */

undefined ** FUN_1079380c8(void)

{
  return &PTR_DAT_1109eeda8;
}



/* Entry: 107938240; end: 107938267;  */

undefined8 FUN_107938240(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 1079383c4; end: 1079383ef;  */

void FUN_1079383c4(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
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



/* Entry: 10793863c; end: 107938713;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793863c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x000107947080();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x28) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x30);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x30) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
  }
  func_0x000107946584();
  if ((extraout_x8 & 1) != 0) {
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



/* Entry: 107938934; end: 10793896b;  */

long FUN_107938934(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x0001079348e8();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107938b48; end: 107938b7f;  */

long FUN_107938b48(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 107938cc4; end: 107938cd3;  */

void FUN_107938cc4(long *param_1,long param_2)

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



/* Entry: 107938e90; end: 107938f0b;  */

void FUN_107938e90(void)

{
  long lVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107946c50();
  func_0x000107946d88(&PTR_DAT_1109ec650);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  lVar1 = unaff_x20 + 0x10;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x10) = lVar1;
  lVar1 = unaff_x20 + 0x18;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x18) = lVar1;
  lVar1 = unaff_x20 + 0x20;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x20) = lVar1;
  lVar1 = unaff_x20 + 0x28;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x28) = lVar1;
  lVar1 = unaff_x20 + 0x30;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x30) = lVar1;
  *(undefined4 *)(unaff_x19 + 0x48) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  return;
}



/* Entry: 107939198; end: 1079392a7;  */

long FUN_107939198(long param_1)

{
  int iVar1;
  int extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x9;
  long unaff_x19;
  long lVar3;
  
  func_0x000107946514();
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_1 + 8);
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    func_0x0001001a5744();
    lVar3 = param_1 + 1;
  }
  func_0x0001079468ac();
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x20));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x28));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x30));
  lVar2 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  iVar1 = -9;
  if (*(long *)(unaff_x19 + 0x38) != 0) {
    func_0x000107946714();
    iVar1 = extraout_w8;
  }
  if (*(int *)(unaff_x19 + 0x40) != 0) {
    lVar3 = lVar3 + (ulong)((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x40)) * iVar1 + 0x280U >> 6) +
            1;
  }
  if (*(int *)(unaff_x19 + 0x44) != 0) {
    func_0x000107946e08((int)LZCOUNT((long)*(int *)(unaff_x19 + 0x44)) * iVar1 + 0x280);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar2 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(unaff_x19 + 0x48) = (int)lVar3;
  return lVar3;
}



/* Entry: 107939490; end: 10793949b;  */

undefined ** FUN_107939490(void)

{
  return &PTR_DAT_1109ef000;
}



/* Entry: 107939608; end: 10793962f;  */

undefined8 FUN_107939608(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10793982c; end: 1079399db;  */

void FUN_10793982c(long param_1)

{
  if (*(long *)(param_1 + 0x60) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x78) != 0) {
    func_0x0001079348e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x80) != 0) {
    func_0x000107931394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x88) != 0) {
    func_0x0001079383f0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x0001079367bc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x98) != 0) {
    func_0x000107937a10();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa0) != 0) {
    func_0x000107938084();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_107938240();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb0) != 0) {
    func_0x00010793b630();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xb8) != 0) {
    func_0x00010793aa04();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xc0) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 200) != 0) {
    FUN_10793b818();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_107938b48();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xd8) != 0) {
    func_0x00010793c2a0();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xe0) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xe8) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xf0) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_10793a8d8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x100) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x108) != 0) {
    func_0x00010793944c();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x0001000681a0();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x0001000681a0();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x000107946c24();
  }
  return;
}



/* Entry: 107939cc0; end: 10793a297;  */

/* WARNING: Type propagation algorithm not settling */

long * FUN_107939cc0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  uVar1 = *(uint *)(param_1 + 2);
  if ((uVar1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x60);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001079467a0();
    param_4 = param_1;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x68);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x0001079469d8();
    param_4 = param_1;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x70);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x000107946a38();
    param_4 = param_1;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x78);
    param_3 = (ulong)*(uint *)(param_2 + 0x34);
    param_4 = (long *)0x4;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x80);
    param_3 = (ulong)*(uint *)(param_2 + 0x20);
    param_4 = (long *)0x5;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 5 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x88);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x7;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 6 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x90);
    param_3 = (ulong)*(uint *)(param_2 + 0x2c);
    param_4 = (long *)0x8;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 7 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x98);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0x9;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 8 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xa0);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0xa;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 9 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xa8);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0xb;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 10 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xb0);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0xc;
    func_0x000107946a9c();
  }
  iVar4 = *(int *)(unaff_x20 + 0x20);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0xd;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xb8);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0xe;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xc0);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0xf;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 200);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x10;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xd0);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0x11;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0xf & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xd8);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0x12;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xe0);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x13;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xe8);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x14;
    func_0x000107946a9c();
  }
  iVar4 = *(int *)(unaff_x20 + 0x38);
  for (iVar3 = 0; iVar4 != iVar3; iVar3 = iVar3 + 1) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    param_4 = (long *)0x15;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xf0);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_4 = (long *)0x16;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0xf8);
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    param_4 = (long *)0x17;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0x14 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x100);
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_4 = (long *)0x18;
    func_0x000107946a9c();
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    param_2 = *(long *)(unaff_x20 + 0x108);
    param_3 = (ulong)*(uint *)(param_2 + 0x28);
    param_4 = (long *)0x19;
    func_0x000107946a9c();
  }
  iVar3 = *(int *)(unaff_x20 + 0x50);
  while (iVar3 != 0) {
    func_0x00010794635c();
    param_3 = (ulong)*(uint *)(param_2 + 0x1c);
    func_0x000107946a9c(0x1a);
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



/* Entry: 10793a8d8; end: 10793a8fb;  */

undefined8 FUN_10793a8d8(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793aa5c; end: 10793aa5f;  */

undefined8 FUN_10793aa5c(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793abec; end: 10793abef;  */

undefined8 FUN_10793abec(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793ada4; end: 10793adaf;  */

void FUN_10793ada4(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
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



/* Entry: 10793aeb0; end: 10793af2b;  */

undefined ** FUN_10793aeb0(void)

{
  return &PTR_DAT_1109ef248;
}



/* Entry: 10793b0ac; end: 10793b0af;  */

void FUN_10793b0ac(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464ac();
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



/* Entry: 10793b20c; end: 10793b25b;  */

void FUN_10793b20c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010794656c();
  while (unaff_x22 != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 10793b4ec; end: 10793b4ef;  */

void FUN_10793b4ec(ulong *param_1)

{
  int iVar1;
  undefined1 in_ZR;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  int unaff_w24;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    func_0x000107947068();
    if (!(bool)in_ZR) {
      if (unaff_w24 != 0) {
        param_1 = unaff_x21;
        func_0x00010793b28c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        FUN_10793ada4();
        goto code_r0x00010793b614;
      }
      func_0x000107946bdc();
      FUN_10794564c();
      break;
    case 2:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x000107946f24();
        func_0x00010793ae68();
        goto code_r0x00010793b614;
      }
      func_0x000107946bdc();
      func_0x00010794569c();
      break;
    case 3:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010793b0b0();
        goto code_r0x00010793b614;
      }
      func_0x000107946bdc();
      func_0x0001079456ec();
      break;
    case 4:
      if (unaff_w24 == iVar1) {
        func_0x0001079467c4();
        func_0x00010793b260();
        goto code_r0x00010793b614;
      }
      func_0x000107946bdc();
      func_0x000107945738();
      break;
    default:
      goto code_r0x00010793b614;
    }
    unaff_x21[2] = (ulong)param_1;
  }
code_r0x00010793b614:
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



/* Entry: 10793b818; end: 10793b83b;  */

undefined8 FUN_10793b818(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793b93c; end: 10793b94f;  */

void FUN_10793b93c(void)

{
  func_0x00010793b914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


