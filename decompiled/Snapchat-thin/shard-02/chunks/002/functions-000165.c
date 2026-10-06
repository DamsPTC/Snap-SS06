/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101aab190; end: 101aab1db;  */

void FUN_101aab190(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aab1dc; end: 101aab22b;  */

undefined8 FUN_101aab1dc(void)

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



/* Entry: 101aab22c; end: 101aab26f;  */

undefined1  [16] FUN_101aab22c(void)

{
  return ZEXT816(0x11043ac80);
}



/* Entry: 101aab270; end: 101aab297;  */

void FUN_101aab270(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aab298; end: 101aab29f;  */

undefined8 FUN_101aab298(void)

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



/* Entry: 101aab2a0; end: 101aab383;  */

void FUN_101aab2a0(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x00010020d8f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  func_0x000101aab654(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000101aab5a0();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  func_0x000101aab5c8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 101aab384; end: 101aab38b;  */

void FUN_101aab384(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x00010020d8f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  func_0x000101aab654(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101aab5a0();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  func_0x000101aab5c8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 101aab38c; end: 101aab443;  */

long FUN_101aab38c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000101aab654(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101aab5a0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000101aab5c8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101aab444; end: 101aab477;  */

void FUN_101aab444(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aab478; end: 101aab4cb;  */

void FUN_101aab478(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101aab4cc; end: 101aab517;  */

void FUN_101aab4cc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101aab518; end: 101aab56b;  */

void FUN_101aab518(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aab56c; end: 101aab627;  */

void FUN_101aab56c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101aab628; end: 101aab62f;  */

void FUN_101aab628(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101aab630; end: 101aab6cf;  */

void FUN_101aab630(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101aab6d0; end: 101aab73b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aab6d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126a8830;
  func_0x000107c61168();
  func_0x000107c5bf9c();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000100210d48(0);
  func_0x000107c610f8();
  func_0x000104021894(puVar1,uVar2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101aab73c; end: 101aaba9b;  */

long FUN_101aab73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  puVar1 = PTR_PTR_1126a8838;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}



/* Entry: 101aaba9c; end: 101aabb07;  */

void FUN_101aaba9c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101aabb08; end: 101aabb4b;  */

undefined1  [16] FUN_101aabb08(void)

{
  return ZEXT816(0x11043af30);
}



/* Entry: 101aabb4c; end: 101aabb73;  */

void FUN_101aabb4c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101aabb74; end: 101aabbbf;  */

undefined8 FUN_101aabb74(void)

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



/* Entry: 101aabbc0; end: 101aabc0f;  */

void FUN_101aabbc0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  
  FUN_101aaf148();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11043b170;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101aabc10; end: 101aabc3f;  */

void FUN_101aabc10(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 101aabc40; end: 101aabccf;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aabc40(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 unaff_x19;
  code *pcVar10;
  undefined8 uVar11;
  code *unaff_x20;
  code *pcVar12;
  code *unaff_x21;
  undefined *puVar13;
  long *unaff_x22;
  int iVar14;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 unaff_x30;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x10) = unaff_x29 | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22[10] = (long)UNRECOVERED_JUMPTABLE;
    unaff_x22[0xb] = (long)unaff_x20;
    unaff_x22[9] = param_1;
    lVar2 = 0;
    func_0x000107c5ede0();
    unaff_x22[0xc] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    unaff_x22[0xd] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    unaff_x22[0xe] = uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x20)) {
      pcVar10 = FUN_101aabcd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar10,0,0);
      return;
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x30) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x28) = FUN_101aabcd0;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(unaff_x22 + 6);
    pcVar12 = (code *)unaff_x22[6];
    pcVar10 = pcVar12;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar12);
    pcVar12 = pcVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0xf] = (long)pcVar12;
    func_0x000107c61170();
    if (pcVar12 == (code *)0x0) {
      FUN_101aadd14();
      puVar4 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar10,0,0);
      *pcVar10 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(unaff_x22[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      UNRECOVERED_JUMPTABLE = pcVar10;
      puVar13 = puVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x50))
      {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      puVar4 = (undefined *)unaff_x22[10];
      puVar13 = (undefined *)0x0;
      FUN_101aae930();
      unaff_x22[0x10] = (long)puVar4;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      unaff_x22[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x50))
      {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar12;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = puVar4;
        pcVar10 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(ulong *)((long)register0x00000008 + -0x70) =
         (ulong)((long)register0x00000008 + -0x30) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x68) = FUN_101aabe34;
    *(long **)((long)register0x00000008 + -0x78) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *unaff_x22;
    *(long *)((long)register0x00000008 + -0x78) = lVar2;
    param_1 = *unaff_x22;
    *(code **)(lVar2 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      pcVar10 = FUN_101aabeb0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(long *)((long)register0x00000008 + -0xd8) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x27;
    *(code **)((long)register0x00000008 + -200) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar13;
    *(undefined **)((long)register0x00000008 + -0xa0) = puVar4;
    *(ulong *)((long)register0x00000008 + -0x90) =
         (ulong)((long)register0x00000008 + -0x70) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x88) = FUN_101aabeb0;
    *(long *)((long)register0x00000008 + -0x98) = param_1;
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = *(undefined1 **)(param_1 + 0x90);
    func_0x000107c44314();
    pcVar10 = *(code **)(param_1 + 0x90);
    if (puVar5 == (undefined1 *)0x0) {
      pcVar12 = pcVar10;
      func_0x000107c4407c();
      func_0x000107c61180();
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      if (pcVar12 != (code *)0x0) {
        pcVar10 = pcVar12;
        func_0x000107c5faec();
        uVar3 = (ulong)pcVar10 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar3 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar12);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          pcVar10 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(param_1 + 0x70));
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(param_1 + 0x38) = 0;
        puVar13 = puVar4;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar12);
        func_0x000107c61170(puVar4);
        pcVar10 = *(code **)(param_1 + 0x38);
        if (puVar13 != (undefined *)0x0) {
          uVar3 = 0;
          FUN_101a64068();
          uVar8 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar4 = PTR___sypN_11034f1a8;
          puVar6 = puVar13;
          func_0x000107c5f9e8(puVar13,uVar3,PTR___sypN_11034f1a8 + 8,uVar8);
          func_0x000107c61174(pcVar10);
          func_0x000107c61170(puVar13);
          if (*(long *)(puVar6 + 0x10) == 0) {
            uVar11 = *(undefined8 *)(param_1 + 0x90);
            uVar8 = *(undefined8 *)(param_1 + 0x78);
            uVar7 = *(undefined8 *)(param_1 + 0x80);
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar7);
            func_0x000107c615e8(uVar8);
            func_0x000107c615e8(uVar11);
            func_0x000107c6142c(puVar6);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar2 = param_1 + 0x40;
            func_0x000107c6147c(lVar2,param_1 + 0x10,puVar4 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar2 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(param_1 + 0x40);
          }
          else {
            lVar2 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar6);
            FUN_101aae36c(lVar2);
            uVar11 = *(undefined8 *)(param_1 + 0x90);
            uVar8 = *(undefined8 *)(param_1 + 0x78);
            uVar7 = *(undefined8 *)(param_1 + 0x80);
            if ((uVar3 & 1) == 0) {
              func_0x000107c6142c(puVar6);
              *(undefined8 *)(param_1 + 0x18) = 0;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar2 * 0x20,param_1 + 0x10);
            func_0x000107c61430(puVar6,2);
            func_0x000107c61170(uVar7);
            func_0x000107c615e8(uVar8);
            func_0x000107c615e8(uVar11);
            if (*(long *)(param_1 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(param_1 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar3 = *(ulong *)(param_1 + 0x68);
          unaff_x21 = *(code **)(param_1 + 0x70);
          unaff_x23 = *(ulong *)(param_1 + 0x60);
          pcVar10 = *(code **)(param_1 + 0x48);
          unaff_x20 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(pcVar10 + 0x18) = unaff_x20;
          *(undefined ***)(pcVar10 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar3 + 0x20))();
          uVar8 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(pcVar10,uVar8,1);
          UNRECOVERED_JUMPTABLE_00 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(param_1 + 0x90);
        unaff_x25 = *(ulong *)(param_1 + 0x78);
        unaff_x24 = *(ulong *)(param_1 + 0x80);
        unaff_x28 = *(long *)(param_1 + 0x68);
        unaff_x26 = *(code **)(param_1 + 0x70);
        unaff_x27 = *(undefined8 *)(param_1 + 0x60);
        pcVar12 = pcVar10;
        func_0x000107c61174(pcVar10);
        unaff_x20 = pcVar10;
        func_0x000107c5ed30();
        func_0x000107c61170(pcVar12);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar12 = *(code **)(param_1 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(param_1 + 0x90);
      unaff_x24 = *(ulong *)(param_1 + 0x78);
      uVar3 = *(ulong *)(param_1 + 0x80);
      if (pcVar12 == (code *)0x0) {
        FUN_101aadd14();
        unaff_x20 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar12,0,0);
        *pcVar12 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar3;
        goto LAB_101aabf30;
      }
      pcVar10 = *(code **)(param_1 + 0x48);
      unaff_x21 = pcVar12;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar12);
      unaff_x20 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(pcVar10 + 0x18) = unaff_x20;
      *(undefined ***)(pcVar10 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)pcVar10 = unaff_x21;
      *(code **)(pcVar10 + 8) = UNRECOVERED_JUMPTABLE_00;
      uVar8 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(pcVar10,uVar8,0);
      func_0x00010006c00c(unaff_x21,UNRECOVERED_JUMPTABLE_00);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)UNRECOVERED_JUMPTABLE_00 >> 0x20);
      uVar9 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar9 == 0) {
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          unaff_x24 = (ulong)UNRECOVERED_JUMPTABLE_00 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)unaff_x21 >> 0x20;
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          iVar14 = (int)((ulong)unaff_x21 >> 0x20);
          if (SBORROW4(iVar14,(int)unaff_x21)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar10)();
          }
          unaff_x24 = (ulong)(iVar14 - (int)unaff_x21);
        }
      }
      else if (uVar9 == 2) {
        lVar2 = *(long *)(unaff_x21 + 0x10);
        unaff_x23 = *(ulong *)(unaff_x21 + 0x18);
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = unaff_x23 - lVar2;
        if (SBORROW8(unaff_x23,lVar2)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar10)();
        }
      }
      else {
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar8 = *(undefined8 *)(param_1 + 0x70);
      pcVar10[*(int *)(unaff_x20 + 0x14)] = (code)0x1;
      *(ulong *)(pcVar10 + *(int *)(unaff_x20 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
      unaff_x25 = uVar3;
      unaff_x26 = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe0))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(param_1 + 0x78);
      uVar3 = *(ulong *)(param_1 + 0x80);
      FUN_101aadd14();
      unaff_x20 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar5,0,0);
      *puVar5 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(pcVar10);
      unaff_x23 = uVar3;
LAB_101aabf30:
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(param_1 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
      unaff_x21 = unaff_x20;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe0))
      {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0x110) = pcVar10;
    *(ulong *)((long)register0x00000008 + -0x100) =
         (ulong)((long)register0x00000008 + -0x90) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0xf8) = FUN_101aac3dc;
    *(long *)((long)register0x00000008 + -0x108) = param_1;
    unaff_x22 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(param_1 + 0x38) = unaff_x22;
    *unaff_x22 = param_1;
    unaff_x22[1] = (long)FUN_101aac430;
    param_1 = param_1 + 0x10;
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xf8);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x110);
    unaff_x29 = *(ulong *)((long)register0x00000008 + -0x100) & 0xefffffffffffffff;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 101aabcd0; end: 101aabe33;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aabcd0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 unaff_x19;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  code *unaff_x21;
  undefined *puVar14;
  long *unaff_x22;
  long lVar15;
  int iVar16;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(code **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x10) = (ulong)unaff_x29 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(unaff_x22 + 6);
    pcVar13 = (code *)unaff_x22[6];
    pcVar11 = pcVar13;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar13);
    pcVar13 = pcVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0xf] = (long)pcVar13;
    func_0x000107c61170();
    if (pcVar13 == (code *)0x0) {
      FUN_101aadd14();
      puVar3 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar11,0,0);
      *pcVar11 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(unaff_x22[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      UNRECOVERED_JUMPTABLE = pcVar11;
      puVar14 = puVar3;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x30))
      {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      puVar3 = (undefined *)unaff_x22[10];
      puVar14 = (undefined *)0x0;
      FUN_101aae930();
      unaff_x22[0x10] = (long)puVar3;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      unaff_x22[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x30))
      {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar13;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = puVar3;
        pcVar11 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(ulong *)((long)register0x00000008 + -0x50) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x48) = FUN_101aabe34;
    *(long **)((long)register0x00000008 + -0x58) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar10 = *unaff_x22;
    *(long *)((long)register0x00000008 + -0x58) = lVar10;
    lVar15 = *unaff_x22;
    *(code **)(lVar10 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar10 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x60)) {
      pcVar11 = FUN_101aabeb0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(long *)((long)register0x00000008 + -0xb8) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = unaff_x27;
    *(code **)((long)register0x00000008 + -0xa8) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x98) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x88) = puVar14;
    *(undefined **)((long)register0x00000008 + -0x80) = puVar3;
    *(ulong *)((long)register0x00000008 + -0x70) =
         (ulong)((long)register0x00000008 + -0x50) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x68) = FUN_101aabeb0;
    *(long *)((long)register0x00000008 + -0x78) = lVar15;
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = *(undefined1 **)(lVar15 + 0x90);
    func_0x000107c44314();
    pcVar11 = *(code **)(lVar15 + 0x90);
    if (puVar4 == (undefined1 *)0x0) {
      pcVar13 = pcVar11;
      func_0x000107c4407c();
      func_0x000107c61180();
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      if (pcVar13 != (code *)0x0) {
        pcVar11 = pcVar13;
        func_0x000107c5faec();
        uVar2 = (ulong)pcVar11 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar2 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar13);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          pcVar11 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(lVar15 + 0x70));
        puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(lVar15 + 0x38) = 0;
        puVar14 = puVar3;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar13);
        func_0x000107c61170(puVar3);
        pcVar11 = *(code **)(lVar15 + 0x38);
        if (puVar14 != (undefined *)0x0) {
          uVar2 = 0;
          FUN_101a64068();
          uVar8 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar3 = PTR___sypN_11034f1a8;
          puVar5 = puVar14;
          func_0x000107c5f9e8(puVar14,uVar2,PTR___sypN_11034f1a8 + 8,uVar8);
          func_0x000107c61174(pcVar11);
          func_0x000107c61170(puVar14);
          if (*(long *)(puVar5 + 0x10) == 0) {
            uVar12 = *(undefined8 *)(lVar15 + 0x90);
            uVar8 = *(undefined8 *)(lVar15 + 0x78);
            uVar7 = *(undefined8 *)(lVar15 + 0x80);
            *(undefined8 *)(lVar15 + 0x18) = 0;
            *(undefined8 *)(lVar15 + 0x10) = 0;
            *(undefined8 *)(lVar15 + 0x28) = 0;
            *(undefined8 *)(lVar15 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar7);
            func_0x000107c615e8(uVar8);
            func_0x000107c615e8(uVar12);
            func_0x000107c6142c(puVar5);
            if (*(long *)(lVar15 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar10 = lVar15 + 0x40;
            func_0x000107c6147c(lVar10,lVar15 + 0x10,puVar3 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar10 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(lVar15 + 0x40);
          }
          else {
            lVar10 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar5);
            FUN_101aae36c(lVar10);
            uVar12 = *(undefined8 *)(lVar15 + 0x90);
            uVar8 = *(undefined8 *)(lVar15 + 0x78);
            uVar7 = *(undefined8 *)(lVar15 + 0x80);
            if ((uVar2 & 1) == 0) {
              func_0x000107c6142c(puVar5);
              *(undefined8 *)(lVar15 + 0x18) = 0;
              *(undefined8 *)(lVar15 + 0x10) = 0;
              *(undefined8 *)(lVar15 + 0x28) = 0;
              *(undefined8 *)(lVar15 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar10 * 0x20,lVar15 + 0x10);
            func_0x000107c61430(puVar5,2);
            func_0x000107c61170(uVar7);
            func_0x000107c615e8(uVar8);
            func_0x000107c615e8(uVar12);
            if (*(long *)(lVar15 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(lVar15 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar2 = *(ulong *)(lVar15 + 0x68);
          unaff_x21 = *(code **)(lVar15 + 0x70);
          unaff_x23 = *(ulong *)(lVar15 + 0x60);
          pcVar11 = *(code **)(lVar15 + 0x48);
          pcVar13 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(pcVar11 + 0x18) = pcVar13;
          *(undefined ***)(pcVar11 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar2 + 0x20))();
          uVar8 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(pcVar11,uVar8,1);
          UNRECOVERED_JUMPTABLE_00 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(lVar15 + 0x90);
        unaff_x25 = *(ulong *)(lVar15 + 0x78);
        unaff_x24 = *(ulong *)(lVar15 + 0x80);
        unaff_x28 = *(long *)(lVar15 + 0x68);
        unaff_x26 = *(code **)(lVar15 + 0x70);
        unaff_x27 = *(undefined8 *)(lVar15 + 0x60);
        UNRECOVERED_JUMPTABLE_00 = pcVar11;
        func_0x000107c61174(pcVar11);
        pcVar13 = pcVar11;
        func_0x000107c5ed30();
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar6 = *(code **)(lVar15 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(lVar15 + 0x90);
      unaff_x24 = *(ulong *)(lVar15 + 0x78);
      uVar2 = *(ulong *)(lVar15 + 0x80);
      if (pcVar6 == (code *)0x0) {
        FUN_101aadd14();
        pcVar13 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar6,0,0);
        *pcVar6 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar2;
        goto LAB_101aabf30;
      }
      pcVar11 = *(code **)(lVar15 + 0x48);
      unaff_x21 = pcVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar6);
      pcVar13 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(pcVar11 + 0x18) = pcVar13;
      *(undefined ***)(pcVar11 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)pcVar11 = unaff_x21;
      *(code **)(pcVar11 + 8) = UNRECOVERED_JUMPTABLE_00;
      uVar8 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(pcVar11,uVar8,0);
      func_0x00010006c00c(unaff_x21,UNRECOVERED_JUMPTABLE_00);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)UNRECOVERED_JUMPTABLE_00 >> 0x20);
      uVar9 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar9 == 0) {
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          unaff_x24 = (ulong)UNRECOVERED_JUMPTABLE_00 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)unaff_x21 >> 0x20;
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          iVar16 = (int)((ulong)unaff_x21 >> 0x20);
          if (SBORROW4(iVar16,(int)unaff_x21)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar11)();
          }
          unaff_x24 = (ulong)(iVar16 - (int)unaff_x21);
        }
      }
      else if (uVar9 == 2) {
        lVar10 = *(long *)(unaff_x21 + 0x10);
        unaff_x23 = *(ulong *)(unaff_x21 + 0x18);
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = unaff_x23 - lVar10;
        if (SBORROW8(unaff_x23,lVar10)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar11)();
        }
      }
      else {
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar8 = *(undefined8 *)(lVar15 + 0x70);
      pcVar11[*(int *)(pcVar13 + 0x14)] = (code)0x1;
      *(ulong *)(pcVar11 + *(int *)(pcVar13 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      unaff_x25 = uVar2;
      unaff_x26 = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xc0))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(lVar15 + 0x78);
      uVar2 = *(ulong *)(lVar15 + 0x80);
      FUN_101aadd14();
      pcVar13 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar4,0,0);
      *puVar4 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(pcVar11);
      unaff_x23 = uVar2;
