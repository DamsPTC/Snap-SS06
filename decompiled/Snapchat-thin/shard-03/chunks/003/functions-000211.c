/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10271fc08; end: 10271ff0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10271fc08(undefined **param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_58 [24];
  
  ppuVar3 = param_1;
  func_0x000109021904();
  if (((ulong)ppuVar3 & 1) == 0) {
    func_0x000107c4e790();
    func_0x000107c61180();
    ppuVar3 = param_1;
    func_0x000107c5faec();
    lVar6 = param_2;
    func_0x000107c61170(param_1);
    ppuVar4 = &PTR____CFConstantStringClassReference_110dba018;
    func_0x000107c5faec();
    if (ppuVar3 == ppuVar4 && param_2 == lVar6) {
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar6);
    }
    else {
      func_0x000107c605b8(ppuVar3,param_2,ppuVar4,lVar6,0);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar6);
      if (((ulong)ppuVar3 & 1) == 0) {
        return;
      }
    }
    lVar6 = unaff_x20 + _DAT_112ebab60;
    lVar5 = lVar6;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar6 + 8);
      lVar6 = lVar5;
      func_0x000107c614f0();
      (**(code **)(lVar10 + 8))();
      func_0x000107c615e8(lVar5);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ebab50);
      puVar1 = (undefined8 *)
               (*(long *)(*(long *)(unaff_x20 + _DAT_112ebab40) + 0x10) + _DAT_112fa9a98);
      func_0x000107c61428(puVar1,auStack_58,0,0);
      uVar9 = *puVar1;
      uVar2 = puVar1[1];
      puVar7 = &UNK_110540610;
      func_0x000107c613fc(&UNK_110540610,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar11);
      puVar8 = &UNK_110540778;
      func_0x000107c613fc(&UNK_110540778,0x30,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined8 *)(puVar8 + 0x18) = uVar9;
      *(undefined8 *)(puVar8 + 0x20) = uVar2;
      *(long *)(puVar8 + 0x28) = lVar6;
      func_0x000107c61438(uVar2,2);
      func_0x000107c61174(lVar6);
      func_0x000107c61174();
      uVar9 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3230,puVar8,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(uVar2);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(uVar9);
    }
  }
  return;
}



/* Entry: 10271ff0c; end: 10271ff87;  */

void FUN_10271ff0c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f28;
  plVar4[9] = lVar2;
  plVar4[10] = lVar8;
  plVar4[8] = lVar5;
  plVar4[7] = lVar9;
  plVar4[5] = lVar6;
  plVar4[6] = lVar1;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar4[0xb] = lVar6;
  uVar7 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272defc,lVar5,uVar7);
  return;
}



/* Entry: 10271ff88; end: 10271fff7;  */

void FUN_10271ff88(undefined8 param_1)

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
  plVar3[1] = 0x102720ef8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10271fff8; end: 102720013;  */

void FUN_10271fff8(void)

{
  FUN_10271f02c();
  return;
}



/* Entry: 102720014; end: 102720093;  */

void FUN_102720014(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720efc;
  plVar4[0x18] = lVar2;
  plVar4[0x19] = lVar7;
  plVar4[0x16] = lVar1;
  plVar4[0x17] = lVar5;
  plVar4[0x15] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar4[0x1a] = lVar6;
  lVar6 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x1b] = lVar5;
  plVar4[0x1c] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027211b8,lVar5,lVar6);
  return;
}



/* Entry: 102720094; end: 102720137;  */

void FUN_102720094(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x19 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f00;
  plVar4[0x1f] = unaff_x20 + uVar5;
  plVar4[0x20] = lVar3;
  *(undefined1 *)((long)plVar4 + 0x141) = uVar1;
  plVar4[0x1e] = lVar6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar3 = lVar6;
  func_0x000107c5fce8();
  plVar4[0x21] = lVar3;
  lVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x22] = lVar6;
  plVar4[0x23] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c988,lVar6,lVar3);
  return;
}



/* Entry: 102720138; end: 102720157;  */

void FUN_102720138(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102720158; end: 1027201af;  */

void FUN_102720158(void)

{
  FUN_10271f02c();
  return;
}



/* Entry: 1027201b0; end: 10272022f;  */

void FUN_1027201b0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f04;
  plVar4[0x18] = lVar2;
  plVar4[0x19] = lVar7;
  plVar4[0x16] = lVar1;
  plVar4[0x17] = lVar5;
  plVar4[0x15] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar4[0x1a] = lVar6;
  lVar6 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x1b] = lVar5;
  plVar4[0x1c] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102721988,lVar5,lVar6);
  return;
}



/* Entry: 102720230; end: 1027202d3;  */

void FUN_102720230(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x19 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f08;
  plVar4[0x1f] = unaff_x20 + uVar5;
  plVar4[0x20] = lVar3;
  *(undefined1 *)((long)plVar4 + 0x141) = uVar1;
  plVar4[0x1e] = lVar6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar3 = lVar6;
  func_0x000107c5fce8();
  plVar4[0x21] = lVar3;
  lVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x22] = lVar6;
  plVar4[0x23] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c988,lVar6,lVar3);
  return;
}



/* Entry: 1027202d4; end: 1027202df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027202d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + _DAT_112ebab58);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(lVar2);
    FUN_10272b49c(0,param_1,param_2,uVar1,uVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 1027202e0; end: 10272035f;  */

void FUN_1027202e0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f0c;
  plVar4[0x18] = lVar2;
  plVar4[0x19] = lVar7;
  plVar4[0x16] = lVar1;
  plVar4[0x17] = lVar5;
  plVar4[0x15] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar4[0x1a] = lVar6;
  lVar6 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x1b] = lVar5;
  plVar4[0x1c] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027226cc,lVar5,lVar6);
  return;
}



/* Entry: 102720360; end: 1027203bf;  */

void FUN_102720360(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1027203c0;
  plVar5[6] = lVar2;
  plVar5[7] = lVar6;
  plVar5[5] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[8] = lVar3;
  uVar4 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271e010,lVar2,uVar4);
  return;
}



/* Entry: 1027203c0; end: 102720403;  */

void FUN_1027203c0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102720400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102720404; end: 102720473;  */

void FUN_102720404(undefined8 param_1)

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
  plVar3[1] = 0x102720f10;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102720474; end: 1027204eb;  */

void FUN_102720474(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar4 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f14;
  plVar4[0x17] = lVar5;
  plVar4[0x18] = lVar2;
  plVar4[0x15] = lVar6;
  plVar4[0x16] = lVar1;
  lVar5 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar4[0x19] = lVar6;
  lVar6 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x1a] = lVar5;
  plVar4[0x1b] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102722110,lVar5,lVar6);
  return;
}



/* Entry: 1027204ec; end: 102720573;  */

void FUN_1027204ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar10 = *(long *)(unaff_x20 + 0x40);
  plVar6 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x102720f18;
  plVar6[0xb] = lVar10;
  plVar6[9] = lVar1;
  plVar6[10] = lVar4;
  plVar6[7] = lVar7;
  plVar6[8] = lVar3;
  plVar6[5] = lVar8;
  plVar6[6] = lVar2;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar8 = lVar7;
  func_0x000107c5fce8();
  plVar6[0xc] = lVar8;
  uVar9 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272dcc0,lVar7,uVar9);
  return;
}



