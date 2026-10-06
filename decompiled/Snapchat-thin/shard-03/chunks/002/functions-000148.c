/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102602110; end: 10260216f; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2CloudFooterContextFactory init] */

void FUN_102602110(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2ServicesImplementation.MapChromeV2CloudFooterContextFactory",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10260213c);
  (*pcVar1)();
}



/* Entry: 102602170; end: 1026021c7; -[_TtC33MapChromeV2ServicesImplementation36MapChromeV2CloudFooterContextFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010260219c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026021a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102602170(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eaf760));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eaf780));
  return;
}



/* Entry: 1026021c8; end: 1026021cf;  */

void FUN_1026021c8(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1026021d0; end: 102602343;  */

void FUN_1026021d0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 102602344; end: 10260236b;  */

void FUN_102602344(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 10260236c; end: 1026023d7;  */

void FUN_10260236c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112eaf7e8;
  FUN_10260287c(0x112eaf7e8,&UNK_10dac3bb8);
  uVar2 = 0x112eaf7f0;
  FUN_10260287c(0x112eaf7f0,&UNK_10dac3b60);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1026023d8; end: 10260244f;  */

undefined8 FUN_1026023d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 102602450; end: 102602543;  */

undefined1 * FUN_102602450(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 102602544; end: 1026025df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102602544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c610f8();
  lVar2 = param_6;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_6 + _DAT_112eaf760);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(param_6 + _DAT_112eaf780) = param_4;
  *(undefined8 *)(param_6 + _DAT_112eaf770) = param_3;
  *(undefined8 *)(param_6 + _DAT_112eaf788) = param_5;
  lStack_50 = param_6;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026025e0; end: 10260260b;  */

void FUN_1026025e0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar4 = (undefined *)*param_2;
  if (*(long *)(puVar4 + 0x10) == 0) {
    puVar4 = PTR_PTR_1126aabe0;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x00010260279c(0,0x112eaf7b8,&PTR_PTR_1126aabf0);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar3);
    func_0x000107c47490();
  }
  else {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar1 != 0) {
      FUN_10260193c(puVar4);
      func_0x000107c61170(lVar1);
      puVar5 = puVar4;
    }
    puVar4 = PTR_PTR_1126aabe0;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x00010260279c(0,0x112eaf7b8,&PTR_PTR_1126aabf0);
    puVar2 = puVar5;
    func_0x000107c5fc48(puVar5,uVar3);
    func_0x000107c6142c(puVar5);
    func_0x000107c47490();
  }
  func_0x000107c61170(puVar2);
  *param_1 = puVar4;
  return;
}



/* Entry: 10260260c; end: 10260270b;  */

undefined * FUN_10260260c(long param_1)

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
    func_0x0001000285a8(0x112e1f5f0,&UNK_10da019d8);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102602708);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10260270c);
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



/* Entry: 10260270c; end: 10260272b;  */

void FUN_10260270c(void)

{
  func_0x000107c61168(&PTR_PTR_112853f90);
  return;
}



/* Entry: 10260272c; end: 1026027db;  */

undefined8 FUN_10260272c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038b98b4)(param_2,param_1);
  return param_2;
}



/* Entry: 1026027dc; end: 1026027ef;  */

void FUN_1026027dc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110529d88;
  if (lRam0000000112eaf7c8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112eaf7c8 = param_1;
  }
  return;
}



/* Entry: 1026027f0; end: 102602833;  */

void FUN_1026027f0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102602834; end: 10260287b;  */

void FUN_102602834(void)

{
  FUN_10260287c(0x112eaf7d0,&UNK_10dac3b28);
  return;
}



/* Entry: 10260287c; end: 1026028bb;  */

