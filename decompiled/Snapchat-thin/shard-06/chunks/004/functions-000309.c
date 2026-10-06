/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048f6e38; end: 1048f70d7;  */

undefined8
FUN_1048f6e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_68 = param_2;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  _objc_allocWithZone();
  uVar2 = param_1;
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_1);
  __s10Foundation4UUIDVACycfC(auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar5 + 8))(auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
  }
  _objc_msgSend(unaff_x20,PTR_s_initWithPermissions_tracking_non_1125251b0,uVar2,uStack_68,param_1,
                param_3,param_5);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  return unaff_x20;
}



/* Entry: 1048f70d8; end: 1048f715f; -[FBSDKLoginConfiguration initWithPermissions:tracking:messengerPageId:authType:] */

void FUN_1048f70d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _objc_retain(param_6);
  func_0x0001048f6f8c(param_3,param_4,param_5,puVar1,param_6);
  return;
}



/* Entry: 1048f7160; end: 1048f7a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f7160(long param_1,undefined8 param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,ulong param_7,ulong param_8)

{
  ulong *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  undefined1 auStack_110 [16];
  undefined8 auStack_100 [2];
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_80 [16];
  ulong uStack_70;
  ulong uStack_68;
  
  lVar5 = 0;
  uStack_d8 = param_2;
  uStack_d0 = param_5;
  __s10Foundation12CharacterSetVMa();
  lVar11 = *(long *)(lVar5 + -8);
  lVar3 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_f0 + lVar3;
  lVar6 = unaff_x20;
  _objc_allocWithZone();
  uVar10 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar10 = param_4 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
LAB_1048f73c4:
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_6);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x3f);
    __sSS6appendyySSF(0x2064696c61766e49,0xee003a65636e6f6e);
    __sSS6appendyySSF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    __sSS6appendyySSF(0xd00000000000002f,0x800000010f21a5b0);
    uVar4 = uStack_68;
    uVar10 = uStack_70;
    puVar9 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    _objc_msgSend(puVar9,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar10);
  }
  else {
    lVar7 = lVar6;
    uStack_70 = param_3;
    uStack_68 = param_4;
    __s10Foundation12CharacterSetV11whitespacesACvgZ(lVar12);
    func_0x000100e8b654();
    uVar10 = 0;
    __sSy10FoundationE16rangeOfCharacter4from7options0B0SnySS5IndexVGSgAA0D3SetV_So22NSStringCompareOptionsVAItF
              (lVar12,0,0,0,1,PTR___sSSN_11034da80,lVar7);
    (**(code **)(lVar11 + 8))(lVar12,lVar5);
    if ((uVar10 & 1) == 0) goto LAB_1048f73c4;
    lVar11 = param_1;
    func_0x000100403a6c();
    _swift_bridgeObjectRelease(param_1);
    lVar5 = lVar11;
    FUN_1048f0530();
    _swift_bridgeObjectRelease(lVar11);
    if (lVar5 != 0) {
      if (param_7 == 0) {
LAB_1048f7354:
        *(long *)(lVar6 + _DAT_11309ca08) = lVar5;
        *(undefined8 *)(lVar6 + _DAT_11309ca10) = uStack_d8;
        puVar1 = (ulong *)(lVar6 + _DAT_11309ca18);
        *puVar1 = param_3;
        puVar1[1] = param_4;
        puVar2 = (undefined8 *)(lVar6 + _DAT_11309ca20);
        *puVar2 = uStack_d0;
        puVar2[1] = param_6;
        *(ulong *)(lVar6 + _DAT_11309ca28) = param_7;
        *(ulong *)(lVar6 + _DAT_11309ca30) = param_8;
        _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
        return;
      }
      lVar11 = 0x11309c7a0;
      func_0x0001048db364();
      _swift_initStackObject();
      *(undefined8 *)(lVar11 + 0x20) = &PTR____CFConstantStringClassReference_110da0538;
      *(undefined8 *)(lVar11 + 0x18) = 4;
      *(undefined8 *)(lVar11 + 0x10) = 2;
      *(undefined ***)(lVar11 + 0x28) = &PTR____CFConstantStringClassReference_110da0558;
      lStack_e8 = lVar12;
      lStack_e0 = lVar5;
      uStack_70 = param_7;
      *(ulong **)((long)auStack_100 + lVar3) = &uStack_70;
      uVar10 = param_7;
      _objc_retain();
      uStack_f0 = uVar10;
      _objc_retain(&PTR____CFConstantStringClassReference_110da0538);
      lVar5 = lStack_e0;
      _objc_retain(&PTR____CFConstantStringClassReference_110da0558);
      uVar10 = 0;
      FUN_1048ee220(FUN_1048f80fc,auStack_110 + lVar3,lVar11);
      uVar4 = uStack_f0;
      _swift_setDeallocating(lVar11);
      uVar8 = 0;
      FUN_1048db43c(0);
      _swift_arrayDestroy((undefined8 *)(lVar11 + 0x20),2,uVar8);
      _objc_release(uVar4);
      if ((uVar10 & 1) != 0) goto LAB_1048f7354;
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(lVar5);
      _swift_bridgeObjectRelease(param_6);
      puVar9 = PTR_PTR_1126add38;
      _swift_getInitializedObjCClass(PTR_PTR_1126add38);
      uVar8 = 0xd000000000000032;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000032,0x800000010f21a630);
      _objc_msgSend(puVar9,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                    &PTR____CFConstantStringClassReference_110da4eb8,uVar8);
      _objc_release(uVar4);
      _objc_release(uVar8);
      param_7 = param_8;
      goto LAB_1048f74a8;
    }
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    puVar9 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    uVar10 = 0xd000000000000043;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000043,0x800000010f21a5e0);
    _objc_msgSend(puVar9,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar10);
  }
  _objc_release(uVar10);
  _objc_release(param_8);
LAB_1048f74a8:
  _objc_release(param_7);
  _swift_deallocPartialClassInstance(lVar6,unaff_x20,0x48,7);
  return;
}



/* Entry: 1048f7a60; end: 1048f7b23; -[FBSDKLoginConfiguration initWithPermissions:tracking:nonce:messengerPageId:authType:codeVerifier:] */

void FUN_1048f7a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x0001048f75dc(param_3,param_4,param_5,puVar1,param_6,puVar2,param_7,param_8);
  return;
}



/* Entry: 1048f7b24; end: 1048f7d1b;  */

undefined8 FUN_1048f7b24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  _objc_allocWithZone();
  uVar2 = param_1;
  puVar3 = PTR___sSSN_11034da80;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,PTR___sSSN_11034da80);
  _swift_bridgeObjectRelease(param_1);
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  _objc_msgSend(unaff_x20,PTR_s_initWithPermissions_tracking_non_1125251c8,uVar2,param_2,param_1);
  _objc_release(uVar2);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1048f7d1c; end: 1048f7e23; -[FBSDKLoginConfiguration initWithPermissions:tracking:] */

undefined8
FUN_1048f7d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  puVar3 = PTR___sSSN_11034da80;
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  uVar2 = param_3;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(param_3);
  __s10Foundation4UUIDVACycfC(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  __s10Foundation4UUIDV10uuidStringSSvg();
  (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),lVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  _objc_msgSend(param_1,PTR_s_initWithPermissions_tracking_non_1125251c8,uVar2,param_4,param_3);
  _objc_release(uVar2);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1048f7e24; end: 1048f7f17;  */

undefined8 FUN_1048f7e24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_release(puVar1);
  _objc_msgSend(unaff_x20,PTR_s_initWithPermissions_tracking__1125251d0,puVar2,param_1);
  _objc_release(puVar2);
  return unaff_x20;
}



/* Entry: 1048f7f18; end: 1048f7f8f; -[FBSDKLoginConfiguration initWithTracking:] */

undefined8 FUN_1048f7f18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_release(puVar1);
  _objc_msgSend(param_1,PTR_s_initWithPermissions_tracking__1125251d0,puVar2,param_3);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 1048f7f90; end: 1048f7fdb;  */

void FUN_1048f7f90(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 1048f7fdc; end: 1048f803b; -[FBSDKLoginConfiguration init] */

void FUN_1048f7fdc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FBSDKLoginKit.LoginConfiguration",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048f8008);
  (*pcVar1)();
}



/* Entry: 1048f803c; end: 1048f80ab; -[FBSDKLoginConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f803c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309ca18 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309ca08));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309ca20 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309ca28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309ca30));
  return;
}



/* Entry: 1048f80ac; end: 1048f80c7;  */

uint FUN_1048f80ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1048ee368(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Entry: 1048f80c8; end: 1048f80f3;  */

void FUN_1048f80c8(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e4990);
  return;
}



/* Entry: 1048f80f4; end: 1048f80fb;  */

void FUN_1048f80f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001048f80f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Entry: 1048f80fc; end: 1048f812b;  */

uint FUN_1048f80fc(uint param_1)

{
  FUN_1048f80ac();
  return param_1 & 1;
}



/* Entry: 1048f812c; end: 1048f8163;  */

undefined8 FUN_1048f812c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  _objc_retain(uVar1);
  return uVar1;
}



/* Entry: 1048f8164; end: 1048f81f7;  */

void FUN_1048f8164(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  _objc_retain();
  uVar1 = param_2;
  _objc_msgSend();
  param_1[1] = uVar1;
  uVar1 = param_2;
  _objc_msgSend(param_2,PTR_s_userInfo_112682430);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ();
  _objc_release(param_2);
  _objc_release(uVar1);
  param_1[2] = uVar2;
  return;
}



/* Entry: 1048f81f8; end: 1048f82ef;  */

void FUN_1048f81f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}



/* Entry: 1048f82f0; end: 1048f83b7;  */

void FUN_1048f82f0(undefined8 param_1)

{
  long unaff_x20;
  
  __ss6HasherV8_combineyySuF(param_1,*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Entry: 1048f83b8; end: 1048f83c7;  */

undefined8 FUN_1048f83b8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 8);
}



/* Entry: 1048f83c8; end: 1048f84c3;  */

void FUN_1048f83c8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048f84c4; end: 1048f84ff;  */

void FUN_1048f84c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE9_userInfoyXlSgvg_11034ee00)();
  return;
}



/* Entry: 1048f8500; end: 1048f8517;  */

void FUN_1048f8500(void)

{
  func_0x0001048f8614();
  return;
}



/* Entry: 1048f8518; end: 1048f85f3;  */

void FUN_1048f8518(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1048f85f4; end: 1048f8627;  */

void FUN_1048f85f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1048f8628; end: 1048f88ef;  */

void FUN_1048f8628(void)

{
  undefined *puVar1;
  
  if (puRam000000011309ca60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd479c8;
  _swift_getWitnessTable(&UNK_10dd479c8,&UNK_1107b7108);
  puRam000000011309ca60 = puVar1;
  return;
}



/* Entry: 1048f88f0; end: 1048f891b;  */

void FUN_1048f88f0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110da0578;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  ppuRam000000011309ca80 = ppuVar1;
  uRam000000011309ca88 = param_2;
  return;
}



/* Entry: 1048f891c; end: 1048f8977;  */

undefined1  [16] FUN_1048f891c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam000000011309c208 != -1) {
    _swift_once(0x11309c208,FUN_1048f88f0);
  }
  auVar1._8_8_ = uRam000000011309ca88;
  auVar1._0_8_ = uRam000000011309ca80;
  _swift_bridgeObjectRetain(uRam000000011309ca88);
  return auVar1;
}



/* Entry: 1048f8978; end: 1048f898f;  */

void FUN_1048f8978(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001048f897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))();
  return;
}



