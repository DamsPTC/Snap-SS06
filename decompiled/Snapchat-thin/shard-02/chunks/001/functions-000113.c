/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101999aec; end: 101999b17;  */

void FUN_101999aec(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101999b18; end: 101999b8b;  */

void FUN_101999b18(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x50);
  plVar5 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101999d10;
  plVar5[5] = lVar2;
  plVar5[6] = lVar4;
  plVar5[3] = lVar1;
  plVar5[4] = lVar3;
  plVar5[2] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019993ac,0,0);
  return;
}



/* Entry: 101999b8c; end: 101999c3f;  */

void FUN_101999b8c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101999bd8;
  plVar1[2] = unaff_x20 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019991f0,0,0);
  return;
}



/* Entry: 101999c40; end: 101999c93;  */

void FUN_101999c40(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101999d14;
  plVar1[2] = unaff_x20 + 0x10;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199909c,0,0);
  return;
}



/* Entry: 101999c94; end: 101999cff;  */

void FUN_101999c94(void)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  piVar3 = *(int **)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101999d18;
  plVar5[2] = (long)piVar3;
  plVar5[3] = lVar6;
  if (lVar2 != 0) {
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    plVar5[4] = (long)plVar4;
    *plVar4 = (long)plVar5;
    plVar4[1] = 0x101998fa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  plVar5[5] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x101999048;
                    /* WARNING: Could not recover jumptable at 0x000101998fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 101999d00; end: 101999d1b;  */

void FUN_101999d00(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101999900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101999d1c; end: 101999d73;  */

undefined8 FUN_101999d1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10199be04(param_1,param_2);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101999d74; end: 101999d8b;  */

void FUN_101999d74(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101999d8c,0,0);
  return;
}



/* Entry: 101999d8c; end: 101999dd3;  */

void FUN_101999d8c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101999dd4,uVar1,0);
  return;
}



/* Entry: 101999dd4; end: 101999e23;  */

void FUN_101999dd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10199ba34();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101999e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(param_1,param_2);
  return;
}



/* Entry: 101999e24; end: 101999f4f; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger badgeIdWithCompletionHandler:] */

void FUN_101999e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_110420950;
  func_0x000107c613fc(&UNK_110420950,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_110420978;
  func_0x000107c613fc(&UNK_110420978,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9a85d0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_1104209a0;
  func_0x000107c613fc(&UNK_1104209a0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9a85e0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c6157c(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d9a85f0,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101999f50; end: 101999fd7;  */

void FUN_101999f50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  func_0x000107c6157c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101999f90,0,0);
  return;
}



/* Entry: 101999fd8; end: 10199a027;  */

void FUN_101999fd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_10199ba34();
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  func_0x000107c61574(uVar1);
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a028,0,0);
  return;
}



/* Entry: 10199a028; end: 10199a093;  */

void FUN_10199a028(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x10))(*(long *)(unaff_x22 + 0x20),uVar1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010199a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199a094; end: 10199a29f;  */

void FUN_10199a094(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long alStack_70 [2];
  
  lVar2 = 0;
  lVar7 = param_2;
  func_0x000107c5ef14();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(ulong *)(unaff_x20 + 0x48);
  func_0x000107c4b940(uVar6);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  *(long *)(unaff_x20 + 0x50) = param_1;
  func_0x000107c61434(param_1);
  func_0x000107c6142c(uVar8);
  func_0x000107c5d278();
  if (param_2 < 0) goto LAB_10199a1ec;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5ef04(&stack0xffffffffffffffa0 + lVar1);
  func_0x000107c5eed8();
  if (lVar7 == 0) {
LAB_10199a17c:
    lVar7 = -0x1b00000000000000;
    uVar6 = 0x524548544f;
  }
  else {
    if (lRam0000000112de0c88 != -1) {
      func_0x000107c61568(0x112de0c88,FUN_10199bc08);
    }
    uVar3 = uVar6;
    func_0x0001000f66f0(uVar6,lVar7,uRam0000000112de0c90);
    if ((uVar3 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_10199a17c;
    }
  }
  (**(code **)(lVar9 + 8))(&stack0xffffffffffffffa0 + lVar1,lVar2);
  func_0x000107c5fadc(uVar6,lVar7);
  func_0x000107c6142c(lVar7);
  uVar4 = 0x64657475706d6f63;
  func_0x000107c5fadc(0x64657475706d6f63,0xe800000000000000);
  func_0x0001055ac538(uVar8,uVar6,uVar4,1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
LAB_10199a1ec:
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar5 = &UNK_110420900;
    func_0x000107c613fc(&UNK_110420900,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    *(undefined **)((long)alStack_70 + lVar1) = PTR___sytN_11034f1b0 + 8;
    uVar8 = 9;
    func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a84e0,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 10199a2a0; end: 10199a2b7;  */

void FUN_10199a2a0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a2b8,0,0);
  return;
}



/* Entry: 10199a2b8; end: 10199a337;  */

void FUN_10199a2b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
    func_0x000107c6157c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a338,uVar2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199a334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199a338; end: 10199a423;  */

void FUN_10199a338(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  lVar1 = *(long *)(lVar4 + 0x90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x38) + 0x78));
    func_0x000107c56bd8(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
  }
  lVar1 = *(long *)(lVar4 + 0x90);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = *(long *)(unaff_x22 + 0x38);
  if (lVar1 == 0) {
    func_0x000107c61574(lVar4);
    pcVar3 = FUN_10199c3e0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x80);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(lVar4 + 0x88));
    func_0x000107c56bd8(lVar1);
    func_0x000107c61574(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar2);
    pcVar3 = FUN_10199a424;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 10199a424; end: 10199a453;  */

void FUN_10199a424(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010199a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199a454; end: 10199a4cf; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger updateBadgeInfoWithFriendingBadgeInfo:badgeResult:] */

void FUN_10199a454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000103e6d380(0);
  uVar2 = uVar1;
  FUN_101994c60();
  func_0x000107c5f9e8(param_3,uVar1,PTR___sSiN_11034deb0,uVar2);
  func_0x000107c6157c(param_1);
  FUN_10199a094(param_3,param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10199a4d0; end: 10199a6fb;  */

void FUN_10199a4d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long alStack_60 [2];
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar8);
  if ((*(byte *)(unaff_x20 + 0x30) & 1) == 0) {
    *(long *)(unaff_x20 + 0x38) = param_1;
  }
  func_0x000107c5d278();
  if (param_1 < 0) {
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5ef04(&stack0xffffffffffffffb0 + lVar1);
  func_0x000107c5eed8();
  if (param_2 != 0) {
    if (lRam0000000112de0c88 != -1) {
      func_0x000107c61568(0x112de0c88,FUN_10199bc08);
    }
    uVar3 = uVar8;
    func_0x0001000f66f0(uVar8,param_2,uRam0000000112de0c90);
    if ((uVar3 & 1) != 0) goto LAB_10199a5ac;
    func_0x000107c6142c(param_2);
  }
  param_2 = -0x1b00000000000000;
  uVar8 = 0x524548544f;
LAB_10199a5ac:
  (**(code **)(lVar9 + 8))(&stack0xffffffffffffffb0 + lVar1,lVar2);
  func_0x000107c5fadc(uVar8,param_2);
  func_0x000107c6142c(param_2);
  uVar4 = 0x6579616c70736964;
  func_0x000107c5fadc(0x6579616c70736964,0xe900000000000064);
  func_0x0001055ac538(uVar7,uVar8,uVar4,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c4b940(uVar7);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c61434(uVar4);
  func_0x000107c5d278(uVar7);
  puVar5 = &UNK_110420900;
  func_0x000107c613fc(&UNK_110420900,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_110420928;
  func_0x000107c613fc(&UNK_110420928,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(undefined **)((long)alStack_60 + lVar1) = PTR___sytN_11034f1b0 + 8;
  uVar7 = 9;
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a84f0,puVar6);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 10199a6fc; end: 10199a713;  */

void FUN_10199a6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a714,0,0);
  return;
}



/* Entry: 10199a714; end: 10199a877;  */

void FUN_10199a714(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x38) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x10199a7a0;
    plVar1[5] = *(long *)(unaff_x22 + 0x30);
    plVar1[6] = lVar3;
    lVar3 = 0;
    func_0x000107c5ef14();
    plVar1[7] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar1[8] = lVar3;
    uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar1[9] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a878,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199a79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199a878; end: 10199a9c3;  */

void FUN_10199a878(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_10199a99c:
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010199a9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar8 = 0;
  lVar4 = 0;
  lVar10 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
  uVar5 = -lVar10;
  uVar6 = 0xffffffffffffffff;
  if (uVar5 < 0x40) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar3 + 0x40);
  do {
    *(long *)(unaff_x22 + 0x50) = lVar4;
    while (uVar6 == 0) {
      bVar2 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10199a9c0);
        (*pcVar1)();
      }
      if ((long)(0x3fU - lVar10 >> 6) <= lVar8) {
        func_0x000107c61434();
        FUN_10199c224();
        func_0x0001000d224c(unaff_x22 + 0x20);
        *(long *)(unaff_x22 + 0x58) = *(long *)(unaff_x22 + 0x20);
        if (*(long *)(unaff_x22 + 0x20) != 0) {
          uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x20);
          *(undefined8 *)(unaff_x22 + 0x60) = uVar9;
          func_0x000107c6157c(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a9c4,uVar9,0);
          return;
        }
        goto LAB_10199a99c;
      }
      uVar6 = ((ulong *)(lVar3 + 0x40))[lVar8];
    }
    uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    lVar7 = *(long *)(*(long *)(lVar3 + 0x38) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 8 +
                     lVar8 * 0x200);
    bVar2 = SCARRY8(lVar4,lVar7);
    lVar4 = lVar4 + lVar7;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10199a9c4);
      (*pcVar1)();
    }
    uVar6 = uVar6 - 1 & uVar6;
  } while( true );
}



