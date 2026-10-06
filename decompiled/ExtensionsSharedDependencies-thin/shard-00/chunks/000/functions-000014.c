/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00059b80; end: 00059b87;  */

void FUN_00059b80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00059b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



/* Entry: 00059b88; end: 00059c5b;  */

void FUN_00059b88(void)

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



/* Entry: 00059c5c; end: 00059c7b;  */

void FUN_00059c5c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00059c7c; end: 00059caf;  */

undefined8 FUN_00059c7c(undefined8 param_1)

{
  FUN_00058f18();
  return param_1;
}



/* Entry: 00059cb0; end: 00059ce7; -[SCUserVerificationResult description] */

void FUN_00059cb0(void)

{
  undefined1 auStack_38 [40];
  
  _objc_retain();
  FUN_0005a5f8(auStack_38);
  FUN_00059c7c(auStack_38);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00059ce8; end: 00059d2f; -[SCUserVerificationResult init] */

void FUN_00059ce8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCUserVerificationModels/SCUserVerificationResultWrapper.swift",0x3e,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x59d30);
  (*pcVar1)();
}



/* Entry: 00059d30; end: 00059d63; -[SCUserVerificationResult hash] */

undefined8 FUN_00059d30(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00059d64();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00059d64; end: 0005a213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059d64(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_00ae8420);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_00ae8428) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_000648cc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_00ae8430);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8438))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00ae8438);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x007843a0();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(long *)(unaff_x20 + _DAT_00ae8440) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_000648cc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_00ae8448);
  if (lVar2 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8450))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_00ae8450);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3);
    uVar4 = uVar3;
    func_0x007843a0();
    _objc_release(uVar3);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0005a214; end: 0005a293; -[SCUserVerificationResult isEqual:] */

uint FUN_0005a214(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00059f34(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0005a294; end: 0005a297; -[SCUserVerificationResult copyWithZone:] */

void FUN_0005a294(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0005a298; end: 0005a2f7; +[SCUserVerificationResult phoneVerifyWithPhoneNumber:twoFaStatus:] */

void FUN_0005a298(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_0005a748(param_3,param_4);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0005a2f8; end: 0005a32f; +[SCUserVerificationResult emailVerifyWithEmail:] */

void FUN_0005a2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  func_0x0005a808();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 0005a330; end: 0005a3b3; +[SCUserVerificationResult bothPhoneAndEmailVerifiedWithPhoneNumber:phoneTwoFaStatus:email:] */

void FUN_0005a330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_0005a8c4(param_3,param_4,param_5,param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0005a3b4; end: 0005a3c7; +[SCUserVerificationResult noneVerify] */

void FUN_0005a3b4(void)

{
  FUN_0005a9a0();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0005a3c8; end: 0005a4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a3c8(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                 undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_00ae8420);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(long *)(unaff_x20 + _DAT_00ae8428) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x5a4ac);
        (*pcVar2)();
      }
      if (*(long *)(unaff_x20 + _DAT_00ae8430) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x5a4b8);
        (*pcVar2)();
      }
      (*param_1)(*(long *)(unaff_x20 + _DAT_00ae8428));
    }
    else {
      if (((undefined8 *)(unaff_x20 + _DAT_00ae8438))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x5a4b4);
        (*pcVar2)();
      }
      (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_00ae8438));
    }
  }
  else if (bVar1 == 2) {
    if (*(long *)(unaff_x20 + _DAT_00ae8440) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5a4b0);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x20 + _DAT_00ae8448) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5a4bc);
      (*pcVar2)();
    }
    if (((undefined8 *)(unaff_x20 + _DAT_00ae8450))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5a4c0);
      (*pcVar2)();
    }
    (*param_5)(*(long *)(unaff_x20 + _DAT_00ae8440),*(long *)(unaff_x20 + _DAT_00ae8448),
               *(undefined8 *)(unaff_x20 + _DAT_00ae8450));
  }
  else {
    (*param_7)();
  }
  return;
}



