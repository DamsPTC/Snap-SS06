/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1029acfbc; end: 1029acfe7; -[_TtC16MyReportsFeature34MyReportsSettingsRowProviderPlugin sectionRow] */

void FUN_1029acfbc(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3cf30();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1029acfe8; end: 1029ad03b; -[_TtC16MyReportsFeature34MyReportsSettingsRowProviderPlugin rowViewModel] */

void FUN_1029acfe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1029acc4c();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029ad03c; end: 1029ad09b; -[_TtC16MyReportsFeature34MyReportsSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001029ad07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ad080) */

void FUN_1029ad03c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1029acc4c();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029ad09c; end: 1029ad127; -[_TtC16MyReportsFeature34MyReportsSettingsRowProviderPlugin myReportsDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001029ad0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029ad108: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ad0d4) */
/* WARNING: Removing unreachable block (ram,0x0001029ad0d8) */
/* WARNING: Removing unreachable block (ram,0x0001029ad10c) */
/* WARNING: Removing unreachable block (ram,0x0001029ad114) */

void FUN_1029ad09c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029acb74();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029ad128; end: 1029ad187; -[_TtC16MyReportsFeature34MyReportsSettingsRowProviderPlugin init] */

void FUN_1029ad128(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MyReportsFeature.MyReportsSettingsRowProviderPlugin",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ad154);
  (*pcVar1)();
}



/* Entry: 1029ad188; end: 1029ad197;  */

undefined1  [16] FUN_1029ad188(void)

{
  return ZEXT816(0x11057a4e8);
}



/* Entry: 1029ad198; end: 1029ad1ef; -[_TtC16MyReportsFeature34MyReportsSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029ad1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ad1d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad198(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed33b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ed33b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed33a0));
  return;
}



/* Entry: 1029ad1f0; end: 1029ad20f;  */

void FUN_1029ad1f0(void)

{
  func_0x000107c61168(&PTR_PTR_112878578);
  return;
}



/* Entry: 1029ad210; end: 1029ad233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad210(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      func_0x000100083b20(&uStack_60);
      lVar2 = param_1;
      func_0x000107c41408(param_1);
      func_0x000107c61180();
      uVar3 = uStack_60;
      func_0x000107c3ed50(uStack_60);
      func_0x000107c61180();
      func_0x000107c61170(uStack_60);
      func_0x000107c615e8(lVar2);
      FUN_1029acb74();
      func_0x000107c42c1c();
      func_0x000107c61170(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1029ad234; end: 1029ad363;  */

undefined1  [16] FUN_1029ad234(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f0d3cb0);
  uVar3 = 0x6f706552794d4353;
  func_0x000107c5fadc(0x6f706552794d4353,0xeb00000000737472);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ad300);
  (*pcVar1)();
}



/* Entry: 1029ad364; end: 1029ad3db; -[MyReportsScope initWithDeckContainerFactory:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ed33e8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ed33f0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1029ad3dc; end: 1029ad413; -[MyReportsScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029ad3f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029ad3fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad3dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ed33e8));
  return;
}



/* Entry: 1029ad414; end: 1029ad47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad414(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033e44c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed3400) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029ad47c; end: 1029ad4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad47c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3400) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029ad4c8; end: 1029ad583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1029ad4c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x0001003342e4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed33e8) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ed33f0) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  plVar4 = &lStack_40;
  func_0x000107c61154(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(aplStack_58[0]);
  return plVar4;
}



/* Entry: 1029ad584; end: 1029ad5f7; -[_TtC14MyReportsScope22MyReportsScopeServices buildWithDeckContainerFactory:delegate:] */

void FUN_1029ad584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1029ad4c8(param_3,param_4);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1029ad5f8; end: 1029ad5fb;  */

void FUN_1029ad5f8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029ad5fc; end: 1029ad62f;  */

void FUN_1029ad5fc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029ad630; end: 1029ad663; -[_TtC14MyReportsScope22MyReportsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ad630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed3400));
  return;
}



/* Entry: 1029ad664; end: 1029ad727;  */

