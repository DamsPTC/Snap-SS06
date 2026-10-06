/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c0b8b8; end: 101c0b963;  */

void FUN_101c0b8b8(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101c0c01c;
  plVar2[3] = unaff_x20 + uVar3;
  plVar2[4] = lVar4;
  plVar2[2] = param_1;
  lVar4 = 0x112e08e28;
  func_0x0001000285a8(0x112e08e28,&UNK_10d9de590,uVar1);
  plVar2[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[6] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09c3c,0,0);
  return;
}



/* Entry: 101c0b964; end: 101c0b9cf;  */

void FUN_101c0b964(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101c0b9d0;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a0a8,0,0);
  return;
}



/* Entry: 101c0b9d0; end: 101c0ba0b;  */

void FUN_101c0b9d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c0ba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c0ba0c; end: 101c0ba53;  */

void FUN_101c0ba0c(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_50 [15];
  undefined1 uStack_41;
  
  lVar2 = 0x112e08dc8;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar2 = 0x112e08e30;
  func_0x0001000285a8(uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff),0x112e08e30,&UNK_10d9de598);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = 0x112e08dc8;
  uStack_41 = param_1;
  func_0x0001000285a8(0x112e08dc8,&UNK_10d9de468);
  func_0x000107c5fd28(auStack_50 + -extraout_x8,&uStack_41,uVar1);
  (**(code **)(lVar4 + 8))(auStack_50 + -extraout_x8,lVar2);
  return;
}



/* Entry: 101c0ba54; end: 101c0baa7;  */

void FUN_101c0ba54(long param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  func_0x0001000285a8();
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  (**(code **)(*(long *)(param_1 + -8) + 8))
            (unaff_x20 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)),param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c0baa8; end: 101c0badf;  */

void FUN_101c0baa8(void)

{
  long lVar1;
  long extraout_x8;
  ulong uVar2;
  long lVar3;
  
  lVar1 = 0x112e009e8;
  func_0x0001000285a8(0x112e009e8,&UNK_10d9d5e80);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  lVar1 = 0x112e00a00;
  func_0x0001000285a8(uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff),0x112e00a00,&UNK_10d9d5e90);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fd24(&stack0xffffffffffffffd0 + -extraout_x8);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffd0 + -extraout_x8,lVar1);
  return;
}



/* Entry: 101c0bae0; end: 101c0bb67;  */

undefined8 FUN_101c0bae0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101c0bb68; end: 101c0bc67;  */

void FUN_101c0bb68(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  lVar3 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  lVar4 = *(long *)(lVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = uVar5 + *(long *)(lVar4 + 0x40);
  uVar6 = lVar1 + 0x67U & 0xfffffffffffffff8;
  (**(code **)(lVar4 + 8))(unaff_x20 + uVar5,lVar3);
  puVar2 = (undefined8 *)(unaff_x20 + (lVar1 + 7U & 0xfffffffffffffff8));
  func_0x000107c61574(*puVar2);
  func_0x000107c61574(puVar2[1]);
  func_0x000107c61574(puVar2[2]);
  func_0x000107c61574(puVar2[3]);
  func_0x000107c61574(puVar2[4]);
  func_0x000107c61574(puVar2[5]);
  func_0x000107c61574(puVar2[6]);
  func_0x000107c61574(puVar2[7]);
  func_0x000107c61574(puVar2[8]);
  func_0x00010007d980(puVar2[9],puVar2[10],*(undefined1 *)(puVar2 + 0xb));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + uVar6));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + uVar6 + 8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + uVar6 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c0bc68; end: 101c0bd3b;  */

void FUN_101c0bc68(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar5 = 0x112e009e0;
  func_0x0001000285a8(0x112e009e0,&UNK_10d9d0d50);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar8 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  lVar2 = uVar8 + *(long *)(*(long *)(lVar5 + -8) + 0x40);
  uVar4 = lVar2 + 0x67U & 0xfffffffffffffff8;
  lVar5 = *(long *)(unaff_x20 + uVar4);
  lVar6 = *(long *)(unaff_x20 + uVar4 + 8);
  lVar7 = *(long *)(unaff_x20 + (uVar4 + 0x17 & 0xffffffffffffff8));
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c0c034;
  plVar3[4] = lVar6;
  plVar3[5] = lVar7;
  plVar3[2] = unaff_x20 + uVar8;
  plVar3[3] = lVar5;
  lVar5 = 0x112e00a10;
  func_0x0001000285a8(0x112e00a10,&UNK_10dc12dc0,unaff_x20 + (lVar2 + 7U & 0xfffffffffffffff8));
  plVar3[6] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar3[7] = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[8] = uVar4;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar3[9] = lVar5;
  lVar5 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[10] = lVar2;
  plVar3[0xb] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08418,lVar2,lVar5);
  return;
}



/* Entry: 101c0bd3c; end: 101c0bdff;  */

void FUN_101c0bd3c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  uint3 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  lVar12 = *(long *)(unaff_x20 + 0x48);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x50);
  uVar6 = *(uint3 *)(unaff_x20 + 0x40);
  lVar11 = *(long *)(unaff_x20 + 0x58);
  plVar10 = (long *)0x260;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = 0x101c0c024;
  plVar10[0x39] = lVar12;
  plVar10[0x3a] = lVar11;
  *(undefined1 *)((long)plVar10 + 0x24e) = uVar5;
  *(uint *)(plVar10 + 0x49) = (uint)uVar6;
  plVar10[0x37] = lVar1;
  plVar10[0x38] = lVar4;
  plVar10[0x35] = lVar8;
  plVar10[0x36] = lVar3;
  plVar10[0x33] = lVar9;
  plVar10[0x34] = lVar2;
  plVar10[0x32] = param_1;
  lVar8 = 0;
  func_0x000107c5fcec();
  puVar7 = PTR___sScMMa_11034fc70;
  plVar10[0x3b] = lVar8;
  lVar9 = lVar8;
  func_0x000107c5fce8();
  plVar10[0x3c] = lVar9;
  lVar9 = 0x112d45220;
  FUN_101c0aff8(0x112d45220,puVar7,PTR___sScMScAsMc_11034fc78);
  plVar10[0x3d] = lVar9;
  func_0x000107c5fca8();
  plVar10[0x3e] = lVar8;
  plVar10[0x3f] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c08eb0,lVar8,lVar9);
  return;
}



/* Entry: 101c0be00; end: 101c0be8b;  */

void FUN_101c0be00(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar1 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  lVar3 = *(long *)(lVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c0be8c; end: 101c0bf37;  */

void FUN_101c0be8c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar4 = 0x112e08dc0;
  func_0x0001000285a8(0x112e08dc0,&UNK_10d9de460);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar3 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar3 + 7 & 0xffffffffffffff8));
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101c0c028;
  plVar2[3] = unaff_x20 + uVar3;
  plVar2[4] = lVar4;
  plVar2[2] = param_1;
  lVar4 = 0x112e08e28;
  func_0x0001000285a8(0x112e08e28,&UNK_10d9de590,uVar1);
  plVar2[5] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[6] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c09c3c,0,0);
  return;
}



/* Entry: 101c0bf38; end: 101c0bf63;  */

void FUN_101c0bf38(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c0bf64; end: 101c0bfcf;  */

void FUN_101c0bf64(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101c0c02c;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0a0a8,0,0);
  return;
}



/* Entry: 101c0bfd0; end: 101c0c03f;  */

void FUN_101c0bfd0(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101c0a488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101c0c040; end: 101c0c097;  */

void FUN_101c0c040(undefined8 param_1)

{
  func_0x0001000285a8(0x112e08e90,&UNK_10d9de680);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x0001002acf1c(FUN_101c0c184,param_1);
  return;
}



/* Entry: 101c0c098; end: 101c0c183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0c098(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_101c0c8a0();
  func_0x000107c613fc();
  lVar1 = _DAT_112e08e98;
  uStack_51 = 0;
  func_0x000107c5f1fc(auStack_60 + -extraout_x8,&uStack_51,PTR___sSbN_11034dd40);
  (**(code **)(lVar4 + 0x20))(lVar3 + lVar1,auStack_60 + -extraout_x8,lVar2);
  *(undefined1 *)(lVar3 + _DAT_113803b98) = 4;
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *param_1 = lVar3;
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 101c0c184; end: 101c0c18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0c184(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar4;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_101c0c8a0();
  func_0x000107c613fc();
  lVar1 = _DAT_112e08e98;
  uStack_51 = 0;
  func_0x000107c5f1fc(auStack_60 + -extraout_x8,&uStack_51,PTR___sSbN_11034dd40);
  (**(code **)(lVar4 + 0x20))(lVar3 + lVar1,auStack_60 + -extraout_x8,lVar2);
  *(undefined1 *)(lVar3 + _DAT_113803b98) = 4;
  *(undefined8 *)(lVar3 + 0x10) = unaff_x20;
  *param_1 = lVar3;
  func_0x000107c6157c();
  return;
}



/* Entry: 101c0c18c; end: 101c0c1fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c0c18c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 uStack_21;
  
  func_0x000107c613fc();
  uStack_21 = 0;
  func_0x000107c5f1fc(unaff_x20 + _DAT_112e08e98,&uStack_21,PTR___sSbN_11034dd40);
  *(undefined1 *)(unaff_x20 + _DAT_113803b98) = 4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101c0c1fc; end: 101c0c26b;  */

undefined1 FUN_101c0c1fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10d9de750;
  func_0x000107c614e0(&UNK_10d9de750);
  puVar2 = &UNK_10d9de778;
  func_0x000107c614e0(&UNK_10d9de778);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 101c0c26c; end: 101c0c2e3;  */

void FUN_101c0c26c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x101) = param_4;
  *(undefined4 *)(unaff_x22 + 0xf8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0c2e4,uVar1,uVar2);
  return;
}



/* Entry: 101c0c2e4; end: 101c0c52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0c2e4(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  puVar8 = &UNK_10d9de750;
  func_0x000107c614e0(&UNK_10d9de750);
  puVar9 = &UNK_10d9de778;
  func_0x000107c614e0(&UNK_10d9de778);
  func_0x000107c5f20c(unaff_x22 + 0xfc,uVar13,puVar8,puVar9);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar8);
  if ((*(byte *)(unaff_x22 + 0xfc) & 1) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000101c0c384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  cVar5 = *(char *)(unaff_x22 + 0xfa);
  lVar12 = *(long *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(lVar12 + 0x18);
  lVar14 = *(long *)(lVar12 + 0x20);
  func_0x0001000a8868(lVar12,uVar13);
  (**(code **)(lVar14 + 8))(uVar13,lVar14);
  if (cVar5 != '\x05') {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar7 = *(undefined2 *)(unaff_x22 + 0xfa);
    uVar6 = *(undefined1 *)(unaff_x22 + 0x101);
    func_0x000100083b20(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar14 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,uVar3);
    (**(code **)(lVar14 + 8))(1,uVar7,0,2,uVar13,uVar6,uVar3,lVar14);
    func_0x0001000834e4(unaff_x22 + 0x88);
  }
  lVar14 = *(long *)(unaff_x22 + 200);
  uVar4 = *(uint *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar8 = &UNK_10d9de750;
  func_0x000107c614e0(&UNK_10d9de750);
  puVar9 = &UNK_10d9de778;
  func_0x000107c614e0(&UNK_10d9de778);
  *(undefined1 *)(unaff_x22 + 0xfd) = 1;
  func_0x000107c6157c(lVar14);
  func_0x000107c5f210((undefined1 *)(unaff_x22 + 0xfd),lVar14,puVar8,puVar9);
  uVar1 = uVar4 >> 8 & 0xff;
  if (*(byte *)(lVar14 + _DAT_113803b98) != 4) {
    uVar1 = (uint)*(byte *)(lVar14 + _DAT_113803b98);
  }
  uVar3 = *(undefined8 *)(lVar12 + 0x18);
  lVar14 = *(long *)(lVar12 + 0x20);
  func_0x0001000a8868(uVar13,uVar3);
  (**(code **)(lVar14 + 0x10))(unaff_x22 + 0x10,uVar3,lVar14);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar14 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar13);
  piVar11 = *(int **)(lVar14 + 0x10);
  iVar2 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe8) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101c0c52c;
                    /* WARNING: Could not recover jumptable at 0x000101c0c528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar11))
            (uVar4 & 0xff00ff | uVar1 << 8,*(undefined8 *)(unaff_x22 + 0xc0),
             *(undefined1 *)(unaff_x22 + 0x101),uVar13,lVar14);
  return;
}



/* Entry: 101c0c52c; end: 101c0c583;  */

