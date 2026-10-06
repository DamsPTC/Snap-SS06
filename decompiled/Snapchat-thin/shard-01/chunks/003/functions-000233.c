/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f04e80; end: 100f04f2b;  */

/* WARNING: Possible PIC construction at 0x000100f04ed8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f04edc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f04e80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef19540);
  func_0x000107c42744(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100f04f2c; end: 100f04f7b; -[SCPhoneEmailFirstLogInErrorData encodeWithCoder:] */

/* WARNING: Possible PIC construction at 0x000100f04f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f04f68) */

void FUN_100f04f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f04e80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f04f7c; end: 100f04fab;  */

void FUN_100f04f7c(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_100f04fac(param_1);
  return;
}



/* Entry: 100f04fac; end: 100f051d3;  */

undefined8 FUN_100f04fac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef19540);
  lVar2 = param_1;
  func_0x000107c41478();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  if (lVar2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80,lVar2);
    func_0x000107c615e8(lVar2);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
LAB_100f0517c:
    func_0x000107c61170(param_1);
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    uVar3 = 0;
    FUN_100f051d4(0,0x112d4ab18,&PTR_PTR_1126af540);
    puVar1 = PTR___sypN_11034f1a8;
    plVar4 = &lStack_88;
    func_0x000107c6147c(plVar4,&uStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
    lVar2 = lStack_88;
    if (((ulong)plVar4 & 1) != 0) {
      uVar3 = 0xd000000000000011;
      func_0x000107c5fadc(0xd000000000000011,0x800000010ef19560);
      lVar5 = param_1;
      func_0x000107c41478();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (lVar5 == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x000107c60234(&uStack_80,lVar5);
        func_0x000107c615e8(lVar5);
      }
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        func_0x000107c61170(param_1);
        param_1 = lVar2;
        goto LAB_100f0517c;
      }
      uVar3 = 0;
      FUN_100f051d4(0,0x112d48278,&PTR_PTR_1126af238);
      plVar4 = &lStack_88;
      func_0x000107c6147c(plVar4,&uStack_60,puVar1 + 8,uVar3,6);
      if (((ulong)plVar4 & 1) != 0) {
        func_0x000107c4756c();
        func_0x000107c61170(param_1);
        func_0x000107c61170(lStack_88);
        func_0x000107c61170(lVar2);
        return unaff_x20;
      }
      func_0x000107c61170(param_1);
      param_1 = lVar2;
    }
    func_0x000107c61170(param_1);
  }
  func_0x000107c614f0();
  func_0x000107c61464();
  return 0;
}



/* Entry: 100f051d4; end: 100f05213;  */

void FUN_100f051d4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100f05214; end: 100f0523b; -[SCPhoneEmailFirstLogInErrorData initWithCoder:] */

void FUN_100f05214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100f04fac();
  return;
}



/* Entry: 100f0523c; end: 100f05257; -[SCPhoneEmailFirstLogInErrorData description] */

void FUN_100f0523c(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f05258; end: 100f052d3; -[SCPhoneEmailFirstLogInErrorData init] */

void FUN_100f05258(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "PhoneEmailFirstLogInScope/PhoneEmailFirstLogInErrorDataWrapper.swift",0x44,2,
                      0x4d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f052a0);
  (*pcVar1)();
}



/* Entry: 100f052d4; end: 100f0530b; -[SCPhoneEmailFirstLogInErrorData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f052f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f052f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f052d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4ab08));
  return;
}



/* Entry: 100f0530c; end: 100f0532b;  */

void FUN_100f0530c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0270);
  return;
}



/* Entry: 100f0532c; end: 100f0532f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f0532c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d4ab08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4ab10) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f05330; end: 100f053a7;  */

long FUN_100f05330(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  uVar1 = param_2;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 100f053a8; end: 100f053d3;  */

void FUN_100f053a8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f053d4; end: 100f0546f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f053d4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar6 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar6 + 0x18);
  lVar2 = 0;
  FUN_100f05868();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d4abf0) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c4e9e4(uVar5);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 100f05470; end: 100f05477;  */

undefined8 FUN_100f05470(void)

{
  return 0;
}



/* Entry: 100f05478; end: 100f05497;  */

void FUN_100f05478(void)

{
  func_0x000107c61168(&PTR_PTR_112d4ab88);
  return;
}



/* Entry: 100f05498; end: 100f0550f; -[_TtC38BitmojiComicStyleFHPUIConfigEntryPoint36BitmojiComicStyleFHPUIConfigProvider canHandleCampaignId:] */

uint FUN_100f05498(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == -0x2fffffffffffffd6) && (param_2 == -0x7ffffffef10e69e0)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 100f05510; end: 100f057c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f05510(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112d4abf0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c3e544();
    func_0x000107c61180();
    if (uVar2 == 0) {
      func_0x000107c615e8(uVar1);
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c6142c(param_2);
      uVar3 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar3 = param_2 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        puVar4 = PTR_PTR_1126aeed8;
        func_0x000107c61168();
        uVar5 = 0x3736333933383933;
        func_0x000107c5fadc(0x3736333933383933,0xe800000000000000);
        func_0x000107c3ea14();
        func_0x000107c61180();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar5);
        puVar6 = PTR_PTR_1126aed90;
        func_0x000107c610f8();
        func_0x000107c61174();
        uVar5 = 0xd00000000000002a;
        func_0x000107c5fadc(0xd00000000000002a,0x800000010ef19620);
        func_0x000107c45cc4();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar5);
        puVar7 = PTR_PTR_1126ae558;
        func_0x000107c61168(PTR_PTR_1126ae558);
        puVar8 = (undefined *)0x112d38dc0;
        func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
        func_0x000107c613fc();
        *(undefined8 *)(puVar8 + 0x18) = 2;
        *(undefined8 *)(puVar8 + 0x10) = 1;
        uVar5 = 0;
        FUN_100f05888(0,0x112d38dc8,&PTR_PTR_1126aed90);
        *(undefined8 *)(puVar8 + 0x38) = uVar5;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        FUN_100f05888(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61174(puVar6);
        func_0x000107c600f0(puVar8);
        func_0x000107c451b0(puVar7);
        func_0x000107c61180();
        func_0x000107c615e8(uVar1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar6);
        goto LAB_100f0579c;
      }
      func_0x000107c615e8(uVar1);
      func_0x000107c61170(uVar2);
    }
  }
  puVar7 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  FUN_100f05888(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c451b0(puVar7);
  func_0x000107c61180();
LAB_100f0579c:
  func_0x000107c61170(puVar8);
  return puVar7;
}



/* Entry: 100f057c4; end: 100f057f7; -[_TtC38BitmojiComicStyleFHPUIConfigEntryPoint36BitmojiComicStyleFHPUIConfigProvider configs] */

void FUN_100f057c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100f05510();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100f057f8; end: 100f05857; -[_TtC38BitmojiComicStyleFHPUIConfigEntryPoint36BitmojiComicStyleFHPUIConfigProvider init] */

void FUN_100f057f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiComicStyleFHPUIConfigEntryPoint.BitmojiComicStyleFHPUIConfigProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f05824);
  (*pcVar1)();
}



/* Entry: 100f05858; end: 100f05867; -[_TtC38BitmojiComicStyleFHPUIConfigEntryPoint36BitmojiComicStyleFHPUIConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f05858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4abf0));
  return;
}



/* Entry: 100f05868; end: 100f05887;  */

