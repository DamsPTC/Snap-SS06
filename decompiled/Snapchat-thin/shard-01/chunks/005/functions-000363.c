/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10119bc70; end: 10119bf43;  */

undefined * FUN_10119bc70(undefined *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar3 = PTR_PTR_1126b2b98;
  func_0x000107c610f8(PTR_PTR_1126b2b98);
  func_0x000107c453e4();
  func_0x000107c4051c();
  func_0x000107c61180();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
    func_0x000107c5a934();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10119be14);
      (*pcVar2)();
    }
    puVar5 = puVar4;
    func_0x000107c4a944();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 != (undefined *)0x0) {
      puVar4 = puVar5;
      func_0x000107c4a940();
      func_0x000107c61180();
      if (puVar4 != (undefined *)0x0) {
        puVar6 = puVar4;
        func_0x000107c5faec();
        func_0x000107c6142c(param_2);
        uVar1 = (ulong)puVar6 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar1 = param_2 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          puVar6 = PTR_PTR_1126a64b0;
          func_0x000107c610f8(PTR_PTR_1126a64b0);
          func_0x000107c467d0();
          func_0x000107c61170(puVar4);
          func_0x000107c52f28(puVar3);
          func_0x000107c61170(puVar6);
          puVar4 = PTR_PTR_1126ae558;
          func_0x000107c61168(PTR_PTR_1126ae558);
          func_0x000107c451b0();
          goto LAB_10119bde0;
        }
        func_0x000107c61170(puVar5);
        puVar5 = puVar4;
      }
      func_0x000107c61170(puVar5);
    }
  }
  puVar4 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar5 = puVar4;
  FUN_10119bf44();
  puVar6 = &UNK_11038c908;
  func_0x000107c613f8(&UNK_11038c908,puVar5,0,0);
  puVar5 = puVar6;
  func_0x000107c5ed2c();
  func_0x000107c614ac(puVar6);
  func_0x000107c451ac(puVar4);
LAB_10119bde0:
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  return puVar4;
}



/* Entry: 10119bf44; end: 10119bf83;  */

void FUN_10119bf44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d63730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9292a0;
  func_0x000107c61520(&UNK_10d9292a0,&UNK_11038c908);
  puRam0000000112d63730 = puVar1;
  return;
}



/* Entry: 10119bf84; end: 10119c073;  */

uint FUN_10119bf84(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10119c074; end: 10119c0b3;  */

void FUN_10119c074(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d63738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d929278;
  func_0x000107c61520(&UNK_10d929278,&UNK_11038c908);
  puRam0000000112d63738 = puVar1;
  return;
}



/* Entry: 10119c0b4; end: 10119c13b;  */

undefined8 FUN_10119c0b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000107c4ea18(param_1);
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10119bc50(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4fba8(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  return unaff_x20;
}



/* Entry: 10119c13c; end: 10119c157;  */

void FUN_10119c13c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10119c158; end: 10119c177;  */

void FUN_10119c158(void)

{
  func_0x000107c61168(&PTR_PTR_112d63780);
  return;
}



/* Entry: 10119c178; end: 10119c1bf; -[SCCalendarEventShareReportingPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119c178(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d637d8;
  func_0x000107c61428(param_1 + _DAT_112d637d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119c1c0; end: 10119c217; -[SCCalendarEventShareReportingPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119c1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d637d8;
  func_0x000107c61428(param_1 + _DAT_112d637d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119c218; end: 10119c2df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119c218(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_10119c158();
    func_0x000107c613fc();
    lVar3 = lVar1;
    func_0x000107c4ea18(lVar1);
    func_0x000107c61180();
    uVar4 = 0;
    FUN_10119bc50(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c4fba8(lVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d637e0);
    *(undefined8 *)(unaff_x20 + _DAT_112d637e0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10119c2e0; end: 10119c307; -[SCCalendarEventShareReportingPluginEntryPoint begin] */

void FUN_10119c2e0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10119c218();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119c308; end: 10119c34b; -[SCCalendarEventShareReportingPluginEntryPoint end] */

void FUN_10119c308(undefined8 param_1)

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



/* Entry: 10119c34c; end: 10119c46b;  */

void FUN_10119c34c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "CalendarEventShareReportingPlugin/SCCalendarEventShareReportingPluginEntryPoint.swift"
                        ,0x55,2,0x21,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119c46c);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10119c46c; end: 10119c517; -[SCCalendarEventShareReportingPluginEntryPoint setValue:forIvarName:] */

void FUN_10119c46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10119c34c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10119c518; end: 10119c577; -[SCCalendarEventShareReportingPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119c518(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d637d8,0);
  *(undefined8 *)(param_1 + _DAT_112d637e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10119c578; end: 10119c5ab;  */

void FUN_10119c578(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10119c5ac; end: 10119c5e3; -[SCCalendarEventShareReportingPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119c5ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d637d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d637e0));
  return;
}



/* Entry: 10119c5e4; end: 10119c603;  */

void FUN_10119c5e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b48b8);
  return;
}



/* Entry: 10119c604; end: 10119c703;  */

undefined * FUN_10119c604(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = *(undefined **)(unaff_x20 + 0x70);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar1 = &UNK_11038ca68;
    func_0x000107c613fc(&UNK_11038ca68,0x18,7);
    func_0x000107c61644(puVar1 + 0x10);
    pcStack_40 = FUN_10119d2a0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x10119c790;
    puStack_48 = &UNK_11038ca80;
    puStack_38 = puVar1;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined **)(unaff_x20 + 0x70) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 10119c704; end: 10119c7c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119c704(long param_1)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126a64c0;
    func_0x000107c610f8(PTR_PTR_1126a64c0);
    func_0x000107c493f8();
    func_0x000107c61574(param_1);
  }
  return puVar1;
}