void FUN_10260287c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1026027dc(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1026028bc; end: 1026028df;  */

void FUN_1026028bc(void)

{
  FUN_10260287c(0x112eaf7e0,&UNK_10dac3b90);
  return;
}



/* Entry: 1026028e0; end: 10260290f;  */

void FUN_1026028e0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102602910; end: 102602c03;  */

undefined * FUN_102602910(char param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  if (param_1 == '\x06' && param_3 != 0) {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = &UNK_110529e60;
      func_0x000107c613fc(&UNK_110529e60,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_110529e88;
      func_0x000107c613fc(&UNK_110529e88,0x28,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(ulong *)(puVar4 + 0x18) = param_2;
      *(ulong *)(puVar4 + 0x20) = param_3;
      pcStack_50 = FUN_102602f38;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1004725e8;
      puStack_58 = &UNK_110529ea0;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      puVar3 = puStack_48;
      func_0x000107c61434(param_3);
      func_0x000107c61574(puVar3);
      func_0x000107c408f0(puVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      return puVar2;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 102602c04; end: 102602c1f;  */

void FUN_102602c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102602c20,0,0);
  return;
}



/* Entry: 102602c20; end: 102602d5f;  */

void FUN_102602c20(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xa0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  if (uVar1 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xb0));
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102602d60;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar3 = 0x112eaf898;
    func_0x0001000285a8(0x112eaf898,&UNK_10db84550);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102602e3c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110529f18;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c505b0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c4d664(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c3fedc(uVar4);
  }
  else {
    func_0x000107c6142c(0);
  }
                    /* WARNING: Could not recover jumptable at 0x000102602d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102602d60; end: 102602d9f;  */

void FUN_102602d60(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102602da0,0,0);
  return;
}



/* Entry: 102602da0; end: 102602e3b;  */

void FUN_102602da0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(ulong *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c61170();
  func_0x000107c5fd5c();
  if ((uVar4 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = 0;
    if (lVar3 != 0) {
      uVar5 = uVar2;
    }
    lVar1 = -0x2000000000000000;
    if (lVar3 != 0) {
      lVar1 = lVar3;
    }
    func_0x000107c5fadc(uVar5,lVar1);
    func_0x000107c6142c(lVar1);
    func_0x000107c4d664(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c3fedc(uVar6);
  }
  else {
    func_0x000107c6142c(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000102602e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102602e3c; end: 102602e8f;  */

void FUN_102602e3c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8();
  lVar3 = *plVar2;
  if (param_2 == 0) {
    param_2 = 0;
    lVar1 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar2 = *(long **)(*(long *)(lVar3 + 0x40) + 0x28);
  *plVar2 = param_2;
  plVar2[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 102602e90; end: 102602eb3;  */

void FUN_102602e90(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102602eb4; end: 102602f37;  */

undefined1  [16] FUN_102602eb4(char param_1,long param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined *puVar3;
  
  if (param_1 != '\x01') {
    return ZEXT816(0);
  }
  if (-1 < param_2) {
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    auVar1._8_8_ = 0xe100000000000000;
    auVar1._0_8_ = 0x2b;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102602f38);
  (*pcVar2)();
}



/* Entry: 102602f38; end: 102602f5f;  */

/* WARNING: Possible PIC construction at 0x000102602b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102602b94) */

void FUN_102602f38(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    func_0x000107c61168(PTR_PTR_1126b0418);
    func_0x000107c408f0();
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    puVar3 = &UNK_110529ed8;
    func_0x000107c613fc(&UNK_110529ed8,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    func_0x000107c61174(uVar5);
    func_0x000107c61174();
    func_0x000107c61434(uVar4);
    func_0x000107c615f0(param_1);
    uVar4 = 0x11;
    func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3cb0,puVar3);
    func_0x000107c61574(puVar3);
    puVar3 = PTR_PTR_1126b0418;
    func_0x000107c61168(PTR_PTR_1126b0418);
    pcStack_68 = FUN_102603034;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110529ef0;
    uStack_60 = uVar4;
    func_0x000107c60bc4(&puStack_88);
    uVar1 = uStack_60;
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(uVar1);
    func_0x000107c408f0(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102602f60; end: 102602f7f;  */

void FUN_102602f60(void)

{
  func_0x000107c61168(&PTR_PTR_112eaf838);
  return;
}



/* Entry: 102602f80; end: 102602ff7;  */

void FUN_102602f80(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102602ff8;
  plVar5[0x16] = lVar2;
  plVar5[0x17] = lVar4;
  plVar5[0x14] = lVar1;
  plVar5[0x15] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102602c20,0,0);
  return;
}



/* Entry: 102602ff8; end: 102603033;  */

void FUN_102602ff8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102603030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102603034; end: 102603077;  */

void FUN_102603034(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)();
  return;
}



/* Entry: 102603078; end: 1026031f7;  */

long FUN_102603078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_68;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10260260c();
  *(undefined **)(unaff_x20 + 0x68) = puVar2;
  *(undefined **)(unaff_x20 + 0x78) = puVar1;
  puStack_68 = puVar1;
  func_0x0001000285a8(0x112eaf778,&UNK_10dac3a70);
  func_0x000107c613fc();
  ppuVar3 = &puStack_68;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + 0x80) = ppuVar3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  func_0x000107c615f0(param_2);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_1);
  uVar4 = param_6;
  func_0x0001090218d0();
  *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
  lVar5 = 0;
  FUN_102602f60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_5;
  *(long *)(unaff_x20 + 0x20) = lVar5;
  func_0x000107c61174(param_5);
  FUN_1026031f8();
  FUN_102603300();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return unaff_x20;
}



/* Entry: 1026031f8; end: 1026032ff;  */

void FUN_1026031f8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  FUN_102603aac();
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c43af4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    puVar3 = &UNK_110529f68;
    func_0x000107c613fc(&UNK_110529f68,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    pcStack_40 = FUN_1026054e8;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_101114e94;
    puStack_48 = &UNK_110529fa8;
    puStack_38 = puVar3;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar1 = lVar2;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar2);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  *(long *)(unaff_x20 + 0x58) = lVar1;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 102603300; end: 102603473;  */

void FUN_102603300(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar2 = lVar1;
  func_0x000100111634();
  puVar4 = PTR___sSSN_11034da80;
  func_0x000107c61408(lVar1 + 0x20,3,PTR___sSSN_11034da80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  func_0x000107c5fe08(lVar2,puVar4,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  uVar3 = 0;
  FUN_102605484(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  func_0x000107c5ffdc();
  puVar4 = &UNK_110529f68;
  func_0x000107c613fc(&UNK_110529f68,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_50 = FUN_1026054c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1019e993c;
  puStack_58 = &UNK_110529f80;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4da68();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar6;
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 102603474; end: 10260351b;  */

void FUN_102603474(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    func_0x000107c5d320();
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 10260351c; end: 102603817;  */

undefined * FUN_10260351c(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if ((param_1 == uVar1 && param_2 == lVar4) ||
     (uVar12 = param_1, func_0x000107c605b8(param_1,param_2,uVar1,lVar4,0), (uVar12 & 1) != 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar8 = *(undefined **)(unaff_x20 + 0x18);
    puVar9 = puVar8;
    if (puVar8 != (undefined *)0x0) {
      uVar12 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4e67c();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      puVar9 = puVar8;
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c61174();
        puVar9 = puVar8;
        func_0x000107c4e684();
        func_0x000107c61180();
        uVar6 = 0;
        FUN_102605484(0,0x112d5ecd8,&PTR_PTR_1126bf130);
        puVar2 = puVar9;
        func_0x000107c5fc54(puVar9,uVar6);
        func_0x000107c61170(puVar9);
        if ((ulong)puVar2 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar2) {
            puVar9 = puVar2;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(puVar2);
        if (3 < (long)puVar9) {
          puVar2 = puVar8;
          FUN_1026051b4();
          func_0x000107c61170(puVar8);
          goto LAB_102603700;
        }
        func_0x000107c61170(puVar8);
        puVar9 = puVar8;
      }
    }
  }
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    lVar10 = *(long *)(unaff_x20 + 0x18);
  }
  else {
    uVar12 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar8 = puVar2;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(uVar12);
    lVar10 = *(long *)(unaff_x20 + 0x18);
  }
  if (lVar10 != 0) {
    uVar12 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
  }
  uVar12 = 1;
  if (param_1 != uVar1 || param_2 != lVar4) {
    func_0x000107c605b8(param_1,param_2,uVar1,lVar4,0);
    uVar11 = 1;
    if ((param_1 & 1) == 0) {
      uVar11 = 2;
    }
    uVar12 = (ulong)uVar11;
  }
  puVar3 = puVar8;
  FUN_102603818(puVar8,uVar12);
  puVar2 = PTR_PTR_1126aac00;
  func_0x000107c610f8(PTR_PTR_1126aac00);
  func_0x000107c45908();
  if (lVar10 == 0) {
LAB_102603694:
    lVar7 = 0;
    uVar12 = 0;
  }
  else {
    lVar4 = lVar10;
    func_0x000107c5dcc0();
    func_0x000107c61180();
    if (lVar4 == 0) goto LAB_102603694;
    lVar7 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  FUN_102602910(puVar3,lVar7,uVar12);
  func_0x000107c6142c(uVar12);
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x000107c5cb24(puVar3);
    func_0x000107c61180();
    func_0x000107c52ba0(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar10);
LAB_102603700:
  func_0x000107c61170(puVar8);
  return puVar2;
}



/* Entry: 102603818; end: 102603aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102603818(long param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = *(ulong *)(param_1 + _DAT_112fcd610);
  puVar5 = (undefined1 *)((ulong *)(param_1 + _DAT_112fcd610))[1];
  uVar6 = uVar2 & 0xffffffffffff;
  if (((ulong)puVar5 & 0x2000000000000000) != 0) {
    uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) {
    return 0;
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar6 == 0) {
    func_0x000107c61174();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61434(puVar5);
    uVar1 = uVar2;
    func_0x000107c5fadc(uVar2,puVar5);
    func_0x000107c6142c(puVar5);
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  puVar4 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x68,puVar4,0x20,0);
  lVar7 = *(long *)(unaff_x20 + 0x68);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61434(lVar7);
    func_0x000100029284();
    if (((ulong)puVar5 & 1) != 0) {
      puVar3 = *(undefined1 **)(*(long *)(lVar7 + 0x38) + uVar2 * 8);
      func_0x000107c61174();
      func_0x000107c614a8(auStack_68);
      func_0x000107c6142c(lVar7);
      if (param_2 != '\x01') {
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar6);
        uVar6 = *(ulong *)(puVar3 + _DAT_112fcd668);
        func_0x000107c61170(puVar3);
        if (3 < uVar6) {
          return 0;
        }
        return 0x5030400 >> (ulong)(((uint)uVar6 & 3) << 3);
      }
      func_0x000107c61170();
      goto joined_r0x000102603954;
    }
    func_0x000107c6142c(lVar7);
    puVar4 = puVar5;
  }
  puVar3 = (undefined1 *)0x0;
  func_0x000107c614a8();
  puVar5 = puVar4;
joined_r0x000102603954:
  if (uVar6 != 0) {
    uVar2 = uVar6;
    func_0x000107c40534();
    if (uVar2 == 1) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar6);
      return 2;
    }
    uVar2 = uVar6;
    func_0x000107c40534();
    if (uVar2 == 3) {
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar6);
      return 8;
    }
    uVar2 = uVar6;
    func_0x000107c5dcc0();
    func_0x000107c61180();
    puVar3 = (undefined1 *)0x0;
    if (uVar2 != 0) {
      uVar1 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      puVar3 = puVar5;
      func_0x000107c6142c();
      uVar2 = uVar1 & 0xffffffffffff;
      if (((ulong)puVar5 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)puVar5 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        func_0x000107c61170(param_1);
        func_0x000107c61170(uVar6);
        return 6;
      }
    }
  }
  if (param_2 == '\x01') {
    FUN_102604d44();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar6);
    if (((ulong)puVar3 & 1) != 0) {
      return 7;
    }
  }
  else {
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar6);
  }
  return 0;
}



/* Entry: 102603aac; end: 102603c4b;  */

void FUN_102603aac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  if (((*(long *)(unaff_x20 + 0x50) == 0) && (lVar4 = *(long *)(unaff_x20 + 0x18), lVar4 != 0)) &&
     (func_0x000107c448d0(), (int)lVar4 != 0)) {
    FUN_102603ca0();
  }
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_10260260c();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5d3a4();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    uVar3 = 0;
    func_0x000103a2e1bc(0);
    puVar1 = puVar2;
    func_0x000107c5f9e8(puVar2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x68,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined **)(unaff_x20 + 0x68) = puVar1;
  func_0x000107c6142c(uVar3);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 == 0) {
    lVar6 = 0;
  }
  else {
    func_0x000107c4b93c();
    func_0x000107c61180();
    puVar1 = &UNK_110529f68;
    func_0x000107c613fc(&UNK_110529f68,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    uStack_58 = 0x10260553c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_101114e8c;
    puStack_60 = &UNK_110529fd0;
    ppuVar5 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_50);
    lVar6 = lVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  *(long *)(unaff_x20 + 0x50) = lVar6;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102603c4c; end: 102603c9f;  */

void FUN_102603c4c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_102603ca0();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102603ca0; end: 10260422b;  */

void FUN_102603ca0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  uint uVar19;
  long unaff_x20;
  undefined *puVar20;
  uint uVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puVar24;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  puVar22 = *(undefined **)(unaff_x20 + 0x18);
  if (puVar22 == (undefined *)0x0) {
    uVar21 = 1;
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar20 = puVar22;
    func_0x000107c3e86c(puVar22,param_2,*(undefined8 *)(unaff_x20 + 0x70));
    func_0x000107c61180();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar20 != (undefined *)0x0) {
      uVar4 = 0;
      FUN_102605484(0,0x112d5ecd8,&PTR_PTR_1126bf130);
      puVar5 = puVar20;
      func_0x000107c5fc54(puVar20,uVar4);
      func_0x000107c61170(puVar20);
    }
    puVar20 = puVar22;
    func_0x000107c448d0();
    uVar21 = (uint)puVar20 ^ 1;
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    uVar19 = 1;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c4493c();
    func_0x000107c615e8(lVar6);
    uVar19 = (uint)lVar7 ^ 1;
  }
  puStack_e0 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar23 = *(ulong *)(unaff_x20 + 0x70);
  if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1026041ec);
    (*pcVar2)();
  }
  uVar8 = 0;
  FUN_10260a2c0(0,uVar23,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  FUN_102604374(&puStack_d8);
  FUN_10260272c(&puStack_d8,&uStack_128);
  uVar18 = *(ulong *)(uVar8 + 0x10);
  uVar16 = uVar8;
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar18) {
    uVar16 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_10260a2c0(uVar16,uVar18 + 1,1,uVar8);
  }
  *(ulong *)(uVar16 + 0x10) = uVar18 + 1;
  lVar6 = uVar16 + uVar18 * 0x38;
  *(undefined8 *)(lVar6 + 0x50) = uStack_a8;
  *(undefined8 *)(lVar6 + 0x38) = uStack_c0;
  *(undefined8 *)(lVar6 + 0x30) = uStack_c8;
  *(undefined8 *)(lVar6 + 0x48) = uStack_b0;
  *(undefined8 *)(lVar6 + 0x40) = uStack_b8;
  *(undefined8 *)(lVar6 + 0x28) = uStack_d0;
  *(undefined **)(lVar6 + 0x20) = puStack_d8;
  func_0x000107c61434(uStack_d0);
  func_0x000100403b00(&uStack_128,puStack_d8,uStack_d0);
  func_0x000107c6142c(uStack_120);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    puVar12 = puStack_d8;
  }
  else {
    puVar20 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar20 = puVar5;
    }
    func_0x000107c60480();
    puVar12 = puStack_d8;
  }
  if (puVar20 != (undefined *)0x0) {
    puVar24 = (undefined *)0x0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= puVar24) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026041e8);
          (*pcVar2)();
        }
        puVar9 = *(undefined **)(puVar5 + (long)puVar24 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar9 = puVar24;
        puVar12 = puVar5;
        func_0x00010111c1ac();
      }
      bVar3 = SCARRY8((long)puVar24,1);
      puVar24 = puVar24 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026041e4);
        (*pcVar2)();
      }
      if (uVar23 <= *(ulong *)(uVar16 + 0x10)) {
        func_0x000107c61170(puVar9);
        break;
      }
      if (puVar22 == (undefined *)0x0) {
LAB_102603e6c:
        func_0x000107c61170(puVar9);
      }
      else {
        puVar10 = puVar9;
        func_0x000107c5d984();
        func_0x000107c61180();
        puVar17 = puVar12;
        if (puVar10 == (undefined *)0x0) {
          func_0x000107c5faec();
          puVar17 = puVar12;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar12);
        }
        puVar11 = puVar22;
        func_0x000107c4e67c();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar12 = puVar17;
        if (puVar11 == (undefined *)0x0) goto LAB_102603e6c;
        puVar12 = puVar11;
        func_0x000107c3fc6c();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          func_0x000107c61170(puVar11);
          puVar12 = puVar17;
          goto LAB_102603e6c;
        }
        puVar13 = puVar12;
        func_0x000107c5faec();
        func_0x000107c61170(puVar12);
        puVar10 = puStack_e0;
        if (*(long *)(puStack_e0 + 0x10) != 0) {
          func_0x000107c6068c(&uStack_128,*(undefined8 *)(puStack_e0 + 0x28));
          puVar14 = &uStack_128;
          func_0x000107c5fb58(puVar14,puVar13,puVar17);
          func_0x000107c606a8();
          uVar18 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
          uVar8 = (ulong)puVar14 & (uVar18 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar10 + (uVar8 >> 6) * 8 + 0x38) >> (uVar8 & 0x3f) & 1) != 0) {
            do {
              plVar1 = (long *)(*(long *)(puVar10 + 0x30) + uVar8 * 0x10);
              puVar15 = (undefined *)*plVar1;
              puVar12 = (undefined *)plVar1[1];
              if ((puVar15 == puVar13 && puVar12 == puVar17) ||
                 (func_0x000107c605b8(puVar15,puVar12,puVar13,puVar17,0), ((ulong)puVar15 & 1) != 0)
                 ) {
                func_0x000107c61170(puVar9);
                func_0x000107c6142c(puVar17);
                func_0x000107c61170(puVar11);
                goto LAB_102603e74;
              }
              uVar8 = uVar8 + 1 & ~uVar18;
            } while ((*(ulong *)(puVar10 + (uVar8 >> 6) * 8 + 0x38) >> (uVar8 & 0x3f) & 1) != 0);
          }
        }
        func_0x000107c6142c(puVar17);
        puVar12 = puVar11;
        FUN_10260441c(&puStack_a0,puVar9);
        if (lStack_70 < 1) {
          func_0x000102602768(&puStack_a0);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(puVar11);
        }
        else {
          FUN_10260272c(&puStack_a0,&uStack_128);
          uVar18 = *(ulong *)(uVar16 + 0x10);
          uVar8 = uVar16;
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar18) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_10260a2c0(uVar8,uVar18 + 1,1,uVar16);
          }
          uVar4 = uStack_98;
          puVar12 = puStack_a0;
          *(ulong *)(uVar8 + 0x10) = uVar18 + 1;
          lVar6 = uVar8 + uVar18 * 0x38;
          *(long *)(lVar6 + 0x50) = lStack_70;
          *(undefined8 *)(lVar6 + 0x38) = uStack_88;
          *(undefined8 *)(lVar6 + 0x30) = uStack_90;
          *(undefined8 *)(lVar6 + 0x48) = uStack_78;
          *(undefined8 *)(lVar6 + 0x40) = uStack_80;
          *(undefined8 *)(lVar6 + 0x28) = uStack_98;
          *(undefined **)(lVar6 + 0x20) = puStack_a0;
          func_0x000107c61434(uStack_98);
          func_0x000100403b00(&uStack_128,puVar12,uVar4);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar9);
          func_0x000102602768(&puStack_a0);
          func_0x000107c6142c(uStack_120);
          uVar16 = uVar8;
        }
      }