/* Entry: 0005a4c0; end: 0005a533; -[SCUserVerificationResult matchPhoneVerify:emailVerify:bothPhoneAndEmailVerified:noneVerify:] */

void FUN_0005a4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_0005a3c8(FUN_0005ac08,auStack_40,FUN_0005ac1c,auStack_60,FUN_0005ac54,auStack_80,FUN_0005acac,
               auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 0005a534; end: 0005a567;  */

void FUN_0005a534(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0005a568; end: 0005a5e7; -[SCUserVerificationResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a568(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8428));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8430));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8438 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8440));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8448));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8450 + 8));
  return;
}



/* Entry: 0005a5e8; end: 0005a5f7;  */

ulong FUN_0005a5e8(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 0005a5f8; end: 0005a747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a5f8(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  bVar1 = *(byte *)(param_2 + _DAT_00ae8420);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      lVar3 = *(long *)(param_2 + _DAT_00ae8428);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x5a734);
        (*pcVar2)();
      }
      lVar4 = *(long *)(param_2 + _DAT_00ae8430);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x5a740);
        (*pcVar2)();
      }
      _objc_retain(lVar3);
      _objc_retain(lVar4);
    }
    else {
      lVar4 = ((long *)(param_2 + _DAT_00ae8438))[1];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x5a73c);
        (*pcVar2)();
      }
      lVar3 = *(long *)(param_2 + _DAT_00ae8438);
      _swift_bridgeObjectRetain(lVar4);
    }
    lVar6 = 0;
    lVar5 = 0;
  }
  else if (bVar1 == 2) {
    lVar3 = *(long *)(param_2 + _DAT_00ae8440);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5a738);
      (*pcVar2)();
    }
    lVar4 = *(long *)(param_2 + _DAT_00ae8448);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5a744);
      (*pcVar2)();
    }
    lVar5 = ((long *)(param_2 + _DAT_00ae8450))[1];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x5a748);
      (*pcVar2)();
    }
    lVar6 = *(long *)(param_2 + _DAT_00ae8450);
    _objc_retain(lVar3);
    _objc_retain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  _objc_release(param_2);
  *param_1 = lVar3;
  param_1[1] = lVar4;
  param_1[2] = lVar6;
  param_1[3] = lVar5;
  *(byte *)(param_1 + 4) = bVar1;
  return;
}



/* Entry: 0005a748; end: 0005a8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a748(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_0005aa40();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_00ae8420) = 0;
  *(long *)(lVar4 + _DAT_00ae8428) = param_1;
  *(undefined8 *)(lVar4 + _DAT_00ae8430) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00ae8438);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_00ae8440) = 0;
  *(undefined8 *)(lVar4 + _DAT_00ae8448) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00ae8450);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = PTR_s_init_00abbf70;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar2);
  return;
}



/* Entry: 0005a8c4; end: 0005a99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a8c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_0005aa40();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_00ae8420) = 2;
  *(undefined8 *)(lVar4 + _DAT_00ae8428) = 0;
  *(undefined8 *)(lVar4 + _DAT_00ae8430) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00ae8438);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_00ae8440) = param_1;
  *(undefined8 *)(lVar4 + _DAT_00ae8448) = param_2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_00ae8450);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = PTR_s_init_00abbf70;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _swift_bridgeObjectRetain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar2);
  return;
}



/* Entry: 0005a9a0; end: 0005aa3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a9a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  FUN_0005aa40();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae8420) = 3;
  *(undefined8 *)(lVar2 + _DAT_00ae8428) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae8430) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00ae8438);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae8440) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae8448) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00ae8450);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0005aa40; end: 0005aa5f;  */

void FUN_0005aa40(void)

{
  _objc_opt_self(&PTR_PTR_00ac7d70);
  return;
}



/* Entry: 0005aa60; end: 0005abc7;  */