LAB_101aabf30:
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(lVar15 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
      unaff_x21 = pcVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xc0))
      {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0xf0) = pcVar11;
    *(ulong *)((long)register0x00000008 + -0xe0) =
         (ulong)((long)register0x00000008 + -0x70) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0xd8) = FUN_101aac3dc;
    *(long *)((long)register0x00000008 + -0xe8) = lVar15;
    unaff_x22 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar15 + 0x38) = unaff_x22;
    *unaff_x22 = lVar15;
    unaff_x22[1] = (long)FUN_101aac430;
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xf0);
    *(ulong *)((long)register0x00000008 + -0xe0) =
         *(ulong *)((long)register0x00000008 + -0xe0) & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -0xd8) =
         *(undefined8 *)((long)register0x00000008 + -0xd8);
    *(long **)((long)register0x00000008 + -0xe8) = unaff_x22;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22[10] = (long)UNRECOVERED_JUMPTABLE;
    unaff_x22[0xb] = (long)pcVar13;
    unaff_x22[9] = lVar15 + 0x10;
    lVar10 = 0;
    func_0x000107c5ede0();
    unaff_x22[0xc] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    unaff_x22[0xd] = lVar10;
    uVar2 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    unaff_x22[0xe] = uVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xf0)) {
      pcVar11 = FUN_101aabcd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar11,0,0);
      return;
    }
    unaff_x30 = FUN_101aabcd0;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 101aabe34; end: 101aabeaf;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aabe34(code *UNRECOVERED_JUMPTABLE_00,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  undefined *unaff_x19;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined *unaff_x21;
  long *unaff_x22;
  long lVar17;
  int iVar18;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(ulong *)((long)register0x00000008 + -0x10) = (ulong)unaff_x29 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar12 = *unaff_x22;
    *(long *)((long)register0x00000008 + -0x18) = lVar12;
    lVar17 = *unaff_x22;
    *(code **)(lVar12 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x20)) {
      pcVar13 = FUN_101aabeb0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar13,0,0);
      return;
    }
    func_0x000107c60e78();
    *(long *)((long)register0x00000008 + -0x78) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x70) = unaff_x27;
    *(code **)((long)register0x00000008 + -0x68) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x60) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x58) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x30) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x28) = FUN_101aabeb0;
    *(long *)((long)register0x00000008 + -0x38) = lVar17;
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = *(undefined1 **)(lVar17 + 0x90);
    func_0x000107c44314();
    pcVar13 = *(code **)(lVar17 + 0x90);
    if (puVar3 == (undefined1 *)0x0) {
      pcVar16 = pcVar13;
      func_0x000107c4407c();
      func_0x000107c61180();
      pcVar9 = UNRECOVERED_JUMPTABLE;
      if (pcVar16 != (code *)0x0) {
        pcVar13 = pcVar16;
        func_0x000107c5faec();
        uVar2 = (ulong)pcVar13 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar2 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar2 == 0) {
          pcVar9 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar16);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          pcVar13 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(lVar17 + 0x70));
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(lVar17 + 0x38) = 0;
        puVar5 = puVar4;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar16);
        func_0x000107c61170(puVar4);
        pcVar13 = *(code **)(lVar17 + 0x38);
        if (puVar5 != (undefined *)0x0) {
          uVar2 = 0;
          FUN_101a64068();
          uVar15 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar4 = PTR___sypN_11034f1a8;
          puVar6 = puVar5;
          func_0x000107c5f9e8(puVar5,uVar2,PTR___sypN_11034f1a8 + 8,uVar15);
          func_0x000107c61174(pcVar13);
          func_0x000107c61170(puVar5);
          if (*(long *)(puVar6 + 0x10) == 0) {
            uVar14 = *(undefined8 *)(lVar17 + 0x90);
            uVar15 = *(undefined8 *)(lVar17 + 0x78);
            uVar10 = *(undefined8 *)(lVar17 + 0x80);
            *(undefined8 *)(lVar17 + 0x18) = 0;
            *(undefined8 *)(lVar17 + 0x10) = 0;
            *(undefined8 *)(lVar17 + 0x28) = 0;
            *(undefined8 *)(lVar17 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar10);
            func_0x000107c615e8(uVar15);
            func_0x000107c615e8(uVar14);
            func_0x000107c6142c(puVar6);
            if (*(long *)(lVar17 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar12 = lVar17 + 0x40;
            func_0x000107c6147c(lVar12,lVar17 + 0x10,puVar4 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar12 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(lVar17 + 0x40);
          }
          else {
            lVar12 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar6);
            FUN_101aae36c(lVar12);
            uVar14 = *(undefined8 *)(lVar17 + 0x90);
            uVar15 = *(undefined8 *)(lVar17 + 0x78);
            uVar10 = *(undefined8 *)(lVar17 + 0x80);
            if ((uVar2 & 1) == 0) {
              func_0x000107c6142c(puVar6);
              *(undefined8 *)(lVar17 + 0x18) = 0;
              *(undefined8 *)(lVar17 + 0x10) = 0;
              *(undefined8 *)(lVar17 + 0x28) = 0;
              *(undefined8 *)(lVar17 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar12 * 0x20,lVar17 + 0x10);
            func_0x000107c61430(puVar6,2);
            func_0x000107c61170(uVar10);
            func_0x000107c615e8(uVar15);
            func_0x000107c615e8(uVar14);
            if (*(long *)(lVar17 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(lVar17 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar2 = *(ulong *)(lVar17 + 0x68);
          pcVar8 = *(code **)(lVar17 + 0x70);
          unaff_x23 = *(ulong *)(lVar17 + 0x60);
          pcVar13 = *(code **)(lVar17 + 0x48);
          pcVar16 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(pcVar13 + 0x18) = pcVar16;
          *(undefined ***)(pcVar13 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar2 + 0x20))();
          uVar15 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(pcVar13,uVar15,1);
          pcVar9 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(lVar17 + 0x90);
        unaff_x25 = *(ulong *)(lVar17 + 0x78);
        unaff_x24 = *(ulong *)(lVar17 + 0x80);
        unaff_x28 = *(long *)(lVar17 + 0x68);
        unaff_x26 = *(code **)(lVar17 + 0x70);
        unaff_x27 = *(undefined8 *)(lVar17 + 0x60);
        pcVar9 = pcVar13;
        func_0x000107c61174(pcVar13);
        pcVar16 = pcVar13;
        func_0x000107c5ed30();
        func_0x000107c61170(pcVar9);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar7 = *(code **)(lVar17 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(lVar17 + 0x90);
      unaff_x24 = *(ulong *)(lVar17 + 0x78);
      uVar2 = *(ulong *)(lVar17 + 0x80);
      if (pcVar7 == (code *)0x0) {
        FUN_101aadd14();
        pcVar16 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar7,0,0);
        *pcVar7 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar2;
        goto LAB_101aabf30;
      }
      pcVar13 = *(code **)(lVar17 + 0x48);
      pcVar8 = pcVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar7);
      pcVar16 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(pcVar13 + 0x18) = pcVar16;
      *(undefined ***)(pcVar13 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)pcVar13 = pcVar8;
      *(code **)(pcVar13 + 8) = pcVar9;
      uVar15 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(pcVar13,uVar15,0);
      func_0x00010006c00c(pcVar8,pcVar9);
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)pcVar9 >> 0x20);
      uVar11 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar11 == 0) {
          func_0x00010006c090(pcVar8,pcVar9);
          unaff_x24 = (ulong)pcVar9 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)pcVar8 >> 0x20;
          func_0x00010006c090(pcVar8,pcVar9);
          iVar18 = (int)((ulong)pcVar8 >> 0x20);
          if (SBORROW4(iVar18,(int)pcVar8)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar13)();
          }
          unaff_x24 = (ulong)(iVar18 - (int)pcVar8);
        }
      }
      else if (uVar11 == 2) {
        lVar12 = *(long *)(pcVar8 + 0x10);
        unaff_x23 = *(ulong *)(pcVar8 + 0x18);
        func_0x00010006c090(pcVar8,pcVar9);
        unaff_x24 = unaff_x23 - lVar12;
        if (SBORROW8(unaff_x23,lVar12)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar13)();
        }
      }
      else {
        func_0x00010006c090(pcVar8,pcVar9);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar15 = *(undefined8 *)(lVar17 + 0x70);
      pcVar13[*(int *)(pcVar16 + 0x14)] = (code)0x1;
      *(ulong *)(pcVar13 + *(int *)(pcVar16 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
      unaff_x25 = uVar2;
      unaff_x26 = pcVar9;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(lVar17 + 0x78);
      uVar2 = *(ulong *)(lVar17 + 0x80);
      FUN_101aadd14();
      pcVar16 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar3,0,0);
      *puVar3 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(pcVar13);
      unaff_x23 = uVar2;
LAB_101aabf30:
      func_0x000107c61170(uVar2);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(lVar17 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
      pcVar8 = pcVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80))
      {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0xb0) = pcVar13;
    *(ulong *)((long)register0x00000008 + -0xa0) =
         (ulong)((long)register0x00000008 + -0x30) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x98) = FUN_101aac3dc;
    *(long *)((long)register0x00000008 + -0xa8) = lVar17;
    unaff_x22 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar17 + 0x38) = unaff_x22;
    *unaff_x22 = lVar17;
    unaff_x22[1] = (long)FUN_101aac430;
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    *(ulong *)((long)register0x00000008 + -0xa0) =
         *(ulong *)((long)register0x00000008 + -0xa0) & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -0x98) =
         *(undefined8 *)((long)register0x00000008 + -0x98);
    *(long **)((long)register0x00000008 + -0xa8) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xb0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22[10] = (long)UNRECOVERED_JUMPTABLE;
    unaff_x22[0xb] = (long)pcVar16;
    unaff_x22[9] = lVar17 + 0x10;
    lVar12 = 0;
    func_0x000107c5ede0();
    unaff_x22[0xc] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    unaff_x22[0xd] = lVar12;
    uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    unaff_x22[0xe] = uVar2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xb0)) {
      pcVar13 = FUN_101aabcd0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0xd8) = pcVar8;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = uVar15;
    *(ulong *)((long)register0x00000008 + -0xc0) =
         (ulong)((long)register0x00000008 + -0xa0) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0xb8) = FUN_101aabcd0;
    *(long **)((long)register0x00000008 + -200) = unaff_x22;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xc0);
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(unaff_x22 + 6);
    pcVar16 = (code *)unaff_x22[6];
    pcVar13 = pcVar16;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar16);
    pcVar16 = pcVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    unaff_x22[0xf] = (long)pcVar16;
    func_0x000107c61170();
    if (pcVar16 == (code *)0x0) {
      FUN_101aadd14();
      unaff_x19 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar13,0,0);
      *pcVar13 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(unaff_x22[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
      UNRECOVERED_JUMPTABLE = pcVar13;
      unaff_x21 = unaff_x19;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe0))
      {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      unaff_x19 = (undefined *)unaff_x22[10];
      unaff_x21 = (undefined *)0x0;
      FUN_101aae930();
      unaff_x22[0x10] = (long)unaff_x19;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      unaff_x22[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = unaff_x22;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe0))
      {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar16;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = unaff_x19;
        pcVar13 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    unaff_x30 = FUN_101aabe34;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 101aabeb0; end: 101aac3db;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aabeb0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined *unaff_x19;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined *unaff_x21;
  long unaff_x22;
  int iVar17;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(long *)((long)register0x00000008 + -0x58) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x27;
    *(code **)((long)register0x00000008 + -0x48) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined **)((long)register0x00000008 + -0x20) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x10) = (ulong)unaff_x29 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = *(undefined1 **)(unaff_x22 + 0x90);
    func_0x000107c44314();
    pcVar13 = *(code **)(unaff_x22 + 0x90);
    if (puVar4 == (undefined1 *)0x0) {
      pcVar16 = pcVar13;
      func_0x000107c4407c();
      func_0x000107c61180();
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      if (pcVar16 != (code *)0x0) {
        pcVar13 = pcVar16;
        func_0x000107c5faec();
        uVar3 = (ulong)pcVar13 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar3 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar16);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          pcVar13 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(unaff_x22 + 0x70));
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        puVar6 = puVar5;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar16);
        func_0x000107c61170(puVar5);
        pcVar13 = *(code **)(unaff_x22 + 0x38);
        if (puVar6 != (undefined *)0x0) {
          uVar3 = 0;
          FUN_101a64068();
          uVar15 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar5 = PTR___sypN_11034f1a8;
          puVar7 = puVar6;
          func_0x000107c5f9e8(puVar6,uVar3,PTR___sypN_11034f1a8 + 8,uVar15);
          func_0x000107c61174(pcVar13);
          func_0x000107c61170(puVar6);
          if (*(long *)(puVar7 + 0x10) == 0) {
            uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
            *(undefined8 *)(unaff_x22 + 0x18) = 0;
            *(undefined8 *)(unaff_x22 + 0x10) = 0;
            *(undefined8 *)(unaff_x22 + 0x28) = 0;
            *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar10);
            func_0x000107c615e8(uVar15);
            func_0x000107c615e8(uVar14);
            func_0x000107c6142c(puVar7);
            if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar2 = unaff_x22 + 0x40;
            func_0x000107c6147c(lVar2,unaff_x22 + 0x10,puVar5 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar2 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(unaff_x22 + 0x40);
          }
          else {
            lVar2 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar7);
            FUN_101aae36c(lVar2);
            uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
            if ((uVar3 & 1) == 0) {
              func_0x000107c6142c(puVar7);
              *(undefined8 *)(unaff_x22 + 0x18) = 0;
              *(undefined8 *)(unaff_x22 + 0x10) = 0;
              *(undefined8 *)(unaff_x22 + 0x28) = 0;
              *(undefined8 *)(unaff_x22 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar2 * 0x20,unaff_x22 + 0x10);
            func_0x000107c61430(puVar7,2);
            func_0x000107c61170(uVar10);
            func_0x000107c615e8(uVar15);
            func_0x000107c615e8(uVar14);
            if (*(long *)(unaff_x22 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar3 = *(ulong *)(unaff_x22 + 0x68);
          pcVar9 = *(code **)(unaff_x22 + 0x70);
          unaff_x23 = *(ulong *)(unaff_x22 + 0x60);
          pcVar13 = *(code **)(unaff_x22 + 0x48);
          pcVar16 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(pcVar13 + 0x18) = pcVar16;
          *(undefined ***)(pcVar13 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar3 + 0x20))();
          uVar15 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(pcVar13,uVar15,1);
          UNRECOVERED_JUMPTABLE_00 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(unaff_x22 + 0x90);
        unaff_x25 = *(ulong *)(unaff_x22 + 0x78);
        unaff_x24 = *(ulong *)(unaff_x22 + 0x80);
        unaff_x28 = *(long *)(unaff_x22 + 0x68);
        unaff_x26 = *(code **)(unaff_x22 + 0x70);
        unaff_x27 = *(undefined8 *)(unaff_x22 + 0x60);
        UNRECOVERED_JUMPTABLE_00 = pcVar13;
        func_0x000107c61174(pcVar13);
        pcVar16 = pcVar13;
        func_0x000107c5ed30();
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar8 = *(code **)(unaff_x22 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(unaff_x22 + 0x90);
      unaff_x24 = *(ulong *)(unaff_x22 + 0x78);
      uVar3 = *(ulong *)(unaff_x22 + 0x80);
      if (pcVar8 == (code *)0x0) {
        FUN_101aadd14();
        pcVar16 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar8,0,0);
        *pcVar8 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar3;
        goto LAB_101aabf30;
      }
      pcVar13 = *(code **)(unaff_x22 + 0x48);
      pcVar9 = pcVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar8);
      pcVar16 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(pcVar13 + 0x18) = pcVar16;
      *(undefined ***)(pcVar13 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)pcVar13 = pcVar9;
      *(code **)(pcVar13 + 8) = UNRECOVERED_JUMPTABLE_00;
      uVar15 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(pcVar13,uVar15,0);
      func_0x00010006c00c(pcVar9,UNRECOVERED_JUMPTABLE_00);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)UNRECOVERED_JUMPTABLE_00 >> 0x20);
      uVar12 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar12 == 0) {
          func_0x00010006c090(pcVar9,UNRECOVERED_JUMPTABLE_00);
          unaff_x24 = (ulong)UNRECOVERED_JUMPTABLE_00 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)pcVar9 >> 0x20;
          func_0x00010006c090(pcVar9,UNRECOVERED_JUMPTABLE_00);
          iVar17 = (int)((ulong)pcVar9 >> 0x20);
          if (SBORROW4(iVar17,(int)pcVar9)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar13)();
          }
          unaff_x24 = (ulong)(iVar17 - (int)pcVar9);
        }
      }
      else if (uVar12 == 2) {
        lVar2 = *(long *)(pcVar9 + 0x10);
        unaff_x23 = *(ulong *)(pcVar9 + 0x18);
        func_0x00010006c090(pcVar9,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = unaff_x23 - lVar2;
        if (SBORROW8(unaff_x23,lVar2)) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar13)();
        }
      }
      else {
        func_0x00010006c090(pcVar9,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
      pcVar13[*(int *)(pcVar16 + 0x14)] = (code)0x1;
      *(ulong *)(pcVar13 + *(int *)(pcVar16 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      unaff_x25 = uVar3;
      unaff_x26 = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x60))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(unaff_x22 + 0x78);
      uVar3 = *(ulong *)(unaff_x22 + 0x80);
      FUN_101aadd14();
      pcVar16 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar4,0,0);
      *puVar4 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(pcVar13);
      unaff_x23 = uVar3;
LAB_101aabf30:
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      pcVar9 = pcVar16;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x60))
      {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0x90) = pcVar13;
    *(ulong *)((long)register0x00000008 + -0x80) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x78) = FUN_101aac3dc;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x22;
    plVar11 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101aac430;
    uVar15 = *(undefined8 *)((long)register0x00000008 + -0x90);
    *(ulong *)((long)register0x00000008 + -0x80) =
         *(ulong *)((long)register0x00000008 + -0x80) & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -0x78) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    *(long **)((long)register0x00000008 + -0x88) = plVar11;
    *(undefined8 *)((long)register0x00000008 + -0x90) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar11[10] = (long)UNRECOVERED_JUMPTABLE;
    plVar11[0xb] = (long)pcVar16;
    plVar11[9] = unaff_x22 + 0x10;
    lVar2 = 0;
    func_0x000107c5ede0();
    plVar11[0xc] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar11[0xd] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar11[0xe] = uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x90)) {
      pcVar13 = FUN_101aabcd0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0xb8) = pcVar9;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar15;
    *(ulong *)((long)register0x00000008 + -0xa0) =
         (ulong)((long)register0x00000008 + -0x80) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x98) = FUN_101aabcd0;
    *(long **)((long)register0x00000008 + -0xa8) = plVar11;
    *(undefined8 *)((long)register0x00000008 + -0xc0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(plVar11 + 6);
    pcVar16 = (code *)plVar11[6];
    pcVar13 = pcVar16;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar16);
    pcVar16 = pcVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar11[0xf] = (long)pcVar16;
    func_0x000107c61170();
    if (pcVar16 == (code *)0x0) {
      FUN_101aadd14();
      unaff_x19 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar13,0,0);
      *pcVar13 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(plVar11[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      UNRECOVERED_JUMPTABLE = pcVar13;
      unaff_x21 = unaff_x19;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xc0))
      {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      unaff_x19 = (undefined *)plVar11[10];
      unaff_x21 = (undefined *)0x0;
      FUN_101aae930();
      plVar11[0x10] = (long)unaff_x19;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      plVar11[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar11;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xc0))
      {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar16;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = unaff_x19;
        pcVar13 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(ulong *)((long)register0x00000008 + -0xe0) =
         (ulong)((long)register0x00000008 + -0xa0) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0xd8) = FUN_101aabe34;
    *(long **)((long)register0x00000008 + -0xe8) = plVar11;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0xe0);
    *(undefined8 *)((long)register0x00000008 + -0xf0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *plVar11;
    *(long *)((long)register0x00000008 + -0xe8) = lVar2;
    unaff_x22 = *plVar11;
    *(code **)(lVar2 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xf0)) {
      pcVar13 = FUN_101aabeb0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar13,0,0);
      return;
    }
    unaff_x30 = FUN_101aabeb0;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 101aac3dc; end: 101aac42f;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aac3dc(code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 uVar11;
  code *unaff_x19;
  undefined8 uVar12;
  code *pcVar13;
  code *unaff_x20;
  undefined *puVar14;
  code *unaff_x21;
  long unaff_x22;
  int iVar15;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    *(code **)((long)register0x00000008 + -0x20) = unaff_x19;
    *(ulong *)((long)register0x00000008 + -0x10) = (ulong)unaff_x29 | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x22;
    plVar9 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_101aac430;
    uVar12 = *(undefined8 *)((long)register0x00000008 + -0x20);
    *(ulong *)((long)register0x00000008 + -0x10) =
         *(ulong *)((long)register0x00000008 + -0x10) & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    *(long **)((long)register0x00000008 + -0x18) = plVar9;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar9[10] = (long)UNRECOVERED_JUMPTABLE;
    plVar9[0xb] = (long)unaff_x20;
    plVar9[9] = unaff_x22 + 0x10;
    lVar2 = 0;
    func_0x000107c5ede0();
    plVar9[0xc] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar9[0xd] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar9[0xe] = uVar3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x20)) {
      pcVar7 = FUN_101aabcd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar7,0,0);
      return;
    }
    func_0x000107c60e78();
    *(code **)((long)register0x00000008 + -0x48) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x40) = uVar12;
    *(ulong *)((long)register0x00000008 + -0x30) =
         (ulong)((long)register0x00000008 + -0x10) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x28) = FUN_101aabcd0;
    *(long **)((long)register0x00000008 + -0x38) = plVar9;
    *(undefined8 *)((long)register0x00000008 + -0x50) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(plVar9 + 6);
    pcVar13 = (code *)plVar9[6];
    pcVar7 = pcVar13;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar13);
    pcVar13 = pcVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar9[0xf] = (long)pcVar13;
    func_0x000107c61170();
    if (pcVar13 == (code *)0x0) {
      FUN_101aadd14();
      puVar4 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar7,0,0);
      *pcVar7 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(plVar9[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar9[1];
      UNRECOVERED_JUMPTABLE = pcVar7;
      puVar14 = puVar4;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x50))
      {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      puVar4 = (undefined *)plVar9[10];
      puVar14 = (undefined *)0x0;
      FUN_101aae930();
      plVar9[0x10] = (long)puVar4;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      plVar9[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar9;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x50))
      {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar13;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = puVar4;
        pcVar7 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(ulong *)((long)register0x00000008 + -0x70) =
         (ulong)((long)register0x00000008 + -0x30) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x68) = FUN_101aabe34;
    *(long **)((long)register0x00000008 + -0x78) = plVar9;
    *(undefined8 *)((long)register0x00000008 + -0x80) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *plVar9;
    *(long *)((long)register0x00000008 + -0x78) = lVar2;
    unaff_x22 = *plVar9;
    *(code **)(lVar2 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x80)) {
      pcVar7 = FUN_101aabeb0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(long *)((long)register0x00000008 + -0xd8) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x27;
    *(code **)((long)register0x00000008 + -200) = unaff_x26;
    *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0xb8) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x23;
    *(undefined **)((long)register0x00000008 + -0xa8) = puVar14;
    *(undefined **)((long)register0x00000008 + -0xa0) = puVar4;
    *(ulong *)((long)register0x00000008 + -0x90) =
         (ulong)((long)register0x00000008 + -0x70) | 0x1000000000000000;
    *(code **)((long)register0x00000008 + -0x88) = FUN_101aabeb0;
    *(long *)((long)register0x00000008 + -0x98) = unaff_x22;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x90);
    *(undefined8 *)((long)register0x00000008 + -0xe0) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = *(undefined1 **)(unaff_x22 + 0x90);
    func_0x000107c44314();
    unaff_x19 = *(code **)(unaff_x22 + 0x90);
    if (puVar5 == (undefined1 *)0x0) {
      pcVar7 = unaff_x19;
      func_0x000107c4407c();
      func_0x000107c61180();
      pcVar13 = UNRECOVERED_JUMPTABLE;
      if (pcVar7 != (code *)0x0) {
        pcVar13 = pcVar7;
        func_0x000107c5faec();
        uVar3 = (ulong)pcVar13 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar3 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
          pcVar13 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar7);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          unaff_x19 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(unaff_x22 + 0x70));
        puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        puVar14 = puVar4;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar7);
        func_0x000107c61170(puVar4);
        unaff_x19 = *(code **)(unaff_x22 + 0x38);
        if (puVar14 != (undefined *)0x0) {
          uVar3 = 0;
          FUN_101a64068();
          uVar12 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar4 = PTR___sypN_11034f1a8;
          puVar6 = puVar14;
          func_0x000107c5f9e8(puVar14,uVar3,PTR___sypN_11034f1a8 + 8,uVar12);
          func_0x000107c61174(unaff_x19);
          func_0x000107c61170(puVar14);
          if (*(long *)(puVar6 + 0x10) == 0) {
            uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
            *(undefined8 *)(unaff_x22 + 0x18) = 0;
            *(undefined8 *)(unaff_x22 + 0x10) = 0;
            *(undefined8 *)(unaff_x22 + 0x28) = 0;
            *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar8);
            func_0x000107c615e8(uVar12);
            func_0x000107c615e8(uVar11);
            func_0x000107c6142c(puVar6);
            if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar2 = unaff_x22 + 0x40;
            func_0x000107c6147c(lVar2,unaff_x22 + 0x10,puVar4 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar2 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(unaff_x22 + 0x40);
          }
          else {
            lVar2 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar6);
            FUN_101aae36c(lVar2);
            uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
            if ((uVar3 & 1) == 0) {
              func_0x000107c6142c(puVar6);
              *(undefined8 *)(unaff_x22 + 0x18) = 0;
              *(undefined8 *)(unaff_x22 + 0x10) = 0;
              *(undefined8 *)(unaff_x22 + 0x28) = 0;
              *(undefined8 *)(unaff_x22 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar2 * 0x20,unaff_x22 + 0x10);
            func_0x000107c61430(puVar6,2);
            func_0x000107c61170(uVar8);
            func_0x000107c615e8(uVar12);
            func_0x000107c615e8(uVar11);
            if (*(long *)(unaff_x22 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar3 = *(ulong *)(unaff_x22 + 0x68);
          unaff_x21 = *(code **)(unaff_x22 + 0x70);
          unaff_x23 = *(ulong *)(unaff_x22 + 0x60);
          unaff_x19 = *(code **)(unaff_x22 + 0x48);
          unaff_x20 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(unaff_x19 + 0x18) = unaff_x20;
          *(undefined ***)(unaff_x19 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar3 + 0x20))();
          uVar12 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(unaff_x19,uVar12,1);
          pcVar13 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(unaff_x22 + 0x90);
        unaff_x25 = *(ulong *)(unaff_x22 + 0x78);
        unaff_x24 = *(ulong *)(unaff_x22 + 0x80);
        unaff_x28 = *(long *)(unaff_x22 + 0x68);
        unaff_x26 = *(code **)(unaff_x22 + 0x70);
        unaff_x27 = *(undefined8 *)(unaff_x22 + 0x60);
        pcVar7 = unaff_x19;
        func_0x000107c61174(unaff_x19);
        unaff_x20 = unaff_x19;
        func_0x000107c5ed30();
        func_0x000107c61170(pcVar7);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar7 = *(code **)(unaff_x22 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(unaff_x22 + 0x90);
      unaff_x24 = *(ulong *)(unaff_x22 + 0x78);
      uVar3 = *(ulong *)(unaff_x22 + 0x80);
      if (pcVar7 == (code *)0x0) {
        FUN_101aadd14();
        unaff_x20 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar7,0,0);
        *pcVar7 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar3;
        goto LAB_101aabf30;
      }
      unaff_x19 = *(code **)(unaff_x22 + 0x48);
      unaff_x21 = pcVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar7);
      unaff_x20 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(unaff_x19 + 0x18) = unaff_x20;
      *(undefined ***)(unaff_x19 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)unaff_x19 = unaff_x21;
      *(code **)(unaff_x19 + 8) = pcVar13;
      uVar12 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(unaff_x19,uVar12,0);
      func_0x00010006c00c(unaff_x21,pcVar13);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)pcVar13 >> 0x20);
      uVar10 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar10 == 0) {
          func_0x00010006c090(unaff_x21,pcVar13);
          unaff_x24 = (ulong)pcVar13 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)unaff_x21 >> 0x20;
          func_0x00010006c090(unaff_x21,pcVar13);
          iVar15 = (int)((ulong)unaff_x21 >> 0x20);
          if (SBORROW4(iVar15,(int)unaff_x21)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar7)();
          }
          unaff_x24 = (ulong)(iVar15 - (int)unaff_x21);
        }
      }
      else if (uVar10 == 2) {
        lVar2 = *(long *)(unaff_x21 + 0x10);
        unaff_x23 = *(ulong *)(unaff_x21 + 0x18);
        func_0x00010006c090(unaff_x21,pcVar13);
        unaff_x24 = unaff_x23 - lVar2;
        if (SBORROW8(unaff_x23,lVar2)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar7)();
        }
      }
      else {
        func_0x00010006c090(unaff_x21,pcVar13);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
      unaff_x19[*(int *)(unaff_x20 + 0x14)] = (code)0x1;
      *(ulong *)(unaff_x19 + *(int *)(unaff_x20 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar12);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      unaff_x25 = uVar3;
      unaff_x26 = pcVar13;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe0))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(unaff_x22 + 0x78);
      uVar3 = *(ulong *)(unaff_x22 + 0x80);
      FUN_101aadd14();
      unaff_x20 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar5,0,0);
      *puVar5 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(unaff_x19);
      unaff_x23 = uVar3;
