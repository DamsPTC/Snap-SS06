/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00065e58; end: 00065e73; -[SCRegistrationUsername description] */

void FUN_00065e58(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00065e74; end: 00065eef; -[SCRegistrationUsername init] */

void FUN_00065e74(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationUsernameWrapper.swift",0x47,2,0x48,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x65ebc);
  (*pcVar1)();
}



/* Entry: 00065ef0; end: 00065f03; -[SCRegistrationUsername .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065ef0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8668 + 8));
  return;
}



/* Entry: 00065f04; end: 00065f23;  */

void FUN_00065f04(void)

{
  _objc_opt_self(&PTR_PTR_00ac8598);
  return;
}



/* Entry: 00065f24; end: 00065f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8668);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8670) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00065f28; end: 00065f67;  */

undefined8 FUN_00065f28(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_00066b88(param_1);
  FUN_00061520(param_1);
  return uVar1;
}



/* Entry: 00065f68; end: 0006605f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065f68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_00ae86a0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_00066e54();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae86a8);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_00ae86a8))[1]);
  uVar2 = uVar1;
  func_0x007843a0();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae86b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_00ae86b0))[1]);
  uVar2 = uVar1;
  func_0x007843a0();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_00ae86b8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00066060; end: 0006620b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00066060(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  long lStack_78;
  long alStack_70 [4];
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,alStack_70);
  if (alStack_70[3] == 0) {
    FUN_00027748(alStack_70);
  }
  else {
    plVar6 = &lStack_78;
    _swift_dynamicCast(plVar6,alStack_70,PTR___sypN_0099b8d8 + 8,lVar11,6);
    if (((ulong)plVar6 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_00ae86a0) == 0) {
        uVar10 = (uint)(*(long *)(lStack_78 + _DAT_00ae86a0) == 0);
      }
      else {
        lVar11 = *(long *)(lStack_78 + _DAT_00ae86a0);
        if (lVar11 == 0) {
          lVar7 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar7 = 0;
          FUN_00067a1c();
        }
        alStack_70[0] = lVar11;
        alStack_70[3] = lVar7;
        _objc_retain(lVar11);
        uVar10 = 0;
        func_0x00066f1c();
        FUN_00027748(alStack_70);
      }
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_00ae86a8);
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae86a8))[1];
      uVar1 = *(undefined8 *)(lStack_78 + _DAT_00ae86a8);
      uVar3 = ((undefined8 *)(lStack_78 + _DAT_00ae86a8))[1];
      func_0x00023304(uVar1,uVar3);
      FUN_00038814(uVar8,uVar2,uVar1,uVar3);
      FUN_00023358(uVar1,uVar3);
      lVar11 = *(long *)(unaff_x20 + _DAT_00ae86b0);
      if (lVar11 == *(long *)(lStack_78 + _DAT_00ae86b0) &&
          ((long *)(unaff_x20 + _DAT_00ae86b0))[1] == ((long *)(lStack_78 + _DAT_00ae86b0))[1]) {
        uVar9 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar9 = (uint)lVar11;
      }
      bVar4 = *(byte *)(unaff_x20 + _DAT_00ae86b8);
      bVar5 = *(byte *)(lStack_78 + _DAT_00ae86b8);
      _objc_release(lStack_78);
      if ((uVar10 & (uint)uVar8 & 1) != 0) {
        uVar9 = uVar9 & ((bVar4 ^ bVar5) ^ 1);
        goto LAB_000661ec;
      }
    }
  }
  uVar9 = 0;
LAB_000661ec:
  return uVar9 & 1;
}



/* Entry: 0006620c; end: 0006621b; -[SCRegistrationChallenge registrationChallengeServerResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006620c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae86a0));
  return;
}



/* Entry: 0006621c; end: 00066277; -[SCRegistrationChallenge authSessionPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006621c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ae86a8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_00ae86a8))[1];
  func_0x00023304(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_00023358(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 00066278; end: 000662c3; -[SCRegistrationChallenge clientRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066278(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_00ae86b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae86b0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 000662c4; end: 000662d3; -[SCRegistrationChallenge isFromResuming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_000662c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae86b8);
}



/* Entry: 000662d4; end: 00066377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000662d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae86a0) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae86a8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae86b0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_00ae86b8) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00066378; end: 0006646f; -[SCRegistrationChallenge initWithRegistrationChallengeServerResponse:authSessionPayload:clientRequestId:isFromResuming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066378(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  _objc_retain(param_3);
  uVar3 = param_4;
  _objc_retain(param_4);
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar4 = param_2;
  _objc_release(uVar3);
  uVar3 = param_5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_5);
  *(undefined8 *)(param_1 + _DAT_00ae86a0) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae86a8);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae86b0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined1 *)(param_1 + _DAT_00ae86b8) = param_6;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00066470; end: 000664a3; -[SCRegistrationChallenge hash] */

undefined8 FUN_00066470(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00065f68();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000664a4; end: 00066523; -[SCRegistrationChallenge isEqual:] */

uint FUN_000664a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00066060(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00066524; end: 00066527; -[SCRegistrationChallenge copyWithZone:] */

void FUN_00066524(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00066528; end: 00066683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066528(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x80000000008b6b30);
  func_0x00782780(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae86a8);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_00ae86a8))[1]);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b6a70);
  func_0x00782780(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae86b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_00ae86b0))[1]);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b6b60);
  func_0x00782780(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b6b80);
  func_0x007826a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00066684; end: 000666d3; -[SCRegistrationChallenge encodeWithCoder:] */

