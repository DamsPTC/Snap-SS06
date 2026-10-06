/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100010000; end: 1000100c3;  */

void FUN_100010000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Entry: 1000100c4; end: 1000101f3;  */

void FUN_1000100c4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_release_x8(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,lStack_38);
    _swift_bridgeObjectRelease(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1000101f4; end: 1000101f7;  */

uint FUN_1000101f4(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  plVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar2 == lVar4 && param_2 == plVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,param_2,lVar4,plVar3,0);
    uVar1 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(plVar3);
  return uVar1 & 1;
}



/* Entry: 1000101f8; end: 10001027b;  */

uint FUN_1000101f8(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  plVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar2 == lVar4 && param_2 == plVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,param_2,lVar4,plVar3,0);
    uVar1 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(plVar3);
  return uVar1 & 1;
}



/* Entry: 10001027c; end: 100010297;  */

void FUN_10001027c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 100010298; end: 1000102db;  */

void FUN_100010298(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1000102dc; end: 100010303;  */

void FUN_1000102dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100010304; end: 10001036f;  */

void FUN_100010304(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x10005efa0;
  FUN_100010574(0x10005efa0,&UNK_100040ad4);
  uVar2 = 0x10005efa8;
  FUN_100010574(0x10005efa8,&UNK_100040a74);
                    /* WARNING: Could not recover jumptable at 0x00010003af60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_100050b60
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_100050a40);
  return;
}



/* Entry: 100010370; end: 10001039b;  */

long FUN_100010370(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10001039c; end: 1000104e7;  */

void FUN_10001039c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}



/* Entry: 1000104e8; end: 10001052b;  */

void FUN_1000104e8(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10001052c; end: 100010573;  */

void FUN_10001052c(void)

{
  FUN_100010574(0x10005ef88,&UNK_100040a38);
  return;
}



/* Entry: 100010574; end: 1000105b3;  */

void FUN_100010574(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000100010440(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1000105b4; end: 1000105d7;  */

void FUN_1000105b4(void)

{
  FUN_100010574(0x10005ef98,&UNK_100040aa8);
  return;
}



/* Entry: 1000105d8; end: 10001064f;  */

undefined8 FUN_1000105d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 100010650; end: 1000106bf;  */

undefined1 * FUN_100010650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,param_1);
  puVar2 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Entry: 1000106c0; end: 1000106f7;  */

void FUN_1000106c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1000106f8; end: 10001078b; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraFeatureLenses onTap] */

void FUN_1000106f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,7);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x17,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 10001078c; end: 1000107d7;  */

void FUN_10001078c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 1000107d8; end: 1000107e7;  */

undefined8 FUN_1000107d8(void)

{
  return 0x207;
}



/* Entry: 1000107e8; end: 10001087b; -[_TtC28SnapchatCaptureExtension_lib27LockedCameraFeatureMemories onTap] */

void FUN_1000107e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,6);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x18,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 10001087c; end: 1000108c7;  */

void FUN_10001087c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 1000108c8; end: 1000108eb;  */

undefined8 FUN_1000108c8(void)

{
  return 0x74735f74736f6867;
}



/* Entry: 1000108ec; end: 10001097f; -[_TtC28SnapchatCaptureExtension_lib26LockedCameraFeatureProfile onTap] */

void FUN_1000108ec(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,4);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x13,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 100010980; end: 1000109cb;  */

void FUN_100010980(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 1000109cc; end: 1000109db;  */

undefined8 FUN_1000109cc(void)

{
  return 0x192;
}



/* Entry: 1000109dc; end: 1000109df; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraFeatureSearch onTap] */

void FUN_1000109dc(void)

{
  return;
}



/* Entry: 1000109e0; end: 100010a2b;  */

void FUN_1000109e0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 100010a2c; end: 100010afb;  */

long FUN_100010a2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = unaff_x20[3];
  lVar2 = lVar3;
  if (lVar3 == 0) {
    (**(code **)(*unaff_x20 + 0x78))();
    uVar1 = 0;
    FUN_10001151c(0);
    _objc_allocWithZone();
    FUN_100010f3c(param_1,param_2,param_3,uVar1);
    func_0x00010003d440();
    _objc_allocWithZone(PTR__OBJC_CLASS___UITapGestureRecognizer_1000504a8);
    func_0x00010003c420();
    lVar2 = param_1;
    func_0x00010003b7e0(param_1);
    _objc_release_x21();
    unaff_x20[3] = param_1;
    _objc_retain_x20();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 100010afc; end: 100010b0b;  */

undefined8 FUN_100010afc(void)

{
  return 0;
}



/* Entry: 100010b0c; end: 100010b0f; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraSimpleFeature onTap] */

void FUN_100010b0c(void)

{
  return;
}



/* Entry: 100010b10; end: 100010b5b;  */

void FUN_100010b10(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 100010b5c; end: 100010bb3;  */

void FUN_100010b5c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    FUN_100010a2c();
    FUN_10001c6c0();
    _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100010bb4; end: 100010c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100010bb4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_10005f468;
  lVar3 = *(long *)(unaff_x20 + _DAT_10005f468);
  lVar2 = lVar3;
  if (lVar3 == 0) {
    lVar2 = unaff_x20;
    FUN_100010c14();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release_x21();
    lVar3 = 0;
  }
  _objc_retain_x8(lVar3);
  return lVar2;
}



/* Entry: 100010c14; end: 100010f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100010c14(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar2 = 0;
  func_0x000100023754(0);
  _objc_allocWithZone();
  func_0x00010003c340(0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d440();
  puVar1 = (undefined8 *)(param_1 + _DAT_10005f460);
  if (*(char *)(puVar1 + 2) == '\0') {
    _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
    func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (*(char *)(puVar1 + 2) != '\x01') goto LAB_100010cf0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(*puVar1,puVar1[1]);
    _objc_opt_self(PTR__OBJC_CLASS___UIImage_100050440);
    func_0x00010003c140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x21();
  }
  _objc_retain_x20();
LAB_100010cf0:
  puVar3 = PTR__OBJC_CLASS___UIImageView_100050448;
  _objc_allocWithZone();
  func_0x00010003c360();
  _objc_release_x20();
  _objc_retain_x21();
  func_0x00010003d440();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d3c0(puVar3);
  _objc_release_x22();
  func_0x00010003cd40(puVar3);
  func_0x00010003b8e0(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar5 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x18) = 9;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  puVar6 = puVar3;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x24();
  _objc_release_x25();
  *(undefined **)(lVar5 + 0x20) = puVar6;
  puVar6 = puVar3;
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x24();
  _objc_release_x25();
  *(undefined **)(lVar5 + 0x28) = puVar6;
  puVar6 = puVar3;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd40(0x4020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x24();
  _objc_release_x25();
  *(undefined **)(lVar5 + 0x30) = puVar6;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x21();
  func_0x00010003bb40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  func_0x00010003bd40(0xc020000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x24();
  _objc_release_x25();
  *(undefined **)(lVar5 + 0x38) = puVar3;
  uVar7 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar7);
  _swift_release(lVar5);
  func_0x00010003b700(puVar4);
  _objc_release_x24();
  _objc_release_x21();
  _objc_release_x20();
  return uVar2;
}



/* Entry: 100010f3c; end: 10001120b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100010f3c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff90;
  *(undefined8 *)(unaff_x20 + _DAT_10005f468) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005f460);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(puVar1 + 2) = param_3;
  FUN_10001151c();
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010003d440();
  FUN_100010bb4();
  func_0x00010003b8e0(puVar3);
  _objc_release_x19();
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar5 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x18) = 0xd;
  *(undefined8 *)(lVar5 + 0x10) = 6;
  puVar6 = puVar3;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined1 **)(lVar5 + 0x20) = puVar6;
  puVar6 = puVar3;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined1 **)(lVar5 + 0x28) = puVar6;
  lVar2 = _DAT_10005f468;
  uVar7 = *(undefined8 *)(puVar3 + _DAT_10005f468);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar5 + 0x38) = uVar7;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar5 + 0x40) = uVar7;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar5 + 0x48) = uVar7;
  uVar7 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar7);
  _swift_release(lVar5);
  func_0x00010003b700(puVar4);
  _objc_release_x20();
  _objc_release_x22();
  return puVar3;
}



/* Entry: 10001120c; end: 10001126f; -[_TtC28SnapchatCaptureExtension_lib31LockedCameraSimpleFeatureButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001120c(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_10005f468) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraSimpleFeatureButton.swift",0x42,2,0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100011270);
  (*pcVar1)();
}



/* Entry: 100011270; end: 10001144b;  */

void FUN_100011270(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  
  FUN_10001151c();
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_layoutSubviews_10005b010);
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bde0();
  _objc_release_x21();
  uVar3 = 0;
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  func_0x00010003bb60();
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_100050418;
  _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_100050418);
  func_0x00010003bae0(uVar3,param_2,param_3,param_4,param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = unaff_x20;
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b6a0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d280(uVar3);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d2a0(0x402e000000000000);
  _objc_release_x22();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d220(unaff_x20);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d260(0x3e19999a);
  _objc_release_x22();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d240(0,0);
  _objc_release_x19();
  _objc_release_x21();
  _objc_release_x20();
  return;
}



/* Entry: 10001144c; end: 10001147f; -[_TtC28SnapchatCaptureExtension_lib31LockedCameraSimpleFeatureButton layoutSubviews] */

void FUN_10001144c(undefined8 param_1)

{
  _objc_retain();
  FUN_100011270();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100011480; end: 1000114db; -[_TtC28SnapchatCaptureExtension_lib31LockedCameraSimpleFeatureButton initWithFrame:] */

void FUN_100011480(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraSimpleFeatureButton",0x3c,"init(frame:)",0xc,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000114ac);
  (*pcVar1)();
}



/* Entry: 1000114dc; end: 10001151b; -[_TtC28SnapchatCaptureExtension_lib31LockedCameraSimpleFeatureButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000114dc(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_10005f460);
  func_0x000100011568(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005f468));
  return;
}



/* Entry: 10001151c; end: 10001153b;  */

void FUN_10001151c(void)

{
  _objc_opt_self(&PTR_PTR_10005bc98);
  return;
}



/* Entry: 10001153c; end: 10001157f;  */

undefined8 * FUN_10001153c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001153c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100011580; end: 10001161b;  */

undefined8 * FUN_100011580(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001153c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10001161c; end: 10001162f;  */

void FUN_10001161c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100011630; end: 100011673;  */

undefined8 * FUN_100011630(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100011568(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100011674; end: 100011743;  */

int FUN_100011674(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100011744; end: 100011793;  */

void FUN_100011744(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext2(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 100011794; end: 1000117d7;  */

void FUN_100011794(void)

{
  undefined *puVar1;
  
  if (puRam0000000100060340 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000100060340 = puVar1;
  return;
}



/* Entry: 1000117d8; end: 1000117df;  */

undefined8 * FUN_1000117d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001153c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1000117e0; end: 10001189b;  */

long FUN_1000117e0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = 0x10005f5c8;
    FUN_100011744(0x10005f5c8,&UNK_100040d10);
    _swift_allocObject();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(lVar2 + 0x18) = 8;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    *(undefined8 *)(lVar2 + 0x28) = uVar3;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(lVar2 + 0x38) = uVar9;
    *(undefined8 *)(lVar2 + 0x30) = uVar8;
    *(undefined8 *)(lVar2 + 0x48) = uVar7;
    *(undefined8 *)(lVar2 + 0x40) = uVar6;
    *(undefined8 *)(lVar2 + 0x58) = uVar4;
    *(undefined8 *)(lVar2 + 0x50) = uVar3;
    *(long *)(unaff_x20 + 0x18) = lVar2;
    _swift_unknownObjectRetain(uVar5);
    _swift_unknownObjectRetain(uVar8);
    _swift_unknownObjectRetain(uVar6);
    _swift_unknownObjectRetain(uVar3);
    _swift_retain(lVar2);
    lVar1 = 0;
  }
  _swift_bridgeObjectRetain(lVar1);
  return lVar2;
}



/* Entry: 10001189c; end: 100011967;  */

undefined * FUN_10001189c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x70);
  puVar1 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIStackView_1000504a0;
    _objc_allocWithZone();
    func_0x00010003c340(0,0,0,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003d440();
    func_0x00010003cc40(puVar2,param_2,1);
    puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
    _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
    func_0x00010003bc40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003cc60(puVar2,param_2,puVar1);
    _objc_release_x19();
    _objc_release_x21();
    puVar1 = puVar2;
    func_0x00010003d2c0(0,puVar2);
    *(undefined **)(unaff_x20 + 0x70) = puVar2;
    _objc_retain_x19();
    _objc_release_x21();
    puVar2 = (undefined *)0x0;
  }
  _objc_retain_x8(puVar2);
  return puVar1;
}



/* Entry: 100011968; end: 100011abb;  */

void FUN_100011968(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_10001189c();
    FUN_10001c6c0();
    _objc_release_x22();
    FUN_1000117e0();
    lVar8 = *(long *)(lVar3 + 0x10);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar3 + 0x28);
      do {
        lVar1 = plVar9[-1];
        lVar2 = *plVar9;
        lVar4 = lVar1;
        _swift_getObjectType(lVar1);
        pcVar10 = *(code **)(lVar2 + 8);
        lVar5 = lVar1;
        _swift_unknownObjectRetain(lVar1);
        _objc_retain_x25();
        (*pcVar10)(lVar4,lVar2);
        func_0x00010003b7c0(lVar5);
        _swift_unknownObjectRelease(lVar1);
        _objc_release_x25();
        _objc_release_x23();
        plVar9 = plVar9 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    _swift_bridgeObjectRelease(lVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar3 = *(long *)(unaff_x20 + 0x68);
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar3 + 8);
    uVar6 = uVar7;
    _objc_retain_x23();
    (*pcVar10)(uVar7,lVar3);
    func_0x00010003b7c0(uVar6);
    _objc_release_x19();
    _objc_release_x23();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(uVar7);
    return;
  }
  return;
}



/* Entry: 100011abc; end: 100011b4f;  */

void FUN_100011abc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 100011b50; end: 100011b53;  */

void FUN_100011b50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    FUN_10001189c();
    FUN_10001c6c0();
    _objc_release_x22();
    FUN_1000117e0();
    lVar8 = *(long *)(lVar3 + 0x10);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar3 + 0x28);
      do {
        lVar1 = plVar9[-1];
        lVar2 = *plVar9;
        lVar4 = lVar1;
        _swift_getObjectType(lVar1);
        pcVar10 = *(code **)(lVar2 + 8);
        lVar5 = lVar1;
        _swift_unknownObjectRetain(lVar1);
        _objc_retain_x25();
        (*pcVar10)(lVar4,lVar2);
        func_0x00010003b7c0(lVar5);
        _swift_unknownObjectRelease(lVar1);
        _objc_release_x25();
        _objc_release_x23();
        plVar9 = plVar9 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    _swift_bridgeObjectRelease(lVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    lVar3 = *(long *)(unaff_x20 + 0x68);
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar3 + 8);
    uVar6 = uVar7;
    _objc_retain_x23();
    (*pcVar10)(uVar7,lVar3);
    func_0x00010003b7c0(uVar6);
    _objc_release_x19();
    _objc_release_x23();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(uVar7);
    return;
  }
  return;
}



/* Entry: 100011b54; end: 100011c7b;  */

void FUN_100011b54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
  func_0x0001000137cc(0);
  _swift_allocObject();
  _objc_retain_x21();
  _objc_retain();
  uVar1 = param_2;
  FUN_10001360c();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined ***)(unaff_x20 + 0x28) = &PTR_DAT_100051450;
  func_0x0001000135b8(0);
  _swift_allocObject();
  FUN_100013334();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined ***)(unaff_x20 + 0x38) = &PTR_DAT_100051410;
  uVar1 = 0;
  func_0x000100013ccc();
  _swift_allocObject();
  FUN_100013aa0();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar1;
  *(undefined ***)(unaff_x20 + 0x48) = &PTR_DAT_1000514d0;
  uVar1 = 0;
  func_0x000100013a4c();
  _swift_allocObject();
  FUN_100013820();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined ***)(unaff_x20 + 0x58) = &PTR_DAT_100051490;
  uVar1 = 0;
  func_0x0001000132e0();
  _swift_allocObject();
  FUN_1000130b4();
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined ***)(unaff_x20 + 0x68) = &PTR_DAT_1000513d0;
  return;
}



