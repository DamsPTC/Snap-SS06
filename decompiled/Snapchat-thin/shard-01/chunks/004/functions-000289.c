/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101014498; end: 1010145bb;  */

/* WARNING: Possible PIC construction at 0x00010101454c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101014584: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101014550) */
/* WARNING: Removing unreachable block (ram,0x000101014588) */
/* WARNING: Removing unreachable block (ram,0x000101014568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101014498(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 *puVar7;
  
  lVar2 = _DAT_112d54cd8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d54cd8);
  if (lVar6 != 0) {
    func_0x000107c615f0();
    func_0x000107c5be70();
    FUN_101012ce8();
    if (lVar6 != 0) {
      func_0x000107c5750c();
      func_0x000107c61170(lVar6);
    }
    puVar7 = *(undefined8 **)(unaff_x20 + _DAT_112d54ce0);
    if (puVar7 != (undefined8 *)0x0) {
      puVar3 = puVar7;
      func_0x000107c61174();
      puVar4 = puVar3;
      func_0x000101015ba4();
      uVar5 = *puVar4;
      uVar1 = puVar4[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c52104(puVar3);
      func_0x000107c61170(uVar5);
      func_0x000101014888(puVar7);
    }
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
    return;
  }
  return;
}



/* Entry: 1010145bc; end: 1010145db;  */

bool FUN_1010145bc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x000107c2bac0(lVar1);
  return lVar1 == 1;
}



/* Entry: 1010145dc; end: 10101471f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010145dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar2 = (undefined8 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    FUN_101012f44();
    func_0x000107c550d8();
    func_0x000107c61170();
    FUN_101012ce8();
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
      func_0x000101015bb0();
      uVar5 = *puVar4;
      uVar1 = puVar4[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c52104(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar5);
    }
    lVar7 = (long)puVar2 + _DAT_112d54cb0;
    uVar5 = *(undefined8 *)(lVar7 + 0x18);
    lVar6 = *(long *)(lVar7 + 0x20);
    func_0x0001000a8868(lVar7,uVar5);
    (**(code **)(lVar6 + 0x10))(param_3,param_4,uVar5,lVar6);
    lVar7 = (long)puVar2 + _DAT_112d54cc0;
    lVar6 = lVar7;
    func_0x000107c61618();
    if (lVar6 != 0) {
      lVar7 = *(long *)(lVar7 + 8);
      func_0x000107c614f0();
      (**(code **)(lVar7 + 8))();
      func_0x000107c615e8(lVar6);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101014720; end: 10101476b; -[_TtC19QuickCutPreviewImpl29QuickCutPreviewViewController initWithNibName:bundle:] */

void FUN_101014720(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutPreviewImpl.QuickCutPreviewViewController",0x31,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10101474c);
  (*pcVar1)();
}



/* Entry: 10101476c; end: 1010147af;  */

long FUN_10101476c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010147b0; end: 1010147c7;  */

undefined8 * FUN_1010147b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1010147c8; end: 10101482b;  */

void FUN_1010147c8(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10101482c;
  plVar3[10] = unaff_x20 + 0x10;
  plVar3[0xb] = lVar4;
  lVar4 = 0x112d53800;
  func_0x0001000285a8(0x112d53800,&UNK_10d91ad10);
  plVar3[0xc] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0xd] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0xe] = uVar1;
  lVar4 = 0x112d54d18;
  func_0x0001000285a8(0x112d54d18,&UNK_10d91bce8);
  plVar3[0xf] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x10] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x11] = uVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar3[0x12] = lVar2;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0x13] = lVar4;
  func_0x000100eea164();
  plVar3[0x14] = lVar4;
  func_0x000107c5fca8();
  plVar3[0x15] = lVar2;
  plVar3[0x16] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010139c4,lVar2,lVar4);
  return;
}



/* Entry: 10101482c; end: 101014867;  */

void FUN_10101482c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101014864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101014868; end: 1010148a7;  */

void FUN_101014868(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 == 0xff) {
    return;
  }
  if (param_4 < 3) {
    if (param_4 != 0) {
      if (param_4 != 2) {
        return;
      }
      func_0x000107c61170();
      param_2 = param_3;
    }
  }
  else if (param_4 == 3) {
    func_0x000107c614ac();
    param_2 = param_3;
  }
  else if (param_4 != 4) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1010148a8; end: 10101495b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010148a8(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112d54cc0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d54cc8) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d54cd0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54cd8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54ce0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d54ce8) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutPreviewImpl/QuickCutPreviewViewController.swift",0x37,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10101495c);
  (*pcVar3)();
}



/* Entry: 10101495c; end: 10101497f;  */

undefined8 FUN_10101495c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101014980; end: 101014a23;  */

void FUN_101014980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c5fd20();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_40 = param_3;
  uStack_38 = param_2;
  (**(code **)(extraout_x8 + 0x68))
            (auStack_50 + -extraout_x12,
             *(undefined4 *)
              PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20);
  func_0x000107c5fd48(param_1,param_3,auStack_50 + -extraout_x12,FUN_101014b14,auStack_50,param_3);
  return;
}



/* Entry: 101014a24; end: 101014b13;  */

void FUN_101014a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar5 = param_3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  func_0x000107c5fd18(0,lVar5);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar3,param_2,param_3);
  uVar2 = 0;
  func_0x000107c5fd30(0,param_3);
  func_0x000107c5fd28((long)puVar3 - extraout_x8_00,puVar3,uVar2);
  (**(code **)(lVar5 + 8))((long)puVar3 - extraout_x8_00,lVar1);
  func_0x000107c5fd2c(uVar2);
  return;
}



/* Entry: 101014b14; end: 101014b1b;  */

void FUN_101014b14(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  lVar6 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5fd18(0,lVar6);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(puVar4,uVar3,lVar1);
  uVar3 = 0;
  func_0x000107c5fd30(0,lVar1);
  func_0x000107c5fd28((long)puVar4 - extraout_x8_00,puVar4,uVar3);
  (**(code **)(lVar6 + 8))((long)puVar4 - extraout_x8_00,lVar2);
  func_0x000107c5fd2c(uVar3);
  return;
}



/* Entry: 101014b1c; end: 101014dd7;  */

void FUN_101014b1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  
  uStack_b8 = param_1;
  func_0x000107c5fd20(0,param_9);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uStack_a0 = *(undefined8 *)(param_8 + 0x10);
  uStack_98 = param_9;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_7f = param_5;
  (**(code **)(extraout_x8 + 0x68))
            (auStack_c0 + -extraout_x12,
             *(undefined4 *)
              PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20);
  func_0x000107c5fd48(uStack_b8,param_9,auStack_c0 + -extraout_x12,FUN_101014dd8,auStack_b0,param_9)
  ;
  return;
}



