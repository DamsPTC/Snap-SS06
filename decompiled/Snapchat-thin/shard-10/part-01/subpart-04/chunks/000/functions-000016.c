/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10792c2cc; end: 10792c2d3;  */

void FUN_10792c2cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10792c3d8; end: 10792c41f; -[SCNMapSdkResourceRequesterTimestamp initWithSeconds:] */

void FUN_10792c3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8ea8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 10792c63c; end: 10792c6e3;  */

void FUN_10792c63c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010792c7cc(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010792ccac(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa5440(uVar2);
  func_0x00010792c7c4();
  func_0x00010792c7b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10792c8f8; end: 10792c9f3; +[SCNBitmojiFetcherBitmojiUriParser parse:] */

void FUN_10792c8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [64];
  char cStack_38;
  
  _objc_retain(param_3);
  func_0x0001000fbca4(auStack_90,param_3);
  func_0x00010792ceac(auStack_78,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  if (cStack_38 == '\x01') {
    puVar1 = auStack_78;
    func_0x00010792c7cc(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  func_0x0001072fbdec(auStack_78);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10792cd70; end: 10792cd8f;  */

void FUN_10792cd70(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001000ff1ac();
  }
  return;
}



/* Entry: 10792d3dc; end: 10792d3df;  */

void FUN_10792d3dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10792d5b8; end: 10792d5fb;  */

void FUN_10792d5b8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  ___cxa_allocate_exception();
  *puVar1 = &PTR_DAT_1109ebe50;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  ___cxa_throw();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 10792d7a0; end: 10792d7a7; -[SCNMapCommonAuthContext headers] */

undefined8 FUN_10792d7a0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10792da3c; end: 10792da7f; -[SCNMapCommonAuthContextFetchedCallback .cxx_construct] */

undefined8 * FUN_10792da3c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x00010015c19c();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010792db7c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10792ddc8; end: 10792ddd3;  */

long FUN_10792ddc8(long param_1)

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
    ppuStack_38 = &PTR_DAT_1109ebec0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10792dfd0; end: 10792dfd7;  */

bool FUN_10792dfd0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10792e194; end: 10792e197;  */

bool FUN_10792e194(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10792e358; end: 10792e35f;  */

bool FUN_10792e358(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10792e500; end: 10792e543; +[SMSdkLatLng descriptor] */

void FUN_10792e500(void)

{
  long lVar1;
  
  if (lRam0000000113726bd0 == 0) {
    lVar1 = lRam0000000113726bd0;
    func_0x000107930980();
    func_0x000107930a20();
    lRam0000000113726bd0 = lVar1;
  }
  return;
}



/* Entry: 10792e740; end: 10792e797; +[SMSdkLineString descriptor] */

long FUN_10792e740(long param_1)

{
  if (lRam0000000113726c10 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x00010c2289e0();
    lRam0000000113726c10 = param_1;
  }
  return lRam0000000113726c10;
}



/* Entry: 10792e9f0; end: 10792ea3b; +[SMSdkFeature_Property_Value_ValueObject descriptor] */

long FUN_10792e9f0(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726c50;
  if (lRam0000000113726c50 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x000107930a70();
  }
  lRam0000000113726c50 = lVar1;
  return lVar1;
}



/* Entry: 10792ec5c; end: 10792ec9f; +[SMSdkPlaceLocation descriptor] */

void FUN_10792ec5c(void)

{
  long lVar1;
  
  if (lRam0000000113726c90 == 0) {
    lVar1 = lRam0000000113726c90;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726c90 = lVar1;
  }
  return;
}



/* Entry: 10792ef18; end: 10792ef6f; +[SMSdkImage descriptor] */

long FUN_10792ef18(long param_1)

{
  if (lRam0000000113726cd0 == 0) {
    func_0x000107930980();
    func_0x000107930a38();
    func_0x00010c2289e0();
    lRam0000000113726cd0 = param_1;
  }
  return lRam0000000113726cd0;
}



/* Entry: 10792f1d8; end: 10792f227; +[SMSdkTravelStatus descriptor] */

void FUN_10792f1d8(void)

{
  long lVar1;
  
  if (lRam0000000113726d10 == 0) {
    lVar1 = lRam0000000113726d10;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930b04();
    lRam0000000113726d10 = lVar1;
  }
  return;
}



/* Entry: 10792f428; end: 10792f473; +[SMSdkNowPlayingInfo descriptor] */

void FUN_10792f428(void)

{
  long lVar1;
  
  if (lRam0000000113726d50 == 0) {
    lVar1 = lRam0000000113726d50;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930aec();
    lRam0000000113726d50 = lVar1;
  }
  return;
}



/* Entry: 10792f688; end: 10792f6f7; +[SMSdkLocationSharingPreferences_LocationSharingSettings descriptor] */

long FUN_10792f688(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726d90;
  if (lRam0000000113726d90 == 0) {
    func_0x0001079309f4();
    func_0x000107930a44();
    func_0x0001079309b4();
    func_0x000107930ae4();
  }
  lRam0000000113726d90 = lVar1;
  return lVar1;
}



/* Entry: 10792f918; end: 10792f967; +[SMSdkPublicUserInfo descriptor] */

void FUN_10792f918(void)

{
  long lVar1;
  
  if (lRam0000000113726dd0 == 0) {
    lVar1 = lRam0000000113726dd0;
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930b04();
    lRam0000000113726dd0 = lVar1;
  }
  return;
}



/* Entry: 10792fba4; end: 10792fbff; +[SMSdkMapSdkSessionInitializationParams_MapClearColor descriptor] */

long FUN_10792fba4(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e10;
  if (lRam0000000113726e10 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x00010bf00dc0();
    func_0x000107930b34();
  }
  lRam0000000113726e10 = lVar1;
  return lVar1;
}



/* Entry: 10792fe38; end: 10792fe7b; +[SMSdkAppActionTriggerParameters descriptor] */

void FUN_10792fe38(void)

{
  long lVar1;
  
  if (lRam0000000113726e50 == 0) {
    lVar1 = lRam0000000113726e50;
    func_0x000107930980();
    func_0x000107930a04();
    lRam0000000113726e50 = lVar1;
  }
  return;
}



/* Entry: 107930118; end: 107930163; +[SMSdkMapBrowsingContext_DefaultBrowsingContext descriptor] */

long FUN_107930118(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726e90;
  if (lRam0000000113726e90 == 0) {
    func_0x0001079309f4();
    func_0x00010793099c();
    func_0x0001079309d8();
  }
  lRam0000000113726e90 = lVar1;
  return lVar1;
}



/* Entry: 1079303a4; end: 1079303ef; +[SMSdkMapBrowsingContext_MapSnapshotBrowsingContext descriptor] */

long FUN_1079303a4(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726ed0;
  if (lRam0000000113726ed0 == 0) {
    func_0x000107930980();
    func_0x000107930a04();
    func_0x0001079309d8();
  }
  lRam0000000113726ed0 = lVar1;
  return lVar1;
}



/* Entry: 107930628; end: 107930687; +[SMSdkEnableInspectorRequest_InspectorClient descriptor] */

long FUN_107930628(void)

{
  long lVar1;
  
  lVar1 = lRam0000000113726f10;
  if (lRam0000000113726f10 == 0) {
    func_0x0001079309f4();
    func_0x000107930a10();
    func_0x000107930a98();
    func_0x000107930b4c();
  }
  lRam0000000113726f10 = lVar1;
  return lVar1;
}



/* Entry: 1079308d4; end: 10793092b; +[SMSdkFriendClusterUsers descriptor] */

long FUN_1079308d4(long param_1)

{
  if (lRam0000000113726f50 == 0) {
    func_0x000107930980();
    func_0x000107930a20();
    func_0x00010c2289e0();
    lRam0000000113726f50 = param_1;
  }
  return lRam0000000113726f50;
}



/* Entry: 107930c48; end: 107930ce7;  */

ulong FUN_107930c48(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x10)) * -9 + 0x2c0U >> 6);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = ((int)LZCOUNT((long)*(int *)(param_1 + 0x14)) * -9 + 0x2c0U >> 6) + uVar1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    uVar1 = lVar2 + uVar1;
  }
  *(int *)(param_1 + 0x18) = (int)uVar1;
  return uVar1;
}



/* Entry: 107930fb4; end: 107930fb7;  */

void FUN_107930fb4(long param_1,long param_2)

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



/* Entry: 10793116c; end: 1079311cb;  */

void FUN_10793116c(void)

{
  return;
}



/* Entry: 107931324; end: 107931353;  */

void FUN_107931324(long param_1,long param_2)

{
  if (param_2 == param_1) {
    return;
  }
  func_0x00010068f438();
  func_0x000107931258();
  func_0x000107946c18();
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
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



/* Entry: 1079314a4; end: 1079314eb;  */

long FUN_1079314a4(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 9;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = lVar1 + 9;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x20) = (int)lVar1;
  return lVar1;
}



/* Entry: 1079315c8; end: 1079315db;  */

void FUN_1079315c8(void)

{
  func_0x00010793156c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107931810; end: 107931813;  */

undefined8 FUN_107931810(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 1079319cc; end: 1079319cf;  */

long FUN_1079319cc(long param_1)

{
  func_0x000107946a94();
  func_0x000107943724(param_1 + 0x10);
  return param_1;
}



/* Entry: 107931b0c; end: 107931b1b;  */

void FUN_107931b0c(long *param_1,long param_2)

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



/* Entry: 107931d08; end: 107931dcf;  */

void FUN_107931d08(ulong *param_1)

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
  if (iVar1 == 0) goto LAB_107931db4;
  func_0x000107947068();
  if (!(bool)in_ZR) {
    if (unaff_w24 != 0) {
      param_1 = unaff_x21;
      func_0x000107931b1c();
    }
    *(int *)((long)unaff_x21 + 0x1c) = iVar1;
  }
  if (iVar1 == 2) {
    if (unaff_w24 == 2) {
      func_0x0001079467c4();
      func_0x00010794736c();
      func_0x000107931adc();
      goto LAB_107931db4;
    }
    func_0x000107946bdc();
    FUN_107944dfc();
  }
  else {
    if (iVar1 != 1) goto LAB_107931db4;
    if (unaff_w24 == 1) {
      func_0x0001079467c4();
      func_0x000107931364();
      goto LAB_107931db4;
    }
    func_0x000107946bdc();
    func_0x000107944dcc();
  }
  unaff_x21[2] = (ulong)param_1;
LAB_107931db4:
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



/* Entry: 107931f0c; end: 107931f23;  */

void FUN_107931f0c(void)

{
  func_0x0001079328b4();
  func_0x0001079462e4();
  return;
}



/* Entry: 10793202c; end: 107932057;  */

undefined8 FUN_10793202c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107932058(param_1);
  return param_1;
}



/* Entry: 107932204; end: 107932207;  */

void FUN_107932204(ulong *param_1,long param_2,ulong *param_3)

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



/* Entry: 107932464; end: 107932497;  */

void FUN_107932464(void)

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



/* Entry: 107932728; end: 10793273b;  */

void FUN_107932728(long param_1)

{
  undefined4 extraout_w8;
  ulong uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x000107946e64();
  switch(extraout_w8) {
  case 2:
    func_0x000107946c3c();
  default:
    goto code_r0x000107932624;
  case 6:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_00;
    }
    if (uVar1 != 0) goto code_r0x000107932624;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107931dd0();
    }
    break;
  case 7:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) goto code_r0x000107932624;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107931f74();
    }
    break;
  case 8:
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107946bc8();
      uVar1 = extraout_x8_01;
    }
    if (uVar1 != 0) goto code_r0x000107932624;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x000107932414();
    }
  }
  __ZdlPv();
