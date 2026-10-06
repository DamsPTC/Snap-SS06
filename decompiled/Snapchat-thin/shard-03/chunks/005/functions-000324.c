/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102924ffc; end: 102925263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102924ffc(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  if (param_1 != 0) {
    puVar6 = &UNK_11056cff8;
    func_0x000107c613fc(&UNK_11056cff8,0x18,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    puVar8 = &UNK_11056d020;
    func_0x000107c613fc(&UNK_11056d020,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_10292537c;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_70 = (undefined *)0x10292539c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101bd41dc;
    puStack_78 = &UNK_11056d038;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar8;
    func_0x000107c60bc4(ppuVar7);
    puVar8 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar8);
    puVar8 = &UNK_11056d070;
    func_0x000107c613fc(&UNK_11056d070,0x18,7);
    *(long *)(puVar8 + 0x10) = unaff_x20;
    puVar9 = &UNK_11056d098;
    func_0x000107c613fc(&UNK_11056d098,0x20,7);
    *(undefined8 *)(puVar9 + 0x10) = 0x1029253bc;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    puStack_70 = (undefined *)0x1029253dc;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101d0e2d0;
    puStack_78 = &UNK_11056d0b0;
    ppuVar10 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_68;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar9);
    puStack_70 = (undefined *)0x1029247d8;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101d0e354;
    puStack_78 = &UNK_11056d0d8;
    ppuVar11 = &puStack_90;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_68);
    puStack_70 = (undefined *)0x1029247dc;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101d0e3bc;
    puStack_78 = &UNK_11056d100;
    ppuVar12 = &puStack_90;
    func_0x000107c60bc4();
    func_0x000107c61574(puStack_68);
    func_0x000107c4c57c(param_1);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(param_1);
    return;
  }
  lVar3 = 0;
  func_0x000107c5f804();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112ecd678);
  func_0x000107c3eb1c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      func_0x000102925780(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar14 + 0x68))
                (lVar13,*(undefined4 *)
                         PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3);
      lVar4 = lVar13;
      func_0x000107c5fff0(lVar13);
      (**(code **)(lVar14 + 8))(lVar13,lVar3);
      puVar6 = &UNK_11056ce78;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,unaff_x20);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_68 = (undefined *)0x42000000;
      ppuVar7 = &puStack_70;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c3eb28(lVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar5);
      func_0x000107c61170(lVar4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102923a0c);
  (*pcVar2)();
}



/* Entry: 102925264; end: 102925327;  */