int FUN_0005aa60(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0005aadc;
        goto LAB_0005aac0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0005aac0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_0005aadc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0005abc8; end: 0005ac07;  */

void FUN_0005abc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0190;
  _swift_getWitnessTable(&UNK_007d0190,&UNK_009a0858);
  puRam0000000000ae8480 = puVar1;
  return;
}



/* Entry: 0005ac08; end: 0005ac1b;  */

void FUN_0005ac08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0005ac18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 0005ac1c; end: 0005ac53;  */

void FUN_0005ac1c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0005ac54; end: 0005acab;  */

void FUN_0005ac54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 0005acac; end: 0005accf;  */

void FUN_0005acac(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0005acb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 0005acd0; end: 0005ad27;  */

uint FUN_0005acd0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_0005ad28(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 0005ad28; end: 0005ae97;  */

byte FUN_0005ad28(ulong *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  cVar1 = (char)param_1[1];
  cVar2 = *(char *)(param_2 + 1);
  if (cVar1 == -1) {
    if (cVar2 == -1) {
LAB_0005ae30:
      uVar3 = param_1[2];
      FUN_00038814(uVar3,param_1[3],param_2[2],param_2[3]);
      if ((uVar3 & 1) != 0) {
        uVar3 = param_1[4];
        if (((uVar3 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar3 & 1) != 0)) {
          bVar4 = (byte)param_1[6] ^ *(byte *)(param_2 + 6) ^ 1;
          goto LAB_0005ae7c;
        }
      }
    }
  }
  else if (cVar2 != -1) {
    uVar5 = *param_1;
    uVar6 = *param_2;
    uVar3 = uVar5;
    if (cVar1 == '\x01') {
      if (cVar2 == '\x01') {
        FUN_00023284(0);
        func_0x0005acb8(uVar6,1);
        func_0x0005acb8(uVar5,1);
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar6);
        func_0x0005b200(uVar6,1);
        func_0x0005b200(uVar5,1);
joined_r0x0005ae2c:
        if ((uVar3 & 1) != 0) goto LAB_0005ae30;
      }
    }
    else if (cVar2 != '\x01') {
      FUN_00023284(0);
      func_0x0005acb8(uVar6,cVar2);
      func_0x0005acb8(uVar5,cVar1);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar6);
      func_0x0005b200(uVar6,cVar2);
      func_0x0005b200(uVar5,cVar1);
      goto joined_r0x0005ae2c;
    }
  }
  bVar4 = 0;
LAB_0005ae7c:
  return bVar4 & 1;
}



/* Entry: 0005ae98; end: 0005aeff;  */

long FUN_0005ae98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0005af00; end: 0005af03;  */

void FUN_0005af00(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0005af04; end: 0005b08f;  */

undefined8 * FUN_0005af04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = *(char *)(param_2 + 1);
  if (cVar2 == -1) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  else {
    uVar3 = *param_2;
    func_0x0005accc(uVar3,cVar2);
    *param_1 = uVar3;
    *(char *)(param_1 + 1) = cVar2;
  }
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  func_0x00023304(uVar3,uVar1);
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0005b090; end: 0005b157;  */

undefined8 FUN_0005b090(undefined8 param_1)

{
  FUN_0005b2c0();
  return param_1;
}



/* Entry: 0005b158; end: 0005b213;  */

int FUN_0005b158(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 0005b214; end: 0005b27b;  */

uint FUN_0005b214(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) == '\x01') {
LAB_0005b250:
      uVar1 = 0;
      FUN_00023284(0);
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,uVar3,uVar1);
      return (uint)uVar2 & 1;
    }
  }
  else if (*(char *)(param_2 + 1) != '\x01') goto LAB_0005b250;
  return 0;
}



/* Entry: 0005b27c; end: 0005b2bf;  */

