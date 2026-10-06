/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10116d2bc; end: 10116d397;  */

void FUN_10116d2bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c3e48c();
  if (puVar2 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010116d304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar2 == (undefined *)0x3);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10116d398;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,0);
  uVar4 = 0x112d60cb0;
  func_0x0001000285a8(0x112d60cb0,&UNK_10d927110);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10116ac28;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110389618;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c50328(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10116d398; end: 10116d3d7;  */

void FUN_10116d398(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10116d3d8,0,0);
  return;
}



/* Entry: 10116d3d8; end: 10116d3eb;  */

void FUN_10116d3d8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010116d3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(long *)(unaff_x22 + 0x90) == 3);
  return;
}



/* Entry: 10116d3ec; end: 10116d48b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116d3ec(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d60c18);
  lVar2 = lVar1;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = _DAT_112eb7950;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d60c08);
  func_0x000107c61428(lVar2 + _DAT_112eb7950,auStack_38,0,0);
  lVar2 = lVar2 + lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c4c3dc();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 10116d48c; end: 10116d4b3;  */

undefined1  [16] FUN_10116d48c(void)

{
  return ZEXT816(0x110389458);
}



/* Entry: 10116d4b4; end: 10116d4eb;  */

void FUN_10116d4b4(undefined8 param_1)

{
  if (lRam0000000112d60c58 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e624938);
  return;
}



/* Entry: 10116d4ec; end: 10116d58b;  */

void FUN_10116d4ec(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_68 = &UNK_10d9270a0;
  puStack_60 = &UNK_10d9270a0;
  lVar2 = 0x13f;
  puStack_90 = puVar1;
  puStack_88 = puVar1;
  puStack_80 = puVar1;
  puStack_78 = puVar1;
  puStack_70 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar2 + -8) + 0x40;
    puStack_50 = &UNK_10d9270a0;
    puStack_48 = &UNK_10d9270a0;
    puStack_40 = &UNK_10d9270a0;
    puStack_38 = puVar1;
    func_0x000107c61630(param_1,0x100,0xc,&puStack_90,param_1 + 0x50);
  }
  return;
}



/* Entry: 10116d58c; end: 10116d5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116d58c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d60bd8);
  *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d60bd8) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  FUN_10116b634();
  return;
}



/* Entry: 10116d5a4; end: 10116d5f3;  */

void FUN_10116d5a4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10116d824;
  plVar5[2] = lVar3;
  plVar5[3] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[4] = lVar3;
  uVar4 = 0x112d45220;
  func_0x00010026626c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10116c5b8,lVar2,uVar4);
  return;
}



/* Entry: 10116d5f4; end: 10116d663;  */

void FUN_10116d5f4(undefined8 param_1)

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
  plVar3[1] = 0x10116d820;
  FUN_100f7cc44(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10116d664; end: 10116d6bb;  */

void FUN_10116d664(void)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10116d6bc;
  plVar2[5] = lVar3;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  plVar2[6] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x10116aeb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10116d2bc,0,0);
  return;
}



/* Entry: 10116d6bc; end: 10116d6f7;  */

void FUN_10116d6bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010116d6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10116d6f8; end: 10116d6ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116d6f8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112d60bd8) == 0) {
      FUN_10116b378();
    }
    FUN_10116aca4();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10116d700; end: 10116d77f;  */

void FUN_10116d700(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10116d780; end: 10116d797;  */

long FUN_10116d780(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10116d798; end: 10116d7e7;  */

void FUN_10116d798(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d60cb8 != 0) {
    return;
  }
  puVar1 = &UNK_110389650;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d60cb8 = param_1;
  return;
}



/* Entry: 10116d7e8; end: 10116d827;  */

void FUN_10116d7e8(long param_1,long param_2)

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



/* Entry: 10116d828; end: 10116da27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116d828(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000104ec68a8(*(undefined8 *)(unaff_x20 + _DAT_112d60cc8),1);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  puVar3 = PTR_PTR_1126cb708;
  func_0x000107c610f8(PTR_PTR_1126cb708);
  func_0x000107c453e4();
  func_0x000107c5ee8c(_DAT_112d60cc0);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10116d924);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10116d928);
    (*pcVar1)();
  }
  if (param_1 < 9.223372036854776e+18) {
    func_0x000107c52bd0(puVar3);
    func_0x000107c52194(puVar3);
    func_0x000107c4bfb0(lVar2);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116d92c);
  (*pcVar1)();
}



/* Entry: 10116da28; end: 10116db2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116da28(double param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if ((param_2 & 1) == 0) {
    if (*(long *)(unaff_x20 + _DAT_112d60cc8) != 0) {
      plVar2 = *(long **)(*(long *)(unaff_x20 + _DAT_112d60cc8) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110858670,&uStack_40,1);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
    return;
  }
  func_0x000107c5ee84(_DAT_112d60cc0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10116dac4);
    (*pcVar1)();
  }
  if (9.223372036854778e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10116dac8);
    (*pcVar1)();
  }
  if (-9.223372036854776e+18 < param_1) {
    if (*(long *)(unaff_x20 + _DAT_112d60cc8) != 0) {
      plVar2 = *(long **)(*(long *)(unaff_x20 + _DAT_112d60cc8) + 8);
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110858620,&uStack_40,(long)-param_1);
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x00010007e5dc(&puStack_28);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116dacc);
  (*pcVar1)();
}



/* Entry: 10116db30; end: 10116db37;  */

void FUN_10116db30(void)

{
  if (lRam0000000112d60cf8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6249ac);
  return;
}



/* Entry: 10116db38; end: 10116db6f;  */

void FUN_10116db38(undefined8 param_1)

{
  if (lRam0000000112d60cf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6249ac);
  return;
}



/* Entry: 10116db70; end: 10116dbeb;  */

void FUN_10116db70(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_38 = puVar1;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 10116dbec; end: 10116dc2f;  */

undefined1  [16] FUN_10116dbec(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x745f72656e6e6162;
  func_0x000107c5fadc(0x745f72656e6e6162,0xec000000656c7469);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef28c10);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116dce0);
  (*pcVar1)();
}



/* Entry: 10116dc30; end: 10116dddb;  */

undefined1  [16] FUN_10116dc30(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef28c10);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116dce0);
  (*pcVar1)();
}



/* Entry: 10116dddc; end: 10116e36b;  */

