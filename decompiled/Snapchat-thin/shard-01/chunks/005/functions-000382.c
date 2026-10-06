/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011ea7a0; end: 1011ea7d3; -[_TtC31PublicGroupsShortcutsDataPlugin31PublicGroupsShortcutsDataPlugin badgeObservable] */

void FUN_1011ea7a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011ea4e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011ea7d4; end: 1011ea91f;  */

undefined1  [16] FUN_1011ea7d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &UNK_110392298;
  func_0x000107c613fc(&UNK_110392298,0x11,7);
  puVar1[0x10] = 0;
  puVar2 = &UNK_1103921f8;
  func_0x000107c613fc(&UNK_1103921f8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_2);
  puVar3 = &UNK_1103922c0;
  func_0x000107c613fc(&UNK_1103922c0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar1);
  uVar4 = 0x13;
  func_0x0001001ca524(0x13,0,0x28,4,0,0,&UNK_10d92b488,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_1103922e8;
  func_0x000107c613fc(&UNK_1103922e8,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  pcVar5 = FUN_1011eb19c;
  func_0x0001000b6d50(FUN_1011eb19c,puVar2);
  func_0x000107c61574(puVar1);
  auVar6._8_8_ = &PTR_DAT_1107aaa40;
  auVar6._0_8_ = pcVar5;
  return auVar6;
}



/* Entry: 1011ea920; end: 1011ea93b;  */

void FUN_1011ea920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011ea93c,0,0);
  return;
}



/* Entry: 1011ea93c; end: 1011eaa77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ea93c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x40,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 == 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = 0;
    func_0x000100087f6c(unaff_x22 + 0x10);
    func_0x000100c7f554();
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112d66cc8);
    puVar3 = &UNK_110392310;
    func_0x000107c613fc(&UNK_110392310,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    *(code **)(unaff_x22 + 0x30) = FUN_1011eb234;
    *(undefined **)(unaff_x22 + 0x38) = puVar3;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x1011eaae0;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_110392328;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar4);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c615f0(uVar6);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar7);
    func_0x000107c44284(uVar6);
    func_0x000107c60bd0(lVar4);
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001011eaa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1011eaa78; end: 1011eab27;  */

void FUN_1011eaa78(undefined8 param_1,long param_2)

{
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  uStack_50 = param_1;
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    uStack_50 = 0;
  }
  func_0x000100087f6c(&uStack_50);
  func_0x000100c7f554();
  return;
}



/* Entry: 1011eab28; end: 1011ead13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eab28(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar4 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(param_2 + _DAT_112d66cc0);
      func_0x000107c615f0(lVar4);
      func_0x000107c42654();
      if ((uVar5 & 1) != 0) {
        puVar1 = PTR_PTR_1126df0b8;
        func_0x000107c61168(PTR_PTR_1126df0b8);
        func_0x000107c43be4();
        func_0x000107c61180();
        puVar2 = puVar1;
        func_0x000107c4421c();
        func_0x000107c61180();
        func_0x000107c61170(puVar1);
        puVar1 = puVar2;
        func_0x000107c5cb2c(puVar2);
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        func_0x0001000285a8(0x112d66d30,&UNK_10d92b478);
        puVar2 = puVar1;
        func_0x0001000b637c(puVar1);
        uVar6 = *(undefined8 *)(param_2 + _DAT_112d66cd0);
        uVar3 = uVar6;
        func_0x000107c615f0(uVar6);
        func_0x000100471e0c();
        func_0x000107c61574(puVar2);
        func_0x000107c615e8(uVar6);
        uVar6 = 0x112d66d20;
        func_0x0001000285a8(0x112d66d20,&UNK_10d92b468);
        func_0x0001000bfde0(FUN_1011ead14,0,uVar6);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(puVar1);
        func_0x000107c61574(uVar3);
        return;
      }
      func_0x0001000285a8(0x112d66d28,&UNK_10d92b470);
      uStack_68 = 0;
      uStack_60 = 0;
      func_0x000100854cb0(&uStack_68);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar4);
      return;
    }
    func_0x000107c61170();
  }
  func_0x0001000285a8(0x112d66d28,&UNK_10d92b470);
  uStack_68 = 0;
  uStack_60 = 0;
  func_0x000100854cb0(&uStack_68);
  return;
}



/* Entry: 1011ead14; end: 1011ead93;  */

void FUN_1011ead14(long *param_1,double param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  func_0x000107c5d334(uVar2);
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ead8c);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_2) {
    if (param_2 < 9.223372036854776e+18) {
      *param_1 = (long)param_2;
      func_0x000107c49fd8();
      *(char *)(param_1 + 1) = (char)uVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ead94);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ead90);
  (*pcVar1)();
}