void FUN_101c0c52c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xe8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101c0c584;
  }
  else {
    pcVar1 = FUN_101c0c680;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xd8),*(undefined8 *)(lVar2 + 0xe0));
  return;
}



/* Entry: 101c0c584; end: 101c0c67f;  */

void FUN_101c0c584(void)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0xfa);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar3 != '\x05') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined2 *)(unaff_x22 + 0xfa);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x101);
    func_0x000100083b20(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    func_0x0001000a8868(unaff_x22 + 0x60,uVar1);
    (**(code **)(lVar2 + 8))(3,uVar5,0,2,uVar8,uVar4,uVar1,lVar2);
    func_0x0001000834e4(unaff_x22 + 0x60);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 200);
  puVar6 = &UNK_10d9de750;
  func_0x000107c614e0(&UNK_10d9de750);
  puVar7 = &UNK_10d9de778;
  func_0x000107c614e0(&UNK_10d9de778);
  *(undefined1 *)(unaff_x22 + 0x100) = 0;
  func_0x000107c6157c(uVar8);
  func_0x000107c5f210(unaff_x22 + 0x100,uVar8,puVar6,puVar7);
                    /* WARNING: Could not recover jumptable at 0x000101c0c67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Entry: 101c0c680; end: 101c0c7f3;  */

void FUN_101c0c680(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0xfa);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd0));
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (cVar3 == '\x05') {
    func_0x000107c614ac();
  }
  else {
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xf0);
    func_0x000107c614b0();
    uVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    lVar6 = unaff_x22 + 0xff;
    func_0x000107c6147c(lVar6,unaff_x22 + 0xb0,uVar9,&UNK_1106c6770,6);
    if (((int)lVar6 == 0) || (*(char *)(unaff_x22 + 0xff) != '\x04')) {
      uVar9 = 5;
    }
    else {
      uVar9 = 4;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined2 *)(unaff_x22 + 0xfa);
    uVar4 = *(undefined1 *)(unaff_x22 + 0x101);
    func_0x000100083b20(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar6 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
    (**(code **)(lVar6 + 8))(uVar9,uVar5,0,2,uVar1,uVar4,uVar2,lVar6);
    func_0x000107c614ac(uVar10);
    func_0x0001000834e4(unaff_x22 + 0x38);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 200);
  puVar7 = &UNK_10d9de750;
  func_0x000107c614e0(&UNK_10d9de750);
  puVar8 = &UNK_10d9de778;
  func_0x000107c614e0(&UNK_10d9de778);
  *(undefined1 *)(unaff_x22 + 0xfe) = 0;
  func_0x000107c6157c(uVar9);
  func_0x000107c5f210((undefined1 *)(unaff_x22 + 0xfe),uVar9,puVar7,puVar8);
                    /* WARNING: Could not recover jumptable at 0x000101c0c7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101c0c7f4; end: 101c0c853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c0c7f4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = _DAT_112e08e98;
  lVar2 = 0x112d4ffc8;
  func_0x0001000285a8(0x112d4ffc8,&UNK_10d9de530);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c0c854; end: 101c0c85f;  */

undefined * FUN_101c0c854(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 101c0c860; end: 101c0c887;  */

void FUN_101c0c860(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c0c888; end: 101c0c89f;  */

undefined1  [16] FUN_101c0c888(void)

{
  return ZEXT816(0x1104562d0);
}



/* Entry: 101c0c8a0; end: 101c0c8d7;  */

void FUN_101c0c8a0(undefined8 param_1)

{
  if (lRam0000000112e08ec8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e67ab34);
  return;
}



/* Entry: 101c0c8d8; end: 101c0c95b;  */

void FUN_101c0c8d8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBoWV_11034d678 + 0x40;
  lVar1 = 0x13f;
  func_0x000100f8b92c();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9de730;
    func_0x000107c61630(param_1,0x100,3,&puStack_38,param_1 + 0x50);
  }
  return;
}



/* Entry: 101c0c95c; end: 101c0ca33;  */

/* WARNING: Possible PIC construction at 0x000101c0c9ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c0c9b0) */

void FUN_101c0c95c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10d9de750;
  func_0x000107c614e0(&UNK_10d9de750);
  puVar2 = &UNK_10d9de778;
  func_0x000107c614e0(&UNK_10d9de778);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c0ca34; end: 101c0ca5f;  */

long FUN_101c0ca34(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c0ca60; end: 101c0ca6f;  */

void FUN_101c0ca60(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101c0ca70; end: 101c0ca9f;  */

void FUN_101c0ca70(undefined8 *param_1)

{
  FUN_101c0caa0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[3]);
  return;
}



/* Entry: 101c0caa0; end: 101c0caaf;  */

void FUN_101c0caa0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    param_2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 101c0cab0; end: 101c0cbbf;  */

undefined8 * FUN_101c0cab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_101c0ca60(uVar3,uVar1,uVar2);
  *param_1 = uVar3;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[3] = param_2[3];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101c0cbc0; end: 101c0cc33;  */

undefined8 * FUN_101c0cbc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_101c0caa0(uVar3,uVar4,uVar2);
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x21) = *(undefined2 *)((long)param_2 + 0x21);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return param_1;
}



/* Entry: 101c0cc34; end: 101c0cceb;  */

int FUN_101c0cc34(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c0ccec; end: 101c0ce9b;  */

void FUN_101c0ccec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 uStack_99;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  uVar15 = unaff_x20[3];
  uVar3 = *(undefined2 *)(unaff_x20 + 4);
  uVar1 = *(undefined1 *)((long)unaff_x20 + 0x22);
  uVar14 = unaff_x20[5];
  uVar2 = *(undefined1 *)(unaff_x20 + 6);
  uVar4 = uVar15;
  func_0x000107c61434();
  func_0x000101c12500();
  uVar5 = uVar4;
  uVar12 = param_3;
  func_0x000101c125cc();
  uVar6 = uVar5;
  uVar13 = uVar12;
  func_0x000101c12698();
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_70 = *(undefined1 *)(unaff_x20 + 2);
  puVar7 = &UNK_110456398;
  func_0x000107c613fc(&UNK_110456398,0x41,7);
  uVar16 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  *(undefined8 *)(puVar7 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar7 + 0x10) = uVar16;
  *(undefined8 *)(puVar7 + 0x28) = uVar17;
  *(undefined8 *)(puVar7 + 0x20) = uVar11;
  uVar16 = unaff_x20[4];
  *(undefined8 *)(puVar7 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar7 + 0x30) = uVar16;
  puVar7[0x40] = *(undefined1 *)(unaff_x20 + 6);
  puVar8 = &UNK_10d9de818;
  func_0x000107c614e0();
  puVar9 = &UNK_10d9de840;
  func_0x000107c614e0();
  puVar10 = &UNK_10d9de868;
  func_0x000107c614e0();
  func_0x000107c61434(uVar15);
  FUN_101c0cef0(&uStack_80,auStack_98);
  uVar11 = 0;
  FUN_101c0c8a0();
  uVar16 = uVar11;
  FUN_101c0cf40();
  func_0x000107c5f398();
  uStack_99 = 0;
  func_0x000107c5f728(auStack_98,&uStack_99,PTR___sSbN_11034dd40);
  *param_1 = puVar8;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = puVar9;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = puVar10;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = uVar11;
  param_1[9] = uVar16;
  *(undefined1 *)(param_1 + 10) = auStack_98[0];
  param_1[0xb] = uStack_90;
  param_1[0xc] = uVar15;
  *(undefined2 *)(param_1 + 0xd) = uVar3;
  *(undefined1 *)((long)param_1 + 0x6a) = uVar1;
  param_1[0xe] = uVar14;
  *(undefined1 *)(param_1 + 0xf) = uVar2;
  param_1[0x10] = uVar4;
  param_1[0x11] = param_3;
  param_1[0x12] = uVar5;
  param_1[0x13] = uVar12;
  param_1[0x14] = uVar6;
  param_1[0x15] = uVar13;
  param_1[0x16] = 0x101c0cee8;
  param_1[0x17] = puVar7;
  return;
}



/* Entry: 101c0ce9c; end: 101c0ced7;  */

void FUN_101c0ce9c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)*param_1;
  uVar2 = param_1[1];
  func_0x000101c107ec(pcVar1,uVar2,*(undefined1 *)(param_1 + 2));
  (*pcVar1)(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101c0ced8; end: 101c0ceef;  */

void FUN_101c0ced8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101c0cef0; end: 101c0cf3f;  */

undefined8 FUN_101c0cef0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e08e50;
  func_0x0001000285a8(0x112e08e50,&UNK_10d9de890);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c0cf40; end: 101c0cfc3;  */

void FUN_101c0cf40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e08dd8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101c0c8a0(0xff);
  puVar2 = &UNK_10d9de690;
  func_0x000107c61520(&UNK_10d9de690,uVar1);
  puRam0000000112e08dd8 = puVar2;
  return;
}



/* Entry: 101c0cfc4; end: 101c0d067;  */

long FUN_101c0cfc4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c0d068; end: 101c0d19b;  */

undefined8 * FUN_101c0d068(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)((long)param_2 + 0x11);
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_101c0154c(uVar1,uVar2,uVar5,uVar4);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar5;
  *(undefined1 *)((long)param_1 + 0x11) = uVar4;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  FUN_101c0ca60(uVar1,uVar2,uVar4);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar4;
  uVar4 = *(undefined1 *)(param_2 + 7);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = uVar4;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  uVar9 = param_2[0xe];
  uVar7 = param_2[0xd];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0xe] = uVar9;
  param_1[0xd] = uVar7;
  uVar7 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar7;
  uVar9 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar9;
  param_1[0x14] = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar8 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar8;
  param_1[0x17] = uVar6;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar8);
  func_0x000107c6157c(uVar6);
  return param_1;
}



/* Entry: 101c0d19c; end: 101c0d353;  */

undefined8 * FUN_101c0d19c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *param_2;
  uVar7 = param_2[1];
  uVar2 = *(undefined1 *)((long)param_2 + 0x11);
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101c0154c(uVar5,uVar7,uVar3,uVar2);
  uVar6 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar5;
  param_1[1] = uVar7;
  uVar4 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar3;
  uVar3 = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined1 *)((long)param_1 + 0x11) = uVar2;
  FUN_101c015ac(uVar6,uVar1,uVar4,uVar3);
  uVar5 = param_2[3];
  uVar7 = param_2[4];
  uVar2 = *(undefined1 *)(param_2 + 5);
  FUN_101c0ca60(uVar5,uVar7,uVar2);
  uVar6 = param_1[3];
  uVar1 = param_1[4];
  param_1[3] = uVar5;
  param_1[4] = uVar7;
  uVar3 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar2;
  FUN_101c0caa0(uVar6,uVar1,uVar3);
  uVar2 = *(undefined1 *)(param_2 + 7);
  uVar5 = param_1[6];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = uVar2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  uVar5 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6157c();
  func_0x000107c61574(uVar5);
  uVar5 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)((long)param_1 + 0x69) = *(undefined1 *)((long)param_2 + 0x69);
  *(undefined1 *)((long)param_1 + 0x6a) = *(undefined1 *)((long)param_2 + 0x6a);
  uVar5 = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  param_1[0xe] = uVar5;
  param_1[0x10] = param_2[0x10];
  uVar5 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[0x12] = param_2[0x12];
  uVar5 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  param_1[0x14] = param_2[0x14];
  uVar5 = param_1[0x15];
  param_1[0x15] = param_2[0x15];
  func_0x000107c61434();
  func_0x000107c6142c(uVar5);
  uVar6 = param_1[0x17];
  uVar5 = param_2[0x17];
  uVar7 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar7;
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(uVar6);
  return param_1;
}



/* Entry: 101c0d354; end: 101c0d46f;  */

