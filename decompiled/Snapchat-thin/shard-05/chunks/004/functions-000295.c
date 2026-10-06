/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103deb71c; end: 103deb7b3; -[AdOpportunityNonFatalConfiguration isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103deb71c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((bRam0000000113010ae0 & 1) == 0) {
    lVar1 = *(long *)(param_1 + _DAT_113010ad8);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      _objc_retain();
      uVar2 = 0xd000000000000023;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1bbbf0);
      func_0x000107c3ebdc(lVar1);
      _objc_release(param_1);
      _objc_release(uVar2);
    }
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 103deb7b4; end: 103deb813; -[AdOpportunityNonFatalConfiguration init] */

void FUN_103deb7b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdCrashLoggingServices.AdOpportunityNonFatalConfiguration",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103deb7e0);
  (*pcVar1)();
}



/* Entry: 103deb814; end: 103deb823; -[AdOpportunityNonFatalConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb814(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113010ad8));
  return;
}



/* Entry: 103deb824; end: 103deb843;  */

void FUN_103deb824(void)

{
  _objc_opt_self(&PTR_PTR_11294d9e8);
  return;
}



/* Entry: 103deb844; end: 103deb8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb844(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010b48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010b50) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103deb8a8; end: 103deb91f; -[AdOpportunityNonFatalReporter initWithCrashLogger:configuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb8a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113010b48) = param_3;
  *(undefined8 *)(param_1 + _DAT_113010b50) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 103deb920; end: 103deba6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb920(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  iVar1 = (int)*(undefined8 *)(unaff_x20 + _DAT_113010b50);
  func_0x000107c49cd8();
  if (iVar1 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_113010b48);
    if ((lVar4 != 0) && ((0x11 < param_1 || ((1L << (param_1 & 0x3f) & 0x220c1U) == 0)))) {
      _swift_unknownObjectRetain(lVar4);
      uVar2 = param_1;
      func_0x000103debbc0(param_1);
      FUN_103debe00(param_1,param_2,param_3,param_4,param_5,param_6);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(param_2);
      func_0x0001044db3fc(0);
      uVar3 = 0;
      func_0x0001044da404(0,0,0,0xc0);
      func_0x000107c5027c(lVar4);
      _swift_unknownObjectRelease(lVar4);
      _objc_release(uVar2);
      _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 103deba6c; end: 103debb27; -[AdOpportunityNonFatalReporter reportOpportunityMissWithMissType:adProductType:adId:adRequestClientId:] */

void FUN_103deba6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
    uVar1 = param_2;
  }
  if (param_6 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_6);
  }
  _objc_retain(param_1);
  FUN_103deb920(param_3,param_4,param_5,uVar1,param_6,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103debb28; end: 103debb87; -[AdOpportunityNonFatalReporter init] */

void FUN_103debb28(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdCrashLoggingServices.AdOpportunityNonFatalReporter",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103debb54);
  (*pcVar1)();
}



/* Entry: 103debb88; end: 103debc0f; -[AdOpportunityNonFatalReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103debb88(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113010b48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113010b50));
  return;
}



/* Entry: 103debc10; end: 103debdff;  */

undefined1  [16] FUN_103debc10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar2 = 0xea00000000007475;
  uVar1 = 0x6f646c6f685f6461;
  switch(param_1) {
  case 1:
    pcVar3 = "no_ad_request_issued";
    goto code_r0x000103debd24;
  case 2:
    auVar8._8_8_ = 0x800000010f1bbe50;
    auVar8._0_8_ = 0xd000000000000016;
    return auVar8;
  case 3:
    pcVar3 = "server_network_error";
code_r0x000103debd24:
    auVar9._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar9._0_8_ = 0xd000000000000014;
    return auVar9;
  case 4:
    pcVar3 = "pending_media_loading";
    goto code_r0x000103debca0;
  case 5:
    pcVar3 = "media_downloading";
    break;
  case 7:
    auVar13._8_8_ = 0xe800000000000000;
    auVar13._0_8_ = 0x706f5f6f6e5f6461;
    return auVar13;
  case 8:
    pcVar3 = "media_load_error";
    goto code_r0x000103debd44;
  case 9:
    auVar15._8_8_ = 0xed0000676e697373;
    auVar15._0_8_ = 0x696d5f616964656d;
    return auVar15;
  case 10:
    auVar7._8_8_ = 0x800000010f1bbdb0;
    auVar7._0_8_ = 0xd000000000000013;
    return auVar7;
  case 0xb:
    auVar14._8_8_ = 0x800000010f1bbd80;
    auVar14._0_8_ = 0xd000000000000020;
    return auVar14;
  case 0xc:
    auVar4._8_8_ = 0x800000010f1bbd60;
    auVar4._0_8_ = 0xd00000000000001e;
    return auVar4;
  case 0xd:
    auVar6._8_8_ = 0xe700000000000000;
    auVar6._0_8_ = 0x6c6c69665f6f6e;
    return auVar6;
  case 0xe:
    pcVar3 = "pending_insertion";
    break;
  case 0xf:
    pcVar3 = "insertion_in_progress";
code_r0x000103debca0:
    auVar5._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar5._0_8_ = 0xd000000000000015;
    return auVar5;
  case 0x10:
    pcVar3 = "insertion_failed";
code_r0x000103debd44:
    auVar10._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    auVar10._0_8_ = 0xd000000000000010;
    return auVar10;
  case 0x11:
    pcVar3 = "miss_type_not_set";
    break;
  default:
    uVar2 = 0xe700000000000000;
    uVar1 = 0x6e776f6e6b6e75;
  case 6:
    auVar11._8_8_ = uVar2;
    auVar11._0_8_ = uVar1;
    return auVar11;
  }
  auVar12._8_8_ = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
  auVar12._0_8_ = 0xd000000000000011;
  return auVar12;
}



