/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00069a40; end: 00069aeb;  */

void FUN_00069a40(void)

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



/* Entry: 00069aec; end: 00069c87;  */

void FUN_00069aec(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 00069c88; end: 00069d33;  */

void FUN_00069c88(void)

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



/* Entry: 00069d34; end: 00069d6b;  */

void FUN_00069d34(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 00069d6c; end: 00069ddb; -[SCOAuthResult description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069d6c(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00ae87d0) == '\0') {
    if (*(long *)(param_1 + _DAT_00ae87d8) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x69dd8);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + _DAT_00ae87e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x69ddc);
      (*pcVar1)();
    }
  }
  else if ((*(char *)(param_1 + _DAT_00ae87d0) == '\x01') &&
          (*(long *)(param_1 + _DAT_00ae87e8) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x69d98);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00069ddc; end: 00069e23; -[SCOAuthResult init] */

void FUN_00069ddc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OAuthScope/OAuthResultWrapper.swift",0x23,2,
             0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x69e24);
  (*pcVar1)();
}



/* Entry: 00069e24; end: 00069e57; -[SCOAuthResult hash] */

undefined8 FUN_00069e24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00069e58();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00069e58; end: 0006a0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00069e58(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_00ae87d0));
  lVar1 = *(long *)(unaff_x20 + _DAT_00ae87d8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_00ae87e0) == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_0006a66c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_00ae87e8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_0006a66c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006a0f4; end: 0006a173; -[SCOAuthResult isEqual:] */

uint FUN_0006a0f4(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00069f64(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006a174; end: 0006a177; -[SCOAuthResult copyWithZone:] */

void FUN_0006a174(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006a178; end: 0006a20b; +[SCOAuthResult success::] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae87d0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae87d8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_00ae87e0) = param_4;
  *(undefined8 *)(lVar2 + _DAT_00ae87e8) = 0;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006a20c; end: 0006a28f; +[SCOAuthResult redirectToRegistration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a20c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae87d0) = 1;
  *(undefined8 *)(lVar2 + _DAT_00ae87d8) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae87e0) = 0;
  *(undefined8 *)(lVar2 + _DAT_00ae87e8) = param_3;
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



/* Entry: 0006a290; end: 0006a397; +[SCOAuthResult failure] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a290(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae87d0) = 2;
  *(undefined8 *)(lVar1 + _DAT_00ae87d8) = 0;
  *(undefined8 *)(lVar1 + _DAT_00ae87e0) = 0;
  *(undefined8 *)(lVar1 + _DAT_00ae87e8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006a398; end: 0006a3fb; -[SCOAuthResult matchSuccess:redirectToRegistration:failure:] */

void FUN_0006a398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0006a304(FUN_0006a640,auStack_40,0x6a654,auStack_60,0x6a664,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 0006a3fc; end: 0006a42f;  */

void FUN_0006a3fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0006a430; end: 0006a477; -[SCOAuthResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a430(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae87d8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae87e0));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae87e8));
  return;
}



/* Entry: 0006a478; end: 0006a497;  */

void FUN_0006a478(void)

{
  _objc_opt_self(&PTR_PTR_00ac89d8);
  return;
}



/* Entry: 0006a498; end: 0006a5ff;  */