/* Entry: 1048f8990; end: 1048f8a97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1048f8990(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_138 [24];
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_11309cad0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad0,auStack_138,0,0);
  func_0x00010490540c(unaff_x20 + lVar1,&lStack_b0,0x11309c518);
  if (lStack_b0 == 0) {
    FUN_1048f97e0(&lStack_120);
    if (lStack_b0 != 0) {
      func_0x000104905304(&lStack_b0,0x11309c518);
    }
  }
  else {
    uStack_d8 = uStack_68;
    uStack_e0 = uStack_70;
    uStack_c8 = uStack_58;
    uStack_d0 = uStack_60;
    uStack_b8 = uStack_48;
    uStack_c0 = uStack_50;
    uStack_118 = uStack_a8;
    lStack_120 = lStack_b0;
    uStack_108 = uStack_98;
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    uStack_e8 = uStack_78;
    uStack_f0 = uStack_80;
  }
  if (lStack_120 == 0) {
    func_0x000104905304(&lStack_120,0x11309c518);
    lStack_120 = 0;
  }
  else {
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    uStack_48 = uStack_b8;
    uStack_50 = uStack_c0;
    uStack_a8 = uStack_118;
    lStack_b0 = lStack_120;
    uStack_98 = uStack_108;
    uStack_a0 = uStack_110;
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    uStack_78 = uStack_e8;
    uStack_80 = uStack_f0;
    _swift_getAtKeyPath(&lStack_120,&lStack_b0,param_1);
    FUN_10490113c(&lStack_b0);
  }
  return lStack_120;
}



/* Entry: 1048f8a98; end: 1048f8dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f8a98(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  ulong uStack_78;
  ulong uStack_70;
  byte bStack_68;
  
  uVar2 = param_1 & 0xc000000000000001;
  if (uVar2 == 0) {
    uVar18 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar18 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar18 = param_1;
    }
    __ss10__CocoaSetV5countSivg();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 == 0) {
    _swift_retain();
  }
  else {
    uVar17 = uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU);
    _swift_retain();
    func_0x000100403514(0,uVar17,0);
    if (uVar2 == 0) {
      uVar9 = param_1 + 0x38;
      __ss10_HashTableV11startBucketAB0D0Vvg
                (uVar9,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
      uVar17 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      uVar9 = param_1 & 0xffffffffffffff8;
      if ((long)param_1 < 0) {
        uVar9 = param_1;
      }
      __ss10__CocoaSetV10startIndexAB0D0Vvg();
    }
    bStack_68 = uVar2 != 0;
    uStack_78 = uVar9;
    uStack_70 = uVar17;
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8df8);
      (*pcVar7)();
    }
    uVar17 = 0;
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar9 = param_1;
    }
    do {
      while( true ) {
        bVar6 = bStack_68;
        uVar4 = uStack_70;
        uVar14 = uStack_78;
        if (uVar18 <= uVar17) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8de4);
          (*pcVar7)();
        }
        bVar8 = SCARRY8(uVar17,1);
        uVar17 = uVar17 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8de8);
          (*pcVar7)();
        }
        uVar15 = uStack_78;
        FUN_104903b6c(uStack_78,uStack_70,bStack_68,param_1);
        puVar1 = (undefined8 *)(uVar15 + _DAT_11309c830);
        _swift_beginAccess(puVar1,auStack_90,0,0);
        uVar10 = *puVar1;
        uVar3 = puVar1[1];
        _swift_bridgeObjectRetain(uVar3);
        _objc_release(uVar15);
        uVar15 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar15) {
          func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar15 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar15 + 1;
        *(undefined8 *)(puVar5 + uVar15 * 0x10 + 0x20) = uVar10;
        *(undefined8 *)(puVar5 + uVar15 * 0x10 + 0x28) = uVar3;
        if (uVar2 == 0) break;
        if (bVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8dfc);
          (*pcVar7)();
        }
        __ss10__CocoaSetV5IndexV16handleBitPatternSuvg(uVar14,uVar4);
        if (uVar14 == 0) {
          uVar14 = 1;
        }
        else {
          _swift_isUniquelyReferenced_nonNull_native();
        }
        uVar10 = 0x11309c868;
        func_0x0001048db364(0x11309c868);
        pcVar7 = (code *)auStack_b0;
        __sSh5IndexV8_asCocoas02__C3SetVAAVvM(pcVar7,uVar10);
        __ss10__CocoaSetV9formIndex5after8isUniqueyAB0D0Vz_SbtF(uVar10,uVar14,uVar9);
        (*pcVar7)(auStack_b0,0);
        if (uVar17 == uVar18) goto LAB_1048f8da8;
      }
      if ((bVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8e00);
        (*pcVar7)();
      }
      if (((long)uVar14 < 0) ||
         (uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f), (long)uVar15 <= (long)uVar14)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8dec);
        (*pcVar7)();
      }
      uVar12 = uVar14 >> 6;
      uVar11 = *(ulong *)(param_1 + 0x38 + uVar12 * 8);
      if ((uVar11 >> (uVar14 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8df0);
        (*pcVar7)();
      }
      if (*(int *)(param_1 + 0x24) != (int)uVar4) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1048f8df4);
        (*pcVar7)();
      }
      uVar11 = uVar11 & -2L << (uVar14 & 0x3f);
      if (uVar11 == 0) {
        lVar16 = uVar12 << 6;
        puVar13 = (ulong *)(param_1 + 0x40 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar12) {
            func_0x0001048f0828(uVar14,uVar4,0);
            goto LAB_1048f8d6c;
          }
          uVar11 = *puVar13;
          lVar16 = lVar16 + 0x40;
          puVar13 = puVar13 + 1;
        } while (uVar11 == 0);
        func_0x0001048f0828(uVar14,uVar4,0);
        uVar14 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) + lVar16;
      }
      else {
        uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | uVar14 & 0x7fffffffffffffc0;
      }
LAB_1048f8d6c:
      uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
      bStack_68 = 0;
      uStack_78 = uVar15;
    } while (uVar17 != uVar18);
LAB_1048f8da8:
    func_0x0001048f0828(uStack_78,uStack_70,bStack_68);
  }
  return;
}



/* Entry: 1048f8e00; end: 1048f8e43; -[FBSDKLoginManager defaultAudience] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f8e00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309ca90;
  _swift_beginAccess(param_1 + _DAT_11309ca90,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1048f8e44; end: 1048f8e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f8e44(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309ca90;
  _swift_beginAccess(unaff_x20 + _DAT_11309ca90,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Entry: 1048f8e84; end: 1048f8ed3; -[FBSDKLoginManager setDefaultAudience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f8e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309ca90;
  _swift_beginAccess(param_1 + _DAT_11309ca90,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048f8ed4; end: 1048f9063;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f8ed4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309ca90;
  _swift_beginAccess(unaff_x20 + _DAT_11309ca90,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1048f9064; end: 1048f90ab; -[FBSDKLoginManager configuration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9064(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309caa8;
  _swift_beginAccess(param_1 + _DAT_11309caa8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1048f90ac; end: 1048f90f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1048f90ac(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309caa8;
  _swift_beginAccess(unaff_x20 + _DAT_11309caa8,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  _objc_retain(uVar2);
  return uVar2;
}



/* Entry: 1048f90f8; end: 1048f915b; -[FBSDKLoginManager setConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f90f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309caa8;
  _swift_beginAccess(param_1 + _DAT_11309caa8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1048f915c; end: 1048f9203; -[FBSDKLoginManager requestedPermissions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f915c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cab0;
  _swift_beginAccess(param_1 + _DAT_11309cab0,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1048f07b4(0);
    func_0x0001049055f4(0x11309c860,FUN_1048f07b4,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1048f9204; end: 1048f9247;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9204(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cab0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cab0,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 1048f9248; end: 1048f92df; -[FBSDKLoginManager setRequestedPermissions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9248(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_1048f07b4(0);
    uVar3 = 0x11309c860;
    func_0x0001049055f4(0x11309c860,FUN_1048f07b4,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
    __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar2,uVar3)
    ;
  }
  lVar1 = _DAT_11309cab0;
  _swift_beginAccess(param_1 + _DAT_11309cab0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Entry: 1048f92e0; end: 1048f94eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f92e0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_11309cab0;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  _swift_beginAccess(unaff_x20 + _DAT_11309cab0,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = param_1;
  (*(code *)puVar1)(uVar3);
  return;
}



/* Entry: 1048f94ec; end: 1048f952f; -[FBSDKLoginManager usedSafariSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048f94ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cac8;
  _swift_beginAccess(param_1 + _DAT_11309cac8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 1048f9530; end: 1048f956f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048f9530(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cac8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac8,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Entry: 1048f9570; end: 1048f95bf; -[FBSDKLoginManager setUsedSafariSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9570(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cac8;
  _swift_beginAccess(param_1 + _DAT_11309cac8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 1048f95c0; end: 1048f964b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f95c0(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cac8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Entry: 1048f964c; end: 1048f9697; -[FBSDKLoginManager isPerformingLogin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048f964c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cac0;
  _swift_beginAccess(param_1 + _DAT_11309cac0,auStack_38,0,0);
  return *(char *)(param_1 + lVar1) == '\x02';
}



/* Entry: 1048f9698; end: 1048f97df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048f9698(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11309cac0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac0,auStack_38,0,0);
  return *(char *)(unaff_x20 + lVar1) == '\x02';
}



/* Entry: 1048f97e0; end: 1048f98d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f97e0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_d0 [24];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11309cad8;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad8,auStack_48,0,0);
  func_0x00010490540c(unaff_x20 + lVar1,&lStack_b8,0x11309cae0);
  if (lStack_b8 == 1) {
    func_0x000104905304(&lStack_b8,0x11309cae0);
    FUN_1048f99e8(param_1);
    func_0x00010490540c(param_1,&lStack_b8,0x11309c518);
    _swift_beginAccess(unaff_x20 + lVar1,auStack_d0,0x21,0);
    FUN_1048f9c60(&lStack_b8,unaff_x20 + lVar1,0x11309cae0);
    _swift_endAccess(auStack_d0);
  }
  else {
    param_1[9] = lStack_70;
    param_1[8] = lStack_78;
    param_1[0xb] = lStack_60;
    param_1[10] = lStack_68;
    param_1[0xd] = lStack_50;
    param_1[0xc] = lStack_58;
    param_1[1] = lStack_b0;
    *param_1 = lStack_b8;
    param_1[3] = lStack_a0;
    param_1[2] = lStack_a8;
    param_1[5] = lStack_90;
    param_1[4] = lStack_98;
    param_1[7] = lStack_80;
    param_1[6] = lStack_88;
  }
  return;
}



/* Entry: 1048f98d4; end: 1048f996f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f98d4(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010490540c(param_1,&uStack_a0,0x11309c518);
  lVar1 = _DAT_11309cad8;
  lVar2 = *param_2;
  uStack_c8 = uStack_58;
  uStack_d0 = uStack_60;
  uStack_b8 = uStack_48;
  uStack_c0 = uStack_50;
  uStack_a8 = uStack_38;
  uStack_b0 = uStack_40;
  uStack_108 = uStack_98;
  uStack_110 = uStack_a0;
  uStack_f8 = uStack_88;
  uStack_100 = uStack_90;
  uStack_e8 = uStack_78;
  uStack_f0 = uStack_80;
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  _swift_beginAccess(lVar2 + _DAT_11309cad8,auStack_128,0x21,0);
  FUN_1048f9c60(&uStack_110,lVar2 + lVar1,0x11309cae0);
  _swift_endAccess(auStack_128);
  return;
}



/* Entry: 1048f9970; end: 1048f99e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9970(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = _DAT_11309cad8;
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_28 = param_1[0xd];
  uStack_30 = param_1[0xc];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  _swift_beginAccess(unaff_x20 + _DAT_11309cad8,auStack_a8,0x21,0);
  FUN_1048f9c60(&uStack_90,unaff_x20 + lVar1,0x11309cae0);
  _swift_endAccess(auStack_a8);
  return;
}



/* Entry: 1048f99e8; end: 1048f9c5f;  */

void FUN_1048f99e8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  
  uVar2 = 0;
  func_0x0001049c972c();
  _swift_allocObject();
  func_0x0001049c95ec();
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  _swift_getInitializedObjCClass();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  puVar12 = PTR_s_bundleIdentifier_1125a6c40;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar4);
    _objc_release(puVar4);
    __ss11_StringGutsV4growyySiF(0x20);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(puVar3,puVar12);
    _swift_bridgeObjectRelease(puVar12);
    uVar5 = 0xd00000000000001e;
    FUN_1049c95f4(0xd00000000000001e,0x800000010f21b9c0,0,0);
    _swift_bridgeObjectRelease(0x800000010f21b9c0);
    uVar6 = 0;
    FUN_1049055b4(0,0x11309cb98,&PTR_PTR_1126add30);
    uVar7 = 0;
    FUN_1049055b4(0,0x11309cba0,&PTR_PTR_1126a5d98);
    uVar8 = 0;
    FUN_1049fe1e8();
    _objc_allocWithZone();
    _objc_msgSend();
    puVar3 = PTR_PTR_1126add18;
    _objc_allocWithZone();
    _objc_msgSend();
    puVar4 = PTR_PTR_1126add20;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    param_1[9] = &UNK_1107b7058;
    param_1[10] = &PTR_DAT_1107b7038;
    uVar9 = 0;
    FUN_1049db25c();
    uVar10 = 0;
    func_0x0001049eab50();
    FUN_1049e48e0();
    uVar11 = 0;
    FUN_1049f6a74();
    FUN_1049f1c7c();
    _swift_release(uVar2);
    *param_1 = uVar6;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = puVar3;
    param_1[4] = puVar4;
    param_1[5] = uVar5;
    param_1[0xb] = uVar9;
    param_1[0xc] = uVar10;
    param_1[0xd] = uVar11;
    return;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000050,0x800000010f21b960,
             "FBSDKLoginKit/LoginManager.swift",0x20,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048f9c60);
  (*pcVar1)();
}



/* Entry: 1048f9c60; end: 1048f9d07;  */

undefined8 FUN_1048f9c60(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1048f9d08; end: 1048f9d6b;  */

undefined1  [16] FUN_1048f9d08(long *param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0x100;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x100,0x6469);
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0xf8) = unaff_x20;
  FUN_1048f97e0(lVar1);
  auVar2._8_8_ = lVar1;
  auVar2._0_8_ = FUN_1048f9d6c;
  return auVar2;
}



/* Entry: 1048f9d6c; end: 1048f9e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9d6c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)*param_1;
  lVar3 = puVar2[0x1f];
  if ((param_2 & 1) == 0) {
    puVar2[0x17] = puVar2[9];
    puVar2[0x16] = puVar2[8];
    puVar2[0x19] = puVar2[0xb];
    puVar2[0x18] = puVar2[10];
    puVar2[0x1b] = puVar2[0xd];
    puVar2[0x1a] = puVar2[0xc];
    puVar2[0xf] = puVar2[1];
    puVar2[0xe] = *puVar2;
    puVar2[0x11] = puVar2[3];
    puVar2[0x10] = puVar2[2];
    puVar2[0x13] = puVar2[5];
    puVar2[0x12] = puVar2[4];
    puVar2[0x15] = puVar2[7];
    puVar2[0x14] = puVar2[6];
    lVar1 = _DAT_11309cad8;
    _swift_beginAccess(lVar3 + _DAT_11309cad8,puVar2 + 0x1c,0x21,0);
    FUN_1048f9c60(puVar2 + 0xe,lVar3 + lVar1,0x11309cae0);
    _swift_endAccess(puVar2 + 0x1c);
  }
  else {
    func_0x00010490540c(puVar2,puVar2 + 0xe,0x11309c518);
    lVar1 = _DAT_11309cad8;
    _swift_beginAccess(lVar3 + _DAT_11309cad8,puVar2 + 0x1c,0x21,0);
    FUN_1048f9c60(puVar2 + 0xe,lVar3 + lVar1,0x11309cae0);
    _swift_endAccess(puVar2 + 0x1c);
    func_0x000104905304(puVar2,0x11309c518);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(puVar2);
  return;
}



/* Entry: 1048f9e54; end: 1048f9f1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1048f9e54(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _objc_allocWithZone();
  _objc_msgSend();
  lVar1 = _DAT_11309ca90;
  _swift_beginAccess(unaff_x20 + _DAT_11309ca90,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return unaff_x20;
}



/* Entry: 1048f9f20; end: 1048f9f7f; -[FBSDKLoginManager initWithDefaultAudience:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1048f9f20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _objc_msgSend(param_1,PTR_s_init_1125d9248);
  lVar1 = _DAT_11309ca90;
  _swift_beginAccess(param_1 + _DAT_11309ca90,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return param_1;
}



/* Entry: 1048f9f80; end: 1048fa3b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048f9f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_11309cac0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac0,auStack_68,1,0);
  lVar3 = _DAT_11309cac8;
  cVar1 = *(char *)(unaff_x20 + lVar2);
  if (cVar1 == '\0') {
    *(undefined1 *)(unaff_x20 + lVar2) = 1;
  }
  else if (cVar1 == '\x01') {
    _swift_beginAccess(unaff_x20 + _DAT_11309cac8,auStack_80,0,0);
    if ((*(byte *)(unaff_x20 + lVar3) & 1) == 0) {
      puVar4 = PTR_PTR_1126add38;
      _swift_getInitializedObjCClass(PTR_PTR_1126add38);
      uVar5 = 0xd0000000000000c9;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd0000000000000c9,0x800000010f21b280);
      _objc_msgSend(puVar4,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                    &PTR____CFConstantStringClassReference_110da4eb8,uVar5);
      _objc_release(uVar5);
      return;
    }
  }
  else {
    FUN_1048fb040();
  }
  func_0x0001048fa09c(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1048fa3b4; end: 1048fa46b; -[FBSDKLoginManager logInFromViewController:configuration:completion:] */

void FUN_1048fa3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  __Block_copy();
  puVar1 = &UNK_1107b7418;
  _swift_allocObject(&UNK_1107b7418,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  uVar2 = param_3;
  _objc_retain(param_3);
  uVar3 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  FUN_1048f9f80(param_3,param_4,0x104905644,puVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1048fa46c; end: 1048fa4c3;  */

void FUN_1048fa46c(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1048fa4c4; end: 1048fa5af;  */

void FUN_1048fa4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107b7200;
  _swift_allocObject(&UNK_1107b7200,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _swift_retain(param_4);
  func_0x0001048fa09c(param_1,param_2,FUN_1048fb1c4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1048fa5b0; end: 1048fab37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fa5b0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long alStack_e0 [4];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0x11309caa0;
  func_0x0001048db364();
  uVar7 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_e0[0] = (long)alStack_e0 - uVar7;
  lVar9 = alStack_e0[0] - uVar7;
  lVar12 = lVar9 - uVar7;
  lVar2 = 0;
  FUN_1048f5548();
  lVar1 = _DAT_11309cab8;
  lVar10 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_e0[1] = lVar12 - uVar7;
  uVar7 = alStack_e0[1] - uVar7;
  _swift_beginAccess(unaff_x20 + _DAT_11309cab8,auStack_78,1,0);
  lVar8 = *(long *)(unaff_x20 + lVar1);
  alStack_e0[2] = param_1;
  alStack_e0[3] = param_2;
  if (lVar8 != 0) {
    if (param_2 == 0) {
      _swift_retain(lVar8);
    }
    else {
      _swift_retain(lVar8);
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
    }
    func_0x000104905a1c(param_1,param_2);
    _swift_release(lVar8);
    _objc_release(param_2);
    lVar8 = *(long *)(unaff_x20 + lVar1);
    if (lVar8 != 0) {
      _swift_retain(lVar8);
      FUN_104905e2c();
      _swift_release(lVar8);
      lVar8 = *(long *)(unaff_x20 + lVar1);
      if (lVar8 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
        _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSTimer_1126af1b0);
        puVar6 = PTR_s_heartbeatTimerDidFire_1125251e8;
        _swift_retain(lVar8);
        _objc_msgSend(0x4014000000000000,puVar3,PTR_s_scheduledTimerWithTimeInterval_t_112631b10,
                      lVar8,puVar6,0,0);
        _objc_retainAutoreleasedReturnValue();
        _swift_release(lVar8);
        _objc_release(puVar3);
        uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
        goto LAB_1048fa74c;
      }
    }
  }
  uVar4 = 0;
LAB_1048fa74c:
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar4);
  lVar1 = _DAT_11309cac0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac0,auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = 0;
  lVar1 = _DAT_11309ca98;
  _swift_beginAccess(unaff_x20 + _DAT_11309ca98,auStack_a8,0,0);
  func_0x00010490540c(unaff_x20 + lVar1,lVar12,0x11309caa0);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar8 = lVar12;
  (*pcVar11)(lVar12,1,lVar2);
  if ((int)lVar8 == 1) {
    func_0x000104905304(lVar12,0x11309caa0);
  }
  else {
    func_0x00010490538c(lVar12,uVar7);
    (**(code **)(uVar7 + (long)*(int *)(lVar2 + 0x14)))(alStack_e0[2],alStack_e0[3]);
    func_0x00010490540c(unaff_x20 + lVar1,lVar9,0x11309caa0);
    lVar12 = lVar9;
    (*pcVar11)(lVar9,1,lVar2);
    lVar8 = alStack_e0[1];
    if ((int)lVar12 == 1) {
      func_0x000104905304(lVar9,0x11309caa0);
    }
    else {
      func_0x00010490538c(lVar9,alStack_e0[1]);
      uVar5 = uVar7;
      __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar7,lVar8);
      func_0x0001049053d0(lVar8);
      if ((uVar5 & 1) != 0) {
        func_0x0001049053d0(uVar7);
        lVar8 = alStack_e0[0];
        (**(code **)(lVar10 + 0x38))(alStack_e0[0],1,1,lVar2);
        _swift_beginAccess(unaff_x20 + lVar1,auStack_c0,0x21,0);
        FUN_1048f9c60(lVar8,unaff_x20 + lVar1,0x11309caa0);
        _swift_endAccess(auStack_c0);
        return;
      }
    }
    puVar6 = PTR_PTR_1126add38;
    _swift_getInitializedObjCClass(PTR_PTR_1126add38);
    uVar4 = 0xd00000000000010f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000010f,0x800000010f21b6c0);
    _objc_msgSend(puVar6,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                  &PTR____CFConstantStringClassReference_110da4eb8,uVar4);
    _objc_release(uVar4);
    func_0x0001049053d0(uVar7);
  }
  return;
}