void FUN_1029ad664(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ed34b8;
  func_0x0001000285a8(0x112ed34b8,&UNK_10dafb7a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1029ad728; end: 1029ad72b;  */

void FUN_1029ad728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb7b0;
  func_0x000107c61520(&UNK_10dafb7b0,&UNK_11057a720);
  puRam0000000112ed3510 = puVar1;
  return;
}



/* Entry: 1029ad72c; end: 1029ad797;  */

void FUN_1029ad72c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb7b0;
  func_0x000107c61520(&UNK_10dafb7b0,&UNK_11057a720);
  puRam0000000112ed3510 = puVar1;
  return;
}



/* Entry: 1029ad798; end: 1029ad79b;  */

void FUN_1029ad798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb858;
  func_0x000107c61520(&UNK_10dafb858,&UNK_11057a7b0);
  puRam0000000112ed3528 = puVar1;
  return;
}



/* Entry: 1029ad79c; end: 1029ad807;  */

void FUN_1029ad79c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb858;
  func_0x000107c61520(&UNK_10dafb858,&UNK_11057a7b0);
  puRam0000000112ed3528 = puVar1;
  return;
}



/* Entry: 1029ad808; end: 1029ad88b;  */

void FUN_1029ad808(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 1029ad88c; end: 1029ad88f;  */

void FUN_1029ad88c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb8c8;
  func_0x000107c61520(&UNK_10dafb8c8,&UNK_11057a7b0);
  puRam0000000112ed3540 = puVar1;
  return;
}



/* Entry: 1029ad890; end: 1029ad8cf;  */

void FUN_1029ad890(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb8c8;
  func_0x000107c61520(&UNK_10dafb8c8,&UNK_11057a7b0);
  puRam0000000112ed3540 = puVar1;
  return;
}



/* Entry: 1029ad8d0; end: 1029ad8d3;  */

void FUN_1029ad8d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb880;
  func_0x000107c61520(&UNK_10dafb880,&UNK_11057a7b0);
  puRam0000000112ed3548 = puVar1;
  return;
}



/* Entry: 1029ad8d4; end: 1029ad913;  */

void FUN_1029ad8d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ed3548 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dafb880;
  func_0x000107c61520(&UNK_10dafb880,&UNK_11057a7b0);
  puRam0000000112ed3548 = puVar1;
  return;
}



/* Entry: 1029ad914; end: 1029adabb;  */

void FUN_1029ad914(void)

{
  return;
}



/* Entry: 1029adabc; end: 1029adb53;  */

void FUN_1029adabc(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed3578,&UNK_10dafb980);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029adb54,param_1);
  return;
}



/* Entry: 1029adb54; end: 1029adb5b;  */

void FUN_1029adb54(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1029add04();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1029adb5c; end: 1029adb8b;  */

void FUN_1029adb5c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1029adb8c; end: 1029adccf;  */

undefined * FUN_1029adb8c(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  long lStack_58;
  
  lVar8 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uStack_60 = *(undefined1 *)(lVar8 + 0x112ed3498);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000107c6157c(uVar7);
    func_0x00010008a7c8(&lStack_58,&uStack_60);
    func_0x000107c61574(uVar7);
    lVar2 = lStack_58;
    if (lStack_58 != 0) {
      func_0x000100083b20(&uStack_60);
      func_0x000107c61574(lVar2);
      uVar7 = CONCAT71(uStack_5f,uStack_60);
      puVar4 = puVar5;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar5 < 0)) ||
         (puVar4 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar5 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar3 = puVar5;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        func_0x0001021e455c(0,puVar3 + 1,1,puVar5);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x0001021e455c(puVar5,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar6 + uVar1 * 8 + 0x20) = uVar7;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1e);
  return puVar5;
}



/* Entry: 1029adcd0; end: 1029adcf3;  */

void FUN_1029adcd0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029adcf4; end: 1029add03;  */

undefined1  [16] FUN_1029adcf4(void)

{
  return ZEXT816(0x11057a830);
}



/* Entry: 1029add04; end: 1029add23;  */

void FUN_1029add04(void)

{
  func_0x000107c61168(&PTR_PTR_112ed35c0);
  return;
}



/* Entry: 1029add24; end: 1029adde7;  */

/* WARNING: Possible PIC construction at 0x0001029addbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029addcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029addc0) */
/* WARNING: Removing unreachable block (ram,0x0001029addd0) */