/* Entry: 10199a9c4; end: 10199aa17;  */

void FUN_10199a9c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_10199b80c();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  func_0x000107c61574(uVar2);
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199aa18,0,0);
  return;
}



/* Entry: 10199aa18; end: 10199ab97;  */

void FUN_10199aa18(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar6 = *(long *)(unaff_x22 + 0x68);
  if (lVar6 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    goto LAB_10199ab54;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(ulong *)(unaff_x22 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  lVar7 = lVar6;
  FUN_10199c22c(uVar2,lVar6,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c6142c(lVar6);
  func_0x000107c4bfb0();
  uVar8 = *(undefined8 *)(lVar1 + 0x28);
  func_0x000107c5ef04(uVar9);
  func_0x000107c5eed8();
  if (lVar7 == 0) {
LAB_10199aac8:
    lVar7 = -0x1b00000000000000;
    uVar3 = 0x524548544f;
  }
  else {
    if (lRam0000000112de0c88 != -1) {
      func_0x000107c61568(0x112de0c88,FUN_10199bc08);
    }
    uVar4 = uVar3;
    func_0x0001000f66f0(uVar3,lVar7,uRam0000000112de0c90);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(lVar7);
      goto LAB_10199aac8;
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c5fadc(uVar3,lVar7);
  func_0x000107c6142c(lVar7);
  uVar5 = 0x69665f746e657665;
  func_0x000107c5fadc(0x69665f746e657665,0xeb00000000646572);
  func_0x0001055ac538(uVar8,uVar3,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
LAB_10199ab54:
  func_0x000107c615e8(uVar9);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010199ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199ab98; end: 10199abc7; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger reportDisplayedBadge:] */

void FUN_10199ab98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_10199a4d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199abc8; end: 10199abd3; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger incrementButtonBadgeWithFriendingBadgeInfo:] */

void FUN_10199abc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000103e6d380(0);
  uVar2 = uVar1;
  FUN_101994c60();
  func_0x000107c5f9e8(param_3,uVar1,PTR___sSiN_11034deb0,uVar2);
  func_0x000107c6157c(param_1);
  FUN_10199abd4(param_3,&UNK_1055ab818);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10199abd4; end: 10199afdf;  */

void FUN_10199abd4(long param_1,code *param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  long extraout_x8;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong *puVar17;
  long unaff_x20;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_130 [8];
  undefined1 *puStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  uint uStack_c4;
  ulong uStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [80];
  
  lVar10 = 0;
  pcStack_d0 = param_2;
  func_0x000107c5ef14();
  lStack_e0 = *(long *)(lVar10 + -8);
  lStack_d8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  puStack_128 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = (ulong *)(param_1 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *puVar17;
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_f0 = 0x800000010efc4f80;
  uStack_100 = 0x800000010efc4fc0;
  uStack_f8 = 0x800000010efc4fa0;
  uStack_110 = 0x800000010efc5000;
  uStack_108 = 0x800000010efc4fe0;
  uStack_118 = 0x800000010efc5020;
  func_0x000107c61434(param_1);
  lVar10 = 0;
  lStack_120 = param_1;
  puVar13 = puStack_128;
  do {
    while (uVar19 == 0) {
      bVar9 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10199afe0);
        (*pcVar12)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar10) {
        func_0x000107c61574(param_1);
        return;
      }
      uVar19 = puVar17[lVar10];
    }
    uVar14 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    uVar14 = lVar10 << 9 | LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) << 3;
    pcVar12 = *(code **)(*(long *)(param_1 + 0x30) + uVar14);
    uVar14 = *(ulong *)(*(long *)(param_1 + 0x38) + uVar14);
    func_0x000107c61174();
    func_0x000107c61174();
    pcStack_b8 = pcVar12;
    func_0x000103e6bddc();
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    pcVar18 = pcVar12;
    uStack_c0 = uVar14;
    func_0x000107c5ef04(puVar13);
    func_0x000107c5eed8();
    if (param_2 == (code *)0x0) {
      param_2 = (code *)0xe500000000000000;
      pcVar18 = (code *)0x524548544f;
    }
    else {
      uStack_c4 = (uint)pcVar12;
      if (lRam0000000112de0c88 != -1) {
        func_0x000107c61568(0x112de0c88,FUN_10199bc08);
      }
      lVar8 = lRam0000000112de0c90;
      if (*(long *)(lRam0000000112de0c90 + 0x10) != 0) {
        func_0x000107c6068c(auStack_b0,*(undefined8 *)(lRam0000000112de0c90 + 0x28));
        puVar13 = auStack_b0;
        func_0x000107c5fb58(puVar13,pcVar18,param_2);
        func_0x000107c606a8();
        uVar14 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
        uVar20 = (ulong)puVar13 & (uVar14 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar8 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0) {
          do {
            puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar20 * 0x10);
            pcVar12 = (code *)*puVar2;
            pcVar6 = (code *)puVar2[1];
            if ((pcVar12 == pcVar18 && param_2 == pcVar6) ||
               (func_0x000107c605b8(pcVar12,pcVar6,pcVar18,param_2,0), ((ulong)pcVar12 & 1) != 0))
            goto LAB_10199af84;
            uVar20 = uVar20 + 1 & ~uVar14;
          } while ((*(ulong *)(lVar8 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0);
        }
      }
      func_0x000107c6142c(param_2);
      param_2 = (code *)0xe500000000000000;
      pcVar18 = (code *)0x524548544f;
LAB_10199af84:
      pcVar12 = (code *)(ulong)uStack_c4;
      param_1 = lStack_120;
      puVar13 = puStack_128;
    }
    uVar19 = uVar19 - 1 & uVar19;
    (**(code **)(lStack_e0 + 8))(puVar13,lStack_d8);
    func_0x000107c5fadc(pcVar18,param_2);
    func_0x000107c6142c(param_2);
    uVar3 = (uint)pcVar12 & 0xff;
    uVar11 = 0x69745f6c61636f6c;
    if (uVar3 != 6) {
      uVar11 = 0x6e776f6e6b6e75;
    }
    uVar16 = 0xeb0000000072656d;
    if (uVar3 != 6) {
      uVar16 = 0xe700000000000000;
    }
    puVar7 = &uStack_f8;
    uVar1 = 0xd000000000000015;
    if (uVar3 != 4) {
      puVar7 = &uStack_f0;
      uVar1 = 0xd00000000000001f;
    }
    if (uVar3 < 6) {
      uVar16 = *puVar7;
      uVar11 = uVar1;
    }
    uVar1 = 0xd00000000000001a;
    puVar7 = &uStack_108;
    if (uVar3 != 2) {
      uVar1 = 0xd000000000000010;
      puVar7 = &uStack_100;
    }
    uVar4 = uStack_118;
    uVar5 = 0xd00000000000001c;
    if (((ulong)pcVar12 & 0xff) != 0) {
      uVar4 = uStack_110;
      uVar5 = 0xd000000000000016;
    }
    if (uVar3 == 1 || ((ulong)pcVar12 & 0xff) == 0) {
      uVar1 = uVar5;
    }
    uVar5 = *puVar7;
    if (uVar3 == 1 || ((ulong)pcVar12 & 0xff) == 0) {
      uVar5 = uVar4;
    }
    if (uVar3 < 4) {
      uVar16 = uVar5;
      uVar11 = uVar1;
    }
    func_0x000107c5fadc(uVar11,uVar16);
    func_0x000107c6142c(uVar16);
    param_2 = pcVar18;
    (*pcStack_d0)(uStack_e8,pcVar18,uVar11,uStack_c0);
    func_0x000107c61170(pcStack_b8);
    func_0x000107c61170(pcVar18);
    func_0x000107c61170(uVar11);
  } while( true );
}



/* Entry: 10199afe0; end: 10199afeb; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger incrementNotificationReceivedWithFriendingBadgeInfo:] */

void FUN_10199afe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000103e6d380(0);
  uVar2 = uVar1;
  FUN_101994c60();
  func_0x000107c5f9e8(param_3,uVar1,PTR___sSiN_11034deb0,uVar2);
  func_0x000107c6157c(param_1);
  FUN_10199abd4(param_3,&UNK_1055ab5e8);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10199afec; end: 10199b067;  */

void FUN_10199afec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000103e6d380(0);
  uVar2 = uVar1;
  FUN_101994c60();
  func_0x000107c5f9e8(param_3,uVar1,PTR___sSiN_11034deb0,uVar2);
  func_0x000107c6157c(param_1);
  FUN_10199abd4(param_3,param_4);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10199b068; end: 10199b243;  */

void FUN_10199b068(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar8);
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  func_0x000107c5d278(uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4b940(uVar8);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar1 = 0x676461625f746f64;
  if (lVar6 != 0) {
    uVar1 = 0x64657265626d756e;
  }
  uVar9 = 0xea00000000006465;
  if (lVar6 != 0) {
    uVar9 = 0xef6465676461625f;
  }
  uVar3 = 0x656e6f6e;
  if (-1 < lVar6) {
    uVar3 = uVar1;
  }
  uVar4 = 0xe400000000000000;
  if (-1 < lVar6) {
    uVar4 = uVar9;
  }
  func_0x000107c5d278(uVar8);
  uVar9 = uVar4;
  func_0x000107c5fadc(uVar3);
  func_0x000107c6142c();
  func_0x000107c5ef04(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eed8();
  if (uVar9 != 0) {
    if (lRam0000000112de0c88 != -1) {
      func_0x000107c61568(0x112de0c88,FUN_10199bc08);
    }
    uVar5 = uVar4;
    func_0x0001000f66f0(uVar4,uVar9,uRam0000000112de0c90);
    if ((uVar5 & 1) != 0) goto LAB_10199b1c0;
    func_0x000107c6142c(uVar9);
  }
  uVar9 = 0xe500000000000000;
  uVar4 = 0x524548544f;
LAB_10199b1c0:
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c5fadc(uVar4,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x0001055aba48(uVar7,uVar3,uVar4,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10199b244; end: 10199b26b; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger incrementAddFriendsPageOpen] */

void FUN_10199b244(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10199b068();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b26c; end: 10199b277; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger logIncomingFriendImpression:] */

void FUN_10199b26c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_10199b2bc(param_3,&UNK_1055abea8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b278; end: 10199b2bb;  */

void FUN_10199b278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c6157c();
  FUN_10199b2bc(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b2bc; end: 10199b4b7;  */

void FUN_10199b2bc(long param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar7);
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c5d278(uVar7);
  if (0 < param_1) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c4b940(uVar7);
    lVar5 = *(long *)(unaff_x20 + 0x38);
    uVar1 = 0x676461625f746f64;
    if (lVar5 != 0) {
      uVar1 = 0x64657265626d756e;
    }
    uVar8 = 0xea00000000006465;
    if (lVar5 != 0) {
      uVar8 = 0xef6465676461625f;
    }
    uVar3 = 0x656e6f6e;
    if (-1 < lVar5) {
      uVar3 = uVar1;
    }
    uVar9 = 0xe400000000000000;
    if (-1 < lVar5) {
      uVar9 = uVar8;
    }
    func_0x000107c5d278(uVar7);
    uVar8 = uVar9;
    func_0x000107c5fadc(uVar3);
    func_0x000107c6142c();
    func_0x000107c5ef04(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5eed8();
    if (uVar8 == 0) {
      uVar8 = 0xe500000000000000;
      uVar9 = 0x524548544f;
    }
    else {
      if (lRam0000000112de0c88 != -1) {
        func_0x000107c61568(0x112de0c88,FUN_10199bc08);
      }
      uVar4 = uVar9;
      func_0x0001000f66f0(uVar9,uVar8,uRam0000000112de0c90);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(uVar8);
        uVar8 = 0xe500000000000000;
        uVar9 = 0x524548544f;
      }
    }
    (**(code **)(lVar10 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    func_0x000107c5fadc(uVar9,uVar8);
    func_0x000107c6142c(uVar8);
    (*param_2)(uVar6,uVar3,uVar9,param_1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar9);
  }
  return;
}



/* Entry: 10199b4b8; end: 10199b4c3; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger logFriendSuggestionImpression:] */

void FUN_10199b4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_10199b2bc(param_3,&UNK_1055abc78);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b4c4; end: 10199b4cf; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger logIncomingFriendAdded] */

void FUN_10199b4c4(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10199b5cc(&UNK_1055ac308);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b4d0; end: 10199b4ff;  */

void FUN_10199b4d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_10199b5cc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b500; end: 10199b587;  */

void FUN_10199b500(void)

{
  undefined *puVar1;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    puVar1 = PTR_PTR_1126a8200;
    func_0x000107c610f8(PTR_PTR_1126a8200);
    func_0x000107c453e4();
    func_0x000107c572a0();
    func_0x000107c5a48c(puVar1);
    func_0x000107c4bfb0(lStack_38);
    func_0x000107c615e8(lStack_38);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10199b588; end: 10199b5cb; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger logReminderNotificationDisplayedWithPayloadUserIdCount:validUserIdCount:] */

void FUN_10199b588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c6157c();
  FUN_10199b500(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b5cc; end: 10199b793;  */

void FUN_10199b5cc(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ef14();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4b940(uVar8);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar1 = 0x676461625f746f64;
  if (lVar6 != 0) {
    uVar1 = 0x64657265626d756e;
  }
  uVar9 = 0xea00000000006465;
  if (lVar6 != 0) {
    uVar9 = 0xef6465676461625f;
  }
  uVar3 = 0x656e6f6e;
  if (-1 < lVar6) {
    uVar3 = uVar1;
  }
  uVar4 = 0xe400000000000000;
  if (-1 < lVar6) {
    uVar4 = uVar9;
  }
  func_0x000107c5d278(uVar8);
  uVar9 = uVar4;
  func_0x000107c5fadc(uVar3);
  func_0x000107c6142c();
  func_0x000107c5ef04(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eed8();
  if (uVar9 != 0) {
    if (lRam0000000112de0c88 != -1) {
      func_0x000107c61568(0x112de0c88,FUN_10199bc08);
    }
    uVar5 = uVar4;
    func_0x0001000f66f0(uVar4,uVar9,uRam0000000112de0c90);
    if ((uVar5 & 1) != 0) goto LAB_10199b710;
    func_0x000107c6142c(uVar9);
  }
  uVar9 = 0xe500000000000000;
  uVar4 = 0x524548544f;
LAB_10199b710:
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c5fadc(uVar4,uVar9);
  func_0x000107c6142c(uVar9);
  (*param_1)(uVar7,uVar3,uVar4,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 10199b794; end: 10199b79f; -[_TtC29FriendingBadgeServiceProvider20FriendingBadgeLogger logFriendSuggestionAdded] */

void FUN_10199b794(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10199b5cc(&UNK_1055ac0d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10199b7a0; end: 10199b80b;  */

void FUN_10199b7a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10199b80c; end: 10199ba33;  */

void FUN_10199b80c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = *(undefined1 **)(unaff_x20 + 0x90);
  puVar4 = puVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c61170();
    func_0x00010199bafc();
    puVar1 = (undefined1 *)0x0;
    if (((uint)param_3 & 0xff) != 1) {
      puVar1 = puVar4;
    }
    if (((*(byte *)(unaff_x20 + 0x98) & 1) != 0) || ((long)puVar1 < param_2)) {
      *(undefined1 *)(unaff_x20 + 0x98) = 0;
      func_0x00010199ba34();
      if (param_3 == 0) {
        func_0x000107c5eea0(puVar5);
        func_0x000107c5ee8c();
        (**(code **)(lVar9 + 8))(puVar5,lVar3);
        func_0x000107c5fdd8(param_1);
        param_3 = lVar3;
        puVar4 = puVar5;
      }
      func_0x000107c61434(param_3);
      puVar5 = puVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar5 != (undefined1 *)0x0) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
        func_0x000107c5fb28(puVar4,param_3);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSString_1126ae4d0);
        func_0x000107c48ff0();
        func_0x000107c61574(puVar4);
        func_0x000107c5fadc(uVar7,uVar2);
        func_0x000107c56bd8(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar5);
      }
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar8 != (undefined1 *)0x0) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ed0();
        func_0x000107c5fadc(uVar7,uVar2);
        func_0x000107c56bd8(puVar8);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(puVar8);
      }
      func_0x000107c6142c(param_3);
    }
  }
  return;
}



/* Entry: 10199ba34; end: 10199bbc7;  */

void FUN_10199ba34(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x90);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
    func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x78));
    lVar3 = lVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      uVar2 = 0x112d373e8;
      lStack_38 = lVar3;
      func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
      func_0x000107c6147c(auStack_48,&lStack_38,uVar2,PTR___sSSN_11034da80,6);
    }
  }
  return;
}



/* Entry: 10199bbc8; end: 10199bbfb;  */

void FUN_10199bbc8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 10199bbfc; end: 10199bc07;  */

void FUN_10199bbfc(void)

{
  return;
}



/* Entry: 10199bc08; end: 10199bd87;  */

void FUN_10199bc08(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_a8 [72];
  
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar6 = 0xb;
  func_0x000107c602e8();
  lVar13 = 0;
  lVar1 = lVar6 + 0x38;
  do {
    uVar3 = *(ulong *)(lVar13 * 0x10 + 0x112de0ec8);
    uVar4 = *(ulong *)(lVar13 * 0x10 + 0x112de0ed0);
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar6 + 0x28));
    func_0x000107c61434(uVar4);
    puVar7 = auStack_a8;
    func_0x000107c5fb58(puVar7,uVar3,uVar4);
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    uVar12 = (ulong)puVar7 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar12 >> 6;
    uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
    uVar10 = 1L << (uVar12 & 0x3f);
    if ((uVar10 & uVar9) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
        uVar8 = *puVar2;
        uVar9 = puVar2[1];
        if ((uVar8 == uVar3 && uVar9 == uVar4) ||
           (func_0x000107c605b8(uVar8,uVar9,uVar3,uVar4,0), (uVar8 & 1) != 0)) {
          func_0x000107c6142c(uVar4);
          goto LAB_10199bc70;
        }
        uVar12 = uVar12 + 1 & ~uVar11;
        uVar8 = uVar12 >> 6;
        uVar9 = *(ulong *)(lVar1 + uVar8 * 8);
        uVar10 = 1L << (uVar12 & 0x3f);
      } while ((uVar10 & uVar9) != 0);
    }
    *(ulong *)(lVar1 + uVar8 * 8) = uVar10 | uVar9;
    puVar2 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10199bd88);
      (*pcVar5)();
    }
    *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