int FUN_0006a498(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0006a514;
        goto LAB_0006a4f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0006a4f8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_0006a514:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0006a600; end: 0006a63f;  */

void FUN_0006a600(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0d84;
  _swift_getWitnessTable(&UNK_007d0d84,&UNK_009a1678);
  puRam0000000000ae8818 = puVar1;
  return;
}



/* Entry: 0006a640; end: 0006a66b;  */

void FUN_0006a640(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0006a650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 0006a66c; end: 0006a82b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006a66c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar3 = *(long *)(unaff_x20 + _DAT_00ae8820);
  __ss6HasherVABycfC(auStack_c0);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(lVar3 + _DAT_00ae8880));
  __ss6HasherV8finalizeSiyF();
  __ss6HasherV8_combineyySuF();
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8828))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8828);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8830))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8830);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8838))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8838);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae8840);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_00ae8840))[1]);
  uVar1 = uVar2;
  func_0x007843a0();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae8848))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8848);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006a82c; end: 0006ab8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006a82c(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  long unaff_x20;
  uint uVar14;
  uint uVar15;
  long lStack_88;
  undefined8 auStack_80 [3];
  long lStack_68;
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  func_0x0006bbb4(param_1,auStack_80,0xae65a0,&UNK_007ce270);
  if (lStack_68 == 0) {
    FUN_00027748(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_0099b8d8 + 8,lVar9,6);
    if (((ulong)plVar5 & 1) != 0) {
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_00ae8820);
      uVar6 = 0;
      FUN_0006c464();
      auStack_80[0] = uVar12;
      lStack_68 = uVar6;
      _objc_retain(uVar12);
      uVar4 = 0;
      FUN_0006bd50();
      FUN_00027748(auStack_80);
      lVar9 = ((long *)(unaff_x20 + _DAT_00ae8828))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_00ae8828))[1];
      uVar13 = (uint)(lVar9 == 0 && lVar10 == 0);
      if (lVar9 != 0 && lVar10 != 0) {
        lVar7 = *(long *)(unaff_x20 + _DAT_00ae8828);
        if (lVar7 == *(long *)(lStack_88 + _DAT_00ae8828) && lVar9 == lVar10) {
          uVar13 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar13 = (uint)lVar7;
        }
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_00ae8830))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_00ae8830))[1];
      uVar14 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_00ae8830);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_00ae8830)) && (lVar9 == lVar10)) {
          uVar14 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar14 = (uint)lVar7;
        }
      }
      lVar9 = ((long *)(unaff_x20 + _DAT_00ae8838))[1];
      lVar10 = ((long *)(lStack_88 + _DAT_00ae8838))[1];
      uVar15 = (uint)(lVar9 == 0 && lVar10 == 0);
      if ((lVar9 != 0) && (lVar10 != 0)) {
        lVar7 = *(long *)(unaff_x20 + _DAT_00ae8838);
        if ((lVar7 == *(long *)(lStack_88 + _DAT_00ae8838)) && (lVar9 == lVar10)) {
          uVar15 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar15 = (uint)lVar7;
        }
      }
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_00ae8840);
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_00ae8840))[1];
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_00ae8840);
      uVar8 = ((undefined8 *)(lStack_88 + _DAT_00ae8840))[1];
      func_0x00023304(uVar12,uVar8);
      FUN_00038814(uVar6,uVar1,uVar12,uVar8);
      FUN_00023358(uVar12,uVar8);
      uVar12 = *(undefined8 *)(lStack_88 + _DAT_00ae8848);
      uVar2 = ((undefined8 *)(lStack_88 + _DAT_00ae8848))[1];
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8848);
      uVar3 = ((undefined8 *)(unaff_x20 + _DAT_00ae8848))[1];
      if (uVar3 >> 0x3c < 0xf) {
        FUN_000308a8(uVar12,uVar2);
        if (0xe < uVar2 >> 0x3c) {
          FUN_000308a8(uVar1,uVar3);
          _objc_release(lStack_88);
          goto LAB_0006aacc;
        }
        FUN_000308a8(uVar12,uVar2);
        FUN_000308a8(uVar1,uVar3);
        uVar8 = uVar1;
        FUN_00038814(uVar1,uVar3,uVar12,uVar2);
        uVar11 = (uint)uVar8;
        FUN_00023344(uVar12,uVar2);
        _objc_release(lStack_88);
        FUN_00023344(uVar12,uVar2);
        FUN_00023344(uVar1,uVar3);
      }
      else {
        FUN_000308a8(uVar12,uVar2);
        FUN_000308a8(uVar1,uVar3);
        _objc_release(lStack_88);
        if (uVar2 >> 0x3c < 0xf) {
LAB_0006aacc:
          FUN_00023344(uVar1,uVar3);
          FUN_00023344(uVar12,uVar2);
          uVar11 = 0;
        }
        else {
          FUN_00023344(uVar1,uVar3);
          uVar11 = 1;
        }
      }
      if ((uVar4 & uVar13 & uVar14 & uVar15 & 1) != 0) {
        uVar11 = (uint)uVar6 & uVar11;
        goto LAB_0006ab68;
      }
    }
  }
  uVar11 = 0;