void FUN_1029add24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11057a920;
  func_0x000107c613fc(&UNK_11057a920,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112ed3628;
  func_0x0001000285a8(0x112ed3628,&UNK_10dafba50);
  func_0x000107c613fc();
  pcVar6 = FUN_1029ade34;
  func_0x0001000841fc(FUN_1029ade34,puVar4,uVar5);
  func_0x000100084214(&UNK_10dafba20,0x2e,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1029adde8; end: 1029addf7;  */

undefined1  [16] FUN_1029adde8(void)

{
  return ZEXT816(0x11057a900);
}



/* Entry: 1029addf8; end: 1029ade33;  */

void FUN_1029addf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029ade34; end: 1029ade77;  */

void FUN_1029ade34(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029ade78(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100082720("SnapPlanChatDrawerRouterEntryPointProvider",0x2a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1029ade78; end: 1029ae077;  */

void FUN_1029ade78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ed3630,&UNK_10dafba60);
  puVar1 = &UNK_11057a9d0;
  func_0x000107c613fc(&UNK_11057a9d0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(0x1029adf1c,puVar1);
  return;
}



/* Entry: 1029ae078; end: 1029ae093;  */

void FUN_1029ae078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae094,0,0);
  return;
}



/* Entry: 1029ae094; end: 1029ae16f;  */

void FUN_1029ae094(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  if (lVar3 != 0) {
    plVar2 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x1029ae120;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[0x12] = *(long *)(unaff_x22 + 0x38);
    plVar2[0x13] = lVar3;
    plVar2[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae9a8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001029ae11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029ae170; end: 1029ae3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ae170(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined *puVar13;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x58);
  if (uVar2 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001029ae328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c4e3a4();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1029af3c8(0,0x112ea39b8,&PTR_PTR_1126dab40);
  uVar4 = uVar2;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar2);
  if (uVar4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar2 = uVar4;
    }
    func_0x000107c60480();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar4);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar3 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar3,0);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1029ae3f0);
      (*pcVar1)();
    }
    uVar12 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar4 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
        uVar11 = uVar3;
      }
      else {
        uVar5 = uVar12;
        uVar11 = uVar4;
        FUN_1029af20c(uVar12,uVar4,&PTR_PTR_1126dab40,0x112ea39b8);
      }
      uVar3 = uVar5;
      func_0x000107c4e3a0();
      func_0x000107c61180();
      uVar6 = uVar3;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar7 = uVar6;
      func_0x000107c5faec();
      uVar3 = uVar11;
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      uVar6 = *(ulong *)(puVar13 + 0x10);
      uVar5 = uVar6 + 1;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar6) {
        uVar3 = uVar5;
        func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),uVar5,1);
      }
      uVar12 = uVar12 + 1;
      *(ulong *)(puVar13 + 0x10) = uVar5;
      *(ulong *)(puVar13 + uVar6 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puVar13 + uVar6 * 0x10 + 0x28) = uVar11;
    } while (uVar2 != uVar12);
    func_0x000107c6142c(uVar4);
  }
  *(undefined **)(unaff_x22 + 0x60) = puVar13;
  lVar8 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x48) + _DAT_112ed3638) + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  *(long *)(unaff_x22 + 0x68) = lVar9;
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  plVar10 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1029ae3f0;
  lVar8 = *(long *)(unaff_x22 + 0x48);
  plVar10[0x12] = uVar3;
  plVar10[0x13] = lVar8;
  plVar10[0x11] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029aeb50,0,0);
  return;
}



/* Entry: 1029ae3f0; end: 1029ae43f;  */

void FUN_1029ae3f0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae440,0,0);
  return;
}



/* Entry: 1029ae440; end: 1029ae623;  */