LAB_101aabf30:
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      unaff_x21 = unaff_x20;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xe0))
      {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    unaff_x30 = FUN_101aac3dc;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  } while( true );
}



/* Entry: 101aac430; end: 101aac5ab;  */

void FUN_101aac430(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101aaf788;
  }
  else {
    pcVar1 = FUN_101aaf770;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101aac5ac; end: 101aacb17;  */

/* WARNING: Removing unreachable block (ram,0x000101aac6d8) */

void FUN_101aac5ac(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  
  func_0x000100083b20(unaff_x22 + 0x80);
  lVar10 = *(long *)(unaff_x22 + 0x80);
  lVar3 = lVar10;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  lVar10 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x110) = lVar10;
  func_0x000107c61170();
  if (lVar10 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb8);
    plVar1 = *(long **)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c5eec4(uVar8);
    func_0x000107c5eeac();
    (**(code **)(lVar6 + 8))(uVar8,uVar12);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c6159c(plVar1,uVar13,2);
    func_0x000101aaf6bc(uVar4,uVar11,&SUB_103c60794);
    func_0x000107c614c4(uVar11,uVar9);
    puVar7 = *(undefined8 **)(unaff_x22 + 0xf0);
    if ((int)uVar11 == 1) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      (**(code **)(*(long *)(unaff_x22 + 0xd0) + 0x20))
                (uVar11,puVar7,*(undefined8 *)(unaff_x22 + 200));
      uVar8 = 1;
      func_0x000107c5ede8();
      (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 200));
    }
    else {
      uVar11 = *puVar7;
      uVar8 = puVar7[1];
    }
    *(undefined8 *)(unaff_x22 + 0x118) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar8;
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000101aaf6bc(*(undefined8 *)(unaff_x22 + 0x88),uVar4,&SUB_103c61120);
    func_0x000107c614c4(uVar4,uVar12);
    if ((int)uVar4 == 0) {
      lVar3 = *(long *)(unaff_x22 + 0xd0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar13 = *(undefined8 *)(unaff_x22 + 200);
      (**(code **)(lVar3 + 0x20))(uVar9,uVar12,uVar13);
      func_0x000107c5ed70();
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      uVar12 = 0x3a6c7275;
      uVar4 = 0xe400000000000000;
      FUN_101aae754(0x3a6c7275,0xe400000000000000);
      func_0x000107c6142c(0xe400000000000000);
      (**(code **)(lVar3 + 8))(uVar9,uVar13);
    }
    else if ((int)uVar4 == 1) {
      uVar9 = **(undefined8 **)(unaff_x22 + 0xc0);
      uVar13 = (*(undefined8 **)(unaff_x22 + 0xc0))[1];
      uVar12 = uVar9;
      func_0x000107c5ee24(0,uVar9,uVar13);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      uVar12 = 0x3a6a626f;
      uVar4 = 0xe400000000000000;
      FUN_101aae754(0x3a6a626f,0xe400000000000000);
      func_0x000107c6142c(0xe400000000000000);
      func_0x00010006c090(uVar9,uVar13);
    }
    else {
      uVar12 = (*(undefined8 **)(unaff_x22 + 0xc0))[1];
      func_0x000107c5fb78(**(undefined8 **)(unaff_x22 + 0xc0),uVar12);
      func_0x000107c6142c(uVar12);
      uVar12 = 0x3a6c61636f6c;
      uVar4 = 0xe600000000000000;
      FUN_101aae754(0x3a6c61636f6c,0xe600000000000000);
      func_0x000107c6142c(0xe600000000000000);
    }
    cVar2 = *(char *)(unaff_x22 + 0x130);
    puVar5 = PTR_PTR_1126b08b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar12,uVar4);
    func_0x000107c4766c();
    *(undefined **)(unaff_x22 + 0x128) = puVar5;
    func_0x000107c61170(uVar12);
    func_0x000107c6142c(uVar4);
    if (cVar2 == '\x01') {
      uVar12 = 1;
    }
    else {
      uVar12 = 1;
      if (((((ulong)*(double *)(unaff_x22 + 0x98) ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0)
         && (0.0 < *(double *)(unaff_x22 + 0x98))) {
        func_0x000107c5ee80(*(undefined8 *)(unaff_x22 + 0xb0));
        uVar12 = 0;
      }
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar6 = 0;
    func_0x000107c5eea4();
    lVar14 = *(long *)(lVar6 + -8);
    (**(code **)(lVar14 + 0x38))(uVar9,uVar12,1,lVar6);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x132;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101aacb18;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    func_0x000107c5ee20(uVar11,uVar8);
    func_0x0001009f0578(uVar9,uVar4);
    (**(code **)(lVar14 + 0x30))(uVar4,1,lVar6);
    uVar8 = 0;
    if ((int)uVar4 != 1) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
      func_0x000107c5ee70();
      (**(code **)(lVar14 + 8))(uVar8,lVar6);
      uVar8 = uVar4;
    }
    puVar5 = &UNK_11043b040;
    func_0x000107c613fc(&UNK_11043b040,0x18,7);
    puVar7 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar5 + 0x10) = lVar3;
    *(code **)(unaff_x22 + 0x70) = FUN_101aaf0dc;
    *(undefined **)(unaff_x22 + 0x78) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100ab47f8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11043b058;
    func_0x000107c60bc4(puVar7);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5168c(lVar10);
    func_0x000107c60bd0(puVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000101aaf09c();
  func_0x000107c613f8(&UNK_1106f02f8,lVar3,0,0);
  func_0x000107c61654();
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000101aac798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101aacb18; end: 101aacb57;  */

void FUN_101aacb18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aacb58,0,0);
  return;
}