/* WARNING: Possible PIC construction at 0x00010116e314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e0c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116e318) */
/* WARNING: Removing unreachable block (ram,0x00010116e0cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116dddc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_120 [4];
  undefined *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [32];
  
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = _DAT_112d60de0;
  lVar5 = -extraout_x8;
  lVar7 = (long)&puStack_100 + lVar5;
  if ((((*(byte *)(unaff_x20 + _DAT_112d60de0) & 1) == 0) &&
      (lVar11 = *(long *)(unaff_x20 + _DAT_112d60d98), lVar11 != 0)) &&
     (lVar14 = *(long *)(unaff_x20 + _DAT_112d60da0), lVar14 != 0)) {
    puVar3 = PTR_PTR_1126b1e08;
    func_0x000107c61168();
    lVar10 = *(long *)(unaff_x20 + _DAT_112d60d90);
    puVar1 = (undefined8 *)(lVar10 + _DAT_112eb2070);
    uVar16 = *puVar1;
    uVar17 = puVar1[1];
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112d60db8);
    func_0x000107c615f0(lVar14);
    func_0x000107c61174();
    *(undefined8 *)((long)auStack_120 + lVar5 + 0x10) = 0;
    *(undefined8 *)((long)auStack_120 + lVar5 + 0x18) = 0;
    *(undefined8 *)((long)auStack_120 + lVar5 + 8) = 0;
    *(undefined8 *)((long)auStack_120 + lVar5) = uVar18;
    func_0x000107c3f0e4(uVar16,uVar17,0x4030400000000000,0,0);
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61170(lVar11);
    }
    else {
      *(undefined1 *)(unaff_x20 + lVar6) = 1;
      puVar4 = puVar3;
      lStack_e0 = lVar11;
      func_0x000109021ac8();
      if (((ulong)puVar4 & 1) == 0) {
        FUN_10116ec08();
        func_0x000107c5eea0(lVar7);
        lVar5 = 0;
        func_0x000107c5eea4();
        (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar7,0,1,lVar5);
        lVar5 = _DAT_112d60e28;
        func_0x000107c61428(unaff_x20 + _DAT_112d60e28,&puStack_d0,0x21,0);
        func_0x000100ed9cbc(lVar7,unaff_x20 + lVar5);
        func_0x000107c614a8(&puStack_d0);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_112d60db0);
      if (lVar5 != 0) {
        func_0x000107c44120();
        func_0x000107c61180();
      }
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d60dc0);
      *(long *)(unaff_x20 + _DAT_112d60dc0) = lVar5;
      func_0x000107c61170(uVar16);
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d60dd8);
      *(undefined **)(unaff_x20 + _DAT_112d60dd8) = puVar3;
      func_0x000107c61174();
      func_0x000107c61170(uVar16);
      lVar5 = lStack_e0;
      lVar6 = lStack_e0;
      func_0x000107c3f140();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c49cd8();
      func_0x000107c61170(lVar6);
      puStack_100 = puVar3;
      if ((int)lVar7 == 0) {
        func_0x000107c4c458();
        func_0x000107c61180();
        func_0x000107c3f040();
        func_0x000107c61180();
        lVar14 = lVar5;
      }
      else {
        func_0x000107c3f140();
        func_0x000107c61180();
        lVar6 = lVar5;
        func_0x000107c43f60();
        func_0x000107c61180();
        func_0x000107c61170(lVar5);
        uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d60dd0);
        *(long *)(unaff_x20 + _DAT_112d60dd0) = lVar6;
        func_0x000107c61170(uVar16);
        FUN_10116e684();
        uVar13 = *(ulong *)(lVar10 + _DAT_112eb2080);
        uStack_f8 = param_1;
        lStack_f0 = lVar14;
        uStack_e8 = param_2;
        if (uVar13 >> 0x3e == 0) {
          uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar15 = uVar13 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar15 = uVar13;
          }
          func_0x000107c60480();
        }
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar15 != 0) {
          puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000107c61434(uVar13);
          func_0x000100403514(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10116e36c);
            (*pcVar2)();
          }
          uVar12 = 0;
          do {
            puVar3 = puStack_d0;
            if ((uVar13 & 0xc000000000000001) == 0) {
              uVar8 = *(ulong *)(uVar13 + uVar12 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar8 = uVar12;
              FUN_10111c5a8(uVar12,uVar13);
            }
            puVar1 = (undefined8 *)(uVar8 + _DAT_112fcd610);
            func_0x000107c61428(puVar1,auStack_a0,0,0);
            uVar16 = *puVar1;
            uVar17 = puVar1[1];
            func_0x000107c61434(uVar17);
            func_0x000107c61170(uVar8);
            uVar8 = *(ulong *)(puVar3 + 0x10);
            puStack_d0 = puVar3;
            if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar8) {
              func_0x000100403514(1 < *(ulong *)(puVar3 + 0x18),uVar8 + 1,1);
            }
            puVar3 = puStack_d0;
            uVar12 = uVar12 + 1;
            *(ulong *)(puStack_d0 + 0x10) = uVar8 + 1;
            *(undefined8 *)(puStack_d0 + uVar8 * 0x10 + 0x20) = uVar16;
            *(undefined8 *)(puStack_d0 + uVar8 * 0x10 + 0x28) = uVar17;
          } while (uVar15 != uVar12);
          func_0x000107c6142c(uVar13);
        }
        puVar4 = puVar3;
        func_0x000107c5fc48(puVar3,PTR___sSSN_11034da80);
        func_0x000107c6142c(puVar3);
        lVar14 = lStack_f0;
        func_0x000107c56294(lStack_f0);
        func_0x000107c61170(puVar4);
        lVar5 = lStack_e0;
        lVar6 = lStack_e0;
        func_0x000107c4c458(lStack_e0);
        func_0x000107c61180();
        puVar3 = &UNK_110389890;
        func_0x000107c613fc(&UNK_110389890,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,unaff_x20);
        puVar4 = &UNK_110389958;
        func_0x000107c613fc(&UNK_110389958,0x28,7);
        uVar16 = uStack_e8;
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined8 *)(puVar4 + 0x18) = uStack_f8;
        *(undefined8 *)(puVar4 + 0x20) = uStack_e8;
        pcStack_b0 = FUN_10116f938;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        puStack_c0 = &UNK_1000f6b44;
        puStack_b8 = &UNK_110389970;
        ppuVar9 = &puStack_d0;
        puStack_a8 = puVar4;
        func_0x000107c60bc4(ppuVar9);
        puVar3 = puStack_a8;
        func_0x000107c6157c(uVar16);
        func_0x000107c61574(puVar3);
        func_0x000107c52fa8(0,lVar6);
        func_0x000107c60bd0(ppuVar9);
        func_0x000107c61170(lVar5);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar14);
    return;
  }
  return;
}



/* Entry: 10116e36c; end: 10116e3db;  */