void FUN_00066684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00066528(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000666d4; end: 00066703;  */

void FUN_000666d4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00066704(param_1);
  return;
}



/* Entry: 00066704; end: 00066a5f;  */

undefined8 FUN_00066704(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  iVar2 = (int)&lStack_b0;
  uVar6 = 0;
  uVar8 = 0;
  uVar4 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x80000000008b6b30);
  lVar3 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_0099b8d8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_00027748(&uStack_80);
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    FUN_00067a1c(0);
    _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,uVar4,6);
    lVar3 = lStack_b0;
    if (iVar2 == 0) {
      lVar3 = 0;
    }
  }
  uVar4 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b6a70);
  lVar5 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
LAB_000669f4:
    _objc_release(lVar3);
    FUN_00027748(&uStack_80);
  }
  else {
    _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,PTR___s10Foundation4DataVN_0099c3c0,6);
    uVar4 = uStack_a8;
    lVar5 = lStack_b0;
    if ((uVar6 & 1) == 0) {
      _objc_release(param_1);
    }
    else {
      uVar9 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b6b60);
      lVar7 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (lVar7 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
        _swift_unknownObjectRelease(lVar7);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        _objc_release(lVar3);
        FUN_00023358(lVar5,uVar4);
        lVar3 = param_1;
        goto LAB_000669f4;
      }
      _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_0099b040,6);
      if ((uVar8 & 1) != 0) {
        uVar9 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x80000000008b6b80)
        ;
        func_0x00781a60(param_1);
        _objc_release(uVar9);
        lVar7 = lVar5;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,uVar4);
        lVar10 = lStack_b0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_b0,uStack_a8);
        _swift_bridgeObjectRelease(uStack_a8);
        func_0x00786580();
        _objc_release(lVar3);
        FUN_00023358(lVar5,uVar4);
        _objc_release(lVar7);
        _objc_release(lVar10);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(lVar3);
      FUN_00023358(lVar5,uVar4);
      lVar3 = param_1;
    }
    _objc_release(lVar3);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 00066a60; end: 00066a87; -[SCRegistrationChallenge initWithCoder:] */

void FUN_00066a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00066704();
  return;
}



/* Entry: 00066a88; end: 00066abb; -[SCRegistrationChallenge description] */

void FUN_00066a88(void)

{
  undefined1 auStack_48 [56];
  
  FUN_00066cc8(auStack_48);
  FUN_00061520(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00066abc; end: 00066b37; -[SCRegistrationChallenge init] */

void FUN_00066abc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationChallengeWrapper.swift",0x48,2,99,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x66b04);
  (*pcVar1)();
}



/* Entry: 00066b38; end: 00066b87; -[SCRegistrationChallenge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066b38(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae86a0));
  FUN_00023358(*(undefined8 *)(param_1 + _DAT_00ae86a8),((undefined8 *)(param_1 + _DAT_00ae86a8))[1]
              );
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae86b0 + 8));
  return;
}



/* Entry: 00066b88; end: 00066cc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066b88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long alStack_c0 [2];
  long alStack_b0 [2];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == -1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar9 = *param_1;
    bVar5 = *(char *)(param_1 + 1) == '\x01';
    uVar1 = uVar9;
    if (bVar5) {
      uVar1 = 0;
    }
    plVar8 = alStack_c0;
    uVar3 = 0;
    if (bVar5) {
      plVar8 = alStack_b0;
      uVar3 = uVar9;
    }
    lVar6 = 0;
    FUN_00067a1c();
    lVar7 = lVar6;
    _objc_allocWithZone();
    *(bool *)(lVar7 + _DAT_00ae86e8) = bVar5;
    *(undefined8 *)(lVar7 + _DAT_00ae86f0) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_00ae86f8) = uVar3;
    puVar4 = PTR_s_init_00abbf70;
    *plVar8 = lVar7;
    plVar8[1] = lVar6;
    _objc_retain(uVar9);
    _objc_msgSendSuper2(plVar8,puVar4);
  }
  *(long **)(unaff_x20 + _DAT_00ae86a0) = plVar8;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae86a8);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_00ae86b0);
  puVar2[1] = uStack_78;
  *puVar2 = uStack_80;
  *(undefined1 *)(unaff_x20 + _DAT_00ae86b8) = *(undefined1 *)(param_1 + 6);
  FUN_00066ddc(&uStack_70,auStack_90);
  func_0x00066e18(&uStack_80,auStack_90);
  _objc_msgSendSuper2(&stack0xffffffffffffff60,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00066cc8; end: 00066dbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066cc8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  undefined1 uVar8;
  
  lVar7 = *(long *)(param_2 + _DAT_00ae86a0);
  if (lVar7 == 0) {
    lVar7 = 0;
    uVar8 = 0xff;
  }
  else {
    if (*(char *)(lVar7 + _DAT_00ae86e8) == '\x01') {
      lVar7 = *(long *)(lVar7 + _DAT_00ae86f8);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x66db8);
        (*pcVar6)();
      }
      uVar8 = 1;
    }
    else {
      lVar7 = *(long *)(lVar7 + _DAT_00ae86f0);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x66dbc);
        (*pcVar6)();
      }
      uVar8 = 0;
    }
    _objc_retain(lVar7);
  }
  lVar1 = *(long *)(param_2 + _DAT_00ae86a8);
  lVar3 = ((long *)(param_2 + _DAT_00ae86a8))[1];
  lVar2 = *(long *)(param_2 + _DAT_00ae86b0);
  lVar4 = ((long *)(param_2 + _DAT_00ae86b0))[1];
  uVar5 = *(undefined1 *)(param_2 + _DAT_00ae86b8);
  func_0x00023304(lVar1,lVar3);
  *param_1 = lVar7;
  *(undefined1 *)(param_1 + 1) = uVar8;
  param_1[2] = lVar1;
  param_1[3] = lVar3;
  param_1[4] = lVar2;
  param_1[5] = lVar4;
  *(undefined1 *)(param_1 + 6) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(lVar4);
  return;
}



/* Entry: 00066dbc; end: 00066ddb;  */

void FUN_00066dbc(void)

{
  _objc_opt_self(&PTR_PTR_00ac8670);
  return;
}



/* Entry: 00066ddc; end: 00066e53;  */

undefined8 FUN_00066ddc(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___s10Foundation4DataVN_0099c3c0 + -8) + 0x10))(param_2,param_1);
  return param_2;
}