/* Entry: 102720574; end: 1027205e3;  */

void FUN_102720574(undefined8 param_1)

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
  plVar3[1] = 0x102720f1c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1027205e4; end: 102720643;  */

void FUN_1027205e4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102720f20;
  plVar5[6] = lVar2;
  plVar5[7] = lVar6;
  plVar5[5] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[8] = lVar3;
  uVar4 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271d6b0,lVar2,uVar4);
  return;
}



/* Entry: 102720644; end: 1027206b3;  */

void FUN_102720644(undefined8 param_1)

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
  plVar3[1] = 0x102720f24;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1027206b4; end: 102720767;  */

void FUN_1027206b4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x22;
  ulong uVar9;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar9 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  uVar8 = lVar7 + uVar8 + uVar9 & (uVar8 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)(unaff_x20 + (lVar7 + uVar8 + 7 & 0xfffffffffffffff8));
  lVar7 = *plVar5;
  lVar2 = plVar5[1];
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102720f54;
  plVar5[9] = lVar7;
  plVar5[10] = lVar2;
  plVar5[7] = unaff_x20 + uVar9;
  plVar5[8] = unaff_x20 + uVar8;
  plVar5[5] = lVar4;
  plVar5[6] = lVar1;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar9 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xb] = uVar9;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar8;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar7;
  func_0x000107c5fce8();
  plVar5[0xd] = lVar4;
  uVar6 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272e1b4,lVar7,uVar6);
  return;
}



/* Entry: 102720768; end: 1027207d7;  */

void FUN_102720768(undefined8 param_1)

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
  plVar3[1] = 0x102720f2c;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1027207d8; end: 102720803;  */

void FUN_1027207d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102720804; end: 102720863;  */

void FUN_102720804(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102720f30;
  plVar5[6] = lVar2;
  plVar5[7] = lVar6;
  plVar5[5] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[8] = lVar3;
  uVar4 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271cdd4,lVar2,uVar4);
  return;
}



/* Entry: 102720864; end: 1027208d3;  */

void FUN_102720864(undefined8 param_1)

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
  plVar3[1] = 0x102720f34;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1027208d4; end: 102720953;  */

void FUN_1027208d4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x19 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102720954; end: 1027209f7;  */

void FUN_102720954(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x19 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102720f38;
  plVar4[0x1f] = unaff_x20 + uVar5;
  plVar4[0x20] = lVar3;
  *(undefined1 *)((long)plVar4 + 0x141) = uVar1;
  plVar4[0x1e] = lVar6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar3 = lVar6;
  func_0x000107c5fce8();
  plVar4[0x21] = lVar3;
  lVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x22] = lVar6;
  plVar4[0x23] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c988,lVar6,lVar3);
  return;
}



/* Entry: 1027209f8; end: 102720a7f;  */

void FUN_1027209f8(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar6 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar6 + 7 & 0xffffffffffffff8));
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102720f3c;
  plVar3[0xc] = unaff_x20 + uVar6;
  plVar3[0xd] = lVar2;
  plVar3[0xb] = lVar7;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar3[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar3[0xf] = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  plVar3[0x10] = lVar2;
  uVar6 = lVar2 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x11] = uVar6;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar6 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x12] = uVar6;
  lVar2 = 0;
  func_0x000104638d5c();
  plVar3[0x13] = lVar2;
  uVar6 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x14] = uVar4;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x15] = uVar6;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar7;
  func_0x000107c5fce8();
  plVar3[0x16] = lVar2;
  uVar5 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c464,lVar7,uVar5);
  return;
}



/* Entry: 102720a80; end: 102720aef;  */

void FUN_102720a80(undefined8 param_1)

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
  plVar3[1] = 0x102720f40;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102720af0; end: 102720b53;  */

void FUN_102720af0(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102720f44;
  plVar5[2] = unaff_x20 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[3] = lVar4;
  uVar3 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271c4a0,lVar2,uVar3);
  return;
}



/* Entry: 102720b54; end: 102720bc3;  */

void FUN_102720b54(undefined8 param_1)

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
  plVar3[1] = 0x102720f48;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102720bc4; end: 102720c03;  */

void FUN_102720bc4(long *param_1,code *param_2,long param_3)

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



/* Entry: 102720c04; end: 102720c57;  */

void FUN_102720c04(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102720f4c;
  *(undefined4 *)(plVar5 + 10) = uVar1;
  plVar5[8] = lVar6;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar6 = lVar3;
  func_0x000107c5fce8();
  plVar5[9] = lVar6;
  uVar4 = 0x112d45220;
  FUN_102720bc4(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10271bfa8,lVar3,uVar4);
  return;
}



/* Entry: 102720c58; end: 102720cc7;  */

void FUN_102720c58(undefined8 param_1)

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
  plVar3[1] = 0x102720f50;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102720cc8; end: 102720d3f;  */

void FUN_102720cc8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102720d40;
  plVar6[0x12] = lVar1;
  plVar6[0x13] = lVar4;
  plVar6[0x10] = lVar7;
  plVar6[0x11] = lVar3;
  plVar6[0xe] = lVar8;
  plVar6[0xf] = lVar2;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  lVar8 = lVar7;
  func_0x000107c5fce8();
  plVar6[0x14] = lVar8;
  uVar9 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272ce20,lVar7,uVar9);
  return;
}



/* Entry: 102720d40; end: 102720d7b;  */

void FUN_102720d40(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102720d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102720d7c; end: 102720deb;  */

void FUN_102720d7c(undefined8 param_1)

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
  plVar3[1] = 0x102720f58;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102720dec; end: 102720e57;  */

void FUN_102720dec(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102720f5c;
  plVar2[6] = lVar3;
  plVar2[7] = lVar5;
  plVar2[5] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[8] = lVar4;
  lVar4 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar2[9] = lVar3;
  plVar2[10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272d1cc,lVar3,lVar4);
  return;
}



/* Entry: 102720e58; end: 102720e97;  */

void FUN_102720e58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102720e98; end: 102720eab;  */

void FUN_102720e98(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110540a70;
  if (lRam0000000112ebac10 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ebac10 = param_1;
  }
  return;
}



/* Entry: 102720eac; end: 102720eef;  */

void FUN_102720eac(long param_1,long *param_2,long param_3)

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



/* Entry: 102720ef0; end: 102720f5f;  */

bool FUN_102720ef0(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102720f60; end: 10272109f;  */

void FUN_102720f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebac18,&UNK_10dad3370);
  puVar1 = &UNK_110540ac0;
  func_0x000107c613fc(&UNK_110540ac0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1027210a0,puVar1);
  return;
}



/* Entry: 1027210a0; end: 1027210ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027210a0(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&uStack_48);
  FUN_102723fc4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ebac20) = uStack_48;
  *(undefined8 *)(lVar4 + _DAT_112ebac28) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112ebac30) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_58 = lVar4;
  lStack_50 = lVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  plVar5 = &lStack_58;
  func_0x000107c61154(plVar5,puVar2);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 1027210ac; end: 10272111f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027210ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebac20) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebac28) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebac30) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102721120; end: 1027211b7;  */