/* Entry: 1048fab38; end: 1048fac0b; -[FBSDKLoginManager logInWithPermissions:fromViewController:handler:] */

void FUN_1048fab38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar2 = &UNK_1107b73f0;
    _swift_allocObject(&UNK_1107b73f0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar3 = 0x104905640;
  }
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x0001048fa93c(param_3,param_4,uVar3,puVar2);
  FUN_1049052f4(uVar3,puVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1048fac0c; end: 1048fadd3;  */

void FUN_1048fac0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar3 = 0;
  func_0x0001049ceb28();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar3 + -8);
  lVar10 = (long)&uStack_a0 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    uStack_a0 = param_3;
    uStack_98 = param_4;
    uStack_90 = param_2;
    _swift_retain();
    func_0x000100403514(0,lVar11,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff));
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar8 = *(code **)(lVar9 + 0x10);
    do {
      lVar4 = lVar10;
      lVar6 = param_1;
      (*pcVar8)(lVar10,param_1,lVar3);
      func_0x0001049cd784();
      (**(code **)(lVar9 + 8))(lVar10,lVar3);
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(long *)(puVar2 + uVar1 * 0x10 + 0x20) = lVar4;
      *(long *)(puVar2 + uVar1 * 0x10 + 0x28) = lVar6;
      param_1 = param_1 + lVar7;
      lVar11 = lVar11 + -1;
      param_2 = uStack_90;
      param_4 = uStack_98;
      param_3 = uStack_a0;
    } while (lVar11 != 0);
  }
  puVar5 = &UNK_1107b7228;
  _swift_allocObject(&UNK_1107b7228,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_4;
  func_0x000100dc19e8(param_3,param_4);
  func_0x0001048fa93c(puVar2,param_2,FUN_104901134,puVar5);
  _swift_bridgeObjectRelease(puVar2);
  _swift_release(puVar5);
  return;
}



/* Entry: 1048fadd4; end: 1048fae4f;  */

void FUN_1048fadd4(undefined8 param_1,undefined8 param_2,code *param_3,ulong param_4)

