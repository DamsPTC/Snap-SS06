/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0006ffe8; end: 00070217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ffe8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae89f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae89f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8a00))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8a00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00070218; end: 00070297; -[SCUserPhoneNumber isEqual:] */

uint FUN_00070218(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000700ac(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00070298; end: 0007029b; -[SCUserPhoneNumber copyWithZone:] */

void FUN_00070298(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0007029c; end: 00070383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007029c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_00ae89f8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae89f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454c49424f4d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c49424f4d,0xe600000000000000);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8a00))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8a00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000000008b70f0);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00070384; end: 000703d3; -[SCUserPhoneNumber encodeWithCoder:] */

void FUN_00070384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_0007029c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000703d4; end: 00070403;  */

void FUN_000703d4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00070404(param_1);
  return;
}



/* Entry: 00070404; end: 0007061f;  */

undefined8 FUN_00070404(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x454c49424f4d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454c49424f4d,0xe600000000000000);
  lVar5 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_0099b8d8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_00027748(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000000008b70f0);
  lVar7 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_00027748(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_0099b040,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00785c00();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 00070620; end: 00070647; -[SCUserPhoneNumber initWithCoder:] */

void FUN_00070620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00070404();
  return;
}



/* Entry: 00070648; end: 00070663; -[SCUserPhoneNumber description] */

void FUN_00070648(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00070664; end: 000706df; -[SCUserPhoneNumber init] */

void FUN_00070664(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAuthenticationModels/UserPhoneNumberWrapper.swift",0x33,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x706ac);
  (*pcVar1)();
}



/* Entry: 000706e0; end: 0007071f; -[SCUserPhoneNumber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000706e0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae89f8 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8a00 + 8));
  return;
}



/* Entry: 00070720; end: 0007073f;  */

void FUN_00070720(void)

{
  _objc_opt_self(&PTR_PTR_00ac9080);
  return;
}



/* Entry: 00070740; end: 00070747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00070740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae89f8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8a00);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00070748; end: 00070f9b;  */

long FUN_00070748(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00070f9c; end: 00070fab; -[_TtC17UserTwoFAServices19SCUserTwoFAServices twoFAProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00070f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8a30));
  return;
}



/* Entry: 00070fac; end: 00070fbb; -[_TtC17UserTwoFAServices19SCUserTwoFAServices twoFAMutator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00070fac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8a38));
  return;
}



/* Entry: 00070fbc; end: 0007101f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00070fbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8a30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8a38) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00071020; end: 00071097; -[_TtC17UserTwoFAServices19SCUserTwoFAServices initWithTwoFAProvider:twoFAMutator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071020(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae8a30) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae8a38) = param_4;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 00071098; end: 000710f7; -[_TtC17UserTwoFAServices19SCUserTwoFAServices init] */

void FUN_00071098(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("UserTwoFAServices.SCUserTwoFAServices",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x710c4);
  (*pcVar1)();
}



/* Entry: 000710f8; end: 0007112f; -[_TtC17UserTwoFAServices19SCUserTwoFAServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000710f8(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8a30));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae8a38));
  return;
}



/* Entry: 00071130; end: 0007114f;  */

void FUN_00071130(void)

{
  _objc_opt_self(&PTR_PTR_00ac9158);
  return;
}



/* Entry: 00071150; end: 000712b7;  */

