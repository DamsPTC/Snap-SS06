/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00062624; end: 00062643;  */

void FUN_00062624(void)

{
  _objc_opt_self(&PTR_PTR_00ac8158);
  return;
}



/* Entry: 00062644; end: 000627ab;  */

int FUN_00062644(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_000626c0;
        goto LAB_000626a4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_000626a4:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_000626c0:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 000627ac; end: 000627eb;  */

void FUN_000627ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae8560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d07c4;
  _swift_getWitnessTable(&UNK_007d07c4,&UNK_009a1030);
  puRam0000000000ae8560 = puVar1;
  return;
}



/* Entry: 000627ec; end: 000627fb;  */

ulong FUN_000627ec(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 000627fc; end: 0006280b; -[SCResumeRegistrationData registrationUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000627fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8568));
  return;
}



/* Entry: 0006280c; end: 0006281b; -[SCResumeRegistrationData registrationState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006280c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8570));
  return;
}



/* Entry: 0006281c; end: 0006282b; -[SCResumeRegistrationData registrationChallenge] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006281c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8578));
  return;
}



/* Entry: 0006282c; end: 0006289f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006282c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8568) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8570) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8578) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000628a0; end: 0006292f; -[SCResumeRegistrationData initWithRegistrationUser:registrationState:registrationChallenge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000628a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae8568) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae8570) = param_4;
  *(undefined8 *)(param_1 + _DAT_00ae8578) = param_5;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 00062930; end: 0006296f;  */

undefined8 FUN_00062930(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_00062fbc(param_1);
  FUN_00063148(param_1);
  return uVar1;
}



/* Entry: 00062970; end: 000629a3; -[SCResumeRegistrationData hash] */

undefined8 FUN_00062970(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000629a4();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000629a4; end: 00062a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000629a4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_00ae8568);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_00ae8570) == 0) {
    lVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0006d8f8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_00ae8578) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_00065f68();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00062a9c; end: 00062c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00062a9c(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long unaff_x20;
  long lStack_68;
  long alStack_60 [4];
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  FUN_000634e4(param_1,alStack_60,0xae65a0,&UNK_007ce270);
  if (alStack_60[3] == 0) {
    FUN_00027748(alStack_60);
  }
  else {
    plVar2 = &lStack_68;
    _swift_dynamicCast(plVar2,alStack_60,PTR___sypN_0099b8d8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_00ae8568);
      if (lVar3 == 0) {
        uVar1 = (uint)(*(long *)(lStack_68 + _DAT_00ae8568) == 0);
      }
      else {
        func_0x007877e0();
        uVar1 = (uint)lVar3;
      }
      if (*(long *)(unaff_x20 + _DAT_00ae8570) == 0) {
        uVar6 = (uint)(*(long *)(lStack_68 + _DAT_00ae8570) == 0);
      }
      else {
        lVar3 = *(long *)(lStack_68 + _DAT_00ae8570);
        if (lVar3 == 0) {
          lVar4 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          lVar4 = 0;
          FUN_0006e740();
        }
        alStack_60[0] = lVar3;
        alStack_60[3] = lVar4;
        _objc_retain(lVar3);
        plVar2 = alStack_60;
        FUN_0006d93c(plVar2);
        uVar6 = (uint)plVar2;
        FUN_00027748(alStack_60);
      }
      if (*(long *)(unaff_x20 + _DAT_00ae8578) == 0) {
        lVar4 = *(long *)(lStack_68 + _DAT_00ae8578);
        lVar3 = lVar4;
        _objc_retain(lVar4);
        _objc_release(lStack_68);
        if (lVar4 == 0) {
          uVar7 = 1;
        }
        else {
          _objc_release(lVar3);
          uVar7 = 0;
        }
      }
      else {
        lVar3 = *(long *)(lStack_68 + _DAT_00ae8578);
        if (lVar3 == 0) {
          uVar5 = 0;
          alStack_60[1] = 0;
          alStack_60[2] = 0;
        }
        else {
          uVar5 = 0;
          FUN_00066dbc();
        }
        alStack_60[0] = lVar3;
        alStack_60[3] = uVar5;
        _objc_retain(lVar3);
        plVar2 = alStack_60;
        FUN_00066060(plVar2);
        uVar7 = (uint)plVar2;
        _objc_release(lStack_68);
        FUN_00027748(alStack_60);
      }
      if (uVar1 != 0) {
        uVar6 = uVar6 & uVar7;
        goto LAB_00062c4c;
      }
    }
  }
  uVar6 = 0;