/* Entry: 100011c7c; end: 100011c87;  */

void FUN_100011c7c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc80(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  puRam000000010005f638 = puVar1;
  return;
}



/* Entry: 100011c88; end: 100011cdf;  */

void FUN_100011c88(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc80(0x3fc999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  puRam000000010005f648 = puVar1;
  return;
}



/* Entry: 100011ce0; end: 100011ceb;  */

void FUN_100011ce0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc80(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  puRam000000010005f658 = puVar1;
  return;
}



/* Entry: 100011cec; end: 100011e4f;  */

void FUN_100011cec(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self();
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc80(0x3fb999999999999a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  *param_2 = puVar1;
  return;
}



/* Entry: 100011e50; end: 100012017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100011e50(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar3 = 0;
  FUN_100022c40();
  _objc_allocWithZone();
  func_0x00010003c340(0,0,0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d440();
  auVar7 = NEON_fmov(0x4020000000000000,8);
  puVar1 = (undefined8 *)(lVar3 + _DAT_1000602e8);
  puVar1[1] = auVar7._8_8_;
  *puVar1 = auVar7._0_8_;
  if (*(char *)(param_1 + _DAT_10005f5e8) == '\x01') {
    FUN_100012018();
    func_0x00010003c480(lVar3);
    _objc_release_x21();
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
    _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
    lVar5 = 0x10005fba0;
    FUN_100011744(0x10005fba0,&UNK_100040c80);
    _swift_allocObject();
    *(undefined8 *)(lVar5 + 0x18) = 5;
    *(undefined8 *)(lVar5 + 0x10) = 2;
    lVar2 = _DAT_10005f5f8;
    uVar6 = *(undefined8 *)(param_1 + _DAT_10005f5f8);
    func_0x00010003bc00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bc00(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x23();
    _objc_release_x24();
    *(undefined8 *)(lVar5 + 0x20) = uVar6;
    uVar6 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010003bc20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010003bc20(lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x19();
    func_0x00010003bd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release_x20();
    _objc_release_x23();
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    uVar6 = 0;
    FUN_100011794(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar5,uVar6);
    _swift_release(lVar5);
    func_0x00010003b700(puVar4);
  }
  _objc_release_x23();
  return lVar3;
}



/* Entry: 100012018; end: 10001202b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100012018(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_10005f5f8;
  puVar2 = &DAT_10005f5f8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_10005f5f8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    FUN_10001202c();
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    _objc_retain();
    _objc_release_x21();
    puVar3 = (undefined *)0x0;
    puVar4 = puVar2;
  }
  _objc_retain_x8(puVar3);
  return puVar4;
}



/* Entry: 10001202c; end: 1000123ef;  */

undefined * FUN_10001202c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c340(0,0,0,0);
  func_0x00010003d440();
  _objc_opt_self(PTR__OBJC_CLASS___UIBlurEffect_100050420);
  func_0x00010003bf40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIVisualEffectView_1000504c8;
  _objc_allocWithZone();
  func_0x00010003c320();
  _objc_release_x20();
  _objc_retain_x21();
  func_0x00010003d440();
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d000();
  _objc_release_x21();
  if (lRam000000010005f640 != -1) {
    _swift_once(0x10005f640,FUN_100011c88);
  }
  func_0x00010003cc60(puVar2);
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0x402a000000000000);
  _objc_release_x21();
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003ccc0(0x3fe0000000000000);
  _objc_release_x21();
  puVar3 = puVar2;
  func_0x00010003c640(puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lRam000000010005f650 != -1) {
    _swift_once(0x10005f650,FUN_100011ce0);
  }
  func_0x00010003b680(uRam000000010005f658);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cca0(puVar3);
  _objc_release_x21();
  _objc_release_x22();
  func_0x00010003b8e0(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar4 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar4 + 0x18) = 0xd;
  *(undefined8 *)(lVar4 + 0x10) = 6;
  puVar5 = puVar2;
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined **)(lVar4 + 0x20) = puVar5;
  puVar5 = puVar2;
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined **)(lVar4 + 0x28) = puVar5;
  puVar5 = puVar2;
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined **)(lVar4 + 0x30) = puVar5;
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x20();
  func_0x00010003bb40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  _objc_release_x24();
  *(undefined **)(lVar4 + 0x38) = puVar2;
  puVar2 = puVar1;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4040000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined **)(lVar4 + 0x40) = puVar2;
  puVar2 = puVar1;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x403a000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x23();
  *(undefined **)(lVar4 + 0x48) = puVar2;
  uVar6 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar6);
  _swift_release(lVar4);
  func_0x00010003b700(puVar3);
  _objc_release_x20();
  _objc_release_x23();
  return puVar1;
}