{
  code *pcVar1;
  
  if (param_3 == (code *)0x0) {
    return;
  }
  pcVar1 = param_3;
  _objc_retain();
  _swift_errorRetain(param_2);
  FUN_10490bbe8(param_1,param_2);
  (*param_3)();
  if (((uint)param_4 & 0xff) != 1) {
    if ((param_4 & 0xff) == 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
  return;
}



/* Entry: 1048fae50; end: 1048fb03f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fae50(ulong param_1,undefined *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar4 = _DAT_11309cac0;
  if ((param_1 & 1) == 0) {
    if (param_2 == (undefined *)0x0) {
      if (lRam000000011309c208 != -1) {
        _swift_once(0x11309c208,FUN_1048f88f0);
      }
      uVar1 = uRam000000011309ca88;
      uVar7 = uRam000000011309ca80;
      puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_allocWithZone(PTR__OBJC_CLASS___NSError_1126ae858);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar1);
      _objc_msgSend(puVar6,PTR_s_initWithDomain_code_userInfo__1125e1288,uVar7,0x12d,0);
      _objc_release(uVar7);
    }
    else {
      puVar6 = param_2;
      __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF();
      puVar2 = puVar6;
      puVar8 = PTR_s_domain_1125bf918;
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar2);
      lVar4 = 0x11309c500;
      func_0x0001048db364(0x11309c500);
      _swift_initStaticObject();
      _swift_retain();
      ppuStack_80 = &puStack_70;
      uVar5 = 0;
      puStack_70 = puVar3;
      puStack_68 = puVar8;
      FUN_1048ee2c4(FUN_104905560,auStack_90,lVar4);
      _swift_release(lVar4);
      _swift_arrayDestroy(lVar4 + 0x20,2,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(puVar8);
      if ((uVar5 & 1) != 0) {
        FUN_1048fb040();
        _objc_release(puVar6);
        return;
      }
      _objc_release(puVar6);
      puVar6 = param_2;
    }
    _swift_errorRetain(param_2);
    _swift_errorRetain(puVar6);
    FUN_1048fa5b0(0,puVar6);
    _swift_errorRelease(puVar6);
    _swift_errorRelease(puVar6);
  }
  else {
    _swift_beginAccess(param_3 + _DAT_11309cac0,&puStack_70,1,0);
    *(undefined1 *)(param_3 + lVar4) = 2;
  }
  return;
}



/* Entry: 1048fb040; end: 1048fb1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fb040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [24];
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = 0;
  func_0x00010490a3f4();
  lVar5 = lVar4;
  _objc_allocWithZone();
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar5 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar5 + _DAT_11309cd38) = 0;
  *(undefined8 *)(lVar5 + _DAT_11309cd40) = 0;
  *(undefined1 *)(lVar5 + _DAT_11309cd48) = 1;
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar5 + _DAT_11309cd50) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar5 + _DAT_11309cd58) = puVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar5;
  lStack_48 = lVar4;
  _swift_retain_n(puVar2,2);
  _swift_retain(puVar1);
  plVar6 = &lStack_50;
  _objc_msgSendSuper2(plVar6,puVar3);
  puStack_58 = PTR___sSbN_11034dd40;
  auStack_70[0] = 1;
  func_0x0001000bb420(auStack_70,auStack_90);
  _swift_beginAccess((long)plVar6 + _DAT_11309cd30,auStack_a8,0x21,0);
  func_0x000100102934(auStack_90,0x746963696c706d69,0xef6c65636e61635f);
  _swift_endAccess(auStack_a8);
  func_0x000104905340(auStack_70);
  plVar7 = plVar6;
  _objc_retain(plVar6);
  FUN_1048fa5b0(plVar6,0);
  _objc_release(plVar7);
  _objc_release(plVar7);
  return;
}



/* Entry: 1048fb1c4; end: 1048fb1cb;  */

void FUN_1048fb1c4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  pcVar2 = pcVar1;
  _objc_retain();
  _swift_errorRetain(param_2);
  FUN_10490bbe8(param_1,param_2);
  (*pcVar1)();
  if (((uint)uVar3 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  if ((uVar3 & 0xff) == 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar2);
    return;
  }
  return;
}



/* Entry: 1048fb1cc; end: 1048fc32f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fb1cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined *extraout_x8;
  long unaff_x20;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 auStack_230 [8];
  code *pcStack_228;
  uint uStack_21c;
  undefined1 *puStack_218;
  undefined *puStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = 0;
  lStack_1f0 = param_1;
  uStack_1d8 = param_2;
  __s10Foundation3URLVMa();
  lVar21 = *(long *)(lVar5 + -8);
  lVar11 = *(long *)(lVar21 + 0x40);
  lVar13 = 0x11309c5e0;
  func_0x0001048db364();
  lVar15 = _DAT_11309cad0;
  uVar12 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)(auStack_230 + -(lVar11 + 0xfU & 0xfffffffffffffff0)) - uVar12;
  puVar20 = (undefined *)(lVar13 - uVar12);
  lVar18 = (long)puVar20 - uVar12;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad0,auStack_168,0,0);
  func_0x00010490540c(unaff_x20 + lVar15,&puStack_e0,0x11309c518);
  if (puStack_e0 == (undefined *)0x0) {
    FUN_1048f97e0(&puStack_150);
    if (puStack_e0 != (undefined *)0x0) {
      func_0x000104905304(&puStack_e0,0x11309c518);
    }
  }
  else {
    uStack_108 = uStack_98;
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    uStack_e8 = uStack_78;
    uStack_f0 = uStack_80;
    uStack_148 = uStack_d8;
    puStack_150 = puStack_e0;
    puStack_138 = puStack_c8;
    puStack_140 = puStack_d0;
    puStack_128 = puStack_b8;
    lStack_130 = lStack_c0;
    uStack_118 = uStack_a8;
    uStack_120 = uStack_b0;
  }
  if (puStack_150 == (undefined *)0x0) {
    func_0x000104905304(&puStack_150,0x11309c518);
  }
  else {
    uStack_98 = uStack_108;
    uStack_a0 = uStack_110;
    uStack_88 = uStack_f8;
    uStack_90 = uStack_100;
    uStack_78 = uStack_e8;
    uStack_80 = uStack_f0;
    uStack_d8 = uStack_148;
    puStack_e0 = puStack_150;
    puStack_c8 = puStack_138;
    puStack_d0 = puStack_140;
    puStack_b8 = puStack_128;
    lStack_c0 = lStack_130;
    uStack_a8 = uStack_118;
    uStack_b0 = uStack_120;
    puStack_150 = (undefined *)0x6266;
    uStack_148 = 0xe200000000000000;
    puVar6 = &UNK_10dd47ba0;
    puStack_210 = puVar20;
    lStack_208 = lVar13;
    _swift_getKeyPath();
    puVar20 = puVar6;
    FUN_1048f8990();
    _swift_release(puVar6);
    if (puVar20 == (undefined *)0x0) {
LAB_1048fb39c:
      puVar20 = (undefined *)0x0;
      puVar14 = (undefined *)0xe000000000000000;
    }
    else {
      puVar6 = puVar20;
      puVar14 = PTR_s_appID_11259ee40;
      _objc_msgSend(puVar20,PTR_s_appID_11259ee40);
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar20);
      if (puVar6 == (undefined *)0x0) goto LAB_1048fb39c;
      puVar20 = puVar6;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar6);
      _objc_release(puVar6);
    }
    __sSS6appendyySSF(puVar20,puVar14);
    _swift_bridgeObjectRelease(puVar14);
    puVar20 = &UNK_10dd47ba0;
    _swift_getKeyPath();
    puVar6 = puVar20;
    FUN_1048f8990();
    _swift_release(puVar20);
    if (puVar6 == (undefined *)0x0) {
LAB_1048fb428:
      puVar6 = (undefined *)0x0;
      puVar14 = (undefined *)0xe000000000000000;
    }
    else {
      puVar20 = puVar6;
      puVar14 = PTR_s_appURLSchemeSuffix_11259f310;
      _objc_msgSend(puVar6,PTR_s_appURLSchemeSuffix_11259f310);
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar6);
      if (puVar20 == (undefined *)0x0) goto LAB_1048fb428;
      puVar6 = puVar20;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar20);
      _objc_release(puVar20);
    }
    puStack_218 = auStack_230 + -(lVar11 + 0xfU & 0xfffffffffffffff0);
    lStack_1e8 = lVar5;
    __sSS6appendyySSF(puVar6,puVar14);
    _swift_bridgeObjectRelease(puVar14);
    uVar16 = uStack_148;
    puVar20 = puStack_150;
    lVar13 = _DAT_11309cab8;
    _swift_beginAccess(unaff_x20 + _DAT_11309cab8,auStack_180,0,0);
    lVar15 = *(long *)(unaff_x20 + lVar13);
    if (lVar15 != 0) {
      _swift_retain(lVar15);
      FUN_104906000(puVar20,uVar16);
      _swift_release(lVar15);
    }
    uVar7 = 0;
    func_0x0001049e125c();
    _objc_allocWithZone();
    _objc_msgSend();
    uVar12 = 0x6e69676f6c;
    uStack_1e0 = uVar7;
    func_0x0001049e0ac0(0x6e69676f6c,0xe500000000000000);
    uStack_21c = (uint)uVar12;
    bVar4 = (uVar12 & 1) == 0;
    uVar7 = 0x7475615f63766673;
    if (bVar4) {
      uVar7 = 0x5f726573776f7262;
    }
    uVar1 = 0xe900000000000068;
    if (bVar4) {
      uVar1 = 0xec00000068747561;
    }
    lVar13 = *(long *)(unaff_x20 + lVar13);
    if (lVar13 != 0) {
      _swift_beginAccess(lVar13 + 0x40,auStack_198,1,0);
      uVar22 = *(undefined8 *)(lVar13 + 0x48);
      *(undefined8 *)(lVar13 + 0x40) = uVar7;
      *(undefined8 *)(lVar13 + 0x48) = uVar1;
      _swift_retain(lVar13);
      _swift_bridgeObjectRelease(uVar22);
      lVar15 = lRam000000011309c1f0;
      uVar22 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      if (lVar15 != -1) {
        uVar22 = 0x11309c1f0;
        _swift_once(0x11309c1f0,FUN_1048f5b84);
      }
      uVar2 = uRam0000000113815570;
      FUN_104907418();
      FUN_10490790c(uVar2,uVar22);
      _swift_release(lVar13);
      _swift_bridgeObjectRelease(uVar22);
    }
    pcStack_228 = *(code **)(lVar21 + 0x38);
    lStack_200 = lVar21;
    lStack_1f8 = lVar18;
    (*pcStack_228)(lVar18,1,1,lStack_1e8);
    lVar15 = _DAT_11309caa8;
    puVar10 = auStack_1b0;
    _swift_beginAccess(unaff_x20 + _DAT_11309caa8,puVar10,0,0);
    lVar11 = *(long *)(unaff_x20 + lVar15);
    lVar13 = lVar11;
    _objc_retain(lVar11);
    lVar5 = lVar13;
    func_0x0001049e0a08();
    FUN_1048fdd10(lVar11,lVar5,puVar10,uVar7,uVar1);
    _objc_release(lVar13);
    _swift_bridgeObjectRelease(puVar10);
    lVar13 = lStack_1f0;
    if (lVar11 == 0) {
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar16);
      puStack_210 = (undefined *)0x0;
      lVar15 = lStack_1f8;
      lVar13 = lStack_1f0;
      lVar5 = lStack_1e8;
joined_r0x0001048fb7f0:
      if (lVar13 == 0) {
        puVar20 = (undefined *)0x0;
        pcVar3 = FUN_1048ff9f0;
      }
      else {
        puVar20 = &UNK_1107b75d0;
        _swift_allocObject(&UNK_1107b75d0,0x20,7);
        *(long *)(puVar20 + 0x10) = lVar13;
        *(undefined8 *)(puVar20 + 0x18) = uStack_1d8;
        pcVar3 = (code *)0x104905538;
      }
      puVar6 = &UNK_1107b7558;
      _swift_allocObject(&UNK_1107b7558,0x20,7);
      lVar11 = lStack_208;
      *(code **)(puVar6 + 0x10) = pcVar3;
      *(undefined **)(puVar6 + 0x18) = puVar20;
      func_0x00010490540c(lVar15,lStack_208,0x11309c5e0);
      lVar18 = lStack_200;
      lVar21 = lVar11;
      (**(code **)(lStack_200 + 0x30))(lVar11,1,lVar5);
      puVar10 = puStack_218;
      if ((int)lVar21 == 1) {
        func_0x000100dc19e8(lVar13,uStack_1d8);
        _swift_retain(puVar20);
        func_0x000104905304(lVar11,0x11309c5e0);
        puVar14 = puStack_d0;
        puVar17 = puStack_210;
        puVar19 = puStack_210;
        if (puStack_210 == (undefined *)0x0) {
          uVar16 = 0xd000000000000025;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000025,0x800000010f21b850);
          _objc_msgSend(puVar14,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,0x12d,0,uVar16,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar16);
          puVar17 = puVar14;
          puVar19 = (undefined *)0x0;
        }
        auStack_1c8[0] = 0;
        puStack_150 = puVar17;
        _swift_errorRetain(puVar19);
        _swift_errorRetain(puVar17);
        (*pcVar3)(auStack_1c8,&puStack_150);
        _swift_release(puVar6);
        _swift_release(puVar20);
        _objc_release(uStack_1e0);
        _swift_errorRelease(puVar17);
        _swift_errorRelease(puVar19);
        func_0x000104905304(lVar15,0x11309c5e0);
        goto LAB_1048fbb70;
      }
      (**(code **)(lVar18 + 0x20))(puStack_218,lVar11,lVar5);
      uVar16 = uStack_78;
      lVar15 = _DAT_11309cac8;
      if ((uStack_21c & 1) == 0) {
        func_0x000100dc19e8(lVar13,uStack_1d8);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        lStack_130 = 0x104905500;
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0x42000000;
        puStack_140 = &UNK_1012d20f0;
        puStack_138 = &UNK_1107b7570;
        ppuVar9 = &puStack_150;
        puStack_128 = puVar6;
        __Block_copy(ppuVar9);
        puVar20 = puStack_128;
        _swift_retain(puVar6);
        _swift_release(puVar20);
        _objc_msgSend(uVar16,PTR_s_openURL_sender_handler__1125251f0,lVar13);
        _objc_release(uStack_1e0);
        __Block_release(ppuVar9);
        _swift_release(puVar6);
        _objc_release(lVar13);
        _swift_errorRelease(puStack_210);
        pcVar3 = *(code **)(lVar18 + 8);
      }
      else {
        _swift_beginAccess(unaff_x20 + _DAT_11309cac8,auStack_1c8,1,0);
        uVar16 = uStack_78;
        *(undefined1 *)(unaff_x20 + lVar15) = 1;
        func_0x000100dc19e8(lVar13,uStack_1d8);
        __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
        lVar15 = unaff_x20 + _DAT_11309cae8;
        _swift_unknownObjectWeakLoadStrong(lVar15);
        lStack_130 = 0x104905500;
        puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_148 = 0x42000000;
        puStack_140 = &UNK_1012d20f0;
        puStack_138 = &UNK_1107b7598;
        ppuVar9 = &puStack_150;
        puStack_128 = puVar6;
        __Block_copy(ppuVar9);
        puVar20 = puStack_128;
        _swift_retain(puVar6);
        _swift_release(puVar20);
        _objc_msgSend(uVar16,PTR_s_openURLWithSafariViewController__1125251f8,lVar13);
        _objc_release(uStack_1e0);
        __Block_release(ppuVar9);
        _swift_release(puVar6);
        _objc_release(lVar13);
        _objc_release(lVar15);
        _swift_errorRelease(puStack_210);
        pcVar3 = *(code **)(lVar18 + 8);
        puVar10 = puStack_218;
      }
      (*pcVar3)(puVar10,lVar5);
      func_0x000104905304(lStack_1f8,0x11309c5e0);
    }
    else {
      if (*(long *)(lVar11 + 0x10) == 0) {
        _swift_bridgeObjectRelease(lVar11);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar16);
LAB_1048fb7e4:
        puStack_210 = (undefined *)0x0;
        lVar15 = lStack_1f8;
        lVar5 = lStack_1e8;
        goto joined_r0x0001048fb7f0;
      }
      _swift_bridgeObjectRetain(lVar11);
      uVar12 = 0xec0000006972755f;
      func_0x000100029284(0x7463657269646572);
      if ((uVar12 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar16);
        _swift_bridgeObjectRelease_n(lVar11,2);
        goto LAB_1048fb7e4;
      }
      _swift_bridgeObjectRelease(lVar11);
      if (lVar13 == 0) {
        puVar20 = (undefined *)0x0;
        pcVar3 = FUN_1048ff9f0;
        lVar13 = *(long *)(unaff_x20 + lVar15);
      }
      else {
        puVar20 = &UNK_1107b75f8;
        _swift_allocObject(&UNK_1107b75f8,0x20,7);
        *(long *)(puVar20 + 0x10) = lVar13;
        *(undefined8 *)(puVar20 + 0x18) = uStack_1d8;
        pcVar3 = (code *)0x104905538;
        lVar13 = *(long *)(unaff_x20 + lVar15);
      }
      if (lVar13 != 0) {
        _objc_retain();
        func_0x000100dc19e8(lStack_1f0,uStack_1d8);
        _swift_release(puVar20);
        lVar15 = lStack_1f8;
        puVar20 = *(undefined **)(lVar13 + _DAT_11309ca10);
        if (puVar20 == (undefined *)0x0) {
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar16);
          puVar20 = PTR_PTR_1126add50;
          _swift_getInitializedObjCClass();
          _objc_msgSend();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar20;
          _objc_msgSend();
          _objc_release(puVar20);
          uVar16 = 0xe200000000000000;
          if ((int)puVar6 == 0) {
            uVar7 = 0x2e6d;
          }
          else {
            uVar8 = 0;
            func_0x0001049eab50();
            FUN_1049e48e0();
            uVar12 = uVar8;
            FUN_1049eaea8();
            _objc_release(uVar8);
            bVar4 = (uVar12 & 1) == 0;
            uVar7 = 0x2e6d;
            if (bVar4) {
              uVar7 = 0x2e646574696d696c;
            }
            uVar16 = 0xe200000000000000;
            if (bVar4) {
              uVar16 = 0xe800000000000000;
            }
          }
        }
        else {
          if (puVar20 != (undefined *)0x1) goto LAB_1048fbec0;
          uVar7 = 0x2e646574696d696c;
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(uVar16);
          uVar16 = 0xe800000000000000;
        }
        lVar5 = lStack_c0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar16);
        _swift_bridgeObjectRelease(uVar16);
        uVar16 = 0x2f676f6c6169642f;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2f676f6c6169642f,0xed0000687475616f)
        ;
        lVar18 = lVar11;
        __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                  (lVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        _swift_bridgeObjectRelease(lVar11);
        puStack_150 = (undefined *)0x0;
        _objc_msgSend(lVar5,PTR_s_facebookURLWithHostPrefix_path_q_1125c5690,uVar7,uVar16,lVar18,
                      &puStack_150);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar16);
        _objc_release(lVar18);
        puVar6 = puStack_150;
        puVar20 = puStack_210;
        if (lVar5 == 0) {
          puVar20 = puStack_150;
          _objc_retain(puStack_150);
          __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
          _objc_release(puVar20);
          puStack_210 = puVar6;
          _swift_willThrow();
          _objc_release(lVar13);
          lVar13 = lStack_1f0;
          lVar5 = lStack_1e8;
        }
        else {
          __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ
                    (puStack_210,lVar5);
          _objc_retain(puVar6);
          _objc_release(lVar5);
          _objc_release(lVar13);
          func_0x000104905304(lVar15,0x11309c5e0);
          lVar5 = lStack_1e8;
          (*pcStack_228)(puVar20,0,1,lStack_1e8);
          func_0x0001001021cc(puVar20,lVar15);
          puStack_210 = (undefined *)0x0;
          lVar13 = lStack_1f0;
        }
        goto joined_r0x0001048fb7f0;
      }
      func_0x000100dc19e8(lStack_1f0,uStack_1d8);
      _swift_bridgeObjectRelease(lVar11);
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(uVar16);
      puVar6 = PTR_PTR_1126add38;
      _swift_getInitializedObjCClass(PTR_PTR_1126add38);
      uVar16 = 0xd000000000000083;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000083,0x800000010f21b8a0);
      _objc_msgSend(puVar6,PTR_s_singleShotLogEntry_logEntry__11266cd78,
                    &PTR____CFConstantStringClassReference_110da4eb8,uVar16);
      _objc_release(uVar16);
      puVar6 = &UNK_10dd47ce8;
      _swift_getKeyPath();
      puVar14 = puVar6;
      FUN_1048f8990();
      _swift_release(puVar6);
      lVar13 = lStack_1f8;
      if (puVar14 == (undefined *)0x0) {
        puVar17 = (undefined *)0x0;
      }
      else {
        uVar16 = 0xd000000000000083;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000083,0x800000010f21b8a0)
        ;
        puVar17 = puVar14;
        _objc_msgSend(puVar14,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,2,0,uVar16,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar16);
        _swift_unknownObjectRelease(puVar14);
      }
      auStack_1c8[0] = 0;
      puStack_150 = puVar17;
      (*pcVar3)(auStack_1c8,&puStack_150);
      _swift_release(puVar20);
      _objc_release(uStack_1e0);
      func_0x000104905304(lVar13,0x11309c5e0);
LAB_1048fbb70:
      _swift_errorRelease(puVar17);
    }
    FUN_10490113c(&puStack_e0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar20 = extraout_x8;
LAB_1048fbec0:
  puStack_150 = puVar20;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_1107b7938,&puStack_150,&UNK_1107b7938,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1048fbee4);
  (*pcVar3)();
}



/* Entry: 1048fc330; end: 1048fc4e3; -[FBSDKLoginManager reauthorizeDataAccess:handler:] */

void FUN_1048fc330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __Block_copy(param_4);
  __Block_copy();
  _objc_retain(param_3);
  _objc_retain(param_1);
  func_0x000104904288();
  __Block_release(param_4);
  __Block_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048fc4e4; end: 1048fc5cb;  */

void FUN_1048fc4e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126add48;
  _swift_getInitializedObjCClass(PTR_PTR_1126add48);
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_autorelease(puVar1);
  puVar1 = &UNK_10dd47b60;
  _swift_getKeyPath();
  puVar3 = puVar1;
  FUN_1048f8990();
  _swift_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    uVar5 = 0;
    if (param_2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar5 = param_1;
    }
    uVar4 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21b3f0);
    _objc_msgSend(puVar3,PTR_s_setString_forKey_accessibility__1125251d8,uVar5,uVar4,puVar2);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 1048fc5cc; end: 1048fc5f3; -[FBSDKLoginManager logOut] */

void FUN_1048fc5cc(undefined8 param_1)

{
  _objc_retain();
  func_0x0001048fc3a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048fc5f4; end: 1048fcaa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fc5f4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar15 = param_1 + _DAT_11309cf70;
  _swift_beginAccess(lVar15,auStack_68,0,0);
  lVar2 = _DAT_11309cfb8;
  lVar14 = _DAT_11309cf60;
  if (*(long *)(lVar15 + 8) == 0) {
    _swift_beginAccess(param_1 + _DAT_11309cf60,auStack_80,0,0);
    lVar15 = _DAT_11309cfb8;
    lVar14 = *(long *)(param_1 + lVar14);
    bVar3 = lVar14 == 0;
    puVar4 = (undefined8 *)(param_1 + _DAT_11309cfb8);
    puVar10 = auStack_98;
    _swift_beginAccess(puVar4,puVar10,0,0);
    puVar13 = *(undefined **)(param_1 + lVar15);
    if ((param_2 & 1) != 0) {
      if (lVar14 == 0) {
        _swift_errorRetain(puVar13);
        bVar3 = true;
        goto LAB_1048fc6ec;
      }
      goto LAB_1048fc6d0;
    }
  }
  else {
    puVar4 = (undefined8 *)(param_1 + _DAT_11309cfb8);
    puVar10 = auStack_98;
    _swift_beginAccess(puVar4,puVar10,0,0);
    puVar13 = *(undefined **)(param_1 + lVar2);
    if ((param_2 & 1) != 0) {
LAB_1048fc6d0:
      if (puVar13 != (undefined *)0x0) {
        _swift_errorRetain(puVar13);
        bVar3 = false;
        goto LAB_1048fc6ec;
      }
      func_0x0001048fdc4c();
      if (puVar10 == (undefined1 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        uStack_c8 = 0x2b;
        uStack_c0 = 0xe100000000000000;
        uStack_d8 = 0x20;
        uStack_d0 = 0xe100000000000000;
        puStack_b0 = puVar4;
        puStack_a8 = puVar10;
        func_0x000100e8b654();
        puVar9 = &uStack_c8;
        puVar12 = &uStack_d8;
        __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                  (puVar9,puVar12,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                   PTR___sSSN_11034da80,puVar4,puVar4,puVar4);
        _swift_bridgeObjectRelease(puVar10);
        puVar4 = puVar9;
      }
      puVar9 = (undefined8 *)(param_1 + _DAT_11309cfd0);
      _swift_beginAccess(puVar9,&uStack_c8,0,0);
      puVar11 = (undefined8 *)puVar9[1];
      if (puVar12 == (undefined8 *)0x0) {
        if (puVar11 == (undefined8 *)0x0) goto LAB_1048fca84;
      }
      else {
        if (puVar11 != (undefined8 *)0x0) {
          if (puVar4 == (undefined8 *)*puVar9 && puVar12 == puVar11) {
            _swift_bridgeObjectRelease(puVar12);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (puVar4,puVar12,(undefined8 *)*puVar9,puVar11,0);
            _swift_bridgeObjectRelease(puVar12);
            if (((ulong)puVar4 & 1) == 0) goto LAB_1048fca10;
          }
LAB_1048fca84:
          bVar3 = false;
          puVar13 = (undefined *)0x0;
          goto LAB_1048fc6ec;
        }
        _swift_bridgeObjectRelease(puVar12);
      }
LAB_1048fca10:
      if (lRam000000011309c208 != -1) {
        _swift_once(0x11309c208,FUN_1048f88f0);
      }
      uVar1 = uRam000000011309ca88;
      uVar8 = uRam000000011309ca80;
      puVar13 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_allocWithZone();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar1);
      _objc_msgSend(puVar13,PTR_s_initWithDomain_code_userInfo__1125e1288,uVar8,0x134,0);
      _objc_release(uVar8);
      bVar3 = false;
      goto LAB_1048fc6ec;
    }
    bVar3 = false;
  }
  _swift_errorRetain(puVar13);
LAB_1048fc6ec:
  puVar5 = &UNK_10dd47b60;
  _swift_getKeyPath();
  puVar6 = puVar5;
  FUN_1048f8990();
  _swift_release(puVar5);
  if (puVar6 != (undefined *)0x0) {
    puVar5 = PTR_PTR_1126add48;
    _swift_getInitializedObjCClass(PTR_PTR_1126add48);
    puVar7 = puVar5;
    _objc_msgSend();
    _objc_autorelease(puVar5);
    uVar8 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f21b390);
    _objc_msgSend(puVar6,PTR_s_setString_forKey_accessibility__1125251d8,0,uVar8,puVar7);
    _swift_unknownObjectRelease(puVar6);
    _swift_unknownObjectRelease(puVar7);
    _objc_release(uVar8);
  }
  if (puVar13 == (undefined *)0x0) {
    lVar15 = param_1;
    if (bVar3) {
      FUN_1048fd804();
    }
    else {
      FUN_1048fcba4();
      if (*(long *)(lVar15 + _DAT_11309cd38) != 0) {
        puVar5 = &UNK_10dd47b80;
        _swift_getKeyPath();
        puVar6 = puVar5;
        FUN_1048f8990();
        _swift_release(puVar5);
        if (puVar6 != (undefined *)0x0) {
          _swift_getObjCClassFromMetadata();
          _objc_msgSend();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 != (undefined *)0x0) {
            puVar4 = (undefined8 *)(param_1 + _DAT_11309cfe0);
            _swift_beginAccess(puVar4,&puStack_b0,0,0);
            uVar8 = *puVar4;
            uVar1 = puVar4[1];
            _swift_bridgeObjectRetain(uVar1);
            func_0x0001048fd498(puVar6,lVar15,uVar8,uVar1);
            _objc_release(lVar15);
            _objc_release(puVar6);
            _swift_bridgeObjectRelease(uVar1);
            return;
          }
        }
      }
    }
  }
  else {
    lVar15 = 0;
  }
  FUN_1048fda1c(param_1,lVar15);
  puVar4 = (undefined8 *)(param_1 + _DAT_11309cfe0);
  _swift_beginAccess(puVar4,&puStack_b0,0,0);
  uVar8 = *puVar4;
  uVar1 = puVar4[1];
  _swift_bridgeObjectRetain(uVar1);
  FUN_1048fc4e4(uVar8,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  FUN_1048fa5b0(lVar15,puVar13);
  _swift_errorRelease(puVar13);
  _objc_release(lVar15);
  return;
}