void FUN_102925264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x0001000c10c0();
  func_0x000107c61180();
  puVar1 = &UNK_11056ce78;
  func_0x000107c613fc(&UNK_11056ce78,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_3;
  uStack_50 = param_2;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c4e524(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102925328; end: 102925347;  */

undefined1  [16] FUN_102925328(void)

{
  return ZEXT816(0x11056cf68);
}



/* Entry: 102925348; end: 102925367;  */

void FUN_102925348(void)

{
  func_0x000107c61168(&PTR_PTR_1128709c0);
  return;
}



/* Entry: 102925368; end: 10292537b;  */

void FUN_102925368(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102925370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10292537c; end: 1029253fb;  */

void FUN_10292537c(void)

{
  FUN_102923874();
  return;
}



/* Entry: 1029253fc; end: 10292540b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029253fc(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_1 == 0) {
      param_1 = 0;
    }
    else if (param_1 >> 0x3e == 0) {
      param_1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)param_1) {
        param_1 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    *(ulong *)(lVar2 + _DAT_112ecd578) = param_1;
    lVar3 = param_1 + *(long *)(lVar2 + _DAT_112ecd580);
    if (SCARRY8(param_1,*(long *)(lVar2 + _DAT_112ecd580))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102923ae8);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ecd568);
    func_0x000107c61174(uVar4);
    func_0x000107c5fe40(lVar3);
    func_0x000107c4d664(uVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10292540c; end: 102925437;  */

void FUN_10292540c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102925438; end: 10292543f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925438(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar2 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar8 = *(long *)(lVar2 + _DAT_112ecd5e0);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = lVar8;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      func_0x000107c61428(lVar4 + 0x10,auStack_c8,0,0);
      lVar2 = lVar4 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        uVar9 = *(undefined8 *)(lVar2 + _DAT_112ecd5e0);
        func_0x000107c61174(uVar9);
        func_0x000107c61170(lVar2);
        uVar3 = uVar9;
        func_0x000107c4ffe8(uVar9);
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c615e8(uVar3);
      }
    }
  }
  func_0x000107c61428(lVar4 + 0x10,auStack_80,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar10 = *(ulong *)(lVar4 + _DAT_112ecd550);
    if (uVar10 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      func_0x000107c61170(lVar4);
      uVar5 = uVar10;
      func_0x000107c49aa0();
      func_0x000107c61170(uVar10);
      if ((uVar5 & 1) != 0) {
        return;
      }
    }
  }
  puVar6 = &UNK_11056d228;
  func_0x000107c613fc(&UNK_11056d228,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  *(undefined8 *)(puVar6 + 0x18) = param_2;
  pcStack_90 = FUN_102925440;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000b0c7c;
  puStack_98 = &UNK_11056d240;
  ppuVar7 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar6 = puStack_88;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar6);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 102925440; end: 102925467;  */

void FUN_102925440(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 102925468; end: 102925497;  */

void FUN_102925468(void)

{
  FUN_102920b28();
  return;
}



/* Entry: 102925498; end: 1029254a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102925498(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ecd678);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1029254a8; end: 102925567;  */

void FUN_1029254a8(void)

{
  func_0x000102920c24();
  return;
}



/* Entry: 102925568; end: 10292558f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925568(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ecd630);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_113041e50);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5d648(uVar3);
    func_0x000107c615e8(uVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102925590; end: 1029255e3;  */

void FUN_102925590(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102925ae0;
  plVar3[0x16] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x17] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x18] = lVar1;
  plVar3[0x19] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102923b74,lVar1,lVar2);
  return;
}



/* Entry: 1029255e4; end: 1029255eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029255e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ecd668);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112fb0580);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_11056ce78;
    func_0x000107c613fc(&UNK_11056ce78,0x18,7);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618(lVar1);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x000107c61170(lVar1);
    pcStack_70 = FUN_102925620;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11056d4c0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 1029255ec; end: 10292561f;  */

void FUN_1029255ec(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  func_0x000107c61618(unaff_x20 + 0x10);
  return;
}



/* Entry: 102925620; end: 102925647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925620(void)

{
  long lVar1;
  ulong *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = *(ulong **)(lVar1 + _DAT_112ecd668);
    func_0x000107c61174();
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x70))();
    func_0x000107c61170(puVar2);
    if (lVar1 != 0) {
      func_0x000107c41b14(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102925648; end: 1029256c7;  */

undefined * FUN_102925648(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  lVar10 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar7 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  func_0x0001029257c0(lVar1,lVar8,0x112d36580,&UNK_10d9016d0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  uVar5 = 1;
  lVar10 = lVar8;
  (*pcVar12)(lVar8,1,lVar2);
  if ((int)lVar10 == 1) {
    func_0x000102925740(lVar8,0x112d36580,&UNK_10d9016d0);
    lVar10 = 0;
    uVar5 = 0xe000000000000000;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar11 + 8))(lVar8,lVar2);
  }
  func_0x0001029257c0(lVar1,puVar7,0x112d36580,&UNK_10d9016d0);
  func_0x000107c5fadc(lVar10,uVar5);
  func_0x000107c6142c(uVar5);
  puVar9 = puVar7;
  (*pcVar12)(puVar7,1,lVar2);
  if ((int)puVar9 == 1) {
    puVar9 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar11 + 8))(puVar7,lVar2);
  }
  puVar3 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar4 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c451b0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar3;
}



/* Entry: 1029256c8; end: 102925737;  */

void FUN_1029256c8(undefined8 param_1)

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
  plVar3[1] = 0x102925ae8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102925738; end: 10292573f;  */