/* Entry: 1000123f0; end: 100012403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1000123f0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_10005f600;
  puVar2 = &DAT_10005f600;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_10005f600);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    FUN_10001245c();
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    _objc_retain();
    _objc_release_x21();
    puVar3 = (undefined *)0x0;
    puVar4 = puVar2;
  }
  _objc_retain_x8(puVar3);
  return puVar4;
}



/* Entry: 100012404; end: 10001245b;  */

long * FUN_100012404(long *param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  
  lVar2 = *param_1;
  plVar1 = *(long **)(unaff_x20 + lVar2);
  plVar3 = plVar1;
  if (plVar1 == (long *)0x0) {
    (*param_2)();
    *(long **)(unaff_x20 + lVar2) = param_1;
    _objc_retain();
    _objc_release_x21();
    plVar1 = (long *)0x0;
    plVar3 = param_1;
  }
  _objc_retain_x8(plVar1);
  return plVar3;
}



/* Entry: 10001245c; end: 100012687;  */

undefined * FUN_10001245c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1000504b8;
  _objc_allocWithZone();
  func_0x00010003c340(0,0,0,0);
  func_0x00010003d440();
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003d8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cc60(puVar1);
  _objc_release_x20();
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d000();
  _objc_release_x20();
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cd60(0x4031000000000000);
  _objc_release_x20();
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003ccc0(0x3fe0000000000000);
  _objc_release_x20();
  puVar2 = puVar1;
  func_0x00010003c640(puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (lRam000000010005f630 != -1) {
    _swift_once(0x10005f630,FUN_100011c7c);
  }
  func_0x00010003b680(uRam000000010005f638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cca0(puVar2);
  _objc_release_x20();
  _objc_release_x21();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar3 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  puVar4 = puVar1;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4041000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined **)(lVar3 + 0x28) = puVar4;
  uVar5 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar5);
  _swift_release(lVar3);
  func_0x00010003b700(puVar2);
  _objc_release_x22();
  return puVar1;
}