undefined8 * FUN_0005b27c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0005accc(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Entry: 0005b2c0; end: 0005b2cf;  */

void FUN_0005b2c0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Entry: 0005b2d0; end: 0005b31f;  */

undefined8 * FUN_0005b2d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x0005accc(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_0005af00(uVar3,uVar2);
  return param_1;
}



/* Entry: 0005b320; end: 0005b35b;  */

undefined8 * FUN_0005b320(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_0005af00(uVar3,uVar2);
  return param_1;
}



/* Entry: 0005b35c; end: 0005b42f;  */

int FUN_0005b35c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0005b430; end: 0005b497;  */

bool FUN_0005b430(ulong param_1,long param_2,int param_3,ulong param_4,long param_5,int param_6)

{
  if (param_2 == 0) {
    if (param_5 == 0) goto LAB_0005b480;
  }
  else if (param_5 != 0) {
    if (((param_1 != param_4) || (param_2 != param_5)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
      return false;
    }
LAB_0005b480:
    return param_3 == param_6;
  }
  return false;
}



/* Entry: 0005b498; end: 0005b4a3;  */

undefined8 * FUN_0005b498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0005b4a4; end: 0005b4d7;  */

undefined8 * FUN_0005b4a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 0005b4d8; end: 0005b52b;  */

undefined8 * FUN_0005b4d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 0005b52c; end: 0005b567;  */

undefined8 * FUN_0005b52c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 0005b568; end: 0005b62f;  */

int FUN_0005b568(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 0005b630; end: 0005b7a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005b630(long param_1)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  lVar2 = _DAT_00ae8738;
  uVar6 = 0;
  if (param_1 != 0) {
    bVar1 = *(byte *)(unaff_x20 + _DAT_00ae8738);
    uVar5 = (ulong)bVar1;
    if (bVar1 == 0) {
LAB_0005b66c:
      uVar8 = (ulong)*(byte *)(param_1 + _DAT_00ae8738);
      if (*(byte *)(param_1 + _DAT_00ae8738) == 0) goto joined_r0x0005b6b8;
LAB_0005b6ac:
      if ((int)uVar8 == 1) {
        uVar8 = 1;
        goto joined_r0x0005b6b8;
      }
      uVar8 = *(ulong *)(param_1 + _DAT_00ae8740);
      if (uVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x5b7a8);
        (*pcVar3)();
      }
      _objc_retain(uVar8);
      if (uVar5 == 0) goto LAB_0005b6bc;
LAB_0005b678:
      if (uVar5 == 1) {
        if (uVar8 == 1) {
LAB_0005b6c0:
          uVar6 = 1;
          goto LAB_0005b704;
        }
      }
      else {
        if (1 < uVar8) {
          uVar7 = *(undefined8 *)(uVar5 + _DAT_00ae8820);
          uVar9 = *(undefined8 *)(uVar8 + _DAT_00ae8820);
          uVar4 = 0;
          FUN_0006c464();
          auStack_60[0] = uVar9;
          uStack_48 = uVar4;
          _objc_retain(param_1);
          _objc_retain(uVar7);
          _objc_retain(uVar9);
          FUN_0006bd50(auStack_60);
          _objc_release(param_1);
          FUN_0005b808(uVar5);
          FUN_0005b808(uVar8);
          _objc_release(uVar7);
          FUN_00027748(auStack_60);
          goto LAB_0005b704;
        }
        FUN_0005b808(uVar5);
      }
    }
    else {
      if (bVar1 == 1) {
        uVar5 = 1;
        goto LAB_0005b66c;
      }
      uVar5 = *(ulong *)(unaff_x20 + _DAT_00ae8740);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x5b7a4);
        (*pcVar3)();
      }
      _objc_retain(uVar5);
      uVar8 = (ulong)*(byte *)(param_1 + lVar2);
      if (*(byte *)(param_1 + lVar2) != 0) goto LAB_0005b6ac;
joined_r0x0005b6b8:
      if (uVar5 != 0) goto LAB_0005b678;
LAB_0005b6bc:
      if (uVar8 == 0) goto LAB_0005b6c0;
    }
    FUN_0005b808(uVar8);
  }
  uVar6 = 0;
LAB_0005b704:
  return uVar6 & 1;
}