LAB_102603e74:
    } while (puVar24 != puVar20);
  }
  func_0x000107c6142c(puVar5);
  if ((*(long *)(uVar16 + 0x10) != 1) || (((uVar21 | uVar19) & 1) == 0)) {
    uVar18 = *(ulong *)(unaff_x20 + 0x78);
    uVar23 = uVar18;
    func_0x000107c61434();
    FUN_1026052d4();
    func_0x000107c6142c(uVar18);
    if ((uVar23 & 1) != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
      *(ulong *)(unaff_x20 + 0x78) = uVar16;
      func_0x000107c61434(uVar16);
      func_0x000107c6142c(uVar4);
      uStack_128 = uVar16;
      func_0x000107c61434(uVar16);
      func_0x0001007d6d78(&uStack_128);
      func_0x000102602768(&puStack_d8);
      func_0x000107c61430(uVar16,2);
      goto LAB_1026041b8;
    }
  }
  func_0x000102602768(&puStack_d8);
  func_0x000107c6142c(uVar16);
LAB_1026041b8:
  func_0x000107c6142c(puStack_e0);
  return;
}



/* Entry: 10260422c; end: 10260422f;  */

void FUN_10260422c(void)

{
  return;
}



/* Entry: 102604230; end: 10260431f;  */