undefined8 * FUN_101c0d354(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined2 *)(param_2 + 2);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined2 *)(param_1 + 2) = uVar3;
  FUN_101c015ac(uVar4,uVar5,uVar1,*(undefined1 *)((long)param_1 + 0x11));
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  FUN_101c0caa0(uVar4,uVar5,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 7);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = uVar1;
  func_0x000107c61574(uVar4);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61574(uVar4);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  func_0x000107c61574(param_1[0xb]);
  uVar4 = param_1[0xc];
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined2 *)((long)param_1 + 0x69) = *(undefined2 *)((long)param_2 + 0x69);
  param_1[0xe] = param_2[0xe];
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  uVar4 = param_2[0x11];
  uVar5 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar4;
  func_0x000107c6142c(uVar5);
  uVar4 = param_2[0x13];
  uVar5 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar4;
  func_0x000107c6142c(uVar5);
  param_1[0x14] = param_2[0x14];
  func_0x000107c6142c(param_1[0x15]);
  uVar5 = param_2[0x17];
  uVar4 = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x15] = uVar4;
  uVar4 = param_1[0x17];
  param_1[0x17] = uVar5;
  func_0x000107c61574(uVar4);
  return param_1;
}



/* Entry: 101c0d470; end: 101c0d547;  */

int FUN_101c0d470(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c0d548; end: 101c0d59b;  */

void FUN_101c0d548(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c5f438();
  *param_1 = uVar1;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112e08f78;
  func_0x0001000285a8(0x112e08f78,&UNK_10d9de918);
  FUN_101c0d59c((long)param_1 + (long)*(int *)(lVar2 + 0x2c),param_2);
  return;
}



/* Entry: 101c0d59c; end: 101c0da4b;  */

void FUN_101c0d59c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 auStack_1a0 [2];
  undefined *puStack_190;
  long alStack_188 [5];
  long lStack_160;
  long lStack_158;
  undefined1 auStack_150 [16];
  undefined8 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 **appuStack_70 [2];
  
  lVar4 = 0x112e02cd8;
  lStack_158 = param_1;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  alStack_188[2] = *(long *)(lVar4 + -8);
  alStack_188[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_188[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&puStack_190 - extraout_x8;
  lVar4 = 0x112e08f80;
  func_0x0001000285a8(0x112e08f80,&UNK_10d9deab0);
  alStack_188[4] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_160 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12;
  lVar4 = 0x112e08f88;
  func_0x0001000285a8(0x112e08f88,&UNK_10d9de920);
  alStack_188[3] = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_188[3] + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_188[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  pppuStack_140 = (undefined8 ***)param_2[0xc];
  puVar5 = &UNK_10d9de928;
  appuStack_70[0] = pppuStack_140;
  func_0x000107c614e0();
  puVar6 = &UNK_1104564a0;
  puStack_190 = puVar5;
  func_0x000107c613fc(&UNK_1104564a0,0xd0,7);
  uVar16 = param_2[0x10];
  uVar18 = param_2[0x13];
  uVar17 = param_2[0x12];
  *(undefined8 *)(puVar6 + 0x98) = param_2[0x11];
  *(undefined8 *)(puVar6 + 0x90) = uVar16;
  *(undefined8 *)(puVar6 + 0xa8) = uVar18;
  *(undefined8 *)(puVar6 + 0xa0) = uVar17;
  uVar16 = param_2[0x14];
  uVar18 = param_2[0x17];
  uVar17 = param_2[0x16];
  *(undefined8 *)(puVar6 + 0xb8) = param_2[0x15];
  *(undefined8 *)(puVar6 + 0xb0) = uVar16;
  *(undefined8 *)(puVar6 + 200) = uVar18;
  *(undefined8 *)(puVar6 + 0xc0) = uVar17;
  uVar16 = param_2[8];
  uVar18 = param_2[0xb];
  uVar17 = param_2[10];
  *(undefined8 *)(puVar6 + 0x58) = param_2[9];
  *(undefined8 *)(puVar6 + 0x50) = uVar16;
  *(undefined8 *)(puVar6 + 0x68) = uVar18;
  *(undefined8 *)(puVar6 + 0x60) = uVar17;
  uVar16 = param_2[0xc];
  uVar18 = param_2[0xf];
  uVar17 = param_2[0xe];
  *(undefined8 *)(puVar6 + 0x78) = param_2[0xd];
  *(undefined8 *)(puVar6 + 0x70) = uVar16;
  *(undefined8 *)(puVar6 + 0x88) = uVar18;
  *(undefined8 *)(puVar6 + 0x80) = uVar17;
  uVar16 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  *(undefined8 *)(puVar6 + 0x18) = param_2[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar16;
  *(undefined8 *)(puVar6 + 0x28) = uVar18;
  *(undefined8 *)(puVar6 + 0x20) = uVar17;
  uVar16 = param_2[4];
  uVar18 = param_2[7];
  uVar17 = param_2[6];
  *(undefined8 *)(puVar6 + 0x38) = param_2[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar16;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar17;
  uVar16 = 0x112e08e48;
  FUN_101c0e364(appuStack_70,&uStack_130,0x112e08e48,&UNK_10d9de610);
  FUN_101c0e204(param_2,&uStack_130);
  func_0x0001000285a8(0x112e08e48,&UNK_10d9de610);
  uVar17 = 0x112e08f90;
  func_0x0001000285a8(0x112e08f90,&UNK_10d9deb00);
  uVar18 = 0x112e08f98;
  func_0x000101c0e500(0x112e08f98,0x112e08e48,&UNK_10d9de610,PTR___sSayxGSksMc_11034dd18);
  uVar7 = uVar18;
  FUN_101c0e238();
  uVar8 = uVar7;
  FUN_101c0e278();
  *(undefined8 *)(lVar13 + -0x10) = uVar8;
  func_0x000107c5f788(lVar13,&pppuStack_140,puStack_190,0x101c0e1fc,puVar6,uVar16,uVar17,uVar18,
                      uVar7);
  uStack_128 = param_2[0x15];
  uStack_130 = param_2[0x14];
  uStack_138 = param_2[0x15];
  pppuStack_140 = (undefined8 ***)param_2[0x14];
  uVar17 = param_2[0x16];
  uVar16 = param_2[0x17];
  puVar9 = &uStack_130;
  func_0x000100402194(puVar9,auStack_150);
  func_0x000100e8b654();
  func_0x000107c6157c(uVar16);
  ppppuVar10 = &pppuStack_140;
  func_0x000107c5f744(lVar15,ppppuVar10,uVar17,uVar16,PTR___sSSN_11034da80,puVar9);
  func_0x000101c12fc0();
  uStack_138 = CONCAT62(uStack_138._2_6_,(short)uVar17);
  uVar16 = 0x112e02cf0;
  pppuStack_140 = ppppuVar10;
  func_0x000101c0e500(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar18 = uVar16;
  FUN_101c018d4();
  lVar11 = alStack_188[0];
  func_0x000107c5f60c(lVar12,&pppuStack_140,alStack_188[0],&UNK_110456990,uVar16,uVar18);
  FUN_101c01914(ppppuVar10,uVar17);
  (**(code **)(alStack_188[2] + 8))(lVar15,lVar11);
  uStack_138 = param_2[0xb];
  pppuStack_140 = (undefined8 ***)param_2[10];
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(auStack_150);
  puVar5 = &UNK_10d9de960;
  func_0x000107c614e0();
  puVar6 = &UNK_1104564c8;
  func_0x000107c613fc(&UNK_1104564c8,0x11,7);
  puVar6[0x10] = auStack_150[0];
  puVar9 = (undefined8 *)(lVar12 + *(int *)(alStack_188[4] + 0x24));
  *puVar9 = puVar5;
  puVar9[1] = FUN_101c0e350;
  puVar9[2] = puVar6;
  lVar1 = alStack_188[3];
  lVar15 = alStack_188[1];
  pcVar14 = *(code **)(alStack_188[3] + 0x10);
  (*pcVar14)(alStack_188[1],lVar13,lVar4);
  lVar2 = lStack_160;
  func_0x000100cc9f60(lVar12,lStack_160);
  lVar3 = lStack_158;
  (*pcVar14)(lStack_158,lVar15,lVar4);
  lVar11 = 0x112e08fb8;
  func_0x0001000285a8(0x112e08fb8,&UNK_10d9de990);
  func_0x000100cc9f60(lVar2,lVar3 + *(int *)(lVar11 + 0x30));
  func_0x000100cc9fb0(lVar12);
  pcVar14 = *(code **)(lVar1 + 8);
  (*pcVar14)(lVar13,lVar4);
  func_0x000100cc9fb0(lVar2);
  (*pcVar14)(lVar15,lVar4);
  return;
}



/* Entry: 101c0da4c; end: 101c0dbcb;  */

void FUN_101c0da4c(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar4);
  (**(code **)(lVar1 + 0x18))(param_1 + 5,uVar4,lVar1);
  func_0x0001011225e0(param_2,auStack_78);
  puVar2 = &UNK_1104564f0;
  func_0x000107c613fc(&UNK_1104564f0,0xf8,7);
  uVar4 = param_3[0x10];
  uVar6 = param_3[0x13];
  uVar5 = param_3[0x12];
  *(undefined8 *)(puVar2 + 0x98) = param_3[0x11];
  *(undefined8 *)(puVar2 + 0x90) = uVar4;
  *(undefined8 *)(puVar2 + 0xa8) = uVar6;
  *(undefined8 *)(puVar2 + 0xa0) = uVar5;
  uVar4 = param_3[0x14];
  uVar6 = param_3[0x17];
  uVar5 = param_3[0x16];
  *(undefined8 *)(puVar2 + 0xb8) = param_3[0x15];
  *(undefined8 *)(puVar2 + 0xb0) = uVar4;
  *(undefined8 *)(puVar2 + 200) = uVar6;
  *(undefined8 *)(puVar2 + 0xc0) = uVar5;
  uVar4 = param_3[8];
  uVar6 = param_3[0xb];
  uVar5 = param_3[10];
  *(undefined8 *)(puVar2 + 0x58) = param_3[9];
  *(undefined8 *)(puVar2 + 0x50) = uVar4;
  *(undefined8 *)(puVar2 + 0x68) = uVar6;
  *(undefined8 *)(puVar2 + 0x60) = uVar5;
  uVar4 = param_3[0xc];
  uVar6 = param_3[0xf];
  uVar5 = param_3[0xe];
  *(undefined8 *)(puVar2 + 0x78) = param_3[0xd];
  *(undefined8 *)(puVar2 + 0x70) = uVar4;
  *(undefined8 *)(puVar2 + 0x88) = uVar6;
  *(undefined8 *)(puVar2 + 0x80) = uVar5;
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(puVar2 + 0x18) = param_3[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(puVar2 + 0x38) = param_3[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x48) = uVar6;
  *(undefined8 *)(puVar2 + 0x40) = uVar5;
  func_0x000101122624(auStack_78,puVar2 + 0xd0);
  puVar3 = &UNK_10d9de998;
  func_0x000107c614e0();
  *param_1 = puVar3;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  uStack_80 = 0;
  FUN_101c0e204(param_3,&uStack_140);
  uVar4 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x000107c5f728(param_1 + 3,&uStack_80,uVar4);
  param_1[10] = 0x101c0e358;
  param_1[0xb] = puVar2;
  uStack_138 = param_3[0xb];
  uStack_140 = param_3[10];
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(auStack_78);
  puVar2 = &UNK_10d9de960;
  func_0x000107c614e0();
  puVar3 = &UNK_110456518;
  func_0x000107c613fc(&UNK_110456518,0x11,7);
  puVar3[0x10] = auStack_78[0];
  param_1[0xc] = puVar2;
  param_1[0xd] = FUN_101c0e544;
  param_1[0xe] = puVar3;
  return;
}



/* Entry: 101c0dbcc; end: 101c0dd7b;  */

void FUN_101c0dbcc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char acStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_48 = uStack_58;
  FUN_101c0e364(&uStack_48,acStack_68,0x112d4f590,&UNK_10d915440);
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(acStack_68);
  if (acStack_68[0] == '\x01') {
    func_0x000100f90b70(&uStack_60);
  }
  else {
    uStack_128 = param_1[0xb];
    uStack_130 = param_1[10];
    acStack_68[0] = '\x01';
    func_0x000107c5f730(acStack_68,uVar1);
    func_0x000100f90b70(&uStack_60);
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar4 = (ulong)*(ushort *)(param_1 + 2);
    FUN_101c10620(uVar1,uVar3,uVar4);
    func_0x0001011225e0(param_2,&uStack_130);
    puVar2 = &UNK_110456540;
    func_0x000107c613fc(&UNK_110456540,0xf8,7);
    uVar5 = param_1[0x10];
    uVar7 = param_1[0x13];
    uVar6 = param_1[0x12];
    *(undefined8 *)(puVar2 + 0x98) = param_1[0x11];
    *(undefined8 *)(puVar2 + 0x90) = uVar5;
    *(undefined8 *)(puVar2 + 0xa8) = uVar7;
    *(undefined8 *)(puVar2 + 0xa0) = uVar6;
    uVar5 = param_1[0x14];
    uVar7 = param_1[0x17];
    uVar6 = param_1[0x16];
    *(undefined8 *)(puVar2 + 0xb8) = param_1[0x15];
    *(undefined8 *)(puVar2 + 0xb0) = uVar5;
    *(undefined8 *)(puVar2 + 200) = uVar7;
    *(undefined8 *)(puVar2 + 0xc0) = uVar6;
    uVar5 = param_1[8];
    uVar7 = param_1[0xb];
    uVar6 = param_1[10];
    *(undefined8 *)(puVar2 + 0x58) = param_1[9];
    *(undefined8 *)(puVar2 + 0x50) = uVar5;
    *(undefined8 *)(puVar2 + 0x68) = uVar7;
    *(undefined8 *)(puVar2 + 0x60) = uVar6;
    uVar5 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    *(undefined8 *)(puVar2 + 0x78) = param_1[0xd];
    *(undefined8 *)(puVar2 + 0x70) = uVar5;
    *(undefined8 *)(puVar2 + 0x88) = uVar7;
    *(undefined8 *)(puVar2 + 0x80) = uVar6;
    uVar5 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    *(undefined8 *)(puVar2 + 0x18) = param_1[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar5;
    *(undefined8 *)(puVar2 + 0x28) = uVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar6;
    uVar5 = param_1[4];
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    *(undefined8 *)(puVar2 + 0x38) = param_1[5];
    *(undefined8 *)(puVar2 + 0x30) = uVar5;
    *(undefined8 *)(puVar2 + 0x48) = uVar7;
    *(undefined8 *)(puVar2 + 0x40) = uVar6;
    func_0x000101122624(&uStack_130,puVar2 + 0xd0);
    FUN_101c0e204(param_1,&uStack_130);
    uVar5 = uVar1;
    func_0x0001001ca524(uVar1,uVar3,uVar4,3,0,0,&UNK_10d9de9c8,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
    func_0x00010007d980(uVar1,uVar3,uVar4);
  }
  return;
}



/* Entry: 101c0dd7c; end: 101c0de0b;  */

void FUN_101c0dd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c0e4c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0de0c,uVar2,uVar3);
  return;
}



/* Entry: 101c0de0c; end: 101c0def3;  */

void FUN_101c0de0c(void)

{
  undefined1 uVar1;
  uint3 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x70);
  lVar7 = *(long *)(lVar5 + 0x40);
  *(long *)(unaff_x22 + 0x98) = lVar7;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar5 + 0x70);
    plVar9 = (long *)0x110;
    uVar2 = *(uint3 *)(lVar5 + 0x68);
    uVar1 = *(undefined1 *)(lVar5 + 0x78);
    func_0x000107c6157c(lVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101c0def4;
    lVar5 = *(long *)(unaff_x22 + 0x78);
    plVar9[0x18] = lVar6;
    plVar9[0x19] = lVar7;
    *(undefined1 *)((long)plVar9 + 0x101) = uVar1;
    *(uint *)(plVar9 + 0x1f) = (uint)uVar2;
    plVar9[0x17] = lVar5;
    lVar7 = 0;
    func_0x000107c5fcec();
    lVar5 = lVar7;
    func_0x000107c5fce8();
    plVar9[0x1a] = lVar5;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar9[0x1b] = lVar7;
    plVar9[0x1c] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0c2e4,lVar7,lVar5);
    return;
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x48);
  uVar3 = 0;
  FUN_101c0c8a0(0);
  uVar4 = 0x112e08dd8;
  FUN_101c0e4c0(0x112e08dd8,FUN_101c0c8a0,&UNK_10d9de690);
                    /* WARNING: Could not recover jumptable at 0x00010bdb614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI17EnvironmentObjectV5errors5NeverOyF_110348c18)(0,uVar8,uVar3,uVar4);
  return;
}



/* Entry: 101c0def4; end: 101c0df47;  */

void FUN_101c0def4(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  *(undefined1 *)(lVar2 + 0xa9) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c0df48,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
  return;
}



/* Entry: 101c0df48; end: 101c0e0db;  */

void FUN_101c0df48(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  cVar3 = *(char *)(unaff_x22 + 0xa9);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  lVar7 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar6 = *(undefined8 *)(lVar7 + 0x58);
  uVar4 = *(undefined8 *)(lVar7 + 0x50);
  *(undefined1 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  uVar4 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xa8),uVar4);
  uVar4 = *(undefined8 *)(lVar7 + 0x30);
  FUN_101c10998(uVar4,*(undefined1 *)(lVar7 + 0x38));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  if (cVar3 == '\x01') {
    lVar8 = *(long *)(unaff_x22 + 0x70);
    func_0x000100083b20(unaff_x22 + 0x38);
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar7 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(uVar6,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,lVar1);
    (**(code **)(lVar7 + 0x18))(uVar4,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x38);
    pcVar5 = *(code **)(lVar8 + 0x18);
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    func_0x000101c107ec(pcVar5,uVar4,*(undefined1 *)(lVar8 + 0x28));
    (*pcVar5)(0);
    func_0x000107c61574(uVar4);
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x10);
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar7 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(uVar6,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,lVar1);
    (**(code **)(lVar7 + 0x20))(uVar4,lVar7);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c0e0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c0e0dc; end: 101c0e0e7;  */

void FUN_101c0e0dc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101c0e0e8; end: 101c0e1f3;  */

void FUN_101c0e0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_150 [16];
  undefined8 *puStack_140;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar5 = unaff_x20[0x11];
  uVar4 = unaff_x20[0x10];
  uVar7 = unaff_x20[0x13];
  uVar6 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  uStack_b0 = uVar4;
  uStack_a8 = uVar5;
  uStack_a0 = uVar6;
  uStack_98 = uVar7;
  func_0x000107c61434(uVar7);
  uVar1 = uVar5;
  func_0x000107c61434(uVar5);
  func_0x000101c12764();
  puStack_140 = &uStack_130;
  uVar2 = 0x112e08f68;
  func_0x0001000285a8(0x112e08f68,&UNK_10d9de910);
  uVar3 = 0x112e08f70;
  func_0x000101c0e500(0x112e08f70,0x112e08f68,&UNK_10d9de910,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  FUN_101c13d3c(param_1,uVar4,uVar5,uVar6,uVar7,uVar1,param_3,FUN_101c0e1f4,auStack_150,uVar2,uVar3)
  ;
  return;
}



/* Entry: 101c0e1f4; end: 101c0e203;  */

void FUN_101c0e1f4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = uVar3;
  func_0x000107c5f438();
  *param_1 = uVar1;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112e08f78;
  func_0x0001000285a8(0x112e08f78,&UNK_10d9de918);
  FUN_101c0d59c((long)param_1 + (long)*(int *)(lVar2 + 0x2c),uVar3);
  return;
}



/* Entry: 101c0e204; end: 101c0e237;  */

undefined8 FUN_101c0e204(undefined8 param_1,undefined8 param_2)

{
  FUN_101c0d068(param_2,param_1,&UNK_110456450);
  return param_2;
}



/* Entry: 101c0e238; end: 101c0e277;  */

void FUN_101c0e238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08fa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc465f8;
  func_0x000107c61520(&UNK_10dc465f8,&UNK_1106c6890);
  puRam0000000112e08fa0 = puVar1;
  return;
}



/* Entry: 101c0e278; end: 101c0e30f;  */

void FUN_101c0e278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e08fa8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e08f90;
  func_0x00010002969c(0x112e08f90,&UNK_10d9deb00);
  uVar2 = uVar1;
  FUN_101c0e310();
  uVar3 = 0x112d50390;
  func_0x000101c0e500(0x112d50390,0x112d50398,&UNK_10d9de950,
                      PTR___s7SwiftUI32_EnvironmentKeyTransformModifierVyxGAA04ViewF0AAMc_110349258)
  ;
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e08fa8 = puVar4;
  return;
}