void FUN_102721120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027211b8,uVar2,uVar3);
  return;
}



/* Entry: 1027211b8; end: 1027218b3;  */

void FUN_1027211b8(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  long unaff_x22;
  undefined *puVar23;
  undefined8 uVar24;
  byte bStack_7c;
  
  lVar20 = *(long *)(unaff_x22 + 0xa8);
  lVar16 = unaff_x22 + 0x90;
  func_0x000107c61428(lVar20 + 0x10,lVar16,0,0);
  lVar20 = lVar20 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe8) = lVar20;
  if (lVar20 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x0001027216a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(ulong *)(unaff_x22 + 0xb8);
  puVar22 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  *(undefined **)(unaff_x22 + 0xf0) = puVar22;
  if (uVar2 >> 0x3e == 0) {
    puVar13 = puVar22;
    puVar14 = *(undefined **)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)(uVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < *(undefined **)(unaff_x22 + 0xb8)) {
      puVar13 = *(undefined **)(unaff_x22 + 0xb8);
    }
    func_0x000107c60480();
    puVar14 = puVar13;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar14 != (undefined *)0x0) {
    func_0x000101f72030(0,(ulong)puVar14 & ((long)puVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1027218b0);
      (*pcVar4)();
    }
    lVar21 = *(long *)(unaff_x22 + 0xb8);
    puVar5 = PTR_PTR_1126b10a0;
    func_0x000107c61168();
    lVar6 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    lVar16 = 0x112ebac68;
    func_0x000107c61538();
    puVar23 = (undefined *)0x0;
    puVar15 = PTR___sytN_11034f1b0 + 8;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        puVar13 = *(undefined **)(lVar21 + 0x20 + (long)puVar23 * 8);
        func_0x000107c61174();
      }
      else {
        lVar16 = *(long *)(unaff_x22 + 0xb8);
        puVar13 = puVar23;
        func_0x00010271f86c();
      }
      lVar7 = lVar6;
      func_0x000100111634(lVar6);
      func_0x000100bcb1dc(lVar6 + 0x20);
      puVar8 = puVar13;
      func_0x000107c4e3bc();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) {
        bStack_7c = 0;
      }
      else {
        puVar9 = puVar8;
        func_0x000107c5faec();
        func_0x000107c61170(puVar8);
        lVar17 = lVar16;
        func_0x0001000f66f0(puVar9,lVar16,lVar7);
        bStack_7c = (byte)puVar9;
        func_0x000107c6142c(lVar16);
        lVar16 = lVar17;
      }
      func_0x000107c6142c(lVar7);
      puVar8 = puVar13;
      func_0x000107c4dfd8();
      func_0x000107c61180();
      lVar7 = lVar16;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c5faec();
        lVar7 = lVar16;
        func_0x000107c5fadc();
        func_0x000107c6142c(lVar16);
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 200);
      uVar24 = *(undefined8 *)(unaff_x22 + 200);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
      puVar10 = puVar5;
      func_0x000107c4dfcc();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61174();
      puVar8 = puVar13;
      func_0x000107c44fc0();
      func_0x000107c61180();
      puVar11 = puVar8;
      func_0x000107c5faec();
      func_0x000107c61170(puVar8);
      puVar12 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c61180();
      func_0x000107c54b80(0,0,0x4043000000000000,0x4043000000000000);
      func_0x000107c53840(puVar12);
      puVar8 = &UNK_110540b08;
      func_0x000107c613fc(&UNK_110540b08,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar20);
      puVar9 = &UNK_110540b30;
      func_0x000107c613fc(&UNK_110540b30,0x30,7);
      *(undefined **)(puVar9 + 0x10) = puVar12;
      *(undefined **)(puVar9 + 0x18) = puVar8;
      *(undefined **)(puVar9 + 0x20) = puVar11;
      *(long *)(puVar9 + 0x28) = lVar7;
      func_0x000107c61174(puVar12);
      func_0x000107c61434(lVar7);
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad33f0,puVar9,puVar15);
      func_0x000107c61574();
      func_0x000107c61574(puVar9);
      func_0x000107c6142c(lVar7);
      func_0x000107c61170(puVar12);
      func_0x000107c55b70(puVar10);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar10);
      puVar8 = &UNK_110540b08;
      func_0x000107c613fc(&UNK_110540b08,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar20);
      puVar9 = &UNK_110540b58;
      lVar16 = 0x40;
      func_0x000107c613fc(&UNK_110540b58,0x40,7);
      *(undefined **)(puVar9 + 0x10) = puVar13;
      *(undefined8 *)(puVar9 + 0x20) = uVar24;
      *(undefined8 *)(puVar9 + 0x18) = uVar19;
      *(undefined **)(puVar9 + 0x28) = puVar8;
      puVar9[0x30] = bStack_7c & 1;
      *(undefined **)(puVar9 + 0x38) = puVar22;
      *(code **)(unaff_x22 + 0x70) = FUN_1027240f8;
      *(undefined **)(unaff_x22 + 0x78) = puVar9;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110540b70;
      lVar7 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar7);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c61174();
      func_0x000107c6157c(uVar18);
      func_0x000107c61174(puVar22);
      func_0x000107c61574(uVar19);
      puVar8 = puVar10;
      func_0x000107c3eae8();
      func_0x000107c61180();
      func_0x000107c60bd0(lVar7);
      func_0x000107c61170(puVar10);
      func_0x000107c61170();
      uVar1 = *(ulong *)(puVar3 + 0x10);
      lVar7 = uVar1 + 1;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        lVar16 = lVar7;
        func_0x000101f72030(puVar13,lVar7,1);
      }
      puVar23 = puVar23 + 1;
      *(long *)(puVar3 + 0x10) = lVar7;
      *(undefined **)(puVar3 + uVar1 * 8 + 0x20) = puVar8;
    } while (puVar14 != puVar23);
  }
  func_0x000106879754();
  func_0x000107c61180();
  if (puVar13 == (undefined *)0x0) {
    puVar22 = (undefined *)0x0;
    lVar16 = 0;
  }
  else {
    puVar22 = puVar13;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  func_0x000106874f8c();
  func_0x000107c61180();
  if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1027218b4);
    (*pcVar4)();
  }
  puVar14 = PTR_PTR_1126b10a0;
  func_0x000107c61168(PTR_PTR_1126b10a0);
  func_0x000107c437a0();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  *(code **)(unaff_x22 + 0x70) = FUN_102722f1c;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110540b98;
  lVar20 = unaff_x22 + 0x50;
  func_0x000107c60bc4(lVar20);
  puVar13 = puVar14;
  func_0x000107c3eae8(puVar14);
  func_0x000107c61180();
  func_0x000107c60bd0(lVar20);
  func_0x000107c61170(puVar14);
  if (lVar16 == 0) {
    puVar22 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar22,lVar16);
    func_0x000107c6142c(lVar16);
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar14 = PTR_PTR_1126b10a8;
  func_0x000107c610f8();
  uVar18 = 0;
  FUN_10272451c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
  puVar15 = puVar3;
  func_0x000107c5fc48(puVar3,uVar18);
  func_0x000107c6142c(puVar3);
  func_0x000107c46c9c();
  *(undefined **)(unaff_x22 + 0xf8) = puVar14;
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar13);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1027218b4;
  lVar20 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar20,0);
  uVar18 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar18;
  *(long *)(unaff_x22 + 0x70) = lVar20;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100f5a198;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110540bc0;
  func_0x000107c4ee8c(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 1027218b4; end: 1027218ef;  */

void FUN_1027218b4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1027245d8,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 1027218f0; end: 102721987;  */

void FUN_1027218f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102721988,uVar2,uVar3);
  return;
}