void FUN_10116e36c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_10116e768(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10116e3dc; end: 10116e683;  */

/* WARNING: Possible PIC construction at 0x00010116e4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e48c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116e62c) */
/* WARNING: Removing unreachable block (ram,0x00010116e658) */
/* WARNING: Removing unreachable block (ram,0x00010116e588) */
/* WARNING: Removing unreachable block (ram,0x00010116e634) */
/* WARNING: Removing unreachable block (ram,0x00010116e578) */
/* WARNING: Removing unreachable block (ram,0x00010116e518) */
/* WARNING: Removing unreachable block (ram,0x00010116e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010116e5e0) */
/* WARNING: Removing unreachable block (ram,0x00010116e638) */
/* WARNING: Removing unreachable block (ram,0x00010116e5f0) */
/* WARNING: Removing unreachable block (ram,0x00010116e4d0) */
/* WARNING: Removing unreachable block (ram,0x00010116e5bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116e3dc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  if (*(long *)(unaff_x20 + _DAT_112d60dc0) == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112d60da0);
    if (lVar3 != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112d60d90);
      puVar1 = (undefined8 *)(lVar5 + _DAT_112eb2078);
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      func_0x000107c61434(uVar2);
      func_0x000107c5fadc(uVar4,uVar2);
      func_0x000107c6142c(uVar2);
      puVar1 = (undefined8 *)(lVar5 + _DAT_112eb2070);
      func_0x000107c54ab4(*puVar1,puVar1[1],lVar3);
      goto code_r0x000107c61170;
    }
  }
  else {
    func_0x000107c56200(*(undefined8 *)(unaff_x20 + _DAT_112d60db0));
  }
  if (*(long *)(unaff_x20 + _DAT_112d60d98) == 0) {
    func_0x000107c4ff34(*(undefined8 *)(unaff_x20 + _DAT_112d60e18));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + _DAT_112d60e10),PTR_s_removeFromSuperview_112628c78);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d60dd8);
  *(undefined8 *)(unaff_x20 + _DAT_112d60dd8) = 0;
  func_0x000107c61174();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 10116e684; end: 10116e767;  */

/* WARNING: Possible PIC construction at 0x00010116e6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116e72c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116e6d0) */
/* WARNING: Removing unreachable block (ram,0x00010116e6d4) */
/* WARNING: Removing unreachable block (ram,0x00010116e730) */
/* WARNING: Removing unreachable block (ram,0x00010116e73c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116e684(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d60d98);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c3f140();
    func_0x000107c61180();
    func_0x000107c49cd8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10116e768; end: 10116e887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116e768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar2 = &UNK_110389890;
  func_0x000107c613fc(&UNK_110389890,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110389908;
  func_0x000107c613fc(&UNK_110389908,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  uStack_50 = 0x10116f900;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100fef460;
  puStack_58 = &UNK_110389920;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c51924(0x3fc999999999999a);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d60de8);
  *(undefined **)(unaff_x20 + _DAT_112d60de8) = puVar1;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10116e888; end: 10116e9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116e888(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(char *)(param_2 + _DAT_112d60de0) == '\x01') &&
       (*(long *)(param_2 + _DAT_112d60df8) < 0xf)) {
      *(long *)(param_2 + _DAT_112d60df8) = *(long *)(param_2 + _DAT_112d60df8) + 1;
      lVar2 = *(long *)(param_2 + _DAT_112d60da8);
      if (lVar2 != 0) {
        lVar1 = 0x112d38280;
        func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
        func_0x000107c61538();
        func_0x000107c61174(lVar2);
        func_0x000107c61174(param_2);
        func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
        func_0x000107c43f14(lVar2);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_2);
        param_2 = lVar1;
      }
    }
    else {
      FUN_10116e9b0(param_3,param_4);
    }
    func_0x000107c61170(param_2);
    return;
  }
  return;
}



/* Entry: 10116e9b0; end: 10116ec07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116e9b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar2 = _DAT_112d60de8;
  ppuVar7 = &puStack_70;
  func_0x000107c498f8(*(undefined8 *)(unaff_x20 + _DAT_112d60de8));
  uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d60dd8);
  if (lVar2 != 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112d60d98);
    if (lVar8 != 0) {
      func_0x000107c61174();
      func_0x000107c61174(lVar8);
      FUN_10116e684();
      lVar3 = lVar8;
      func_0x000107c4c458(lVar8);
      func_0x000107c61180();
      func_0x000107c52fa8(0);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar8);
      func_0x000107c615e8(lVar3);
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  puVar5 = &UNK_110389890;
  func_0x000107c613fc(&UNK_110389890,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1103898b8;
  func_0x000107c613fc(&UNK_1103898b8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  uStack_50 = 0x10116f8f4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100fef460;
  puStack_58 = &UNK_1103898d0;
  puStack_48 = puVar6;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar5);
  func_0x000107c51924(0x3ff8000000000000);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d60df0);
  *(undefined **)(unaff_x20 + _DAT_112d60df0) = puVar4;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10116ec08; end: 10116efa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116ec08(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar1 = _DAT_112d60e10;
  ppuVar10 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  lVar12 = *(long *)(unaff_x20 + _DAT_112d60d98);
  if (lVar12 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d60e10);
    func_0x000107c61174(uVar4);
    func_0x000107c61174(lVar12);
    lVar13 = lVar12;
    FUN_10116f018();
    func_0x000107c55258(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar13);
    lVar13 = *(long *)(unaff_x20 + _DAT_112d60e08);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10116efa8);
      (*pcVar3)();
    }
    func_0x000107c3d89c();
    func_0x000107c61170(lVar13);
    lVar13 = _DAT_112d60e18;
    func_0x000107c3d89c(*(undefined8 *)(unaff_x20 + lVar1));
    lVar2 = _DAT_112d60e20;
    func_0x000107c3d89c(*(undefined8 *)(unaff_x20 + lVar1));
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d60e00));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c438d4(lVar12);
    func_0x000107c54b80(uVar4);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c61174(uVar4);
    func_0x000107c438d4(lVar12);
    func_0x000107c54b80(uVar4);
    func_0x000107c61170(uVar4);
    puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168();
    puVar6 = puVar5;
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar6 + 0x18) = 5;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c3f75c(uVar8);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(puVar6 + 0x20) = uVar4;
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar13);
    func_0x000107c3f764(uVar8);
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c40284(0xc049000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    *(undefined8 *)(puVar6 + 0x28) = uVar4;
    uVar4 = 0;
    FUN_10116f898(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    puVar9 = puVar6;
    func_0x000107c5fc48(puVar6,uVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c3d048(puVar5);
    func_0x000107c61170(puVar9);
    puVar9 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_1103897f0;
    func_0x000107c613fc(&UNK_1103897f0,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_10116f8d8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110389808;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_110389840;
    func_0x000107c613fc(&UNK_110389840,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    pcStack_80 = (code *)0x10116f8e0;
    puStack_a0 = puVar6;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100288f10;
    puStack_88 = &UNK_110389858;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61574(puVar5);
    func_0x000107c3dcd0(0x3fc999999999999a,puVar9);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar12);
  }
  return;
}



/* Entry: 10116efa8; end: 10116f017;  */

/* WARNING: Possible PIC construction at 0x00010116f004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116f008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116efa8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d60e18);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c61174(uVar2);
  func_0x000107c42448(puVar1,param_2,1);
  func_0x000107c61180();
  func_0x000107c54418(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10116f018; end: 10116f3b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10116f018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d60d98);
  if (lVar2 == 0) {
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return puVar7;
  }
  func_0x000107c61174();
  func_0x000107c438d4();
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486f8(param_3,param_4);
  puVar7 = &UNK_110389778;
  func_0x000107c613fc(&UNK_110389778,0x18,7);
  *(long *)(puVar7 + 0x10) = lVar2;
  puVar4 = &UNK_1103897a0;
  func_0x000107c613fc(&UNK_1103897a0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10116f830;
  *(undefined **)(puVar4 + 0x18) = puVar7;
  uStack_70 = 0x10116f85c;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100f9148c;
  puStack_78 = &UNK_1103897b8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c61174(lVar2);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar3;
  func_0x000107c45138(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5c,0xec,0x51,1);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116f1d8);
  (*pcVar1)();
}



/* Entry: 10116f3b8; end: 10116f417; -[_TtC25MapSnapshotImplementation23MapScreenshotController init] */

void FUN_10116f3b8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSnapshotImplementation.MapScreenshotController",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116f3e4);
  (*pcVar1)();
}



/* Entry: 10116f418; end: 10116f54f; -[_TtC25MapSnapshotImplementation23MapScreenshotController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010116f434: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f4a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f524: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116f508) */
/* WARNING: Removing unreachable block (ram,0x00010116f4e8) */
/* WARNING: Removing unreachable block (ram,0x00010116f4c8) */
/* WARNING: Removing unreachable block (ram,0x00010116f4a8) */
/* WARNING: Removing unreachable block (ram,0x00010116f488) */
/* WARNING: Removing unreachable block (ram,0x00010116f468) */
/* WARNING: Removing unreachable block (ram,0x00010116f438) */
/* WARNING: Removing unreachable block (ram,0x00010116f528) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116f418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d60d90));
  return;
}



/* Entry: 10116f550; end: 10116f6cf;  */