/* Entry: 1011ead94; end: 1011eaf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ead94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_110392270;
    func_0x000107c613fc(&UNK_110392270,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    func_0x0001000285a8(0x112d66d18,&UNK_10d92b460);
    func_0x000107c613fc();
    func_0x000107c61174();
    uVar2 = 0x1011eb0dc;
    func_0x0001000b64ac(0x1011eb0dc,puVar1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112d66cd0);
    uVar6 = uVar5;
    func_0x000107c615f0(uVar5);
    func_0x000100471e0c();
    func_0x000107c61574(uVar2);
    func_0x000107c615e8(uVar5);
    puVar1 = &UNK_1103921f8;
    puVar3 = puVar1;
    func_0x000107c613fc(&UNK_1103921f8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    uVar2 = 0x112d66d20;
    func_0x0001000285a8(0x112d66d20,&UNK_10d92b468);
    plVar4 = (long *)0x1011eb0e4;
    func_0x000100775358(0x1011eb0e4,puVar3,uVar2);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c613fc(&UNK_1103921f8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    uVar2 = 0x1011eb0ec;
    puVar3 = puVar1;
    (**(code **)(*plVar4 + 0x60))(0x1011eb0ec);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c614f0(uVar2);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112d66cd8);
    pcVar7 = *(code **)(puVar3 + 0x18);
    func_0x000107c6157c(uVar6);
    (*pcVar7)();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(uVar2);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 1011eaf8c; end: 1011eb017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eaf8c(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112d66ce0);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(param_2);
    uStack_58 = uVar3;
    uStack_50 = uVar1;
    func_0x0001007d6d78(&uStack_58);
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 1011eb018; end: 1011eb063; -[_TtC31PublicGroupsShortcutsDataPlugin31PublicGroupsShortcutsDataPlugin init] */

void FUN_1011eb018(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsShortcutsDataPlugin.PublicGroupsShortcutsDataPlugin",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011eb044);
  (*pcVar1)();
}



/* Entry: 1011eb064; end: 1011eb06b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb064(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_48 [24];
  
  lVar8 = *param_2;
  bVar1 = *(byte *)(param_2 + 1);
  puVar7 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar7,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    puVar5 = PTR_PTR_1126b14f0;
    func_0x000107c61168(PTR_PTR_1126b14f0);
    func_0x000107c40828();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4e01c();
    func_0x000107c61180();
    goto LAB_1011ea77c;
  }
  if ((bVar1 & 1) == 0) {
LAB_1011ea6ec:
    puVar5 = PTR_PTR_1126b14f0;
    func_0x000107c61168(PTR_PTR_1126b14f0);
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1011ea7a0);
      (*pcVar2)();
    }
    func_0x000107c40828();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4e01c();
  }
  else {
    iVar3 = (int)*(undefined8 *)(lVar4 + _DAT_112d66cc0);
    func_0x000107c426bc();
    if (iVar3 == 0) goto LAB_1011ea6ec;
    puVar6 = PTR_PTR_1126c2cb0;
    func_0x000107c61168();
    func_0x000107c44f9c();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
    }
    puVar5 = PTR_PTR_1126b14f0;
    func_0x000107c61168(PTR_PTR_1126b14f0);
    func_0x000107c41180();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = PTR_PTR_1126ae750;
    func_0x000107c61168();
    func_0x000107c4e01c();
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
LAB_1011ea77c:
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 1011eb06c; end: 1011eb0af;  */

void FUN_1011eb06c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d38dd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d38dd0 = puVar1;
  return;
}



/* Entry: 1011eb0b0; end: 1011eb0f3;  */

/* WARNING: Removing unreachable block (ram,0x0001011ea2b0) */