/* Entry: 10119c7c8; end: 10119c8e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119c7c8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  puVar2 = *(undefined **)(unaff_x20 + 0x78);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    func_0x000107c4c3d8(uVar3);
    func_0x000107c61180();
    lVar7 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(lVar7 + _DAT_112feb6f8);
    uVar6 = uVar5;
    func_0x000107c615f0(uVar5);
    FUN_10119c604();
    lVar1 = _DAT_112feb700;
    func_0x000107c61428(lVar7 + _DAT_112feb700,auStack_68,0,0);
    lVar7 = lVar7 + lVar1;
    func_0x000107c61618(lVar7);
    puVar4 = PTR_PTR_1126a64d0;
    func_0x000107c610f8();
    func_0x000107c475d0();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c615e8(lVar7);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
    *(undefined **)(unaff_x20 + 0x78) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar6);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 10119c8e8; end: 10119c9eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119c8e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x80);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112feb6f8);
    uVar4 = uVar3;
    func_0x000107c615f0(uVar3);
    FUN_10119c604();
    puVar2 = PTR_PTR_1126a64c8;
    func_0x000107c610f8();
    func_0x000107c49038();
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
    *(undefined **)(unaff_x20 + 0x80) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 10119c9ec; end: 10119cd9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119c9ec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c414e4(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + _DAT_112feddc0);
  func_0x000107c61174(uVar3);
  uVar4 = uVar3;
  FUN_10119c604();
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + _DAT_112feb6f8);
  lVar7 = *(long *)(param_1 + 0x28);
  func_0x000107c615f0(uVar10);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x30) + _DAT_112feb6a8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + _DAT_113083868);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x68) + _DAT_11308d048);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar9);
    func_0x0001000d224c(&uStack_68);
    func_0x000107c61574(uVar9);
    func_0x000107c4d64c();
    func_0x000107c615e8(uStack_68);
    puVar6 = PTR_PTR_1126a64b8;
    func_0x000107c610f8(PTR_PTR_1126a64b8);
    func_0x000107c495a8();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar10);
    func_0x000107c615e8(lVar7);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10119cb9c);
  (*pcVar1)();
}



/* Entry: 10119cd9c; end: 10119ce97;  */

/* WARNING: Possible PIC construction at 0x00010119ce6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ce7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119ce70) */
/* WARNING: Removing unreachable block (ram,0x00010119ce80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119cd9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = param_1;
  FUN_10119c7c8();
  func_0x000107c5fadc(param_1,param_2);
  lVar5 = *(long *)(param_3 + 0x10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feb6e0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feb6e8);
  lVar5 = puVar1[1];
  if (lVar5 != 0) {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar4,lVar5);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c4de04(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10119ce98; end: 10119ce9f;  */

/* WARNING: Possible PIC construction at 0x00010119ce6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ce7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119ce70) */
/* WARNING: Removing unreachable block (ram,0x00010119ce80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119ce98(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = param_1;
  FUN_10119c7c8();
  func_0x000107c5fadc(param_1,param_2);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feb6e0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feb6e8);
  lVar5 = puVar1[1];
  if (lVar5 != 0) {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar4,lVar5);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c4de04(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10119cea0; end: 10119cf5b;  */

/* WARNING: Possible PIC construction at 0x00010119cf38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119cf3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119cea0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = param_1;
  FUN_10119c8e8();
  func_0x000107c5fadc(param_1,param_2);
  puVar1 = (undefined8 *)(*(long *)(param_3 + 0x10) + _DAT_112feb6e8);
  lVar4 = puVar1[1];
  if (lVar4 != 0) {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(uVar3,lVar4);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c4de34(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10119cf5c; end: 10119cf63;  */

/* WARNING: Possible PIC construction at 0x00010119cf38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119cf3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119cf5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = param_1;
  FUN_10119c8e8();
  func_0x000107c5fadc(param_1,param_2);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112feb6e8);
  lVar4 = puVar1[1];
  if (lVar4 != 0) {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(uVar3,lVar4);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c4de34(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10119cf64; end: 10119d057;  */

/* WARNING: Possible PIC construction at 0x00010119d02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119d030) */
/* WARNING: Removing unreachable block (ram,0x00010119d040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119cf64(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010119c990();
  func_0x000107c5ed90();
  lVar4 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112feb6e0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112feb6e8);
  lVar4 = puVar1[1];
  if (lVar4 != 0) {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(uVar3,lVar4);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c4de74(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119d058; end: 10119d05f;  */

/* WARNING: Possible PIC construction at 0x00010119d02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119d030) */
/* WARNING: Removing unreachable block (ram,0x00010119d040) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d058(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010119c990();
  func_0x000107c5ed90();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112feb6e0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(lVar4 + _DAT_112feb6e8);
  lVar4 = puVar1[1];
  if (lVar4 != 0) {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(uVar3,lVar4);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c4de74(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119d060; end: 10119d15b;  */

void FUN_10119d060(undefined8 param_1)