/* Entry: 102721988; end: 102721fe7;  */

void FUN_102721988(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long unaff_x22;
  undefined *puVar22;
  undefined8 uVar23;
  
  lVar18 = *(long *)(unaff_x22 + 0xa8);
  uVar15 = unaff_x22 + 0x90;
  func_0x000107c61428(lVar18 + 0x10,uVar15,0,0);
  lVar18 = lVar18 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe8) = lVar18;
  if (lVar18 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000102721ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(ulong *)(unaff_x22 + 0xb8);
  puVar21 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  *(undefined **)(unaff_x22 + 0xf0) = puVar21;
  if (uVar2 >> 0x3e == 0) {
    puVar12 = puVar21;
    puVar13 = *(undefined **)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar12 = (undefined *)(uVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < *(undefined **)(unaff_x22 + 0xb8)) {
      puVar12 = *(undefined **)(unaff_x22 + 0xb8);
    }
    func_0x000107c60480();
    puVar13 = puVar12;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    uVar15 = (ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000101f72030(0,uVar15,0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102721fe4);
      (*pcVar4)();
    }
    lVar19 = *(long *)(unaff_x22 + 0xb8);
    puVar5 = PTR_PTR_1126b10a0;
    func_0x000107c61168();
    puVar22 = (undefined *)0x0;
    puVar14 = PTR___sytN_11034f1b0 + 8;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        puVar12 = *(undefined **)(lVar19 + 0x20 + (long)puVar22 * 8);
        func_0x000107c61174();
      }
      else {
        uVar15 = *(ulong *)(unaff_x22 + 0xb8);
        puVar12 = puVar22;
        func_0x00010271f86c();
      }
      puVar6 = puVar12;
      func_0x000107c4dfd8();
      func_0x000107c61180();
      uVar16 = uVar15;
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c5faec();
        uVar16 = uVar15;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar15);
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 200);
      uVar23 = *(undefined8 *)(unaff_x22 + 200);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xc0);
      puVar7 = puVar5;
      func_0x000107c4dfcc();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61174();
      puVar6 = puVar12;
      func_0x000107c44fc0();
      func_0x000107c61180();
      puVar8 = puVar6;
      func_0x000107c5faec();
      func_0x000107c61170(puVar6);
      puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c61180();
      func_0x000107c54b80(0,0,0x4043000000000000,0x4043000000000000);
      func_0x000107c53840(puVar9);
      puVar6 = &UNK_110540b08;
      func_0x000107c613fc(&UNK_110540b08,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar18);
      puVar10 = &UNK_110540c98;
      func_0x000107c613fc(&UNK_110540c98,0x30,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(undefined **)(puVar10 + 0x18) = puVar6;
      *(undefined **)(puVar10 + 0x20) = puVar8;
      *(ulong *)(puVar10 + 0x28) = uVar16;
      func_0x000107c61174(puVar9);
      func_0x000107c61434(uVar16);
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3418,puVar10,puVar14);
      func_0x000107c61574();
      func_0x000107c61574(puVar10);
      func_0x000107c6142c(uVar16);
      func_0x000107c61170(puVar9);
      func_0x000107c55b70(puVar7);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar7);
      puVar6 = &UNK_110540b08;
      func_0x000107c613fc(&UNK_110540b08,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,lVar18);
      puVar10 = &UNK_110540cc0;
      uVar15 = 0x40;
      func_0x000107c613fc(&UNK_110540cc0,0x40,7);
      *(undefined **)(puVar10 + 0x10) = puVar12;
      *(undefined8 *)(puVar10 + 0x20) = uVar23;
      *(undefined8 *)(puVar10 + 0x18) = uVar20;
      *(undefined **)(puVar10 + 0x28) = puVar6;
      puVar10[0x30] = 1;
      *(undefined **)(puVar10 + 0x38) = puVar21;
      *(undefined8 *)(unaff_x22 + 0x70) = 0x1027245b4;
      *(undefined **)(unaff_x22 + 0x78) = puVar10;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110540cd8;
      lVar11 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar11);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x78);
      func_0x000107c61174();
      func_0x000107c6157c(uVar17);
      func_0x000107c61174(puVar21);
      func_0x000107c61574(uVar20);
      puVar6 = puVar7;
      func_0x000107c3eae8();
      func_0x000107c61180();
      func_0x000107c60bd0(lVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61170();
      uVar1 = *(ulong *)(puVar3 + 0x10);
      uVar16 = uVar1 + 1;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        uVar15 = uVar16;
        func_0x000101f72030(puVar12,uVar16,1);
      }
      puVar22 = puVar22 + 1;
      *(ulong *)(puVar3 + 0x10) = uVar16;
      *(undefined **)(puVar3 + uVar1 * 8 + 0x20) = puVar6;
    } while (puVar13 != puVar22);
  }
  func_0x000106879724();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
    puVar21 = (undefined *)0x0;
    uVar15 = 0;
  }
  else {
    puVar21 = puVar12;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  func_0x000106874f8c();
  func_0x000107c61180();
  if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x102721fe8);
    (*pcVar4)();
  }
  puVar13 = PTR_PTR_1126b10a0;
  func_0x000107c61168(PTR_PTR_1126b10a0);
  func_0x000107c437a0();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  *(code **)(unaff_x22 + 0x70) = FUN_102722f1c;
  *(undefined8 *)(unaff_x22 + 0x78) = 0;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110540d00;
  lVar18 = unaff_x22 + 0x50;
  func_0x000107c60bc4(lVar18);
  puVar12 = puVar13;
  func_0x000107c3eae8(puVar13);
  func_0x000107c61180();
  func_0x000107c60bd0(lVar18);
  func_0x000107c61170(puVar13);
  if (uVar15 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar21,uVar15);
    func_0x000107c6142c(uVar15);
  }
  uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar13 = PTR_PTR_1126b10a8;
  func_0x000107c610f8();
  uVar17 = 0;
  FUN_10272451c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
  puVar14 = puVar3;
  func_0x000107c5fc48(puVar3,uVar17);
  func_0x000107c6142c(puVar3);
  func_0x000107c46c9c();
  *(undefined **)(unaff_x22 + 0xf8) = puVar13;
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar12);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102721fe8;
  lVar18 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar18,0);
  uVar17 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar17;
  *(long *)(unaff_x22 + 0x70) = lVar18;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100f5a198;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110540d28;
  func_0x000107c4ee8c(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102721fe8; end: 102722023;  */

void FUN_102721fe8(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102722024,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 102722024; end: 10272207b;  */

void FUN_102722024(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102722078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272207c; end: 10272210f;  */

void FUN_10272207c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102722110,uVar2,uVar3);
  return;
}



/* Entry: 102722110; end: 10272247b;  */

void FUN_102722110(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x90,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe0) = lVar8;
  if (lVar8 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x000102722470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar2 = lVar8;
  func_0x0001068752ec();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    puVar3 = PTR_PTR_1126b10a0;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c41858();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    puVar5 = &UNK_110540b08;
    func_0x000107c613fc(&UNK_110540b08,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar8);
    puVar6 = &UNK_110540ea0;
    func_0x000107c613fc(&UNK_110540ea0,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar9;
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    *(code **)(unaff_x22 + 0x70) = FUN_102724478;
    *(undefined **)(unaff_x22 + 0x78) = puVar6;
    puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110540eb8;
    lVar8 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61434(uVar7);
    func_0x000107c61574(uVar9);
    puVar6 = puVar4;
    func_0x000107c3eae8();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0xe8) = puVar6;
    func_0x000107c60bd0(lVar8);
    func_0x000107c61170(puVar4);
    lVar8 = 0x112d56ea0;
    FUN_102724008(0x112d56ea0,&PTR_PTR_1126b10a0,0x112d57348,&UNK_10da3b140);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar6;
    func_0x000107c61174();
    func_0x000106874f8c();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
      func_0x000107c437a0(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      *(code **)(unaff_x22 + 0x70) = FUN_102722f1c;
      *(undefined8 *)(unaff_x22 + 0x78) = 0;
      *(undefined **)(unaff_x22 + 0x50) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110540ee0;
      lVar2 = unaff_x22 + 0x50;
      func_0x000107c60bc4(lVar2);
      puVar6 = puVar3;
      func_0x000107c3eae8(puVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(lVar2);
      func_0x000107c61170(puVar3);
      puVar3 = PTR_PTR_1126b10a8;
      func_0x000107c610f8();
      uVar9 = 0;
      FUN_10272451c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
      lVar2 = lVar8;
      func_0x000107c5fc48(lVar8,uVar9);
      func_0x000107c61574(lVar8);
      func_0x000107c46c9c();
      *(undefined **)(unaff_x22 + 0xf0) = puVar3;
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar6);
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10272247c;
      lVar8 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar8,0);
      uVar9 = 0x112d4e498;
      func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
      *(undefined **)(unaff_x22 + 0x50) = puVar5;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x60) = &UNK_100f5a198;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110540f08;
      *(long *)(unaff_x22 + 0x70) = lVar8;
      func_0x000107c4ee8c(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10272247c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102722478);
  (*pcVar1)();
}