/* Entry: 1048fcaa8; end: 1048fcba3;  */

void FUN_1048fcaa8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_10dd47b60;
  _swift_getKeyPath();
  puVar2 = puVar1;
  FUN_1048f8990();
  _swift_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR_PTR_1126add48;
    _swift_getInitializedObjCClass(PTR_PTR_1126add48);
    puVar3 = puVar1;
    _objc_msgSend();
    _objc_autorelease(puVar1);
    uVar5 = 0;
    if (param_2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar5 = param_1;
    }
    uVar4 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f21b390);
    _objc_msgSend(puVar2,PTR_s_setString_forKey_accessibility__1125251d8,uVar5,uVar4,puVar3);
    _swift_unknownObjectRelease(puVar2);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 1048fcba4; end: 1048fd803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fcba4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_1d0 [4];
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  long lStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar13 = 0x11309c628;
  func_0x0001048db364();
  lVar20 = _DAT_11309cf90;
  uVar7 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar17 = auStack_1b0 + -uVar7;
  lVar13 = (long)puVar17 - uVar7;
  lVar15 = lVar13 - uVar7;
  _swift_beginAccess(param_1 + _DAT_11309cf90,auStack_80,0,0);
  uVar7 = *(ulong *)(param_1 + lVar20);
  if (uVar7 != 0) {
    _objc_retain();
    uVar4 = uVar7;
    _swift_bridgeObjectRetain();
    FUN_1048ff9f8();
    _swift_bridgeObjectRelease(uVar7);
    _objc_release(unaff_x20);
    if ((uVar4 & 0xc000000000000001) == 0) {
      uVar7 = *(ulong *)(uVar4 + 0x10);
      lVar19 = _DAT_11309cf98;
    }
    else {
      uVar7 = uVar4 & 0xffffffffffffff8;
      if ((long)uVar4 < 0) {
        uVar7 = uVar4;
      }
      __ss10__CocoaSetV5countSivg();
      lVar19 = _DAT_11309cf98;
    }
    _DAT_11309cf98 = lVar19;
    if (uVar7 != 0) {
      _swift_beginAccess(param_1 + lVar19,auStack_98,0,0);
      puVar16 = *(undefined **)(param_1 + lVar19);
      puVar14 = puVar16;
      puStack_160 = puVar17;
      if (puVar16 == (undefined *)0x0) {
        if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) ||
           (puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8,
           __ss18_CocoaArrayWrapperV8endIndexSivg(),
           puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8, puVar14 == (undefined *)0x0)) {
          puVar14 = PTR___swiftEmptySetSingleton_11034f1d8;
          _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        }
        else {
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain();
          FUN_104903fb0();
          _swift_release(puVar11);
        }
      }
      lVar5 = _DAT_11309cab0;
      _swift_beginAccess(unaff_x20 + _DAT_11309cab0,auStack_b0,0,0);
      puVar11 = *(undefined **)(unaff_x20 + lVar5);
      if (puVar11 == (undefined *)0x0) {
        if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) ||
           (puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8,
           __ss18_CocoaArrayWrapperV8endIndexSivg(), puVar6 == (undefined *)0x0)) {
          _swift_bridgeObjectRetain(puVar16);
          puVar16 = PTR___swiftEmptySetSingleton_11034f1d8;
          _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        }
        else {
          _swift_bridgeObjectRetain(puVar16);
          puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
          FUN_104903fb0();
          _swift_release(puVar6);
        }
      }
      else {
        _swift_bridgeObjectRetain(puVar16);
        puVar16 = puVar11;
      }
      _swift_bridgeObjectRetain(puVar11);
      puVar11 = puVar14;
      FUN_104902d28(puVar14,puVar16);
      _swift_bridgeObjectRelease(puVar14);
      puVar16 = *(undefined **)(param_1 + lVar20);
      puVar14 = puVar16;
      if (puVar16 == (undefined *)0x0) {
        if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) ||
           (puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8,
           __ss18_CocoaArrayWrapperV8endIndexSivg(), puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8
           , puVar14 == (undefined *)0x0)) {
          puVar14 = PTR___swiftEmptySetSingleton_11034f1d8;
          _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        }
        else {
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain();
          FUN_104903fb0();
          _swift_release(puVar6);
        }
      }
      _swift_bridgeObjectRetain(puVar16);
      puVar16 = puVar14;
      FUN_1048efb48();
      _swift_bridgeObjectRelease(puVar14);
      puVar6 = puVar16;
      func_0x000100403a6c();
      _swift_bridgeObjectRelease(puVar16);
      puVar16 = *(undefined **)(param_1 + lVar19);
      puVar14 = puVar16;
      if (puVar16 == (undefined *)0x0) {
        if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) ||
           (puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8,
           __ss18_CocoaArrayWrapperV8endIndexSivg(), puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8
           , puVar14 == (undefined *)0x0)) {
          puVar14 = PTR___swiftEmptySetSingleton_11034f1d8;
          _swift_retain(PTR___swiftEmptySetSingleton_11034f1d8);
        }
        else {
          puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
          _swift_retain();
          FUN_104903fb0();
          _swift_release(puVar2);
        }
      }
      _swift_bridgeObjectRetain(puVar16);
      puVar16 = puVar14;
      FUN_1048efb48();
      _swift_bridgeObjectRelease(puVar14);
      puVar14 = puVar16;
      func_0x000100403a6c();
      _swift_bridgeObjectRelease(puVar16);
      uVar7 = uVar4;
      FUN_1048efb48();
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = uVar7;
      func_0x000100403a6c();
      uStack_168 = uVar4;
      _swift_bridgeObjectRelease(uVar7);
      puVar16 = puVar11;
      FUN_1048efb48();
      _swift_release(puVar11);
      puVar11 = puVar16;
      func_0x000100403a6c();
      _swift_bridgeObjectRelease(puVar16);
      puVar1 = (undefined8 *)(param_1 + _DAT_11309cf70);
      _swift_beginAccess(puVar1,auStack_d0,0,0);
      lVar20 = puVar1[1];
      if (lVar20 == 0) {
        _swift_bridgeObjectRelease(puVar14);
        _swift_bridgeObjectRelease(puVar6);
        puVar14 = (undefined *)0x0;
      }
      else {
        uStack_178 = *puVar1;
        _swift_bridgeObjectRetain(lVar20);
        func_0x0001048ffbe8();
        puStack_190 = puVar6;
        func_0x0001048ffbe8();
        puVar1 = (undefined8 *)(param_1 + _DAT_11309cfa8);
        puStack_180 = puVar14;
        _swift_beginAccess(puVar1,auStack_110,0,0);
        lVar19 = puVar1[1];
        if (lVar19 == 0) {
          uStack_1a0 = 0;
          lStack_198 = -0x2000000000000000;
        }
        else {
          uStack_1a0 = *puVar1;
          lStack_198 = lVar19;
        }
        puVar1 = (undefined8 *)(param_1 + _DAT_11309cfb0);
        _swift_beginAccess(puVar1,auStack_128,0,0);
        lVar5 = _DAT_11309cfc0;
        lVar18 = puVar1[1];
        if (lVar18 == 0) {
          uStack_1a8 = 0;
          lVar9 = -0x2000000000000000;
        }
        else {
          uStack_1a8 = *puVar1;
          lVar9 = lVar18;
        }
        puStack_170 = puVar11;
        _swift_beginAccess(param_1 + _DAT_11309cfc0,auStack_140,0,0);
        func_0x00010490540c(param_1 + lVar5,lVar15,0x11309c628);
        _swift_bridgeObjectRetain(lVar19);
        _swift_bridgeObjectRetain(lVar18);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
        __s10Foundation4DateVACycfC(lVar13);
        lVar5 = 0;
        __s10Foundation4DateVMa();
        lVar18 = *(long *)(lVar5 + -8);
        (**(code **)(lVar18 + 0x38))(lVar13,0,1,lVar5);
        lVar19 = _DAT_11309cfc8;
        _swift_beginAccess(param_1 + _DAT_11309cfc8,auStack_158,0,0);
        func_0x00010490540c(param_1 + lVar19,puStack_160,0x11309c628);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_178,lVar20);
        _swift_bridgeObjectRelease(lVar20);
        puVar11 = puStack_190;
        puVar14 = PTR___sSSN_11034da80;
        puVar6 = puStack_190;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_190,PTR___sSSN_11034da80);
        puStack_188 = puVar6;
        _swift_bridgeObjectRelease(puVar11);
        puVar11 = puStack_180;
        puVar6 = puStack_180;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puStack_180,puVar14);
        puStack_190 = puVar6;
        _swift_bridgeObjectRelease(puVar11);
        puVar11 = puVar16;
        __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar16,puVar14);
        puStack_180 = puVar11;
        _swift_release(puVar16);
        lVar20 = lStack_198;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_1a0,lStack_198);
        _swift_bridgeObjectRelease(lVar20);
        uVar8 = uStack_1a8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_1a8,lVar9);
        lStack_198 = uVar8;
        _swift_bridgeObjectRelease(lVar9);
        pcVar12 = *(code **)(lVar18 + 0x30);
        lVar20 = lVar15;
        (*pcVar12)(lVar15,1,lVar5);
        lVar19 = 0;
        if ((int)lVar20 != 1) {
          __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
          (**(code **)(lVar18 + 8))(lVar15,lVar5);
          lVar19 = lVar20;
        }
        lVar20 = lVar13;
        (*pcVar12)(lVar13,1,lVar5);
        if ((int)lVar20 == 1) {
          lVar20 = 0;
        }
        else {
          __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
          (**(code **)(lVar18 + 8))(lVar13,lVar5);
        }
        puVar17 = puStack_160;
        puVar10 = puStack_160;
        (*pcVar12)(puStack_160,1,lVar5);
        if ((int)puVar10 == 1) {
          puVar10 = (undefined1 *)0x0;
        }
        else {
          __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
          (**(code **)(lVar18 + 8))(puVar17,lVar5);
        }
        puVar14 = PTR_PTR_1126add30;
        puStack_160 = puVar10;
        _objc_allocWithZone();
        *(long *)(lVar15 + -0x18) = lVar20;
        *(undefined1 **)(lVar15 + -0x10) = puVar10;
        *(long *)(lVar15 + -0x20) = lVar19;
        uVar3 = uStack_178;
        puVar6 = puStack_180;
        puVar11 = puStack_188;
        puVar16 = puStack_190;
        lVar13 = lStack_198;
        uVar8 = uStack_1a0;
        _objc_msgSend();
        _objc_release(uVar3);
        _objc_release(puVar11);
        _objc_release(puVar16);
        _objc_release(puVar6);
        _objc_release(uVar8);
        _objc_release(lVar13);
        _objc_release(lVar19);
        _objc_release(lVar20);
        _objc_release(puStack_160);
        puVar11 = puStack_170;
      }
      lVar13 = _DAT_11309cf60;
      _swift_beginAccess(param_1 + _DAT_11309cf60,auStack_e8,0,0);
      uVar8 = *(undefined8 *)(param_1 + lVar13);
      lVar20 = 0;
      func_0x00010490a3f4();
      lVar13 = lVar20;
      _objc_allocWithZone();
      puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined **)(lVar13 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      *(undefined **)(lVar13 + _DAT_11309cd38) = puVar14;
      *(undefined8 *)(lVar13 + _DAT_11309cd40) = uVar8;
      *(undefined1 *)(lVar13 + _DAT_11309cd48) = 0;
      *(ulong *)(lVar13 + _DAT_11309cd50) = uStack_168;
      *(undefined **)(lVar13 + _DAT_11309cd58) = puVar11;
      puVar14 = PTR_s_init_1125d9248;
      lStack_f8 = lVar13;
      lStack_f0 = lVar20;
      _objc_retain(uVar8);
      _swift_retain(puVar16);
      _objc_msgSendSuper2(&lStack_f8,puVar14);
      return;
    }
    _swift_bridgeObjectRelease(uVar4);
  }
  FUN_1048fd804(param_1);
  return;
}