LAB_10199bc70:
    lVar13 = lVar13 + 1;
    if (lVar13 == 0xb) {
      func_0x000107c61408(0x112de0ec8,0xb,PTR___sSSN_11034da80);
      lRam0000000112de0c90 = lVar6;
      return;
    }
  } while( true );
}



/* Entry: 10199bd88; end: 10199be03;  */

void FUN_10199bd88(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010199bdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10199be04; end: 10199bf27;  */

void FUN_10199be04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  puVar2 = PTR_PTR_1126a81f8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xffffffffffffffff;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x40) = puVar2;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x48) = puVar2;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001019912f4();
  *(undefined **)(unaff_x20 + 0x50) = puVar2;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  func_0x0001000bda74();
  *(long *)(unaff_x20 + 0x10) = param_1;
  func_0x00010199c03c();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(param_1 + 0x70) = 0xd00000000000001e;
  *(undefined8 *)(param_1 + 0x78) = 0x800000010efc5040;
  *(undefined8 *)(param_1 + 0x80) = 0xd000000000000021;
  *(undefined8 *)(param_1 + 0x88) = 0x800000010efc5060;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined8 *)(param_1 + 0x90) = param_2;
  *(long *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Entry: 10199bf28; end: 10199bf7b;  */

void FUN_10199bf28(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10199c3e8;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a2b8,0,0);
  return;
}