LAB_00062c4c:
  return uVar6 & 1;
}



/* Entry: 00062c68; end: 00062ce7; -[SCResumeRegistrationData isEqual:] */

uint FUN_00062c68(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00062a9c(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00062ce8; end: 00062ceb; -[SCResumeRegistrationData copyWithZone:] */

void FUN_00062ce8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00062cec; end: 00062ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00062cec(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b68c0);
  func_0x00782780(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b68e0);
  func_0x00782780(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x80000000008b6900);
  func_0x00782780(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00062de0; end: 00062e2f; -[SCResumeRegistrationData encodeWithCoder:] */

void FUN_00062de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00062cec(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00062e30; end: 00062e6f;  */

undefined8 FUN_00062e30(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_0006317c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00062e70; end: 00062eab; -[SCResumeRegistrationData initWithCoder:] */

undefined8 FUN_00062e70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_0006317c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 00062eac; end: 00062ef7; -[SCResumeRegistrationData description] */

void FUN_00062eac(undefined8 param_1)

{
  undefined1 auStack_68 [72];
  
  _objc_retain();
  FUN_00063404(auStack_68);
  _objc_release(param_1);
  FUN_00063148(auStack_68);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00062ef8; end: 00062f73; -[SCResumeRegistrationData init] */

void FUN_00062ef8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCResumeRegistrationDataWrapper.swift",0x49,2,0x54
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x62f40);
  (*pcVar1)();
}



/* Entry: 00062f74; end: 00062fbb; -[SCResumeRegistrationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00062f74(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8568));
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8570));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae8578));
  return;
}



/* Entry: 00062fbc; end: 00063147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00062fbc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  byte bStack_68;
  
  _swift_getObjectType();
  uStack_a0 = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8568) = uStack_a0;
  uVar6 = (ulong)*(byte *)(param_1 + 1);
  if (*(byte *)(param_1 + 1) == 0xc) {
    FUN_000634e4(&uStack_a0,&uStack_98,0xae85a8,&UNK_007d0890);
    uVar6 = 0;
  }
  else {
    FUN_0006e740(0);
    FUN_000634e4(&uStack_a0,&uStack_98,0xae85a8,&UNK_007d0890);
    func_0x0006d81c();
  }
  *(ulong *)(unaff_x20 + _DAT_00ae8570) = uVar6;
  lVar8 = param_1[7];
  if (lVar8 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    uVar1 = param_1[5];
    uVar3 = param_1[6];
    uVar2 = param_1[3];
    uVar4 = param_1[4];
    uVar9 = param_1[2];
    uStack_90 = (undefined1)uVar2;
    bVar5 = *(byte *)(param_1 + 8);
    bStack_68 = bVar5 & 1;
    uStack_98 = uVar9;
    uStack_88 = uVar4;
    uStack_80 = uVar1;
    uStack_78 = uVar3;
    lStack_70 = lVar8;
    FUN_00066dbc(0);
    _objc_allocWithZone();
    func_0x0005acb8(uVar9,uVar2);
    func_0x00023304(uVar4,uVar1);
    _swift_bridgeObjectRetain(lVar8);
    puVar7 = &uStack_98;
    FUN_00066b88();
    FUN_00061734(uVar9,uVar2,uVar4,uVar1,uVar3,lVar8,bVar5);
  }
  *(undefined8 **)(unaff_x20 + _DAT_00ae8578) = puVar7;
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00063148; end: 0006317b;  */

undefined8 FUN_00063148(undefined8 param_1)

{
  (*(code *)(undefined *)0x61218)();
  return param_1;
}



/* Entry: 0006317c; end: 00063403;  */

undefined8 FUN_0006317c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b68c0);
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
    FUN_00027748(&uStack_70);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_0005fbd8(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar2,6);
    uVar2 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b68e0);
  lVar3 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
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
  if (lStack_78 == 0) {
    FUN_00027748(&uStack_70);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_0006e740(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar5,6);
    uVar5 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  uVar6 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x80000000008b6900);
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (param_1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_00027748(&uStack_70);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_00066dbc(0);
    puVar4 = &uStack_98;
    _swift_dynamicCast(puVar4,&uStack_70,puVar1 + 8,uVar6,6);
    uVar6 = uStack_98;
    if ((int)puVar4 == 0) {
      uVar6 = 0;
    }
  }
  func_0x007865a0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar6);
  return unaff_x20;
}