code_r0x000107932624:
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 10793299c; end: 1079329c7;  */

undefined8 FUN_10793299c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x0001079329c8(param_1);
  return param_1;
}



/* Entry: 107932b4c; end: 107932b4f;  */

void FUN_107932b4c(ulong *param_1,long param_2,ulong *param_3)

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



/* Entry: 107932d60; end: 107932d73;  */

void FUN_107932d60(void)

{
  func_0x000107932ce0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107933210; end: 1079332af;  */

void FUN_107933210(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107946c50();
  func_0x000107946d88(&PTR_DAT_1109ed320);
  if ((extraout_x8 & 1) != 0) {
    func_0x000107946680();
  }
  lVar2 = unaff_x20 + 0x10;
  func_0x000107946ca0();
  *(long *)(unaff_x19 + 0x10) = lVar2;
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  uVar1 = *(undefined4 *)(unaff_x20 + 0x24);
  *(undefined4 *)(unaff_x19 + 0x24) = uVar1;
  switch(uVar1) {
  case 2:
    *(undefined1 *)(unaff_x19 + 0x18) = *(undefined1 *)(unaff_x20 + 0x18);
    break;
  case 3:
  case 5:
    *(undefined4 *)(unaff_x19 + 0x18) = *(undefined4 *)(unaff_x20 + 0x18);
    break;
  case 4:
  case 7:
    lVar2 = unaff_x20 + 0x18;
    func_0x000107946ca0();
    *(long *)(unaff_x19 + 0x18) = lVar2;
    break;
  case 6:
    *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  }
  return;
}



/* Entry: 107933394; end: 10793350f;  */

long * FUN_107933394(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
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
  if (param_2 < 0) {
    if (unaff_x22[1] != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_1079333c8;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_1079333c8:
      param_4 = (long *)&UNK_10f438343;
      func_0x000107946aa4();
      func_0x000107946634();
      param_1 = plVar2;
      unaff_x21 = plVar2;
    }
  }
  switch(*(undefined4 *)(unaff_x20 + 0x24)) {
  case 2:
    func_0x0001079466b8();
    func_0x00010794739c();
    param_1 = (long *)0x10;
    goto code_r0x0001079334a8;
  case 3:
    func_0x000107946f3c();
    func_0x0001001a5b64();
    unaff_x21 = param_1;
    break;
  case 4:
    func_0x000107946ac8(*(undefined8 *)(unaff_x20 + 0x18));
    func_0x000107946aa4();
    param_3 = unaff_x22;
    goto code_r0x0001079334d0;
  case 5:
    func_0x0001079466b8();
    func_0x00010794739c();
    param_1 = (long *)0x28;
code_r0x0001079334a8:
    func_0x0001001a59d0();
    func_0x0001079466ac();
    unaff_x21 = param_1;
    break;
  case 6:
    func_0x0001079466b8();
    func_0x00010794739c();
    param_1 = (long *)0x31;
    func_0x0001001a59d0();
    func_0x000107947238();
    break;
  case 7:
    param_3 = (long *)(*(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc);
    func_0x0001079473b4();
    unaff_x19 = param_1;
code_r0x0001079334d0:
    func_0x0001001a5a30();
    param_1 = unaff_x19;
    param_4 = unaff_x21;
    unaff_x21 = unaff_x19;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x000107946ab4();
  if ((long)param_3 < 0) {
    param_3 = *(long **)(extraout_x8 + 0x10);
  }
  func_0x000107946ee4();
  if ((long)(int)param_3 <= *param_1 - (long)param_4) {
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  while( true ) {
    iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
    iVar3 = (int)param_3;
    param_3 = (long *)(ulong)(uint)(iVar3 - iVar4);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
    func_0x00010b4d5738();
    puVar1 = (undefined *)((long)param_4 + (long)iVar4);
    param_4 = param_1;
    func_0x000107c303e4(param_1,puVar1);
  }
  func_0x00010b4d5738();
  return (long *)((long)param_4 + (long)iVar3);
}



/* Entry: 1079337a4; end: 1079337b7;  */

void FUN_1079337a4(void)

{
  func_0x000107933774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079339bc; end: 1079339c7;  */

undefined ** FUN_1079339bc(void)

{
  return &PTR_DAT_1109ee790;
}



/* Entry: 107933b60; end: 107933b8b;  */

undefined8 FUN_107933b60(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107933b8c(param_1);
  return param_1;
}



/* Entry: 107933ec0; end: 107933f2b;  */

void FUN_107933ec0(void)

{
  ulong *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001079464ac();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  lVar2 = unaff_x20 + 0x28;
  func_0x00010064eefc();
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x40));
  lVar3 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar3 = *(long *)(lVar2 + 8);
  }
  if (lVar3 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    puVar1 = (ulong *)(unaff_x19 + 0x40);
    func_0x0001001a53d4();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0001079466c4();
    if ((*puVar1 & 1) == 0) {
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



/* Entry: 10793422c; end: 1079342bb;  */

void FUN_10793422c(ulong *param_1,long param_2)

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



/* Entry: 107934430; end: 107934457;  */

undefined8 FUN_107934430(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 10793458c; end: 10793458f;  */

undefined8 FUN_10793458c(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 1079346c8; end: 1079346db;  */

void FUN_1079346c8(void)

{
  func_0x000107934698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107934934; end: 10793493f;  */

undefined ** FUN_107934934(void)

{
  return &PTR_DAT_1109ee978;
}



/* Entry: 107934cd4; end: 107934cd7;  */

undefined8 FUN_107934cd4(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107934ca0(param_1);
  return param_1;
}



/* Entry: 107934f64; end: 10793505b;  */

void FUN_107934f64(ulong *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  ulong uVar5;
  
  func_0x000107946614();
  uVar5 = param_3;
  if ((param_3 & 1) != 0) {
    func_0x000107946e40();
    uVar5 = unaff_x22;
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((param_3 & 1) != 0) {
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



/* Entry: 107935248; end: 1079354df;  */

long * FUN_107935248(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  long *unaff_x21;
  int iVar7;
  long *unaff_x22;
  int iVar8;
  
  func_0x000107946984();
  func_0x000107946ac8(param_1[0xc]);
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_10793529c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_10793529c;
  param_4 = (long *)&UNK_10f438643;
  func_0x000107946aa4();
  func_0x000107946634();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_10793529c:
  lVar6 = *(long *)(unaff_x20 + 0x78);
  if (lVar6 != 0) {
    func_0x000107946f3c();
    func_0x00010062824c();
    unaff_x21 = param_1;
  }
  iVar7 = *(int *)(unaff_x20 + 0x20);
  while (iVar7 != 0) {
    func_0x0001079465e4();
    param_3 = (ulong)*(uint *)(lVar6 + 0x24);
    param_1 = (long *)0x3;
    func_0x0001079467ac();
    func_0x000107947354();
  }
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x68) + 0x34);
    param_1 = (long *)0x4;
    func_0x0001079467ac();
    unaff_x21 = param_1;
  }
  plVar3 = param_1;
  if (*(int *)(unaff_x20 + 0x88) != 0) {
    func_0x0001079466b8();
    plVar3 = (long *)0x2d;
    func_0x0001001a59d0(0x2d,param_1);
    func_0x000107947348();
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x8c) == '\x01') {
    func_0x0001079466b8();
    plVar4 = (long *)0x38;
    func_0x0001001a59d0(0x38,plVar3);
    func_0x0001079466ac();
    unaff_x21 = plVar4;
  }
  plVar3 = *(long **)(unaff_x20 + 0x80);
  if (plVar3 != (long *)0x0) {
    func_0x000107946f3c();
    func_0x00010599ce18();
    unaff_x21 = plVar4;
  }
  plVar5 = plVar4;
  if (*(char *)(unaff_x20 + 0x8d) == '\x01') {
    func_0x0001079466b8();
    plVar5 = (long *)0x50;
    func_0x0001001a59d0();
    func_0x0001079466ac();
    plVar3 = plVar4;
    unaff_x21 = plVar5;
  }
  iVar8 = *(int *)(unaff_x20 + 0x38);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    func_0x0001079469f4(*(undefined8 *)(unaff_x20 + 0x30));
    param_3 = (ulong)*(uint *)(plVar3 + 3);
    plVar5 = (long *)0xb;
    func_0x0001079467ac();
    unaff_x21 = plVar5;
  }
  plVar3 = *(long **)(unaff_x20 + 0x90);
  if (plVar3 != (long *)0x0) {
    func_0x000107946f3c();
    func_0x000106af68a8();
    unaff_x21 = plVar5;
  }
  plVar4 = plVar5;
  if (*(int *)(unaff_x20 + 0x98) != 0) {
    func_0x0001079466b8();
    plVar4 = (long *)0x6d;
    func_0x0001001a59d0();
    func_0x000107947348();
    plVar3 = plVar5;
  }
  iVar8 = *(int *)(unaff_x20 + 0x50);
  for (iVar7 = 0; iVar8 != iVar7; iVar7 = iVar7 + 1) {
    func_0x0001079469f4(*(undefined8 *)(unaff_x20 + 0x48));
    param_3 = (ulong)*(uint *)(plVar3 + 6);
    plVar4 = (long *)0xe;
    func_0x0001079467ac();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(int *)(unaff_x20 + 0x9c) != 0) {
    func_0x0001079466b8();
    plVar3 = (long *)0x78;
    func_0x0001001a59d0(0x78,plVar4);
    func_0x0001079466ac();
    unaff_x21 = plVar3;
  }
  plVar4 = plVar3;
  if (*(char *)(unaff_x20 + 0x8e) == '\x01') {
    func_0x0001079466b8();
    plVar4 = (long *)0x80;
    func_0x0001001a59d0(0x80,plVar3);
    func_0x0001079466ac();
    unaff_x21 = plVar4;
  }
  plVar3 = plVar4;
  if (*(char *)(unaff_x20 + 0x8f) == '\x01') {
    func_0x0001079466b8();
    plVar3 = (long *)0x88;
    func_0x0001001a59d0(0x88,plVar4);
    func_0x0001079466ac();
    unaff_x21 = plVar3;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x70) + 0x20);
    plVar3 = (long *)0x12;
    func_0x0001079467ac();
    unaff_x21 = plVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x000107946ab4();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x000107946ee4();
    if (*plVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*plVar3 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        param_3 = (ulong)(uint)(iVar7 - iVar8);
        if (iVar7 - iVar8 == 0 || iVar7 < iVar8) break;
        func_0x00010b4d5738();
        puVar1 = (undefined *)((long)param_4 + (long)iVar8);
        param_4 = plVar3;
        func_0x000107c303e4(plVar3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 107935894; end: 10793589f;  */

undefined ** FUN_107935894(void)

{
  return &PTR_DAT_1109eea48;
}



/* Entry: 107935acc; end: 107935aff;  */

void FUN_107935acc(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010794673c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  *(undefined2 *)(unaff_x19 + 0x28) = 0;
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



/* Entry: 107935d80; end: 107935de7;  */

long * FUN_107935d80(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(param_2 + 0x2c);
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



/* Entry: 107935ee0; end: 107935ee3;  */

undefined8 FUN_107935ee0(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107935ec0(param_1);
  return param_1;
}



/* Entry: 107936140; end: 10793617b;  */

void FUN_107936140(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_DAT_1109ee1d0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  param_1[9] = &DAT_11383d918;
  param_1[10] = &DAT_11383d918;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



/* Entry: 107936504; end: 107936623;  */

void FUN_107936504(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  func_0x000107946c8c();
  func_0x0001079463ac();
  while (unaff_x22 != 0) {
    param_1 = *unaff_x21;
    func_0x0001079354e0();
    func_0x0001079462a4();
    unaff_x21 = unaff_x21 + 1;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x38);
  while ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) != 0) {
    func_0x000107946340();
    func_0x000107946974();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x48));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  func_0x000107946af8(*(undefined8 *)(unaff_x19 + 0x50));
  lVar4 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar4 = *(long *)(param_1 + 8);
  }
  if (lVar4 != 0) {
    func_0x0001001a5744();
    func_0x000107946ad4();
  }
  iVar3 = (int)param_1;
  uVar2 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar2 & 7) != 0) {
    if ((uVar2 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x58);
      func_0x000107936624();
      func_0x000107946ad4();
    }
    if ((uVar2 >> 1 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x60);
      func_0x000107936624();
      func_0x000107946ad4();
    }
    if ((uVar2 >> 2 & 1) != 0) {
      iVar3 = (int)*(undefined8 *)(unaff_x19 + 0x68);
      func_0x00010793663c();
      func_0x000107946ad4();
    }
  }
  lVar4 = unaff_x20 + (ulong)uVar1;
  if (*(int *)(unaff_x19 + 0x70) != 0) {
    lVar4 = unaff_x20 + (ulong)uVar1 + 5;
  }
  if (*(int *)(unaff_x19 + 0x74) != 0) {
    lVar4 = lVar4 + 5;
  }
  func_0x00010794711c(lVar4);
  if ((extraout_x8_01 & 1) != 0) {
    func_0x000107947044();
    lVar4 = extraout_x8_02;
    if (extraout_x8_02 < 0) {
      lVar4 = *(long *)(extraout_x9 + 0x10);
    }
    iVar3 = (int)lVar4 + iVar3;
  }
  *(int *)(unaff_x19 + 0x14) = iVar3;
  return;
}



/* Entry: 10793680c; end: 107936817;  */

undefined ** FUN_10793680c(void)

{
  return &PTR_DAT_1109eebb0;
}



/* Entry: 107936a10; end: 107936a43;  */

void FUN_107936a10(void)

{
  long unaff_x19;
  
  func_0x000107946934();
  func_0x000107946c10();
  if (*(int *)(unaff_x19 + 0x2c) != 0) {
    if (*(int *)(unaff_x19 + 0x2c) - 1U < 2) {
      func_0x000107946f1c();
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = 0;
  }
  return;
}



/* Entry: 107936c8c; end: 107936c8f;  */

void FUN_107936c8c(ulong *param_1,long param_2,ulong param_3)

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



/* Entry: 107936e90; end: 107936e9b;  */

undefined ** FUN_107936e90(void)

{
  return &PTR_DAT_1109eec40;
}



/* Entry: 107937200; end: 10793722b;  */

undefined8 FUN_107937200(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x00010793722c(param_1);
  return param_1;
}



/* Entry: 107937504; end: 107937507;  */

void FUN_107937504(ulong *param_1,long param_2,ulong *param_3)

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



/* Entry: 1079377ac; end: 107937917;  */

long * FUN_1079377ac(long *param_1,long param_2,ulong param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0001079464c0();
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_1079377f0;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_1079377f0;
  param_4 = (long *)&UNK_10f438880;
  func_0x000107946aa4();
  func_0x000107946398();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_1079377f0:
  if (*(int *)(unaff_x21 + 0x30) != 0) {
    func_0x0001079468c8();
    func_0x000107946bd4();
    func_0x000107946a60();
    unaff_x20 = param_1;
  }
  uVar2 = *(uint *)(unaff_x21 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x20) + 0x50);
    param_1 = (long *)0x3;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x21 + 0x28) + 0x18);
    param_1 = (long *)0x4;
    func_0x0001079467f0();
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
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
  return unaff_x20;
}



/* Entry: 107937a94; end: 107937b4b;  */

long * FUN_107937a94(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4)

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



/* Entry: 107937c68; end: 107937c8b;  */

void FUN_107937c68(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x000107946934();
  func_0x000107946c10();
  func_0x000107946f1c();
  uVar1 = *(ulong *)(unaff_x19 + 0x28) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 107937f28; end: 10793801f;  */

void FUN_107937f28(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
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
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    *(long *)(unaff_x19 + 0x30) = *(long *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x19 + 0x38) = *(int *)(unaff_x20 + 0x38);
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



/* Entry: 107938108; end: 1079381c7;  */

long * FUN_107938108(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(param_2 + 0x3c);
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



/* Entry: 10793826c; end: 10793827f;  */

void FUN_10793826c(void)

{
  func_0x000107938240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107938454; end: 107938457;  */

long FUN_107938454(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107938758; end: 10793875b;  */

long FUN_107938758(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bcebc38();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 107938970; end: 107938983;  */

void FUN_107938970(void)

{
  func_0x000107938934();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107938b84; end: 107938b97;  */

void FUN_107938b84(void)

{
  func_0x000107938b48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107938cfc; end: 107938cff;  */

undefined8 FUN_107938cfc(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946c3c();
  return param_1;
}



/* Entry: 107938f38; end: 107938f5f;  */

void FUN_107938f38(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x000107946934();
  func_0x000107946c10();
  func_0x000107946f1c();
  func_0x0001079470b0();
  uVar1 = *(ulong *)(unaff_x19 + 0x30) ^ 2;
  if ((uVar1 & 3) != 0) {
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    func_0x000107c60ca0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(uVar1);
  return;
}



/* Entry: 1079392ac; end: 1079393d7;  */

void FUN_1079392ac(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
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
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    func_0x000107946f48();
  }
  func_0x000107946aec(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = extraout_x8_03;
  if (extraout_x8_03 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x000107946ae0();
    }
    param_1 = (ulong *)(unaff_x19 + 0x30);
    func_0x0001001a53d4();
  }
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    *(long *)(unaff_x19 + 0x38) = *(long *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
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



/* Entry: 1079394d0; end: 10793958f;  */

long * FUN_1079394d0(undefined8 param_1,long param_2,ulong param_3,long *param_4)

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
    param_3 = (ulong)*(uint *)(param_2 + 0x48);
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



/* Entry: 107939634; end: 107939647;  */

void FUN_107939634(void)

{
  func_0x000107939608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1079399e0; end: 1079399f3;  */

void FUN_1079399e0(void)

{
  func_0x000107939800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793a29c; end: 10793a78f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10793a29c(ulong *param_1)

{
  uint uVar1;
  ulong extraout_x8;
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
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x000107946f80();
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x0001079472bc();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 0xff) != 0) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x60);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010598eb08();
        *(ulong **)(unaff_x21 + 0x60) = param_1;
      }
      else {
        func_0x00010bceb748();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x68);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x68) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x70);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0x70) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x78);
      if (param_1 == (ulong *)0x0) {
        func_0x0001079472a4();
        *(ulong **)(unaff_x21 + 0x78) = param_1;
      }
      else {
        func_0x000107934bac();
      }
    }
    if ((uVar1 >> 4 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x80);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb0();
        *(ulong **)(unaff_x21 + 0x80) = param_1;
      }
      else {
        func_0x000107931364();
      }
    }
    if ((uVar1 >> 5 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x88);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945230();
        *(ulong **)(unaff_x21 + 0x88) = param_1;
      }
      else {
        func_0x00010793863c();
      }
    }
    if ((uVar1 >> 6 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x90);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079452e0();
        *(ulong **)(unaff_x21 + 0x90) = param_1;
      }
      else {
        func_0x00010793692c();
      }
    }
    if ((uVar1 >> 7 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x98);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945330();
        *(ulong **)(unaff_x21 + 0x98) = param_1;
      }
      else {
        func_0x000107937b50();
      }
    }
  }
  if ((uVar1 & 0xff00) != 0) {
    if ((uVar1 >> 8 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945360();
        *(ulong **)(unaff_x21 + 0xa0) = param_1;
      }
      else {
        func_0x0001079381cc();
      }
    }
    if ((uVar1 >> 9 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xa8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945390();
        *(ulong **)(unaff_x21 + 0xa8) = param_1;
      }
      else {
        func_0x0001079383c4();
      }
    }
    if ((uVar1 >> 10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xb0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079453dc();
        *(ulong **)(unaff_x21 + 0xb0) = param_1;
      }
      else {
        func_0x00010793a6b0();
      }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xb8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x000107945494();
        *(ulong **)(unaff_x21 + 0xb8) = param_1;
      }
      else {
        func_0x00010793a790();
      }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xc0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xc0) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 200);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079454c4();
        *(ulong **)(unaff_x21 + 200) = param_1;
      }
      else {
        func_0x00010793a7d0();
      }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xd0);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794551c();
        *(ulong **)(unaff_x21 + 0xd0) = param_1;
      }
      else {
        func_0x000107938c94();
      }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xd8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x00010794556c();
        *(ulong **)(unaff_x21 + 0xd8) = param_1;
      }
      else {
        func_0x00010793a7ec();
      }
    }
  }
  if ((uVar1 & 0x3f0000) != 0) {
    if ((uVar1 >> 0x10 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xe0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xe0) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xe8);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0xe8) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xf0);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946eb8();
        *(ulong **)(unaff_x21 + 0xf0) = param_1;
      }
      else {
        func_0x00010bcebc88();
      }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0xf8);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        func_0x0001079455bc();
        *(ulong **)(unaff_x21 + 0xf8) = param_1;
      }
      else {
        func_0x00010793a81c();
      }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x100);
      if (param_1 == (ulong *)0x0) {
        func_0x000107946dec();
        *(ulong **)(unaff_x21 + 0x100) = param_1;
      }
      else {
        func_0x00010bcebb24();
      }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x108);
      if (param_1 == (ulong *)0x0) {
        func_0x00010794561c();
        *(ulong **)(unaff_x21 + 0x108) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        func_0x000107939594();
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



/* Entry: 10793a900; end: 10793a913;  */

void FUN_10793a900(void)

{
  func_0x00010793a8d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793aa74; end: 10793aa7f;  */

undefined ** FUN_10793aa74(void)

{
  return &PTR_DAT_1109ef128;
}



/* Entry: 10793ac04; end: 10793ac0f;  */

undefined ** FUN_10793ac04(void)

{
  return &PTR_DAT_1109ef168;
}



/* Entry: 10793add4; end: 10793add7;  */

undefined8 FUN_10793add4(undefined8 param_1)

{
  func_0x000107946a94();
  return param_1;
}



/* Entry: 10793af54; end: 10793af57;  */

undefined8 FUN_10793af54(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793b0dc; end: 10793b103;  */

undefined8 FUN_10793b0dc(undefined8 param_1)

{
  func_0x000107946a94();
  func_0x000107946e00();
  return param_1;
}



/* Entry: 10793b260; end: 10793b367;  */

void FUN_10793b260(ulong *param_1)

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



/* Entry: 10793b630; end: 10793b693;  */

long FUN_10793b630(long param_1)

{
  func_0x000107946a94();
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010793b368();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010793abc4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010bceba98();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 10793b840; end: 10793b853;  */

void FUN_10793b840(void)

{
  func_0x00010793b818();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10793b970; end: 10793b9eb;  */

long * FUN_10793b970(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

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
    func_0x00010794668c();
    func_0x000107946d6c();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010794668c();
    func_0x000107947244();
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



/* Entry: 10793bafc; end: 10793bbd3;  */

long * FUN_10793bafc(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x0001079466d4();
  if ((int)param_1[4] != 0) {
    func_0x000107946fc8();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x24) == '\x01') {
    func_0x00010794668c();
    func_0x000107946bd4();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    func_0x000107946a38();
    param_4 = param_1;
  }
  if (*(char *)(unaff_x20 + 0x25) == '\x01') {
    func_0x00010794668c();
    func_0x000107946ef8();
    func_0x0001079466ac();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    func_0x00010794668c();
    func_0x00010794703c();
    func_0x000107946a6c();
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