void FUN_100f05868(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0348);
  return;
}



/* Entry: 100f05888; end: 100f058c7;  */

void FUN_100f05888(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100f058c8; end: 100f058d3; -[SCBitmojiComicStyleFHPUIConfigEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f058c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ac20;
  func_0x000107c61428(param_1 + _DAT_112d4ac20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f058d4; end: 100f058df; -[SCBitmojiComicStyleFHPUIConfigEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f058d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ac20;
  func_0x000107c61428(param_1 + _DAT_112d4ac20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f058e0; end: 100f058eb; -[SCBitmojiComicStyleFHPUIConfigEntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f058e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4ac28;
  func_0x000107c61428(param_1 + _DAT_112d4ac28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f058ec; end: 100f0592f;  */

void FUN_100f058ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f05930; end: 100f0593b; -[SCBitmojiComicStyleFHPUIConfigEntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f05930(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4ac28;
  func_0x000107c61428(param_1 + _DAT_112d4ac28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f0593c; end: 100f0598f;  */

void FUN_100f0593c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f05990; end: 100f05adb;  */

/* WARNING: Possible PIC construction at 0x000100f05a78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f05a88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f05a7c) */
/* WARNING: Removing unreachable block (ram,0x000100f05a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f05990(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3e9b4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100f05478();
    func_0x000107c613fc();
    *(long *)(lVar3 + 0x10) = lVar2;
    func_0x000107c61174(lVar2);
    lVar4 = unaff_x20;
    func_0x000107c3e550();
    func_0x000107c61180();
    *(long *)(lVar3 + 0x18) = lVar4;
    lVar5 = 0;
    FUN_100f05868();
    lVar3 = lVar5;
    func_0x000107c610f8();
    *(long *)(lVar3 + _DAT_112d4abf0) = lVar4;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar3;
    lStack_48 = lVar5;
    func_0x000107c61174(lVar4);
    func_0x000107c61154(&lStack_50,puVar1);
    func_0x000107c4e9e4(lVar2);
    func_0x000107c61180();
    func_0x000107c4fba8();
    lVar2 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100f05adc; end: 100f05b03; -[SCBitmojiComicStyleFHPUIConfigEntryPoint begin] */

void FUN_100f05adc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f05990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f05b04; end: 100f05b47; -[SCBitmojiComicStyleFHPUIConfigEntryPoint end] */

void FUN_100f05b04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f05b48; end: 100f05cdf;  */

void FUN_100f05b48(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e69b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef19650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BitmojiComicStyleFHPUIConfigEntryPoint/SCBitmojiComicStyleFHPUIConfigEntryPoint.swift"
                            ,0x55,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f05ce0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52cf4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f05ce0; end: 100f05d8b; -[SCBitmojiComicStyleFHPUIConfigEntryPoint setValue:forIvarName:] */

void FUN_100f05ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f05b48(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f05d8c; end: 100f05dff; -[SCBitmojiComicStyleFHPUIConfigEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f05d8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4ac20,0);
  func_0x000107c61614(param_1 + _DAT_112d4ac28,0);
  *(undefined8 *)(param_1 + _DAT_112d4ac30) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f05e00; end: 100f05e33;  */

void FUN_100f05e00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f05e34; end: 100f05e7b; -[SCBitmojiComicStyleFHPUIConfigEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f05e34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4ac20);
  func_0x000107c61610(param_1 + _DAT_112d4ac28);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4ac30));
  return;
}



/* Entry: 100f05e7c; end: 100f05e9b;  */

void FUN_100f05e7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a0408);
  return;
}



/* Entry: 100f05e9c; end: 100f05ed3;  */

void FUN_100f05e9c(void)

{
  undefined8 uVar1;
  
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  uVar1 = 0x20;
  func_0x0001044e4b78();
  uRam00000001137ff0b8 = uVar1;
  return;
}



/* Entry: 100f05ed4; end: 100f060ab;  */

void FUN_100f05ed4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 3;
  *(undefined8 *)(param_1 + 0x10) = 1;
  if (lRam0000000112d4ad08 != -1) {
    func_0x000107c61568(0x112d4ad08,FUN_100f05e9c);
  }
  uVar4 = uRam00000001137ff0b8;
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff0b8;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 1;
  func_0x000107c602e8();
  func_0x000107c61174(uVar4);
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f060ac);
      (*pcVar2)();
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar4 = 0;
    FUN_100f060ac(0,param_1);
  }
  lVar1 = lVar3 + 0x38;
  uVar5 = *(ulong *)(lVar3 + 0x28);
  func_0x000107c60114();
  uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar5 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar5 & 0x3f);
  if ((uVar8 & uVar7) != 0) {
    func_0x0001044e4d64(0);
    do {
      uVar7 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
      func_0x000107c61174();
      uVar6 = uVar7;
      func_0x000107c60118();
      func_0x000107c61170(uVar7);
      if ((uVar6 & 1) != 0) {
        func_0x000107c61170(uVar4);
        goto LAB_100f06040;
      }
      uVar5 = uVar5 + 1 & ~uVar9;
      uVar6 = uVar5 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar5 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100f060a8);
    (*pcVar2)();
  }
  *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_100f06040:
  func_0x000107c61588(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c61408(param_1 + 0x20,uVar10,uVar4);
  lRam00000001137ff0c0 = lVar3;
  return;
}



/* Entry: 100f060ac; end: 100f062ab;  */

ulong FUN_100f060ac(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f0617c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f06180);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044e4d64(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001044e4d64(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010ef19790);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100f06248);
  (*pcVar2)();
}



/* Entry: 100f062ac; end: 100f063db;  */

undefined8
FUN_100f062ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_100f06560(param_1,param_2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return uVar1;
}



/* Entry: 100f063dc; end: 100f06403;  */

void FUN_100f063dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 100f06404; end: 100f0655f;  */

void FUN_100f06404(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c602dc();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x38;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x38U) {
      func_0x000107c610b8(lVar6 + 0x38U,lVar1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar11 + 0x38);
    if (uVar7 == 0) goto LAB_100f064e0;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        func_0x000107c61434();
        if (uVar7 != 0) break;
LAB_100f064e0:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100f06560);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_100f06538;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_100f06538:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 100f06560; end: 100f06a6f;  */

undefined8
FUN_100f06560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar15 = 0xd000000000000011;
  puVar5 = &UNK_1103676e0;
  func_0x000107c613fc(&UNK_1103676e0,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  pcVar6 = FUN_100f06a90;
  func_0x0001000bdd8c(FUN_100f06a90,puVar5);
  uVar11 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  pcVar7 = FUN_100f063dc;
  func_0x0001000cb480(FUN_100f063dc,0,uVar11);
  pcVar8 = pcVar7;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar7);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,4,0);
  uVar11 = 0x800000010ef19770;
  uVar12 = 0x800000010ef19750;
  uVar16 = 0x800000010ef19720;
  if (bRam0000000112d4adf0 < 2) {
    if (bRam0000000112d4adf0 == 0) {
      uVar14 = 0xd000000000000011;
      uVar13 = uVar16;
    }
    else {
      uVar14 = 0x5f64657461647075;
      uVar13 = 0xee00726174617661;
    }
  }
  else if (bRam0000000112d4adf0 == 2) {
    uVar14 = 0xd000000000000013;
    uVar13 = uVar12;
  }
  else {
    uVar14 = 0xd000000000000016;
    uVar13 = uVar11;
  }
  uVar3 = *(ulong *)(puVar5 + 0x10);
  uVar1 = uVar3 + 1;
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
    func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar1,1);
  }
  *(ulong *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x20) = uVar14;
  *(undefined8 *)(puVar5 + uVar3 * 0x10 + 0x28) = uVar13;
  if (bRam0000000112d4adf1 < 2) {
    uVar14 = uVar15;
    uVar13 = uVar16;
    if (bRam0000000112d4adf1 != 0) {
      uVar14 = 0x5f64657461647075;
      uVar13 = 0xee00726174617661;
    }
  }
  else if (bRam0000000112d4adf1 == 2) {
    uVar14 = 0xd000000000000013;
    uVar13 = uVar12;
  }
  else {
    uVar14 = 0xd000000000000016;
    uVar13 = uVar11;
  }
  uVar2 = uVar3 + 2;
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar2,1);
  }
  *(ulong *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = uVar14;
  *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = uVar13;
  if (bRam0000000112d4adf2 < 2) {
    uVar14 = uVar15;
    uVar13 = uVar16;
    if (bRam0000000112d4adf2 != 0) {
      uVar14 = 0x5f64657461647075;
      uVar13 = 0xee00726174617661;
    }
  }
  else if (bRam0000000112d4adf2 == 2) {
    uVar14 = 0xd000000000000013;
    uVar13 = uVar12;
  }
  else {
    uVar14 = 0xd000000000000016;
    uVar13 = uVar11;
  }
  uVar1 = uVar3 + 3;
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
    func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar1,1);
  }
  *(ulong *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar14;
  *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar13;
  if (bRam0000000112d4adf3 < 2) {
    uVar11 = uVar16;
    if (bRam0000000112d4adf3 != 0) {
      uVar11 = 0xee00726174617661;
      uVar15 = 0x5f64657461647075;
    }
  }
  else if (bRam0000000112d4adf3 == 2) {
    uVar11 = uVar12;
    uVar15 = 0xd000000000000013;
  }
  else {
    uVar15 = 0xd000000000000016;
  }
  if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puVar5 + 0x18),uVar3 + 4,1);
  }
  *(ulong *)(puVar5 + 0x10) = uVar3 + 4;
  *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = uVar15;
  *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = uVar11;
  puVar9 = puVar5;
  func_0x000100403a6c(puVar5);
  func_0x000107c61574(puVar5);
  lVar4 = lRam0000000112d4ad18;
  func_0x000107c61174(pcVar8);
  if (lVar4 != -1) {
    func_0x000107c61568(0x112d4ad18,FUN_100f05ed4);
  }
  uVar11 = uRam00000001137ff0c0;
  puVar5 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar12 = 0;
  func_0x0001044e4d64(0);
  uVar15 = uVar12;
  FUN_100f06a9c();
  func_0x000107c5fe08(uVar11,uVar12,uVar15);
  puVar10 = puVar9;
  func_0x000107c5fe08(puVar9,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar9);
  func_0x000107c48360(puVar5);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61574(pcVar6);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 100f06a70; end: 100f06a8f;  */