void FUN_102604230(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    puVar1 = *(undefined **)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_10260260c();
    }
    else {
      puVar2 = puVar1;
      func_0x000107c5d3a4();
      func_0x000107c61180();
      func_0x000107c615e8(puVar1);
      uVar3 = 0;
      func_0x000103a2e1bc(0);
      puVar1 = puVar2;
      func_0x000107c5f9e8(puVar2,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61428(param_1 + 0x68,auStack_60,1,0);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar1;
    func_0x000107c6142c(uVar3);
    FUN_102603ca0();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102604320; end: 102604373;  */

void FUN_102604320(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_102603ca0();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102604374; end: 10260441b;  */

void FUN_102604374(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = uVar1;
  FUN_10260351c(uVar1,uVar2);
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) = uVar1;
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  *param_1 = 0xd000000000000022;
  param_1[1] = 0x800000010f0b3820;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = uVar3;
  param_1[4] = lVar4;
  param_1[6] = 1;
  param_1[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 10260441c; end: 102604d43;  */

void FUN_10260441c(ulong *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uStack_98;
  
  uVar11 = param_3;
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_102605484(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  uVar18 = uVar11;
  uVar10 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar11);
  if (uVar18 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar18 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar18) {
      uVar11 = uVar18;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar18);
  uVar18 = param_3;
  func_0x000107c3fc6c();
  func_0x000107c61180();
  if (uVar18 == 0) {
    uVar18 = 0x800000010f0b37f0;
    uStack_98 = 0xd000000000000026;
    uVar13 = uVar10;
  }
  else {
    uStack_98 = uVar18;
    func_0x000107c5faec();
    uVar13 = uVar10;
    func_0x000107c61170(uVar18);
    uVar18 = uVar10;
  }
  if ((long)uVar11 < 2) {
    uVar11 = param_2;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar10 = uVar11;
    func_0x000107c5faec();
    func_0x000107c61170(uVar11);
    FUN_10260351c(uVar10,uVar13);
    func_0x000107c6142c(uVar13);
    uVar14 = 2;
LAB_1026045a8:
    func_0x000107c61174(uVar10);
  }
  else {
    uVar11 = param_3;
    func_0x000107c4e684();
    func_0x000107c61180();
    uVar10 = uVar11;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar11);
    if (uVar10 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar11 = uVar10;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar10);
    if (3 < (long)uVar11) {
      uVar10 = param_3;
      FUN_1026051b4();
      uVar14 = 3;
      goto LAB_1026045a8;
    }
    uVar10 = 0;
    uVar14 = 3;
  }
  uVar11 = param_3;
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar13 = uVar11;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar11);
  if (uVar13 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar11 = uVar13;
    }
    func_0x000107c60480();
  }
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 == 0) {
    func_0x000107c6142c(uVar13);
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar2 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar2,0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10260496c);
      (*pcVar1)();
    }
    uVar15 = 0;
    do {
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar13 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
        uVar9 = uVar2;
      }
      else {
        uVar3 = uVar15;
        uVar9 = uVar13;
        func_0x00010111c1ac();
      }
      func_0x000107c61174();
      uVar4 = uVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c5faec();
      uVar2 = uVar9;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar19 + 0x10);
      uVar3 = uVar4 + 1;
      if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar4) {
        uVar2 = uVar3;
        func_0x000100403514(1 < *(ulong *)(puVar19 + 0x18),uVar3,1);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(puVar19 + 0x10) = uVar3;
      *(ulong *)(puVar19 + uVar4 * 0x10 + 0x20) = uVar5;
      *(ulong *)(puVar19 + uVar4 * 0x10 + 0x28) = uVar9;
    } while (uVar11 != uVar15);
    func_0x000107c6142c(uVar13);
  }
  func_0x000107c61434(puVar19);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar11 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  lVar12 = *(long *)(puVar19 + 0x10);
  if (lVar12 != 0) {
    lVar16 = 0;
    puVar17 = (ulong *)(puVar19 + 0x28);
    do {
      uVar13 = puVar17[-1];
      if ((uVar13 == uVar11 && *puVar17 == uVar2) ||
         (func_0x000107c605b8(uVar13,*puVar17,uVar11,uVar2,0), (uVar13 & 1) != 0)) {
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(puVar19);
        if ((lVar16 != 2) && (2 < *(ulong *)(puVar19 + 0x10))) {
          func_0x000102604984(lVar16,2);
        }
        goto LAB_1026047d0;
      }
      puVar17 = puVar17 + 2;
      lVar16 = lVar16 + 1;
    } while (lVar12 != lVar16);
  }
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(puVar19);
LAB_1026047d0:
  uVar11 = *(ulong *)(puVar19 + 0x10);
  if (2 < uVar11) {
    uVar11 = 3;
  }
  uVar6 = 0;
  func_0x000107c605fc(0);
  puVar7 = puVar19;
  func_0x000107c615f4(puVar19,2);
  func_0x000107c61434();
  func_0x000107c61480();
  if (puVar7 == (undefined *)0x0) {
    func_0x000107c615e8(puVar19);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar2 = *(ulong *)(puVar7 + 0x10);
  func_0x000107c61574();
  if (uVar2 == uVar11) {
    puVar8 = puVar19;
    func_0x000107c61480(puVar19,uVar6);
    func_0x000107c615e8(puVar19);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar8 != (undefined *)0x0) goto LAB_102604854;
  }
  else {
    func_0x000107c615e8(puVar19);
    puVar7 = puVar19;
    func_0x000101994330(puVar19,puVar19 + 0x20,0,uVar11 << 1 | 1);
  }
  func_0x000107c615e8(puVar19);
  puVar8 = puVar7;