/* WARNING: Possible PIC construction at 0x00010116f5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f5e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116f660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116f5e4) */
/* WARNING: Removing unreachable block (ram,0x00010116f608) */
/* WARNING: Removing unreachable block (ram,0x00010116f60c) */
/* WARNING: Removing unreachable block (ram,0x00010116f654) */
/* WARNING: Removing unreachable block (ram,0x00010116f610) */
/* WARNING: Removing unreachable block (ram,0x00010116f5b4) */
/* WARNING: Removing unreachable block (ram,0x00010116f5b8) */
/* WARNING: Removing unreachable block (ram,0x00010116f63c) */
/* WARNING: Removing unreachable block (ram,0x00010116f5cc) */
/* WARNING: Removing unreachable block (ram,0x00010116f634) */
/* WARNING: Removing unreachable block (ram,0x00010116f664) */
/* WARNING: Removing unreachable block (ram,0x00010116f638) */

void FUN_10116f550(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 1) {
LAB_10116f57c:
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10116f6d0);
          (*pcVar1)();
        }
        uVar2 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107c61174(uVar2);
      }
      else {
        uVar2 = 0;
        FUN_101170d9c(0,param_1);
      }
      func_0x000107c42e38();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    uVar3 = uVar4;
    func_0x000107c60480();
    if ((uVar3 == 1) && (func_0x000107c60480(), uVar4 != 0)) goto LAB_10116f57c;
  }
  return;
}



/* Entry: 10116f6d0; end: 10116f737; -[_TtC25MapSnapshotImplementation23MapScreenshotController onBasemapFeaturesCaptured:] */

void FUN_10116f6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10116f898(0,0x112d60e70,&PTR_PTR_1126d5650);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_10116f550(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10116f738; end: 10116f73f;  */

void FUN_10116f738(void)

{
  if (lRam0000000112d60e60 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e624a00);
  return;
}



/* Entry: 10116f740; end: 10116f777;  */

void FUN_10116f740(undefined8 param_1)

{
  if (lRam0000000112d60e60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e624a00);
  return;
}



/* Entry: 10116f778; end: 10116f87b;  */

void FUN_10116f778(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_c0 = &UNK_10d927218;
  puStack_b8 = &UNK_10d927218;
  puStack_b0 = &UNK_10d927218;
  puStack_a0 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_a8 = &UNK_10d927218;
  puStack_98 = &UNK_10d927218;
  puStack_90 = &UNK_10d927218;
  puStack_88 = &UNK_10d927218;
  puStack_80 = &UNK_10d927218;
  puStack_78 = &UNK_10d927230;
  puStack_70 = &UNK_10d927218;
  puStack_68 = &UNK_10d927218;
  lVar2 = 0x13f;
  puStack_c8 = puVar1;
  puStack_60 = puStack_a0;
  puStack_58 = puVar1;
  puStack_50 = puVar1;
  puStack_48 = puVar1;
  puStack_40 = puVar1;
  puStack_38 = puVar1;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    func_0x000107c61630(param_1,0x100,0x15,&puStack_c8,param_1 + 0x50);
  }
  return;
}



/* Entry: 10116f87c; end: 10116f897;  */

void FUN_10116f87c(long param_1,long param_2)

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



/* Entry: 10116f898; end: 10116f8d7;  */