{
  FUN_10119c7c8();
  func_0x000107c42050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119d15c; end: 10119d20f;  */

void FUN_10119d15c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 10119d210; end: 10119d213;  */

void FUN_10119d210(void)

{
  return;
}



/* Entry: 10119d214; end: 10119d27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10119d214(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_112feb6d8);
  func_0x000107c61174(uVar1);
  func_0x000103b04cf4(0x10119d2c4,lVar2,0x10119d2c8,lVar2,0x10119d2cc,lVar2);
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 10119d280; end: 10119d29f;  */

void FUN_10119d280(void)

{
  func_0x000107c61168(&PTR_PTR_112d63850);
  return;
}



/* Entry: 10119d2a0; end: 10119d2cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119d2a0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126a64c0;
    func_0x000107c610f8(PTR_PTR_1126a64c0);
    func_0x000107c493f8();
    func_0x000107c61574(lVar1);
  }
  return puVar2;
}



/* Entry: 10119d2d0; end: 10119d2db; -[SCChatAttachmentHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d2d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63928;
  func_0x000107c61428(param_1 + _DAT_112d63928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d2dc; end: 10119d2e7; -[SCChatAttachmentHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d2dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63928;
  func_0x000107c61428(param_1 + _DAT_112d63928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d2e8; end: 10119d2f3; -[SCChatAttachmentHandlerEntryPoint deepLinkHandlingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d2e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63930;
  func_0x000107c61428(param_1 + _DAT_112d63930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d2f4; end: 10119d2ff; -[SCChatAttachmentHandlerEntryPoint setDeepLinkHandlingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d2f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63930;
  func_0x000107c61428(param_1 + _DAT_112d63930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d300; end: 10119d30b; -[SCChatAttachmentHandlerEntryPoint deepLinkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d300(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63938;
  func_0x000107c61428(param_1 + _DAT_112d63938,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d30c; end: 10119d317; -[SCChatAttachmentHandlerEntryPoint setDeepLinkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d30c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63938;
  func_0x000107c61428(param_1 + _DAT_112d63938,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d318; end: 10119d323; -[SCChatAttachmentHandlerEntryPoint applicationCircumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d318(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63940;
  func_0x000107c61428(param_1 + _DAT_112d63940,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d324; end: 10119d32f; -[SCChatAttachmentHandlerEntryPoint setApplicationCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63940;
  func_0x000107c61428(param_1 + _DAT_112d63940,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d330; end: 10119d33b; -[SCChatAttachmentHandlerEntryPoint spotlightLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d330(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63948;
  func_0x000107c61428(param_1 + _DAT_112d63948,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d33c; end: 10119d347; -[SCChatAttachmentHandlerEntryPoint setSpotlightLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d33c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63948;
  func_0x000107c61428(param_1 + _DAT_112d63948,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d348; end: 10119d353; -[SCChatAttachmentHandlerEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d348(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63950;
  func_0x000107c61428(param_1 + _DAT_112d63950,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d354; end: 10119d35f; -[SCChatAttachmentHandlerEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63950;
  func_0x000107c61428(param_1 + _DAT_112d63950,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d360; end: 10119d36b; -[SCChatAttachmentHandlerEntryPoint fullMapScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d360(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63958;
  func_0x000107c61428(param_1 + _DAT_112d63958,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d36c; end: 10119d377; -[SCChatAttachmentHandlerEntryPoint setFullMapScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63958;
  func_0x000107c61428(param_1 + _DAT_112d63958,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d378; end: 10119d383; -[SCChatAttachmentHandlerEntryPoint immediateUserFeatureLaunchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d378(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63960;
  func_0x000107c61428(param_1 + _DAT_112d63960,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d384; end: 10119d38f; -[SCChatAttachmentHandlerEntryPoint setImmediateUserFeatureLaunchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63960;
  func_0x000107c61428(param_1 + _DAT_112d63960,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d390; end: 10119d39b; -[SCChatAttachmentHandlerEntryPoint webBrowserScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63968;
  func_0x000107c61428(param_1 + _DAT_112d63968,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d39c; end: 10119d3a7; -[SCChatAttachmentHandlerEntryPoint setWebBrowserScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63968;
  func_0x000107c61428(param_1 + _DAT_112d63968,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d3a8; end: 10119d3b3; -[SCChatAttachmentHandlerEntryPoint webBrowsingConfigService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d3a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63970;
  func_0x000107c61428(param_1 + _DAT_112d63970,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10119d3b4; end: 10119d3f7;  */

void FUN_10119d3b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10119d3f8; end: 10119d403; -[SCChatAttachmentHandlerEntryPoint setWebBrowsingConfigService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63970;
  func_0x000107c61428(param_1 + _DAT_112d63970,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d404; end: 10119d457;  */

void FUN_10119d404(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10119d458; end: 10119d49f; -[SCChatAttachmentHandlerEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63978;
  func_0x000107c61428(param_1 + _DAT_112d63978,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10119d4a0; end: 10119d4ab; -[SCChatAttachmentHandlerEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63978;
  func_0x000107c61428(param_1 + _DAT_112d63978,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10119d4ac; end: 10119d4f3; -[SCChatAttachmentHandlerEntryPoint webBrowserScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d4ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d63980;
  func_0x000107c61428(param_1 + _DAT_112d63980,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10119d4f4; end: 10119d4ff; -[SCChatAttachmentHandlerEntryPoint setWebBrowserScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d4f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d63980;
  func_0x000107c61428(param_1 + _DAT_112d63980,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10119d500; end: 10119d55f;  */

void FUN_10119d500(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10119d560; end: 10119daab;  */

/* WARNING: Possible PIC construction at 0x00010119d7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d7fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d81c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d82c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119da24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d9c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d9d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d974: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d954: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d8d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d8e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d8b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d8c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119d8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119d8c8) */
/* WARNING: Removing unreachable block (ram,0x00010119d8b8) */
/* WARNING: Removing unreachable block (ram,0x00010119d8e8) */
/* WARNING: Removing unreachable block (ram,0x00010119d8d8) */
/* WARNING: Removing unreachable block (ram,0x00010119d918) */
/* WARNING: Removing unreachable block (ram,0x00010119d908) */
/* WARNING: Removing unreachable block (ram,0x00010119d958) */
/* WARNING: Removing unreachable block (ram,0x00010119d948) */
/* WARNING: Removing unreachable block (ram,0x00010119d938) */
/* WARNING: Removing unreachable block (ram,0x00010119d998) */
/* WARNING: Removing unreachable block (ram,0x00010119d988) */
/* WARNING: Removing unreachable block (ram,0x00010119d978) */
/* WARNING: Removing unreachable block (ram,0x00010119d968) */
/* WARNING: Removing unreachable block (ram,0x00010119d9d8) */
/* WARNING: Removing unreachable block (ram,0x00010119d9c8) */
/* WARNING: Removing unreachable block (ram,0x00010119d9b8) */
/* WARNING: Removing unreachable block (ram,0x00010119d9a8) */
/* WARNING: Removing unreachable block (ram,0x00010119da28) */
/* WARNING: Removing unreachable block (ram,0x00010119da18) */
/* WARNING: Removing unreachable block (ram,0x00010119da08) */
/* WARNING: Removing unreachable block (ram,0x00010119d9f8) */
/* WARNING: Removing unreachable block (ram,0x00010119da88) */
/* WARNING: Removing unreachable block (ram,0x00010119da78) */
/* WARNING: Removing unreachable block (ram,0x00010119da68) */
/* WARNING: Removing unreachable block (ram,0x00010119da58) */
/* WARNING: Removing unreachable block (ram,0x00010119da48) */
/* WARNING: Removing unreachable block (ram,0x00010119d830) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010119d820) */
/* WARNING: Removing unreachable block (ram,0x00010119d810) */
/* WARNING: Removing unreachable block (ram,0x00010119d800) */
/* WARNING: Removing unreachable block (ram,0x00010119d7f0) */
/* WARNING: Removing unreachable block (ram,0x00010119d7e0) */
/* WARNING: Removing unreachable block (ram,0x00010119d7d0) */
/* WARNING: Removing unreachable block (ram,0x00010119d8a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119d560(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c414f0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c41504();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c3df78();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c5b8dc();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c5d900();
            func_0x000107c61180();
            if (lVar6 != 0) {
              lVar7 = unaff_x20;
              func_0x000107c43b94();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c451b8();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c5e1d0();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = unaff_x20;
                    func_0x000107c5e1b0();
                    func_0x000107c61180();
                    if (lVar10 != 0) {
                      lVar11 = unaff_x20;
                      func_0x000107c5e1b8();
                      func_0x000107c61180();
                      if (lVar11 == 0) {
                        func_0x000107c61170(lVar1);
                        lVar1 = lVar2;
                      }
                      else {
                        func_0x000107c5e1c0();
                        func_0x000107c61180();
                        if (unaff_x20 == 0) {
                          func_0x000107c61170(lVar1);
                          lVar1 = lVar2;
                        }
                        else {
                          lVar12 = 0;
                          FUN_10119d280();
                          func_0x000107c613fc();
                          *(undefined8 *)(lVar12 + 0x78) = 0;
                          *(undefined8 *)(lVar12 + 0x70) = 0;
                          *(undefined8 *)(lVar12 + 0x88) = 0;
                          *(undefined8 *)(lVar12 + 0x80) = 0;
                          *(long *)(lVar12 + 0x10) = lVar1;
                          *(long *)(lVar12 + 0x18) = lVar2;
                          *(long *)(lVar12 + 0x20) = lVar3;
                          *(long *)(lVar12 + 0x28) = lVar4;
                          *(long *)(lVar12 + 0x30) = lVar5;
                          *(long *)(lVar12 + 0x38) = lVar6;
                          *(long *)(lVar12 + 0x40) = lVar7;
                          *(long *)(lVar12 + 0x48) = lVar8;
                          *(long *)(lVar12 + 0x50) = lVar9;
                          *(long *)(lVar12 + 0x58) = lVar10;
                          *(long *)(lVar12 + 0x60) = lVar11;
                          *(long *)(lVar12 + 0x68) = unaff_x20;
                          uVar13 = *(undefined8 *)(lVar1 + _DAT_112feb6d8);
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174();
                          func_0x000107c61174(lVar6);
                          func_0x000107c61174(lVar7);
                          func_0x000107c61174(lVar8);
                          func_0x000107c61174(lVar9);
                          func_0x000107c61174(lVar10);
                          func_0x000107c61174(lVar11);
                          func_0x000107c61174(unaff_x20);
                          func_0x000107c61174(uVar13);
                          func_0x000103b04cf4(FUN_10119daac,lVar12,0x10119dab4,lVar12,0x10119dabc,
                                              lVar12);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10119daac; end: 10119dac3;  */

/* WARNING: Possible PIC construction at 0x00010119ce6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119ce7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119ce70) */
/* WARNING: Removing unreachable block (ram,0x00010119ce80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119daac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = param_1;
  FUN_10119c7c8();
  func_0x000107c5fadc(param_1,param_2);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feb6e0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112feb6e8);
  lVar5 = puVar1[1];
  if (lVar5 != 0) {
    uVar4 = *puVar1;
    func_0x000107c61434(lVar5);
    func_0x000107c5fadc(uVar4,lVar5);
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c4de04(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10119dac4; end: 10119daeb; -[SCChatAttachmentHandlerEntryPoint begin] */

void FUN_10119dac4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10119d560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119daec; end: 10119dbab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119daec(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112d63988);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + _DAT_112feb6d8);
    func_0x000107c6157c(lVar2);
    func_0x000107c61174(uVar1);
    func_0x000103b04cf4(FUN_10119dbac,lVar2,0x10119dbb4,lVar2,0x10119dbbc,lVar2);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_end_1125c29d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10119dbac; end: 10119dbc3;  */

void FUN_10119dbac(undefined8 param_1)

{
  FUN_10119c7c8();
  func_0x000107c42050();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119dbc4; end: 10119dbf7; -[SCChatAttachmentHandlerEntryPoint end] */

void FUN_10119dbc4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10119daec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10119dbf8; end: 10119e1ab;  */

void FUN_10119dbf8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d5b50)) ||
       (func_0x000107c605b8(0xd000000000000018,0x800000010ef2a4b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53f10();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10d5b30)) ||
         (func_0x000107c605b8(0xd000000000000010,0x800000010ef2a4d0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53f1c();
      }
      else {
        uVar2 = 0xd000000000000025;
        if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef10f0340)) ||
           (func_0x000107c605b8(0xd000000000000025,0x800000010ef0fcc0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52844();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d5b10)) {
            uVar2 = 0xd000000000000017;
            func_0x000107c605b8(0xd000000000000017,0x800000010ef2a4f0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
                 (uVar3 = uVar2,
                 func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
                 (uVar3 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a2fc();
              }
              else if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10d5af0)) ||
                      (func_0x000107c605b8(0xd000000000000014,0x800000010ef2a510,param_2,param_3,0),
                      (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c54d0c();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef10d5ad0)) ||
                   (func_0x000107c605b8(0xd000000000000022,0x800000010ef2a530,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c552e4();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d5aa0)) {
                    uVar2 = 0xd000000000000017;
                    func_0x000107c605b8(0xd000000000000017,0x800000010ef2a560,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10d5a80)) {
                        uVar2 = 0;
                        func_0x000107c605b8(0xd000000000000018,0x800000010ef2a580,param_2,param_3,0)
                        ;
                        if ((uVar2 & 1) == 0) {
                          if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990))
                          {
                            uVar2 = 0xd000000000000017;
                            func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,
                                                param_3,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = 0;
                              if (((param_2 != -0x2fffffffffffffea) ||
                                  (param_3 != -0x7ffffffef10d5a60)) &&
                                 (func_0x000107c605b8(0xd000000000000016,0x800000010ef2a5a0,param_2,
                                                      param_3,0), (uVar2 & 1) == 0)) {
                                func_0x000107c602fc(0x15);
                                func_0x000107c6142c(0xe000000000000000);
                                func_0x000107c5fb78(param_2,param_3);
                                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                                    0x800000010ef0fc20,
                                                                                                        
                                                  "ChatAttachmentHandlerImplementation/SCChatAttachmentHandlerEntryPoint.swift"
                                                  ,0x4b,2,0x58,0);
                    /* WARNING: Does not return */
                                pcVar1 = (code *)SoftwareBreakpoint(1,0x10119e1ac);
                                (*pcVar1)();
                              }
                              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                              func_0x000107c605b0();
                              func_0x000107c5a674();
                              goto LAB_10119dc88;
                            }
                          }
                          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c5a68c();
                          goto LAB_10119dc88;
                        }
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c5a680();
                      goto LAB_10119dc88;
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5a67c();
                }
              }
              goto LAB_10119dc88;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c596e0();
        }
      }
    }
  }
LAB_10119dc88:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10119e1ac; end: 10119e257; -[SCChatAttachmentHandlerEntryPoint setValue:forIvarName:] */

void FUN_10119e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10119dbf8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10119e258; end: 10119e383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119e258(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d63928,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63930,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63938,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63940,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63948,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63950,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63958,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63960,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63968,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d63970,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d63978) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d63980) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d63988) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10119e384; end: 10119e3a3; -[SCChatAttachmentHandlerEntryPoint init] */

void FUN_10119e384(void)

{
  FUN_10119e258();
  return;
}



/* Entry: 10119e3a4; end: 10119e3d7;  */

void FUN_10119e3a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10119e3d8; end: 10119e4bf; -[SCChatAttachmentHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119e3d8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d63928);
  func_0x000107c61610(param_1 + _DAT_112d63930);
  func_0x000107c61610(param_1 + _DAT_112d63938);
  func_0x000107c61610(param_1 + _DAT_112d63940);
  func_0x000107c61610(param_1 + _DAT_112d63948);
  func_0x000107c61610(param_1 + _DAT_112d63950);
  func_0x000107c61610(param_1 + _DAT_112d63958);
  func_0x000107c61610(param_1 + _DAT_112d63960);
  func_0x000107c61610(param_1 + _DAT_112d63968);
  func_0x000107c61610(param_1 + _DAT_112d63970);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63978));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d63980));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d63988));
  return;
}