/* Entry: 00063404; end: 000634c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063404(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_00ae8568);
  lVar3 = *(long *)(param_2 + _DAT_00ae8570);
  if (lVar3 == 0) {
    _objc_retain(uVar1);
    uVar2 = 0xc;
  }
  else {
    _objc_retain(uVar1);
    _objc_retain();
    uVar2 = (undefined1)lVar3;
    FUN_0006d83c();
  }
  if (*(long *)(param_2 + _DAT_00ae8578) == 0) {
    uStack_40 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
  }
  else {
    FUN_00066cc8(&uStack_70);
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  *(undefined1 *)(param_1 + 8) = uStack_40;
  return;
}



/* Entry: 000634c4; end: 000634e3;  */

void FUN_000634c4(void)

{
  _objc_opt_self(&PTR_PTR_00ac8220);
  return;
}



/* Entry: 000634e4; end: 0006352b;  */

undefined8 FUN_000634e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 0006352c; end: 0006352f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006352c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae85b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae85b8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00063530; end: 0006358b; -[SCRegistrationEmail email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063530(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae85b0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae85b0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 0006358c; end: 0006359b; -[SCRegistrationEmail state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006358c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae85b8);
}



/* Entry: 0006359c; end: 0006368b; -[SCRegistrationEmail initWithEmail:state:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006359c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00ae85b0);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00ae85b8) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006368c; end: 000636bf; -[SCRegistrationEmail hash] */

undefined8 FUN_0006368c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000636c0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000636c0; end: 0006385b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000636c0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae85b0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae85b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_00ae85b8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 0006385c; end: 000638db; -[SCRegistrationEmail isEqual:] */

uint FUN_0006385c(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00063754(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 000638dc; end: 000638df; -[SCRegistrationEmail copyWithZone:] */

void FUN_000638dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 000638e0; end: 0006399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000638e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_00ae85b0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae85b0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  func_0x00782760(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0006399c; end: 000639eb; -[SCRegistrationEmail encodeWithCoder:] */

void FUN_0006399c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_000638e0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 000639ec; end: 00063a1b;  */

void FUN_000639ec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00063a1c(param_1);
  return;
}



/* Entry: 00063a1c; end: 00063bbb;  */

undefined8 FUN_00063a1c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long lVar5;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar1 = (int)&uStack_90;
  uVar2 = 0x4c49414d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4c49414d45,0xe500000000000000);
  uVar3 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,uVar3);
    _swift_unknownObjectRelease(uVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_00027748(&uStack_60);
    lVar5 = 0;
    uVar2 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    lVar5 = lStack_88;
    uVar2 = uStack_90;
    if (iVar1 == 0) {
      uVar2 = 0;
      lVar5 = 0;
    }
  }
  uVar4 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  uVar3 = param_1;
  func_0x00781ae0();
  _objc_release(uVar4);
  if (uVar3 < 3) {
    if (lVar5 == 0) {
      uVar2 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar5);
      _swift_bridgeObjectRelease(lVar5);
    }
    func_0x00785440();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar5);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 00063bbc; end: 00063be3; -[SCRegistrationEmail initWithCoder:] */