/* Entry: 0005b7a8; end: 0005b807; -[SCRegistrationMethod isSameTypeAs:] */

uint FUN_0005b7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0005b630(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (uint)param_3 & 1;
}



/* Entry: 0005b808; end: 0005b817;  */

void FUN_0005b808(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 0005b818; end: 0005b8c7;  */

uint FUN_0005b818(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  uVar2 = *param_2;
  if (lVar3 == 0) {
    if (uVar2 == 0) {
      return 1;
    }
  }
  else if (lVar3 == 1) {
    if (uVar2 == 1) {
      return 1;
    }
  }
  else if (1 < uVar2) {
    uVar1 = 0;
    FUN_00023284(0);
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(lVar3,uVar2,uVar1);
    return (uint)lVar3 & 1;
  }
  return 0;
}



/* Entry: 0005b8c8; end: 0005b8df;  */

void FUN_0005b8c8(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)();
    return;
  }
  return;
}



/* Entry: 0005b8e0; end: 0005b967;  */

ulong * FUN_0005b8e0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      _objc_retain();
    }
  }
  else if (uVar1 < 0xffffffff) {
    _objc_release(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    _objc_retain();
    _objc_release(uVar2);
  }
  return param_1;
}



/* Entry: 0005b968; end: 0005b973;  */

void FUN_0005b968(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 0005b974; end: 0005b9e7;  */

ulong * FUN_0005b974(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar1 < 0xffffffff) {
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    _objc_release(uVar1);
    *param_1 = uVar2;
  }
  else {
    *param_1 = uVar2;
    _objc_release(uVar1);
  }
  return param_1;
}



/* Entry: 0005b9e8; end: 0005bb03;  */

int FUN_0005b9e8(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffe;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 0005bb04; end: 0005bb43;  */

void FUN_0005bb04(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d03b0;
  _swift_getWitnessTable(&UNK_007d03b0,&UNK_009a0bb8);
  puRam0000000000ae8488 = puVar1;
  return;
}



/* Entry: 0005bb44; end: 0005bbef;  */

void FUN_0005bb44(void)

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



/* Entry: 0005bbf0; end: 0005bc27;  */

void FUN_0005bbf0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 0005bc28; end: 0005bc5b;  */

void FUN_0005bc28(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_2);
  return;
}



/* Entry: 0005bc5c; end: 0005bcb3;  */