/* Entry: 1048fd804; end: 1048fda1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fd804(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_58 [24];
  long lStack_40;
  long lStack_38;
  
  puVar6 = &UNK_10dd47b80;
  _swift_getKeyPath();
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  _swift_retain_n(PTR___swiftEmptySetSingleton_11034f1d8,3);
  puVar2 = puVar6;
  FUN_1048f8990();
  _swift_release(puVar6);
  puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar2 == (undefined *)0x0) {
    _swift_release(PTR___swiftEmptySetSingleton_11034f1d8);
    goto LAB_1048fd92c;
  }
  _swift_getObjCClassFromMetadata();
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
  _swift_release(PTR___swiftEmptySetSingleton_11034f1d8);
  if (puVar2 == (undefined *)0x0) goto LAB_1048fd92c;
  _objc_release(puVar2);
  lVar4 = _DAT_11309cf98;
  _swift_beginAccess(param_1 + _DAT_11309cf98,auStack_58,0,0);
  puVar6 = *(undefined **)(param_1 + lVar4);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) &&
       (puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8, __ss18_CocoaArrayWrapperV8endIndexSivg(),
       puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8,
       puVar6 = PTR___swiftEmptySetSingleton_11034f1d8, puVar5 != (undefined *)0x0)) {
      _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
      _swift_release(PTR___swiftEmptySetSingleton_11034f1d8);
      puVar6 = puVar2;
      FUN_104903fb0();
      goto LAB_1048fd8cc;
    }
  }
  else {
    _swift_bridgeObjectRetain(puVar6);
    puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
LAB_1048fd8cc:
    _swift_release(puVar2);
  }
  puVar2 = puVar6;
  FUN_1048efb48();
  _swift_bridgeObjectRelease(puVar6);
  puVar6 = puVar2;
  func_0x000100403a6c();
  _swift_bridgeObjectRelease(puVar2);
LAB_1048fd92c:
  lVar3 = 0;
  func_0x00010490a3f4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined **)(lVar4 + _DAT_11309cd30) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  *(undefined8 *)(lVar4 + _DAT_11309cd38) = 0;
  *(undefined8 *)(lVar4 + _DAT_11309cd40) = 0;
  *(undefined1 *)(lVar4 + _DAT_11309cd48) = 1;
  *(undefined **)(lVar4 + _DAT_11309cd50) = puVar1;
  *(undefined **)(lVar4 + _DAT_11309cd58) = puVar6;
  puVar6 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _swift_retain(puVar2);
  _objc_msgSendSuper2(&lStack_40,puVar6);
  return;
}



/* Entry: 1048fda1c; end: 1048fdbf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048fda1c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = _DAT_11309cad0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cad0,auStack_138,0,0);
  func_0x00010490540c(unaff_x20 + lVar1,&lStack_b0,0x11309c518);
  if (lStack_b0 == 0) {
    FUN_1048f97e0(&lStack_120);
    if (lStack_b0 != 0) {
      func_0x000104905304(&lStack_b0,0x11309c518);
    }
  }
  else {
    uStack_d8 = uStack_68;
    uStack_e0 = uStack_70;
    uStack_c8 = uStack_58;
    uStack_d0 = uStack_60;
    uStack_b8 = uStack_48;
    uStack_c0 = uStack_50;
    uStack_118 = uStack_a8;
    lStack_120 = lStack_b0;
    uStack_108 = uStack_98;
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    uStack_e8 = uStack_78;
    uStack_f0 = uStack_80;
  }
  lVar1 = _DAT_11309cf60;
  if (lStack_120 == 0) {
    func_0x000104905304(&lStack_120,0x11309c518);
    return;
  }
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  uStack_a8 = uStack_118;
  lStack_b0 = lStack_120;
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  uStack_88 = uStack_f8;
  uStack_90 = uStack_100;
  uStack_78 = uStack_e8;
  uStack_80 = uStack_f0;
  _swift_beginAccess(param_1 + _DAT_11309cf60,&lStack_120,0,0);
  if (param_2 == 0) {
    if (*(long *)(param_1 + lVar1) == 0) goto LAB_1048fdbd4;
  }
  else if (*(long *)(param_2 + _DAT_11309cd38) == 0 && *(long *)(param_1 + lVar1) == 0)
  goto LAB_1048fdbd4;
  _swift_getObjCClassFromMetadata(uStack_a8);
  _objc_msgSend();
  lVar1 = lStack_b0;
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_11309cd38);
    _objc_retain(uVar2);
  }
  _swift_getObjCClassFromMetadata(lVar1);
  _objc_msgSend();
  _objc_release(uVar2);
  uVar2 = uStack_58;
  _swift_beginAccess(param_1 + _DAT_11309cf68,auStack_150,0,0);
  _swift_getObjCClassFromMetadata(uVar2);
  _objc_msgSend();
LAB_1048fdbd4:
  FUN_10490113c(&lStack_b0);
  return;
}



/* Entry: 1048fdbf4; end: 1048fdd0f; -[FBSDKLoginManager completeAuthenticationWithParameters:expectChallenge:] */

void FUN_1048fdbf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048fc5f4(param_3,param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048fdd10; end: 1048fee4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1048fdd10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *extraout_x8;
  undefined8 uVar18;
  long unaff_x20;
  undefined *puVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined *puVar25;
  double dVar26;
  long alStack_2e0 [4];
  undefined1 auStack_2c0 [8];
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined *puStack_230;
  undefined *apuStack_220 [18];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  double dStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined *)0x0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(puVar2 + -8);
  uVar15 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar13 = auStack_2c0 + -uVar15;
  lVar16 = (long)puVar13 - uVar15;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar5 = _DAT_11309cad0;
  lVar22 = *(long *)(lVar3 + -8);
  lVar24 = lVar16 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _DAT_11309cad0,auStack_178,0,0);
  func_0x00010490540c(unaff_x20 + lVar5,&puStack_f0,0x11309c518);
  if (puStack_f0 == (undefined *)0x0) {
    FUN_1048f97e0(&puStack_160);
    if (puStack_f0 != (undefined *)0x0) {
      func_0x000104905304(&puStack_f0,0x11309c518);
    }
  }
  else {
    uStack_118 = uStack_a8;
    uStack_120 = uStack_b0;
    uStack_108 = uStack_98;
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    lStack_100 = lStack_90;
    puStack_158 = puStack_e8;
    puStack_160 = puStack_f0;
    puStack_148 = puStack_d8;
    uStack_150 = uStack_e0;
    uStack_138 = uStack_c8;
    lStack_140 = lStack_d0;
    uStack_128 = uStack_b8;
    dStack_130 = dStack_c0;
  }
  lVar5 = lStack_140;
  uVar17 = uStack_150;
  if (puStack_160 == (undefined *)0x0) {
    func_0x000104905304(&puStack_160,0x11309c518);
LAB_1048fe000:
    puVar2 = (undefined *)0x0;
  }
  else {
    uStack_a8 = uStack_118;
    uStack_b0 = uStack_120;
    uStack_98 = uStack_108;
    uStack_a0 = uStack_110;
    uStack_88 = uStack_f8;
    lStack_90 = lStack_100;
    puStack_e8 = puStack_158;
    puStack_f0 = puStack_160;
    puStack_d8 = puStack_148;
    uStack_e0 = uStack_150;
    uStack_c8 = uStack_138;
    lStack_d0 = lStack_140;
    uStack_b8 = uStack_128;
    dStack_c0 = dStack_130;
    if (param_1 == 0) {
      uVar18 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f21b3b0);
      _objc_msgSend(uVar17,PTR_s_errorWithCode_userInfo_message_u_1125c3e28,0x12d,0,uVar18,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar18);
      uVar18 = uVar17;
      _objc_retain(uVar17);
      FUN_1048fa5b0(0,uVar17);
      _objc_release(uVar18);
      _objc_release(uVar18);
      FUN_10490113c(&puStack_f0);
      goto LAB_1048fe000;
    }
    dVar26 = dStack_130;
    uStack_2b0 = param_4;
    lStack_2a8 = param_5;
    _objc_retain();
    lStack_2a0 = lVar5;
    lStack_298 = param_1;
    _objc_msgSend(lVar5,PTR_s_validateURLSchemes_1126834e8);
    __s10Foundation4DateVACycfC(lVar24);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar22 + 8))(lVar24,lVar3);
    puVar4 = (undefined *)0x11309caf0;
    func_0x0001048db364();
    _swift_allocObject();
    lVar5 = lStack_90;
    puStack_2b8 = (undefined8 *)(puVar4 + 0x20);
    *puStack_2b8 = 0x695f746e65696c63;
    *(undefined8 *)(puVar4 + 0x18) = 0x1a;
    *(undefined8 *)(puVar4 + 0x10) = 0xd;
    *(undefined8 *)(puVar4 + 0x28) = 0xe900000000000064;
    lVar3 = lStack_90;
    puVar21 = PTR_s_appID_11259ee40;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar22 = 0;
      puVar21 = (undefined *)0x0;
    }
    else {
      lVar22 = lVar3;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar3);
    }
    *(long *)(puVar4 + 0x30) = lVar22;
    *(undefined **)(puVar4 + 0x38) = puVar21;
    *(undefined8 *)(puVar4 + 0x40) = 0x79616c70736964;
    *(undefined8 *)(puVar4 + 0x48) = 0xe700000000000000;
    *(undefined8 *)(puVar4 + 0x58) = 0xe500000000000000;
    *(undefined8 *)(puVar4 + 0x50) = 0x6863756f74;
    *(undefined8 *)(puVar4 + 0x60) = 0x6b6473;
    *(undefined8 *)(puVar4 + 0x68) = 0xe300000000000000;
    *(undefined8 *)(puVar4 + 0x78) = 0xe300000000000000;
    *(undefined8 *)(puVar4 + 0x70) = 0x736f69;
    *(undefined8 *)(puVar4 + 0x80) = 0x735f6e7275746572;
    *(undefined8 *)(puVar4 + 0x88) = 0xed00007365706f63;
    *(undefined8 *)(puVar4 + 0x98) = 0xe400000000000000;
    *(undefined8 *)(puVar4 + 0x90) = 0x65757274;
    *(undefined8 *)(puVar4 + 0xa0) = 0x737265765f6b6473;
    *(undefined8 *)(puVar4 + 0xa8) = 0xeb000000006e6f69;
    *(undefined8 *)(puVar4 + 0xb8) = 0xe600000000000000;
    *(undefined8 *)(puVar4 + 0xb0) = 0x302e302e3731;
    *(undefined8 *)(puVar4 + 0xc0) = 0x72705f7070616266;
    *(undefined8 *)(puVar4 + 200) = 0xea00000000007365;
    _objc_msgSend(lStack_2a0,PTR_s_isFacebookAppInstalled_1125251e0);
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _objc_msgSend();
    puVar19 = puVar21;
    puVar25 = PTR_s_stringValue_112674fe8;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    puVar21 = puVar19;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar9 = puVar25;
    _objc_release(puVar19);
    lVar3 = lStack_298;
    *(undefined **)(puVar4 + 0xd0) = puVar21;
    *(undefined **)(puVar4 + 0xd8) = puVar25;
    *(undefined8 *)(puVar4 + 0xe0) = 0x7079745f68747561;
    *(undefined8 *)(puVar4 + 0xe8) = 0xe900000000000065;
    lVar22 = *(long *)(lStack_298 + _DAT_11309ca28);
    if (lVar22 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    }
    *(long *)(puVar4 + 0xf0) = lVar22;
    *(undefined **)(puVar4 + 0xf8) = puVar9;
    *(undefined8 *)(puVar4 + 0x100) = 0x5f676e6967676f6c;
    *(undefined8 *)(puVar4 + 0x108) = 0xed00006e656b6f74;
    *(undefined8 *)(puVar4 + 0x110) = param_2;
    *(undefined8 *)(puVar4 + 0x118) = param_3;
    *(undefined8 *)(puVar4 + 0x120) = 0x746263;
    *(undefined8 *)(puVar4 + 0x128) = 0xe300000000000000;
    _swift_bridgeObjectRetain();
    __sSd11descriptionSSvg((long)(dVar26 * 1000.0));
    *(undefined8 *)(puVar4 + 0x130) = param_3;
    *(undefined **)(puVar4 + 0x138) = puVar9;
    *(undefined8 *)(puVar4 + 0x140) = 0x736569;
    *(undefined8 *)(puVar4 + 0x148) = 0xe300000000000000;
    _objc_msgSend(lVar5,PTR_s_isAutoLogAppEventsEnabled_1125f8d30);
    puVar21 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    _objc_msgSend();
    puVar19 = puVar21;
    puVar25 = PTR_s_stringValue_112674fe8;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar21);
    puVar21 = puVar19;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(puVar19);
    *(undefined **)(puVar4 + 0x150) = puVar21;
    *(undefined **)(puVar4 + 0x158) = puVar25;
    *(undefined8 *)(puVar4 + 0x160) = 0x6c635f6c61636f6c;
    *(undefined8 *)(puVar4 + 0x168) = 0xef64695f746e6569;
    puVar21 = PTR_s_appURLSchemeSuffix_11259f310;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      lVar22 = 0;
      puVar21 = (undefined *)0x0;
    }
    else {
      lVar22 = lVar5;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(lVar5);
    }
    *(long *)(puVar4 + 0x170) = lVar22;
    *(undefined **)(puVar4 + 0x178) = puVar21;
    *(undefined8 *)(puVar4 + 0x180) = 0xd000000000000010;
    *(undefined8 *)(puVar4 + 0x188) = 0x800000010f21b3d0;
    lVar22 = _DAT_11309ca90;
    lVar5 = unaff_x20 + _DAT_11309ca90;
    puVar10 = auStack_190;
    _swift_beginAccess(lVar5,puVar10,0,0);
    uVar15 = *(ulong *)(unaff_x20 + lVar22);
    if (uVar15 < 3) {
      uVar17 = *(undefined8 *)(&UNK_10dd47d08 + uVar15 * 8);
      uVar18 = *(undefined8 *)(&UNK_10dd47d20 + uVar15 * 8);
    }
    else {
      uVar17 = 0;
      uVar18 = 0xe000000000000000;
    }
    *(undefined8 *)(puVar4 + 400) = uVar17;
    *(undefined8 *)(puVar4 + 0x198) = uVar18;
    *(undefined8 *)(puVar4 + 0x1a0) = 0xd000000000000010;
    *(undefined8 *)(puVar4 + 0x1a8) = 0x800000010f21b3f0;
    FUN_1048fee4c();
    *(long *)(puVar4 + 0x1b0) = lVar5;
    *(undefined1 **)(puVar4 + 0x1b8) = puVar10;
    puVar21 = puVar4;
    func_0x000101480964();
    _swift_setDeallocating(puVar4);
    uVar17 = 0x11309caf8;
    func_0x0001048db364(0x11309caf8);
    _swift_arrayDestroy(puStack_2b8,0xd,uVar17);
    _swift_deallocClassInstance(puVar4,0x20,7);
    puVar4 = puVar21;
    FUN_1048fef10();
    puVar19 = *(undefined **)(lVar3 + _DAT_11309ca08);
    puStack_230 = puVar19;
    apuStack_220[0] = puVar4;
    FUN_1048f07b4(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(puVar19);
    lVar5 = 0x64696e65706f;
    FUN_1048f0008(0x64696e65706f,0xe600000000000000);
    if (lVar5 != 0) {
      FUN_104901168(&puStack_160,lVar5);
      _objc_release(puStack_160);
    }
    puVar4 = puStack_230;
    puVar19 = puStack_230;
    FUN_1048f8a98();
    uVar17 = 0x11309c618;
    puStack_160 = puVar19;
    func_0x0001048db364(0x11309c618);
    uVar18 = 0x112d38278;
    func_0x0001049055f4(0x112d38278,FUN_1048e5f1c,PTR___sSayxGSKsMc_11034dcf0);
    uVar6 = 0x2c;
    uVar11 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x2c,0xe100000000000000,uVar17,uVar18);
    _swift_bridgeObjectRelease(puVar19);
    puVar19 = apuStack_220[0];
    puVar25 = apuStack_220[0];
    _swift_isUniquelyReferenced_nonNull_native(apuStack_220[0]);
    puStack_160 = puVar19;
    func_0x00010018433c(uVar6,uVar11,0x65706f6373,0xe500000000000000,puVar25);
    puVar19 = puStack_160;
    apuStack_220[0] = puStack_160;
    puVar20 = (undefined8 *)(lVar3 + _DAT_11309ca20);
    lVar5 = puVar20[1];
    if (lVar5 != 0) {
      uVar17 = *puVar20;
      _swift_bridgeObjectRetain(lVar5);
      puVar25 = puVar19;
      _swift_isUniquelyReferenced_nonNull_native(puVar19);
      puStack_160 = puVar19;
      func_0x00010018433c(uVar17,lVar5,0xd000000000000011,0x800000010f21b4b0,puVar25);
    }
    uVar17 = 0x7a69726f68747561;
    apuStack_220[0] = puStack_160;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7a69726f68747561,0xe900000000000065);
    uVar18 = 0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
    _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x0001001830b8();
    _swift_release(puVar19);
    puVar19 = PTR___sSSN_11034da80;
    puVar9 = puVar25;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar25,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(puVar25);
    puStack_160 = (undefined *)0x0;
    lVar5 = lStack_2a0;
    puVar12 = PTR_s_appURLWithHost_path_queryParamet_11259f318;
    _objc_msgSend(lStack_2a0,PTR_s_appURLWithHost_path_queryParamet_11259f318,uVar17,uVar18,puVar9,
                  &puStack_160);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar17);
    _objc_release(uVar18);
    _objc_release(puVar9);
    puVar25 = puStack_160;
    if (lVar5 == 0) {
      puVar2 = puStack_160;
      _objc_retain(puStack_160);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar25);
      _objc_release(puVar2);
      _swift_willThrow();
      _swift_errorRelease(puVar25);
    }
    else {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar13,lVar5);
      _objc_retain(puVar25);
      _objc_release(lVar5);
      lVar5 = lVar16;
      (**(code **)(lVar14 + 0x20))(lVar16,puVar13,puVar2);
      __s10Foundation3URLV14absoluteStringSSvg();
      puVar25 = apuStack_220[0];
      puVar9 = apuStack_220[0];
      _swift_isUniquelyReferenced_nonNull_native(apuStack_220[0]);
      puStack_160 = puVar25;
      func_0x00010018433c(lVar5,puVar13,0x7463657269646572,0xec0000006972755f,puVar9);
      (**(code **)(lVar14 + 8))(lVar16);
      apuStack_220[0] = puStack_160;
      puVar12 = puVar2;
    }
    puVar2 = (undefined *)0x14;
    FUN_10497c58c();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = (undefined *)0x0;
      puVar25 = (undefined *)0x0;
      ppuVar23 = (undefined **)0x0;
      puVar20 = (undefined8 *)0x0;
    }
    else {
      puVar25 = puVar2;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release();
      puStack_240 = (undefined *)0x2b;
      uStack_238 = 0xe100000000000000;
      uStack_250 = 0x3d;
      uStack_248 = 0xe100000000000000;
      puStack_160 = puVar25;
      puStack_158 = puVar12;
      func_0x000100e8b654();
      *(undefined **)(lVar24 + -0x10) = puVar2;
      *(undefined **)(lVar24 + -8) = puVar2;
      ppuVar23 = &puStack_240;
      puVar20 = &uStack_250;
      *(undefined **)(lVar24 + -0x20) = puVar19;
      *(undefined **)(lVar24 + -0x18) = puVar2;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (ppuVar23,puVar20,0,0,0,1,puVar19,puVar19);
      _swift_bridgeObjectRelease(puVar12);
      puVar9 = PTR_PTR_1126add08;
      _swift_getInitializedObjCClass();
      _swift_bridgeObjectRetain(puVar20);
      ppuVar7 = ppuVar23;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(ppuVar23,puVar20);
      puVar25 = PTR_s_URLEncode__11254e528;
      _objc_msgSend(puVar9,PTR_s_URLEncode__11254e528,ppuVar7);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      puVar2 = puVar9;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _swift_bridgeObjectRelease(puVar20);
      _objc_release(puVar9);
    }
    lVar5 = 0x11309c610;
    func_0x0001048db364();
    _swift_initStackObject();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined8 *)(lVar5 + 0x20) = 0x676e656c6c616863;
    *(undefined8 *)(lVar5 + 0x28) = 0xe900000000000065;
    if (puVar25 == (undefined *)0x0) {
      puStack_158 = (undefined *)0x0;
      puStack_160 = (undefined *)0x0;
      puStack_148 = (undefined *)0x0;
      uStack_150 = 0;
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      _objc_allocWithZone();
      _objc_msgSend();
      uVar17 = 0;
      func_0x0001049055b4(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
      *(undefined8 *)(lVar5 + 0x48) = uVar17;
      *(undefined **)(lVar5 + 0x30) = puVar2;
      if (puStack_148 != (undefined *)0x0) {
        func_0x000104905304(&puStack_160,0x11309c428);
      }
    }
    else {
      puStack_148 = puVar19;
      puStack_160 = puVar2;
      puStack_158 = puVar25;
      func_0x000100102924(&puStack_160,lVar5 + 0x30);
    }
    _swift_bridgeObjectRetain(puVar25);
    lVar3 = lVar5;
    func_0x000100214a84(lVar5);
    _swift_setDeallocating(lVar5);
    func_0x000104905304((undefined8 *)(lVar5 + 0x20),0x11309c418);
    lVar5 = _DAT_11309cab8;
    _swift_beginAccess(unaff_x20 + _DAT_11309cab8,&puStack_160,0,0);
    uVar18 = *(undefined8 *)(unaff_x20 + lVar5);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(lVar3);
    uVar17 = uStack_2b0;
    lVar5 = lStack_2a8;
    FUN_1049095a0(uStack_2b0,lStack_2a8,lVar3,uVar18);
    _swift_bridgeObjectRelease(lVar3);
    _swift_release(uVar18);
    puVar2 = apuStack_220[0];
    if (lVar5 != 0) {
      puVar19 = apuStack_220[0];
      _swift_isUniquelyReferenced_nonNull_native(apuStack_220[0]);
      puStack_240 = puVar2;
      func_0x00010018433c(uVar17,lVar5,0x6574617473,0xe500000000000000,puVar19);
      apuStack_220[0] = puStack_240;
    }
    FUN_1048fcaa8(ppuVar23,puVar20);
    _swift_bridgeObjectRelease(puVar20);
    lVar5 = lStack_298;
    puVar2 = *(undefined **)(lStack_298 + _DAT_11309ca10);
    if (puVar2 == (undefined *)0x0) {
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(puVar25);
      _swift_bridgeObjectRelease(puVar21);
      _swift_bridgeObjectRelease(puVar4);
      puVar2 = PTR_PTR_1126add50;
      _swift_getInitializedObjCClass();
      _objc_msgSend();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      _objc_msgSend();
      _objc_release(puVar2);
      if ((int)puVar4 != 0) {
        uVar8 = 0;
        func_0x0001049eab50();
        FUN_1049e48e0();
        uVar15 = uVar8;
        FUN_1049eaea8();
        _objc_release(uVar8);
        if ((uVar15 & 1) == 0) {
          FUN_1048ff1a0(apuStack_220,lVar5);
          puVar2 = apuStack_220[0];
          goto LAB_1048febcc;
        }
      }
      puVar2 = apuStack_220[0];
      puVar4 = apuStack_220[0];
      _swift_isUniquelyReferenced_nonNull_native(apuStack_220[0]);
      puStack_240 = puVar2;
      uVar17 = 0xd000000000000044;
      uVar18 = 0x800000010f21b410;
      func_0x00010018433c(0xd000000000000044,0x800000010f21b410,0x65736e6f70736572,
                          0xed0000657079745f,puVar4);
      puVar2 = puStack_240;
      apuStack_220[0] = puStack_240;
      uVar6 = *(undefined8 *)(lVar5 + _DAT_11309ca30);
      FUN_1048ddf24();
      puVar4 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native(puVar2);
      puStack_240 = puVar2;
      func_0x00010018433c(uVar17,uVar18,0x6168635f65646f63,0xee0065676e656c6c,puVar4);
      puVar2 = puStack_240;
      apuStack_220[0] = puStack_240;
      _swift_isUniquelyReferenced_nonNull_native(puStack_240);
      puVar4 = puStack_240;
      puStack_240 = puVar2;
      func_0x00010018433c(0x36353253,0xe400000000000000,0xd000000000000015,0x800000010f007dc0,puVar4
                         );
      puVar2 = puStack_240;
      FUN_1048ff568(uVar6);
    }
    else {
      if (puVar2 != (undefined *)0x1) goto LAB_1048fee28;
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(puVar25);
      _swift_bridgeObjectRelease(puVar21);
      _swift_bridgeObjectRelease(puVar4);
      puVar2 = apuStack_220[0];
      puVar4 = apuStack_220[0];
      _swift_isUniquelyReferenced_nonNull_native(apuStack_220[0]);
      puStack_240 = puVar2;
      func_0x00010018433c(0xd000000000000026,0x800000010f21b460,0x65736e6f70736572,
                          0xed0000657079745f,puVar4);
      puVar2 = puStack_240;
      _swift_isUniquelyReferenced_nonNull_native(puStack_240);
      puVar4 = puStack_240;
      puStack_240 = puVar2;
      func_0x00010018433c(0xd000000000000013,0x800000010f21b490,0x7074,0xe200000000000000,puVar4);
      puVar2 = puStack_240;
    }
LAB_1048febcc:
    uVar17 = *(undefined8 *)(lVar5 + _DAT_11309ca18);
    uVar18 = ((undefined8 *)(lVar5 + _DAT_11309ca18))[1];
    _swift_bridgeObjectRetain(uVar18);
    puVar4 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    puStack_240 = puVar2;
    func_0x00010018433c(uVar17,uVar18,0x65636e6f6e,0xe500000000000000,puVar4);
    puVar2 = puStack_240;
    apuStack_220[0] = puStack_240;
    _swift_bridgeObjectRetain(uVar18);
    FUN_1048ff384(uVar17,uVar18);
    _swift_bridgeObjectRelease(uVar18);
    uVar15 = 8;
    _clock_gettime_nsec_np();
    lVar3 = 0x11309cb00;
    func_0x0001048db364();
    _swift_initStackObject();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = 0x74696e69;
    *(undefined8 *)(lVar3 + 0x28) = 0xe400000000000000;
    *(double *)(lVar3 + 0x30) = (double)uVar15 / 1000000000.0;
    lVar14 = lVar3;
    func_0x0001010fe67c();
    _swift_setDeallocating(lVar3);
    func_0x000104905304((undefined8 *)(lVar3 + 0x20),0x11309cb08);
    puVar21 = PTR_PTR_1126add58;
    _swift_getInitializedObjCClass();
    lVar3 = lVar14;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (lVar14,PTR___sSSN_11034da80,PTR___sSdN_11034dd90,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(lVar14);
    puStack_240 = (undefined *)0x0;
    puVar19 = PTR_s_JSONStringForObject_error_invali_11254e010;
    _objc_msgSend(puVar21,PTR_s_JSONStringForObject_error_invali_11254e010,lVar3,&puStack_240,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puVar4 = puStack_240;
    if (puVar21 == (undefined *)0x0) {
      puVar21 = puStack_240;
      _objc_retain(puStack_240);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(puVar4);
      _objc_release(puVar21);
      _swift_willThrow();
      _objc_release(lVar5);
      _swift_errorRelease(puVar4);
    }
    else {
      puVar25 = puVar21;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar21);
      _objc_retain(puVar4);
      _objc_release(puVar21);
      puVar4 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native(puVar2);
      puStack_240 = puVar2;
      func_0x00010018433c(puVar25,puVar19,0x653265,0xe300000000000000,puVar4);
      _objc_release(lVar5);
      puVar2 = puStack_240;
    }
    FUN_10490113c(&puStack_f0);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar2 = extraout_x8;
LAB_1048fee28:
  puStack_240 = puVar2;
  __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
            (&UNK_1107b7938,&puStack_240,&UNK_1107b7938,PTR___sSuN_11034e220);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048fee4c);
  (*pcVar1)();
}



