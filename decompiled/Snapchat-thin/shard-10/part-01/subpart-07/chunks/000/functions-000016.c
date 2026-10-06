/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792a7b4; end: 10792a82b; -[SCNMapSdkResourceRequesterCacheDeleteCallback initWithCpp:] */

undefined1 * FUN_10792a7b4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f8e70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        func_0x00010792a97c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072d6628(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10792aaec; end: 10792aafb;  */

void FUN_10792aaec(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792b084; end: 10792b36b; -[SCNMapSdkResourceRequesterResource initWithKind:loadingMethod:usage:priority:url:cacheKeyOverride:tileData:priorModified:priorExpires:priorEtag:priorData:minimumUpdateInterval:storagePolicy:cacheControlFallback:httpMethod:requestBody:requestHeaders:] */

undefined8 *
FUN_10792b084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  puStack_70 = PTR_PTR_1126f8e80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_3;
    puVar1[2] = param_4;
    puVar1[3] = param_5;
    puVar1[4] = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x00010792b470(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x00010792b470(uVar3);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x00010792b470(uVar3);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    puVar1[0xc] = param_14;
    puVar1[0xd] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    func_0x00010792b470(uVar3);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    uVar2 = param_19;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = uVar2;
    func_0x00010792b470(uVar3);
  }
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 10792b3a4; end: 10792b3ab; -[SCNMapSdkResourceRequesterResource priorModified] */

undefined8 FUN_10792b3a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10792b3e4; end: 10792b3eb; -[SCNMapSdkResourceRequesterResource requestBody] */

undefined8 FUN_10792b3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 10792b730; end: 10792b7e7; -[SCNMapSdkResourceRequesterResourceRequester deleteCachedEntriesForUrlPattern:callback:] */

void FUN_10792b730(void)

{
  long unaff_x21;
  long *plVar1;
  undefined1 auStack_48 [24];
  
  func_0x00010792b8f8();
  func_0x00010792b924();
  plVar1 = *(long **)(unaff_x21 + 0x18);
  func_0x0001000fbca4(auStack_48);
  func_0x00010792b92c();
  func_0x00010792b914(*(undefined8 *)(*plVar1 + 0x28));
  func_0x00010792b90c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x00010792b8e8();
  func_0x00010792b8f0();
  return;
}



/* Entry: 10792badc; end: 10792bb37; -[SCNMapSdkResourceRequesterResourceRequesterCallback .cxx_destruct] */

void FUN_10792badc(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebc90;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x0001072d6568((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792c144; end: 10792c14b; -[SCNMapSdkResourceRequesterResponse source] */

undefined8 FUN_10792c144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10792c184; end: 10792c18b; -[SCNMapSdkResourceRequesterResponse expires] */

undefined8 FUN_10792c184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10792c3ac; end: 10792c3b3; -[SCNMapSdkResourceRequesterTileData pixelRatio] */

long FUN_10792c3ac(long param_1)

{
  return (long)*(char *)(param_1 + 8);
}



/* Entry: 10792c4d8; end: 10792c5d7;  */

void FUN_10792c4d8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1109ebd38;
  puVar4[3] = &PTR_DAT_1109ebdb0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x0001000de520();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_DAT_1109ebd88;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10792c784(&uStack_50);
  return;
}



/* Entry: 10792c784; end: 10792c7af;  */

long FUN_10792c784(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10792cac8; end: 10792cb3f; -[SCNBitmojiFetcherCallback initWithCpp:] */

undefined1 * FUN_10792cac8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126f8eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10792ce7c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0001072fbdc4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10792ce7c; end: 10792ceab;  */

void FUN_10792ce7c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10792d4b0; end: 10792d4eb;  */

void FUN_10792d4b0(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((long)param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x41) = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}



/* Entry: 10792d614; end: 10792d61f;  */

char * FUN_10792d614(void)

{
  return "Bad expected access";
}



/* Entry: 10792d82c; end: 10792d8c3; -[SCNMapCommonAuthContextFetchedCallback onAuthContextFetched:] */

void FUN_10792d82c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_58 [40];
  
  FUN_10792db6c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  func_0x00010792d690(auStack_58);
  func_0x00010792db8c(*(undefined8 *)(*plVar1 + 0x10));
  func_0x00010028ad98(auStack_58);
  func_0x00010792db98();
  return;
}



/* Entry: 10792db6c; end: 10792dbf7;  */

void FUN_10792db6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10792de88; end: 10792df1b;  */

long FUN_10792de88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_1109ebec0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10792e04c; end: 10792e0b3;  */

long FUN_10792e04c(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b78 == 0) {
    func_0x000107930ad8();
    func_0x000107930a8c();
    do {
      if (lRam0000000113726b78 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b78 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b78;
}



/* Entry: 10792e20c; end: 10792e277;  */

long FUN_10792e20c(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b98 == 0) {
    func_0x000107930ad8();
    func_0x000107930ad0();
    do {
      if (lRam0000000113726b98 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b98 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b98;
}



/* Entry: 10792e3cc; end: 10792e433;  */

long FUN_10792e3cc(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726bb8 == 0) {
    func_0x000107930ad8();
    func_0x000107930a8c();
    do {
      if (lRam0000000113726bb8 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726bb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726bb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726bb8 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726bb8;
}



/* Entry: 10792e5d4; end: 10792e617; +[SMSdkTileID descriptor] */

void FUN_10792e5d4(void)

{
  long lVar1;
  
  if (lRam0000000113726be8 == 0) {
    lVar1 = lRam0000000113726be8;
    func_0x000107930980();
    func_0x000107930a38();
    lRam0000000113726be8 = lVar1;
  }
  return;
}



/* Entry: 10792e844; end: 10792e89b; +[SMSdkFeature_Property descriptor] */

long FUN_10792e844(long param_1)

{
  if (lRam0000000113726c28 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c228780();
    lRam0000000113726c28 = param_1;
  }
  return lRam0000000113726c28;
}



/* Entry: 10792eae8; end: 10792eb3f; +[SMSdkThemeColors_ThemeColor descriptor] */

long FUN_10792eae8(long param_1)

{
  if (lRam0000000113726c68 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c228780();
    lRam0000000113726c68 = param_1;
  }
  return lRam0000000113726c68;
}



/* Entry: 10792ed3c; end: 10792edaf; +[SMSdkMemberAccessory descriptor] */

long FUN_10792ed3c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ca8;
  if (lRam0000000113726ca8 == 0) {
    func_0x0001079309f4();
    func_0x000107930b04();
    func_0x0001079309b4();
    func_0x000107930b44();
  }
  lRam0000000113726ca8 = lVar1;
  return lVar1;
}



/* Entry: 10792f008; end: 10792f06b; +[SMSdkContentObject descriptor] */

long FUN_10792f008(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ce8;
  if (lRam0000000113726ce8 == 0) {
    func_0x0001079309f4();
    func_0x000107930a44();
    func_0x0001079309b4();
  }
  lRam0000000113726ce8 = lVar1;
  return lVar1;
}



/* Entry: 10792f2b0; end: 10792f2fb; +[SMSdkDevicePermissions descriptor] */

void FUN_10792f2b0(void)

{
  long lVar1;
  
  if (lRam0000000113726d28 == 0) {
    lVar1 = lRam0000000113726d28;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a44();
    lRam0000000113726d28 = lVar1;
  }
  return;
}



/* Entry: 10792f4fc; end: 10792f54f; +[SMSdkUpdateUserInfoRequest descriptor] */

void FUN_10792f4fc(void)

{
  long lVar1;
  
  if (lRam0000000113726d68 == 0) {
    lVar1 = lRam0000000113726d68;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    lRam0000000113726d68 = lVar1;
  }
  return;
}



/* Entry: 10792f790; end: 10792f7db; +[SMSdkLocationSharingPreferences_LocationSharingSettings_BlockList descriptor] */

long FUN_10792f790(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726da8;
  if (lRam0000000113726da8 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x000107930a60();
  }
  lRam0000000113726da8 = lVar1;
  return lVar1;
}



/* Entry: 10792fa08; end: 10792fa6f; +[SMSdkMapSdkInitializationParams descriptor] */

long FUN_10792fa08(long param_1)

{
  if (lRam0000000113726de8 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    func_0x00010c2289e0();
    lRam0000000113726de8 = param_1;
  }
  return lRam0000000113726de8;
}



/* Entry: 10792fcb0; end: 10792fcfb; +[SMSdkValue_NullValue descriptor] */

long FUN_10792fcb0(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e28;
  if (lRam0000000113726e28 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x000107930a50();
  }
  lRam0000000113726e28 = lVar1;
  return lVar1;
}



/* Entry: 10792ff2c; end: 10792ff6f; +[SMSdkPrefetchResourcesRequest descriptor] */

void FUN_10792ff2c(void)

{
  long lVar1;
  
  if (lRam0000000113726e68 == 0) {
    lVar1 = lRam0000000113726e68;
    func_0x000107930980();
    func_0x000107930a2c();
    lRam0000000113726e68 = lVar1;
  }
  return;
}



/* Entry: 1079301fc; end: 107930247; +[SMSdkMapBrowsingContext_BitmojiTrayBrowsingContext descriptor] */

long FUN_1079301fc(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ea8;
  if (lRam0000000113726ea8 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x0001079309d8();
  }
  lRam0000000113726ea8 = lVar1;
  return lVar1;
}



/* Entry: 107930488; end: 1079304d3; +[SMSdkMapBrowsingContext_FootstepsModeBrowsingContext descriptor] */

long FUN_107930488(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ee8;
  if (lRam0000000113726ee8 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x0001079309d8();
  }
  lRam0000000113726ee8 = lVar1;
  return lVar1;
}



/* Entry: 107930710; end: 10793075f; +[SMSdkViewportInfo descriptor] */

void FUN_107930710(void)

{
  long lVar1;
  
  if (lRam0000000113726f28 == 0) {
    lVar1 = lRam0000000113726f28;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930b04();
    lRam0000000113726f28 = lVar1;
  }
  return;
}



/* Entry: 107930b64; end: 107930b8b;  */

long FUN_107930b64(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 107930d90; end: 107930d93;  */

long FUN_107930d90(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x0001079310e8(param_1 + 0x10);
  return param_1;
}



/* Entry: 107931030; end: 1079310ab;  */

void FUN_107931030(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x000107930db4();
  func_0x000107931020(param_1 + 0x10,param_2 + 0x10);
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 107931234; end: 107931237;  */

undefined8 FUN_107931234(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 1079313b8; end: 1079313fb;  */

undefined8 * FUN_1079313b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_1109ecf60;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107931364(param_1,param_3);
  return param_1;
}



/* Entry: 107931520; end: 107931537;  */

void FUN_107931520(void)

{
  func_0x0001079314a4();
  func_0x0001079462e4();
  return;
}



/* Entry: 1079316a8; end: 107931727;  */

ulong FUN_1079316a8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x18)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = ((int)LZCOUNT(*(long *)(param_1 + 0x20)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x28) = (int)uVar1;
  return uVar1;
}



/* Entry: 107931850; end: 1079318fb;  */

long * FUN_107931850(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010794668c();
    func_0x000107947164();
    func_0x00010794708c();
  }
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x00010794668c();
    func_0x000107947154();
    func_0x00010794708c();
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x00010794668c();
    func_0x0001079472ac();
    func_0x00010794708c();
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x00010794668c();
    func_0x0001001a59d0(0x21,param_1);
    func_0x00010794708c();
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



/* Entry: 1079319f0; end: 107931a1f;  */

void FUN_1079319f0(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x000107946b20();
  func_0x000107944da4();
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



/* Entry: 107931bc4; end: 107931bd7;  */

void FUN_107931bc4(long param_1)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000107946e64();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto code_r0x000107931b74;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x0001079319a0();
    }
  }
  else {
    if (extraout_w8 != 1) goto code_r0x000107931b74;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto code_r0x000107931b74;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107931394();
    }
  }
  __ZdlPv();
code_r0x000107931b74:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 107931e00; end: 107931e13;  */

void FUN_107931e00(void)

{
  func_0x000107931dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107931f58; end: 107931f73;  */

void FUN_107931f58(long *param_1,long param_2)

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



/* Entry: 107932080; end: 107932093;  */

void FUN_107932080(void)

{
  func_0x00010793202c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107932410; end: 107932413;  */

void FUN_107932410(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  return;
}



/* Entry: 107932554; end: 107932583;  */

void FUN_107932554(ulong *param_1)

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



/* Entry: 10793275c; end: 1079328b3;  */

long * FUN_10793275c(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946984();
  switch(*(undefined4 *)((long)param_1 + 0x1c)) {
  case 1:
    func_0x0001079466b8();
    func_0x000107947174();
    func_0x000107946ec0();
    func_0x0001079466ac();
    unaff_x21 = param_1;
    break;
  case 2:
    func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x10));
    if (param_2 < 0) {
      unaff_x22 = (long *)*unaff_x22;
    }
    param_4 = (long *)&UNK_10f438255;
    func_0x000107946aa4();
    func_0x000107946cd0();
    func_0x000107946758();
    param_1 = unaff_x22;
    unaff_x21 = unaff_x22;
    break;
  case 3:
    func_0x0001079466b8();
    func_0x000107947174();
    func_0x000107946e70();
    func_0x000107946a44();
    unaff_x21 = param_1;
    break;
  case 4:
    func_0x000107946f3c();
    func_0x000100628298();
    unaff_x21 = param_1;
    break;
  case 5:
    func_0x0001079466b8();
    func_0x000107947174();
    param_1 = (long *)0x29;
    func_0x0001001a59d0();
    func_0x000107947238();
    break;
  case 6:
    func_0x000107947360();
    param_1 = (long *)0x6;
    goto code_r0x000107932828;
  case 7:
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    param_1 = (long *)0x7;
    goto code_r0x000107932828;
  case 8:
    func_0x000107947360();
    param_1 = (long *)0x8;
code_r0x000107932828:
    func_0x0001079467ac();
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
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
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



/* Entry: 1079329f0; end: 107932a03;  */

void FUN_1079329f0(void)

{
  func_0x00010793299c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107932c04; end: 107932c33;  */

void FUN_107932c04(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  return;
}



/* Entry: 107932de0; end: 10793304b;  */

long * FUN_107932de0(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  undefined8 *puVar4;
  int iVar5;
  
  func_0x000107946704();
  func_0x000107946ac8(param_1[6]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      unaff_x22 = (long *)*unaff_x22;
      goto LAB_107932e1c;
    }
  }
  else if ((int)param_2 != 0) {
LAB_107932e1c:
    param_4 = (long *)&UNK_10f4382b4;
    func_0x000107946aa4();
    func_0x000107946398();
    param_1 = unaff_x22;
    unaff_x20 = unaff_x22;
  }
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_2 = *(long *)(unaff_x21 + 0x50);
    func_0x0001079466f0();
    unaff_x20 = param_1;
  }
  iVar3 = *(int *)(unaff_x21 + 0x20);
  for (puVar4 = (undefined8 *)0x0; iVar3 != (int)puVar4;
      puVar4 = (undefined8 *)(ulong)((int)puVar4 + 1)) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(param_2 + 0x14);
    param_1 = (long *)0x3;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x38));
  if (param_2 < 0) {
    param_2 = 0;
    if (puVar4[1] != 0) {
      puVar2 = (undefined8 *)*puVar4;
      goto LAB_107932e98;
    }
  }
  else {
    puVar2 = puVar4;
    if ((int)param_2 != 0) {
LAB_107932e98:
      param_4 = (long *)&UNK_10f4382d2;
      func_0x000107946aa4(puVar2);
      param_2 = 4;
      param_1 = unaff_x19;
      func_0x000107946674();
      unaff_x20 = param_1;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x40));
  if (param_2 < 0) {
    param_2 = 0;
    if (puVar4[1] != 0) {
      puVar2 = (undefined8 *)*puVar4;
      goto LAB_107932ed8;
    }
  }
  else {
    puVar2 = puVar4;
    if ((int)param_2 != 0) {
LAB_107932ed8:
      param_4 = (long *)&UNK_10f4382f7;
      func_0x000107946aa4(puVar2);
      param_2 = 5;
      param_1 = unaff_x19;
      func_0x000107946674();
      unaff_x20 = param_1;
    }
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x48));
  if (param_2 < 0) {
    if (puVar4[1] == 0) goto LAB_107932f34;
    puVar4 = (undefined8 *)*puVar4;
  }
  else if ((int)param_2 == 0) goto LAB_107932f34;
  param_4 = (long *)&UNK_10f43831f;
  func_0x000107946aa4(puVar4);
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_107932f34:
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



/* Entry: 10793330c; end: 10793330f;  */

undefined8 FUN_10793330c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079332dc(param_1);
  return param_1;
}



/* Entry: 1079335dc; end: 10793370b;  */

void FUN_1079335dc(ulong *param_1,long param_2,ulong param_3)

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
  if (iVar1 == 0) goto LAB_1079336e8;
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
LAB_1079336e8:
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



/* Entry: 1079337f4; end: 10793389f;  */

long * FUN_1079337f4(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946414();
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_107933824;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_107933824:
      param_4 = (long *)&UNK_10f438389;
      func_0x000107946aa4();
      func_0x000107946398();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793386c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793386c;
  param_4 = (long *)&UNK_10f4383b8;
  func_0x000107946aa4();
  func_0x000107946498();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_10793386c:
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



/* Entry: 107933abc; end: 107933abf;  */

void FUN_107933abc(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107933af0();
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



/* Entry: 107933bb8; end: 107933bcb;  */

void FUN_107933bb8(void)

{
  func_0x000107933b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107933f78; end: 107933f8b;  */

void FUN_107933f78(void)

{
  func_0x000107933f2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079342ec; end: 1079342ff;  */

void FUN_1079342ec(void)

{
  func_0x0001079342bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107934470; end: 10793447b;  */

undefined ** FUN_107934470(void)

{
  return &PTR_DAT_1109ee8b0;
}



/* Entry: 1079345b0; end: 10793463b;  */

long * FUN_1079345b0(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x21;
  int iVar3;
  long unaff_x22;
  long *plVar4;
  int iVar5;
  
  plVar1 = param_2;
  plVar4 = param_3;
  func_0x0001079465d0();
  if ((long)plVar1 < 0) {
    if (*(long *)(unaff_x22 + 8) == 0) goto LAB_107934604;
  }
  else if ((int)plVar1 == 0) goto LAB_107934604;
  func_0x000107946aa4();
  param_2 = param_3;
  func_0x000107946f64(param_3,6);
LAB_107934604:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return param_2;
  }
  func_0x000107946ab4();
  if ((long)plVar4 < 0) {
    lVar2 = *(long *)(extraout_x8 + 8);
    plVar4 = *(long **)(extraout_x8 + 0x10);
  }
  else {
    lVar2 = extraout_x8 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)plVar4) {
    while( true ) {
      iVar5 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar3 = (int)plVar4;
      plVar4 = (long *)(ulong)(uint)(iVar3 - iVar5);
      if (iVar3 - iVar5 == 0 || iVar3 < iVar5) break;
      func_0x00010b4d5738();
      lVar2 = (long)param_2 + (long)iVar5;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar2);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar3);
  }
  _memcpy(param_2,lVar2,(ulong)plVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)plVar4);
}



/* Entry: 10793471c; end: 1079347ef;  */

long * FUN_10793471c(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long extraout_x8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar4;
  long *unaff_x22;
  int iVar5;
  
  func_0x000107946704();
  uVar3 = (ulong)*(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 4) != 0) {
    param_1 = unaff_x19;
    func_0x0001001a5994();
    param_3 = unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x21 + 0x10));
  if ((long)uVar3 < 0) {
    uVar3 = unaff_x22[1];
    if (uVar3 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_10793476c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)uVar3 != 0) {
LAB_10793476c:
      param_4 = (long *)&UNK_10f4384c5;
      func_0x000107946aa4();
      func_0x000107946498();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x000107946964();
  if ((long)uVar3 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1079347bc;
  }
  else if ((int)uVar3 == 0) goto LAB_1079347bc;
  param_4 = (long *)&UNK_10f4384e8;
  func_0x000107946aa4();
  func_0x000107946674();
  param_1 = unaff_x19;
  unaff_x20 = unaff_x19;
LAB_1079347bc:
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
      iVar5 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar4 = (int)param_3;
      param_3 = (long *)(ulong)(uint)(iVar4 - iVar5);
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar5);
      param_4 = param_1;
      func_0x000107c303e4(param_1,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar4);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107934af4; end: 107934ba7;  */

void FUN_107934af4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  long lVar3;
  long extraout_x9;
  long unaff_x19;
  
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
  iVar1 = (int)param_1;
  func_0x00010794711c(lVar3 + (ulong)*(byte *)(unaff_x19 + 0x30) * 2);
  if ((extraout_x8_03 & 1) != 0) {
    func_0x000107947044();
    lVar3 = extraout_x8_04;
    if (extraout_x8_04 < 0) {
      lVar3 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar3 + iVar1;
  }
  *(int *)(unaff_x19 + 0x34) = iVar1;
  return;
}



/* Entry: 107934d1c; end: 107934d27;  */

undefined ** FUN_107934d1c(void)

{
  return &PTR_DAT_1109ee9b8;
}



/* Entry: 107935108; end: 10793518f;  */

long FUN_107935108(long param_1)

{
  func_0x000107946a94();
  func_0x000100067de0(param_1 + 0x60);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x0001079348e8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x000107931394();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x0001000681a0();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x0001000681a0();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x0001000681a0();
  }
  return param_1;
}



/* Entry: 107935688; end: 1079357eb;  */

void FUN_107935688(ulong *param_1,long param_2)

{
  undefined1 in_ZR;
  long extraout_x8;
  long lVar1;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  uint unaff_w23;
  
  func_0x0001079465bc();
  if ((unaff_x22 & 1) != 0) {
    func_0x000107946d18();
  }
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    func_0x000107946f50();
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x000107946f80();
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x0001079472bc();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x60));
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x21 + 0x60);
    func_0x0001001a53d4();
  }
  func_0x000107947208();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x0001079472a4();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        func_0x000107934bac();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
  }
  if (*(long *)(unaff_x20 + 0x78) != 0) {
    *(long *)(unaff_x21 + 0x78) = *(long *)(unaff_x20 + 0x78);
  }
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    *(long *)(unaff_x21 + 0x80) = *(long *)(unaff_x20 + 0x80);
  }
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    *(int *)(unaff_x21 + 0x88) = *(int *)(unaff_x20 + 0x88);
  }
  if (*(char *)(unaff_x20 + 0x8c) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8d) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8d) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8e) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8e) = 1;
  }
  if (*(char *)(unaff_x20 + 0x8f) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x8f) = 1;
  }
  if (*(long *)(unaff_x20 + 0x90) != 0) {
    *(long *)(unaff_x21 + 0x90) = *(long *)(unaff_x20 + 0x90);
  }
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    *(int *)(unaff_x21 + 0x98) = *(int *)(unaff_x20 + 0x98);
  }
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    *(int *)(unaff_x21 + 0x9c) = *(int *)(unaff_x20 + 0x9c);
  }
  func_0x000107946584();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
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