uint FUN_0005bc5c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_0005bcb4(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 0005bcb4; end: 0005bfcb;  */

undefined8 FUN_0005bcb4(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_b0 [2];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar7 = auStack_b0;
  uVar11 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar5 = param_1[3];
  uVar8 = *param_2;
  lVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (uVar9 == 1) {
    if (lVar2 != 1) {
LAB_0005bd00:
      FUN_0005bc28(uVar8,lVar2,uVar1,uVar3);
      FUN_0005bc28(uVar11,uVar9,uVar10,uVar5);
      func_0x0005c530(uVar11,uVar9,uVar10,uVar5);
      func_0x0005c530(uVar8,lVar2,uVar1,uVar3);
      return 0;
    }
  }
  else {
    if (lVar2 == 1) goto LAB_0005bd00;
    FUN_0005bc28(uVar8,lVar2,uVar1,uVar3);
    FUN_0005bc28(uVar11,uVar9,uVar10,uVar5);
    uVar4 = uVar11;
    FUN_0006f84c(uVar11,uVar9,uVar10,uVar5,uVar8,lVar2,uVar1,uVar3);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(uVar3);
    func_0x0005c530(uVar11,uVar9,uVar10,uVar5);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[4] != *(int *)(param_2 + 4)) {
    return 0;
  }
  uVar11 = param_1[6];
  uVar10 = param_1[5];
  uVar9 = param_2[6];
  uVar8 = param_2[5];
  uStack_80 = uVar8;
  uStack_78 = uVar9;
  uStack_70 = uVar10;
  uStack_68 = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    if (uVar9 >> 0x3c < 0xf) {
      func_0x0005c564(&uStack_70,&uStack_90);
      func_0x0005c564(&uStack_80,&uStack_90);
      uVar5 = uVar10;
      FUN_00038814(uVar10,uVar11,uVar8,uVar9);
      FUN_00023344(uVar8,uVar9);
      FUN_00023344(uVar10,uVar11);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_0005bec0;
    }
  }
  else if (0xe < uVar9 >> 0x3c) {
    func_0x0005c564(&uStack_70,&uStack_90);
    func_0x0005c564(&uStack_80,&uStack_90);
    FUN_00023344(uVar10,uVar11);
LAB_0005bec0:
    uVar11 = param_1[8];
    uVar10 = param_1[7];
    uVar9 = param_2[8];
    uVar8 = param_2[7];
    uStack_a0 = uVar8;
    uStack_98 = uVar9;
    uStack_90 = uVar10;
    uStack_88 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (uVar9 >> 0x3c < 0xf) {
        func_0x0005c564(&uStack_90,auStack_b0);
        func_0x0005c564(&uStack_a0,auStack_b0);
        uVar5 = uVar10;
        FUN_00038814(uVar10,uVar11,uVar8,uVar9);
        FUN_00023344(uVar8,uVar9);
        FUN_00023344(uVar10,uVar11);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < uVar9 >> 0x3c) {
      func_0x0005c564(&uStack_90,auStack_b0);
      func_0x0005c564(&uStack_a0,auStack_b0);
      FUN_00023344(uVar10,uVar11);
      return 1;
    }
    func_0x0005c564(&uStack_90,auStack_b0);
    puVar6 = &uStack_a0;
    goto LAB_0005bf38;
  }
  func_0x0005c564(&uStack_70,&uStack_90);
  puVar6 = &uStack_80;
  puVar7 = &uStack_90;
LAB_0005bf38:
  func_0x0005c564(puVar6,puVar7);
  FUN_00023344(uVar10,uVar11);
  FUN_00023344(uVar8,uVar9);
  return 0;
}



/* Entry: 0005bfcc; end: 0005c063;  */

long FUN_0005bfcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0005c064; end: 0005c2f3;  */

undefined8 * FUN_0005c064(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar1;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
  }
  param_1[4] = param_2[4];
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    func_0x00023304(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
  }
  uVar3 = param_2[8];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[7];
    func_0x00023304(uVar2,uVar3);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
  }
  return param_1;
}



/* Entry: 0005c2f4; end: 0005c457;  */

undefined8 FUN_0005c2f4(undefined8 param_1)

{
  (*(code *)(undefined *)0x6f950)();
  return param_1;
}



/* Entry: 0005c458; end: 0005c52f;  */

int FUN_0005c458(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 0005c530; end: 0005c5b3;  */

void FUN_0005c530(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_4);
  return;
}