/* Entry: 10272247c; end: 1027224b7;  */

void FUN_10272247c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1027224b8,*(undefined8 *)(*unaff_x22 + 0xd0),*(undefined8 *)(*unaff_x22 + 0xd8));
  return;
}



/* Entry: 1027224b8; end: 10272250f;  */

void FUN_1027224b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010272250c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102722510; end: 102722633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102722510(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c4200c();
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000100083b20(&uStack_60);
    func_0x000107c61170(param_2);
    puVar1 = &UNK_110540f40;
    func_0x000107c613fc(&UNK_110540f40,0x18,7);
    func_0x000107c61644(puVar1 + 0x10,uStack_60);
    puVar2 = &UNK_110540f68;
    func_0x000107c613fc(&UNK_110540f68,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    func_0x000107c61434(param_4);
    uVar3 = 99;
    func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3430,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uStack_60);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 102722634; end: 1027226cb;  */

void FUN_102722634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 200) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027226cc,uVar2,uVar3);
  return;
}



/* Entry: 1027226cc; end: 1027229d7;  */

void FUN_1027226cc(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x90,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  if (lVar6 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x0001027227fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar10 = *(long *)(unaff_x22 + 0xb0);
  lVar6 = 0x112d56ea0;
  FUN_102724008(0x112d56ea0,&PTR_PTR_1126b10a0,0x112d57348,&UNK_10da3b140);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 7;
  *(undefined8 *)(lVar6 + 0x10) = 3;
  lVar9 = lVar10;
  FUN_102722a58(lVar10,lVar7,uVar5);
  *(long *)(lVar6 + 0x20) = lVar9;
  lVar9 = lVar10;
  func_0x000102722bcc(lVar10,lVar7,uVar5);
  *(long *)(lVar6 + 0x28) = lVar9;
  FUN_102722d40(lVar10,lVar7,uVar5);
  *(long *)(lVar6 + 0x30) = lVar10;
  func_0x000106874fbc();
  func_0x000107c61180();
  if (lVar10 == 0) {
    lVar9 = 0;
    lVar7 = 0;
  }
  else {
    lVar9 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170();
  }
  func_0x000106874f8c();
  func_0x000107c61180();
  if (lVar10 != 0) {
    puVar3 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c437a0();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    *(code **)(unaff_x22 + 0x70) = FUN_102722f1c;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101054b14;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110540d50;
    lVar10 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar10);
    puVar4 = puVar3;
    func_0x000107c3eae8(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(lVar10);
    func_0x000107c61170(puVar3);
    if (lVar7 == 0) {
      lVar9 = 0;
    }
    else {
      func_0x000107c5fadc(lVar9,lVar7);
      func_0x000107c6142c(lVar7);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 200);
    puVar3 = PTR_PTR_1126b10a8;
    func_0x000107c610f8();
    uVar5 = 0;
    FUN_10272451c(0,0x112d56ea0,&PTR_PTR_1126b10a0);
    lVar7 = lVar6;
    func_0x000107c5fc48(lVar6,uVar5);
    func_0x000107c61574(lVar6);
    func_0x000107c46c9c();
    *(undefined **)(unaff_x22 + 0xf0) = puVar3;
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar4);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1027229d8;
    lVar6 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar6,0);
    uVar5 = 0x112d4e498;
    func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(undefined **)(unaff_x22 + 0x50) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100f5a198;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110540d78;
    *(long *)(unaff_x22 + 0x70) = lVar6;
    func_0x000107c4ee8c(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027229d8);
  (*pcVar2)();
}



/* Entry: 1027229d8; end: 102722a13;  */

void FUN_1027229d8(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102722a14,*(undefined8 *)(*unaff_x22 + 0xd8),*(undefined8 *)(*unaff_x22 + 0xe0));
  return;
}



/* Entry: 102722a14; end: 102722a57;  */

void FUN_102722a14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102722a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102722a58; end: 102722d3f;  */

undefined * FUN_102722a58(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar2 = param_1;
  func_0x000106874fd4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5c6f0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61174(puVar3);
    func_0x000107c52170();
    uVar4 = 0xd000000000000094;
    FUN_102722f20(0xd000000000000094,0x800000010f0b8af0);
    func_0x000107c55b70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    puVar5 = &UNK_110540e50;
    func_0x000107c613fc(&UNK_110540e50,0x28,7);
    *(long *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    *(undefined8 *)(puVar5 + 0x20) = param_3;
    uStack_50 = 0x10272443c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101054b14;
    puStack_58 = &UNK_110540e68;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar5 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar5);
    puVar5 = puVar3;
    func_0x000107c3eae8(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102722bcc);
  (*pcVar1)();
}



