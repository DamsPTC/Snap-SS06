/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792b3d4; end: 10792b3db; -[SCNMapSdkResourceRequesterResource cacheControlFallback] */

undefined8 FUN_10792b3d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10792b60c; end: 10792b66f; -[SCNMapSdkResourceRequesterResourceRequester cancel:] */

void FUN_10792b60c(long param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))(*(long **)(param_1 + 0x18),param_3);
  return;
}



/* Entry: 10792b9c8; end: 10792ba8b; -[SCNMapSdkResourceRequesterResourceRequesterCallback onResponse:] */

void FUN_10792b9c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_d0 [160];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00010792bbec(auStack_d0,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_d0);
  func_0x00010792bb78(auStack_d0);
  _objc_release(param_3);
  return;
}



/* Entry: 10792bf5c; end: 10792bfab;  */

void FUN_10792bf5c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *param_1 = *param_2;
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    uVar1 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}



/* Entry: 10792c174; end: 10792c17b; -[SCNMapSdkResourceRequesterResponse data] */

undefined8 FUN_10792c174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10792c2d4; end: 10792c3a3; -[SCNMapSdkResourceRequesterTileData initWithUrlTemplate:pixelRatio:x:y:z:] */

undefined1 *
FUN_10792c2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126f8ea0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined4 *)((long)puVar1 + 0xc) = param_5;
    *(undefined4 *)((long)puVar1 + 0x10) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10792c420; end: 10792c427; -[SCNMapSdkResourceRequesterTimestamp seconds] */