void FUN_00063bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00063a1c();
  return;
}



/* Entry: 00063be4; end: 00063bff; -[SCRegistrationEmail description] */

void FUN_00063be4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00063c00; end: 00063c7b; -[SCRegistrationEmail init] */

void FUN_00063c00(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationEmailWrapper.swift",0x44,2,0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x63c48);
  (*pcVar1)();
}



/* Entry: 00063c7c; end: 00063c8f; -[SCRegistrationEmail .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063c7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(*(undefined8 *)(param_1 + _DAT_00ae85b0 + 8));
  return;
}



/* Entry: 00063c90; end: 00063caf;  */

void FUN_00063c90(void)

{
  _objc_opt_self(&PTR_PTR_00ac8300);
  return;
}



/* Entry: 00063cb0; end: 00063cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063cb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae85b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_00ae85b8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00063cb4; end: 00063cc3; -[SCResumeUserVerificationData unverifiedBootstrapData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063cb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae85e8));
  return;
}



/* Entry: 00063cc4; end: 00063cd3; -[SCResumeUserVerificationData registrationMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063cc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae85f0));
  return;
}



/* Entry: 00063cd4; end: 00063d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063cd4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae85e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae85f0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00063d38; end: 00063e5b; -[SCResumeUserVerificationData initWithUnverifiedBootstrapData:registrationMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063d38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_00ae85e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae85f0) = param_4;
  puVar1 = PTR_s_init_00abbf70;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 00063e5c; end: 00063e8f; -[SCResumeUserVerificationData hash] */