/* Entry: 00066e54; end: 00067033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066e54(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_00ae86e8));
  lVar1 = *(long *)(unaff_x20 + _DAT_00ae86f0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_00ae86f8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00067034; end: 000670df;  */

void FUN_00067034(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 000670e0; end: 0006711f;  */

void FUN_000670e0(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 00067120; end: 00067177; -[SCRegistrationChallengeServerResponse description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067120(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00ae86e8) == '\x01') {
    if (*(long *)(param_1 + _DAT_00ae86f8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x67148);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_00ae86f0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x67178);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00067178; end: 000671bf; -[SCRegistrationChallengeServerResponse init] */

void FUN_00067178(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationChallengeServerResponseWrapper.swift"
             ,0x56,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x671c0);
  (*pcVar1)();
}



/* Entry: 000671c0; end: 000671f3; -[SCRegistrationChallengeServerResponse hash] */

undefined8 FUN_000671c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00066e54();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000671f4; end: 00067273; -[SCRegistrationChallengeServerResponse isEqual:] */

uint FUN_000671f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  func_0x00066f1c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00067274; end: 00067277; -[SCRegistrationChallengeServerResponse copyWithZone:] */

void FUN_00067274(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00067278; end: 0006739f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067278(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = 0xd000000000000017;
  if (*(char *)(unaff_x20 + _DAT_00ae86e8) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_00ae86f8) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x6739c);
      (*pcVar3)();
    }
    pcVar1 = "SUBTYPE_USER_PASSED_CHALLENGE";
    uVar4 = 0xd000000000000026;
    uVar5 = 0xd00000000000001d;
    pcVar2 = "USER_PASSED_CHALLENGE_BOOOT_STRAP_DATA";
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_00ae86f0) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x673a0);
      (*pcVar3)();
    }
    pcVar1 = "SUBTYPE_USER_CHALLENGED";
    pcVar2 = "USER_CHALLENGED_CHALLENGE_DATA";
    uVar4 = 0xd00000000000001e;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,(ulong)(pcVar2 + -0x20) | 0x8000000000000000);
  func_0x00782780(param_1);
  _objc_release(uVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar4 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00782780(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar4);
  return;
}



/* Entry: 000673a0; end: 000673ef; -[SCRegistrationChallengeServerResponse encodeWithCoder:] */

void FUN_000673a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00067278(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000673f0; end: 0006741f;  */

void FUN_000673f0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00067420(param_1);
  return;
}