/* Entry: 103debe00; end: 103dec11f;  */

undefined1  [16]
FUN_103debe00(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
             ulong param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar7 = 0x30;
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(lVar1 + 0x28) = 0x800000010f1bbca0;
  FUN_103debc10(param_1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  uVar2 = 1;
  func_0x0001000d182c(1,2,1,lVar1);
  *(undefined8 *)(uVar2 + 0x10) = 2;
  *(undefined8 *)(uVar2 + 0x30) = 0x3d6e6f73616572;
  *(undefined8 *)(uVar2 + 0x38) = 0xe700000000000000;
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  uVar5 = *(ulong *)(uVar2 + 0x10);
  uVar6 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar5) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x0001000d182c(uVar6,uVar5 + 1,1,uVar2);
  }
  *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
  lVar1 = uVar6 + uVar5 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = 0x6375646f72506461;
  *(undefined8 *)(lVar1 + 0x28) = 0xee003d6570795474;
  uVar5 = uVar6;
  if (param_4 != 0) {
    uVar2 = param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar2 = param_4 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      __sSS6appendyySSF(param_3,param_4);
      uVar2 = *(ulong *)(uVar6 + 0x10);
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar2) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x0001000d182c(uVar5,uVar2 + 1,1,uVar6);
      }
      *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
      lVar1 = uVar5 + uVar2 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = 0x3d64496461;
      *(undefined8 *)(lVar1 + 0x28) = 0xe500000000000000;
    }
  }
  uVar6 = uVar5;
  if (param_6 != 0) {
    uVar2 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar2 = param_6 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      __ss11_StringGutsV4growyySiF(0x14);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(param_5,param_6);
      uVar2 = *(ulong *)(uVar5 + 0x10);
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001000d182c(uVar6,uVar2 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      lVar1 = uVar6 + uVar2 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = 0xd000000000000012;
      *(undefined8 *)(lVar1 + 0x28) = 0x800000010f1bbcc0;
    }
  }
  uVar7 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = uVar7;
  func_0x00010011d734();
  uVar4 = 0x202c;
  uVar9 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,uVar7,uVar3);
  _swift_bridgeObjectRelease(uVar6);
  auVar10._8_8_ = uVar9;
  auVar10._0_8_ = uVar4;
  return auVar10;
}



/* Entry: 103dec120; end: 103dec13f;  */

void FUN_103dec120(void)

{
  _objc_opt_self(&PTR_PTR_11294daa8);
  return;
}



/* Entry: 103dec140; end: 103dec16f;  */

void FUN_103dec140(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  FUN_103dec488();
  *param_1 = (int)uVar1;
  *(char *)(param_1 + 1) = (char)(uVar1 >> 0x20);
  return;
}



/* Entry: 103dec170; end: 103dec193;  */

void FUN_103dec170(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *param_2 - 0x138bU < 0xfffffffd;
  iVar1 = 0;
  if (!bVar2) {
    iVar1 = *param_2;
  }
  *param_1 = iVar1;
  *(bool *)(param_1 + 1) = bVar2;
  return;
}



/* Entry: 103dec194; end: 103dec253;  */