/* Entry: 102722d40; end: 102722f1b;  */

undefined * FUN_102722d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar2 = param_1;
  func_0x000106875004();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b10a0;
    func_0x000107c61168(PTR_PTR_1126b10a0);
    func_0x000107c5c6f0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61174(puVar3);
    uVar8 = 0x800000010f0b89b0;
    uVar4 = 0xd000000000000094;
    FUN_102722f20(0xd000000000000094,0x800000010f0b89b0);
    func_0x000107c55b70(puVar3);
    func_0x000107c61170(uVar4);
    lVar2 = param_1;
    func_0x000107c43898();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar8);
    }
    func_0x000107c5405c(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    puVar5 = &UNK_110540b08;
    func_0x000107c613fc(&UNK_110540b08,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar6 = &UNK_110540db0;
    func_0x000107c613fc(&UNK_110540db0,0x30,7);
    *(undefined8 *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(long *)(puVar6 + 0x20) = param_1;
    *(undefined **)(puVar6 + 0x28) = puVar5;
    uStack_60 = 0x102724384;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101054b14;
    puStack_68 = &UNK_110540dc8;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar5 = puStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar5);
    puVar5 = puVar3;
    func_0x000107c3eae8(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102722f1c);
  (*pcVar1)();
}



/* Entry: 102722f1c; end: 102722f1f;  */

void FUN_102722f1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf82ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissActionSheet_1125be5a0);
  return;
}



/* Entry: 102722f20; end: 10272304b;  */

undefined * FUN_102722f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c54b80(0,0,0x4043000000000000,0x4043000000000000);
  func_0x000107c53840(puVar1);
  func_0x000107c61170(puVar1);
  puVar2 = &UNK_110540b08;
  func_0x000107c613fc(&UNK_110540b08,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110540c70;
  func_0x000107c613fc(&UNK_110540c70,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  func_0x000107c61174(puVar1);
  func_0x000107c61434(param_2);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3408,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return puVar1;
}



/* Entry: 10272304c; end: 1027231c3;  */

void FUN_10272304c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int unaff_w20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c4d078();
  uVar7 = 0;
  if (unaff_w20 == 2) {
    uVar7 = 100;
  }
  uVar1 = 0xe000000000000000;
  if (unaff_w20 == 2) {
    uVar1 = 0xe100000000000000;
  }
  uVar2 = 0x77;
  if (unaff_w20 != 1) {
    uVar2 = uVar7;
  }
  uVar3 = 0xe100000000000000;
  if (unaff_w20 != 1) {
    uVar3 = uVar1;
  }
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x25);
  func_0x000107c5fb78(0xd000000000000020,0x800000010f0b8b90);
  func_0x000107c4aad8();
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(&uStack_60,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2c,0xe100000000000000);
  func_0x000107c4b6f0();
  func_0x000107c5fddc(&uStack_60,puVar4,puVar5);
  uVar6 = uStack_58;
  uVar7 = uStack_60;
  if ((uVar3 >> 0x38 & 1) == 0) {
    func_0x000107c6142c(uVar3);
  }
  else {
    func_0x000107c5fb78(uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x3d676c6672696426,0xe800000000000000);
    func_0x000107c6142c(0xe800000000000000);
    uVar6 = uStack_58;
    uVar7 = uStack_60;
  }
  func_0x000107c5edd0(param_1,uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 1027231c4; end: 1027233b3;  */

void FUN_1027231c4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  uStack_68 = param_7;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4200c(param_1);
  (*param_5)(puVar11);
  puVar2 = puVar11;
  (**(code **)(lVar10 + 0x30))(puVar11,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar11);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar9,puVar11,lVar1);
    (*param_3)(param_6,uStack_68);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    FUN_1027243d0(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar10 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 1027233b4; end: 10272354f;  */

void FUN_1027233b4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int unaff_w20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c4d078();
  uVar7 = 0;
  if (unaff_w20 == 1) {
    uVar7 = 0x676e696b6c6177;
  }
  uVar1 = 0xe000000000000000;
  if (unaff_w20 == 1) {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x676e6976697264;
  if (unaff_w20 != 2) {
    uVar2 = uVar7;
  }
  uVar3 = 0xe700000000000000;
  if (unaff_w20 != 2) {
    uVar3 = uVar1;
  }
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  func_0x000107c5fb78(0xd000000000000033,0x800000010ef26f70);
  func_0x000107c4aad8();
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  func_0x000107c5fddc(&uStack_60,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x2c,0xe100000000000000);
  func_0x000107c4b6f0();
  func_0x000107c5fddc(&uStack_60,puVar4,puVar5);
  uVar6 = uStack_58;
  uVar7 = uStack_60;
  if ((uVar3 & 0x700000000000000) == 0) {
    func_0x000107c6142c(uVar3);
  }
  else {
    func_0x000107c5fb78(uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c5fb78(0x6d6c657661727426,0xec0000003d65646f);
    func_0x000107c6142c(0xec0000003d65646f);
    uVar6 = uStack_58;
    uVar7 = uStack_60;
  }
  func_0x000107c5edd0(param_1,uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  return;
}



/* Entry: 102723550; end: 10272384b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102723550(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  ulong uVar7;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  long alStack_c0 [2];
  undefined1 auStack_b0 [12];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar15 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  uStack_a4 = param_6;
  uStack_a0 = param_7;
  uStack_98 = param_4;
  pcStack_90 = param_3;
  lStack_88 = param_5;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_b0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar9 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar10 - extraout_x12;
  func_0x000107c4200c(param_1);
  lVar15 = param_2;
  func_0x000107c5d7e8(param_2);
  func_0x000107c61180();
  lVar2 = lVar15;
  func_0x000107c5faec();
  func_0x000107c61170(lVar15);
  func_0x000107c5edd0(puVar9,lVar2,puVar4);
  func_0x000107c6142c(puVar4);
  puVar3 = puVar9;
  (**(code **)(lVar13 + 0x30))(puVar9,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar9);
  }
  else {
    pcVar14 = *(code **)(lVar13 + 0x20);
    (*pcVar14)(lVar8,puVar9,lVar1);
    func_0x000107c4e3bc();
    func_0x000107c61180();
    if (param_2 == 0) {
      lVar15 = 0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      lVar15 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
    }
    (*pcStack_90)(lVar15,puVar9);
    func_0x000107c6142c(puVar9);
    lVar15 = lStack_88;
    func_0x000107c61428(lStack_88 + 0x10,auStack_78,0,0);
    lVar15 = lVar15 + 0x10;
    func_0x000107c61618();
    if (lVar15 != 0) {
      func_0x000100083b20(&uStack_80);
      func_0x000107c61170(lVar15);
      puVar4 = &UNK_110540bf8;
      func_0x000107c613fc(&UNK_110540bf8,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,uStack_80);
      (**(code **)(lVar13 + 0x10))(lVar10,lVar8,lVar1);
      uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
      uVar16 = uVar7 + 0x19 & (uVar7 ^ 0xffffffffffffffff);
      uVar12 = lVar11 + uVar16 + 7 & 0xfffffffffffffff8;
      puVar5 = &UNK_110540c20;
      func_0x000107c613fc(&UNK_110540c20,uVar12 + 8,uVar7 | 7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      puVar5[0x18] = (byte)uStack_a4 & 1;
      (*pcVar14)(puVar5 + uVar16,lVar10,lVar1);
      *(undefined8 *)(puVar5 + uVar12) = uStack_a0;
      func_0x000107c61174();
      *(undefined **)(lVar8 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar6 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad33f8,puVar5);
      func_0x000107c61170(uStack_80);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(uVar6);
    }
    (**(code **)(lVar13 + 8))(lVar8,lVar1);
  }
  return;
}



/* Entry: 10272384c; end: 10272399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272384c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c4200c();
  uVar4 = 0xec00000053534552;
  (*param_2)(0x4444415f59504f43,0xec00000053534552);
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  func_0x000107c43d80();
  func_0x000107c61180();
  func_0x000107c43898();
  func_0x000107c61180();
  if (param_4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
  }
  func_0x000107c59a00(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  puVar5 = auStack_48;
  func_0x000107c61428(param_5 + 0x10,puVar5,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    func_0x000100083b20(&uStack_50);
    func_0x000107c61170();
    func_0x00010687973c();
    func_0x000107c61180();
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10272399c);
      (*pcVar1)();
    }
    lVar3 = param_5;
    func_0x000107c5faec();
    func_0x000107c61170(param_5);
    FUN_10272bd18(lVar3,puVar5);
    func_0x000107c61170(uStack_50);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 10272399c; end: 102723a2b;  */

void FUN_10272399c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xb8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102723a2c,0,0);
  return;
}



/* Entry: 102723a2c; end: 102723bdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102723a2c(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x98) & 0xffffffffffff;
  if ((*(ulong *)(unaff_x22 + 0xa0) & 0x2000000000000000) != 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0xa0) >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar6 = *(long *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c5edd0(uVar5);
    (**(code **)(lVar6 + 0x30))(uVar5,1,uVar7);
    if ((int)uVar5 == 1) {
      func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0xb0));
    }
    else {
      lVar6 = *(long *)(unaff_x22 + 0xa8);
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x20))
                (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xb0),
                 *(undefined8 *)(unaff_x22 + 0xb8));
      lVar2 = *(long *)(lVar6 + _DAT_112ebac20);
      func_0x000107c5b034();
      func_0x000107c61180();
      lVar6 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xd0) = lVar6;
      func_0x000107c61170(lVar2);
      if (lVar6 != 0) {
        puVar3 = PTR_PTR_1126b20c0;
        func_0x000107c61168();
        puVar4 = puVar3;
        func_0x000107c5ed90();
        *(undefined **)(unaff_x22 + 0xd8) = puVar4;
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_102723bdc;
        lVar2 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar2,1);
        uVar7 = 0x112d9f9b0;
        func_0x0001000285a8(0x112d9f9b0,&UNK_10d9b8350);
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar7;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_10144fa88;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_110540c38;
        *(long *)(unaff_x22 + 0x70) = lVar2;
        func_0x000106879d48(puVar3,puVar4,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
                (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xb8));
    }
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102723bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102723bdc; end: 102723c33;  */

void FUN_102723bdc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102723c34;
  }
  else {
    pcVar1 = FUN_102723ca8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102723c34; end: 102723ca7;  */

void FUN_102723c34(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd0));
  (**(code **)(lVar1 + 8))(uVar2,uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102723ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102723ca8; end: 102723d3b;  */

void FUN_102723ca8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar4);
  func_0x000107c614ac(uVar3);
  (**(code **)(lVar5 + 8))(uVar1,uVar2);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102723d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102723d3c; end: 102723dcf;  */