void FUN_100f06a70(void)

{
  func_0x000107c61168(&PTR_PTR_112d4ad60);
  return;
}



/* Entry: 100f06a90; end: 100f06a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f06a90(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130147f0);
  func_0x000107c6157c(uVar4);
  func_0x000107c3e550(uVar1);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(lVar2 + _DAT_113014820);
  FUN_100f0a4d8(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar3);
  FUN_100f072c8(uVar4,uVar1,uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 100f06a9c; end: 100f06adf;  */

void FUN_100f06a9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d4adf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001044e4d64(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112d4adf8 = puVar2;
  return;
}



/* Entry: 100f06ae0; end: 100f06b33;  */

undefined8 FUN_100f06ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_100f072c8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 100f06b34; end: 100f06b3b;  */

undefined8 FUN_100f06b34(void)

{
  return 1;
}



/* Entry: 100f06b3c; end: 100f06bdb;  */

void FUN_100f06b3c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f06bdc; end: 100f06bf3;  */

undefined1  [16] FUN_100f06bdc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x6449726174617661;
  return auVar1;
}



/* Entry: 100f06bf4; end: 100f06c77;  */

void FUN_100f06bf4(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x61;
  if (param_2 == 0x6449726174617661 && param_3 == -0x1800000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x6449726174617661,0xe800000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 100f06c78; end: 100f06c8f;  */

undefined1  [16] FUN_100f06c78(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f06c90; end: 100f06cdf;  */

void FUN_100f06c90(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000100f0aab4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f06ce0; end: 100f06e1f;  */

void FUN_100f06ce0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d4b090;
  uStack_70 = param_4;
  uStack_68 = param_5;
  func_0x0001000285a8(0x112d4b090,&UNK_10d911610);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_70 - extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_100f0aa74();
  func_0x000107c606ec(lVar5,&UNK_110367de8,&UNK_110367de8,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(param_2,param_3,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60520(uStack_70,uStack_68,&uStack_52,lVar3);
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(lVar5,lVar3);
  }
  return;
}



/* Entry: 100f06e20; end: 100f06f47;  */

/* WARNING: Removing unreachable block (ram,0x000100f06ee4) */

void FUN_100f06e20(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  lVar3 = 0x112d4b0b0;
  func_0x0001000285a8(0x112d4b0b0,&UNK_10d911620);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  func_0x000100f0aab4();
  puVar5 = &UNK_110367d58;
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110367d58,&UNK_110367d58,lVar4,
                      uVar1,uVar2);
  if (unaff_x21 == 0) {
    lVar4 = lVar3;
    func_0x000107c604f4();
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puVar5;
    param_1[1] = lVar4;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 100f06f48; end: 100f07037;  */

void FUN_100f06f48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112d4b0a0;
  func_0x0001000285a8(0x112d4b0a0,&UNK_10d911618);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x000100f0aab4();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110367d58,&UNK_110367d58,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 100f07038; end: 100f0704b;  */

bool FUN_100f07038(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 100f0704c; end: 100f070f7;  */

void FUN_100f0704c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 100f070f8; end: 100f0713b;  */

undefined1  [16] FUN_100f070f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6449646e65697266;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6d49343665736162;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xeb00000000656761;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 100f0713c; end: 100f07217;  */

void FUN_100f0713c(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  if ((param_2 == 0x6d49343665736162 && param_3 == -0x14ffffffff9a989f) ||
     (func_0x000107c605b8(0x6d49343665736162,0xeb00000000656761,param_2,param_3,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_3);
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    if ((param_2 == 0x6449646e65697266) && (param_3 == -0x1800000000000000)) {
      func_0x000107c6142c(0xe800000000000000);
      uVar2 = 1;
    }
    else {
      func_0x000107c605b8(0x6449646e65697266,0xe800000000000000,param_2,param_3,0);
      func_0x000107c6142c(param_3);
      uVar2 = 1;
      if ((uVar1 & 1) == 0) {
        uVar2 = 2;
      }
    }
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 100f07218; end: 100f0722f;  */

undefined1  [16] FUN_100f07218(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 100f07230; end: 100f0727f;  */

void FUN_100f07230(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100f0aa74();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 100f07280; end: 100f072ab;  */

void FUN_100f07280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100f0a228();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 100f072ac; end: 100f072c7;  */

void FUN_100f072ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100f06ce0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Entry: 100f072c8; end: 100f0762b;  */

void FUN_100f072c8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar11;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  uStack_a8 = param_1;
  lStack_a0 = param_2;
  uStack_98 = param_3;
  func_0x000107c5ffd8();
  lStack_b8 = *(long *)(lVar1 + -8);
  lStack_b0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar6 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5ffc4();
  puVar7 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar11 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  uVar4 = 0;
  func_0x0001000295c4();
  uStack_c0 = uVar4;
  func_0x000107c5f80c(lVar2);
  puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_100f0a508(0x112d4ac68,puVar7,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar9 = 0x112d4ac78;
  func_0x000100f0a548(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar11,&puStack_90,uVar5,uVar9,lVar1,uVar4);
  (**(code **)(lStack_b8 + 0x68))
            (lVar6,*(undefined4 *)
                    PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_b0);
  uVar4 = uStack_a8;
  uVar10 = 0x800000010ef196d0;
  uVar5 = 0xd000000000000040;
  func_0x000107c5ffec(0xd000000000000040,0x800000010ef196d0,lVar2,lVar11,lVar6,0);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar9 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  uVar5 = uStack_98;
  lVar1 = lStack_a0;
  *(undefined8 *)(unaff_x20 + 0x80) = uVar9;
  *(undefined8 *)(unaff_x20 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  *(long *)(unaff_x20 + 0x18) = lStack_a0;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_98;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar6 = lVar2;
    func_0x000107c3e548();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar7 = &UNK_110367710;
    func_0x000107c613fc(&UNK_110367710,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    pcStack_70 = FUN_100f0762c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_10083fefc;
    puStack_78 = &UNK_110367728;
    ppuVar8 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c61574(puStack_68);
    lVar2 = lVar6;
    func_0x000107c5c320(lVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar6);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c61174(uVar9);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61574(uVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 100f0762c; end: 100f0765b;  */

void FUN_100f0762c(void)

{
  func_0x000100f094d8();
  return;
}



/* Entry: 100f0765c; end: 100f07677;  */

void FUN_100f0765c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100f07678; end: 100f07eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100f07678(undefined *param_1,code *param_2,undefined *param_3,code *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  undefined *puVar14;
  code *pcVar15;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  ppuVar8 = &puStack_80;
  if (param_1 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    param_1 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    uVar13 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puVar14 = puVar2;
    func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar2);
    func_0x000107c48368(param_1);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar14);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
    func_0x000107c61180();
    goto LAB_100f079f4;
  }
  func_0x000107c61174();
  puVar2 = param_1;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  puVar14 = puVar2;
  func_0x000107c5faec();
  pcVar12 = param_2;
  func_0x000107c61170(puVar2);
  if (lRam0000000112d4ad08 != -1) {
    pcVar12 = FUN_100f05e9c;
    func_0x000107c61568(0x112d4ad08);
  }
  puVar2 = (undefined *)(ulong)*(byte *)(lRam00000001137ff0b8 + _DAT_113080f70);
  func_0x0001044e388c();
  if (puVar14 == puVar2 && param_2 == pcVar12) {
    pcVar15 = pcVar12;
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar12);
LAB_100f077f0:
    puVar2 = param_1;
    func_0x000107c428b4();
    func_0x000107c61180();
    puVar14 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
    func_0x000100f06248();
    uVar1 = (uint)puVar14 & 0xff;
    puVar2 = PTR_PTR_1126ae6b8;
    if (uVar1 != 1 && ((ulong)puVar14 & 0xff) != 0) {
      if (uVar1 == 2) {
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar14 = &UNK_110367710;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar14 + 0x10);
        puVar5 = &UNK_1103677b0;
        func_0x000107c613fc(&UNK_1103677b0,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar14;
        *(undefined **)(puVar5 + 0x18) = param_1;
        pcStack_60 = (code *)0x100f0a4b8;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1004725e8;
        puStack_68 = &UNK_1103677c8;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        puVar14 = puStack_58;
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar14);
        func_0x000107c408f0(puVar2);
        ppuVar6 = ppuVar4;
LAB_100f07ba4:
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c60bd0(ppuVar6);
        return puVar2;
      }
      if (uVar1 == 3) {
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar14 = &UNK_110367710;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar14 + 0x10);
        puVar5 = &UNK_110367760;
        func_0x000107c613fc(&UNK_110367760,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar14;
        *(undefined **)(puVar5 + 0x18) = param_1;
        pcStack_60 = FUN_100f0a4b0;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1004725e8;
        puStack_68 = &UNK_110367778;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        puVar14 = puStack_58;
        func_0x000107c61174(param_1);
        func_0x000107c61574(puVar14);
        func_0x000107c408f0(puVar2);
        ppuVar6 = ppuVar3;
        goto LAB_100f07ba4;
      }
      goto LAB_100f078fc;
    }
    if (((ulong)puVar14 & 0xff) != 0) {
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar14 = &UNK_110367710;
      func_0x000107c613fc(&UNK_110367710,0x18,7);
      func_0x000107c61644(puVar14 + 0x10);
      puVar5 = &UNK_110367800;
      func_0x000107c613fc(&UNK_110367800,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar14;
      *(undefined **)(puVar5 + 0x18) = param_1;
      pcStack_60 = (code *)0x100f0a4c0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1004725e8;
      puStack_68 = &UNK_110367818;
      puStack_58 = puVar5;
      func_0x000107c60bc4(&puStack_80);
      puVar14 = puStack_58;
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar14);
      func_0x000107c408f0(puVar2);
      goto LAB_100f07ba4;
    }
    puVar2 = param_1;
    func_0x000107c3eb80();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar14 = (undefined *)0x0;
      pcVar15 = (code *)0xf000000000000000;
    }
    else {
      puVar14 = puVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar2);
    }
    puVar2 = puVar14;
    pcVar12 = pcVar15;
    FUN_100f0af88();
    func_0x0001000b44c0(puVar14,pcVar15);
    if (pcVar12 != (code *)0x0) {
      pcVar7 = "handle(_:)";
      func_0x0001000c10c0("handle(_:)");
      func_0x000107c61180();
      puVar14 = &UNK_110367850;
      uVar13 = 0x40;
      func_0x000107c613fc(&UNK_110367850,0x40,7);
      *(undefined8 *)(puVar14 + 0x10) = unaff_x20;
      *(undefined **)(puVar14 + 0x18) = param_3;
      *(undefined **)(puVar14 + 0x20) = puVar2;
      *(code **)(puVar14 + 0x28) = pcVar12;
      *(undefined **)(puVar14 + 0x30) = param_1;
      *(code **)(puVar14 + 0x38) = param_4;
      pcStack_60 = (code *)0x100f0a4c8;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_1000f6b44;
      puStack_68 = &UNK_110367868;
      puStack_58 = puVar14;
      func_0x000107c60bc4(&puStack_80);
      puVar2 = puStack_58;
      func_0x000107c61174(param_3);
      func_0x000107c61174();
      func_0x000107c6157c();
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(pcVar7);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c615e8(pcVar7);
      puVar2 = param_1;
      func_0x000107c50374();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar13);
      }
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar5 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      puVar9 = puVar14;
      func_0x000107c5f9dc(puVar14,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90
                         );
      func_0x000107c6142c(puVar14);
      func_0x000107c48368(puVar5);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar9);
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      func_0x000107c4a8a4();
      func_0x000107c61180();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(param_1);
      param_1 = param_3;
      goto LAB_100f079f4;
    }
    puVar2 = param_1;
    func_0x000107c50374();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(pcVar15);
    }
    lVar10 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar11 = lVar10;
    func_0x0001001830b8();
    func_0x000100ab5dc4(lVar10 + 0x20);
    puVar14 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    lVar10 = lVar11;
    func_0x000107c5f9dc(lVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar11);
    func_0x000107c48368(puVar14);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar10);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
  }
  else {
    pcVar15 = param_2;
    param_4 = pcVar12;
    func_0x000107c605b8();
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pcVar12);
    param_3 = puVar2;
    if (((ulong)puVar14 & 1) != 0) goto LAB_100f077f0;
LAB_100f078fc:
    puVar2 = param_1;
    func_0x000107c50374();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(pcVar15);
    }
    lVar10 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61538();
    lVar11 = lVar10;
    func_0x0001001830b8();
    func_0x000100ab5dc4(lVar10 + 0x20);
    puVar14 = PTR_PTR_1126b0278;
    func_0x000107c610f8(PTR_PTR_1126b0278);
    lVar10 = lVar11;
    func_0x000107c5f9dc(lVar11,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(lVar11);
    func_0x000107c48368(puVar14);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar10);
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000107c4a8a4();
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
LAB_100f079f4:
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 100f07eb4; end: 100f0804f;  */

void FUN_100f07eb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uStack_78;
  long lStack_70;
  
  uVar7 = param_2;
  func_0x000100083b20(&uStack_78);
  uVar3 = uStack_78;
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = param_5;
  func_0x000107c4b1dc(param_5);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  uVar8 = uVar7;
  func_0x000107c5fb78(uVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c5faec();
  func_0x000107c61170(param_5);
  puVar6 = &UNK_110367710;
  func_0x000107c613fc(&UNK_110367710,0x18,7);
  func_0x000107c61644(puVar6 + 0x10,param_1);
  pcVar9 = *(code **)(lStack_70 + 8);
  func_0x000107c6157c(puVar6);
  (*pcVar9)(param_2,param_3,param_4,uVar1,uVar2,0x4152545f534e454c,0xe900000000000059,
            0x3a64695f736e656c,0xe800000000000000,uVar4,uVar8,0,param_6,0,FUN_100f0a4f8,puVar6,uVar3
            ,lStack_70);
  func_0x000107c615e8(uStack_78);
  func_0x000107c6142c(0xe800000000000000);
  func_0x000107c6142c(uVar8);
  func_0x000107c61578(puVar6,2);
  return;
}



/* Entry: 100f08050; end: 100f080a3;  */

void FUN_100f08050(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_100f080a4();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100f080a4; end: 100f082b7;  */

void FUN_100f080a4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar10 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110367710;
  func_0x000107c613fc(&UNK_110367710,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  uStack_70 = 0x100f0a500;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110367890;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c(puVar4);
  func_0x000107c5f808(lVar3);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_100f0a508(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar3,lVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(lVar9,lVar2);
  (**(code **)(lVar10 + 8))(lVar3,lStack_a8);
  puVar1 = puStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 100f082b8; end: 100f0860b;  */

void FUN_100f082b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c3fedc(param_1);
    func_0x000107c610f8(PTR_PTR_1126b0418);
    func_0x000107c453e4();
  }
  else {
    uStack_d0 = *(undefined8 *)(param_2 + 0x30);
    puVar3 = &UNK_110367710;
    func_0x000107c613fc(&UNK_110367710,0x18,7);
    lStack_d8 = param_2;
    lStack_c8 = lVar12;
    func_0x000107c61644(puVar3 + 0x10,param_2);
    puVar4 = &UNK_1103678c8;
    func_0x000107c613fc(&UNK_1103678c8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    pcStack_98 = FUN_100f0a58c;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000b0c7c;
    puStack_a0 = &UNK_1103678e0;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    lStack_e0 = lVar2;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_1);
    func_0x000107c5f808(lVar11);
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4af88;
    FUN_100f0a508(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = 0x112d4af98;
    func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(lVar9,&puStack_c0,uVar7,uVar8,lVar1,uVar6);
    func_0x000107c5ffe8(0,lVar11,lVar9,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    (**(code **)(lVar10 + 8))(lVar9,lVar1);
    (**(code **)(lStack_c8 + 8))(lVar11,lStack_e0);
    puVar4 = puStack_90;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    puVar4 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    puVar3 = &UNK_110367710;
    func_0x000107c613fc(&UNK_110367710,0x18,7);
    lVar1 = lStack_d8;
    func_0x000107c61644(puVar3 + 0x10,lStack_d8);
    func_0x000107c61574(lVar1);
    pcStack_98 = FUN_100f0a598;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_110367908;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c408f0(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f0860c; end: 100f086c7;  */

void FUN_100f0860c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x48) != 0) {
      func_0x000107c3fedc();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    uVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    *(undefined1 **)(param_1 + 0x40) = puVar3;
    func_0x000107c6142c(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    func_0x000107c615e8(uVar2);
    func_0x000107c615f0(param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100f086c8; end: 100f08737;  */

void FUN_100f086c8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    func_0x000107c615e8(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 100f08738; end: 100f08a8b;  */

void FUN_100f08738(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c3fedc(param_1);
    func_0x000107c610f8(PTR_PTR_1126b0418);
    func_0x000107c453e4();
  }
  else {
    uStack_d0 = *(undefined8 *)(param_2 + 0x30);
    puVar3 = &UNK_110367710;
    func_0x000107c613fc(&UNK_110367710,0x18,7);
    lStack_d8 = param_2;
    lStack_c8 = lVar12;
    func_0x000107c61644(puVar3 + 0x10,param_2);
    puVar4 = &UNK_110367968;
    func_0x000107c613fc(&UNK_110367968,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    pcStack_98 = (code *)0x100f0a5c8;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000b0c7c;
    puStack_a0 = &UNK_110367980;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    lStack_e0 = lVar2;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_1);
    func_0x000107c5f808(lVar11);
    puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar6 = 0x112d4af88;
    FUN_100f0a508(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = 0x112d4af98;
    func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(lVar9,&puStack_c0,uVar7,uVar8,lVar1,uVar6);
    func_0x000107c5ffe8(0,lVar11,lVar9,ppuVar5);
    func_0x000107c60bd0(ppuVar5);
    (**(code **)(lVar10 + 8))(lVar9,lVar1);
    (**(code **)(lStack_c8 + 8))(lVar11,lStack_e0);
    puVar4 = puStack_90;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    puVar4 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    puVar3 = &UNK_110367710;
    func_0x000107c613fc(&UNK_110367710,0x18,7);
    lVar1 = lStack_d8;
    func_0x000107c61644(puVar3 + 0x10,lStack_d8);
    func_0x000107c61574(lVar1);
    pcStack_98 = FUN_100f0a5d4;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_1103679a8;
    ppuVar5 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_90);
    func_0x000107c408f0(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f08a8c; end: 100f08b47;  */

void FUN_100f08a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
      func_0x000107c3fedc();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    uVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    *(undefined1 **)(param_1 + 0x58) = puVar3;
    func_0x000107c6142c(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = param_3;
    func_0x000107c615e8(uVar2);
    func_0x000107c615f0(param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100f08b48; end: 100f08db7;  */

void FUN_100f08b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar4 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    lStack_d0 = lVar13;
    func_0x000107c61174();
    uStack_d8 = uVar9;
    func_0x000107c61574(lVar4);
    puVar5 = &UNK_110367710;
    func_0x000107c613fc(&UNK_110367710,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61648(param_1);
    func_0x000107c61644(puVar5 + 0x10,param_1);
    func_0x000107c61574(param_1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000b0c7c;
    ppuVar6 = &puStack_c0;
    uStack_a8 = param_3;
    uStack_a0 = param_2;
    puStack_98 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c6157c(puVar5);
    func_0x000107c5f808(lVar12);
    puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar9 = 0x112d4af88;
    FUN_100f0a508(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                  PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar8 = 0x112d4af98;
    lStack_e0 = lVar3;
    func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
    func_0x000107c60264(lVar10,&puStack_c8,uVar7,uVar8,lVar2,uVar9);
    uVar9 = uStack_d8;
    func_0x000107c5ffe8(0,lVar12,lVar10,ppuVar6);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar9);
    (**(code **)(lStack_d0 + 8))(lVar10,lVar2);
    (**(code **)(lVar11 + 8))(lVar12,lStack_e0);
    puVar1 = puStack_98;
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 100f08db8; end: 100f08e27;  */

void FUN_100f08db8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    func_0x000107c615e8(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 100f08e28; end: 100f09417;  */

undefined * FUN_100f08e28(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar14 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar15 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_88;
  func_0x000107c61428(param_2 + 0x10,puVar12,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    lStack_c8 = lVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar13 = lVar3;
      func_0x000107c4f398();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar13 != 0) {
        uStack_d0 = *(undefined8 *)(param_2 + 0x30);
        puVar10 = &UNK_110367710;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar10 + 0x10,param_2);
        puVar4 = &UNK_110367a30;
        func_0x000107c613fc(&UNK_110367a30,0x28,7);
        *(undefined **)(puVar4 + 0x10) = puVar10;
        *(long *)(puVar4 + 0x18) = param_3;
        *(undefined8 *)(puVar4 + 0x20) = param_1;
        pcStack_98 = FUN_100f0a638;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000b0c7c;
        puStack_a0 = &UNK_110367a48;
        ppuVar11 = &puStack_b8;
        puStack_d8 = puVar10;
        puStack_90 = puVar4;
        func_0x000107c60bc4();
        ppuStack_e0 = ppuVar11;
        func_0x000107c6157c(param_2);
        func_0x000107c6157c(puVar10);
        func_0x000107c61174(param_3);
        func_0x000107c615f0(param_1);
        func_0x000107c5f808(lVar15);
        puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar5 = 0x112d4af88;
        FUN_100f0a508(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
        uVar6 = 0x112d4af90;
        lStack_e8 = lVar13;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar7 = 0x112d4af98;
        func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
        func_0x000107c60264(puVar14,&puStack_c0,uVar6,uVar7,lVar1,uVar5);
        ppuVar11 = ppuStack_e0;
        func_0x000107c5ffe8(0,lVar15,puVar14,ppuStack_e0);
        func_0x000107c60bd0(ppuVar11);
        (**(code **)(lStack_c8 + 8))(puVar14,lVar1);
        (**(code **)(lVar16 + 8))(lVar15,lVar2);
        puVar10 = puStack_90;
        func_0x000107c61574(puStack_d8);
        func_0x000107c61574(puVar10);
        lVar1 = lStack_e8;
        lVar2 = lStack_e8;
        func_0x000107c435e4(lStack_e8);
        func_0x000107c61180();
        puVar10 = &UNK_110367710;
        puVar8 = puVar10;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,param_2);
        puVar4 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_98 = FUN_100f0a644;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = (undefined *)0x100f0af84;
        puStack_a0 = &UNK_110367a70;
        ppuVar11 = &puStack_b8;
        puStack_90 = puVar8;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c61574(puStack_90);
        puVar8 = puVar10;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,param_2);
        pcStack_98 = (code *)0x100f0a674;
        puStack_b8 = puVar4;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_110367a98;
        ppuVar9 = &puStack_b8;
        puStack_90 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        func_0x000107c61574(puStack_90);
        lVar13 = lVar2;
        func_0x000107c5c324(lVar2);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61170(lVar2);
        func_0x000107c3e924(lVar13);
        func_0x000107c61170(lVar13);
        puVar8 = PTR_PTR_1126b0418;
        func_0x000107c61168(PTR_PTR_1126b0418);
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar10 + 0x10,param_2);
        func_0x000107c61574(param_2);
        pcStack_98 = (code *)0x100f0a69c;
        puStack_b8 = puVar4;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_110367ac0;
        ppuVar11 = &puStack_b8;
        puStack_90 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        func_0x000107c61574(puStack_90);
        func_0x000107c408f0(puVar8);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61574(param_2);
        func_0x000107c61170(lVar1);
        return puVar8;
      }
    }
    func_0x000107c61574(param_2);
  }
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar12);
  }
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61538();
  lVar2 = lVar1;
  func_0x0001001830b8();
  func_0x000100ab5dc4(lVar1 + 0x20);
  puVar10 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  lVar1 = lVar2;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  func_0x000107c48368(puVar10);
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  func_0x000107c4d664(param_1);
  func_0x000107c61170(puVar10);
  func_0x000107c3fedc(param_1);
  puVar10 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  pcStack_98 = FUN_100f09418;
  puStack_90 = (undefined *)0x0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_1103679f8;
  ppuVar11 = &puStack_b8;
  func_0x000107c60bc4(ppuVar11);
  func_0x000107c408f0(puVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar11);
  return puVar10;
}



/* Entry: 100f09418; end: 100f0941b;  */

void FUN_100f09418(void)

{
  return;
}



/* Entry: 100f0941c; end: 100f0955f;  */

void FUN_100f0941c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x78) != 0) {
      func_0x000107c3fedc();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    uVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined1 **)(param_1 + 0x70) = puVar3;
    func_0x000107c6142c(uVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = param_3;
    func_0x000107c615e8(uVar2);
    func_0x000107c615f0(param_3);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100f09560; end: 100f09787;  */

void FUN_100f09560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar8 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_a8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar2 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar3 = &UNK_110367710;
  func_0x000107c613fc(&UNK_110367710,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  func_0x000107c613fc(param_2,0x20,7);
  *(undefined **)(param_2 + 0x10) = puVar3;
  *(undefined8 *)(param_2 + 0x18) = param_1;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  ppuVar4 = &puStack_90;
  uStack_78 = param_4;
  uStack_70 = param_3;
  lStack_68 = param_2;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(param_1);
  func_0x000107c5f808(lVar2);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4af88;
  FUN_100f0a508(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar6 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar7 = 0x112d4af98;
  func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar8,&puStack_98,uVar6,uVar7,lVar1,uVar5);
  func_0x000107c5ffe8(0,lVar2,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lStack_a0 + 8))(lVar8,lVar1);
  (**(code **)(lVar9 + 8))(lVar2,lStack_a8);
  lVar1 = lStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(lVar1);
  return;
}



/* Entry: 100f09788; end: 100f09917;  */

void FUN_100f09788(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    lVar4 = *(long *)(param_1 + 0x70);
    if ((lVar4 == 0) || (lVar6 = *(long *)(param_1 + 0x78), lVar6 == 0)) {
      func_0x000107c61574();
    }
    else {
      lVar1 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61538();
      func_0x000107c61434(lVar4);
      func_0x000107c615f0(lVar6);
      lVar2 = lVar1;
      func_0x0001001830b8(lVar1);
      func_0x000100ab5dc4(lVar1 + 0x20);
      puVar3 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x000107c5fadc(uVar5,lVar4);
      func_0x000107c6142c(lVar4);
      lVar4 = lVar2;
      func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar2);
      func_0x000107c48368(puVar3);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c4d664(lVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c3fedc(lVar6);
      func_0x000107c615e8(lVar6);
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
      func_0x000107c615e8(uVar5);
      uVar5 = *(undefined8 *)(param_1 + 0x70);
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      func_0x000107c61574(param_1);
      func_0x000107c6142c(uVar5);
    }
  }
  return;
}



/* Entry: 100f09918; end: 100f09987;  */

void FUN_100f09918(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    func_0x000107c615e8(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 100f09988; end: 100f099e3; -[_TtC40SCBitmojiFashionLensProcessingEntryPoint35BitmojiFashionLensApiRequestHandler handleRequest:] */

void FUN_100f09988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_100f07678(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100f099e4; end: 100f09c0b;  */

/* WARNING: Removing unreachable block (ram,0x000100f09aac) */

void FUN_100f099e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar9 = *(long *)(param_1 + 0x40);
    if ((lVar9 == 0) || (lVar8 = *(long *)(param_1 + 0x48), lVar8 == 0)) {
      func_0x000107c61574();
    }
    else {
      uVar10 = *(undefined8 *)(param_1 + 0x38);
      func_0x000107c5faec();
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c61434(lVar9);
      lVar1 = lVar8;
      func_0x000107c615f0(lVar8);
      func_0x000107c5eb50();
      lVar2 = lVar1;
      uStack_88 = param_2;
      puStack_80 = puVar6;
      FUN_100f0a750();
      puVar7 = &UNK_110367c40;
      puVar3 = &uStack_88;
      func_0x000107c5eb4c(puVar3,&UNK_110367c40,lVar2);
      func_0x000107c6142c(puVar6);
      func_0x000107c61574(lVar1);
      puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      FUN_100de78a0(puVar3,puVar7);
      func_0x000107c5fadc(uVar10,lVar9);
      func_0x000107c6142c(lVar9);
      puVar5 = puVar4;
      func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar4);
      if ((ulong)puVar7 >> 0x3c < 0xf) {
        puVar11 = puVar3;
        func_0x000107c5ee20(puVar3,puVar7);
        func_0x0001000b44c0(puVar3,puVar7);
      }
      else {
        puVar11 = (undefined8 *)0x0;
      }
      puVar4 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x000107c48368();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar11);
      func_0x000107c4d664(lVar8);
      func_0x000107c61170(puVar4);
      func_0x0001000b44c0(puVar3,puVar7);
      func_0x000107c61574(param_1);
      func_0x000107c615e8(lVar8);
    }
  }
  return;
}



/* Entry: 100f09c0c; end: 100f09d4b;  */

void FUN_100f09c0c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    if ((lVar5 == 0) || (lVar4 = *(long *)(param_1 + 0x60), lVar4 == 0)) {
      func_0x000107c61574();
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x50);
      func_0x000107c61434(lVar5);
      func_0x000107c615f0(lVar4);
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
      puVar2 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x000107c5fadc(uVar6,lVar5);
      func_0x000107c6142c(lVar5);
      puVar3 = puVar1;
      func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c6142c(puVar1);
      func_0x000107c48368(puVar2);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c4d664(lVar4);
      func_0x000107c3fedc(lVar4);
      func_0x000107c61574(param_1);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar2);
    }
  }
  return;
}



/* Entry: 100f09d4c; end: 100f0a18f;  */

/* WARNING: Removing unreachable block (ram,0x000100f09f2c) */

void FUN_100f09d4c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar11 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar11,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    return;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x68);
  lVar9 = *(long *)(param_1 + 0x70);
  if ((lVar9 == 0) || (lVar13 = *(long *)(param_1 + 0x78), lVar13 == 0)) {
    func_0x000107c61574();
    return;
  }
  func_0x000107c615f0(lVar13);
  func_0x000107c61434(lVar9);
  puVar1 = param_2;
  func_0x000107c3ab2c();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
LAB_100f09e3c:
    func_0x000107c60bb4(0x3ff0000000000000);
    func_0x000107c61180();
    puVar1 = param_2;
    if (param_2 == (undefined *)0x0) {
      lVar4 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61538();
      lVar8 = lVar4;
      func_0x0001001830b8();
      func_0x000100ab5dc4(lVar4 + 0x20);
      puVar1 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x000107c5fadc(uVar10,lVar9);
      func_0x000107c6142c(lVar9);
      lVar9 = lVar8;
      func_0x000107c5f9dc(lVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar8);
      func_0x000107c48368(puVar1);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(lVar9);
      func_0x000107c4d664(lVar13);
      func_0x000107c61170(puVar1);
      func_0x000107c3fedc(lVar13);
      goto LAB_100f0a140;
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c61168();
    func_0x000107c51828(0x4099000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    if (puVar2 == (undefined *)0x0) goto LAB_100f09e3c;
    puVar1 = puVar2;
    func_0x000107c60bb4(0x3ff0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar1 == (undefined *)0x0) goto LAB_100f09e3c;
  }
  puVar2 = puVar1;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar1);
  uVar3 = 0;
  puVar1 = puVar2;
  func_0x000107c5ee24(0,puVar2,puVar11);
  lVar4 = *(long *)(param_1 + 0x20);
  puVar15 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
LAB_100f09edc:
    lVar4 = 0;
    puVar15 = (undefined *)0x0;
  }
  else {
    lVar8 = lVar4;
    func_0x000107c439a0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar8 == 0) goto LAB_100f09edc;
    lVar4 = lVar8;
    func_0x000107c5faec();
    func_0x000107c61170(lVar8);
  }
  uVar5 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uVar6 = uVar5;
  uStack_98 = uVar3;
  puStack_90 = puVar1;
  lStack_88 = lVar4;
  puStack_80 = puVar15;
  FUN_100f0a6dc();
  puVar12 = &UNK_110367cc0;
  puVar7 = &uStack_98;
  func_0x000107c5eb4c(puVar7,&UNK_110367cc0,uVar6);
  func_0x000107c6142c(puVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(puVar15);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  FUN_100de78a0(puVar7,puVar12);
  func_0x000107c5fadc(uVar10,lVar9);
  func_0x000107c6142c(lVar9);
  puVar15 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar1);
  if ((ulong)puVar12 >> 0x3c < 0xf) {
    puVar14 = puVar7;
    func_0x000107c5ee20(puVar7,puVar12);
    func_0x0001000b44c0(puVar7,puVar12);
  }
  else {
    puVar14 = (undefined8 *)0x0;
  }
  puVar1 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  func_0x000107c48368();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c4d664(lVar13);
  func_0x000107c61170(puVar1);
  func_0x000107c3fedc(lVar13);
  func_0x0001000b44c0(puVar7,puVar12);
  func_0x00010006c090(puVar2,puVar11);
LAB_100f0a140:
  func_0x000107c615e8(lVar13);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  func_0x000107c615e8(uVar10);
  uVar10 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  func_0x000107c61574(param_1);
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 100f0a190; end: 100f0a193; -[_TtC40SCBitmojiFashionLensProcessingEntryPoint35BitmojiFashionLensApiRequestHandler reset] */

void FUN_100f0a190(void)

{
  return;
}



/* Entry: 100f0a194; end: 100f0a227;  */

void FUN_100f0a194(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 100f0a228; end: 100f0a3af;  */

/* WARNING: Removing unreachable block (ram,0x000100f0a368) */
/* WARNING: Removing unreachable block (ram,0x000100f0a2f0) */

undefined1 * FUN_100f0a228(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112d4b0b8;
  func_0x0001000285a8(0x112d4b0b8,&UNK_10d911628);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_100f0aa74();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110367de8,&UNK_110367de8,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604d4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 100f0a3b0; end: 100f0a4af;  */

undefined * FUN_100f0a3b0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4afa0,&UNK_10d911520);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f0a4ac);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f0a4b0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100f0a4b0; end: 100f0a4d7;  */

undefined * FUN_100f0a4b0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_f0 [8];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar15 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar16 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar17 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_88;
  func_0x000107c61428(lVar3 + 0x10,puVar14,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x20);
    lStack_c8 = lVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar15 = lVar4;
      func_0x000107c4f398();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar15 != 0) {
        uStack_d0 = *(undefined8 *)(lVar3 + 0x30);
        puVar12 = &UNK_110367710;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar12 + 0x10,lVar3);
        puVar5 = &UNK_110367a30;
        func_0x000107c613fc(&UNK_110367a30,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar12;
        *(long *)(puVar5 + 0x18) = lVar11;
        *(undefined8 *)(puVar5 + 0x20) = param_1;
        pcStack_98 = FUN_100f0a638;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000b0c7c;
        puStack_a0 = &UNK_110367a48;
        ppuVar13 = &puStack_b8;
        puStack_d8 = puVar12;
        puStack_90 = puVar5;
        func_0x000107c60bc4();
        ppuStack_e0 = ppuVar13;
        func_0x000107c6157c(lVar3);
        func_0x000107c6157c(puVar12);
        func_0x000107c61174(lVar11);
        func_0x000107c615f0(param_1);
        func_0x000107c5f808(lVar17);
        puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar6 = 0x112d4af88;
        FUN_100f0a508(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
        uVar7 = 0x112d4af90;
        lStack_e8 = lVar15;
        func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
        uVar8 = 0x112d4af98;
        func_0x000100f0a548(0x112d4af98,0x112d4af90,&UNK_10d914100);
        func_0x000107c60264(puVar16,&puStack_c0,uVar7,uVar8,lVar1,uVar6);
        ppuVar13 = ppuStack_e0;
        func_0x000107c5ffe8(0,lVar17,puVar16,ppuStack_e0);
        func_0x000107c60bd0(ppuVar13);
        (**(code **)(lStack_c8 + 8))(puVar16,lVar1);
        (**(code **)(lVar18 + 8))(lVar17,lVar2);
        puVar12 = puStack_90;
        func_0x000107c61574(puStack_d8);
        func_0x000107c61574(puVar12);
        lVar11 = lStack_e8;
        lVar1 = lStack_e8;
        func_0x000107c435e4(lStack_e8);
        func_0x000107c61180();
        puVar12 = &UNK_110367710;
        puVar9 = puVar12;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar9 + 0x10,lVar3);
        puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_98 = FUN_100f0a644;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = (undefined *)0x100f0af84;
        puStack_a0 = &UNK_110367a70;
        ppuVar13 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar13);
        func_0x000107c61574(puStack_90);
        puVar9 = puVar12;
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar9 + 0x10,lVar3);
        pcStack_98 = (code *)0x100f0a674;
        puStack_b8 = puVar5;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_110367a98;
        ppuVar10 = &puStack_b8;
        puStack_90 = puVar9;
        func_0x000107c60bc4(ppuVar10);
        func_0x000107c61574(puStack_90);
        lVar2 = lVar1;
        func_0x000107c5c324(lVar1);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c61170(lVar1);
        func_0x000107c3e924(lVar2);
        func_0x000107c61170(lVar2);
        puVar9 = PTR_PTR_1126b0418;
        func_0x000107c61168(PTR_PTR_1126b0418);
        func_0x000107c613fc(&UNK_110367710,0x18,7);
        func_0x000107c61644(puVar12 + 0x10,lVar3);
        func_0x000107c61574(lVar3);
        pcStack_98 = (code *)0x100f0a69c;
        puStack_b8 = puVar5;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_110367ac0;
        ppuVar13 = &puStack_b8;
        puStack_90 = puVar12;
        func_0x000107c60bc4(ppuVar13);
        func_0x000107c61574(puStack_90);
        func_0x000107c408f0(puVar9);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c61574(lVar3);
        func_0x000107c61170(lVar11);
        return puVar9;
      }
    }
    func_0x000107c61574(lVar3);
  }
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar14);
  }
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61538();
  lVar1 = lVar3;
  func_0x0001001830b8();
  func_0x000100ab5dc4(lVar3 + 0x20);
  puVar12 = PTR_PTR_1126b0278;
  func_0x000107c610f8(PTR_PTR_1126b0278);
  lVar3 = lVar1;
  func_0x000107c5f9dc(lVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar1);
  func_0x000107c48368(puVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar3);
  func_0x000107c4d664(param_1);
  func_0x000107c61170(puVar12);
  func_0x000107c3fedc(param_1);
  puVar12 = PTR_PTR_1126b0418;
  func_0x000107c61168(PTR_PTR_1126b0418);
  pcStack_98 = FUN_100f09418;
  puStack_90 = (undefined *)0x0;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_1103679f8;
  ppuVar13 = &puStack_b8;
  func_0x000107c60bc4(ppuVar13);
  func_0x000107c408f0(puVar12);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar13);
  return puVar12;
}



/* Entry: 100f0a4d8; end: 100f0a4f7;  */

void FUN_100f0a4d8(void)

{
  func_0x000107c61168(&PTR_PTR_112d4aed0);
  return;
}



/* Entry: 100f0a4f8; end: 100f0a507;  */

void FUN_100f0a4f8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_100f080a4();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f0a508; end: 100f0a58b;  */

void FUN_100f0a508(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100f0a58c; end: 100f0a597;  */

void FUN_100f0a58c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = auStack_58;
  func_0x000107c61428(lVar1 + 0x10,puVar4,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      func_0x000107c3fedc();
    }
    func_0x000107c50374();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x38) = uVar2;
    *(undefined1 **)(lVar1 + 0x40) = puVar4;
    func_0x000107c6142c(uVar3);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
    *(undefined8 *)(lVar1 + 0x48) = uVar5;
    func_0x000107c615e8(uVar3);
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 100f0a598; end: 100f0a5bf;  */

void FUN_100f0a598(void)

{
  FUN_100f08b48();
  return;
}