LAB_0006ab68:
  return uVar11 & 1;
}



/* Entry: 0006ab8c; end: 0006ab9b; -[SCOAuthRegistrationCredential type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ab8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8820));
  return;
}



/* Entry: 0006ab9c; end: 0006aba7; -[SCOAuthRegistrationCredential firstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ab9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8828))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8828);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006aba8; end: 0006abb3; -[SCOAuthRegistrationCredential lastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006aba8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8830))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8830);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006abb4; end: 0006abbf; -[SCOAuthRegistrationCredential email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006abb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8838))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8838);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006abc0; end: 0006ac17;  */

void FUN_0006abc0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006ac18; end: 0006ac73; -[SCOAuthRegistrationCredential identityToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ac18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_00ae8840);
  uVar2 = ((undefined8 *)(param_1 + _DAT_00ae8840))[1];
  func_0x00023304(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  FUN_00023358(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 0006ac74; end: 0006ace7; -[SCOAuthRegistrationCredential nonce] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ac74(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_00ae8848))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8848);
    func_0x00023304(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    FUN_00023344(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 0006ace8; end: 0006adcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ace8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8820) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8828);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8830);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8838);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8840);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8848);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006add0; end: 0006af6b; -[SCOAuthRegistrationCredential initWithType:firstName:lastName:email:identityToken:nonce:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006add0(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  _swift_getObjectType();
  if (param_4 == 0) {
    lStack_88 = 0;
    lStack_80 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_88 = param_2;
    lStack_80 = param_4;
  }
  if (param_5 == 0) {
    lStack_90 = 0;
    lVar3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar3 = param_2;
    lStack_90 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar8 = param_2;
  }
  _objc_retain();
  _objc_retain();
  lVar5 = param_8;
  _objc_retain();
  uVar6 = param_7;
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  lVar7 = param_2;
  _objc_release(param_7);
  if (lVar5 == 0) {
    param_8 = 0;
    lVar7 = -0x1000000000000000;
  }
  else {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar5);
  }
  *(undefined8 *)(param_1 + _DAT_00ae8820) = param_3;
  plVar1 = (long *)(param_1 + _DAT_00ae8828);
  *plVar1 = lStack_80;
  plVar1[1] = lStack_88;
  plVar1 = (long *)(param_1 + _DAT_00ae8830);
  *plVar1 = lStack_90;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_00ae8838);
  *plVar1 = param_6;
  plVar1[1] = lVar8;
  puVar2 = (undefined8 *)(param_1 + _DAT_00ae8840);
  *puVar2 = uVar6;
  puVar2[1] = param_2;
  plVar1 = (long *)(param_1 + _DAT_00ae8848);
  *plVar1 = param_8;
  plVar1[1] = lVar7;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006af6c; end: 0006b0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0006af6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a0 [16];
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
  
  puVar2 = auStack_b0;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8820) = *param_1;
  uStack_48 = param_1[2];
  uStack_50 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8828);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[4];
  uStack_60 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8830);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uStack_68 = param_1[6];
  uStack_70 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8838);
  puVar1[1] = uStack_68;
  *puVar1 = uStack_70;
  uStack_78 = param_1[8];
  uStack_80 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8840);
  puVar1[1] = uStack_78;
  *puVar1 = uStack_80;
  uStack_88 = param_1[10];
  uStack_90 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8848);
  puVar1[1] = uStack_88;
  *puVar1 = uStack_90;
  _objc_retain();
  func_0x0006bbb4(&uStack_50,auStack_a0,0xae8850,&UNK_007d0e28);
  func_0x0006bbb4(&uStack_60,auStack_a0,0xae8850,&UNK_007d0e28);
  func_0x0006bbb4(&uStack_70,auStack_a0,0xae8850,&UNK_007d0e28);
  FUN_00066ddc(&uStack_80,auStack_a0);
  func_0x0006bbb4(&uStack_90,auStack_a0,0xae8490,&UNK_007d0910);
  _objc_msgSendSuper2(auStack_b0,PTR_s_init_00abbf70);
  func_0x0006bbfc(param_1);
  return puVar2;
}