void FUN_10116f898(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10116f8d8; end: 10116f90b;  */

/* WARNING: Possible PIC construction at 0x00010116f004: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116f008) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116f8d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d60e18);
  puVar1 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c61174(uVar2);
  func_0x000107c42448(puVar1,param_2,1);
  func_0x000107c61180();
  func_0x000107c54418(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10116f90c; end: 10116f937;  */

void FUN_10116f90c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10116f938; end: 10116f96b;  */

void FUN_10116f938(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10116e768(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10116f96c; end: 10116fe5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116f96c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_90;
  
  puVar3 = PTR_PTR_1126afee0;
  func_0x000107c610f8();
  uVar4 = 0x70616e735f70616d;
  func_0x000107c5fadc(0x70616e735f70616d,0xec000000746f6873);
  func_0x000107c46120();
  func_0x000107c61170(uVar4);
  if (puVar3 != (undefined *)0x0) {
    puVar10 = PTR_PTR_1126bf720;
    func_0x000107c61168(PTR_PTR_1126bf720);
    func_0x000107c4c860();
    uVar4 = param_1;
    func_0x000107c56498(puVar3);
    func_0x000107c51820(param_3);
    func_0x000107c308b0(param_1,param_2,uVar4);
    func_0x000107c56484(puVar3);
    func_0x000107c4c860(puVar10);
    func_0x000107c308b4();
    func_0x000107c563f0(puVar3);
    func_0x000107c54d18(puVar3);
    func_0x000107c5947c(puVar3);
    func_0x000107c59428(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c59474(puVar3);
    func_0x000107c61170(uVar4);
    uVar12 = *(ulong *)(unaff_x20 + 0x10);
    uVar11 = uVar12 & 0xffffffffffffff8;
    if (uVar12 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar13 = uVar11;
      if (0x7fffffffffffffff < uVar12) {
        uVar13 = uVar12;
      }
      func_0x000107c60480();
    }
    puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = 0;
    if (uVar13 != 0) {
      do {
        while( true ) {
          if ((uVar12 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar11 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10116fe4c);
              (*pcVar2)();
            }
            uVar8 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar8 = uVar14;
            FUN_10111c5a8(uVar14,uVar12);
          }
          uVar1 = uVar14 + 1;
          if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10116fe48);
            (*pcVar2)();
          }
          lVar5 = *(long *)(uVar8 + _DAT_112fcd610);
          func_0x000107c5fadc(lVar5,((long *)(uVar8 + _DAT_112fcd610))[1]);
          if (((undefined8 *)(uVar8 + _DAT_112fcd620))[1] == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined8 *)(uVar8 + _DAT_112fcd620);
            func_0x000107c5fadc(uVar4);
          }
          lVar7 = lVar5;
          func_0x000108ef83a4(lVar5,uVar4);
          func_0x000107c61180();
          func_0x000107c61170(lVar5);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar8);
          uVar14 = uVar14 + 1;
          if (lVar7 != 0) break;
          if (uVar13 == uVar14) goto LAB_10116fac4;
        }
        puVar10 = puStack_90;
        func_0x000107c61550();
        if ((((int)puVar10 == 0) || ((long)puStack_90 < 0)) ||
           (puVar10 = puStack_90, ((ulong)puStack_90 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_90 >> 0x3e == 0) {
            puVar9 = *(undefined **)(((ulong)puStack_90 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar9 = (undefined *)((ulong)puStack_90 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_90) {
              puVar9 = puStack_90;
            }
            func_0x000107c60480(puVar9);
          }
          puVar10 = (undefined *)0x0;
          FUN_10117000c(0,puVar9 + 1,1,puStack_90);
        }
        uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar14 = *(ulong *)(uVar8 + 0x10);
        puStack_90 = puVar10;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar14) {
          puStack_90 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_10117000c(puStack_90,uVar14 + 1,1,puVar10);
          uVar8 = (ulong)puStack_90 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar8 + 0x10) = uVar14 + 1;
        *(long *)(uVar8 + uVar14 * 8 + 0x20) = lVar7;
        uVar14 = uVar1;
      } while (uVar13 != uVar1);
    }
LAB_10116fac4:
    uVar4 = 0;
    func_0x000101170270(0,0x112d60fb0,&PTR_PTR_1126b3568);
    puVar10 = puStack_90;
    func_0x000107c5fc48(puStack_90,uVar4);
    func_0x000107c6142c(puStack_90);
    func_0x000107c576e8(puVar3);
    func_0x000107c61170(puVar10);
    puVar10 = PTR_PTR_1126c20c0;
    func_0x000107c610f8(PTR_PTR_1126c20c0);
    func_0x000107c48400(0,0x3ff0000000000000,0,0,param_1,param_2);
    func_0x000107c53b6c(puVar3);
    func_0x000107c61170(puVar10);
    lVar5 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c44084();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c549c8(puVar3);
      func_0x000107c615e8(lVar5);
    }
    func_0x000107c3fe58(puVar3);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c42d48(uVar6);
    func_0x000107c61180();
    puVar10 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    func_0x000107c5d19c();
    func_0x000107c61180();
    uVar4 = uVar6;
    func_0x000107c42424(uVar6);
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(puVar10);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
    lVar5 = unaff_x20 + 0x48;
    func_0x000107c61618(lVar5);
    func_0x000107c61174(puVar3);
    func_0x000107c615f0(uVar4);
    func_0x000107c3ed40(uVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(uVar4);
    func_0x000107c615e8(lVar5);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 10116fe60; end: 10116fef3;  */

void FUN_10116fe60(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_10117024c(unaff_x20 + 0x48);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10116fef4; end: 10116ff93;  */

undefined * FUN_10116fef4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d60fb0;
    FUN_10116ff94(0x112d60fb0,&PTR_PTR_1126b3568,0x112d60fb8,&UNK_10d9272b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 10116ff94; end: 10117000b;  */

void FUN_10116ff94(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000101170270(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10117000c; end: 10117024b;  */

ulong FUN_10117000c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101170134);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_10116fef4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101170130);
      (*pcVar1)();
    }
    func_0x000101170134(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 10117024c; end: 1011702af;  */

undefined8 FUN_10117024c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011702b0; end: 101170987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1011702b0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  double *pdVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  ulong uVar19;
  long unaff_x20;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined1 auStack_a0 [16];
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  
  func_0x000107c610f8();
  lVar13 = _DAT_112d60fc0;
  puVar5 = PTR_PTR_1126a6460;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar13) = puVar5;
  lVar13 = _DAT_112d60fc8;
  *(long *)(unaff_x20 + _DAT_112d60fc8) = param_1;
  lVar7 = _DAT_112fecfb0;
  uVar20 = *(undefined8 *)(param_3 + _DAT_112fecfb0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = *(long *)(param_3 + lVar7);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = lVar6;
    func_0x000107c51a88();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
  }
  lVar7 = *(long *)(param_3 + lVar7);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar7;
    func_0x000107c3eca4();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
  }
  lVar7 = param_6;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101170988);
    (*pcVar4)();
  }
  func_0x000107c61174();
  func_0x000107c615e8(lVar7);
  lVar8 = 0;
  FUN_10116f740();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112d60dc0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112d60dc8) = 0;
  *(undefined8 *)(lVar9 + _DAT_112d60dd0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112d60dd8) = 0;
  *(undefined1 *)(lVar9 + _DAT_112d60de0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112d60de8) = 0;
  *(undefined8 *)(lVar9 + _DAT_112d60df0) = 0;
  *(undefined8 *)(lVar9 + _DAT_112d60df8) = 0;
  lVar7 = _DAT_112d60e00;
  uVar25 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
  puVar5 = PTR_PTR_1126b1c10;
  func_0x000107c610f8();
  func_0x000107c495dc(uVar25);
  *(undefined **)(lVar9 + lVar7) = puVar5;
  lVar7 = _DAT_112d60e08;
  puVar5 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar7) = puVar5;
  lVar7 = _DAT_112d60e10;
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar7) = puVar5;
  lVar7 = _DAT_112d60e18;
  puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar7) = puVar5;
  lVar7 = _DAT_112d60e20;
  puVar5 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c5a050();
  func_0x000107c55130(puVar5);
  *(undefined **)(lVar9 + lVar7) = puVar5;
  lVar7 = _DAT_112d60e28;
  lVar10 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(lVar9 + lVar7,1,1,lVar10);
  lVar7 = _DAT_112d60e30;
  puVar5 = PTR_PTR_1126a6460;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar7) = puVar5;
  *(long *)(lVar9 + _DAT_112d60d90) = param_1;
  *(undefined8 *)(lVar9 + _DAT_112d60d98) = uVar20;
  func_0x000107c61174();
  func_0x000107c61174(uVar20);
  lVar7 = lVar21;
  func_0x000107c443b0();
  func_0x000107c61180();
  *(long *)(lVar9 + _DAT_112d60da8) = lVar7;
  *(long *)(lVar9 + _DAT_112d60db0) = lVar21;
  *(long *)(lVar9 + _DAT_112d60da0) = lVar6;
  uVar19 = *(ulong *)(param_1 + _DAT_112eb2080);
  if (uVar19 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar11 = uVar19;
    }
    func_0x000107c60480();
  }
  pdVar2 = (double *)&UNK_10dde84e0;
  if (uVar11 != 1) {
    pdVar2 = (double *)&UNK_10dde84e8;
  }
  *(double *)(lVar9 + _DAT_112d60db8) = *pdVar2 * 0.5;
  plVar12 = &lStack_88;
  puVar18 = PTR_s_init_1125d9248;
  lStack_88 = lVar9;
  lStack_80 = lVar8;
  func_0x000107c61154();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar20);
  *(long **)(unaff_x20 + _DAT_112d60fd0) = plVar12;
  lVar13 = *(long *)(unaff_x20 + lVar13);
  uVar11 = *(ulong *)(param_2 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar19 = uVar11;
  func_0x000107c5faec();
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  uVar20 = param_5;
  func_0x000107c4f124();
  func_0x000107c61180();
  lVar7 = 0;
  func_0x00010116fed4();
  func_0x000107c613fc();
  func_0x000107c61614(lVar7 + 0x48,0);
  puVar5 = PTR_PTR_1126b1c10;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c495dc(uVar25);
  *(undefined **)(lVar7 + 0x50) = puVar5;
  uVar24 = *(ulong *)(lVar13 + _DAT_112eb2080);
  uVar11 = uVar24 & 0xffffffffffffff8;
  if (uVar24 >> 0x3e == 0) {
    uVar23 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar23 = uVar11;
    if (0x7fffffffffffffff < uVar24) {
      uVar23 = uVar24;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar23 != 0) {
    uVar22 = 0;
    do {
      while( true ) {
        if ((uVar24 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x101170874);
            (*pcVar4)();
          }
          uVar14 = *(ulong *)(uVar24 + uVar22 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar14 = uVar22;
          FUN_10111c5a8(uVar22,uVar24);
        }
        uVar1 = uVar22 + 1;
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101170870);
          (*pcVar4)();
        }
        uVar15 = *(ulong *)(uVar14 + _DAT_112fcd610);
        puVar16 = (undefined *)((ulong *)(uVar14 + _DAT_112fcd610))[1];
        if ((uVar15 != uVar19 || puVar16 != puVar18) &&
           (func_0x000107c605b8(uVar15,puVar16,uVar19,puVar18,0), (uVar15 & 1) == 0)) break;
        func_0x000107c61170(uVar14);
        uVar22 = uVar22 + 1;
        if (uVar1 == uVar23) goto LAB_1011708a4;
      }
      puVar16 = puVar5;
      func_0x000107c61558();
      puStack_90 = puVar5;
      if (((ulong)puVar16 & 1) == 0) {
        FUN_10116231c(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar22 = *(ulong *)(puStack_90 + 0x10);
      if (*(ulong *)(puStack_90 + 0x18) >> 1 <= uVar22) {
        FUN_10116231c(1 < *(ulong *)(puStack_90 + 0x18),uVar22 + 1,1);
      }
      *(ulong *)(puStack_90 + 0x10) = uVar22 + 1;
      *(ulong *)(puStack_90 + uVar22 * 8 + 0x20) = uVar14;
      puVar5 = puStack_90;
      uVar22 = uVar1;
    } while (uVar1 != uVar23);
  }
LAB_1011708a4:
  func_0x000107c6142c(puVar18);
  *(undefined **)(lVar7 + 0x10) = puVar5;
  uVar25 = *(undefined8 *)(lVar13 + _DAT_112eb2088);
  uVar3 = ((undefined8 *)(lVar13 + _DAT_112eb2088))[1];
  func_0x000107c61434(uVar3);
  func_0x000107c61170(lVar13);
  *(undefined8 *)(lVar7 + 0x18) = uVar25;
  *(undefined8 *)(lVar7 + 0x20) = uVar3;
  *(undefined8 *)(lVar7 + 0x28) = param_4;
  *(undefined8 *)(lVar7 + 0x30) = uVar20;
  *(undefined8 *)(lVar7 + 0x38) = param_7;
  *(undefined8 *)(lVar7 + 0x40) = param_8;
  *(long *)(unaff_x20 + _DAT_112d60fd8) = lVar7;
  puVar17 = auStack_a0;
  func_0x000107c61154(puVar17,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return puVar17;
}



/* Entry: 101170988; end: 101170aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170988(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c61604(*(long *)(unaff_x20 + _DAT_112d60fd8) + 0x48);
  puVar1 = &UNK_1103899a8;
  func_0x000107c613fc(&UNK_1103899a8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x00010116dce0(FUN_101170d74,puVar1);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 101170aec; end: 101170b4b; -[_TtC25MapSnapshotImplementation21MapSnapshotEntryPoint init] */

void FUN_101170aec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSnapshotImplementation.MapSnapshotEntryPoint",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101170b18);
  (*pcVar1)();
}



/* Entry: 101170b4c; end: 101170cb3; -[_TtC25MapSnapshotImplementation21MapSnapshotEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101170b68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101170b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d60fc8));
  return;
}



/* Entry: 101170cb4; end: 101170cf3; -[_TtC25MapSnapshotImplementation21MapSnapshotEntryPoint didCancelFromPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170cb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d60fc0);
  func_0x000107c61174();
  func_0x000104ec6de4(uVar1,1);
  func_0x000101170bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101170cf4; end: 101170d33; -[_TtC25MapSnapshotImplementation21MapSnapshotEntryPoint didSendSnapsAndPostToStory:storyTypes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170cf4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d60fc0);
  func_0x000107c61174();
  func_0x000104ec6d6c(uVar1,1);
  func_0x000101170bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101170d34; end: 101170d73; -[_TtC25MapSnapshotImplementation21MapSnapshotEntryPoint didSendChatMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170d34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d60fc0);
  func_0x000107c61174();
  func_0x000104ec6d6c(uVar1,1);
  func_0x000101170bf4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101170d74; end: 101170d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170d74(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d60fd8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    FUN_10116f96c(param_1);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d60fd0);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    FUN_10116e3dc();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 101170d7c; end: 101170d9b;  */

void FUN_101170d7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2258);
  return;
}