/* Entry: 0005c5b4; end: 0005c5cb; -[SCRegistrationUser firstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c5b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae8498);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0005c5cc; end: 0005c5e3; -[SCRegistrationUser setFirstName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c5cc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00ae8498);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0005c5e4; end: 0005c623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005c5e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae8498;
  _swift_beginAccess(unaff_x20 + _DAT_00ae8498,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_000608c4;
  return auVar2;
}



/* Entry: 0005c624; end: 0005c63b; -[SCRegistrationUser lastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c624(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00ae84a0);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0005c63c; end: 0005c653; -[SCRegistrationUser setLastName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c63c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00ae84a0);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0005c654; end: 0005c693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005c654(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00ae84a0;
  _swift_beginAccess(unaff_x20 + _DAT_00ae84a0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x608c8;
  return auVar2;
}



/* Entry: 0005c694; end: 0005c78b; -[SCRegistrationUser birthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c694(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_00b647e0;
  puVar4 = auStack_60 + -extraout_x8;
  _swift_beginAccess(param_1 + _DAT_00b647e0,auStack_58,0,0);
  FUN_00060714(param_1 + lVar1,puVar4,0xae60c8,&UNK_007cccd0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0005c78c; end: 0005c7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c78c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00b647e0;
  _swift_beginAccess(unaff_x20 + _DAT_00b647e0,auStack_48,0,0);
  FUN_00060714(unaff_x20 + lVar1,param_1,0xae60c8,&UNK_007cccd0);
  return;
}



/* Entry: 0005c7f0; end: 0005c943; -[SCRegistrationUser setBirthday:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c7f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_00b647e0;
  _swift_beginAccess(param_1 + _DAT_00b647e0,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  FUN_00013a14(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 0005c944; end: 0005c983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005c944(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00b647e0;
  _swift_beginAccess(unaff_x20 + _DAT_00b647e0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x608d0;
  return auVar2;
}



/* Entry: 0005c984; end: 0005ca17; -[SCRegistrationUser username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005c984(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00b647e8;
  _swift_beginAccess(param_1 + _DAT_00b647e8,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 0005ca18; end: 0005ca23; -[SCRegistrationUser setUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005ca18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00b647e8;
  _swift_beginAccess(param_1 + _DAT_00b647e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 0005ca24; end: 0005ca77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005ca24(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00b647e8;
  _swift_beginAccess(unaff_x20 + _DAT_00b647e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 0005ca78; end: 0005cab7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005ca78(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00b647e8;
  _swift_beginAccess(unaff_x20 + _DAT_00b647e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x608cc;
  return auVar2;
}



/* Entry: 0005cab8; end: 0005cb77; -[SCRegistrationUser usernameSuggestions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cab8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00b647f0;
  _swift_beginAccess(param_1 + _DAT_00b647f0,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_00065f04(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 0005cb78; end: 0005cc3f; -[SCRegistrationUser setUsernameSuggestions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cb78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_00065f04(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  }
  lVar1 = _DAT_00b647f0;
  _swift_beginAccess(param_1 + _DAT_00b647f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0005cc40; end: 0005cc7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005cc40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00b647f0;
  _swift_beginAccess(unaff_x20 + _DAT_00b647f0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x608e0;
  return auVar2;
}



/* Entry: 0005cc80; end: 0005cc8b; -[SCRegistrationUser password] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cc80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_00b647f8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0005cc8c; end: 0005ccff;  */

void FUN_0005cc8c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0005cd00; end: 0005cd0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005cd00(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_00b647f8);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 0005cd0c; end: 0005cd5b;  */

undefined1  [16] FUN_0005cd0c(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 0005cd5c; end: 0005cd67; -[SCRegistrationUser setPassword:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cd5c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00b647f8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0005cd68; end: 0005cddf;  */

void FUN_0005cd68(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 0005cde0; end: 0005cdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cde0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00b647f8);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0005cdec; end: 0005ce43;  */

void FUN_0005cdec(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 0005ce44; end: 0005ce83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005ce44(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00b647f8;
  _swift_beginAccess(unaff_x20 + _DAT_00b647f8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x608d4;
  return auVar2;
}



/* Entry: 0005ce84; end: 0005cf07; -[SCRegistrationUser registerAttemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0005ce84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00b64800;
  _swift_beginAccess(param_1 + _DAT_00b64800,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 0005cf08; end: 0005cfa3; -[SCRegistrationUser setRegisterAttemptCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cf08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00b64800;
  _swift_beginAccess(param_1 + _DAT_00b64800,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 0005cfa4; end: 0005cfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0005cfa4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_00b64800;
  _swift_beginAccess(unaff_x20 + _DAT_00b64800,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x608d8;
  return auVar2;
}



/* Entry: 0005cfe4; end: 0005d077; -[SCRegistrationUser email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005cfe4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_00b64808;
  _swift_beginAccess(param_1 + _DAT_00b64808,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 0005d078; end: 0005d083; -[SCRegistrationUser setEmail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005d078(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_00b64808;
  _swift_beginAccess(param_1 + _DAT_00b64808,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}