void FUN_103dec194(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103dec254; end: 103dec2cb; +[ErrorCode adsClientFormatsCore:] */

void FUN_103dec254(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c5253c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec2cc; end: 103dec343; +[ErrorCode adsClientInfra:] */

void FUN_103dec2cc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c52544();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec344; end: 103dec37f; +[ErrorCode adsClientPlatform:] */

void FUN_103dec344(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c52548();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec380; end: 103dec3bb; +[ErrorCode adsClientWebView:] */

void FUN_103dec380(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  func_0x000107c5254c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec3bc; end: 103dec3c7; +[ErrorCode adsClientFormatsCoreCustomCode:] */

void FUN_103dec3bc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  (*(code *)&UNK_10b7ea604)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec3c8; end: 103dec3df; +[ErrorCode adsClientInfraCustomCode:] */

void FUN_103dec3c8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  (*(code *)&SUB_10b7ea684)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec3e0; end: 103dec3eb; +[ErrorCode adsClientPlatformCustomCode:] */

void FUN_103dec3e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  (*(code *)&UNK_10b7ea644)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec3ec; end: 103dec433;  */

undefined * FUN_103dec3ec(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  (*param_2)();
  return puVar1;
}



/* Entry: 103dec434; end: 103dec43f; +[ErrorCode adsClientWebViewCustomCode:] */

void FUN_103dec434(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  (*(code *)&UNK_10b7ea6c4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec440; end: 103dec487;  */

void FUN_103dec440(void)

{
  undefined *puVar1;
  code *in_x3;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_allocWithZone(PTR_PTR_1126b3e90);
  func_0x000107c453e4();
  (*in_x3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103dec488; end: 103dec4b3;  */

undefined8 FUN_103dec488(int param_1)

{
  if (param_1 - 5000U < 0x1b) {
    return *(undefined8 *)(&UNK_10dc97068 + (ulong)(param_1 - 5000U) * 8);
  }
  return 0x100000000;
}



/* Entry: 103dec4b4; end: 103dec4f3;  */

void FUN_103dec4b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96d40;
  _swift_getWitnessTable(&UNK_10dc96d40,&UNK_110713448);
  puRam0000000113010b80 = puVar1;
  return;
}



/* Entry: 103dec4f4; end: 103dec4f7;  */

void FUN_103dec4f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96de0;
  _swift_getWitnessTable(&UNK_10dc96de0,&UNK_110713468);
  puRam0000000113010b88 = puVar1;
  return;
}



/* Entry: 103dec4f8; end: 103dec537;  */

void FUN_103dec4f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96de0;
  _swift_getWitnessTable(&UNK_10dc96de0,&UNK_110713468);
  puRam0000000113010b88 = puVar1;
  return;
}



/* Entry: 103dec538; end: 103dec53b;  */

void FUN_103dec538(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96e80;
  _swift_getWitnessTable(&UNK_10dc96e80,&UNK_110713488);
  puRam0000000113010b90 = puVar1;
  return;
}



/* Entry: 103dec53c; end: 103dec57b;  */

void FUN_103dec53c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96e80;
  _swift_getWitnessTable(&UNK_10dc96e80,&UNK_110713488);
  puRam0000000113010b90 = puVar1;
  return;
}



/* Entry: 103dec57c; end: 103dec57f;  */

void FUN_103dec57c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96f20;
  _swift_getWitnessTable(&UNK_10dc96f20,&UNK_1107134a8);
  puRam0000000113010b98 = puVar1;
  return;
}



/* Entry: 103dec580; end: 103dec5bf;  */

void FUN_103dec580(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010b98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96f20;
  _swift_getWitnessTable(&UNK_10dc96f20,&UNK_1107134a8);
  puRam0000000113010b98 = puVar1;
  return;
}



/* Entry: 103dec5c0; end: 103dec673;  */

undefined1  [16] FUN_103dec5c0(void)

{
  return ZEXT816(0x110713448);
}



/* Entry: 103dec674; end: 103dec6f7;  */

void FUN_103dec674(void)

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



/* Entry: 103dec6f8; end: 103dec713;  */

void FUN_103dec6f8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103dec714; end: 103dec793;  */

undefined1  [16] FUN_103dec714(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  long lStack_18;
  
  lStack_18 = *unaff_x20;
  if (lStack_18 == 0) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x7472617473;
  }
  else if (lStack_18 == 2) {
    uVar3 = 0xe500000000000000;
    uVar2 = 0x6b63696c63;
  }
  else {
    if (lStack_18 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (param_1,&lStack_18,param_1,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dec794);
      (*pcVar1)();
    }
    uVar3 = 0xe300000000000000;
    uVar2 = 0x646e65;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 103dec794; end: 103dec797;  */

void FUN_103dec794(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97140;
  _swift_getWitnessTable(&UNK_10dc97140,&UNK_1107135c8);
  puRam0000000113010ba0 = puVar1;
  return;
}



/* Entry: 103dec798; end: 103dec7d7;  */

void FUN_103dec798(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010ba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97140;
  _swift_getWitnessTable(&UNK_10dc97140,&UNK_1107135c8);
  puRam0000000113010ba0 = puVar1;
  return;
}



/* Entry: 103dec7d8; end: 103dec7db;  */

void FUN_103dec7d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc971e0;
  _swift_getWitnessTable(&UNK_10dc971e0,&UNK_1107135e8);
  puRam0000000113010ba8 = puVar1;
  return;
}



/* Entry: 103dec7dc; end: 103dec81b;  */

void FUN_103dec7dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010ba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc971e0;
  _swift_getWitnessTable(&UNK_10dc971e0,&UNK_1107135e8);
  puRam0000000113010ba8 = puVar1;
  return;
}



/* Entry: 103dec81c; end: 103dec83b;  */

undefined1  [16] FUN_103dec81c(void)

{
  return ZEXT816(0x1107135c8);
}



/* Entry: 103dec83c; end: 103dec88b;  */

void FUN_103dec83c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000113010bb0 != 0) {
    return;
  }
  puVar1 = &UNK_110713608;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000113010bb0 = param_1;
  return;
}



/* Entry: 103dec88c; end: 103dec8b3;  */

bool FUN_103dec88c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103dec8b4; end: 103dec8c3; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices adOpportunityLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bb8));
  return;
}



/* Entry: 103dec8c4; end: 103dec8d3; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices adOpportunityLoggerV2] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec8c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bc0));
  return;
}



/* Entry: 103dec8d4; end: 103dec8e3; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices adDebugNetworkResponseLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec8d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bc8));
  return;
}



/* Entry: 103dec8e4; end: 103dec8f3; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices commonMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec8e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bd0));
  return;
}



/* Entry: 103dec8f4; end: 103dec903; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices adInitMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec8f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bd8));
  return;
}



/* Entry: 103dec904; end: 103dec913; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices serveMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010be0));
  return;
}



/* Entry: 103dec914; end: 103dec923; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices settingsMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec914(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010be8));
  return;
}



/* Entry: 103dec924; end: 103dec933; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices trackMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec924(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bf0));
  return;
}



/* Entry: 103dec934; end: 103dec943; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices mediaMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec934(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010bf8));
  return;
}



/* Entry: 103dec944; end: 103dec953; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices adShake2ReportLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec944(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c18));
  return;
}



/* Entry: 103dec954; end: 103dec963; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices insertionMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec954(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c20));
  return;
}



/* Entry: 103dec964; end: 103dec973; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices internalErrorMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c28));
  return;
}



/* Entry: 103dec974; end: 103dec983; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices multiAdPodMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec974(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c30));
  return;
}



/* Entry: 103dec984; end: 103dec993; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices promotedStoryMetricsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010c38));
  return;
}



/* Entry: 103dec994; end: 103decb2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dec994(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010bb8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010bc0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113010bc8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113010bd0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113010bd8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113010be0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113010be8) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113010bf0) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_113010bf8) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_113010c00) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_113010c08) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_113010c10) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_113010c18) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_113010c20) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_113010c28) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_113010c30) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_113010c38) = param_17;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103decb30; end: 103decb8f; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices init] */