void FUN_102925738(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102921e6c();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102925740; end: 102925807;  */

undefined8 FUN_102925740(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102925808; end: 10292588b;  */

void FUN_102925808(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102925850;
  plVar3[7] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102922e40,lVar1,lVar2);
  return;
}



/* Entry: 10292588c; end: 1029258fb;  */

void FUN_10292588c(undefined8 param_1)

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
  plVar3[1] = 0x102925af0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1029258fc; end: 102925943;  */

void FUN_1029258fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102925af4;
  plVar3[7] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102921cc0,lVar1,lVar2);
  return;
}



/* Entry: 102925944; end: 1029259b3;  */

void FUN_102925944(undefined8 param_1)

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
  plVar3[1] = 0x102925af8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1029259b4; end: 102925ad3;  */

void FUN_1029259b4(long param_1,long param_2)

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



/* Entry: 102925ad4; end: 102925ad7; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController defaultProjectNameV3] */

void FUN_102925ad4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102925ad8; end: 102925b03; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController defaultProjectNameV2] */

void FUN_102925ad8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102925b04; end: 102925b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925b04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd708) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102925b50; end: 102925b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925b50(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ecd708) = param_1;
  func_0x0001003336e4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102925b8c; end: 102925be7; -[_TtC24BlockedOrMutedUsersScope24BlockedOrMutedUsersScope init] */

void FUN_102925b8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BlockedOrMutedUsersScope.BlockedOrMutedUsersScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102925bb8);
  (*pcVar1)();
}



/* Entry: 102925be8; end: 102925bf7; -[_TtC24BlockedOrMutedUsersScope24BlockedOrMutedUsersScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ecd708));
  return;
}



/* Entry: 102925bf8; end: 102925c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925bf8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033cdb0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ecd740) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102925c64; end: 102925c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925c64(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033cdb0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd740) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102925c6c; end: 102925cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925c6c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd740) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102925cb8; end: 102925d3f; -[_TtC24BlockedOrMutedUsersScope40BlockedOrMutedUsersScopedFactoryServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 102925d40; end: 102925d9f; -[_TtC24BlockedOrMutedUsersScope40BlockedOrMutedUsersScopedFactoryServices init] */

void FUN_102925d40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BlockedOrMutedUsersScope.BlockedOrMutedUsersScopedFactoryServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102925d6c);
  (*pcVar1)();
}



/* Entry: 102925da0; end: 102925daf;  */

undefined1  [16] FUN_102925da0(void)

{
  return ZEXT816(0x11056d740);
}



/* Entry: 102925db0; end: 102925dbf; -[_TtC24BlockedOrMutedUsersScope40BlockedOrMutedUsersScopedFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925db0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecd740));
  return;
}



/* Entry: 102925dc0; end: 102925dd7; -[_TtC38CreatorMyFanPassManagementPageLauncher45CreatorMyFanPassManagementPageLauncherHandler payloadClass] */

void FUN_102925dc0(void)