/* Entry: 10199bf7c; end: 10199bfdf;  */

void FUN_10199bf7c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10199bfe0;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199a714,0,0);
  return;
}



/* Entry: 10199bfe0; end: 10199c05b;  */

void FUN_10199bfe0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010199c018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10199c05c; end: 10199c097;  */

void FUN_10199c05c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10199c098; end: 10199c0fb;  */

void FUN_10199c098(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10199c3ec;
  plVar3[4] = lVar1;
  plVar3[5] = lVar2;
  func_0x000107c6157c(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101999f90,0,0);
  return;
}



/* Entry: 10199c0fc; end: 10199c173;  */

void FUN_10199c0fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10199c3f0;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10199c174; end: 10199c19f;  */

void FUN_10199c174(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10199c1a0; end: 10199c223;  */

void FUN_10199c1a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10199c3f4;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10199c224; end: 10199c22b;  */

void FUN_10199c224(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10199c22c; end: 10199c3df;  */

undefined * FUN_10199c22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR_PTR_1126a8208;
  func_0x000107c610f8(PTR_PTR_1126a8208);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c52b9c(puVar4);
  func_0x000107c61170(param_1);
  func_0x000107c59f50(puVar4);
  uVar7 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_4 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_4 + 0x40);
  func_0x000107c61434(param_4);
  lVar9 = 0;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar6 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar5 = *(ulong *)(*(long *)(param_4 + 0x30) +
                        (lVar9 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3));
      func_0x000107c61174();
      func_0x000107c61174();
      uVar6 = uVar5;
      func_0x000103e6bddc();
      uVar1 = (uint)uVar6 & 0xff;
      if (uVar1 < 4) {
        if (uVar1 == 1 || (uVar6 & 0xff) == 0) {
          if ((uVar6 & 0xff) == 0) {
            func_0x000107c52acc();
          }
          else {
            func_0x000107c59ed8();
          }
        }
        else if (uVar1 == 2) {
          func_0x000107c57bb8();
        }
        else {
          func_0x000107c55368(puVar4);
        }
      }
      else if (1 < uVar1 - 6) {
        if (uVar1 == 4) {
          func_0x000107c537bc(puVar4);
        }
        else {
          func_0x000107c572c8(puVar4);
        }
      }
      func_0x000107c61170(uVar5);
    }
    bVar3 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar3) break;
    if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
      func_0x000107c61574(param_4);
      return puVar4;
    }
    uVar8 = ((ulong *)(param_4 + 0x40))[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10199c3e0);
  (*pcVar2)();
}