void FUN_1029ae440(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(unaff_x22 + 0x80) == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar3);
    func_0x000107c61170(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001029ae5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x60);
  lVar9 = *(long *)(lVar12 + 0x10);
  if (lVar9 != 0) {
    lVar13 = 0;
    do {
      plVar8 = (long *)(lVar12 + 0x28 + lVar13 * 0x10);
      lVar13 = lVar13 + 1;
      while( true ) {
        if (*(ulong *)(lVar12 + 0x10) <= lVar13 - 1U) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1029ae624);
          (*pcVar5)();
        }
        uVar1 = plVar8[-1];
        lVar2 = *plVar8;
        if ((uVar1 != *(ulong *)(unaff_x22 + 0x68) || lVar2 != *(long *)(unaff_x22 + 0x70)) &&
           (uVar6 = uVar1,
           func_0x000107c605b8(uVar1,lVar2,*(ulong *)(unaff_x22 + 0x68),*(long *)(unaff_x22 + 0x70),
                               0), (uVar6 & 1) == 0)) break;
        lVar13 = lVar13 + 1;
        plVar8 = plVar8 + 2;
        if (lVar13 - lVar9 == 1) goto LAB_1029ae5c0;
      }
      func_0x000107c61434(lVar2);
      puVar7 = puVar4;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar6 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar6) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar6 + 1;
      *(ulong *)(puVar4 + uVar6 * 0x10 + 0x20) = uVar1;
      *(long *)(puVar4 + uVar6 * 0x10 + 0x28) = lVar2;
    } while (lVar13 != lVar9);
  }
LAB_1029ae5c0:
  *(undefined **)(unaff_x22 + 0x88) = puVar4;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c6142c(uVar10);
  plVar8 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1029ae624;
  lVar9 = *(long *)(unaff_x22 + 0x48);
  plVar8[0x11] = (long)puVar4;
  plVar8[0x12] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029aed68,0,0);
  return;
}



/* Entry: 1029ae624; end: 1029ae67b;  */

void FUN_1029ae624(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(lVar2 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae67c,0,0);
  return;
}



/* Entry: 1029ae67c; end: 1029ae8a3;  */

void FUN_1029ae67c(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x98);
  if (uVar9 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar4 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar4 = uVar9;
    }
    func_0x000107c60480();
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar4 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101202450(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029ae8a4);
      (*pcVar2)();
    }
    lVar6 = *(long *)(unaff_x22 + 0x98);
    FUN_1029af3c8(0,0x112d67d90,&PTR_PTR_1126b1440);
    uVar8 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(lVar6 + 0x20 + uVar8 * 8);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar8;
        FUN_1029af20c(uVar8,*(undefined8 *)(unaff_x22 + 0x98),&PTR_PTR_1126b15c8,0x112d4ed88);
      }
      func_0x000102f48440();
      uVar1 = *(ulong *)(puVar10 + 0x10);
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
        func_0x000101202450(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
      *(ulong *)(puVar10 + uVar1 * 8 + 0x20) = uVar3;
    } while (uVar4 != uVar8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000103b1157c(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar7);
  func_0x000103b108f8(uVar7,0,3,uVar5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,puVar10,0,0);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  uVar5 = 0;
  func_0x000107c5fcec();
  uVar7 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar7;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae8a4,uVar5,uVar7);
  return;
}



/* Entry: 1029ae8a4; end: 1029ae92f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ae8a4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  lVar2 = *(long *)(*(long *)(lVar2 + _DAT_112ed3640) + _DAT_112febe30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    pcVar1 = (code *)0x1029af4d4;
  }
  else {
    func_0x000107c4eeb0();
    func_0x000107c615e8(lVar2);
    pcVar1 = FUN_1029ae930;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1029ae930; end: 1029ae98b;  */

void FUN_1029ae930(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001029ae988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1029ae98c; end: 1029ae9a7;  */

void FUN_1029ae98c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae9a8,0,0);
  return;
}



/* Entry: 1029ae9a8; end: 1029aeaf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029ae9a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ed3648);
  func_0x000107c40664();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1029aeaf4;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    func_0x000107c5fadc(uVar4,uVar1);
    puVar5 = &UNK_11057ab08;
    func_0x000107c613fc(&UNK_11057ab08,0x18,7);
    puVar6 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar5 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x1029af494;
    *(undefined **)(unaff_x22 + 0x78) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100e46b24;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11057ab20;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c43050(lVar3);
    func_0x000107c60bd0(puVar6);
    func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001029aeaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1029aeaf4; end: 1029aeb33;  */

void FUN_1029aeaf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029af4d8,0,0);
  return;
}