/* Entry: 10119e4c0; end: 10119e4df;  */

void FUN_10119e4c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4978);
  return;
}



/* Entry: 10119e4e0; end: 10119e89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10119e4e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112feb970);
  func_0x000107c61174();
  func_0x000107c61174(uVar11);
  uVar3 = uVar11;
  func_0x0001000b637c();
  func_0x000107c61170(uVar11);
  uVar11 = 0x112d639b8;
  func_0x0001000285a8(0x112d639b8,&UNK_10d9294f0);
  pcVar4 = FUN_10119e8a0;
  func_0x0001000bfde0(FUN_10119e8a0,0,uVar11);
  func_0x000107c61574(uVar3);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112feb988);
  func_0x000107c6157c(pcVar4);
  func_0x000107c615f0(uVar12);
  uVar11 = param_2;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c5dec8();
  func_0x000107c61180();
  lVar5 = _DAT_112feb980;
  func_0x000107c61428(param_1 + _DAT_112feb980,auStack_78,0,0);
  lVar5 = param_1 + lVar5;
  func_0x000107c61618();
  lVar6 = 0;
  FUN_1011a0ee8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  lVar1 = _DAT_112d63ac0;
  func_0x000107c61614(lVar7 + _DAT_112d63ac0,0);
  lVar2 = _DAT_112d63ac8;
  puVar8 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar7 + lVar2) = puVar8;
  *(undefined8 *)(lVar7 + _DAT_112d63ad0) = 1;
  *(undefined8 *)(lVar7 + _DAT_112d63ad8) = 1;
  *(undefined8 *)(lVar7 + _DAT_112d63ae0) = 0;
  *(undefined8 *)(lVar7 + _DAT_112d63ae8) = 1;
  *(undefined8 *)(lVar7 + _DAT_112d63af0) = 0;
  lVar2 = _DAT_112d63af8;
  uVar9 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar7 + lVar2) = uVar9;
  *(undefined1 *)(lVar7 + _DAT_112d63b00) = 0;
  *(undefined1 *)(lVar7 + _DAT_112d63b08) = 0;
  *(code **)(lVar7 + _DAT_112d63a90) = pcVar4;
  *(undefined8 *)(lVar7 + _DAT_112d63a98) = uVar12;
  *(undefined8 *)(lVar7 + _DAT_112d63aa0) = uVar11;
  *(undefined8 *)(lVar7 + _DAT_112d63aa8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112d63ab0) = param_4;
  *(undefined8 *)(lVar7 + _DAT_112d63ab8) = param_5;
  func_0x000107c61604(lVar7 + lVar1,lVar5);
  puVar8 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_88 = lVar7;
  lStack_80 = lVar6;
  func_0x000107c6157c(pcVar4);
  func_0x000107c615f0(uVar12);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar3);
  plVar10 = &lStack_88;
  func_0x000107c61154(plVar10,puVar8,0,0);
  func_0x000107c61180();
  func_0x000107c5677c();
  func_0x000107c61170(plVar10);
  func_0x000107c61574(pcVar4);
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(lVar5);
  func_0x000107c3e2c0(*(undefined8 *)(param_1 + _DAT_112feb978));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(pcVar4);
  func_0x000107c61170(plVar10);
  return unaff_x20;
}



/* Entry: 10119e8a0; end: 10119e8cf;  */