/* Entry: 100012688; end: 100012a3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100012688(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff90;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_10005f5d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005f5f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005f5f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005f600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_10005f5e0) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_10005f5d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_10005f5e8) = param_2;
  FUN_100013074();
  _objc_msgSendSuper2(0,0,0,0,&stack0xffffffffffffff90,PTR_s_initWithFrame__10005b5a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain();
  puVar4 = puVar3;
  func_0x00010003d440();
  func_0x000100011df0();
  puVar5 = PTR__OBJC_CLASS___UIImage_100050440;
  _objc_opt_self();
  func_0x00010003d5a0(0x4038000000000000,0x4038000000000000);
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(puVar4 + _DAT_1000602b0) = puVar5;
  _objc_retain();
  _objc_release_x22();
  FUN_1000219a8();
  func_0x00010003cf60();
  _objc_release_x22();
  func_0x00010003d0a0(puVar4);
  _objc_release_x20();
  _objc_release_x21();
  lVar2 = _DAT_10005f5f0;
  puVar5 = PTR_s_onButtonTap_10005b020;
  lVar6 = *(long *)(puVar3 + _DAT_10005f5f0) + _DAT_1000602d0;
  _swift_unknownObjectWeakAssign(lVar6,puVar3);
  _objc_retain_x20();
  _objc_release_x19();
  *(undefined **)(lVar6 + _DAT_1000602c0) = puVar5;
  _objc_release_x20();
  func_0x00010003b8e0(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar6 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar6 + 0x18) = 0xd;
  *(undefined8 *)(lVar6 + 0x10) = 6;
  puVar4 = puVar3;
  func_0x00010003d8c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined1 **)(lVar6 + 0x20) = puVar4;
  puVar4 = puVar3;
  func_0x00010003c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd80(0x4044000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  *(undefined1 **)(lVar6 + 0x28) = puVar4;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003d720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003cae0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar6 + 0x38) = uVar7;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003c660(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar6 + 0x40) = uVar7;
  uVar7 = *(undefined8 *)(puVar3 + lVar2);
  func_0x00010003bb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bb40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar6 + 0x48) = uVar7;
  uVar7 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,uVar7);
  _swift_release(lVar6);
  func_0x00010003b700(puVar5);
  _objc_release_x19();
  _objc_release_x22();
  return puVar3;
}



/* Entry: 100012a3c; end: 100012c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar3 = PTR__OBJC_CLASS___UIColor_100050430;
  _objc_opt_self(PTR__OBJC_CLASS___UIColor_100050430);
  func_0x00010003bb00();
  _objc_retainAutoreleasedReturnValue();
  bVar2 = *(char *)(unaff_x20 + _DAT_10005f5e8) == '\0';
  uVar1 = 0x3e4ccccd;
  if (bVar2) {
    uVar1 = 0x3e19999a;
  }
  dVar6 = 15.0;
  uVar8 = 0x4020000000000000;
  uVar9 = 0x4020000000000000;
  if (bVar2) {
    uVar9 = 0x402e000000000000;
  }
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bde0();
  _objc_release_x21();
  uVar7 = 0;
  if (dVar6 < 0.0) {
    dVar6 = 0.0;
  }
  func_0x00010003bb60();
  puVar4 = PTR__OBJC_CLASS___UIBezierPath_100050418;
  _objc_opt_self(PTR__OBJC_CLASS___UIBezierPath_100050418);
  func_0x00010003bae0(uVar7,uVar8,param_3,param_4,dVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = unaff_x20;
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b6a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d280(lVar5,param_6,puVar4);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d2a0(uVar9);
  _objc_release_x22();
  lVar5 = unaff_x20;
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003b680(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d220(lVar5,param_6,puVar3);
  _objc_release_x22();
  _objc_release_x23();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d260(uVar1);
  _objc_release_x22();
  func_0x00010003c640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003d240(0,0);
  _objc_release_x19();
  _objc_release_x21();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(unaff_x20);
  return;
}



/* Entry: 100012c38; end: 100012c6b; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraToolbarButton layoutSubviews] */