/* Entry: 101aacb58; end: 101aaccff;  */

void FUN_101aacb58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  if (*(char *)(unaff_x22 + 0x132) == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000101aaf700(uVar6,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(uVar3);
    func_0x00010006c090(uVar4,uVar1);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000101aaf09c();
    func_0x000107c613f8(&UNK_1106f02f8,param_1,0,0);
    func_0x000107c61654();
    func_0x000107c61170(uVar3);
    func_0x00010006c090(uVar4,uVar1);
    func_0x000107c615e8(uVar2);
    func_0x000101aaf700(uVar10,0x112d373d8,&UNK_10d9014c0);
    FUN_101aaf438(uVar11,&SUB_103c61120);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x108));
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101aaccfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101aacd00; end: 101aacd83;  */

void FUN_101aacd00(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar1 = 0;
  func_0x000103c61120();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aacd84,0,0);
  return;
}



/* Entry: 101aacd84; end: 101aad08b;  */

void FUN_101aacd84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000101aaf6bc(*(undefined8 *)(unaff_x22 + 0x88),uVar2,&SUB_103c61120);
  func_0x000107c614c4(uVar2,uVar7);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb8);
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
    (**(code **)(lVar3 + 0x20))(uVar1,puVar5,uVar8);
    func_0x000107c5ed70();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    uVar7 = 0x3a6c7275;
    uVar2 = 0xe400000000000000;
    FUN_101aae754(0x3a6c7275,0xe400000000000000);
    func_0x000107c6142c(0xe400000000000000);
    (**(code **)(lVar3 + 8))(uVar1,uVar8);
  }
  else if ((int)uVar2 == 1) {
    uVar1 = *puVar5;
    uVar8 = puVar5[1];
    uVar7 = uVar1;
    func_0x000107c5ee24(0,uVar1,uVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    uVar7 = 0x3a6a626f;
    uVar2 = 0xe400000000000000;
    FUN_101aae754(0x3a6a626f,0xe400000000000000);
    func_0x000107c6142c(0xe400000000000000);
    func_0x00010006c090(uVar1,uVar8);
  }
  else {
    uVar7 = puVar5[1];
    func_0x000107c5fb78(*puVar5,uVar7);
    func_0x000107c6142c(uVar7);
    uVar7 = 0x3a6c61636f6c;
    uVar2 = 0xe600000000000000;
    FUN_101aae754(0x3a6c61636f6c,0xe600000000000000);
    func_0x000107c6142c(0xe600000000000000);
  }
  func_0x000100083b20(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  lVar3 = lVar6;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xc0) = lVar6;
  func_0x000107c61170(lVar3);
  if (lVar6 != 0) {
    puVar4 = PTR_PTR_1126b08b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c4766c();
    *(undefined **)(unaff_x22 + 200) = puVar4;
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(uVar2);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101aad08c;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    puVar4 = &UNK_11043b090;
    func_0x000107c613fc(&UNK_11043b090,0x18,7);
    puVar5 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x101aaf110;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100ab47f8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11043b0a8;
    func_0x000107c60bc4(puVar5);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4fd5c(lVar6);
    func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c6142c(uVar2);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101aad088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101aad08c; end: 101aad14f;  */

void FUN_101aad08c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101aaf78c,0,0);
  return;
}



/* Entry: 101aad150; end: 101aad463;  */