void FUN_00071150(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 000712b8; end: 000712ef;  */

void FUN_000712b8(undefined8 param_1)

{
  if (lRam0000000000ae8ac0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_0083fc18);
  return;
}



/* Entry: 000712f0; end: 000713fb;  */

long * FUN_000712f0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar6 = (long)*(int *)(param_3 + 0x18);
    lVar3 = 0;
    __s10Foundation4DateVMa();
    lVar7 = *(long *)(lVar3 + -8);
    pcVar8 = *(code **)(lVar7 + 0x30);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar1);
    lVar4 = (long)param_2 + lVar6;
    (*pcVar8)(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    }
    else {
      lVar4 = 0xae60c8;
      func_0x000115a8(0xae60c8,&UNK_007cccd0);
      _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,
              *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Entry: 000713fc; end: 0007147b;  */

void FUN_000713fc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00071478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 0007147c; end: 000716a3;  */

undefined8 * FUN_0007147c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  lVar4 = (long)param_2 + lVar5;
  (*pcVar7)(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar3);
  }
  else {
    lVar4 = 0xae60c8;
    func_0x000115a8(0xae60c8,&UNK_007cccd0);
    _memcpy((long)param_1 + lVar5,(long)param_2 + lVar5,
            *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 000716a4; end: 00071763;  */

undefined8 * FUN_000716a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar7;
  param_1[2] = uVar6;
  lVar3 = (long)*(int *)(param_3 + 0x18);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = (long)param_2 + lVar3;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar4 + 0x20))((long)param_1 + lVar3,(long)param_2 + lVar3,lVar1);
    (**(code **)(lVar4 + 0x38))((long)param_1 + lVar3,0,1,lVar1);
  }
  else {
    lVar2 = 0xae60c8;
    func_0x000115a8(0xae60c8,&UNK_007cccd0);
    _memcpy((long)param_1 + lVar3,(long)param_2 + lVar3,
            *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 00071764; end: 0007188b;  */

undefined8 * FUN_00071764(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar4 = (long)param_1 + lVar6;
  (*pcVar8)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    return param_1;
  }
  lVar4 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  _memcpy((long)param_1 + lVar6,(long)param_2 + lVar6,*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40))
  ;
  return param_1;
}



/* Entry: 0007188c; end: 00071897;  */

void FUN_0007188c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 00071898; end: 0007192f;  */

ulong FUN_00071898(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  lVar2 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  uVar3 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0007192c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar3,param_2,lVar2);
  return uVar3;
}



/* Entry: 00071930; end: 0007193b;  */

void FUN_00071930(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 0007193c; end: 000719bb;  */

void FUN_0007193c(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
    return;
  }
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
                    /* WARNING: Could not recover jumptable at 0x000719b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
  return;
}



/* Entry: 000719bc; end: 00071a2f;  */

void FUN_000719bc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = &UNK_007d1558;
  puStack_30 = &UNK_007d1558;
  lVar1 = 0x13f;
  func_0x00012d7c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 00071a30; end: 00071a3b; -[SCUserTwoFADisabledWarning twoFADisabledTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071a30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8b00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8b00);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00071a3c; end: 00071a47; -[SCUserTwoFADisabledWarning twoFADisabledMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071a3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8b08))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8b08);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00071a48; end: 00071a9f;  */

void FUN_00071a48(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 00071aa0; end: 00071aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8b00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8b08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00071aa4; end: 00071bcb; -[SCUserTwoFADisabledWarning initWithTwoFADisabledTitle:twoFADisabledMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071aa4(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00ae8b00);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_00ae8b08);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00071bcc; end: 00071bcf; -[SCUserTwoFADisabledWarning copyWithZone:] */

void FUN_00071bcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00071bd0; end: 00071beb; -[SCUserTwoFADisabledWarning description] */

void FUN_00071bd0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00071bec; end: 00071c67; -[SCUserTwoFADisabledWarning init] */

void FUN_00071bec(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFADisabledWarningWrapper.swift",0x37,2,0x26,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x71c34);
  (*pcVar1)();
}



/* Entry: 00071c68; end: 00071ca7; -[SCUserTwoFADisabledWarning .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071c68(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8b00 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8b08 + 8));
  return;
}



/* Entry: 00071ca8; end: 00071cc7;  */

void FUN_00071ca8(void)

{
  _objc_opt_self(&PTR_PTR_00ac9220);
  return;
}



/* Entry: 00071cc8; end: 00071ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8b00);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8b08);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00071ccc; end: 00071d77;  */

void FUN_00071ccc(void)

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



/* Entry: 00071d78; end: 00071db7;  */

void FUN_00071d78(undefined1 *param_1,long *param_2)

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



/* Entry: 00071db8; end: 00071dd3; -[SCUserTwoFAEnableUpdateResult description] */

void FUN_00071db8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00071dd4; end: 00071e1b; -[SCUserTwoFAEnableUpdateResult init] */

void FUN_00071dd4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAEnableUpdateResultWrapper.swift",0x3a,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x71e1c);
  (*pcVar1)();
}