LAB_102604854:
  uVar11 = param_3;
  func_0x000102604a6c();
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c5fc54();
  func_0x000107c61170(param_3);
  if (uVar2 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar13 = uVar2;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c6142c(puVar19);
  *param_1 = uStack_98;
  param_1[1] = uVar18;
  *(undefined1 *)(param_1 + 2) = uVar14;
  param_1[3] = uVar10;
  param_1[4] = (ulong)puVar8;
  param_1[5] = uVar11;
  param_1[6] = uVar13;
  return;
}



/* Entry: 102604d44; end: 102604df3;  */

void FUN_102604d44(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar3 = lVar5;
  func_0x000107c615f0();
  uVar1 = (uint)lVar3;
  func_0x000109021cc4();
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar3 = lVar4;
  func_0x000107c44efc();
  func_0x000107c44ef4();
  lVar2 = lVar5;
  func_0x0001090218bc();
  func_0x000107c615e8(lVar5);
  if (((uVar1 & ((uint)lVar3 ^ 1) & 1) == 0) && (lVar2 <= lVar4)) {
    lVar3 = *(long *)(unaff_x20 + 0x48);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5ad3c();
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 102604df4; end: 102604ebb;  */

void FUN_102604df4(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar3 = &uStack_70;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar4 = *(undefined **)(param_1 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c61434(param_1);
      puVar2 = puVar4;
      func_0x00010109b448(puVar4,0);
      FUN_102605064(&uStack_70,puVar2 + 0x20,puVar4,param_1);
      func_0x000100216694(uStack_70,uStack_68,uStack_60,uStack_58,uStack_50);
      if (puVar3 != (undefined8 *)puVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102604e88);
        (*pcVar1)();
      }
    }
    FUN_102604ebc(puVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 102604ebc; end: 102605057;  */

/* WARNING: Possible PIC construction at 0x000102604fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102605018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102604fb8) */
/* WARNING: Removing unreachable block (ram,0x000102604fc0) */
/* WARNING: Removing unreachable block (ram,0x000102605040) */
/* WARNING: Removing unreachable block (ram,0x000102604fcc) */
/* WARNING: Removing unreachable block (ram,0x000102604ffc) */
/* WARNING: Removing unreachable block (ram,0x000102605000) */
/* WARNING: Removing unreachable block (ram,0x000102605010) */
/* WARNING: Removing unreachable block (ram,0x000102605014) */
/* WARNING: Removing unreachable block (ram,0x00010260501c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102604ebc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    plVar5 = (long *)(param_1 + 0x28);
    do {
      uVar1 = plVar5[-1];
      puVar2 = (undefined *)*plVar5;
      if ((((uRam0000000112eafa28 == uVar1 &&
             PTR_s_udFooterContextFactory_10f0b3750_0x30_112eafa30 == puVar2) ||
           (uVar3 = uRam0000000112eafa28,
           func_0x000107c605b8(uRam0000000112eafa28,
                               PTR_s_udFooterContextFactory_10f0b3750_0x30_112eafa30,uVar1,puVar2,0)
           , (uVar3 & 1) != 0)) ||
          (uRam0000000112eafa38 == uVar1 && PTR_s_homesBadgeLastSeenTimestamp_112eafa40 == puVar2))
         || (((uVar3 = uRam0000000112eafa38,
              func_0x000107c605b8(uRam0000000112eafa38,PTR_s_homesBadgeLastSeenTimestamp_112eafa40,
                                  uVar1,puVar2,0), (uVar3 & 1) != 0 ||
              (uRam0000000112eafa48 == uVar1 &&
               PTR_s_homesOnTheMapOnboardingV2Seen_112eafa50 == puVar2)) ||
             (uVar3 = uRam0000000112eafa48,
             func_0x000107c605b8(uRam0000000112eafa48,PTR_s_homesOnTheMapOnboardingV2Seen_112eafa50,
                                 uVar1,puVar2,0), (uVar3 & 1) != 0)))) break;
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_arrayDestroy_11034f230)(0x112eafa28,3,PTR___sSSN_11034da80);
  return;
}



/* Entry: 102605058; end: 102605063;  */

undefined * FUN_102605058(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if ((param_1 == uVar1 && param_2 == lVar4) ||
     (uVar12 = param_1, func_0x000107c605b8(param_1,param_2,uVar1,lVar4,0), (uVar12 & 1) != 0)) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar8 = *(undefined **)(unaff_x20 + 0x18);
    puVar9 = puVar8;
    if (puVar8 != (undefined *)0x0) {
      uVar12 = param_1;
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c4e67c();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      puVar9 = puVar8;
      if (puVar8 != (undefined *)0x0) {
        func_0x000107c61174();
        puVar9 = puVar8;
        func_0x000107c4e684();
        func_0x000107c61180();
        uVar6 = 0;
        FUN_102605484(0,0x112d5ecd8,&PTR_PTR_1126bf130);
        puVar2 = puVar9;
        func_0x000107c5fc54(puVar9,uVar6);
        func_0x000107c61170(puVar9);
        if ((ulong)puVar2 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar2) {
            puVar9 = puVar2;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c(puVar2);
        if (3 < (long)puVar9) {
          puVar2 = puVar8;
          FUN_1026051b4();
          func_0x000107c61170(puVar8);
          goto LAB_102603700;
        }
        func_0x000107c61170(puVar8);
        puVar9 = puVar8;
      }
    }
  }
  puVar2 = *(undefined **)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    lVar10 = *(long *)(unaff_x20 + 0x18);
  }
  else {
    uVar12 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar8 = puVar2;
    func_0x000107c4c39c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(uVar12);
    lVar10 = *(long *)(unaff_x20 + 0x18);
  }
  if (lVar10 != 0) {
    uVar12 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4e680();
    func_0x000107c61180();
    func_0x000107c61170(uVar12);
  }
  uVar12 = 1;
  if (param_1 != uVar1 || param_2 != lVar4) {
    func_0x000107c605b8(param_1,param_2,uVar1,lVar4,0);
    uVar11 = 1;
    if ((param_1 & 1) == 0) {
      uVar11 = 2;
    }
    uVar12 = (ulong)uVar11;
  }
  puVar3 = puVar8;
  FUN_102603818(puVar8,uVar12);
  puVar2 = PTR_PTR_1126aac00;
  func_0x000107c610f8(PTR_PTR_1126aac00);
  func_0x000107c45908();
  if (lVar10 == 0) {
LAB_102603694:
    lVar7 = 0;
    uVar12 = 0;
  }
  else {
    lVar4 = lVar10;
    func_0x000107c5dcc0();
    func_0x000107c61180();
    if (lVar4 == 0) goto LAB_102603694;
    lVar7 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  FUN_102602910(puVar3,lVar7,uVar12);
  func_0x000107c6142c(uVar12);
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar3;
    func_0x000107c5cb24(puVar3);
    func_0x000107c61180();
    func_0x000107c52ba0(puVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar10);
LAB_102603700:
  func_0x000107c61170(puVar8);
  return puVar2;
}



/* Entry: 102605064; end: 1026051b3;  */

long FUN_102605064(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1026051b4);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1026051b0);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_102605174;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      func_0x000107c61434();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434();
  }
LAB_102605174:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 1026051b4; end: 1026052b3;  */

undefined * FUN_1026051b4(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = PTR_PTR_1126aac00;
  func_0x000107c610f8(PTR_PTR_1126aac00);
  func_0x000107c45908();
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_102605484(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  uVar4 = param_1;
  func_0x000107c5fc54(param_1,uVar3);
  func_0x000107c61170(param_1);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
    func_0x000107c6142c(uVar4);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026052b4);
      (*pcVar1)();
    }
  }
  uVar3 = 1;
  FUN_102602eb4(1);
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  func_0x000107c52b90(puVar2);
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 1026052b4; end: 1026052d3;  */