void FUN_100012c38(undefined8 param_1)

{
  _objc_retain();
  FUN_100012a3c();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(param_1);
  return;
}



/* Entry: 100012c6c; end: 100012cf7; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraToolbarButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012c6c(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_10005f5d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_10005f5f0) = 0;
  *(undefined8 *)(param_1 + _DAT_10005f5f8) = 0;
  *(undefined8 *)(param_1 + _DAT_10005f600) = 0;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x800000010004bd50,
             "SnapchatCaptureExtension_lib/LockedCameraToolbarButton.swift",0x3c,2,0x8b,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100012cf8);
  (*pcVar2)();
}



/* Entry: 100012cf8; end: 100012e1b; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraToolbarButton onButtonTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012cf8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_10005f5d0);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_10005f5d0))[1];
  _objc_retain();
  FUN_100013094(pcVar1,uVar2);
  (*pcVar1)();
  _objc_release_x21();
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100050d48)(uVar2);
    return;
  }
  return;
}



/* Entry: 100012e1c; end: 100012fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012e1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  FUN_1000123f0();
  func_0x00010003d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x19();
  lVar1 = _DAT_10005f600;
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)();
    return;
  }
  func_0x00010003c480();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0;
  _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_1000502f0);
  lVar3 = 0x10005fba0;
  FUN_100011744(0x10005fba0,&UNK_100040c80);
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x18) = 5;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010003bd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release_x22();
  _objc_release_x23();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = 0;
  FUN_100011794(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar4);
  _swift_release(lVar3);
  func_0x00010003b700(puVar2);
  _objc_release_x22();
                    /* WARNING: Could not recover jumptable at 0x00010003cf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000508a0)
            (*(undefined8 *)(unaff_x20 + lVar1),PTR_s_setHidden__10005b8a0,1);
  return;
}



/* Entry: 100012fbc; end: 100013017; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraToolbarButton initWithFrame:] */