/* Entry: 101c0e310; end: 101c0e34f;  */

void FUN_101c0e310(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e08fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9de07c;
  func_0x000107c61520(&UNK_10d9de07c,&UNK_110455bd8);
  puRam0000000112e08fb0 = puVar1;
  return;
}



/* Entry: 101c0e350; end: 101c0e363;  */

void FUN_101c0e350(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Entry: 101c0e364; end: 101c0e3ab;  */

undefined8 FUN_101c0e364(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101c0e3ac; end: 101c0e42b;  */

void FUN_101c0e3ac(void)

{
  long unaff_x20;
  
  FUN_101c015ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x21));
  FUN_101c0caa0(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x0001000834e4(unaff_x20 + 0xd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c0e42c; end: 101c0e483;  */

void FUN_101c0e42c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c0e484;
  plVar4[0xe] = unaff_x20 + 0x10;
  plVar4[0xf] = unaff_x20 + 0xd0;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar3;
  lVar3 = 0x112d45220;
  FUN_101c0e4c0(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x11] = lVar2;
  plVar4[0x12] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0de0c,lVar2,lVar3);
  return;
}



/* Entry: 101c0e484; end: 101c0e4bf;  */

void FUN_101c0e484(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c0e4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c0e4c0; end: 101c0e543;  */

void FUN_101c0e4c0(long *param_1,code *param_2,long param_3)

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



/* Entry: 101c0e544; end: 101c0e547;  */

void FUN_101c0e544(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Entry: 101c0e548; end: 101c0e5e3;  */

long FUN_101c0e548(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c0e5e4; end: 101c0e6ef;  */

undefined8 * FUN_101c0e5e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = *(undefined1 *)((long)param_2 + 0x11);
  uVar7 = *(undefined1 *)(param_2 + 2);
  FUN_101c0154c(uVar1,uVar3,uVar7,uVar6);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar7;
  *(undefined1 *)((long)param_1 + 0x11) = uVar6;
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = *(undefined1 *)(param_2 + 5);
  FUN_101c0ca60(uVar1,uVar3,uVar6);
  param_1[3] = uVar1;
  param_1[4] = uVar3;
  *(undefined1 *)(param_1 + 5) = uVar6;
  uVar6 = *(undefined1 *)(param_2 + 7);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = uVar6;
  uVar8 = param_2[8];
  uVar6 = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar8;
  *(undefined1 *)(param_1 + 9) = uVar6;
  uVar1 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xb] = uVar3;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  uVar2 = param_2[0xf];
  uVar5 = param_2[0x10];
  param_1[0xf] = uVar2;
  param_1[0x10] = uVar5;
  uVar9 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar9;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 101c0e6f0; end: 101c0e87b;  */

undefined8 * FUN_101c0e6f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)((long)param_2 + 0x11);
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_101c0154c(uVar7,uVar2,uVar5,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar7;
  param_1[1] = uVar2;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  uVar5 = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined1 *)((long)param_1 + 0x11) = uVar4;
  FUN_101c015ac(uVar1,uVar3,uVar6,uVar5);
  uVar7 = param_2[3];
  uVar2 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  FUN_101c0ca60(uVar7,uVar2,uVar4);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar7;
  param_1[4] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar4;
  func_0x000100cca050(uVar1,uVar3,uVar5);
  uVar4 = *(undefined1 *)(param_2 + 7);
  uVar7 = param_1[6];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = uVar4;
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  uVar4 = *(undefined1 *)(param_2 + 9);
  uVar7 = param_1[8];
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = uVar4;
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  uVar7 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  uVar7 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  uVar7 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  func_0x000107c61174();
  func_0x000107c61170(uVar7);
  uVar7 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  func_0x000107c6157c();
  func_0x000107c61574(uVar7);
  uVar7 = param_1[0x10];
  param_1[0x10] = param_2[0x10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar7);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0x89) = *(undefined1 *)((long)param_2 + 0x89);
  *(undefined1 *)((long)param_1 + 0x8a) = *(undefined1 *)((long)param_2 + 0x8a);
  uVar7 = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x12] = uVar7;
  return param_1;
}



/* Entry: 101c0e87c; end: 101c0e8af;  */