void FUN_1026052b4(void)

{
  func_0x000107c61168(&PTR_PTR_112eaf8e0);
  return;
}



/* Entry: 1026052d4; end: 102605483;  */

undefined8 FUN_1026052d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == *(long *)(param_2 + 0x10)) {
    if (lVar11 != 0) {
      puVar12 = (undefined8 *)(param_2 + 0x40);
      puVar10 = (undefined8 *)(param_1 + 0x40);
      do {
        lVar3 = puVar12[-3];
        lVar1 = puVar12[-1];
        uVar9 = *puVar12;
        uVar7 = puVar10[-4];
        lVar4 = puVar10[-3];
        lVar2 = puVar10[-1];
        uVar5 = *puVar10;
        if ((uVar7 != puVar12[-4] || lVar4 != lVar3) &&
           (func_0x000107c605b8(uVar7,lVar4,puVar12[-4],lVar3,0), (uVar7 & 1) == 0))
        goto LAB_102605458;
        if (lVar2 == 0) {
          func_0x000107c61174(lVar1);
          func_0x000107c61434(uVar9);
          func_0x000107c61434(lVar4);
          func_0x000107c61434(uVar5);
          func_0x000107c61434(lVar3);
          iVar6 = 0;
          if (lVar1 == 0) goto LAB_102605314;
LAB_1026053f4:
          lVar8 = lVar1;
          func_0x000107c3e64c();
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(lVar4);
          func_0x000107c6142c(uVar9);
          func_0x000107c61170(lVar1);
          func_0x000107c6142c(lVar3);
          func_0x000107c61170(lVar2);
          if (lVar2 == 0) {
            return 1;
          }
          if (iVar6 != (int)lVar8) {
            return 1;
          }
        }
        else {
          func_0x000107c61174(lVar1);
          func_0x000107c61434(uVar9);
          func_0x000107c61434(lVar4);
          lVar8 = lVar2;
          func_0x000107c61174();
          iVar6 = (int)lVar8;
          func_0x000107c61434(uVar5);
          func_0x000107c61434(lVar3);
          func_0x000107c3e64c();
          if (lVar1 != 0) goto LAB_1026053f4;
LAB_102605314:
          func_0x000107c6142c(uVar5);
          func_0x000107c6142c(lVar4);
          func_0x000107c6142c(uVar9);
          func_0x000107c6142c(lVar3);
          func_0x000107c61170(lVar2);
          if (lVar2 != 0) goto LAB_102605458;
        }
        puVar12 = puVar12 + 7;
        puVar10 = puVar10 + 7;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    uVar9 = 0;
  }
  else {
LAB_102605458:
    uVar9 = 1;
  }
  return uVar9;
}



/* Entry: 102605484; end: 1026054c3;  */

void FUN_102605484(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026054c4; end: 1026054e7;  */

void FUN_1026054c4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar4 = &uStack_70;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    puVar5 = *(undefined **)(param_1 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c61434(param_1);
      puVar3 = puVar5;
      func_0x00010109b448(puVar5,0);
      FUN_102605064(&uStack_70,puVar3 + 0x20,puVar5,param_1);
      func_0x000100216694(uStack_70,uStack_68,uStack_60,uStack_58,uStack_50);
      if (puVar4 != (undefined8 *)puVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102604e88);
        (*pcVar1)();
      }
    }
    FUN_102604ebc(puVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 1026054e8; end: 10260552b;  */

void FUN_1026054e8(void)

{
  func_0x000103a2e590(FUN_10260552c);
  return;
}



/* Entry: 10260552c; end: 102605553;  */

void FUN_10260552c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102603ca0();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102605554; end: 102605613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102605554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112eafa58,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eafa60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eafa68) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eafa70);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eafa78) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eafa80) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102605614; end: 10260567f;  */