/* Entry: 0006b0bc; end: 0006b0ef; -[SCOAuthRegistrationCredential hash] */

undefined8 FUN_0006b0bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_0006a66c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 0006b0f0; end: 0006b16f; -[SCOAuthRegistrationCredential isEqual:] */

uint FUN_0006b0f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0006a82c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006b170; end: 0006b173; -[SCOAuthRegistrationCredential copyWithZone:] */

void FUN_0006b170(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006b174; end: 0006b3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006b174(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
  func_0x00782780(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8828))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8828);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x414e5f5453524946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e5f5453524946,0xea0000000000454d);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8830))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8830);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4d414e5f5453414c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d414e5f5453414c,0xe900000000000045);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8838))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8838);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8840);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_00ae8840))[1]);
  uVar2 = 0x595449544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x595449544e454449,0xee004e454b4f545f);
  func_0x00782780(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae8848))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8848);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0x45434e4f4e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45434e4f4e,0xe500000000000000);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0006b3c4; end: 0006b413; -[SCOAuthRegistrationCredential encodeWithCoder:] */

void FUN_0006b3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0006b174(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0006b414; end: 0006b443;  */

void FUN_0006b414(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_0006b444(param_1);
  return;
}



/* Entry: 0006b444; end: 0006ba4f;  */

undefined8 FUN_0006b444(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45505954,0xe400000000000000);
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
  }
  else {
    uVar4 = 0;
    FUN_0006c464(0);
    puVar2 = PTR___sypN_0099b8d8;
    puVar6 = &uStack_b0;
    _swift_dynamicCast(puVar6,&uStack_80,PTR___sypN_0099b8d8 + 8,uVar4,6);
    uVar4 = uStack_b0;
    if (((ulong)puVar6 & 1) == 0) {
      _objc_release(param_1);
      goto LAB_0006b85c;
    }
    uVar7 = 0x414e5f5453524946;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e5f5453524946,0xea0000000000454d);
    lVar5 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
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
      FUN_00027748(&uStack_80);
      uStack_b8 = 0;
      uVar11 = 0;
    }
    else {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___sSSN_0099b040,6);
      uVar11 = uStack_a8;
      uStack_b8 = uStack_b0;
      if ((int)puVar6 == 0) {
        uStack_b8 = 0;
        uVar11 = 0;
      }
    }
    uVar7 = 0x4d414e5f5453414c;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4d414e5f5453414c,0xe900000000000045);
    lVar5 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
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
      FUN_00027748(&uStack_80);
      uStack_c0 = 0;
      uVar12 = 0;
    }
    else {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___sSSN_0099b040,6);
      uVar12 = uStack_a8;
      uStack_c0 = uStack_b0;
      if ((int)puVar6 == 0) {
        uStack_c0 = 0;
        uVar12 = 0;
      }
    }
    uVar7 = 0x4c49414d45;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
    lVar5 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
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
      FUN_00027748(&uStack_80);
      uVar13 = 0;
      uVar7 = 0;
    }
    else {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___sSSN_0099b040,6);
      uVar13 = uStack_a8;
      uVar7 = uStack_b0;
      if ((int)puVar6 == 0) {
        uVar7 = 0;
        uVar13 = 0;
      }
    }
    uVar8 = 0x595449544e454449;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x595449544e454449,0xee004e454b4f545f);
    lVar5 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
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
    if (lStack_88 != 0) {
      puVar6 = &uStack_b0;
      _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_0099c3c0,6);
      uVar3 = uStack_a8;
      uVar8 = uStack_b0;
      if (((ulong)puVar6 & 1) != 0) {
        uVar9 = 0x45434e4f4e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45434e4f4e,0xe500000000000000);
        lVar5 = param_1;
        func_0x00781b00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
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
          FUN_00027748(&uStack_80);
          uVar9 = 0;
          uVar1 = 0xf000000000000000;
        }
        else {
          puVar6 = &uStack_b0;
          _swift_dynamicCast(puVar6,&uStack_80,puVar2 + 8,PTR___s10Foundation4DataVN_0099c3c0,6);
          uVar9 = uStack_b0;
          uVar1 = uStack_a8;
          if ((int)puVar6 == 0) {
            uVar9 = 0;
            uVar1 = 0xf000000000000000;
          }
        }
        if (uVar11 == 0) {
          uStack_b8 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b8,uVar11);
          _swift_bridgeObjectRelease(uVar11);
        }
        if (uVar12 == 0) {
          uStack_c0 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,uVar12);
          _swift_bridgeObjectRelease(uVar12);
        }
        if (uVar13 == 0) {
          uVar7 = 0;
        }
        else {
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,uVar13);
          _swift_bridgeObjectRelease(uVar13);
        }
        uVar10 = uVar8;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar8,uVar3);
        if (uVar1 >> 0x3c < 0xf) {
          func_0x00023304(uVar9,uVar1);
          uVar14 = uVar9;
          __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar9,uVar1);
          FUN_00023344(uVar9,uVar1);
        }
        else {
          uVar14 = 0;
        }
        func_0x00786b00();
        _objc_release(uVar4);
        FUN_00023358(uVar8,uVar3);
        FUN_00023344(uVar9,uVar1);
        _objc_release(uStack_b8);
        _objc_release(uStack_c0);
        _objc_release(uVar7);
        _objc_release(uVar10);
        _objc_release(uVar14);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(param_1);
      _objc_release(uVar4);
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar12);
      _swift_bridgeObjectRelease(uVar11);
      goto LAB_0006b85c;
    }
    _objc_release(param_1);
    _objc_release(uVar4);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(uVar11);
  }
  FUN_00027748(&uStack_80);