/* Entry: 00071e1c; end: 00071e1f; -[SCUserTwoFAEnableUpdateResult copyWithZone:] */

void FUN_00071e1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00071e20; end: 00071ebb; +[SCUserTwoFAEnableUpdateResult successWithRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071e20(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00ae8b38) = 0;
  plVar1 = (long *)(lVar3 + _DAT_00ae8b40);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar3 + _DAT_00ae8b48);
  *puVar2 = 0;
  puVar2[1] = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00071ebc; end: 00071f5b; +[SCUserTwoFAEnableUpdateResult failureWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071ebc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00ae8b38) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_00ae8b40);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar3 + _DAT_00ae8b48);
  *plVar2 = param_3;
  plVar2[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00071f5c; end: 00072043; -[SCUserTwoFAEnableUpdateResult matchSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00071f5c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_00ae8b38) == '\x01') {
    lVar2 = ((undefined8 *)(param_1 + _DAT_00ae8b48))[1];
    if (lVar2 == 0) {
      _objc_retain(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8b48);
      _objc_retain(param_1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    }
    pcVar1 = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
  else {
    lVar2 = ((undefined8 *)(param_1 + _DAT_00ae8b40))[1];
    if (lVar2 == 0) {
      _objc_retain(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8b40);
      _objc_retain(param_1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    }
    pcVar1 = *(code **)(param_3 + 0x10);
  }
  (*pcVar1)(param_3,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 00072044; end: 00072077;  */

void FUN_00072044(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00072078; end: 000720b7; -[SCUserTwoFAEnableUpdateResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072078(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8b40 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8b48 + 8));
  return;
}



/* Entry: 000720b8; end: 000720d7;  */

void FUN_000720b8(void)

{
  _objc_opt_self(&PTR_PTR_00ac92f0);
  return;
}



/* Entry: 000720d8; end: 0007223f;  */

int FUN_000720d8(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00072154;
        goto LAB_00072138;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00072138:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_00072154:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00072240; end: 0007227f;  */

void FUN_00072240(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d15d4;
  _swift_getWitnessTable(&UNK_007d15d4,&UNK_009a21c8);
  puRam0000000000ae8b78 = puVar1;
  return;
}



/* Entry: 00072280; end: 0007232b;  */

void FUN_00072280(void)

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



/* Entry: 0007232c; end: 0007236b;  */

void FUN_0007232c(undefined1 *param_1,long *param_2)

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



/* Entry: 0007236c; end: 00072387; -[SCUserTwoFAGenericUpdateResult description] */

void FUN_0007236c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00072388; end: 000723cf; -[SCUserTwoFAGenericUpdateResult init] */

void FUN_00072388(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAGenericUpdateResultWrapper.swift",0x3b,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x723d0);
  (*pcVar1)();
}



/* Entry: 000723d0; end: 000723d3; -[SCUserTwoFAGenericUpdateResult copyWithZone:] */

void FUN_000723d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 000723d4; end: 0007242f; +[SCUserTwoFAGenericUpdateResult success] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000723d4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae8b80) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00ae8b88);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00072430; end: 000724bf; +[SCUserTwoFAGenericUpdateResult failureWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072430(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00ae8b80) = 1;
  plVar1 = (long *)(lVar2 + _DAT_00ae8b88);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000724c0; end: 0007255b; -[SCUserTwoFAGenericUpdateResult matchSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000724c0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + _DAT_00ae8b80) == '\x01') {
    lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8b88))[1];
    if (lVar1 == 0) {
      _objc_retain();
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8b88);
      _objc_retain();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    }
    (**(code **)(param_4 + 0x10))(param_4,uVar2);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00072524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 0007255c; end: 0007258f;  */

void FUN_0007255c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00072590; end: 000725a3; -[SCUserTwoFAGenericUpdateResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072590(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8b88 + 8));
  return;
}