/* Entry: 10199c3e0; end: 10199c40b;  */

void FUN_10199c3e0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010199a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199c40c; end: 10199c4b7;  */

void FUN_10199c40c(void)

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



/* Entry: 10199c4b8; end: 10199c527;  */

bool FUN_10199c4b8(void)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61438(uVar1,2);
  uVar3 = uVar4;
  FUN_10199c528(uVar4,uVar1);
  if (((uint)uVar3 & 0xff) == 4) {
    func_0x000107c6142c(uVar1);
    bVar2 = false;
  }
  else {
    FUN_10199c528(uVar4,uVar1);
    bVar2 = ((uint)uVar4 & 0xff) != 5;
  }
  return bVar2;
}



/* Entry: 10199c528; end: 10199c58b;  */

ulong FUN_10199c528(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Entry: 10199c58c; end: 10199c58f;  */

void FUN_10199c58c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8618;
  func_0x000107c61520(&UNK_10d9a8618,&UNK_110420ad0);
  puRam0000000112de0f80 = puVar1;
  return;
}



/* Entry: 10199c590; end: 10199c5cf;  */

void FUN_10199c590(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8618;
  func_0x000107c61520(&UNK_10d9a8618,&UNK_110420ad0);
  puRam0000000112de0f80 = puVar1;
  return;
}