void FUN_10119e8a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10119e8d0; end: 10119e8f3;  */

void FUN_10119e8d0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10119e8f4; end: 10119e8f7;  */

void FUN_10119e8f4(void)

{
  return;
}



/* Entry: 10119e8f8; end: 10119e94b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10119e8f8(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_112feb978),param_2,0);
  return 0;
}



/* Entry: 10119e94c; end: 10119e99b;  */

void FUN_10119e94c(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 & *param_2;
  return;
}



/* Entry: 10119e99c; end: 10119e9f3; -[_TtC30ReactionsDetailScopeEntryPoint33ReactionsDetailTrayViewController initWithCoder:] */

void FUN_10119e99c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ReactionsDetailScopeEntryPoint/ReactionsDetailTrayViewController.swift",0x46,
                      2,0x14,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10119e9f4);
  (*pcVar1)();
}



/* Entry: 10119e9f4; end: 10119ecc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119e9f4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  FUN_10119ed58();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119ecb4);
    (*pcVar1)();
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d63a60);
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  uVar7 = uVar8;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119ecb8);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  uVar7 = uVar8;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119ecbc);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  uVar5 = uVar7;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar2 + 0x28) = uVar5;
  uVar7 = uVar8;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar5 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(lVar2 + 0x30) = uVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar7 = uVar8;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar3);
      *(undefined8 *)(lVar2 + 0x38) = uVar7;
      uVar7 = 0;
      func_0x000100847984(0);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar7);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar6);
      func_0x000107c61170(lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10119ecc4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10119ecc0);
  (*pcVar1)();
}



/* Entry: 10119ecc4; end: 10119eceb; -[_TtC30ReactionsDetailScopeEntryPoint33ReactionsDetailTrayViewController viewDidLoad] */