void FUN_101c0e87c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x89);
  *(undefined8 *)((long)param_1 + 0x91) = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0x89) = uVar7;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Entry: 101c0e8b0; end: 101c0e9b3;  */

undefined8 * FUN_101c0e8b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *(undefined2 *)(param_2 + 2);
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined2 *)(param_1 + 2) = uVar3;
  FUN_101c015ac(uVar4,uVar5,uVar1,*(undefined1 *)((long)param_1 + 0x11));
  uVar1 = *(undefined1 *)(param_2 + 5);
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  uVar2 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar1;
  func_0x000100cca050(uVar4,uVar5,uVar2);
  uVar1 = *(undefined1 *)(param_2 + 7);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = uVar1;
  func_0x000107c61574(uVar4);
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = uVar1;
  func_0x000107c61574(uVar4);
  uVar4 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar4);
  param_1[0xb] = param_2[0xb];
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  func_0x000107c61574(param_1[0xd]);
  uVar4 = param_1[0xe];
  uVar5 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar5;
  func_0x000107c61170(uVar4);
  func_0x000107c61574(param_1[0xf]);
  uVar4 = param_1[0x10];
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar5;
  func_0x000107c6142c(uVar4);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined2 *)((long)param_1 + 0x89) = *(undefined2 *)((long)param_2 + 0x89);
  param_1[0x12] = param_2[0x12];
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  return param_1;
}



/* Entry: 101c0e9b4; end: 101c0ea83;  */

int FUN_101c0e9b4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x99) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0x20);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c0ea84; end: 101c0eb17;  */

void FUN_101c0ea84(undefined8 param_1,undefined8 param_2)

{
  func_0x000101c01fb0();
  func_0x000107c5f3fc(param_1,&UNK_110455dd0,&UNK_110455dd0,param_2);
  return;
}



/* Entry: 101c0eb18; end: 101c0eb57;  */

void FUN_101c0eb18(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return;
}



/* Entry: 101c0eb58; end: 101c0ebab;  */

void FUN_101c0eb58(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2;
  func_0x000107c5f438();
  *param_1 = uVar1;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar2 = 0x112e09000;
  func_0x0001000285a8(0x112e09000,&UNK_10d9deaa0);
  FUN_101c0ebac((long)param_1 + (long)*(int *)(lVar2 + 0x2c),param_2);
  return;
}



/* Entry: 101c0ebac; end: 101c0f50f;  */