void FUN_102723d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102723dd0,uVar2,uVar3);
  return;
}



/* Entry: 102723dd0; end: 102723e6f;  */

void FUN_102723dd0(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar4;
  if (lVar4 != 0) {
    plVar3 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102723e70;
    lVar1 = *(long *)(unaff_x22 + 0x38);
    plVar3[0x14] = *(long *)(unaff_x22 + 0x40);
    plVar3[0x15] = lVar4;
    plVar3[0x13] = lVar1;
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x16] = uVar2;
    lVar4 = 0;
    func_0x000107c5ede0();
    plVar3[0x17] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar3[0x18] = lVar4;
    uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x19] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102723a2c,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c55258(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000102723e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102723e70; end: 102723ec3;  */

void FUN_102723e70(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102723ec4,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  return;
}



/* Entry: 102723ec4; end: 102723f0b;  */

void FUN_102723ec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c55258(*(undefined8 *)(unaff_x22 + 0x28),param_2,uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102723f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102723f0c; end: 102723f6b; -[_TtC26VenueProfileImplementation32PlaceProfileActionSheetPresenter init] */

void FUN_102723f0c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueProfileImplementation.PlaceProfileActionSheetPresenter",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102723f38);
  (*pcVar1)();
}



/* Entry: 102723f6c; end: 102723f7b;  */

undefined1  [16] FUN_102723f6c(void)

{
  return ZEXT816(0x110540ae8);
}



/* Entry: 102723f7c; end: 102723fc3; -[_TtC26VenueProfileImplementation32PlaceProfileActionSheetPresenter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102723f7c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebac28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebac30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebac20));
  return;
}



/* Entry: 102723fc4; end: 102723fe3;  */

void FUN_102723fc4(void)

{
  func_0x000107c61168(&PTR_PTR_11285da80);
  return;
}



/* Entry: 102723fe4; end: 102724007;  */

void FUN_102723fe4(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ebac98;
  plVar5 = (long *)&UNK_10dad3440;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10272451c(0,0x112ebabf8,&PTR_PTR_1126b1ef8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102724008; end: 10272407f;  */

void FUN_102724008(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10272451c(0,param_1,param_2);
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



/* Entry: 102724080; end: 1027240f7;  */

void FUN_102724080(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1027245c8;
  plVar6[7] = lVar4;
  plVar6[8] = lVar2;
  plVar6[5] = lVar5;
  plVar6[6] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[9] = lVar5;
  lVar5 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[10] = lVar4;
  plVar6[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102723dd0,lVar4,lVar5);
  return;
}



/* Entry: 1027240f8; end: 10272412f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027240f8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long alStack_c0 [2];
  undefined1 auStack_b0 [12];
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcStack_90 = *(code **)(unaff_x20 + 0x18);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_88 = *(long *)(unaff_x20 + 0x28);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_a4 = (uint)*(byte *)(unaff_x20 + 0x30);
  lVar16 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar10 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - extraout_x12;
  func_0x000107c4200c(param_1);
  lVar16 = lVar4;
  func_0x000107c5d7e8(lVar4);
  func_0x000107c61180();
  lVar2 = lVar16;
  func_0x000107c5faec();
  func_0x000107c61170(lVar16);
  func_0x000107c5edd0(puVar10,lVar2,puVar5);
  func_0x000107c6142c(puVar5);
  puVar3 = puVar10;
  (**(code **)(lVar14 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    pcVar15 = *(code **)(lVar14 + 0x20);
    (*pcVar15)(lVar9,puVar10,lVar1);
    func_0x000107c4e3bc();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar16 = 0;
      puVar10 = (undefined1 *)0x0;
    }
    else {
      lVar16 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    (*pcStack_90)(lVar16,puVar10);
    func_0x000107c6142c(puVar10);
    lVar16 = lStack_88;
    func_0x000107c61428(lStack_88 + 0x10,auStack_78,0,0);
    lVar16 = lVar16 + 0x10;
    func_0x000107c61618();
    if (lVar16 != 0) {
      func_0x000100083b20(&uStack_80);
      func_0x000107c61170(lVar16);
      puVar5 = &UNK_110540bf8;
      func_0x000107c613fc(&UNK_110540bf8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,uStack_80);
      (**(code **)(lVar14 + 0x10))(lVar11,lVar9,lVar1);
      uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar17 = uVar8 + 0x19 & (uVar8 ^ 0xffffffffffffffff);
      uVar13 = lVar12 + uVar17 + 7 & 0xfffffffffffffff8;
      puVar6 = &UNK_110540c20;
      func_0x000107c613fc(&UNK_110540c20,uVar13 + 8,uVar8 | 7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      puVar6[0x18] = (byte)uStack_a4 & 1;
      (*pcVar15)(puVar6 + uVar17,lVar11,lVar1);
      *(undefined8 *)(puVar6 + uVar13) = uStack_a0;
      func_0x000107c61174();
      *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar7 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad33f8,puVar6);
      func_0x000107c61170(uStack_80);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar7);
    }
    (**(code **)(lVar14 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 102724130; end: 1027241d3;  */

void FUN_102724130(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x19 & (uVar5 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xffffffffffffff8));
  plVar4 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1027241d4;
  plVar4[0x1f] = unaff_x20 + uVar5;
  plVar4[0x20] = lVar3;
  *(undefined1 *)((long)plVar4 + 0x141) = uVar1;
  plVar4[0x1e] = lVar6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar2 = PTR___sScMMa_11034fc70;
  lVar3 = lVar6;
  func_0x000107c5fce8();
  plVar4[0x21] = lVar3;
  lVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x22] = lVar6;
  plVar4[0x23] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c988,lVar6,lVar3);
  return;
}



/* Entry: 1027241d4; end: 10272420f;  */

void FUN_1027241d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010272420c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102724210; end: 102724287;  */

void FUN_102724210(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1027245cc;
  plVar6[7] = lVar4;
  plVar6[8] = lVar2;
  plVar6[5] = lVar5;
  plVar6[6] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[9] = lVar5;
  lVar5 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[10] = lVar4;
  plVar6[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102723dd0,lVar4,lVar5);
  return;
}



/* Entry: 102724288; end: 1027242bb;  */

void FUN_102724288(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027242bc; end: 102724333;  */

void FUN_1027242bc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1027245d0;
  plVar6[7] = lVar4;
  plVar6[8] = lVar2;
  plVar6[5] = lVar5;
  plVar6[6] = lVar1;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar5 = lVar4;
  func_0x000107c5fce8();
  plVar6[9] = lVar5;
  lVar5 = 0x112d45220;
  FUN_1027243d0(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[10] = lVar4;
  plVar6[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102723dd0,lVar4,lVar5);
  return;
}



/* Entry: 102724334; end: 10272436f;  */

void FUN_102724334(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102724370; end: 10272438f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102724370(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long extraout_x12;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  ulong uVar17;
  long alStack_c0 [2];
  undefined1 auStack_b0 [12];
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcStack_90 = *(code **)(unaff_x20 + 0x18);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x20);
  lStack_88 = *(long *)(unaff_x20 + 0x28);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_a4 = (uint)*(byte *)(unaff_x20 + 0x30);
  lVar16 = 0x112d36580;
  puVar5 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar1 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar10 - (lVar12 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - extraout_x12;
  func_0x000107c4200c(param_1);
  lVar16 = lVar4;
  func_0x000107c5d7e8(lVar4);
  func_0x000107c61180();
  lVar2 = lVar16;
  func_0x000107c5faec();
  func_0x000107c61170(lVar16);
  func_0x000107c5edd0(puVar10,lVar2,puVar5);
  func_0x000107c6142c(puVar5);
  puVar3 = puVar10;
  (**(code **)(lVar14 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar3 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    pcVar15 = *(code **)(lVar14 + 0x20);
    (*pcVar15)(lVar9,puVar10,lVar1);
    func_0x000107c4e3bc();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar16 = 0;
      puVar10 = (undefined1 *)0x0;
    }
    else {
      lVar16 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    (*pcStack_90)(lVar16,puVar10);
    func_0x000107c6142c(puVar10);
    lVar16 = lStack_88;
    func_0x000107c61428(lStack_88 + 0x10,auStack_78,0,0);
    lVar16 = lVar16 + 0x10;
    func_0x000107c61618();
    if (lVar16 != 0) {
      func_0x000100083b20(&uStack_80);
      func_0x000107c61170(lVar16);
      puVar5 = &UNK_110540bf8;
      func_0x000107c613fc(&UNK_110540bf8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,uStack_80);
      (**(code **)(lVar14 + 0x10))(lVar11,lVar9,lVar1);
      uVar8 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar17 = uVar8 + 0x19 & (uVar8 ^ 0xffffffffffffffff);
      uVar13 = lVar12 + uVar17 + 7 & 0xfffffffffffffff8;
      puVar6 = &UNK_110540c20;
      func_0x000107c613fc(&UNK_110540c20,uVar13 + 8,uVar8 | 7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      puVar6[0x18] = (byte)uStack_a4 & 1;
      (*pcVar15)(puVar6 + uVar17,lVar11,lVar1);
      *(undefined8 *)(puVar6 + uVar13) = uStack_a0;
      func_0x000107c61174();
      *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar7 = 99;
      func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad33f8,puVar6);
      func_0x000107c61170(uStack_80);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar7);
    }
    (**(code **)(lVar14 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 102724390; end: 1027243cf;  */

void FUN_102724390(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1027231c4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_1027233b4,0x4d5f454c474f4f47,
                0xeb00000000535041);
  return;
}



/* Entry: 1027243d0; end: 10272440f;  */

void FUN_1027243d0(long *param_1,code *param_2,long param_3)

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



/* Entry: 102724410; end: 102724477;  */

void FUN_102724410(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102724478; end: 102724483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102724478(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4200c();
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000100083b20(&uStack_60);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_110540f40;
    func_0x000107c613fc(&UNK_110540f40,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,uStack_60);
    puVar3 = &UNK_110540f68;
    func_0x000107c613fc(&UNK_110540f68,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = uVar4;
    *(undefined8 *)(puVar3 + 0x20) = uVar5;
    func_0x000107c61434(uVar5);
    uVar4 = 99;
    func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3430,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uStack_60);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 102724484; end: 1027244af;  */

void FUN_102724484(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027244b0; end: 10272451b;  */

void FUN_1027244b0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1027245d4;
  plVar1[0x16] = lVar2;
  plVar1[0x17] = lVar4;
  plVar1[0x15] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar1[0x18] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[0x19] = lVar2;
  plVar1[0x1a] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272f098,lVar2,lVar3);
  return;
}