{
  func_0x000103926e8c(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102925dd8; end: 102925ddb; -[_TtC38CreatorMyFanPassManagementPageLauncher45CreatorMyFanPassManagementPageLauncherHandler setPayloadClass:] */

void FUN_102925dd8(void)

{
  return;
}



/* Entry: 102925ddc; end: 102925e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102925ddc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  lVar1 = _DAT_112ecd770;
  func_0x000107c61614(unaff_x20 + _DAT_112ecd770,0);
  func_0x000107c61614(unaff_x20 + _DAT_112ecd778,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ecd780) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 102925e84; end: 1029262b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102925e84(undefined8 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  undefined8 uVar5;
  ulong **ppuVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long unaff_x20;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  iVar3 = (int)puVar4;
  func_0x000107c4a02c();
  if (iVar3 == 0) {
    pcVar8 = "launch(withPayload:completion:)";
    func_0x0001000c10c0("launch(withPayload:completion:)");
    func_0x000107c61180();
    puVar4 = &UNK_11056d7e8;
    func_0x000107c613fc(&UNK_11056d7e8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    func_0x000100672b50(param_1,&puStack_80);
    puVar9 = &UNK_11056d810;
    func_0x000107c613fc(&UNK_11056d810,0x48,7);
    *(undefined8 *)(puVar9 + 0x20) = uStack_78;
    *(ulong **)(puVar9 + 0x18) = puStack_80;
    *(undefined **)(puVar9 + 0x10) = puVar4;
    *(undefined8 *)(puVar9 + 0x30) = uStack_68;
    *(undefined8 *)(puVar9 + 0x28) = uStack_70;
    *(code **)(puVar9 + 0x38) = param_2;
    *(undefined8 *)(puVar9 + 0x40) = param_3;
    pcStack_90 = FUN_102926330;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_11056d828;
    ppuVar10 = &puStack_b0;
    puStack_88 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar4 = puStack_88;
    func_0x000100f1d248(param_2,param_3);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(pcVar8);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c615e8(pcVar8);
    return;
  }
  func_0x000100672b50(param_1,&puStack_b0);
  if (puStack_98 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_b0);
  }
  else {
    uVar5 = 0;
    func_0x000103926e8c(0);
    ppuVar6 = &puStack_80;
    func_0x000107c6147c(ppuVar6,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar5,6);
    puVar15 = puStack_80;
    lVar1 = _DAT_112ecd778;
    if (((ulong)ppuVar6 & 1) != 0) {
      lVar7 = unaff_x20 + _DAT_112ecd778;
      func_0x000107c61618();
      if (lVar7 == 0) {
        uVar11 = unaff_x20 + _DAT_112ecd770;
        func_0x000107c61618();
        if (uVar11 == 0) goto joined_r0x00010292613c;
        uVar12 = uVar11;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar11);
        if (uVar12 == 0) goto joined_r0x00010292613c;
        uVar11 = uVar12;
        func_0x000107c61150(uVar12,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_topmostViewController_11267b0f0);
        if ((uVar11 & 1) == 0) {
          func_0x000107c615e8(uVar12);
          goto joined_r0x00010292613c;
        }
        uVar11 = uVar12;
        func_0x000107c5cc6c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar12);
        puStack_b8 = PTR_DAT_1126a17b8;
        uVar12 = uVar11;
        func_0x000107c61494(uVar11,1,&puStack_b8);
        if (uVar12 == 0) {
          puVar13 = (ulong *)PTR_PTR_1126aead8;
          func_0x000107c610f8();
          func_0x000107c4807c();
          uVar5 = *(undefined8 *)((long)puVar15 + _DAT_112fb0548);
          func_0x000100386218(0);
          func_0x000107c610f8();
          func_0x000107c61174(uVar5);
          func_0x000107c61174();
          func_0x000107c61174();
          puVar14 = puVar13;
          func_0x0001039271e4();
          (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar14) + 0x90))
                    (*(undefined1 *)((long)puVar15 + _DAT_112fb0550));
          puStack_80 = puVar14;
          func_0x00010008a7c8(&puStack_b0,&puStack_80);
          func_0x000100083b20(&puStack_80);
          func_0x000107c61574(puStack_b0);
          puVar2 = puStack_80;
          func_0x000107c61604(unaff_x20 + lVar1,puStack_80);
          func_0x000107c61170(puVar2);
          if (param_2 == (code *)0x0) {
            func_0x000107c61170(puVar15);
            func_0x000107c61170(puVar14);
            puVar15 = puVar13;
LAB_1029262a8:
            func_0x000107c61170(puVar15);
            func_0x000107c61170(uVar11);
            return;
          }
          uStack_a8 = 0;
          puStack_b0 = (undefined *)0x0;
          puStack_98 = (undefined *)0x0;
          puStack_a0 = (undefined *)0x0;
          (*param_2)(0,&puStack_b0);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar15);
          puVar15 = puVar14;
        }
        else {
          if (param_2 == (code *)0x0) goto LAB_1029262a8;
          uStack_a8 = 0;
          puStack_b0 = (undefined *)0x0;
          puStack_98 = (undefined *)0x0;
          puStack_a0 = (undefined *)0x0;
          (*param_2)(0,&puStack_b0);
          func_0x000107c61170(uVar11);
        }
      }
      else {
        func_0x000107c61170();
joined_r0x00010292613c:
        if (param_2 == (code *)0x0) {
          func_0x000107c61170(puVar15);
          return;
        }
        uStack_a8 = 0;
        puStack_b0 = (undefined *)0x0;
        puStack_98 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
        (*param_2)(0,&puStack_b0);
      }
      func_0x000107c61170(puVar15);
      goto LAB_102926058;
    }
  }
  if (param_2 == (code *)0x0) {
    return;
  }
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  puStack_98 = (undefined *)0x0;
  puStack_a0 = (undefined *)0x0;
  (*param_2)(0,&puStack_b0);
LAB_102926058:
  func_0x00010006e7f4(&puStack_b0);
  return;
}



/* Entry: 1029262b8; end: 10292632f;  */

void FUN_1029262b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102925e84(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102926330; end: 10292635b;  */

void FUN_102926330(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    FUN_102925e84(unaff_x20 + 0x18,uVar1,uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10292635c; end: 10292642b; -[_TtC38CreatorMyFanPassManagementPageLauncher45CreatorMyFanPassManagementPageLauncherHandler launchWithPayload:completion:] */

void FUN_10292635c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_50);
    func_0x000107c615e8(param_3);
  }
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_11056d860;
    func_0x000107c613fc(&UNK_11056d860,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    uVar1 = 0x102926508;
  }
  FUN_102925e84(&uStack_50,uVar1,puVar2);
  func_0x000100f1d208(uVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_50);
  return;
}



/* Entry: 10292642c; end: 10292648b; -[_TtC38CreatorMyFanPassManagementPageLauncher45CreatorMyFanPassManagementPageLauncherHandler init] */

void FUN_10292642c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorMyFanPassManagementPageLauncher.CreatorMyFanPassManagementPageLauncherHandler"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102926458);
  (*pcVar1)();
}



/* Entry: 10292648c; end: 1029264d3; -[_TtC38CreatorMyFanPassManagementPageLauncher45CreatorMyFanPassManagementPageLauncherHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029264a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029264ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292648c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112ecd770);
  return;
}



/* Entry: 1029264d4; end: 1029264f3;  */

void FUN_1029264d4(void)

{
  func_0x000107c61168(&PTR_PTR_112870d50);
  return;
}



/* Entry: 1029264f4; end: 10292650f; -[_TtC38CreatorMyFanPassManagementPageLauncher45CreatorMyFanPassManagementPageLauncherHandler didDismissCreatorMyFanPassManagementScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029264f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112ecd778,0);
  return;
}



/* Entry: 102926510; end: 10292655b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102926510(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd7b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10292655c; end: 1029265eb; -[_TtC38CreatorMyFanPassManagementPageLauncher44CreatorMyFanPassManagementPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292655c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000100f1b134();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 3;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_1 + _DAT_112ecd7b0);
  func_0x000107c61174();
  uVar2 = 0x112d4bc28;
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1029265ec; end: 1029265ef; -[_TtC38CreatorMyFanPassManagementPageLauncher44CreatorMyFanPassManagementPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_1029265ec(void)

{
  return;
}



/* Entry: 1029265f0; end: 10292664f; -[_TtC38CreatorMyFanPassManagementPageLauncher44CreatorMyFanPassManagementPageLauncherPlugin init] */

void FUN_1029265f0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorMyFanPassManagementPageLauncher.CreatorMyFanPassManagementPageLauncherPlugin"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10292661c);
  (*pcVar1)();
}