/* Entry: 101014dd8; end: 101014e0f;  */

void FUN_101014dd8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101014c0c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined1 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x31),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101014e10; end: 101014f17;  */

void FUN_101014e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x30) = param_6;
  *(long *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0;
  func_0x000107c5fd18(0,param_7);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  lVar1 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  lVar1 = 0;
  func_0x000107c60188(0,param_6);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0;
  func_0x000107c5fd40(0,param_6);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101014f18,0,0);
  return;
}



/* Entry: 101014f18; end: 101014f87;  */

void FUN_101014f18(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c5fd44(0,*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101014f88;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 101014f88; end: 101014fcf;  */

void FUN_101014f88(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101014fd0,0,0);
  return;
}



/* Entry: 101014fd0; end: 101015117;  */

void FUN_101014fd0(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar7 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = uVar5;
  (**(code **)(lVar7 + 0x30))(uVar5,1,uVar6);
  if ((int)uVar3 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x88));
    func_0x000107c5fd30(0,uVar11);
    func_0x000107c5fd2c();
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001010150a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar9 = *(int **)(unaff_x22 + 0x18);
  (**(code **)(lVar7 + 0x20))(*(undefined8 *)(unaff_x22 + 0x78),uVar5,uVar6);
  iVar1 = *piVar9;
  plVar4 = (long *)(ulong)(uint)piVar9[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101015118;
                    /* WARNING: Could not recover jumptable at 0x000101015114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))
            (plVar4,*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101015118; end: 10101515f;  */

void FUN_101015118(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101015160,0,0);
  return;
}



/* Entry: 101015160; end: 10101524f;  */

void FUN_101015160(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar9 = *(long *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(lVar8 + 0x10))(uVar2,uVar7,uVar10);
  uVar11 = 0;
  func_0x000107c5fd30(0,uVar10);
  func_0x000107c5fd28(uVar3,uVar2,uVar11);
  (**(code **)(lVar9 + 8))(uVar3,uVar4);
  (**(code **)(lVar8 + 8))(uVar7,uVar10);
  (**(code **)(lVar1 + 8))(uVar6,uVar5);
  plVar12 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101014f88;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar12,*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 101015250; end: 101015327;  */

void FUN_101015250(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  ulong uVar7;
  ulong uVar8;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000107c5fd44(0,lVar5);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  lVar3 = 0;
  func_0x000107c5fd30(0,lVar1);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)(unaff_x20 + uVar7);
  lVar3 = *plVar4;
  lVar2 = plVar4[1];
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101015328;
  plVar4[6] = lVar5;
  plVar4[7] = lVar1;
  plVar4[4] = lVar2;
  plVar4[5] = unaff_x20 + (uVar7 + uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  plVar4[2] = unaff_x20 + uVar8;
  plVar4[3] = lVar3;
  lVar3 = 0;
  func_0x000107c5fd18(0,lVar1);
  plVar4[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[9] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[10] = uVar6;
  lVar3 = *(long *)(lVar1 + -8);
  plVar4[0xb] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar7 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar7;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xd] = uVar6;
  lVar3 = *(long *)(lVar5 + -8);
  plVar4[0xe] = lVar3;
  uVar6 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar6;
  lVar3 = 0;
  func_0x000107c60188(0,lVar5);
  uVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar6;
  lVar3 = 0;
  func_0x000107c5fd40(0,lVar5);
  plVar4[0x11] = lVar3;
  lVar5 = *(long *)(lVar3 + -8);
  plVar4[0x12] = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101014f18,0,0);
  return;
}



/* Entry: 101015328; end: 101015363;  */

void FUN_101015328(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101015360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101015364; end: 101015377;  */

bool FUN_101015364(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101015378; end: 101015573;  */

void FUN_101015378(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0xe900000000000065;
  uVar2 = 0x646f63736e617274;
  if (cVar3 != '\x01') {
    uVar4 = 0xea00000000007469;
    uVar2 = 0x64456c61756e616d;
  }
  uVar1 = 0x6b63616279616c70;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101015574; end: 1010155db;  */

void FUN_101015574(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xe900000000000065;
  uVar2 = 0x646f63736e617274;
  if (cVar3 != '\x01') {
    uVar4 = 0xea00000000007469;
    uVar2 = 0x64456c61756e616d;
  }
  uVar1 = 0x6b63616279616c70;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1010155dc; end: 10101563f;  */

ulong FUN_1010155dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 101015640; end: 101015643;  */

void FUN_101015640(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91bd50;
  func_0x000107c61520(&UNK_10d91bd50,&UNK_110377030);
  puRam0000000112d54d28 = puVar1;
  return;
}



/* Entry: 101015644; end: 101015683;  */

void FUN_101015644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91bd50;
  func_0x000107c61520(&UNK_10d91bd50,&UNK_110377030);
  puRam0000000112d54d28 = puVar1;
  return;
}



/* Entry: 101015684; end: 1010157eb;  */

int FUN_101015684(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101015700;
        goto LAB_1010156e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010156e4:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101015700:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010157ec; end: 101015833;  */

uint FUN_1010157ec(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101015834(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101015834; end: 101015977;  */

undefined8 FUN_101015834(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar1 & 1) != 0)))) {
    if ((char)param_1[5] == '\x01') {
      if ((char)param_2[5] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[5] != '\x01') && (param_1[4] == param_2[4])) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 101015978; end: 1010159f3;  */

undefined8 * FUN_101015978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 1010159f4; end: 101015a47;  */

undefined8 * FUN_1010159f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Entry: 101015a48; end: 101015b27;  */

int FUN_101015a48(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101015b28; end: 101015b97;  */

undefined1  [16] FUN_101015b28(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0x800000010ef20040;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Entry: 101015b98; end: 101015c2f;  */

undefined * FUN_101015b98(void)

{
  return &UNK_10d91bf10;
}



/* Entry: 101015c30; end: 101015db7;  */

void FUN_101015c30(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = &UNK_1103772b8;
  func_0x000107c613fc(&UNK_1103772b8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uStack_40 = 0x101016bd4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101016bdc;
  puStack_48 = &UNK_110377320;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c46b38(puVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puStack_38);
  func_0x000107c57ac4(param_1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101015db8; end: 101015ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101015db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  lVar1 = param_4 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_112d54db8);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(&lStack_70);
    func_0x000107c61574(uVar3);
    if (lStack_70 != 0) {
      lVar1 = lStack_70;
      func_0x000107c614f0(lStack_70);
      puVar2 = &UNK_1103773a8;
      func_0x000107c613fc(&UNK_1103773a8,0x30,7);
      *(long *)(puVar2 + 0x10) = param_4;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      *(undefined8 *)(puVar2 + 0x28) = param_3;
      func_0x000107c6157c(param_4);
      func_0x000107c61434(param_1);
      func_0x000107c6157c(param_3);
      func_0x00010090569c(0x101016c48,puVar2,lVar1);
      func_0x000107c615e8(lStack_70);
      func_0x000107c61574(puVar2);
    }
  }
  return;
}



/* Entry: 101015ec0; end: 101015f37;  */

void FUN_101015ec0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_101015f38(param_2,param_3,param_4);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101015f38; end: 1010162eb;  */

/* WARNING: Possible PIC construction at 0x000101016380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101016384) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101015f38(undefined *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x20;
  undefined *puVar19;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    if (puVar19 == (undefined *)0x0) goto LAB_1010162b0;
  }
  else {
    puVar19 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar19 = param_1;
    }
    func_0x000107c60480();
    if (puVar19 == (undefined *)0x0) {
      param_1 = (undefined *)0x0;
      goto LAB_1010162b0;
    }
  }
  puVar12 = param_2;
  puVar11 = (undefined *)0x0;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    while( true ) {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101016264);
          (*pcVar6)();
        }
        puVar7 = *(undefined **)(param_1 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar11;
        puVar12 = param_1;
        FUN_101016c54(puVar11,param_1);
      }
      puVar1 = puVar11 + 1;
      if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101016260);
        (*pcVar6)();
      }
      puVar15 = puVar7;
      func_0x000107c3eea8();
      func_0x000107c61180();
      puVar8 = puVar15;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar15);
      puVar9 = PTR_PTR_1126b25c0;
      func_0x000107c610f8();
      puVar10 = puVar8;
      func_0x000107c5ee20(puVar8,puVar12);
      puVar15 = puVar10;
      func_0x000107c4636c();
      func_0x000107c61170(puVar10);
      uVar18 = 0;
      if (puVar9 != (undefined *)0x0) break;
      uVar14 = uVar18;
      func_0x000107c61174(0);
      func_0x000107c5ed30();
      func_0x000107c61170(uVar14);
      func_0x000107c61654();
      func_0x000107c61170(puVar7);
      func_0x000107c614ac(uVar18);
      func_0x00010006c090(puVar8);
      puVar11 = puVar11 + 1;
      if (puVar1 == puVar19) goto LAB_101016178;
    }
    func_0x000107c61174(0);
    func_0x00010006c090(puVar8);
    func_0x000107c61170(puVar7);
    puVar11 = puVar13;
    func_0x000107c61550();
    if (((((ulong)puVar11 & 1) == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0))
    {
      if ((ulong)puVar13 >> 0x3e == 0) {
        puVar12 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar12 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar13) {
          puVar12 = puVar13;
        }
        func_0x000107c60480();
      }
      puVar12 = puVar12 + 1;
      puVar13 = (undefined *)0x0;
      puVar15 = (undefined *)0x1;
      FUN_100fb4ec0();
    }
    uVar17 = (ulong)puVar13 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar17 + 0x10);
    if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar3) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
      puVar15 = (undefined *)0x1;
      puVar12 = (undefined *)(uVar3 + 1);
      FUN_100fb4ec0();
      uVar17 = (ulong)puVar13 & 0xffffffffffffff8;
    }
    *(undefined **)(uVar17 + 0x10) = (undefined *)(uVar3 + 1);
    *(undefined **)(uVar17 + uVar3 * 8 + 0x20) = puVar9;
    puVar11 = puVar1;
  } while (puVar1 != puVar19);
LAB_101016178:
  param_1 = puVar13;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar19 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar19 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar19 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar19 == (undefined *)0x0) {
    func_0x000107c6142c();
    param_2 = puVar12;
    param_3 = puVar15;
  }
  else {
    plVar2 = (long *)(unaff_x20 + _DAT_112d54dd0);
    lVar4 = *plVar2;
    lVar5 = plVar2[1];
    *plVar2 = (long)param_2;
    plVar2[1] = (long)param_3;
    FUN_100ca0590(lVar4,lVar5);
    puVar19 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112d54da0) + _DAT_11302bac8);
    func_0x000107c6157c(param_3);
    func_0x000107c4d06c();
    func_0x000107c61180();
    func_0x0001038e1ccc();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(puVar19);
    param_2 = puVar19;
    func_0x0001038e17bc(param_1,puVar19,unaff_x20,unaff_x20,&PTR_DAT_110377298);
    param_3 = param_1;
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d54da8));
    func_0x000107c615e8(puVar19);
    func_0x000107c61170();
  }
LAB_1010162b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
    return;
  }
  func_0x000107c60e78();
  pcVar6 = *(code **)(param_1 + 0x20);
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  uVar14 = 0;
  FUN_101016e18(0,0x112d54e00,&PTR_PTR_1126bcf68);
  func_0x000107c5fc54(param_2,uVar14);
  func_0x000107c60bc4();
  puVar19 = &UNK_110377380;
  func_0x000107c613fc(&UNK_110377380,0x18,7);
  *(undefined **)(puVar19 + 0x10) = param_3;
  func_0x000107c6157c(uVar18);
  (*pcVar6)(param_2,0x101016c38,puVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar18);
  return;
}



/* Entry: 1010162ec; end: 1010163a3;  */

/* WARNING: Possible PIC construction at 0x000101016380: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101016384) */

void FUN_1010162ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_101016e18(0,0x112d54e00,&PTR_PTR_1126bcf68);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c60bc4();
  puVar4 = &UNK_110377380;
  func_0x000107c613fc(&UNK_110377380,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,0x101016c38,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1010163a4; end: 1010163f3; -[_TtC24SnapEditorQuickCutPlugin24SnapEditorQuickCutPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001010163dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010163e0) */

void FUN_1010163a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101015c30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010163f4; end: 101016483; -[_TtC24SnapEditorQuickCutPlugin24SnapEditorQuickCutPlugin removeQuickCutScopeWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010163f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d54dd0);
  uVar5 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61174();
  FUN_100ca0590(uVar5,uVar2);
  lVar3 = _DAT_112d54da8;
  lVar4 = *(long *)(param_1 + _DAT_112d54da8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c61170();
    uVar5 = *(undefined8 *)(param_1 + lVar3);
    func_0x000107c4ffe8(uVar5);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 101016484; end: 1010165bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101016484(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lStack_58;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d54dd0);
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    lVar6 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      FUN_100ca0590(lVar5,lVar6);
    }
    else {
      lVar2 = lStack_58;
      func_0x000107c614f0(lStack_58);
      puVar3 = &UNK_1103772b8;
      func_0x000107c613fc(&UNK_1103772b8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1103772e0;
      func_0x000107c613fc(&UNK_1103772e0,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = lVar5;
      *(long *)(puVar4 + 0x28) = lVar6;
      *(undefined8 *)(puVar4 + 0x30) = param_2;
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(param_1);
      func_0x000101016bb0(lVar5,lVar6);
      func_0x000107c61174(param_2);
      func_0x00010090569c(0x101016ba0,puVar4,lVar2);
      FUN_100ca0590(lVar5,lVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c615e8(lStack_58);
      func_0x000107c61574(puVar4);
    }
  }
  return;
}



/* Entry: 1010165c0; end: 101016a8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010165c0(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar6,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(ulong *)(*(long *)(param_1 + _DAT_112d54da0) + _DAT_11302bad8);
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar10 = 0;
    puVar9 = (undefined1 *)0x0;
    puVar8 = puVar6;
  }
  else {
    uVar10 = uVar1;
    func_0x000107c5faec();
    uVar2 = uVar10 & 0xffffffffffff;
    if (((ulong)puVar6 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar6 >> 0x38 & 0xf;
    }
    puVar8 = puVar6;
    puVar9 = puVar6;
    if (uVar2 != 0) {
      puVar7 = puVar6;
      func_0x000107c61434(puVar6);
      uVar2 = param_2;
      func_0x000107c3f5f8();
      func_0x000107c61180();
      if (uVar2 != 0) {
        uVar3 = uVar2;
        func_0x000107c5faec();
        puVar8 = puVar7;
        func_0x000107c61170(uVar2);
        func_0x000107c6142c(puVar7);
        uVar2 = uVar3 & 0xffffffffffff;
        if (((ulong)puVar7 & 0x2000000000000000) != 0) {
          uVar2 = (ulong)puVar7 >> 0x38 & 0xf;
        }
        if (uVar2 != 0) {
          func_0x000107c6142c(puVar6);
          goto LAB_101016704;
        }
      }
      uVar2 = uVar10;
      puVar8 = puVar6;
      func_0x000107c5fadc(uVar10);
      func_0x000107c6142c(puVar6);
      func_0x000107c53200(param_2);
      func_0x000107c61170(uVar2);
    }
  }
LAB_101016704:
  func_0x0001000d224c(&uStack_80);
  uVar2 = uStack_80;
  uVar3 = uStack_80;
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  if (puVar9 != (undefined1 *)0x0) {
    uVar10 = uVar10 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar10 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar10 == 0) {
      func_0x000107c6142c(puVar9);
    }
    else {
      uVar10 = uVar3;
      func_0x000107c3f5f8();
      func_0x000107c61180();
      if (uVar10 == 0) {
        func_0x000107c6142c(puVar9);
      }
      else {
        uVar2 = uVar10;
        func_0x000107c5faec();
        puVar6 = puVar8;
        func_0x000107c61170(uVar10);
        func_0x000107c6142c(puVar9);
        func_0x000107c6142c(puVar8);
        uVar10 = uVar2 & 0xffffffffffff;
        if (((ulong)puVar8 & 0x2000000000000000) != 0) {
          uVar10 = (ulong)puVar8 >> 0x38 & 0xf;
        }
        puVar8 = puVar6;
        if (uVar10 != 0) goto LAB_1010167c8;
      }
      func_0x000107c53200(uVar3);
    }
  }
LAB_1010167c8:
  func_0x000107c61170(uVar1);
  func_0x000107c41214();
  func_0x000107c61180();
  if (param_2 == 0) {
    uVar1 = 0;
    puVar8 = (undefined1 *)0xf000000000000000;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5ee30();
    func_0x000107c61170(param_2);
  }
  func_0x0001000d224c(&uStack_80);
  if (uStack_80 == 0) {
    func_0x0001000b44c0(uVar1,puVar8);
  }
  else {
    uVar10 = uStack_80;
    func_0x000107c614f0(uStack_80);
    puVar4 = &UNK_1103772b8;
    func_0x000107c613fc(&UNK_1103772b8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_1);
    puVar5 = &UNK_110377308;
    func_0x000107c613fc(&UNK_110377308,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(ulong *)(puVar5 + 0x18) = uVar1;
    *(undefined1 **)(puVar5 + 0x20) = puVar8;
    *(undefined8 *)(puVar5 + 0x28) = param_3;
    *(undefined8 *)(puVar5 + 0x30) = param_4;
    *(ulong *)(puVar5 + 0x38) = uVar3;
    *(undefined8 *)(puVar5 + 0x40) = param_5;
    func_0x000107c6157c(puVar4);
    FUN_100de78a0(uVar1,puVar8);
    func_0x000107c6157c(param_4);
    func_0x000107c615f0(uVar3);
    func_0x000107c61174(param_5);
    func_0x00010090569c(0x101016bc0,puVar5,uVar10);
    func_0x0001000b44c0(uVar1,puVar8);
    func_0x000107c61574(puVar4);
    func_0x000107c615e8(uStack_80);
    func_0x000107c61574(puVar5);
  }
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101016a8c; end: 101016aeb; -[_TtC24SnapEditorQuickCutPlugin24SnapEditorQuickCutPlugin init] */

void FUN_101016a8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorQuickCutPlugin.SnapEditorQuickCutPlugin",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101016ab8);
  (*pcVar1)();
}



/* Entry: 101016aec; end: 101016b7b; -[_TtC24SnapEditorQuickCutPlugin24SnapEditorQuickCutPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101016b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101016b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101016b2c) */
/* WARNING: Removing unreachable block (ram,0x000101016b4c) */
/* WARNING: Removing unreachable block (ram,0x000100ca0590) */
/* WARNING: Removing unreachable block (ram,0x000100ca059c) */
/* WARNING: Removing unreachable block (ram,0x000100ca0594) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101016aec(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54da0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54da8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d54db0));
  return;
}



/* Entry: 101016b7c; end: 101016b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101016b7c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lStack_58;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112d54dd0);
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    lVar6 = plVar1[1];
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      FUN_100ca0590(lVar5,lVar6);
    }
    else {
      lVar2 = lStack_58;
      func_0x000107c614f0(lStack_58);
      puVar3 = &UNK_1103772b8;
      func_0x000107c613fc(&UNK_1103772b8,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_1103772e0;
      func_0x000107c613fc(&UNK_1103772e0,0x38,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(long *)(puVar4 + 0x20) = lVar5;
      *(long *)(puVar4 + 0x28) = lVar6;
      *(undefined8 *)(puVar4 + 0x30) = param_2;
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(param_1);
      func_0x000101016bb0(lVar5,lVar6);
      func_0x000107c61174(param_2);
      func_0x00010090569c(0x101016ba0,puVar4,lVar2);
      FUN_100ca0590(lVar5,lVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c615e8(lStack_58);
      func_0x000107c61574(puVar4);
    }
  }
  return;
}



/* Entry: 101016b80; end: 101016b9f;  */

void FUN_101016b80(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7ed8);
  return;
}



/* Entry: 101016ba0; end: 101016bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101016ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(ulong *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar10 = auStack_78;
  func_0x000107c61428(lVar3 + 0x10,puVar10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  uVar4 = *(ulong *)(*(long *)(lVar3 + _DAT_112d54da0) + _DAT_11302bad8);
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (uVar4 == 0) {
    uVar15 = 0;
    puVar14 = (undefined1 *)0x0;
    puVar13 = puVar10;
  }
  else {
    uVar15 = uVar4;
    func_0x000107c5faec();
    uVar5 = uVar15 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    puVar13 = puVar10;
    puVar14 = puVar10;
    if (uVar5 != 0) {
      puVar11 = puVar10;
      func_0x000107c61434(puVar10);
      uVar5 = uVar7;
      func_0x000107c3f5f8();
      func_0x000107c61180();
      if (uVar5 != 0) {
        uVar6 = uVar5;
        func_0x000107c5faec();
        puVar13 = puVar11;
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(puVar11);
        uVar5 = uVar6 & 0xffffffffffff;
        if (((ulong)puVar11 & 0x2000000000000000) != 0) {
          uVar5 = (ulong)puVar11 >> 0x38 & 0xf;
        }
        if (uVar5 != 0) {
          func_0x000107c6142c(puVar10);
          goto LAB_101016704;
        }
      }
      uVar5 = uVar15;
      puVar13 = puVar10;
      func_0x000107c5fadc(uVar15);
      func_0x000107c6142c(puVar10);
      func_0x000107c53200(uVar7);
      func_0x000107c61170(uVar5);
    }
  }
LAB_101016704:
  func_0x0001000d224c(&uStack_80);
  uVar5 = uStack_80;
  uVar6 = uStack_80;
  func_0x000107c42428();
  func_0x000107c61180();
  func_0x000107c615e8(uVar5);
  if (puVar14 != (undefined1 *)0x0) {
    uVar15 = uVar15 & 0xffffffffffff;
    if (((ulong)puVar14 & 0x2000000000000000) != 0) {
      uVar15 = (ulong)puVar14 >> 0x38 & 0xf;
    }
    if (uVar15 == 0) {
      func_0x000107c6142c(puVar14);
    }
    else {
      uVar15 = uVar6;
      func_0x000107c3f5f8();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x000107c6142c(puVar14);
      }
      else {
        uVar5 = uVar15;
        func_0x000107c5faec();
        puVar10 = puVar13;
        func_0x000107c61170(uVar15);
        func_0x000107c6142c(puVar14);
        func_0x000107c6142c(puVar13);
        uVar15 = uVar5 & 0xffffffffffff;
        if (((ulong)puVar13 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)puVar13 >> 0x38 & 0xf;
        }
        puVar13 = puVar10;
        if (uVar15 != 0) goto LAB_1010167c8;
      }
      func_0x000107c53200(uVar6);
    }
  }
LAB_1010167c8:
  func_0x000107c61170(uVar4);
  func_0x000107c41214();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uVar4 = 0;
    puVar13 = (undefined1 *)0xf000000000000000;
  }
  else {
    uVar4 = uVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar7);
  }
  func_0x0001000d224c(&uStack_80);
  if (uStack_80 == 0) {
    func_0x0001000b44c0(uVar4,puVar13);
  }
  else {
    uVar7 = uStack_80;
    func_0x000107c614f0(uStack_80);
    puVar8 = &UNK_1103772b8;
    func_0x000107c613fc(&UNK_1103772b8,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,lVar3);
    puVar9 = &UNK_110377308;
    func_0x000107c613fc(&UNK_110377308,0x48,7);
    *(undefined **)(puVar9 + 0x10) = puVar8;
    *(ulong *)(puVar9 + 0x18) = uVar4;
    *(undefined1 **)(puVar9 + 0x20) = puVar13;
    *(undefined8 *)(puVar9 + 0x28) = uVar1;
    *(undefined8 *)(puVar9 + 0x30) = uVar2;
    *(ulong *)(puVar9 + 0x38) = uVar6;
    *(undefined8 *)(puVar9 + 0x40) = uVar12;
    func_0x000107c6157c(puVar8);
    FUN_100de78a0(uVar4,puVar13);
    func_0x000107c6157c(uVar2);
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(uVar12);
    func_0x00010090569c(0x101016bc0,puVar9,uVar7);
    func_0x0001000b44c0(uVar4,puVar13);
    func_0x000107c61574(puVar8);
    func_0x000107c615e8(uStack_80);
    func_0x000107c61574(puVar9);
  }
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101016bdc; end: 101016c13;  */

void FUN_101016bdc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101016c14; end: 101016c53;  */

void FUN_101016c14(long param_1,long param_2)

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



/* Entry: 101016c54; end: 101016e17;  */

ulong FUN_101016c54(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101016d38);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101016d3c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bcf68;
    func_0x000107c61168(PTR_PTR_1126bcf68);
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
    puVar4 = PTR_PTR_1126bcf68;
    func_0x000107c61168(PTR_PTR_1126bcf68);
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
  FUN_101016e18(0,0x112d54e00,&PTR_PTR_1126bcf68);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101016e18);
  (*pcVar2)();
}



/* Entry: 101016e18; end: 101016e57;  */

void FUN_101016e18(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101016e58; end: 101016e5f;  */

void FUN_101016e58(long param_1,long param_2)

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



/* Entry: 101016e60; end: 101017213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101016e60(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  
  uVar7 = param_2;
  func_0x000107c610f8();
  puVar3 = PTR_PTR_1133bb5d0;
  if (((*(int *)(param_2 + _DAT_11302bb18) == 1) &&
      (lVar13 = *(long *)(param_2 + _DAT_11302bab8), lVar13 != 0)) &&
     (*(long *)(lVar13 + 0x10) != 0)) {
    func_0x000107c61434(lVar13);
    FUN_100fac3bc();
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar13);
    }
    else {
      lVar15 = *(long *)(*(long *)(lVar13 + 0x38) + (long)puVar3 * 8);
      func_0x000107c615f0(lVar15);
      func_0x000107c6142c(lVar13);
      uVar4 = 0;
      func_0x000102abb8c8(0);
      lVar13 = lVar15;
      func_0x000107c61480(lVar15,uVar4);
      if (lVar13 == 0) {
        func_0x000107c615e8(lVar15);
      }
      else {
        puVar3 = &UNK_1103773d8;
        func_0x000107c613fc(&UNK_1103773d8,0x18,7);
        *(undefined8 *)(puVar3 + 0x10) = param_5;
        uVar4 = 0x112d54e08;
        func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
        func_0x000107c613fc();
        uVar5 = param_5;
        func_0x000107c61174();
        uVar6 = 0x10101739c;
        func_0x0001000bdd8c(0x10101739c,puVar3);
        puVar3 = &UNK_110377400;
        func_0x000107c613fc(&UNK_110377400,0x18,7);
        *(undefined8 *)(puVar3 + 0x10) = uVar5;
        func_0x000107c613fc(uVar4,0x18,7);
        func_0x000107c61174(uVar5);
        uVar4 = 0x1010173a4;
        func_0x0001000bdd8c(0x1010173a4,puVar3);
        uVar14 = *(undefined8 *)(param_1 + _DAT_11302ba70);
        puVar3 = &UNK_110377428;
        func_0x000107c613fc(&UNK_110377428,0x18,7);
        *(undefined8 *)(puVar3 + 0x10) = param_4;
        func_0x0001000285a8(0x112d51768,&UNK_10d918bc0);
        func_0x000107c613fc();
        func_0x000107c61174();
        uVar7 = param_2;
        func_0x000107c61174();
        uVar8 = param_3;
        func_0x000107c61174();
        func_0x000107c61174(param_4);
        pcVar9 = FUN_1010173ac;
        func_0x0001000bdd8c(FUN_1010173ac,puVar3);
        puVar1 = (undefined8 *)(lVar13 + _DAT_112ee92e8);
        func_0x000107c61428(puVar1,auStack_88,0,0);
        uVar5 = *puVar1;
        uVar2 = puVar1[1];
        lVar10 = 0;
        FUN_101016b80();
        lVar13 = lVar10;
        func_0x000107c610f8();
        puVar1 = (undefined8 *)(lVar13 + _DAT_112d54dd0);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(ulong *)(lVar13 + _DAT_112d54da0) = uVar7;
        *(undefined8 *)(lVar13 + _DAT_112d54da8) = uVar8;
        *(code **)(lVar13 + _DAT_112d54db0) = pcVar9;
        *(undefined8 *)(lVar13 + _DAT_112d54db8) = uVar6;
        *(undefined8 *)(lVar13 + _DAT_112d54dc0) = uVar4;
        puVar1 = (undefined8 *)(lVar13 + _DAT_112d54dc8);
        *puVar1 = uVar5;
        puVar1[1] = uVar2;
        func_0x000107c6157c();
        func_0x000107c6157c(uVar4);
        FUN_1010173dc(uVar5,uVar2);
        plVar11 = &lStack_98;
        lStack_98 = lVar13;
        lStack_90 = lVar10;
        func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
        func_0x000107c4fba8(uVar14);
        func_0x000107c615e8(lVar15);
        func_0x000107c61574(uVar6);
        func_0x000107c61574(uVar4);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(plVar11);
      }
    }
  }
  puVar12 = auStack_70;
  func_0x000107c61154(puVar12,PTR_s_init_1125d9248);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar12;
}



/* Entry: 101017214; end: 101017303;  */

void FUN_101017214(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101017304; end: 10101732f;  */

void FUN_101017304(undefined8 *param_1,undefined8 param_2)

{
  func_0x000107c42d48();
  func_0x000107c61180();
  *param_1 = param_2;
  return;
}



/* Entry: 101017330; end: 10101738f; -[_TtC24SnapEditorQuickCutPlugin34SnapEditorQuickCutPluginEntryPoint init] */

void FUN_101017330(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorQuickCutPlugin.SnapEditorQuickCutPluginEntryPoint",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10101735c);
  (*pcVar1)();
}



/* Entry: 101017390; end: 1010173ab;  */

void FUN_101017390(void)

{
  return;
}



/* Entry: 1010173ac; end: 1010173db;  */

void FUN_1010173ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c42d48();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1010173dc; end: 1010173eb;  */

void FUN_1010173dc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1010173ec; end: 10101740b;  */

void FUN_1010173ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7fc8);
  return;
}



/* Entry: 10101740c; end: 101017417; -[SCSnapEditorQuickCutPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101740c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54e38;
  func_0x000107c61428(param_1 + _DAT_112d54e38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101017418; end: 101017423; -[SCSnapEditorQuickCutPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017418(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54e38;
  func_0x000107c61428(param_1 + _DAT_112d54e38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101017424; end: 10101742f; -[SCSnapEditorQuickCutPluginEntryPoint snapEditorScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017424(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54e40;
  func_0x000107c61428(param_1 + _DAT_112d54e40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101017430; end: 10101743b; -[SCSnapEditorQuickCutPluginEntryPoint setSnapEditorScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017430(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54e40;
  func_0x000107c61428(param_1 + _DAT_112d54e40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10101743c; end: 101017447; -[SCSnapEditorQuickCutPluginEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101743c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54e48;
  func_0x000107c61428(param_1 + _DAT_112d54e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101017448; end: 101017453; -[SCSnapEditorQuickCutPluginEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017448(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54e48;
  func_0x000107c61428(param_1 + _DAT_112d54e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101017454; end: 10101745f; -[SCSnapEditorQuickCutPluginEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017454(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54e50;
  func_0x000107c61428(param_1 + _DAT_112d54e50,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101017460; end: 1010174a3;  */

void FUN_101017460(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010174a4; end: 1010174af; -[SCSnapEditorQuickCutPluginEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010174a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54e50;
  func_0x000107c61428(param_1 + _DAT_112d54e50,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010174b0; end: 101017503;  */

void FUN_1010174b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101017504; end: 10101754b; -[SCSnapEditorQuickCutPluginEntryPoint scopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017504(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54e58;
  func_0x000107c61428(param_1 + _DAT_112d54e58,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10101754c; end: 1010175af; -[SCSnapEditorQuickCutPluginEntryPoint setScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101754c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54e58;
  func_0x000107c61428(param_1 + _DAT_112d54e58,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010175b0; end: 101017a4f;  */

/* WARNING: Possible PIC construction at 0x00010101794c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010179f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101017a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101017a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101017990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010179a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101017980: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010179a4) */
/* WARNING: Removing unreachable block (ram,0x000101017994) */
/* WARNING: Removing unreachable block (ram,0x000101017a1c) */
/* WARNING: Removing unreachable block (ram,0x000101017a0c) */
/* WARNING: Removing unreachable block (ram,0x0001010179fc) */
/* WARNING: Removing unreachable block (ram,0x000101017950) */
/* WARNING: Removing unreachable block (ram,0x000101017984) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010175b0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar12 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c5b274();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = unaff_x20;
    func_0x000107c51968();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar12);
      lVar12 = lVar3;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c5b1bc();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar12);
        lVar12 = lVar3;
      }
      else {
        func_0x000107c4b2f4();
        func_0x000107c61180();
        if (unaff_x20 != 0) {
          uVar6 = 0;
          FUN_1010173ec();
          uVar7 = uVar6;
          func_0x000107c610f8();
          puVar8 = PTR_PTR_1133bb5d0;
          if (((*(int *)(lVar3 + _DAT_11302bb18) == 1) &&
              (lVar11 = *(long *)(lVar3 + _DAT_11302bab8), lVar11 != 0)) &&
             (*(long *)(lVar11 + 0x10) != 0)) {
            func_0x000107c61434(lVar11);
            FUN_100fac3bc();
            if ((param_2 & 1) == 0) {
              func_0x000107c6142c(lVar11);
            }
            else {
              lVar13 = *(long *)(*(long *)(lVar11 + 0x38) + (long)puVar8 * 8);
              func_0x000107c615f0(lVar13);
              func_0x000107c6142c(lVar11);
              uVar9 = 0;
              func_0x000102abb8c8(0);
              lVar11 = lVar13;
              func_0x000107c61480(lVar13,uVar9);
              if (lVar11 != 0) {
                puVar8 = &UNK_110377470;
                func_0x000107c613fc(&UNK_110377470,0x18,7);
                *(long *)(puVar8 + 0x10) = unaff_x20;
                uVar7 = 0x112d54e08;
                func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
                func_0x000107c613fc();
                func_0x000107c61174();
                pcVar10 = FUN_101017fcc;
                func_0x0001000bdd8c(FUN_101017fcc,puVar8);
                puVar8 = &UNK_110377498;
                func_0x000107c613fc(&UNK_110377498,0x18,7);
                *(long *)(puVar8 + 0x10) = unaff_x20;
                func_0x000107c613fc(uVar7,0x18,7);
                func_0x000107c61174(unaff_x20);
                uVar7 = 0x101017fd4;
                func_0x0001000bdd8c(0x101017fd4,puVar8);
                lVar12 = *(long *)(lVar12 + _DAT_11302ba70);
                puVar8 = &UNK_1103774c0;
                func_0x000107c613fc(&UNK_1103774c0,0x18,7);
                *(long *)(puVar8 + 0x10) = lVar5;
                func_0x0001000285a8(0x112d51768,&UNK_10d918bc0);
                func_0x000107c613fc();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174(lVar5);
                uVar6 = 0x101017fdc;
                func_0x0001000bdd8c(0x101017fdc,puVar8);
                puVar1 = (undefined8 *)(lVar11 + _DAT_112ee92e8);
                func_0x000107c61428(puVar1,auStack_88,0,0);
                uVar9 = *puVar1;
                uVar2 = puVar1[1];
                lVar11 = 0;
                FUN_101016b80();
                lVar5 = lVar11;
                func_0x000107c610f8();
                puVar1 = (undefined8 *)(lVar5 + _DAT_112d54dd0);
                *puVar1 = 0;
                puVar1[1] = 0;
                *(long *)(lVar5 + _DAT_112d54da0) = lVar3;
                *(long *)(lVar5 + _DAT_112d54da8) = lVar4;
                *(undefined8 *)(lVar5 + _DAT_112d54db0) = uVar6;
                *(code **)(lVar5 + _DAT_112d54db8) = pcVar10;
                *(undefined8 *)(lVar5 + _DAT_112d54dc0) = uVar7;
                puVar1 = (undefined8 *)(lVar5 + _DAT_112d54dc8);
                *puVar1 = uVar9;
                puVar1[1] = uVar2;
                func_0x000107c6157c();
                func_0x000107c6157c(uVar7);
                FUN_1010173dc(uVar9,uVar2);
                lStack_98 = lVar5;
                lStack_90 = lVar11;
                func_0x000107c61154(&lStack_98,PTR_s_init_1125d9248);
                func_0x000107c4fba8(lVar12);
                func_0x000107c615e8(lVar13);
                func_0x000107c61574(pcVar10);
                func_0x000107c61574(uVar7);
                goto code_r0x000107c61170;
              }
              func_0x000107c615e8(lVar13);
            }
          }
          uStack_70 = uVar7;
          uStack_68 = uVar6;
          func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
          lVar12 = lVar3;
        }
      }
    }
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar12);
  return;
}



/* Entry: 101017a50; end: 101017a77; -[SCSnapEditorQuickCutPluginEntryPoint begin] */

void FUN_101017a50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010175b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101017a78; end: 101017abb; -[SCSnapEditorQuickCutPluginEntryPoint end] */

void FUN_101017a78(undefined8 param_1)

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



/* Entry: 101017abc; end: 101017dab;  */

void FUN_101017abc(long param_1,long param_2,long param_3)

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
    uVar2 = 0x7469644570616e73;
    if (((param_2 == 0x7469644570616e73) && (param_3 == -0x109a8f909cac8d91)) ||
       (func_0x000107c605b8(0x7469644570616e73,0xef65706f6353726f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c593c0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e2010)) {
        uVar2 = 0xd000000000000015;
        func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)) {
            uVar2 = 0xd000000000000015;
            func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0x70784565706f6373;
              if (((param_2 != 0x70784565706f6373) || (param_3 != -0x13ffffff8d9a8c91)) &&
                 (func_0x000107c605b8(0x70784565706f6373,0xec0000007265736f,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SnapEditorQuickCutPlugin/SCSnapEditorQuickCutPluginEntryPoint.swift"
                                    ,0x43,2,0x37,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101017dac);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c58c60();
              goto LAB_101017b48;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55df4();
          goto LAB_101017b48;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5935c();
    }
  }
LAB_101017b48:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101017dac; end: 101017e57; -[SCSnapEditorQuickCutPluginEntryPoint setValue:forIvarName:] */

void FUN_101017dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101017abc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101017e58; end: 101017eff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017e58(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d54e38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54e40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54e48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54e50,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d54e58) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54e60) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101017f00; end: 101017f1f; -[SCSnapEditorQuickCutPluginEntryPoint init] */

void FUN_101017f00(void)

{
  FUN_101017e58();
  return;
}



/* Entry: 101017f20; end: 101017f53;  */

void FUN_101017f20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101017f54; end: 101017fcb; -[SCSnapEditorQuickCutPluginEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101017fb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101017fb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101017f54(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d54e38);
  func_0x000107c61610(param_1 + _DAT_112d54e40);
  func_0x000107c61610(param_1 + _DAT_112d54e48);
  func_0x000107c61610(param_1 + _DAT_112d54e50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d54e58));
  return;
}



/* Entry: 101017fcc; end: 101017fe3;  */

void FUN_101017fcc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101017fe4; end: 101018003;  */

void FUN_101017fe4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8080);
  return;
}



/* Entry: 101018004; end: 101018017;  */

bool FUN_101018004(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101018018; end: 1010180c3;  */

void FUN_101018018(void)

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



/* Entry: 1010180c4; end: 101018227;  */

undefined1 * FUN_1010180c4(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 uStack_31;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x40);
  puVar2 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000101018158();
    uStack_31 = SUB81(puVar1,0);
    func_0x0001000285a8(0x112d54f78,&UNK_10d91c150);
    func_0x000107c613fc();
    puVar2 = &uStack_31;
    func_0x00010042e6a0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined1 **)(unaff_x20 + 0x40) = puVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    puVar1 = (undefined1 *)0x0;
  }
  func_0x000107c6157c(puVar1);
  return puVar2;
}



/* Entry: 101018228; end: 10101841f;  */

void FUN_101018228(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar1 = &puStack_90;
  ppuVar5 = &puStack_90;
  uVar8 = *unaff_x20;
  uVar7 = param_1;
  func_0x000101018158();
  puStack_90 = (undefined *)CONCAT71(puStack_90._1_7_,(char)uVar7);
  func_0x0001000285a8(0x112d54f78,&UNK_10d91c150);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  uVar7 = unaff_x20[8];
  unaff_x20[8] = ppuVar1;
  func_0x000107c61574(uVar7);
  uVar7 = unaff_x20[9];
  pcStack_80 = (code *)param_1;
  puStack_78 = (undefined *)param_2;
  func_0x000107c6157c(uVar7);
  puVar3 = PTR___sytN_11034f1b0;
  func_0x000100075034(FUN_101018c8c,&puStack_90,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  uVar7 = unaff_x20[10];
  func_0x000107c6157c(uVar7);
  func_0x000100075034(FUN_1010191b4,0,puVar3 + 8);
  func_0x000107c61574(uVar7);
  lVar2 = unaff_x20[4];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar7 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    puVar3 = &UNK_110377620;
    func_0x000107c613fc(&UNK_110377620,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_110377648;
    func_0x000107c613fc(&UNK_110377648,0x30,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = uVar8;
    pcStack_70 = FUN_101018cd0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1010186a8;
    puStack_78 = &UNK_110377660;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar3);
    pcVar6 = "updateEligibility(for:)";
    func_0x0001000c10c0("updateEligibility(for:)");
    func_0x000107c61180();
    func_0x000107c43304(lVar2);
    func_0x000107c615e8(pcVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 101018420; end: 1010184cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101018420(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong *puStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113036468);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&puStack_28);
  func_0x000107c61574(uVar4);
  puVar1 = puStack_28;
  func_0x000107c44098(puStack_28,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c615e8();
  puVar2 = puStack_28;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70))();
  func_0x000107c61170(puVar1);
  uVar3 = 2;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1010184cc; end: 1010186a7;  */

void FUN_1010184cc(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined1 auStack_68 [24];
  
  puVar4 = auStack_68;
  func_0x000107c61428(param_3 + 0x10,puVar4,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_3 + 0x48);
    func_0x000107c6157c(uVar5);
    func_0x000107c61174();
    func_0x0001000c74f0(&uStack_90);
    func_0x000107c61574(uVar5);
    uVar3 = CONCAT71(uStack_8f,uStack_90);
    uVar1 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    if (puStack_88 == (undefined1 *)0x0) {
      func_0x000107c6142c(puVar4);
    }
    else {
      if ((uVar3 == uVar2) && (puStack_88 == puVar4)) {
        func_0x000107c6142c(puStack_88);
        func_0x000107c6142c(puVar4);
LAB_1010185d0:
        uVar5 = *(undefined8 *)(param_3 + 0x50);
        uStack_80 = param_1;
        func_0x000107c6157c(uVar5);
        func_0x000100075034(FUN_101018cf8,&uStack_90,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar5);
        FUN_1010180c4();
        uVar3 = param_1;
        FUN_101018420();
        uStack_90 = (undefined1)uVar3;
        func_0x0001007d6d78(&uStack_90);
        func_0x000107c61574(uVar5);
        func_0x000107c61574(param_3);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c605b8(uVar3,puStack_88,uVar2,puVar4,0);
      func_0x000107c6142c(puStack_88);
      func_0x000107c6142c(puVar4);
      if ((uVar3 & 1) != 0) goto LAB_1010185d0;
    }
    uVar5 = *(undefined8 *)(param_3 + 0x50);
    func_0x000107c6157c(uVar5);
    func_0x000100075034(0x1010191c8,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar5);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61574();
  return;
}



/* Entry: 1010186a8; end: 10101871f;  */

/* WARNING: Possible PIC construction at 0x000101018704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101018708) */

void FUN_1010186a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101018720; end: 1010189db;  */

/* WARNING: Possible PIC construction at 0x000101018828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101897c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101898c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010189b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101018980) */
/* WARNING: Removing unreachable block (ram,0x00010101882c) */
/* WARNING: Removing unreachable block (ram,0x000101018990) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101018720(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 != 0) {
    lVar4 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c615f0(lVar2);
    lVar1 = lVar4;
    func_0x000107c49cd8();
    if ((int)lVar1 != 0) {
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
        func_0x000107c6157c(uVar3);
        func_0x0001000c74f0(&lStack_68);
        func_0x000107c61574(uVar3);
        lVar1 = lStack_68;
        if (lStack_68 != 0) {
          func_0x000107c4d06c(lVar2,param_2,1);
          func_0x000107c61180();
          uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113036468);
          func_0x000107c6157c(uVar3);
          func_0x0001000d224c(&lStack_68);
          func_0x000107c61574(uVar3);
          func_0x000107c44098(lStack_68,param_2,lVar1);
          func_0x000107c61180();
          lVar2 = lStack_68;
        }
      }
      else {
        func_0x000107c61170();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1010189dc; end: 101018a57;  */

void FUN_1010189dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101018a58; end: 101018ac3; -[_TtC32SnapEditorAiModePluginEntryPoint25AiModeEligibilityProvider plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x000101018aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101018aa4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101018a58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x28));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101018ac4; end: 101018ae3;  */

void FUN_101018ac4(void)

{
  func_0x000107c61168(&PTR_PTR_112d54ed0);
  return;
}



/* Entry: 101018ae4; end: 101018c4b;  */

int FUN_101018ae4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101018b60;
        goto LAB_101018b44;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101018b44:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101018b60:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