void FUN_102605614(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102605680,uVar1,uVar2);
  return;
}



/* Entry: 102605680; end: 1026056bb;  */

void FUN_102605680(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_1026056bc(0,0);
                    /* WARNING: Could not recover jumptable at 0x0001026056b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026056bc; end: 1026058c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026056bc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eafa68);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = _DAT_112eafa58;
  if (lVar2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112eafa58,auStack_78,0,0);
    lVar8 = unaff_x20 + lVar8;
    func_0x000107c61618();
    if (lVar8 != 0) {
      lVar3 = lVar8;
      func_0x000107c4df38();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eafa70);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eafa70))[1];
        func_0x00010037ef84(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar4);
        func_0x000107c615f0(uVar7);
        func_0x000107c61174();
        lVar5 = lVar3;
        func_0x000107c61174();
        func_0x000107c61174(lVar2);
        lVar6 = unaff_x20;
        func_0x0001038b8bac(unaff_x20,&PTR_DAT_11052a028,puVar4,uVar7,uVar1,lVar2,lVar3);
        lStack_88 = lVar6;
        func_0x00010008a7c8(&uStack_80,&lStack_88);
        func_0x000100083b20(&lStack_88);
        func_0x000107c61574(uStack_80);
        lVar8 = _DAT_112eafa60;
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eafa60);
        *(long *)(unaff_x20 + _DAT_112eafa60) = lStack_88;
        func_0x000107c615e8(uVar7);
        lVar8 = *(long *)(unaff_x20 + lVar8);
        if (lVar8 != 0) {
          if (param_2 == 0) {
            func_0x000107c615f0(lVar8);
            param_1 = 0;
          }
          else {
            func_0x000107c615f0(lVar8);
            func_0x000107c5fadc(param_1,param_2);
          }
          func_0x000107c4f024(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar4);
        lVar2 = lVar5;
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1026058c4; end: 1026058ff;  */

void FUN_1026058c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026058fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102605900; end: 1026059cb; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter handleSearchButtonTap] */

void FUN_102605900(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11052a160;
  func_0x000107c613fc(&UNK_11052a160,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11052a188;
  func_0x000107c613fc(&UNK_11052a188,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3e60;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3e68,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026059cc; end: 102605a3f;  */

void FUN_1026059cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102605a40,uVar1,uVar2);
  return;
}



/* Entry: 102605a40; end: 102605b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102605a40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  lVar4 = _DAT_112eafa58;
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x20);
    uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x28);
    func_0x000107c61428(lVar3 + _DAT_112eafa58,unaff_x22 + 0x10,0,0);
    lVar3 = lVar3 + lVar4;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x22 + 0x38);
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar2,uVar1);
      func_0x000107c6142c(uVar1);
      if (lVar4 != 0) {
        func_0x000107c49820(*(undefined8 *)(unaff_x22 + 0x38));
      }
      func_0x000107c4c2d8(lVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(lVar3);
    }
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112eafa60);
    *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112eafa60) = 0;
    func_0x000107c615e8(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102605b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102605b3c; end: 102605c5f; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter handleFriendButtonTapWithFriendUserIds:actionId:] */

/* WARNING: Possible PIC construction at 0x000102605c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102605c44) */

void FUN_102605b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  puVar1 = &UNK_11052a110;
  func_0x000107c613fc(&UNK_11052a110,0x29,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar1[0x28] = 0;
  puVar2 = &UNK_11052a138;
  func_0x000107c613fc(&UNK_11052a138,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3e50;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61434(param_3);
  uVar3 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3e58,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 102605c60; end: 102605ccb;  */

void FUN_102605c60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102605ccc,uVar1,uVar2);
  return;
}



/* Entry: 102605ccc; end: 102605d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102605ccc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar1 = _DAT_112eafa58;
  func_0x000107c61428(lVar3 + _DAT_112eafa58,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + lVar1;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uVar2 = 1;
  }
  else {
    if (*(long *)(unaff_x22 + 0x30) != 0) {
      func_0x000107c49820();
    }
    func_0x000107c4c2e0(lVar3);
    func_0x000107c615e8(lVar3);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102605d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102605d60; end: 102605da3;  */

void FUN_102605d60(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102605da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 102605da4; end: 102605e9b; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter handleMyBitmojiButtonTapWithActionId:] */

/* WARNING: Possible PIC construction at 0x000102605e80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102605e84) */

void FUN_102605da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11052a0c0;
  func_0x000107c613fc(&UNK_11052a0c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &UNK_11052a0e8;
  func_0x000107c613fc(&UNK_11052a0e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3e40;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3e48,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102605e9c; end: 102605f07;  */

void FUN_102605e9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102605f08,uVar1,uVar2);
  return;
}



/* Entry: 102605f08; end: 102605f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102605f08(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar1 = _DAT_112eafa58;
  func_0x000107c61428(lVar2 + _DAT_112eafa58,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c2c4();
    func_0x000107c615e8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102605f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2 == 0);
  return;
}



/* Entry: 102605f7c; end: 10260604f; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter handleAddFriendsButtonTap] */

void FUN_102605f7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = &UNK_11052a070;
  func_0x000107c613fc(&UNK_11052a070,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_11052a098;
  func_0x000107c613fc(&UNK_11052a098,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3e30;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar3 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x11;
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3e38,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102606050; end: 102606067; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter handleCloseSearchTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102606050(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112eafa60);
  *(undefined8 *)(param_1 + _DAT_112eafa60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102606068; end: 1026060c7; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter init] */

void FUN_102606068(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChromeV2ServicesImplementation.MapChromeV2FooterTrayRouter",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102606094);
  (*pcVar1)();
}



/* Entry: 1026060c8; end: 102606183; -[_TtC33MapChromeV2ServicesImplementation27MapChromeV2FooterTrayRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102606104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102606124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102606108) */
/* WARNING: Removing unreachable block (ram,0x000102606128) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026060c8(long param_1)

{
  FUN_102607080(param_1 + _DAT_112eafa58);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eafa68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eafa70));
  return;
}



/* Entry: 102606184; end: 102606263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102606184(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eafa58;
  func_0x000107c61428(unaff_x20 + _DAT_112eafa58,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102606264; end: 102606267;  */

void FUN_102606264(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 102606268; end: 1026062d3;  */

void FUN_102606268(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  func_0x000107c61604(*(long *)(lVar1 + 0x20) + *(long *)(lVar1 + 0x28),uVar2);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar1);
    func_0x000107c615e8(uVar2);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar1 + 0x18));
    func_0x000107c614a8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1026062d4; end: 1026062d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026062d4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112eafa68);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = _DAT_112eafa58;
  if (lVar2 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112eafa58,auStack_78,0,0);
    lVar8 = unaff_x20 + lVar8;
    func_0x000107c61618();
    if (lVar8 != 0) {
      lVar3 = lVar8;
      func_0x000107c4df38();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eafa70);
        uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112eafa70))[1];
        func_0x00010037ef84(0);
        func_0x000107c610f8();
        func_0x000107c61174(puVar4);
        func_0x000107c615f0(uVar7);
        func_0x000107c61174();
        lVar5 = lVar3;
        func_0x000107c61174();
        func_0x000107c61174(lVar2);
        lVar6 = unaff_x20;
        func_0x0001038b8bac(unaff_x20,&PTR_DAT_11052a028,puVar4,uVar7,uVar1,lVar2,lVar3);
        lStack_88 = lVar6;
        func_0x00010008a7c8(&uStack_80,&lStack_88);
        func_0x000100083b20(&lStack_88);
        func_0x000107c61574(uStack_80);
        lVar8 = _DAT_112eafa60;
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eafa60);
        *(long *)(unaff_x20 + _DAT_112eafa60) = lStack_88;
        func_0x000107c615e8(uVar7);
        lVar8 = *(long *)(unaff_x20 + lVar8);
        if (lVar8 != 0) {
          if (param_2 == 0) {
            func_0x000107c615f0(lVar8);
            param_1 = 0;
          }
          else {
            func_0x000107c615f0(lVar8);
            func_0x000107c5fadc(param_1,param_2);
          }
          func_0x000107c4f024(lVar8);
          func_0x000107c615e8(lVar8);
          func_0x000107c61170(param_1);
        }
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(puVar4);
        lVar2 = lVar5;
      }
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1026062d8; end: 102606347;  */