undefined8 FUN_00063e5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00063e90();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00063e90; end: 000640e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00063e90(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_00ae85e8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF();
  }
  else {
    func_0x007843a0();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_00ae85f0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    uVar2 = (ulong)*(byte *)(lVar1 + _DAT_00ae8738);
    __ss6HasherV8_combineyySuF(uVar2);
    if (*(long *)(lVar1 + _DAT_00ae8740) == 0) {
      uVar2 = 0;
      __ss6HasherV8_combineyys5UInt8VF(0);
    }
    else {
      FUN_0006a66c();
      __ss6HasherV8_combineyys5UInt8VF(1);
      __ss6HasherV8_combineyySuF(uVar2);
    }
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 000640e8; end: 00064167; -[SCResumeUserVerificationData isEqual:] */

uint FUN_000640e8(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00063fa8(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00064168; end: 0006416b; -[SCResumeUserVerificationData copyWithZone:] */

void FUN_00064168(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 0006416c; end: 0006423f; -[SCResumeUserVerificationData encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006416c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000000008b69c0);
  func_0x00782780(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x80000000008b69e0);
  func_0x00782780(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00064240; end: 0006427f;  */

undefined8 FUN_00064240(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_000643c4(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00064280; end: 000642bb; -[SCResumeUserVerificationData initWithCoder:] */

undefined8 FUN_00064280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_000643c4();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 000642bc; end: 0006430f; -[SCResumeUserVerificationData description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000642bc(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_00ae85f0);
  if (((lVar2 != 0) && (1 < *(byte *)(lVar2 + _DAT_00ae8738))) &&
     (*(long *)(lVar2 + _DAT_00ae8740) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x64310);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00064310; end: 0006438b; -[SCResumeUserVerificationData init] */

void FUN_00064310(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCResumeUserVerificationDataWrapper.swift",0x4d,2,
             0x4a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x64358);
  (*pcVar1)();
}



/* Entry: 0006438c; end: 000643c3; -[SCResumeUserVerificationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006438c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae85e8));
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00ae85f0));
  return;
}



/* Entry: 000643c4; end: 0006458b;  */

undefined8 FUN_000643c4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x80000000008b69c0);
  lVar2 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
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
  puVar1 = PTR___sypN_0099b8d8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_00027748(&uStack_60);
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    func_0x000645ac(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar3,6);
    uVar3 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar3 = 0;
    }
  }
  uVar5 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x80000000008b69e0);
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_00027748(&uStack_60);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    FUN_00068760(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
    uVar5 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  func_0x00786ce0();
  _objc_release(uVar3);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 0006458c; end: 000645ef;  */

void FUN_0006458c(void)

{
  _objc_opt_self(&PTR_PTR_00ac83d8);
  return;
}



/* Entry: 000645f0; end: 000645ff; -[SCRegistrationPhoneNumber phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000645f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_0099adb8)
            (*(undefined8 *)(param_1 + _DAT_00ae8620));
  return;
}



/* Entry: 00064600; end: 0006460f; -[SCRegistrationPhoneNumber state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00064600(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8628);
}



/* Entry: 00064610; end: 0006461b; -[SCRegistrationPhoneNumber phoneVerifyToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064610(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_00ae8630))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8630);
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



/* Entry: 0006461c; end: 00064627; -[SCRegistrationPhoneNumber authSessionPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006461c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_00ae8638))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_00ae8638);
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



/* Entry: 00064628; end: 00064697;  */

void FUN_00064628(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
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



/* Entry: 00064698; end: 0006473b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_00ae8620) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8628) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8630);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae8638);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_00abbf70);
  return;
}



/* Entry: 0006473c; end: 00064857; -[SCRegistrationPhoneNumber initWithPhoneNumber:state:phoneVerifyToken:authSessionPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006473c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_6);
    lVar3 = -0x1000000000000000;
    lVar5 = param_2;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_6);
    lVar3 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar5 = param_2;
    _objc_release(lVar3);
    lVar3 = param_2;
  }
  if (param_6 == 0) {
    lVar4 = 0;
    lVar5 = -0x1000000000000000;
  }
  else {
    lVar4 = param_6;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_6);
  }
  *(undefined8 *)(param_1 + _DAT_00ae8620) = param_3;
  *(undefined8 *)(param_1 + _DAT_00ae8628) = param_4;
  plVar1 = (long *)(param_1 + _DAT_00ae8630);
  *plVar1 = param_5;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_00ae8638);
  *plVar1 = lVar4;
  plVar1[1] = lVar5;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00064858; end: 00064897;  */

undefined8 FUN_00064858(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_000654b0(param_1);
  FUN_000655e0(param_1);
  return uVar1;
}



/* Entry: 00064898; end: 000648cb; -[SCRegistrationPhoneNumber hash] */

undefined8 FUN_00064898(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_000648cc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 000648cc; end: 000649f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000648cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_00ae8620) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_0006ffe8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_00ae8628));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae8630))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae8630);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x007843a0();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae8638))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae8638);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x007843a0();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 000649f4; end: 00064d33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000649f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  long lStack_88;
  long alStack_80 [4];
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  FUN_00065728(param_1,alStack_80,0xae65a0,&UNK_007ce270);
  if (alStack_80[3] == 0) {
    FUN_00027748(alStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,alStack_80,PTR___sypN_0099b8d8 + 8,lVar12,6);
    if (((ulong)plVar7 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_00ae8620) == 0) {
        uVar11 = (uint)(*(long *)(lStack_88 + _DAT_00ae8620) == 0);
      }
      else {
        lVar12 = *(long *)(lStack_88 + _DAT_00ae8620);
        if (lVar12 == 0) {
          lVar8 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar8 = 0;
          FUN_00070720();
        }
        alStack_80[0] = lVar12;
        alStack_80[3] = lVar8;
        _objc_retain(lVar12);
        uVar11 = 0;
        func_0x000700ac();
        FUN_00027748(alStack_80);
      }
      iVar5 = *(int *)(unaff_x20 + _DAT_00ae8628);
      iVar6 = *(int *)(lStack_88 + _DAT_00ae8628);
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_00ae8630);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_00ae8630))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae8630);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_00ae8630))[1];
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar3 >> 0x3c) goto LAB_00064b58;
        FUN_000308a8(uVar1,uVar3);
        FUN_000308a8(uVar1,uVar3);
        FUN_000308a8(uVar2,uVar4);
        uVar9 = uVar2;
        FUN_00038814(uVar2,uVar4,uVar1,uVar3);
        uVar10 = (uint)uVar9;
        FUN_00023344(uVar1,uVar3);
        FUN_00023344(uVar1,uVar3);
        FUN_00023344(uVar2,uVar4);
      }
      else if (uVar3 >> 0x3c < 0xf) {
LAB_00064b58:
        FUN_000308a8(uVar1,uVar3);
        FUN_000308a8(uVar2,uVar4);
        FUN_00023344(uVar2,uVar4);
        FUN_00023344(uVar1,uVar3);
        uVar10 = 0;
      }
      else {
        FUN_000308a8(uVar1,uVar3);
        FUN_000308a8(uVar2,uVar4);
        FUN_00023344(uVar2,uVar4);
        uVar10 = 1;
      }
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_00ae8638);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_00ae8638))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_00ae8638);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_00ae8638))[1];
      if (uVar4 >> 0x3c < 0xf) {
        FUN_000308a8(uVar1,uVar3);
        if (0xe < uVar3 >> 0x3c) {
          FUN_000308a8(uVar2,uVar4);
          _objc_release(lStack_88);
          goto LAB_00064c78;
        }
        FUN_000308a8(uVar1,uVar3);
        FUN_000308a8(uVar2,uVar4);
        uVar9 = uVar2;
        FUN_00038814(uVar2,uVar4,uVar1,uVar3);
        uVar13 = (uint)uVar9;
        FUN_00023344(uVar1,uVar3);
        _objc_release(lStack_88);
        FUN_00023344(uVar1,uVar3);
        FUN_00023344(uVar2,uVar4);
      }
      else {
        FUN_000308a8(uVar1,uVar3);
        FUN_000308a8(uVar2,uVar4);
        _objc_release(lStack_88);
        if (uVar3 >> 0x3c < 0xf) {
LAB_00064c78:
          FUN_00023344(uVar2,uVar4);
          FUN_00023344(uVar1,uVar3);
          uVar13 = 0;
        }
        else {
          FUN_00023344(uVar2,uVar4);
          uVar13 = 1;
        }
      }
      if ((uVar11 & iVar5 == iVar6) != 0) {
        uVar10 = uVar10 & uVar13;
        goto LAB_00064d10;
      }
    }
  }
  uVar10 = 0;