/* Entry: 102926650; end: 10292665f; -[_TtC38CreatorMyFanPassManagementPageLauncher44CreatorMyFanPassManagementPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102926650(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecd7b0));
  return;
}



/* Entry: 102926660; end: 1029266df;  */

void FUN_102926660(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_11056d888;
  func_0x000107c613fc(&UNK_11056d888,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1029267e8,puVar1);
  return;
}



/* Entry: 1029266e0; end: 1029267e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029266e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_70;
  func_0x000100083b20(&uStack_48);
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar1 = 0;
  FUN_1029264d4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  lVar4 = _DAT_112ecd770;
  func_0x000107c61614(lVar2 + _DAT_112ecd770,0);
  func_0x000107c61614(lVar2 + _DAT_112ecd778,0);
  func_0x000107c61604(lVar2 + lVar4,param_2);
  *(undefined8 *)(lVar2 + _DAT_112ecd780) = uStack_50;
  plVar3 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x000107c61170();
  FUN_1029267f0();
  lVar4 = param_2;
  func_0x000107c610f8();
  *(long **)(lVar4 + _DAT_112ecd7b0) = plVar3;
  lStack_70 = lVar4;
  lStack_68 = param_2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 1029267e8; end: 1029267ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029267e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar6 = &lStack_70;
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010451338c();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  lVar2 = 0;
  FUN_1029264d4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar5 = _DAT_112ecd770;
  func_0x000107c61614(lVar3 + _DAT_112ecd770,0);
  func_0x000107c61614(lVar3 + _DAT_112ecd778,0);
  func_0x000107c61604(lVar3 + lVar5,lVar1);
  *(undefined8 *)(lVar3 + _DAT_112ecd780) = uStack_50;
  plVar4 = &lStack_60;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x000107c61170();
  FUN_1029267f0();
  lVar5 = lVar1;
  func_0x000107c610f8();
  *(long **)(lVar5 + _DAT_112ecd7b0) = plVar4;
  lStack_70 = lVar5;
  lStack_68 = lVar1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 1029267f0; end: 10292680f;  */