undefined * FUN_1011eb0b0(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e20e98;
    func_0x000107c61174();
    ppuVar3 = ppuVar2;
    FUN_1011eb42c();
    puVar6 = PTR_PTR_1126b1490;
    func_0x000107c61168(PTR_PTR_1126b1490);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c388(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126b1498;
    func_0x000107c610f8(PTR_PTR_1126b1498);
    func_0x000107c5fadc(ppuVar3,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c48694(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(ppuVar3);
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 1011eb0f4; end: 1011eb15f;  */

void FUN_1011eb0f4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1011eb160;
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar4;
  plVar3[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1011ea93c,0,0);
  return;
}



/* Entry: 1011eb160; end: 1011eb19b;  */

void FUN_1011eb160(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001011eb198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1011eb19c; end: 1011eb207;  */

void FUN_1011eb19c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  *(undefined1 *)(lVar1 + 0x10) = 1;
  func_0x000107c5fd50(uVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  return;
}



/* Entry: 1011eb208; end: 1011eb233;  */

void FUN_1011eb208(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011eb234; end: 1011eb24b;  */

void FUN_1011eb234(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  uStack_50 = param_1;
  if ((*(byte *)(lVar1 + 0x10) & 1) != 0) {
    uStack_50 = 0;
  }
  func_0x000100087f6c(&uStack_50);
  func_0x000100c7f554();
  return;
}



/* Entry: 1011eb24c; end: 1011eb24f; -[_TtC31PublicGroupsShortcutsDataPlugin31PublicGroupsShortcutsDataPlugin shouldBadgeForSource:] */

bool FUN_1011eb24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 1011eb250; end: 1011eb253; -[_TtC31PublicGroupsShortcutsDataPlugin31PublicGroupsShortcutsDataPlugin shouldShowForSource:] */

bool FUN_1011eb250(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 1011eb254; end: 1011eb3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011eb254(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(param_3 + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar2 != 0) {
      uVar3 = uVar1;
      func_0x000107c42650();
      if ((uVar3 & 1) != 0) {
        func_0x000107c615f0(uVar1);
        uVar4 = param_4;
        func_0x000107c5dbd4(param_4);
        func_0x000107c61180();
        func_0x0001011eb044(0);
        func_0x000107c610f8();
        func_0x000107c615f0(uVar2);
        uVar3 = uVar1;
        FUN_1011e9d4c(uVar1,uVar4,uVar2);
        uVar4 = param_1;
        func_0x000107c4e9e4(param_1);
        func_0x000107c61180();
        func_0x000107c61174(uVar3);
        func_0x000107c4fba8(uVar4);
        func_0x000107c615e8(uVar1);
        func_0x000107c615e8(uVar2);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        goto LAB_1011eb3b0;
      }
      func_0x000107c615e8(uVar1);
      uVar1 = uVar2;
    }
    func_0x000107c615e8(uVar1);
  }
LAB_1011eb3b0:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return unaff_x20;
}



/* Entry: 1011eb3f0; end: 1011eb40b;  */

void FUN_1011eb3f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011eb40c; end: 1011eb42b;  */

void FUN_1011eb40c(void)

{
  func_0x000107c61168(&PTR_PTR_112d66d78);
  return;
}



/* Entry: 1011eb42c; end: 1011eb4f7;  */

undefined1  [16] FUN_1011eb42c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2d570);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef2d590);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011eb4f8);
  (*pcVar1)();
}



/* Entry: 1011eb4f8; end: 1011eb503; -[SCPublicGroupsShortcutsDataPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb4f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66dd0;
  func_0x000107c61428(param_1 + _DAT_112d66dd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011eb504; end: 1011eb50f; -[SCPublicGroupsShortcutsDataPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb504(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66dd0;
  func_0x000107c61428(param_1 + _DAT_112d66dd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011eb510; end: 1011eb51b; -[SCPublicGroupsShortcutsDataPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66dd8;
  func_0x000107c61428(param_1 + _DAT_112d66dd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011eb51c; end: 1011eb527; -[SCPublicGroupsShortcutsDataPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66dd8;
  func_0x000107c61428(param_1 + _DAT_112d66dd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011eb528; end: 1011eb533; -[SCPublicGroupsShortcutsDataPluginEntryPoint taskManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb528(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66de0;
  func_0x000107c61428(param_1 + _DAT_112d66de0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011eb534; end: 1011eb53f; -[SCPublicGroupsShortcutsDataPluginEntryPoint setTaskManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66de0;
  func_0x000107c61428(param_1 + _DAT_112d66de0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011eb540; end: 1011eb54b; -[SCPublicGroupsShortcutsDataPluginEntryPoint valdiRuntimeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66de8;
  func_0x000107c61428(param_1 + _DAT_112d66de8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011eb54c; end: 1011eb58f;  */

void FUN_1011eb54c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011eb590; end: 1011eb59b; -[SCPublicGroupsShortcutsDataPluginEntryPoint setValdiRuntimeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011eb590(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66de8;
  func_0x000107c61428(param_1 + _DAT_112d66de8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011eb59c; end: 1011eb5ef;  */

void FUN_1011eb59c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011eb5f0; end: 1011eb853;  */

/* WARNING: Possible PIC construction at 0x0001011eb6b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eb774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eb784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eb814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eb824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eb7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eb7b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011eb7c8) */
/* WARNING: Removing unreachable block (ram,0x0001011eb828) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001011eb818) */
/* WARNING: Removing unreachable block (ram,0x0001011eb788) */
/* WARNING: Removing unreachable block (ram,0x0001011eb778) */
/* WARNING: Removing unreachable block (ram,0x0001011eb6b4) */
/* WARNING: Removing unreachable block (ram,0x0001011eb6b8) */
/* WARNING: Removing unreachable block (ram,0x0001011eb7f0) */
/* WARNING: Removing unreachable block (ram,0x0001011eb6d8) */
/* WARNING: Removing unreachable block (ram,0x0001011eb7f8) */
/* WARNING: Removing unreachable block (ram,0x0001011eb804) */
/* WARNING: Removing unreachable block (ram,0x0001011eb808) */
/* WARNING: Removing unreachable block (ram,0x0001011eb6e8) */
/* WARNING: Removing unreachable block (ram,0x0001011eb7b8) */

void FUN_1011eb5f0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cdfc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5c78c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5dbd8();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011eb40c(0);
        func_0x000107c613fc();
        func_0x000107c4cdb8(lVar2);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011eb854; end: 1011eb87b; -[SCPublicGroupsShortcutsDataPluginEntryPoint begin] */

void FUN_1011eb854(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011eb5f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011eb87c; end: 1011eb8bf; -[SCPublicGroupsShortcutsDataPluginEntryPoint end] */

void FUN_1011eb87c(undefined8 param_1)

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



/* Entry: 1011eb8c0; end: 1011ebb2f;  */

void FUN_1011eb8c0(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000001b;
    if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
       (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5666c();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10edd20)) ||
         (func_0x000107c605b8(0xd000000000000016,0x800000010ef122e0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59c2c();
      }
      else {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e63b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef19c50,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PublicGroupsShortcutsDataPlugin/SCPublicGroupsShortcutsDataPluginEntryPoint.swift"
                                ,0x51,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ebb30);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5a488();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011ebb30; end: 1011ebbdb; -[SCPublicGroupsShortcutsDataPluginEntryPoint setValue:forIvarName:] */

void FUN_1011ebb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011eb8c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011ebbdc; end: 1011ebc77; -[SCPublicGroupsShortcutsDataPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ebbdc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d66dd0,0);
  func_0x000107c61614(param_1 + _DAT_112d66dd8,0);
  func_0x000107c61614(param_1 + _DAT_112d66de0,0);
  func_0x000107c61614(param_1 + _DAT_112d66de8,0);
  *(undefined8 *)(param_1 + _DAT_112d66df0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011ebc78; end: 1011ebcab;  */

void FUN_1011ebc78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011ebcac; end: 1011ebd13; -[SCPublicGroupsShortcutsDataPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ebcac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d66dd0);
  func_0x000107c61610(param_1 + _DAT_112d66dd8);
  func_0x000107c61610(param_1 + _DAT_112d66de0);
  func_0x000107c61610(param_1 + _DAT_112d66de8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d66df0));
  return;
}



/* Entry: 1011ebd14; end: 1011ebd33;  */

void FUN_1011ebd14(void)

{
  func_0x000107c61168(&PTR_PTR_1127b98a0);
  return;
}



/* Entry: 1011ebd34; end: 1011ebdab; -[_TtC45PublicGroupsSportBillboardFHPUIConfigProvider45PublicGroupsSportBillboardFHPUIConfigProvider canHandleCampaignId:] */

uint FUN_1011ebd34(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  
  func_0x000107c5faec();
  if ((param_3 == -0x2fffffffffffffd9) && (param_2 == -0x7ffffffef10d2990)) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 1011ebdac; end: 1011ebec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011ebdac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d66e20);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d66e28);
  puVar2 = &UNK_110392420;
  func_0x000107c613fc(&UNK_110392420,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar5;
  pcStack_50 = FUN_1011ec498;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x1011eaae0;
  puStack_58 = &UNK_110392438;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c44284(uVar4);
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar1;
  func_0x000107c43bf4(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 1011ebec4; end: 1011ec39b;  */

/* WARNING: Possible PIC construction at 0x0001011ebf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ebfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ebfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ec018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ec0c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ebfbc) */
/* WARNING: Removing unreachable block (ram,0x0001011ebfa8) */
/* WARNING: Removing unreachable block (ram,0x0001011ebf84) */
/* WARNING: Removing unreachable block (ram,0x0001011ec01c) */

void FUN_1011ebec4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    FUN_1011ec4c4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c3fefc(param_2);
  }
  else {
    func_0x000107c615f0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 == 0) {
      FUN_1011ec4c4();
      func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c3fefc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
    func_0x0001000285a8(0x112d66e60,&UNK_10d92b530);
    puVar1 = PTR_PTR_1126df118;
    func_0x000107c61168(PTR_PTR_1126df118);
    func_0x000107c43be4();
    func_0x000107c61180();
    func_0x000107c5fadc(0xd000000000000027,0x800000010ef2d670);
    func_0x000107c44330(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011ec39c; end: 1011ec3cf; -[_TtC45PublicGroupsSportBillboardFHPUIConfigProvider45PublicGroupsSportBillboardFHPUIConfigProvider configs] */

void FUN_1011ec39c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1011ebdac();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1011ec3d0; end: 1011ec42f; -[_TtC45PublicGroupsSportBillboardFHPUIConfigProvider45PublicGroupsSportBillboardFHPUIConfigProvider init] */

void FUN_1011ec3d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsSportBillboardFHPUIConfigProvider.PublicGroupsSportBillboardFHPUIConfigProvider"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ec3fc);
  (*pcVar1)();
}



/* Entry: 1011ec430; end: 1011ec477; -[_TtC45PublicGroupsSportBillboardFHPUIConfigProvider45PublicGroupsSportBillboardFHPUIConfigProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011ec44c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ec450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d66e20));
  return;
}



/* Entry: 1011ec478; end: 1011ec497;  */

void FUN_1011ec478(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9978);
  return;
}



/* Entry: 1011ec498; end: 1011ec4c3;  */

/* WARNING: Possible PIC construction at 0x0001011ebf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ebfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ebfb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ec018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ec0c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ebfbc) */
/* WARNING: Removing unreachable block (ram,0x0001011ebfa8) */
/* WARNING: Removing unreachable block (ram,0x0001011ebf84) */
/* WARNING: Removing unreachable block (ram,0x0001011ec01c) */

void FUN_1011ec498(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (param_1 == 0) {
    FUN_1011ec4c4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c3fefc(uVar1);
  }
  else {
    func_0x000107c615f0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      FUN_1011ec4c4();
      func_0x000107c600f0(PTR___swiftEmptyArrayStorage_11034f1c8);
      func_0x000107c3fefc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
    func_0x0001000285a8(0x112d66e60,&UNK_10d92b530);
    puVar3 = PTR_PTR_1126df118;
    func_0x000107c61168(PTR_PTR_1126df118);
    func_0x000107c43be4();
    func_0x000107c61180();
    func_0x000107c5fadc(0xd000000000000027,0x800000010ef2d670);
    func_0x000107c44330(puVar3);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1011ec4c4; end: 1011ec503;  */

void FUN_1011ec4c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1011ec504; end: 1011ec77b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011ec504(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c42650();
    func_0x000107c615e8(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar5 = param_3;
      func_0x000107c5dbd4();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(param_4 + _DAT_112fc5e78);
      uStack_80 = uVar5;
      (**(code **)(lVar7 + 0x68))
                (lVar8,*(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
      puVar4 = PTR_PTR_1126ae790;
      func_0x000107c610f8();
      uStack_78 = param_3;
      func_0x000107c61174();
      uVar5 = 0xd000000000000032;
      func_0x000107c5fadc(0xd000000000000032,0x800000010ef2d6a0);
      func_0x000107c5f800();
      func_0x000107c470d0();
      func_0x000107c61170(uVar5);
      (**(code **)(lVar7 + 8))(lVar8,lVar1);
      lVar7 = 0;
      FUN_1011ec478();
      lVar1 = lVar7;
      func_0x000107c610f8();
      *(undefined8 *)(lVar1 + _DAT_112d66e20) = uStack_80;
      *(undefined8 *)(lVar1 + _DAT_112d66e28) = uVar9;
      *(undefined **)(lVar1 + _DAT_112d66e30) = puVar4;
      plVar6 = &lStack_70;
      lStack_70 = lVar1;
      lStack_68 = lVar7;
      func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
      uVar5 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c61174(plVar6);
      func_0x000107c4fba8(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      param_3 = uStack_78;
      goto LAB_1011ec754;
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
LAB_1011ec754:
  func_0x000107c61170(param_3);
  return unaff_x20;
}



/* Entry: 1011ec77c; end: 1011ec797;  */

void FUN_1011ec77c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011ec798; end: 1011ec7b7;  */

void FUN_1011ec798(void)

{
  func_0x000107c61168(&PTR_PTR_112d66ea8);
  return;
}



/* Entry: 1011ec7b8; end: 1011ec7c3; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec7b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66f00;
  func_0x000107c61428(param_1 + _DAT_112d66f00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ec7c4; end: 1011ec7cf; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec7c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66f00;
  func_0x000107c61428(param_1 + _DAT_112d66f00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ec7d0; end: 1011ec7db; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec7d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66f08;
  func_0x000107c61428(param_1 + _DAT_112d66f08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ec7dc; end: 1011ec7e7; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66f08;
  func_0x000107c61428(param_1 + _DAT_112d66f08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ec7e8; end: 1011ec7f3; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint valdiRuntimeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec7e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66f10;
  func_0x000107c61428(param_1 + _DAT_112d66f10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ec7f4; end: 1011ec7ff; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint setValdiRuntimeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66f10;
  func_0x000107c61428(param_1 + _DAT_112d66f10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ec800; end: 1011ec80b; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint creatorsSubscriptionStoreServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec800(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d66f18;
  func_0x000107c61428(param_1 + _DAT_112d66f18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ec80c; end: 1011ec84f;  */

void FUN_1011ec80c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011ec850; end: 1011ec85b; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint setCreatorsSubscriptionStoreServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ec850(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d66f18;
  func_0x000107c61428(param_1 + _DAT_112d66f18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ec85c; end: 1011ec8af;  */

void FUN_1011ec85c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ec8b0; end: 1011ecbc3;  */

/* WARNING: Possible PIC construction at 0x0001011ec9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011eca70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ecb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ecb14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ecb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ecb54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ecb94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ecb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ecb98) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb58) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb48) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb18) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb08) */
/* WARNING: Removing unreachable block (ram,0x0001011eca74) */
/* WARNING: Removing unreachable block (ram,0x0001011ec9b0) */
/* WARNING: Removing unreachable block (ram,0x0001011ec9b4) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb38) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb3c) */
/* WARNING: Removing unreachable block (ram,0x0001011ec9cc) */
/* WARNING: Removing unreachable block (ram,0x0001011ecb30) */

void FUN_1011ec8b0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cdfc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5dbd8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c40d58();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011ec798();
        func_0x000107c613fc();
        func_0x000107c4cdb8(lVar2);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011ecbc4; end: 1011ecbeb; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint begin] */

void FUN_1011ecbc4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011ec8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011ecbec; end: 1011ecc2f; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint end] */

void FUN_1011ecbec(undefined8 param_1)

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



/* Entry: 1011ecc30; end: 1011ece9f;  */

void FUN_1011ecc30(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000001b;
    if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
       (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5666c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e63b0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000014,0x800000010ef19c50,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000021;
          if (((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef10d2920)) &&
             (func_0x000107c605b8(0xd000000000000021,0x800000010ef2d6e0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PublicGroupsSportBillboardFHPUIConfigProvider/SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint.swift"
                                ,0x6d,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ecea0);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53b44();
          goto LAB_1011eccbc;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a488();
    }
  }
LAB_1011eccbc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011ecea0; end: 1011ecf4b; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint setValue:forIvarName:] */

void FUN_1011ecea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011ecc30(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011ecf4c; end: 1011ecfe7; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ecf4c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d66f00,0);
  func_0x000107c61614(param_1 + _DAT_112d66f08,0);
  func_0x000107c61614(param_1 + _DAT_112d66f10,0);
  func_0x000107c61614(param_1 + _DAT_112d66f18,0);
  *(undefined8 *)(param_1 + _DAT_112d66f20) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011ecfe8; end: 1011ed01b;  */

void FUN_1011ecfe8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011ed01c; end: 1011ed083; -[SCPublicGroupsSportBillboardFHPUIConfigProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed01c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d66f00);
  func_0x000107c61610(param_1 + _DAT_112d66f08);
  func_0x000107c61610(param_1 + _DAT_112d66f10);
  func_0x000107c61610(param_1 + _DAT_112d66f18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d66f20));
  return;
}



/* Entry: 1011ed084; end: 1011ed0a3;  */

void FUN_1011ed084(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9a48);
  return;
}



/* Entry: 1011ed0a4; end: 1011ed0ab; -[_TtC40PublicGroupsSportBillboardSignalProvider40PublicGroupsSportBillboardSignalProvider preCheckSource] */

undefined8 FUN_1011ed0a4(void)

{
  return 0x2b;
}



/* Entry: 1011ed0ac; end: 1011ed29f;  */

/* WARNING: Possible PIC construction at 0x0001011ed160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed1f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ed19c) */
/* WARNING: Removing unreachable block (ram,0x0001011ed188) */
/* WARNING: Removing unreachable block (ram,0x0001011ed164) */
/* WARNING: Removing unreachable block (ram,0x0001011ed1fc) */

void FUN_1011ed0ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c3fefc(param_2);
  }
  else {
    func_0x000107c615f0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c3fefc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    puVar1 = PTR_PTR_1126df110;
    func_0x000107c61168(PTR_PTR_1126df110);
    func_0x000107c43be4();
    func_0x000107c61180();
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c3f99c(puVar1);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011ed2a0; end: 1011ed2ef;  */

void FUN_1011ed2a0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c3ebcc(*param_1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c3fefc(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011ed2f0; end: 1011ed357; -[_TtC40PublicGroupsSportBillboardSignalProvider40PublicGroupsSportBillboardSignalProvider eligibleWithRequestor:campaignName:] */

void FUN_1011ed2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1011ed420(param_4,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1011ed358; end: 1011ed3b7; -[_TtC40PublicGroupsSportBillboardSignalProvider40PublicGroupsSportBillboardSignalProvider init] */

void FUN_1011ed358(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PublicGroupsSportBillboardSignalProvider.PublicGroupsSportBillboardSignalProvider"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011ed384);
  (*pcVar1)();
}



/* Entry: 1011ed3b8; end: 1011ed3ff; -[_TtC40PublicGroupsSportBillboardSignalProvider40PublicGroupsSportBillboardSignalProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011ed3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ed3d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d66f50));
  return;
}



/* Entry: 1011ed400; end: 1011ed41f;  */

void FUN_1011ed400(void)

{
  func_0x000107c61168(&PTR_PTR_1127b9b20);
  return;
}



/* Entry: 1011ed420; end: 1011ed5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1011ed420(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    puVar3 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c451b0(puVar3);
    func_0x000107c61180();
  }
  else {
    puVar4 = PTR_PTR_1126ae560;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d66f50);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d66f58);
    puVar3 = &UNK_110392558;
    func_0x000107c613fc(&UNK_110392558,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar4;
    *(undefined8 *)(puVar3 + 0x18) = uVar6;
    *(ulong *)(puVar3 + 0x20) = param_1;
    *(ulong *)(puVar3 + 0x28) = param_2;
    pcStack_60 = FUN_1011ed5b0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    uStack_70 = 0x1011eaae0;
    puStack_68 = &UNK_110392570;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c61174(uVar6);
    func_0x000107c61174(puVar4);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c44284(uVar5);
    func_0x000107c60bd0(ppuVar2);
    puVar3 = puVar4;
    func_0x000107c43bf4(puVar4);
    func_0x000107c61180();
  }
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1011ed5b0; end: 1011ed5df;  */

/* WARNING: Possible PIC construction at 0x0001011ed160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed1f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011ed280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011ed19c) */
/* WARNING: Removing unreachable block (ram,0x0001011ed188) */
/* WARNING: Removing unreachable block (ram,0x0001011ed164) */
/* WARNING: Removing unreachable block (ram,0x0001011ed1fc) */

void FUN_1011ed5b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_1 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c45a48();
    func_0x000107c3fefc(uVar1);
  }
  else {
    func_0x000107c615f0();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c3fefc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
      return;
    }
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    puVar5 = PTR_PTR_1126df110;
    func_0x000107c61168(PTR_PTR_1126df110);
    func_0x000107c43be4();
    func_0x000107c61180();
    func_0x000107c5fadc(uVar2,uVar3);
    func_0x000107c3f99c(puVar5);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1011ed5e0; end: 1011ed857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011ed5e0(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long extraout_x8;
  long lVar7;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c613fc();
  uVar2 = param_2;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c42650();
    func_0x000107c615e8(uVar3);
    if ((uVar2 & 1) != 0) {
      uVar5 = param_3;
      func_0x000107c5dbd4();
      func_0x000107c61180();
      uVar9 = *(undefined8 *)(param_4 + _DAT_112fc5e78);
      uStack_80 = uVar5;
      (**(code **)(lVar7 + 0x68))
                (lVar8,*(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1);
      puVar4 = PTR_PTR_1126ae790;
      func_0x000107c610f8();
      uStack_78 = param_3;
      func_0x000107c61174();
      uVar5 = 0xd000000000000035;
      func_0x000107c5fadc(0xd000000000000035,0x800000010ef2d7e0);
      func_0x000107c5f800();
      func_0x000107c470d0();
      func_0x000107c61170(uVar5);
      (**(code **)(lVar7 + 8))(lVar8,lVar1);
      lVar7 = 0;
      FUN_1011ed400();
      lVar1 = lVar7;
      func_0x000107c610f8();
      *(undefined8 *)(lVar1 + _DAT_112d66f50) = uStack_80;
      *(undefined8 *)(lVar1 + _DAT_112d66f58) = uVar9;
      *(undefined **)(lVar1 + _DAT_112d66f60) = puVar4;
      plVar6 = &lStack_70;
      lStack_70 = lVar1;
      lStack_68 = lVar7;
      func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
      uVar5 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c61174(plVar6);
      func_0x000107c4fba8(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(plVar6);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      param_3 = uStack_78;
      goto LAB_1011ed830;
    }
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
LAB_1011ed830:
  func_0x000107c61170(param_3);
  return unaff_x20;
}



/* Entry: 1011ed858; end: 1011ed873;  */

void FUN_1011ed858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011ed874; end: 1011ed893;  */

void FUN_1011ed874(void)

{
  func_0x000107c61168(&PTR_PTR_112d66fd0);
  return;
}



/* Entry: 1011ed894; end: 1011ed89f; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed894(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67028;
  func_0x000107c61428(param_1 + _DAT_112d67028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ed8a0; end: 1011ed8ab; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed8a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67028;
  func_0x000107c61428(param_1 + _DAT_112d67028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ed8ac; end: 1011ed8b7; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed8ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67030;
  func_0x000107c61428(param_1 + _DAT_112d67030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ed8b8; end: 1011ed8c3; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67030;
  func_0x000107c61428(param_1 + _DAT_112d67030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ed8c4; end: 1011ed8cf; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint valdiRuntimeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed8c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67038;
  func_0x000107c61428(param_1 + _DAT_112d67038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ed8d0; end: 1011ed8db; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint setValdiRuntimeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67038;
  func_0x000107c61428(param_1 + _DAT_112d67038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ed8dc; end: 1011ed8e7; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint creatorsSubscriptionStoreServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed8dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d67040;
  func_0x000107c61428(param_1 + _DAT_112d67040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011ed8e8; end: 1011ed92b;  */

void FUN_1011ed8e8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011ed92c; end: 1011ed937; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint setCreatorsSubscriptionStoreServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011ed92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d67040;
  func_0x000107c61428(param_1 + _DAT_112d67040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ed938; end: 1011ed98b;  */

void FUN_1011ed938(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011ed98c; end: 1011edc9f;  */

/* WARNING: Possible PIC construction at 0x0001011eda88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edbe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011edc08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011edc74) */
/* WARNING: Removing unreachable block (ram,0x0001011edc34) */
/* WARNING: Removing unreachable block (ram,0x0001011edc24) */
/* WARNING: Removing unreachable block (ram,0x0001011edbf4) */
/* WARNING: Removing unreachable block (ram,0x0001011edbe4) */
/* WARNING: Removing unreachable block (ram,0x0001011edb50) */
/* WARNING: Removing unreachable block (ram,0x0001011eda8c) */
/* WARNING: Removing unreachable block (ram,0x0001011eda90) */
/* WARNING: Removing unreachable block (ram,0x0001011edc14) */
/* WARNING: Removing unreachable block (ram,0x0001011edc18) */
/* WARNING: Removing unreachable block (ram,0x0001011edaa8) */
/* WARNING: Removing unreachable block (ram,0x0001011edc0c) */

void FUN_1011ed98c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4cdfc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5dbd8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c40d58();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011ed874();
        func_0x000107c613fc();
        func_0x000107c4cdb8(lVar2);
        func_0x000107c61180();
        func_0x000107c5c734();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011edca0; end: 1011edcc7; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint begin] */

void FUN_1011edca0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011ed98c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011edcc8; end: 1011edd0b; -[SCPublicGroupsSportBillboardSignalProviderEntryPoint end] */

void FUN_1011edcc8(undefined8 param_1)

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



/* Entry: 1011edd0c; end: 1011edf7b;  */

void FUN_1011edd0c(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000001b;
    if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d6a90)) ||
       (func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5666c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e63b0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000014,0x800000010ef19c50,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000021;
          if (((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef10d2920)) &&
             (func_0x000107c605b8(0xd000000000000021,0x800000010ef2d6e0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "PublicGroupsSportBillboardSignalProvider/SCPublicGroupsSportBillboardSignalProviderEntryPoint.swift"
                                ,99,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011edf7c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53b44();
          goto LAB_1011edd98;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a488();
    }
  }
LAB_1011edd98:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