/* Entry: 00067420; end: 0006780f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00067420(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar6 = PTR___sypN_0099b8d8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_000677b8:
    uStack_90 = uStack_70;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
    lStack_78 = lStack_58;
    _objc_release(param_1);
    FUN_00027748(&uStack_70);
  }
  else {
    plVar3 = &lStack_a0;
    _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    lVar2 = lStack_a0;
    if (((ulong)plVar3 & 1) != 0) {
      if ((lStack_a0 != -0x2fffffffffffffe9) || (lStack_98 != -0x7fffffffff749340)) {
        uVar4 = 0xd000000000000017;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000017,0x80000000008b6cc0,lStack_a0,lStack_98,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0xd00000000000001d;
          if ((lVar2 == -0x2fffffffffffffe3) && (lStack_98 == -0x7fffffffff749380)) {
            _swift_bridgeObjectRelease(0x80000000008b6c80);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001d,0x80000000008b6c80,lVar2,lStack_98,0);
            _swift_bridgeObjectRelease(lStack_98);
            if ((uVar4 & 1) == 0) goto LAB_000677cc;
          }
          uVar1 = 0xd000000000000026;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000026,0x80000000008b6c50);
          lVar2 = param_1;
          func_0x00781b00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          if (lVar2 == 0) {
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
            _swift_unknownObjectRelease(lVar2);
          }
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          lStack_58 = lStack_78;
          uStack_60 = uStack_80;
          if (lStack_78 == 0) goto LAB_000677b8;
          uVar1 = 0;
          func_0x00067924(0,0xae84f8,&PTR_PTR_00ac28e8);
          plVar3 = &lStack_a0;
          _swift_dynamicCast(plVar3,&uStack_70,puVar6 + 8,uVar1,6);
          if (((ulong)plVar3 & 1) != 0) {
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_00ae86e8) = 1;
            *(undefined8 *)(unaff_x20 + _DAT_00ae86f0) = 0;
            *(long *)(unaff_x20 + _DAT_00ae86f8) = lStack_a0;
            puVar6 = PTR_s_init_00abbf70;
            _objc_retain(lStack_a0);
            puVar5 = auStack_b0;
            goto LAB_00067630;
          }
          goto LAB_000677cc;
        }
      }
      _swift_bridgeObjectRelease(lStack_98);
      uVar1 = 0xd00000000000001e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b6ca0);
      lVar2 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) goto LAB_000677b8;
      uVar1 = 0;
      func_0x00067924(0,0xae8700,&PTR_PTR_00ac2db0);
      plVar3 = &lStack_a0;
      _swift_dynamicCast(plVar3,&uStack_70,puVar6 + 8,uVar1,6);
      if (((ulong)plVar3 & 1) != 0) {
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_00ae86e8) = 0;
        *(long *)(unaff_x20 + _DAT_00ae86f0) = lStack_a0;
        *(undefined8 *)(unaff_x20 + _DAT_00ae86f8) = 0;
        puVar6 = PTR_s_init_00abbf70;
        _objc_retain(lStack_a0);
LAB_00067630:
        _objc_msgSendSuper2(puVar5,puVar6);
        _objc_release(lStack_a0);
        _objc_release(param_1);
        _swift_getObjectType();
        _swift_deallocPartialClassInstance();
        return puVar5;
      }
    }
LAB_000677cc:
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 00067810; end: 00067837; -[SCRegistrationChallengeServerResponse initWithCoder:] */

void FUN_00067810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00067420();
  return;
}



/* Entry: 00067838; end: 000678ab; +[SCRegistrationChallengeServerResponse userChallengedWithChallengeData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067838(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae86e8) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae86f0) = param_3;
  *(undefined8 *)(lVar2 + _DAT_00ae86f8) = 0;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000678ac; end: 00067963; +[SCRegistrationChallengeServerResponse userPassedChallengeWithBoootStrapData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000678ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae86e8) = 1;
  *(undefined8 *)(lVar2 + _DAT_00ae86f0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae86f8) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00067964; end: 000679af; -[SCRegistrationChallengeServerResponse matchUserChallenged:userPassedChallenge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067964(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00ae86e8) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_00ae86f8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x67990);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_00ae86f0) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x679b0);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000679a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 000679b0; end: 000679e3;  */

void FUN_000679b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000679e4; end: 00067a1b; -[SCRegistrationChallengeServerResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000679e4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae86f0));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae86f8));
  return;
}



/* Entry: 00067a1c; end: 00067a3b;  */

void FUN_00067a1c(void)

{
  _objc_opt_self(&PTR_PTR_00ac8758);
  return;
}



/* Entry: 00067a3c; end: 00067ba3;  */

int FUN_00067a3c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00067ab8;
        goto LAB_00067a9c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00067a9c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_00067ab8:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00067ba4; end: 00067be3;  */

void FUN_00067ba4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d09bc;
  _swift_getWitnessTable(&UNK_007d09bc,&UNK_009a1118);
  puRam0000000000ae8730 = puVar1;
  return;
}