void FUN_101aad150(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000101aaf6bc(*(undefined8 *)(unaff_x22 + 0x90),uVar2,&SUB_103c61120);
  func_0x000107c614c4(uVar2,uVar7);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xc0);
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
    (**(code **)(lVar3 + 0x20))(uVar1,puVar5,uVar8);
    func_0x000107c5ed70();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    uVar7 = 0x3a6c7275;
    uVar2 = 0xe400000000000000;
    FUN_101aae754(0x3a6c7275,0xe400000000000000);
    func_0x000107c6142c(0xe400000000000000);
    (**(code **)(lVar3 + 8))(uVar1,uVar8);
  }
  else if ((int)uVar2 == 1) {
    uVar1 = *puVar5;
    uVar8 = puVar5[1];
    uVar7 = uVar1;
    func_0x000107c5ee24(0,uVar1,uVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar7);
    uVar7 = 0x3a6a626f;
    uVar2 = 0xe400000000000000;
    FUN_101aae754(0x3a6a626f,0xe400000000000000);
    func_0x000107c6142c(0xe400000000000000);
    func_0x00010006c090(uVar1,uVar8);
  }
  else {
    uVar7 = puVar5[1];
    func_0x000107c5fb78(*puVar5,uVar7);
    func_0x000107c6142c(uVar7);
    uVar7 = 0x3a6c61636f6c;
    uVar2 = 0xe600000000000000;
    FUN_101aae754(0x3a6c61636f6c,0xe600000000000000);
    func_0x000107c6142c(0xe600000000000000);
  }
  func_0x000100083b20(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  lVar3 = lVar6;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 200) = lVar6;
  func_0x000107c61170(lVar3);
  if (lVar6 != 0) {
    puVar4 = PTR_PTR_1126b08b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar7,uVar2);
    func_0x000107c4766c();
    *(undefined **)(unaff_x22 + 0xd0) = puVar4;
    func_0x000107c61170(uVar7);
    func_0x000107c6142c(uVar2);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x88;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101aad464;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    puVar4 = &UNK_11043b0e0;
    func_0x000107c613fc(&UNK_11043b0e0,0x18,7);
    puVar5 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x101aaf118;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_101aad518;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11043b0f8;
    func_0x000107c60bc4(puVar5);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4f744(lVar6);
    func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c6142c(uVar2);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101aad460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2);
  return;
}



/* Entry: 101aad464; end: 101aad4a3;  */

void FUN_101aad464(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aad4a4,0,0);
  return;
}



/* Entry: 101aad4a4; end: 101aad517;  */

void FUN_101aad4a4(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61170(uVar2);
  uVar1 = (undefined4)(0x303010200 >> ((*(ulong *)(unaff_x22 + 0x88) & 7) << 3));
  if (4 < *(ulong *)(unaff_x22 + 0x88)) {
    uVar1 = 2;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101aad514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101aad518; end: 101aad553;  */

void FUN_101aad518(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101aad554; end: 101aad5d7;  */

void FUN_101aad554(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar1 = 0;
  func_0x000103c61120();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aad5d8,0,0);
  return;
}



/* Entry: 101aad5d8; end: 101aad947;  */

void FUN_101aad5d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000101aaf6bc(*(undefined8 *)(unaff_x22 + 0x88),uVar2,&SUB_103c61120);
  func_0x000107c614c4(uVar2,uVar6);
  puVar8 = *(undefined8 **)(unaff_x22 + 0xb8);
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
    (**(code **)(lVar3 + 0x20))(uVar1,puVar8,uVar10);
    func_0x000107c5ed70();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    uVar6 = 0x3a6c7275;
    uVar2 = 0xe400000000000000;
    FUN_101aae754(0x3a6c7275,0xe400000000000000);
    func_0x000107c6142c(0xe400000000000000);
    (**(code **)(lVar3 + 8))(uVar1,uVar10);
  }
  else if ((int)uVar2 == 1) {
    uVar1 = *puVar8;
    uVar10 = puVar8[1];
    uVar6 = uVar1;
    func_0x000107c5ee24(0,uVar1,uVar10);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    uVar6 = 0x3a6a626f;
    uVar2 = 0xe400000000000000;
    FUN_101aae754(0x3a6a626f,0xe400000000000000);
    func_0x000107c6142c(0xe400000000000000);
    func_0x00010006c090(uVar1,uVar10);
  }
  else {
    uVar6 = puVar8[1];
    func_0x000107c5fb78(*puVar8,uVar6);
    func_0x000107c6142c(uVar6);
    uVar6 = 0x3a6c61636f6c;
    uVar2 = 0xe600000000000000;
    FUN_101aae754(0x3a6c61636f6c,0xe600000000000000);
    func_0x000107c6142c(0xe600000000000000);
  }
  func_0x000100083b20(unaff_x22 + 0x80);
  lVar9 = *(long *)(unaff_x22 + 0x80);
  lVar3 = lVar9;
  func_0x000107c40430();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  lVar9 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xc0) = lVar9;
  func_0x000107c61170(lVar3);
  if (lVar9 != 0) {
    puVar4 = PTR_PTR_1126b08b8;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar6,uVar2);
    func_0x000107c4766c();
    *(undefined **)(unaff_x22 + 200) = puVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar2);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101aad948;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    lVar5 = lVar3;
    func_0x000101a6a21c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 3;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined **)(lVar5 + 0x20) = puVar4;
    uVar6 = 0;
    FUN_1019c718c(0);
    func_0x000107c61174(puVar4);
    lVar7 = lVar5;
    func_0x000107c5fc48(lVar5,uVar6);
    func_0x000107c61574(lVar5);
    puVar4 = &UNK_11043b130;
    func_0x000107c613fc(&UNK_11043b130,0x18,7);
    puVar8 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x101aaf130;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1000b0c7c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11043b148;
    func_0x000107c60bc4(puVar8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4fec8(lVar9);
    func_0x000107c60bd0(puVar8);
    func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c6142c(uVar2);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101aad944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101aad948; end: 101aad9d3;  */

void FUN_101aad948(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101aad988,0,0);
  return;
}



/* Entry: 101aad9d4; end: 101aadd13;  */

undefined * FUN_101aad9d4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_a0;
  long lStack_70;
  ulong uStack_68;
  
  uVar6 = 0;
  func_0x000107c5f994();
  lVar12 = *(long *)(uVar6 - 8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar8 = 0x112df70f0;
  func_0x000101aaf67c(0x112df70f0);
  uVar10 = uVar6;
  func_0x000107c5fbe0(uVar6,uVar8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar12 + 0x10))
            ((long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,uVar6);
  func_0x000107c5fbdc(&lStack_70,uVar6,uVar8);
  lVar12 = lStack_70;
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101aadd14);
    (*pcVar5)();
  }
  uVar6 = uStack_68;
  if (uVar10 != 0) {
    uVar11 = *(ulong *)(lStack_70 + 0x10);
    lVar1 = lStack_70 + 0x20;
    do {
      if (uVar11 == uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101aadd04);
        (*pcVar5)();
      }
      if ((long)uStack_68 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101aadd08);
        (*pcVar5)();
      }
      if (*(ulong *)(lVar12 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101aadd0c);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lVar1 + uVar6);
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar7 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar7 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar7);
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        uStack_a0 = uVar8;
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
        uVar8 = uStack_a0;
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar9;
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uStack_68 = uVar6;
  uVar10 = *(ulong *)(lStack_70 + 0x10);
  if (uStack_68 != uVar10) {
    do {
      if (uVar10 <= uStack_68) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101aadd10);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lStack_70 + 0x20 + uStack_68);
      lVar12 = 0x112d36008;
      uStack_68 = uStack_68 + 1;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar12 + 0x18) = 2;
      *(undefined8 *)(lVar12 + 0x10) = 1;
      *(undefined **)(lVar12 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar12 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(undefined1 *)(lVar12 + 0x20) = uVar3;
      uVar8 = 0x78323025;
      uVar9 = 0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar12);
      uVar10 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar10) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x20) = uVar8;
      *(undefined8 *)(puVar4 + uVar10 * 0x10 + 0x28) = uVar9;
      uVar10 = *(ulong *)(lStack_70 + 0x10);
    } while (uStack_68 != uVar10);
  }
  func_0x000107c6142c(lStack_70);
  return puVar4;
}



/* Entry: 101aadd14; end: 101aadd77;  */

void FUN_101aadd14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df6fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6a760;
  func_0x000107c61520(&UNK_10dc6a760,&UNK_1106f0268);
  puRam0000000112df6fb0 = puVar1;
  return;
}



/* Entry: 101aadd78; end: 101aadddb;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aadd78(long param_1,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  code *pcVar14;
  undefined8 *unaff_x20;
  code *pcVar15;
  undefined *puVar16;
  code *unaff_x21;
  long unaff_x22;
  int iVar17;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 unaff_x30;
  
  pcVar15 = (code *)*unaff_x20;
  plVar11 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = 0x101aaf774;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar2 + -0x10) = unaff_x29 & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    *(long **)(puVar2 + -0x18) = plVar11;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar11[10] = (long)UNRECOVERED_JUMPTABLE;
    plVar11[0xb] = (long)pcVar15;
    plVar11[9] = param_1;
    lVar3 = 0;
    func_0x000107c5ede0();
    plVar11[0xc] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar11[0xd] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar11[0xe] = uVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x20)) {
      pcVar15 = FUN_101aabcd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar15,0,0);
      return;
    }
    func_0x000107c60e78();
    *(code **)(puVar2 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x19;
    *(ulong *)(puVar2 + -0x30) = (ulong)(puVar2 + -0x10) | 0x1000000000000000;
    *(code **)(puVar2 + -0x28) = FUN_101aabcd0;
    *(long **)(puVar2 + -0x38) = plVar11;
    *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(plVar11 + 6);
    pcVar14 = (code *)plVar11[6];
    pcVar15 = pcVar14;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar14);
    pcVar14 = pcVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar11[0xf] = (long)pcVar14;
    func_0x000107c61170();
    if (pcVar14 == (code *)0x0) {
      FUN_101aadd14();
      puVar5 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar15,0,0);
      *pcVar15 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(plVar11[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      UNRECOVERED_JUMPTABLE = pcVar15;
      puVar16 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x50)) {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      puVar5 = (undefined *)plVar11[10];
      puVar16 = (undefined *)0x0;
      FUN_101aae930();
      plVar11[0x10] = (long)puVar5;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      plVar11[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar11;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x50)) {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar14;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = puVar5;
        pcVar15 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(ulong *)(puVar2 + -0x70) = (ulong)(puVar2 + -0x30) | 0x1000000000000000;
    *(code **)(puVar2 + -0x68) = FUN_101aabe34;
    *(long **)(puVar2 + -0x78) = plVar11;
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *plVar11;
    *(long *)(puVar2 + -0x78) = lVar3;
    param_1 = *plVar11;
    *(code **)(lVar3 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x80)) {
      pcVar15 = FUN_101aabeb0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(long *)(puVar2 + -0xd8) = unaff_x28;
    *(undefined8 *)(puVar2 + -0xd0) = unaff_x27;
    *(code **)(puVar2 + -200) = unaff_x26;
    *(ulong *)(puVar2 + -0xc0) = unaff_x25;
    *(ulong *)(puVar2 + -0xb8) = unaff_x24;
    *(ulong *)(puVar2 + -0xb0) = unaff_x23;
    *(undefined **)(puVar2 + -0xa8) = puVar16;
    *(undefined **)(puVar2 + -0xa0) = puVar5;
    *(ulong *)(puVar2 + -0x90) = (ulong)(puVar2 + -0x70) | 0x1000000000000000;
    *(code **)(puVar2 + -0x88) = FUN_101aabeb0;
    *(long *)(puVar2 + -0x98) = param_1;
    *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = *(undefined1 **)(param_1 + 0x90);
    func_0x000107c44314();
    pcVar14 = *(code **)(param_1 + 0x90);
    if (puVar6 == (undefined1 *)0x0) {
      pcVar15 = pcVar14;
      func_0x000107c4407c();
      func_0x000107c61180();
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      if (pcVar15 != (code *)0x0) {
        pcVar14 = pcVar15;
        func_0x000107c5faec();
        uVar4 = (ulong)pcVar14 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar4 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar4 == 0) {
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar15);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          pcVar14 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(param_1 + 0x70));
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(param_1 + 0x38) = 0;
        puVar16 = puVar5;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar15);
        func_0x000107c61170(puVar5);
        pcVar14 = *(code **)(param_1 + 0x38);
        if (puVar16 != (undefined *)0x0) {
          uVar4 = 0;
          FUN_101a64068();
          uVar10 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar5 = PTR___sypN_11034f1a8;
          puVar7 = puVar16;
          func_0x000107c5f9e8(puVar16,uVar4,PTR___sypN_11034f1a8 + 8,uVar10);
          func_0x000107c61174(pcVar14);
          func_0x000107c61170(puVar16);
          if (*(long *)(puVar7 + 0x10) == 0) {
            uVar13 = *(undefined8 *)(param_1 + 0x90);
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            uVar9 = *(undefined8 *)(param_1 + 0x80);
            *(undefined8 *)(param_1 + 0x18) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(uVar10);
            func_0x000107c615e8(uVar13);
            func_0x000107c6142c(puVar7);
            if (*(long *)(param_1 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar3 = param_1 + 0x40;
            func_0x000107c6147c(lVar3,param_1 + 0x10,puVar5 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar3 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(param_1 + 0x40);
          }
          else {
            lVar3 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar7);
            FUN_101aae36c(lVar3);
            uVar13 = *(undefined8 *)(param_1 + 0x90);
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            uVar9 = *(undefined8 *)(param_1 + 0x80);
            if ((uVar4 & 1) == 0) {
              func_0x000107c6142c(puVar7);
              *(undefined8 *)(param_1 + 0x18) = 0;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined8 *)(param_1 + 0x28) = 0;
              *(undefined8 *)(param_1 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar3 * 0x20,param_1 + 0x10);
            func_0x000107c61430(puVar7,2);
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(uVar10);
            func_0x000107c615e8(uVar13);
            if (*(long *)(param_1 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(param_1 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar4 = *(ulong *)(param_1 + 0x68);
          unaff_x21 = *(code **)(param_1 + 0x70);
          unaff_x23 = *(ulong *)(param_1 + 0x60);
          pcVar14 = *(code **)(param_1 + 0x48);
          pcVar15 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(pcVar14 + 0x18) = pcVar15;
          *(undefined ***)(pcVar14 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar4 + 0x20))();
          uVar10 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(pcVar14,uVar10,1);
          UNRECOVERED_JUMPTABLE_00 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(param_1 + 0x90);
        unaff_x25 = *(ulong *)(param_1 + 0x78);
        unaff_x24 = *(ulong *)(param_1 + 0x80);
        unaff_x28 = *(long *)(param_1 + 0x68);
        unaff_x26 = *(code **)(param_1 + 0x70);
        unaff_x27 = *(undefined8 *)(param_1 + 0x60);
        UNRECOVERED_JUMPTABLE_00 = pcVar14;
        func_0x000107c61174(pcVar14);
        pcVar15 = pcVar14;
        func_0x000107c5ed30();
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar8 = *(code **)(param_1 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(param_1 + 0x90);
      unaff_x24 = *(ulong *)(param_1 + 0x78);
      uVar4 = *(ulong *)(param_1 + 0x80);
      if (pcVar8 == (code *)0x0) {
        FUN_101aadd14();
        pcVar15 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar8,0,0);
        *pcVar8 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar4;
        goto LAB_101aabf30;
      }
      pcVar14 = *(code **)(param_1 + 0x48);
      unaff_x21 = pcVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar8);
      pcVar15 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(pcVar14 + 0x18) = pcVar15;
      *(undefined ***)(pcVar14 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)pcVar14 = unaff_x21;
      *(code **)(pcVar14 + 8) = UNRECOVERED_JUMPTABLE_00;
      uVar10 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(pcVar14,uVar10,0);
      func_0x00010006c00c(unaff_x21,UNRECOVERED_JUMPTABLE_00);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)UNRECOVERED_JUMPTABLE_00 >> 0x20);
      uVar12 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar12 == 0) {
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          unaff_x24 = (ulong)UNRECOVERED_JUMPTABLE_00 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)unaff_x21 >> 0x20;
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          iVar17 = (int)((ulong)unaff_x21 >> 0x20);
          if (SBORROW4(iVar17,(int)unaff_x21)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar15)();
          }
          unaff_x24 = (ulong)(iVar17 - (int)unaff_x21);
        }
      }
      else if (uVar12 == 2) {
        lVar3 = *(long *)(unaff_x21 + 0x10);
        unaff_x23 = *(ulong *)(unaff_x21 + 0x18);
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = unaff_x23 - lVar3;
        if (SBORROW8(unaff_x23,lVar3)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar15)();
        }
      }
      else {
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar10 = *(undefined8 *)(param_1 + 0x70);
      pcVar14[*(int *)(pcVar15 + 0x14)] = (code)0x1;
      *(ulong *)(pcVar14 + *(int *)(pcVar15 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
      unaff_x25 = uVar4;
      unaff_x26 = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0xe0))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(param_1 + 0x78);
      uVar4 = *(ulong *)(param_1 + 0x80);
      FUN_101aadd14();
      pcVar15 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar6,0,0);
      *puVar6 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(pcVar14);
      unaff_x23 = uVar4;
LAB_101aabf30:
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(param_1 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
      unaff_x21 = pcVar15;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0xe0)) {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    *(code **)(puVar2 + -0x110) = pcVar14;
    *(ulong *)(puVar2 + -0x100) = (ulong)(puVar2 + -0x90) | 0x1000000000000000;
    *(code **)(puVar2 + -0xf8) = FUN_101aac3dc;
    *(long *)(puVar2 + -0x108) = param_1;
    plVar11 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(param_1 + 0x38) = plVar11;
    *plVar11 = param_1;
    plVar11[1] = (long)FUN_101aac430;
    param_1 = param_1 + 0x10;
    unaff_x29 = *(ulong *)(puVar2 + -0x100);
    unaff_x30 = *(undefined8 *)(puVar2 + -0xf8);
    unaff_x19 = *(undefined8 *)(puVar2 + -0x110);
    puVar2 = puVar2 + -0xf0;
  } while( true );
}



/* Entry: 101aadddc; end: 101aade33;  */