/* Entry: 10199c5d0; end: 10199c733;  */

int FUN_10199c5d0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10199c64c;
        goto LAB_10199c630;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10199c630:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10199c64c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10199c734; end: 10199c94b;  */

void FUN_10199c734(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar8 - extraout_x12;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c3ac48();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar4;
  func_0x000107c5fc54(puVar4,lVar2);
  func_0x000107c61170(puVar4);
  lVar5 = *(long *)(puVar3 + 0x10);
  if (lVar5 == 0) {
    func_0x000107c6142c(puVar3);
  }
  else {
    (**(code **)(lVar10 + 0x10))
              (lVar7,puVar3 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6142c(puVar3);
  }
  pcVar9 = *(code **)(lVar10 + 0x38);
  (*pcVar9)(lVar7,lVar5 == 0,1,lVar2);
  func_0x000100029394(lVar7,lVar8);
  lVar5 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar2);
  bVar1 = (int)lVar5 != 1;
  if (bVar1) {
    (**(code **)(lVar10 + 0x20))(puVar6,lVar8,lVar2);
    func_0x000107c5ed9c(param_1,0xd000000000000017,0x800000010efc50d0);
    (**(code **)(lVar10 + 8))(puVar6,lVar2);
  }
  else {
    func_0x0001000293e4(lVar7);
    lVar7 = lVar8;
  }
  func_0x0001000293e4(lVar7);
  (*pcVar9)(param_1,!bVar1,1,lVar2);
  return;
}



/* Entry: 10199c94c; end: 10199c987;  */

undefined8 FUN_10199c94c(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_10199c988(param_1);
  return unaff_x20;
}



/* Entry: 10199c988; end: 10199cc0b;  */

void FUN_10199c988(byte param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_70 [16];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  lVar8 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar9 - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar7 - extraout_x12;
  uVar3 = 0x112de0f78;
  func_0x0001000285a8(0x112de0f78,&UNK_10d9a8610);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  FUN_10199c734(puVar9);
  puVar2 = puVar9;
  (**(code **)(lVar11 + 0x30))(puVar9,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar9);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efc5090);
    func_0x000107c466bc(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x0001000285a8(0x112de0f88,&UNK_10d9a86c0);
    func_0x000107c613fc();
    pcVar12 = FUN_10199cd98;
    func_0x0001000bdd8c(FUN_10199cd98,0);
    func_0x000107c61170(puVar4);
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x20);
    (*pcVar12)(lVar6,puVar9,lVar1);
    (**(code **)(lVar11 + 0x10))(lVar7,lVar6,lVar1);
    uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar10 = uVar5 + 0x11 & (uVar5 ^ 0xffffffffffffffff);
    puVar4 = &UNK_110420b28;
    func_0x000107c613fc(&UNK_110420b28,uVar10 + lVar8,uVar5 | 7);
    puVar4[0x10] = param_1 & 1;
    (*pcVar12)(puVar4 + uVar10,lVar7,lVar1);
    uVar3 = 0x112de0f88;
    func_0x0001000285a8(0x112de0f88,&UNK_10d9a86c0);
    func_0x000107c613fc();
    pcVar12 = FUN_10199cda0;
    func_0x0001000bdd8c(FUN_10199cda0,puVar4,uVar3);
    (**(code **)(lVar11 + 8))(lVar6,lVar1);
  }
  *(code **)(unaff_x20 + 0x10) = pcVar12;
  return;
}



/* Entry: 10199cc0c; end: 10199cd97;  */

/* WARNING: Removing unreachable block (ram,0x00010199cd70) */

void FUN_10199cc0c(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  
  lVar1 = 0x112de1048;
  func_0x0001000285a8(0x112de1048,&UNK_10d9a8790);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((param_2 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar3,param_3,lVar2);
    func_0x000107c6159c(puVar3,lVar1,0);
    FUN_1019aa2ec(auStack_70,&UNK_110420d50,&PTR_DAT_112de1180);
    func_0x0001000285a8(0x112de1050,&UNK_10d9a8798);
    func_0x000107c613fc();
  }
  else {
    func_0x000107c6159c(puVar3 + -extraout_x12,lVar1,3);
    FUN_1019aa2ec(auStack_70,&UNK_110420d50,&PTR_DAT_112de1180);
    func_0x0001000285a8(0x112de1050,&UNK_10d9a8798);
    func_0x000107c613fc();
    puVar3 = puVar3 + -extraout_x12;
  }
  FUN_1019abb90(puVar3,auStack_70);
  *param_1 = puVar3;
  return;
}



/* Entry: 10199cd98; end: 10199cd9f;  */