void FUN_100012fbc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatCaptureExtension_lib.LockedCameraToolbarButton",0x36,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100012fe8);
  (*pcVar1)();
}



/* Entry: 100013018; end: 100013073; -[_TtC28SnapchatCaptureExtension_lib25LockedCameraToolbarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013018(long param_1)

{
  func_0x0001000130a4(*(undefined8 *)(param_1 + _DAT_10005f5d0),
                      ((undefined8 *)(param_1 + _DAT_10005f5d0))[1]);
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005f5f0));
  _objc_release_x8(*(undefined8 *)(param_1 + _DAT_10005f5f8));
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(*(undefined8 *)(param_1 + _DAT_10005f600));
  return;
}



/* Entry: 100013074; end: 100013093;  */

void FUN_100013074(void)

{
  _objc_opt_self(&PTR_PTR_10005bd78);
  return;
}



/* Entry: 100013094; end: 1000130b3;  */

void FUN_100013094(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010003b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_100050d50)(param_2);
    return;
  }
  return;
}



/* Entry: 1000130b4; end: 100013173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000130b4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  FUN_100013074(0);
  _objc_allocWithZone();
  lVar4 = 0x84;
  FUN_100012688(0x84,1);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  puVar5 = &UNK_1000513f0;
  _swift_allocObject(&UNK_1000513f0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _DAT_10005f5d0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10001332c;
  puVar1[1] = puVar5;
  _objc_retain_x20();
  _swift_retain(puVar5);
  func_0x0001000130a4(uVar2,uVar3);
  _swift_release(puVar5);
  _objc_release_x20();
  return;
}



/* Entry: 100013174; end: 100013227;  */