/* WARNING: Removing unreachable block (ram,0x000101aabd60) */

void FUN_101aadddc(code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined1 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 unaff_x19;
  code *pcVar14;
  undefined8 *unaff_x20;
  code *pcVar15;
  undefined *puVar16;
  code *unaff_x21;
  long unaff_x22;
  int iVar17;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  code *unaff_x26;
  undefined8 unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 unaff_x30;
  
  pcVar15 = (code *)*unaff_x20;
  plVar11 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101aade34;
  puVar2 = (undefined1 *)register0x00000008;
  do {
    *(ulong *)(puVar2 + -0x10) = unaff_x29 & 0xefffffffffffffff | 0x1000000000000000;
    *(undefined8 *)(puVar2 + -8) = unaff_x30;
    *(long **)(puVar2 + -0x18) = plVar11;
    *(undefined8 *)(puVar2 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar11[10] = (long)UNRECOVERED_JUMPTABLE;
    plVar11[0xb] = (long)pcVar15;
    plVar11[9] = unaff_x22 + 0x10;
    lVar3 = 0;
    func_0x000107c5ede0();
    plVar11[0xc] = lVar3;
    lVar3 = *(long *)(lVar3 + -8);
    plVar11[0xd] = lVar3;
    uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar11[0xe] = uVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x20)) {
      pcVar15 = FUN_101aabcd0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar15,0,0);
      return;
    }
    func_0x000107c60e78();
    *(code **)(puVar2 + -0x48) = unaff_x21;
    *(undefined8 *)(puVar2 + -0x40) = unaff_x19;
    *(ulong *)(puVar2 + -0x30) = (ulong)(puVar2 + -0x10) | 0x1000000000000000;
    *(code **)(puVar2 + -0x28) = FUN_101aabcd0;
    *(long **)(puVar2 + -0x38) = plVar11;
    *(undefined8 *)(puVar2 + -0x50) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000100083b20(plVar11 + 6);
    pcVar14 = (code *)plVar11[6];
    pcVar15 = pcVar14;
    func_0x000107c5b034();
    func_0x000107c61180();
    func_0x000107c61170(pcVar14);
    pcVar14 = pcVar15;
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar11[0xf] = (long)pcVar14;
    func_0x000107c61170();
    if (pcVar14 == (code *)0x0) {
      FUN_101aadd14();
      puVar5 = &UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,pcVar15,0,0);
      *pcVar15 = (code)0x0;
      func_0x000107c61654();
      func_0x000107c615c0(plVar11[0xe]);
      UNRECOVERED_JUMPTABLE_00 = (code *)plVar11[1];
      UNRECOVERED_JUMPTABLE = pcVar15;
      puVar16 = puVar5;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x50)) {
                    /* WARNING: Could not recover jumptable at 0x000101aabdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else {
      puVar5 = (undefined *)plVar11[10];
      puVar16 = (undefined *)0x0;
      FUN_101aae930();
      plVar11[0x10] = (long)puVar5;
      UNRECOVERED_JUMPTABLE_00 = (code *)0xa0;
      func_0x000107c615b8();
      plVar11[0x11] = (long)UNRECOVERED_JUMPTABLE_00;
      *(long **)UNRECOVERED_JUMPTABLE_00 = plVar11;
      *(code **)(UNRECOVERED_JUMPTABLE_00 + 8) = FUN_101aabe34;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x50)) {
        *(code **)(UNRECOVERED_JUMPTABLE_00 + 0x88) = pcVar14;
        *(undefined **)(UNRECOVERED_JUMPTABLE_00 + 0x90) = puVar5;
        pcVar15 = FUN_101aaef34;
        goto LAB_107c615e0;
      }
    }
    func_0x000107c60e78();
    *(ulong *)(puVar2 + -0x70) = (ulong)(puVar2 + -0x30) | 0x1000000000000000;
    *(code **)(puVar2 + -0x68) = FUN_101aabe34;
    *(long **)(puVar2 + -0x78) = plVar11;
    *(undefined8 *)(puVar2 + -0x80) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *plVar11;
    *(long *)(puVar2 + -0x78) = lVar3;
    unaff_x22 = *plVar11;
    *(code **)(lVar3 + 0x90) = UNRECOVERED_JUMPTABLE_00;
    func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x88));
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0x80)) {
      pcVar15 = FUN_101aabeb0;
      goto LAB_107c615e0;
    }
    func_0x000107c60e78();
    *(long *)(puVar2 + -0xd8) = unaff_x28;
    *(undefined8 *)(puVar2 + -0xd0) = unaff_x27;
    *(code **)(puVar2 + -200) = unaff_x26;
    *(ulong *)(puVar2 + -0xc0) = unaff_x25;
    *(ulong *)(puVar2 + -0xb8) = unaff_x24;
    *(ulong *)(puVar2 + -0xb0) = unaff_x23;
    *(undefined **)(puVar2 + -0xa8) = puVar16;
    *(undefined **)(puVar2 + -0xa0) = puVar5;
    *(ulong *)(puVar2 + -0x90) = (ulong)(puVar2 + -0x70) | 0x1000000000000000;
    *(code **)(puVar2 + -0x88) = FUN_101aabeb0;
    *(long *)(puVar2 + -0x98) = unaff_x22;
    *(undefined8 *)(puVar2 + -0xe0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar6 = *(undefined1 **)(unaff_x22 + 0x90);
    func_0x000107c44314();
    pcVar14 = *(code **)(unaff_x22 + 0x90);
    if (puVar6 == (undefined1 *)0x0) {
      pcVar15 = pcVar14;
      func_0x000107c4407c();
      func_0x000107c61180();
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
      if (pcVar15 != (code *)0x0) {
        pcVar14 = pcVar15;
        func_0x000107c5faec();
        uVar4 = (ulong)pcVar14 & 0xffffffffffff;
        if (((ulong)UNRECOVERED_JUMPTABLE & 0x2000000000000000) != 0) {
          uVar4 = (ulong)UNRECOVERED_JUMPTABLE >> 0x38 & 0xf;
        }
        if (uVar4 == 0) {
          UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
          func_0x000107c61170(pcVar15);
          func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
          pcVar14 = UNRECOVERED_JUMPTABLE;
          goto LAB_101aac0f0;
        }
        func_0x000107c5ed80(*(undefined8 *)(unaff_x22 + 0x70));
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        puVar16 = puVar5;
        func_0x000107c3e388();
        func_0x000107c61180();
        func_0x000107c61170(pcVar15);
        func_0x000107c61170(puVar5);
        pcVar14 = *(code **)(unaff_x22 + 0x38);
        if (puVar16 != (undefined *)0x0) {
          uVar4 = 0;
          FUN_101a64068();
          uVar10 = 0x112defdc0;
          func_0x000101aaf67c(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
          puVar5 = PTR___sypN_11034f1a8;
          puVar7 = puVar16;
          func_0x000107c5f9e8(puVar16,uVar4,PTR___sypN_11034f1a8 + 8,uVar10);
          func_0x000107c61174(pcVar14);
          func_0x000107c61170(puVar16);
          if (*(long *)(puVar7 + 0x10) == 0) {
            uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
            *(undefined8 *)(unaff_x22 + 0x18) = 0;
            *(undefined8 *)(unaff_x22 + 0x10) = 0;
            *(undefined8 *)(unaff_x22 + 0x28) = 0;
            *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_101aac2d0:
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(uVar10);
            func_0x000107c615e8(uVar13);
            func_0x000107c6142c(puVar7);
            if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_101aac0c4;
LAB_101aac2f4:
            lVar3 = unaff_x22 + 0x40;
            func_0x000107c6147c(lVar3,unaff_x22 + 0x10,puVar5 + 8,PTR___sSiN_11034deb0,6);
            if ((int)lVar3 == 0) goto LAB_101aac31c;
            unaff_x24 = *(ulong *)(unaff_x22 + 0x40);
          }
          else {
            lVar3 = *(long *)PTR__NSFileSize_110345448;
            func_0x000107c61434(puVar7);
            FUN_101aae36c(lVar3);
            uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
            if ((uVar4 & 1) == 0) {
              func_0x000107c6142c(puVar7);
              *(undefined8 *)(unaff_x22 + 0x18) = 0;
              *(undefined8 *)(unaff_x22 + 0x10) = 0;
              *(undefined8 *)(unaff_x22 + 0x28) = 0;
              *(undefined8 *)(unaff_x22 + 0x20) = 0;
              goto LAB_101aac2d0;
            }
            func_0x0001000bb420(*(long *)(puVar7 + 0x38) + lVar3 * 0x20,unaff_x22 + 0x10);
            func_0x000107c61430(puVar7,2);
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(uVar10);
            func_0x000107c615e8(uVar13);
            if (*(long *)(unaff_x22 + 0x28) != 0) goto LAB_101aac2f4;
LAB_101aac0c4:
            func_0x000101aaf700(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
LAB_101aac31c:
            unaff_x24 = 0;
          }
          uVar4 = *(ulong *)(unaff_x22 + 0x68);
          unaff_x21 = *(code **)(unaff_x22 + 0x70);
          unaff_x23 = *(ulong *)(unaff_x22 + 0x60);
          pcVar14 = *(code **)(unaff_x22 + 0x48);
          pcVar15 = (code *)0x0;
          FUN_101aaf064();
          *(code **)(pcVar14 + 0x18) = pcVar15;
          *(undefined ***)(pcVar14 + 0x20) = &PTR_DAT_11043b1c8;
          func_0x0001000c5db4();
          (**(code **)(uVar4 + 0x20))();
          uVar10 = 0;
          func_0x000103c5f890(0);
          func_0x000107c6159c(pcVar14,uVar10,1);
          UNRECOVERED_JUMPTABLE_00 = unaff_x26;
          goto LAB_101aac378;
        }
        unaff_x23 = *(ulong *)(unaff_x22 + 0x90);
        unaff_x25 = *(ulong *)(unaff_x22 + 0x78);
        unaff_x24 = *(ulong *)(unaff_x22 + 0x80);
        unaff_x28 = *(long *)(unaff_x22 + 0x68);
        unaff_x26 = *(code **)(unaff_x22 + 0x70);
        unaff_x27 = *(undefined8 *)(unaff_x22 + 0x60);
        UNRECOVERED_JUMPTABLE_00 = pcVar14;
        func_0x000107c61174(pcVar14);
        pcVar15 = pcVar14;
        func_0x000107c5ed30();
        func_0x000107c61170(UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61654();
        func_0x000107c61170(unaff_x24);
        func_0x000107c615e8(unaff_x25);
        func_0x000107c615e8(unaff_x23);
        (**(code **)(unaff_x28 + 8))(unaff_x26,unaff_x27);
        goto LAB_101aabf3c;
      }
LAB_101aac0f0:
      pcVar8 = *(code **)(unaff_x22 + 0x90);
      func_0x000107c30a1c();
      func_0x000107c61180();
      unaff_x23 = *(ulong *)(unaff_x22 + 0x90);
      unaff_x24 = *(ulong *)(unaff_x22 + 0x78);
      uVar4 = *(ulong *)(unaff_x22 + 0x80);
      if (pcVar8 == (code *)0x0) {
        FUN_101aadd14();
        pcVar15 = (code *)&UNK_1106f0268;
        func_0x000107c613f8(&UNK_1106f0268,pcVar8,0,0);
        *pcVar8 = (code)0x0;
        func_0x000107c61654();
        func_0x000107c615e8(unaff_x23);
        unaff_x25 = uVar4;
        goto LAB_101aabf30;
      }
      pcVar14 = *(code **)(unaff_x22 + 0x48);
      unaff_x21 = pcVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(pcVar8);
      pcVar15 = (code *)0x0;
      FUN_101aaf064();
      *(code **)(pcVar14 + 0x18) = pcVar15;
      *(undefined ***)(pcVar14 + 0x20) = &PTR_DAT_11043b1c8;
      func_0x0001000c5db4();
      *(code **)pcVar14 = unaff_x21;
      *(code **)(pcVar14 + 8) = UNRECOVERED_JUMPTABLE_00;
      uVar10 = 0;
      func_0x000103c5f890(0);
      func_0x000107c6159c(pcVar14,uVar10,0);
      func_0x00010006c00c(unaff_x21,UNRECOVERED_JUMPTABLE_00);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(unaff_x24);
      func_0x000107c615e8(unaff_x23);
      uVar1 = (uint)((ulong)UNRECOVERED_JUMPTABLE_00 >> 0x20);
      uVar12 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar12 == 0) {
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          unaff_x24 = (ulong)UNRECOVERED_JUMPTABLE_00 >> 0x30 & 0xff;
        }
        else {
          unaff_x23 = (ulong)unaff_x21 >> 0x20;
          func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
          iVar17 = (int)((ulong)unaff_x21 >> 0x20);
          if (SBORROW4(iVar17,(int)unaff_x21)) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x101aac3d8);
            (*pcVar15)();
          }
          unaff_x24 = (ulong)(iVar17 - (int)unaff_x21);
        }
      }
      else if (uVar12 == 2) {
        lVar3 = *(long *)(unaff_x21 + 0x10);
        unaff_x23 = *(ulong *)(unaff_x21 + 0x18);
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = unaff_x23 - lVar3;
        if (SBORROW8(unaff_x23,lVar3)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x101aac210);
          (*pcVar15)();
        }
      }
      else {
        func_0x00010006c090(unaff_x21,UNRECOVERED_JUMPTABLE_00);
        unaff_x24 = 0;
      }
LAB_101aac378:
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      pcVar14[*(int *)(pcVar15 + 0x14)] = (code)0x1;
      *(ulong *)(pcVar14 + *(int *)(pcVar15 + 0x18)) = unaff_x24;
      func_0x000107c615c0(uVar10);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      unaff_x25 = uVar4;
      unaff_x26 = UNRECOVERED_JUMPTABLE_00;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0xe0))
      goto LAB_101aac3b4;
    }
    else {
      unaff_x24 = *(ulong *)(unaff_x22 + 0x78);
      uVar4 = *(ulong *)(unaff_x22 + 0x80);
      FUN_101aadd14();
      pcVar15 = (code *)&UNK_1106f0268;
      func_0x000107c613f8(&UNK_1106f0268,puVar6,0,0);
      *puVar6 = 0;
      func_0x000107c61654();
      func_0x000107c615e8(pcVar14);
      unaff_x23 = uVar4;
LAB_101aabf30:
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(unaff_x24);
LAB_101aabf3c:
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      unaff_x21 = pcVar15;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar2 + -0xe0)) {
LAB_101aac3b4:
                    /* WARNING: Could not recover jumptable at 0x000101aac3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    func_0x000107c60e78();
    *(code **)(puVar2 + -0x110) = pcVar14;
    *(ulong *)(puVar2 + -0x100) = (ulong)(puVar2 + -0x90) | 0x1000000000000000;
    *(code **)(puVar2 + -0xf8) = FUN_101aac3dc;
    *(long *)(puVar2 + -0x108) = unaff_x22;
    plVar11 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_101aac430;
    unaff_x29 = *(ulong *)(puVar2 + -0x100);
    unaff_x30 = *(undefined8 *)(puVar2 + -0xf8);
    unaff_x19 = *(undefined8 *)(puVar2 + -0x110);
    puVar2 = puVar2 + -0xf0;
  } while( true );
}



/* Entry: 101aade34; end: 101aadec3;  */

void FUN_101aade34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101aade90;
  }
  else {
    pcVar1 = FUN_101aadec4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101aadec4; end: 101aadecf;  */

void FUN_101aadec4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101aadecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101aaded0; end: 101aadf53;  */

void FUN_101aaded0(long param_1,long param_2,undefined1 param_3,long param_4,undefined2 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101aadf54;
  *(undefined2 *)(plVar3 + 0x26) = param_5;
  plVar3[0x13] = param_4;
  plVar3[0x14] = lVar4;
  *(undefined1 *)((long)plVar3 + 0x133) = param_3;
  plVar3[0x11] = param_1;
  plVar3[0x12] = param_2;
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x15] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x16] = uVar2;
  lVar4 = 0;
  func_0x000103c61120();
  plVar3[0x17] = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar2;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar3[0x19] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x1a] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1b] = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1c] = uVar2;
  lVar4 = 0;
  func_0x000103c60794();
  plVar3[0x1d] = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1e] = uVar2;
  lVar4 = 0;
  func_0x000107c5eec8();
  plVar3[0x1f] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x20] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x21] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aac5ac,0,0);
  return;
}