/* Entry: 00067be4; end: 00067c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067be4(void)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_00ae8738);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_00ae8740) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_0006a66c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00067c6c; end: 00067db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00067c6c(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lStack_58;
  long alStack_50 [4];
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    FUN_00027748(alStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,alStack_50,PTR___sypN_0099b8d8 + 8,lVar6,6);
    if (((ulong)plVar2 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00ae8738);
      lVar6 = lStack_58;
      if (cVar1 == *(char *)(lStack_58 + _DAT_00ae8738)) {
        if ((cVar1 == '\0') || (cVar1 == '\x01')) {
          _objc_release();
          uVar4 = 1;
          goto LAB_00067d5c;
        }
        if (*(long *)(unaff_x20 + _DAT_00ae8740) != 0) {
          lVar6 = *(long *)(lStack_58 + _DAT_00ae8740);
          if (lVar6 == 0) {
            uVar3 = 0;
            alStack_50[1] = 0;
            alStack_50[2] = 0;
          }
          else {
            uVar3 = 0;
            FUN_0006bd30();
          }
          alStack_50[0] = lVar6;
          alStack_50[3] = uVar3;
          _objc_retain(lVar6);
          plVar2 = alStack_50;
          FUN_0006a82c(plVar2);
          uVar4 = (uint)plVar2;
          _objc_release(lStack_58);
          FUN_00027748(alStack_50);
          goto LAB_00067d5c;
        }
        lVar5 = *(long *)(lStack_58 + _DAT_00ae8740);
        lVar6 = lVar5;
        _objc_retain(lVar5);
        _objc_release(lStack_58);
        if (lVar5 == 0) {
          uVar4 = 1;
          goto LAB_00067d5c;
        }
      }
      _objc_release(lVar6);
    }
  }
  uVar4 = 0;
LAB_00067d5c:
  return uVar4 & 1;
}



/* Entry: 00067db4; end: 00067e5f;  */

void FUN_00067db4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00067e60; end: 00067e97;  */

void FUN_00067e60(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 00067e98; end: 00067edb; -[SCRegistrationMethod description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067e98(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_00ae8738)) && (*(long *)(param_1 + _DAT_00ae8740) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x67edc);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00067edc; end: 00067f23; -[SCRegistrationMethod init] */

void FUN_00067edc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationMethodWrapper.swift",0x45,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x67f24);
  (*pcVar1)();
}



/* Entry: 00067f24; end: 00067f57; -[SCRegistrationMethod hash] */

undefined8 FUN_00067f24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00067be4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00067f58; end: 00067fd7; -[SCRegistrationMethod isEqual:] */

uint FUN_00067f58(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_00067c6c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00067fd8; end: 00067fdb; -[SCRegistrationMethod copyWithZone:] */

void FUN_00067fd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00067fdc; end: 00068113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00067fdc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_00ae8738) == '\0') {
    uVar3 = 0x80000000008b6d30;
    uVar2 = 0xd000000000000016;
  }
  else if (*(char *)(unaff_x20 + _DAT_00ae8738) == '\x01') {
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xeb000000004f474e;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_00ae8740) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x68114);
      (*pcVar1)();
    }
    uVar2 = 0x505f485455415f4f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f485455415f4f,0xed0000304d415241);
    func_0x00782780(param_1);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xed0000485455414f;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00782780(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 00068114; end: 00068163; -[SCRegistrationMethod encodeWithCoder:] */

void FUN_00068114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00067fdc(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00068164; end: 00068193;  */

void FUN_00068164(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00068194(param_1);
  return;
}



/* Entry: 00068194; end: 0006853f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00068194(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = auStack_d0;
  _swift_getObjectType();
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar3 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_0099b8d8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_000684e8:
    uStack_70 = uStack_90;
    uStack_68 = uStack_88;
    uStack_60 = uStack_80;
    lStack_58 = lStack_78;
    _objc_release(param_1);
    FUN_00027748(&uStack_70);
    goto LAB_00068504;
  }
  plVar4 = &lStack_a0;
  _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
  lVar3 = lStack_a0;
  if (((ulong)plVar4 & 1) == 0) {
LAB_000684fc:
    _objc_release(param_1);
LAB_00068504:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  if ((lStack_a0 == -0x2fffffffffffffea) && (lStack_98 == -0x7fffffffff7492d0)) {
LAB_000682ac:
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8738) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_00ae8740) = 0;
  }
  else {
    uVar7 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000016,0x80000000008b6d30,lStack_a0,lStack_98,0);
    if ((uVar7 & 1) != 0) goto LAB_000682ac;
    uVar7 = 0x5f45505954425553;
    if (((lVar3 != 0x5f45505954425553) || (lStack_98 != -0x14ffffffffb0b8b2)) &&
       (uVar5 = uVar7,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x5f45505954425553,0xeb000000004f474e,lVar3,lStack_98,0), (uVar5 & 1) == 0)) {
      if ((lVar3 == 0x5f45505954425553) && (lStack_98 == -0x12ffffb7abaabeb1)) {
        _swift_bridgeObjectRelease(0xed0000485455414f);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5f45505954425553,0xed0000485455414f,lVar3,lStack_98,0);
        _swift_bridgeObjectRelease(lStack_98);
        if ((uVar7 & 1) == 0) goto LAB_000684fc;
      }
      uVar2 = 0x505f485455415f4f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f485455415f4f,0xed0000304d415241);
      lVar3 = param_1;
      func_0x00781b00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) goto LAB_000684e8;
      uVar2 = 0;
      FUN_0006bd30(0);
      plVar4 = &lStack_a0;
      _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_00ae8738) = 2;
        *(long *)(unaff_x20 + _DAT_00ae8740) = lStack_a0;
        puVar1 = PTR_s_init_00abbf70;
        lVar3 = lStack_a0;
        _objc_retain(lStack_a0);
        puVar6 = auStack_b0;
        _objc_msgSendSuper2(puVar6,puVar1);
        _objc_release(lVar3);
        goto LAB_000682ec;
      }
      goto LAB_000684fc;
    }
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8738) = 1;
    *(undefined8 *)(unaff_x20 + _DAT_00ae8740) = 0;
    puVar6 = auStack_c0;
  }
  _objc_msgSendSuper2(puVar6,PTR_s_init_00abbf70);
LAB_000682ec:
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar6;
}



/* Entry: 00068540; end: 00068567; -[SCRegistrationMethod initWithCoder:] */

void FUN_00068540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00068194();
  return;
}



/* Entry: 00068568; end: 0006856f; +[SCRegistrationMethod defaultMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068568(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8738) = 0;
  *(undefined8 *)(lVar1 + _DAT_00ae8740) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00068570; end: 00068577; +[SCRegistrationMethod ngo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068570(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8738) = 1;
  *(undefined8 *)(lVar1 + _DAT_00ae8740) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00068578; end: 000685d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068578(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8738) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00ae8740) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000685d4; end: 0006863f; +[SCRegistrationMethod oAuth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000685d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae8738) = 2;
  *(undefined8 *)(lVar2 + _DAT_00ae8740) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00068640; end: 0006868f; -[SCRegistrationMethod matchDefaultMethod:ngo:oAuth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068640(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00ae8738) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0006866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  if (*(char *)(param_1 + _DAT_00ae8738) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00068660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (*(long *)(param_1 + _DAT_00ae8740) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00068688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x68690);
  (*pcVar1)();
}



/* Entry: 00068690; end: 000686c3;  */

void FUN_00068690(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 000686c4; end: 000686d3; -[SCRegistrationMethod .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000686c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae8740));
  return;
}