void FUN_1029267f0(void)

{
  func_0x000107c61168(&PTR_PTR_112870e20);
  return;
}



/* Entry: 102926810; end: 10292681f;  */

undefined1  [16] FUN_102926810(void)

{
  return ZEXT816(0x11056d8b0);
}



/* Entry: 102926820; end: 10292696b;  */

/* WARNING: Possible PIC construction at 0x0001029268f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102926904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102926914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102926924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102926934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102926944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102926938) */
/* WARNING: Removing unreachable block (ram,0x000102926928) */
/* WARNING: Removing unreachable block (ram,0x000102926918) */
/* WARNING: Removing unreachable block (ram,0x000102926908) */
/* WARNING: Removing unreachable block (ram,0x0001029268f8) */
/* WARNING: Removing unreachable block (ram,0x000102926948) */

void FUN_102926820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x68);
  puVar12 = &UNK_11056d9f0;
  func_0x000107c613fc(&UNK_11056d9f0,0x70,7);
  *(undefined8 *)(puVar12 + 0x10) = uVar1;
  *(undefined8 *)(puVar12 + 0x18) = uVar6;
  *(undefined8 *)(puVar12 + 0x20) = uVar13;
  *(undefined8 *)(puVar12 + 0x28) = uVar7;
  *(undefined8 *)(puVar12 + 0x30) = uVar2;
  *(undefined8 *)(puVar12 + 0x38) = uVar8;
  *(undefined8 *)(puVar12 + 0x40) = uVar3;
  *(undefined8 *)(puVar12 + 0x48) = uVar9;
  *(undefined8 *)(puVar12 + 0x50) = uVar4;
  *(undefined8 *)(puVar12 + 0x58) = uVar10;
  *(undefined8 *)(puVar12 + 0x60) = uVar5;
  *(undefined8 *)(puVar12 + 0x68) = uVar11;
  uVar13 = 0x112ecd7e8;
  func_0x0001000285a8(0x112ecd7e8,&UNK_10daf2ef0);
  func_0x000107c613fc();
  pcVar14 = FUN_1029269f8;
  func_0x0001000841fc(FUN_1029269f8,puVar12,uVar13);
  func_0x000100084214(&UNK_10daf2eb0,0x39,2);
  *param_1 = pcVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10292696c; end: 10292697b;  */

undefined1  [16] FUN_10292696c(void)

{
  return ZEXT816(0x11056d9d0);
}



/* Entry: 10292697c; end: 1029269f7;  */

void FUN_10292697c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1029269f8; end: 102926b17;  */