/* Entry: 101aadf54; end: 101aadf8f;  */

void FUN_101aadf54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101aadf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101aadf90; end: 101aadfdf;  */

void FUN_101aadf90(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101aaf7a0;
  plVar2[0x11] = param_1;
  plVar2[0x12] = lVar3;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x13] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x14] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x15] = uVar1;
  lVar3 = 0;
  func_0x000103c61120();
  plVar2[0x16] = lVar3;
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x17] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aacd84,0,0);
  return;
}



/* Entry: 101aadfe0; end: 101aae02f;  */

void FUN_101aadfe0(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101aae030;
  plVar2[0x12] = param_1;
  plVar2[0x13] = lVar3;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x14] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x15] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x16] = uVar1;
  lVar3 = 0;
  func_0x000103c61120();
  plVar2[0x17] = lVar3;
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x18] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aad150,0,0);
  return;
}



/* Entry: 101aae030; end: 101aae073;  */

void FUN_101aae030(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101aae070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101aae074; end: 101aae0c3;  */

void FUN_101aae074(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101aae0c4;
  plVar2[0x11] = param_1;
  plVar2[0x12] = lVar3;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0x13] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x14] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x15] = uVar1;
  lVar3 = 0;
  func_0x000103c61120();
  plVar2[0x16] = lVar3;
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x17] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aad5d8,0,0);
  return;
}



/* Entry: 101aae0c4; end: 101aae183;  */

void FUN_101aae0c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101aae0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101aae184; end: 101aae293;  */

/* WARNING: Removing unreachable block (ram,0x000101aae1f4) */

void FUN_101aae184(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000101aaf6bc(*(undefined8 *)(unaff_x22 + 0x10),uVar3,&SUB_103c5f890);
  func_0x000107c614c4(uVar3,uVar1);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x38);
  if ((int)uVar3 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x20))
              (uVar1,puVar2,*(undefined8 *)(unaff_x22 + 0x18));
    uVar3 = 1;
    func_0x000107c5ede8(uVar1,1);
    (**(code **)(*(long *)(unaff_x22 + 0x20) + 8))
              (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x18));
    puVar2 = *(undefined8 **)(unaff_x22 + 0x38);
  }
  else {
    uVar1 = *puVar2;
    uVar3 = puVar2[1];
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c615c0(puVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101aae290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3);
  return;
}



/* Entry: 101aae294; end: 101aae2ab;  */

undefined1 FUN_101aae294(long param_1)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + *(int *)(param_1 + 0x14));
}



/* Entry: 101aae2ac; end: 101aae313;  */

void FUN_101aae2ac(void)

{
  func_0x000101aaf6bc();
  return;
}



/* Entry: 101aae314; end: 101aae36b;  */

void FUN_101aae314(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101aae368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101aae36c; end: 101aae3eb;  */

undefined1  [16] FUN_101aae36c(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_101aae4c4;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_101aae4c4:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 101aae3ec; end: 101aae4e3;  */

undefined1  [16] FUN_101aae3ec(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_101aae4c4;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_101aae4c4:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 101aae4e4; end: 101aae68f;  */

void FUN_101aae4e4(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar7 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar7 == 0) {
      auStack_48[0] = (undefined1)param_1;
      auStack_48[1] = (undefined1)((ulong)param_1 >> 8);
      auStack_48[2] = (undefined1)((ulong)param_1 >> 0x10);
      auStack_48[3] = (undefined1)((ulong)param_1 >> 0x18);
      auStack_48[4] = (undefined1)((ulong)param_1 >> 0x20);
      auStack_48[5] = (undefined1)((ulong)param_1 >> 0x28);
      auStack_48[6] = (undefined1)((ulong)param_1 >> 0x30);
      auStack_48[7] = (undefined1)((ulong)param_1 >> 0x38);
      auStack_48[8] = (undefined1)param_2;
      auStack_48[9] = (undefined1)(param_2 >> 8);
      auStack_48[10] = (undefined1)(param_2 >> 0x10);
      auStack_48[0xb] = (undefined1)(param_2 >> 0x18);
      auStack_48[0xc] = (undefined1)(param_2 >> 0x20);
      auStack_48[0xd] = (undefined1)(param_2 >> 0x28);
      puVar9 = auStack_48 + (param_2 >> 0x30 & 0xff);
      uVar3 = 0;
      func_0x000107c5f9a4();
      uVar4 = 0x112df70e8;
      func_0x000101aaf67c(0x112df70e8,PTR___s9CryptoKit6SHA256VMa_11034b128,
                          PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
      puVar8 = auStack_48;
      func_0x000107c5f988(puVar8,puVar9,uVar3,uVar4);
      goto LAB_101aae65c;
    }
    puVar8 = (undefined1 *)(long)(int)param_1;
    puVar9 = (undefined1 *)(param_1 >> 0x20);
    if ((long)puVar9 < (long)puVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101aae68c);
      (*pcVar2)();
    }
  }
  else {
    if (uVar7 != 2) {
      uVar3 = 0;
      func_0x000107c5f9a4();
      uVar4 = 0x112df70e8;
      func_0x000101aaf67c(0x112df70e8,PTR___s9CryptoKit6SHA256VMa_11034b128,
                          PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
      auStack_48[0] = 0;
      auStack_48[1] = 0;
      auStack_48[2] = 0;
      auStack_48[3] = 0;
      auStack_48[4] = 0;
      auStack_48[5] = 0;
      auStack_48[6] = 0;
      auStack_48[7] = 0;
      auStack_48[8] = 0;
      auStack_48[9] = 0;
      auStack_48[10] = 0;
      auStack_48[0xb] = 0;
      auStack_48[0xc] = 0;
      auStack_48[0xd] = 0;
      puVar8 = auStack_48;
      puVar9 = auStack_48;
      func_0x000107c5f988(puVar8,puVar9,uVar3,uVar4);
      goto LAB_101aae65c;
    }
    puVar8 = *(undefined1 **)(param_1 + 0x10);
    puVar9 = *(undefined1 **)(param_1 + 0x18);
  }
  FUN_101aae690(puVar8,puVar9,param_2 & 0x3fffffffffffffff,param_3);
LAB_101aae65c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  puVar5 = puVar8;
  func_0x000107c5ec30();
  puVar6 = puVar5;
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c5ec3c();
    if (SBORROW8((long)puVar8,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101aae754);
      (*pcVar2)();
    }
    puVar5 = puVar5 + ((long)puVar8 - (long)puVar6);
  }
  if (!SBORROW8((long)puVar9,(long)puVar8)) {
    func_0x000107c5ec38();
    if ((long)(puVar9 + -(long)puVar8) <= (long)puVar6) {
      puVar6 = puVar9 + -(long)puVar8;
    }
    puVar9 = (undefined1 *)0x0;
    if (puVar5 != (undefined1 *)0x0) {
      puVar9 = puVar6 + (long)puVar5;
    }
    uVar3 = 0;
    func_0x000107c5f9a4(0);
    uVar4 = 0x112df70e8;
    func_0x000101aaf67c(0x112df70e8,PTR___s9CryptoKit6SHA256VMa_11034b128,
                        PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
    func_0x000107c5f988(puVar5,puVar9,uVar3,uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101aae750);
  (*pcVar2)();
}



/* Entry: 101aae690; end: 101aae753;  */

void FUN_101aae690(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = param_1;
  func_0x000107c5ec30();
  lVar4 = lVar3;
  if (lVar3 != 0) {
    func_0x000107c5ec3c();
    if (SBORROW8(param_1,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101aae754);
      (*pcVar2)();
    }
    lVar3 = (param_1 - lVar4) + lVar3;
  }
  if (!SBORROW8(param_2,param_1)) {
    func_0x000107c5ec38();
    if (param_2 - param_1 <= lVar4) {
      lVar4 = param_2 - param_1;
    }
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar4 + lVar3;
    }
    uVar5 = 0;
    func_0x000107c5f9a4(0);
    uVar6 = 0x112df70e8;
    func_0x000101aaf67c(0x112df70e8,PTR___s9CryptoKit6SHA256VMa_11034b128,
                        PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
    func_0x000107c5f988(lVar3,lVar1,uVar5,uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101aae750);
  (*pcVar2)();
}



/* Entry: 101aae754; end: 101aae92f;  */

undefined1  [16] FUN_101aae754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lVar2 = 0;
  func_0x000107c5f9a4();
  puVar1 = PTR___s9CryptoKit6SHA256VMa_11034b128;
  lStack_78 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f994();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61434(param_2);
  func_0x000100e35e30(param_1,param_2);
  uVar4 = 0x112df70e8;
  func_0x000101aaf67c(0x112df70e8,puVar1,PTR___s9CryptoKit6SHA256VAA12HashFunctionAAMc_11034b118);
  func_0x000107c5f990(puVar8,lVar2,uVar4);
  func_0x00010006c00c(param_1,param_2);
  FUN_101aae4e4(param_1,param_2,puVar8);
  func_0x00010006c090(param_1,param_2);
  func_0x000107c5f98c(lVar9,lVar2,uVar4);
  func_0x00010006c090(param_1,param_2);
  (**(code **)(lStack_78 + 8))(puVar8,lVar2);
  lVar2 = lVar9;
  FUN_101aad9d4();
  (**(code **)(lVar10 + 8))(lVar9,lVar3);
  uVar4 = 0x112d38270;
  lStack_70 = lVar2;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar5 = uVar4;
  func_0x00010011d734();
  uVar6 = 0;
  uVar7 = 0xe000000000000000;
  func_0x000107c5fa80(0,0xe000000000000000,uVar4,uVar5);
  func_0x000107c6142c(lVar2);
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = uVar6;
  return auVar11;
}



/* Entry: 101aae930; end: 101aaef1b;  */

undefined1 * FUN_101aae930(long param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  long alStack_78 [2];
  undefined1 *puStack_68;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar13 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined1 *)0x0;
  func_0x000103c61120();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  puVar16 = (undefined8 *)(puVar13 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = (undefined8 *)((long)puVar16 - extraout_x12);
  func_0x000101aaf6bc(param_1,puVar14);
  puVar6 = puVar14;
  func_0x000107c614c4(puVar14,puVar5);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar15 + 0x20))(puVar13,puVar14,lVar4);
    puVar8 = PTR_PTR_1126b08b0;
    func_0x000107c61168(PTR_PTR_1126b08b0);
    puVar9 = puVar8;
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar14);
    func_0x000107c3f71c(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    (**(code **)(lVar15 + 8))(puVar13,lVar4);
  }
  else {
    if ((int)puVar6 != 1) {
      FUN_101aaf438(puVar14,&SUB_103c61120);
      FUN_101aadd14();
      func_0x000107c613f8(&UNK_1106f0268,puVar14,0,0);
      *(undefined1 *)puVar14 = 0;
      func_0x000107c61654();
      return puVar5;
    }
    uVar1 = *puVar14;
    uVar12 = puVar14[1];
    puVar8 = PTR_PTR_1126b08b0;
    func_0x000107c61168(PTR_PTR_1126b08b0);
    uVar7 = uVar1;
    func_0x000107c5ee20(uVar1,uVar12);
    func_0x000107c40498(puVar8);
    func_0x000107c61180();
    func_0x00010006c090(uVar1,uVar12);
    func_0x000107c61170(uVar7);
  }
  lVar10 = 0;
  func_0x000103c6173c();
  dVar17 = *(double *)(param_1 + *(int *)(lVar10 + 0x20));
  alStack_78[0] = lVar10;
  if (-1 < (long)dVar17 && (long)ABS(dVar17) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
      (long)dVar17 - 1U < 0xfffffffffffff) {
    dVar18 = 4294967295.0;
    if ((double)(long)(dVar17 / 60.0) <= 4294967295.0) {
      dVar18 = (double)(long)(dVar17 / 60.0);
    }
    if (0x7fe < (ulong)dVar18 >> 0x34) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101aaef14);
      (*pcVar3)();
    }
    if (dVar18 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101aaef18);
      (*pcVar3)();
    }
    if (1.8446744073709552e+19 <= dVar18) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101aaef1c);
      (*pcVar3)();
    }
  }
  puVar9 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar8);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460ec();
  func_0x000107c61170(puVar8);
  func_0x000107c61170();
  if (puVar9 == (undefined1 *)0x0) {
    FUN_101aadd14();
    func_0x000107c613f8(&UNK_1106f0268,puVar11,0,0);
    *puVar11 = 0;
    func_0x000107c61654();
  }
  else {
    func_0x000107c56498(puVar9);
    func_0x000101aaf6bc(param_1,puVar16,&SUB_103c61120);
    puVar6 = puVar16;
    func_0x000107c614c4(puVar16,puVar5);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar15 + 0x20))(puVar13,puVar16,lVar4);
      func_0x000107c5ed70();
      alStack_78[1] = 0x3a6c7275;
      puStack_68 = (undefined1 *)0xe400000000000000;
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar16);
      puVar2 = puStack_68;
      lVar10 = alStack_78[1];
      puVar5 = puStack_68;
      FUN_101aae754(alStack_78[1],puStack_68);
      func_0x000107c6142c(puVar2);
      (**(code **)(lVar15 + 8))(puVar13,lVar4);
    }
    else if ((int)puVar6 == 1) {
      uVar1 = *puVar16;
      uVar12 = puVar16[1];
      uVar7 = uVar1;
      func_0x000107c5ee24(0,uVar1,uVar12);
      alStack_78[1] = 0x3a6a626f;
      puStack_68 = (undefined1 *)0xe400000000000000;
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar7);
      puVar13 = puStack_68;
      lVar10 = alStack_78[1];
      puVar5 = puStack_68;
      FUN_101aae754(alStack_78[1],puStack_68);
      func_0x000107c6142c(puVar13);
      func_0x00010006c090(uVar1,uVar12);
    }
    else {
      uVar1 = puVar16[1];
      alStack_78[1] = 0x3a6c61636f6c;
      puStack_68 = (undefined1 *)0xe600000000000000;
      func_0x000107c5fb78(*puVar16,uVar1);
      func_0x000107c6142c(uVar1);
      puVar13 = puStack_68;
      lVar10 = alStack_78[1];
      puVar5 = puStack_68;
      FUN_101aae754(alStack_78[1],puStack_68);
      func_0x000107c6142c(puVar13);
    }
    puVar11 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(lVar10,puVar5);
    func_0x000107c4766c(puVar11);
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c53834(puVar9);
    func_0x000107c61170(puVar11);
    puVar6 = (undefined8 *)(param_1 + *(int *)(alStack_78[0] + 0x18));
    if (puVar6[1] != 0) {
      puVar5 = (undefined1 *)puVar6[2];
      uVar1 = puVar6[3];
      uVar12 = *puVar6;
      func_0x000107c5fadc(uVar12);
      func_0x000107c5fadc(puVar5,uVar1);
      func_0x000107c54584(puVar9);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(puVar5);
    }
    puVar13 = puVar9;
    func_0x000107c3ecd0();
    func_0x000107c61180();
    if (puVar13 != (undefined1 *)0x0) {
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      return puVar13;
    }
    FUN_101aadd14();
    func_0x000107c613f8(&UNK_1106f0268,puVar13,0,0);
    *puVar13 = 0;
    func_0x000107c61654();
    func_0x000107c61170(puVar9);
  }
  func_0x000107c61170(puVar8);
  return puVar5;
}