/* Entry: 1048fee4c; end: 1048fef0f;  */

undefined1  [16] FUN_1048fee4c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  puVar1 = &UNK_10dd47b60;
  _swift_getKeyPath();
  puVar3 = puVar1;
  FUN_1048f8990();
  _swift_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    uVar2 = 0xd000000000000010;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f21b3f0);
    puVar1 = puVar3;
    puVar4 = PTR_s_stringForKey__112674ee8;
    _objc_msgSend(puVar3,PTR_s_stringForKey__112674ee8,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _swift_unknownObjectRelease(puVar3);
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar1;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar1);
      _objc_release(puVar1);
      goto LAB_1048fef00;
    }
  }
  puVar3 = (undefined *)0x0;
  puVar4 = (undefined *)0x0;
LAB_1048fef00:
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 1048fef10; end: 1048ff19f;  */

undefined * FUN_1048fef10(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar10 < 0x40) {
    uVar17 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  _swift_retain(PTR___swiftEmptyDictionarySingleton_11034f1d0);
  _swift_bridgeObjectRetain(param_1);
  lVar16 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 0x10);
      lVar15 = puVar1[1];
      if (lVar15 != 0) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
        uVar3 = *puVar2;
        uVar4 = puVar2[1];
        uVar9 = *puVar1;
        uVar11 = *(ulong *)(puVar5 + 0x10);
        if (uVar11 < *(ulong *)(puVar5 + 0x18)) {
          _swift_bridgeObjectRetain_n(lVar15,2);
          _swift_bridgeObjectRetain_n(uVar4,2);
        }
        else {
          _swift_bridgeObjectRetain_n(lVar15,2);
          _swift_bridgeObjectRetain_n(uVar4,2);
          func_0x0001001833c8(uVar11 + 1,1);
        }
        __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(puVar5 + 0x28));
        puVar8 = auStack_a8;
        __sSS4hash4intoys6HasherVz_tF(puVar8,uVar3,uVar4);
        __ss6HasherV9_finalizeSiyF();
        uVar14 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
        uVar12 = uVar13 >> 6;
        uVar11 = -1L << (uVar13 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar7 = false;
          uVar11 = 0x3f - uVar14 >> 6;
          do {
            uVar13 = uVar12 + 1;
            if ((uVar13 == uVar11) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1048ff1a0);
              (*pcVar6)();
            }
            uVar12 = 0;
            if (uVar13 != uVar11) {
              uVar12 = uVar13;
            }
            bVar7 = (bool)(uVar13 == uVar11 | bVar7);
          } while (*(ulong *)(puVar5 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar5 + uVar12 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + uVar12 * 0x40;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
        uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar12 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar5 + uVar12 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar5 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar11 * 0x10);
        *puVar1 = uVar9;
        puVar1[1] = lVar15;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        _swift_bridgeObjectRelease(lVar15);
        _swift_bridgeObjectRelease(uVar4);
      }
    }
    bVar7 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1048ff19c);
      (*pcVar6)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar16) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  _swift_release(param_1);
  return puVar5;
}



/* Entry: 1048ff1a0; end: 1048ff383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ff1a0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_1;
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar3 = *param_1;
  uVar4 = 0xd000000000000044;
  uVar2 = 0x800000010f21b410;
  func_0x00010018433c(0xd000000000000044,0x800000010f21b410,0x65736e6f70736572,0xed0000657079745f,
                      uVar1);
  *param_1 = uVar3;
  uVar5 = *(undefined8 *)(param_2 + _DAT_11309ca30);
  FUN_1048ddf24();
  uVar1 = *param_1;
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar3 = *param_1;
  func_0x00010018433c(uVar4,uVar2,0x6168635f65646f63,0xee0065676e656c6c,uVar1);
  *param_1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *param_1;
  func_0x00010018433c(0x36353253,0xe400000000000000,0xd000000000000015,0x800000010f007dc0,uVar3);
  *param_1 = uVar4;
  FUN_1048ff568(uVar5);
  uVar4 = *param_1;
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar1 = *param_1;
  func_0x00010018433c(0xd000000000000013,0x800000010f21b490,0x7074,0xe200000000000000,uVar4);
  *param_1 = uVar1;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *param_1;
  func_0x00010018433c(0x65757274,0xe400000000000000,0xd000000000000015,0x800000010f21b6a0,uVar1);
  *param_1 = uVar4;
  return;
}



/* Entry: 1048ff384; end: 1048ff46b;  */

void FUN_1048ff384(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126add48;
  _swift_getInitializedObjCClass(PTR_PTR_1126add48);
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_autorelease(puVar1);
  puVar1 = &UNK_10dd47b60;
  _swift_getKeyPath();
  puVar3 = puVar1;
  FUN_1048f8990();
  _swift_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    uVar5 = 0;
    if (param_2 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
      uVar5 = param_1;
    }
    uVar4 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f21b4d0);
    _objc_msgSend(puVar3,PTR_s_setString_forKey_accessibility__1125251d8,uVar5,uVar4,puVar2);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 1048ff46c; end: 1048ff567; -[FBSDKLoginManager logInParametersWithConfiguration:loggingToken:authenticationMethod:] */

void FUN_1048ff46c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
    uVar1 = param_2;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _objc_retain(param_1);
  lVar2 = param_3;
  _objc_retain(param_3);
  FUN_1048fdd10(param_3,param_4,uVar1,param_5,param_2);
  _objc_release(lVar2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_3;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    _swift_bridgeObjectRelease(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1048ff568; end: 1048ff64f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ff568(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126add48;
  _swift_getInitializedObjCClass(PTR_PTR_1126add48);
  puVar2 = puVar1;
  _objc_msgSend();
  _objc_autorelease(puVar1);
  puVar1 = &UNK_10dd47b60;
  _swift_getKeyPath();
  puVar3 = puVar1;
  FUN_1048f8990();
  _swift_release(puVar1);
  if (puVar3 != (undefined *)0x0) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11309c4d0);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (uVar4,((undefined8 *)(param_1 + _DAT_11309c4d0))[1]);
    }
    uVar5 = 0xd00000000000001c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f21b680);
    _objc_msgSend(puVar3,PTR_s_setString_forKey_accessibility__1125251d8,uVar4,uVar5,puVar2);
    _swift_unknownObjectRelease(puVar3);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar2);
  return;
}