void FUN_10119ecc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10119e9f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10119ecec; end: 10119ed47; -[_TtC30ReactionsDetailScopeEntryPoint33ReactionsDetailTrayViewController initWithNibName:bundle:] */

void FUN_10119ecec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ReactionsDetailScopeEntryPoint.ReactionsDetailTrayViewController",0x40,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10119ed18);
  (*pcVar1)();
}



/* Entry: 10119ed48; end: 10119ed57; -[_TtC30ReactionsDetailScopeEntryPoint33ReactionsDetailTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119ed48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d63a60));
  return;
}



/* Entry: 10119ed58; end: 10119ed77;  */

void FUN_10119ed58(void)

{
  func_0x000107c61168(&PTR_PTR_1127b4a90);
  return;
}



/* Entry: 10119ed78; end: 10119ee93; -[_TtC30ReactionsDetailScopeEntryPoint33ReactionsDetailTrayViewController tray:canUseGestureToExpandOrCollapse:] */

uint FUN_10119ed78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  func_0x00010119edec(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10119ee94; end: 10119f11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119ee94(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  lVar1 = _DAT_112d63ad0;
  plVar5 = &lStack_50;
  puVar7 = *(undefined **)(unaff_x20 + _DAT_112d63ad0);
  puVar6 = puVar7;
  if (puVar7 == (undefined *)0x1) {
    puVar2 = &DAT_112d63ad8;
    FUN_10119f19c(&DAT_112d63ad8,0x10119efc8,0x1011a1c98,0x1011a1c9c);
    puVar6 = (undefined *)0x0;
    if (puVar2 != (undefined *)0x0) {
      lVar3 = 0;
      FUN_10119ed58();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(undefined **)(lVar4 + _DAT_112d63a60) = puVar2;
      puVar6 = PTR_s_initWithNibName_bundle__1125e9850;
      lStack_50 = lVar4;
      lStack_48 = lVar3;
      func_0x000107c61174(puVar2);
      func_0x000107c61154(&lStack_50,puVar6,0,0);
      puVar6 = PTR_PTR_1126b0a08;
      func_0x000107c610f8();
      func_0x000107c48e88();
      func_0x000107c61170(plVar5);
      func_0x000107c52684(puVar6);
      func_0x000107c5a05c(puVar6);
      func_0x000107c52aa4(puVar6);
      func_0x000107c61170(puVar2);
    }
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar6;
    func_0x000107c61174(puVar6);
    FUN_100ca5c20(uVar8);
  }
  func_0x000100ca5c34(puVar7);
  return puVar6;
}



/* Entry: 10119f120; end: 10119f19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119f120(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d63ae0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d63ae0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126a64f8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10119f19c; end: 10119f213;  */

long FUN_10119f19c(long *param_1,code *param_2,code *param_3,code *param_4)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar2 = *(long *)(unaff_x20 + lVar4);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61174();
    (*param_3)(uVar3);
  }
  (*param_4)(lVar2);
  return lVar1;
}