LAB_00064d10:
  return uVar10 & 1;
}



/* Entry: 00064d34; end: 00064db3; -[SCRegistrationPhoneNumber isEqual:] */

uint FUN_00064d34(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_000649f4(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00064db4; end: 00064db7; -[SCRegistrationPhoneNumber copyWithZone:] */

void FUN_00064db4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00064db8; end: 00064f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064db8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  func_0x00782780(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  func_0x00782760(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae8630))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8630);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b6a50);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_00ae8638))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8638);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b6a70);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00064f48; end: 00064f97; -[SCRegistrationPhoneNumber encodeWithCoder:] */

void FUN_00064f48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00064db8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00064f98; end: 00064fc7;  */

void FUN_00064f98(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00064fc8(param_1);
  return;
}



/* Entry: 00064fc8; end: 00065387;  */

undefined8 FUN_00064fc8(ulong param_1)

{
  int iVar1;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
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
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&uStack_b0;
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  uVar4 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  uVar5 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar5);
    _swift_unknownObjectRelease(uVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_00027748(&uStack_80);
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    FUN_00070720(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_0099b8d8 + 8,uVar4,6);
    uVar4 = uStack_b0;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
  }
  uVar6 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  uVar5 = param_1;
  func_0x00781ae0();
  _objc_release(uVar6);
  if (uVar5 < 3) {
    uVar6 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x80000000008b6a50);
    uVar5 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (uVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar5);
      _swift_unknownObjectRelease(uVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      FUN_00027748(&uStack_80);
      uVar6 = 0;
      uVar5 = 0xf000000000000000;
    }
    else {
      _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_0099b8d8 + 8,
                         PTR___s10Foundation4DataVN_0099c3c0,6);
      uVar6 = uStack_b0;
      uVar5 = uStack_a8;
      if (iVar2 == 0) {
        uVar6 = 0;
        uVar5 = 0xf000000000000000;
      }
    }
    uVar7 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x80000000008b6a70);
    uVar8 = param_1;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar8 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar8);
      _swift_unknownObjectRelease(uVar8);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      FUN_00027748(&uStack_80);
      uVar7 = 0;
      uVar8 = 0xf000000000000000;
    }
    else {
      _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_0099b8d8 + 8,
                         PTR___s10Foundation4DataVN_0099c3c0,6);
      uVar7 = uStack_b0;
      uVar8 = uStack_a8;
      if (iVar3 == 0) {
        uVar7 = 0;
        uVar8 = 0xf000000000000000;
      }
    }
    if (uVar5 >> 0x3c < 0xf) {
      func_0x00023304(uVar6,uVar5);
      uVar9 = uVar6;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar6,uVar5);
      FUN_00023344(uVar6,uVar5);
    }
    else {
      uVar9 = 0;
    }
    if (uVar8 >> 0x3c < 0xf) {
      func_0x00023304(uVar7,uVar8);
      uVar10 = uVar7;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar7,uVar8);
      FUN_00023344(uVar7,uVar8);
    }
    else {
      uVar10 = 0;
    }
    func_0x00786480();
    _objc_release(uVar4);
    FUN_00023344(uVar6,uVar5);
    FUN_00023344(uVar7,uVar8);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _objc_release(uVar4);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 00065388; end: 000653af; -[SCRegistrationPhoneNumber initWithCoder:] */