void FUN_100013174(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    _swift_release();
    FUN_10002e6c4();
    puVar1 = PTR__swift_isaMask_100050d38;
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xf8);
    _objc_retain_x8();
    puVar2 = (undefined8 *)0x3;
    (*pcVar3)(3,3);
    _objc_release_x20();
    FUN_100032230();
    pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
    _objc_retain_x8();
    (*pcVar3)(0x16);
    _objc_release_x20();
  }
  return;
}



/* Entry: 100013228; end: 1000132bb; -[_TtC28SnapchatCaptureExtension_lib39LockedCameraToolbarFeatureExpandToolbar onButtonTap] */

void FUN_100013228(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  FUN_10002e6c4();
  puVar1 = PTR__swift_isaMask_100050d38;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*param_1) + 0xf8);
  _objc_retain_x8();
  puVar2 = (undefined8 *)0x3;
  (*pcVar3)(3,3);
  _objc_release_x20();
  FUN_100032230();
  pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
  _objc_retain_x8();
  (*pcVar3)(0x16,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000508c0)(puVar2);
  return;
}



/* Entry: 1000132bc; end: 1000132ff;  */

void FUN_1000132bc(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 100013300; end: 100013307;  */

void FUN_100013300(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100013308; end: 10001332b;  */

void FUN_100013308(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 10001332c; end: 100013333;  */

void FUN_10001332c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(unaff_x20 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    _swift_release();
    FUN_10002e6c4();
    puVar1 = PTR__swift_isaMask_100050d38;
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xf8);
    _objc_retain_x8();
    puVar2 = (undefined8 *)0x3;
    (*pcVar3)(3,3);
    _objc_release_x20();
    FUN_100032230();
    pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
    _objc_retain_x8();
    (*pcVar3)(0x16);
    _objc_release_x20();
  }
  return;
}



/* Entry: 100013334; end: 100013413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013334(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  FUN_100013074(0);
  _objc_allocWithZone();
  uVar3 = 0x179;
  FUN_100012688(0x179,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x18,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x18,param_1);
  _objc_release_x21();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar4 = &UNK_100051430;
  _swift_allocObject(&UNK_100051430,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_10005f5d0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100013604;
  puVar1[1] = puVar4;
  _objc_retain_x23();
  _swift_retain(puVar4);
  func_0x0001000130a4(uVar3,uVar2);
  _swift_release(puVar4);
  _objc_release_x23();
  return;
}



/* Entry: 100013414; end: 100013467;  */

void FUN_100013414(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100013468();
    _swift_release(param_1);
  }
  return;
}