LAB_0006b85c:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 0006ba50; end: 0006ba77; -[SCOAuthRegistrationCredential initWithCoder:] */

void FUN_0006ba50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_0006b444();
  return;
}



/* Entry: 0006ba78; end: 0006baab; -[SCOAuthRegistrationCredential description] */

void FUN_0006ba78(void)

{
  undefined1 auStack_68 [88];
  
  FUN_0006bc30(auStack_68);
  func_0x0006bbfc(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006baac; end: 0006bb27; -[SCOAuthRegistrationCredential init] */

void FUN_0006baac(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "OAuthScope/OAuthRegistrationCredentialWrapper.swift",0x33,2,0x71,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6baf4);
  (*pcVar1)();
}



/* Entry: 0006bb28; end: 0006bc2f; -[SCOAuthRegistrationCredential .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006bb28(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8820));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8828 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8830 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8838 + 8));
  FUN_00023358(*(undefined8 *)(param_1 + _DAT_00ae8840),((undefined8 *)(param_1 + _DAT_00ae8840))[1]
              );
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae8848))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + _DAT_00ae8848));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0006bc30; end: 0006bd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006bc30(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar9 = *(undefined8 *)(param_2 + _DAT_00ae8820);
  puVar1 = (undefined8 *)(param_2 + _DAT_00ae8828);
  puVar2 = (undefined8 *)(param_2 + _DAT_00ae8830);
  uVar3 = *(undefined8 *)(param_2 + _DAT_00ae8838);
  uVar6 = ((undefined8 *)(param_2 + _DAT_00ae8838))[1];
  uVar4 = *(undefined8 *)(param_2 + _DAT_00ae8840);
  uVar7 = ((undefined8 *)(param_2 + _DAT_00ae8840))[1];
  uVar5 = *(undefined8 *)(param_2 + _DAT_00ae8848);
  uVar8 = ((undefined8 *)(param_2 + _DAT_00ae8848))[1];
  _swift_bridgeObjectRetain(uVar6);
  _objc_retain();
  uVar14 = puVar1[1];
  uVar13 = *puVar1;
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  uVar10 = puVar2[1];
  _swift_bridgeObjectRetain(puVar1[1]);
  _swift_bridgeObjectRetain(uVar10);
  func_0x00023304(uVar4,uVar7);
  FUN_000308a8(uVar5,uVar8);
  *param_1 = uVar9;
  param_1[4] = uVar12;
  param_1[3] = uVar11;
  param_1[2] = uVar14;
  param_1[1] = uVar13;
  param_1[5] = uVar3;
  param_1[6] = uVar6;
  param_1[7] = uVar4;
  param_1[8] = uVar7;
  param_1[9] = uVar5;
  param_1[10] = uVar8;
  return;
}



/* Entry: 0006bd30; end: 0006bd4f;  */

void FUN_0006bd30(void)

{
  _objc_opt_self(&PTR_PTR_00ac8ab0);
  return;
}



/* Entry: 0006bd50; end: 0006bdef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0006bd50(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00ae8880);
      cVar2 = *(char *)(lStack_58 + _DAT_00ae8880);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0006bdf0; end: 0006be9b;  */

void FUN_0006bdf0(void)

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



/* Entry: 0006be9c; end: 0006bedb;  */

void FUN_0006be9c(undefined1 *param_1,long *param_2)

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



/* Entry: 0006bedc; end: 0006bef7; -[SCOAuthType description] */

void FUN_0006bedc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006bef8; end: 0006bf3f; -[SCOAuthType init] */

void FUN_0006bef8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OAuthScope/OAuthTypeWrapper.swift",0x21,2,
             0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6bf40);
  (*pcVar1)();
}