void FUN_10199cd98(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 10199cda0; end: 10199cddf;  */

/* WARNING: Removing unreachable block (ram,0x00010199cd70) */

void FUN_10199cda0(undefined8 *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long extraout_x8;
  ulong uVar5;
  long extraout_x12;
  long unaff_x20;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [48];
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  lVar4 = 0x112de1048;
  func_0x0001000285a8(0x112de1048,&UNK_10d9a8790);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  if ((bVar1 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))
              (puVar3,unaff_x20 + (uVar5 + 0x11 & (uVar5 ^ 0xffffffffffffffff)),lVar2);
    func_0x000107c6159c(puVar3,lVar4,0);
    FUN_1019aa2ec(auStack_70,&UNK_110420d50,&PTR_DAT_112de1180);
    func_0x0001000285a8(0x112de1050,&UNK_10d9a8798);
    func_0x000107c613fc();
  }
  else {
    func_0x000107c6159c(puVar3 + -extraout_x12,lVar4,3);
    FUN_1019aa2ec(auStack_70,&UNK_110420d50,&PTR_DAT_112de1180);
    func_0x0001000285a8(0x112de1050,&UNK_10d9a8798);
    func_0x000107c613fc();
    puVar3 = puVar3 + -extraout_x12;
  }
  FUN_1019abb90(puVar3,auStack_70);
  *param_1 = puVar3;
  return;
}



/* Entry: 10199cde0; end: 10199cdf7;  */

void FUN_10199cde0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199cdf8,0,0);
  return;
}



/* Entry: 10199cdf8; end: 10199cea3;  */