void FUN_101c0ebac(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 uVar13;
  undefined8 ***pppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 ***pppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_520;
  undefined1 auStack_518 [8];
  undefined8 uStack_510;
  undefined1 auStack_508 [8];
  undefined8 auStack_500 [2];
  long lStack_4f0;
  undefined8 **appuStack_4e8 [2];
  long alStack_4d8 [13];
  undefined1 auStack_470 [128];
  undefined8 ***pppuStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  undefined8 ***pppuStack_370;
  undefined8 **ppuStack_368;
  undefined8 uStack_360;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined8 uStack_2ff;
  undefined8 **ppuStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined *puStack_2b8;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined8 **ppuStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined *puStack_268;
  undefined1 uStack_260;
  undefined8 uStack_258;
  undefined1 uStack_238;
  undefined8 **ppuStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined8 **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined1 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_138;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 **appuStack_b8 [3];
  
  lVar9 = 0x112e02cd8;
  appuStack_4e8[0] = (undefined8 **)param_2;
  alStack_4d8[8] = param_1;
  func_0x0001000285a8(0x112e02cd8,&UNK_10d9d5220);
  alStack_4d8[3] = *(long *)(lVar9 + -8);
  alStack_4d8[2] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_4d8[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0x112e08f80;
  alStack_4d8[0] = (long)&lStack_4f0 - extraout_x8;
  func_0x0001000285a8(0x112e08f80,&UNK_10d9deab0);
  alStack_4d8[5] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar20 = ((long)&lStack_4f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  alStack_4d8[7] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12;
  lVar9 = 0x112e08f88;
  alStack_4d8[1] = lVar20;
  func_0x0001000285a8(0x112e08f88,&UNK_10d9de920);
  alStack_4d8[0xb] = *(long *)(lVar9 + -8);
  alStack_4d8[6] = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_4d8[0xb] + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_4d8[4] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_00;
  lVar9 = 0x112e09008;
  puVar15 = &UNK_10d9deac0;
  alStack_4d8[0xc] = lVar20;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  alStack_4d8[9] = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar20 - extraout_x12_01;
  FUN_101c0f510();
  func_0x000107c5f7ac();
  *(undefined8 **)(lVar20 + -0x10) = param_2;
  *(undefined **)(lVar20 + -8) = puVar15;
  *(undefined1 *)(lVar20 + -0x18) = 1;
  *(undefined8 *)(lVar20 + -0x20) = 0;
  *(undefined1 *)(lVar20 + -0x28) = 1;
  *(undefined8 *)(lVar20 + -0x30) = 0;
  uVar19 = 1;
  func_0x000107c5f388(&uStack_128,0,1,0,1,0,1,0x4062200000000000,0);
  pppuVar10 = (undefined8 ***)0x112e09010;
  func_0x0001000285a8(0x112e09010,&UNK_10d9deac8);
  puVar1 = (undefined8 *)(lVar20 + *(int *)((long)pppuVar10 + 0x24));
  alStack_4d8[10] = lVar20;
  puVar1[9] = uStack_e0;
  puVar1[8] = uStack_e8;
  puVar1[0xb] = uStack_d0;
  puVar1[10] = uStack_d8;
  puVar1[0xd] = uStack_c0;
  puVar1[0xc] = uStack_c8;
  puVar1[1] = uStack_120;
  *puVar1 = uStack_128;
  puVar1[3] = uStack_110;
  puVar1[2] = uStack_118;
  puVar1[5] = uStack_100;
  puVar1[4] = uStack_108;
  puVar1[7] = uStack_f0;
  puVar1[6] = uStack_f8;
  func_0x000107c5f2e4();
  pppuVar14 = pppuVar10;
  func_0x000107c5f7e4();
  uVar26 = uStack_108;
  func_0x000107c5f2e0(0x3feb333333333333);
  pppuVar11 = pppuVar14;
  pppuVar17 = pppuVar10;
  func_0x000107c5f2e8();
  func_0x000107c61574(pppuVar10);
  uVar25 = uStack_f8;
  uVar23 = uStack_108;
  func_0x000107c61574();
  *(undefined8 ****)(lVar20 + *(int *)(lVar9 + 0x24)) = pppuVar11;
  func_0x000101c125cc();
  pppuStack_370 = pppuVar14;
  ppuStack_368 = pppuVar17;
  func_0x000100e8b654();
  ppppuVar12 = &pppuStack_370;
  puVar15 = PTR___sSSN_11034da80;
  appuStack_4e8[1] = pppuVar14;
  func_0x000107c5f5e0();
  uVar13 = 0x17;
  func_0x0001026ff85c();
  uVar24 = uVar13;
  ppppuVar18 = ppppuVar12;
  puVar16 = puVar15;
  pppuVar10 = pppuVar14;
  func_0x000107c5f5d4();
  uVar7 = SUB81(pppuVar10,0);
  func_0x000107c61574(uVar13);
  func_0x000100f795bc(ppppuVar12,puVar15,pppuVar14);
  func_0x000107c6142c(uVar19);
  pppuVar14 = (undefined8 ***)0xbf;
  func_0x0001026ff7d0();
  pppuVar10 = pppuVar14;
  uVar13 = uVar24;
  ppppuVar12 = ppppuVar18;
  puVar15 = puVar16;
  func_0x000107c5f5d0();
  func_0x000107c61574(pppuVar14);
  func_0x000100f795bc(uVar24,ppppuVar18,puVar16);
  func_0x000107c6142c();
  func_0x000107c5f570();
  uVar22 = 0x4010000000000000;
  uVar8 = uVar7;
  func_0x000107c5f280();
  uVar24 = uVar25;
  uVar19 = uVar23;
  uVar27 = uVar26;
  func_0x000107c5f574();
  uStack_298 = (undefined1)uVar23;
  uStack_297 = (undefined7)((ulong)uVar23 >> 8);
  uStack_290 = (undefined1)uVar26;
  uStack_28f = (undefined7)((ulong)uVar26 >> 8);
  uStack_288 = 0;
  uVar23 = 0x4020000000000000;
  ppuStack_2d0 = pppuVar10;
  uStack_2c8 = uVar13;
  uStack_2c0 = (char)ppppuVar12;
  puStack_2b8 = puVar15;
  uStack_2b0 = uVar7;
  uStack_2a8 = uVar22;
  uStack_2a0 = uVar25;
  func_0x000107c5f280();
  uStack_3d0 = CONCAT71(uStack_2af,uStack_2b0);
  uStack_3c8 = uStack_2a8;
  uStack_3b8 = uStack_298;
  uStack_3c0 = uStack_2a0;
  uStack_3af = uStack_28f;
  uStack_3a8 = uStack_288;
  uStack_3b7 = uStack_297;
  uStack_3b0 = uStack_290;
  uStack_3e0 = CONCAT71(uStack_2bf,uStack_2c0);
  puStack_3e8 = (undefined *)uStack_2c8;
  pppuStack_3f0 = (undefined8 ***)ppuStack_2d0;
  puStack_3d8 = puStack_2b8;
  uStack_238 = 0;
  ppuStack_280 = pppuVar10;
  uStack_278 = uVar13;
  uStack_270 = (char)ppppuVar12;
  puStack_268 = puVar15;
  uStack_260 = uVar7;
  uStack_258 = uVar22;
  func_0x000101c11364(&ppuStack_2d0,&pppuStack_370,0x112d4f490,&UNK_10d915340);
  func_0x000101c113ac(&ppuStack_280,0x112d4f490,&UNK_10d915340);
  uStack_1f8 = uStack_3b8;
  uStack_1f7 = uStack_3b7;
  uStack_208 = uStack_3c8;
  uStack_210 = uStack_3d0;
  uStack_200 = uStack_3c0;
  uStack_1e8 = uStack_3a8;
  uStack_1e7 = uStack_3a7;
  uStack_1f0 = uStack_3b0;
  uStack_1ef = uStack_3af;
  uStack_228 = puStack_3e8;
  ppuStack_230 = pppuStack_3f0;
  puStack_218 = puStack_3d8;
  uStack_220 = uStack_3e0;
  uStack_1c8 = (undefined1)uVar19;
  uStack_1c7 = (undefined7)((ulong)uVar19 >> 8);
  uStack_1c0 = (undefined1)uVar27;
  uStack_1bf = (undefined7)((ulong)uVar27 >> 8);
  uStack_1b8 = 0;
  uStack_180 = uStack_3c0;
  puStack_198 = puStack_3d8;
  uStack_1a0 = uStack_3e0;
  uStack_188 = uStack_3c8;
  uStack_190 = uStack_3d0;
  uStack_1a8 = puStack_3e8;
  ppuStack_1b0 = pppuStack_3f0;
  uStack_138 = 0;
  uStack_1e0 = uVar8;
  uStack_1d8 = uVar23;
  uStack_1d0 = uVar24;
  uStack_160 = uVar8;
  uStack_158 = uVar23;
  uStack_170 = uStack_1f0;
  uStack_16f = uStack_1ef;
  uStack_168 = uStack_1e8;
  uStack_178 = uStack_1f8;
  uStack_177 = uStack_1f7;
  func_0x000101c11364(&ppuStack_230,&pppuStack_370,0x112d4f498,&UNK_10d9d5ac0);
  func_0x000101c113ac(&ppuStack_1b0,0x112d4f498,&UNK_10d9d5ac0);
  ppuVar2 = appuStack_4e8[0];
  pppuStack_3f0 = (undefined8 ***)appuStack_4e8[0][0x10];
  puVar15 = &UNK_10d9dead0;
  appuStack_b8[0] = pppuStack_3f0;
  func_0x000107c614e0();
  puVar16 = &UNK_110456698;
  func_0x000107c613fc(&UNK_110456698,0xa9,7);
  uVar24 = ppuVar2[0xc];
  uVar25 = ppuVar2[0xf];
  uVar13 = ppuVar2[0xe];
  *(undefined8 **)(puVar16 + 0x78) = ppuVar2[0xd];
  *(undefined8 *)(puVar16 + 0x70) = uVar24;
  *(undefined8 *)(puVar16 + 0x88) = uVar25;
  *(undefined8 *)(puVar16 + 0x80) = uVar13;
  uVar24 = ppuVar2[0x10];
  *(undefined8 **)(puVar16 + 0x98) = ppuVar2[0x11];
  *(undefined8 *)(puVar16 + 0x90) = uVar24;
  uVar24 = *(undefined8 *)((long)ppuVar2 + 0x89);
  *(undefined8 *)(puVar16 + 0xa1) = *(undefined8 *)((long)ppuVar2 + 0x91);
  *(undefined8 *)(puVar16 + 0x99) = uVar24;
  uVar24 = ppuVar2[4];
  uVar25 = ppuVar2[7];
  uVar13 = ppuVar2[6];
  *(undefined8 **)(puVar16 + 0x38) = ppuVar2[5];
  *(undefined8 *)(puVar16 + 0x30) = uVar24;
  *(undefined8 *)(puVar16 + 0x48) = uVar25;
  *(undefined8 *)(puVar16 + 0x40) = uVar13;
  uVar24 = ppuVar2[8];
  uVar25 = ppuVar2[0xb];
  uVar13 = ppuVar2[10];
  *(undefined8 **)(puVar16 + 0x58) = ppuVar2[9];
  *(undefined8 *)(puVar16 + 0x50) = uVar24;
  *(undefined8 *)(puVar16 + 0x68) = uVar25;
  *(undefined8 *)(puVar16 + 0x60) = uVar13;
  uVar24 = *ppuVar2;
  uVar25 = ppuVar2[3];
  uVar13 = ppuVar2[2];
  *(undefined8 **)(puVar16 + 0x18) = ppuVar2[1];
  *(undefined8 *)(puVar16 + 0x10) = uVar24;
  *(undefined8 *)(puVar16 + 0x28) = uVar25;
  *(undefined8 *)(puVar16 + 0x20) = uVar13;
  uVar24 = 0x112e08e48;
  func_0x000101c11364(appuStack_b8,&pppuStack_370,0x112e08e48,&UNK_10d9de610);
  func_0x000101c0b038(ppuVar2,&pppuStack_370);
  func_0x0001000285a8(0x112e08e48,&UNK_10d9de610);
  uVar13 = 0x112e08f90;
  func_0x0001000285a8(0x112e08f90,&UNK_10d9deb00);
  uVar25 = 0x112e08f98;
  func_0x000101c11484(0x112e08f98,0x112e08e48,&UNK_10d9de610,PTR___sSayxGSksMc_11034dd18);
  uVar23 = uVar25;
  FUN_101c0e238();
  uVar19 = uVar23;
  FUN_101c0e278();
  *(undefined8 *)(lVar20 + -0x10) = uVar19;
  ppppuVar12 = &pppuStack_3f0;
  func_0x000107c5f788(alStack_4d8[0xc],ppppuVar12,puVar15,0x101c11064,puVar16,uVar24,uVar13,uVar25,
                      uVar23);
  func_0x000101c12698();
  puVar16 = &UNK_1104566c0;
  pppuStack_3f0 = ppppuVar12;
  puStack_3e8 = puVar15;
  func_0x000107c613fc(&UNK_1104566c0,0xa9,7);
  uVar24 = ppuVar2[0xc];
  uVar25 = ppuVar2[0xf];
  uVar13 = ppuVar2[0xe];
  *(undefined8 **)(puVar16 + 0x78) = ppuVar2[0xd];
  *(undefined8 *)(puVar16 + 0x70) = uVar24;
  *(undefined8 *)(puVar16 + 0x88) = uVar25;
  *(undefined8 *)(puVar16 + 0x80) = uVar13;
  uVar24 = ppuVar2[0x10];
  *(undefined8 **)(puVar16 + 0x98) = ppuVar2[0x11];
  *(undefined8 *)(puVar16 + 0x90) = uVar24;
  uVar24 = *(undefined8 *)((long)ppuVar2 + 0x89);
  *(undefined8 *)(puVar16 + 0xa1) = *(undefined8 *)((long)ppuVar2 + 0x91);
  *(undefined8 *)(puVar16 + 0x99) = uVar24;
  uVar24 = ppuVar2[4];
  uVar25 = ppuVar2[7];
  uVar13 = ppuVar2[6];
  *(undefined8 **)(puVar16 + 0x38) = ppuVar2[5];
  *(undefined8 *)(puVar16 + 0x30) = uVar24;
  *(undefined8 *)(puVar16 + 0x48) = uVar25;
  *(undefined8 *)(puVar16 + 0x40) = uVar13;
  uVar24 = ppuVar2[8];
  uVar25 = ppuVar2[0xb];
  uVar13 = ppuVar2[10];
  *(undefined8 **)(puVar16 + 0x58) = ppuVar2[9];
  *(undefined8 *)(puVar16 + 0x50) = uVar24;
  *(undefined8 *)(puVar16 + 0x68) = uVar25;
  *(undefined8 *)(puVar16 + 0x60) = uVar13;
  uVar24 = *ppuVar2;
  uVar25 = ppuVar2[3];
  uVar13 = ppuVar2[2];
  *(undefined8 **)(puVar16 + 0x18) = ppuVar2[1];
  *(undefined8 *)(puVar16 + 0x10) = uVar24;
  *(undefined8 *)(puVar16 + 0x28) = uVar25;
  *(undefined8 *)(puVar16 + 0x20) = uVar13;
  func_0x000101c0b038(ppuVar2,&pppuStack_370);
  lVar9 = alStack_4d8[0];
  pcVar21 = FUN_101c110dc;
  ppppuVar12 = &pppuStack_3f0;
  func_0x000107c5f744(alStack_4d8[0],ppppuVar12,FUN_101c110dc,puVar16,PTR___sSSN_11034da80,
                      appuStack_4e8[1]);
  func_0x000101c12fc0();
  ppuStack_368 = (undefined8 **)CONCAT62(ppuStack_368._2_6_,(short)pcVar21);
  uVar24 = 0x112e02cf0;
  pppuStack_370 = ppppuVar12;
  func_0x000101c11484(0x112e02cf0,0x112e02cd8,&UNK_10d9d5220,
                      PTR___s7SwiftUI6ButtonVyxGAA4ViewAAMc_110349850);
  uVar13 = uVar24;
  FUN_101c018d4();
  lVar3 = alStack_4d8[2];
  lVar20 = alStack_4d8[1];
  func_0x000107c5f60c(alStack_4d8[1],&pppuStack_370,alStack_4d8[2],&UNK_110456990,uVar24,uVar13);
  FUN_101c01914(ppppuVar12,pcVar21);
  (**(code **)(alStack_4d8[3] + 8))(lVar9,lVar3);
  ppuStack_368 = (undefined8 **)ppuVar2[0xd];
  pppuStack_370 = (undefined8 ***)ppuVar2[0xc];
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(&pppuStack_3f0);
  uVar8 = pppuStack_3f0._0_1_;
  puVar15 = &UNK_10d9deb08;
  func_0x000107c614e0();
  puVar16 = &UNK_1104566e8;
  func_0x000107c613fc(&UNK_1104566e8,0x11,7);
  lVar9 = alStack_4d8[9];
  puVar16[0x10] = uVar8;
  puVar1 = (undefined8 *)(lVar20 + *(int *)(alStack_4d8[5] + 0x24));
  *puVar1 = puVar15;
  puVar1[1] = 0x101c110e4;
  puVar1[2] = puVar16;
  func_0x000101c11364(alStack_4d8[10],alStack_4d8[9],0x112e09008,&UNK_10d9deac0);
  lVar4 = alStack_4d8[6];
  lVar3 = alStack_4d8[4];
  uStack_3a0 = CONCAT71(uStack_1df,uStack_1e0);
  uStack_3a8 = uStack_1e8;
  uStack_3a7 = uStack_1e7;
  uStack_3b0 = uStack_1f0;
  uStack_3af = uStack_1ef;
  uStack_398 = uStack_1d8;
  uStack_388 = uStack_1c8;
  uStack_390 = uStack_1d0;
  uStack_37f = CONCAT17(uStack_1b8,uStack_1bf);
  uStack_387 = uStack_1c7;
  uStack_380 = uStack_1c0;
  puStack_3e8 = (undefined *)uStack_228;
  pppuStack_3f0 = (undefined8 ***)ppuStack_230;
  puStack_3d8 = puStack_218;
  uStack_3e0 = uStack_220;
  uStack_3c8 = uStack_208;
  uStack_3d0 = uStack_210;
  uStack_3b8 = uStack_1f8;
  uStack_3b7 = uStack_1f7;
  uStack_3c0 = uStack_200;
  pcVar21 = *(code **)(alStack_4d8[0xb] + 0x10);
  (*pcVar21)(alStack_4d8[4],alStack_4d8[0xc],alStack_4d8[6]);
  lVar5 = alStack_4d8[7];
  func_0x000100cca104(lVar20,alStack_4d8[7]);
  lVar6 = alStack_4d8[8];
  func_0x000101c11364(lVar9,alStack_4d8[8],0x112e09008,&UNK_10d9deac0);
  lVar9 = 0x112e09018;
  func_0x0001000285a8(0x112e09018,&UNK_10d9deb38);
  puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar9 + 0x30));
  uStack_328 = CONCAT71(uStack_3a7,uStack_3a8);
  uStack_330 = CONCAT71(uStack_3af,uStack_3b0);
  uStack_318 = uStack_398;
  uStack_320 = uStack_3a0;
  uStack_308 = uStack_388;
  uStack_310 = uStack_390;
  uStack_2ff = uStack_37f;
  uStack_307 = uStack_387;
  uStack_300 = uStack_380;
  ppuStack_368 = (undefined8 **)puStack_3e8;
  pppuStack_370 = pppuStack_3f0;
  puStack_358 = puStack_3d8;
  uStack_360 = uStack_3e0;
  uStack_338 = CONCAT71(uStack_3b7,uStack_3b8);
  uStack_348 = uStack_3c8;
  uStack_350 = uStack_3d0;
  uStack_340 = uStack_3c0;
  puVar1[5] = uStack_3c8;
  puVar1[4] = uStack_3d0;
  puVar1[7] = uStack_338;
  puVar1[6] = uStack_3c0;
  puVar1[1] = puStack_3e8;
  *puVar1 = pppuStack_3f0;
  puVar1[3] = puStack_3d8;
  puVar1[2] = uStack_3e0;
  *(undefined8 *)((long)puVar1 + 0x71) = uStack_37f;
  *(ulong *)((long)puVar1 + 0x69) = CONCAT17(uStack_380,uStack_387);
  puVar1[0xb] = uStack_398;
  puVar1[10] = uStack_3a0;
  puVar1[0xd] = CONCAT71(uStack_387,uStack_388);
  puVar1[0xc] = uStack_390;
  puVar1[9] = uStack_328;
  puVar1[8] = uStack_330;
  (*pcVar21)(lVar6 + *(int *)(lVar9 + 0x40),lVar3,lVar4);
  func_0x000100cca104(lVar5,lVar6 + *(int *)(lVar9 + 0x50));
  func_0x000101c11364(&pppuStack_370,auStack_470,0x112d4f498,&UNK_10d9d5ac0);
  func_0x000100cca154(lVar20);
  pcVar21 = *(code **)(alStack_4d8[0xb] + 8);
  (*pcVar21)(alStack_4d8[0xc],lVar4);
  func_0x000101c113ac(alStack_4d8[10],0x112e09008,&UNK_10d9deac0);
  func_0x000100cca154(lVar5);
  (*pcVar21)(lVar3,lVar4);
  func_0x000101c113ac(&pppuStack_3f0,0x112d4f498,&UNK_10d9d5ac0);
  func_0x000101c113ac(alStack_4d8[9],0x112e09008,&UNK_10d9deac0);
  return;
}