undefined8 FUN_10792c420(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10792c6e4; end: 10792c773;  */

long FUN_10792c6e4(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ebcf8;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x00010792c7c4();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10792c9f4; end: 10792ca4f; -[SCNBitmojiFetcherBitmojiUriParser .cxx_destruct] */

void FUN_10792c9f4(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1109ebdc8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x00010792ca9c((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 10792cd90; end: 10792ce07;  */

void FUN_10792cd90(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109ebdd8;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010792ce7c();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_10792ce08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792ce94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10792d3e0; end: 10792d43f;  */

void FUN_10792d3e0(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    return;
  }
  ppuStack_38 = &PTR_FUN_1109ebe50;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  func_0x00010792d5b8(&ppuStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10792d42c);
  (*pcVar1)();
}



/* Entry: 10792d5fc; end: 10792d5ff;  */

void FUN_10792d5fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10792d7a8; end: 10792d7b3; -[SCNMapCommonAuthContext .cxx_destruct] */

void FUN_10792d7a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10792da80; end: 10792daf7;  */

void FUN_10792da80(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_1109ebe68;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      func_0x00010792db7c();
    } while (extraout_w10 != 0);
  }
  func_0x00010015c218(&ppuStack_28,&uStack_40,&UNK_10792daf8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792dbe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10792ddd4; end: 10792de13;  */

void FUN_10792ddd4(void)

{
  func_0x00010792df58();
  return;
}



/* Entry: 10792dfd8; end: 10792e043;  */

long FUN_10792dfd8(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b70 == 0) {
    func_0x000107930ad8();
    func_0x000107930ad0();
    do {
      if (lRam0000000113726b70 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b70 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b70;
}



/* Entry: 10792e198; end: 10792e203;  */

long FUN_10792e198(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726b90 == 0) {
    func_0x000107930ad8();
    func_0x000107930ad0();
    do {
      if (lRam0000000113726b90 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726b90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726b90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726b90 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726b90;
}



/* Entry: 10792e360; end: 10792e3c7;  */

long FUN_10792e360(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (lRam0000000113726bb0 == 0) {
    func_0x000107930ad8();
    func_0x000107930a8c();
    do {
      if (lRam0000000113726bb0 != 0) {
        func_0x000107930ab8();
        return lRam0000000113726bb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x113726bb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        lRam0000000113726bb0 = param_1;
      }
    } while (cVar1 != '\0');
  }
  return lRam0000000113726bb0;
}



/* Entry: 10792e544; end: 10792e587; +[SMSdkLatLngBounds descriptor] */

void FUN_10792e544(void)

{
  long lVar1;
  
  if (lRam0000000113726bd8 == 0) {
    lVar1 = lRam0000000113726bd8;
    func_0x000107930980();
    func_0x000107930a20();
    lRam0000000113726bd8 = lVar1;
  }
  return;
}



/* Entry: 10792e798; end: 10792e7f7; +[SMSdkGeometry descriptor] */

long FUN_10792e798(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c18;
  if (lRam0000000113726c18 == 0) {
    func_0x0001079309f4();
    func_0x000107930a20();
    func_0x0001079309b4();
  }
  lRam0000000113726c18 = lVar1;
  return lVar1;
}



/* Entry: 10792ea3c; end: 10792eaa3; +[SMSdkConfig descriptor] */

long FUN_10792ea3c(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c58;
  if (lRam0000000113726c58 == 0) {
    func_0x0001079309f4();
    func_0x000107930b04();
    func_0x0001079309b4();
  }
  lRam0000000113726c58 = lVar1;
  return lVar1;
}



/* Entry: 10792eca0; end: 10792ece7; +[SMSdkActionType descriptor] */

void FUN_10792eca0(void)

{
  long lVar1;
  
  if (lRam0000000113726c98 == 0) {
    lVar1 = lRam0000000113726c98;
    func_0x000107930980();
    func_0x000107930a98();
    lRam0000000113726c98 = lVar1;
  }
  return;
}



/* Entry: 10792ef70; end: 10792efc3; +[SMSdkFriendCluster descriptor] */

void FUN_10792ef70(void)

{
  long lVar1;
  
  if (lRam0000000113726cd8 == 0) {
    lVar1 = lRam0000000113726cd8;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    lRam0000000113726cd8 = lVar1;
  }
  return;
}



/* Entry: 10792f228; end: 10792f26b; +[SMSdkTravelStatusUpdate descriptor] */

void FUN_10792f228(void)

{
  long lVar1;
  
  if (lRam0000000113726d18 == 0) {
    lVar1 = lRam0000000113726d18;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726d18 = lVar1;
  }
  return;
}



/* Entry: 10792f474; end: 10792f4b7; +[SMSdkNowPlayingUpdate descriptor] */

void FUN_10792f474(void)

{
  long lVar1;
  
  if (lRam0000000113726d58 == 0) {
    lVar1 = lRam0000000113726d58;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726d58 = lVar1;
  }
  return;
}



/* Entry: 10792f6f8; end: 10792f743; +[SMSdkLocationSharingPreferences_LocationSharingSettings_GhostMode descriptor] */

long FUN_10792f6f8(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726d98;
  if (lRam0000000113726d98 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x000107930a60();
  }
  lRam0000000113726d98 = lVar1;
  return lVar1;
}



/* Entry: 10792f968; end: 10792f9ab; +[SMSdkUsersDetails descriptor] */

void FUN_10792f968(void)

{
  long lVar1;
  
  if (lRam0000000113726dd8 == 0) {
    lVar1 = lRam0000000113726dd8;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726dd8 = lVar1;
  }
  return;
}



/* Entry: 10792fc00; end: 10792fc63; +[SMSdkValue descriptor] */

long FUN_10792fc00(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e18;
  if (lRam0000000113726e18 == 0) {
    func_0x0001079309f4();
    func_0x000107930aec();
    func_0x0001079309b4();
  }
  lRam0000000113726e18 = lVar1;
  return lVar1;
}



/* Entry: 10792fe7c; end: 10792fed3; +[SMSdkAppActionTriggerParameters_Parameter descriptor] */

long FUN_10792fe7c(long param_1)

{
  if (lRam0000000113726e58 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c228780();
    lRam0000000113726e58 = param_1;
  }
  return lRam0000000113726e58;
}



/* Entry: 107930164; end: 1079301af; +[SMSdkMapBrowsingContext_FriendsTrayBrowsingContext descriptor] */

long FUN_107930164(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e98;
  if (lRam0000000113726e98 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x0001079309d8();
  }
  lRam0000000113726e98 = lVar1;
  return lVar1;
}



/* Entry: 1079303f0; end: 10793043b; +[SMSdkMapBrowsingContext_HomeProfileBrowsingContext descriptor] */

long FUN_1079303f0(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ed8;
  if (lRam0000000113726ed8 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x0001079309d8();
  }
  lRam0000000113726ed8 = lVar1;
  return lVar1;
}



/* Entry: 107930688; end: 1079306cb; +[SMSdkDebugInfo descriptor] */

void FUN_107930688(void)

{
  long lVar1;
  
  if (lRam0000000113726f18 == 0) {
    lVar1 = lRam0000000113726f18;
    func_0x000107930980();
    func_0x000107930a20();
    lRam0000000113726f18 = lVar1;
  }
  return;
}



/* Entry: 10793092c; end: 10793097f; +[SMSdkSystemStats descriptor] */

void FUN_10793092c(void)

{
  long lVar1;
  
  if (lRam0000000113726f58 == 0) {
    lVar1 = lRam0000000113726f58;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    lRam0000000113726f58 = lVar1;
  }
  return;
}



/* Entry: 107930ce8; end: 107930d5f;  */

undefined8 * FUN_107930ce8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_1109ebff0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  func_0x0001079310bc(param_1 + 2,param_2,param_3 + 0x10);
  *(undefined4 *)(param_1 + 6) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + 0x2c) = *(undefined1 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 5) = uVar1;
  return param_1;
}



/* Entry: 107930fb8; end: 10793101f;  */

void FUN_107930fb8(long param_1,long param_2)

{
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



/* Entry: 1079311cc; end: 1079311ef;  */

undefined8 FUN_1079311cc(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 107931354; end: 107931393;  */

undefined1  [16] FUN_107931354(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x000107946da8();
  puVar1 = param_1 + 8;
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



/* Entry: 1079314ec; end: 10793151b;  */

void FUN_1079314ec(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107931420();
  func_0x000107946c18();
  if (*(long *)(param_2 + 0x10) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_2 + 0x18);
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



/* Entry: 1079315dc; end: 1079315ff;  */

undefined ** FUN_1079315dc(void)

{
  return &PTR_DAT_1109ee3d0;
}



/* Entry: 107931814; end: 107931827;  */

void FUN_107931814(void)

{
  func_0x0001079317b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079319d0; end: 1079319e3;  */

void FUN_1079319d0(void)

{
  func_0x0001079319a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107931b1c; end: 107931b97;  */

void FUN_107931b1c(void)

{
  int extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x000107946e64();
  if (extraout_w8 == 2) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto LAB_107931b74;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x0001079319a0();
    }
  }
  else {
    if (extraout_w8 != 1) goto LAB_107931b74;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto LAB_107931b74;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107931394();
    }
  }
  __ZdlPv();
LAB_107931b74:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 107931dd0; end: 107931dfb;  */

long FUN_107931dd0(long param_1)

{
  func_0x000107946a94();
  func_0x00010794374c(param_1 + 0x10);
  return param_1;
}



/* Entry: 107931f24; end: 107931f27;  */

void FUN_107931f24(ulong *param_1)

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



/* Entry: 107932058; end: 10793207b;  */

void FUN_107932058(void)

{
  long unaff_x19;
  
  func_0x000107946b84();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001079326fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107932208; end: 1079323df;  */

void FUN_107932208(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      FUN_107944e4c();
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



/* Entry: 107932498; end: 10793254f;  */

long * FUN_107932498(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 10793273c; end: 10793274f;  */

void FUN_10793273c(void)

{
  func_0x0001079326fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079329c8; end: 1079329eb;  */

void FUN_1079329c8(void)

{
  long unaff_x19;
  
  func_0x000107946b84();
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    func_0x0001079326fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107932b50; end: 107932bd3;  */

void FUN_107932b50(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    func_0x000107946e34();
    if (param_1 == (ulong *)0x0) {
      FUN_107944e4c();
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



/* Entry: 107932d74; end: 107932d7f;  */

undefined ** FUN_107932d74(void)

{
  return &PTR_DAT_1109ee6c0;
}



/* Entry: 1079332b0; end: 1079332db;  */

undefined8 FUN_1079332b0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079332dc(param_1);
  return param_1;
}



/* Entry: 107933510; end: 1079335d7;  */

void FUN_107933510(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x000107946514();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    func_0x0001001a5744();
  }
  switch(*(undefined4 *)(unaff_x19 + 0x24)) {
  case 2:
    break;
  case 3:
    func_0x000107946a08((long)*(int *)(unaff_x19 + 0x18));
    break;
  case 4:
    func_0x000107946f5c(*(undefined8 *)(unaff_x19 + 0x18));
    goto code_r0x0001079335ac;
  case 5:
    func_0x0001079470cc(*(undefined4 *)(unaff_x19 + 0x18));
    break;
  case 6:
    break;
  case 7:
    func_0x0001006016cc(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
code_r0x0001079335ac:
    func_0x000107946ad4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x0001079470c0();
  return;
}



/* Entry: 1079337b8; end: 1079337c3;  */

undefined ** FUN_1079337b8(void)

{
  return &PTR_DAT_1109ee740;
}



/* Entry: 1079339c8; end: 1079339fb;  */

void FUN_1079339c8(void)

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



/* Entry: 107933b8c; end: 107933bb3;  */

long * FUN_107933b8c(long param_1)

{
  long *plVar1;
  
  func_0x000100067de0(param_1 + 0x40);
  plVar1 = (long *)(param_1 + 0x10);
  func_0x00010006805c(param_1 + 0x28);
  if (*plVar1 != 0) {
    func_0x000100069100(plVar1);
  }
  return plVar1;
}



/* Entry: 107933f2c; end: 107933f73;  */

long FUN_107933f2c(long param_1)

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



/* Entry: 1079342bc; end: 1079342e7;  */

long FUN_1079342bc(long param_1)

{
  func_0x000107946a94();
  func_0x000107943834(param_1 + 0x10);
  return param_1;
}



/* Entry: 107934458; end: 10793445b;  */

undefined8 FUN_107934458(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 107934590; end: 1079345a3;  */

void FUN_107934590(void)

{
  func_0x000107934564();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079346dc; end: 1079346e7;  */

undefined ** FUN_1079346dc(void)

{
  return &PTR_DAT_1109ee938;
}



/* Entry: 107934940; end: 10793497b;  */

void FUN_107934940(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  func_0x000107946c98();
  func_0x000107946f94();
  func_0x000107946ef0();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined2 *)(unaff_x19 + 0x30) = 0;
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



/* Entry: 107934cd8; end: 107934ceb;  */

void FUN_107934cd8(void)

{
  func_0x000107934c74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793505c; end: 10793508b;  */

void FUN_10793505c(ulong *param_1,ulong *param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong extraout_x8;
  ulong uVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  ulong unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107934d28();
  func_0x000107946c18();
  func_0x000107946614();
  uVar5 = param_3;
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
    uVar5 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = extraout_x8;
  if ((long)extraout_x8 < 0) {
    uVar4 = param_2[1];
  }
  if (uVar4 != 0) {
    if ((param_3 & 1) != 0) {
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
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    *(int *)(unaff_x21 + 4) = *(int *)(unaff_x20 + 0x20);
  }
  iVar2 = *(int *)(unaff_x20 + 0x34);
  if (iVar2 != 0) {
    iVar3 = *(int *)((long)unaff_x21 + 0x34);
    if (iVar3 != iVar2) {
      if (iVar3 != 0) {
        param_1 = unaff_x21;
        func_0x000107934cec();
      }
      *(int *)((long)unaff_x21 + 0x34) = iVar2;
    }
    if ((iVar2 == 0x65) || (iVar2 == 100)) {
      if (iVar3 != iVar2) {
        unaff_x21[5] = (ulong)&DAT_11383d918;
      }
      puVar1 = (undefined *)(*(ulong *)(unaff_x20 + 0x28) & 0xfffffffffffffffc);
      if (*(int *)(unaff_x20 + 0x34) != iVar2) {
        puVar1 = &DAT_11383d918;
      }
      param_1 = unaff_x21 + 5;
      func_0x0001001a53d4(param_1,puVar1,uVar5);
    }
  }
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



/* Entry: 1079354e0; end: 10793566f;  */

/* WARNING: Removing unreachable block (ram,0x000107935524) */
/* WARNING: Removing unreachable block (ram,0x000107935544) */

void FUN_1079354e0(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w8_00;
  int iVar4;
  long extraout_x8;
  long lVar5;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x000107946c8c();
  func_0x0001079463ac();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x0001079347f0();
    func_0x0001079462a4();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x0001079471e8();
  func_0x00010794694c();
  func_0x0001079471d8();
  iVar3 = unaff_w20 + extraout_w10 + extraout_w10_00;
  func_0x00010794694c();
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x60));
  lVar5 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar5 = *(long *)(param_1 + 8);
  }
  if (lVar5 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  uVar2 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar2 & 3) != 0) {
    if ((uVar2 & 1) != 0) {
      func_0x000107935670(*(undefined8 *)(unaff_x19 + 0x68));
      func_0x000107946ad4();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      func_0x000107931520(*(undefined8 *)(unaff_x19 + 0x70));
      func_0x000107947050();
    }
  }
  iVar4 = -9;
  if (*(long *)(unaff_x19 + 0x78) != 0) {
    func_0x000107946714();
    iVar4 = extraout_w8;
  }
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    func_0x000107946714();
    iVar4 = extraout_w8_00;
  }
  if (*(int *)(unaff_x19 + 0x88) != 0) {
    iVar3 = iVar3 + 5;
  }
  iVar3 = iVar3 + (uint)*(byte *)(unaff_x19 + 0x8c) * 2 + (uint)*(byte *)(unaff_x19 + 0x8d) * 2;
  iVar1 = iVar3 + 3;
  if (*(char *)(unaff_x19 + 0x8e) == '\0') {
    iVar1 = iVar3;
  }
  iVar3 = iVar1 + 3;
  if (*(char *)(unaff_x19 + 0x8f) == '\0') {
    iVar3 = iVar1;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    iVar3 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x90)) * iVar4 + 0x2c0U >> 6) + iVar3;
  }
  if (*(int *)(unaff_x19 + 0x98) != 0) {
    iVar3 = iVar3 + 5;
  }
  if (*(int *)(unaff_x19 + 0x9c) != 0) {
    iVar3 = iVar3 + ((int)LZCOUNT(*(int *)(unaff_x19 + 0x9c)) * -9 + 0x1a0U >> 6);
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
    lVar5 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar5 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar5 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 1079358a0; end: 10793598b;  */

void FUN_1079358a0(long param_1)

{
  ulong *puVar1;
  
  func_0x0001079357ec();
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



/* Entry: 107935b00; end: 107935c03;  */

long * FUN_107935b00(long *param_1,long *param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long *plVar2;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x000107946984();
  if (param_1[3] != 0) {
    func_0x0001079466b8();
    unaff_x22 = *(long **)(unaff_x20 + 0x18);
    param_2 = param_1;
    func_0x0001079472ac();
    func_0x000107947238();
  }
  plVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0001079466b8();
    unaff_x22 = *(long **)(unaff_x20 + 0x20);
    plVar2 = (long *)0x21;
    func_0x0001001a59d0();
    func_0x000107947238();
    param_2 = param_1;
  }
  func_0x000107947214();
  if ((bool)in_ZR) {
    func_0x0001079466b8();
    param_2 = plVar2;
    func_0x00010794703c();
    func_0x0001079466ac();
    unaff_x21 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    func_0x0001079466b8();
    param_2 = plVar2;
    func_0x000107946f8c();
    func_0x0001079466ac();
    unaff_x21 = plVar2;
  }
  func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x10));
  if ((long)param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_107935bd0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_107935bd0;
  param_4 = (long *)&UNK_10f43866c;
  func_0x000107946aa4();
  func_0x0001079473b4();
  func_0x000107946758();
  plVar2 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_107935bd0:
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
      iVar4 = ((int)*plVar2 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x00010b4d5738();
      puVar1 = (undefined *)((long)param_4 + (long)iVar4);
      param_4 = plVar2;
      func_0x000107c303e4(plVar2,puVar1);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 107935de8; end: 107935e37;  */

void FUN_107935de8(void)

{
  long unaff_x19;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x000107946280();
  while (unaff_x22 != 0) {
    func_0x000107935e38(*unaff_x21);
    func_0x000107946ff0();
    unaff_x21 = unaff_x21 + 1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x000107947044();
  }
  func_0x000107946cb0();
  return;
}



/* Entry: 107935ee4; end: 107935ef7;  */

void FUN_107935ee4(void)

{
  func_0x000107935e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793617c; end: 1079361a7;  */

undefined8 FUN_10793617c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079361a8(param_1);
  return param_1;
}



/* Entry: 107936624; end: 107936653;  */

void FUN_107936624(void)

{
  func_0x000107936024();
  func_0x0001079462e4();
  return;
}



/* Entry: 107936818; end: 10793684f;  */

void FUN_107936818(void)

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
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 107936a44; end: 107936a47;  */

undefined8 FUN_107936a44(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107936a10(param_1);
  return param_1;
}



/* Entry: 107936c90; end: 107936d63;  */

void FUN_107936c90(ulong *param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x000107946614();
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x0001079470b8();
  }
  func_0x0001079467d4();
  lVar3 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar3 = *(long *)(param_2 + 8);
  }
  if (lVar3 != 0) {
    if ((unaff_x21[1] & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  iVar1 = *(int *)(unaff_x20 + 0x2c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x2c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        func_0x000107936a5c();
      }
      *(int *)((long)unaff_x21 + 0x2c) = iVar1;
    }
    if ((iVar1 == 2) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[4] = (ulong)&DAT_11383d918;
      }
      func_0x000107946f00();
    }
  }
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



/* Entry: 107936e9c; end: 107936edb;  */

void FUN_107936e9c(void)

{
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong *unaff_x19;
  
  func_0x0001079473c0();
  if ((extraout_x8 & 1) != 0) {
    func_0x000107936a98(unaff_x19[3]);
  }
  func_0x000107936e60();
  func_0x000107946df4();
  if ((extraout_x8_00 & 1) == 0) {
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



/* Entry: 10793722c; end: 10793725f;  */

void FUN_10793722c(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long unaff_x19;
  
  func_0x000107946934();
  func_0x000107946c10();
  if (*(int *)(unaff_x19 + 0x54) == 0) {
    return;
  }
  if (*(int *)(unaff_x19 + 0x54) == 3) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto code_r0x000107937148;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      func_0x0001079369e4();
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x54) != 2) goto code_r0x000107937148;
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto code_r0x000107937148;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      func_0x000107935e94();
    }
  }
  __ZdlPv();
code_r0x000107937148:
  *(undefined4 *)(unaff_x19 + 0x54) = 0;
  return;
}



/* Entry: 107937508; end: 10793766f;  */

void FUN_107937508(ulong *param_1,long param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong *unaff_x22;
  
  func_0x000107946614();
  puVar3 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar3 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x0001079470b8();
  }
  func_0x0001079467d4();
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
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
  if (iVar1 == 0) goto LAB_10793764c;
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
      FUN_107936c90();
      goto LAB_10793764c;
    }
    func_0x0001079451cc();
  }
  else {
    if (iVar1 != 2) goto LAB_10793764c;
    if (iVar2 == 2) {
      param_1 = (ulong *)unaff_x21[9];
      func_0x00010794736c(*(undefined4 *)(unaff_x20 + 0x54));
      func_0x0001079360b4();
      goto LAB_10793764c;
    }
    func_0x00010794729c();
    puVar3 = param_1;
  }
  unaff_x21[9] = (ulong)puVar3;
  param_1 = puVar3;
LAB_10793764c:
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



/* Entry: 107937918; end: 1079379cf;  */

void FUN_107937918(ulong *param_1,long param_2,ulong *param_3)

{
  undefined1 in_ZR;
  ulong *puVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  uint unaff_w23;
  
  func_0x000107946614();
  puVar1 = param_3;
  if (((ulong)param_3 & 1) != 0) {
    func_0x000107946e40();
    puVar1 = unaff_x22;
  }
  func_0x0001079467d4();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (lVar2 != 0) {
    if (((ulong)param_3 & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946cdc();
  }
  func_0x000107947208();
  if (!(bool)in_ZR) {
    if ((unaff_w23 & 1) != 0) {
      func_0x000107946e34();
      if (param_1 == (ulong *)0x0) {
        param_1 = puVar1;
        func_0x0001079451fc();
        *(ulong **)(unaff_x21 + 0x20) = param_1;
      }
      else {
        FUN_107937508();
      }
    }
    if ((unaff_w23 >> 1 & 1) != 0) {
      func_0x0001079470a4();
      if (param_1 == (ulong *)0x0) {
        func_0x00010598eb08();
        *(ulong **)(unaff_x21 + 0x28) = puVar1;
        param_1 = puVar1;
      }
      else {
        func_0x00010bceb748();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
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



/* Entry: 107937b4c; end: 107937b4f;  */

void FUN_107937b4c(ulong *param_1)

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



/* Entry: 107937c8c; end: 107937c8f;  */

undefined8 FUN_107937c8c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107937c68(param_1);
  return param_1;
}



/* Entry: 107938020; end: 107938043;  */

undefined1  [16] FUN_107938020(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  func_0x000107946be8();
  func_0x0001079470e8();
  puVar3 = (undefined1 *)(param_2 + 0x30);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x30); puVar2 != (undefined1 *)(param_1 + 0x3c);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = (undefined1 *)(param_1 + 0x3c);
  return auVar5;
}



/* Entry: 1079381c8; end: 1079381cb;  */

void FUN_1079381c8(ulong *param_1)

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



/* Entry: 107938280; end: 10793828b;  */

undefined ** FUN_107938280(void)

{
  return &PTR_DAT_1109eedf0;
}



/* Entry: 107938458; end: 10793846b;  */

void FUN_107938458(void)

{
  func_0x0001079383f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793875c; end: 10793876f;  */

void FUN_10793875c(void)

{
  func_0x000107938714();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107938984; end: 10793898f;  */

undefined ** FUN_107938984(void)

{
  return &PTR_DAT_1109eeed0;
}



/* Entry: 107938b98; end: 107938ba3;  */

undefined ** FUN_107938b98(void)

{
  return &PTR_DAT_1109eef28;
}



/* Entry: 107938d00; end: 107938d13;  */

void FUN_107938d00(void)

{
  func_0x000107938cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107938f60; end: 107938f63;  */

undefined8 FUN_107938f60(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107938f38(param_1);
  return param_1;
}



/* Entry: 1079393d8; end: 10793940b;  */

undefined1  [16] FUN_1079393d8(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x000107946be8();
  func_0x0001079470e8();
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  puVar3 = (undefined1 *)(param_2 + 0x38);
  puVar4 = puVar3;
  for (puVar2 = (undefined1 *)(param_1 + 0x38); puVar2 != (undefined1 *)(param_1 + 0x48);
      puVar2 = puVar2 + 1) {
    uVar1 = *puVar2;
    *puVar2 = *puVar4;
    *puVar4 = uVar1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = (undefined1 *)(param_1 + 0x48);
  return auVar6;
}



/* Entry: 107939590; end: 107939593;  */

void FUN_107939590(ulong *param_1)

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



/* Entry: 107939648; end: 107939653;  */

undefined ** FUN_107939648(void)

{
  return &PTR_DAT_1109ef048;
}



/* Entry: 1079399f4; end: 1079399ff;  */

undefined ** FUN_1079399f4(void)

{
  return &PTR_DAT_1109ef098;
}



/* Entry: 10793a790; end: 10793a7eb;  */

void FUN_10793a790(long param_1,long param_2)

{
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



/* Entry: 10793a914; end: 10793a91f;  */

undefined ** FUN_10793a914(void)

{
  return &PTR_DAT_1109ef0e8;
}



/* Entry: 10793aa80; end: 10793ab33;  */

long * FUN_10793aa80(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if ((char)param_1[2] == '\x01') {
    func_0x00010794668c();
    func_0x000107946ec0();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x12) == '\x01') {
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



/* Entry: 10793ac10; end: 10793ac3f;  */

void FUN_10793ac10(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0001079468d4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined1 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 10793add8; end: 10793adeb;  */

void FUN_10793add8(void)

{
  func_0x00010793adb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793af58; end: 10793af6b;  */

void FUN_10793af58(void)

{
  func_0x00010793af2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793b104; end: 10793b107;  */

undefined8 FUN_10793b104(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}