/* Entry: 1029aeb34; end: 1029aeb4f;  */

void FUN_1029aeb34(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029aeb50,0,0);
  return;
}



/* Entry: 1029aeb50; end: 1029aecdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aeb50(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ed3650);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xa0) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1029aecdc;
      lVar1 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar1,0);
      func_0x000107c5fadc(uVar3,uVar4);
      uVar4 = 0;
      FUN_1029af3c8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar5 = &UNK_11057aab8;
      func_0x000107c613fc(&UNK_11057aab8,0x18,7);
      puVar6 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar5 + 0x10) = lVar1;
      *(code **)(unaff_x22 + 0x70) = FUN_1029af464;
      *(undefined **)(unaff_x22 + 0x78) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_101043a98;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11057aad0;
      func_0x000107c60bc4(puVar6);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c5b49c(lVar2);
      func_0x000107c60bd0(puVar6);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001029aecd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1029aecdc; end: 1029aed4f;  */

void FUN_1029aecdc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029aed1c,0,0);
  return;
}



/* Entry: 1029aed50; end: 1029aed67;  */

void FUN_1029aed50(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029aed68,0,0);
  return;
}



/* Entry: 1029aed68; end: 1029aeefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029aed68(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + _DAT_112ed3650);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x98) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1029aeefc;
      lVar1 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar1,0);
      func_0x000107c5fc48(uVar5,PTR___sSSN_11034da80);
      uVar3 = 0;
      FUN_1029af3c8(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      func_0x000107c5ffdc();
      puVar4 = &UNK_11057aa68;
      func_0x000107c613fc(&UNK_11057aa68,0x18,7);
      puVar6 = (undefined8 *)(unaff_x22 + 0x50);
      *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      *(long *)(puVar4 + 0x10) = lVar1;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1029af408;
      *(undefined **)(unaff_x22 + 0x78) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_100f6151c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11057aa80;
      func_0x000107c60bc4(puVar6);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c5b4f8(lVar2);
      func_0x000107c60bd0(puVar6);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001029aeef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 1029aeefc; end: 1029aef6f;  */

void FUN_1029aeefc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1029aef3c,0,0);
  return;
}



/* Entry: 1029aef70; end: 1029af07b; -[_TtC18SnapPlanChatDrawer24SnapPlanChatDrawerRouter handlePresentPlanCreationIn:conversationId:] */

void FUN_1029aef70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = &UNK_11057a9f8;
  func_0x000107c613fc(&UNK_11057a9f8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_11057aa40;
  func_0x000107c613fc(&UNK_11057aa40,0x30,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174(param_1);
  func_0x000107c61434(param_2);
  uVar3 = 3;
  func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10dafbae0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c6142c(param_2);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029af07c; end: 1029af0af;  */

void FUN_1029af07c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1029af0b0; end: 1029af0bf;  */

undefined1  [16] FUN_1029af0b0(void)

{
  return ZEXT816(0x11057aa20);
}



/* Entry: 1029af0c0; end: 1029af117; -[_TtC18SnapPlanChatDrawer24SnapPlanChatDrawerRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029af0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029af0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029af0e0) */
/* WARNING: Removing unreachable block (ram,0x0001029af100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029af0c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed3638));
  return;
}



/* Entry: 1029af118; end: 1029af16b;  */

void FUN_1029af118(void)

{
  func_0x000107c61168(&PTR_PTR_1128787d8);
  return;
}



/* Entry: 1029af16c; end: 1029af1cf;  */

void FUN_1029af16c(void)

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
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1029af1d0;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1029ae094,0,0);
  return;
}



/* Entry: 1029af1d0; end: 1029af20b;  */

void FUN_1029af1d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001029af208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1029af20c; end: 1029af3c7;  */

ulong FUN_1029af20c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029af2f0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1029af2f4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1029af3c8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1029af3c8);
  (*pcVar2)();
}



/* Entry: 1029af3c8; end: 1029af447;  */

void FUN_1029af3c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029af448; end: 1029af463;  */

void FUN_1029af448(long param_1,long param_2)

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



/* Entry: 1029af464; end: 1029af4c3;  */