/* Entry: 000725a4; end: 000725c3;  */

void FUN_000725a4(void)

{
  _objc_opt_self(&PTR_PTR_00ac93c0);
  return;
}



/* Entry: 000725c4; end: 0007272b;  */

int FUN_000725c4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00072640;
        goto LAB_00072624;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00072624:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_00072640:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0007272c; end: 0007276b;  */

void FUN_0007272c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8bb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d16d4;
  _swift_getWitnessTable(&UNK_007d16d4,&UNK_009a22b0);
  puRam0000000000ae8bb8 = puVar1;
  return;
}



/* Entry: 0007276c; end: 00072817;  */

void FUN_0007276c(void)

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



/* Entry: 00072818; end: 00072857;  */

void FUN_00072818(undefined1 *param_1,long *param_2)

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



/* Entry: 00072858; end: 00072873; -[SCUserTwoFAGenerateCodeResult description] */

void FUN_00072858(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00072874; end: 000728bb; -[SCUserTwoFAGenerateCodeResult init] */

void FUN_00072874(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAGenerateCodeResultWrapper.swift",0x3a,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x728bc);
  (*pcVar1)();
}



/* Entry: 000728bc; end: 000728bf; -[SCUserTwoFAGenerateCodeResult copyWithZone:] */

void FUN_000728bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 000728c0; end: 0007295b; +[SCUserTwoFAGenerateCodeResult successWithRecoveryCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000728c0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00ae8bc0) = 0;
  plVar1 = (long *)(lVar3 + _DAT_00ae8bc8);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar3 + _DAT_00ae8bd0);
  *puVar2 = 0;
  puVar2[1] = 0;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0007295c; end: 000729fb; +[SCUserTwoFAGenerateCodeResult failureWithErrorMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007295c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_00ae8bc0) = 1;
  puVar1 = (undefined8 *)(lVar3 + _DAT_00ae8bc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar3 + _DAT_00ae8bd0);
  *plVar2 = param_3;
  plVar2[1] = param_2;
  lStack_40 = lVar3;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000729fc; end: 00072ae3; -[SCUserTwoFAGenerateCodeResult matchSuccess:failure:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000729fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + _DAT_00ae8bc0) == '\x01') {
    lVar2 = ((undefined8 *)(param_1 + _DAT_00ae8bd0))[1];
    if (lVar2 == 0) {
      _objc_retain(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8bd0);
      _objc_retain(param_1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    }
    pcVar1 = *(code **)(param_4 + 0x10);
    param_3 = param_4;
  }
  else {
    lVar2 = ((undefined8 *)(param_1 + _DAT_00ae8bc8))[1];
    if (lVar2 == 0) {
      _objc_retain(param_1);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8bc8);
      _objc_retain(param_1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    }
    pcVar1 = *(code **)(param_3 + 0x10);
  }
  (*pcVar1)(param_3,uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar3);
  return;
}



/* Entry: 00072ae4; end: 00072b17;  */

void FUN_00072ae4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00072b18; end: 00072b57; -[SCUserTwoFAGenerateCodeResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072b18(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_00ae8bc8 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae8bd0 + 8));
  return;
}



/* Entry: 00072b58; end: 00072b77;  */

void FUN_00072b58(void)

{
  _objc_opt_self(&PTR_PTR_00ac9488);
  return;
}



/* Entry: 00072b78; end: 00072cdf;  */

int FUN_00072b78(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00072bf4;
        goto LAB_00072bd8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00072bd8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_00072bf4:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00072ce0; end: 00072d1f;  */

void FUN_00072ce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d17c4;
  _swift_getWitnessTable(&UNK_007d17c4,&UNK_009a2398);
  puRam0000000000ae8c00 = puVar1;
  return;
}