/* Entry: 0006bf40; end: 0006bf87; -[SCOAuthType hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006bf40(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00ae8880));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006bf88; end: 0006c007; -[SCOAuthType isEqual:] */

uint FUN_0006bf88(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0006bd50(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006c008; end: 0006c00b; -[SCOAuthType copyWithZone:] */

void FUN_0006c008(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006c00c; end: 0006c0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c00c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0xee00454c474f4f47;
  if (*(char *)(unaff_x20 + _DAT_00ae8880) != '\x01') {
    uVar2 = 0xed0000454c505041;
  }
  uVar1 = 0x5f45505954425553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f45505954425553,uVar2);
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00782780(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 0006c0c0; end: 0006c10f; -[SCOAuthType encodeWithCoder:] */

void FUN_0006c0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0006c00c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0006c110; end: 0006c13f;  */

void FUN_0006c110(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_0006c140(param_1);
  return;
}



/* Entry: 0006c140; end: 0006c387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0006c140(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar5 = auStack_b0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    _objc_release(param_1);
    FUN_00027748(&uStack_60);
    goto LAB_0006c350;
  }
  plVar3 = &lStack_90;
  _swift_dynamicCast(plVar3,&uStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
  if (((ulong)plVar3 & 1) == 0) {
LAB_0006c348:
    _objc_release(param_1);
LAB_0006c350:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar6 = 0x5f45505954425553;
  if (((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x12ffffbab3afafbf)) ||
     (uVar4 = uVar6,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (0x5f45505954425553,0xed0000454c505041,lStack_90,lStack_88,0), (uVar4 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_88);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_00ae8880) = 0;
    goto LAB_0006c284;
  }
  if ((lStack_90 == 0x5f45505954425553) && (lStack_88 == -0x11ffbab3b8b0b0b9)) {
    _swift_bridgeObjectRelease(0xee00454c474f4f47);
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5f45505954425553,0xee00454c474f4f47,lStack_90,lStack_88,0);
    _swift_bridgeObjectRelease(lStack_88);
    if ((uVar6 & 1) == 0) goto LAB_0006c348;
  }
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_00ae8880) = 1;
  puVar5 = auStack_a0;
LAB_0006c284:
  _objc_msgSendSuper2(puVar5,PTR_s_init_00abbf70);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar5;
}



/* Entry: 0006c388; end: 0006c3af; -[SCOAuthType initWithCoder:] */

void FUN_0006c388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_0006c140();
  return;
}



/* Entry: 0006c3b0; end: 0006c3b7; +[SCOAuthType apple] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c3b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8880) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c3b8; end: 0006c3bf; +[SCOAuthType google] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c3b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8880) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c3c0; end: 0006c40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c3c0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae8880) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c410; end: 0006c42b; -[SCOAuthType matchApple:google:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c410(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_00ae8880) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x0006c428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 0006c42c; end: 0006c45f;  */

void FUN_0006c42c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0006c460; end: 0006c463; -[SCOAuthType .cxx_destruct] */

void FUN_0006c460(void)

{
  return;
}



/* Entry: 0006c464; end: 0006c483;  */

void FUN_0006c464(void)

{
  _objc_opt_self(&PTR_PTR_00ac8ba8);
  return;
}



/* Entry: 0006c484; end: 0006c5eb;  */

int FUN_0006c484(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0006c500;
        goto LAB_0006c4e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0006c4e4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_0006c500:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0006c5ec; end: 0006c62b;  */

void FUN_0006c5ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae88b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0e84;
  _swift_getWitnessTable(&UNK_007d0e84,&UNK_009a1760);
  puRam0000000000ae88b0 = puVar1;
  return;
}



/* Entry: 0006c62c; end: 0006c6d7;  */

void FUN_0006c62c(void)

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



/* Entry: 0006c6d8; end: 0006c70f;  */

void FUN_0006c6d8(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 0006c710; end: 0006c72b; -[SCOptedIn1TLStatus description] */

void FUN_0006c710(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c72c; end: 0006c773; -[SCOptedIn1TLStatus init] */

void FUN_0006c72c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"OAuthScope/OptedIn1TLStatusWrapper.swift",
             0x28,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6c774);
  (*pcVar1)();
}



/* Entry: 0006c774; end: 0006c7bb; -[SCOptedIn1TLStatus hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c774(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00ae88b8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006c7bc; end: 0006c85b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0006c7bc(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_00ae88b8);
      cVar2 = *(char *)(lStack_58 + _DAT_00ae88b8);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 0006c85c; end: 0006c8db; -[SCOptedIn1TLStatus isEqual:] */

uint FUN_0006c85c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_0006c7bc(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006c8dc; end: 0006c8df; -[SCOptedIn1TLStatus copyWithZone:] */

void FUN_0006c8dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006c8e0; end: 0006c8e7; +[SCOptedIn1TLStatus optedIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c8e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae88b8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c8e8; end: 0006c8ef; +[SCOptedIn1TLStatus optedOut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c8e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae88b8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c8f0; end: 0006c8f7; +[SCOptedIn1TLStatus unchanged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c8f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae88b8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c8f8; end: 0006c947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c8f8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00ae88b8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0006c948; end: 0006c973; -[SCOptedIn1TLStatus matchOptedIn:optedOut:unchanged:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006c948(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00ae88b8) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00ae88b8) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0006c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0006c974; end: 0006c9c7;  */

void FUN_0006c974(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0006c9c8; end: 0006cb2f;  */

int FUN_0006c9c8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_0006ca44;
        goto LAB_0006ca28;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0006ca28:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_0006ca44:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0006cb30; end: 0006cb6f;  */

void FUN_0006cb30(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae88e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d0f68;
  _swift_getWitnessTable(&UNK_007d0f68,&UNK_009a1848);
  puRam0000000000ae88e8 = puVar1;
  return;
}



/* Entry: 0006cb70; end: 0006cc1b;  */

void FUN_0006cb70(void)

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



/* Entry: 0006cc1c; end: 0006cc1f;  */

void FUN_0006cc1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae88f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d1050;
  _swift_getWitnessTable(&UNK_007d1050,&UNK_009a19b0);
  puRam0000000000ae88f0 = puVar1;
  return;
}



/* Entry: 0006cc20; end: 0006cc5f;  */

void FUN_0006cc20(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae88f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d1050;
  _swift_getWitnessTable(&UNK_007d1050,&UNK_009a19b0);
  puRam0000000000ae88f0 = puVar1;
  return;
}



/* Entry: 0006cc60; end: 0006cdd7;  */

bool FUN_0006cc60(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 0006cdd8; end: 0006ce1f;  */

uint FUN_0006cdd8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  uStack_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_0006ce20(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 0006ce20; end: 0006cf6b;  */

undefined8 FUN_0006ce20(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  undefined1 auStack_90 [48];
  
  if (*param_1 == '\f') {
    if (*param_2 != '\f') {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  uVar10 = *(ulong *)(param_1 + 0x18);
  lVar5 = *(long *)(param_1 + 0x20);
  bVar8 = param_1[0x28];
  lVar2 = *(long *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x10);
  uVar3 = *(ulong *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  bVar9 = param_2[0x28];
  if (lVar5 == 1) {
    if (lVar7 == 1) {
      return 1;
    }
  }
  else if (lVar7 != 1) {
    if (lVar1 != lVar2) {
      return 0;
    }
    if (lVar4 != lVar6) {
      return 0;
    }
    if (lVar5 == 0) {
      if (lVar7 != 0) {
        return 0;
      }
    }
    else {
      if (lVar7 == 0) {
        return 0;
      }
      if (((uVar10 != uVar3) || (lVar5 != lVar7)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar10,lVar5,uVar3,lVar7,0), (uVar10 & 1) == 0)) {
        return 0;
      }
    }
    if (((bVar8 ^ bVar9) & 1) != 0) {
      return 0;
    }
    return 1;
  }
  FUN_0006d2d8(param_1,auStack_90);
  FUN_0006d2d8(param_2,auStack_90);
  FUN_0006d30c(lVar1,lVar4,uVar10,lVar5,bVar8);
  FUN_0006d30c(lVar2,lVar6,uVar3,lVar7,bVar9);
  return 0;
}



/* Entry: 0006cf6c; end: 0006cf97;  */

long FUN_0006cf6c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 0006cf98; end: 0006cfab;  */

void FUN_0006cf98(long param_1)

{
  if (*(long *)(param_1 + 0x20) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)();
  return;
}



/* Entry: 0006cfac; end: 0006d01b;  */

undefined1 * FUN_0006cfac(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 1) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    param_1[0x28] = param_2[0x28];
    return param_1;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(long *)(param_1 + 0x20) = lVar1;
  param_1[0x28] = param_2[0x28];
  _swift_bridgeObjectRetain(lVar1);
  return param_1;
}



/* Entry: 0006d01c; end: 0006d113;  */

undefined1 * FUN_0006d01c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 1) {
    if (*(long *)(param_2 + 0x20) == 1) {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[0x28] = param_2[0x28];
      *(undefined8 *)(param_1 + 0x20) = uVar6;
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
    else {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      param_1[0x28] = param_2[0x28];
      _swift_bridgeObjectRetain();
    }
  }
  else if (*(long *)(param_2 + 0x20) == 1) {
    FUN_0006d114(param_1 + 8);
    uVar1 = param_2[0x28];
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    param_1[0x28] = uVar1;
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    param_1[0x28] = param_2[0x28];
  }
  return param_1;
}



/* Entry: 0006d114; end: 0006d147;  */

undefined8 FUN_0006d114(undefined8 param_1)

{
  FUN_0006d578();
  return param_1;
}



/* Entry: 0006d148; end: 0006d15b;  */

void FUN_0006d148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 0006d15c; end: 0006d203;  */

undefined1 * FUN_0006d15c(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 1) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    param_1[0x28] = param_2[0x28];
  }
  else {
    lVar2 = *(long *)(param_2 + 0x20);
    if (lVar2 == 1) {
      FUN_0006d114(param_1 + 8);
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0x20) = uVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      param_1[0x28] = param_2[0x28];
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(long *)(param_1 + 0x20) = lVar2;
      _swift_bridgeObjectRelease(lVar1);
      param_1[0x28] = param_2[0x28];
    }
  }
  return param_1;
}



/* Entry: 0006d204; end: 0006d2d7;  */

int FUN_0006d204(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 8);
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



/* Entry: 0006d2d8; end: 0006d30b;  */

undefined8 FUN_0006d2d8(undefined8 param_1,undefined8 param_2)

{
  FUN_0006cfac(param_2,param_1,&UNK_009a1a60);
  return param_2;
}



/* Entry: 0006d30c; end: 0006d337;  */

void FUN_0006d30c(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(in_x3);
  return;
}



/* Entry: 0006d338; end: 0006d377;  */

void FUN_0006d338(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae88f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d1100;
  _swift_getWitnessTable(&UNK_007d1100,&UNK_009a1a98);
  puRam0000000000ae88f8 = puVar1;
  return;
}