void FUN_1026062d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102606348,uVar1,uVar2);
  return;
}



/* Entry: 102606348; end: 10260642f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102606348(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  lVar2 = _DAT_112eafa58;
  if (*(long *)(lVar4 + 0x10) != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x20);
    uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x28);
    func_0x000107c61428(lVar4 + _DAT_112eafa58,unaff_x22 + 0x10,0,0);
    lVar4 = lVar4 + lVar2;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar3,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c4c2d8(lVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(lVar4);
    }
    uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112eafa60);
    *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + _DAT_112eafa60) = 0;
    func_0x000107c615e8(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010260642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102606430; end: 1026064a3;  */

void FUN_102606430(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined1 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026064a4,uVar1,uVar2);
  return;
}



/* Entry: 1026064a4; end: 102606627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026064a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  lVar3 = _DAT_112eafa58;
  lVar6 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar5 + _DAT_112eafa58,lVar6,0,0);
  lVar5 = lVar5 + lVar3;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c4e790();
    func_0x000107c61180();
    lVar3 = lVar6;
    if (lVar1 == 0) {
      func_0x000107c5faec();
      lVar3 = lVar6;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar6);
    }
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c4b860();
    func_0x000107c61180();
    lVar6 = lVar3;
    if (lVar2 == 0) {
      func_0x000107c5faec();
      lVar6 = lVar3;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
    }
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c3e350();
    func_0x000107c61180();
    if (lVar3 == 0) {
      lVar7 = 0;
      lVar6 = -0x2000000000000000;
    }
    else {
      lVar7 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c5fadc(lVar7,lVar6);
    func_0x000107c6142c(lVar6);
    func_0x000107c4c2ec(lVar5);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar5);
  }
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60) = 0;
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102606624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102606628; end: 102606693;  */

void FUN_102606628(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102606694,uVar1,uVar2);
  return;
}



/* Entry: 102606694; end: 10260677f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102606694(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  lVar1 = _DAT_112eafa58;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar4 + _DAT_112eafa58,lVar3,0,0);
  lVar4 = lVar4 + lVar1;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c4e7c0();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
    }
    uVar2 = 0;
    func_0x000107c31128(0);
    func_0x000107c61180();
    func_0x000107c4c2e8(lVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar4);
  }
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60) = 0;
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010260677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102606780; end: 1026067eb;  */

void FUN_102606780(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026067ec,uVar1,uVar2);
  return;
}



/* Entry: 1026067ec; end: 10260686b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026067ec(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar1 = _DAT_112eafa58;
  func_0x000107c61428(lVar2 + _DAT_112eafa58,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c2e4();
    func_0x000107c615e8(lVar2);
  }
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60) = 0;
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102606868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10260686c; end: 1026068d7;  */

void FUN_10260686c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026068d8,uVar1,uVar2);
  return;
}



/* Entry: 1026068d8; end: 102606957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026068d8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar1 = _DAT_112eafa58;
  func_0x000107c61428(lVar2 + _DAT_112eafa58,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c2d4();
    func_0x000107c615e8(lVar2);
  }
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + _DAT_112eafa60) = 0;
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102606954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102606958; end: 10260696b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102606958(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112eafa60);
  *(undefined8 *)(unaff_x20 + _DAT_112eafa60) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10260696c; end: 102606a37;  */

/* WARNING: Possible PIC construction at 0x000102606a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102606a20) */

void FUN_10260696c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11052a2f0;
  func_0x000107c613fc(&UNK_11052a2f0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &UNK_11052a318;
  func_0x000107c613fc(&UNK_11052a318,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3eb0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_1);
  func_0x000107c61174();
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3eb8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102606a38; end: 102606b13;  */

/* WARNING: Possible PIC construction at 0x000102606af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102606af8) */

void FUN_102606a38(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11052a2a0;
  func_0x000107c613fc(&UNK_11052a2a0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  puVar1[0x20] = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  puVar2 = &UNK_11052a2c8;
  func_0x000107c613fc(&UNK_11052a2c8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3ea0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3ea8,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102606b14; end: 102606bd7;  */

/* WARNING: Possible PIC construction at 0x000102606bbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102606bc0) */

void FUN_102606b14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11052a250;
  func_0x000107c613fc(&UNK_11052a250,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  puVar2 = &UNK_11052a278;
  func_0x000107c613fc(&UNK_11052a278,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3e90;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3e98,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102606bd8; end: 102606c1f;  */

/* WARNING: Possible PIC construction at 0x000102606cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102606cbc) */

void FUN_102606bd8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11052a200;
  puVar2 = &UNK_11052a228;
  func_0x000107c613fc(&UNK_11052a200,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  func_0x000107c613fc(&UNK_11052a228,0x20,7);
  *(undefined **)(puVar2 + 0x10) = &UNK_10dac3e80;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,&UNK_10dac3e88,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102606c20; end: 102606cd7;  */

/* WARNING: Possible PIC construction at 0x000102606cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102606cbc) */

void FUN_102606c20(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = unaff_x20;
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(long *)(param_4 + 0x18) = param_3;
  func_0x000107c61174();
  func_0x0001001ca524(0x11,0,0x3c,4,0,0,param_6,param_4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 102606cd8; end: 102606d43;  */

void FUN_102606cd8(void)

{
  func_0x000107c61168(&PTR_PTR_112854068);
  return;
}



/* Entry: 102606d44; end: 102606db3;  */

void FUN_102606d44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026074f0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102606db4; end: 102606e03;  */

void FUN_102606db4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102606e04;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102605ccc,lVar1,lVar2);
  return;
}