/* Entry: 000686d4; end: 0006875f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000686d4(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  long alStack_50 [2];
  long alStack_40 [2];
  long alStack_30 [2];
  
  lVar5 = param_1;
  FUN_00068760();
  lVar6 = lVar5;
  _objc_allocWithZone();
  uVar7 = 2;
  plVar2 = alStack_30;
  if (param_1 == 0) {
    uVar7 = 0;
    plVar2 = alStack_50;
  }
  uVar1 = 1;
  if (param_1 != 1) {
    uVar1 = uVar7;
  }
  plVar3 = alStack_40;
  lVar4 = 0;
  if (param_1 != 1) {
    plVar3 = plVar2;
    lVar4 = param_1;
  }
  *(undefined1 *)(lVar6 + _DAT_00ae8738) = uVar1;
  *(long *)(lVar6 + _DAT_00ae8740) = lVar4;
  *plVar3 = lVar6;
  plVar3[1] = lVar5;
  _objc_msgSendSuper2(plVar3,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00068760; end: 0006877f;  */

void FUN_00068760(void)

{
  _objc_opt_self(&PTR_PTR_00ac8830);
  return;
}



/* Entry: 00068780; end: 000688e7;  */

int FUN_00068780(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000687fc;
        goto LAB_000687e0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_000687e0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_000687fc:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000688e8; end: 0006898f;  */

void FUN_000688e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8770 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0a9c;
  _swift_getWitnessTable(&UNK_007d0a9c,&UNK_009a1200);
  puRam0000000000ae8770 = puVar1;
  return;
}



/* Entry: 00068990; end: 00068b93;  */