/* Entry: 101c0f510; end: 101c0f80f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101c0f510(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined1 auVar16 [16];
  long alStack_80 [4];
  
  lVar4 = 0;
  func_0x000107c5f6f0();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar15 = (long)alStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112e09020;
  func_0x0001000285a8(0x112e09020,&UNK_10d9deb78);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar13 = (long *)(lVar15 - extraout_x8_00);
  lVar6 = 0x112e09028;
  func_0x0001000285a8(0x112e09028,&UNK_10d9deb80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar14 = (long *)((long)plVar13 - extraout_x8_01);
  alStack_80[2] = *(undefined8 *)(param_2 + 0x70);
  alStack_80[3] = *(undefined8 *)(param_2 + 0x78);
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(alStack_80 + 1);
  if (alStack_80[1] == 0) {
    func_0x000107c5f6cc();
    *plVar14 = alStack_80[1];
    plVar13 = plVar14;
    func_0x000107c6159c(plVar14,lVar6,1);
    func_0x000101c11254();
    func_0x000107c5f490(param_1,plVar14,lVar5,PTR___s7SwiftUI5ColorVN_1103496f0,plVar13,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
  }
  else {
    lVar7 = alStack_80[1];
    func_0x000107c61174();
    lVar8 = lVar7;
    func_0x000107c5f6e8();
    alStack_80[0] = param_1;
    (**(code **)(lVar12 + 0x68))
              (lVar15,*(undefined4 *)PTR___s7SwiftUI5ImageV12ResizingModeO7stretchyA2EmFWC_110349738
               ,lVar4);
    lVar9 = lVar15;
    func_0x000107c5f6fc(0,0,0,0,lVar15,lVar8);
    func_0x000107c61574(lVar8);
    (**(code **)(lVar12 + 8))(lVar15,lVar4);
    lVar4 = 0x112d500a0;
    func_0x0001000285a8(0x112d500a0,&UNK_10d916458);
    puVar1 = (undefined8 *)((long)plVar13 + (long)*(int *)(lVar4 + 0x24));
    lVar4 = 0;
    func_0x000107c5f37c();
    iVar3 = *(int *)(lVar4 + 0x14);
    uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_110348d50;
    lVar4 = 0;
    func_0x000107c5f41c();
    (**(code **)(*(long *)(lVar4 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar4);
    auVar16 = NEON_fmov(0x4024000000000000,8);
    puVar1[1] = auVar16._8_8_;
    *puVar1 = auVar16._0_8_;
    lVar4 = 0x112d500a8;
    func_0x0001000285a8(0x112d500a8,&UNK_10d916460);
    *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24)) = 0x100;
    *plVar13 = lVar9;
    plVar13[1] = 0;
    *(undefined2 *)(plVar13 + 2) = 1;
    uVar10 = 0xca;
    func_0x0001026ff7d0();
    puVar1 = (undefined8 *)((long)plVar13 + (long)*(int *)(lVar5 + 0x24));
    *puVar1 = uVar10;
    puVar1[2] = 0;
    puVar1[1] = 0x4024000000000000;
    puVar1[3] = 0x3ff0000000000000;
    func_0x000101c11364(plVar13,plVar14,0x112e09020,&UNK_10d9deb78);
    plVar11 = plVar14;
    func_0x000107c6159c(plVar14,lVar6,0);
    func_0x000101c11254();
    func_0x000107c5f490(alStack_80[0],plVar14,lVar5,PTR___s7SwiftUI5ColorVN_1103496f0,plVar11,
                        PTR___s7SwiftUI5ColorVAA4ViewAAWP_1103496e0);
    func_0x000107c61170(lVar7);
    func_0x000101c113ac(plVar13,0x112e09020,&UNK_10d9deb78);
  }
  return;
}



/* Entry: 101c0f810; end: 101c0f98f;  */

void FUN_101c0f810(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar4);
  (**(code **)(lVar1 + 0x18))(param_1 + 5,uVar4,lVar1);
  func_0x0001011225e0(param_2,auStack_78);
  puVar2 = &UNK_110456710;
  func_0x000107c613fc(&UNK_110456710,0xd8,7);
  uVar4 = param_3[0xc];
  uVar6 = param_3[0xf];
  uVar5 = param_3[0xe];
  *(undefined8 *)(puVar2 + 0x78) = param_3[0xd];
  *(undefined8 *)(puVar2 + 0x70) = uVar4;
  *(undefined8 *)(puVar2 + 0x88) = uVar6;
  *(undefined8 *)(puVar2 + 0x80) = uVar5;
  uVar4 = param_3[0x10];
  *(undefined8 *)(puVar2 + 0x98) = param_3[0x11];
  *(undefined8 *)(puVar2 + 0x90) = uVar4;
  uVar4 = *(undefined8 *)((long)param_3 + 0x89);
  *(undefined8 *)(puVar2 + 0xa1) = *(undefined8 *)((long)param_3 + 0x91);
  *(undefined8 *)(puVar2 + 0x99) = uVar4;
  uVar4 = param_3[4];
  uVar6 = param_3[7];
  uVar5 = param_3[6];
  *(undefined8 *)(puVar2 + 0x38) = param_3[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x48) = uVar6;
  *(undefined8 *)(puVar2 + 0x40) = uVar5;
  uVar4 = param_3[8];
  uVar6 = param_3[0xb];
  uVar5 = param_3[10];
  *(undefined8 *)(puVar2 + 0x58) = param_3[9];
  *(undefined8 *)(puVar2 + 0x50) = uVar4;
  *(undefined8 *)(puVar2 + 0x68) = uVar6;
  *(undefined8 *)(puVar2 + 0x60) = uVar5;
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(puVar2 + 0x18) = param_3[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  func_0x000101122624(auStack_78,puVar2 + 0xb0);
  puVar3 = &UNK_10d9deb40;
  func_0x000107c614e0();
  *param_1 = puVar3;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  uStack_80 = 0;
  func_0x000101c0b038(param_3,&uStack_120);
  uVar4 = 0x112d36838;
  func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
  func_0x000107c5f728(param_1 + 3,&uStack_80,uVar4);
  param_1[10] = 0x101c110fc;
  param_1[0xb] = puVar2;
  uStack_118 = param_3[0xd];
  uStack_120 = param_3[0xc];
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(auStack_78);
  puVar2 = &UNK_10d9deb08;
  func_0x000107c614e0();
  puVar3 = &UNK_110456738;
  func_0x000107c613fc(&UNK_110456738,0x11,7);
  puVar3[0x10] = auStack_78[0];
  param_1[0xc] = puVar2;
  param_1[0xd] = FUN_101c114c8;
  param_1[0xe] = puVar3;
  return;
}



/* Entry: 101c0f990; end: 101c0fb5f;  */

void FUN_101c0f990(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char acStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_58 = param_1[0xd];
  uStack_60 = param_1[0xc];
  uStack_108 = param_1[0xd];
  uStack_110 = param_1[0xc];
  uStack_48 = uStack_58;
  func_0x000101c11364(&uStack_48,acStack_68,0x112d4f590,&UNK_10d915440);
  uVar1 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f72c(acStack_68);
  if (acStack_68[0] == '\x01') {
    func_0x000101c113ac(&uStack_60,0x112d4f580,&UNK_10d915430);
  }
  else {
    uStack_108 = param_1[0xd];
    uStack_110 = param_1[0xc];
    acStack_68[0] = '\x01';
    func_0x000107c5f730(acStack_68,uVar1);
    func_0x000101c113ac(&uStack_60,0x112d4f580,&UNK_10d915430);
    uVar1 = *param_1;
    uVar3 = param_1[1];
    uVar4 = (ulong)*(ushort *)(param_1 + 2);
    FUN_101c10620(uVar1,uVar3,uVar4);
    func_0x0001011225e0(param_2,&uStack_110);
    puVar2 = &UNK_110456760;
    func_0x000107c613fc(&UNK_110456760,0xd8,7);
    uVar5 = param_1[0xc];
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    *(undefined8 *)(puVar2 + 0x78) = param_1[0xd];
    *(undefined8 *)(puVar2 + 0x70) = uVar5;
    *(undefined8 *)(puVar2 + 0x88) = uVar7;
    *(undefined8 *)(puVar2 + 0x80) = uVar6;
    uVar5 = param_1[0x10];
    *(undefined8 *)(puVar2 + 0x98) = param_1[0x11];
    *(undefined8 *)(puVar2 + 0x90) = uVar5;
    uVar5 = *(undefined8 *)((long)param_1 + 0x89);
    *(undefined8 *)(puVar2 + 0xa1) = *(undefined8 *)((long)param_1 + 0x91);
    *(undefined8 *)(puVar2 + 0x99) = uVar5;
    uVar5 = param_1[4];
    uVar7 = param_1[7];
    uVar6 = param_1[6];
    *(undefined8 *)(puVar2 + 0x38) = param_1[5];
    *(undefined8 *)(puVar2 + 0x30) = uVar5;
    *(undefined8 *)(puVar2 + 0x48) = uVar7;
    *(undefined8 *)(puVar2 + 0x40) = uVar6;
    uVar5 = param_1[8];
    uVar7 = param_1[0xb];
    uVar6 = param_1[10];
    *(undefined8 *)(puVar2 + 0x58) = param_1[9];
    *(undefined8 *)(puVar2 + 0x50) = uVar5;
    *(undefined8 *)(puVar2 + 0x68) = uVar7;
    *(undefined8 *)(puVar2 + 0x60) = uVar6;
    uVar5 = *param_1;
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    *(undefined8 *)(puVar2 + 0x18) = param_1[1];
    *(undefined8 *)(puVar2 + 0x10) = uVar5;
    *(undefined8 *)(puVar2 + 0x28) = uVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar6;
    func_0x000101122624(&uStack_110,puVar2 + 0xb0);
    func_0x000101c0b038(param_1,&uStack_110);
    uVar5 = uVar1;
    func_0x0001001ca524(uVar1,uVar3,uVar4,3,0,0,&UNK_10d9deb70,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
    func_0x00010007d980(uVar1,uVar3,uVar4);
  }
  return;
}



/* Entry: 101c0fb60; end: 101c0fb9b;  */

void FUN_101c0fb60(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000101c107ec(pcVar1,uVar2,*(undefined1 *)(param_1 + 0x28));
  (*pcVar1)(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101c0fb9c; end: 101c0fc9b;  */

void FUN_101c0fb9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_e0 [160];
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar4 = (ulong)*(ushort *)(param_1 + 2);
  FUN_101c10620(uVar1,uVar3,uVar4);
  puVar2 = &UNK_110456670;
  func_0x000107c613fc(&UNK_110456670,0xa9,7);
  uVar5 = param_1[0xc];
  uVar7 = param_1[0xf];
  uVar6 = param_1[0xe];
  *(undefined8 *)(puVar2 + 0x78) = param_1[0xd];
  *(undefined8 *)(puVar2 + 0x70) = uVar5;
  *(undefined8 *)(puVar2 + 0x88) = uVar7;
  *(undefined8 *)(puVar2 + 0x80) = uVar6;
  uVar5 = param_1[0x10];
  *(undefined8 *)(puVar2 + 0x98) = param_1[0x11];
  *(undefined8 *)(puVar2 + 0x90) = uVar5;
  uVar5 = *(undefined8 *)((long)param_1 + 0x89);
  *(undefined8 *)(puVar2 + 0xa1) = *(undefined8 *)((long)param_1 + 0x91);
  *(undefined8 *)(puVar2 + 0x99) = uVar5;
  uVar5 = param_1[4];
  uVar7 = param_1[7];
  uVar6 = param_1[6];
  *(undefined8 *)(puVar2 + 0x38) = param_1[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x48) = uVar7;
  *(undefined8 *)(puVar2 + 0x40) = uVar6;
  uVar5 = param_1[8];
  uVar7 = param_1[0xb];
  uVar6 = param_1[10];
  *(undefined8 *)(puVar2 + 0x58) = param_1[9];
  *(undefined8 *)(puVar2 + 0x50) = uVar5;
  *(undefined8 *)(puVar2 + 0x68) = uVar7;
  *(undefined8 *)(puVar2 + 0x60) = uVar6;
  uVar5 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar2 + 0x18) = param_1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  func_0x000101c0b038(param_1,auStack_e0);
  uVar5 = uVar1;
  func_0x0001001ca524(uVar1,uVar3,uVar4,3,0,0,&UNK_10d9dea80,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar5);
  func_0x00010007d980(uVar1,uVar3,uVar4);
  return;
}



/* Entry: 101c0fc9c; end: 101c0fd7f;  */

void FUN_101c0fc9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  lVar3 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x80) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  uVar5 = 0x112d45220;
  FUN_101c11214(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0fd80,uVar4,uVar5);
  return;
}



/* Entry: 101c0fd80; end: 101c0ff2b;  */