void FUN_10199cdf8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x30) = lVar3;
  if (lVar3 != 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar1;
    lVar2 = 0x112de0f90;
    func_0x0001000285a8(0x112de0f90,&UNK_10d9a86d0);
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_10199cea4;
    plVar1[0xb] = lVar2;
    plVar1[0xc] = lVar3;
    plVar1[9] = (long)FUN_10199cf8c;
    plVar1[10] = 0;
    plVar1[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac820,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199cea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10199cea4; end: 10199ceff;  */

void FUN_10199cea4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10199cf00;
  }
  else {
    pcVar1 = FUN_10199cf58;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10199cf00; end: 10199cf57;  */

void FUN_10199cf00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  func_0x0001002a64a8();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010199cf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 10199cf58; end: 10199cf8b;  */

void FUN_10199cf58(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010199cf88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199cf8c; end: 10199cfb7;  */

void FUN_10199cf8c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10199e340();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 10199cfb8; end: 10199cfcf;  */

void FUN_10199cfb8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199cfd0,0,0);
  return;
}



/* Entry: 10199cfd0; end: 10199d0d3;  */

void FUN_10199cfd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x38) = lVar6;
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar3 = &UNK_110420b50;
    func_0x000107c613fc(&UNK_110420b50,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,uVar2);
    puVar4 = &UNK_110420b78;
    func_0x000107c613fc(&UNK_110420b78,0x20,7);
    *(undefined **)(unaff_x22 + 0x40) = puVar4;
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    plVar7 = (long *)0x70;
    func_0x000107c61434(uVar1);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar7;
    lVar5 = 0x112de0f90;
    func_0x0001000285a8(0x112de0f90,&UNK_10d9a86d0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10199d0d4;
    plVar7[0xb] = lVar5;
    plVar7[0xc] = lVar6;
    plVar7[9] = (long)FUN_10199d338;
    plVar7[10] = (long)puVar4;
    plVar7[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199d0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d0d4; end: 10199d137;  */

void FUN_10199d0d4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10199d138;
  }
  else {
    pcVar2 = FUN_10199d194;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10199d138; end: 10199d193;  */

void FUN_10199d138(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x0001002a64a8();
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010199d190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d194; end: 10199d1c7;  */

void FUN_10199d194(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010199d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d1c8; end: 10199d337;  */

/* WARNING: Removing unreachable block (ram,0x00010199d314) */

void FUN_10199d1c8(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long unaff_x21;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    *param_1 = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_10199e138(param_4,param_2);
    if (unaff_x21 == 0) {
      uVar6 = *(ulong *)(param_4 + 0x10);
      if (uVar6 != 0) {
        uVar8 = 0;
        puVar7 = (undefined8 *)(param_4 + 0x48);
        do {
          if (*(ulong *)(param_4 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10199d338);
            (*pcVar5)();
          }
          uVar1 = puVar7[-1];
          uVar3 = *puVar7;
          uVar2 = puVar7[-3];
          uVar4 = puVar7[-2];
          uVar9 = puVar7[-4];
          func_0x000107c61434(uVar2);
          func_0x000107c61434(uVar3);
          FUN_10199eea0(uVar9,uVar2,uVar4,uVar1,uVar3);
          func_0x000107c6142c(uVar3);
          func_0x000107c6142c(uVar2);
          uVar8 = uVar8 + 1;
          puVar7 = puVar7 + 6;
        } while (uVar6 != uVar8);
      }
      func_0x000107c61574(param_3);
      *param_1 = param_4;
    }
    else {
      func_0x000107c61574(param_3);
    }
  }
  return;
}



/* Entry: 10199d338; end: 10199d34f;  */

void FUN_10199d338(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10199d1c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10199d350; end: 10199d367;  */

void FUN_10199d350(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199d368,0,0);
  return;
}



/* Entry: 10199d368; end: 10199d507;  */

void FUN_10199d368(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  byte *pbVar8;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar6;
  if (lVar6 != 0) {
    func_0x000103e6ae00();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      pbVar8 = (byte *)(param_1 + 0x20);
      do {
        bVar2 = *pbVar8;
        if (bVar2 - 2 < 4 || bVar2 == 0) {
          puVar4 = puVar3;
          func_0x000107c61558();
          if (((ulong)puVar4 & 1) == 0) {
            func_0x00010199de90(0,*(long *)(puVar3 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puVar3 + 0x10);
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
            func_0x00010199de90(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
          puVar3[uVar1 + 0x20] = bVar2;
        }
        lVar7 = lVar7 + -1;
        pbVar8 = pbVar8 + 1;
      } while (lVar7 != 0);
    }
    func_0x000107c6142c(param_1);
    puVar4 = &UNK_110420ba0;
    func_0x000107c613fc(&UNK_110420ba0,0x18,7);
    *(undefined **)(unaff_x22 + 0x30) = puVar4;
    *(undefined **)(puVar4 + 0x10) = puVar3;
    plVar5 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_10199d508;
    plVar5[0xb] = (long)(PTR___sytN_11034f1b0 + 8);
    plVar5[0xc] = lVar6;
    plVar5[9] = (long)FUN_10199d788;
    plVar5[10] = (long)puVar4;
    plVar5[8] = (long)plVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d508; end: 10199d56b;  */

void FUN_10199d508(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  *(long *)(lVar3 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10199d56c;
  }
  else {
    pcVar2 = FUN_10199d5bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10199d56c; end: 10199d5bb;  */

void FUN_10199d56c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined **)(unaff_x22 + 0x18) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001002a64a8();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010199d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d5bc; end: 10199d5ef;  */

void FUN_10199d5bc(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010199d5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d5f0; end: 10199d787;  */

void FUN_10199d5f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x21;
  byte *pbVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    uStack_70 = 0x800000010efc4df0;
    uStack_68 = 0x800000010efc4dd0;
    uStack_80 = 0x800000010efc4e30;
    uStack_78 = 0x800000010efc4e10;
    pbVar10 = (byte *)(param_2 + 0x20);
    do {
      lVar7 = lVar7 + -1;
      bVar5 = *pbVar10;
      uVar1 = 0x49545f4c41434f4c;
      if (bVar5 != 6) {
        uVar1 = 0x4e574f4e4b4e55;
      }
      uVar8 = 0xeb0000000052454d;
      if (bVar5 != 6) {
        uVar8 = 0xe700000000000000;
      }
      uVar9 = 0xd000000000000015;
      if (bVar5 != 4) {
        uVar9 = 0xd000000000000016;
      }
      uVar2 = uStack_68;
      if (bVar5 != 4) {
        uVar2 = 0x800000010efc4db0;
      }
      if (bVar5 < 6) {
        uVar8 = uVar2;
        uVar1 = uVar9;
      }
      uVar9 = 0xd00000000000001b;
      puVar6 = &uStack_78;
      uVar2 = uVar9;
      if (bVar5 != 2) {
        puVar6 = &uStack_70;
        uVar2 = 0xd000000000000017;
      }
      uVar3 = uStack_80;
      if (bVar5 == 0) {
        uVar9 = 0xd00000000000001c;
        uVar3 = 0x800000010efc4e50;
      }
      uVar4 = *puVar6;
      if (bVar5 < 2) {
        uVar4 = uVar3;
        uVar2 = uVar9;
      }
      if (bVar5 < 4) {
        uVar8 = uVar4;
        uVar1 = uVar2;
      }
      FUN_10199f070(uVar1,uVar8);
      func_0x000107c6142c(uVar8);
    } while ((unaff_x21 == 0) && (pbVar10 = pbVar10 + 1, lVar7 != 0));
  }
  return;
}



/* Entry: 10199d788; end: 10199d79f;  */

void FUN_10199d788(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10199d5f0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10199d7a0; end: 10199d7bb;  */

void FUN_10199d7a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199d7bc,0,0);
  return;
}



/* Entry: 10199d7bc; end: 10199d8db;  */

void FUN_10199d7bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  long *plVar8;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar6 = *(long *)(unaff_x22 + 0x10);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar3 = &UNK_110420b50;
    func_0x000107c613fc(&UNK_110420b50,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,uVar2);
    puVar4 = &UNK_110420bc8;
    func_0x000107c613fc(&UNK_110420bc8,0x28,7);
    *(undefined **)(unaff_x22 + 0x48) = puVar4;
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar7;
    plVar8 = (long *)0x70;
    func_0x000107c61434(uVar1);
    func_0x000107c61174(uVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar8;
    lVar5 = 0x112de0f90;
    func_0x0001000285a8(0x112de0f90,&UNK_10d9a86d0);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_10199d8dc;
    plVar8[0xb] = lVar5;
    plVar8[0xc] = lVar6;
    plVar8[9] = 0x10199deac;
    plVar8[10] = (long)puVar4;
    plVar8[8] = unaff_x22 + 0x18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1019ac660,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199d8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d8dc; end: 10199d93f;  */

void FUN_10199d8dc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10199d940;
  }
  else {
    pcVar2 = FUN_10199d99c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10199d940; end: 10199d99b;  */

void FUN_10199d940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x0001002a64a8();
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010199d998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d99c; end: 10199d9cf;  */

void FUN_10199d99c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010199d9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10199d9d0; end: 10199dc63;  */

/* WARNING: Removing unreachable block (ram,0x00010199dc58) */
/* WARNING: Removing unreachable block (ram,0x00010199db90) */

void FUN_10199d9d0(long *param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long unaff_x21;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    *param_1 = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar4 = param_4;
    FUN_10199e138(param_4,param_2);
    if (unaff_x21 == 0) {
      func_0x000107c61174();
      func_0x000103e6bddc();
      param_5 = param_5 & 0xff;
      if (param_5 < 4) {
        pcVar3 = "INCOMING_FRIEND_REQUEST";
        uVar5 = 0xd00000000000001b;
        if (param_5 != 2) {
          pcVar3 = "CONTACT_SYNC_REMINDER";
          uVar5 = 0xd000000000000017;
        }
        uVar7 = 0xd00000000000001b;
        pcVar8 = "RECENTLY_JOINED_SUGGESTIONS";
        if (param_5 == 0) {
          uVar7 = 0xd00000000000001c;
          pcVar8 = "UNVIEWED_FRIEND_SUGGESTIONS";
        }
        if (param_5 < 2) {
          pcVar3 = pcVar8;
          uVar5 = uVar7;
        }
        uVar6 = (ulong)pcVar3 | 0x8000000000000000;
      }
      else {
        uVar6 = 0xeb0000000052454d;
        uVar5 = 0x49545f4c41434f4c;
        if (param_5 != 6) {
          uVar6 = 0xe700000000000000;
          uVar5 = 0x4e574f4e4b4e55;
        }
        pcVar3 = "PENDING_FRIEND_REQUEST";
        uVar7 = 0xd000000000000015;
        if (param_5 != 4) {
          pcVar3 = "before checker was resolved";
          uVar7 = 0xd000000000000016;
        }
        if (param_5 < 6) {
          uVar5 = uVar7;
          uVar6 = (ulong)pcVar3 | 0x8000000000000000;
        }
      }
      FUN_10199f070(uVar5,uVar6);
      func_0x000107c6142c(uVar6);
      lVar10 = *(long *)(param_4 + 0x10);
      if (lVar10 != 0) {
        puVar9 = (undefined8 *)(param_4 + 0x48);
        do {
          uVar5 = puVar9[-1];
          uVar1 = *puVar9;
          uVar7 = puVar9[-3];
          uVar2 = puVar9[-2];
          uVar11 = puVar9[-4];
          func_0x000107c61434(uVar7);
          func_0x000107c61434(uVar1);
          FUN_10199eea0(uVar11,uVar7,uVar2,uVar5,uVar1);
          func_0x000107c6142c(uVar1);
          func_0x000107c6142c(uVar7);
          puVar9 = puVar9 + 6;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      func_0x000107c61574(param_3);
      *param_1 = lVar4;
    }
    else {
      func_0x000107c61574(param_3);
    }
  }
  return;
}