void FUN_1029269f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112ecd7f0,&UNK_10daf2ef8);
  puVar7 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec(puVar7);
  FUN_102929c94(uVar8,uVar3,uVar1,uVar4);
  func_0x000100082720("PaywallMediaProcessorServiceProvider",0x24,2);
  FUN_10292770c(uVar9,uVar5,uVar2,uVar8,uVar3,uVar6,uVar10,puVar7,uVar13,uVar14,uVar12);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(puVar7);
  func_0x000100082720("CreatorSubscriptionOnboardingViewControllerEntryPointProvider",0x3d,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102926b18; end: 102926b63;  */

void FUN_102926b18(undefined8 param_1)

{
  func_0x0001000285a8(0x112e412f8,&UNK_10da2fc60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102926bb8,param_1);
  return;
}



/* Entry: 102926b64; end: 102926bb7;  */

void FUN_102926b64(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_102926cac();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11056dae0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102926bb8; end: 102926bbf;  */

void FUN_102926bb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_102926cac();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11056dae0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102926bc0; end: 102926bef;  */

void FUN_102926bc0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102926bf0; end: 102926c13;  */

void FUN_102926bf0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102926c14; end: 102926c9b;  */

void FUN_102926c14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puStack_40 = &UNK_11056db98;
  ppuStack_38 = &PTR_DAT_11056db80;
  func_0x000104471544(&uStack_58,param_1,param_2,uVar1,uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x0001000834e4(&uStack_58);
  return;
}



/* Entry: 102926c9c; end: 102926cab;  */

undefined1  [16] FUN_102926c9c(void)

{
  return ZEXT816(0x11056db00);
}



/* Entry: 102926cac; end: 102926ccb;  */

void FUN_102926cac(void)

{
  func_0x000107c61168(&PTR_PTR_112ecd838);
  return;
}



/* Entry: 102926ccc; end: 102926d17;  */

void FUN_102926ccc(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea4e18,&UNK_10dab8020);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102926d7c,param_1);
  return;
}



/* Entry: 102926d18; end: 102926d7b;  */

void FUN_102926d18(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102926ec0();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11056db18;
  *param_1 = lVar1;
  return;
}



/* Entry: 102926d7c; end: 102926d83;  */

void FUN_102926d7c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102926ec0();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11056db18;
  *param_1 = lVar1;
  return;
}



/* Entry: 102926d84; end: 102926ddb;  */

void FUN_102926d84(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102926ddc; end: 102926dff;  */

void FUN_102926ddc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102926e00; end: 102926ea3;  */

void FUN_102926e00(void)

{
  undefined *puVar1;
  code *in_x3;
  undefined8 in_x5;
  undefined8 in_x6;
  long *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  puVar1 = &UNK_11056db58;
  func_0x000107c613fc(&UNK_11056db58,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = in_x5;
  *(undefined8 *)(puVar1 + 0x18) = in_x6;
  FUN_102927558(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(in_x6);
  FUN_102926f10(uVar2,FUN_102926ee0,puVar1);
  (*in_x3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102926ea4; end: 102926ebf;  */

undefined ** FUN_102926ea4(void)

{
  return &PTR_DAT_112f36740;
}



/* Entry: 102926ec0; end: 102926edf;  */

void FUN_102926ec0(void)

{
  func_0x000107c61168(&PTR_PTR_112ecd8f0);
  return;
}



/* Entry: 102926ee0; end: 102926f0f;  */

void FUN_102926ee0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 102926f10; end: 10292702f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102926f10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd978) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ecd970);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c6157c(param_3);
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c61154(puVar3,puVar2,0,0);
  func_0x00010035c24c(0);
  func_0x000107c610f8();
  puVar4 = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000103927a00();
  puStack_60 = puVar3;
  func_0x00010008a7c8(&uStack_58,&puStack_60);
  func_0x000107c61170(puVar3);
  func_0x000100083b20(&puStack_60);
  func_0x000107c61574(uStack_58);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_3);
  uVar5 = *(undefined8 *)(puVar4 + _DAT_112ecd978);
  *(undefined1 **)(puVar4 + _DAT_112ecd978) = puStack_60;
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar5);
  return puVar4;
}