/* Entry: 100013468; end: 100013563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013468(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  
  lVar4 = unaff_x20 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    uVar1 = (*(byte *)(*(long *)(unaff_x20 + 0x10) + _DAT_10005f5d8) ^ 0xffffffff) & 1;
    uVar5 = (ulong)uVar1;
    *(char *)(*(long *)(unaff_x20 + 0x10) + _DAT_10005f5d8) = (char)uVar1;
    _objc_retain_x8();
    func_0x000100012d64();
    _objc_release_x22();
    uVar3 = *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + _DAT_10005f5d8);
    func_0x00010001a6e8();
    *(undefined1 *)(uVar5 + _DAT_10005fc10) = uVar3;
    _objc_release();
    uVar2 = 0x179;
    if (*(char *)(*(long *)(unaff_x20 + 0x10) + _DAT_10005f5d8) != '\0') {
      uVar2 = 0x17a;
    }
    *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_10005f5e0) = uVar2;
    _objc_retain_x8();
    func_0x000100011d4c();
    _objc_release_x19();
                    /* WARNING: Could not recover jumptable at 0x00010003b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000508c0)(uVar5);
    return;
  }
  return;
}



/* Entry: 100013564; end: 10001358b; -[_TtC28SnapchatCaptureExtension_lib31LockedCameraToolbarFeatureFlash onButtonTap] */

void FUN_100013564(undefined8 param_1)

{
  _swift_retain();
  FUN_100013468();
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100050d48)(param_1);
  return;
}



/* Entry: 10001358c; end: 1000135d7;  */

void FUN_10001358c(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 1000135d8; end: 1000135df;  */

void FUN_1000135d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1000135e0; end: 100013603;  */

void FUN_1000135e0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100013604; end: 10001360b;  */

void FUN_100013604(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    FUN_100013468();
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 10001360c; end: 1000136eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001360c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  FUN_100013074(0);
  _objc_allocWithZone();
  uVar3 = 0x40;
  FUN_100012688(0x40,0);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x18,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x18,param_1);
  _objc_release_x21();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar4 = &UNK_100051470;
  _swift_allocObject(&UNK_100051470,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_10005f5d0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100013818;
  puVar1[1] = puVar4;
  _objc_retain_x23();
  _swift_retain(puVar4);
  func_0x0001000130a4(uVar3,uVar2);
  _swift_release(puVar4);
  _objc_release_x23();
  return;
}



/* Entry: 1000136ec; end: 100013753;  */

void FUN_1000136ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      FUN_10001aac8();
      _objc_release_x20();
    }
    _swift_release(param_1);
  }
  return;
}



/* Entry: 100013754; end: 10001379f; -[_TtC28SnapchatCaptureExtension_lib36LockedCameraToolbarFeatureFlipCamera onButtonTap] */

void FUN_100013754(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    _swift_retain(param_1);
    FUN_10001aac8();
    _objc_release_x20();
                    /* WARNING: Could not recover jumptable at 0x00010003b584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_100050d48)(param_1);
    return;
  }
  return;
}



/* Entry: 1000137a0; end: 1000137eb;  */

void FUN_1000137a0(void)

{
  long unaff_x20;
  
  _objc_release_x8(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010003b47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_100050c90)();
  return;
}



/* Entry: 1000137ec; end: 1000137f3;  */

void FUN_1000137ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003b380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100050930)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1000137f4; end: 100013817;  */

void FUN_1000137f4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003b488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100050c98)();
  return;
}



/* Entry: 100013818; end: 10001381f;  */

void FUN_100013818(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_weakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar2 != 0) {
      FUN_10001aac8();
      _objc_release_x20();
    }
    _swift_release(lVar1);
  }
  return;
}



/* Entry: 100013820; end: 1000138df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013820(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  FUN_100013074(0);
  _objc_allocWithZone();
  lVar4 = 0x69;
  FUN_100012688(0x69,0);
  *(long *)(unaff_x20 + 0x10) = lVar4;
  puVar5 = &UNK_1000514b0;
  _swift_allocObject(&UNK_1000514b0,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _DAT_10005f5d0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_100013a98;
  puVar1[1] = puVar5;
  _objc_retain_x20();
  _swift_retain(puVar5);
  func_0x0001000130a4(uVar2,uVar3);
  _swift_release(puVar5);
  _objc_release_x20();
  return;
}



/* Entry: 1000138e0; end: 100013993;  */

void FUN_1000138e0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (puVar2 != (undefined8 *)0x0) {
    _swift_release();
    FUN_10002e6c4();
    puVar1 = PTR__swift_isaMask_100050d38;
    pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_100050d38 & *(ulong *)*puVar2) + 0xf8);
    _objc_retain_x8();
    puVar2 = (undefined8 *)0x3;
    (*pcVar3)(3,2);
    _objc_release_x20();
    FUN_100032230();
    pcVar3 = *(code **)((*(ulong *)puVar1 & *(ulong *)*puVar2) + 200);
    _objc_retain_x8();
    (*pcVar3)(0x15);
    _objc_release_x20();
  }
  return;
}