void FUN_00065388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00064fc8();
  return;
}



/* Entry: 000653b0; end: 000653e3; -[SCRegistrationPhoneNumber description] */

void FUN_000653b0(void)

{
  undefined1 auStack_58 [72];
  
  FUN_00065614(auStack_58);
  FUN_000655e0(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 000653e4; end: 0006545f; -[SCRegistrationPhoneNumber init] */

void FUN_000653e4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationPhoneNumberWrapper.swift",0x4a,2,99,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x6542c);
  (*pcVar1)();
}



/* Entry: 00065460; end: 000654af; -[SCRegistrationPhoneNumber .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065460(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_00ae8620));
  FUN_00023344(*(undefined8 *)(param_1 + _DAT_00ae8630),((undefined8 *)(param_1 + _DAT_00ae8630))[1]
              );
  uVar1 = ((undefined8 *)(param_1 + _DAT_00ae8638))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*(undefined8 *)(param_1 + _DAT_00ae8638));
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000654b0; end: 000655df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000654b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  lVar5 = param_1[1];
  if (lVar5 == 1) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar4 = *param_1;
    FUN_00070720(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(lVar5);
    FUN_00070740(uVar4,lVar5,uVar1,uVar2);
  }
  *(undefined8 *)(unaff_x20 + _DAT_00ae8620) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_00ae8628) = param_1[4];
  uStack_58 = param_1[6];
  uStack_60 = param_1[5];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_00ae8630);
  puVar3[1] = uStack_58;
  *puVar3 = uStack_60;
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_00ae8638);
  puVar3[1] = uStack_68;
  *puVar3 = uStack_70;
  FUN_00065728(&uStack_60,auStack_80,0xae8490,&UNK_007d0910);
  FUN_00065728(&uStack_70,auStack_80,0xae8490,&UNK_007d0910);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000655e0; end: 00065613;  */

undefined8 FUN_000655e0(undefined8 param_1)

{
  (*(code *)(undefined *)0x5bff8)();
  return param_1;
}



/* Entry: 00065614; end: 00065707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065614(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_2 + _DAT_00ae8620);
  if (lVar6 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 1;
    uStack_50 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar6 + _DAT_00ae89f8);
    puVar2 = (undefined8 *)(lVar6 + _DAT_00ae8a00);
    uStack_48 = puVar1[1];
    uStack_50 = *puVar1;
    uVar7 = puVar1[1];
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    _swift_bridgeObjectRetain(puVar2[1]);
    _swift_bridgeObjectRetain(uVar7);
  }
  uVar8 = *(undefined8 *)(param_2 + _DAT_00ae8628);
  uVar7 = *(undefined8 *)(param_2 + _DAT_00ae8630);
  uVar4 = ((undefined8 *)(param_2 + _DAT_00ae8630))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_00ae8638);
  uVar5 = ((undefined8 *)(param_2 + _DAT_00ae8638))[1];
  FUN_000308a8(uVar7,uVar4);
  FUN_000308a8(uVar3,uVar5);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = uVar8;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar3;
  param_1[8] = uVar5;
  return;
}



/* Entry: 00065708; end: 00065727;  */

void FUN_00065708(void)

{
  _objc_opt_self(&PTR_PTR_00ac84b0);
  return;
}



/* Entry: 00065728; end: 0006576f;  */

undefined8 FUN_00065728(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x000115a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 00065770; end: 000657cb; -[SCRegistrationUsername usernameText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065770(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_00ae8668))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_00ae8668);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 000657cc; end: 000657df; -[SCRegistrationUsername source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000657cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_00ae8670);
}