void FUN_101c0fd80(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x70);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(*(long *)(unaff_x22 + 0x70) + 0x78);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f72c(unaff_x22 + 0x68);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  if (lVar5 == 0) {
    if (lRam0000000112e08fe8 != -1) {
      func_0x000107c61568(0x112e08fe8,FUN_101c10588);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar5 = *(long *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c5edd0(uVar4,uRam0000000112e08ff0,uRam0000000112e08ff8);
    (**(code **)(lVar5 + 0x30))(uVar4,1,uVar6);
    if ((int)uVar4 != 1) {
      lVar5 = *(long *)(unaff_x22 + 0x70);
      (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x78),
                 *(undefined8 *)(unaff_x22 + 0x80));
      uVar6 = *(undefined8 *)(lVar5 + 0x40);
      func_0x000101c10b1c(uVar6,*(undefined1 *)(lVar5 + 0x48));
      func_0x000100083b20(unaff_x22 + 0x30);
      func_0x000107c61574(uVar6);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar5 = *(long *)(unaff_x22 + 0x50);
      func_0x0001000a8868(unaff_x22 + 0x30,uVar6);
      piVar3 = *(int **)(lVar5 + 0x10);
      iVar1 = *piVar3;
      plVar2 = (long *)(ulong)(uint)piVar3[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xb0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_101c0ff2c;
                    /* WARNING: Could not recover jumptable at 0x000101c0ff10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar3))(*(undefined8 *)(unaff_x22 + 0x90),uVar6,lVar5);
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000101c113ac(uVar6,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c61170(lVar5);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101c0fe74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c0ff2c; end: 101c0ff77;  */

void FUN_101c0ff2c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c0ff78,*(undefined8 *)(lVar1 + 0xa0),*(undefined8 *)(lVar1 + 0xa8));
  return;
}



/* Entry: 101c0ff78; end: 101c1003b;  */

void FUN_101c0ff78(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  lVar3 = unaff_x22 + 0x30;
  FUN_101c11044(lVar3);
  func_0x000107c5f7d4(0x3fb999999999999a);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  func_0x000107c5f300();
  func_0x000107c61574(lVar3);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar2 + 8))(uVar5,uVar1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101c10038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c1003c; end: 101c1009b;  */

void FUN_101c1003c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x78);
  uStack_30 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = param_2;
  func_0x000107c61174(param_2);
  uVar1 = 0x112d50000;
  func_0x0001000285a8(0x112d50000,&UNK_10d9dea90);
  func_0x000107c5f730(&uStack_38,uVar1);
  return;
}



/* Entry: 101c1009c; end: 101c1012b;  */

void FUN_101c1009c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar3 = 0x112d45220;
  FUN_101c11214(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c1012c,uVar2,uVar3);
  return;
}



/* Entry: 101c1012c; end: 101c10213;  */

void FUN_101c1012c(void)

{
  undefined1 uVar1;
  uint3 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x70);
  lVar7 = *(long *)(lVar5 + 0x50);
  *(long *)(unaff_x22 + 0x98) = lVar7;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar5 + 0x90);
    plVar9 = (long *)0x110;
    uVar2 = *(uint3 *)(lVar5 + 0x88);
    uVar1 = *(undefined1 *)(lVar5 + 0x98);
    func_0x000107c6157c(lVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101c10214;
    lVar5 = *(long *)(unaff_x22 + 0x78);
    plVar9[0x18] = lVar6;
    plVar9[0x19] = lVar7;
    *(undefined1 *)((long)plVar9 + 0x101) = uVar1;
    *(uint *)(plVar9 + 0x1f) = (uint)uVar2;
    plVar9[0x17] = lVar5;
    lVar7 = 0;
    func_0x000107c5fcec();
    lVar5 = lVar7;
    func_0x000107c5fce8();
    plVar9[0x1a] = lVar5;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar9[0x1b] = lVar7;
    plVar9[0x1c] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101c0c2e4,lVar7,lVar5);
    return;
  }
  uVar8 = *(undefined8 *)(lVar5 + 0x58);
  uVar3 = 0;
  FUN_101c0c8a0(0);
  uVar4 = 0x112e08dd8;
  FUN_101c11214(0x112e08dd8,FUN_101c0c8a0,&UNK_10d9de690);
                    /* WARNING: Could not recover jumptable at 0x00010bdb614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI17EnvironmentObjectV5errors5NeverOyF_110348c18)(0,uVar8,uVar3,uVar4);
  return;
}



/* Entry: 101c10214; end: 101c10267;  */

void FUN_101c10214(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  *(undefined1 *)(lVar2 + 0xa9) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101c10268,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
  return;
}



/* Entry: 101c10268; end: 101c103fb;  */

void FUN_101c10268(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  cVar3 = *(char *)(unaff_x22 + 0xa9);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  lVar7 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar6 = *(undefined8 *)(lVar7 + 0x68);
  uVar4 = *(undefined8 *)(lVar7 + 0x60);
  *(undefined1 *)(unaff_x22 + 0xa8) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
  uVar4 = 0x112d4f580;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f730((undefined1 *)(unaff_x22 + 0xa8),uVar4);
  uVar4 = *(undefined8 *)(lVar7 + 0x30);
  FUN_101c10998(uVar4,*(undefined1 *)(lVar7 + 0x38));
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  if (cVar3 == '\x01') {
    lVar8 = *(long *)(unaff_x22 + 0x70);
    func_0x000100083b20(unaff_x22 + 0x38);
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar7 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(uVar6,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,lVar1);
    (**(code **)(lVar7 + 0x18))(uVar4,lVar7);
    FUN_101c11044(unaff_x22 + 0x38);
    pcVar5 = *(code **)(lVar8 + 0x18);
    uVar4 = *(undefined8 *)(lVar8 + 0x20);
    func_0x000101c107ec(pcVar5,uVar4,*(undefined1 *)(lVar8 + 0x28));
    (*pcVar5)(0);
    func_0x000107c61574(uVar4);
  }
  else {
    func_0x000100083b20(unaff_x22 + 0x10);
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar7 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar4);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar1 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(uVar6,uVar2);
    (**(code **)(lVar1 + 8))(uVar2,lVar1);
    (**(code **)(lVar7 + 0x20))(uVar4,lVar7);
    FUN_101c11044(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000101c103f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c103fc; end: 101c10407;  */

void FUN_101c103fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101c10408; end: 101c10587;  */

void FUN_101c10408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined1 auStack_1a0 [16];
  undefined8 *puStack_190;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_80 = unaff_x20[0x10];
  uStack_78 = (undefined1)unaff_x20[0x11];
  uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x91);
  uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x89);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x89) >> 0x38);
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000101c12830();
  uVar2 = param_2;
  uVar7 = param_3;
  func_0x000101c12764();
  uVar3 = 0x112e08fd0;
  puStack_190 = &uStack_100;
  func_0x0001000285a8(0x112e08fd0,&UNK_10d9dea68);
  uVar4 = 0x112e08fd8;
  func_0x000101c11484(0x112e08fd8,0x112e08fd0,&UNK_10d9dea68,
                      PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  FUN_101c13d3c(param_1,param_2,param_3,0,0,uVar2,uVar7,FUN_101c10fc8,auStack_1a0,uVar3,uVar4);
  puVar5 = &UNK_110456648;
  func_0x000107c613fc(&UNK_110456648,0xa9,7);
  *(undefined8 *)(puVar5 + 0x78) = uStack_98;
  *(undefined8 *)(puVar5 + 0x70) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x88) = uStack_88;
  *(undefined8 *)(puVar5 + 0x80) = uStack_90;
  *(ulong *)(puVar5 + 0x98) = CONCAT71(uStack_77,uStack_78);
  *(undefined8 *)(puVar5 + 0x90) = uStack_80;
  *(undefined8 *)(puVar5 + 0xa1) = uStack_6f;
  *(ulong *)(puVar5 + 0x99) = CONCAT17(uStack_70,uStack_77);
  *(undefined8 *)(puVar5 + 0x38) = uStack_d8;
  *(undefined8 *)(puVar5 + 0x30) = uStack_e0;
  *(undefined8 *)(puVar5 + 0x48) = uStack_c8;
  *(undefined8 *)(puVar5 + 0x40) = uStack_d0;
  *(undefined8 *)(puVar5 + 0x58) = uStack_b8;
  *(undefined8 *)(puVar5 + 0x50) = uStack_c0;
  *(undefined8 *)(puVar5 + 0x68) = uStack_a8;
  *(undefined8 *)(puVar5 + 0x60) = uStack_b0;
  *(undefined8 *)(puVar5 + 0x18) = uStack_f8;
  *(undefined8 *)(puVar5 + 0x10) = uStack_100;
  *(undefined8 *)(puVar5 + 0x28) = uStack_e8;
  *(undefined8 *)(puVar5 + 0x20) = uStack_f0;
  lVar6 = 0x112e08fe0;
  func_0x0001000285a8(0x112e08fe0,&UNK_10d9dea70);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x24));
  *puVar1 = 0x101c10fd0;
  puVar1[1] = puVar5;
  puVar1[2] = 0;
  puVar1[3] = 0;
  func_0x000101c0b038(&uStack_100,auStack_1a0);
  return;
}



/* Entry: 101c10588; end: 101c1061f;  */

void FUN_101c10588(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168();
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ce94();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5d9c8();
  func_0x000107c61170(puVar3);
  pcVar1 = "CFoECMi6A2AB&uc=8";
  if (puVar2 != (undefined *)0x2) {
    pcVar1 = "erImageFetching>";
  }
  uRam0000000112e08ff0 = 0xd000000000000051;
  uRam0000000112e08ff8 = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Entry: 101c10620; end: 101c10997;  */

undefined8 FUN_101c10620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_80 [4];
  uint uStack_7c;
  undefined8 auStack_78 [3];
  
  uVar1 = (uint)param_3 >> 8 & 0xff;
  lVar2 = 0;
  func_0x000107c5f3f8();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (uVar1 == 1) {
    func_0x0001000ab9d4(param_1,param_2,param_3);
  }
  else {
    uVar3 = param_1;
    func_0x000107c6157c();
    func_0x000107c5ff78();
    uVar4 = uVar3;
    func_0x000107c5f558();
    uVar6 = uVar4;
    func_0x000107c611d4();
    if ((int)uVar6 != 0) {
      puVar5 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar6 = 0x20;
      uStack_7c = uVar1;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar5 = 0x8200102;
      uVar7 = 0x7475626972747441;
      auStack_78[0] = uVar6;
      func_0x0001014bfa20(0x7475626972747441,0xee006b7361546465,auStack_78);
      *(undefined8 *)(puVar5 + 1) = uVar7;
      func_0x000107c60ea4(0x100000000,uVar4,(uint)uVar3 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar5,0xc);
      FUN_101c11044(uVar6);
      func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      uVar1 = uStack_7c;
      func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar4);
    func_0x000107c5f3f4(puVar9);
    func_0x000107c614bc(auStack_78,puVar9,param_1);
    FUN_101c015ac(param_1,param_2,param_3,uVar1);
    (**(code **)(lVar8 + 8))(puVar9,lVar2);
    param_1 = auStack_78[0];
  }
  return param_1;
}



/* Entry: 101c10998; end: 101c10c9f;  */

undefined8 FUN_101c10998(undefined8 param_1,char param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5f3f8();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  func_0x000107c6157c();
  if (param_2 != '\x01') {
    func_0x000107c5ff78();
    uVar3 = uVar2;
    func_0x000107c5f558();
    uVar5 = uVar3;
    func_0x000107c611d4();
    if ((int)uVar5 != 0) {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      uVar6 = 0xd000000000000026;
      uStack_58 = uVar5;
      func_0x0001014bfa20(0xd000000000000026,0x800000010f003680,&uStack_58);
      *(undefined8 *)(puVar4 + 1) = uVar6;
      func_0x000107c60ea4(0x100000000,uVar3,(uint)uVar2 & 0xff,
                          "Accessing Environment<%s>\'s value outside of being installed on a View. This will always read the default value and will not update."
                          ,puVar4,0xc);
      FUN_101c11044(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar3);
    func_0x000107c5f3f4(puVar7);
    func_0x000107c614bc(&uStack_58,puVar7,param_1);
    func_0x000107c61574(param_1);
    (**(code **)(lVar8 + 8))(puVar7,lVar1);
    param_1 = uStack_58;
  }
  return param_1;
}