/* Entry: 101170d9c; end: 101170f4f;  */

ulong FUN_101170d9c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101170e80);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101170e84);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126d5650;
    func_0x000107c61168(PTR_PTR_1126d5650);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126d5650;
    func_0x000107c61168(PTR_PTR_1126d5650);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101170f50(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101170f50);
  (*pcVar2)();
}



/* Entry: 101170f50; end: 101170f93;  */

void FUN_101170f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d5650;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d60e70 = puVar1;
  return;
}



/* Entry: 101170f94; end: 101170f9f; -[SCMapSnapshotEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170f94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61008;
  func_0x000107c61428(param_1 + _DAT_112d61008,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101170fa0; end: 101170fab; -[SCMapSnapshotEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61008;
  func_0x000107c61428(param_1 + _DAT_112d61008,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101170fac; end: 101170fb7; -[SCMapSnapshotEntryPoint activeUserSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61010;
  func_0x000107c61428(param_1 + _DAT_112d61010,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101170fb8; end: 101170fc3; -[SCMapSnapshotEntryPoint setActiveUserSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61010;
  func_0x000107c61428(param_1 + _DAT_112d61010,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101170fc4; end: 101170fcf; -[SCMapSnapshotEntryPoint mapViewServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fc4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61018;
  func_0x000107c61428(param_1 + _DAT_112d61018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101170fd0; end: 101170fdb; -[SCMapSnapshotEntryPoint setMapViewServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61018;
  func_0x000107c61428(param_1 + _DAT_112d61018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101170fdc; end: 101170fe7; -[SCMapSnapshotEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61020;
  func_0x000107c61428(param_1 + _DAT_112d61020,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101170fe8; end: 101170ff3; -[SCMapSnapshotEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61020;
  func_0x000107c61428(param_1 + _DAT_112d61020,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101170ff4; end: 101170fff; -[SCMapSnapshotEntryPoint filterDataProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101170ff4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61028;
  func_0x000107c61428(param_1 + _DAT_112d61028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101171000; end: 10117100b; -[SCMapSnapshotEntryPoint setFilterDataProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101171000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61028;
  func_0x000107c61428(param_1 + _DAT_112d61028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10117100c; end: 101171017; -[SCMapSnapshotEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117100c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61030;
  func_0x000107c61428(param_1 + _DAT_112d61030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101171018; end: 101171023; -[SCMapSnapshotEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101171018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61030;
  func_0x000107c61428(param_1 + _DAT_112d61030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101171024; end: 10117102f; -[SCMapSnapshotEntryPoint previewScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101171024(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61038;
  func_0x000107c61428(param_1 + _DAT_112d61038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101171030; end: 101171073;  */