undefined8 FUN_00068990(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  FUN_00023284(0);
  uVar1 = *param_1;
  __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar1,*param_2);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_2[2];
    if (param_1[2] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[1];
      if (((uVar2 != param_2[1]) || (param_1[2] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[4];
    if (param_1[4] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[3];
      if (((uVar2 != param_2[3]) || (param_1[4] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_2[6];
    if (param_1[6] == 0) {
      if (uVar1 != 0) {
        return 0;
      }
    }
    else {
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = param_1[5];
      if (((uVar2 != param_2[5]) || (param_1[6] != uVar1)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar2 & 1) == 0)) {
        return 0;
      }
    }
    uVar1 = param_1[7];
    FUN_00038814(uVar1,param_1[8],param_2[7],param_2[8]);
    if ((uVar1 & 1) != 0) {
      uVar5 = param_1[10];
      uVar2 = param_1[9];
      uVar1 = param_2[10];
      uVar4 = param_2[9];
      uStack_60 = uVar4;
      uStack_58 = uVar1;
      uStack_50 = uVar2;
      uStack_48 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (uVar1 >> 0x3c < 0xf) {
          func_0x0005c564(&uStack_50,auStack_70);
          func_0x0005c564(&uStack_60,auStack_70);
          uVar3 = uVar2;
          FUN_00038814(uVar2,uVar5,uVar4,uVar1);
          FUN_00023344(uVar4,uVar1);
          FUN_00023344(uVar2,uVar5);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          return 1;
        }
      }
      else if (0xe < uVar1 >> 0x3c) {
        func_0x0005c564(&uStack_50,auStack_70);
        func_0x0005c564(&uStack_60,auStack_70);
        FUN_00023344(uVar2,uVar5);
        return 1;
      }
      func_0x0005c564(&uStack_50,auStack_70);
      func_0x0005c564(&uStack_60,auStack_70);
      FUN_00023344(uVar2,uVar5);
      FUN_00023344(uVar4,uVar1);
    }
  }
  return 0;
}



/* Entry: 00068b94; end: 00068c23;  */

long FUN_00068b94(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00068c24; end: 00068cdf;  */

undefined8 * FUN_00068c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar4 = param_2[2];
  uVar1 = param_2[3];
  param_1[2] = uVar4;
  param_1[3] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar2;
  uVar6 = param_2[8];
  _objc_retain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  func_0x00023304(uVar3,uVar6);
  param_1[7] = uVar3;
  param_1[8] = uVar6;
  uVar5 = param_2[10];
  if (uVar5 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    func_0x00023304(uVar4,uVar5);
    param_1[9] = uVar4;
    param_1[10] = uVar5;
  }
  else {
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
  }
  return param_1;
}



/* Entry: 00068ce0; end: 00068e13;  */

undefined8 * FUN_00068ce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar4);
  param_1[1] = param_2[1];
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = param_2[3];
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[5] = param_2[5];
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[7];
  uVar3 = param_2[8];
  func_0x00023304(uVar4,uVar3);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  param_1[7] = uVar4;
  param_1[8] = uVar3;
  FUN_00023358(uVar1,uVar2);
  uVar5 = param_2[10];
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      uVar3 = param_2[9];
      func_0x00023304(uVar3,uVar5);
      uVar4 = param_1[9];
      uVar1 = param_1[10];
      param_1[9] = uVar3;
      param_1[10] = uVar5;
      FUN_00023358(uVar4,uVar1);
      return param_1;
    }
    func_0x0005c328(param_1 + 9);
  }
  else if (uVar5 >> 0x3c < 0xf) {
    uVar4 = param_2[9];
    func_0x00023304(uVar4,uVar5);
    param_1[9] = uVar4;
    param_1[10] = uVar5;
    return param_1;
  }
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  return param_1;
}



/* Entry: 00068e14; end: 00068e37;  */

void FUN_00068e14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  param_1[10] = param_2[10];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Entry: 00068e38; end: 00068eef;  */

undefined8 * FUN_00068e38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[7];
  uVar2 = param_1[8];
  uVar4 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar4;
  FUN_00023358(uVar1,uVar2);
  if ((ulong)param_1[10] >> 0x3c < 0xf) {
    uVar3 = param_2[10];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[9];
      param_1[9] = param_2[9];
      param_1[10] = uVar3;
      FUN_00023358(uVar1);
      return param_1;
    }
    func_0x0005c328(param_1 + 9);
  }
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  return param_1;
}



/* Entry: 00068ef0; end: 00068faf;  */

int FUN_00068ef0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xb] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00068fb0; end: 00069273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00068fb0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar6 == 0) {
    if (param_4 >> 0x3e == 0) {
      uVar2 = 0;
      FUN_00023284(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(param_1,param_3,uVar2);
      return (uint)param_1 & 1;
    }
  }
  else if (uVar6 == 1) {
    if ((param_4 >> 0x3e == 1) &&
       ((*(char *)(*(long *)(param_1 + _DAT_00ae8820) + _DAT_00ae8880) == '\x01') !=
        (*(char *)(*(long *)(param_3 + _DAT_00ae8820) + _DAT_00ae8880) != '\x01'))) {
      uVar4 = ((ulong *)(param_1 + _DAT_00ae8828))[1];
      uVar5 = ((ulong *)(param_3 + _DAT_00ae8828))[1];
      if (uVar4 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar8 = *(ulong *)(param_1 + _DAT_00ae8828);
        uVar7 = *(ulong *)(param_3 + _DAT_00ae8828);
        if ((uVar8 != uVar7 || uVar4 != uVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar4,uVar7,uVar5,0), (uVar8 & 1) == 0)) {
          return 0;
        }
      }
      uVar4 = ((ulong *)(param_1 + _DAT_00ae8830))[1];
      uVar5 = ((ulong *)(param_3 + _DAT_00ae8830))[1];
      if (uVar4 == 0) {
        if (uVar5 != 0) {
          return 0;
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        uVar8 = *(ulong *)(param_1 + _DAT_00ae8830);
        uVar7 = *(ulong *)(param_3 + _DAT_00ae8830);
        if ((uVar8 != uVar7 || uVar4 != uVar5) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar4,uVar7,uVar5,0), (uVar8 & 1) == 0)) {
          return 0;
        }
      }
      uVar4 = *(ulong *)(param_1 + _DAT_00ae8840);
      FUN_00038814(uVar4,((ulong *)(param_1 + _DAT_00ae8840))[1],
                   *(undefined8 *)(param_3 + _DAT_00ae8840),
                   ((undefined8 *)(param_3 + _DAT_00ae8840))[1]);
      if ((uVar4 & 1) != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8848);
        uVar4 = ((undefined8 *)(param_1 + _DAT_00ae8848))[1];
        uVar1 = *(undefined8 *)(param_3 + _DAT_00ae8848);
        uVar5 = ((undefined8 *)(param_3 + _DAT_00ae8848))[1];
        if (uVar4 >> 0x3c < 0xf) {
          if (uVar5 >> 0x3c < 0xf) {
            FUN_000308a8(uVar2,uVar4);
            FUN_000308a8(uVar1,uVar5);
            uVar3 = uVar2;
            FUN_00038814(uVar2,uVar4,uVar1,uVar5);
            FUN_00023344(uVar1,uVar5);
            FUN_00023344(uVar2,uVar4);
            return (uint)uVar3 & 1;
          }
        }
        else if (0xe < uVar5 >> 0x3c) {
          FUN_000308a8(uVar2,uVar4);
          FUN_000308a8(uVar1,uVar5);
          FUN_00023344(uVar2,uVar4);
          return 1;
        }
        FUN_000308a8(uVar2,uVar4);
        FUN_000308a8(uVar1,uVar5);
        FUN_00023344(uVar2,uVar4);
        FUN_00023344(uVar1,uVar5);
      }
    }
  }
  else if ((((long)param_4 < -0x4000000000000000) && (param_3 == 0)) &&
          (param_4 == 0x8000000000000000)) {
    return 1;
  }
  return 0;
}