void FUN_103decb30(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdOperationalLoggingServices.AdOperationalLoggingServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103decb5c);
  (*pcVar1)();
}



/* Entry: 103decb90; end: 103deccb7; -[_TtC28AdOperationalLoggingServices28AdOperationalLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103decb90(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bb8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010be0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010be8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bf0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010bf8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c00));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c08));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c10));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c18));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c20));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c28));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010c30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010c38));
  return;
}



/* Entry: 103deccb8; end: 103decccb;  */

bool FUN_103deccb8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103decccc; end: 103decda3;  */

void FUN_103decccc(void)

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



/* Entry: 103decda4; end: 103decdc3;  */

void FUN_103decda4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103decdc4; end: 103dece03;  */

void FUN_103decdc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc97340;
  _swift_getWitnessTable(&UNK_10dc97340,&UNK_110713690);
  puRam0000000113010c68 = puVar1;
  return;
}



/* Entry: 103dece04; end: 103dece13;  */

undefined1  [16] FUN_103dece04(void)

{
  return ZEXT816(0x110713690);
}



/* Entry: 103dece14; end: 103ded28f;  */

long FUN_103dece14(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103ded290; end: 103ded2c7;  */

void FUN_103ded290(undefined8 param_1)

{
  if (lRam0000000113010cc8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c5870);
  return;
}



/* Entry: 103ded2c8; end: 103ded9ab;  */

long * FUN_103ded2c8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar10 = 0;
    func_0x0001046305a8();
    lVar15 = *(long *)(lVar10 + -8);
    plVar11 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar10);
    if ((int)plVar11 == 0) {
      lVar14 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar14;
      lVar16 = (long)*(int *)(lVar10 + 0x14);
      lVar18 = 0;
      __s10Foundation3URLVMa();
      lVar19 = *(long *)(lVar18 + -8);
      pcVar20 = *(code **)(lVar19 + 0x30);
      _swift_bridgeObjectRetain(lVar14);
      lVar14 = (long)param_2 + lVar16;
      (*pcVar20)(lVar14,1,lVar18);
      if ((int)lVar14 == 0) {
        (**(code **)(lVar19 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar18);
        (**(code **)(lVar19 + 0x38))((long)param_1 + lVar16,0,1,lVar18);
      }
      else {
        lVar14 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
                *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x20));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x20));
      lVar14 = puVar2[1];
      _swift_bridgeObjectRetain();
      if (lVar14 == 1) {
        uVar17 = *puVar2;
        uVar23 = puVar2[3];
        uVar22 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar17;
        puVar1[3] = uVar23;
        puVar1[2] = uVar22;
        puVar1[4] = puVar2[4];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar14;
        uVar17 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar17;
        puVar1[4] = puVar2[4];
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar17);
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x24));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x24));
      uVar17 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar17;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x28)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x28));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x2c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x2c));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x30));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x34));
      uVar13 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x38));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x38)) = uVar13;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x3c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x3c));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x40));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x40));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x44));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x44));
      uVar17 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar17;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x48));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x48));
      uVar22 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar22;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x4c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x4c));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x50)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x50));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x54)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x54));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x58));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x58));
      uVar23 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar23;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x5c));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x5c));
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x60));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x60));
      uVar4 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 100));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 100));
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x68));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x68));
      uVar6 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x6c));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x6c));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x70)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x70));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x74)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x74));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x78)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x78));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x7c)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x7c));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x80));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x80));
      uVar7 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x84)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x84));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x88)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x88));
      uVar21 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x8c));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x8c)) = uVar21;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x90));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x90));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x94));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x94));
      uVar8 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar8;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x98)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x98));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x9c)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x9c));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xa0));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa0));
      lVar14 = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar22);
      _swift_bridgeObjectRetain(uVar23);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar8);
      if (lVar14 == 0) {
        uVar17 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar17;
        puVar1[2] = puVar2[2];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar14;
        uVar17 = puVar2[2];
        puVar1[2] = uVar17;
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar17);
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0xa4)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa4));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xa8));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xa8));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xac));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xac));
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xb0)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xb0));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0xb4)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xb4));
      lVar16 = (long)*(int *)(lVar10 + 0xb8);
      lVar14 = (long)param_2 + lVar16;
      (*pcVar20)(lVar14,1,lVar18);
      if ((int)lVar14 == 0) {
        (**(code **)(lVar19 + 0x10))((long)param_1 + lVar16,(long)param_2 + lVar16,lVar18);
        (**(code **)(lVar19 + 0x38))((long)param_1 + lVar16,0,1,lVar18);
      }
      else {
        lVar14 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        _memcpy((long)param_1 + lVar16,(long)param_2 + lVar16,
                *(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
      }
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0xbc)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xbc));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xc0));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xc0));
      uVar17 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar17;
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xc4));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xc4));
      uVar17 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar17;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 200)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 200));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0xcc)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xcc));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0xd0)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd0));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0xd4)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd4));
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0xd8));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0xd8));
      lVar14 = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar17);
      if (lVar14 == 0) {
        uVar17 = *puVar2;
        uVar23 = puVar2[3];
        uVar22 = puVar2[2];
        puVar1[1] = puVar2[1];
        *puVar1 = uVar17;
        puVar1[3] = uVar23;
        puVar1[2] = uVar22;
        uVar17 = puVar2[4];
        puVar1[5] = puVar2[5];
        puVar1[4] = uVar17;
        puVar1[6] = puVar2[6];
      }
      else {
        *puVar1 = *puVar2;
        puVar1[1] = lVar14;
        uVar17 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar17;
        uVar22 = puVar2[5];
        puVar1[4] = puVar2[4];
        puVar1[5] = uVar22;
        puVar1[6] = puVar2[6];
        _swift_bridgeObjectRetain(lVar14);
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar22);
      }
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar10);
    }
    else {
      lVar10 = 0x112d3ae80;
      func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
      _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(param_3 + 0x14);
    lVar15 = 0;
    __s10Foundation3URLVMa();
    lVar18 = *(long *)(lVar15 + -8);
    lVar10 = (long)param_2 + lVar14;
    (**(code **)(lVar18 + 0x30))(lVar10,1,lVar15);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar18 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,lVar15);
      (**(code **)(lVar18 + 0x38))((long)param_1 + lVar14,0,1,lVar15);
    }
    else {
      lVar10 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar14,(long)param_2 + lVar14,
              *(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    }
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar12 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar10 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 103ded9ac; end: 103dedc0b;  */

void FUN_103ded9ac(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar2 = 0;
  func_0x0001046305a8();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)lVar3 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    iVar1 = *(int *)(lVar2 + 0x14);
    lVar4 = 0;
    __s10Foundation3URLVMa();
    lVar5 = *(long *)(lVar4 + -8);
    pcVar6 = *(code **)(lVar5 + 0x30);
    lVar3 = param_1 + iVar1;
    (*pcVar6)(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18)));
    lVar3 = param_1 + *(int *)(lVar2 + 0x20);
    if (*(long *)(lVar3 + 8) != 1) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x24) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x38)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x44) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x48) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x58) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x5c) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x60) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 100) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x68) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x80) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x8c)));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0x94) + 8));
    lVar3 = param_1 + *(int *)(lVar2 + 0xa0);
    if (*(long *)(lVar3 + 8) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x10));
    }
    iVar1 = *(int *)(lVar2 + 0xb8);
    lVar3 = param_1 + iVar1;
    (*pcVar6)(lVar3,1,lVar4);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar5 + 8))(param_1 + iVar1,lVar4);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0xc0) + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(lVar2 + 0xc4) + 8));
    lVar3 = param_1 + *(int *)(lVar2 + 0xd8);
    if (*(long *)(lVar3 + 8) != 0) {
      _swift_bridgeObjectRelease();
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x18));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x28));
    }
  }
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103dedc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103dedc0c; end: 103def2bf;  */