void FUN_101171030(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101171074; end: 10117107f; -[SCMapSnapshotEntryPoint setPreviewScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101171074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61038;
  func_0x000107c61428(param_1 + _DAT_112d61038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101171080; end: 1011710d3;  */

void FUN_101171080(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011710d4; end: 10117111b; -[SCMapSnapshotEntryPoint previewScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011710d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d61040;
  func_0x000107c61428(param_1 + _DAT_112d61040,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10117111c; end: 10117117f; -[SCMapSnapshotEntryPoint setPreviewScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10117111c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d61040;
  func_0x000107c61428(param_1 + _DAT_112d61040,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101171180; end: 101171b73;  */

/* WARNING: Possible PIC construction at 0x000101171378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011714b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171754: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011717b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011719ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171a5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171b08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171b18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101171878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117142c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117143c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117144c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011713fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117141c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011713dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011713ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011713bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117139c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010117138c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011713a0) */
/* WARNING: Removing unreachable block (ram,0x0001011713c0) */
/* WARNING: Removing unreachable block (ram,0x0001011713f0) */
/* WARNING: Removing unreachable block (ram,0x0001011713e0) */
/* WARNING: Removing unreachable block (ram,0x000101171420) */
/* WARNING: Removing unreachable block (ram,0x000101171410) */
/* WARNING: Removing unreachable block (ram,0x000101171400) */
/* WARNING: Removing unreachable block (ram,0x000101171450) */
/* WARNING: Removing unreachable block (ram,0x000101171440) */
/* WARNING: Removing unreachable block (ram,0x000101171430) */
/* WARNING: Removing unreachable block (ram,0x00010117187c) */
/* WARNING: Removing unreachable block (ram,0x000101171b2c) */
/* WARNING: Removing unreachable block (ram,0x000101171b1c) */
/* WARNING: Removing unreachable block (ram,0x000101171b0c) */
/* WARNING: Removing unreachable block (ram,0x000101171afc) */
/* WARNING: Removing unreachable block (ram,0x000101171aec) */
/* WARNING: Removing unreachable block (ram,0x000101171a74) */
/* WARNING: Removing unreachable block (ram,0x000101171a60) */
/* WARNING: Removing unreachable block (ram,0x000101171a4c) */
/* WARNING: Removing unreachable block (ram,0x000101171a3c) */
/* WARNING: Removing unreachable block (ram,0x0001011719f0) */
/* WARNING: Removing unreachable block (ram,0x0001011717b8) */
/* WARNING: Removing unreachable block (ram,0x000101171994) */
/* WARNING: Removing unreachable block (ram,0x0001011719a0) */
/* WARNING: Removing unreachable block (ram,0x00010117184c) */
/* WARNING: Removing unreachable block (ram,0x0001011719b0) */
/* WARNING: Removing unreachable block (ram,0x00010117185c) */
/* WARNING: Removing unreachable block (ram,0x00010117186c) */
/* WARNING: Removing unreachable block (ram,0x000101171888) */
/* WARNING: Removing unreachable block (ram,0x0001011718ec) */
/* WARNING: Removing unreachable block (ram,0x00010117188c) */
/* WARNING: Removing unreachable block (ram,0x00010117197c) */
/* WARNING: Removing unreachable block (ram,0x00010117189c) */
/* WARNING: Removing unreachable block (ram,0x0001011718a8) */
/* WARNING: Removing unreachable block (ram,0x000101171978) */
/* WARNING: Removing unreachable block (ram,0x0001011718b4) */
/* WARNING: Removing unreachable block (ram,0x0001011718cc) */
/* WARNING: Removing unreachable block (ram,0x0001011718d0) */
/* WARNING: Removing unreachable block (ram,0x0001011718d4) */
/* WARNING: Removing unreachable block (ram,0x000101171874) */
/* WARNING: Removing unreachable block (ram,0x0001011718e8) */
/* WARNING: Removing unreachable block (ram,0x0001011718fc) */
/* WARNING: Removing unreachable block (ram,0x00010117190c) */
/* WARNING: Removing unreachable block (ram,0x000101171928) */
/* WARNING: Removing unreachable block (ram,0x000101171950) */
/* WARNING: Removing unreachable block (ram,0x000101171938) */
/* WARNING: Removing unreachable block (ram,0x00010117194c) */
/* WARNING: Removing unreachable block (ram,0x0001011719b8) */
/* WARNING: Removing unreachable block (ram,0x000101171758) */
/* WARNING: Removing unreachable block (ram,0x0001011714b4) */
/* WARNING: Removing unreachable block (ram,0x00010117137c) */
/* WARNING: Removing unreachable block (ram,0x000101171390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101171180(void)

{
  double *pdVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_88;
  long lStack_80;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar7 = unaff_x20;
  func_0x000107c3d1c0();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c4c454();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar8 = unaff_x20;
      func_0x000107c5b1bc();
      func_0x000107c61180();
      if (lVar8 != 0) {
        lVar8 = unaff_x20;
        func_0x000107c434a8();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar7;
        }
        else {
          lVar8 = unaff_x20;
          func_0x000107c3fa0c();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar7;
          }
          else {
            lVar7 = unaff_x20;
            func_0x000107c4f188();
            func_0x000107c61180();
            if (lVar7 != 0) {
              func_0x000107c4f184();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar5 = 0;
                FUN_101170d7c();
                func_0x000107c610f8();
                lVar7 = _DAT_112d60fc0;
                puVar6 = PTR_PTR_1126a6460;
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c453e4();
                *(undefined **)(lVar5 + lVar7) = puVar6;
                *(long *)(lVar5 + _DAT_112d60fc8) = lVar3;
                lVar7 = _DAT_112fecfb0;
                uVar11 = *(undefined8 *)(lVar4 + _DAT_112fecfb0);
                func_0x000107c61174();
                func_0x000107c5c734();
                func_0x000107c61180();
                lVar5 = *(long *)(lVar4 + lVar7);
                func_0x000107c5c734();
                func_0x000107c61180();
                if (lVar5 == 0) {
                  lVar7 = *(long *)(lVar4 + lVar7);
                  func_0x000107c5c734();
                  func_0x000107c61180();
                  if (lVar7 == 0) {
                    func_0x000107c3fa04();
                    func_0x000107c61180();
                    if (lVar8 == 0) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x101171b74);
                      (*pcVar2)();
                    }
                    func_0x000107c61174();
                    func_0x000107c615e8(lVar8);
                    lVar8 = 0;
                    FUN_10116f740();
                    lVar4 = lVar8;
                    func_0x000107c610f8();
                    *(undefined8 *)(lVar4 + _DAT_112d60dc0) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60dc8) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60dd0) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60dd8) = 0;
                    *(undefined1 *)(lVar4 + _DAT_112d60de0) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60de8) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60df0) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60df8) = 0;
                    lVar7 = _DAT_112d60e00;
                    uVar12 = *(undefined8 *)PTR__UIWindowLevelNormal_110345e88;
                    puVar6 = PTR_PTR_1126b1c10;
                    func_0x000107c610f8();
                    func_0x000107c495dc(uVar12);
                    *(undefined **)(lVar4 + lVar7) = puVar6;
                    lVar7 = _DAT_112d60e08;
                    puVar6 = PTR__OBJC_CLASS___UIViewController_1126af898;
                    func_0x000107c610f8();
                    func_0x000107c453e4();
                    *(undefined **)(lVar4 + lVar7) = puVar6;
                    lVar7 = _DAT_112d60e10;
                    puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
                    func_0x000107c610f8();
                    func_0x000107c453e4();
                    *(undefined **)(lVar4 + lVar7) = puVar6;
                    lVar7 = _DAT_112d60e18;
                    puVar6 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
                    func_0x000107c610f8();
                    func_0x000107c453e4();
                    *(undefined **)(lVar4 + lVar7) = puVar6;
                    lVar7 = _DAT_112d60e20;
                    puVar6 = PTR_PTR_1126aeff0;
                    func_0x000107c610f8();
                    func_0x000107c45eac();
                    func_0x000107c5a050();
                    func_0x000107c55130(puVar6);
                    *(undefined **)(lVar4 + lVar7) = puVar6;
                    lVar7 = _DAT_112d60e28;
                    lVar5 = 0;
                    func_0x000107c5eea4();
                    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar4 + lVar7,1,1,lVar5);
                    lVar7 = _DAT_112d60e30;
                    puVar6 = PTR_PTR_1126a6460;
                    func_0x000107c610f8();
                    func_0x000107c453e4();
                    *(undefined **)(lVar4 + lVar7) = puVar6;
                    *(long *)(lVar4 + _DAT_112d60d90) = lVar3;
                    *(undefined8 *)(lVar4 + _DAT_112d60d98) = uVar11;
                    func_0x000107c61174();
                    func_0x000107c61174(uVar11);
                    uVar11 = 0;
                    func_0x000107c443b0();
                    func_0x000107c61180();
                    *(undefined8 *)(lVar4 + _DAT_112d60da8) = uVar11;
                    *(undefined8 *)(lVar4 + _DAT_112d60db0) = 0;
                    *(undefined8 *)(lVar4 + _DAT_112d60da0) = 0;
                    uVar10 = *(ulong *)(lVar3 + _DAT_112eb2080);
                    if (uVar10 >> 0x3e == 0) {
                      uVar9 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
                    }
                    else {
                      uVar9 = uVar10 & 0xffffffffffffff8;
                      if (0x7fffffffffffffff < uVar10) {
                        uVar9 = uVar10;
                      }
                      func_0x000107c60480();
                    }
                    pdVar1 = (double *)&UNK_10dde84e0;
                    if (uVar9 != 1) {
                      pdVar1 = (double *)&UNK_10dde84e8;
                    }
                    *(double *)(lVar4 + _DAT_112d60db8) = *pdVar1 * 0.5;
                    lStack_88 = lVar4;
                    lStack_80 = lVar8;
                    func_0x000107c61154(&lStack_88,PTR_s_init_1125d9248);
                  }
                  else {
                    func_0x000107c3eca4();
                    func_0x000107c61180();
                    lVar3 = lVar7;
                  }
                }
                else {
                  func_0x000107c51a88();
                  func_0x000107c61180();
                  lVar3 = lVar5;
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
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101171b74; end: 101171b9b; -[SCMapSnapshotEntryPoint begin] */

void FUN_101171b74(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101171180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101171b9c; end: 101171c43; -[SCMapSnapshotEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101171b9c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112d61048);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar3);
    FUN_10116e3dc();
    func_0x000107c61170(lVar3);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 101171c44; end: 101172063;  */

void FUN_101171c44(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000011;
    if (((param_2 == -0x2fffffffffffffef) && (param_3 == -0x7ffffffef10d7350)) ||
       (func_0x000107c605b8(0xd000000000000011,0x800000010ef28cb0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52220();
    }
    else {
      uVar2 = 0x537765695670616d;
      if (((param_2 == 0x537765695670616d) && (param_3 == -0x108c9a9c96898d9b)) ||
         (func_0x000107c605b8(0x537765695670616d,0xef73656369767265,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c562c0();
      }
      else {
        uVar2 = 0xd000000000000015;
        if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e2010)) ||
           (func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5935c();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d7330)) ||
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef28cd0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c549cc();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd00000000000001b;
                if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10d7310)) ||
                   (func_0x000107c605b8(0xd00000000000001b,0x800000010ef28cf0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c577cc();
                }
                else {
                  if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d72f0)) {
                    uVar2 = 0xd000000000000013;
                    func_0x000107c605b8(0xd000000000000013,0x800000010ef28d10,param_2,param_3,0);
                    if ((uVar2 & 1) == 0) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "MapSnapshotImplementation/SCMapSnapshotEntryPoint.swift",
                                          0x37,2,0x4e,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x101172064);
                      (*pcVar1)();
                    }
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c577d0();
                }
                goto LAB_101171cd0;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c53414();
          }
        }
      }
    }
  }
LAB_101171cd0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101172064; end: 10117210f; -[SCMapSnapshotEntryPoint setValue:forIvarName:] */

void FUN_101172064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101171c44(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101172110; end: 1011721f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101172110(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d61008,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61010,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61018,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61020,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61028,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61030,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d61038,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d61040) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d61048) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011721f4; end: 101172213; -[SCMapSnapshotEntryPoint init] */

void FUN_1011721f4(void)

{
  FUN_101172110();
  return;
}



/* Entry: 101172214; end: 101172247;  */

void FUN_101172214(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101172248; end: 1011722ef; -[SCMapSnapshotEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001011722d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011722d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101172248(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d61008);
  func_0x000107c61610(param_1 + _DAT_112d61010);
  func_0x000107c61610(param_1 + _DAT_112d61018);
  func_0x000107c61610(param_1 + _DAT_112d61020);
  func_0x000107c61610(param_1 + _DAT_112d61028);
  func_0x000107c61610(param_1 + _DAT_112d61030);
  func_0x000107c61610(param_1 + _DAT_112d61038);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d61040));
  return;
}



/* Entry: 1011722f0; end: 1011722f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011722f0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d60fd8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61170(lVar1);
    FUN_10116f96c(param_1);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112d60fd0);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    FUN_10116e3dc();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1011722f8; end: 10117233b;  */

void FUN_1011722f8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b2330);
  return;
}