/* Entry: 101aaef1c; end: 101aaef33;  */

void FUN_101aaef1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aaef34,0,0);
  return;
}



/* Entry: 101aaef34; end: 101aaf017;  */

void FUN_101aaef34(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101aaf018;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  puVar3 = &UNK_11043b200;
  func_0x000107c613fc(&UNK_11043b200,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x101aaf740;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100f17d9c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11043b218;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c50788(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101aaf018; end: 101aaf057;  */

void FUN_101aaf018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101aaf058,0,0);
  return;
}



/* Entry: 101aaf058; end: 101aaf063;  */

void FUN_101aaf058(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101aaf060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 101aaf064; end: 101aaf0db;  */

void FUN_101aaf064(undefined8 param_1)

{
  if (lRam0000000113483b60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e66e9bc);
  return;
}



/* Entry: 101aaf0dc; end: 101aaf147;  */

void FUN_101aaf0dc(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined1 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 101aaf148; end: 101aaf167;  */

void FUN_101aaf148(void)

{
  func_0x000107c61168(&PTR_PTR_112df7000);
  return;
}



/* Entry: 101aaf168; end: 101aaf24b;  */

long * FUN_101aaf168(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    uVar5 = 0;
    func_0x000103c5f890(0);
    plVar6 = param_2;
    func_0x000107c614c4(param_2,uVar5);
    bVar4 = (int)plVar6 != 1;
    if (bVar4) {
      lVar7 = *param_2;
      lVar1 = param_2[1];
      func_0x00010006c00c(lVar7,lVar1);
      *param_1 = lVar7;
      param_1[1] = lVar1;
    }
    else {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
    }
    func_0x000107c6159c(param_1,uVar5,!bVar4);
    iVar2 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)iVar2) = *(undefined8 *)((long)param_2 + (long)iVar2);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101aaf24c; end: 101aaf2ab;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101aaf24c(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  
  uVar2 = 0;
  func_0x000103c5f890(0);
  puVar3 = param_1;
  func_0x000107c614c4(param_1,uVar2);
  if ((int)puVar3 == 1) {
    lVar4 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000101aaf298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1,lVar4);
    return;
  }
  uVar1 = *param_1;
  uVar5 = (uint)(param_1[1] >> 0x3e);
  if (uVar5 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101aaf2ac; end: 101aaf437;  */

undefined8 * FUN_101aaf2ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar5 = 0;
  func_0x000103c5f890(0);
  puVar6 = param_2;
  func_0x000107c614c4(param_2,uVar5);
  bVar4 = (int)puVar6 != 1;
  if (bVar4) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    func_0x00010006c00c(uVar1,uVar2);
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  else {
    lVar7 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(param_1,param_2,lVar7);
  }
  func_0x000107c6159c(param_1,uVar5,!bVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  return param_1;
}



/* Entry: 101aaf438; end: 101aaf473;  */

undefined8 FUN_101aaf438(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101aaf474; end: 101aaf5e3;  */

long FUN_101aaf474(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  func_0x000103c5f890();
  lVar3 = param_2;
  func_0x000107c614c4(param_2,lVar2);
  if ((int)lVar3 == 1) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    func_0x000107c6159c(param_1,lVar2,1);
  }
  else {
    func_0x000107c610b4(param_1,param_2,*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  return param_1;
}



/* Entry: 101aaf5e4; end: 101aaf5fb;  */

void FUN_101aaf5e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101aaf5fc; end: 101aaf76f;  */

void FUN_101aaf5fc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000103c5f890();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d9c66b8;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 101aaf770; end: 101aaf7a3;  */

void FUN_101aaf770(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101aadecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101aaf7a4; end: 101aaf95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101aaf7a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = unaff_x20 + _DAT_112df70f8;
  if (*(char *)(lVar1 + 8) == '\x01') {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  uVar9 = *(undefined8 *)(lVar1 + 0x20);
  lVar2 = *(long *)(lVar1 + 0x28);
  uVar10 = *(undefined8 *)(lVar1 + 0x30);
  lVar3 = *(long *)(lVar1 + 0x38);
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
  }
  uVar11 = *(undefined8 *)(lVar1 + 0x50);
  lVar1 = *(long *)(lVar1 + 0x58);
  func_0x000107c5f9dc(uVar8,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    func_0x000107c5fadc(uVar9,lVar2);
  }
  if (lVar3 == 0) {
    uVar10 = 0;
  }
  else {
    func_0x000107c5fadc(uVar10,lVar3);
  }
  if (lVar1 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c5fadc(uVar11,lVar1);
  }
  puVar5 = PTR_PTR_1126de908;
  func_0x000107c610f8(PTR_PTR_1126de908);
  func_0x000107c48424();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  return puVar5;
}



/* Entry: 101aaf960; end: 101aaf993; -[PlatformLegacyGRPCCallOptionsBuilder build] */

void FUN_101aaf960(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101aaf7a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101aaf994; end: 101aaf9f3; -[PlatformLegacyGRPCCallOptionsBuilder init] */

void FUN_101aaf994(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LegacyGRPCServiceImplementation.CallOptionsBuilder",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101aaf9c0);
  (*pcVar1)();
}



/* Entry: 101aaf9f4; end: 101aafa47; -[PlatformLegacyGRPCCallOptionsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101aafa20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101aafa30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101aafa24) */
/* WARNING: Removing unreachable block (ram,0x000101aafa34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101aaf9f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + _DAT_112df70f8 + 0x10));
  return;
}



/* Entry: 101aafa48; end: 101aafa67;  */

void FUN_101aafa48(void)

{
  func_0x000107c61168(&PTR_PTR_1127f2e90);
  return;
}



/* Entry: 101aafa68; end: 101aafa87;  */

void FUN_101aafa68(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101aafa88; end: 101aafb23;  */

undefined8 * FUN_101aafa88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101aafa68(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101aafb24; end: 101aafb67;  */

undefined8 * FUN_101aafb24(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000101aafa80(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 101aafb68; end: 101aafc87;  */

int FUN_101aafb68(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101aafc88; end: 101aafcb3;  */

long FUN_101aafc88(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101aafcb4; end: 101aafcbb;  */

void FUN_101aafcb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 101aafcbc; end: 101aafd87;  */

undefined8 * FUN_101aafcbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101aafd88; end: 101aaff2b;  */

int FUN_101aafd88(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 101aaff2c; end: 101ab0133;  */

undefined * FUN_101aaff2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar3 = *unaff_x20;
  func_0x000107c5fadc(uVar3,unaff_x20[1]);
  puVar2 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  if (*(char *)(unaff_x20 + 3) != '\x01') {
    func_0x000107c57f3c(puVar1);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  func_0x000107c53310(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (unaff_x20[5] != 0) {
    uVar3 = unaff_x20[4];
    func_0x000107c5fadc(uVar3);
    puVar2 = puVar1;
    func_0x000107c5a2ec(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c59d5c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (unaff_x20[8] != 0) {
    uVar3 = unaff_x20[7];
    func_0x000107c5fadc(uVar3);
    puVar2 = puVar1;
    func_0x000107c57df8(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c5343c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (unaff_x20[10] != 0) {
    uVar3 = unaff_x20[9];
    func_0x000107c5fadc(uVar3);
    puVar2 = puVar1;
    func_0x000107c58fa0(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c591bc(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (*(char *)(unaff_x20 + 0xd) != '\x01') {
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    puVar4 = puVar1;
    func_0x000107c56340(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  return puVar1;
}



/* Entry: 101ab0134; end: 101ab014f;  */

void FUN_101ab0134(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ab0150,0,0);
  return;
}



/* Entry: 101ab0150; end: 101ab038b;  */

void FUN_101ab0150(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x10);
  *(long *)(unaff_x22 + 0xb0) = lVar9;
  if (lVar9 == 0) {
    FUN_101ab0a70();
    func_0x000107c613f8(&UNK_11043b5a0,param_1,0,0);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101ab0288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x60) = lVar9;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xa0);
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlFTu_11034fff0
                                     + 4);
    func_0x000107c61174(lVar9);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    uVar5 = 0x112df7210;
    func_0x0001000285a8(0x112df7210,&UNK_10d9c6918);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101ab038c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss31withCheckedThrowingContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5Error_pGXEtYaKlF_11034ffe8
    )(*(undefined8 *)(unaff_x22 + 0x98),0,0,0x293a5f28646e6573,0xe800000000000000,FUN_101ab0ab0,
      unaff_x22 + 0x50,uVar5);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61174(lVar9);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x70;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101ab03e8;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  lVar3 = 0x112df7220;
  func_0x0001000285a8(0x112df7220,&UNK_10d9c6948);
  lVar10 = *(long *)(lVar3 + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  uVar5 = 0x112df7210;
  func_0x0001000285a8(0x112df7210,&UNK_10d9c6918);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fcac(uVar4,lVar2,0x293a5f28646e6573,0xe800000000000000,uVar5,uVar6,
                      PTR___ss5ErrorWS_11034ee10);
  FUN_101ab04c4(uVar4,lVar9,uVar8);
  (**(code **)(lVar10 + 8))(uVar4,lVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101ab038c; end: 101ab03e7;  */

void FUN_101ab038c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ab045c;
  }
  else {
    *(long *)(lVar2 + 0xc0) = unaff_x20;
    pcVar1 = (code *)0x101ab0490;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ab03e8; end: 101ab045b;  */

void FUN_101ab03e8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    FUN_10176f65c(lVar2 + 0x70,*(undefined8 *)(lVar2 + 0x98));
    pcVar1 = FUN_101ab045c;
  }
  else {
    func_0x000107c61654();
    *(long *)(lVar2 + 0xc0) = lVar3;
    pcVar1 = (code *)0x101ab0490;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ab045c; end: 101ab04c3;  */

void FUN_101ab045c(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x000101ab048c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ab04c4; end: 101ab05f3;  */

/* WARNING: Removing unreachable block (ram,0x000101ab0514) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab04c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lStack_60;
  long lStack_58;
  
  plVar7 = &lStack_60;
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x0001000a8868(param_3,uVar8);
  uVar2 = 0;
  func_0x000104580400(0,uVar8,uVar3,param_3);
  uVar3 = uVar2;
  func_0x000107c5ee20();
  func_0x00010006c090(uVar2,uVar8);
  lVar4 = 0;
  FUN_101ab0948();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112df71c8;
  lVar6 = 0x112df7220;
  func_0x0001000285a8(0x112df7220,&UNK_10d9c6948);
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))(lVar5 + lVar1,param_1,lVar6);
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c51d94(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(plVar7);
  return;
}