undefined8 * FUN_103dedc0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar8 = 0;
  func_0x0001046305a8();
  lVar13 = *(long *)(lVar8 + -8);
  puVar9 = param_2;
  (**(code **)(lVar13 + 0x30))(param_2,1,lVar8);
  if ((int)puVar9 == 0) {
    uVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar11;
    lVar14 = (long)*(int *)(lVar8 + 0x14);
    lVar15 = 0;
    __s10Foundation3URLVMa();
    lVar16 = *(long *)(lVar15 + -8);
    pcVar17 = *(code **)(lVar16 + 0x30);
    _swift_bridgeObjectRetain(uVar11);
    lVar12 = (long)param_2 + lVar14;
    (*pcVar17)(lVar12,1,lVar15);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar16 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,lVar15);
      (**(code **)(lVar16 + 0x38))((long)param_1 + lVar14,0,1,lVar15);
    }
    else {
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar14,(long)param_2 + lVar14,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x18));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x1c));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x20));
    lVar12 = puVar1[1];
    _swift_bridgeObjectRetain();
    if (lVar12 == 1) {
      uVar11 = *puVar1;
      uVar20 = puVar1[3];
      uVar19 = puVar1[2];
      puVar9[1] = puVar1[1];
      *puVar9 = uVar11;
      puVar9[3] = uVar20;
      puVar9[2] = uVar19;
      puVar9[4] = puVar1[4];
    }
    else {
      *puVar9 = *puVar1;
      puVar9[1] = lVar12;
      uVar11 = puVar1[3];
      puVar9[2] = puVar1[2];
      puVar9[3] = uVar11;
      puVar9[4] = puVar1[4];
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar11);
    }
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x24));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x24));
    uVar11 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar11;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x28));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
    uVar10 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x38));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x38)) = uVar10;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x3c));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x40));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x40));
    *puVar9 = *puVar1;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x44));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x44));
    uVar11 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar11;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x48));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x48));
    uVar19 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar19;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x4c));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x50)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x50));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x54)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x54));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x58));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x58));
    uVar20 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar20;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x5c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x5c));
    uVar2 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar2;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x60));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x60));
    uVar3 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar3;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 100));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 100));
    uVar4 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar4;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x68));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x68));
    uVar5 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar5;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x6c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x6c));
    *puVar9 = *puVar1;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x70)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x70));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x74)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x74));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x78)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x78));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x7c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x7c));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x80));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x80));
    uVar6 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar6;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x84)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x84));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x88)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x88));
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x8c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x8c)) = uVar18;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x90));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x90));
    *puVar9 = *puVar1;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x94));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x94));
    uVar7 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar7;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x98)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x98));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x9c));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xa0));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xa0));
    lVar12 = puVar1[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar19);
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar7);
    if (lVar12 == 0) {
      uVar11 = *puVar1;
      puVar9[1] = puVar1[1];
      *puVar9 = uVar11;
      puVar9[2] = puVar1[2];
    }
    else {
      *puVar9 = *puVar1;
      puVar9[1] = lVar12;
      uVar11 = puVar1[2];
      puVar9[2] = uVar11;
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar11);
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0xa4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0xa4));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xa8));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xa8));
    *puVar9 = *puVar1;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xac));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xac));
    *puVar9 = *puVar1;
    *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xb0));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0xb4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0xb4));
    lVar14 = (long)*(int *)(lVar8 + 0xb8);
    lVar12 = (long)param_2 + lVar14;
    (*pcVar17)(lVar12,1,lVar15);
    if ((int)lVar12 == 0) {
      (**(code **)(lVar16 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,lVar15);
      (**(code **)(lVar16 + 0x38))((long)param_1 + lVar14,0,1,lVar15);
    }
    else {
      lVar12 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar14,(long)param_2 + lVar14,
              *(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0xbc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0xbc));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xc0));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xc0));
    uVar11 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar11;
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xc4));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xc4));
    uVar11 = puVar1[1];
    *puVar9 = *puVar1;
    puVar9[1] = uVar11;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 200)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 200));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0xcc));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0xd0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0xd0));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0xd4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0xd4));
    puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0xd8));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0xd8));
    lVar12 = puVar1[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar11);
    if (lVar12 == 0) {
      uVar11 = *puVar1;
      uVar20 = puVar1[3];
      uVar19 = puVar1[2];
      puVar9[1] = puVar1[1];
      *puVar9 = uVar11;
      puVar9[3] = uVar20;
      puVar9[2] = uVar19;
      uVar11 = puVar1[4];
      puVar9[5] = puVar1[5];
      puVar9[4] = uVar11;
      puVar9[6] = puVar1[6];
    }
    else {
      *puVar9 = *puVar1;
      puVar9[1] = lVar12;
      uVar11 = puVar1[3];
      puVar9[2] = puVar1[2];
      puVar9[3] = uVar11;
      uVar19 = puVar1[5];
      puVar9[4] = puVar1[4];
      puVar9[5] = uVar19;
      puVar9[6] = puVar1[6];
      _swift_bridgeObjectRetain(lVar12);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar19);
    }
    (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar8);
  }
  else {
    lVar8 = 0x112d3ae80;
    func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x14);
  lVar13 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar13 + -8);
  lVar8 = (long)param_2 + lVar12;
  (**(code **)(lVar15 + 0x30))(lVar8,1,lVar13);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar13);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar12,0,1,lVar13);
  }
  else {
    lVar8 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar12,(long)param_2 + lVar12,
            *(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103def2c0; end: 103def2f3;  */

undefined8 FUN_103def2c0(undefined8 param_1)

{
  (*(code *)&DAT_1046443d0)();
  return param_1;
}



/* Entry: 103def2f4; end: 103df034b;  */

undefined8 * FUN_103def2f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  func_0x0001046305a8();
  lVar6 = *(long *)(lVar2 + -8);
  puVar3 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,1,lVar2);
  if ((int)puVar3 == 0) {
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    lVar9 = (long)*(int *)(lVar2 + 0x14);
    lVar5 = 0;
    __s10Foundation3URLVMa();
    lVar7 = *(long *)(lVar5 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    lVar4 = (long)param_2 + lVar9;
    (*pcVar8)(lVar4,1,lVar5);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x18));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x1c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x1c));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x20));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x20));
    puVar3[4] = puVar1[4];
    uVar12 = *puVar1;
    uVar11 = puVar1[3];
    uVar10 = puVar1[2];
    puVar3[1] = puVar1[1];
    *puVar3 = uVar12;
    puVar3[3] = uVar11;
    puVar3[2] = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x24));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x24));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x28));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x2c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x30));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x34));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x38));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x3c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x3c));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x40));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x40));
    *puVar3 = *puVar1;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x44));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x44));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x48));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x48));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x4c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x4c));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x50)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x50));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x54)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x54));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x58));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x58));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x5c));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x5c));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x60));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x60));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 100));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 100));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x68));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x68));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x6c));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x6c));
    *puVar3 = *puVar1;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x70)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x70));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x74)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x74));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x78)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x78));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x7c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x7c));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x80));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x80));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x84)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x84));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x88)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x88));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x8c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x8c));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x90));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x90));
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
    *puVar3 = *puVar1;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0x94));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x94));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x98)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x98));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0x9c)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0x9c));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xa0));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xa0));
    uVar10 = *puVar1;
    puVar3[1] = puVar1[1];
    *puVar3 = uVar10;
    puVar3[2] = puVar1[2];
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0xa4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0xa4));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xa8));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xa8));
    *puVar3 = *puVar1;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xac));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xac));
    *puVar3 = *puVar1;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar1 + 1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xb0)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xb0));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0xb4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0xb4));
    lVar9 = (long)*(int *)(lVar2 + 0xb8);
    lVar4 = (long)param_2 + lVar9;
    (*pcVar8)(lVar4,1,lVar5);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,lVar5);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar9,0,1,lVar5);
    }
    else {
      lVar4 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      _memcpy((long)param_1 + lVar9,(long)param_2 + lVar9,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0xbc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0xbc));
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xc0));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xc0));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xc4));
    uVar10 = *puVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xc4));
    puVar1[1] = puVar3[1];
    *puVar1 = uVar10;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 200)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 200));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0xcc)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0xcc));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0xd0)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0xd0));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar2 + 0xd4)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar2 + 0xd4));
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0xd8));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar2 + 0xd8));
    uVar10 = *puVar1;
    uVar12 = puVar1[3];
    uVar11 = puVar1[2];
    puVar3[1] = puVar1[1];
    *puVar3 = uVar10;
    puVar3[3] = uVar12;
    puVar3[2] = uVar11;
    uVar10 = puVar1[4];
    puVar3[5] = puVar1[5];
    puVar3[4] = uVar10;
    puVar3[6] = puVar1[6];
    (**(code **)(lVar6 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar2 = 0x112d3ae80;
    func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
    _memcpy(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  lVar4 = (long)*(int *)(param_3 + 0x14);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar6 + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,lVar6);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar6);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar6);
  }
  else {
    lVar2 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    _memcpy((long)param_1 + lVar4,(long)param_2 + lVar4,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103df034c; end: 103df0363;  */

void FUN_103df034c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103df0364; end: 103df0453;  */

void FUN_103df0364(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_30;
  long lStack_28;
  
  uVar2 = 0x113010cd8;
  lVar1 = 0x13f;
  func_0x000103df0408(0x13f,0x113010cd8,&SUB_1046305a8);
  if (uVar2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112d71a80;
    lVar1 = 0x13f;
    func_0x000103df0408(0x13f,0x112d71a80,PTR___s10Foundation3URLVMa_110350988);
    if (uVar2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 103df0454; end: 103df061b;  */

undefined8 FUN_103df0454(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(byte *)(param_1 + 2) < 9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
    return uVar1;
  }
  return *param_1;
}



/* Entry: 103df061c; end: 103df06fb;  */

void FUN_103df061c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_950 [496];
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined2 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined1 auStack_6d0 [352];
  undefined1 auStack_570 [496];
  undefined1 auStack_380 [352];
  undefined1 auStack_220 [496];
  
  func_0x000102d123c4(auStack_380);
  _memcpy(auStack_6d0,auStack_380,0x160);
  uStack_758 = 0;
  uStack_750 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_738 = 0;
  uStack_740 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  uStack_6d8 = 0;
  uStack_6e0 = 0;
  FUN_103df144c(auStack_6d0,0x112db3a28,&UNK_10d95ddb0);
  _memcpy(auStack_6d0,auStack_380,0x160);
  _memcpy(auStack_570,&uStack_760,0x1f0);
  _memcpy(auStack_220,&uStack_760,0x1f0);
  func_0x000102d334dc(auStack_570,auStack_950);
  func_0x000102d33518(auStack_220);
  FUN_103e012cc(0);
  _objc_allocWithZone();
  puVar1 = auStack_570;
  FUN_103e00cc0();
  puRam00000001138121c8 = puVar1;
  return;
}



/* Entry: 103df06fc; end: 103df073b;  */

undefined8 FUN_103df06fc(void)

{
  if (lRam0000000113010d08 != -1) {
    _swift_once(0x113010d08,FUN_103df061c);
  }
  return 0x1138121c8;
}



/* Entry: 103df073c; end: 103df077b; +[SCAdOperationEvent identity] */

void FUN_103df073c(void)

{
  if (lRam0000000113010d08 != -1) {
    _swift_once(0x113010d08,FUN_103df061c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001138121c8);
  return;
}



/* Entry: 103df077c; end: 103df086b; -[SCAdOperationEvent withAdIdentifier:] */

void FUN_103df077c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_810 [496];
  long lStack_620;
  undefined8 uStack_618;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(&uStack_430);
  uStack_238 = uStack_428;
  uStack_240 = uStack_430;
  FUN_103df144c(&uStack_240,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(&lStack_620,&uStack_430,0x1f0);
  lStack_620 = param_3;
  uStack_618 = param_2;
  _memcpy(auStack_230,&lStack_620,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_810);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(&lStack_620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df086c; end: 103df090f; -[SCAdOperationEvent withEventType:] */

void FUN_103df086c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [16];
  undefined8 uStack_410;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_410 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0910; end: 103df09b3; -[SCAdOperationEvent withMediaLoadedOnEntry:] */

void FUN_103df0910(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [24];
  undefined1 uStack_408;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_408 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df09b4; end: 103df0a57; -[SCAdOperationEvent withMediaLoadedOnExit:] */

void FUN_103df09b4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [25];
  undefined1 uStack_407;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_407 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0a58; end: 103df0afb; -[SCAdOperationEvent withMediaWaitTimeInSec:] */

void FUN_103df0a58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [32];
  undefined8 uStack_400;
  undefined1 auStack_230 [496];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_400 = param_1;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_2);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0afc; end: 103df0b9f; -[SCAdOperationEvent withMediaTotalStallCount:] */

void FUN_103df0afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [40];
  undefined8 uStack_3f8;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3f8 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0ba0; end: 103df0c43; -[SCAdOperationEvent withMediaStallOnStartDurationMillis:] */

void FUN_103df0ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [48];
  undefined8 uStack_3f0;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3f0 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0c44; end: 103df0ce7; -[SCAdOperationEvent withMediaFirstStallMediaTimeMillis:] */

void FUN_103df0c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [56];
  undefined8 uStack_3e8;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3e8 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0ce8; end: 103df0d8b; -[SCAdOperationEvent withMediaTotalStallDurationMillis:] */

void FUN_103df0ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [64];
  undefined8 uStack_3e0;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3e0 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0d8c; end: 103df0e2f; -[SCAdOperationEvent withMediaFirstStallDurationMillis:] */

void FUN_103df0d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [72];
  undefined8 uStack_3d8;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3d8 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0e30; end: 103df0ed3; -[SCAdOperationEvent withAdResponseStartDeserializeTimestamp:] */

void FUN_103df0e30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [80];
  undefined8 uStack_3d0;
  undefined1 auStack_230 [496];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3d0 = param_1;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_2);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0ed4; end: 103df0fcb; -[SCAdOperationEvent withRequestURL:] */

void FUN_103df0ed4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_810 [496];
  undefined1 auStack_620 [88];
  long lStack_5c8;
  undefined8 uStack_5c0;
  undefined1 auStack_430 [88];
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_430);
  uStack_238 = uStack_3d0;
  uStack_240 = uStack_3d8;
  FUN_103df144c(&uStack_240,0x112d35ff8,&UNK_10d900cd0);
  _memcpy(auStack_620,auStack_430,0x1f0);
  lStack_5c8 = param_3;
  uStack_5c0 = param_2;
  _memcpy(auStack_230,auStack_620,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_810);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df0fcc; end: 103df106f; -[SCAdOperationEvent withRequestType:] */

void FUN_103df0fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [104];
  undefined8 uStack_3b8;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3b8 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df1070; end: 103df1113; -[SCAdOperationEvent withRequestSubmittedTimeStampInSec:] */

void FUN_103df1070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [112];
  undefined8 uStack_3b0;
  undefined1 auStack_230 [496];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3b0 = param_1;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_2);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df1114; end: 103df11b7; -[SCAdOperationEvent withRequestResolvedTimeStampInSec:] */

void FUN_103df1114(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [120];
  undefined8 uStack_3a8;
  undefined1 auStack_230 [496];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3a8 = param_1;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_2);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df11b8; end: 103df125b; -[SCAdOperationEvent withRequestLatencyInSec:] */

void FUN_103df11b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [128];
  undefined8 uStack_3a0;
  undefined1 auStack_230 [496];
  
  uVar1 = param_2;
  _swift_getObjectType();
  _objc_retain(param_2);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_3a0 = param_1;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_2);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df125c; end: 103df12ff; -[SCAdOperationEvent withRequestStatusCode:] */

void FUN_103df125c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_610 [496];
  undefined1 auStack_420 [136];
  undefined8 uStack_398;
  undefined1 auStack_230 [496];
  
  uVar1 = param_1;
  _swift_getObjectType();
  _objc_retain(param_1);
  _objc_retain();
  FUN_103e0103c(auStack_420);
  uStack_398 = param_3;
  _memcpy(auStack_230,auStack_420,0x1f0);
  _objc_allocWithZone(uVar1);
  func_0x000102d334dc(auStack_230,auStack_610);
  puVar2 = auStack_230;
  FUN_103e00cc0(puVar2);
  _objc_release(param_1);
  func_0x000102d33518(auStack_420);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103df1300; end: 103df13eb;  */

undefined1 * FUN_103df1300(long param_1)

{
  undefined1 *puVar1;
  undefined8 unaff_x20;
  undefined1 auStack_760 [496];
  undefined1 auStack_570 [144];
  undefined1 auStack_4e0 [352];
  undefined1 auStack_380 [496];
  undefined1 auStack_190 [352];
  
  _swift_getObjectType();
  _objc_retain();
  FUN_103e0103c(auStack_570);
  if (param_1 == 0) {
    func_0x000102d123c4(auStack_190);
  }
  else {
    _objc_retain(param_1);
    func_0x00010481c368(auStack_380);
    func_0x000102d123f8(auStack_380);
    _memcpy(auStack_190,auStack_380,0x160);
  }
  FUN_103df144c(auStack_4e0,0x112db3a28,&UNK_10d95ddb0);
  _memcpy(auStack_4e0,auStack_190,0x160);
  _memcpy(auStack_380,auStack_570,0x1f0);
  _objc_allocWithZone(unaff_x20);
  func_0x000102d334dc(auStack_380,auStack_760);
  puVar1 = auStack_380;
  FUN_103e00cc0(puVar1);
  func_0x000102d33518(auStack_570);
  return puVar1;
}



/* Entry: 103df13ec; end: 103df144b; -[SCAdOperationEvent withRequestTargetingParams:] */

void FUN_103df13ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103df1300(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103df144c; end: 103df1577;  */

undefined8 FUN_103df144c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}