/* Entry: 10119f214; end: 10119f303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119f214(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  puVar2 = PTR_PTR_1126b0870;
  func_0x000107c610f8(PTR_PTR_1126b0870);
  func_0x000107c453e4();
  func_0x000107c5a050();
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d63ac8);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar1);
  func_0x000104394a1c(uVar3,puVar2,puVar1,param_1,0,1,0);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112d63ab0));
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  return puVar2;
}



/* Entry: 10119f304; end: 10119f3e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10119f304(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d63af0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d63af0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    puVar2 = puVar3;
    func_0x000107c526c0(0,puVar3);
    FUN_10119f120();
    func_0x000107c3d89c(puVar3);
    func_0x000107c61170(puVar2);
    puVar2 = &DAT_112d63ae8;
    FUN_10119f19c(&DAT_112d63ae8,FUN_10119f214,0x1011a1ca0,0x1011a1ca4);
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c3d89c(puVar3);
      func_0x000107c61170(puVar2);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10119f3e8; end: 10119f40f; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController initWithCoder:] */

void FUN_10119f3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1011a1680();
  return;
}



/* Entry: 10119f410; end: 10119f5cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119f410(uint param_1)

{
  code *pcVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  plVar2 = (long *)&stack0xffffffffffffffb0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  FUN_1011a1a64();
  func_0x000104884898();
  puVar3 = &UNK_11038cca0;
  func_0x000107c613fc(&UNK_11038cca0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar1 = FUN_1011a1b18;
  puVar7 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_1011a1b18);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar4 = pcVar1;
  func_0x000107c614f0(pcVar1);
  (**(code **)(puVar7 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112d63af8),pcVar4,puVar7);
  func_0x000107c615e8(pcVar1);
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c3d6fc();
    func_0x000107c61170();
    FUN_1011a02c0();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      FUN_10119f120();
      func_0x000107c538a4();
      func_0x000107c61170(lVar6);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d63a98);
      puVar7 = PTR_PTR_1126c6b60;
      func_0x000107c61168(PTR_PTR_1126c6b60);
      func_0x000107c43b98();
      func_0x000107c61180();
      func_0x000107c53830(uVar8);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10119f5d0);
  (*pcVar1)();
}



/* Entry: 10119f5d0; end: 10119f66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119f5d0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10119f670(lVar3);
    if ((lVar3 != 0) && (uVar2 = *(ulong *)(lVar3 + _DAT_112febaa8), uVar2 >> 0x3e != 0)) {
      uVar1 = uVar2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar2) {
        uVar1 = uVar2;
      }
      func_0x000107c60480(uVar1);
    }
    FUN_10119f958();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10119f670; end: 10119f957;  */