/* Entry: 1048ff650; end: 1048ff943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048ff650(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 *param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = 0;
  uVar4 = 0;
  func_0x00010490540c(param_2,&uStack_80,0x11309c428);
  if (lStack_68 != 0) {
    uVar7 = 0x11309c420;
    func_0x0001048db364(0x11309c420);
    puVar6 = PTR___sypN_11034f1a8;
    _swift_dynamicCast(&uStack_90,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar7,6);
    uVar1 = uStack_90;
    if ((uVar2 & 1) == 0) goto LAB_1048ff7d4;
    if (*(long *)(uStack_90 + 0x10) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      _swift_bridgeObjectRetain(uStack_90);
      lVar3 = 0x6469;
      uVar2 = 0;
      func_0x000100029284(0x6469);
      if ((uVar2 & 1) == 0) {
        _swift_bridgeObjectRelease(uVar1);
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(uVar1 + 0x38) + lVar3 * 0x20,&uStack_80);
        _swift_bridgeObjectRelease(uVar1);
      }
    }
    _swift_bridgeObjectRelease(uVar1);
    if (lStack_68 != 0) {
      _swift_dynamicCast(&uStack_90,&uStack_80,puVar6 + 8,PTR___sSSN_11034da80,6);
      if ((uVar4 & 1) != 0) {
        puVar6 = PTR_s_userID_112682300;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(param_4);
        if ((uVar2 == uStack_90) && (puVar6 == puStack_88)) {
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puStack_88);
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar2,puVar6,uStack_90,puStack_88,0);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puStack_88);
          if ((uVar2 & 1) == 0) goto LAB_1048ff7d4;
        }
        uVar7 = *param_5;
        if (param_7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(param_7 + _DAT_11309cd38);
          _objc_retain(uVar5);
        }
        _swift_getObjCClassFromMetadata(uVar7);
        _objc_msgSend();
        _objc_release(uVar5);
        FUN_1048fc4e4(param_8,param_9);
        FUN_1048fa5b0(param_7,0);
        return;
      }
      goto LAB_1048ff7d4;
    }
  }
  func_0x000104905304(&uStack_80,0x11309c428);
LAB_1048ff7d4:
  uVar7 = param_5[2];
  if (lRam000000011309c208 != -1) {
    _swift_once(0x11309c208,FUN_1048f88f0);
  }
  uVar5 = uRam000000011309ca80;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uRam000000011309ca80,uRam000000011309ca88);
  if (param_3 != 0) {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_3);
  }
  _objc_msgSend(uVar7,PTR_s_errorWithDomain_code_userInfo_me_112525100,uVar5,0x130,0,0,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(param_3);
  uVar5 = uVar7;
  _objc_retain(uVar7);
  FUN_1048fa5b0(0,uVar7);
  _objc_release(uVar5);
  _objc_release(uVar5);
  return;
}



/* Entry: 1048ff944; end: 1048ff9ef; -[FBSDKLoginManager validateReauthenticationWithAccessToken:loginResult:userTokenNonce:] */

void FUN_1048ff944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  _objc_retain(param_3);
  uVar1 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_1);
  func_0x0001048fd498(param_3,param_4,param_5,param_2);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1048ff9f0; end: 1048ff9f7;  */

void FUN_1048ff9f0(void)

{
  return;
}



/* Entry: 1048ff9f8; end: 1048ffc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1048ff9f8(ulong param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_48 [24];
  
  puVar2 = &UNK_10dd47b80;
  _swift_getKeyPath();
  puVar3 = puVar2;
  FUN_1048f8990();
  _swift_release(puVar2);
  if (puVar3 != (undefined *)0x0) {
    _swift_getObjCClassFromMetadata();
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x000104994094();
      _objc_release(puVar3);
      lVar4 = *(long *)(puVar2 + 0x10);
      _swift_bridgeObjectRelease(puVar2);
      lVar1 = _DAT_11309cab0;
      if (lVar4 != 0) {
        _swift_beginAccess(unaff_x20 + _DAT_11309cab0,auStack_48,0,0);
        uVar5 = *(ulong *)(unaff_x20 + lVar1);
        if (uVar5 != 0) {
          if ((uVar5 & 0xc000000000000001) == 0) {
            uVar6 = *(ulong *)(uVar5 + 0x10);
            _swift_bridgeObjectRetain(uVar5);
          }
          else {
            uVar6 = uVar5;
            if (-1 < (long)uVar5) {
              uVar6 = uVar5 & 0xffffffffffffff8;
            }
            _swift_bridgeObjectRetain(uVar5);
            __ss10__CocoaSetV5countSivg();
          }
          if (uVar6 != 0) {
            _swift_bridgeObjectRetain(param_1);
            uVar6 = uVar5;
            FUN_104902d28(uVar5,param_1);
            _swift_bridgeObjectRelease(uVar5);
            return uVar6;
          }
          _swift_bridgeObjectRelease(uVar5);
        }
      }
    }
  }
  _swift_bridgeObjectRetain(param_1);
  return param_1;
}



/* Entry: 1048ffc7c; end: 1048ffc87; -[FBSDKLoginManager getRecentlyGrantedPermissionsFrom:] */

void FUN_1048ffc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  FUN_1048f07b4(0);
  uVar2 = 0x11309c860;
  func_0x0001049055f4(0x11309c860,FUN_1048f07b4,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_1048ff9f8(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  uVar4 = uVar3;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(uVar3,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1048ffc88; end: 1048ffc93; -[FBSDKLoginManager getRecentlyDeclinedPermissionsFrom:] */

void FUN_1048ffc88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  FUN_1048f07b4(0);
  uVar2 = 0x11309c860;
  func_0x0001049055f4(0x11309c860,FUN_1048f07b4,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain(param_1);
  uVar3 = param_3;
  (*(code *)0x1048ffb28)(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  uVar4 = uVar3;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(uVar3,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1048ffc94; end: 1048ffd4f;  */

void FUN_1048ffc94(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  FUN_1048f07b4(0);
  uVar2 = 0x11309c860;
  func_0x0001049055f4(0x11309c860,FUN_1048f07b4,PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ(param_3,uVar1,uVar2);
  _objc_retain(param_1);
  uVar3 = param_3;
  (*param_4)(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_3);
  uVar4 = uVar3;
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF(uVar3,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1048ffd50; end: 104900063; -[FBSDKLoginManager storeExpectedNonce:] */

void FUN_1048ffd50(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_1);
  FUN_1048ff384(param_3,param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 104900064; end: 104900083; -[FBSDKLoginManager init] */

void FUN_104900064(void)

{
  func_0x0001048fff44();
  return;
}



/* Entry: 104900084; end: 1049000b7;  */

void FUN_104900084(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049000b8; end: 10490015b; -[FBSDKLoginManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049000b8(long param_1)

{
  func_0x000104905304(param_1 + _DAT_11309ca98,0x11309caa0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11309caa8));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11309cae8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11309cab0));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11309cab8));
  func_0x000104905304(param_1 + _DAT_11309cad0,0x11309c518);
  func_0x000104905304(param_1 + _DAT_11309cad8,0x11309cae0);
  return;
}



/* Entry: 10490015c; end: 10490017b;  */

void FUN_10490015c(void)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)();
  return;
}



/* Entry: 10490017c; end: 10490019f; +[FBSDKLoginManager makeOpener] */

void FUN_10490017c(undefined8 param_1)

{
  _swift_getObjCClassMetadata();
  _objc_allocWithZone();
  _objc_msgSend(param_1,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1049001a0; end: 1049001b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1049001a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_210 [8];
  code *pcStack_208;
  ulong *puStack_200;
  ulong *puStack_1f8;
  ulong *puStack_1f0;
  ulong *puStack_1e8;
  undefined1 auStack_1d8 [24];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364(0x11309c5e0,param_5);
  puVar7 = auStack_210 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  puVar10 = puVar7 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x00010490540c(param_2,puVar7,0x11309c5e0);
  puVar2 = puVar7;
  (**(code **)(lVar12 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000104905304(puVar7,0x11309c5e0);
    return 0;
  }
  puVar11 = puVar10;
  (**(code **)(lVar12 + 0x20))(puVar10,puVar7,lVar1);
  __s10Foundation3URLV6schemeSSSgvg();
  if (puVar7 != (undefined1 *)0x0) {
    puVar3 = puVar11;
    puVar2 = puVar7;
    __s10Foundation3URLV4hostSSSgvg();
    if (puVar2 != (undefined1 *)0x0) {
      uStack_e0 = 0x6266;
      uStack_d8 = 0xe200000000000000;
      puVar13 = &UNK_10dd47ba0;
      puStack_1f0 = (ulong *)puVar3;
      puStack_1e8 = (ulong *)puVar11;
      _swift_getKeyPath();
      puVar11 = puVar13;
      FUN_1048f8990();
      _swift_release(puVar13);
      if (puVar11 == (undefined *)0x0) {
LAB_1049048c0:
        puVar11 = (undefined *)0x0;
        puVar13 = (undefined *)0xe000000000000000;
      }
      else {
        puVar3 = puVar11;
        puVar13 = PTR_s_appID_11259ee40;
        _objc_msgSend(puVar11,PTR_s_appID_11259ee40);
        _objc_retainAutoreleasedReturnValue();
        _swift_unknownObjectRelease(puVar11);
        if (puVar3 == (undefined *)0x0) goto LAB_1049048c0;
        puVar11 = puVar3;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(puVar3);
        _objc_release(puVar3);
      }
      __sSS6appendyySSF(puVar11,puVar13);
      _swift_bridgeObjectRelease(puVar13);
      uVar8 = uStack_d8;
      uVar4 = uStack_e0;
      __sSS9hasPrefixySbSSF(uStack_e0,uStack_d8,puStack_1e8,puVar7);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(puVar7);
      puVar7 = puVar2;
      if ((uVar4 & 1) != 0) {
        if ((puStack_1f0 == (ulong *)0x7a69726f68747561) &&
           (puVar2 == (undefined1 *)0xe900000000000065)) {
          _swift_bridgeObjectRelease(0xe900000000000065);
        }
        else {
          puVar5 = puStack_1f0;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (puStack_1f0,puVar2,0x7a69726f68747561,0xe900000000000065,0);
          _swift_bridgeObjectRelease(puVar2);
          if (((ulong)puVar5 & 1) == 0) goto LAB_104904958;
        }
        lVar6 = _DAT_11309cad0;
        _swift_beginAccess(unaff_x20 + _DAT_11309cad0,auStack_1d8,0,0);
        func_0x00010490540c(unaff_x20 + lVar6,&uStack_1c0,0x11309c518);
        if (uStack_1c0 == 0) {
          FUN_1048f97e0(&uStack_150);
          if (uStack_1c0 != 0) {
            func_0x000104905304(&uStack_1c0,0x11309c518);
          }
        }
        else {
          uStack_108 = uStack_178;
          uStack_110 = uStack_180;
          uStack_f8 = uStack_168;
          uStack_100 = uStack_170;
          uStack_e8 = uStack_158;
          lStack_f0 = lStack_160;
          uStack_148 = uStack_1b8;
          uStack_150 = uStack_1c0;
          uStack_138 = uStack_1a8;
          uStack_140 = uStack_1b0;
          uStack_128 = uStack_198;
          lStack_130 = lStack_1a0;
          uStack_118 = uStack_188;
          uStack_120 = uStack_190;
        }
        if (uStack_150 != 0) {
          uStack_98 = uStack_108;
          uStack_a0 = uStack_110;
          uStack_88 = uStack_f8;
          uStack_90 = uStack_100;
          uStack_78 = uStack_e8;
          lStack_80 = lStack_f0;
          uStack_d8 = uStack_148;
          uStack_e0 = uStack_150;
          uStack_c8 = uStack_138;
          uStack_d0 = uStack_140;
          uStack_b8 = uStack_128;
          lStack_c0 = lStack_130;
          uStack_a8 = uStack_118;
          uStack_b0 = uStack_120;
          puVar3 = puVar10;
          FUN_1049113a8();
          puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
          if (puVar3 == (undefined *)0x0) {
            puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
            _swift_retain(PTR___swiftEmptyArrayStorage_11034f1c8);
            func_0x000100214a84();
            _swift_release(puVar11);
          }
          FUN_104904df4(&uStack_b0,&uStack_1c0);
          puVar5 = &uStack_1c0;
          func_0x0001000a8868(puVar5,uStack_1a8);
          lVar6 = lStack_80;
          puVar11 = PTR_s_appID_11259ee40;
          puStack_1e8 = puVar5;
          _objc_msgSend(lStack_80,PTR_s_appID_11259ee40);
          _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            lVar14 = 0;
            puVar11 = (undefined *)0xe000000000000000;
          }
          else {
            lVar14 = lVar6;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(lVar6);
          }
          (**(code **)(lStack_1a0 + 8))(&uStack_150,puVar3,lVar14,puVar11,uStack_1a8,lStack_1a0);
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(puVar3);
          func_0x000104905340(&uStack_1c0);
          lVar6 = lStack_130;
          puStack_1e8 = (ulong *)uStack_138;
          puVar5 = &uStack_150;
          uVar8 = uStack_138;
          func_0x0001000a8868();
          puStack_1f0 = puVar5;
          func_0x0001048ffdbc();
          uVar9 = uVar8;
          puStack_1f8 = puVar5;
          func_0x0001048ffe80();
          puVar11 = &UNK_1107b7468;
          puStack_200 = puVar5;
          _swift_allocObject(&UNK_1107b7468,0x18,7);
          *(long *)(puVar11 + 0x10) = unaff_x20;
          pcStack_208 = *(code **)(lVar6 + 0x10);
          _objc_retain(unaff_x20);
          (*pcStack_208)(puStack_1f8,uVar8,puStack_200,uVar9,FUN_104905360,puVar11,puStack_1e8,lVar6
                        );
          _swift_release(puVar11);
          _swift_bridgeObjectRelease(uVar9);
          _swift_bridgeObjectRelease(uVar8);
          FUN_1048ff384(0,0);
          FUN_1048ff568(0);
          (**(code **)(lVar12 + 8))(puVar10,lVar1);
          FUN_10490113c(&uStack_e0);
          func_0x000104905340(&uStack_150);
          return 1;
        }
        func_0x000104905304(&uStack_150,0x11309c518);
        goto LAB_104904988;
      }
    }
    _swift_bridgeObjectRelease(puVar7);
  }
LAB_104904958:
  lVar6 = _DAT_11309cac0;
  _swift_beginAccess(unaff_x20 + _DAT_11309cac0,&uStack_e0,0,0);
  if (*(char *)(unaff_x20 + lVar6) == '\x02') {
    FUN_1048fb040();
  }
LAB_104904988:
  (**(code **)(lVar12 + 8))(puVar10,lVar1);
  return 0;
}



/* Entry: 1049001b4; end: 10490030b; -[FBSDKLoginManager application:openURL:sourceApplication:annotation:] */

uint FUN_1049001b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = 0x11309c5e0;
  func_0x0001048db364();
  lVar1 = (long)&uStack_60 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_4 == 0) {
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  else {
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar1,param_4);
    lVar2 = 0;
    __s10Foundation3URLVMa();
  }
  uVar3 = (ulong)(param_4 == 0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar1,uVar3,1);
  uVar4 = 0;
  if (param_5 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar4 = uVar3;
  }
  if (param_6 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    _objc_retain(param_3);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_6);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_60);
    _swift_unknownObjectRelease(param_6);
  }
  lVar2 = lVar1;
  func_0x000104904748(lVar1,&uStack_60);
  _objc_release(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(uVar4);
  func_0x000104905304(&uStack_60,0x11309c428);
  func_0x000104905304(lVar1,0x11309c5e0);
  return (uint)lVar2 & 1;
}