void FUN_1029af464(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1029af4c4; end: 1029af4db;  */

void FUN_1029af4c4(long param_1,long param_2)

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



/* Entry: 1029af4dc; end: 1029af547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029af4dc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029af8d0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed3688) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1029af548; end: 1029af5b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029af548(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed3688) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1029af5b4; end: 1029af613; -[_TtC45SessionManagementScopedFactoryServiceProvider33SCSessionManagementScopedServices init] */

void FUN_1029af5b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SessionManagementScopedFactoryServiceProvider.SCSessionManagementScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029af5e0);
  (*pcVar1)();
}



/* Entry: 1029af614; end: 1029af623; -[_TtC45SessionManagementScopedFactoryServiceProvider33SCSessionManagementScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029af614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed3688));
  return;
}



/* Entry: 1029af624; end: 1029af68f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029af624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11057ad10;
  func_0x000107c613fc(&UNK_11057ad10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1029af968,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1029af690; end: 1029af72b;  */

void FUN_1029af690(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11057ac20;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11057ac20;
  return;
}



/* Entry: 1029af72c; end: 1029af763;  */

void FUN_1029af72c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1029af764; end: 1029af76b;  */

undefined8 FUN_1029af764(void)

{
  return 0x1b;
}



/* Entry: 1029af76c; end: 1029af89f;  */