/* WARNING: Possible PIC construction at 0x00010119f6e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010119f758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010119f6e8) */
/* WARNING: Removing unreachable block (ram,0x00010119f734) */
/* WARNING: Removing unreachable block (ram,0x00010119f75c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119f670(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  if (param_1 != 0) {
    param_1 = *(long *)(unaff_x20 + _DAT_112d63ac8);
    func_0x000107c61174();
    func_0x000107c4d664(param_1);
    FUN_10119f120();
    func_0x000107c5a588();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if (*(char *)(unaff_x20 + _DAT_112d63b08) == '\x01') {
    FUN_10119ee94();
    if (param_1 != 0) {
      func_0x000107c42018();
      goto code_r0x000107c61170;
    }
  }
  else {
    *(undefined1 *)(unaff_x20 + _DAT_112d63b00) = 0;
    FUN_100c82230(*(undefined8 *)(unaff_x20 + _DAT_112d63af8));
    puVar2 = &UNK_11038cf98;
    func_0x000107c613fc(&UNK_11038cf98,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    puVar3 = &UNK_11038cfc0;
    func_0x000107c613fc(&UNK_11038cfc0,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x1011a1c78;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11038cfd8;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(puVar2);
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_11038d010;
    func_0x000107c613fc(&UNK_11038d010,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = 0x1011a1c7c;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    uStack_70 = 0x1011a1c94;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_11038d028;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  return;
}



/* Entry: 10119f958; end: 1011a02bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10119f958(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long unaff_x20;
  double dVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  puVar4 = param_5;
  if ((*(byte *)(unaff_x20 + _DAT_112d63b00) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d63b00) = 1;
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02a8);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    FUN_10119f304();
    func_0x000107c3d89c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02ac);
      (*pcVar1)();
    }
    func_0x000107c515a0();
    dVar16 = param_1;
    func_0x000107c61170(lVar2);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02b0);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    func_0x000107c609b0(dVar16,param_2,param_3,param_4);
    puVar4 = &DAT_112d63ae8;
    FUN_10119f19c(&DAT_112d63ae8,FUN_10119f214,0x1011a1ca0,0x1011a1ca4);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar2 = 0x112d360b8;
      FUN_1011a12fc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 3;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d63af0);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar9 = uVar12;
      FUN_10119f120();
      uVar10 = uVar9;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      uVar9 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar2 + 0x20) = uVar9;
      uVar9 = 0;
      func_0x0001011a1b48(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar9);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar4);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      lVar2 = 0x112d360b8;
      FUN_1011a12fc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                    &UNK_10d9011a0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 9;
      *(undefined8 *)(lVar2 + 0x10) = 4;
      func_0x000107c61174();
      puVar6 = puVar4;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar7 = puVar6;
      FUN_10119f120();
      puVar8 = puVar7;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      puVar7 = puVar6;
      func_0x000107c40284(0x4020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar8);
      *(undefined **)(lVar2 + 0x20) = puVar7;
      puVar6 = puVar4;
      func_0x000107c4ace0();
      func_0x000107c61180();
      lVar3 = _DAT_112d63af0;
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d63af0);
      func_0x000107c4ace0(uVar9);
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c40284(0x4020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar9);
      *(undefined **)(lVar2 + 0x28) = puVar7;
      puVar6 = puVar4;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c50890(uVar9);
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar9);
      *(undefined **)(lVar2 + 0x30) = puVar7;
      uVar10 = *(undefined8 *)(unaff_x20 + lVar3);
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar6 = puVar4;
      func_0x000107c3ec1c(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      uVar9 = uVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar6);
      *(undefined8 *)(lVar2 + 0x38) = uVar9;
      uVar9 = 0;
      func_0x0001011a1b48(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar2;
      func_0x000107c5fc48(lVar2,uVar9);
      func_0x000107c61574(lVar2);
      func_0x000107c3d048(puVar5);
      func_0x000107c61170(puVar4);
    }
    func_0x000107c61170(lVar3);
    lVar2 = 0x112d360b8;
    FUN_1011a12fc(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 0xd;
    *(undefined8 *)(lVar2 + 0x10) = 6;
    lVar3 = lVar2;
    FUN_10119f120();
    lVar11 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar13 = _DAT_112d63af0;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d63af0);
    func_0x000107c4ace0(uVar9);
    func_0x000107c61180();
    lVar3 = lVar11;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(uVar9);
    *(long *)(lVar2 + 0x20) = lVar3;
    lVar3 = _DAT_112d63ae0;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d63ae0);
    func_0x000107c50890();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c50890(uVar12);
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar12);
    *(undefined8 *)(lVar2 + 0x28) = uVar9;
    uVar10 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + lVar3);
    func_0x000107c5cbe4(uVar12);
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar12);
    *(undefined8 *)(lVar2 + 0x30) = uVar9;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02b4);
      (*pcVar1)();
    }
    lVar11 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar11);
    *(undefined8 *)(lVar2 + 0x38) = uVar10;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c50890();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02b8);
      (*pcVar1)();
    }
    lVar11 = lVar3;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar10 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar11);
    *(undefined8 *)(lVar2 + 0x40) = uVar10;
    uVar9 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c3f764();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02bc);
      (*pcVar1)();
    }
    puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar13 = lVar3;
    func_0x000107c5cbe4(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    uVar10 = uVar9;
    func_0x000107c40284(param_1 + (dVar16 * 0.5 - param_1) * 0.5);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar13);
    *(undefined8 *)(lVar2 + 0x48) = uVar10;
    uVar9 = 0;
    func_0x0001011a1b48(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar9);
    func_0x000107c61574(lVar2);
    func_0x000107c3d048(puVar4);
    func_0x000107c61170(lVar3);
    puVar4 = &UNK_11038cef8;
    func_0x000107c613fc(&UNK_11038cef8,0x18,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    puVar7 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_a0 = FUN_1011a1b88;
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_1000f6b44;
    puStack_a8 = &UNK_11038cf10;
    ppuVar14 = &puStack_c0;
    puStack_98 = puVar4;
    func_0x000107c60bc4(ppuVar14);
    puVar5 = puStack_98;
    func_0x000107c61174();
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_11038cf48;
    func_0x000107c613fc(&UNK_11038cf48,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    pcStack_a0 = (code *)0x1011a1c90;
    puStack_c0 = puVar6;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100288f10;
    puStack_a8 = &UNK_11038cf60;
    ppuVar15 = &puStack_c0;
    puStack_98 = puVar5;
    func_0x000107c60bc4(ppuVar15);
    func_0x000107c61574(puStack_98);
    func_0x000107c3dcd8(0x3fd3333333333333,0,0x3feb333333333333,0,puVar7);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61574(puVar4);
    puVar4 = PTR_PTR_1126affa8;
    func_0x000107c61168();
    func_0x000107c5aa04();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a02c0);
      (*pcVar1)();
    }
    func_0x000107c4e57c();
    func_0x000107c61170();
  }
  if (((*(byte *)(unaff_x20 + _DAT_112d63b08) & 1) == 0) && (0 < (long)param_5)) {
    *(undefined1 *)(unaff_x20 + _DAT_112d63b08) = 1;
    FUN_10119ee94();
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c4ef2c(0x3fe0000000000000);
      func_0x000107c61170(puVar4);
    }
  }
  return;
}



/* Entry: 1011a02c0; end: 1011a04eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011a02c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  lVar10 = *(long *)(unaff_x20 + _DAT_112d63a98);
  puVar2 = PTR_PTR_1126c6b60;
  func_0x000107c61168(PTR_PTR_1126c6b60);
  func_0x000107c43b98();
  func_0x000107c61180();
  lVar3 = lVar10;
  func_0x000107c40514();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (lVar3 != 0) {
    func_0x000107c3ec60(lVar3);
    puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
    func_0x000107c486f8(param_3,param_4);
    puVar2 = &UNK_11038ce80;
    func_0x000107c613fc(&UNK_11038ce80,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar3;
    puVar5 = &UNK_11038cea8;
    func_0x000107c613fc(&UNK_11038cea8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x1011a1b20;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcStack_70 = FUN_1011a1b28;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100f9148c;
    puStack_78 = &UNK_11038cec0;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    lVar7 = lVar3;
    func_0x000107c61174(lVar3);
    func_0x000107c6157c(puVar5);
    func_0x000107c61574(puVar8);
    puVar8 = puVar4;
    func_0x000107c45138(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    puVar9 = puVar5;
    func_0x000107c61544(puVar5,"",0x6b,0x11b,0x24,1);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1011a04ec);
      (*pcVar1)();
    }
    puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x000107c469a4(0,0,0,0);
    func_0x000107c438d4(lVar7);
    func_0x000107c54b80(puVar5);
    func_0x000107c55258(puVar5);
    func_0x000107c526c0(0x3fe0000000000000,puVar5);
    func_0x000107c5742c(lVar10);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar5);
  }
  return lVar3;
}



/* Entry: 1011a04ec; end: 1011a051b; -[_TtC30ReactionsDetailScopeEntryPoint29ReactionsDetailViewController viewDidAppear:] */

void FUN_1011a04ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10119f410(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