/* Entry: 00072d20; end: 00072d2f; -[SCUserTwoFAStatus isSmsTwoFAEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00072d20(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae8c08);
}



/* Entry: 00072d30; end: 00072d3f; -[SCUserTwoFAStatus isOtpTwoFAEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00072d30(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_00ae8c10);
}



/* Entry: 00072d40; end: 00072da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072d40(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_00ae8c08) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_00ae8c10) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00072da4; end: 00072e07; -[SCUserTwoFAStatus initWithIsSmsTwoFAEnabled:isOtpTwoFAEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072da4(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_00ae8c08) = param_3;
  *(undefined1 *)(param_1 + _DAT_00ae8c10) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00072e08; end: 00072e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072e08(undefined4 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(byte *)(unaff_x20 + _DAT_00ae8c08) = (byte)param_1 & 1;
  *(byte *)(unaff_x20 + _DAT_00ae8c10) = (byte)((uint)param_1 >> 8) & 1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00072e68; end: 00072e6b; -[SCUserTwoFAStatus copyWithZone:] */

void FUN_00072e68(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00072e6c; end: 00072e87; -[SCUserTwoFAStatus description] */

void FUN_00072e6c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00072e88; end: 00072f23; -[SCUserTwoFAStatus init] */

void FUN_00072e88(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "UserTwoFAServices/UserTwoFAStatusWrapper.swift",0x2e,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x72ed0);
  (*pcVar1)();
}



/* Entry: 00072f24; end: 00072f2f; -[SCUserTwoFAVerifiedDevice deviceId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072f24(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8c40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8c40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00072f30; end: 00072f3b; -[SCUserTwoFAVerifiedDevice deviceName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072f30(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8c48))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8c48);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 00072f3c; end: 00072f93;  */

void FUN_00072f3c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 00072f94; end: 0007305b; -[SCUserTwoFAVerifiedDevice lastLoginTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00072f94(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_000138a4(param_1 + _DAT_00b64828,puVar4);
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



/* Entry: 0007305c; end: 0007310b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0007305c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar2 = auStack_60;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8c40);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8c48);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  FUN_000138a4(param_5,unaff_x20 + _DAT_00b64828);
  _objc_msgSendSuper2(auStack_60,PTR_s_init_00abbf70);
  func_0x000138f4(param_5);
  return puVar2;
}



/* Entry: 0007310c; end: 0007326f; -[SCUserTwoFAVerifiedDevice initWithDeviceId:deviceName:lastLoginTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_0007310c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  undefined *puVar6;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar3 = 0xae60c8;
  puVar6 = &UNK_007cccd0;
  func_0x000115a8();
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_60 - extraout_x8;
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar1 = puVar6;
  }
  if (param_4 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 == 0) {
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar3,param_5);
    lVar4 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3,param_5 == 0,1);
  plVar5 = (long *)(param_1 + _DAT_00ae8c40);
  *plVar5 = param_3;
  plVar5[1] = (long)puVar1;
  plVar5 = (long *)(param_1 + _DAT_00ae8c48);
  *plVar5 = param_4;
  plVar5[1] = (long)puVar6;
  FUN_000138a4(lVar3,param_1 + _DAT_00b64828);
  plVar5 = &lStack_60;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar5,PTR_s_init_00abbf70);
  func_0x000138f4(lVar3);
  return plVar5;
}



/* Entry: 00073270; end: 0007332f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00073270(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  _objc_allocWithZone();
  uVar5 = param_1[1];
  uVar6 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8c40);
  puVar1[1] = param_1[1];
  *puVar1 = uVar6;
  uVar6 = param_1[3];
  uVar7 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8c48);
  puVar1[1] = param_1[3];
  *puVar1 = uVar7;
  lVar3 = 0;
  FUN_000712b8();
  FUN_000138a4((long)param_1 + (long)*(int *)(lVar3 + 0x18),unaff_x20 + _DAT_00b64828);
  puVar2 = PTR_s_init_00abbf70;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _objc_msgSendSuper2(auStack_50,puVar2);
  FUN_00073330(param_1);
  return puVar4;
}



/* Entry: 00073330; end: 0007336b;  */

undefined8 FUN_00073330(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_000712b8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 0007336c; end: 0007336f; -[SCUserTwoFAVerifiedDevice copyWithZone:] */

void FUN_0007336c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}