/* Entry: 102927030; end: 102927093; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102927030(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ecd978) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "CreatorSubscriptionOnboardingImplementation/CreatorSubscriptionOnboardingDevelopmentViewController.swift"
                      ,0x68,2,0x1b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102927094);
  (*pcVar1)();
}



/* Entry: 102927094; end: 102927493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102927094(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd978);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c3d614();
    lVar3 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10292746c);
      (*pcVar1)();
    }
    func_0x000107c5a050();
    func_0x000107c61170(lVar3);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927470);
      (*pcVar1)();
    }
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927474);
      (*pcVar1)();
    }
    func_0x000107c3d89c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    lVar3 = 0x112d360b8;
    func_0x0001029275b8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                        &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927478);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10292747c);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(lVar3 + 0x20) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927480);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927484);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(lVar3 + 0x28) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927488);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10292748c);
      (*pcVar1)();
    }
    lVar6 = lVar4;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    *(long *)(lVar3 + 0x30) = lVar4;
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927490);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102927494);
      (*pcVar1)();
    }
    puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = unaff_x20;
    func_0x000107c5ce8c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    lVar6 = lVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    *(long *)(lVar3 + 0x38) = lVar6;
    uVar8 = 0;
    FUN_102927630(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar8);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar7);
    func_0x000107c61170(lVar4);
    func_0x000107c41c30(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102927494; end: 1029274bb; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController viewDidLoad] */

void FUN_102927494(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102927094();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029274bc; end: 10292751b; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController initWithNibName:bundle:] */

void FUN_1029274bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorSubscriptionOnboardingImplementation.CreatorSubscriptionOnboardingDevelopmentViewController"
                      ,0x62,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029274e8);
  (*pcVar1)();
}



/* Entry: 10292751c; end: 102927557; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292751c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecd970 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecd978));
  return;
}



/* Entry: 102927558; end: 102927577;  */

void FUN_102927558(void)

{
  func_0x000107c61168(&PTR_PTR_112870ee0);
  return;
}



/* Entry: 102927578; end: 10292762f; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController didDismissCreatorSubscriptionOnboardingScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102927578(long param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + _DAT_112ecd970);
  func_0x000107c61174();
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102927630; end: 10292766f;  */

void FUN_102927630(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102927670; end: 102927673; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController childViewControllerForStatusBarHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102927670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecd978));
  return;
}



/* Entry: 102927674; end: 102927677; -[_TtC43CreatorSubscriptionOnboardingImplementation54CreatorSubscriptionOnboardingDevelopmentViewController childViewControllerForStatusBarStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102927674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ecd978));
  return;
}



/* Entry: 102927678; end: 102927703;  */

void FUN_102927678(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e7a318;
  func_0x0001000285a8(0x112e7a318,&UNK_10da84650);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102927704; end: 10292770b;  */

void FUN_102927704(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e7a318;
  func_0x0001000285a8(0x112e7a318,&UNK_10da84650);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10292770c; end: 1029279db;  */

void FUN_10292770c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056dbc8;
  func_0x000107c613fc(&UNK_11056dbc8,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(FUN_1029279dc,puVar1);
  return;
}



/* Entry: 1029279dc; end: 102927a17;  */

void FUN_1029279dc(void)

{
  long unaff_x20;
  
  func_0x000102927834(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102927a18; end: 102927b53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102927a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9d8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9e0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9e8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9f0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd9f8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ecda00) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ecda08) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ecda10) = param_11;
  func_0x000107c61154(auStack_70,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 102927b54; end: 102927bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102927b54(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecd9b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd9b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c30a40();
    func_0x000107c61180();
    func_0x000107c53224();
    func_0x000107c54b74(0x3ff0000000000000,lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0(lVar2);
    func_0x000107c615e8(uVar4);
    lVar3 = 0;
  }
  func_0x000107c615f0(lVar3);
  return lVar2;
}



/* Entry: 102927bd4; end: 102927bdb; -[_TtC43CreatorSubscriptionOnboardingImplementation43CreatorSubscriptionOnboardingViewController modalPresentationStyle] */

undefined8 FUN_102927bd4(void)

{
  return 0;
}