/* Entry: 00069274; end: 000692af;  */

undefined8 * FUN_00069274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_000692b0(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 000692b0; end: 000692e7;  */

void FUN_000692b0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 0) {
      return;
    }
    _objc_retain();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_1);
  return;
}



/* Entry: 000692e8; end: 000692f3;  */

void FUN_000692e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar1 = param_1[1];
  uVar3 = (uint)((ulong)uVar1 >> 0x3e);
  uVar2 = *param_1;
  if (uVar3 != 1) {
    if (uVar3 != 0) {
      return;
    }
    _objc_release(*param_1);
    uVar2 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 000692f4; end: 0006932b;  */

void FUN_000692f4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 0) {
      return;
    }
    _objc_release();
    param_1 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0006932c; end: 0006936f;  */

undefined8 * FUN_0006932c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_000692b0(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_000692f4(uVar2,uVar4);
  return param_1;
}



/* Entry: 00069370; end: 000693a7;  */

undefined8 * FUN_00069370(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_000692f4(uVar1,uVar2);
  return param_1;
}



/* Entry: 000693a8; end: 000694bf;  */

int FUN_000693a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 2) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 000694c0; end: 0006958f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_000694c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar1 = _DAT_00ae8778;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_00ae8778,0);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_00ae8780) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8788) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8790) = param_4;
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_00abbf70);
  _swift_unknownObjectRelease(param_1);
  return puVar2;
}



/* Entry: 00069590; end: 0006966b; -[OAuthScope initWithDelegate:oAuthType:uiContainer:optedIn1TLStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_00ae8778;
  _swift_unknownObjectWeakInit(param_1 + _DAT_00ae8778,0);
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_3);
  *(undefined8 *)(param_1 + _DAT_00ae8780) = param_4;
  *(undefined8 *)(param_1 + _DAT_00ae8788) = param_5;
  *(undefined8 *)(param_1 + _DAT_00ae8790) = param_6;
  puVar1 = PTR_s_init_00abbf70;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _objc_msgSendSuper2(&lStack_78,puVar1);
  return;
}



/* Entry: 0006966c; end: 000696cb; -[OAuthScope init] */

void FUN_0006966c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("OAuthScope.OAuthScope",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x69698);
  (*pcVar1)();
}



/* Entry: 000696cc; end: 00069747; -[OAuthScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000696cc(long param_1)

{
  func_0x00069724(param_1 + _DAT_00ae8778);
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8780));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8788));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae8790));
  return;
}



/* Entry: 00069748; end: 00069767;  */

void FUN_00069748(void)

{
  _objc_opt_self(&PTR_PTR_00ac8900);
  return;
}



/* Entry: 00069768; end: 0006976b;  */

void FUN_00069768(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae87c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0c5c;
  _swift_getWitnessTable(&UNK_007d0c5c,&UNK_009a14a8);
  puRam0000000000ae87c0 = puVar1;
  return;
}



/* Entry: 0006976c; end: 000697ab;  */

void FUN_0006976c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae87c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0c5c;
  _swift_getWitnessTable(&UNK_007d0c5c,&UNK_009a14a8);
  puRam0000000000ae87c0 = puVar1;
  return;
}



/* Entry: 000697ac; end: 00069857;  */

void FUN_000697ac(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00069858; end: 000699ff;  */

void FUN_00069858(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 00069a00; end: 00069a3f;  */

void FUN_00069a00(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae87c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0d18;
  _swift_getWitnessTable(&UNK_007d0d18,&UNK_009a1590);
  puRam0000000000ae87c8 = puVar1;
  return;
}