void FUN_1029af76c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11057ad38;
  func_0x000107c613fc(&UNK_11057ad38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1029af940;
  func_0x00010058fa64(FUN_1029af940,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1029af8a0; end: 1029af8cf;  */

undefined ** FUN_1029af8a0(void)

{
  return &PTR_DAT_112f31068;
}



/* Entry: 1029af8d0; end: 1029af8ef;  */

void FUN_1029af8d0(void)

{
  func_0x000107c61168(&PTR_PTR_1128788b0);
  return;
}



/* Entry: 1029af8f0; end: 1029af93f;  */

undefined1  [16] FUN_1029af8f0(void)

{
  return ZEXT816(0x11057ac70);
}



/* Entry: 1029af940; end: 1029af967;  */

void FUN_1029af940(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1029af968; end: 1029af97b;  */

void FUN_1029af968(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1029af97c; end: 1029afcff;  */

void FUN_1029af97c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed3700,&UNK_10dafbd78);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029b0f78();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_1029b1004();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029af72c;
  func_0x0001000823a8(FUN_1029af72c,0);
  func_0x000100082720("SCSessionManagementScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_1029b0e2c();
  func_0x000100082720("SessionManagementScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed3708,&UNK_10dafbd90);
  puVar6 = &UNK_11057ade8;
  func_0x000107c613fc(&UNK_11057ade8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1029afd0c;
  func_0x0001000823a8(0x1029afd0c,puVar6);
  func_0x000100082720("SCSessionManagementEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ed3710,&UNK_10dafbd80);
  puVar6 = &UNK_11057ae10;
  func_0x000107c613fc(&UNK_11057ae10,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar7 = 0x1029afd1c;
  func_0x0001000823a8(0x1029afd1c,puVar6);
  func_0x000100082720("SCSessionManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112ed3690,&UNK_10dafbb10);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1029afd28;
  func_0x0001000823a8(0x1029afd28,uVar7);
  func_0x000100082720("SCSessionManagementScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ed3680,&UNK_10dafbb00);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029afd30;
  func_0x0001000823a8(0x1029afd30,uVar8);
  func_0x000100082720("SCSessionManagementScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11057ae38;
  func_0x000107c613fc(&UNK_11057ae38,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1029afd38;
  func_0x0001000823a8(0x1029afd38,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSessionManagementScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1029afd00; end: 1029afd3f;  */

void FUN_1029afd00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed3700,&UNK_10dafbd78);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1029b0f78();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_1029b1004();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1029af72c;
  func_0x0001000823a8(FUN_1029af72c,0);
  func_0x000100082720("SCSessionManagementScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar5 = puVar2;
  FUN_1029b0e2c();
  func_0x000100082720("SessionManagementScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112ed3708,&UNK_10dafbd90);
  puVar6 = &UNK_11057ade8;
  func_0x000107c613fc(&UNK_11057ade8,0x38,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 **)(puVar6 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar7 = 0x1029afd0c;
  func_0x0001000823a8(0x1029afd0c,puVar6);
  func_0x000100082720("SCSessionManagementEntryPointWrapperServiceProvider",0x33,2);
  func_0x0001000285a8(0x112ed3710,&UNK_10dafbd80);
  puVar6 = &UNK_11057ae10;
  func_0x000107c613fc(&UNK_11057ae10,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 **)(puVar6 + 0x18) = puVar1;
  *(code **)(puVar6 + 0x20) = pcVar4;
  *(undefined8 **)(puVar6 + 0x28) = puVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(puVar5);
  uVar8 = 0x1029afd1c;
  func_0x0001000823a8(0x1029afd1c,puVar6);
  func_0x000100082720("SCSessionManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112ed3690,&UNK_10dafbb10);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1029afd28;
  func_0x0001000823a8(0x1029afd28,uVar8);
  func_0x000100082720("SCSessionManagementScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112ed3680,&UNK_10dafbb00);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1029afd30;
  func_0x0001000823a8(0x1029afd30,uVar9);
  func_0x000100082720("SCSessionManagementScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_11057ae38;
  func_0x000107c613fc(&UNK_11057ae38,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x1029afd38;
  func_0x0001000823a8(0x1029afd38,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCSessionManagementScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1029afd40; end: 1029b0393;  */

void FUN_1029afd40(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1029b04e4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  puVar5 = PTR_PTR_1126abc18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar4 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0x65706f6373;
  func_0x000107c5fadc(0x65706f6373,0xe500000000000000);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar8);
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar8);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar8);
  uVar6 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar6);
  uVar7 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12670);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c3e740(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  return;
}



/* Entry: 1029b0394; end: 1029b03d7;  */

void FUN_1029b0394(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1029b03d8; end: 1029b03df;  */

undefined8 FUN_1029b03d8(void)

{
  return 0x1b;
}



/* Entry: 1029b03e0; end: 1029b0463;  */

void FUN_1029b03e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1029b0524,param_2,FUN_1029b0528,param_2,FUN_1029b0550,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1029b0464; end: 1029b04b3;  */

undefined8 FUN_1029b0464(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1029b04b4; end: 1029b04e3;  */

void FUN_1029b04b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11057ae50;
  return;
}



/* Entry: 1029b04e4; end: 1029b0503;  */

void FUN_1029b04e4(void)

{
  func_0x000107c61168(&PTR_PTR_112ed3780);
  return;
}



/* Entry: 1029b0504; end: 1029b0527;  */

undefined1  [16] FUN_1029b0504(void)

{
  return ZEXT816(0x11057ae90);
}



/* Entry: 1029b0528; end: 1029b054f;  */

void FUN_1029b0528(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1029b0550; end: 1029b0557;  */

undefined8 FUN_1029b0550(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1029b0558; end: 1029b0593;  */

void FUN_1029b0558(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029b0594();
  func_0x0001000a7f38("SCSessionManagementScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029b0594; end: 1029b077f;  */

void FUN_1029b0594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105faa60;
  ppuVar4 = &PTR_DAT_112f31068;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112ed3800;
  func_0x0001000285a8(0x112ed3800,&UNK_10dafbee8);
  func_0x0001000a6ee8(&UNK_11057ae90,
                      "SCSessionManagementEntryPointWrapperScopeInitializationPluginKey",0x40,2,
                      FUN_1029b07f4,param_1,uVar2,&UNK_11057ae90,&PTR_DAT_112ed3718);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11057aee0;
  func_0x000107c613fc(&UNK_11057aee0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11057acb0,"SCSessionManagementScopedServicesScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1029b08a4,puVar3,uVar2,&UNK_11057acb0,&PTR_DAT_112ed3698);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11057af08;
  func_0x000107c613fc(&UNK_11057af08,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11057b0d8,"SessionManagementScopeGraphBridgeScopeInitializationPluginKey"
                      ,0x3d,2,FUN_1029b08ac,puVar3,uVar2,&UNK_11057b0d8,&PTR_DAT_112ed3898);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112ed3808;
  func_0x0001000285a8(0x112ed3808,&UNK_10dafbef0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}