/* Entry: 1079359a4; end: 107935a7f;  */

void FUN_1079359a4(ulong *param_1)

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
  if (iVar1 == 0) goto LAB_107935a64;
  func_0x000107947068();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x0001079357ec();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 3) {
    if (unaff_w24 != 3) {
LAB_107935a58:
      func_0x000107946bdc();
      func_0x00010068f444();
      unaff_x21[2] = (ulong)param_1;
      goto LAB_107935a64;
    }
    func_0x0001079467c4();
  }
  else if (iVar1 == 2) {
    if (unaff_w24 != 2) goto LAB_107935a58;
    func_0x0001079467c4();
  }
  else {
    if (iVar1 != 1) goto LAB_107935a64;
    if (unaff_w24 != 1) goto LAB_107935a58;
    func_0x0001079467c4();
  }
  func_0x00010bd1b688();
LAB_107935a64:
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



/* Entry: 107935cfc; end: 107935d27;  */

long FUN_107935cfc(long param_1)

{
  func_0x000107946a94();
  func_0x00010794385c(param_1 + 0x10);
  return param_1;
}



/* Entry: 107935e50; end: 107935e53;  */

void FUN_107935e50(ulong *param_1)

{
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107935e84();
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



/* Entry: 107935f04; end: 107935f37;  */

void FUN_107935f04(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  func_0x000107946f94();
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



/* Entry: 107936208; end: 10793620b;  */

undefined8 FUN_107936208(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079361a8(param_1);
  return param_1;
}



/* Entry: 107936658; end: 1079367af;  */

void FUN_107936658(void)

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



/* Entry: 107936928; end: 10793692b;  */

void FUN_107936928(ulong *param_1)

{
  undefined1 in_ZR;
  undefined1 extraout_w8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464dc();
  func_0x000107936968();
  func_0x000107947214();
  if ((bool)in_ZR) {
    *(undefined1 *)(unaff_x19 + 0x28) = extraout_w8;
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



/* Entry: 107936a5c; end: 107936a8b;  */

void FUN_107936a5c(long param_1)

{
  if (*(int *)(param_1 + 0x2c) - 1U < 2) {
    func_0x000107946f1c();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}



/* Entry: 107936de0; end: 107936e0b;  */

undefined8 FUN_107936de0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107936e0c(param_1);
  return param_1;
}



/* Entry: 107936f9c; end: 107937017;  */

void FUN_107936f9c(void)

{
  ulong extraout_x8;
  long unaff_x19;
  
  func_0x0001079473c0();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107937018(*(undefined8 *)(unaff_x19 + 0x18));
  }
  if (*(int *)(unaff_x19 + 0x28) == 3) {
    func_0x000107946f30();
    func_0x0001001a5744();
  }
  else {
    if (*(int *)(unaff_x19 + 0x28) != 2) goto LAB_107936ff0;
    func_0x000107946f30();
    func_0x0001006016cc();
  }
  func_0x000107946ad4();
LAB_107936ff0:
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946dc4();
  return;
}



/* Entry: 107937264; end: 107937277;  */

void FUN_107937264(void)

{
  func_0x000107937200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079376e8; end: 10793772f;  */

long FUN_1079376e8(long param_1)

{
  func_0x000107946a94();
  func_0x000107946c10();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x000107937200();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceb6c4();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107937a10; end: 107937a3b;  */

long FUN_107937a10(long param_1)

{
  func_0x000107946a94();
  func_0x0001079438f8(param_1 + 0x10);
  return param_1;
}



/* Entry: 107937b80; end: 107937b8f;  */

void FUN_107937b80(long *param_1,long param_2)

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



/* Entry: 107937ca4; end: 107937caf;  */

undefined ** FUN_107937ca4(void)

{
  return &PTR_DAT_1109eed68;
}



/* Entry: 107938084; end: 1079380af;  */

long FUN_107938084(long param_1)

{
  func_0x000107946a94();
  func_0x000107943940(param_1 + 0x10);
  return param_1;
}



/* Entry: 1079381fc; end: 10793820b;  */

void FUN_1079381fc(long *param_1,long param_2)

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



/* Entry: 1079382b8; end: 10793836f;  */

long * FUN_1079382b8(long *param_1,long param_2,ulong param_3)

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



/* Entry: 107938478; end: 1079384eb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_107938478(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000107947098();
  if ((unaff_w20 & 0xf) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[4]);
    }
    if ((unaff_w20 >> 2 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[5]);
    }
    if ((unaff_w20 >> 3 & 1) != 0) {
      func_0x00010bcebb44(unaff_x19[6]);
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



/* Entry: 10793877c; end: 1079387c7;  */

void FUN_10793877c(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  uint unaff_w20;
  
  func_0x000107947098();
  if ((unaff_w20 & 3) != 0) {
    if ((unaff_w20 & 1) != 0) {
      func_0x00010bcebce4(unaff_x19[3]);
    }
    if ((unaff_w20 >> 1 & 1) != 0) {
      func_0x00010bcebce4(unaff_x19[4]);
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
  if (-1 < *(char *)((long)unaff_x19 + 0x17)) {
    *(undefined1 *)unaff_x19 = 0;
    *(undefined1 *)((long)unaff_x19 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*unaff_x19 = 0;
  unaff_x19[1] = 0;
  return;
}



/* Entry: 1079389cc; end: 107938a5b;  */

long * FUN_1079389cc(long *param_1,long param_2,ulong param_3,long *param_4)

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
    if (unaff_x22[1] == 0) goto LAB_107938a10;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107938a10;
  param_4 = (long *)&UNK_10f438992;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_107938a10:
  if ((*(byte *)(unaff_x21 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x34);
    func_0x000107946748();
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



/* Entry: 107938bd8; end: 107938c8f;  */

long * FUN_107938bd8(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 107938d20; end: 107938d4b;  */

void FUN_107938d20(void)

{
  ulong extraout_x8;
  ulong *unaff_x19;
  
  func_0x00010794673c();
  func_0x000107947378();
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



/* Entry: 107938f78; end: 107938f83;  */

undefined ** FUN_107938f78(void)

{
  return &PTR_DAT_1109eefb8;
}



/* Entry: 10793944c; end: 107939477;  */

long FUN_10793944c(long param_1)

{
  func_0x000107946a94();
  func_0x000107943988(param_1 + 0x10);
  return param_1;
}



/* Entry: 1079395c4; end: 1079395d3;  */

void FUN_1079395c4(long *param_1,long param_2)

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



/* Entry: 107939684; end: 10793971f;  */

long * FUN_107939684(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x000107946414();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1079396c8;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1079396c8;
  param_4 = (long *)&UNK_10f438ad3;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1079396c8:
  if (*(char *)(unaff_x21 + 0x18) == '\x01') {
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



/* Entry: 107939c48; end: 107939c73;  */

void FUN_107939c48(long param_1)

{
  ulong *puVar1;
  
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
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



/* Entry: 10793a81c; end: 10793a857;  */

void FUN_10793a81c(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(char *)(param_2 + 0x14) == '\x01') {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  if (*(char *)(param_2 + 0x15) == '\x01') {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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



/* Entry: 10793a9c0; end: 10793aa03;  */

long FUN_10793a9c0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  func_0x000107947450();
  lVar1 = extraout_x8 + (ulong)*(byte *)(param_1 + 0x14) * 2 + (ulong)*(byte *)(param_1 + 0x15) * 2;
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10793ab78; end: 10793aba7;  */

void FUN_10793ab78(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  FUN_107939c48();
  func_0x000107946c18();
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(param_2 + 0x12) == '\x01') {
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
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