/* Entry: 10117233c; end: 1011723e3; -[_TtC50MemoriesAlbumFetchCacheManagingServiceProviderImpl30MemoriesAlbumFetchCacheManager fetchResultFor:] */

void FUN_10117233c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c6157c(param_1);
  func_0x000107c48af4(puVar1);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61574(param_1);
  func_0x000107c61170(puVar1);
  if (lVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___PHFetchResult_1126a6468;
    func_0x000107c61168(PTR__OBJC_CLASS___PHFetchResult_1126a6468);
    lVar2 = lVar3;
    func_0x000107c6148c(lVar3,puVar1);
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011723e4; end: 101172487; -[_TtC50MemoriesAlbumFetchCacheManagingServiceProviderImpl30MemoriesAlbumFetchCacheManager collectionFor:] */

void FUN_1011723e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c6157c(param_1);
  func_0x000107c48af4(puVar1);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61574(param_1);
  func_0x000107c61170(puVar1);
  if (lVar4 != 0) {
    uVar2 = 0;
    func_0x0001039adc40(0);
    lVar3 = lVar4;
    func_0x000107c61480(lVar4,uVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101172488; end: 101172517;  */

/* WARNING: Possible PIC construction at 0x0001011724fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101172500) */

void FUN_101172488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c48af4(puVar1,param_2,param_4);
  func_0x000107c56bcc(uVar2,param_2,param_3,puVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101172518; end: 101172583; -[_TtC50MemoriesAlbumFetchCacheManagingServiceProviderImpl30MemoriesAlbumFetchCacheManager deleteFor:] */

void FUN_101172518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c6157c(param_1);
  func_0x000107c48af4(puVar1,param_2,param_3);
  func_0x000107c4ff88(uVar2,param_2,puVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101172584; end: 1011725a3;  */

void FUN_101172584(void)

{
  func_0x000107c61168(&PTR_PTR_112d610b8);
  return;
}



/* Entry: 1011725a4; end: 1011725a7; -[_TtC50MemoriesAlbumFetchCacheManagingServiceProviderImpl30MemoriesAlbumFetchCacheManager setWithFetchResult:for:] */

/* WARNING: Possible PIC construction at 0x0001011724fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101172500) */

void FUN_1011725a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c48af4(puVar1,param_2,param_4);
  func_0x000107c56bcc(uVar2,param_2,param_3,puVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011725a8; end: 1011725ab; -[_TtC50MemoriesAlbumFetchCacheManagingServiceProviderImpl30MemoriesAlbumFetchCacheManager setWithCollection:for:] */

/* WARNING: Possible PIC construction at 0x0001011724fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101172500) */

void FUN_1011725a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c48af4(puVar1,param_2,param_4);
  func_0x000107c56bcc(uVar2,param_2,param_3,puVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1011725ac; end: 10117267f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011725ac(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d61118,&UNK_10d927380);
  func_0x000107c613fc();
  pcVar2 = FUN_101172680;
  func_0x0001000bdd8c(FUN_101172680,0);
  uVar3 = 0;
  func_0x0001039ad900(0);
  func_0x000107c610f8();
  func_0x0001039ad7e4(pcVar2,uVar3);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  lVar1 = _DAT_112e139f8;
  func_0x000107c61428(param_1 + _DAT_112e139f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,pcVar2);
  func_0x000107c61170(param_1);
  return unaff_x20;
}