/* Entry: 000657e0; end: 000658cf; -[SCRegistrationUsername initWithUsernameText:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000657e0(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_00ae8668);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_00ae8670) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_00abbf70);
  return;
}



/* Entry: 000658d0; end: 00065903; -[SCRegistrationUsername hash] */

undefined8 FUN_000658d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_00065904();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 00065904; end: 00065a9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065904(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8668))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8668);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x007843a0();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_00ae8670));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00065aa0; end: 00065b1f; -[SCRegistrationUsername isEqual:] */

uint FUN_00065aa0(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00065998(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00065b20; end: 00065b23; -[SCRegistrationUsername copyWithZone:] */

void FUN_00065b20(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00065b24; end: 00065bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065b24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_00ae8668))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_00ae8668);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454d414e52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e52455355,0xed0000545845545f);
  func_0x00782780(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x454352554f53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
  func_0x00782760(param_1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00065bf0; end: 00065c3f; -[SCRegistrationUsername encodeWithCoder:] */

void FUN_00065bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_00065b24(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00065c40; end: 00065c6f;  */

void FUN_00065c40(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_00065c70(param_1);
  return;
}



/* Entry: 00065c70; end: 00065e2f;  */

undefined8 FUN_00065c70(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar1 = (int)&uStack_90;
  uVar2 = 0x454d414e52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e52455355,0xed0000545845545f);
  lVar3 = param_1;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_00027748(&uStack_60);
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_0099b8d8 + 8,PTR___sSSN_0099b040,6);
    lVar3 = lStack_88;
    uVar2 = uStack_90;
    if (iVar1 == 0) {
      uVar2 = 0;
      lVar3 = 0;
    }
  }
  uVar4 = 0x454352554f53;
  uVar6 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53);
  lVar5 = param_1;
  func_0x00781ae0(param_1);
  _objc_release(uVar4);
  func_0x00060c00(lVar5);
  if ((uVar6 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar3);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar3);
      _swift_bridgeObjectRelease(lVar3);
    }
    func_0x00786ee0();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  return unaff_x20;
}



/* Entry: 00065e30; end: 00065e57; -[SCRegistrationUsername initWithCoder:] */

void FUN_00065e30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_00065c70();
  return;
}


