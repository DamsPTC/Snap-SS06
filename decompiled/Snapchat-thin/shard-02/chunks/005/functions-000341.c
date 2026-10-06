/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101dfbff0; end: 101dfc0fb;  */

void FUN_101dfbff0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined1 uStack_d0;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000d224c(unaff_x22 + 0x48);
  uVar2 = *(ulong *)(unaff_x22 + 0x48);
  lVar6 = *(long *)(unaff_x22 + 0x50);
  uVar1 = uVar2;
  func_0x000107c614f0();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  (**(code **)(*(long *)(lVar6 + 8) + 0x18))();
  func_0x000107c615e8(uVar2);
  if ((uVar1 & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    (**(code **)(*(long *)(unaff_x22 + 0xb8) + 8))
              (*(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c615e8(uVar7);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar6 = *(long *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    func_0x000107c4c4d8(*(undefined8 *)(unaff_x22 + 0x108));
    func_0x000107c615e8(uVar7);
    (**(code **)(lVar6 + 8))(uVar4,uVar8);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78(*(undefined8 *)(unaff_x22 + 0x108));
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar6 = *(long *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c615e8(uVar7);
  (**(code **)(lVar6 + 8))(uVar4,uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = 0;
  uVar4 = 0;
  func_0x000107c613f8(&UNK_1107a6f08);
  *puVar3 = uVar9;
  func_0x000107c615e8(uVar8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  uStack_d0 = (undefined1)lVar6;
  *(undefined1 *)(unaff_x22 + 0xa0) = uStack_d0;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  *(undefined8 **)(unaff_x22 + 0x48) = puVar3;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc320,0,0);
  return;
}



/* Entry: 101dfc0fc; end: 101dfc19f;  */

void FUN_101dfc0fc(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined1 uStack_90;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar7 = *(long *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
  func_0x000107c615e8(uVar4);
  (**(code **)(lVar7 + 8))(uVar5,uVar9);
  func_0x000107c615e8(uVar8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = 0;
  uVar5 = 0;
  func_0x000107c613f8(&UNK_1107a6f08);
  *puVar3 = uVar9;
  func_0x000107c615e8(uVar8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  uStack_90 = (undefined1)lVar7;
  *(undefined1 *)(unaff_x22 + 0xa0) = uStack_90;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  *(undefined8 **)(unaff_x22 + 0x48) = puVar3;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc320,0,0);
  return;
}



/* Entry: 101dfc1a0; end: 101dfc207;  */

void FUN_101dfc1a0(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined1 uStack_50;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = 0;
  uVar5 = 0;
  func_0x000107c613f8(&UNK_1107a6f08);
  *puVar3 = uVar8;
  func_0x000107c615e8(uVar7);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  uStack_50 = (undefined1)lVar6;
  *(undefined1 *)(unaff_x22 + 0xa0) = uStack_50;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  *(undefined8 **)(unaff_x22 + 0x48) = puVar3;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc320,0,0);
  return;
}



/* Entry: 101dfc208; end: 101dfc29b;  */

void FUN_101dfc208(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined1 uStack_30;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = 0;
  uVar5 = 0;
  func_0x000107c613f8(&UNK_1107a6f08);
  *puVar3 = uVar8;
  func_0x000107c615e8(uVar7);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c60e78();
  uStack_30 = (undefined1)lVar6;
  *(undefined1 *)(unaff_x22 + 0xa0) = uStack_30;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x78) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  *(undefined8 **)(unaff_x22 + 0x48) = puVar3;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc320,0,0);
  return;
}



/* Entry: 101dfc29c; end: 101dfc31f;  */

void FUN_101dfc29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xa0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc320,0,0);
  return;
}



/* Entry: 101dfc320; end: 101dfc66f;  */

void FUN_101dfc320(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x22;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  
  lVar6 = *(long *)(unaff_x22 + 0x50);
  lVar14 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar16 = -lVar14;
  uVar23 = 0xffffffffffffffff;
  if (uVar16 < 0x40) {
    uVar23 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar23 = uVar23 & *(ulong *)(lVar6 + 0x40);
  func_0x000107c61434();
  lVar21 = 0;
  while( true ) {
    for (; uVar23 != 0; uVar23 = uVar23 - 1 & uVar23) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar3 = *(undefined1 *)(unaff_x22 + 0xa0);
      uVar16 = *(ulong *)(unaff_x22 + 0x78);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar12 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = lVar21 << 9 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 3;
      uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x30) + uVar12);
      uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar12);
      lVar7 = 0;
      func_0x000107c5fd0c();
      lVar20 = *(long *)(lVar7 + -8);
      (**(code **)(lVar20 + 0x38))(uVar22,1,1,lVar7);
      puVar8 = &UNK_110488958;
      func_0x000107c613fc(&UNK_110488958,0x60,7);
      *(long *)(puVar8 + 0x10) = 0;
      *(undefined8 *)(puVar8 + 0x18) = 0;
      *(undefined8 *)(puVar8 + 0x20) = uVar18;
      *(undefined8 *)(puVar8 + 0x28) = uVar2;
      *(undefined8 *)(puVar8 + 0x30) = uVar19;
      *(undefined8 *)(puVar8 + 0x38) = uVar1;
      *(ulong *)(puVar8 + 0x40) = uVar16;
      puVar8[0x48] = uVar3;
      *(undefined8 *)(puVar8 + 0x50) = uVar15;
      *(undefined8 *)(puVar8 + 0x58) = uVar13;
      func_0x0001000abe04(uVar22,uVar9);
      (**(code **)(lVar20 + 0x30))(uVar9,1,lVar7);
      func_0x000107c61434(uVar13);
      func_0x000107c6157c(uVar18);
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar19);
      func_0x000107c61174(uVar1);
      func_0x000107c61174(uVar16);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
      if ((int)uVar9 == 1) {
        FUN_101dfed18(uVar19,0x112d453c8,&UNK_10d90ac60);
        uVar16 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar20 + 8))(uVar19,lVar7);
        uVar16 = uVar16 & 0xff | 0x3100;
      }
      lVar7 = *(long *)(puVar8 + 0x10);
      if (lVar7 == 0) {
        lVar20 = 0;
        lVar17 = 0;
      }
      else {
        lVar17 = *(long *)(puVar8 + 0x18);
        lVar20 = lVar7;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar7);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar7);
      }
      uVar19 = **(undefined8 **)(unaff_x22 + 0x48);
      func_0x000107c6157c(puVar8);
      if (lVar17 == 0 && lVar20 == 0) {
        puVar11 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(long *)(unaff_x22 + 0x20) = lVar20;
        *(long *)(unaff_x22 + 0x28) = lVar17;
        puVar11 = (undefined8 *)(unaff_x22 + 0x10);
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
      *(undefined8 *)(unaff_x22 + 0x30) = 1;
      *(undefined8 **)(unaff_x22 + 0x38) = puVar11;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar19;
      func_0x000107c615bc(uVar16,unaff_x22 + 0x30,PTR___sytN_11034f1b0 + 8,&UNK_10da17fb8,puVar8);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(uVar16);
      FUN_101dfed18(uVar18,0x112d453c8,&UNK_10d90ac60);
    }
    bVar5 = SCARRY8(lVar21,1);
    lVar21 = lVar21 + 1;
    if (bVar5) break;
    if ((long)(0x3fU - lVar14 >> 6) <= lVar21) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
      plVar10 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x90) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_101dfc670;
                    /* WARNING: Could not recover jumptable at 0x000101dfc668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      FUN_101a2c0b4(0,0);
      return;
    }
    uVar23 = ((ulong *)(lVar6 + 0x40))[lVar21];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101dfc670);
  (*pcVar4)();
}



/* Entry: 101dfc670; end: 101dfc6e7;  */

void FUN_101dfc670(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc6e8,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x80);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101dfc6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 101dfc6e8; end: 101dfc77b;  */

void FUN_101dfc6e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = **(undefined8 **)(unaff_x22 + 0x48);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c5fd94(uVar4,PTR___sytN_11034f1b0 + 8,uVar3,PTR___ss5ErrorWS_11034ee10);
  func_0x000107c61654();
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101dfc778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101dfc77c; end: 101dfc817;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */
/* WARNING: Removing unreachable block (ram,0x000101dfa858) */
/* WARNING: Removing unreachable block (ram,0x000101dfa87c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb0c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb14) */

code * FUN_101dfc77c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  code **ppcVar5;
  int iVar6;
  long *plVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE_05;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong in_x3;
  ulong in_x4;
  ulong in_x5;
  ulong in_x6;
  ulong in_x7;
  long lVar18;
  undefined8 *puVar19;
  code *unaff_x19;
  code *pcVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  ulong unaff_x21;
  undefined8 *puVar24;
  code *UNRECOVERED_JUMPTABLE_03;
  long *plVar25;
  ulong unaff_x22;
  code *pcVar26;
  ulong uVar27;
  int *piVar28;
  code *pcVar29;
  code *unaff_x23;
  ulong uVar30;
  long lVar31;
  code *unaff_x24;
  code *pcVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  code *unaff_x25;
  code *UNRECOVERED_JUMPTABLE_04;
  undefined8 *puVar35;
  code *unaff_x26;
  ulong uVar36;
  code *unaff_x27;
  code *unaff_x28;
  ulong unaff_x29;
  undefined1 in_stack_00000000;
  ulong in_stack_00000008;
  ulong in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 auStack_250 [8];
  long lStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  code *pcStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  long lStack_210;
  code *pcStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  int *piStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code *pcStack_160;
  code *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  code *pcStack_120;
  code *pcStack_118;
  ulong uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  ulong uStack_a0;
  code *pcStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_80;
  ulong uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  ulong uStack_60;
  ulong uStack_10;
  
  uVar36 = in_stack_00000010;
  uStack_10 = unaff_x29 | 0x1000000000000000;
  puVar8 = (ulong *)0xc0;
  func_0x000107c615b8();
  *(ulong **)(unaff_x22 + 0x10) = puVar8;
  *puVar8 = unaff_x22;
  puVar8[1] = (ulong)FUN_101dfc818;
  in_stack_00000010 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8[0xb] = uVar36;
  puVar8[0xc] = in_x3;
  puVar8[9] = in_x7;
  puVar8[10] = in_stack_00000008;
  *(undefined1 *)(puVar8 + 0x16) = in_stack_00000000;
  puVar8[7] = in_x5;
  puVar8[8] = in_x6;
  puVar8[6] = in_x4;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfc8c8;
    lVar18 = 0;
    lVar17 = 0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_10 = (ulong)&stack0x00000010 | 0x1000000000000000;
  uStack_60 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd64();
  uVar36 = puVar8[0xb];
  UNRECOVERED_JUMPTABLE_04 = (code *)(uVar36 >> 0x3e);
  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
    if (*(long *)((uVar36 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_101dfcc68;
LAB_101dfc920:
    if ((uVar36 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar36 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccf8);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(puVar8[0xb] + 0x20);
      func_0x000107c61174();
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x00010121c1ac(0,puVar8[0xb]);
    }
    puVar8[0xd] = (ulong)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4abb4();
    if ((int)UNRECOVERED_JUMPTABLE_03 != 1) {
LAB_101dfc99c:
      FUN_101df6cf4();
      pcVar10 = (code *)&UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_03,0,0);
      *(long *)(UNRECOVERED_JUMPTABLE_03 + 8) = 0;
      *(long *)UNRECOVERED_JUMPTABLE_03 = 0x19;
      UNRECOVERED_JUMPTABLE_03[0x10] = (code)0x80;
      func_0x000107c61654();
      func_0x000107c61170(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE_03 = pcVar10;
      goto LAB_101dfcca4;
    }
    pcVar29 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4c930();
    func_0x000107c61180();
    puVar8[0xe] = (ulong)pcVar29;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    if (pcVar29 == (code *)0x0) goto LAB_101dfc99c;
    UNRECOVERED_JUMPTABLE_03 = (code *)puVar8[10];
    FUN_101dfd550(UNRECOVERED_JUMPTABLE_03,puVar8[0xb],puVar8[9],(char)puVar8[0x16]);
    puVar8[0xf] = (ulong)UNRECOVERED_JUMPTABLE_03;
    pcStack_88 = UNRECOVERED_JUMPTABLE_03;
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
      puVar24 = *(undefined8 **)((uVar36 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar24 = (undefined8 *)(uVar36 & 0xffffffffffffff8);
      if ((uVar36 & 0x8000000000000000) != 0) {
        puVar24 = (undefined8 *)puVar8[0xb];
      }
      func_0x000107c60480();
    }
    pcVar10 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar24 != (undefined8 *)0x0) {
      pcStack_70 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101df6b84(0,(ulong)puVar24 & ((long)puVar24 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfcd00);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      puVar35 = (undefined8 *)0x0;
      uStack_78 = uVar36 & 0xffffffffffffff8;
      lStack_80 = puVar8[0xb] + 0x20;
      pcVar32 = unaff_x24;
      do {
        pcVar10 = pcStack_70;
        if ((uVar36 & 0xc000000000000001) == 0) {
          if (*(long *)(uStack_78 + 0x10) <= (long)puVar35) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccfc);
            (*UNRECOVERED_JUMPTABLE_04)();
          }
          puVar19 = *(undefined8 **)(lStack_80 + (long)puVar35 * 8);
          func_0x000107c61174();
        }
        else {
          puVar19 = puVar35;
          func_0x00010121c1ac(puVar35,puVar8[0xb]);
        }
        puVar9 = puVar19;
        func_0x000107c4c930();
        func_0x000107c61180();
        puVar23 = puVar19;
        func_0x000107c4abb4();
        if ((int)puVar23 != 1 || puVar9 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar23,0,0);
          puVar23[1] = 0;
          *puVar23 = 0x19;
          *(undefined1 *)(puVar23 + 2) = 0x80;
          func_0x000107c61654();
          func_0x000107c61170(puVar9);
          func_0x000107c61170(pcVar29);
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(pcStack_88);
          func_0x000107c61170(puVar19);
          func_0x000107c61574(pcVar10);
          UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_04;
          unaff_x23 = pcVar29;
          unaff_x24 = pcVar32;
          goto LAB_101dfcca4;
        }
        func_0x000107c61170(puVar19);
        pcVar32 = *(code **)(pcVar10 + 0x10);
        pcStack_70 = pcVar10;
        if ((code *)(*(ulong *)(pcVar10 + 0x18) >> 1) <= pcVar32) {
          func_0x000101df6b84(1 < *(ulong *)(pcVar10 + 0x18),pcVar32 + 1,1);
        }
        puVar35 = (undefined8 *)((long)puVar35 + 1);
        *(code **)(pcStack_70 + 0x10) = pcVar32 + 1;
        *(undefined8 **)(pcStack_70 + (long)pcVar32 * 8 + 0x20) = puVar9;
        pcVar10 = pcStack_70;
      } while (puVar24 != puVar35);
    }
    pcVar32 = pcStack_88;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    UNRECOVERED_JUMPTABLE_04 = pcStack_88;
    FUN_101dfead0(pcStack_88,pcVar10);
    func_0x000107c6142c(pcVar10);
    if (((ulong)UNRECOVERED_JUMPTABLE_04 & 1) != 0) {
      func_0x000107c61170(pcStack_88);
      func_0x000107c61170(pcVar29);
      func_0x000107c61170(puVar8[0xd]);
      UNRECOVERED_JUMPTABLE_05 = (code *)puVar8[1];
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_60) goto LAB_101dfccc4;
      goto LAB_101dfcd00;
    }
    UNRECOVERED_JUMPTABLE_05 = (code *)0x110;
    UNRECOVERED_JUMPTABLE = pcStack_88;
    func_0x000107c61174();
    func_0x000107c615b8();
    puVar8[0x10] = (ulong)UNRECOVERED_JUMPTABLE_05;
    *(ulong **)UNRECOVERED_JUMPTABLE_05 = puVar8;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 8) = FUN_101dfcd04;
    pcVar10 = (code *)puVar8[0xc];
    uVar36 = puVar8[6];
    uVar27 = puVar8[7];
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_60) goto LAB_101dfcd00;
    uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
    puVar4 = &stack0xffffffffffffffe0;
    ppcVar5 = (code **)&stack0xffffffffffffffe0;
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa0) = UNRECOVERED_JUMPTABLE;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8) = pcVar10;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x90) = uVar27;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x98) = pcVar29;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x88) = uVar36;
    lVar18 = 0;
    func_0x000107c5ede0();
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb0) = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb8) = lVar18;
    uVar36 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0xc0) = uVar36;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE_04 = FUN_101dfa808;
      lVar18 = 0;
      lVar17 = 0;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
    iVar6 = (int)*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
    func_0x000107c5d0f0();
    if (*(char *)(lVar17 + 0x40) == '\x01' && iVar6 == 1) {
      pcVar26 = (code *)0x150;
      func_0x000107c615b8();
      *(code **)(UNRECOVERED_JUMPTABLE_05 + 200) = pcVar26;
      *(code **)pcVar26 = UNRECOVERED_JUMPTABLE_05;
      *(code **)(pcVar26 + 8) = FUN_101dfa954;
      lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa0);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x90);
      lVar16 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
      UNRECOVERED_JUMPTABLE_03 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x88);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) goto LAB_101dfa950;
      pcVar29 = FUN_101dfa808;
      puVar8 = (ulong *)((ulong)&uStack_10 & 0xefffffffffffffff);
code_r0x000101dfb414:
      ppcVar5 = (code **)(puVar4 + -0x20);
      *(ulong *)(puVar4 + -0x10) = (ulong)puVar8 | 0x1000000000000000;
      *(code **)(puVar4 + -8) = pcVar29;
      *(code **)(puVar4 + -0x18) = pcVar26;
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(long *)(pcVar26 + 0xa0) = lVar17;
      *(code **)(pcVar26 + 0xa8) = UNRECOVERED_JUMPTABLE_04;
      *(code **)(pcVar26 + 0x90) = UNRECOVERED_JUMPTABLE;
      *(long *)(pcVar26 + 0x98) = lVar16;
      *(code **)(pcVar26 + 0x88) = UNRECOVERED_JUMPTABLE_03;
      lVar18 = 0;
      func_0x000107c5ede0();
      *(long *)(pcVar26 + 0xb0) = lVar18;
      lVar18 = *(long *)(lVar18 + -8);
      *(long *)(pcVar26 + 0xb8) = lVar18;
      uVar36 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(pcVar26 + 0xc0) = uVar36;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x20)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb4a8;
        lVar18 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar4 + -0x40) = unaff_x21;
      *(ulong *)(puVar4 + -0x30) = (ulong)(puVar4 + -0x10) | 0x1000000000000000;
      *(code **)(puVar4 + -0x28) = FUN_101dfb4a8;
      *(code **)(puVar4 + -0x38) = pcVar26;
      *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c5fd64();
      UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar26 + 0xa8) + 0x38);
      UNRECOVERED_JUMPTABLE = (code *)0x70;
      func_0x000107c615b8();
      *(code **)(pcVar26 + 200) = UNRECOVERED_JUMPTABLE;
      *(code **)UNRECOVERED_JUMPTABLE = pcVar26;
      *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101dfb57c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x48)) {
        UNRECOVERED_JUMPTABLE_05 = pcVar26 + 0x10;
        UNRECOVERED_JUMPTABLE_03 = *(code **)(puVar4 + -0x28);
        uVar36 = *(ulong *)(puVar4 + -0x30) & 0xefffffffffffffff;
        pcVar26 = UNRECOVERED_JUMPTABLE;
        goto LAB_104875f04;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar4 + -0x60) = (ulong)(puVar4 + -0x30) | 0x1000000000000000;
      *(code **)(puVar4 + -0x58) = FUN_101dfb57c;
      *(code **)(puVar4 + -0x68) = pcVar26;
      *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *(long *)pcVar26;
      *(long *)(puVar4 + -0x68) = lVar18;
      plVar25 = *(long **)pcVar26;
      func_0x000107c615c0(*(undefined8 *)(lVar18 + 200));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x70)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb5f0;
        lVar18 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(code **)(puVar4 + -0xa8) = unaff_x24;
      *(code **)(puVar4 + -0xa0) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x98) = 0;
      *(code **)(puVar4 + -0x90) = unaff_x19;
      *(ulong *)(puVar4 + -0x80) = (ulong)(puVar4 + -0x60) | 0x1000000000000000;
      *(code **)(puVar4 + -0x78) = FUN_101dfb5f0;
      *(long **)(puVar4 + -0x88) = plVar25;
      *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = plVar25[5];
      lVar17 = plVar25[6];
      plVar7 = plVar25 + 2;
      func_0x0001000a8868(plVar7,lVar18);
      piVar28 = *(int **)(lVar17 + 0x10);
      iVar6 = *piVar28;
      puVar24 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      plVar25[0x1a] = (long)puVar24;
      *puVar24 = plVar25;
      puVar24[1] = FUN_101dfb6a4;
      UNRECOVERED_JUMPTABLE_04 = (code *)plVar25[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0xb0)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar6 + (long)piVar28))
                  (UNRECOVERED_JUMPTABLE_04,plVar25[0x12],plVar25[0x13],1,lVar18,lVar17);
        return UNRECOVERED_JUMPTABLE_04;
      }
      func_0x000107c60e78();
      ppcVar5 = (code **)(puVar4 + -0xd0);
      *(ulong *)(puVar4 + -0xc0) = (ulong)(puVar4 + -0x80) | 0x1000000000000000;
      *(code **)(puVar4 + -0xb8) = FUN_101dfb6a4;
      *(long **)(puVar4 + -200) = plVar25;
      *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *plVar25;
      *(long *)(puVar4 + -200) = lVar16;
      plVar25 = (long *)*plVar25;
      *(undefined8 **)(lVar16 + 0xd8) = puVar24;
      *(long **)(lVar16 + 0xe0) = plVar7;
      func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xd0));
      if (plVar7 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0xd0))
        goto LAB_101dfb744;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb748;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0xd0)) {
LAB_101dfb744:
          func_0x000107c60e78();
          *(long *)(puVar4 + -0xf8) = lVar17;
          *(long *)(puVar4 + -0xf0) = lVar18;
          *(ulong *)(puVar4 + -0xe0) = (ulong)(puVar4 + -0xc0) | 0x1000000000000000;
          *(code **)(puVar4 + -0xd8) = FUN_101dfb748;
          *(long **)(puVar4 + -0xe8) = plVar25;
          *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar18 = plVar25[0x15];
          func_0x0001000834e4(plVar25 + 2);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar18 + 0x18);
          lVar18 = 0x112d51300;
          puVar22 = &UNK_10d917f90;
          func_0x0001000285a8();
          UNRECOVERED_JUMPTABLE_05 = (code *)(plVar25 + 0xc);
          *(long *)UNRECOVERED_JUMPTABLE_05 = lVar18;
          pcVar10 = (code *)0xa0;
          func_0x000107c615b8();
          plVar25[0x1d] = (long)pcVar10;
          UNRECOVERED_JUMPTABLE_03 = pcVar10;
          func_0x000100faa6a0();
          plVar25[0x1e] = (long)UNRECOVERED_JUMPTABLE_03;
          *(long **)pcVar10 = plVar25;
          *(code **)(pcVar10 + 8) = FUN_101dfb814;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x100)) {
            UNRECOVERED_JUMPTABLE = (code *)(plVar25 + 0xb);
            pcVar26 = (code *)(plVar25 + 0xd);
            pcVar29 = *(code **)(puVar4 + -0xd8);
            pcVar32 = *(code **)(puVar4 + -0xf0);
            uVar36 = *(ulong *)(puVar4 + -0xe0) & 0xefffffffffffffff;
            goto LAB_104876574;
          }
          func_0x000107c60e78();
          *(ulong *)(puVar4 + -0x110) = (ulong)(puVar4 + -0xe0) | 0x1000000000000000;
          *(code **)(puVar4 + -0x108) = FUN_101dfb814;
          *(long **)(puVar4 + -0x118) = plVar25;
          *(undefined8 *)(puVar4 + -0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar18 = *plVar25;
          *(long *)(puVar4 + -0x118) = lVar18;
          lVar17 = *plVar25;
          *(code **)(lVar18 + 0xf8) = UNRECOVERED_JUMPTABLE_04;
          func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xe8));
          if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0x120))
            goto LAB_101dfb8b0;
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfb8b4;
          }
          else {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0x120)) {
LAB_101dfb8b0:
              func_0x000107c60e78();
              *(code **)(puVar4 + -0x178) = unaff_x28;
              *(code **)(puVar4 + -0x170) = unaff_x27;
              *(code **)(puVar4 + -0x168) = unaff_x26;
              *(code **)(puVar4 + -0x160) = unaff_x25;
              *(long *)(puVar4 + -0x158) = (long)iVar6;
              *(int **)(puVar4 + -0x150) = piVar28;
              *(code **)(puVar4 + -0x148) = pcVar10;
              *(code **)(puVar4 + -0x140) = UNRECOVERED_JUMPTABLE_05;
              *(ulong *)(puVar4 + -0x130) = (ulong)(puVar4 + -0x110) | 0x1000000000000000;
              *(code **)(puVar4 + -0x128) = FUN_101dfb8b4;
              *(long *)(puVar4 + -0x138) = lVar17;
              *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              *(long *)(lVar17 + 0x70) = 0;
              puVar19 = *(undefined8 **)(lVar17 + 0x58);
              *(undefined8 **)(lVar17 + 0x100) = puVar19;
              puVar24 = puVar19;
              func_0x000107c40984();
              func_0x000107c61180();
              *(undefined8 **)(lVar17 + 0x108) = puVar24;
              lVar18 = *(long *)(lVar17 + 0x70);
              func_0x000107c61174();
              puVar35 = puVar24;
              func_0x000107c4403c();
              func_0x000107c61180();
              if (puVar35 == (undefined8 *)0x0) {
                if (lVar18 != 0) goto LAB_101dfb944;
                puVar23 = *(undefined8 **)(lVar17 + 0xd8);
                uVar21 = *(undefined8 *)(lVar17 + 0xc0);
                puVar35 = puVar24;
                func_0x000107c4407c(puVar24);
                func_0x000107c61180();
                puVar9 = puVar35;
                func_0x000107c5faec();
                func_0x000107c61170(puVar35);
                puVar11 = puVar22;
                func_0x000107c5ed80(uVar21,puVar9);
                func_0x000107c6142c(puVar22);
                puVar35 = puVar23;
                func_0x000107c614f0();
                func_0x000107c4407c();
                func_0x000107c61180();
                lVar18 = *(long *)(lVar17 + 0xa0);
                if (puVar23 == (undefined8 *)0x0) {
                  func_0x000107c4a8c4();
                  func_0x000107c61180();
                  if (lVar18 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar31 = *(long *)(lVar17 + 0xa0);
                  lVar16 = lVar18;
                  func_0x000107c5ee30();
                  *(undefined **)(puVar4 + -400) = puVar11;
                  func_0x000107c61170(lVar18);
                  func_0x000107c4a804();
                  func_0x000107c61180();
                  if (lVar31 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar18 = lVar31;
                  func_0x000107c5ee30();
                  puVar22 = puVar11;
                  func_0x000107c61170(lVar31);
                  FUN_101dffdc4();
                  *(long *)(puVar4 + -0x1a0) = lVar18;
                  *(undefined **)(puVar4 + -0x198) = puVar11;
                  if ((ulong)puVar22 >> 0x3c < 0xf) {
                    func_0x0001000d224c(lVar17 + 0x38);
                    uVar36 = *(ulong *)(lVar17 + 0x38);
                    lVar31 = *(long *)(lVar17 + 0x40);
                    uVar27 = uVar36;
                    func_0x000107c614f0();
                    *(ulong *)(lVar17 + 0x78) = uVar36;
                    (**(code **)(*(long *)(lVar31 + 8) + 0x28))();
                    func_0x000107c615e8(uVar36);
                    *(undefined8 **)(puVar4 + -0x1b0) = puVar35;
                    *(undefined **)(puVar4 + -0x1a8) = puVar22;
                    func_0x000107c5ee20(puVar35,puVar22);
                    *(long *)(puVar4 + -0x1b8) = lVar16;
                    func_0x000107c5ee20(lVar16,*(undefined8 *)(puVar4 + -400));
                    uVar21 = *(undefined8 *)(puVar4 + -0x198);
                    func_0x000107c5ee20(lVar18,uVar21);
                    puVar9 = puVar35;
                    if ((uVar27 & 1) == 0) {
                      func_0x000107c51bb8();
                    }
                    else {
                      func_0x000107c51bbc();
                    }
                    func_0x000107c61180();
                    func_0x000107c61170(lVar18);
                    func_0x000107c61170(lVar16);
                    func_0x000107c61170();
                    if (puVar9 != (undefined8 *)0x0) {
                      lVar18 = *(long *)(lVar17 + 0xf8);
                      puVar23 = *(undefined8 **)(lVar17 + 0xc0);
                      puVar35 = puVar9;
                      func_0x000107c5ee30(puVar9);
                      func_0x000107c61170(puVar9);
                      func_0x000107c5ee40(puVar23,1,puVar35,uVar21);
                      if (lVar18 == 0) {
                        func_0x0001000b44c0(*(undefined8 *)(puVar4 + -0x1b0),
                                            *(undefined8 *)(puVar4 + -0x1a8));
                        func_0x00010006c090(puVar35,uVar21);
                        uVar21 = *(undefined8 *)(puVar4 + -0x1b8);
                        func_0x00010006c090(*(undefined8 *)(puVar4 + -0x1a0),
                                            *(undefined8 *)(puVar4 + -0x198));
                        func_0x00010006c090(uVar21,*(undefined8 *)(puVar4 + -400));
                        func_0x0001000d224c(lVar17 + 0x48);
                        uVar36 = *(ulong *)(lVar17 + 0x48);
                        lVar18 = *(long *)(lVar17 + 0x50);
                        uVar27 = uVar36;
                        func_0x000107c614f0();
                        *(ulong *)(lVar17 + 0x80) = uVar36;
                        (**(code **)(*(long *)(lVar18 + 8) + 0x18))();
                        func_0x000107c615e8(uVar36);
                        if ((uVar27 & 1) == 0) {
                          uVar21 = *(undefined8 *)(lVar17 + 0x100);
                          (**(code **)(*(long *)(lVar17 + 0xb8) + 8))
                                    (*(undefined8 *)(lVar17 + 0xc0),*(undefined8 *)(lVar17 + 0xb0));
                          func_0x000107c615e8(uVar21);
                        }
                        else {
                          uVar21 = *(undefined8 *)(lVar17 + 0x100);
                          lVar18 = *(long *)(lVar17 + 0xb8);
                          uVar3 = *(undefined8 *)(lVar17 + 0xc0);
                          uVar33 = *(undefined8 *)(lVar17 + 0xb0);
                          func_0x000107c4c4d8(*(undefined8 *)(lVar17 + 0x108));
                          func_0x000107c615e8(uVar21);
                          (**(code **)(lVar18 + 8))(uVar3,uVar33);
                        }
                        uVar21 = *(undefined8 *)(lVar17 + 0xc0);
                        func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xd8));
                        func_0x000107c615c0(uVar21);
                        UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar17 + 0x108);
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x180))
                        {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(lVar17 + 8))(UNRECOVERED_JUMPTABLE_04);
                          return UNRECOVERED_JUMPTABLE_04;
                        }
                        goto LAB_101dfbf08;
                      }
                      lVar16 = *(long *)(puVar4 + -0x1b8);
                      FUN_101df6cf4();
                      func_0x000107c613f8(&UNK_1106e3fc0,puVar23,0,0);
                      puVar23[1] = 0;
                      *puVar23 = 0x14;
                      *(undefined1 *)(puVar23 + 2) = 0x80;
                      func_0x000107c61654();
                      func_0x0001000b44c0(*(undefined8 *)(puVar4 + -0x1b0),
                                          *(undefined8 *)(puVar4 + -0x1a8));
                      func_0x00010006c090(puVar35,uVar21);
                      func_0x000107c614ac(lVar18);
                      goto LAB_101dfbd5c;
                    }
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar35,0,0);
                    puVar35[1] = 0;
                    *puVar35 = 10;
                    *(undefined1 *)(puVar35 + 2) = 0x80;
                    func_0x000107c61654();
                    func_0x0001000b44c0(*(undefined8 *)(puVar4 + -0x1b0),
                                        *(undefined8 *)(puVar4 + -0x1a8));
                    uVar21 = *(undefined8 *)(puVar4 + -400);
                    lVar16 = *(long *)(puVar4 + -0x1b8);
                  }
                  else {
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar35,0,0);
                    puVar35[1] = 0;
                    *puVar35 = 10;
                    *(undefined1 *)(puVar35 + 2) = 0x80;
                    func_0x000107c61654();
LAB_101dfbd5c:
                    uVar21 = *(undefined8 *)(puVar4 + -400);
                  }
                  uVar33 = *(undefined8 *)(lVar17 + 0xd8);
                  lVar18 = *(long *)(lVar17 + 0xb8);
                  uVar3 = *(undefined8 *)(lVar17 + 0xc0);
                  uVar34 = *(undefined8 *)(lVar17 + 0xb0);
                  func_0x00010006c090(*(undefined8 *)(puVar4 + -0x1a0),
                                      *(undefined8 *)(puVar4 + -0x198));
                  func_0x00010006c090(lVar16,uVar21);
                  func_0x000107c615e8(puVar24);
                  func_0x000107c615e8(puVar19);
                  (**(code **)(lVar18 + 8))(uVar3,uVar34);
                  goto LAB_101dfb99c;
                }
                puVar24 = puVar23;
                func_0x000107c5faec();
                puVar22 = puVar11;
                func_0x000107c61170(puVar23);
                *(undefined **)(lVar17 + 0x110) = puVar11;
                func_0x000107c4a8c4();
                func_0x000107c61180();
                if (lVar18 == 0) goto LAB_101dfbf0c;
                lVar31 = *(long *)(lVar17 + 0xa0);
                lVar16 = lVar18;
                func_0x000107c5ee30();
                puVar12 = puVar22;
                func_0x000107c61170(lVar18);
                *(long *)(lVar17 + 0x118) = lVar16;
                *(undefined **)(lVar17 + 0x120) = puVar22;
                func_0x000107c4a804();
                func_0x000107c61180();
                if (lVar31 == 0) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
                  (*UNRECOVERED_JUMPTABLE_04)();
                }
                lVar18 = lVar31;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar31);
                *(long *)(lVar17 + 0x128) = lVar18;
                *(undefined **)(lVar17 + 0x130) = puVar12;
                plVar25 = (long *)0xa0;
                func_0x000107c615b8();
                *(long **)(lVar17 + 0x138) = plVar25;
                *plVar25 = lVar17;
                plVar25[1] = (long)FUN_101dfbf1c;
                lVar17 = *(long *)(lVar17 + 0xc0);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x180)) {
                  uVar21 = *(undefined8 *)(puVar4 + -0x148);
                  uVar34 = *(undefined8 *)(puVar4 + -0x140);
                  uVar3 = *(undefined8 *)(puVar4 + -0x158);
                  uVar1 = *(undefined8 *)(puVar4 + -0x150);
                  uVar33 = *(undefined8 *)(puVar4 + -0x168);
                  uVar2 = *(undefined8 *)(puVar4 + -0x160);
                  *(ulong *)(puVar4 + -0x130) =
                       *(ulong *)(puVar4 + -0x130) & 0xefffffffffffffff | 0x1000000000000000;
                  *(undefined8 *)(puVar4 + -0x128) = *(undefined8 *)(puVar4 + -0x128);
                  *(long **)(puVar4 + -0x138) = plVar25;
                  *(undefined8 *)(puVar4 + -0x140) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  plVar25[0xe] = lVar18;
                  plVar25[0xf] = (long)puVar12;
                  plVar25[0xc] = lVar16;
                  plVar25[0xd] = (long)puVar22;
                  plVar25[10] = (long)puVar11;
                  plVar25[0xb] = lVar17;
                  plVar25[9] = (long)puVar24;
                  lVar18 = 0;
                  func_0x000107c5ede0();
                  plVar25[0x10] = lVar18;
                  lVar18 = *(long *)(lVar18 + -8);
                  plVar25[0x11] = lVar18;
                  uVar36 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
                  func_0x000107c615b8();
                  plVar25[0x12] = uVar36;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x140)) {
                    UNRECOVERED_JUMPTABLE_04 = FUN_101dfe3fc;
                    lVar18 = 0;
                    lVar17 = 0;
                    goto _swift_task_switch;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar4 + -0x180) = uVar2;
                  *(undefined8 *)(puVar4 + -0x178) = uVar3;
                  *(undefined8 *)(puVar4 + -0x170) = uVar1;
                  *(undefined8 *)(puVar4 + -0x168) = uVar21;
                  *(undefined8 *)(puVar4 + -0x160) = uVar34;
                  *(ulong *)(puVar4 + -0x150) = (ulong)(puVar4 + -0x130) | 0x1000000000000000;
                  *(code **)(puVar4 + -0x148) = FUN_101dfe3fc;
                  *(long **)(puVar4 + -0x158) = plVar25;
                  *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  puVar22 = (undefined *)plVar25[0xe];
                  lVar18 = plVar25[0xf];
                  uVar36 = plVar25[0xc];
                  lVar17 = plVar25[0xd];
                  lVar16 = plVar25[0xb];
                  func_0x000107c5ed80(plVar25[0x12],plVar25[9],plVar25[10]);
                  func_0x000107c5ee20(uVar36,lVar17);
                  func_0x000107c5ee20(puVar22,lVar18);
                  puVar11 = puVar22;
                  func_0x000107c5ed90();
                  puVar12 = puVar11;
                  func_0x000107c5ed90();
                  uVar27 = uVar36;
                  func_0x000107c3127c(uVar36,puVar22,puVar11,puVar12);
                  func_0x000107c61170(puVar12);
                  func_0x000107c61170(puVar11);
                  func_0x000107c61170(puVar22);
                  func_0x000107c61170(uVar36);
                  if ((uVar27 & 1) == 0) {
                    lVar18 = plVar25[9];
                    lVar17 = plVar25[10];
                    puVar22 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                    func_0x000107c61168();
                    puVar11 = puVar22;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    lVar31 = lVar18;
                    func_0x000107c5fadc(lVar18,lVar17);
                    func_0x000107c43418(puVar11);
                    func_0x000107c61170(lVar31);
                    func_0x000107c61170(puVar11);
                    puVar11 = puVar22;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    func_0x000107c5fadc(lVar18,lVar17);
                    plVar25[6] = 0;
                    puVar12 = puVar11;
                    func_0x000107c3e388();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar18);
                    func_0x000107c61170(puVar11);
                    lVar18 = plVar25[6];
                    if (puVar12 == (undefined *)0x0) {
                      lVar17 = lVar18;
                      func_0x000107c61174(lVar18);
                      func_0x000107c5ed30(lVar18);
                      func_0x000107c61170(lVar17);
                      func_0x000107c61654();
                      func_0x000107c614ac(lVar18);
LAB_101dfe678:
                      plVar25[3] = 0;
                      plVar25[2] = 0;
                      plVar25[5] = 0;
                      plVar25[4] = 0;
LAB_101dfe680:
                      func_0x000101dfed18(plVar25 + 2,0x112d387f8,&UNK_10d902650);
                    }
                    else {
                      uVar36 = 0;
                      FUN_101a64068();
                      uVar21 = 0x112defdc0;
                      func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
                      puVar11 = PTR___sypN_11034f1a8;
                      puVar13 = puVar12;
                      func_0x000107c5f9e8(puVar12,uVar36,PTR___sypN_11034f1a8 + 8,uVar21);
                      func_0x000107c61174(lVar18);
                      func_0x000107c61170(puVar12);
                      if (puVar13 == (undefined *)0x0) goto LAB_101dfe678;
                      if (*(long *)(puVar13 + 0x10) == 0) {
LAB_101dfe7c0:
                        plVar25[3] = 0;
                        plVar25[2] = 0;
                        plVar25[5] = 0;
                        plVar25[4] = 0;
                      }
                      else {
                        lVar18 = *(long *)PTR__NSFileSize_110345448;
                        func_0x000107c61434(puVar13);
                        FUN_101aae36c(lVar18);
                        if ((uVar36 & 1) == 0) {
                          func_0x000107c6142c(puVar13);
                          goto LAB_101dfe7c0;
                        }
                        func_0x0001000bb420(*(long *)(puVar13 + 0x38) + lVar18 * 0x20,plVar25 + 2);
                        func_0x000107c6142c(puVar13);
                      }
                      func_0x000107c6142c(puVar13);
                      if (plVar25[5] == 0) goto LAB_101dfe680;
                      uVar21 = 0;
                      func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                      plVar7 = plVar25 + 8;
                      func_0x000107c6147c(plVar7,plVar25 + 2,puVar11 + 8,uVar21,6);
                      if (((ulong)plVar7 & 1) != 0) {
                        lVar18 = plVar25[8];
                        func_0x000107c4c0a8(lVar18);
                        func_0x000107c61170(lVar18);
                      }
                    }
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    puVar11 = puVar22;
                    func_0x000107c5ed90();
                    plVar25[7] = 0;
                    puVar12 = puVar22;
                    func_0x000107c4ff50();
                    func_0x000107c61170(puVar11);
                    func_0x000107c61170(puVar22);
                    puVar24 = (undefined8 *)plVar25[7];
                    if ((int)puVar12 == 0) {
                      puVar35 = puVar24;
                      func_0x000107c61174(puVar24);
                      func_0x000107c5ed30();
                      func_0x000107c61170(puVar35);
                      func_0x000107c61654();
                      func_0x000107c614ac();
                    }
                    else {
                      func_0x000107c61174();
                    }
                    uVar27 = plVar25[0x11];
                    puVar22 = (undefined *)plVar25[0x12];
                    uVar36 = plVar25[0x10];
                    FUN_101df6cf4();
                    puVar12 = &UNK_1106e3fc0;
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar24,0,0);
                    puVar24[1] = 0;
                    *puVar24 = 10;
                    *(undefined1 *)(puVar24 + 2) = 0x80;
                    func_0x000107c61654();
                    uVar15 = uVar36;
                    (**(code **)(uVar27 + 8))(puVar22);
                    func_0x000107c615c0(puVar22);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar25[1];
                    puVar11 = puVar12;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x188)) {
LAB_101dfe79c:
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE_04)();
                      return UNRECOVERED_JUMPTABLE_04;
                    }
                  }
                  else {
                    puVar12 = (undefined *)plVar25[0x12];
                    uVar15 = plVar25[0x10];
                    (**(code **)(plVar25[0x11] + 8))(puVar12);
                    func_0x000107c615c0(puVar12);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar25[1];
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x188))
                    goto LAB_101dfe79c;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar4 + -0x1e0) = uVar33;
                  *(long *)(puVar4 + -0x1d8) = lVar16;
                  *(ulong *)(puVar4 + -0x1d0) = uVar27;
                  *(ulong *)(puVar4 + -0x1c8) = uVar36;
                  *(long **)(puVar4 + -0x1c0) = plVar25;
                  *(undefined **)(puVar4 + -0x1b8) = puVar11;
                  *(undefined **)(puVar4 + -0x1b0) = puVar12;
                  *(undefined **)(puVar4 + -0x1a8) = puVar22;
                  *(undefined1 **)(puVar4 + -0x1a0) = puVar4 + -0x150;
                  *(code **)(puVar4 + -0x198) = FUN_101dfe828;
                  uVar36 = uVar15;
                  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
LAB_101dfe880:
                    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
                    uVar27 = 0xf000000000000000;
                    if (uVar15 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
                    uVar14 = uVar15;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    if (uVar14 == 0) goto LAB_101dfe8bc;
                    uVar30 = uVar14;
                    func_0x000107c5ee30();
                    func_0x000107c61170(uVar14);
                  }
                  else {
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar27 = uVar15;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    uVar36 = uVar27;
                    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_101dfe880;
                    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
                    func_0x000107c5ee30();
                    uVar36 = uVar27;
                    func_0x000107c61170(UNRECOVERED_JUMPTABLE);
                    if (uVar15 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
                    uVar30 = 0;
                    uVar36 = 0xf000000000000000;
                  }
                  if (uVar27 >> 0x3c < 0xf) {
                    if (uVar36 >> 0x3c < 0xf) {
                      func_0x000100de78a0(UNRECOVERED_JUMPTABLE_03,uVar27);
                      func_0x000100de78a0(uVar30,uVar36);
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03;
                      func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_03,uVar27,uVar30,uVar36);
                      func_0x0001000b44c0(uVar30,uVar36);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar27);
                      func_0x0001000b44c0(uVar30,uVar36);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
                      if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                        return (code *)0x0;
                      }
                      goto LAB_101dfe974;
                    }
                  }
                  else if (0xe < uVar36 >> 0x3c) {
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
LAB_101dfe974:
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar36 = uVar27;
                    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
joined_r0x000101dfe9b0:
                      uVar27 = 0xf000000000000000;
                      if (uVar15 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (uVar15 == 0) {
                        uVar15 = 0;
                        goto LAB_101dfe9f8;
                      }
                      uVar30 = uVar15;
                      func_0x000107c5ee30();
                      func_0x000107c61170(uVar15);
                    }
                    else {
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
                        UNRECOVERED_JUMPTABLE = (code *)0x0;
                        uVar36 = uVar27;
                        goto joined_r0x000101dfe9b0;
                      }
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                      func_0x000107c5ee30();
                      uVar36 = uVar27;
                      func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
                      if (uVar15 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
                      uVar36 = 0xf000000000000000;
                      uVar30 = uVar15;
                    }
                    if (uVar27 >> 0x3c < 0xf) {
                      if (uVar36 >> 0x3c < 0xf) {
                        func_0x000100de78a0(UNRECOVERED_JUMPTABLE,uVar27);
                        func_0x000100de78a0(uVar30,uVar36);
                        UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE;
                        func_0x000100e25fcc(UNRECOVERED_JUMPTABLE,uVar27,uVar30,uVar36);
                        func_0x0001000b44c0(uVar30,uVar36);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar27);
                        func_0x0001000b44c0(uVar30,uVar36);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar27);
                        return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_04 & 1);
                      }
                    }
                    else if (0xe < uVar36 >> 0x3c) {
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar27);
                      return (code *)0x1;
                    }
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar27);
                    goto LAB_101dfea48;
                  }
                  func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar27);
LAB_101dfea48:
                  func_0x0001000b44c0(uVar30,uVar36);
                  return (code *)0x0;
                }
              }
              else {
                func_0x000107c61170();
LAB_101dfb944:
                uVar33 = *(undefined8 *)(lVar17 + 0xd8);
                FUN_101df6cf4();
                func_0x000107c613f8(&UNK_1106e3fc0,puVar35,0,0);
                puVar35[1] = 0;
                *puVar35 = 7;
                *(undefined1 *)(puVar35 + 2) = 0x80;
                func_0x000107c61654();
                func_0x000107c615e8(puVar19);
                func_0x000107c615e8(puVar24);
                func_0x000107c61170(lVar18);
LAB_101dfb99c:
                func_0x000107c615e8(uVar33);
                func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xc0));
                UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar17 + 8);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x180)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE_04)();
                  return UNRECOVERED_JUMPTABLE_04;
                }
              }
LAB_101dfbf08:
              func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
              (*UNRECOVERED_JUMPTABLE_04)();
            }
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfc208;
          }
          lVar18 = 0;
          lVar17 = 0;
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfc1a0;
      }
      lVar18 = 0;
      lVar17 = 0;
      goto _swift_task_switch;
    }
    unaff_x21 = 0;
    func_0x000107c5fd64();
    UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8) + 0x38);
    pcVar26 = (code *)0x70;
    func_0x000107c615b8();
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xd0) = pcVar26;
    *(code **)pcVar26 = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar26 + 8) = FUN_101dfa9f8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
LAB_101dfa950:
      func_0x000107c60e78();
      uStack_60 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
      lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_03 = *(code **)UNRECOVERED_JUMPTABLE_05;
      plVar25 = *(long **)UNRECOVERED_JUMPTABLE_05;
      uStack_78 = unaff_x21;
      pcStack_70 = unaff_x19;
      pcStack_68 = UNRECOVERED_JUMPTABLE_03;
      func_0x000107c615c0(*(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 200));
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_03 + 0xc0);
      func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        UNRECOVERED_JUMPTABLE = pcVar26;
      }
      else {
        lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar18 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x000101dfa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar25[1])();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
      pcStack_88 = FUN_101dfa9f8;
      uStack_a0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      pcStack_98 = (code *)*plVar25;
      puVar24 = (undefined8 *)*plVar25;
      func_0x000107c615c0(*(undefined8 *)(pcStack_98 + 0xd0));
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_a0) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfaa6c;
        lVar18 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      pcStack_b0 = (code *)((ulong)&uStack_90 | 0x1000000000000000);
      pcStack_a8 = FUN_101dfaa6c;
      pcStack_e0 = *(code **)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_04 = (code *)puVar24[5];
      lVar17 = puVar24[6];
      puVar35 = puVar24 + 2;
      pcStack_d8 = unaff_x24;
      pcStack_d0 = unaff_x23;
      pcStack_c8 = UNRECOVERED_JUMPTABLE_03;
      pcStack_c0 = pcVar26;
      puStack_b8 = puVar24;
      func_0x0001000a8868(puVar35,UNRECOVERED_JUMPTABLE_04);
      piVar28 = *(int **)(lVar17 + 8);
      iVar6 = *piVar28;
      puVar19 = (undefined8 *)(ulong)(uint)piVar28[1];
      func_0x000107c615b8();
      puVar24[0x1b] = puVar19;
      *puVar19 = puVar24;
      puVar19[1] = FUN_101dfab20;
      lVar18 = puVar24[0x12];
      UNRECOVERED_JUMPTABLE = (code *)puVar24[0x11];
      if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*((code *)(long)iVar6 + (long)piVar28))
                  (UNRECOVERED_JUMPTABLE,lVar18,puVar24[0x13],1,UNRECOVERED_JUMPTABLE_04,lVar17);
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      pcStack_f0 = (code *)((ulong)&pcStack_b0 | 0x1000000000000000);
      ppcVar5 = &pcStack_100;
      pcStack_e8 = FUN_101dfab20;
      pcStack_100 = *(code **)PTR____stack_chk_guard_11034bdc0;
      pcStack_f8 = (code *)*puVar24;
      pcVar26 = (code *)*puVar24;
      *(undefined8 **)(pcStack_f8 + 0xe0) = puVar19;
      *(long *)(pcStack_f8 + 0xe8) = lVar18;
      *(undefined8 **)(pcStack_f8 + 0xf0) = puVar35;
      func_0x000107c615c0(*(long *)(pcStack_f8 + 0xd8));
      if (puVar35 == (undefined8 *)0x0) {
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_100) {
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfabc8;
          goto LAB_101dfabac;
        }
      }
      else if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_100) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb30c;
LAB_101dfabac:
        lVar18 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      uStack_110 = (ulong)&pcStack_f0 | 0x1000000000000000;
      pcStack_108 = FUN_101dfabc8;
      lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *(long *)(pcVar26 + 0xa8);
      lStack_128 = lVar17;
      pcStack_120 = UNRECOVERED_JUMPTABLE_04;
      pcStack_118 = pcVar26;
      func_0x0001000834e4(pcVar26 + 0x10);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar18 + 0x18);
      lVar18 = 0x112d51300;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10d917f90;
      func_0x0001000285a8();
      UNRECOVERED_JUMPTABLE_05 = pcVar26 + 0x60;
      *(long *)UNRECOVERED_JUMPTABLE_05 = lVar18;
      pcVar10 = (code *)0xa0;
      func_0x000107c615b8();
      *(code **)(pcVar26 + 0xf8) = pcVar10;
      UNRECOVERED_JUMPTABLE_03 = pcVar10;
      func_0x000100faa6a0();
      *(code **)(pcVar26 + 0x100) = UNRECOVERED_JUMPTABLE_03;
      *(code **)pcVar10 = pcVar26;
      *(code **)(pcVar10 + 8) = FUN_101dfac94;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
        func_0x000107c60e78();
        uStack_140 = (ulong)&uStack_110 | 0x1000000000000000;
        pcStack_138 = FUN_101dfac94;
        pcStack_150 = *(code **)PTR____stack_chk_guard_11034bdc0;
        pcStack_148 = *(code **)pcVar26;
        pcVar26 = *(code **)pcVar26;
        *(code **)(pcStack_148 + 0x108) = UNRECOVERED_JUMPTABLE_04;
        func_0x000107c615c0(*(undefined8 *)(pcStack_148 + 0xf8));
        if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_150) goto LAB_101dfad30;
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfad34;
        }
        else {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_150) {
LAB_101dfad30:
            func_0x000107c60e78();
            pcStack_160 = (code *)((ulong)&uStack_140 | 0x1000000000000000);
            pcStack_158 = FUN_101dfad34;
            pcStack_1b0 = *(code **)PTR____stack_chk_guard_11034bdc0;
            pcVar32 = pcVar26 + 0x70;
            *(long *)pcVar32 = 0;
            pcVar29 = *(code **)(pcVar26 + 0x58);
            UNRECOVERED_JUMPTABLE_03 = pcVar29;
            pcStack_1a8 = unaff_x28;
            pcStack_1a0 = unaff_x27;
            pcStack_198 = unaff_x26;
            pcStack_190 = unaff_x25;
            pcStack_188 = (code *)(long)iVar6;
            piStack_180 = piVar28;
            pcStack_178 = pcVar10;
            pcStack_170 = UNRECOVERED_JUMPTABLE_05;
            pcStack_168 = pcVar26;
            func_0x000107c40984();
            func_0x000107c61180();
            unaff_x24 = *(code **)pcVar32;
            func_0x000107c61174();
            UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
            func_0x000107c4403c();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
              if (unaff_x24 != (code *)0x0) goto LAB_101dfadbc;
              pcVar10 = *(code **)(pcVar26 + 0xa0);
              func_0x000107c4a8c4();
              func_0x000107c61180();
              UNRECOVERED_JUMPTABLE_04 = pcVar10;
              if (pcVar10 == (code *)0x0) {
LAB_101dfaf74:
                unaff_x25 = *(code **)(pcVar26 + 0xe0);
                unaff_x24 = *(code **)(pcVar26 + 0xe8);
                FUN_101df6cf4();
                puVar22 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 0x16;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x000107c615e8(pcVar29);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                goto LAB_101dfae20;
              }
              uVar36 = *(ulong *)(pcVar26 + 0xa0);
              func_0x000107c5ee30();
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE;
              func_0x000107c61170(pcVar10);
              func_0x000107c4a804();
              func_0x000107c61180();
              if (uVar36 == 0) {
                func_0x00010006c090(UNRECOVERED_JUMPTABLE_04,UNRECOVERED_JUMPTABLE);
                goto LAB_101dfaf74;
              }
              pcStack_1d8 = *(code **)(pcVar26 + 0xe0);
              uStack_1d0 = *(ulong *)(pcVar26 + 0xe8);
              lVar18 = *(long *)(pcVar26 + 0xa8);
              uVar27 = uVar36;
              pcStack_1c8 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5ee30();
              pcStack_1c0 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c61170(uVar36);
              lStack_1e8 = *(long *)(lVar18 + 0x30);
              func_0x0001000d224c(pcVar26 + 0x38);
              uVar36 = *(ulong *)(pcVar26 + 0x38);
              lVar18 = *(long *)(pcVar26 + 0x40);
              uVar15 = uVar36;
              func_0x000107c614f0();
              *(ulong *)(pcVar26 + 0x78) = uVar36;
              (**(code **)(*(long *)(lVar18 + 8) + 0x28))();
              unaff_x26 = pcStack_1c8;
              func_0x000107c615e8(uVar36);
              UNRECOVERED_JUMPTABLE_04 = pcStack_1d8;
              func_0x000107c5ee20(pcStack_1d8,uStack_1d0);
              pcVar10 = unaff_x26;
              pcStack_1d8 = UNRECOVERED_JUMPTABLE;
              func_0x000107c5ee20(unaff_x26,UNRECOVERED_JUMPTABLE);
              unaff_x27 = pcStack_1c0;
              UNRECOVERED_JUMPTABLE = pcStack_1c0;
              uStack_1d0 = uVar27;
              func_0x000107c5ee20(uVar27);
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_04;
              if ((uVar15 & 1) == 0) {
                func_0x000107c51bb8();
              }
              else {
                func_0x000107c51bbc();
              }
              func_0x000107c61180();
              func_0x000107c61170(uVar27);
              func_0x000107c61170(pcVar10);
              func_0x000107c61170();
              if (UNRECOVERED_JUMPTABLE_05 == (code *)0x0) {
                unaff_x25 = *(code **)(pcVar26 + 0xe0);
                unaff_x24 = *(code **)(pcVar26 + 0xe8);
                FUN_101df6cf4();
                puVar22 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(long *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(long *)UNRECOVERED_JUMPTABLE_04 = 10;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x26,pcStack_1d8);
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x00010006c090(uStack_1d0,unaff_x27);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar29);
                goto LAB_101dfae20;
              }
              pcStack_1e0 = *(code **)(pcVar26 + 0x108);
              puVar24 = *(undefined8 **)(pcVar26 + 0xc0);
              unaff_x25 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c5ee30();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_05);
              func_0x00010006c00c(unaff_x25,UNRECOVERED_JUMPTABLE);
              pcVar32 = UNRECOVERED_JUMPTABLE;
              func_0x0001000b44c0(unaff_x25,UNRECOVERED_JUMPTABLE);
              UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
              func_0x000107c4407c(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61180();
              pcVar10 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5faec();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
              func_0x000107c5ed80(puVar24,pcVar10,pcVar32);
              func_0x000107c6142c(pcVar32);
              unaff_x26 = pcStack_1e0;
              func_0x000107c5ee40(puVar24,1,unaff_x25,UNRECOVERED_JUMPTABLE);
              if (unaff_x26 != (code *)0x0) {
                pcVar32 = *(code **)(pcVar26 + 0xe0);
                UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 0xe8);
                lStack_1f0 = *(long *)(pcVar26 + 0xb8);
                pcStack_1e0 = *(code **)(pcVar26 + 0xc0);
                lStack_1e8 = *(long *)(pcVar26 + 0xb0);
                FUN_101df6cf4();
                puVar22 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,puVar24,0,0);
                puVar24[1] = 0;
                *puVar24 = 0x14;
                *(undefined1 *)(puVar24 + 2) = 0x80;
                func_0x000107c61654();
                func_0x00010006c090(pcStack_1c8,pcStack_1d8);
                func_0x00010006c090(pcVar32,UNRECOVERED_JUMPTABLE_04);
                func_0x00010006c090(uStack_1d0,pcStack_1c0);
                func_0x00010006c090(unaff_x25,UNRECOVERED_JUMPTABLE);
                func_0x000107c614ac(unaff_x26);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar29);
                (**(code **)(lStack_1f0 + 8))(pcStack_1e0,lStack_1e8);
                unaff_x24 = unaff_x25;
                unaff_x25 = UNRECOVERED_JUMPTABLE_04;
                unaff_x27 = UNRECOVERED_JUMPTABLE;
                goto LAB_101dfae20;
              }
              pcStack_1e0 = UNRECOVERED_JUMPTABLE;
              func_0x0001000d224c(pcVar26 + 0x48);
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 0x48);
              lVar18 = *(long *)(pcVar26 + 0x50);
              unaff_x24 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c614f0();
              *(code **)(pcVar26 + 0x80) = UNRECOVERED_JUMPTABLE_04;
              (**(code **)(*(long *)(lVar18 + 8) + 0x18))();
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_04);
              pcVar32 = *(code **)(pcVar26 + 0xe0);
              unaff_x26 = *(code **)(pcVar26 + 0xe8);
              unaff_x27 = *(code **)(pcVar26 + 0xb8);
              lVar18 = *(long *)(pcVar26 + 0xc0);
              puVar22 = *(undefined **)(pcVar26 + 0xb0);
              if (((ulong)unaff_x24 & 1) == 0) {
                (**(code **)(unaff_x27 + 8))(lVar18,puVar22);
                func_0x00010006c090(pcStack_1c8,pcStack_1d8);
                func_0x00010006c090(pcVar32,unaff_x26);
                func_0x00010006c090(uStack_1d0,pcStack_1c0);
                func_0x00010006c090(unaff_x25,pcStack_1e0);
                func_0x000107c615e8(pcVar29);
              }
              else {
                func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE_03);
                func_0x00010006c090(pcStack_1c8,pcStack_1d8);
                func_0x00010006c090(pcVar32,unaff_x26);
                func_0x00010006c090(uStack_1d0,pcStack_1c0);
                func_0x00010006c090(unaff_x25,pcStack_1e0);
                func_0x000107c615e8(pcVar29);
                (**(code **)(unaff_x27 + 8))(lVar18,puVar22);
              }
              func_0x000107c615c0(*(long *)(pcVar26 + 0xc0));
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(pcVar26 + 8))(UNRECOVERED_JUMPTABLE_03);
                return UNRECOVERED_JUMPTABLE_03;
              }
            }
            else {
              func_0x000107c61170();
LAB_101dfadbc:
              unaff_x26 = *(code **)(pcVar26 + 0xe0);
              unaff_x25 = *(code **)(pcVar26 + 0xe8);
              FUN_101df6cf4();
              puVar22 = &UNK_1106e3fc0;
              func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
              *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
              *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 7;
              UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
              func_0x000107c61654();
              func_0x00010006c090(unaff_x26,unaff_x25);
              func_0x000107c615e8(pcVar29);
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61170(unaff_x24);
LAB_101dfae20:
              func_0x000107c615c0(*(long *)(pcVar26 + 0xc0));
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 8);
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE_04)();
                return UNRECOVERED_JUMPTABLE_04;
              }
            }
            func_0x000107c60e78();
            uStack_200 = (ulong)&pcStack_160 | 0x1000000000000000;
            pcStack_1f8 = FUN_101dfb30c;
            lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcStack_208 = pcVar26;
            func_0x0001000834e4(pcVar26 + 0x10);
            func_0x000107c615c0(*(long *)(pcVar26 + 0xc0));
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_04)();
              return UNRECOVERED_JUMPTABLE_04;
            }
            func_0x000107c60e78();
            uStack_220 = (ulong)&uStack_200 | 0x1000000000000000;
            puVar4 = auStack_250;
            pcStack_218 = FUN_101dfb374;
            puVar8 = &uStack_220;
            lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar24 = *(undefined8 **)(pcVar26 + 0x100);
            unaff_x21 = *(ulong *)(pcVar26 + 0xe0);
            unaff_x19 = *(code **)(pcVar26 + 0xe8);
            unaff_x23 = *(code **)(pcVar26 + 0x68);
            UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1107a6f08;
            lVar16 = 0;
            lVar17 = 0;
            pcStack_240 = pcVar29;
            puStack_238 = puVar22;
            pcStack_230 = UNRECOVERED_JUMPTABLE_03;
            pcStack_228 = pcVar26;
            func_0x000107c613f8();
            *puVar24 = unaff_x23;
            UNRECOVERED_JUMPTABLE = unaff_x19;
            func_0x00010006c090(unaff_x21);
            func_0x000107c615c0(*(long *)(pcVar26 + 0xc0));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar26 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
            pcVar29 = FUN_101dfb414;
            func_0x000107c60e78();
            unaff_x28 = pcVar32;
            goto code_r0x000101dfb414;
          }
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfb374;
        }
        lVar18 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      UNRECOVERED_JUMPTABLE = pcVar26 + 0x58;
      pcVar26 = pcVar26 + 0x68;
      uVar36 = uStack_110 & 0xefffffffffffffff;
      pcVar32 = pcStack_120;
      pcVar29 = pcStack_108;
      goto LAB_104876574;
    }
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + 0x10;
    UNRECOVERED_JUMPTABLE_03 = FUN_101dfa808;
    uVar36 = (ulong)&uStack_10 & 0xefffffffffffffff;
LAB_104875f04:
    *(ulong *)((long)ppcVar5 + -0x10) = uVar36 | 0x1000000000000000;
    *(code **)((long)ppcVar5 + -8) = UNRECOVERED_JUMPTABLE_03;
    *(code **)((long)ppcVar5 + -0x18) = pcVar26;
    *(code **)(pcVar26 + 0x28) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar26 + 0x30) = UNRECOVERED_JUMPTABLE_04;
    lVar17 = *(long *)(*(long *)UNRECOVERED_JUMPTABLE_04 + 0x50);
    *(long *)(pcVar26 + 0x38) = lVar17;
    lVar18 = 0;
    __sSqMa(0,lVar17);
    *(long *)(pcVar26 + 0x40) = lVar18;
    lVar18 = *(long *)(lVar18 + -8);
    *(long *)(pcVar26 + 0x48) = lVar18;
    uVar36 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar26 + 0x50) = uVar36;
    lVar18 = *(long *)(lVar17 + -8);
    *(long *)(pcVar26 + 0x58) = lVar18;
    uVar36 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar26 + 0x60) = uVar36;
    UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_104875f90;
    lVar18 = 0;
    lVar17 = 0;
    goto _swift_task_switch;
  }
  uVar27 = uVar36 & 0xffffffffffffff8;
  if ((uVar36 & 0x8000000000000000) != 0) {
    uVar27 = uVar36;
  }
  func_0x000107c60480();
  if (uVar27 != 0) goto LAB_101dfc920;
LAB_101dfcc68:
  puVar24 = (undefined8 *)0x0;
  UNRECOVERED_JUMPTABLE = (code *)puVar8[10];
  FUN_101df6cf4();
  pcVar10 = (code *)&UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,puVar24,0,0);
  *puVar24 = UNRECOVERED_JUMPTABLE;
  puVar24[1] = 0;
  *(undefined1 *)(puVar24 + 2) = 0x60;
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE_03 = pcVar10;
LAB_101dfcca4:
  UNRECOVERED_JUMPTABLE_05 = (code *)puVar8[1];
  pcVar29 = unaff_x23;
  pcVar32 = unaff_x24;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_60) {
LAB_101dfccc4:
                    /* WARNING: Could not recover jumptable at 0x000101dfcce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  }
LAB_101dfcd00:
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_10 | 0x1000000000000000;
  ppcVar5 = &pcStack_c0;
  pcStack_98 = FUN_101dfcd04;
  puStack_b8 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  pcVar20 = (code *)*puVar8;
  pcVar26 = (code *)*puVar8;
  *(code **)(pcVar20 + 0x88) = UNRECOVERED_JUMPTABLE_05;
  *(code **)(pcVar20 + 0x90) = pcVar10;
  pcStack_b0 = UNRECOVERED_JUMPTABLE;
  pcStack_a8 = pcVar20;
  func_0x000107c615c0(*(undefined8 *)(pcVar20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(pcVar20 + 0x78));
  if (pcVar10 == (code *)0x0) {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_b8) goto LAB_101dfcdb4;
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfcdb8;
  }
  else {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_b8) {
LAB_101dfcdb4:
      func_0x000107c60e78();
      pcStack_d0 = (code *)((ulong)&uStack_a0 | 0x1000000000000000);
      pcStack_c8 = FUN_101dfcdb8;
      pcStack_108 = *(code **)PTR____stack_chk_guard_11034bdc0;
      puVar24 = *(undefined8 **)(pcVar26 + 0x70);
      pcStack_100 = UNRECOVERED_JUMPTABLE_04;
      pcStack_f8 = pcVar32;
      pcStack_f0 = pcVar29;
      pcStack_e8 = UNRECOVERED_JUMPTABLE_03;
      pcStack_e0 = pcVar20;
      pcStack_d8 = pcVar26;
      func_0x000107c44984();
      if ((int)puVar24 == 0) {
LAB_101dfce34:
        UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar26 + 0x88);
        pcVar32 = *(code **)(pcVar26 + 0x70);
        pcVar29 = *(code **)(pcVar26 + 0x78);
        lVar18 = *(long *)(pcVar26 + 0x68);
        FUN_101df6cf4();
        UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
        func_0x000107c613f8(&UNK_1106e3fc0,puVar24,0,0);
        puVar24[1] = 0;
        *puVar24 = 0x1d;
        *(undefined1 *)(puVar24 + 2) = 0x80;
        func_0x000107c61654();
LAB_101dfce7c:
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE_05);
        func_0x000107c61170(pcVar29);
        func_0x000107c61170(pcVar32);
        func_0x000107c61170(lVar18);
        UNRECOVERED_JUMPTABLE = *(code **)(pcVar26 + 8);
        pcVar10 = UNRECOVERED_JUMPTABLE_04;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_108) {
                    /* WARNING: Could not recover jumptable at 0x000101dfced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return UNRECOVERED_JUMPTABLE;
        }
      }
      else {
        lVar18 = *(long *)(pcVar26 + 0x70);
        func_0x000107c4c99c();
        func_0x000107c61180();
        *(long *)(pcVar26 + 0x98) = lVar18;
        puVar24 = (undefined8 *)0x0;
        if (lVar18 == 0) goto LAB_101dfce34;
        UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 0x90);
        func_0x000107c5fd64();
        if (UNRECOVERED_JUMPTABLE_04 != (code *)0x0) {
          UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar26 + 0x88);
          pcVar32 = *(code **)(pcVar26 + 0x70);
          pcVar29 = *(code **)(pcVar26 + 0x78);
          lVar18 = *(long *)(pcVar26 + 0x68);
          func_0x000107c61170(*(long *)(pcVar26 + 0x98));
          goto LAB_101dfce7c;
        }
        UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar26 + 0x60) + 0x18);
        lVar18 = 0x112d51300;
        func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
        UNRECOVERED_JUMPTABLE_05 = pcVar26 + 0x18;
        *(long *)UNRECOVERED_JUMPTABLE_05 = lVar18;
        pcVar10 = (code *)0xa0;
        func_0x000107c615b8();
        *(code **)(pcVar26 + 0xa0) = pcVar10;
        UNRECOVERED_JUMPTABLE_03 = pcVar10;
        func_0x000100faa6a0();
        *(code **)(pcVar26 + 0xa8) = UNRECOVERED_JUMPTABLE_03;
        *(code **)pcVar10 = pcVar26;
        *(code **)(pcVar10 + 8) = FUN_101dfcf78;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_108) {
          UNRECOVERED_JUMPTABLE = pcVar26 + 0x10;
          pcVar26 = pcVar26 + 0x20;
          uVar36 = (ulong)pcStack_d0 & 0xefffffffffffffff;
          pcVar32 = pcStack_e0;
          pcVar29 = pcStack_c8;
LAB_104876574:
          *(code **)((long)ppcVar5 + -0x20) = pcVar32;
          *(ulong *)((long)ppcVar5 + -0x10) = uVar36 | 0x1000000000000000;
          *(code **)((long)ppcVar5 + -8) = pcVar29;
          *(code **)((long)ppcVar5 + -0x18) = pcVar10;
          *(code **)(pcVar10 + 0x58) = UNRECOVERED_JUMPTABLE_03;
          *(code **)(pcVar10 + 0x60) = pcVar26;
          *(code **)(pcVar10 + 0x48) = UNRECOVERED_JUMPTABLE_05;
          *(undefined **)(pcVar10 + 0x50) = &UNK_1107a6f08;
          *(code **)(pcVar10 + 0x40) = UNRECOVERED_JUMPTABLE;
          lVar17 = *(long *)UNRECOVERED_JUMPTABLE_04;
          *(undefined ***)(pcVar10 + 0x68) = &PTR_DAT_1107a6e88;
          lVar18 = 0x10;
          _swift_task_alloc();
          *(long *)(pcVar10 + 0x70) = lVar18;
          lVar18 = *(long *)(lVar17 + 0x50);
          *(long *)(pcVar10 + 0x78) = lVar18;
          lVar18 = *(long *)(lVar18 + -8);
          *(long *)(pcVar10 + 0x80) = lVar18;
          UNRECOVERED_JUMPTABLE_05 = (code *)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
          _swift_task_alloc();
          *(code **)(pcVar10 + 0x88) = UNRECOVERED_JUMPTABLE_05;
          pcVar26 = (code *)0x70;
          _swift_task_alloc();
          *(code **)(pcVar10 + 0x90) = pcVar26;
          *(code **)pcVar26 = pcVar10;
          *(undefined **)(pcVar26 + 8) = &UNK_104876614;
          UNRECOVERED_JUMPTABLE_03 = *(code **)((long)ppcVar5 + -8);
          uVar36 = *(ulong *)((long)ppcVar5 + -0x10) & 0xefffffffffffffff;
          goto LAB_104875f04;
        }
      }
      func_0x000107c60e78();
      pcStack_120 = (code *)((ulong)&pcStack_d0 | 0x1000000000000000);
      pcStack_118 = FUN_101dfcf78;
      lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_128 = *(long *)pcVar26;
      pcVar26 = *(code **)pcVar26;
      func_0x000107c615c0(*(undefined8 *)(lStack_128 + 0xa0));
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) goto LAB_101dfd010;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd014;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
LAB_101dfd010:
          func_0x000107c60e78();
          uStack_140 = (ulong)&pcStack_120 | 0x1000000000000000;
          pcStack_138 = FUN_101dfd014;
          pcStack_170 = *(code **)PTR____stack_chk_guard_11034bdc0;
          *(long *)(pcVar26 + 0x28) = 0;
          puVar24 = *(undefined8 **)(pcVar26 + 0x10);
          pcStack_168 = pcVar32;
          pcStack_160 = pcVar29;
          pcStack_158 = pcVar10;
          pcStack_150 = UNRECOVERED_JUMPTABLE_05;
          pcStack_148 = pcVar26;
          func_0x000107c5d544(puVar24);
          func_0x000107c615e8();
          if (*(long *)(pcVar26 + 0x28) == 0) {
            uVar21 = *(undefined8 *)(pcVar26 + 0x88);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 0x70);
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar26 + 0x78);
            func_0x000107c61170(*(undefined8 *)(pcVar26 + 0x98));
            func_0x000107c615e8(uVar21);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(*(undefined8 *)(pcVar26 + 0x68));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar26 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_170) goto LAB_101dfd158;
          }
          else {
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar24,0,0);
            puVar24[1] = 0;
            *puVar24 = 0x13;
            *(undefined1 *)(puVar24 + 2) = 0x80;
            func_0x000107c61654();
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar26 + 0x88);
            pcVar29 = *(code **)(pcVar26 + 0x70);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 0x78);
            pcVar32 = *(code **)(pcVar26 + 0x68);
            func_0x000107c61170(*(undefined8 *)(pcVar26 + 0x98));
            func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(pcVar29);
            func_0x000107c61170(pcVar32);
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar26 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_170) {
LAB_101dfd158:
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
          }
          func_0x000107c60e78();
          pcStack_190 = (code *)((ulong)&uStack_140 | 0x1000000000000000);
          pcStack_188 = FUN_101dfd174;
          pcStack_1c0 = *(code **)PTR____stack_chk_guard_11034bdc0;
          puVar24 = *(undefined8 **)(pcVar26 + 0xa8);
          uVar21 = *(undefined8 *)(pcVar26 + 0x20);
          pcStack_1b8 = pcVar32;
          pcStack_1b0 = pcVar29;
          pcStack_1a8 = UNRECOVERED_JUMPTABLE_04;
          pcStack_1a0 = UNRECOVERED_JUMPTABLE;
          pcStack_198 = pcVar26;
          func_0x000107c613f8(&UNK_1107a6f08,puVar24,0,0);
          *puVar24 = uVar21;
          UNRECOVERED_JUMPTABLE = *(code **)(pcVar26 + 0x88);
          uVar21 = *(undefined8 *)(pcVar26 + 0x70);
          uVar3 = *(undefined8 *)(pcVar26 + 0x78);
          uVar33 = *(undefined8 *)(pcVar26 + 0x68);
          func_0x000107c61170(*(undefined8 *)(pcVar26 + 0x98));
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar21);
          func_0x000107c61170(uVar33);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 8);
          if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_1d0 = (ulong)&pcStack_190 | 0x1000000000000000;
          pcStack_1c8 = FUN_101dfd230;
          lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar21 = *(undefined8 *)(pcVar26 + 0x70);
          lVar18 = *(long *)(pcVar26 + 0x68);
          pcStack_1e0 = UNRECOVERED_JUMPTABLE;
          pcStack_1d8 = pcVar26;
          func_0x000107c61170(*(undefined8 *)(pcVar26 + 0x78));
          func_0x000107c61170(uVar21);
          func_0x000107c61170(lVar18);
          lVar17 = *(long *)(pcVar26 + 0x90);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar26 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_200 = (ulong)&uStack_1d0 | 0x1000000000000000;
          pcStack_1f8 = FUN_101dfd2ac;
          pcVar26 = *(code **)pcVar26;
          lStack_210 = lVar18;
          pcStack_208 = pcVar26;
          func_0x000107c615c0(*(long *)(pcVar26 + 0x78));
          if (lVar17 == 0) {
            pcVar26[0x8e] = pcVar26[0x8c];
            lVar18 = *(long *)(pcVar26 + 0x50);
            lVar17 = *(long *)(pcVar26 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd340;
          }
          else {
            *(long *)(pcVar26 + 0x80) = lVar17;
            lVar18 = *(long *)(pcVar26 + 0x50);
            lVar17 = *(long *)(pcVar26 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd444;
          }
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd174;
      }
      lVar18 = 0;
      lVar17 = 0;
      goto _swift_task_switch;
    }
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfd230;
  }
  lVar18 = 0;
  lVar17 = 0;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_04,lVar18,lVar17);
  return UNRECOVERED_JUMPTABLE_04;
}



/* Entry: 101dfc818; end: 101dfc8c7;  */

void FUN_101dfc818(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dfc850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dfc8c8; end: 101dfcd03;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */
/* WARNING: Removing unreachable block (ram,0x000101dfa858) */
/* WARNING: Removing unreachable block (ram,0x000101dfa87c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb0c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb14) */

code * FUN_101dfc8c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  code **ppcVar5;
  int iVar6;
  long *plVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar8;
  code *UNRECOVERED_JUMPTABLE_05;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  code *unaff_x19;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  ulong unaff_x21;
  undefined8 *puVar22;
  code *UNRECOVERED_JUMPTABLE_03;
  long *plVar23;
  ulong *unaff_x22;
  code *pcVar24;
  int *piVar25;
  code *pcVar26;
  code *unaff_x23;
  ulong uVar27;
  long lVar28;
  code *unaff_x24;
  code *pcVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  code *unaff_x25;
  code *UNRECOVERED_JUMPTABLE_04;
  undefined8 *puVar32;
  code *unaff_x26;
  ulong uVar33;
  code *unaff_x27;
  code *unaff_x28;
  ulong *puVar34;
  ulong unaff_x29;
  ulong uVar35;
  undefined1 auStack_250 [8];
  long lStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  code *pcStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  long lStack_210;
  code *pcStack_208;
  ulong uStack_200;
  code *pcStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  ulong uStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  code *pcStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  int *piStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  code *pcStack_160;
  code *pcStack_158;
  code *pcStack_150;
  code *pcStack_148;
  ulong uStack_140;
  code *pcStack_138;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  code *pcStack_118;
  ulong uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  code *pcStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  ulong uStack_a0;
  code *pcStack_98;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_80;
  ulong uStack_78;
  code *pcStack_70;
  code *pcStack_68;
  ulong uStack_60;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  uStack_60 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd64();
  uVar33 = unaff_x22[0xb];
  UNRECOVERED_JUMPTABLE_04 = (code *)(uVar33 >> 0x3e);
  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
    if (*(long *)((uVar33 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_101dfcc68;
LAB_101dfc920:
    if ((uVar33 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar33 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccf8);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22[0xb] + 0x20);
      func_0x000107c61174();
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x00010121c1ac(0,unaff_x22[0xb]);
    }
    unaff_x22[0xd] = (ulong)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4abb4();
    if ((int)UNRECOVERED_JUMPTABLE_03 != 1) {
LAB_101dfc99c:
      FUN_101df6cf4();
      pcVar9 = (code *)&UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_03,0,0);
      *(long *)(UNRECOVERED_JUMPTABLE_03 + 8) = 0;
      *(long *)UNRECOVERED_JUMPTABLE_03 = 0x19;
      UNRECOVERED_JUMPTABLE_03[0x10] = (code)0x80;
      func_0x000107c61654();
      func_0x000107c61170(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE_03 = pcVar9;
      goto LAB_101dfcca4;
    }
    pcVar26 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4c930();
    func_0x000107c61180();
    unaff_x22[0xe] = (ulong)pcVar26;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    if (pcVar26 == (code *)0x0) goto LAB_101dfc99c;
    UNRECOVERED_JUMPTABLE_03 = (code *)unaff_x22[10];
    FUN_101dfd550(UNRECOVERED_JUMPTABLE_03,unaff_x22[0xb],unaff_x22[9],(char)unaff_x22[0x16]);
    unaff_x22[0xf] = (ulong)UNRECOVERED_JUMPTABLE_03;
    pcStack_88 = UNRECOVERED_JUMPTABLE_03;
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
      puVar22 = *(undefined8 **)((uVar33 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar22 = (undefined8 *)(uVar33 & 0xffffffffffffff8);
      if ((uVar33 & 0x8000000000000000) != 0) {
        puVar22 = (undefined8 *)unaff_x22[0xb];
      }
      func_0x000107c60480();
    }
    pcVar9 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar22 != (undefined8 *)0x0) {
      pcStack_70 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101df6b84(0,(ulong)puVar22 & ((long)puVar22 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfcd00);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      puVar32 = (undefined8 *)0x0;
      uStack_78 = uVar33 & 0xffffffffffffff8;
      lStack_80 = unaff_x22[0xb] + 0x20;
      pcVar29 = unaff_x24;
      do {
        pcVar9 = pcStack_70;
        if ((uVar33 & 0xc000000000000001) == 0) {
          if (*(long *)(uStack_78 + 0x10) <= (long)puVar32) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccfc);
            (*UNRECOVERED_JUMPTABLE_04)();
          }
          puVar18 = *(undefined8 **)(lStack_80 + (long)puVar32 * 8);
          func_0x000107c61174();
        }
        else {
          puVar18 = puVar32;
          func_0x00010121c1ac(puVar32,unaff_x22[0xb]);
        }
        puVar8 = puVar18;
        func_0x000107c4c930();
        func_0x000107c61180();
        puVar21 = puVar18;
        func_0x000107c4abb4();
        if ((int)puVar21 != 1 || puVar8 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
          puVar21[1] = 0;
          *puVar21 = 0x19;
          *(undefined1 *)(puVar21 + 2) = 0x80;
          func_0x000107c61654();
          func_0x000107c61170(puVar8);
          func_0x000107c61170(pcVar26);
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(pcStack_88);
          func_0x000107c61170(puVar18);
          func_0x000107c61574(pcVar9);
          UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_04;
          unaff_x23 = pcVar26;
          unaff_x24 = pcVar29;
          goto LAB_101dfcca4;
        }
        func_0x000107c61170(puVar18);
        pcVar29 = *(code **)(pcVar9 + 0x10);
        pcStack_70 = pcVar9;
        if ((code *)(*(ulong *)(pcVar9 + 0x18) >> 1) <= pcVar29) {
          func_0x000101df6b84(1 < *(ulong *)(pcVar9 + 0x18),pcVar29 + 1,1);
        }
        puVar32 = (undefined8 *)((long)puVar32 + 1);
        *(code **)(pcStack_70 + 0x10) = pcVar29 + 1;
        *(undefined8 **)(pcStack_70 + (long)pcVar29 * 8 + 0x20) = puVar8;
        pcVar9 = pcStack_70;
      } while (puVar22 != puVar32);
    }
    pcVar29 = pcStack_88;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    UNRECOVERED_JUMPTABLE_04 = pcStack_88;
    FUN_101dfead0(pcStack_88,pcVar9);
    func_0x000107c6142c(pcVar9);
    if (((ulong)UNRECOVERED_JUMPTABLE_04 & 1) != 0) {
      func_0x000107c61170(pcStack_88);
      func_0x000107c61170(pcVar26);
      func_0x000107c61170(unaff_x22[0xd]);
      UNRECOVERED_JUMPTABLE_05 = (code *)unaff_x22[1];
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_60) goto LAB_101dfccc4;
      goto LAB_101dfcd00;
    }
    UNRECOVERED_JUMPTABLE_05 = (code *)0x110;
    UNRECOVERED_JUMPTABLE = pcStack_88;
    func_0x000107c61174();
    func_0x000107c615b8();
    unaff_x22[0x10] = (ulong)UNRECOVERED_JUMPTABLE_05;
    *(ulong **)UNRECOVERED_JUMPTABLE_05 = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 8) = FUN_101dfcd04;
    pcVar9 = (code *)unaff_x22[0xc];
    uVar33 = unaff_x22[6];
    uVar35 = unaff_x22[7];
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_60) goto LAB_101dfcd00;
    uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
    puVar4 = &stack0xffffffffffffffe0;
    ppcVar5 = (code **)&stack0xffffffffffffffe0;
    lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa0) = UNRECOVERED_JUMPTABLE;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8) = pcVar9;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x90) = uVar35;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x98) = pcVar26;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x88) = uVar33;
    lVar14 = 0;
    func_0x000107c5ede0();
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb0) = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb8) = lVar14;
    uVar33 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0xc0) = uVar33;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
      UNRECOVERED_JUMPTABLE_04 = FUN_101dfa808;
      lVar14 = 0;
      lVar17 = 0;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
    iVar6 = (int)*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
    func_0x000107c5d0f0();
    if (*(char *)(lVar17 + 0x40) == '\x01' && iVar6 == 1) {
      pcVar24 = (code *)0x150;
      func_0x000107c615b8();
      *(code **)(UNRECOVERED_JUMPTABLE_05 + 200) = pcVar24;
      *(code **)pcVar24 = UNRECOVERED_JUMPTABLE_05;
      *(code **)(pcVar24 + 8) = FUN_101dfa954;
      lVar17 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa0);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x90);
      lVar16 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
      UNRECOVERED_JUMPTABLE_03 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x88);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) goto LAB_101dfa950;
      pcVar26 = FUN_101dfa808;
      puVar34 = (ulong *)((ulong)&uStack_10 & 0xefffffffffffffff);
code_r0x000101dfb414:
      ppcVar5 = (code **)(puVar4 + -0x20);
      *(ulong *)(puVar4 + -0x10) = (ulong)puVar34 | 0x1000000000000000;
      *(code **)(puVar4 + -8) = pcVar26;
      *(code **)(puVar4 + -0x18) = pcVar24;
      *(undefined8 *)(puVar4 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(long *)(pcVar24 + 0xa0) = lVar17;
      *(code **)(pcVar24 + 0xa8) = UNRECOVERED_JUMPTABLE_04;
      *(code **)(pcVar24 + 0x90) = UNRECOVERED_JUMPTABLE;
      *(long *)(pcVar24 + 0x98) = lVar16;
      *(code **)(pcVar24 + 0x88) = UNRECOVERED_JUMPTABLE_03;
      lVar14 = 0;
      func_0x000107c5ede0();
      *(long *)(pcVar24 + 0xb0) = lVar14;
      lVar14 = *(long *)(lVar14 + -8);
      *(long *)(pcVar24 + 0xb8) = lVar14;
      uVar33 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(pcVar24 + 0xc0) = uVar33;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x20)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb4a8;
        lVar14 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar4 + -0x40) = unaff_x21;
      *(ulong *)(puVar4 + -0x30) = (ulong)(puVar4 + -0x10) | 0x1000000000000000;
      *(code **)(puVar4 + -0x28) = FUN_101dfb4a8;
      *(code **)(puVar4 + -0x38) = pcVar24;
      *(undefined8 *)(puVar4 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c5fd64();
      UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar24 + 0xa8) + 0x38);
      UNRECOVERED_JUMPTABLE = (code *)0x70;
      func_0x000107c615b8();
      *(code **)(pcVar24 + 200) = UNRECOVERED_JUMPTABLE;
      *(code **)UNRECOVERED_JUMPTABLE = pcVar24;
      *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101dfb57c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x48)) {
        UNRECOVERED_JUMPTABLE_05 = pcVar24 + 0x10;
        UNRECOVERED_JUMPTABLE_03 = *(code **)(puVar4 + -0x28);
        uVar33 = *(ulong *)(puVar4 + -0x30) & 0xefffffffffffffff;
        pcVar24 = UNRECOVERED_JUMPTABLE;
        goto LAB_104875f04;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar4 + -0x60) = (ulong)(puVar4 + -0x30) | 0x1000000000000000;
      *(code **)(puVar4 + -0x58) = FUN_101dfb57c;
      *(code **)(puVar4 + -0x68) = pcVar24;
      *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar14 = *(long *)pcVar24;
      *(long *)(puVar4 + -0x68) = lVar14;
      plVar23 = *(long **)pcVar24;
      func_0x000107c615c0(*(undefined8 *)(lVar14 + 200));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x70)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb5f0;
        lVar14 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(code **)(puVar4 + -0xa8) = unaff_x24;
      *(code **)(puVar4 + -0xa0) = unaff_x23;
      *(undefined8 *)(puVar4 + -0x98) = 0;
      *(code **)(puVar4 + -0x90) = unaff_x19;
      *(ulong *)(puVar4 + -0x80) = (ulong)(puVar4 + -0x60) | 0x1000000000000000;
      *(code **)(puVar4 + -0x78) = FUN_101dfb5f0;
      *(long **)(puVar4 + -0x88) = plVar23;
      *(undefined8 *)(puVar4 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar14 = plVar23[5];
      lVar17 = plVar23[6];
      plVar7 = plVar23 + 2;
      func_0x0001000a8868(plVar7,lVar14);
      piVar25 = *(int **)(lVar17 + 0x10);
      iVar6 = *piVar25;
      puVar22 = (undefined8 *)(ulong)(uint)piVar25[1];
      func_0x000107c615b8();
      plVar23[0x1a] = (long)puVar22;
      *puVar22 = plVar23;
      puVar22[1] = FUN_101dfb6a4;
      UNRECOVERED_JUMPTABLE_04 = (code *)plVar23[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0xb0)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar6 + (long)piVar25))
                  (UNRECOVERED_JUMPTABLE_04,plVar23[0x12],plVar23[0x13],1,lVar14,lVar17);
        return UNRECOVERED_JUMPTABLE_04;
      }
      func_0x000107c60e78();
      ppcVar5 = (code **)(puVar4 + -0xd0);
      *(ulong *)(puVar4 + -0xc0) = (ulong)(puVar4 + -0x80) | 0x1000000000000000;
      *(code **)(puVar4 + -0xb8) = FUN_101dfb6a4;
      *(long **)(puVar4 + -200) = plVar23;
      *(undefined8 *)(puVar4 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar16 = *plVar23;
      *(long *)(puVar4 + -200) = lVar16;
      plVar23 = (long *)*plVar23;
      *(undefined8 **)(lVar16 + 0xd8) = puVar22;
      *(long **)(lVar16 + 0xe0) = plVar7;
      func_0x000107c615c0(*(undefined8 *)(lVar16 + 0xd0));
      if (plVar7 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0xd0))
        goto LAB_101dfb744;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb748;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0xd0)) {
LAB_101dfb744:
          func_0x000107c60e78();
          *(long *)(puVar4 + -0xf8) = lVar17;
          *(long *)(puVar4 + -0xf0) = lVar14;
          *(ulong *)(puVar4 + -0xe0) = (ulong)(puVar4 + -0xc0) | 0x1000000000000000;
          *(code **)(puVar4 + -0xd8) = FUN_101dfb748;
          *(long **)(puVar4 + -0xe8) = plVar23;
          *(undefined8 *)(puVar4 + -0x100) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar14 = plVar23[0x15];
          func_0x0001000834e4(plVar23 + 2);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar14 + 0x18);
          lVar14 = 0x112d51300;
          puVar20 = &UNK_10d917f90;
          func_0x0001000285a8();
          UNRECOVERED_JUMPTABLE_05 = (code *)(plVar23 + 0xc);
          *(long *)UNRECOVERED_JUMPTABLE_05 = lVar14;
          pcVar9 = (code *)0xa0;
          func_0x000107c615b8();
          plVar23[0x1d] = (long)pcVar9;
          UNRECOVERED_JUMPTABLE_03 = pcVar9;
          func_0x000100faa6a0();
          plVar23[0x1e] = (long)UNRECOVERED_JUMPTABLE_03;
          *(long **)pcVar9 = plVar23;
          *(code **)(pcVar9 + 8) = FUN_101dfb814;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x100)) {
            UNRECOVERED_JUMPTABLE = (code *)(plVar23 + 0xb);
            pcVar24 = (code *)(plVar23 + 0xd);
            pcVar26 = *(code **)(puVar4 + -0xd8);
            uVar33 = *(ulong *)(puVar4 + -0xf0);
            uVar35 = *(ulong *)(puVar4 + -0xe0) & 0xefffffffffffffff;
            goto LAB_104876574;
          }
          func_0x000107c60e78();
          *(ulong *)(puVar4 + -0x110) = (ulong)(puVar4 + -0xe0) | 0x1000000000000000;
          *(code **)(puVar4 + -0x108) = FUN_101dfb814;
          *(long **)(puVar4 + -0x118) = plVar23;
          *(undefined8 *)(puVar4 + -0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar14 = *plVar23;
          *(long *)(puVar4 + -0x118) = lVar14;
          lVar17 = *plVar23;
          *(code **)(lVar14 + 0xf8) = UNRECOVERED_JUMPTABLE_04;
          func_0x000107c615c0(*(undefined8 *)(lVar14 + 0xe8));
          if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0x120))
            goto LAB_101dfb8b0;
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfb8b4;
          }
          else {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar4 + -0x120)) {
LAB_101dfb8b0:
              func_0x000107c60e78();
              *(code **)(puVar4 + -0x178) = unaff_x28;
              *(code **)(puVar4 + -0x170) = unaff_x27;
              *(code **)(puVar4 + -0x168) = unaff_x26;
              *(code **)(puVar4 + -0x160) = unaff_x25;
              *(long *)(puVar4 + -0x158) = (long)iVar6;
              *(int **)(puVar4 + -0x150) = piVar25;
              *(code **)(puVar4 + -0x148) = pcVar9;
              *(code **)(puVar4 + -0x140) = UNRECOVERED_JUMPTABLE_05;
              *(ulong *)(puVar4 + -0x130) = (ulong)(puVar4 + -0x110) | 0x1000000000000000;
              *(code **)(puVar4 + -0x128) = FUN_101dfb8b4;
              *(long *)(puVar4 + -0x138) = lVar17;
              *(undefined8 *)(puVar4 + -0x180) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              *(long *)(lVar17 + 0x70) = 0;
              puVar18 = *(undefined8 **)(lVar17 + 0x58);
              *(undefined8 **)(lVar17 + 0x100) = puVar18;
              puVar22 = puVar18;
              func_0x000107c40984();
              func_0x000107c61180();
              *(undefined8 **)(lVar17 + 0x108) = puVar22;
              lVar14 = *(long *)(lVar17 + 0x70);
              func_0x000107c61174();
              puVar32 = puVar22;
              func_0x000107c4403c();
              func_0x000107c61180();
              if (puVar32 == (undefined8 *)0x0) {
                if (lVar14 != 0) goto LAB_101dfb944;
                puVar21 = *(undefined8 **)(lVar17 + 0xd8);
                uVar19 = *(undefined8 *)(lVar17 + 0xc0);
                puVar32 = puVar22;
                func_0x000107c4407c(puVar22);
                func_0x000107c61180();
                puVar8 = puVar32;
                func_0x000107c5faec();
                func_0x000107c61170(puVar32);
                puVar10 = puVar20;
                func_0x000107c5ed80(uVar19,puVar8);
                func_0x000107c6142c(puVar20);
                puVar32 = puVar21;
                func_0x000107c614f0();
                func_0x000107c4407c();
                func_0x000107c61180();
                lVar14 = *(long *)(lVar17 + 0xa0);
                if (puVar21 == (undefined8 *)0x0) {
                  func_0x000107c4a8c4();
                  func_0x000107c61180();
                  if (lVar14 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar28 = *(long *)(lVar17 + 0xa0);
                  lVar16 = lVar14;
                  func_0x000107c5ee30();
                  *(undefined **)(puVar4 + -400) = puVar10;
                  func_0x000107c61170(lVar14);
                  func_0x000107c4a804();
                  func_0x000107c61180();
                  if (lVar28 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar14 = lVar28;
                  func_0x000107c5ee30();
                  puVar20 = puVar10;
                  func_0x000107c61170(lVar28);
                  FUN_101dffdc4();
                  *(long *)(puVar4 + -0x1a0) = lVar14;
                  *(undefined **)(puVar4 + -0x198) = puVar10;
                  if ((ulong)puVar20 >> 0x3c < 0xf) {
                    func_0x0001000d224c(lVar17 + 0x38);
                    uVar33 = *(ulong *)(lVar17 + 0x38);
                    lVar28 = *(long *)(lVar17 + 0x40);
                    uVar35 = uVar33;
                    func_0x000107c614f0();
                    *(ulong *)(lVar17 + 0x78) = uVar33;
                    (**(code **)(*(long *)(lVar28 + 8) + 0x28))();
                    func_0x000107c615e8(uVar33);
                    *(undefined8 **)(puVar4 + -0x1b0) = puVar32;
                    *(undefined **)(puVar4 + -0x1a8) = puVar20;
                    func_0x000107c5ee20(puVar32,puVar20);
                    *(long *)(puVar4 + -0x1b8) = lVar16;
                    func_0x000107c5ee20(lVar16,*(undefined8 *)(puVar4 + -400));
                    uVar19 = *(undefined8 *)(puVar4 + -0x198);
                    func_0x000107c5ee20(lVar14,uVar19);
                    puVar8 = puVar32;
                    if ((uVar35 & 1) == 0) {
                      func_0x000107c51bb8();
                    }
                    else {
                      func_0x000107c51bbc();
                    }
                    func_0x000107c61180();
                    func_0x000107c61170(lVar14);
                    func_0x000107c61170(lVar16);
                    func_0x000107c61170();
                    if (puVar8 != (undefined8 *)0x0) {
                      lVar14 = *(long *)(lVar17 + 0xf8);
                      puVar21 = *(undefined8 **)(lVar17 + 0xc0);
                      puVar32 = puVar8;
                      func_0x000107c5ee30(puVar8);
                      func_0x000107c61170(puVar8);
                      func_0x000107c5ee40(puVar21,1,puVar32,uVar19);
                      if (lVar14 == 0) {
                        func_0x0001000b44c0(*(undefined8 *)(puVar4 + -0x1b0),
                                            *(undefined8 *)(puVar4 + -0x1a8));
                        func_0x00010006c090(puVar32,uVar19);
                        uVar19 = *(undefined8 *)(puVar4 + -0x1b8);
                        func_0x00010006c090(*(undefined8 *)(puVar4 + -0x1a0),
                                            *(undefined8 *)(puVar4 + -0x198));
                        func_0x00010006c090(uVar19,*(undefined8 *)(puVar4 + -400));
                        func_0x0001000d224c(lVar17 + 0x48);
                        uVar33 = *(ulong *)(lVar17 + 0x48);
                        lVar14 = *(long *)(lVar17 + 0x50);
                        uVar35 = uVar33;
                        func_0x000107c614f0();
                        *(ulong *)(lVar17 + 0x80) = uVar33;
                        (**(code **)(*(long *)(lVar14 + 8) + 0x18))();
                        func_0x000107c615e8(uVar33);
                        if ((uVar35 & 1) == 0) {
                          uVar19 = *(undefined8 *)(lVar17 + 0x100);
                          (**(code **)(*(long *)(lVar17 + 0xb8) + 8))
                                    (*(undefined8 *)(lVar17 + 0xc0),*(undefined8 *)(lVar17 + 0xb0));
                          func_0x000107c615e8(uVar19);
                        }
                        else {
                          uVar19 = *(undefined8 *)(lVar17 + 0x100);
                          lVar14 = *(long *)(lVar17 + 0xb8);
                          uVar3 = *(undefined8 *)(lVar17 + 0xc0);
                          uVar30 = *(undefined8 *)(lVar17 + 0xb0);
                          func_0x000107c4c4d8(*(undefined8 *)(lVar17 + 0x108));
                          func_0x000107c615e8(uVar19);
                          (**(code **)(lVar14 + 8))(uVar3,uVar30);
                        }
                        uVar19 = *(undefined8 *)(lVar17 + 0xc0);
                        func_0x000107c615e8(*(undefined8 *)(lVar17 + 0xd8));
                        func_0x000107c615c0(uVar19);
                        UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar17 + 0x108);
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x180))
                        {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(lVar17 + 8))(UNRECOVERED_JUMPTABLE_04);
                          return UNRECOVERED_JUMPTABLE_04;
                        }
                        goto LAB_101dfbf08;
                      }
                      lVar16 = *(long *)(puVar4 + -0x1b8);
                      FUN_101df6cf4();
                      func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
                      puVar21[1] = 0;
                      *puVar21 = 0x14;
                      *(undefined1 *)(puVar21 + 2) = 0x80;
                      func_0x000107c61654();
                      func_0x0001000b44c0(*(undefined8 *)(puVar4 + -0x1b0),
                                          *(undefined8 *)(puVar4 + -0x1a8));
                      func_0x00010006c090(puVar32,uVar19);
                      func_0x000107c614ac(lVar14);
                      goto LAB_101dfbd5c;
                    }
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar32,0,0);
                    puVar32[1] = 0;
                    *puVar32 = 10;
                    *(undefined1 *)(puVar32 + 2) = 0x80;
                    func_0x000107c61654();
                    func_0x0001000b44c0(*(undefined8 *)(puVar4 + -0x1b0),
                                        *(undefined8 *)(puVar4 + -0x1a8));
                    uVar19 = *(undefined8 *)(puVar4 + -400);
                    lVar16 = *(long *)(puVar4 + -0x1b8);
                  }
                  else {
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar32,0,0);
                    puVar32[1] = 0;
                    *puVar32 = 10;
                    *(undefined1 *)(puVar32 + 2) = 0x80;
                    func_0x000107c61654();
LAB_101dfbd5c:
                    uVar19 = *(undefined8 *)(puVar4 + -400);
                  }
                  uVar30 = *(undefined8 *)(lVar17 + 0xd8);
                  lVar14 = *(long *)(lVar17 + 0xb8);
                  uVar3 = *(undefined8 *)(lVar17 + 0xc0);
                  uVar31 = *(undefined8 *)(lVar17 + 0xb0);
                  func_0x00010006c090(*(undefined8 *)(puVar4 + -0x1a0),
                                      *(undefined8 *)(puVar4 + -0x198));
                  func_0x00010006c090(lVar16,uVar19);
                  func_0x000107c615e8(puVar22);
                  func_0x000107c615e8(puVar18);
                  (**(code **)(lVar14 + 8))(uVar3,uVar31);
                  goto LAB_101dfb99c;
                }
                puVar22 = puVar21;
                func_0x000107c5faec();
                puVar20 = puVar10;
                func_0x000107c61170(puVar21);
                *(undefined **)(lVar17 + 0x110) = puVar10;
                func_0x000107c4a8c4();
                func_0x000107c61180();
                if (lVar14 == 0) goto LAB_101dfbf0c;
                lVar28 = *(long *)(lVar17 + 0xa0);
                lVar16 = lVar14;
                func_0x000107c5ee30();
                puVar11 = puVar20;
                func_0x000107c61170(lVar14);
                *(long *)(lVar17 + 0x118) = lVar16;
                *(undefined **)(lVar17 + 0x120) = puVar20;
                func_0x000107c4a804();
                func_0x000107c61180();
                if (lVar28 == 0) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
                  (*UNRECOVERED_JUMPTABLE_04)();
                }
                lVar14 = lVar28;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar28);
                *(long *)(lVar17 + 0x128) = lVar14;
                *(undefined **)(lVar17 + 0x130) = puVar11;
                plVar23 = (long *)0xa0;
                func_0x000107c615b8();
                *(long **)(lVar17 + 0x138) = plVar23;
                *plVar23 = lVar17;
                plVar23[1] = (long)FUN_101dfbf1c;
                lVar17 = *(long *)(lVar17 + 0xc0);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x180)) {
                  uVar19 = *(undefined8 *)(puVar4 + -0x148);
                  uVar31 = *(undefined8 *)(puVar4 + -0x140);
                  uVar3 = *(undefined8 *)(puVar4 + -0x158);
                  uVar1 = *(undefined8 *)(puVar4 + -0x150);
                  uVar30 = *(undefined8 *)(puVar4 + -0x168);
                  uVar2 = *(undefined8 *)(puVar4 + -0x160);
                  *(ulong *)(puVar4 + -0x130) =
                       *(ulong *)(puVar4 + -0x130) & 0xefffffffffffffff | 0x1000000000000000;
                  *(undefined8 *)(puVar4 + -0x128) = *(undefined8 *)(puVar4 + -0x128);
                  *(long **)(puVar4 + -0x138) = plVar23;
                  *(undefined8 *)(puVar4 + -0x140) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  plVar23[0xe] = lVar14;
                  plVar23[0xf] = (long)puVar11;
                  plVar23[0xc] = lVar16;
                  plVar23[0xd] = (long)puVar20;
                  plVar23[10] = (long)puVar10;
                  plVar23[0xb] = lVar17;
                  plVar23[9] = (long)puVar22;
                  lVar14 = 0;
                  func_0x000107c5ede0();
                  plVar23[0x10] = lVar14;
                  lVar14 = *(long *)(lVar14 + -8);
                  plVar23[0x11] = lVar14;
                  uVar33 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
                  func_0x000107c615b8();
                  plVar23[0x12] = uVar33;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x140)) {
                    UNRECOVERED_JUMPTABLE_04 = FUN_101dfe3fc;
                    lVar14 = 0;
                    lVar17 = 0;
                    goto _swift_task_switch;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar4 + -0x180) = uVar2;
                  *(undefined8 *)(puVar4 + -0x178) = uVar3;
                  *(undefined8 *)(puVar4 + -0x170) = uVar1;
                  *(undefined8 *)(puVar4 + -0x168) = uVar19;
                  *(undefined8 *)(puVar4 + -0x160) = uVar31;
                  *(ulong *)(puVar4 + -0x150) = (ulong)(puVar4 + -0x130) | 0x1000000000000000;
                  *(code **)(puVar4 + -0x148) = FUN_101dfe3fc;
                  *(long **)(puVar4 + -0x158) = plVar23;
                  *(undefined8 *)(puVar4 + -0x188) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  puVar20 = (undefined *)plVar23[0xe];
                  lVar14 = plVar23[0xf];
                  uVar33 = plVar23[0xc];
                  lVar17 = plVar23[0xd];
                  lVar16 = plVar23[0xb];
                  func_0x000107c5ed80(plVar23[0x12],plVar23[9],plVar23[10]);
                  func_0x000107c5ee20(uVar33,lVar17);
                  func_0x000107c5ee20(puVar20,lVar14);
                  puVar10 = puVar20;
                  func_0x000107c5ed90();
                  puVar11 = puVar10;
                  func_0x000107c5ed90();
                  uVar35 = uVar33;
                  func_0x000107c3127c(uVar33,puVar20,puVar10,puVar11);
                  func_0x000107c61170(puVar11);
                  func_0x000107c61170(puVar10);
                  func_0x000107c61170(puVar20);
                  func_0x000107c61170(uVar33);
                  if ((uVar35 & 1) == 0) {
                    lVar14 = plVar23[9];
                    lVar17 = plVar23[10];
                    puVar20 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                    func_0x000107c61168();
                    puVar10 = puVar20;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    lVar28 = lVar14;
                    func_0x000107c5fadc(lVar14,lVar17);
                    func_0x000107c43418(puVar10);
                    func_0x000107c61170(lVar28);
                    func_0x000107c61170(puVar10);
                    puVar10 = puVar20;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    func_0x000107c5fadc(lVar14,lVar17);
                    plVar23[6] = 0;
                    puVar11 = puVar10;
                    func_0x000107c3e388();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar14);
                    func_0x000107c61170(puVar10);
                    lVar14 = plVar23[6];
                    if (puVar11 == (undefined *)0x0) {
                      lVar17 = lVar14;
                      func_0x000107c61174(lVar14);
                      func_0x000107c5ed30(lVar14);
                      func_0x000107c61170(lVar17);
                      func_0x000107c61654();
                      func_0x000107c614ac(lVar14);
LAB_101dfe678:
                      plVar23[3] = 0;
                      plVar23[2] = 0;
                      plVar23[5] = 0;
                      plVar23[4] = 0;
LAB_101dfe680:
                      func_0x000101dfed18(plVar23 + 2,0x112d387f8,&UNK_10d902650);
                    }
                    else {
                      uVar33 = 0;
                      FUN_101a64068();
                      uVar19 = 0x112defdc0;
                      func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
                      puVar10 = PTR___sypN_11034f1a8;
                      puVar12 = puVar11;
                      func_0x000107c5f9e8(puVar11,uVar33,PTR___sypN_11034f1a8 + 8,uVar19);
                      func_0x000107c61174(lVar14);
                      func_0x000107c61170(puVar11);
                      if (puVar12 == (undefined *)0x0) goto LAB_101dfe678;
                      if (*(long *)(puVar12 + 0x10) == 0) {
LAB_101dfe7c0:
                        plVar23[3] = 0;
                        plVar23[2] = 0;
                        plVar23[5] = 0;
                        plVar23[4] = 0;
                      }
                      else {
                        lVar14 = *(long *)PTR__NSFileSize_110345448;
                        func_0x000107c61434(puVar12);
                        FUN_101aae36c(lVar14);
                        if ((uVar33 & 1) == 0) {
                          func_0x000107c6142c(puVar12);
                          goto LAB_101dfe7c0;
                        }
                        func_0x0001000bb420(*(long *)(puVar12 + 0x38) + lVar14 * 0x20,plVar23 + 2);
                        func_0x000107c6142c(puVar12);
                      }
                      func_0x000107c6142c(puVar12);
                      if (plVar23[5] == 0) goto LAB_101dfe680;
                      uVar19 = 0;
                      func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                      plVar7 = plVar23 + 8;
                      func_0x000107c6147c(plVar7,plVar23 + 2,puVar10 + 8,uVar19,6);
                      if (((ulong)plVar7 & 1) != 0) {
                        lVar14 = plVar23[8];
                        func_0x000107c4c0a8(lVar14);
                        func_0x000107c61170(lVar14);
                      }
                    }
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    puVar10 = puVar20;
                    func_0x000107c5ed90();
                    plVar23[7] = 0;
                    puVar11 = puVar20;
                    func_0x000107c4ff50();
                    func_0x000107c61170(puVar10);
                    func_0x000107c61170(puVar20);
                    puVar22 = (undefined8 *)plVar23[7];
                    if ((int)puVar11 == 0) {
                      puVar32 = puVar22;
                      func_0x000107c61174(puVar22);
                      func_0x000107c5ed30();
                      func_0x000107c61170(puVar32);
                      func_0x000107c61654();
                      func_0x000107c614ac();
                    }
                    else {
                      func_0x000107c61174();
                    }
                    uVar35 = plVar23[0x11];
                    puVar20 = (undefined *)plVar23[0x12];
                    uVar33 = plVar23[0x10];
                    FUN_101df6cf4();
                    puVar11 = &UNK_1106e3fc0;
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
                    puVar22[1] = 0;
                    *puVar22 = 10;
                    *(undefined1 *)(puVar22 + 2) = 0x80;
                    func_0x000107c61654();
                    uVar15 = uVar33;
                    (**(code **)(uVar35 + 8))(puVar20);
                    func_0x000107c615c0(puVar20);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar23[1];
                    puVar10 = puVar11;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x188)) {
LAB_101dfe79c:
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE_04)();
                      return UNRECOVERED_JUMPTABLE_04;
                    }
                  }
                  else {
                    puVar11 = (undefined *)plVar23[0x12];
                    uVar15 = plVar23[0x10];
                    (**(code **)(plVar23[0x11] + 8))(puVar11);
                    func_0x000107c615c0(puVar11);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar23[1];
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x188))
                    goto LAB_101dfe79c;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar4 + -0x1e0) = uVar30;
                  *(long *)(puVar4 + -0x1d8) = lVar16;
                  *(ulong *)(puVar4 + -0x1d0) = uVar35;
                  *(ulong *)(puVar4 + -0x1c8) = uVar33;
                  *(long **)(puVar4 + -0x1c0) = plVar23;
                  *(undefined **)(puVar4 + -0x1b8) = puVar10;
                  *(undefined **)(puVar4 + -0x1b0) = puVar11;
                  *(undefined **)(puVar4 + -0x1a8) = puVar20;
                  *(undefined1 **)(puVar4 + -0x1a0) = puVar4 + -0x150;
                  *(code **)(puVar4 + -0x198) = FUN_101dfe828;
                  uVar33 = uVar15;
                  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
LAB_101dfe880:
                    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
                    uVar35 = 0xf000000000000000;
                    if (uVar15 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
                    uVar13 = uVar15;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    if (uVar13 == 0) goto LAB_101dfe8bc;
                    uVar27 = uVar13;
                    func_0x000107c5ee30();
                    func_0x000107c61170(uVar13);
                  }
                  else {
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar35 = uVar15;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    uVar33 = uVar35;
                    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_101dfe880;
                    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
                    func_0x000107c5ee30();
                    uVar33 = uVar35;
                    func_0x000107c61170(UNRECOVERED_JUMPTABLE);
                    if (uVar15 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
                    uVar27 = 0;
                    uVar33 = 0xf000000000000000;
                  }
                  if (uVar35 >> 0x3c < 0xf) {
                    if (uVar33 >> 0x3c < 0xf) {
                      func_0x000100de78a0(UNRECOVERED_JUMPTABLE_03,uVar35);
                      func_0x000100de78a0(uVar27,uVar33);
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03;
                      func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_03,uVar35,uVar27,uVar33);
                      func_0x0001000b44c0(uVar27,uVar33);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar35);
                      func_0x0001000b44c0(uVar27,uVar33);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
                      if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                        return (code *)0x0;
                      }
                      goto LAB_101dfe974;
                    }
                  }
                  else if (0xe < uVar33 >> 0x3c) {
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
LAB_101dfe974:
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar33 = uVar35;
                    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
joined_r0x000101dfe9b0:
                      uVar35 = 0xf000000000000000;
                      if (uVar15 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (uVar15 == 0) {
                        uVar15 = 0;
                        goto LAB_101dfe9f8;
                      }
                      uVar27 = uVar15;
                      func_0x000107c5ee30();
                      func_0x000107c61170(uVar15);
                    }
                    else {
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
                        UNRECOVERED_JUMPTABLE = (code *)0x0;
                        uVar33 = uVar35;
                        goto joined_r0x000101dfe9b0;
                      }
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                      func_0x000107c5ee30();
                      uVar33 = uVar35;
                      func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
                      if (uVar15 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
                      uVar33 = 0xf000000000000000;
                      uVar27 = uVar15;
                    }
                    if (uVar35 >> 0x3c < 0xf) {
                      if (uVar33 >> 0x3c < 0xf) {
                        func_0x000100de78a0(UNRECOVERED_JUMPTABLE,uVar35);
                        func_0x000100de78a0(uVar27,uVar33);
                        UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE;
                        func_0x000100e25fcc(UNRECOVERED_JUMPTABLE,uVar35,uVar27,uVar33);
                        func_0x0001000b44c0(uVar27,uVar33);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar35);
                        func_0x0001000b44c0(uVar27,uVar33);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar35);
                        return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_04 & 1);
                      }
                    }
                    else if (0xe < uVar33 >> 0x3c) {
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar35);
                      return (code *)0x1;
                    }
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar35);
                    goto LAB_101dfea48;
                  }
                  func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar35);
LAB_101dfea48:
                  func_0x0001000b44c0(uVar27,uVar33);
                  return (code *)0x0;
                }
              }
              else {
                func_0x000107c61170();
LAB_101dfb944:
                uVar30 = *(undefined8 *)(lVar17 + 0xd8);
                FUN_101df6cf4();
                func_0x000107c613f8(&UNK_1106e3fc0,puVar32,0,0);
                puVar32[1] = 0;
                *puVar32 = 7;
                *(undefined1 *)(puVar32 + 2) = 0x80;
                func_0x000107c61654();
                func_0x000107c615e8(puVar18);
                func_0x000107c615e8(puVar22);
                func_0x000107c61170(lVar14);
LAB_101dfb99c:
                func_0x000107c615e8(uVar30);
                func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xc0));
                UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar17 + 8);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x180)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE_04)();
                  return UNRECOVERED_JUMPTABLE_04;
                }
              }
LAB_101dfbf08:
              func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
              (*UNRECOVERED_JUMPTABLE_04)();
            }
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfc208;
          }
          lVar14 = 0;
          lVar17 = 0;
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfc1a0;
      }
      lVar14 = 0;
      lVar17 = 0;
      goto _swift_task_switch;
    }
    unaff_x21 = 0;
    func_0x000107c5fd64();
    UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8) + 0x38);
    pcVar24 = (code *)0x70;
    func_0x000107c615b8();
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xd0) = pcVar24;
    *(code **)pcVar24 = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar24 + 8) = FUN_101dfa9f8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar14) {
LAB_101dfa950:
      func_0x000107c60e78();
      uStack_60 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
      lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_03 = *(code **)UNRECOVERED_JUMPTABLE_05;
      plVar23 = *(long **)UNRECOVERED_JUMPTABLE_05;
      uStack_78 = unaff_x21;
      pcStack_70 = unaff_x19;
      pcStack_68 = UNRECOVERED_JUMPTABLE_03;
      func_0x000107c615c0(*(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 200));
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_03 + 0xc0);
      func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
        UNRECOVERED_JUMPTABLE = pcVar24;
      }
      else {
        lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar14 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x000101dfa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar23[1])();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
      pcStack_88 = FUN_101dfa9f8;
      uStack_a0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      pcStack_98 = (code *)*plVar23;
      puVar22 = (undefined8 *)*plVar23;
      func_0x000107c615c0(*(undefined8 *)(pcStack_98 + 0xd0));
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_a0) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfaa6c;
        lVar14 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      pcStack_b0 = (code *)((ulong)&uStack_90 | 0x1000000000000000);
      uStack_e0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      uVar33 = puVar22[5];
      lVar17 = puVar22[6];
      puVar32 = puVar22 + 2;
      pcStack_d8 = unaff_x24;
      pcStack_d0 = unaff_x23;
      pcStack_c8 = UNRECOVERED_JUMPTABLE_03;
      pcStack_c0 = pcVar24;
      puStack_b8 = puVar22;
      func_0x0001000a8868(puVar32,uVar33);
      piVar25 = *(int **)(lVar17 + 8);
      iVar6 = *piVar25;
      puVar18 = (undefined8 *)(ulong)(uint)piVar25[1];
      func_0x000107c615b8();
      puVar22[0x1b] = puVar18;
      *puVar18 = puVar22;
      puVar18[1] = FUN_101dfab20;
      lVar14 = puVar22[0x12];
      UNRECOVERED_JUMPTABLE_04 = (code *)puVar22[0x11];
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*((code *)(long)iVar6 + (long)piVar25))
                  (UNRECOVERED_JUMPTABLE_04,lVar14,puVar22[0x13],1,uVar33,lVar17);
        return UNRECOVERED_JUMPTABLE_04;
      }
      func_0x000107c60e78();
      pcStack_f0 = (code *)((ulong)&pcStack_b0 | 0x1000000000000000);
      ppcVar5 = &pcStack_100;
      pcStack_e8 = FUN_101dfab20;
      pcStack_100 = *(code **)PTR____stack_chk_guard_11034bdc0;
      pcStack_f8 = (code *)*puVar22;
      pcVar24 = (code *)*puVar22;
      *(undefined8 **)(pcStack_f8 + 0xe0) = puVar18;
      *(long *)(pcStack_f8 + 0xe8) = lVar14;
      *(undefined8 **)(pcStack_f8 + 0xf0) = puVar32;
      func_0x000107c615c0(*(long *)(pcStack_f8 + 0xd8));
      if (puVar32 == (undefined8 *)0x0) {
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_100) {
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfabc8;
          goto LAB_101dfabac;
        }
      }
      else if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_100) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb30c;
LAB_101dfabac:
        lVar14 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      uStack_110 = (ulong)&pcStack_f0 | 0x1000000000000000;
      pcStack_108 = FUN_101dfabc8;
      lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar14 = *(long *)(pcVar24 + 0xa8);
      lStack_128 = lVar17;
      uStack_120 = uVar33;
      pcStack_118 = pcVar24;
      func_0x0001000834e4(pcVar24 + 0x10);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar14 + 0x18);
      lVar14 = 0x112d51300;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10d917f90;
      func_0x0001000285a8();
      UNRECOVERED_JUMPTABLE_05 = pcVar24 + 0x60;
      *(long *)UNRECOVERED_JUMPTABLE_05 = lVar14;
      pcVar9 = (code *)0xa0;
      func_0x000107c615b8();
      *(code **)(pcVar24 + 0xf8) = pcVar9;
      UNRECOVERED_JUMPTABLE_03 = pcVar9;
      func_0x000100faa6a0();
      *(code **)(pcVar24 + 0x100) = UNRECOVERED_JUMPTABLE_03;
      *(code **)pcVar9 = pcVar24;
      *(code **)(pcVar9 + 8) = FUN_101dfac94;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
        func_0x000107c60e78();
        uStack_140 = (ulong)&uStack_110 | 0x1000000000000000;
        pcStack_138 = FUN_101dfac94;
        pcStack_150 = *(code **)PTR____stack_chk_guard_11034bdc0;
        pcStack_148 = *(code **)pcVar24;
        pcVar24 = *(code **)pcVar24;
        *(code **)(pcStack_148 + 0x108) = UNRECOVERED_JUMPTABLE_04;
        func_0x000107c615c0(*(undefined8 *)(pcStack_148 + 0xf8));
        if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_150) goto LAB_101dfad30;
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfad34;
        }
        else {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_150) {
LAB_101dfad30:
            func_0x000107c60e78();
            pcStack_160 = (code *)((ulong)&uStack_140 | 0x1000000000000000);
            pcStack_158 = FUN_101dfad34;
            pcStack_1b0 = *(code **)PTR____stack_chk_guard_11034bdc0;
            pcVar29 = pcVar24 + 0x70;
            *(long *)pcVar29 = 0;
            pcVar26 = *(code **)(pcVar24 + 0x58);
            UNRECOVERED_JUMPTABLE_03 = pcVar26;
            pcStack_1a8 = unaff_x28;
            pcStack_1a0 = unaff_x27;
            pcStack_198 = unaff_x26;
            pcStack_190 = unaff_x25;
            pcStack_188 = (code *)(long)iVar6;
            piStack_180 = piVar25;
            pcStack_178 = pcVar9;
            pcStack_170 = UNRECOVERED_JUMPTABLE_05;
            pcStack_168 = pcVar24;
            func_0x000107c40984();
            func_0x000107c61180();
            unaff_x24 = *(code **)pcVar29;
            func_0x000107c61174();
            UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
            func_0x000107c4403c();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
              if (unaff_x24 != (code *)0x0) goto LAB_101dfadbc;
              pcVar9 = *(code **)(pcVar24 + 0xa0);
              func_0x000107c4a8c4();
              func_0x000107c61180();
              UNRECOVERED_JUMPTABLE_04 = pcVar9;
              if (pcVar9 == (code *)0x0) {
LAB_101dfaf74:
                unaff_x25 = *(code **)(pcVar24 + 0xe0);
                unaff_x24 = *(code **)(pcVar24 + 0xe8);
                FUN_101df6cf4();
                puVar20 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 0x16;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x000107c615e8(pcVar26);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                goto LAB_101dfae20;
              }
              uVar33 = *(ulong *)(pcVar24 + 0xa0);
              func_0x000107c5ee30();
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE;
              func_0x000107c61170(pcVar9);
              func_0x000107c4a804();
              func_0x000107c61180();
              if (uVar33 == 0) {
                func_0x00010006c090(UNRECOVERED_JUMPTABLE_04,UNRECOVERED_JUMPTABLE);
                goto LAB_101dfaf74;
              }
              pcStack_1d8 = *(code **)(pcVar24 + 0xe0);
              uStack_1d0 = *(ulong *)(pcVar24 + 0xe8);
              lVar14 = *(long *)(pcVar24 + 0xa8);
              uVar35 = uVar33;
              pcStack_1c8 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5ee30();
              pcStack_1c0 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c61170(uVar33);
              lStack_1e8 = *(long *)(lVar14 + 0x30);
              func_0x0001000d224c(pcVar24 + 0x38);
              uVar33 = *(ulong *)(pcVar24 + 0x38);
              lVar14 = *(long *)(pcVar24 + 0x40);
              uVar15 = uVar33;
              func_0x000107c614f0();
              *(ulong *)(pcVar24 + 0x78) = uVar33;
              (**(code **)(*(long *)(lVar14 + 8) + 0x28))();
              unaff_x26 = pcStack_1c8;
              func_0x000107c615e8(uVar33);
              UNRECOVERED_JUMPTABLE_04 = pcStack_1d8;
              func_0x000107c5ee20(pcStack_1d8,uStack_1d0);
              pcVar9 = unaff_x26;
              pcStack_1d8 = UNRECOVERED_JUMPTABLE;
              func_0x000107c5ee20(unaff_x26,UNRECOVERED_JUMPTABLE);
              unaff_x27 = pcStack_1c0;
              UNRECOVERED_JUMPTABLE = pcStack_1c0;
              uStack_1d0 = uVar35;
              func_0x000107c5ee20(uVar35);
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_04;
              if ((uVar15 & 1) == 0) {
                func_0x000107c51bb8();
              }
              else {
                func_0x000107c51bbc();
              }
              func_0x000107c61180();
              func_0x000107c61170(uVar35);
              func_0x000107c61170(pcVar9);
              func_0x000107c61170();
              if (UNRECOVERED_JUMPTABLE_05 == (code *)0x0) {
                unaff_x25 = *(code **)(pcVar24 + 0xe0);
                unaff_x24 = *(code **)(pcVar24 + 0xe8);
                FUN_101df6cf4();
                puVar20 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(long *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(long *)UNRECOVERED_JUMPTABLE_04 = 10;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x26,pcStack_1d8);
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x00010006c090(uStack_1d0,unaff_x27);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar26);
                goto LAB_101dfae20;
              }
              pcStack_1e0 = *(code **)(pcVar24 + 0x108);
              puVar22 = *(undefined8 **)(pcVar24 + 0xc0);
              unaff_x25 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c5ee30();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_05);
              func_0x00010006c00c(unaff_x25,UNRECOVERED_JUMPTABLE);
              pcVar29 = UNRECOVERED_JUMPTABLE;
              func_0x0001000b44c0(unaff_x25,UNRECOVERED_JUMPTABLE);
              UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
              func_0x000107c4407c(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61180();
              pcVar9 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5faec();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
              func_0x000107c5ed80(puVar22,pcVar9,pcVar29);
              func_0x000107c6142c(pcVar29);
              unaff_x26 = pcStack_1e0;
              func_0x000107c5ee40(puVar22,1,unaff_x25,UNRECOVERED_JUMPTABLE);
              if (unaff_x26 != (code *)0x0) {
                pcVar29 = *(code **)(pcVar24 + 0xe0);
                UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 0xe8);
                lStack_1f0 = *(long *)(pcVar24 + 0xb8);
                pcStack_1e0 = *(code **)(pcVar24 + 0xc0);
                lStack_1e8 = *(long *)(pcVar24 + 0xb0);
                FUN_101df6cf4();
                puVar20 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
                puVar22[1] = 0;
                *puVar22 = 0x14;
                *(undefined1 *)(puVar22 + 2) = 0x80;
                func_0x000107c61654();
                func_0x00010006c090(pcStack_1c8,pcStack_1d8);
                func_0x00010006c090(pcVar29,UNRECOVERED_JUMPTABLE_04);
                func_0x00010006c090(uStack_1d0,pcStack_1c0);
                func_0x00010006c090(unaff_x25,UNRECOVERED_JUMPTABLE);
                func_0x000107c614ac(unaff_x26);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar26);
                (**(code **)(lStack_1f0 + 8))(pcStack_1e0,lStack_1e8);
                unaff_x24 = unaff_x25;
                unaff_x25 = UNRECOVERED_JUMPTABLE_04;
                unaff_x27 = UNRECOVERED_JUMPTABLE;
                goto LAB_101dfae20;
              }
              pcStack_1e0 = UNRECOVERED_JUMPTABLE;
              func_0x0001000d224c(pcVar24 + 0x48);
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 0x48);
              lVar14 = *(long *)(pcVar24 + 0x50);
              unaff_x24 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c614f0();
              *(code **)(pcVar24 + 0x80) = UNRECOVERED_JUMPTABLE_04;
              (**(code **)(*(long *)(lVar14 + 8) + 0x18))();
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_04);
              pcVar29 = *(code **)(pcVar24 + 0xe0);
              unaff_x26 = *(code **)(pcVar24 + 0xe8);
              unaff_x27 = *(code **)(pcVar24 + 0xb8);
              lVar14 = *(long *)(pcVar24 + 0xc0);
              puVar20 = *(undefined **)(pcVar24 + 0xb0);
              if (((ulong)unaff_x24 & 1) == 0) {
                (**(code **)(unaff_x27 + 8))(lVar14,puVar20);
                func_0x00010006c090(pcStack_1c8,pcStack_1d8);
                func_0x00010006c090(pcVar29,unaff_x26);
                func_0x00010006c090(uStack_1d0,pcStack_1c0);
                func_0x00010006c090(unaff_x25,pcStack_1e0);
                func_0x000107c615e8(pcVar26);
              }
              else {
                func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE_03);
                func_0x00010006c090(pcStack_1c8,pcStack_1d8);
                func_0x00010006c090(pcVar29,unaff_x26);
                func_0x00010006c090(uStack_1d0,pcStack_1c0);
                func_0x00010006c090(unaff_x25,pcStack_1e0);
                func_0x000107c615e8(pcVar26);
                (**(code **)(unaff_x27 + 8))(lVar14,puVar20);
              }
              func_0x000107c615c0(*(long *)(pcVar24 + 0xc0));
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(pcVar24 + 8))(UNRECOVERED_JUMPTABLE_03);
                return UNRECOVERED_JUMPTABLE_03;
              }
            }
            else {
              func_0x000107c61170();
LAB_101dfadbc:
              unaff_x26 = *(code **)(pcVar24 + 0xe0);
              unaff_x25 = *(code **)(pcVar24 + 0xe8);
              FUN_101df6cf4();
              puVar20 = &UNK_1106e3fc0;
              func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
              *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
              *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 7;
              UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
              func_0x000107c61654();
              func_0x00010006c090(unaff_x26,unaff_x25);
              func_0x000107c615e8(pcVar26);
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61170(unaff_x24);
LAB_101dfae20:
              func_0x000107c615c0(*(long *)(pcVar24 + 0xc0));
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 8);
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1b0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE_04)();
                return UNRECOVERED_JUMPTABLE_04;
              }
            }
            func_0x000107c60e78();
            uStack_200 = (ulong)&pcStack_160 | 0x1000000000000000;
            pcStack_1f8 = FUN_101dfb30c;
            lStack_210 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcStack_208 = pcVar24;
            func_0x0001000834e4(pcVar24 + 0x10);
            func_0x000107c615c0(*(long *)(pcVar24 + 0xc0));
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_210) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_04)();
              return UNRECOVERED_JUMPTABLE_04;
            }
            func_0x000107c60e78();
            uStack_220 = (ulong)&uStack_200 | 0x1000000000000000;
            puVar4 = auStack_250;
            pcStack_218 = FUN_101dfb374;
            puVar34 = &uStack_220;
            lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar22 = *(undefined8 **)(pcVar24 + 0x100);
            unaff_x21 = *(ulong *)(pcVar24 + 0xe0);
            unaff_x19 = *(code **)(pcVar24 + 0xe8);
            unaff_x23 = *(code **)(pcVar24 + 0x68);
            UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1107a6f08;
            lVar16 = 0;
            lVar17 = 0;
            pcStack_240 = pcVar26;
            puStack_238 = puVar20;
            pcStack_230 = UNRECOVERED_JUMPTABLE_03;
            pcStack_228 = pcVar24;
            func_0x000107c613f8();
            *puVar22 = unaff_x23;
            UNRECOVERED_JUMPTABLE = unaff_x19;
            func_0x00010006c090(unaff_x21);
            func_0x000107c615c0(*(long *)(pcVar24 + 0xc0));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar24 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
            pcVar26 = FUN_101dfb414;
            func_0x000107c60e78();
            unaff_x28 = pcVar29;
            goto code_r0x000101dfb414;
          }
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfb374;
        }
        lVar14 = 0;
        lVar17 = 0;
        goto _swift_task_switch;
      }
      UNRECOVERED_JUMPTABLE = pcVar24 + 0x58;
      pcVar24 = pcVar24 + 0x68;
      uVar35 = uStack_110 & 0xefffffffffffffff;
      uVar33 = uStack_120;
      pcVar26 = pcStack_108;
      goto LAB_104876574;
    }
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + 0x10;
    UNRECOVERED_JUMPTABLE_03 = FUN_101dfa808;
    uVar33 = (ulong)&uStack_10 & 0xefffffffffffffff;
LAB_104875f04:
    *(ulong *)((long)ppcVar5 + -0x10) = uVar33 | 0x1000000000000000;
    *(code **)((long)ppcVar5 + -8) = UNRECOVERED_JUMPTABLE_03;
    *(code **)((long)ppcVar5 + -0x18) = pcVar24;
    *(code **)(pcVar24 + 0x28) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar24 + 0x30) = UNRECOVERED_JUMPTABLE_04;
    lVar17 = *(long *)(*(long *)UNRECOVERED_JUMPTABLE_04 + 0x50);
    *(long *)(pcVar24 + 0x38) = lVar17;
    lVar14 = 0;
    __sSqMa(0,lVar17);
    *(long *)(pcVar24 + 0x40) = lVar14;
    lVar14 = *(long *)(lVar14 + -8);
    *(long *)(pcVar24 + 0x48) = lVar14;
    uVar33 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar24 + 0x50) = uVar33;
    lVar14 = *(long *)(lVar17 + -8);
    *(long *)(pcVar24 + 0x58) = lVar14;
    uVar33 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar24 + 0x60) = uVar33;
    UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_104875f90;
    lVar14 = 0;
    lVar17 = 0;
    goto _swift_task_switch;
  }
  uVar35 = uVar33 & 0xffffffffffffff8;
  if ((uVar33 & 0x8000000000000000) != 0) {
    uVar35 = uVar33;
  }
  func_0x000107c60480();
  if (uVar35 != 0) goto LAB_101dfc920;
LAB_101dfcc68:
  puVar22 = (undefined8 *)0x0;
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[10];
  FUN_101df6cf4();
  pcVar9 = (code *)&UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
  *puVar22 = UNRECOVERED_JUMPTABLE;
  puVar22[1] = 0;
  *(undefined1 *)(puVar22 + 2) = 0x60;
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE_03 = pcVar9;
LAB_101dfcca4:
  UNRECOVERED_JUMPTABLE_05 = (code *)unaff_x22[1];
  pcVar26 = unaff_x23;
  pcVar29 = unaff_x24;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_60) {
LAB_101dfccc4:
                    /* WARNING: Could not recover jumptable at 0x000101dfcce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  }
LAB_101dfcd00:
  func_0x000107c60e78();
  uStack_a0 = (ulong)&uStack_10 | 0x1000000000000000;
  ppcVar5 = &pcStack_c0;
  pcStack_98 = FUN_101dfcd04;
  puStack_b8 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  uVar33 = *unaff_x22;
  pcVar24 = (code *)*unaff_x22;
  *(code **)(uVar33 + 0x88) = UNRECOVERED_JUMPTABLE_05;
  *(code **)(uVar33 + 0x90) = pcVar9;
  pcStack_b0 = UNRECOVERED_JUMPTABLE;
  func_0x000107c615c0(*(undefined8 *)(uVar33 + 0x80));
  func_0x000107c61170(*(undefined8 *)(uVar33 + 0x78));
  if (pcVar9 == (code *)0x0) {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_b8) goto LAB_101dfcdb4;
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfcdb8;
  }
  else {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_b8) {
LAB_101dfcdb4:
      func_0x000107c60e78();
      pcStack_d0 = (code *)((ulong)&uStack_a0 | 0x1000000000000000);
      pcStack_c8 = FUN_101dfcdb8;
      pcStack_108 = *(code **)PTR____stack_chk_guard_11034bdc0;
      puVar22 = *(undefined8 **)(pcVar24 + 0x70);
      pcStack_100 = UNRECOVERED_JUMPTABLE_04;
      pcStack_f8 = pcVar29;
      pcStack_f0 = pcVar26;
      pcStack_e8 = UNRECOVERED_JUMPTABLE_03;
      uStack_e0 = uVar33;
      pcStack_d8 = pcVar24;
      func_0x000107c44984();
      if ((int)puVar22 == 0) {
LAB_101dfce34:
        UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar24 + 0x88);
        pcVar29 = *(code **)(pcVar24 + 0x70);
        pcVar26 = *(code **)(pcVar24 + 0x78);
        lVar14 = *(long *)(pcVar24 + 0x68);
        FUN_101df6cf4();
        UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
        func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
        puVar22[1] = 0;
        *puVar22 = 0x1d;
        *(undefined1 *)(puVar22 + 2) = 0x80;
        func_0x000107c61654();
LAB_101dfce7c:
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE_05);
        func_0x000107c61170(pcVar26);
        func_0x000107c61170(pcVar29);
        func_0x000107c61170(lVar14);
        UNRECOVERED_JUMPTABLE = *(code **)(pcVar24 + 8);
        pcVar9 = UNRECOVERED_JUMPTABLE_04;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_108) {
                    /* WARNING: Could not recover jumptable at 0x000101dfced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return UNRECOVERED_JUMPTABLE;
        }
      }
      else {
        lVar14 = *(long *)(pcVar24 + 0x70);
        func_0x000107c4c99c();
        func_0x000107c61180();
        *(long *)(pcVar24 + 0x98) = lVar14;
        puVar22 = (undefined8 *)0x0;
        if (lVar14 == 0) goto LAB_101dfce34;
        UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 0x90);
        func_0x000107c5fd64();
        if (UNRECOVERED_JUMPTABLE_04 != (code *)0x0) {
          UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar24 + 0x88);
          pcVar29 = *(code **)(pcVar24 + 0x70);
          pcVar26 = *(code **)(pcVar24 + 0x78);
          lVar14 = *(long *)(pcVar24 + 0x68);
          func_0x000107c61170(*(long *)(pcVar24 + 0x98));
          goto LAB_101dfce7c;
        }
        UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar24 + 0x60) + 0x18);
        lVar14 = 0x112d51300;
        func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
        UNRECOVERED_JUMPTABLE_05 = pcVar24 + 0x18;
        *(long *)UNRECOVERED_JUMPTABLE_05 = lVar14;
        pcVar9 = (code *)0xa0;
        func_0x000107c615b8();
        *(code **)(pcVar24 + 0xa0) = pcVar9;
        UNRECOVERED_JUMPTABLE_03 = pcVar9;
        func_0x000100faa6a0();
        *(code **)(pcVar24 + 0xa8) = UNRECOVERED_JUMPTABLE_03;
        *(code **)pcVar9 = pcVar24;
        *(code **)(pcVar9 + 8) = FUN_101dfcf78;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_108) {
          UNRECOVERED_JUMPTABLE = pcVar24 + 0x10;
          pcVar24 = pcVar24 + 0x20;
          uVar35 = (ulong)pcStack_d0 & 0xefffffffffffffff;
          uVar33 = uStack_e0;
          pcVar26 = pcStack_c8;
LAB_104876574:
          *(ulong *)((long)ppcVar5 + -0x20) = uVar33;
          *(ulong *)((long)ppcVar5 + -0x10) = uVar35 | 0x1000000000000000;
          *(code **)((long)ppcVar5 + -8) = pcVar26;
          *(code **)((long)ppcVar5 + -0x18) = pcVar9;
          *(code **)(pcVar9 + 0x58) = UNRECOVERED_JUMPTABLE_03;
          *(code **)(pcVar9 + 0x60) = pcVar24;
          *(code **)(pcVar9 + 0x48) = UNRECOVERED_JUMPTABLE_05;
          *(undefined **)(pcVar9 + 0x50) = &UNK_1107a6f08;
          *(code **)(pcVar9 + 0x40) = UNRECOVERED_JUMPTABLE;
          lVar17 = *(long *)UNRECOVERED_JUMPTABLE_04;
          *(undefined ***)(pcVar9 + 0x68) = &PTR_DAT_1107a6e88;
          lVar14 = 0x10;
          _swift_task_alloc();
          *(long *)(pcVar9 + 0x70) = lVar14;
          lVar14 = *(long *)(lVar17 + 0x50);
          *(long *)(pcVar9 + 0x78) = lVar14;
          lVar14 = *(long *)(lVar14 + -8);
          *(long *)(pcVar9 + 0x80) = lVar14;
          UNRECOVERED_JUMPTABLE_05 = (code *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
          _swift_task_alloc();
          *(code **)(pcVar9 + 0x88) = UNRECOVERED_JUMPTABLE_05;
          pcVar24 = (code *)0x70;
          _swift_task_alloc();
          *(code **)(pcVar9 + 0x90) = pcVar24;
          *(code **)pcVar24 = pcVar9;
          *(undefined **)(pcVar24 + 8) = &UNK_104876614;
          UNRECOVERED_JUMPTABLE_03 = *(code **)((long)ppcVar5 + -8);
          uVar33 = *(ulong *)((long)ppcVar5 + -0x10) & 0xefffffffffffffff;
          goto LAB_104875f04;
        }
      }
      func_0x000107c60e78();
      uStack_120 = (ulong)&pcStack_d0 | 0x1000000000000000;
      pcStack_118 = FUN_101dfcf78;
      lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_128 = *(long *)pcVar24;
      pcVar24 = *(code **)pcVar24;
      func_0x000107c615c0(*(undefined8 *)(lStack_128 + 0xa0));
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) goto LAB_101dfd010;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd014;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_130) {
LAB_101dfd010:
          func_0x000107c60e78();
          uStack_140 = (ulong)&uStack_120 | 0x1000000000000000;
          pcStack_138 = FUN_101dfd014;
          pcStack_170 = *(code **)PTR____stack_chk_guard_11034bdc0;
          *(long *)(pcVar24 + 0x28) = 0;
          puVar22 = *(undefined8 **)(pcVar24 + 0x10);
          pcStack_168 = pcVar29;
          pcStack_160 = pcVar26;
          pcStack_158 = pcVar9;
          pcStack_150 = UNRECOVERED_JUMPTABLE_05;
          pcStack_148 = pcVar24;
          func_0x000107c5d544(puVar22);
          func_0x000107c615e8();
          if (*(long *)(pcVar24 + 0x28) == 0) {
            uVar19 = *(undefined8 *)(pcVar24 + 0x88);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 0x70);
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar24 + 0x78);
            func_0x000107c61170(*(undefined8 *)(pcVar24 + 0x98));
            func_0x000107c615e8(uVar19);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(*(undefined8 *)(pcVar24 + 0x68));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar24 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_170) goto LAB_101dfd158;
          }
          else {
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar22,0,0);
            puVar22[1] = 0;
            *puVar22 = 0x13;
            *(undefined1 *)(puVar22 + 2) = 0x80;
            func_0x000107c61654();
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar24 + 0x88);
            pcVar26 = *(code **)(pcVar24 + 0x70);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 0x78);
            pcVar29 = *(code **)(pcVar24 + 0x68);
            func_0x000107c61170(*(undefined8 *)(pcVar24 + 0x98));
            func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(pcVar26);
            func_0x000107c61170(pcVar29);
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar24 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_170) {
LAB_101dfd158:
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
          }
          func_0x000107c60e78();
          pcStack_190 = (code *)((ulong)&uStack_140 | 0x1000000000000000);
          pcStack_188 = FUN_101dfd174;
          pcStack_1c0 = *(code **)PTR____stack_chk_guard_11034bdc0;
          puVar22 = *(undefined8 **)(pcVar24 + 0xa8);
          uVar19 = *(undefined8 *)(pcVar24 + 0x20);
          pcStack_1b8 = pcVar29;
          pcStack_1b0 = pcVar26;
          pcStack_1a8 = UNRECOVERED_JUMPTABLE_04;
          pcStack_1a0 = UNRECOVERED_JUMPTABLE;
          pcStack_198 = pcVar24;
          func_0x000107c613f8(&UNK_1107a6f08,puVar22,0,0);
          *puVar22 = uVar19;
          UNRECOVERED_JUMPTABLE = *(code **)(pcVar24 + 0x88);
          uVar19 = *(undefined8 *)(pcVar24 + 0x70);
          uVar3 = *(undefined8 *)(pcVar24 + 0x78);
          uVar30 = *(undefined8 *)(pcVar24 + 0x68);
          func_0x000107c61170(*(undefined8 *)(pcVar24 + 0x98));
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar19);
          func_0x000107c61170(uVar30);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 8);
          if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1c0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_1d0 = (ulong)&pcStack_190 | 0x1000000000000000;
          pcStack_1c8 = FUN_101dfd230;
          lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar19 = *(undefined8 *)(pcVar24 + 0x70);
          lVar14 = *(long *)(pcVar24 + 0x68);
          pcStack_1e0 = UNRECOVERED_JUMPTABLE;
          pcStack_1d8 = pcVar24;
          func_0x000107c61170(*(undefined8 *)(pcVar24 + 0x78));
          func_0x000107c61170(uVar19);
          func_0x000107c61170(lVar14);
          lVar17 = *(long *)(pcVar24 + 0x90);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar24 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_200 = (ulong)&uStack_1d0 | 0x1000000000000000;
          pcStack_1f8 = FUN_101dfd2ac;
          pcVar24 = *(code **)pcVar24;
          lStack_210 = lVar14;
          pcStack_208 = pcVar24;
          func_0x000107c615c0(*(long *)(pcVar24 + 0x78));
          if (lVar17 == 0) {
            pcVar24[0x8e] = pcVar24[0x8c];
            lVar14 = *(long *)(pcVar24 + 0x50);
            lVar17 = *(long *)(pcVar24 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd340;
          }
          else {
            *(long *)(pcVar24 + 0x80) = lVar17;
            lVar14 = *(long *)(pcVar24 + 0x50);
            lVar17 = *(long *)(pcVar24 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd444;
          }
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd174;
      }
      lVar14 = 0;
      lVar17 = 0;
      goto _swift_task_switch;
    }
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfd230;
  }
  lVar14 = 0;
  lVar17 = 0;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_04,lVar14,lVar17);
  return UNRECOVERED_JUMPTABLE_04;
}



/* Entry: 101dfcd04; end: 101dfcdb7;  */

void FUN_101dfcd04(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long *plVar10;
  long *unaff_x22;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *unaff_x22;
  plVar11 = (long *)*unaff_x22;
  *(undefined8 *)(lVar8 + 0x88) = param_1;
  *(long *)(lVar8 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x80));
  func_0x000107c61170(*(undefined8 *)(lVar8 + 0x78));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      UNRECOVERED_JUMPTABLE = FUN_101dfcdb8;
      goto LAB_101dfcd98;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    UNRECOVERED_JUMPTABLE = FUN_101dfd230;
LAB_101dfcd98:
    uVar4 = 0;
    uVar5 = 0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)plVar11[0xe];
  func_0x000107c44984();
  if ((int)puVar1 == 0) {
LAB_101dfce34:
    lVar9 = plVar11[0x11];
    lVar8 = plVar11[0xe];
    lVar7 = plVar11[0xf];
    lVar13 = plVar11[0xd];
    FUN_101df6cf4();
    plVar10 = (long *)&UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 0x1d;
    *(undefined1 *)(puVar1 + 2) = 0x80;
    func_0x000107c61654();
LAB_101dfce7c:
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar11[1])();
      return;
    }
  }
  else {
    lVar8 = plVar11[0xe];
    func_0x000107c4c99c();
    func_0x000107c61180();
    plVar11[0x13] = lVar8;
    puVar1 = (undefined8 *)0x0;
    if (lVar8 == 0) goto LAB_101dfce34;
    plVar10 = (long *)plVar11[0x12];
    func_0x000107c5fd64();
    if (plVar10 != (long *)0x0) {
      lVar9 = plVar11[0x11];
      lVar8 = plVar11[0xe];
      lVar7 = plVar11[0xf];
      lVar13 = plVar11[0xd];
      func_0x000107c61170(plVar11[0x13]);
      goto LAB_101dfce7c;
    }
    plVar10 = *(long **)(plVar11[0xc] + 0x18);
    lVar8 = 0x112d51300;
    func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
    plVar11[3] = lVar8;
    puVar2 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    plVar11[0x14] = (long)puVar2;
    puVar1 = puVar2;
    func_0x000100faa6a0();
    plVar11[0x15] = (long)puVar1;
    *puVar2 = plVar11;
    puVar2[1] = FUN_101dfcf78;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      puVar2[0xb] = puVar1;
      puVar2[0xc] = plVar11 + 4;
      puVar2[9] = plVar11 + 3;
      puVar2[10] = &UNK_1107a6f08;
      puVar2[8] = plVar11 + 2;
      lVar6 = *plVar10;
      puVar2[0xd] = &PTR_DAT_1107a6e88;
      uVar4 = 0x10;
      _swift_task_alloc();
      puVar2[0xe] = uVar4;
      lVar6 = *(long *)(lVar6 + 0x50);
      puVar2[0xf] = lVar6;
      lVar6 = *(long *)(lVar6 + -8);
      puVar2[0x10] = lVar6;
      uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar2[0x11] = uVar3;
      plVar11 = (long *)0x70;
      _swift_task_alloc();
      puVar2[0x12] = plVar11;
      *plVar11 = (long)puVar2;
      plVar11[1] = (long)&UNK_104876614;
      plVar11[5] = uVar3;
      plVar11[6] = (long)plVar10;
      lVar8 = *(long *)(*plVar10 + 0x50);
      plVar11[7] = lVar8;
      lVar6 = 0;
      __sSqMa(0,lVar8);
      plVar11[8] = lVar6;
      lVar6 = *(long *)(lVar6 + -8);
      plVar11[9] = lVar6;
      uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar11[10] = uVar3;
      lVar6 = *(long *)(lVar8 + -8);
      plVar11[0xb] = lVar6;
      uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar11[0xc] = uVar3;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
      uVar4 = 0;
      uVar5 = 0;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = (long *)*plVar11;
  func_0x000107c615c0(*(undefined8 *)(*plVar11 + 0xa0));
  if (plVar10 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
      UNRECOVERED_JUMPTABLE = FUN_101dfd014;
      goto LAB_101dfcff8;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    UNRECOVERED_JUMPTABLE = FUN_101dfd174;
LAB_101dfcff8:
    uVar4 = 0;
    uVar5 = 0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12[5] = 0;
  puVar1 = (undefined8 *)plVar12[2];
  func_0x000107c5d544(puVar1);
  func_0x000107c615e8();
  if (plVar12[5] == 0) {
    lVar9 = plVar12[0x11];
    lVar8 = plVar12[0xe];
    lVar7 = plVar12[0xf];
    func_0x000107c61170(plVar12[0x13]);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(plVar12[0xd]);
    UNRECOVERED_JUMPTABLE = (code *)plVar12[1];
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 0x13;
    *(undefined1 *)(puVar1 + 2) = 0x80;
    func_0x000107c61654();
    lVar9 = plVar12[0x11];
    lVar8 = plVar12[0xe];
    lVar7 = plVar12[0xf];
    lVar13 = plVar12[0xd];
    func_0x000107c61170(plVar12[0x13]);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar13);
    UNRECOVERED_JUMPTABLE = (code *)plVar12[1];
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar8 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)plVar12[0x15];
  lVar6 = plVar12[4];
  func_0x000107c613f8(&UNK_1107a6f08,plVar11,0,0);
  *plVar11 = lVar6;
  lVar9 = plVar12[0x11];
  lVar6 = plVar12[0xe];
  lVar8 = plVar12[0xf];
  lVar13 = plVar12[0xd];
  func_0x000107c61170(plVar12[0x13]);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])();
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = plVar12[0xe];
  lVar7 = plVar12[0xd];
  func_0x000107c61170(plVar12[0xf]);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  lVar6 = plVar12[0x12];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar12[1])();
    return;
  }
  func_0x000107c60e78();
  lVar8 = *plVar12;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x78));
  if (lVar6 == 0) {
    *(undefined1 *)(lVar8 + 0x8e) = *(undefined1 *)(lVar8 + 0x8c);
    uVar4 = *(undefined8 *)(lVar8 + 0x50);
    uVar5 = *(undefined8 *)(lVar8 + 0x58);
    UNRECOVERED_JUMPTABLE = FUN_101dfd340;
  }
  else {
    *(long *)(lVar8 + 0x80) = lVar6;
    uVar4 = *(undefined8 *)(lVar8 + 0x50);
    uVar5 = *(undefined8 *)(lVar8 + 0x58);
    UNRECOVERED_JUMPTABLE = FUN_101dfd444;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar4,uVar5);
  return;
}



/* Entry: 101dfcdb8; end: 101dfcf77;  */

void FUN_101dfcdb8(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x22;
  long *plVar11;
  long lVar12;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = (undefined8 *)unaff_x22[0xe];
  func_0x000107c44984();
  if ((int)puVar1 == 0) {
LAB_101dfce34:
    lVar9 = unaff_x22[0x11];
    lVar2 = unaff_x22[0xe];
    lVar8 = unaff_x22[0xf];
    lVar12 = unaff_x22[0xd];
    FUN_101df6cf4();
    plVar10 = (long *)&UNK_1106e3fc0;
    func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 0x1d;
    *(undefined1 *)(puVar1 + 2) = 0x80;
    func_0x000107c61654();
LAB_101dfce7c:
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101dfced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])();
      return;
    }
  }
  else {
    lVar2 = unaff_x22[0xe];
    func_0x000107c4c99c();
    func_0x000107c61180();
    unaff_x22[0x13] = lVar2;
    puVar1 = (undefined8 *)0x0;
    if (lVar2 == 0) goto LAB_101dfce34;
    plVar10 = (long *)unaff_x22[0x12];
    func_0x000107c5fd64();
    if (plVar10 != (long *)0x0) {
      lVar9 = unaff_x22[0x11];
      lVar2 = unaff_x22[0xe];
      lVar8 = unaff_x22[0xf];
      lVar12 = unaff_x22[0xd];
      func_0x000107c61170(unaff_x22[0x13]);
      goto LAB_101dfce7c;
    }
    plVar10 = *(long **)(unaff_x22[0xc] + 0x18);
    lVar2 = 0x112d51300;
    func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
    unaff_x22[3] = lVar2;
    puVar3 = (undefined8 *)0xa0;
    func_0x000107c615b8();
    unaff_x22[0x14] = (long)puVar3;
    puVar1 = puVar3;
    func_0x000100faa6a0();
    unaff_x22[0x15] = (long)puVar1;
    *puVar3 = unaff_x22;
    puVar3[1] = FUN_101dfcf78;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      puVar3[0xb] = puVar1;
      puVar3[0xc] = unaff_x22 + 4;
      puVar3[9] = unaff_x22 + 3;
      puVar3[10] = &UNK_1107a6f08;
      puVar3[8] = unaff_x22 + 2;
      lVar7 = *plVar10;
      puVar3[0xd] = &PTR_DAT_1107a6e88;
      uVar5 = 0x10;
      _swift_task_alloc();
      puVar3[0xe] = uVar5;
      lVar7 = *(long *)(lVar7 + 0x50);
      puVar3[0xf] = lVar7;
      lVar7 = *(long *)(lVar7 + -8);
      puVar3[0x10] = lVar7;
      uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      puVar3[0x11] = uVar4;
      plVar11 = (long *)0x70;
      _swift_task_alloc();
      puVar3[0x12] = plVar11;
      *plVar11 = (long)puVar3;
      plVar11[1] = (long)&UNK_104876614;
      plVar11[5] = uVar4;
      plVar11[6] = (long)plVar10;
      lVar2 = *(long *)(*plVar10 + 0x50);
      plVar11[7] = lVar2;
      lVar7 = 0;
      __sSqMa(0,lVar2);
      plVar11[8] = lVar7;
      lVar7 = *(long *)(lVar7 + -8);
      plVar11[9] = lVar7;
      uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar11[10] = uVar4;
      lVar7 = *(long *)(lVar2 + -8);
      plVar11[0xb] = lVar7;
      uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar11[0xc] = uVar4;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_104875f90;
      uVar5 = 0;
      uVar6 = 0;
      goto _swift_task_switch;
    }
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
  if (plVar10 == (long *)0x0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      UNRECOVERED_JUMPTABLE = FUN_101dfd014;
      goto LAB_101dfcff8;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_101dfd174;
LAB_101dfcff8:
    uVar5 = 0;
    uVar6 = 0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11[5] = 0;
  puVar1 = (undefined8 *)plVar11[2];
  func_0x000107c5d544(puVar1);
  func_0x000107c615e8();
  if (plVar11[5] == 0) {
    lVar9 = plVar11[0x11];
    lVar2 = plVar11[0xe];
    lVar8 = plVar11[0xf];
    func_0x000107c61170(plVar11[0x13]);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(plVar11[0xd]);
    UNRECOVERED_JUMPTABLE = (code *)plVar11[1];
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 0x13;
    *(undefined1 *)(puVar1 + 2) = 0x80;
    func_0x000107c61654();
    lVar9 = plVar11[0x11];
    lVar2 = plVar11[0xe];
    lVar8 = plVar11[0xf];
    lVar12 = plVar11[0xd];
    func_0x000107c61170(plVar11[0x13]);
    func_0x000107c615e8(lVar9);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar12);
    UNRECOVERED_JUMPTABLE = (code *)plVar11[1];
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar2 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar10 = (long *)plVar11[0x15];
  lVar7 = plVar11[4];
  func_0x000107c613f8(&UNK_1107a6f08,plVar10,0,0);
  *plVar10 = lVar7;
  lVar9 = plVar11[0x11];
  lVar7 = plVar11[0xe];
  lVar2 = plVar11[0xf];
  lVar12 = plVar11[0xd];
  func_0x000107c61170(plVar11[0x13]);
  func_0x000107c615e8(lVar9);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar11[1])();
    return;
  }
  func_0x000107c60e78();
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = plVar11[0xe];
  lVar8 = plVar11[0xd];
  func_0x000107c61170(plVar11[0xf]);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  lVar7 = plVar11[0x12];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)plVar11[1])();
    return;
  }
  func_0x000107c60e78();
  lVar2 = *plVar11;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (lVar7 == 0) {
    *(undefined1 *)(lVar2 + 0x8e) = *(undefined1 *)(lVar2 + 0x8c);
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    uVar6 = *(undefined8 *)(lVar2 + 0x58);
    UNRECOVERED_JUMPTABLE = FUN_101dfd340;
  }
  else {
    *(long *)(lVar2 + 0x80) = lVar7;
    uVar5 = *(undefined8 *)(lVar2 + 0x50);
    uVar6 = *(undefined8 *)(lVar2 + 0x58);
    UNRECOVERED_JUMPTABLE = FUN_101dfd444;
  }
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar5,uVar6);
  return;
}



/* Entry: 101dfcf78; end: 101dfd013;  */

void FUN_101dfcf78(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  long *unaff_x22;
  long *plVar9;
  long lVar10;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar9 = (long *)*unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) goto LAB_101dfd010;
    UNRECOVERED_JUMPTABLE = FUN_101dfd014;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
LAB_101dfd010:
      func_0x000107c60e78();
      lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar9[5] = 0;
      puVar7 = (undefined8 *)plVar9[2];
      func_0x000107c5d544(puVar7);
      func_0x000107c615e8();
      if (plVar9[5] == 0) {
        lVar8 = plVar9[0x11];
        lVar6 = plVar9[0xe];
        lVar5 = plVar9[0xf];
        func_0x000107c61170(plVar9[0x13]);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(plVar9[0xd]);
        UNRECOVERED_JUMPTABLE = (code *)plVar9[1];
        lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      else {
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar7,0,0);
        puVar7[1] = 0;
        *puVar7 = 0x13;
        *(undefined1 *)(puVar7 + 2) = 0x80;
        func_0x000107c61654();
        lVar8 = plVar9[0x11];
        lVar6 = plVar9[0xe];
        lVar5 = plVar9[0xf];
        lVar10 = plVar9[0xd];
        func_0x000107c61170(plVar9[0x13]);
        func_0x000107c615e8(lVar8);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar10);
        UNRECOVERED_JUMPTABLE = (code *)plVar9[1];
        lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar6 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar2 = (long *)plVar9[0x15];
      lVar4 = plVar9[4];
      func_0x000107c613f8(&UNK_1107a6f08,plVar2,0,0);
      *plVar2 = lVar4;
      lVar8 = plVar9[0x11];
      lVar4 = plVar9[0xe];
      lVar6 = plVar9[0xf];
      lVar10 = plVar9[0xd];
      func_0x000107c61170(plVar9[0x13]);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar10);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar9[1])();
        return;
      }
      func_0x000107c60e78();
      lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar4 = plVar9[0xe];
      lVar5 = plVar9[0xd];
      func_0x000107c61170(plVar9[0xf]);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar5);
      lVar4 = plVar9[0x12];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar9[1])();
        return;
      }
      func_0x000107c60e78();
      lVar6 = *plVar9;
      func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x78));
      if (lVar4 == 0) {
        *(undefined1 *)(lVar6 + 0x8e) = *(undefined1 *)(lVar6 + 0x8c);
        uVar1 = *(undefined8 *)(lVar6 + 0x50);
        uVar3 = *(undefined8 *)(lVar6 + 0x58);
        UNRECOVERED_JUMPTABLE = FUN_101dfd340;
      }
      else {
        *(long *)(lVar6 + 0x80) = lVar4;
        uVar1 = *(undefined8 *)(lVar6 + 0x50);
        uVar3 = *(undefined8 *)(lVar6 + 0x58);
        UNRECOVERED_JUMPTABLE = FUN_101dfd444;
      }
      goto LAB_107c615e0;
    }
    UNRECOVERED_JUMPTABLE = FUN_101dfd174;
  }
  uVar1 = 0;
  uVar3 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar1,uVar3);
  return;
}



/* Entry: 101dfd014; end: 101dfd173;  */

void FUN_101dfd014(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *unaff_x22;
  long lVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = unaff_x22 + 5;
  *plVar1 = 0;
  puVar7 = (undefined8 *)unaff_x22[2];
  func_0x000107c5d544(puVar7,param_2,unaff_x22[8],unaff_x22[6],unaff_x22[0x11],unaff_x22[0x13],
                      plVar1);
  func_0x000107c615e8();
  if (*plVar1 == 0) {
    lVar8 = unaff_x22[0x11];
    lVar6 = unaff_x22[0xe];
    lVar5 = unaff_x22[0xf];
    func_0x000107c61170(unaff_x22[0x13]);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(unaff_x22[0xd]);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar7,0,0);
    puVar7[1] = 0;
    *puVar7 = 0x13;
    *(undefined1 *)(puVar7 + 2) = 0x80;
    func_0x000107c61654();
    lVar8 = unaff_x22[0x11];
    lVar6 = unaff_x22[0xe];
    lVar5 = unaff_x22[0xf];
    lVar9 = unaff_x22[0xd];
    func_0x000107c61170(unaff_x22[0x13]);
    func_0x000107c615e8(lVar8);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar9);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar6 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)unaff_x22[0x15];
  lVar4 = unaff_x22[4];
  func_0x000107c613f8(&UNK_1107a6f08,plVar1,0,0);
  *plVar1 = lVar4;
  lVar8 = unaff_x22[0x11];
  lVar4 = unaff_x22[0xe];
  lVar6 = unaff_x22[0xf];
  lVar9 = unaff_x22[0xd];
  func_0x000107c61170(unaff_x22[0x13]);
  func_0x000107c615e8(lVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = unaff_x22[0xe];
  lVar5 = unaff_x22[0xd];
  func_0x000107c61170(unaff_x22[0xf]);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  lVar4 = unaff_x22[0x12];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x78));
  if (lVar4 == 0) {
    *(undefined1 *)(lVar6 + 0x8e) = *(undefined1 *)(lVar6 + 0x8c);
    uVar2 = *(undefined8 *)(lVar6 + 0x50);
    uVar3 = *(undefined8 *)(lVar6 + 0x58);
    UNRECOVERED_JUMPTABLE = FUN_101dfd340;
  }
  else {
    *(long *)(lVar6 + 0x80) = lVar4;
    uVar2 = *(undefined8 *)(lVar6 + 0x50);
    uVar3 = *(undefined8 *)(lVar6 + 0x58);
    UNRECOVERED_JUMPTABLE = FUN_101dfd444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar2,uVar3);
  return;
}



/* Entry: 101dfd174; end: 101dfd22f;  */

void FUN_101dfd174(void)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x22;
  long lVar9;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar2 = (long *)unaff_x22[0x15];
  lVar7 = unaff_x22[4];
  func_0x000107c613f8(&UNK_1107a6f08,plVar2,0,0);
  *plVar2 = lVar7;
  lVar8 = unaff_x22[0x11];
  lVar7 = unaff_x22[0xe];
  lVar6 = unaff_x22[0xf];
  lVar9 = unaff_x22[0xd];
  func_0x000107c61170(unaff_x22[0x13]);
  func_0x000107c615e8(lVar8);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = unaff_x22[0xe];
  lVar5 = unaff_x22[0xd];
  func_0x000107c61170(unaff_x22[0xf]);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar5);
  lVar7 = unaff_x22[0x12];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x78));
  if (lVar7 == 0) {
    *(undefined1 *)(lVar6 + 0x8e) = *(undefined1 *)(lVar6 + 0x8c);
    uVar3 = *(undefined8 *)(lVar6 + 0x50);
    uVar4 = *(undefined8 *)(lVar6 + 0x58);
    pcVar1 = FUN_101dfd340;
  }
  else {
    *(long *)(lVar6 + 0x80) = lVar7;
    uVar3 = *(undefined8 *)(lVar6 + 0x50);
    uVar4 = *(undefined8 *)(lVar6 + 0x58);
    pcVar1 = FUN_101dfd444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,uVar4);
  return;
}



/* Entry: 101dfd230; end: 101dfd2ab;  */

void FUN_101dfd230(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x22;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = unaff_x22[0xe];
  lVar5 = unaff_x22[0xd];
  func_0x000107c61170(unaff_x22[0xf]);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  lVar6 = unaff_x22[0x12];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])();
    return;
  }
  func_0x000107c60e78();
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (lVar6 == 0) {
    *(undefined1 *)(lVar4 + 0x8e) = *(undefined1 *)(lVar4 + 0x8c);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101dfd340;
  }
  else {
    *(long *)(lVar4 + 0x80) = lVar6;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101dfd444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101dfd2ac; end: 101dfd30f;  */

void FUN_101dfd2ac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x8e) = *(undefined1 *)(lVar4 + 0x8c);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101dfd340;
  }
  else {
    *(long *)(lVar4 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101dfd444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101dfd310; end: 101dfd33f;  */

void FUN_101dfd310(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x8e) = *(undefined1 *)(unaff_x22 + 0x8d);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_101dfd340;
  }
  else {
    *(long *)(unaff_x22 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_101dfd444;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101dfd340; end: 101dfd443;  */

void FUN_101dfd340(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x8e) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(ulong *)(unaff_x22 + 0x60);
    func_0x000107c5fd8c(uVar2,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar2 & 1) != 0) {
      if (lVar1 != 0) {
        func_0x000107c61654();
      }
                    /* WARNING: Could not recover jumptable at 0x000101dfd3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x70) = lVar1;
  }
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    uVar4 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101dfd2ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101dfd310,unaff_x22 + 0x10);
  return;
}



/* Entry: 101dfd444; end: 101dfd54f;  */

void FUN_101dfd444(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x80);
  if (*(long *)(unaff_x22 + 0x70) != 0) {
    func_0x000107c614ac(lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x70);
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c5fd8c(uVar1,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
    if (lVar4 != 0) {
      func_0x000107c61654();
    }
                    /* WARNING: Could not recover jumptable at 0x000101dfd4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x70) = lVar4;
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101dfd2ac;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_101dfd310,unaff_x22 + 0x10);
  return;
}



/* Entry: 101dfd550; end: 101dfd6bb;  */

undefined1  [16] FUN_101dfd550(undefined8 param_1,ulong param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  long lStack_80;
  byte bStack_78;
  long lStack_70;
  byte bStack_68;
  ulong uStack_58;
  
  lStack_70 = 0;
  bStack_68 = 0;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    lVar4 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dfd698);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_2 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar6;
        func_0x00010121c1ac(uVar6,param_2);
      }
      uVar1 = uVar6 + 1;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dfd694);
        (*pcVar2)();
      }
      uStack_58 = uVar3;
      FUN_101dfd6bc(&lStack_80,&lStack_70,&uStack_58,param_1,unaff_x20);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(lVar4);
      uVar3 = param_2 & 0xc000000000000001;
      if (unaff_x21 != 0) goto LAB_101dfd664;
      lStack_70 = lStack_80;
      bStack_68 = bStack_78;
      uVar3 = (ulong)bStack_78;
      uVar6 = uVar6 + 1;
      lVar4 = lStack_80;
    } while (uVar1 != uVar5);
    param_4 = param_4 & 0xffffffff;
    if (lStack_80 != 0) goto LAB_101dfd664;
  }
  func_0x000107c61174(param_3);
  uVar3 = param_4;
  lVar4 = param_3;
LAB_101dfd664:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* Entry: 101dfd6bc; end: 101dfd9cf;  */

void FUN_101dfd6bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long unaff_x21;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar9 = (undefined8 *)*param_2;
  uVar2 = *(undefined1 *)(param_2 + 1);
  param_3 = (undefined8 *)*param_3;
  func_0x000107c5fd64();
  if (unaff_x21 != 0) {
    return;
  }
  puVar4 = param_3;
  func_0x000107c4abb4();
  if ((int)puVar4 != 1) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    puVar4[1] = 0;
    *puVar4 = 0x19;
    uVar8 = 0x80;
LAB_101dfd8cc:
    *(undefined1 *)(puVar4 + 2) = uVar8;
    func_0x000107c61654();
    return;
  }
  puVar4 = param_3;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dfd9c8);
    (*pcVar3)();
  }
  puVar5 = puVar4;
  func_0x000107c4c99c();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  if (puVar5 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    uVar8 = 0x41;
  }
  else {
    puVar10 = puVar5;
    func_0x000107c4c9b4();
    func_0x000107c61170(puVar5);
    uVar8 = 0x40;
  }
  puVar4 = param_3;
  func_0x000107c4c930();
  func_0x000107c61180();
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dfd9cc);
    (*pcVar3)();
  }
  puVar6 = puVar4;
  func_0x000107c44984();
  func_0x000107c61170();
  if (((puVar5 == (undefined8 *)0x0) || ((int)puVar6 == 0)) || (puVar10 != param_4)) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
    *puVar4 = param_4;
    puVar4[1] = puVar10;
    goto LAB_101dfd8cc;
  }
  func_0x0001000d224c(&uStack_70);
  uVar7 = uStack_70;
  func_0x000107c614f0();
  puVar4 = param_3;
  (**(code **)(lStack_68 + 0x18))(param_3,uVar7,lStack_68);
  func_0x000107c615e8(uStack_70);
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101dfd9d0);
    (*pcVar3)();
  }
  puVar5 = param_3;
  func_0x000107c44978();
  func_0x000107c61170();
  if (((ulong)puVar5 & 1) == 0) {
    if (puVar4 == (undefined8 *)0x0) {
      *param_1 = puVar9;
      *(undefined1 *)(param_1 + 1) = uVar2;
      func_0x000107c61174(puVar9);
      return;
    }
    uVar1 = (uint)uVar7 & 0xff;
    if ((uVar1 != 2) && (uVar1 != 3)) {
      if (puVar9 == (undefined8 *)0x0) {
        *param_1 = puVar4;
        *(char *)(param_1 + 1) = (char)uVar7;
        return;
      }
      puVar5 = puVar9;
      func_0x000107c61174(puVar9);
      puVar10 = puVar4;
      func_0x000107c61174(puVar4);
      puVar6 = puVar9;
      FUN_101dfe828(puVar9,puVar4);
      if (((ulong)puVar6 & 1) != 0) {
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar10);
        *param_1 = puVar9;
        *(undefined1 *)(param_1 + 1) = uVar2;
        return;
      }
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar6,0,0);
      puVar6[1] = 0;
      *puVar6 = 0x18;
      *(undefined1 *)(puVar6 + 2) = 0x80;
      func_0x000107c61654();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar10);
      goto LAB_101dfd89c;
    }
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,param_3,0,0);
  param_3[1] = 0;
  *param_3 = 0x1c;
  *(undefined1 *)(param_3 + 2) = 0x80;
  func_0x000107c61654();
  puVar5 = puVar4;
LAB_101dfd89c:
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 101dfd9d0; end: 101dfde77;  */

undefined * FUN_101dfd9d0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = unaff_x20;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101dfdcf0);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000101286fac(uVar3,param_2);
  func_0x00010006c090(uVar3);
  if (((uint)uVar2 & 0xff00) == 0x100 || ((uint)uVar2 & 0xff) != 10) {
    uVar4 = unaff_x20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dfdcf8);
      (*pcVar1)();
    }
    uVar2 = uVar4;
    func_0x000107c5ee30();
    uVar3 = param_2;
    func_0x000107c61170(uVar4);
  }
  else {
    uVar2 = unaff_x20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dfdcfc);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
    func_0x000101287044(&uStack_70,1,uVar3,param_2);
    uVar2 = uStack_70;
    param_2 = uStack_68;
  }
  uVar4 = unaff_x20;
  func_0x000107c4a804();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000101286fac(uVar5,uVar3);
    func_0x00010006c090(uVar5);
    if ((((uint)uVar4 & 0xff00) == 0x100) || (((uint)uVar4 & 0xff) != 10)) {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dfdd00);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x20);
    }
    else {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101dfdd04);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x20);
      func_0x000101287044(&uStack_70,1,uVar4,uVar3);
      uVar4 = uStack_70;
      uVar3 = uStack_68;
    }
    uVar5 = uVar2;
    uVar9 = param_2;
    func_0x000107c5ee04(uVar2,param_2,0);
    if (uVar9 >> 0x3c < 0xf) {
      uVar7 = uVar4;
      uVar10 = uVar3;
      func_0x000107c5ee04(uVar4,uVar3,0);
      if (uVar10 >> 0x3c < 0xf) {
        puVar6 = PTR_PTR_1126d5750;
        func_0x000107c610f8(PTR_PTR_1126d5750);
        func_0x000107c453e4();
        func_0x000107c61180();
        uVar8 = uVar5;
        func_0x000107c5ee20(uVar5,uVar9);
        func_0x000107c559a4(puVar6);
        func_0x000107c61170(uVar8);
        uVar8 = uVar7;
        func_0x000107c5ee20(uVar7,uVar10);
        func_0x000107c55938(puVar6);
        func_0x000107c61170(puVar6);
        func_0x0001000b44c0(uVar7,uVar10);
        func_0x0001000b44c0(uVar5,uVar9);
        func_0x000107c61170(uVar8);
        func_0x00010006c090(uVar4,uVar3);
        func_0x00010006c090(uVar2,param_2);
      }
      else {
        func_0x00010006c090(uVar4,uVar3);
        func_0x00010006c090(uVar2,param_2);
        func_0x0001000b44c0(uVar5,uVar9);
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      func_0x00010006c090(uVar4,uVar3);
      func_0x00010006c090(uVar2,param_2);
      puVar6 = (undefined *)0x0;
    }
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dfdcf4);
  (*pcVar1)();
}



/* Entry: 101dfde78; end: 101dfe1cf;  */

undefined * FUN_101dfde78(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar13 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar13 = param_1;
    }
    func_0x000107c60480();
    puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar12;
  if (uVar13 != 0) {
    puVar15 = (undefined8 *)0x0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(undefined8 **)((param_1 & 0xffffffffffffff8) + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dfe158);
          (*pcVar4)();
        }
        puVar6 = *(undefined8 **)(param_1 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
        uVar5 = param_2;
      }
      else {
        puVar6 = puVar15;
        uVar5 = param_1;
        func_0x00010121c1ac();
      }
      uVar1 = (long)puVar15 + 1;
      if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101dfe154);
        (*pcVar4)();
      }
      puVar7 = puVar6;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar7 == (undefined8 *)0x0) {
LAB_101dfe0f8:
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar7,0,0);
        puVar7[1] = 0;
        *puVar7 = 0x17;
        *(undefined1 *)(puVar7 + 2) = 0x80;
        func_0x000107c61654();
        func_0x000107c61574(puVar12);
        func_0x000107c6142c(param_1);
        func_0x000107c61170(puVar6);
        return puVar12;
      }
      puVar8 = puVar7;
      func_0x000107c4c99c();
      func_0x000107c61180();
      func_0x000107c61170();
      if (puVar8 == (undefined8 *)0x0) goto LAB_101dfe0f8;
      puVar9 = puVar8;
      func_0x000107c4c9b4();
      func_0x000107c61170(puVar8);
      puVar8 = puVar9;
      func_0x000100f89a68();
      uVar11 = (ulong)~(uint)uVar5 & 1;
      puVar7 = (undefined8 *)(*(long *)(puVar12 + 0x10) + uVar11);
      if (SCARRY8(*(long *)(puVar12 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101dfe15c);
        (*pcVar4)();
      }
      param_2 = uVar5;
      if (*(long *)(puVar12 + 0x18) < (long)puVar7) {
        param_2 = 1;
        FUN_101e0571c();
        puVar7 = puVar9;
        func_0x000100f89a68();
        puVar12 = puVar3;
        puVar8 = puVar7;
        if (((uint)uVar5 & 1) != ((uint)param_2 & 1)) {
          func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dfe1d0);
          (*pcVar4)();
        }
      }
      if ((uVar5 & 1) == 0) {
        FUN_101a0fcbc();
        param_2 = 0;
        func_0x000107c613fc();
        puVar7[3] = 3;
        puVar7[2] = 1;
        puVar7[4] = puVar6;
        *(ulong *)(puVar12 + ((ulong)puVar8 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar12 + ((ulong)puVar8 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar8 & 0x3f);
        *(undefined8 **)(*(long *)(puVar12 + 0x30) + (long)puVar8 * 8) = puVar9;
        *(undefined8 **)(*(long *)(puVar12 + 0x38) + (long)puVar8 * 8) = puVar7;
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101dfe160);
          (*pcVar4)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        lVar14 = *(long *)(puVar12 + 0x38);
        uVar11 = *(ulong *)(lVar14 + (long)puVar8 * 8);
        uVar5 = uVar11;
        func_0x000107c61550();
        *(ulong *)(lVar14 + (long)puVar8 * 8) = uVar11;
        if ((((uVar5 & 1) == 0) || ((long)uVar11 < 0)) ||
           (uVar5 = uVar11, (uVar11 >> 0x3e & 1) != 0)) {
          if (uVar11 >> 0x3e == 0) {
            param_2 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            param_2 = uVar11 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar11) {
              param_2 = uVar11;
            }
            func_0x000107c60480();
          }
          param_2 = param_2 + 1;
          uVar5 = 0;
          FUN_101a10584(0,param_2,1,uVar11);
          *(ulong *)(lVar14 + (long)puVar8 * 8) = uVar5;
        }
        uVar10 = uVar5 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar10 + 0x10);
        uVar11 = uVar2 + 1;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar2) {
          uVar10 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          param_2 = uVar11;
          FUN_101a10584(uVar10,uVar11,1,uVar5);
          *(ulong *)(lVar14 + (long)puVar8 * 8) = uVar10;
          uVar10 = uVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar10 + 0x10) = uVar11;
        *(undefined8 **)(uVar10 + uVar2 * 8 + 0x20) = puVar6;
      }
      puVar15 = (undefined8 *)((long)puVar15 + 1);
    } while (uVar1 != uVar13);
  }
  func_0x000107c6142c(param_1);
  return puVar12;
}



/* Entry: 101dfe1d0; end: 101dfe273;  */

void FUN_101dfe1d0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  uVar6 = *(undefined1 *)(unaff_x20 + 0x40);
  plVar10 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_101dfe274;
  *(undefined1 *)(plVar10 + 0x14) = uVar6;
  plVar10[0xe] = lVar2;
  plVar10[0xf] = lVar5;
  plVar10[0xc] = lVar1;
  plVar10[0xd] = lVar4;
  plVar10[10] = lVar7;
  plVar10[0xb] = lVar3;
  plVar10[9] = param_2;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar9 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar8 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x10] = uVar8;
  uVar9 = uVar9 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar10[0x11] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfc320,0,0);
  return;
}



/* Entry: 101dfe274; end: 101dfe2af;  */

void FUN_101dfe274(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dfe2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dfe2b0; end: 101dfe363;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */
/* WARNING: Removing unreachable block (ram,0x000101dfa858) */
/* WARNING: Removing unreachable block (ram,0x000101dfa87c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb0c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb14) */

code * FUN_101dfe2b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  code **ppcVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE_05;
  code *pcVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  code *unaff_x19;
  long unaff_x20;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  code *UNRECOVERED_JUMPTABLE_03;
  ulong unaff_x21;
  code *pcVar28;
  long unaff_x22;
  ulong uVar29;
  int *piVar30;
  code *pcVar31;
  code *unaff_x23;
  ulong uVar32;
  long lVar33;
  code *pcVar34;
  undefined8 uVar35;
  code *unaff_x24;
  undefined8 uVar36;
  code *UNRECOVERED_JUMPTABLE_04;
  undefined8 *puVar37;
  code *unaff_x25;
  ulong uVar38;
  code *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  ulong uVar39;
  ulong unaff_x29;
  undefined1 auStack_270 [8];
  long lStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  code *pcStack_250;
  code *pcStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  code *pcStack_200;
  code *pcStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  int *piStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  code *pcStack_140;
  code *pcStack_138;
  ulong uStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong uStack_30;
  ulong uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = unaff_x29 | 0x1000000000000000;
  uStack_8 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_80 = *(ulong *)(unaff_x20 + 0x18);
  uVar38 = *(ulong *)(unaff_x20 + 0x20);
  uVar17 = *(ulong *)(unaff_x20 + 0x28);
  uVar29 = *(ulong *)(unaff_x20 + 0x30);
  uVar32 = *(ulong *)(unaff_x20 + 0x38);
  uVar39 = *(ulong *)(unaff_x20 + 0x40);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x48);
  uVar18 = *(ulong *)(unaff_x20 + 0x50);
  uVar4 = *(ulong *)(unaff_x20 + 0x58);
  plVar13 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_101dfeee0;
  uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
  puVar10 = (ulong *)0xc0;
  uStack_10 = uVar4;
  func_0x000107c615b8(0xc0,uStack_8,uStack_80);
  plVar13[2] = (long)puVar10;
  *puVar10 = (ulong)plVar13;
  puVar10[1] = (ulong)FUN_101dfc818;
  uStack_10 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10[0xb] = uVar4;
  puVar10[0xc] = uVar38;
  puVar10[9] = uVar39;
  puVar10[10] = uVar18;
  *(undefined1 *)(puVar10 + 0x16) = uVar5;
  puVar10[7] = uVar29;
  puVar10[8] = uVar32;
  puVar10[6] = uVar17;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfc8c8;
    lVar21 = 0;
    lVar20 = 0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  uStack_80 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd64();
  uVar38 = puVar10[0xb];
  UNRECOVERED_JUMPTABLE_04 = (code *)(uVar38 >> 0x3e);
  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
    if (*(long *)((uVar38 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_101dfcc68;
LAB_101dfc920:
    if ((uVar38 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar38 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccf8);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(puVar10[0xb] + 0x20);
      func_0x000107c61174();
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x00010121c1ac(0,puVar10[0xb]);
    }
    puVar10[0xd] = (ulong)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4abb4();
    if ((int)UNRECOVERED_JUMPTABLE_03 != 1) {
LAB_101dfc99c:
      FUN_101df6cf4();
      pcVar12 = (code *)&UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_03,0,0);
      *(long *)(UNRECOVERED_JUMPTABLE_03 + 8) = 0;
      *(long *)UNRECOVERED_JUMPTABLE_03 = 0x19;
      UNRECOVERED_JUMPTABLE_03[0x10] = (code)0x80;
      func_0x000107c61654();
      func_0x000107c61170(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE_03 = pcVar12;
      goto LAB_101dfcca4;
    }
    pcVar31 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4c930();
    func_0x000107c61180();
    puVar10[0xe] = (ulong)pcVar31;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    if (pcVar31 == (code *)0x0) goto LAB_101dfc99c;
    UNRECOVERED_JUMPTABLE_03 = (code *)puVar10[10];
    FUN_101dfd550(UNRECOVERED_JUMPTABLE_03,puVar10[0xb],puVar10[9],(char)puVar10[0x16]);
    puVar10[0xf] = (ulong)UNRECOVERED_JUMPTABLE_03;
    pcStack_a8 = UNRECOVERED_JUMPTABLE_03;
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
      puVar27 = *(undefined8 **)((uVar38 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar27 = (undefined8 *)(uVar38 & 0xffffffffffffff8);
      if ((uVar38 & 0x8000000000000000) != 0) {
        puVar27 = (undefined8 *)puVar10[0xb];
      }
      func_0x000107c60480();
    }
    pcVar12 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar27 != (undefined8 *)0x0) {
      pcStack_90 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101df6b84(0,(ulong)puVar27 & ((long)puVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar27 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfcd00);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      puVar37 = (undefined8 *)0x0;
      uStack_98 = uVar38 & 0xffffffffffffff8;
      lStack_a0 = puVar10[0xb] + 0x20;
      pcVar34 = unaff_x24;
      do {
        pcVar12 = pcStack_90;
        if ((uVar38 & 0xc000000000000001) == 0) {
          if (*(long *)(uStack_98 + 0x10) <= (long)puVar37) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccfc);
            (*UNRECOVERED_JUMPTABLE_04)();
          }
          puVar22 = *(undefined8 **)(lStack_a0 + (long)puVar37 * 8);
          func_0x000107c61174();
        }
        else {
          puVar22 = puVar37;
          func_0x00010121c1ac(puVar37,puVar10[0xb]);
        }
        puVar11 = puVar22;
        func_0x000107c4c930();
        func_0x000107c61180();
        puVar26 = puVar22;
        func_0x000107c4abb4();
        if ((int)puVar26 != 1 || puVar11 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar26,0,0);
          puVar26[1] = 0;
          *puVar26 = 0x19;
          *(undefined1 *)(puVar26 + 2) = 0x80;
          func_0x000107c61654();
          func_0x000107c61170(puVar11);
          func_0x000107c61170(pcVar31);
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(pcStack_a8);
          func_0x000107c61170(puVar22);
          func_0x000107c61574(pcVar12);
          UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_04;
          unaff_x23 = pcVar31;
          unaff_x24 = pcVar34;
          goto LAB_101dfcca4;
        }
        func_0x000107c61170(puVar22);
        pcVar34 = *(code **)(pcVar12 + 0x10);
        pcStack_90 = pcVar12;
        if ((code *)(*(ulong *)(pcVar12 + 0x18) >> 1) <= pcVar34) {
          func_0x000101df6b84(1 < *(ulong *)(pcVar12 + 0x18),pcVar34 + 1,1);
        }
        puVar37 = (undefined8 *)((long)puVar37 + 1);
        *(code **)(pcStack_90 + 0x10) = pcVar34 + 1;
        *(undefined8 **)(pcStack_90 + (long)pcVar34 * 8 + 0x20) = puVar11;
        pcVar12 = pcStack_90;
      } while (puVar27 != puVar37);
    }
    pcVar34 = pcStack_a8;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    UNRECOVERED_JUMPTABLE_04 = pcStack_a8;
    FUN_101dfead0(pcStack_a8,pcVar12);
    func_0x000107c6142c(pcVar12);
    if (((ulong)UNRECOVERED_JUMPTABLE_04 & 1) != 0) {
      func_0x000107c61170(pcStack_a8);
      func_0x000107c61170(pcVar31);
      func_0x000107c61170(puVar10[0xd]);
      UNRECOVERED_JUMPTABLE_05 = (code *)puVar10[1];
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_80) goto LAB_101dfccc4;
      goto LAB_101dfcd00;
    }
    UNRECOVERED_JUMPTABLE_05 = (code *)0x110;
    UNRECOVERED_JUMPTABLE = pcStack_a8;
    func_0x000107c61174();
    func_0x000107c615b8();
    puVar10[0x10] = (ulong)UNRECOVERED_JUMPTABLE_05;
    *(ulong **)UNRECOVERED_JUMPTABLE_05 = puVar10;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 8) = FUN_101dfcd04;
    pcVar12 = (code *)puVar10[0xc];
    uVar38 = puVar10[6];
    uVar29 = puVar10[7];
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_80) goto LAB_101dfcd00;
    uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
    puVar6 = &stack0xffffffffffffffc0;
    ppcVar7 = (code **)&stack0xffffffffffffffc0;
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa0) = UNRECOVERED_JUMPTABLE;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8) = pcVar12;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x90) = uVar29;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x98) = pcVar31;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x88) = uVar38;
    lVar21 = 0;
    func_0x000107c5ede0();
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb0) = lVar21;
    lVar21 = *(long *)(lVar21 + -8);
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb8) = lVar21;
    uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0xc0) = uVar38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      UNRECOVERED_JUMPTABLE_04 = FUN_101dfa808;
      lVar21 = 0;
      lVar20 = 0;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar20 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
    iVar8 = (int)*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
    func_0x000107c5d0f0();
    if (*(char *)(lVar20 + 0x40) == '\x01' && iVar8 == 1) {
      pcVar28 = (code *)0x150;
      func_0x000107c615b8();
      *(code **)(UNRECOVERED_JUMPTABLE_05 + 200) = pcVar28;
      *(code **)pcVar28 = UNRECOVERED_JUMPTABLE_05;
      *(code **)(pcVar28 + 8) = FUN_101dfa954;
      lVar20 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa0);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x90);
      lVar19 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
      UNRECOVERED_JUMPTABLE_03 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x88);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) goto LAB_101dfa950;
      pcVar31 = FUN_101dfa808;
      puVar10 = (ulong *)((ulong)&uStack_30 & 0xefffffffffffffff);
code_r0x000101dfb414:
      ppcVar7 = (code **)(puVar6 + -0x20);
      *(ulong *)(puVar6 + -0x10) = (ulong)puVar10 | 0x1000000000000000;
      *(code **)(puVar6 + -8) = pcVar31;
      *(code **)(puVar6 + -0x18) = pcVar28;
      *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(long *)(pcVar28 + 0xa0) = lVar20;
      *(code **)(pcVar28 + 0xa8) = UNRECOVERED_JUMPTABLE_04;
      *(code **)(pcVar28 + 0x90) = UNRECOVERED_JUMPTABLE;
      *(long *)(pcVar28 + 0x98) = lVar19;
      *(code **)(pcVar28 + 0x88) = UNRECOVERED_JUMPTABLE_03;
      lVar21 = 0;
      func_0x000107c5ede0();
      *(long *)(pcVar28 + 0xb0) = lVar21;
      lVar21 = *(long *)(lVar21 + -8);
      *(long *)(pcVar28 + 0xb8) = lVar21;
      uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(pcVar28 + 0xc0) = uVar38;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x20)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb4a8;
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar6 + -0x40) = unaff_x21;
      *(ulong *)(puVar6 + -0x30) = (ulong)(puVar6 + -0x10) | 0x1000000000000000;
      *(code **)(puVar6 + -0x28) = FUN_101dfb4a8;
      *(code **)(puVar6 + -0x38) = pcVar28;
      *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c5fd64();
      UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar28 + 0xa8) + 0x38);
      UNRECOVERED_JUMPTABLE = (code *)0x70;
      func_0x000107c615b8();
      *(code **)(pcVar28 + 200) = UNRECOVERED_JUMPTABLE;
      *(code **)UNRECOVERED_JUMPTABLE = pcVar28;
      *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101dfb57c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x48)) {
        UNRECOVERED_JUMPTABLE_05 = pcVar28 + 0x10;
        UNRECOVERED_JUMPTABLE_03 = *(code **)(puVar6 + -0x28);
        uVar38 = *(ulong *)(puVar6 + -0x30) & 0xefffffffffffffff;
        pcVar28 = UNRECOVERED_JUMPTABLE;
        goto LAB_104875f04;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar6 + -0x60) = (ulong)(puVar6 + -0x30) | 0x1000000000000000;
      *(code **)(puVar6 + -0x58) = FUN_101dfb57c;
      *(code **)(puVar6 + -0x68) = pcVar28;
      *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = *(long *)pcVar28;
      *(long *)(puVar6 + -0x68) = lVar21;
      plVar13 = *(long **)pcVar28;
      func_0x000107c615c0(*(undefined8 *)(lVar21 + 200));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x70)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb5f0;
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(code **)(puVar6 + -0xa8) = unaff_x24;
      *(code **)(puVar6 + -0xa0) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x98) = 0;
      *(code **)(puVar6 + -0x90) = unaff_x19;
      *(ulong *)(puVar6 + -0x80) = (ulong)(puVar6 + -0x60) | 0x1000000000000000;
      *(code **)(puVar6 + -0x78) = FUN_101dfb5f0;
      *(long **)(puVar6 + -0x88) = plVar13;
      *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = plVar13[5];
      lVar20 = plVar13[6];
      plVar9 = plVar13 + 2;
      func_0x0001000a8868(plVar9,lVar21);
      piVar30 = *(int **)(lVar20 + 0x10);
      iVar8 = *piVar30;
      puVar27 = (undefined8 *)(ulong)(uint)piVar30[1];
      func_0x000107c615b8();
      plVar13[0x1a] = (long)puVar27;
      *puVar27 = plVar13;
      puVar27[1] = FUN_101dfb6a4;
      UNRECOVERED_JUMPTABLE_04 = (code *)plVar13[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0xb0)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar8 + (long)piVar30))
                  (UNRECOVERED_JUMPTABLE_04,plVar13[0x12],plVar13[0x13],1,lVar21,lVar20);
        return UNRECOVERED_JUMPTABLE_04;
      }
      func_0x000107c60e78();
      ppcVar7 = (code **)(puVar6 + -0xd0);
      *(ulong *)(puVar6 + -0xc0) = (ulong)(puVar6 + -0x80) | 0x1000000000000000;
      *(code **)(puVar6 + -0xb8) = FUN_101dfb6a4;
      *(long **)(puVar6 + -200) = plVar13;
      *(undefined8 *)(puVar6 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = *plVar13;
      *(long *)(puVar6 + -200) = lVar19;
      plVar13 = (long *)*plVar13;
      *(undefined8 **)(lVar19 + 0xd8) = puVar27;
      *(long **)(lVar19 + 0xe0) = plVar9;
      func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xd0));
      if (plVar9 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0xd0))
        goto LAB_101dfb744;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb748;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0xd0)) {
LAB_101dfb744:
          func_0x000107c60e78();
          *(long *)(puVar6 + -0xf8) = lVar20;
          *(long *)(puVar6 + -0xf0) = lVar21;
          *(ulong *)(puVar6 + -0xe0) = (ulong)(puVar6 + -0xc0) | 0x1000000000000000;
          *(code **)(puVar6 + -0xd8) = FUN_101dfb748;
          *(long **)(puVar6 + -0xe8) = plVar13;
          *(undefined8 *)(puVar6 + -0x100) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar21 = plVar13[0x15];
          func_0x0001000834e4(plVar13 + 2);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar21 + 0x18);
          lVar21 = 0x112d51300;
          puVar25 = &UNK_10d917f90;
          func_0x0001000285a8();
          UNRECOVERED_JUMPTABLE_05 = (code *)(plVar13 + 0xc);
          *(long *)UNRECOVERED_JUMPTABLE_05 = lVar21;
          pcVar12 = (code *)0xa0;
          func_0x000107c615b8();
          plVar13[0x1d] = (long)pcVar12;
          UNRECOVERED_JUMPTABLE_03 = pcVar12;
          func_0x000100faa6a0();
          plVar13[0x1e] = (long)UNRECOVERED_JUMPTABLE_03;
          *(long **)pcVar12 = plVar13;
          *(code **)(pcVar12 + 8) = FUN_101dfb814;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x100)) {
            UNRECOVERED_JUMPTABLE = (code *)(plVar13 + 0xb);
            pcVar28 = (code *)(plVar13 + 0xd);
            pcVar31 = *(code **)(puVar6 + -0xd8);
            pcVar34 = *(code **)(puVar6 + -0xf0);
            uVar38 = *(ulong *)(puVar6 + -0xe0) & 0xefffffffffffffff;
            goto LAB_104876574;
          }
          func_0x000107c60e78();
          *(ulong *)(puVar6 + -0x110) = (ulong)(puVar6 + -0xe0) | 0x1000000000000000;
          *(code **)(puVar6 + -0x108) = FUN_101dfb814;
          *(long **)(puVar6 + -0x118) = plVar13;
          *(undefined8 *)(puVar6 + -0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar21 = *plVar13;
          *(long *)(puVar6 + -0x118) = lVar21;
          lVar20 = *plVar13;
          *(code **)(lVar21 + 0xf8) = UNRECOVERED_JUMPTABLE_04;
          func_0x000107c615c0(*(undefined8 *)(lVar21 + 0xe8));
          if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0x120))
            goto LAB_101dfb8b0;
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfb8b4;
          }
          else {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0x120)) {
LAB_101dfb8b0:
              func_0x000107c60e78();
              *(code **)(puVar6 + -0x178) = unaff_x28;
              *(code **)(puVar6 + -0x170) = unaff_x27;
              *(code **)(puVar6 + -0x168) = unaff_x26;
              *(code **)(puVar6 + -0x160) = unaff_x25;
              *(long *)(puVar6 + -0x158) = (long)iVar8;
              *(int **)(puVar6 + -0x150) = piVar30;
              *(code **)(puVar6 + -0x148) = pcVar12;
              *(code **)(puVar6 + -0x140) = UNRECOVERED_JUMPTABLE_05;
              *(ulong *)(puVar6 + -0x130) = (ulong)(puVar6 + -0x110) | 0x1000000000000000;
              *(code **)(puVar6 + -0x128) = FUN_101dfb8b4;
              *(long *)(puVar6 + -0x138) = lVar20;
              *(undefined8 *)(puVar6 + -0x180) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              *(long *)(lVar20 + 0x70) = 0;
              puVar22 = *(undefined8 **)(lVar20 + 0x58);
              *(undefined8 **)(lVar20 + 0x100) = puVar22;
              puVar27 = puVar22;
              func_0x000107c40984();
              func_0x000107c61180();
              *(undefined8 **)(lVar20 + 0x108) = puVar27;
              lVar21 = *(long *)(lVar20 + 0x70);
              func_0x000107c61174();
              puVar37 = puVar27;
              func_0x000107c4403c();
              func_0x000107c61180();
              if (puVar37 == (undefined8 *)0x0) {
                if (lVar21 != 0) goto LAB_101dfb944;
                puVar26 = *(undefined8 **)(lVar20 + 0xd8);
                uVar24 = *(undefined8 *)(lVar20 + 0xc0);
                puVar37 = puVar27;
                func_0x000107c4407c(puVar27);
                func_0x000107c61180();
                puVar11 = puVar37;
                func_0x000107c5faec();
                func_0x000107c61170(puVar37);
                puVar14 = puVar25;
                func_0x000107c5ed80(uVar24,puVar11);
                func_0x000107c6142c(puVar25);
                puVar37 = puVar26;
                func_0x000107c614f0();
                func_0x000107c4407c();
                func_0x000107c61180();
                lVar21 = *(long *)(lVar20 + 0xa0);
                if (puVar26 == (undefined8 *)0x0) {
                  func_0x000107c4a8c4();
                  func_0x000107c61180();
                  if (lVar21 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar33 = *(long *)(lVar20 + 0xa0);
                  lVar19 = lVar21;
                  func_0x000107c5ee30();
                  *(undefined **)(puVar6 + -400) = puVar14;
                  func_0x000107c61170(lVar21);
                  func_0x000107c4a804();
                  func_0x000107c61180();
                  if (lVar33 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar21 = lVar33;
                  func_0x000107c5ee30();
                  puVar25 = puVar14;
                  func_0x000107c61170(lVar33);
                  FUN_101dffdc4();
                  *(long *)(puVar6 + -0x1a0) = lVar21;
                  *(undefined **)(puVar6 + -0x198) = puVar14;
                  if ((ulong)puVar25 >> 0x3c < 0xf) {
                    func_0x0001000d224c(lVar20 + 0x38);
                    uVar38 = *(ulong *)(lVar20 + 0x38);
                    lVar33 = *(long *)(lVar20 + 0x40);
                    uVar29 = uVar38;
                    func_0x000107c614f0();
                    *(ulong *)(lVar20 + 0x78) = uVar38;
                    (**(code **)(*(long *)(lVar33 + 8) + 0x28))();
                    func_0x000107c615e8(uVar38);
                    *(undefined8 **)(puVar6 + -0x1b0) = puVar37;
                    *(undefined **)(puVar6 + -0x1a8) = puVar25;
                    func_0x000107c5ee20(puVar37,puVar25);
                    *(long *)(puVar6 + -0x1b8) = lVar19;
                    func_0x000107c5ee20(lVar19,*(undefined8 *)(puVar6 + -400));
                    uVar24 = *(undefined8 *)(puVar6 + -0x198);
                    func_0x000107c5ee20(lVar21,uVar24);
                    puVar11 = puVar37;
                    if ((uVar29 & 1) == 0) {
                      func_0x000107c51bb8();
                    }
                    else {
                      func_0x000107c51bbc();
                    }
                    func_0x000107c61180();
                    func_0x000107c61170(lVar21);
                    func_0x000107c61170(lVar19);
                    func_0x000107c61170();
                    if (puVar11 != (undefined8 *)0x0) {
                      lVar21 = *(long *)(lVar20 + 0xf8);
                      puVar26 = *(undefined8 **)(lVar20 + 0xc0);
                      puVar37 = puVar11;
                      func_0x000107c5ee30(puVar11);
                      func_0x000107c61170(puVar11);
                      func_0x000107c5ee40(puVar26,1,puVar37,uVar24);
                      if (lVar21 == 0) {
                        func_0x0001000b44c0(*(undefined8 *)(puVar6 + -0x1b0),
                                            *(undefined8 *)(puVar6 + -0x1a8));
                        func_0x00010006c090(puVar37,uVar24);
                        uVar24 = *(undefined8 *)(puVar6 + -0x1b8);
                        func_0x00010006c090(*(undefined8 *)(puVar6 + -0x1a0),
                                            *(undefined8 *)(puVar6 + -0x198));
                        func_0x00010006c090(uVar24,*(undefined8 *)(puVar6 + -400));
                        func_0x0001000d224c(lVar20 + 0x48);
                        uVar38 = *(ulong *)(lVar20 + 0x48);
                        lVar21 = *(long *)(lVar20 + 0x50);
                        uVar29 = uVar38;
                        func_0x000107c614f0();
                        *(ulong *)(lVar20 + 0x80) = uVar38;
                        (**(code **)(*(long *)(lVar21 + 8) + 0x18))();
                        func_0x000107c615e8(uVar38);
                        if ((uVar29 & 1) == 0) {
                          uVar24 = *(undefined8 *)(lVar20 + 0x100);
                          (**(code **)(*(long *)(lVar20 + 0xb8) + 8))
                                    (*(undefined8 *)(lVar20 + 0xc0),*(undefined8 *)(lVar20 + 0xb0));
                          func_0x000107c615e8(uVar24);
                        }
                        else {
                          uVar24 = *(undefined8 *)(lVar20 + 0x100);
                          lVar21 = *(long *)(lVar20 + 0xb8);
                          uVar3 = *(undefined8 *)(lVar20 + 0xc0);
                          uVar35 = *(undefined8 *)(lVar20 + 0xb0);
                          func_0x000107c4c4d8(*(undefined8 *)(lVar20 + 0x108));
                          func_0x000107c615e8(uVar24);
                          (**(code **)(lVar21 + 8))(uVar3,uVar35);
                        }
                        uVar24 = *(undefined8 *)(lVar20 + 0xc0);
                        func_0x000107c615e8(*(undefined8 *)(lVar20 + 0xd8));
                        func_0x000107c615c0(uVar24);
                        UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar20 + 0x108);
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x180))
                        {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(lVar20 + 8))(UNRECOVERED_JUMPTABLE_04);
                          return UNRECOVERED_JUMPTABLE_04;
                        }
                        goto LAB_101dfbf08;
                      }
                      lVar19 = *(long *)(puVar6 + -0x1b8);
                      FUN_101df6cf4();
                      func_0x000107c613f8(&UNK_1106e3fc0,puVar26,0,0);
                      puVar26[1] = 0;
                      *puVar26 = 0x14;
                      *(undefined1 *)(puVar26 + 2) = 0x80;
                      func_0x000107c61654();
                      func_0x0001000b44c0(*(undefined8 *)(puVar6 + -0x1b0),
                                          *(undefined8 *)(puVar6 + -0x1a8));
                      func_0x00010006c090(puVar37,uVar24);
                      func_0x000107c614ac(lVar21);
                      goto LAB_101dfbd5c;
                    }
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar37,0,0);
                    puVar37[1] = 0;
                    *puVar37 = 10;
                    *(undefined1 *)(puVar37 + 2) = 0x80;
                    func_0x000107c61654();
                    func_0x0001000b44c0(*(undefined8 *)(puVar6 + -0x1b0),
                                        *(undefined8 *)(puVar6 + -0x1a8));
                    uVar24 = *(undefined8 *)(puVar6 + -400);
                    lVar19 = *(long *)(puVar6 + -0x1b8);
                  }
                  else {
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar37,0,0);
                    puVar37[1] = 0;
                    *puVar37 = 10;
                    *(undefined1 *)(puVar37 + 2) = 0x80;
                    func_0x000107c61654();
LAB_101dfbd5c:
                    uVar24 = *(undefined8 *)(puVar6 + -400);
                  }
                  uVar35 = *(undefined8 *)(lVar20 + 0xd8);
                  lVar21 = *(long *)(lVar20 + 0xb8);
                  uVar3 = *(undefined8 *)(lVar20 + 0xc0);
                  uVar36 = *(undefined8 *)(lVar20 + 0xb0);
                  func_0x00010006c090(*(undefined8 *)(puVar6 + -0x1a0),
                                      *(undefined8 *)(puVar6 + -0x198));
                  func_0x00010006c090(lVar19,uVar24);
                  func_0x000107c615e8(puVar27);
                  func_0x000107c615e8(puVar22);
                  (**(code **)(lVar21 + 8))(uVar3,uVar36);
                  goto LAB_101dfb99c;
                }
                puVar27 = puVar26;
                func_0x000107c5faec();
                puVar25 = puVar14;
                func_0x000107c61170(puVar26);
                *(undefined **)(lVar20 + 0x110) = puVar14;
                func_0x000107c4a8c4();
                func_0x000107c61180();
                if (lVar21 == 0) goto LAB_101dfbf0c;
                lVar33 = *(long *)(lVar20 + 0xa0);
                lVar19 = lVar21;
                func_0x000107c5ee30();
                puVar15 = puVar25;
                func_0x000107c61170(lVar21);
                *(long *)(lVar20 + 0x118) = lVar19;
                *(undefined **)(lVar20 + 0x120) = puVar25;
                func_0x000107c4a804();
                func_0x000107c61180();
                if (lVar33 == 0) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
                  (*UNRECOVERED_JUMPTABLE_04)();
                }
                lVar21 = lVar33;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar33);
                *(long *)(lVar20 + 0x128) = lVar21;
                *(undefined **)(lVar20 + 0x130) = puVar15;
                plVar13 = (long *)0xa0;
                func_0x000107c615b8();
                *(long **)(lVar20 + 0x138) = plVar13;
                *plVar13 = lVar20;
                plVar13[1] = (long)FUN_101dfbf1c;
                lVar20 = *(long *)(lVar20 + 0xc0);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x180)) {
                  uVar24 = *(undefined8 *)(puVar6 + -0x148);
                  uVar36 = *(undefined8 *)(puVar6 + -0x140);
                  uVar3 = *(undefined8 *)(puVar6 + -0x158);
                  uVar1 = *(undefined8 *)(puVar6 + -0x150);
                  uVar35 = *(undefined8 *)(puVar6 + -0x168);
                  uVar2 = *(undefined8 *)(puVar6 + -0x160);
                  *(ulong *)(puVar6 + -0x130) =
                       *(ulong *)(puVar6 + -0x130) & 0xefffffffffffffff | 0x1000000000000000;
                  *(undefined8 *)(puVar6 + -0x128) = *(undefined8 *)(puVar6 + -0x128);
                  *(long **)(puVar6 + -0x138) = plVar13;
                  *(undefined8 *)(puVar6 + -0x140) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  plVar13[0xe] = lVar21;
                  plVar13[0xf] = (long)puVar15;
                  plVar13[0xc] = lVar19;
                  plVar13[0xd] = (long)puVar25;
                  plVar13[10] = (long)puVar14;
                  plVar13[0xb] = lVar20;
                  plVar13[9] = (long)puVar27;
                  lVar21 = 0;
                  func_0x000107c5ede0();
                  plVar13[0x10] = lVar21;
                  lVar21 = *(long *)(lVar21 + -8);
                  plVar13[0x11] = lVar21;
                  uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
                  func_0x000107c615b8();
                  plVar13[0x12] = uVar38;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x140)) {
                    UNRECOVERED_JUMPTABLE_04 = FUN_101dfe3fc;
                    lVar21 = 0;
                    lVar20 = 0;
                    goto _swift_task_switch;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar6 + -0x180) = uVar2;
                  *(undefined8 *)(puVar6 + -0x178) = uVar3;
                  *(undefined8 *)(puVar6 + -0x170) = uVar1;
                  *(undefined8 *)(puVar6 + -0x168) = uVar24;
                  *(undefined8 *)(puVar6 + -0x160) = uVar36;
                  *(ulong *)(puVar6 + -0x150) = (ulong)(puVar6 + -0x130) | 0x1000000000000000;
                  *(code **)(puVar6 + -0x148) = FUN_101dfe3fc;
                  *(long **)(puVar6 + -0x158) = plVar13;
                  *(undefined8 *)(puVar6 + -0x188) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  puVar25 = (undefined *)plVar13[0xe];
                  lVar21 = plVar13[0xf];
                  uVar38 = plVar13[0xc];
                  lVar20 = plVar13[0xd];
                  lVar19 = plVar13[0xb];
                  func_0x000107c5ed80(plVar13[0x12],plVar13[9],plVar13[10]);
                  func_0x000107c5ee20(uVar38,lVar20);
                  func_0x000107c5ee20(puVar25,lVar21);
                  puVar14 = puVar25;
                  func_0x000107c5ed90();
                  puVar15 = puVar14;
                  func_0x000107c5ed90();
                  uVar29 = uVar38;
                  func_0x000107c3127c(uVar38,puVar25,puVar14,puVar15);
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(puVar14);
                  func_0x000107c61170(puVar25);
                  func_0x000107c61170(uVar38);
                  if ((uVar29 & 1) == 0) {
                    lVar21 = plVar13[9];
                    lVar20 = plVar13[10];
                    puVar25 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                    func_0x000107c61168();
                    puVar14 = puVar25;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    lVar33 = lVar21;
                    func_0x000107c5fadc(lVar21,lVar20);
                    func_0x000107c43418(puVar14);
                    func_0x000107c61170(lVar33);
                    func_0x000107c61170(puVar14);
                    puVar14 = puVar25;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    func_0x000107c5fadc(lVar21,lVar20);
                    plVar13[6] = 0;
                    puVar15 = puVar14;
                    func_0x000107c3e388();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar21);
                    func_0x000107c61170(puVar14);
                    lVar21 = plVar13[6];
                    if (puVar15 == (undefined *)0x0) {
                      lVar20 = lVar21;
                      func_0x000107c61174(lVar21);
                      func_0x000107c5ed30(lVar21);
                      func_0x000107c61170(lVar20);
                      func_0x000107c61654();
                      func_0x000107c614ac(lVar21);
LAB_101dfe678:
                      plVar13[3] = 0;
                      plVar13[2] = 0;
                      plVar13[5] = 0;
                      plVar13[4] = 0;
LAB_101dfe680:
                      func_0x000101dfed18(plVar13 + 2,0x112d387f8,&UNK_10d902650);
                    }
                    else {
                      uVar38 = 0;
                      FUN_101a64068();
                      uVar24 = 0x112defdc0;
                      func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
                      puVar14 = PTR___sypN_11034f1a8;
                      puVar16 = puVar15;
                      func_0x000107c5f9e8(puVar15,uVar38,PTR___sypN_11034f1a8 + 8,uVar24);
                      func_0x000107c61174(lVar21);
                      func_0x000107c61170(puVar15);
                      if (puVar16 == (undefined *)0x0) goto LAB_101dfe678;
                      if (*(long *)(puVar16 + 0x10) == 0) {
LAB_101dfe7c0:
                        plVar13[3] = 0;
                        plVar13[2] = 0;
                        plVar13[5] = 0;
                        plVar13[4] = 0;
                      }
                      else {
                        lVar21 = *(long *)PTR__NSFileSize_110345448;
                        func_0x000107c61434(puVar16);
                        FUN_101aae36c(lVar21);
                        if ((uVar38 & 1) == 0) {
                          func_0x000107c6142c(puVar16);
                          goto LAB_101dfe7c0;
                        }
                        func_0x0001000bb420(*(long *)(puVar16 + 0x38) + lVar21 * 0x20,plVar13 + 2);
                        func_0x000107c6142c(puVar16);
                      }
                      func_0x000107c6142c(puVar16);
                      if (plVar13[5] == 0) goto LAB_101dfe680;
                      uVar24 = 0;
                      func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                      plVar9 = plVar13 + 8;
                      func_0x000107c6147c(plVar9,plVar13 + 2,puVar14 + 8,uVar24,6);
                      if (((ulong)plVar9 & 1) != 0) {
                        lVar21 = plVar13[8];
                        func_0x000107c4c0a8(lVar21);
                        func_0x000107c61170(lVar21);
                      }
                    }
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    puVar14 = puVar25;
                    func_0x000107c5ed90();
                    plVar13[7] = 0;
                    puVar15 = puVar25;
                    func_0x000107c4ff50();
                    func_0x000107c61170(puVar14);
                    func_0x000107c61170(puVar25);
                    puVar27 = (undefined8 *)plVar13[7];
                    if ((int)puVar15 == 0) {
                      puVar37 = puVar27;
                      func_0x000107c61174(puVar27);
                      func_0x000107c5ed30();
                      func_0x000107c61170(puVar37);
                      func_0x000107c61654();
                      func_0x000107c614ac();
                    }
                    else {
                      func_0x000107c61174();
                    }
                    uVar29 = plVar13[0x11];
                    puVar25 = (undefined *)plVar13[0x12];
                    uVar38 = plVar13[0x10];
                    FUN_101df6cf4();
                    puVar15 = &UNK_1106e3fc0;
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
                    puVar27[1] = 0;
                    *puVar27 = 10;
                    *(undefined1 *)(puVar27 + 2) = 0x80;
                    func_0x000107c61654();
                    uVar18 = uVar38;
                    (**(code **)(uVar29 + 8))(puVar25);
                    func_0x000107c615c0(puVar25);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar13[1];
                    puVar14 = puVar15;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x188)) {
LAB_101dfe79c:
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE_04)();
                      return UNRECOVERED_JUMPTABLE_04;
                    }
                  }
                  else {
                    puVar15 = (undefined *)plVar13[0x12];
                    uVar18 = plVar13[0x10];
                    (**(code **)(plVar13[0x11] + 8))(puVar15);
                    func_0x000107c615c0(puVar15);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar13[1];
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x188))
                    goto LAB_101dfe79c;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar6 + -0x1e0) = uVar35;
                  *(long *)(puVar6 + -0x1d8) = lVar19;
                  *(ulong *)(puVar6 + -0x1d0) = uVar29;
                  *(ulong *)(puVar6 + -0x1c8) = uVar38;
                  *(long **)(puVar6 + -0x1c0) = plVar13;
                  *(undefined **)(puVar6 + -0x1b8) = puVar14;
                  *(undefined **)(puVar6 + -0x1b0) = puVar15;
                  *(undefined **)(puVar6 + -0x1a8) = puVar25;
                  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x150;
                  *(code **)(puVar6 + -0x198) = FUN_101dfe828;
                  uVar38 = uVar18;
                  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
LAB_101dfe880:
                    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
                    uVar29 = 0xf000000000000000;
                    if (uVar18 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
                    uVar17 = uVar18;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    if (uVar17 == 0) goto LAB_101dfe8bc;
                    uVar32 = uVar17;
                    func_0x000107c5ee30();
                    func_0x000107c61170(uVar17);
                  }
                  else {
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar29 = uVar18;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    uVar38 = uVar29;
                    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_101dfe880;
                    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
                    func_0x000107c5ee30();
                    uVar38 = uVar29;
                    func_0x000107c61170(UNRECOVERED_JUMPTABLE);
                    if (uVar18 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
                    uVar32 = 0;
                    uVar38 = 0xf000000000000000;
                  }
                  if (uVar29 >> 0x3c < 0xf) {
                    if (uVar38 >> 0x3c < 0xf) {
                      func_0x000100de78a0(UNRECOVERED_JUMPTABLE_03,uVar29);
                      func_0x000100de78a0(uVar32,uVar38);
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03;
                      func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_03,uVar29,uVar32,uVar38);
                      func_0x0001000b44c0(uVar32,uVar38);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar29);
                      func_0x0001000b44c0(uVar32,uVar38);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
                      if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                        return (code *)0x0;
                      }
                      goto LAB_101dfe974;
                    }
                  }
                  else if (0xe < uVar38 >> 0x3c) {
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
LAB_101dfe974:
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar38 = uVar29;
                    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
joined_r0x000101dfe9b0:
                      uVar29 = 0xf000000000000000;
                      if (uVar18 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (uVar18 == 0) {
                        uVar18 = 0;
                        goto LAB_101dfe9f8;
                      }
                      uVar32 = uVar18;
                      func_0x000107c5ee30();
                      func_0x000107c61170(uVar18);
                    }
                    else {
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
                        UNRECOVERED_JUMPTABLE = (code *)0x0;
                        uVar38 = uVar29;
                        goto joined_r0x000101dfe9b0;
                      }
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                      func_0x000107c5ee30();
                      uVar38 = uVar29;
                      func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
                      if (uVar18 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
                      uVar38 = 0xf000000000000000;
                      uVar32 = uVar18;
                    }
                    if (uVar29 >> 0x3c < 0xf) {
                      if (uVar38 >> 0x3c < 0xf) {
                        func_0x000100de78a0(UNRECOVERED_JUMPTABLE,uVar29);
                        func_0x000100de78a0(uVar32,uVar38);
                        UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE;
                        func_0x000100e25fcc(UNRECOVERED_JUMPTABLE,uVar29,uVar32,uVar38);
                        func_0x0001000b44c0(uVar32,uVar38);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                        func_0x0001000b44c0(uVar32,uVar38);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                        return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_04 & 1);
                      }
                    }
                    else if (0xe < uVar38 >> 0x3c) {
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                      return (code *)0x1;
                    }
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                    goto LAB_101dfea48;
                  }
                  func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar29);
LAB_101dfea48:
                  func_0x0001000b44c0(uVar32,uVar38);
                  return (code *)0x0;
                }
              }
              else {
                func_0x000107c61170();
LAB_101dfb944:
                uVar35 = *(undefined8 *)(lVar20 + 0xd8);
                FUN_101df6cf4();
                func_0x000107c613f8(&UNK_1106e3fc0,puVar37,0,0);
                puVar37[1] = 0;
                *puVar37 = 7;
                *(undefined1 *)(puVar37 + 2) = 0x80;
                func_0x000107c61654();
                func_0x000107c615e8(puVar22);
                func_0x000107c615e8(puVar27);
                func_0x000107c61170(lVar21);
LAB_101dfb99c:
                func_0x000107c615e8(uVar35);
                func_0x000107c615c0(*(undefined8 *)(lVar20 + 0xc0));
                UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar20 + 8);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x180)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE_04)();
                  return UNRECOVERED_JUMPTABLE_04;
                }
              }
LAB_101dfbf08:
              func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
              (*UNRECOVERED_JUMPTABLE_04)();
            }
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfc208;
          }
          lVar21 = 0;
          lVar20 = 0;
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfc1a0;
      }
      lVar21 = 0;
      lVar20 = 0;
      goto _swift_task_switch;
    }
    unaff_x21 = 0;
    func_0x000107c5fd64();
    UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8) + 0x38);
    pcVar28 = (code *)0x70;
    func_0x000107c615b8();
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xd0) = pcVar28;
    *(code **)pcVar28 = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar28 + 8) = FUN_101dfa9f8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
LAB_101dfa950:
      func_0x000107c60e78();
      uStack_80 = (ulong)&stack0xffffffffffffffb0 | 0x1000000000000000;
      lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_03 = *(code **)UNRECOVERED_JUMPTABLE_05;
      plVar13 = *(long **)UNRECOVERED_JUMPTABLE_05;
      uStack_98 = unaff_x21;
      pcStack_90 = unaff_x19;
      pcStack_88 = UNRECOVERED_JUMPTABLE_03;
      func_0x000107c615c0(*(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 200));
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_03 + 0xc0);
      func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        UNRECOVERED_JUMPTABLE = pcVar28;
      }
      else {
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar21 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar13[1])();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
      pcStack_a8 = FUN_101dfa9f8;
      uStack_c0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      pcStack_b8 = (code *)*plVar13;
      puVar27 = (undefined8 *)*plVar13;
      func_0x000107c615c0(*(undefined8 *)(pcStack_b8 + 0xd0));
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_c0) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfaa6c;
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      pcStack_d0 = (code *)((ulong)&uStack_b0 | 0x1000000000000000);
      pcStack_c8 = FUN_101dfaa6c;
      pcStack_100 = *(code **)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_04 = (code *)puVar27[5];
      lVar20 = puVar27[6];
      puVar37 = puVar27 + 2;
      pcStack_f8 = unaff_x24;
      pcStack_f0 = unaff_x23;
      pcStack_e8 = UNRECOVERED_JUMPTABLE_03;
      pcStack_e0 = pcVar28;
      puStack_d8 = puVar27;
      func_0x0001000a8868(puVar37,UNRECOVERED_JUMPTABLE_04);
      piVar30 = *(int **)(lVar20 + 8);
      iVar8 = *piVar30;
      puVar22 = (undefined8 *)(ulong)(uint)piVar30[1];
      func_0x000107c615b8();
      puVar27[0x1b] = puVar22;
      *puVar22 = puVar27;
      puVar22[1] = FUN_101dfab20;
      lVar21 = puVar27[0x12];
      UNRECOVERED_JUMPTABLE = (code *)puVar27[0x11];
      if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_100) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*((code *)(long)iVar8 + (long)piVar30))
                  (UNRECOVERED_JUMPTABLE,lVar21,puVar27[0x13],1,UNRECOVERED_JUMPTABLE_04,lVar20);
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      pcStack_110 = (code *)((ulong)&pcStack_d0 | 0x1000000000000000);
      ppcVar7 = &pcStack_120;
      pcStack_108 = FUN_101dfab20;
      pcStack_120 = *(code **)PTR____stack_chk_guard_11034bdc0;
      pcStack_118 = (code *)*puVar27;
      pcVar28 = (code *)*puVar27;
      *(undefined8 **)(pcStack_118 + 0xe0) = puVar22;
      *(long *)(pcStack_118 + 0xe8) = lVar21;
      *(undefined8 **)(pcStack_118 + 0xf0) = puVar37;
      func_0x000107c615c0(*(long *)(pcStack_118 + 0xd8));
      if (puVar37 == (undefined8 *)0x0) {
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_120) {
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfabc8;
          goto LAB_101dfabac;
        }
      }
      else if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_120) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb30c;
LAB_101dfabac:
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      uStack_130 = (ulong)&pcStack_110 | 0x1000000000000000;
      pcStack_128 = FUN_101dfabc8;
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = *(long *)(pcVar28 + 0xa8);
      lStack_148 = lVar20;
      pcStack_140 = UNRECOVERED_JUMPTABLE_04;
      pcStack_138 = pcVar28;
      func_0x0001000834e4(pcVar28 + 0x10);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar21 + 0x18);
      lVar21 = 0x112d51300;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10d917f90;
      func_0x0001000285a8();
      UNRECOVERED_JUMPTABLE_05 = pcVar28 + 0x60;
      *(long *)UNRECOVERED_JUMPTABLE_05 = lVar21;
      pcVar12 = (code *)0xa0;
      func_0x000107c615b8();
      *(code **)(pcVar28 + 0xf8) = pcVar12;
      UNRECOVERED_JUMPTABLE_03 = pcVar12;
      func_0x000100faa6a0();
      *(code **)(pcVar28 + 0x100) = UNRECOVERED_JUMPTABLE_03;
      *(code **)pcVar12 = pcVar28;
      *(code **)(pcVar12 + 8) = FUN_101dfac94;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
        func_0x000107c60e78();
        uStack_160 = (ulong)&uStack_130 | 0x1000000000000000;
        pcStack_158 = FUN_101dfac94;
        pcStack_170 = *(code **)PTR____stack_chk_guard_11034bdc0;
        pcStack_168 = *(code **)pcVar28;
        pcVar28 = *(code **)pcVar28;
        *(code **)(pcStack_168 + 0x108) = UNRECOVERED_JUMPTABLE_04;
        func_0x000107c615c0(*(undefined8 *)(pcStack_168 + 0xf8));
        if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_170) goto LAB_101dfad30;
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfad34;
        }
        else {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_170) {
LAB_101dfad30:
            func_0x000107c60e78();
            pcStack_180 = (code *)((ulong)&uStack_160 | 0x1000000000000000);
            pcStack_178 = FUN_101dfad34;
            pcStack_1d0 = *(code **)PTR____stack_chk_guard_11034bdc0;
            pcVar34 = pcVar28 + 0x70;
            *(long *)pcVar34 = 0;
            pcVar31 = *(code **)(pcVar28 + 0x58);
            UNRECOVERED_JUMPTABLE_03 = pcVar31;
            pcStack_1c8 = unaff_x28;
            pcStack_1c0 = unaff_x27;
            pcStack_1b8 = unaff_x26;
            pcStack_1b0 = unaff_x25;
            pcStack_1a8 = (code *)(long)iVar8;
            piStack_1a0 = piVar30;
            pcStack_198 = pcVar12;
            pcStack_190 = UNRECOVERED_JUMPTABLE_05;
            pcStack_188 = pcVar28;
            func_0x000107c40984();
            func_0x000107c61180();
            unaff_x24 = *(code **)pcVar34;
            func_0x000107c61174();
            UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
            func_0x000107c4403c();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
              if (unaff_x24 != (code *)0x0) goto LAB_101dfadbc;
              pcVar12 = *(code **)(pcVar28 + 0xa0);
              func_0x000107c4a8c4();
              func_0x000107c61180();
              UNRECOVERED_JUMPTABLE_04 = pcVar12;
              if (pcVar12 == (code *)0x0) {
LAB_101dfaf74:
                unaff_x25 = *(code **)(pcVar28 + 0xe0);
                unaff_x24 = *(code **)(pcVar28 + 0xe8);
                FUN_101df6cf4();
                puVar25 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 0x16;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x000107c615e8(pcVar31);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                goto LAB_101dfae20;
              }
              uVar38 = *(ulong *)(pcVar28 + 0xa0);
              func_0x000107c5ee30();
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE;
              func_0x000107c61170(pcVar12);
              func_0x000107c4a804();
              func_0x000107c61180();
              if (uVar38 == 0) {
                func_0x00010006c090(UNRECOVERED_JUMPTABLE_04,UNRECOVERED_JUMPTABLE);
                goto LAB_101dfaf74;
              }
              pcStack_1f8 = *(code **)(pcVar28 + 0xe0);
              uStack_1f0 = *(ulong *)(pcVar28 + 0xe8);
              lVar21 = *(long *)(pcVar28 + 0xa8);
              uVar29 = uVar38;
              pcStack_1e8 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5ee30();
              pcStack_1e0 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c61170(uVar38);
              lStack_208 = *(long *)(lVar21 + 0x30);
              func_0x0001000d224c(pcVar28 + 0x38);
              uVar38 = *(ulong *)(pcVar28 + 0x38);
              lVar21 = *(long *)(pcVar28 + 0x40);
              uVar18 = uVar38;
              func_0x000107c614f0();
              *(ulong *)(pcVar28 + 0x78) = uVar38;
              (**(code **)(*(long *)(lVar21 + 8) + 0x28))();
              unaff_x26 = pcStack_1e8;
              func_0x000107c615e8(uVar38);
              UNRECOVERED_JUMPTABLE_04 = pcStack_1f8;
              func_0x000107c5ee20(pcStack_1f8,uStack_1f0);
              pcVar12 = unaff_x26;
              pcStack_1f8 = UNRECOVERED_JUMPTABLE;
              func_0x000107c5ee20(unaff_x26,UNRECOVERED_JUMPTABLE);
              unaff_x27 = pcStack_1e0;
              UNRECOVERED_JUMPTABLE = pcStack_1e0;
              uStack_1f0 = uVar29;
              func_0x000107c5ee20(uVar29);
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_04;
              if ((uVar18 & 1) == 0) {
                func_0x000107c51bb8();
              }
              else {
                func_0x000107c51bbc();
              }
              func_0x000107c61180();
              func_0x000107c61170(uVar29);
              func_0x000107c61170(pcVar12);
              func_0x000107c61170();
              if (UNRECOVERED_JUMPTABLE_05 == (code *)0x0) {
                unaff_x25 = *(code **)(pcVar28 + 0xe0);
                unaff_x24 = *(code **)(pcVar28 + 0xe8);
                FUN_101df6cf4();
                puVar25 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(long *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(long *)UNRECOVERED_JUMPTABLE_04 = 10;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x26,pcStack_1f8);
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x00010006c090(uStack_1f0,unaff_x27);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar31);
                goto LAB_101dfae20;
              }
              pcStack_200 = *(code **)(pcVar28 + 0x108);
              puVar27 = *(undefined8 **)(pcVar28 + 0xc0);
              unaff_x25 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c5ee30();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_05);
              func_0x00010006c00c(unaff_x25,UNRECOVERED_JUMPTABLE);
              pcVar34 = UNRECOVERED_JUMPTABLE;
              func_0x0001000b44c0(unaff_x25,UNRECOVERED_JUMPTABLE);
              UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
              func_0x000107c4407c(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61180();
              pcVar12 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5faec();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
              func_0x000107c5ed80(puVar27,pcVar12,pcVar34);
              func_0x000107c6142c(pcVar34);
              unaff_x26 = pcStack_200;
              func_0x000107c5ee40(puVar27,1,unaff_x25,UNRECOVERED_JUMPTABLE);
              if (unaff_x26 != (code *)0x0) {
                pcVar34 = *(code **)(pcVar28 + 0xe0);
                UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0xe8);
                lStack_210 = *(long *)(pcVar28 + 0xb8);
                pcStack_200 = *(code **)(pcVar28 + 0xc0);
                lStack_208 = *(long *)(pcVar28 + 0xb0);
                FUN_101df6cf4();
                puVar25 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
                puVar27[1] = 0;
                *puVar27 = 0x14;
                *(undefined1 *)(puVar27 + 2) = 0x80;
                func_0x000107c61654();
                func_0x00010006c090(pcStack_1e8,pcStack_1f8);
                func_0x00010006c090(pcVar34,UNRECOVERED_JUMPTABLE_04);
                func_0x00010006c090(uStack_1f0,pcStack_1e0);
                func_0x00010006c090(unaff_x25,UNRECOVERED_JUMPTABLE);
                func_0x000107c614ac(unaff_x26);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar31);
                (**(code **)(lStack_210 + 8))(pcStack_200,lStack_208);
                unaff_x24 = unaff_x25;
                unaff_x25 = UNRECOVERED_JUMPTABLE_04;
                unaff_x27 = UNRECOVERED_JUMPTABLE;
                goto LAB_101dfae20;
              }
              pcStack_200 = UNRECOVERED_JUMPTABLE;
              func_0x0001000d224c(pcVar28 + 0x48);
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x48);
              lVar21 = *(long *)(pcVar28 + 0x50);
              unaff_x24 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c614f0();
              *(code **)(pcVar28 + 0x80) = UNRECOVERED_JUMPTABLE_04;
              (**(code **)(*(long *)(lVar21 + 8) + 0x18))();
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_04);
              pcVar34 = *(code **)(pcVar28 + 0xe0);
              unaff_x26 = *(code **)(pcVar28 + 0xe8);
              unaff_x27 = *(code **)(pcVar28 + 0xb8);
              lVar21 = *(long *)(pcVar28 + 0xc0);
              puVar25 = *(undefined **)(pcVar28 + 0xb0);
              if (((ulong)unaff_x24 & 1) == 0) {
                (**(code **)(unaff_x27 + 8))(lVar21,puVar25);
                func_0x00010006c090(pcStack_1e8,pcStack_1f8);
                func_0x00010006c090(pcVar34,unaff_x26);
                func_0x00010006c090(uStack_1f0,pcStack_1e0);
                func_0x00010006c090(unaff_x25,pcStack_200);
                func_0x000107c615e8(pcVar31);
              }
              else {
                func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE_03);
                func_0x00010006c090(pcStack_1e8,pcStack_1f8);
                func_0x00010006c090(pcVar34,unaff_x26);
                func_0x00010006c090(uStack_1f0,pcStack_1e0);
                func_0x00010006c090(unaff_x25,pcStack_200);
                func_0x000107c615e8(pcVar31);
                (**(code **)(unaff_x27 + 8))(lVar21,puVar25);
              }
              func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(pcVar28 + 8))(UNRECOVERED_JUMPTABLE_03);
                return UNRECOVERED_JUMPTABLE_03;
              }
            }
            else {
              func_0x000107c61170();
LAB_101dfadbc:
              unaff_x26 = *(code **)(pcVar28 + 0xe0);
              unaff_x25 = *(code **)(pcVar28 + 0xe8);
              FUN_101df6cf4();
              puVar25 = &UNK_1106e3fc0;
              func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
              *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
              *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 7;
              UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
              func_0x000107c61654();
              func_0x00010006c090(unaff_x26,unaff_x25);
              func_0x000107c615e8(pcVar31);
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61170(unaff_x24);
LAB_101dfae20:
              func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE_04)();
                return UNRECOVERED_JUMPTABLE_04;
              }
            }
            func_0x000107c60e78();
            uStack_220 = (ulong)&pcStack_180 | 0x1000000000000000;
            pcStack_218 = FUN_101dfb30c;
            lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcStack_228 = pcVar28;
            func_0x0001000834e4(pcVar28 + 0x10);
            func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_04)();
              return UNRECOVERED_JUMPTABLE_04;
            }
            func_0x000107c60e78();
            uStack_240 = (ulong)&uStack_220 | 0x1000000000000000;
            puVar6 = auStack_270;
            pcStack_238 = FUN_101dfb374;
            puVar10 = &uStack_240;
            lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar27 = *(undefined8 **)(pcVar28 + 0x100);
            unaff_x21 = *(ulong *)(pcVar28 + 0xe0);
            unaff_x19 = *(code **)(pcVar28 + 0xe8);
            unaff_x23 = *(code **)(pcVar28 + 0x68);
            UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1107a6f08;
            lVar19 = 0;
            lVar20 = 0;
            pcStack_260 = pcVar31;
            puStack_258 = puVar25;
            pcStack_250 = UNRECOVERED_JUMPTABLE_03;
            pcStack_248 = pcVar28;
            func_0x000107c613f8();
            *puVar27 = unaff_x23;
            UNRECOVERED_JUMPTABLE = unaff_x19;
            func_0x00010006c090(unaff_x21);
            func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar28 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
            pcVar31 = FUN_101dfb414;
            func_0x000107c60e78();
            unaff_x28 = pcVar34;
            goto code_r0x000101dfb414;
          }
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfb374;
        }
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      UNRECOVERED_JUMPTABLE = pcVar28 + 0x58;
      pcVar28 = pcVar28 + 0x68;
      uVar38 = uStack_130 & 0xefffffffffffffff;
      pcVar34 = pcStack_140;
      pcVar31 = pcStack_128;
      goto LAB_104876574;
    }
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + 0x10;
    UNRECOVERED_JUMPTABLE_03 = FUN_101dfa808;
    uVar38 = (ulong)&uStack_30 & 0xefffffffffffffff;
LAB_104875f04:
    *(ulong *)((long)ppcVar7 + -0x10) = uVar38 | 0x1000000000000000;
    *(code **)((long)ppcVar7 + -8) = UNRECOVERED_JUMPTABLE_03;
    *(code **)((long)ppcVar7 + -0x18) = pcVar28;
    *(code **)(pcVar28 + 0x28) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar28 + 0x30) = UNRECOVERED_JUMPTABLE_04;
    lVar20 = *(long *)(*(long *)UNRECOVERED_JUMPTABLE_04 + 0x50);
    *(long *)(pcVar28 + 0x38) = lVar20;
    lVar21 = 0;
    __sSqMa(0,lVar20);
    *(long *)(pcVar28 + 0x40) = lVar21;
    lVar21 = *(long *)(lVar21 + -8);
    *(long *)(pcVar28 + 0x48) = lVar21;
    uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar28 + 0x50) = uVar38;
    lVar21 = *(long *)(lVar20 + -8);
    *(long *)(pcVar28 + 0x58) = lVar21;
    uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar28 + 0x60) = uVar38;
    UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_104875f90;
    lVar21 = 0;
    lVar20 = 0;
    goto _swift_task_switch;
  }
  uVar29 = uVar38 & 0xffffffffffffff8;
  if ((uVar38 & 0x8000000000000000) != 0) {
    uVar29 = uVar38;
  }
  func_0x000107c60480();
  if (uVar29 != 0) goto LAB_101dfc920;
LAB_101dfcc68:
  puVar27 = (undefined8 *)0x0;
  UNRECOVERED_JUMPTABLE = (code *)puVar10[10];
  FUN_101df6cf4();
  pcVar12 = (code *)&UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
  *puVar27 = UNRECOVERED_JUMPTABLE;
  puVar27[1] = 0;
  *(undefined1 *)(puVar27 + 2) = 0x60;
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE_03 = pcVar12;
LAB_101dfcca4:
  UNRECOVERED_JUMPTABLE_05 = (code *)puVar10[1];
  pcVar31 = unaff_x23;
  pcVar34 = unaff_x24;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_80) {
LAB_101dfccc4:
                    /* WARNING: Could not recover jumptable at 0x000101dfcce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  }
LAB_101dfcd00:
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_30 | 0x1000000000000000;
  ppcVar7 = &pcStack_e0;
  pcStack_b8 = FUN_101dfcd04;
  puStack_d8 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  pcVar23 = (code *)*puVar10;
  pcVar28 = (code *)*puVar10;
  *(code **)(pcVar23 + 0x88) = UNRECOVERED_JUMPTABLE_05;
  *(code **)(pcVar23 + 0x90) = pcVar12;
  pcStack_d0 = UNRECOVERED_JUMPTABLE;
  pcStack_c8 = pcVar23;
  func_0x000107c615c0(*(undefined8 *)(pcVar23 + 0x80));
  func_0x000107c61170(*(undefined8 *)(pcVar23 + 0x78));
  if (pcVar12 == (code *)0x0) {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_d8) goto LAB_101dfcdb4;
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfcdb8;
  }
  else {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_d8) {
LAB_101dfcdb4:
      func_0x000107c60e78();
      pcStack_f0 = (code *)((ulong)&uStack_c0 | 0x1000000000000000);
      pcStack_e8 = FUN_101dfcdb8;
      pcStack_128 = *(code **)PTR____stack_chk_guard_11034bdc0;
      puVar27 = *(undefined8 **)(pcVar28 + 0x70);
      pcStack_120 = UNRECOVERED_JUMPTABLE_04;
      pcStack_118 = pcVar34;
      pcStack_110 = pcVar31;
      pcStack_108 = UNRECOVERED_JUMPTABLE_03;
      pcStack_100 = pcVar23;
      pcStack_f8 = pcVar28;
      func_0x000107c44984();
      if ((int)puVar27 == 0) {
LAB_101dfce34:
        UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar28 + 0x88);
        pcVar34 = *(code **)(pcVar28 + 0x70);
        pcVar31 = *(code **)(pcVar28 + 0x78);
        lVar21 = *(long *)(pcVar28 + 0x68);
        FUN_101df6cf4();
        UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
        func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
        puVar27[1] = 0;
        *puVar27 = 0x1d;
        *(undefined1 *)(puVar27 + 2) = 0x80;
        func_0x000107c61654();
LAB_101dfce7c:
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE_05);
        func_0x000107c61170(pcVar31);
        func_0x000107c61170(pcVar34);
        func_0x000107c61170(lVar21);
        UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 8);
        pcVar12 = UNRECOVERED_JUMPTABLE_04;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000101dfced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return UNRECOVERED_JUMPTABLE;
        }
      }
      else {
        lVar21 = *(long *)(pcVar28 + 0x70);
        func_0x000107c4c99c();
        func_0x000107c61180();
        *(long *)(pcVar28 + 0x98) = lVar21;
        puVar27 = (undefined8 *)0x0;
        if (lVar21 == 0) goto LAB_101dfce34;
        UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x90);
        func_0x000107c5fd64();
        if (UNRECOVERED_JUMPTABLE_04 != (code *)0x0) {
          UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar28 + 0x88);
          pcVar34 = *(code **)(pcVar28 + 0x70);
          pcVar31 = *(code **)(pcVar28 + 0x78);
          lVar21 = *(long *)(pcVar28 + 0x68);
          func_0x000107c61170(*(long *)(pcVar28 + 0x98));
          goto LAB_101dfce7c;
        }
        UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar28 + 0x60) + 0x18);
        lVar21 = 0x112d51300;
        func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
        UNRECOVERED_JUMPTABLE_05 = pcVar28 + 0x18;
        *(long *)UNRECOVERED_JUMPTABLE_05 = lVar21;
        pcVar12 = (code *)0xa0;
        func_0x000107c615b8();
        *(code **)(pcVar28 + 0xa0) = pcVar12;
        UNRECOVERED_JUMPTABLE_03 = pcVar12;
        func_0x000100faa6a0();
        *(code **)(pcVar28 + 0xa8) = UNRECOVERED_JUMPTABLE_03;
        *(code **)pcVar12 = pcVar28;
        *(code **)(pcVar12 + 8) = FUN_101dfcf78;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_128) {
          UNRECOVERED_JUMPTABLE = pcVar28 + 0x10;
          pcVar28 = pcVar28 + 0x20;
          uVar38 = (ulong)pcStack_f0 & 0xefffffffffffffff;
          pcVar34 = pcStack_100;
          pcVar31 = pcStack_e8;
LAB_104876574:
          *(code **)((long)ppcVar7 + -0x20) = pcVar34;
          *(ulong *)((long)ppcVar7 + -0x10) = uVar38 | 0x1000000000000000;
          *(code **)((long)ppcVar7 + -8) = pcVar31;
          *(code **)((long)ppcVar7 + -0x18) = pcVar12;
          *(code **)(pcVar12 + 0x58) = UNRECOVERED_JUMPTABLE_03;
          *(code **)(pcVar12 + 0x60) = pcVar28;
          *(code **)(pcVar12 + 0x48) = UNRECOVERED_JUMPTABLE_05;
          *(undefined **)(pcVar12 + 0x50) = &UNK_1107a6f08;
          *(code **)(pcVar12 + 0x40) = UNRECOVERED_JUMPTABLE;
          lVar20 = *(long *)UNRECOVERED_JUMPTABLE_04;
          *(undefined ***)(pcVar12 + 0x68) = &PTR_DAT_1107a6e88;
          lVar21 = 0x10;
          _swift_task_alloc();
          *(long *)(pcVar12 + 0x70) = lVar21;
          lVar21 = *(long *)(lVar20 + 0x50);
          *(long *)(pcVar12 + 0x78) = lVar21;
          lVar21 = *(long *)(lVar21 + -8);
          *(long *)(pcVar12 + 0x80) = lVar21;
          UNRECOVERED_JUMPTABLE_05 = (code *)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
          _swift_task_alloc();
          *(code **)(pcVar12 + 0x88) = UNRECOVERED_JUMPTABLE_05;
          pcVar28 = (code *)0x70;
          _swift_task_alloc();
          *(code **)(pcVar12 + 0x90) = pcVar28;
          *(code **)pcVar28 = pcVar12;
          *(undefined **)(pcVar28 + 8) = &UNK_104876614;
          UNRECOVERED_JUMPTABLE_03 = *(code **)((long)ppcVar7 + -8);
          uVar38 = *(ulong *)((long)ppcVar7 + -0x10) & 0xefffffffffffffff;
          goto LAB_104875f04;
        }
      }
      func_0x000107c60e78();
      pcStack_140 = (code *)((ulong)&pcStack_f0 | 0x1000000000000000);
      pcStack_138 = FUN_101dfcf78;
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_148 = *(long *)pcVar28;
      pcVar28 = *(code **)pcVar28;
      func_0x000107c615c0(*(undefined8 *)(lStack_148 + 0xa0));
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) goto LAB_101dfd010;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd014;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
LAB_101dfd010:
          func_0x000107c60e78();
          uStack_160 = (ulong)&pcStack_140 | 0x1000000000000000;
          pcStack_158 = FUN_101dfd014;
          pcStack_190 = *(code **)PTR____stack_chk_guard_11034bdc0;
          *(long *)(pcVar28 + 0x28) = 0;
          puVar27 = *(undefined8 **)(pcVar28 + 0x10);
          pcStack_188 = pcVar34;
          pcStack_180 = pcVar31;
          pcStack_178 = pcVar12;
          pcStack_170 = UNRECOVERED_JUMPTABLE_05;
          pcStack_168 = pcVar28;
          func_0x000107c5d544(puVar27);
          func_0x000107c615e8();
          if (*(long *)(pcVar28 + 0x28) == 0) {
            uVar24 = *(undefined8 *)(pcVar28 + 0x88);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x70);
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 0x78);
            func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x98));
            func_0x000107c615e8(uVar24);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x68));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar28 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_190) goto LAB_101dfd158;
          }
          else {
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
            puVar27[1] = 0;
            *puVar27 = 0x13;
            *(undefined1 *)(puVar27 + 2) = 0x80;
            func_0x000107c61654();
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 0x88);
            pcVar31 = *(code **)(pcVar28 + 0x70);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x78);
            pcVar34 = *(code **)(pcVar28 + 0x68);
            func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x98));
            func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(pcVar31);
            func_0x000107c61170(pcVar34);
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar28 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_190) {
LAB_101dfd158:
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
          }
          func_0x000107c60e78();
          pcStack_1b0 = (code *)((ulong)&uStack_160 | 0x1000000000000000);
          pcStack_1a8 = FUN_101dfd174;
          pcStack_1e0 = *(code **)PTR____stack_chk_guard_11034bdc0;
          puVar27 = *(undefined8 **)(pcVar28 + 0xa8);
          uVar24 = *(undefined8 *)(pcVar28 + 0x20);
          pcStack_1d8 = pcVar34;
          pcStack_1d0 = pcVar31;
          pcStack_1c8 = UNRECOVERED_JUMPTABLE_04;
          pcStack_1c0 = UNRECOVERED_JUMPTABLE;
          pcStack_1b8 = pcVar28;
          func_0x000107c613f8(&UNK_1107a6f08,puVar27,0,0);
          *puVar27 = uVar24;
          UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 0x88);
          uVar24 = *(undefined8 *)(pcVar28 + 0x70);
          uVar3 = *(undefined8 *)(pcVar28 + 0x78);
          uVar35 = *(undefined8 *)(pcVar28 + 0x68);
          func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x98));
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar24);
          func_0x000107c61170(uVar35);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
          if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1e0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_1f0 = (ulong)&pcStack_1b0 | 0x1000000000000000;
          pcStack_1e8 = FUN_101dfd230;
          lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar24 = *(undefined8 *)(pcVar28 + 0x70);
          lVar21 = *(long *)(pcVar28 + 0x68);
          pcStack_200 = UNRECOVERED_JUMPTABLE;
          pcStack_1f8 = pcVar28;
          func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x78));
          func_0x000107c61170(uVar24);
          func_0x000107c61170(lVar21);
          lVar20 = *(long *)(pcVar28 + 0x90);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_220 = (ulong)&uStack_1f0 | 0x1000000000000000;
          pcStack_218 = FUN_101dfd2ac;
          pcVar28 = *(code **)pcVar28;
          lStack_230 = lVar21;
          pcStack_228 = pcVar28;
          func_0x000107c615c0(*(long *)(pcVar28 + 0x78));
          if (lVar20 == 0) {
            pcVar28[0x8e] = pcVar28[0x8c];
            lVar21 = *(long *)(pcVar28 + 0x50);
            lVar20 = *(long *)(pcVar28 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd340;
          }
          else {
            *(long *)(pcVar28 + 0x80) = lVar20;
            lVar21 = *(long *)(pcVar28 + 0x50);
            lVar20 = *(long *)(pcVar28 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd444;
          }
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd174;
      }
      lVar21 = 0;
      lVar20 = 0;
      goto _swift_task_switch;
    }
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfd230;
  }
  lVar21 = 0;
  lVar20 = 0;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_04,lVar21,lVar20);
  return UNRECOVERED_JUMPTABLE_04;
}



/* Entry: 101dfe364; end: 101dfe3fb;  */

code * FUN_101dfe364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long unaff_x22;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x80) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    UNRECOVERED_JUMPTABLE = FUN_101dfe3fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101dfe3fc,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar1 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(ulong *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c5ed80(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x48),
                      *(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c5ee20(uVar2,uVar4);
  func_0x000107c5ee20(uVar16,uVar3);
  uVar3 = uVar16;
  func_0x000107c5ed90();
  uVar4 = uVar3;
  func_0x000107c5ed90();
  uVar18 = uVar2;
  func_0x000107c3127c(uVar2,uVar16,uVar3,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar2);
  if ((uVar18 & 1) == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    puVar6 = puVar5;
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar4 = uVar16;
    func_0x000107c5fadc(uVar16,uVar3);
    func_0x000107c43418(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar6);
    puVar6 = puVar5;
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(uVar16,uVar3);
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    puVar7 = puVar6;
    func_0x000107c3e388();
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
    func_0x000107c61170(puVar6);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
    if (puVar7 == (undefined *)0x0) {
      uVar3 = uVar16;
      func_0x000107c61174(uVar16);
      func_0x000107c5ed30(uVar16);
      func_0x000107c61170(uVar3);
      func_0x000107c61654();
      func_0x000107c614ac(uVar16);
LAB_101dfe678:
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_101dfe680:
      func_0x000101dfed18(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar2 = 0;
      FUN_101a64068();
      uVar3 = 0x112defdc0;
      func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
      puVar6 = PTR___sypN_11034f1a8;
      puVar8 = puVar7;
      func_0x000107c5f9e8(puVar7,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
      func_0x000107c61174(uVar16);
      func_0x000107c61170(puVar7);
      if (puVar8 == (undefined *)0x0) goto LAB_101dfe678;
      if (*(long *)(puVar8 + 0x10) == 0) {
LAB_101dfe7c0:
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined8 *)(unaff_x22 + 0x20) = 0;
      }
      else {
        lVar12 = *(long *)PTR__NSFileSize_110345448;
        func_0x000107c61434(puVar8);
        FUN_101aae36c(lVar12);
        if ((uVar2 & 1) == 0) {
          func_0x000107c6142c(puVar8);
          goto LAB_101dfe7c0;
        }
        func_0x0001000bb420(*(long *)(puVar8 + 0x38) + lVar12 * 0x20,unaff_x22 + 0x10);
        func_0x000107c6142c(puVar8);
      }
      func_0x000107c6142c(puVar8);
      if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_101dfe680;
      uVar16 = 0;
      func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar2 = unaff_x22 + 0x40;
      func_0x000107c6147c(uVar2,unaff_x22 + 0x10,puVar6 + 8,uVar16,6);
      if ((uVar2 & 1) != 0) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
        func_0x000107c4c0a8(uVar16);
        func_0x000107c61170(uVar16);
      }
    }
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c5ed90();
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    puVar7 = puVar5;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    puVar13 = *(undefined8 **)(unaff_x22 + 0x38);
    if ((int)puVar7 == 0) {
      puVar9 = puVar13;
      func_0x000107c61174(puVar13);
      func_0x000107c5ed30();
      func_0x000107c61170(puVar9);
      func_0x000107c61654();
      func_0x000107c614ac();
    }
    else {
      func_0x000107c61174();
    }
    lVar12 = *(long *)(unaff_x22 + 0x88);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar2 = *(ulong *)(unaff_x22 + 0x80);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar13,0,0);
    puVar13[1] = 0;
    *puVar13 = 10;
    *(undefined1 *)(puVar13 + 2) = 0x80;
    func_0x000107c61654();
    (**(code **)(lVar12 + 8))(uVar16);
    func_0x000107c615c0(uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar2 = *(ulong *)(unaff_x22 + 0x80);
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar16);
    func_0x000107c615c0(uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar12 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uVar18 = uVar2;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
    pcVar14 = (code *)0x0;
    uVar15 = 0xf000000000000000;
    if (uVar2 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
    uVar11 = uVar2;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar11 == 0) goto LAB_101dfe8bc;
    uVar17 = uVar11;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar11);
  }
  else {
    pcVar10 = UNRECOVERED_JUMPTABLE;
    uVar15 = uVar2;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    uVar18 = uVar15;
    if (pcVar10 == (code *)0x0) goto LAB_101dfe880;
    pcVar14 = pcVar10;
    func_0x000107c5ee30();
    uVar18 = uVar15;
    func_0x000107c61170(pcVar10);
    if (uVar2 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
    uVar17 = 0;
    uVar18 = 0xf000000000000000;
  }
  if (uVar15 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      func_0x000100de78a0(pcVar14,uVar15);
      func_0x000100de78a0(uVar17,uVar18);
      pcVar10 = pcVar14;
      func_0x000100e25fcc(pcVar14,uVar15,uVar17,uVar18);
      func_0x0001000b44c0(uVar17,uVar18);
      func_0x0001000b44c0(pcVar14,uVar15);
      func_0x0001000b44c0(uVar17,uVar18);
      func_0x0001000b44c0(pcVar14);
      if (((ulong)pcVar10 & 1) == 0) {
        return (code *)0x0;
      }
      goto LAB_101dfe974;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    func_0x0001000b44c0(pcVar14);
LAB_101dfe974:
    pcVar10 = UNRECOVERED_JUMPTABLE;
    uVar18 = uVar15;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
      uVar15 = 0xf000000000000000;
      if (uVar2 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
      func_0x000107c4a804();
      func_0x000107c61180();
      if (uVar2 == 0) {
        uVar2 = 0;
        goto LAB_101dfe9f8;
      }
      uVar17 = uVar2;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar2);
    }
    else {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        pcVar10 = (code *)0x0;
        uVar18 = uVar15;
        goto joined_r0x000101dfe9b0;
      }
      pcVar10 = UNRECOVERED_JUMPTABLE;
      func_0x000107c5ee30();
      uVar18 = uVar15;
      func_0x000107c61170(UNRECOVERED_JUMPTABLE);
      if (uVar2 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
      uVar18 = 0xf000000000000000;
      uVar17 = uVar2;
    }
    if (uVar15 >> 0x3c < 0xf) {
      if (uVar18 >> 0x3c < 0xf) {
        func_0x000100de78a0(pcVar10,uVar15);
        func_0x000100de78a0(uVar17,uVar18);
        UNRECOVERED_JUMPTABLE = pcVar10;
        func_0x000100e25fcc(pcVar10,uVar15,uVar17,uVar18);
        func_0x0001000b44c0(uVar17,uVar18);
        func_0x0001000b44c0(pcVar10,uVar15);
        func_0x0001000b44c0(uVar17,uVar18);
        func_0x0001000b44c0(pcVar10,uVar15);
        return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
      }
    }
    else if (0xe < uVar18 >> 0x3c) {
      func_0x0001000b44c0(pcVar10,uVar15);
      return (code *)0x1;
    }
    func_0x0001000b44c0(pcVar10,uVar15);
    goto LAB_101dfea48;
  }
  func_0x0001000b44c0(pcVar14,uVar15);
LAB_101dfea48:
  func_0x0001000b44c0(uVar17,uVar18);
  return (code *)0x0;
}



/* Entry: 101dfe3fc; end: 101dfe827;  */

code * FUN_101dfe3fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  code *pcVar14;
  long unaff_x22;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(ulong *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c5ed80(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x48),
                      *(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c5ee20(uVar10,uVar2);
  func_0x000107c5ee20(uVar16,uVar1);
  uVar1 = uVar16;
  func_0x000107c5ed90();
  uVar2 = uVar1;
  func_0x000107c5ed90();
  uVar18 = uVar10;
  func_0x000107c3127c(uVar10,uVar16,uVar1,uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar10);
  if ((uVar18 & 1) == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    puVar4 = puVar3;
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar2 = uVar16;
    func_0x000107c5fadc(uVar16,uVar1);
    func_0x000107c43418(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c415e0();
    func_0x000107c61180();
    func_0x000107c5fadc(uVar16,uVar1);
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    puVar5 = puVar4;
    func_0x000107c3e388();
    func_0x000107c61180();
    func_0x000107c61170(uVar16);
    func_0x000107c61170(puVar4);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
    if (puVar5 == (undefined *)0x0) {
      uVar1 = uVar16;
      func_0x000107c61174(uVar16);
      func_0x000107c5ed30(uVar16);
      func_0x000107c61170(uVar1);
      func_0x000107c61654();
      func_0x000107c614ac(uVar16);
LAB_101dfe678:
      *(undefined8 *)(unaff_x22 + 0x18) = 0;
      *(undefined8 *)(unaff_x22 + 0x10) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_101dfe680:
      func_0x000101dfed18(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
    }
    else {
      uVar10 = 0;
      FUN_101a64068();
      uVar1 = 0x112defdc0;
      func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
      puVar4 = PTR___sypN_11034f1a8;
      puVar6 = puVar5;
      func_0x000107c5f9e8(puVar5,uVar10,PTR___sypN_11034f1a8 + 8,uVar1);
      func_0x000107c61174(uVar16);
      func_0x000107c61170(puVar5);
      if (puVar6 == (undefined *)0x0) goto LAB_101dfe678;
      if (*(long *)(puVar6 + 0x10) == 0) {
LAB_101dfe7c0:
        *(undefined8 *)(unaff_x22 + 0x18) = 0;
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined8 *)(unaff_x22 + 0x20) = 0;
      }
      else {
        lVar12 = *(long *)PTR__NSFileSize_110345448;
        func_0x000107c61434(puVar6);
        FUN_101aae36c(lVar12);
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(puVar6);
          goto LAB_101dfe7c0;
        }
        func_0x0001000bb420(*(long *)(puVar6 + 0x38) + lVar12 * 0x20,unaff_x22 + 0x10);
        func_0x000107c6142c(puVar6);
      }
      func_0x000107c6142c(puVar6);
      if (*(long *)(unaff_x22 + 0x28) == 0) goto LAB_101dfe680;
      uVar16 = 0;
      func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar10 = unaff_x22 + 0x40;
      func_0x000107c6147c(uVar10,unaff_x22 + 0x10,puVar4 + 8,uVar16,6);
      if ((uVar10 & 1) != 0) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
        func_0x000107c4c0a8(uVar16);
        func_0x000107c61170(uVar16);
      }
    }
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    puVar5 = puVar3;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar13 = *(undefined8 **)(unaff_x22 + 0x38);
    if ((int)puVar5 == 0) {
      puVar7 = puVar13;
      func_0x000107c61174(puVar13);
      func_0x000107c5ed30();
      func_0x000107c61170(puVar7);
      func_0x000107c61654();
      func_0x000107c614ac();
    }
    else {
      func_0x000107c61174();
    }
    lVar12 = *(long *)(unaff_x22 + 0x88);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(ulong *)(unaff_x22 + 0x80);
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar13,0,0);
    puVar13[1] = 0;
    *puVar13 = 10;
    *(undefined1 *)(puVar13 + 2) = 0x80;
    func_0x000107c61654();
    (**(code **)(lVar12 + 8))(uVar16);
    func_0x000107c615c0(uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar10 = *(ulong *)(unaff_x22 + 0x80);
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))(uVar16);
    func_0x000107c615c0(uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar12 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  uVar18 = uVar10;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
LAB_101dfe880:
    pcVar14 = (code *)0x0;
    uVar15 = 0xf000000000000000;
    if (uVar10 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
    uVar9 = uVar10;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar9 == 0) goto LAB_101dfe8bc;
    uVar17 = uVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar9);
  }
  else {
    pcVar8 = UNRECOVERED_JUMPTABLE;
    uVar15 = uVar10;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    uVar18 = uVar15;
    if (pcVar8 == (code *)0x0) goto LAB_101dfe880;
    pcVar14 = pcVar8;
    func_0x000107c5ee30();
    uVar18 = uVar15;
    func_0x000107c61170(pcVar8);
    if (uVar10 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
    uVar17 = 0;
    uVar18 = 0xf000000000000000;
  }
  if (uVar15 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      func_0x000100de78a0(pcVar14,uVar15);
      func_0x000100de78a0(uVar17,uVar18);
      pcVar8 = pcVar14;
      func_0x000100e25fcc(pcVar14,uVar15,uVar17,uVar18);
      func_0x0001000b44c0(uVar17,uVar18);
      func_0x0001000b44c0(pcVar14,uVar15);
      func_0x0001000b44c0(uVar17,uVar18);
      func_0x0001000b44c0(pcVar14);
      if (((ulong)pcVar8 & 1) == 0) {
        return (code *)0x0;
      }
      goto LAB_101dfe974;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    func_0x0001000b44c0(pcVar14);
LAB_101dfe974:
    pcVar8 = UNRECOVERED_JUMPTABLE;
    uVar18 = uVar15;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
joined_r0x000101dfe9b0:
      uVar15 = 0xf000000000000000;
      if (uVar10 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
      func_0x000107c4a804();
      func_0x000107c61180();
      if (uVar10 == 0) {
        uVar10 = 0;
        goto LAB_101dfe9f8;
      }
      uVar17 = uVar10;
      func_0x000107c5ee30();
      func_0x000107c61170(uVar10);
    }
    else {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        pcVar8 = (code *)0x0;
        uVar18 = uVar15;
        goto joined_r0x000101dfe9b0;
      }
      pcVar8 = UNRECOVERED_JUMPTABLE;
      func_0x000107c5ee30();
      uVar18 = uVar15;
      func_0x000107c61170(UNRECOVERED_JUMPTABLE);
      if (uVar10 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
      uVar18 = 0xf000000000000000;
      uVar17 = uVar10;
    }
    if (uVar15 >> 0x3c < 0xf) {
      if (uVar18 >> 0x3c < 0xf) {
        func_0x000100de78a0(pcVar8,uVar15);
        func_0x000100de78a0(uVar17,uVar18);
        UNRECOVERED_JUMPTABLE = pcVar8;
        func_0x000100e25fcc(pcVar8,uVar15,uVar17,uVar18);
        func_0x0001000b44c0(uVar17,uVar18);
        func_0x0001000b44c0(pcVar8,uVar15);
        func_0x0001000b44c0(uVar17,uVar18);
        func_0x0001000b44c0(pcVar8,uVar15);
        return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE & 1);
      }
    }
    else if (0xe < uVar18 >> 0x3c) {
      func_0x0001000b44c0(pcVar8,uVar15);
      return (code *)0x1;
    }
    func_0x0001000b44c0(pcVar8,uVar15);
    goto LAB_101dfea48;
  }
  func_0x0001000b44c0(pcVar14,uVar15);
LAB_101dfea48:
  func_0x0001000b44c0(uVar17,uVar18);
  return (code *)0x0;
}



/* Entry: 101dfe828; end: 101dfeacf;  */

uint FUN_101dfe828(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2;
  if (param_1 == 0) {
LAB_101dfe880:
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
    if (param_2 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
    uVar1 = param_2;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar1 == 0) goto LAB_101dfe8bc;
    uVar4 = uVar1;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar1);
  }
  else {
    uVar1 = param_1;
    uVar3 = param_2;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    uVar5 = uVar3;
    if (uVar1 == 0) goto LAB_101dfe880;
    uVar2 = uVar1;
    func_0x000107c5ee30();
    uVar5 = uVar3;
    func_0x000107c61170(uVar1);
    if (param_2 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
    uVar4 = 0;
    uVar5 = 0xf000000000000000;
  }
  if (uVar3 >> 0x3c < 0xf) {
    if (uVar5 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar2,uVar3);
      func_0x000100de78a0(uVar4,uVar5);
      uVar1 = uVar2;
      func_0x000100e25fcc(uVar2,uVar3,uVar4,uVar5);
      func_0x0001000b44c0(uVar4,uVar5);
      func_0x0001000b44c0(uVar2,uVar3);
      func_0x0001000b44c0(uVar4,uVar5);
      func_0x0001000b44c0(uVar2);
      if ((uVar1 & 1) == 0) {
        return 0;
      }
      goto LAB_101dfe974;
    }
  }
  else if (0xe < uVar5 >> 0x3c) {
    func_0x0001000b44c0(uVar2);
LAB_101dfe974:
    uVar5 = uVar3;
    uVar1 = param_1;
    if (param_1 == 0) {
joined_r0x000101dfe9b0:
      uVar3 = 0xf000000000000000;
      if (param_2 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
      func_0x000107c4a804();
      func_0x000107c61180();
      if (param_2 == 0) {
        param_2 = 0;
        goto LAB_101dfe9f8;
      }
      uVar4 = param_2;
      func_0x000107c5ee30();
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (param_1 == 0) {
        uVar5 = uVar3;
        uVar1 = 0;
        goto joined_r0x000101dfe9b0;
      }
      uVar1 = param_1;
      func_0x000107c5ee30();
      uVar5 = uVar3;
      func_0x000107c61170(param_1);
      if (param_2 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
      uVar5 = 0xf000000000000000;
      uVar4 = param_2;
    }
    if (uVar3 >> 0x3c < 0xf) {
      if (uVar5 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar4,uVar5);
        uVar2 = uVar1;
        func_0x000100e25fcc(uVar1,uVar3,uVar4,uVar5);
        func_0x0001000b44c0(uVar4,uVar5);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar4,uVar5);
        func_0x0001000b44c0(uVar1,uVar3);
        return (uint)uVar2 & 1;
      }
    }
    else if (0xe < uVar5 >> 0x3c) {
      func_0x0001000b44c0(uVar1,uVar3);
      return 1;
    }
    func_0x0001000b44c0(uVar1,uVar3);
    goto LAB_101dfea48;
  }
  func_0x0001000b44c0(uVar2,uVar3);
LAB_101dfea48:
  func_0x0001000b44c0(uVar4,uVar5);
  return 0;
}



/* Entry: 101dfead0; end: 101dfed17;  */

uint FUN_101dfead0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  if (param_2 >> 0x3e == 0) {
    uVar7 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar7 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar7 == 0) {
    uVar8 = 0;
  }
  else {
    puVar9 = (undefined8 *)0x0;
    lVar4 = 4;
    do {
      puVar5 = (undefined8 *)(lVar4 + -4);
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(undefined8 **)((param_2 & 0xffffffffffffff8) + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dfecd0);
          (*pcVar2)();
        }
        puVar3 = *(undefined8 **)(param_2 + lVar4 * 8);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar5;
        FUN_101e08a24(puVar5,param_2);
      }
      uVar1 = lVar4 - 3;
      if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dfeccc);
        (*pcVar2)();
      }
      puVar5 = puVar3;
      func_0x000107c44850();
      if ((int)puVar5 == 0) {
        puVar5 = puVar3;
        func_0x000107c4484c();
        if ((int)puVar5 == 0) {
          func_0x000107c54578(puVar3);
        }
        else {
          puVar5 = puVar3;
          func_0x000107c427c8();
          func_0x000107c61180();
          if (puVar5 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
          }
          else {
            puVar6 = puVar5;
            FUN_101dfd9d0();
            func_0x000107c61170(puVar5);
            puVar9 = puVar5;
          }
          uVar8 = (uint)puVar9;
          puVar9 = puVar6;
          FUN_101dfe828(puVar6,param_1);
          if (((ulong)puVar9 & 1) == 0) {
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
            puVar9[1] = 0;
            *puVar9 = 0x18;
            *(undefined1 *)(puVar9 + 2) = 0x80;
            func_0x000107c61654();
            func_0x000107c61170(puVar3);
            goto LAB_101dfecb8;
          }
          func_0x000107c61170(puVar3);
          puVar9 = (undefined8 *)0x1;
          puVar3 = puVar6;
        }
      }
      else {
        puVar9 = puVar3;
        func_0x000107c427cc();
        func_0x000107c61180();
        puVar5 = puVar9;
        FUN_101dfe828();
        uVar8 = (uint)puVar5;
        func_0x000107c61170();
        if (((ulong)puVar5 & 1) == 0) {
          FUN_101df6cf4();
          func_0x000107c613f8(&UNK_1106e3fc0,puVar9,0,0);
          puVar9[1] = 0;
          *puVar9 = 0x18;
          *(undefined1 *)(puVar9 + 2) = 0x80;
          func_0x000107c61654();
          puVar6 = puVar3;
LAB_101dfecb8:
          func_0x000107c61170(puVar6);
          break;
        }
        puVar9 = (undefined8 *)0x1;
      }
      uVar8 = (uint)puVar9;
      func_0x000107c61170(puVar3);
      lVar4 = lVar4 + 1;
    } while (uVar1 != uVar7);
  }
  return uVar8 & 1;
}



/* Entry: 101dfed18; end: 101dfedd7;  */

undefined8 FUN_101dfed18(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101dfedd8; end: 101dfee2b;  */

void FUN_101dfedd8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101dfee2c; end: 101dfeedf;  */

/* WARNING: Removing unreachable block (ram,0x000101dfb4dc) */
/* WARNING: Removing unreachable block (ram,0x000101dfb500) */
/* WARNING: Removing unreachable block (ram,0x000101dfa858) */
/* WARNING: Removing unreachable block (ram,0x000101dfa87c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb0c) */
/* WARNING: Removing unreachable block (ram,0x000101dfcb14) */

code * FUN_101dfee2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  code **ppcVar7;
  int iVar8;
  long *plVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar11;
  code *UNRECOVERED_JUMPTABLE_05;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  code *pcVar23;
  undefined8 uVar24;
  code *unaff_x19;
  long unaff_x20;
  undefined *puVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  code *UNRECOVERED_JUMPTABLE_03;
  ulong unaff_x21;
  code *pcVar28;
  ulong uVar29;
  long unaff_x22;
  int *piVar30;
  code *pcVar31;
  ulong uVar32;
  code *unaff_x23;
  long lVar33;
  code *pcVar34;
  undefined8 uVar35;
  code *unaff_x24;
  undefined8 uVar36;
  code *UNRECOVERED_JUMPTABLE_04;
  undefined8 *puVar37;
  code *unaff_x25;
  ulong uVar38;
  code *unaff_x26;
  code *unaff_x27;
  code *unaff_x28;
  ulong uVar39;
  ulong unaff_x29;
  undefined1 auStack_270 [8];
  long lStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  code *pcStack_250;
  code *pcStack_248;
  ulong uStack_240;
  code *pcStack_238;
  long lStack_230;
  code *pcStack_228;
  ulong uStack_220;
  code *pcStack_218;
  long lStack_210;
  long lStack_208;
  code *pcStack_200;
  code *pcStack_1f8;
  ulong uStack_1f0;
  code *pcStack_1e8;
  code *pcStack_1e0;
  code *pcStack_1d8;
  code *pcStack_1d0;
  code *pcStack_1c8;
  code *pcStack_1c0;
  code *pcStack_1b8;
  code *pcStack_1b0;
  code *pcStack_1a8;
  int *piStack_1a0;
  code *pcStack_198;
  code *pcStack_190;
  code *pcStack_188;
  code *pcStack_180;
  code *pcStack_178;
  code *pcStack_170;
  code *pcStack_168;
  ulong uStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  code *pcStack_140;
  code *pcStack_138;
  ulong uStack_130;
  code *pcStack_128;
  code *pcStack_120;
  code *pcStack_118;
  code *pcStack_110;
  code *pcStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  code *pcStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  ulong uStack_98;
  code *pcStack_90;
  code *pcStack_88;
  ulong uStack_80;
  ulong uStack_30;
  ulong uStack_10;
  undefined8 uStack_8;
  
  uStack_30 = unaff_x29 | 0x1000000000000000;
  uStack_8 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_80 = *(ulong *)(unaff_x20 + 0x18);
  uVar38 = *(ulong *)(unaff_x20 + 0x20);
  uVar16 = *(ulong *)(unaff_x20 + 0x28);
  uVar29 = *(ulong *)(unaff_x20 + 0x30);
  uVar32 = *(ulong *)(unaff_x20 + 0x38);
  uVar39 = *(ulong *)(unaff_x20 + 0x40);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x48);
  uVar18 = *(ulong *)(unaff_x20 + 0x50);
  uVar4 = *(ulong *)(unaff_x20 + 0x58);
  plVar17 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar17;
  *plVar17 = unaff_x22;
  plVar17[1] = 0x101dfeee4;
  uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
  puVar10 = (ulong *)0xc0;
  uStack_10 = uVar4;
  func_0x000107c615b8(0xc0,uStack_8,uStack_80);
  plVar17[2] = (long)puVar10;
  *puVar10 = (ulong)plVar17;
  puVar10[1] = (ulong)FUN_101dfc818;
  uStack_10 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10[0xb] = uVar4;
  puVar10[0xc] = uVar38;
  puVar10[9] = uVar39;
  puVar10[10] = uVar18;
  *(undefined1 *)(puVar10 + 0x16) = uVar5;
  puVar10[7] = uVar29;
  puVar10[8] = uVar32;
  puVar10[6] = uVar16;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfc8c8;
    lVar21 = 0;
    lVar20 = 0;
    goto _swift_task_switch;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  uStack_80 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5fd64();
  uVar38 = puVar10[0xb];
  UNRECOVERED_JUMPTABLE_04 = (code *)(uVar38 >> 0x3e);
  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
    if (*(long *)((uVar38 & 0xffffffffffffff8) + 0x10) == 0) goto LAB_101dfcc68;
LAB_101dfc920:
    if ((uVar38 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar38 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccf8);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      UNRECOVERED_JUMPTABLE = *(code **)(puVar10[0xb] + 0x20);
      func_0x000107c61174();
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      func_0x00010121c1ac(0,puVar10[0xb]);
    }
    puVar10[0xd] = (ulong)UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4abb4();
    if ((int)UNRECOVERED_JUMPTABLE_03 != 1) {
LAB_101dfc99c:
      FUN_101df6cf4();
      pcVar12 = (code *)&UNK_1106e3fc0;
      func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_03,0,0);
      *(long *)(UNRECOVERED_JUMPTABLE_03 + 8) = 0;
      *(long *)UNRECOVERED_JUMPTABLE_03 = 0x19;
      UNRECOVERED_JUMPTABLE_03[0x10] = (code)0x80;
      func_0x000107c61654();
      func_0x000107c61170(UNRECOVERED_JUMPTABLE);
      UNRECOVERED_JUMPTABLE_03 = pcVar12;
      goto LAB_101dfcca4;
    }
    pcVar31 = UNRECOVERED_JUMPTABLE;
    func_0x000107c4c930();
    func_0x000107c61180();
    puVar10[0xe] = (ulong)pcVar31;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    if (pcVar31 == (code *)0x0) goto LAB_101dfc99c;
    UNRECOVERED_JUMPTABLE_03 = (code *)puVar10[10];
    FUN_101dfd550(UNRECOVERED_JUMPTABLE_03,puVar10[0xb],puVar10[9],(char)puVar10[0x16]);
    puVar10[0xf] = (ulong)UNRECOVERED_JUMPTABLE_03;
    pcStack_a8 = UNRECOVERED_JUMPTABLE_03;
    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
      puVar27 = *(undefined8 **)((uVar38 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar27 = (undefined8 *)(uVar38 & 0xffffffffffffff8);
      if ((uVar38 & 0x8000000000000000) != 0) {
        puVar27 = (undefined8 *)puVar10[0xb];
      }
      func_0x000107c60480();
    }
    pcVar12 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar27 != (undefined8 *)0x0) {
      pcStack_90 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101df6b84(0,(ulong)puVar27 & ((long)puVar27 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)puVar27 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfcd00);
        (*UNRECOVERED_JUMPTABLE_04)();
      }
      puVar37 = (undefined8 *)0x0;
      uStack_98 = uVar38 & 0xffffffffffffff8;
      lStack_a0 = puVar10[0xb] + 0x20;
      pcVar34 = unaff_x24;
      do {
        pcVar12 = pcStack_90;
        if ((uVar38 & 0xc000000000000001) == 0) {
          if (*(long *)(uStack_98 + 0x10) <= (long)puVar37) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfccfc);
            (*UNRECOVERED_JUMPTABLE_04)();
          }
          puVar22 = *(undefined8 **)(lStack_a0 + (long)puVar37 * 8);
          func_0x000107c61174();
        }
        else {
          puVar22 = puVar37;
          func_0x00010121c1ac(puVar37,puVar10[0xb]);
        }
        puVar11 = puVar22;
        func_0x000107c4c930();
        func_0x000107c61180();
        puVar26 = puVar22;
        func_0x000107c4abb4();
        if ((int)puVar26 != 1 || puVar11 == (undefined8 *)0x0) {
          FUN_101df6cf4();
          UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
          func_0x000107c613f8(&UNK_1106e3fc0,puVar26,0,0);
          puVar26[1] = 0;
          *puVar26 = 0x19;
          *(undefined1 *)(puVar26 + 2) = 0x80;
          func_0x000107c61654();
          func_0x000107c61170(puVar11);
          func_0x000107c61170(pcVar31);
          func_0x000107c61170(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(pcStack_a8);
          func_0x000107c61170(puVar22);
          func_0x000107c61574(pcVar12);
          UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE_04;
          unaff_x23 = pcVar31;
          unaff_x24 = pcVar34;
          goto LAB_101dfcca4;
        }
        func_0x000107c61170(puVar22);
        pcVar34 = *(code **)(pcVar12 + 0x10);
        pcStack_90 = pcVar12;
        if ((code *)(*(ulong *)(pcVar12 + 0x18) >> 1) <= pcVar34) {
          func_0x000101df6b84(1 < *(ulong *)(pcVar12 + 0x18),pcVar34 + 1,1);
        }
        puVar37 = (undefined8 *)((long)puVar37 + 1);
        *(code **)(pcStack_90 + 0x10) = pcVar34 + 1;
        *(undefined8 **)(pcStack_90 + (long)pcVar34 * 8 + 0x20) = puVar11;
        pcVar12 = pcStack_90;
      } while (puVar27 != puVar37);
    }
    pcVar34 = pcStack_a8;
    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
    UNRECOVERED_JUMPTABLE_04 = pcStack_a8;
    FUN_101dfead0(pcStack_a8,pcVar12);
    func_0x000107c6142c(pcVar12);
    if (((ulong)UNRECOVERED_JUMPTABLE_04 & 1) != 0) {
      func_0x000107c61170(pcStack_a8);
      func_0x000107c61170(pcVar31);
      func_0x000107c61170(puVar10[0xd]);
      UNRECOVERED_JUMPTABLE_05 = (code *)puVar10[1];
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_80) goto LAB_101dfccc4;
      goto LAB_101dfcd00;
    }
    UNRECOVERED_JUMPTABLE_05 = (code *)0x110;
    UNRECOVERED_JUMPTABLE = pcStack_a8;
    func_0x000107c61174();
    func_0x000107c615b8();
    puVar10[0x10] = (ulong)UNRECOVERED_JUMPTABLE_05;
    *(ulong **)UNRECOVERED_JUMPTABLE_05 = puVar10;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 8) = FUN_101dfcd04;
    pcVar12 = (code *)puVar10[0xc];
    uVar38 = puVar10[6];
    uVar29 = puVar10[7];
    if (*(ulong *)PTR____stack_chk_guard_11034bdc0 != uStack_80) goto LAB_101dfcd00;
    uStack_30 = uStack_30 & 0xefffffffffffffff | 0x1000000000000000;
    puVar6 = &stack0xffffffffffffffc0;
    ppcVar7 = (code **)&stack0xffffffffffffffc0;
    lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa0) = UNRECOVERED_JUMPTABLE;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8) = pcVar12;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x90) = uVar29;
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x98) = pcVar31;
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0x88) = uVar38;
    lVar21 = 0;
    func_0x000107c5ede0();
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb0) = lVar21;
    lVar21 = *(long *)(lVar21 + -8);
    *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xb8) = lVar21;
    uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(UNRECOVERED_JUMPTABLE_05 + 0xc0) = uVar38;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar20) {
      UNRECOVERED_JUMPTABLE_04 = FUN_101dfa808;
      lVar21 = 0;
      lVar20 = 0;
      goto _swift_task_switch;
    }
    func_0x000107c60e78();
    lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar20 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
    iVar8 = (int)*(undefined8 *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
    func_0x000107c5d0f0();
    if (*(char *)(lVar20 + 0x40) == '\x01' && iVar8 == 1) {
      pcVar28 = (code *)0x150;
      func_0x000107c615b8();
      *(code **)(UNRECOVERED_JUMPTABLE_05 + 200) = pcVar28;
      *(code **)pcVar28 = UNRECOVERED_JUMPTABLE_05;
      *(code **)(pcVar28 + 8) = FUN_101dfa954;
      lVar20 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa0);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xa8);
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x90);
      lVar19 = *(long *)(UNRECOVERED_JUMPTABLE_05 + 0x98);
      UNRECOVERED_JUMPTABLE_03 = *(code **)(UNRECOVERED_JUMPTABLE_05 + 0x88);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) goto LAB_101dfa950;
      pcVar31 = FUN_101dfa808;
      puVar10 = (ulong *)((ulong)&uStack_30 & 0xefffffffffffffff);
code_r0x000101dfb414:
      ppcVar7 = (code **)(puVar6 + -0x20);
      *(ulong *)(puVar6 + -0x10) = (ulong)puVar10 | 0x1000000000000000;
      *(code **)(puVar6 + -8) = pcVar31;
      *(code **)(puVar6 + -0x18) = pcVar28;
      *(undefined8 *)(puVar6 + -0x20) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      *(long *)(pcVar28 + 0xa0) = lVar20;
      *(code **)(pcVar28 + 0xa8) = UNRECOVERED_JUMPTABLE_04;
      *(code **)(pcVar28 + 0x90) = UNRECOVERED_JUMPTABLE;
      *(long *)(pcVar28 + 0x98) = lVar19;
      *(code **)(pcVar28 + 0x88) = UNRECOVERED_JUMPTABLE_03;
      lVar21 = 0;
      func_0x000107c5ede0();
      *(long *)(pcVar28 + 0xb0) = lVar21;
      lVar21 = *(long *)(lVar21 + -8);
      *(long *)(pcVar28 + 0xb8) = lVar21;
      uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(pcVar28 + 0xc0) = uVar38;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x20)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb4a8;
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar6 + -0x40) = unaff_x21;
      *(ulong *)(puVar6 + -0x30) = (ulong)(puVar6 + -0x10) | 0x1000000000000000;
      *(code **)(puVar6 + -0x28) = FUN_101dfb4a8;
      *(code **)(puVar6 + -0x38) = pcVar28;
      *(undefined8 *)(puVar6 + -0x48) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      func_0x000107c5fd64();
      UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar28 + 0xa8) + 0x38);
      UNRECOVERED_JUMPTABLE = (code *)0x70;
      func_0x000107c615b8();
      *(code **)(pcVar28 + 200) = UNRECOVERED_JUMPTABLE;
      *(code **)UNRECOVERED_JUMPTABLE = pcVar28;
      *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101dfb57c;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x48)) {
        UNRECOVERED_JUMPTABLE_05 = pcVar28 + 0x10;
        UNRECOVERED_JUMPTABLE_03 = *(code **)(puVar6 + -0x28);
        uVar38 = *(ulong *)(puVar6 + -0x30) & 0xefffffffffffffff;
        pcVar28 = UNRECOVERED_JUMPTABLE;
        goto LAB_104875f04;
      }
      func_0x000107c60e78();
      *(ulong *)(puVar6 + -0x60) = (ulong)(puVar6 + -0x30) | 0x1000000000000000;
      *(code **)(puVar6 + -0x58) = FUN_101dfb57c;
      *(code **)(puVar6 + -0x68) = pcVar28;
      *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = *(long *)pcVar28;
      *(long *)(puVar6 + -0x68) = lVar21;
      plVar17 = *(long **)pcVar28;
      func_0x000107c615c0(*(undefined8 *)(lVar21 + 200));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x70)) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb5f0;
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      *(code **)(puVar6 + -0xa8) = unaff_x24;
      *(code **)(puVar6 + -0xa0) = unaff_x23;
      *(undefined8 *)(puVar6 + -0x98) = 0;
      *(code **)(puVar6 + -0x90) = unaff_x19;
      *(ulong *)(puVar6 + -0x80) = (ulong)(puVar6 + -0x60) | 0x1000000000000000;
      *(code **)(puVar6 + -0x78) = FUN_101dfb5f0;
      *(long **)(puVar6 + -0x88) = plVar17;
      *(undefined8 *)(puVar6 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = plVar17[5];
      lVar20 = plVar17[6];
      plVar9 = plVar17 + 2;
      func_0x0001000a8868(plVar9,lVar21);
      piVar30 = *(int **)(lVar20 + 0x10);
      iVar8 = *piVar30;
      puVar27 = (undefined8 *)(ulong)(uint)piVar30[1];
      func_0x000107c615b8();
      plVar17[0x1a] = (long)puVar27;
      *puVar27 = plVar17;
      puVar27[1] = FUN_101dfb6a4;
      UNRECOVERED_JUMPTABLE_04 = (code *)plVar17[0x11];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0xb0)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar8 + (long)piVar30))
                  (UNRECOVERED_JUMPTABLE_04,plVar17[0x12],plVar17[0x13],1,lVar21,lVar20);
        return UNRECOVERED_JUMPTABLE_04;
      }
      func_0x000107c60e78();
      ppcVar7 = (code **)(puVar6 + -0xd0);
      *(ulong *)(puVar6 + -0xc0) = (ulong)(puVar6 + -0x80) | 0x1000000000000000;
      *(code **)(puVar6 + -0xb8) = FUN_101dfb6a4;
      *(long **)(puVar6 + -200) = plVar17;
      *(undefined8 *)(puVar6 + -0xd0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = *plVar17;
      *(long *)(puVar6 + -200) = lVar19;
      plVar17 = (long *)*plVar17;
      *(undefined8 **)(lVar19 + 0xd8) = puVar27;
      *(long **)(lVar19 + 0xe0) = plVar9;
      func_0x000107c615c0(*(undefined8 *)(lVar19 + 0xd0));
      if (plVar9 == (long *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0xd0))
        goto LAB_101dfb744;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb748;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0xd0)) {
LAB_101dfb744:
          func_0x000107c60e78();
          *(long *)(puVar6 + -0xf8) = lVar20;
          *(long *)(puVar6 + -0xf0) = lVar21;
          *(ulong *)(puVar6 + -0xe0) = (ulong)(puVar6 + -0xc0) | 0x1000000000000000;
          *(code **)(puVar6 + -0xd8) = FUN_101dfb748;
          *(long **)(puVar6 + -0xe8) = plVar17;
          *(undefined8 *)(puVar6 + -0x100) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar21 = plVar17[0x15];
          func_0x0001000834e4(plVar17 + 2);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar21 + 0x18);
          lVar21 = 0x112d51300;
          puVar25 = &UNK_10d917f90;
          func_0x0001000285a8();
          UNRECOVERED_JUMPTABLE_05 = (code *)(plVar17 + 0xc);
          *(long *)UNRECOVERED_JUMPTABLE_05 = lVar21;
          pcVar12 = (code *)0xa0;
          func_0x000107c615b8();
          plVar17[0x1d] = (long)pcVar12;
          UNRECOVERED_JUMPTABLE_03 = pcVar12;
          func_0x000100faa6a0();
          plVar17[0x1e] = (long)UNRECOVERED_JUMPTABLE_03;
          *(long **)pcVar12 = plVar17;
          *(code **)(pcVar12 + 8) = FUN_101dfb814;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x100)) {
            UNRECOVERED_JUMPTABLE = (code *)(plVar17 + 0xb);
            pcVar28 = (code *)(plVar17 + 0xd);
            pcVar31 = *(code **)(puVar6 + -0xd8);
            pcVar34 = *(code **)(puVar6 + -0xf0);
            uVar38 = *(ulong *)(puVar6 + -0xe0) & 0xefffffffffffffff;
            goto LAB_104876574;
          }
          func_0x000107c60e78();
          *(ulong *)(puVar6 + -0x110) = (ulong)(puVar6 + -0xe0) | 0x1000000000000000;
          *(code **)(puVar6 + -0x108) = FUN_101dfb814;
          *(long **)(puVar6 + -0x118) = plVar17;
          *(undefined8 *)(puVar6 + -0x120) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          lVar21 = *plVar17;
          *(long *)(puVar6 + -0x118) = lVar21;
          lVar20 = *plVar17;
          *(code **)(lVar21 + 0xf8) = UNRECOVERED_JUMPTABLE_04;
          func_0x000107c615c0(*(undefined8 *)(lVar21 + 0xe8));
          if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0x120))
            goto LAB_101dfb8b0;
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfb8b4;
          }
          else {
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar6 + -0x120)) {
LAB_101dfb8b0:
              func_0x000107c60e78();
              *(code **)(puVar6 + -0x178) = unaff_x28;
              *(code **)(puVar6 + -0x170) = unaff_x27;
              *(code **)(puVar6 + -0x168) = unaff_x26;
              *(code **)(puVar6 + -0x160) = unaff_x25;
              *(long *)(puVar6 + -0x158) = (long)iVar8;
              *(int **)(puVar6 + -0x150) = piVar30;
              *(code **)(puVar6 + -0x148) = pcVar12;
              *(code **)(puVar6 + -0x140) = UNRECOVERED_JUMPTABLE_05;
              *(ulong *)(puVar6 + -0x130) = (ulong)(puVar6 + -0x110) | 0x1000000000000000;
              *(code **)(puVar6 + -0x128) = FUN_101dfb8b4;
              *(long *)(puVar6 + -0x138) = lVar20;
              *(undefined8 *)(puVar6 + -0x180) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              *(long *)(lVar20 + 0x70) = 0;
              puVar22 = *(undefined8 **)(lVar20 + 0x58);
              *(undefined8 **)(lVar20 + 0x100) = puVar22;
              puVar27 = puVar22;
              func_0x000107c40984();
              func_0x000107c61180();
              *(undefined8 **)(lVar20 + 0x108) = puVar27;
              lVar21 = *(long *)(lVar20 + 0x70);
              func_0x000107c61174();
              puVar37 = puVar27;
              func_0x000107c4403c();
              func_0x000107c61180();
              if (puVar37 == (undefined8 *)0x0) {
                if (lVar21 != 0) goto LAB_101dfb944;
                puVar26 = *(undefined8 **)(lVar20 + 0xd8);
                uVar24 = *(undefined8 *)(lVar20 + 0xc0);
                puVar37 = puVar27;
                func_0x000107c4407c(puVar27);
                func_0x000107c61180();
                puVar11 = puVar37;
                func_0x000107c5faec();
                func_0x000107c61170(puVar37);
                puVar13 = puVar25;
                func_0x000107c5ed80(uVar24,puVar11);
                func_0x000107c6142c(puVar25);
                puVar37 = puVar26;
                func_0x000107c614f0();
                func_0x000107c4407c();
                func_0x000107c61180();
                lVar21 = *(long *)(lVar20 + 0xa0);
                if (puVar26 == (undefined8 *)0x0) {
                  func_0x000107c4a8c4();
                  func_0x000107c61180();
                  if (lVar21 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf18);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar33 = *(long *)(lVar20 + 0xa0);
                  lVar19 = lVar21;
                  func_0x000107c5ee30();
                  *(undefined **)(puVar6 + -400) = puVar13;
                  func_0x000107c61170(lVar21);
                  func_0x000107c4a804();
                  func_0x000107c61180();
                  if (lVar33 == 0) {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf1c);
                    (*UNRECOVERED_JUMPTABLE_04)();
                  }
                  lVar21 = lVar33;
                  func_0x000107c5ee30();
                  puVar25 = puVar13;
                  func_0x000107c61170(lVar33);
                  FUN_101dffdc4();
                  *(long *)(puVar6 + -0x1a0) = lVar21;
                  *(undefined **)(puVar6 + -0x198) = puVar13;
                  if ((ulong)puVar25 >> 0x3c < 0xf) {
                    func_0x0001000d224c(lVar20 + 0x38);
                    uVar38 = *(ulong *)(lVar20 + 0x38);
                    lVar33 = *(long *)(lVar20 + 0x40);
                    uVar29 = uVar38;
                    func_0x000107c614f0();
                    *(ulong *)(lVar20 + 0x78) = uVar38;
                    (**(code **)(*(long *)(lVar33 + 8) + 0x28))();
                    func_0x000107c615e8(uVar38);
                    *(undefined8 **)(puVar6 + -0x1b0) = puVar37;
                    *(undefined **)(puVar6 + -0x1a8) = puVar25;
                    func_0x000107c5ee20(puVar37,puVar25);
                    *(long *)(puVar6 + -0x1b8) = lVar19;
                    func_0x000107c5ee20(lVar19,*(undefined8 *)(puVar6 + -400));
                    uVar24 = *(undefined8 *)(puVar6 + -0x198);
                    func_0x000107c5ee20(lVar21,uVar24);
                    puVar11 = puVar37;
                    if ((uVar29 & 1) == 0) {
                      func_0x000107c51bb8();
                    }
                    else {
                      func_0x000107c51bbc();
                    }
                    func_0x000107c61180();
                    func_0x000107c61170(lVar21);
                    func_0x000107c61170(lVar19);
                    func_0x000107c61170();
                    if (puVar11 != (undefined8 *)0x0) {
                      lVar21 = *(long *)(lVar20 + 0xf8);
                      puVar26 = *(undefined8 **)(lVar20 + 0xc0);
                      puVar37 = puVar11;
                      func_0x000107c5ee30(puVar11);
                      func_0x000107c61170(puVar11);
                      func_0x000107c5ee40(puVar26,1,puVar37,uVar24);
                      if (lVar21 == 0) {
                        func_0x0001000b44c0(*(undefined8 *)(puVar6 + -0x1b0),
                                            *(undefined8 *)(puVar6 + -0x1a8));
                        func_0x00010006c090(puVar37,uVar24);
                        uVar24 = *(undefined8 *)(puVar6 + -0x1b8);
                        func_0x00010006c090(*(undefined8 *)(puVar6 + -0x1a0),
                                            *(undefined8 *)(puVar6 + -0x198));
                        func_0x00010006c090(uVar24,*(undefined8 *)(puVar6 + -400));
                        func_0x0001000d224c(lVar20 + 0x48);
                        uVar38 = *(ulong *)(lVar20 + 0x48);
                        lVar21 = *(long *)(lVar20 + 0x50);
                        uVar29 = uVar38;
                        func_0x000107c614f0();
                        *(ulong *)(lVar20 + 0x80) = uVar38;
                        (**(code **)(*(long *)(lVar21 + 8) + 0x18))();
                        func_0x000107c615e8(uVar38);
                        if ((uVar29 & 1) == 0) {
                          uVar24 = *(undefined8 *)(lVar20 + 0x100);
                          (**(code **)(*(long *)(lVar20 + 0xb8) + 8))
                                    (*(undefined8 *)(lVar20 + 0xc0),*(undefined8 *)(lVar20 + 0xb0));
                          func_0x000107c615e8(uVar24);
                        }
                        else {
                          uVar24 = *(undefined8 *)(lVar20 + 0x100);
                          lVar21 = *(long *)(lVar20 + 0xb8);
                          uVar3 = *(undefined8 *)(lVar20 + 0xc0);
                          uVar35 = *(undefined8 *)(lVar20 + 0xb0);
                          func_0x000107c4c4d8(*(undefined8 *)(lVar20 + 0x108));
                          func_0x000107c615e8(uVar24);
                          (**(code **)(lVar21 + 8))(uVar3,uVar35);
                        }
                        uVar24 = *(undefined8 *)(lVar20 + 0xc0);
                        func_0x000107c615e8(*(undefined8 *)(lVar20 + 0xd8));
                        func_0x000107c615c0(uVar24);
                        UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar20 + 0x108);
                        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x180))
                        {
                    /* WARNING: Could not recover jumptable at 0x000101dfbf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(lVar20 + 8))(UNRECOVERED_JUMPTABLE_04);
                          return UNRECOVERED_JUMPTABLE_04;
                        }
                        goto LAB_101dfbf08;
                      }
                      lVar19 = *(long *)(puVar6 + -0x1b8);
                      FUN_101df6cf4();
                      func_0x000107c613f8(&UNK_1106e3fc0,puVar26,0,0);
                      puVar26[1] = 0;
                      *puVar26 = 0x14;
                      *(undefined1 *)(puVar26 + 2) = 0x80;
                      func_0x000107c61654();
                      func_0x0001000b44c0(*(undefined8 *)(puVar6 + -0x1b0),
                                          *(undefined8 *)(puVar6 + -0x1a8));
                      func_0x00010006c090(puVar37,uVar24);
                      func_0x000107c614ac(lVar21);
                      goto LAB_101dfbd5c;
                    }
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar37,0,0);
                    puVar37[1] = 0;
                    *puVar37 = 10;
                    *(undefined1 *)(puVar37 + 2) = 0x80;
                    func_0x000107c61654();
                    func_0x0001000b44c0(*(undefined8 *)(puVar6 + -0x1b0),
                                        *(undefined8 *)(puVar6 + -0x1a8));
                    uVar24 = *(undefined8 *)(puVar6 + -400);
                    lVar19 = *(long *)(puVar6 + -0x1b8);
                  }
                  else {
                    FUN_101df6cf4();
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar37,0,0);
                    puVar37[1] = 0;
                    *puVar37 = 10;
                    *(undefined1 *)(puVar37 + 2) = 0x80;
                    func_0x000107c61654();
LAB_101dfbd5c:
                    uVar24 = *(undefined8 *)(puVar6 + -400);
                  }
                  uVar35 = *(undefined8 *)(lVar20 + 0xd8);
                  lVar21 = *(long *)(lVar20 + 0xb8);
                  uVar3 = *(undefined8 *)(lVar20 + 0xc0);
                  uVar36 = *(undefined8 *)(lVar20 + 0xb0);
                  func_0x00010006c090(*(undefined8 *)(puVar6 + -0x1a0),
                                      *(undefined8 *)(puVar6 + -0x198));
                  func_0x00010006c090(lVar19,uVar24);
                  func_0x000107c615e8(puVar27);
                  func_0x000107c615e8(puVar22);
                  (**(code **)(lVar21 + 8))(uVar3,uVar36);
                  goto LAB_101dfb99c;
                }
                puVar27 = puVar26;
                func_0x000107c5faec();
                puVar25 = puVar13;
                func_0x000107c61170(puVar26);
                *(undefined **)(lVar20 + 0x110) = puVar13;
                func_0x000107c4a8c4();
                func_0x000107c61180();
                if (lVar21 == 0) goto LAB_101dfbf0c;
                lVar33 = *(long *)(lVar20 + 0xa0);
                lVar19 = lVar21;
                func_0x000107c5ee30();
                puVar14 = puVar25;
                func_0x000107c61170(lVar21);
                *(long *)(lVar20 + 0x118) = lVar19;
                *(undefined **)(lVar20 + 0x120) = puVar25;
                func_0x000107c4a804();
                func_0x000107c61180();
                if (lVar33 == 0) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf14);
                  (*UNRECOVERED_JUMPTABLE_04)();
                }
                lVar21 = lVar33;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar33);
                *(long *)(lVar20 + 0x128) = lVar21;
                *(undefined **)(lVar20 + 0x130) = puVar14;
                plVar17 = (long *)0xa0;
                func_0x000107c615b8();
                *(long **)(lVar20 + 0x138) = plVar17;
                *plVar17 = lVar20;
                plVar17[1] = (long)FUN_101dfbf1c;
                lVar20 = *(long *)(lVar20 + 0xc0);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x180)) {
                  uVar24 = *(undefined8 *)(puVar6 + -0x148);
                  uVar36 = *(undefined8 *)(puVar6 + -0x140);
                  uVar3 = *(undefined8 *)(puVar6 + -0x158);
                  uVar1 = *(undefined8 *)(puVar6 + -0x150);
                  uVar35 = *(undefined8 *)(puVar6 + -0x168);
                  uVar2 = *(undefined8 *)(puVar6 + -0x160);
                  *(ulong *)(puVar6 + -0x130) =
                       *(ulong *)(puVar6 + -0x130) & 0xefffffffffffffff | 0x1000000000000000;
                  *(undefined8 *)(puVar6 + -0x128) = *(undefined8 *)(puVar6 + -0x128);
                  *(long **)(puVar6 + -0x138) = plVar17;
                  *(undefined8 *)(puVar6 + -0x140) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  plVar17[0xe] = lVar21;
                  plVar17[0xf] = (long)puVar14;
                  plVar17[0xc] = lVar19;
                  plVar17[0xd] = (long)puVar25;
                  plVar17[10] = (long)puVar13;
                  plVar17[0xb] = lVar20;
                  plVar17[9] = (long)puVar27;
                  lVar21 = 0;
                  func_0x000107c5ede0();
                  plVar17[0x10] = lVar21;
                  lVar21 = *(long *)(lVar21 + -8);
                  plVar17[0x11] = lVar21;
                  uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
                  func_0x000107c615b8();
                  plVar17[0x12] = uVar38;
                  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x140)) {
                    UNRECOVERED_JUMPTABLE_04 = FUN_101dfe3fc;
                    lVar21 = 0;
                    lVar20 = 0;
                    goto _swift_task_switch;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar6 + -0x180) = uVar2;
                  *(undefined8 *)(puVar6 + -0x178) = uVar3;
                  *(undefined8 *)(puVar6 + -0x170) = uVar1;
                  *(undefined8 *)(puVar6 + -0x168) = uVar24;
                  *(undefined8 *)(puVar6 + -0x160) = uVar36;
                  *(ulong *)(puVar6 + -0x150) = (ulong)(puVar6 + -0x130) | 0x1000000000000000;
                  *(code **)(puVar6 + -0x148) = FUN_101dfe3fc;
                  *(long **)(puVar6 + -0x158) = plVar17;
                  *(undefined8 *)(puVar6 + -0x188) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
                  ;
                  puVar25 = (undefined *)plVar17[0xe];
                  lVar21 = plVar17[0xf];
                  uVar38 = plVar17[0xc];
                  lVar20 = plVar17[0xd];
                  lVar19 = plVar17[0xb];
                  func_0x000107c5ed80(plVar17[0x12],plVar17[9],plVar17[10]);
                  func_0x000107c5ee20(uVar38,lVar20);
                  func_0x000107c5ee20(puVar25,lVar21);
                  puVar13 = puVar25;
                  func_0x000107c5ed90();
                  puVar14 = puVar13;
                  func_0x000107c5ed90();
                  uVar29 = uVar38;
                  func_0x000107c3127c(uVar38,puVar25,puVar13,puVar14);
                  func_0x000107c61170(puVar14);
                  func_0x000107c61170(puVar13);
                  func_0x000107c61170(puVar25);
                  func_0x000107c61170(uVar38);
                  if ((uVar29 & 1) == 0) {
                    lVar21 = plVar17[9];
                    lVar20 = plVar17[10];
                    puVar25 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                    func_0x000107c61168();
                    puVar13 = puVar25;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    lVar33 = lVar21;
                    func_0x000107c5fadc(lVar21,lVar20);
                    func_0x000107c43418(puVar13);
                    func_0x000107c61170(lVar33);
                    func_0x000107c61170(puVar13);
                    puVar13 = puVar25;
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    func_0x000107c5fadc(lVar21,lVar20);
                    plVar17[6] = 0;
                    puVar14 = puVar13;
                    func_0x000107c3e388();
                    func_0x000107c61180();
                    func_0x000107c61170(lVar21);
                    func_0x000107c61170(puVar13);
                    lVar21 = plVar17[6];
                    if (puVar14 == (undefined *)0x0) {
                      lVar20 = lVar21;
                      func_0x000107c61174(lVar21);
                      func_0x000107c5ed30(lVar21);
                      func_0x000107c61170(lVar20);
                      func_0x000107c61654();
                      func_0x000107c614ac(lVar21);
LAB_101dfe678:
                      plVar17[3] = 0;
                      plVar17[2] = 0;
                      plVar17[5] = 0;
                      plVar17[4] = 0;
LAB_101dfe680:
                      func_0x000101dfed18(plVar17 + 2,0x112d387f8,&UNK_10d902650);
                    }
                    else {
                      uVar38 = 0;
                      FUN_101a64068();
                      uVar24 = 0x112defdc0;
                      func_0x000101dfed58(0x112defdc0,FUN_101a64068,&UNK_10d9c6700);
                      puVar13 = PTR___sypN_11034f1a8;
                      puVar15 = puVar14;
                      func_0x000107c5f9e8(puVar14,uVar38,PTR___sypN_11034f1a8 + 8,uVar24);
                      func_0x000107c61174(lVar21);
                      func_0x000107c61170(puVar14);
                      if (puVar15 == (undefined *)0x0) goto LAB_101dfe678;
                      if (*(long *)(puVar15 + 0x10) == 0) {
LAB_101dfe7c0:
                        plVar17[3] = 0;
                        plVar17[2] = 0;
                        plVar17[5] = 0;
                        plVar17[4] = 0;
                      }
                      else {
                        lVar21 = *(long *)PTR__NSFileSize_110345448;
                        func_0x000107c61434(puVar15);
                        FUN_101aae36c(lVar21);
                        if ((uVar38 & 1) == 0) {
                          func_0x000107c6142c(puVar15);
                          goto LAB_101dfe7c0;
                        }
                        func_0x0001000bb420(*(long *)(puVar15 + 0x38) + lVar21 * 0x20,plVar17 + 2);
                        func_0x000107c6142c(puVar15);
                      }
                      func_0x000107c6142c(puVar15);
                      if (plVar17[5] == 0) goto LAB_101dfe680;
                      uVar24 = 0;
                      func_0x000101dfed98(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                      plVar9 = plVar17 + 8;
                      func_0x000107c6147c(plVar9,plVar17 + 2,puVar13 + 8,uVar24,6);
                      if (((ulong)plVar9 & 1) != 0) {
                        lVar21 = plVar17[8];
                        func_0x000107c4c0a8(lVar21);
                        func_0x000107c61170(lVar21);
                      }
                    }
                    func_0x000107c415e0();
                    func_0x000107c61180();
                    puVar13 = puVar25;
                    func_0x000107c5ed90();
                    plVar17[7] = 0;
                    puVar14 = puVar25;
                    func_0x000107c4ff50();
                    func_0x000107c61170(puVar13);
                    func_0x000107c61170(puVar25);
                    puVar27 = (undefined8 *)plVar17[7];
                    if ((int)puVar14 == 0) {
                      puVar37 = puVar27;
                      func_0x000107c61174(puVar27);
                      func_0x000107c5ed30();
                      func_0x000107c61170(puVar37);
                      func_0x000107c61654();
                      func_0x000107c614ac();
                    }
                    else {
                      func_0x000107c61174();
                    }
                    uVar29 = plVar17[0x11];
                    puVar25 = (undefined *)plVar17[0x12];
                    uVar38 = plVar17[0x10];
                    FUN_101df6cf4();
                    puVar14 = &UNK_1106e3fc0;
                    func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
                    puVar27[1] = 0;
                    *puVar27 = 10;
                    *(undefined1 *)(puVar27 + 2) = 0x80;
                    func_0x000107c61654();
                    uVar18 = uVar38;
                    (**(code **)(uVar29 + 8))(puVar25);
                    func_0x000107c615c0(puVar25);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar17[1];
                    puVar13 = puVar14;
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x188)) {
LAB_101dfe79c:
                    /* WARNING: Could not recover jumptable at 0x000101dfe7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE_04)();
                      return UNRECOVERED_JUMPTABLE_04;
                    }
                  }
                  else {
                    puVar14 = (undefined *)plVar17[0x12];
                    uVar18 = plVar17[0x10];
                    (**(code **)(plVar17[0x11] + 8))(puVar14);
                    func_0x000107c615c0(puVar14);
                    UNRECOVERED_JUMPTABLE_04 = (code *)plVar17[1];
                    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x188))
                    goto LAB_101dfe79c;
                  }
                  func_0x000107c60e78();
                  *(undefined8 *)(puVar6 + -0x1e0) = uVar35;
                  *(long *)(puVar6 + -0x1d8) = lVar19;
                  *(ulong *)(puVar6 + -0x1d0) = uVar29;
                  *(ulong *)(puVar6 + -0x1c8) = uVar38;
                  *(long **)(puVar6 + -0x1c0) = plVar17;
                  *(undefined **)(puVar6 + -0x1b8) = puVar13;
                  *(undefined **)(puVar6 + -0x1b0) = puVar14;
                  *(undefined **)(puVar6 + -0x1a8) = puVar25;
                  *(undefined1 **)(puVar6 + -0x1a0) = puVar6 + -0x150;
                  *(code **)(puVar6 + -0x198) = FUN_101dfe828;
                  uVar38 = uVar18;
                  if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
LAB_101dfe880:
                    UNRECOVERED_JUMPTABLE_03 = (code *)0x0;
                    uVar29 = 0xf000000000000000;
                    if (uVar18 == 0) goto LAB_101dfe8bc;
LAB_101dfe88c:
                    uVar16 = uVar18;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    if (uVar16 == 0) goto LAB_101dfe8bc;
                    uVar32 = uVar16;
                    func_0x000107c5ee30();
                    func_0x000107c61170(uVar16);
                  }
                  else {
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar29 = uVar18;
                    func_0x000107c4a8c4();
                    func_0x000107c61180();
                    uVar38 = uVar29;
                    if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto LAB_101dfe880;
                    UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE;
                    func_0x000107c5ee30();
                    uVar38 = uVar29;
                    func_0x000107c61170(UNRECOVERED_JUMPTABLE);
                    if (uVar18 != 0) goto LAB_101dfe88c;
LAB_101dfe8bc:
                    uVar32 = 0;
                    uVar38 = 0xf000000000000000;
                  }
                  if (uVar29 >> 0x3c < 0xf) {
                    if (uVar38 >> 0x3c < 0xf) {
                      func_0x000100de78a0(UNRECOVERED_JUMPTABLE_03,uVar29);
                      func_0x000100de78a0(uVar32,uVar38);
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_03;
                      func_0x000100e25fcc(UNRECOVERED_JUMPTABLE_03,uVar29,uVar32,uVar38);
                      func_0x0001000b44c0(uVar32,uVar38);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar29);
                      func_0x0001000b44c0(uVar32,uVar38);
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
                      if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                        return (code *)0x0;
                      }
                      goto LAB_101dfe974;
                    }
                  }
                  else if (0xe < uVar38 >> 0x3c) {
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03);
LAB_101dfe974:
                    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                    uVar38 = uVar29;
                    if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
joined_r0x000101dfe9b0:
                      uVar29 = 0xf000000000000000;
                      if (uVar18 == 0) goto LAB_101dfe9f8;
LAB_101dfe9c4:
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (uVar18 == 0) {
                        uVar18 = 0;
                        goto LAB_101dfe9f8;
                      }
                      uVar32 = uVar18;
                      func_0x000107c5ee30();
                      func_0x000107c61170(uVar18);
                    }
                    else {
                      func_0x000107c4a804();
                      func_0x000107c61180();
                      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
                        UNRECOVERED_JUMPTABLE = (code *)0x0;
                        uVar38 = uVar29;
                        goto joined_r0x000101dfe9b0;
                      }
                      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE_04;
                      func_0x000107c5ee30();
                      uVar38 = uVar29;
                      func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
                      if (uVar18 != 0) goto LAB_101dfe9c4;
LAB_101dfe9f8:
                      uVar38 = 0xf000000000000000;
                      uVar32 = uVar18;
                    }
                    if (uVar29 >> 0x3c < 0xf) {
                      if (uVar38 >> 0x3c < 0xf) {
                        func_0x000100de78a0(UNRECOVERED_JUMPTABLE,uVar29);
                        func_0x000100de78a0(uVar32,uVar38);
                        UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE;
                        func_0x000100e25fcc(UNRECOVERED_JUMPTABLE,uVar29,uVar32,uVar38);
                        func_0x0001000b44c0(uVar32,uVar38);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                        func_0x0001000b44c0(uVar32,uVar38);
                        func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                        return (code *)(ulong)((uint)UNRECOVERED_JUMPTABLE_04 & 1);
                      }
                    }
                    else if (0xe < uVar38 >> 0x3c) {
                      func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                      return (code *)0x1;
                    }
                    func_0x0001000b44c0(UNRECOVERED_JUMPTABLE,uVar29);
                    goto LAB_101dfea48;
                  }
                  func_0x0001000b44c0(UNRECOVERED_JUMPTABLE_03,uVar29);
LAB_101dfea48:
                  func_0x0001000b44c0(uVar32,uVar38);
                  return (code *)0x0;
                }
              }
              else {
                func_0x000107c61170();
LAB_101dfb944:
                uVar35 = *(undefined8 *)(lVar20 + 0xd8);
                FUN_101df6cf4();
                func_0x000107c613f8(&UNK_1106e3fc0,puVar37,0,0);
                puVar37[1] = 0;
                *puVar37 = 7;
                *(undefined1 *)(puVar37 + 2) = 0x80;
                func_0x000107c61654();
                func_0x000107c615e8(puVar22);
                func_0x000107c615e8(puVar27);
                func_0x000107c61170(lVar21);
LAB_101dfb99c:
                func_0x000107c615e8(uVar35);
                func_0x000107c615c0(*(undefined8 *)(lVar20 + 0xc0));
                UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar20 + 8);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x180)) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE_04)();
                  return UNRECOVERED_JUMPTABLE_04;
                }
              }
LAB_101dfbf08:
              func_0x000107c60e78();
LAB_101dfbf0c:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_04 = (code *)SoftwareBreakpoint(1,0x101dfbf10);
              (*UNRECOVERED_JUMPTABLE_04)();
            }
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfc208;
          }
          lVar21 = 0;
          lVar20 = 0;
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfc1a0;
      }
      lVar21 = 0;
      lVar20 = 0;
      goto _swift_task_switch;
    }
    unaff_x21 = 0;
    func_0x000107c5fd64();
    UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(UNRECOVERED_JUMPTABLE_05 + 0xa8) + 0x38);
    pcVar28 = (code *)0x70;
    func_0x000107c615b8();
    *(code **)(UNRECOVERED_JUMPTABLE_05 + 0xd0) = pcVar28;
    *(code **)pcVar28 = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar28 + 8) = FUN_101dfa9f8;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar21) {
LAB_101dfa950:
      func_0x000107c60e78();
      uStack_80 = (ulong)&stack0xffffffffffffffb0 | 0x1000000000000000;
      lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_03 = *(code **)UNRECOVERED_JUMPTABLE_05;
      plVar17 = *(long **)UNRECOVERED_JUMPTABLE_05;
      uStack_98 = unaff_x21;
      pcStack_90 = unaff_x19;
      pcStack_88 = UNRECOVERED_JUMPTABLE_03;
      func_0x000107c615c0(*(undefined8 *)(UNRECOVERED_JUMPTABLE_03 + 200));
      UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE_03 + 0xc0);
      func_0x000107c615c0(UNRECOVERED_JUMPTABLE);
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
        UNRECOVERED_JUMPTABLE = pcVar28;
      }
      else {
        lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
      }
      if (lVar21 == lStack_a0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfa9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar17[1])();
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      uStack_b0 = (ulong)&uStack_80 | 0x1000000000000000;
      pcStack_a8 = FUN_101dfa9f8;
      uStack_c0 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
      pcStack_b8 = (code *)*plVar17;
      puVar27 = (undefined8 *)*plVar17;
      func_0x000107c615c0(*(undefined8 *)(pcStack_b8 + 0xd0));
      if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_c0) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfaa6c;
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      pcStack_d0 = (code *)((ulong)&uStack_b0 | 0x1000000000000000);
      pcStack_c8 = FUN_101dfaa6c;
      pcStack_100 = *(code **)PTR____stack_chk_guard_11034bdc0;
      UNRECOVERED_JUMPTABLE_04 = (code *)puVar27[5];
      lVar20 = puVar27[6];
      puVar37 = puVar27 + 2;
      pcStack_f8 = unaff_x24;
      pcStack_f0 = unaff_x23;
      pcStack_e8 = UNRECOVERED_JUMPTABLE_03;
      pcStack_e0 = pcVar28;
      puStack_d8 = puVar27;
      func_0x0001000a8868(puVar37,UNRECOVERED_JUMPTABLE_04);
      piVar30 = *(int **)(lVar20 + 8);
      iVar8 = *piVar30;
      puVar22 = (undefined8 *)(ulong)(uint)piVar30[1];
      func_0x000107c615b8();
      puVar27[0x1b] = puVar22;
      *puVar22 = puVar27;
      puVar22[1] = FUN_101dfab20;
      lVar21 = puVar27[0x12];
      UNRECOVERED_JUMPTABLE = (code *)puVar27[0x11];
      if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_100) {
                    /* WARNING: Could not recover jumptable at 0x000101dfab18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*((code *)(long)iVar8 + (long)piVar30))
                  (UNRECOVERED_JUMPTABLE,lVar21,puVar27[0x13],1,UNRECOVERED_JUMPTABLE_04,lVar20);
        return UNRECOVERED_JUMPTABLE;
      }
      func_0x000107c60e78();
      pcStack_110 = (code *)((ulong)&pcStack_d0 | 0x1000000000000000);
      ppcVar7 = &pcStack_120;
      pcStack_108 = FUN_101dfab20;
      pcStack_120 = *(code **)PTR____stack_chk_guard_11034bdc0;
      pcStack_118 = (code *)*puVar27;
      pcVar28 = (code *)*puVar27;
      *(undefined8 **)(pcStack_118 + 0xe0) = puVar22;
      *(long *)(pcStack_118 + 0xe8) = lVar21;
      *(undefined8 **)(pcStack_118 + 0xf0) = puVar37;
      func_0x000107c615c0(*(long *)(pcStack_118 + 0xd8));
      if (puVar37 == (undefined8 *)0x0) {
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_120) {
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfabc8;
          goto LAB_101dfabac;
        }
      }
      else if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_120) {
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfb30c;
LAB_101dfabac:
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      func_0x000107c60e78();
      uStack_130 = (ulong)&pcStack_110 | 0x1000000000000000;
      pcStack_128 = FUN_101dfabc8;
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar21 = *(long *)(pcVar28 + 0xa8);
      lStack_148 = lVar20;
      pcStack_140 = UNRECOVERED_JUMPTABLE_04;
      pcStack_138 = pcVar28;
      func_0x0001000834e4(pcVar28 + 0x10);
      UNRECOVERED_JUMPTABLE_04 = *(code **)(lVar21 + 0x18);
      lVar21 = 0x112d51300;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_10d917f90;
      func_0x0001000285a8();
      UNRECOVERED_JUMPTABLE_05 = pcVar28 + 0x60;
      *(long *)UNRECOVERED_JUMPTABLE_05 = lVar21;
      pcVar12 = (code *)0xa0;
      func_0x000107c615b8();
      *(code **)(pcVar28 + 0xf8) = pcVar12;
      UNRECOVERED_JUMPTABLE_03 = pcVar12;
      func_0x000100faa6a0();
      *(code **)(pcVar28 + 0x100) = UNRECOVERED_JUMPTABLE_03;
      *(code **)pcVar12 = pcVar28;
      *(code **)(pcVar12 + 8) = FUN_101dfac94;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
        func_0x000107c60e78();
        uStack_160 = (ulong)&uStack_130 | 0x1000000000000000;
        pcStack_158 = FUN_101dfac94;
        pcStack_170 = *(code **)PTR____stack_chk_guard_11034bdc0;
        pcStack_168 = *(code **)pcVar28;
        pcVar28 = *(code **)pcVar28;
        *(code **)(pcStack_168 + 0x108) = UNRECOVERED_JUMPTABLE_04;
        func_0x000107c615c0(*(undefined8 *)(pcStack_168 + 0xf8));
        if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_170) goto LAB_101dfad30;
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfad34;
        }
        else {
          if (*(code **)PTR____stack_chk_guard_11034bdc0 != pcStack_170) {
LAB_101dfad30:
            func_0x000107c60e78();
            pcStack_180 = (code *)((ulong)&uStack_160 | 0x1000000000000000);
            pcStack_178 = FUN_101dfad34;
            pcStack_1d0 = *(code **)PTR____stack_chk_guard_11034bdc0;
            pcVar34 = pcVar28 + 0x70;
            *(long *)pcVar34 = 0;
            pcVar31 = *(code **)(pcVar28 + 0x58);
            UNRECOVERED_JUMPTABLE_03 = pcVar31;
            pcStack_1c8 = unaff_x28;
            pcStack_1c0 = unaff_x27;
            pcStack_1b8 = unaff_x26;
            pcStack_1b0 = unaff_x25;
            pcStack_1a8 = (code *)(long)iVar8;
            piStack_1a0 = piVar30;
            pcStack_198 = pcVar12;
            pcStack_190 = UNRECOVERED_JUMPTABLE_05;
            pcStack_188 = pcVar28;
            func_0x000107c40984();
            func_0x000107c61180();
            unaff_x24 = *(code **)pcVar34;
            func_0x000107c61174();
            UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
            func_0x000107c4403c();
            func_0x000107c61180();
            if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
              if (unaff_x24 != (code *)0x0) goto LAB_101dfadbc;
              pcVar12 = *(code **)(pcVar28 + 0xa0);
              func_0x000107c4a8c4();
              func_0x000107c61180();
              UNRECOVERED_JUMPTABLE_04 = pcVar12;
              if (pcVar12 == (code *)0x0) {
LAB_101dfaf74:
                unaff_x25 = *(code **)(pcVar28 + 0xe0);
                unaff_x24 = *(code **)(pcVar28 + 0xe8);
                FUN_101df6cf4();
                puVar25 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 0x16;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x000107c615e8(pcVar31);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                goto LAB_101dfae20;
              }
              uVar38 = *(ulong *)(pcVar28 + 0xa0);
              func_0x000107c5ee30();
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE;
              func_0x000107c61170(pcVar12);
              func_0x000107c4a804();
              func_0x000107c61180();
              if (uVar38 == 0) {
                func_0x00010006c090(UNRECOVERED_JUMPTABLE_04,UNRECOVERED_JUMPTABLE);
                goto LAB_101dfaf74;
              }
              pcStack_1f8 = *(code **)(pcVar28 + 0xe0);
              uStack_1f0 = *(ulong *)(pcVar28 + 0xe8);
              lVar21 = *(long *)(pcVar28 + 0xa8);
              uVar29 = uVar38;
              pcStack_1e8 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5ee30();
              pcStack_1e0 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c61170(uVar38);
              lStack_208 = *(long *)(lVar21 + 0x30);
              func_0x0001000d224c(pcVar28 + 0x38);
              uVar38 = *(ulong *)(pcVar28 + 0x38);
              lVar21 = *(long *)(pcVar28 + 0x40);
              uVar18 = uVar38;
              func_0x000107c614f0();
              *(ulong *)(pcVar28 + 0x78) = uVar38;
              (**(code **)(*(long *)(lVar21 + 8) + 0x28))();
              unaff_x26 = pcStack_1e8;
              func_0x000107c615e8(uVar38);
              UNRECOVERED_JUMPTABLE_04 = pcStack_1f8;
              func_0x000107c5ee20(pcStack_1f8,uStack_1f0);
              pcVar12 = unaff_x26;
              pcStack_1f8 = UNRECOVERED_JUMPTABLE;
              func_0x000107c5ee20(unaff_x26,UNRECOVERED_JUMPTABLE);
              unaff_x27 = pcStack_1e0;
              UNRECOVERED_JUMPTABLE = pcStack_1e0;
              uStack_1f0 = uVar29;
              func_0x000107c5ee20(uVar29);
              UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_04;
              if ((uVar18 & 1) == 0) {
                func_0x000107c51bb8();
              }
              else {
                func_0x000107c51bbc();
              }
              func_0x000107c61180();
              func_0x000107c61170(uVar29);
              func_0x000107c61170(pcVar12);
              func_0x000107c61170();
              if (UNRECOVERED_JUMPTABLE_05 == (code *)0x0) {
                unaff_x25 = *(code **)(pcVar28 + 0xe0);
                unaff_x24 = *(code **)(pcVar28 + 0xe8);
                FUN_101df6cf4();
                puVar25 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
                *(long *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
                *(long *)UNRECOVERED_JUMPTABLE_04 = 10;
                UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
                func_0x000107c61654();
                func_0x00010006c090(unaff_x26,pcStack_1f8);
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x00010006c090(uStack_1f0,unaff_x27);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar31);
                goto LAB_101dfae20;
              }
              pcStack_200 = *(code **)(pcVar28 + 0x108);
              puVar27 = *(undefined8 **)(pcVar28 + 0xc0);
              unaff_x25 = UNRECOVERED_JUMPTABLE_05;
              func_0x000107c5ee30();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_05);
              func_0x00010006c00c(unaff_x25,UNRECOVERED_JUMPTABLE);
              pcVar34 = UNRECOVERED_JUMPTABLE;
              func_0x0001000b44c0(unaff_x25,UNRECOVERED_JUMPTABLE);
              UNRECOVERED_JUMPTABLE_04 = UNRECOVERED_JUMPTABLE_03;
              func_0x000107c4407c(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61180();
              pcVar12 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c5faec();
              func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
              func_0x000107c5ed80(puVar27,pcVar12,pcVar34);
              func_0x000107c6142c(pcVar34);
              unaff_x26 = pcStack_200;
              func_0x000107c5ee40(puVar27,1,unaff_x25,UNRECOVERED_JUMPTABLE);
              if (unaff_x26 != (code *)0x0) {
                pcVar34 = *(code **)(pcVar28 + 0xe0);
                UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0xe8);
                lStack_210 = *(long *)(pcVar28 + 0xb8);
                pcStack_200 = *(code **)(pcVar28 + 0xc0);
                lStack_208 = *(long *)(pcVar28 + 0xb0);
                FUN_101df6cf4();
                puVar25 = &UNK_1106e3fc0;
                func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
                puVar27[1] = 0;
                *puVar27 = 0x14;
                *(undefined1 *)(puVar27 + 2) = 0x80;
                func_0x000107c61654();
                func_0x00010006c090(pcStack_1e8,pcStack_1f8);
                func_0x00010006c090(pcVar34,UNRECOVERED_JUMPTABLE_04);
                func_0x00010006c090(uStack_1f0,pcStack_1e0);
                func_0x00010006c090(unaff_x25,UNRECOVERED_JUMPTABLE);
                func_0x000107c614ac(unaff_x26);
                func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
                func_0x000107c615e8(pcVar31);
                (**(code **)(lStack_210 + 8))(pcStack_200,lStack_208);
                unaff_x24 = unaff_x25;
                unaff_x25 = UNRECOVERED_JUMPTABLE_04;
                unaff_x27 = UNRECOVERED_JUMPTABLE;
                goto LAB_101dfae20;
              }
              pcStack_200 = UNRECOVERED_JUMPTABLE;
              func_0x0001000d224c(pcVar28 + 0x48);
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x48);
              lVar21 = *(long *)(pcVar28 + 0x50);
              unaff_x24 = UNRECOVERED_JUMPTABLE_04;
              func_0x000107c614f0();
              *(code **)(pcVar28 + 0x80) = UNRECOVERED_JUMPTABLE_04;
              (**(code **)(*(long *)(lVar21 + 8) + 0x18))();
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_04);
              pcVar34 = *(code **)(pcVar28 + 0xe0);
              unaff_x26 = *(code **)(pcVar28 + 0xe8);
              unaff_x27 = *(code **)(pcVar28 + 0xb8);
              lVar21 = *(long *)(pcVar28 + 0xc0);
              puVar25 = *(undefined **)(pcVar28 + 0xb0);
              if (((ulong)unaff_x24 & 1) == 0) {
                (**(code **)(unaff_x27 + 8))(lVar21,puVar25);
                func_0x00010006c090(pcStack_1e8,pcStack_1f8);
                func_0x00010006c090(pcVar34,unaff_x26);
                func_0x00010006c090(uStack_1f0,pcStack_1e0);
                func_0x00010006c090(unaff_x25,pcStack_200);
                func_0x000107c615e8(pcVar31);
              }
              else {
                func_0x000107c4c4d8(UNRECOVERED_JUMPTABLE_03);
                func_0x00010006c090(pcStack_1e8,pcStack_1f8);
                func_0x00010006c090(pcVar34,unaff_x26);
                func_0x00010006c090(uStack_1f0,pcStack_1e0);
                func_0x00010006c090(unaff_x25,pcStack_200);
                func_0x000107c615e8(pcVar31);
                (**(code **)(unaff_x27 + 8))(lVar21,puVar25);
              }
              func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(pcVar28 + 8))(UNRECOVERED_JUMPTABLE_03);
                return UNRECOVERED_JUMPTABLE_03;
              }
            }
            else {
              func_0x000107c61170();
LAB_101dfadbc:
              unaff_x26 = *(code **)(pcVar28 + 0xe0);
              unaff_x25 = *(code **)(pcVar28 + 0xe8);
              FUN_101df6cf4();
              puVar25 = &UNK_1106e3fc0;
              func_0x000107c613f8(&UNK_1106e3fc0,UNRECOVERED_JUMPTABLE_04,0,0);
              *(undefined8 *)(UNRECOVERED_JUMPTABLE_04 + 8) = 0;
              *(undefined8 *)UNRECOVERED_JUMPTABLE_04 = 7;
              UNRECOVERED_JUMPTABLE_04[0x10] = (code)0x80;
              func_0x000107c61654();
              func_0x00010006c090(unaff_x26,unaff_x25);
              func_0x000107c615e8(pcVar31);
              func_0x000107c615e8(UNRECOVERED_JUMPTABLE_03);
              func_0x000107c61170(unaff_x24);
LAB_101dfae20:
              func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
              UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
              if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1d0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfae60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE_04)();
                return UNRECOVERED_JUMPTABLE_04;
              }
            }
            func_0x000107c60e78();
            uStack_220 = (ulong)&pcStack_180 | 0x1000000000000000;
            pcStack_218 = FUN_101dfb30c;
            lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pcStack_228 = pcVar28;
            func_0x0001000834e4(pcVar28 + 0x10);
            func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_230) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_04)();
              return UNRECOVERED_JUMPTABLE_04;
            }
            func_0x000107c60e78();
            uStack_240 = (ulong)&uStack_220 | 0x1000000000000000;
            puVar6 = auStack_270;
            pcStack_238 = FUN_101dfb374;
            puVar10 = &uStack_240;
            lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
            puVar27 = *(undefined8 **)(pcVar28 + 0x100);
            unaff_x21 = *(ulong *)(pcVar28 + 0xe0);
            unaff_x19 = *(code **)(pcVar28 + 0xe8);
            unaff_x23 = *(code **)(pcVar28 + 0x68);
            UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1107a6f08;
            lVar19 = 0;
            lVar20 = 0;
            pcStack_260 = pcVar31;
            puStack_258 = puVar25;
            pcStack_250 = UNRECOVERED_JUMPTABLE_03;
            pcStack_248 = pcVar28;
            func_0x000107c613f8();
            *puVar27 = unaff_x23;
            UNRECOVERED_JUMPTABLE = unaff_x19;
            func_0x00010006c090(unaff_x21);
            func_0x000107c615c0(*(long *)(pcVar28 + 0xc0));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar28 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
                    /* WARNING: Could not recover jumptable at 0x000101dfb40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
            pcVar31 = FUN_101dfb414;
            func_0x000107c60e78();
            unaff_x28 = pcVar34;
            goto code_r0x000101dfb414;
          }
          UNRECOVERED_JUMPTABLE_04 = FUN_101dfb374;
        }
        lVar21 = 0;
        lVar20 = 0;
        goto _swift_task_switch;
      }
      UNRECOVERED_JUMPTABLE = pcVar28 + 0x58;
      pcVar28 = pcVar28 + 0x68;
      uVar38 = uStack_130 & 0xefffffffffffffff;
      pcVar34 = pcStack_140;
      pcVar31 = pcStack_128;
      goto LAB_104876574;
    }
    UNRECOVERED_JUMPTABLE_05 = UNRECOVERED_JUMPTABLE_05 + 0x10;
    UNRECOVERED_JUMPTABLE_03 = FUN_101dfa808;
    uVar38 = (ulong)&uStack_30 & 0xefffffffffffffff;
LAB_104875f04:
    *(ulong *)((long)ppcVar7 + -0x10) = uVar38 | 0x1000000000000000;
    *(code **)((long)ppcVar7 + -8) = UNRECOVERED_JUMPTABLE_03;
    *(code **)((long)ppcVar7 + -0x18) = pcVar28;
    *(code **)(pcVar28 + 0x28) = UNRECOVERED_JUMPTABLE_05;
    *(code **)(pcVar28 + 0x30) = UNRECOVERED_JUMPTABLE_04;
    lVar20 = *(long *)(*(long *)UNRECOVERED_JUMPTABLE_04 + 0x50);
    *(long *)(pcVar28 + 0x38) = lVar20;
    lVar21 = 0;
    __sSqMa(0,lVar20);
    *(long *)(pcVar28 + 0x40) = lVar21;
    lVar21 = *(long *)(lVar21 + -8);
    *(long *)(pcVar28 + 0x48) = lVar21;
    uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar28 + 0x50) = uVar38;
    lVar21 = *(long *)(lVar20 + -8);
    *(long *)(pcVar28 + 0x58) = lVar21;
    uVar38 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar28 + 0x60) = uVar38;
    UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_104875f90;
    lVar21 = 0;
    lVar20 = 0;
    goto _swift_task_switch;
  }
  uVar29 = uVar38 & 0xffffffffffffff8;
  if ((uVar38 & 0x8000000000000000) != 0) {
    uVar29 = uVar38;
  }
  func_0x000107c60480();
  if (uVar29 != 0) goto LAB_101dfc920;
LAB_101dfcc68:
  puVar27 = (undefined8 *)0x0;
  UNRECOVERED_JUMPTABLE = (code *)puVar10[10];
  FUN_101df6cf4();
  pcVar12 = (code *)&UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
  *puVar27 = UNRECOVERED_JUMPTABLE;
  puVar27[1] = 0;
  *(undefined1 *)(puVar27 + 2) = 0x60;
  func_0x000107c61654();
  UNRECOVERED_JUMPTABLE_03 = pcVar12;
LAB_101dfcca4:
  UNRECOVERED_JUMPTABLE_05 = (code *)puVar10[1];
  pcVar31 = unaff_x23;
  pcVar34 = unaff_x24;
  if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_80) {
LAB_101dfccc4:
                    /* WARNING: Could not recover jumptable at 0x000101dfcce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_05)();
    return UNRECOVERED_JUMPTABLE_05;
  }
LAB_101dfcd00:
  func_0x000107c60e78();
  uStack_c0 = (ulong)&uStack_30 | 0x1000000000000000;
  ppcVar7 = &pcStack_e0;
  pcStack_b8 = FUN_101dfcd04;
  puStack_d8 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
  pcVar23 = (code *)*puVar10;
  pcVar28 = (code *)*puVar10;
  *(code **)(pcVar23 + 0x88) = UNRECOVERED_JUMPTABLE_05;
  *(code **)(pcVar23 + 0x90) = pcVar12;
  pcStack_d0 = UNRECOVERED_JUMPTABLE;
  pcStack_c8 = pcVar23;
  func_0x000107c615c0(*(undefined8 *)(pcVar23 + 0x80));
  func_0x000107c61170(*(undefined8 *)(pcVar23 + 0x78));
  if (pcVar12 == (code *)0x0) {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_d8) goto LAB_101dfcdb4;
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfcdb8;
  }
  else {
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_d8) {
LAB_101dfcdb4:
      func_0x000107c60e78();
      pcStack_f0 = (code *)((ulong)&uStack_c0 | 0x1000000000000000);
      pcStack_e8 = FUN_101dfcdb8;
      pcStack_128 = *(code **)PTR____stack_chk_guard_11034bdc0;
      puVar27 = *(undefined8 **)(pcVar28 + 0x70);
      pcStack_120 = UNRECOVERED_JUMPTABLE_04;
      pcStack_118 = pcVar34;
      pcStack_110 = pcVar31;
      pcStack_108 = UNRECOVERED_JUMPTABLE_03;
      pcStack_100 = pcVar23;
      pcStack_f8 = pcVar28;
      func_0x000107c44984();
      if ((int)puVar27 == 0) {
LAB_101dfce34:
        UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar28 + 0x88);
        pcVar34 = *(code **)(pcVar28 + 0x70);
        pcVar31 = *(code **)(pcVar28 + 0x78);
        lVar21 = *(long *)(pcVar28 + 0x68);
        FUN_101df6cf4();
        UNRECOVERED_JUMPTABLE_04 = (code *)&UNK_1106e3fc0;
        func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
        puVar27[1] = 0;
        *puVar27 = 0x1d;
        *(undefined1 *)(puVar27 + 2) = 0x80;
        func_0x000107c61654();
LAB_101dfce7c:
        func_0x000107c615e8(UNRECOVERED_JUMPTABLE_05);
        func_0x000107c61170(pcVar31);
        func_0x000107c61170(pcVar34);
        func_0x000107c61170(lVar21);
        UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 8);
        pcVar12 = UNRECOVERED_JUMPTABLE_04;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_128) {
                    /* WARNING: Could not recover jumptable at 0x000101dfced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return UNRECOVERED_JUMPTABLE;
        }
      }
      else {
        lVar21 = *(long *)(pcVar28 + 0x70);
        func_0x000107c4c99c();
        func_0x000107c61180();
        *(long *)(pcVar28 + 0x98) = lVar21;
        puVar27 = (undefined8 *)0x0;
        if (lVar21 == 0) goto LAB_101dfce34;
        UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x90);
        func_0x000107c5fd64();
        if (UNRECOVERED_JUMPTABLE_04 != (code *)0x0) {
          UNRECOVERED_JUMPTABLE_05 = *(code **)(pcVar28 + 0x88);
          pcVar34 = *(code **)(pcVar28 + 0x70);
          pcVar31 = *(code **)(pcVar28 + 0x78);
          lVar21 = *(long *)(pcVar28 + 0x68);
          func_0x000107c61170(*(long *)(pcVar28 + 0x98));
          goto LAB_101dfce7c;
        }
        UNRECOVERED_JUMPTABLE_04 = *(code **)(*(long *)(pcVar28 + 0x60) + 0x18);
        lVar21 = 0x112d51300;
        func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
        UNRECOVERED_JUMPTABLE_05 = pcVar28 + 0x18;
        *(long *)UNRECOVERED_JUMPTABLE_05 = lVar21;
        pcVar12 = (code *)0xa0;
        func_0x000107c615b8();
        *(code **)(pcVar28 + 0xa0) = pcVar12;
        UNRECOVERED_JUMPTABLE_03 = pcVar12;
        func_0x000100faa6a0();
        *(code **)(pcVar28 + 0xa8) = UNRECOVERED_JUMPTABLE_03;
        *(code **)pcVar12 = pcVar28;
        *(code **)(pcVar12 + 8) = FUN_101dfcf78;
        if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_128) {
          UNRECOVERED_JUMPTABLE = pcVar28 + 0x10;
          pcVar28 = pcVar28 + 0x20;
          uVar38 = (ulong)pcStack_f0 & 0xefffffffffffffff;
          pcVar34 = pcStack_100;
          pcVar31 = pcStack_e8;
LAB_104876574:
          *(code **)((long)ppcVar7 + -0x20) = pcVar34;
          *(ulong *)((long)ppcVar7 + -0x10) = uVar38 | 0x1000000000000000;
          *(code **)((long)ppcVar7 + -8) = pcVar31;
          *(code **)((long)ppcVar7 + -0x18) = pcVar12;
          *(code **)(pcVar12 + 0x58) = UNRECOVERED_JUMPTABLE_03;
          *(code **)(pcVar12 + 0x60) = pcVar28;
          *(code **)(pcVar12 + 0x48) = UNRECOVERED_JUMPTABLE_05;
          *(undefined **)(pcVar12 + 0x50) = &UNK_1107a6f08;
          *(code **)(pcVar12 + 0x40) = UNRECOVERED_JUMPTABLE;
          lVar20 = *(long *)UNRECOVERED_JUMPTABLE_04;
          *(undefined ***)(pcVar12 + 0x68) = &PTR_DAT_1107a6e88;
          lVar21 = 0x10;
          _swift_task_alloc();
          *(long *)(pcVar12 + 0x70) = lVar21;
          lVar21 = *(long *)(lVar20 + 0x50);
          *(long *)(pcVar12 + 0x78) = lVar21;
          lVar21 = *(long *)(lVar21 + -8);
          *(long *)(pcVar12 + 0x80) = lVar21;
          UNRECOVERED_JUMPTABLE_05 = (code *)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
          _swift_task_alloc();
          *(code **)(pcVar12 + 0x88) = UNRECOVERED_JUMPTABLE_05;
          pcVar28 = (code *)0x70;
          _swift_task_alloc();
          *(code **)(pcVar12 + 0x90) = pcVar28;
          *(code **)pcVar28 = pcVar12;
          *(undefined **)(pcVar28 + 8) = &UNK_104876614;
          UNRECOVERED_JUMPTABLE_03 = *(code **)((long)ppcVar7 + -8);
          uVar38 = *(ulong *)((long)ppcVar7 + -0x10) & 0xefffffffffffffff;
          goto LAB_104875f04;
        }
      }
      func_0x000107c60e78();
      pcStack_140 = (code *)((ulong)&pcStack_f0 | 0x1000000000000000);
      pcStack_138 = FUN_101dfcf78;
      lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_148 = *(long *)pcVar28;
      pcVar28 = *(code **)pcVar28;
      func_0x000107c615c0(*(undefined8 *)(lStack_148 + 0xa0));
      if (UNRECOVERED_JUMPTABLE_04 == (code *)0x0) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) goto LAB_101dfd010;
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd014;
      }
      else {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_150) {
LAB_101dfd010:
          func_0x000107c60e78();
          uStack_160 = (ulong)&pcStack_140 | 0x1000000000000000;
          pcStack_158 = FUN_101dfd014;
          pcStack_190 = *(code **)PTR____stack_chk_guard_11034bdc0;
          *(long *)(pcVar28 + 0x28) = 0;
          puVar27 = *(undefined8 **)(pcVar28 + 0x10);
          pcStack_188 = pcVar34;
          pcStack_180 = pcVar31;
          pcStack_178 = pcVar12;
          pcStack_170 = UNRECOVERED_JUMPTABLE_05;
          pcStack_168 = pcVar28;
          func_0x000107c5d544(puVar27);
          func_0x000107c615e8();
          if (*(long *)(pcVar28 + 0x28) == 0) {
            uVar24 = *(undefined8 *)(pcVar28 + 0x88);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x70);
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 0x78);
            func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x98));
            func_0x000107c615e8(uVar24);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x68));
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar28 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_190) goto LAB_101dfd158;
          }
          else {
            FUN_101df6cf4();
            func_0x000107c613f8(&UNK_1106e3fc0,puVar27,0,0);
            puVar27[1] = 0;
            *puVar27 = 0x13;
            *(undefined1 *)(puVar27 + 2) = 0x80;
            func_0x000107c61654();
            UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 0x88);
            pcVar31 = *(code **)(pcVar28 + 0x70);
            UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 0x78);
            pcVar34 = *(code **)(pcVar28 + 0x68);
            func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x98));
            func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
            func_0x000107c61170(UNRECOVERED_JUMPTABLE_04);
            func_0x000107c61170(pcVar31);
            func_0x000107c61170(pcVar34);
            UNRECOVERED_JUMPTABLE_03 = *(code **)(pcVar28 + 8);
            if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_190) {
LAB_101dfd158:
                    /* WARNING: Could not recover jumptable at 0x000101dfd16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_03)();
              return UNRECOVERED_JUMPTABLE_03;
            }
          }
          func_0x000107c60e78();
          pcStack_1b0 = (code *)((ulong)&uStack_160 | 0x1000000000000000);
          pcStack_1a8 = FUN_101dfd174;
          pcStack_1e0 = *(code **)PTR____stack_chk_guard_11034bdc0;
          puVar27 = *(undefined8 **)(pcVar28 + 0xa8);
          uVar24 = *(undefined8 *)(pcVar28 + 0x20);
          pcStack_1d8 = pcVar34;
          pcStack_1d0 = pcVar31;
          pcStack_1c8 = UNRECOVERED_JUMPTABLE_04;
          pcStack_1c0 = UNRECOVERED_JUMPTABLE;
          pcStack_1b8 = pcVar28;
          func_0x000107c613f8(&UNK_1107a6f08,puVar27,0,0);
          *puVar27 = uVar24;
          UNRECOVERED_JUMPTABLE = *(code **)(pcVar28 + 0x88);
          uVar24 = *(undefined8 *)(pcVar28 + 0x70);
          uVar3 = *(undefined8 *)(pcVar28 + 0x78);
          uVar35 = *(undefined8 *)(pcVar28 + 0x68);
          func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x98));
          func_0x000107c615e8(UNRECOVERED_JUMPTABLE);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar24);
          func_0x000107c61170(uVar35);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
          if (*(code **)PTR____stack_chk_guard_11034bdc0 == pcStack_1e0) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_1f0 = (ulong)&pcStack_1b0 | 0x1000000000000000;
          pcStack_1e8 = FUN_101dfd230;
          lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
          uVar24 = *(undefined8 *)(pcVar28 + 0x70);
          lVar21 = *(long *)(pcVar28 + 0x68);
          pcStack_200 = UNRECOVERED_JUMPTABLE;
          pcStack_1f8 = pcVar28;
          func_0x000107c61170(*(undefined8 *)(pcVar28 + 0x78));
          func_0x000107c61170(uVar24);
          func_0x000107c61170(lVar21);
          lVar20 = *(long *)(pcVar28 + 0x90);
          UNRECOVERED_JUMPTABLE_04 = *(code **)(pcVar28 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
                    /* WARNING: Could not recover jumptable at 0x000101dfd2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_04)();
            return UNRECOVERED_JUMPTABLE_04;
          }
          func_0x000107c60e78();
          uStack_220 = (ulong)&uStack_1f0 | 0x1000000000000000;
          pcStack_218 = FUN_101dfd2ac;
          pcVar28 = *(code **)pcVar28;
          lStack_230 = lVar21;
          pcStack_228 = pcVar28;
          func_0x000107c615c0(*(long *)(pcVar28 + 0x78));
          if (lVar20 == 0) {
            pcVar28[0x8e] = pcVar28[0x8c];
            lVar21 = *(long *)(pcVar28 + 0x50);
            lVar20 = *(long *)(pcVar28 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd340;
          }
          else {
            *(long *)(pcVar28 + 0x80) = lVar20;
            lVar21 = *(long *)(pcVar28 + 0x50);
            lVar20 = *(long *)(pcVar28 + 0x58);
            UNRECOVERED_JUMPTABLE_04 = FUN_101dfd444;
          }
          goto _swift_task_switch;
        }
        UNRECOVERED_JUMPTABLE_04 = FUN_101dfd174;
      }
      lVar21 = 0;
      lVar20 = 0;
      goto _swift_task_switch;
    }
    UNRECOVERED_JUMPTABLE_04 = FUN_101dfd230;
  }
  lVar21 = 0;
  lVar20 = 0;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_04,lVar21,lVar20);
  return UNRECOVERED_JUMPTABLE_04;
}



/* Entry: 101dfeee0; end: 101dfeee7;  */

void FUN_101dfeee0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101dfe2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101dfeee8; end: 101dfef2b;  */

void FUN_101dfeee8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dfef2c; end: 101dff13f;  */

void FUN_101dfef2c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = param_1;
  func_0x000101de1648();
  if (uVar3 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar8 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dff0d4);
          (*pcVar2)();
        }
        uVar4 = *(ulong *)(uVar3 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar9;
        func_0x00010121c1ac(uVar9,uVar3);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101dff0d0);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c4abb4();
      uVar7 = uVar4;
      if ((int)uVar5 == 1) {
        uVar5 = uVar4;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101dff134);
          (*pcVar2)();
        }
        uVar6 = uVar5;
        func_0x000107c3e240();
        func_0x000107c61170(uVar5);
        if ((int)uVar6 == 5) {
          uVar5 = uVar4;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101dff138);
            (*pcVar2)();
          }
          uVar6 = uVar5;
          func_0x000107c5d0f0();
          func_0x000107c61170(uVar5);
          if ((int)uVar6 == 0) {
            func_0x000107c4c930();
            func_0x000107c61180();
            if (uVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101dff13c);
              (*pcVar2)();
            }
            uVar5 = uVar7;
            func_0x000107c44978();
            if (((uVar5 & 1) == 0) && (uVar5 = uVar7, func_0x000107c44850(), (uVar5 & 1) == 0)) {
              uVar5 = uVar7;
              func_0x000107c4484c();
              func_0x000107c61170(uVar7);
              uVar7 = uVar4;
              if ((uVar5 & 1) != 0) goto LAB_101dfef98;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101dff140);
                (*pcVar2)();
              }
              FUN_101dff140(param_1,param_2,uVar7);
              if (unaff_x21 != 0) {
                func_0x000107c61170(uVar4);
                func_0x000107c6142c(uVar3);
                func_0x000107c61170(uVar7);
                return;
              }
            }
            func_0x000107c61170(uVar4);
          }
        }
      }
LAB_101dfef98:
      func_0x000107c61170(uVar7);
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
  }
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 101dff140; end: 101dffa37;  */

void FUN_101dff140(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long unaff_x21;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined *apuStack_c0 [4];
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = (undefined8 *)0x0;
  func_0x000107c5ede0();
  lVar15 = puVar2[-1];
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar12 = (undefined8 *)((long)apuStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001000d224c(&puStack_70);
  puVar11 = puStack_70;
  if (puStack_70 == (undefined8 *)0x0) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar3,0,0);
    puVar3[1] = 0;
    *puVar3 = 0x16;
    *(undefined1 *)(puVar3 + 2) = 0x80;
    func_0x000107c61654();
    goto LAB_101dff5d0;
  }
  puVar3 = param_3;
  func_0x000107c41e40();
  func_0x000107c61180();
  if (puVar3 == (undefined8 *)0x0) goto LAB_101dffa1c;
  puVar4 = puVar3;
  func_0x000107c5e304();
  if ((int)puVar4 == 0) {
    func_0x000107c61170(puVar3);
    dVar16 = -0.5625;
  }
  else {
    puVar4 = puVar3;
    func_0x000107c44d98();
    if ((int)puVar4 == 0) {
      func_0x000107c61170(puVar3);
      dVar16 = 1.79769313486232e+308;
    }
    else {
      puVar4 = puVar3;
      func_0x000107c5e304();
      puVar5 = puVar3;
      func_0x000107c44d98();
      func_0x000107c61170(puVar3);
      dVar16 = (double)((ulong)puVar4 & 0xffffffff) / (double)((ulong)puVar5 & 0xffffffff) + -0.5625
      ;
    }
  }
  if (2.220446049250313e-16 < ABS(dVar16)) {
LAB_101dff30c:
    uVar6 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar7 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c5fc48(uVar6);
    func_0x000107c47d08(puVar7);
    func_0x000107c61170(uVar6);
    puVar3 = puVar11;
    func_0x000107c50768();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar4 = puVar3;
    func_0x000107c43fb4();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c30a1c();
    func_0x000107c61180();
    func_0x000107c615e8();
    if (puVar5 == (undefined8 *)0x0) {
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar4,0,0);
      puVar4[1] = 0;
      *puVar4 = 0x11;
      *(undefined1 *)(puVar4 + 2) = 0x80;
      func_0x000107c61654();
      goto LAB_101dff5c4;
    }
    puVar4 = puVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar5);
    puVar7 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x00010006c00c(puVar4,puVar13);
    puVar5 = puVar4;
    func_0x000107c5ee20(puVar4,puVar13);
    func_0x000107c4635c();
    func_0x000107c61170(puVar5);
    puVar5 = puVar4;
    puVar14 = puVar13;
    func_0x00010006c090();
    if (puVar7 == (undefined *)0x0) {
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
      puVar5[1] = 0;
      *puVar5 = 8;
      *(undefined1 *)(puVar5 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puVar13);
      func_0x000107c615e8(puVar11);
      puVar11 = puVar3;
      goto LAB_101dff5cc;
    }
    FUN_101dffa38();
    if (puVar5 == (undefined8 *)0x0) {
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar5,0,0);
      puVar5[1] = 0;
      *puVar5 = 0xf;
      *(undefined1 *)(puVar5 + 2) = 0x80;
      func_0x000107c61654();
      func_0x000107c61170(puVar7);
      func_0x00010006c090(puVar4,puVar13);
LAB_101dff5c4:
      func_0x000107c615e8(puVar11);
      puVar11 = puVar3;
      goto LAB_101dff5cc;
    }
    dVar16 = 0.5;
    puVar8 = puVar5;
    apuStack_c0[3] = puVar7;
    func_0x000107c60bb4();
    func_0x000107c61180();
    if (puVar8 == (undefined8 *)0x0) {
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar8,0,0);
      puVar8[1] = 0;
      *puVar8 = 9;
      *(undefined1 *)(puVar8 + 2) = 0x80;
      func_0x000107c61654();
      func_0x000107c61170(apuStack_c0[3]);
      func_0x000107c61170(puVar5);
      func_0x00010006c090(puVar4,puVar13);
      goto LAB_101dff5c4;
    }
    puVar9 = puVar8;
    func_0x000107c5ee30();
    apuStack_c0[1] = (undefined *)puVar9;
    apuStack_c0[2] = puVar14;
    func_0x000107c61170(puVar8);
    puStack_70 = (undefined8 *)0x0;
    puVar8 = puVar11;
    func_0x000107c40984();
    func_0x000107c61180();
    puVar9 = puStack_70;
    func_0x000107c61174();
    puVar10 = puVar8;
    func_0x000107c4403c();
    func_0x000107c61180();
    if (puVar10 == (undefined8 *)0x0) {
      if (puVar9 != (undefined8 *)0x0) goto LAB_101dff66c;
      puVar9 = puVar8;
      func_0x000107c4407c();
      func_0x000107c61180();
      puVar10 = puVar9;
      func_0x000107c5faec();
      apuStack_c0[0] = (undefined *)puVar10;
      func_0x000107c61170(puVar9);
      func_0x000107c5ed80(puVar12,apuStack_c0[0],puVar14);
      func_0x000107c6142c(puVar14);
      puVar14 = apuStack_c0[2];
      puVar7 = apuStack_c0[1];
      func_0x000107c5ee40(puVar12,1,apuStack_c0[1],apuStack_c0[2]);
      (**(code **)(lVar15 + 8))(puVar12,puVar2);
      if (unaff_x21 == 0) {
        puVar2 = param_3;
        func_0x000107c41e40();
        func_0x000107c61180();
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa2c);
          (*pcVar1)();
        }
        func_0x000107c5b078(puVar5);
        if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa04);
          (*pcVar1)();
        }
        if (dVar16 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa08);
          (*pcVar1)();
        }
        dVar17 = 4294967296.0;
        if (4294967296.0 <= dVar16) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa0c);
          (*pcVar1)();
        }
        func_0x000107c5a724(puVar2);
        func_0x000107c61170(puVar2);
        puVar2 = param_3;
        func_0x000107c41e40();
        func_0x000107c61180();
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa30);
          (*pcVar1)();
        }
        func_0x000107c5b078(puVar5);
        if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa10);
          (*pcVar1)();
        }
        if (dVar17 <= -1.0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa14);
          (*pcVar1)();
        }
        if (4294967296.0 <= dVar17) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa18);
          (*pcVar1)();
        }
        func_0x000107c550b8(puVar2);
        func_0x000107c61170(puVar2);
        puVar2 = param_3;
        func_0x000107c45034();
        func_0x000107c61180();
        if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa34);
          (*pcVar1)();
        }
        func_0x000107c5352c();
        func_0x000107c61170(puVar2);
        func_0x000107c4c99c();
        func_0x000107c61180();
        if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa38);
          (*pcVar1)();
        }
        puStack_70 = (undefined8 *)0x0;
        func_0x000107c5d544(puVar11);
        func_0x000107c61170();
        puVar2 = puStack_70;
        if (puStack_70 == (undefined8 *)0x0) {
          func_0x00010006c090(puVar4,puVar13);
          func_0x00010006c090(apuStack_c0[1],apuStack_c0[2]);
          func_0x000107c615e8(puVar11);
          func_0x000107c615e8(puVar3);
          func_0x000107c615e8(puVar8);
          func_0x000107c61170(apuStack_c0[3]);
          func_0x000107c61170(puVar5);
          goto LAB_101dff5d0;
        }
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,param_3,0,0);
        param_3[1] = 0;
        *param_3 = 0x13;
        *(undefined1 *)(param_3 + 2) = 0x80;
        func_0x000107c61654();
        func_0x000107c61174(puVar2);
        func_0x00010006c090(puVar4,puVar13);
        func_0x00010006c090(apuStack_c0[1],apuStack_c0[2]);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar11);
        func_0x000107c615e8(puVar3);
        goto LAB_101dff6d8;
      }
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar12,0,0);
      puVar12[1] = 0;
      *puVar12 = 0x15;
      *(undefined1 *)(puVar12 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puVar13);
      func_0x00010006c090(puVar7,puVar14);
      func_0x000107c615e8(puVar11);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(apuStack_c0[3]);
      func_0x000107c61170(puVar5);
      func_0x000107c614ac(unaff_x21);
      func_0x000107c615e8(puVar8);
    }
    else {
      func_0x000107c61170();
LAB_101dff66c:
      FUN_101df6cf4();
      func_0x000107c613f8(&UNK_1106e3fc0,puVar10,0,0);
      puVar10[1] = 0;
      *puVar10 = 7;
      *(undefined1 *)(puVar10 + 2) = 0x80;
      func_0x000107c61654();
      func_0x00010006c090(puVar4,puVar13);
      func_0x00010006c090(apuStack_c0[1],apuStack_c0[2]);
      func_0x000107c61170(puVar9);
      func_0x000107c615e8(puVar8);
      func_0x000107c615e8(puVar11);
      puVar8 = puVar3;
LAB_101dff6d8:
      func_0x000107c615e8(puVar8);
      func_0x000107c61170(apuStack_c0[3]);
      func_0x000107c61170(puVar5);
    }
  }
  else {
    puVar3 = param_3;
    func_0x000107c41e40();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa24);
      (*pcVar1)();
    }
    puVar4 = puVar3;
    func_0x000107c5e304();
    func_0x000107c61170(puVar3);
    if (0x4da < (uint)puVar4) goto LAB_101dff30c;
    puVar3 = param_3;
    func_0x000107c41e40();
    func_0x000107c61180();
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa28);
      (*pcVar1)();
    }
    puVar4 = puVar3;
    func_0x000107c44d98();
    func_0x000107c61170(puVar3);
    if (0x8a0 < (uint)puVar4) goto LAB_101dff30c;
LAB_101dff5cc:
    func_0x000107c615e8(puVar11);
  }
LAB_101dff5d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_101dffa1c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffa20);
  (*pcVar1)();
}



/* Entry: 101dffa38; end: 101dffcc3;  */

undefined * FUN_101dffa38(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  
  func_0x000107c5b078();
  dVar9 = param_1;
  func_0x000107c51820();
  func_0x000107c308b0(param_1,param_2,dVar9);
  func_0x000107c308ac();
  func_0x000107c308bc(2);
  uVar8 = 0x4093680000000000;
  uVar16 = NEON_fminnm(param_1,0x4093680000000000);
  if (1242.0 < param_1) {
    param_2 = 0x40a1400000000000;
  }
  uVar10 = uVar16;
  uVar13 = param_2;
  func_0x000100841590();
  uVar11 = uVar10;
  func_0x000107c5b078();
  func_0x000107c308b4();
  uVar12 = uVar16;
  uVar14 = param_2;
  func_0x000107c308ac(uVar16,param_2,uVar11);
  uVar11 = uVar10;
  uVar15 = uVar13;
  func_0x000107c308a0(uVar10,uVar13,uVar8,param_4);
  func_0x000107c308a8();
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00);
  func_0x000107c453e4();
  func_0x000107c58bfc(0x3ff0000000000000);
  func_0x000107c56f90(puVar2);
  puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486fc(uVar16,param_2);
  puVar4 = &UNK_110488998;
  func_0x000107c613fc(&UNK_110488998,0x58,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 *)(puVar4 + 0x18) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar8;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x38) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar15;
  *(undefined8 *)(puVar4 + 0x48) = uVar12;
  *(undefined8 *)(puVar4 + 0x50) = uVar14;
  puVar5 = &UNK_1104889c0;
  func_0x000107c613fc(&UNK_1104889c0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101dffd70;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_a0 = FUN_101dffd88;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100f9148c;
  puStack_a8 = &UNK_1104889d8;
  ppuVar6 = &puStack_c0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_98;
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = puVar3;
  func_0x000107c45138(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar3);
  puVar2 = puVar5;
  func_0x000107c61544(puVar5,"",0x56,0xa8,0x4f,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return puVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101dffcc4);
  (*pcVar1)();
}



/* Entry: 101dffcc4; end: 101dffd6f;  */

void FUN_101dffcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c60bbc(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_5,param_6,param_7,param_8,param_10,PTR_s_drawInRect__1125bfff0);
  return;
}



/* Entry: 101dffd70; end: 101dffd87;  */

void FUN_101dffd70(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c549b0();
  func_0x000107c61170(puVar1);
  func_0x000107c60bbc(uVar3,uVar4,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bf89930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar7,uVar8,uVar9,uVar10,uVar2,PTR_s_drawInRect__1125bfff0)
  ;
  return;
}



/* Entry: 101dffd88; end: 101dffda7;  */

void FUN_101dffd88(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101dffda8; end: 101dffdc3;  */

void FUN_101dffda8(long param_1,long param_2)

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



/* Entry: 101dffdc4; end: 101dffe23;  */

undefined1  [16] FUN_101dffdc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  func_0x000107c30a1c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    lVar1 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = unaff_x20;
    func_0x000107c5ee30();
    func_0x000107c61170(unaff_x20);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 101dffe24; end: 101dffe3b;  */

void FUN_101dffe24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101dffe3c; end: 101dffea3;  */

undefined8 * FUN_101dffe3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101dffea4; end: 101dfff47;  */

int FUN_101dffea4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101dfff48; end: 101dfff93;  */

void FUN_101dfff48(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101dfff94; end: 101e0004b;  */

void FUN_101dfff94(long param_1,long param_2,long param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  *(byte *)(unaff_x22 + 0x50) = param_4;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x28) = unaff_x20;
  *(long *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  if ((param_4 & 1) == 0) {
    plVar5 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101e00164;
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    plVar5[8] = *(long *)(unaff_x22 + 0x20);
    plVar5[9] = lVar2;
    plVar5[6] = lVar1;
    plVar5[7] = lVar3;
    pcVar4 = FUN_101e004ec;
  }
  else {
    plVar5 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101e0004c;
    plVar5[7] = param_3;
    plVar5[8] = unaff_x20;
    plVar5[5] = param_1;
    plVar5[6] = param_2;
    pcVar4 = FUN_101e002e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101e0004c; end: 101e000bf;  */

void FUN_101e0004c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e00094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e000c0,0,0);
  return;
}



/* Entry: 101e000c0; end: 101e00163;  */

void FUN_101e000c0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_101dffdc4();
  func_0x000107c615e8(uVar5);
  if (0xe < param_2 >> 0x3c) {
    plVar4 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_101e00164;
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    plVar4[8] = *(long *)(unaff_x22 + 0x20);
    plVar4[9] = lVar2;
    plVar4[6] = lVar1;
    plVar4[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101e004ec,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101e00160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(param_1,param_2);
  return;
}



/* Entry: 101e00164; end: 101e001cb;  */

void FUN_101e00164(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e001a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e001cc,0,0);
  return;
}



/* Entry: 101e001cc; end: 101e002c7;  */

void FUN_101e001cc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  FUN_101dffdc4();
  if (0xe < param_2 >> 0x3c) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_101e00e70();
    func_0x000107c613f8(&UNK_110488a80,param_1,0,0);
    *param_1 = uVar1;
    func_0x000107c61654();
    func_0x000107c61174(uVar1);
    func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101e0025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    uVar2 = uVar1;
    func_0x000107c44144(uVar1);
    func_0x000107c61180();
    func_0x000107c4b76c();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101e002c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(param_1,param_2);
  return;
}



/* Entry: 101e002c8; end: 101e002e3;  */

void FUN_101e002c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e002e4,0,0);
  return;
}



/* Entry: 101e002e4; end: 101e0037b;  */

void FUN_101e002e4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x40) + 0x10);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e0037c;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e0037c; end: 101e003d3;  */

void FUN_101e0037c(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e003d4;
  }
  else {
    pcVar1 = FUN_101e00484;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e003d4; end: 101e00483;  */

void FUN_101e003d4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x10);
  if (lRam0000000112e2f0f0 != -1) {
    func_0x000107c61568(0x112e2f0f0,FUN_101de2a04);
  }
  lVar2 = lVar3;
  func_0x000107c50768();
  func_0x000107c61180();
  func_0x000107c615e8(lVar3);
  lVar3 = lVar2;
  func_0x000107c43fb4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e00464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e00484);
  (*pcVar1)();
}



/* Entry: 101e00484; end: 101e004cf;  */

void FUN_101e00484(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e004cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e004d0; end: 101e004eb;  */

void FUN_101e004d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e004ec,0,0);
  return;
}



/* Entry: 101e004ec; end: 101e00583;  */

void FUN_101e004ec(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e00584;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 101e00584; end: 101e005db;  */

void FUN_101e00584(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101e005dc;
  }
  else {
    pcVar1 = FUN_101e00820;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e005dc; end: 101e006df;  */

void FUN_101e005dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  func_0x0001000285a8(0x112e2f3f8,&UNK_10da18120);
  puVar2 = &UNK_110488ab8;
  func_0x000107c613fc(&UNK_110488ab8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  uVar3 = 0;
  func_0x0001048897a0(0,1,0,FUN_101e00eb0,puVar2);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  func_0x000107c61574(puVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101e006e0;
                    /* WARNING: Could not recover jumptable at 0x000101e006dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101df6a64();
  return;
}



/* Entry: 101e006e0; end: 101e00733;  */

void FUN_101e006e0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e00734,0,0);
  return;
}



/* Entry: 101e00734; end: 101e0081f;  */

void FUN_101e00734(void)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x80);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  if (cVar1 == '\x01') {
    *(long *)(unaff_x22 + 0x28) = lVar6;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e007c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  lVar5 = lVar6;
  func_0x000107c43fb4();
  func_0x000107c61180();
  func_0x000101e00ebc(lVar6,cVar1);
  if (lVar5 != 0) {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000101e00818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e00820);
  (*pcVar2)();
}



/* Entry: 101e00820; end: 101e0086b;  */

void FUN_101e00820(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e00868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e0086c; end: 101e00923;  */

void FUN_101e0086c(long param_1,long param_2,long param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  *(byte *)(unaff_x22 + 0x50) = param_4;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x28) = unaff_x20;
  *(long *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  if ((param_4 & 1) == 0) {
    plVar5 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = 0x101e00a0c;
    lVar2 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x18);
    plVar5[8] = *(long *)(unaff_x22 + 0x20);
    plVar5[9] = lVar2;
    plVar5[6] = lVar1;
    plVar5[7] = lVar3;
    pcVar4 = FUN_101e004ec;
  }
  else {
    plVar5 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_101e00924;
    plVar5[7] = param_3;
    plVar5[8] = unaff_x20;
    plVar5[5] = param_1;
    plVar5[6] = param_2;
    pcVar4 = FUN_101e002e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101e00924; end: 101e00a73;  */

void FUN_101e00924(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101e00968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101e0098c,0,0);
  return;
}



/* Entry: 101e00a74; end: 101e00b4f;  */

void FUN_101e00a74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  func_0x000107c44314();
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    FUN_101e00e70();
    func_0x000107c613f8(&UNK_110488a80,puVar1,0,0);
    *puVar1 = uVar2;
    func_0x000107c61654();
    func_0x000107c61174(uVar2);
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101e00afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (*(char *)(unaff_x22 + 0x50) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c44144(uVar2);
    func_0x000107c61180();
    func_0x000107c4b76c();
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101e00b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 101e00b50; end: 101e00bc7;  */

void FUN_101e00b50(long param_1,long param_2,long param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *unaff_x20;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e00bc8;
  *(byte *)(plVar3 + 10) = param_4;
  plVar3[4] = param_3;
  plVar3[5] = lVar6;
  plVar3[2] = param_1;
  plVar3[3] = param_2;
  if ((param_4 & 1) == 0) {
    plVar5 = (long *)0x90;
    func_0x000107c615b8();
    plVar3[8] = (long)plVar5;
    *plVar5 = (long)plVar3;
    plVar5[1] = (long)FUN_101e00164;
    lVar1 = plVar3[5];
    lVar6 = plVar3[2];
    lVar2 = plVar3[3];
    plVar5[8] = plVar3[4];
    plVar5[9] = lVar1;
    plVar5[6] = lVar6;
    plVar5[7] = lVar2;
    pcVar4 = FUN_101e004ec;
  }
  else {
    plVar5 = (long *)0x60;
    func_0x000107c615b8();
    plVar3[6] = (long)plVar5;
    *plVar5 = (long)plVar3;
    plVar5[1] = (long)FUN_101e0004c;
    plVar5[7] = param_3;
    plVar5[8] = lVar6;
    plVar5[5] = param_1;
    plVar5[6] = param_2;
    pcVar4 = FUN_101e002e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101e00bc8; end: 101e00c1f;  */

void FUN_101e00bc8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e00c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e00c20; end: 101e00c97;  */

void FUN_101e00c20(long param_1,long param_2,long param_3,byte param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *plVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *unaff_x20;
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101e00c98;
  *(byte *)(plVar3 + 10) = param_4;
  plVar3[4] = param_3;
  plVar3[5] = lVar6;
  plVar3[2] = param_1;
  plVar3[3] = param_2;
  if ((param_4 & 1) == 0) {
    plVar5 = (long *)0x90;
    func_0x000107c615b8();
    plVar3[8] = (long)plVar5;
    *plVar5 = (long)plVar3;
    plVar5[1] = 0x101e00a0c;
    lVar1 = plVar3[5];
    lVar6 = plVar3[2];
    lVar2 = plVar3[3];
    plVar5[8] = plVar3[4];
    plVar5[9] = lVar1;
    plVar5[6] = lVar6;
    plVar5[7] = lVar2;
    pcVar4 = FUN_101e004ec;
  }
  else {
    plVar5 = (long *)0x60;
    func_0x000107c615b8();
    plVar3[6] = (long)plVar5;
    *plVar5 = (long)plVar3;
    plVar5[1] = (long)FUN_101e00924;
    plVar5[7] = param_3;
    plVar5[8] = lVar6;
    plVar5[5] = param_1;
    plVar5[6] = param_2;
    pcVar4 = FUN_101e002e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 101e00c98; end: 101e00cdf;  */

void FUN_101e00c98(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e00cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e00ce0; end: 101e00de3;  */

void FUN_101e00ce0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  if (lRam0000000112e2f400 != -1) {
    func_0x000107c61568(0x112e2f400,FUN_101e00de4);
  }
  pcStack_60 = FUN_101e00ed0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101a11da0;
  puStack_68 = &UNK_110488ad0;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c507bc(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101e00de4; end: 101e00e6f;  */

void FUN_101e00de4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1378;
  func_0x000107c61168();
  if (lRam0000000112e2f0f0 != -1) {
    func_0x000107c61568(0x112e2f0f0,FUN_101de2a04);
  }
  uVar2 = uRam0000000113804540;
  func_0x000107c61174(uRam0000000113804540);
  func_0x000107c5d904();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puRam0000000113804548 = puVar1;
  return;
}



/* Entry: 101e00e70; end: 101e00eaf;  */

void FUN_101e00e70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2f3f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da18020;
  func_0x000107c61520(&UNK_10da18020,&UNK_110488a80);
  puRam0000000112e2f3f0 = puVar1;
  return;
}



/* Entry: 101e00eb0; end: 101e00ecf;  */

void FUN_101e00eb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_80;
  if (lRam0000000112e2f400 != -1) {
    func_0x000107c61568(0x112e2f400,FUN_101e00de4);
  }
  pcStack_60 = FUN_101e00ed0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101a11da0;
  puStack_68 = &UNK_110488ad0;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c507bc(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 101e00ed0; end: 101e00ef3;  */

void FUN_101e00ed0(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 101e00ef4; end: 101e00f17;  */

void FUN_101e00ef4(long param_1,long param_2)

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



/* Entry: 101e00f18; end: 101e00fb3;  */

void FUN_101e00f18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x0001000834e4(unaff_x20 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 101e00fb4; end: 101e010af;  */

void FUN_101e00fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x280) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x278) = param_32;
  *(undefined8 *)(unaff_x22 + 0x270) = param_31;
  *(undefined8 *)(unaff_x22 + 0x268) = param_30;
  *(undefined8 *)(unaff_x22 + 0x260) = param_29;
  *(undefined8 *)(unaff_x22 + 600) = param_28;
  *(undefined8 *)(unaff_x22 + 0x250) = param_27;
  *(undefined8 *)(unaff_x22 + 0x248) = param_26;
  *(undefined8 *)(unaff_x22 + 0x240) = param_25;
  *(undefined8 *)(unaff_x22 + 0x238) = param_24;
  *(undefined8 *)(unaff_x22 + 0x230) = param_23;
  *(undefined8 *)(unaff_x22 + 0x228) = param_22;
  *(undefined8 *)(unaff_x22 + 0x220) = param_21;
  *(undefined8 *)(unaff_x22 + 0x218) = param_20;
  *(undefined8 *)(unaff_x22 + 0x210) = param_19;
  *(undefined1 *)(unaff_x22 + 0x3fc) = param_17._3_1_;
  *(undefined1 *)(unaff_x22 + 0x9b) = param_17._2_1_;
  *(undefined1 *)(unaff_x22 + 0x9a) = param_17._1_1_;
  *(undefined1 *)(unaff_x22 + 0x99) = (undefined1)param_17;
  *(undefined8 *)(unaff_x22 + 0x208) = param_16;
  *(undefined8 *)(unaff_x22 + 0x200) = param_15;
  *(undefined4 *)(unaff_x22 + 0x3f8) = param_10;
  *(undefined4 *)(unaff_x22 + 0x9c) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_12;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_11;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_14;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_13;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e010b0,0,0);
  return;
}



/* Entry: 101e010b0; end: 101e03017;  */

/* WARNING: Removing unreachable block (ram,0x000101e028f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e010b0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  code *pcVar30;
  code *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  int iVar38;
  undefined8 uVar39;
  undefined **ppuVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long lVar43;
  undefined *puVar44;
  code *pcVar45;
  long *plVar46;
  long lVar47;
  code *pcVar48;
  undefined8 uVar49;
  long unaff_x22;
  undefined8 uVar50;
  ulong uVar51;
  undefined8 *puVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  long lVar56;
  long lVar57;
  ulong uVar58;
  ulong uVar59;
  undefined8 uVar60;
  undefined8 *puVar61;
  long lVar62;
  undefined8 uVar63;
  long lVar64;
  undefined8 *puVar65;
  undefined8 uVar66;
  
  *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x58);
  func_0x0001000d224c(unaff_x22 + 0x128);
  puVar61 = *(undefined8 **)(unaff_x22 + 0x128);
  *(undefined8 **)(unaff_x22 + 0x290) = puVar61;
  if (puVar61 != (undefined8 *)0x0) {
    func_0x0001000d224c(unaff_x22 + 0x130);
    lVar64 = *(long *)(unaff_x22 + 0x130);
    *(long *)(unaff_x22 + 0x298) = lVar64;
    if (lVar64 != 0) {
      lVar43 = *(long *)(unaff_x22 + 0x280);
      uVar50 = *(undefined8 *)(unaff_x22 + 0x1a0);
      lVar7 = 0;
      FUN_101e092b4();
      lVar56 = *(long *)(lVar7 + -8);
      puVar8 = (undefined8 *)(*(long *)(lVar56 + 0x40) + 0xfU & 0xfffffffffffffff0);
      func_0x000107c615b8();
      *(undefined8 **)(unaff_x22 + 0x2a0) = puVar8;
      func_0x0001000a8868(lVar43 + 0x68,*(undefined8 *)(lVar43 + 0x80));
      lVar43 = 0x112e2f068;
      func_0x0001000285a8(0x112e2f068,&UNK_10da17ca0);
      uVar9 = *(long *)(*(long *)(lVar43 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      FUN_101e07fe4(uVar9,uVar50);
      uVar24 = uVar9;
      (**(code **)(lVar56 + 0x30))(uVar9,1,lVar7);
      if ((int)uVar24 == 1) {
        FUN_101e05d90(uVar9,0x112e2f068,&UNK_10da17ca0);
        func_0x000107c615c0(uVar9);
        func_0x000107c615c0();
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar8,0,0);
        puVar8[1] = 0;
        *puVar8 = 0xb;
        *(undefined1 *)(puVar8 + 2) = 0x80;
        func_0x000107c61654();
        func_0x000107c615e8(lVar64);
        func_0x000107c615e8(puVar61);
        goto LAB_101e0127c;
      }
      FUN_101df7e18(uVar9,puVar8);
      func_0x000107c615c0(uVar9);
      lVar43 = puVar8[5];
      if (lVar43 != 0) {
        uVar50 = *(undefined8 *)(unaff_x22 + 0x1b0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
        lVar56 = lVar43;
        func_0x000107c61174(lVar43);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c5fadc(uVar50,uVar18);
        func_0x000107c3d750(lVar64);
        func_0x000107c61170(uVar50);
        func_0x000107c61170(lVar56);
        func_0x000107c61170(lVar56);
      }
      if (*(char *)(unaff_x22 + 0x9a) == '\x01') {
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ed0();
      }
      else {
        puVar10 = (undefined *)0x0;
      }
      *(undefined **)(unaff_x22 + 0x2a8) = puVar10;
      lVar56 = *(long *)(unaff_x22 + 0x230);
      if (lVar56 == 0) {
LAB_101e01390:
        lVar11 = *(long *)(unaff_x22 + 0x240);
        if (lVar11 == 0) {
          iVar38 = 0;
        }
        else {
          func_0x000107c4a5c8();
          iVar38 = (int)lVar11;
        }
      }
      else {
        lVar11 = *(long *)(lVar56 + _DAT_112ff5570);
        func_0x000107c49820();
        if (lVar11 == 0) goto LAB_101e01390;
        iVar38 = 1;
      }
      lVar47 = *(long *)(unaff_x22 + 0x248);
      lVar12 = 0;
      func_0x000107c5eea4();
      *(long *)(unaff_x22 + 0x2b0) = lVar12;
      lVar53 = *(long *)(lVar12 + -8);
      lVar62 = *(long *)(lVar53 + 0x40);
      uVar24 = lVar62 + 0xf;
      uVar13 = uVar24 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x2b8) = uVar13;
      lVar11 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      lVar11 = *(long *)(lVar11 + -8);
      lVar29 = *(long *)(lVar11 + 0x40);
      uVar9 = lVar29 + 0xf;
      uVar14 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar14);
      if (lVar47 == 0) {
LAB_101e01454:
        uVar50 = 1;
      }
      else {
        lVar16 = lVar47;
        func_0x000107c40bd8();
        func_0x000107c61180();
        if (lVar16 == 0) goto LAB_101e01454;
        func_0x000107c5ee94(uVar14);
        func_0x000107c61170(lVar16);
        uVar50 = 0;
      }
      pcVar30 = *(code **)(lVar53 + 0x38);
      (*pcVar30)(uVar14,uVar50,1,lVar12);
      uVar15 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001003a4c00(uVar14,uVar15);
      pcVar48 = *(code **)(lVar53 + 0x30);
      uVar54 = uVar15;
      (*pcVar48)(uVar15,1,lVar12);
      if ((int)uVar54 == 1) {
        (**(code **)(lVar53 + 0x10))(uVar13,(long)puVar8 + (long)*(int *)(lVar7 + 0x30),lVar12);
        uVar54 = uVar15;
        (*pcVar48)(uVar15,1,lVar12);
        if ((int)uVar54 != 1) {
          FUN_101e05d90(uVar15,0x112d373d8,&UNK_10d9014c0);
        }
      }
      else {
        (**(code **)(lVar53 + 0x20))(uVar13,uVar15,lVar12);
      }
      uVar51 = *(ulong *)(unaff_x22 + 0x248);
      uVar54 = *(ulong *)(unaff_x22 + 0x230);
      func_0x000107c615c0(uVar15);
      func_0x000107c615c0(uVar14);
      FUN_101e040a4();
      uVar14 = uVar54;
      func_0x000103be4ce0();
      if ((int)uVar14 != 0) {
        func_0x000103be4ce0();
      }
      lVar16 = *(long *)(unaff_x22 + 0x1a0);
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar16 == 0) {
        lVar57 = 0;
        uVar51 = 0xf000000000000000;
      }
      else {
        lVar57 = lVar16;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar16);
      }
      *(ulong *)(unaff_x22 + 0x2c8) = uVar51;
      *(long *)(unaff_x22 + 0x2c0) = lVar57;
      puVar44 = PTR_PTR_1126bf910;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar23 = puVar61;
      func_0x000107c5d984(puVar61);
      func_0x000107c61180();
      puVar17 = puVar44;
      func_0x000107c58be8();
      func_0x000107c61180();
      func_0x000107c61170(puVar23);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f98);
        (*pcVar30)();
      }
      uVar50 = *(undefined8 *)(unaff_x22 + 0x1b0);
      func_0x000107c5fadc(uVar50,*(undefined8 *)(unaff_x22 + 0x1b8));
      puVar44 = puVar17;
      func_0x000107c593e4();
      func_0x000107c61180();
      func_0x000107c61170(uVar50);
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f9c);
        (*pcVar30)();
      }
      uVar50 = *(undefined8 *)(unaff_x22 + 0x1c0);
      func_0x000107c5fadc(uVar50,*(undefined8 *)(unaff_x22 + 0x1c8));
      puVar17 = puVar44;
      func_0x000107c56420();
      func_0x000107c61180();
      func_0x000107c61170(uVar50);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fa0);
        (*pcVar30)();
      }
      if (uVar51 >> 0x3c < 0xf) {
        func_0x00010006c00c(lVar57,uVar51);
        lVar16 = lVar57;
        func_0x000107c5ee20(lVar57,uVar51);
        func_0x0001000b44c0(lVar57,uVar51);
      }
      else {
        lVar16 = 0;
      }
      puVar44 = puVar17;
      func_0x000107c59350();
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fa4);
        (*pcVar30)();
      }
      uVar50 = 0;
      FUN_101e05f34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar18 = *puVar8;
      func_0x000107c60110(uVar18);
      puVar17 = puVar44;
      func_0x000107c59524();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fa8);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c5538c();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fac);
        (*pcVar30)();
      }
      puVar17 = puVar44;
      func_0x000107c53018();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fb0);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c54358((float)(double)puVar8[2]);
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fb4);
        (*pcVar30)();
      }
      if (*(int *)((long)puVar8 + 0xc) < 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f80);
        (*pcVar30)();
      }
      puVar17 = puVar44;
      func_0x000107c550b8();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fb8);
        (*pcVar30)();
      }
      if (*(int *)(puVar8 + 1) < 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f84);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c5a724();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fbc);
        (*pcVar30)();
      }
      if (lVar43 != 0) {
        func_0x000107c61170(lVar43);
      }
      puVar17 = puVar44;
      func_0x000107c55018();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fc0);
        (*pcVar30)();
      }
      func_0x000107c5ee70();
      puVar19 = puVar17;
      func_0x000107c53208();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      func_0x000107c61170(puVar17);
      if (puVar19 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fc4);
        (*pcVar30)();
      }
      func_0x000107c5ee70();
      puVar44 = puVar19;
      func_0x000107c53a8c();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar19);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fc8);
        (*pcVar30)();
      }
      uVar15 = uVar24 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar15);
      uVar14 = uVar15;
      func_0x000107c5eea0(uVar15);
      func_0x000107c5ee70();
      pcVar31 = *(code **)(lVar53 + 8);
      *(code **)(unaff_x22 + 0x2d0) = pcVar31;
      lVar43 = lVar12;
      (*pcVar31)(uVar15,lVar12);
      func_0x000107c615c0(uVar15);
      puVar17 = puVar44;
      func_0x000107c57424();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fcc);
        (*pcVar30)();
      }
      puVar23 = (undefined8 *)((long)puVar8 + (long)*(int *)(lVar7 + 0x38));
      lVar7 = puVar23[1];
      if (lVar7 == 0) {
        puVar44 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
        func_0x000107c61168(PTR__OBJC_CLASS___NSTimeZone_1126b7518);
        func_0x000107c4b834();
        func_0x000107c61180();
        lVar7 = 0;
        func_0x000107c5efa8();
        lVar16 = *(long *)(lVar7 + -8);
        uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar14);
        func_0x000107c5efa0(uVar14,puVar44);
        func_0x000107c61170(puVar44);
        func_0x000107c5ef94();
        (**(code **)(lVar16 + 8))(uVar14,lVar7);
        func_0x000107c615c0(uVar14);
        lVar7 = 0;
      }
      else {
        puVar44 = (undefined *)*puVar23;
        lVar43 = lVar7;
      }
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(puVar44,lVar43);
      func_0x000107c6142c(lVar43);
      puVar19 = puVar17;
      func_0x000107c59d9c();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      func_0x000107c61170(puVar17);
      if (puVar19 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fd0);
        (*pcVar30)();
      }
      puVar44 = puVar19;
      func_0x000107c531d0();
      func_0x000107c61180();
      func_0x000107c61170(puVar19);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fd4);
        (*pcVar30)();
      }
      if ((long)puVar8[4] < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f88);
        (*pcVar30)();
      }
      if (0x7fffffff < (long)puVar8[4]) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f8c);
        (*pcVar30)();
      }
      puVar17 = puVar44;
      func_0x000107c570a8();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fd8);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c59558();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fdc);
        (*pcVar30)();
      }
      if (*(long *)(unaff_x22 + 0x228) == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(unaff_x22 + 0x220);
        func_0x000107c5fadc(uVar18);
      }
      puVar17 = puVar44;
      func_0x000107c53080();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fe0);
        (*pcVar30)();
      }
      if (lVar56 == 0) {
        uVar18 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5560);
        func_0x00010102c3b8(uVar20);
        uVar18 = uVar20;
        func_0x000107c5fc48();
        func_0x000107c6142c(uVar20);
      }
      puVar44 = puVar17;
      func_0x000107c53ab0();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fe4);
        (*pcVar30)();
      }
      if (lVar56 == 0) {
        uVar18 = 0;
      }
      else {
        uVar20 = *(undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5568);
        func_0x00010102c3b8(uVar20);
        uVar18 = uVar20;
        func_0x000107c5fc48();
        func_0x000107c6142c(uVar20);
      }
      puVar17 = puVar44;
      func_0x000107c53aac();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fe8);
        (*pcVar30)();
      }
      if (uVar54 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f90);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c53484();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02fec);
        (*pcVar30)();
      }
      if ((lVar56 == 0) ||
         (puVar23 = (undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5580), puVar23[1] == 0))
      {
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar23;
        func_0x000107c5fadc(uVar18);
      }
      puVar17 = puVar44;
      func_0x000107c53578();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02ff0);
        (*pcVar30)();
      }
      if ((lVar56 == 0) ||
         (puVar23 = (undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5578), puVar23[1] == 0))
      {
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar23;
        func_0x000107c5fadc(uVar18);
      }
      puVar44 = puVar17;
      func_0x000107c59c44();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02ff4);
        (*pcVar30)();
      }
      if ((lVar56 == 0) ||
         (puVar23 = (undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5588), puVar23[1] == 0))
      {
        uVar18 = 0;
      }
      else {
        uVar18 = *puVar23;
        func_0x000107c5fadc(uVar18);
      }
      puVar17 = puVar44;
      func_0x000107c54f78();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02ff8);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c5456c();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02ffc);
        (*pcVar30)();
      }
      puVar17 = puVar44;
      func_0x000107c55884();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e03000);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c56458();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e03004);
        (*pcVar30)();
      }
      func_0x000100de78a0(lVar57,uVar51);
      func_0x0001000b44c0(lVar57,uVar51);
      if (uVar51 >> 0x3c < 0xf) {
        func_0x0001000b44c0(0,0xf000000000000000);
      }
      puVar17 = puVar44;
      func_0x000107c55054();
      func_0x000107c61180();
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e03008);
        (*pcVar30)();
      }
      puVar44 = puVar17;
      func_0x000107c59d30();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      if (puVar44 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e0300c);
        (*pcVar30)();
      }
      puVar17 = puVar44;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x2d8) = puVar17;
      func_0x000107c61170(puVar44);
      if (puVar17 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e03010);
        (*pcVar30)();
      }
      puVar44 = PTR_PTR_1126bf8f8;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar19 = puVar44;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x2e0) = puVar19;
      func_0x000107c61170(puVar44);
      if (puVar19 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e03014);
        (*pcVar30)();
      }
      puVar44 = PTR_PTR_1126bf900;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar21 = puVar44;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x2e8) = puVar21;
      func_0x000107c61170(puVar44);
      if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e03018);
        (*pcVar30)();
      }
      lVar43 = *(long *)(unaff_x22 + 0x240);
      uVar14 = uVar24 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      *(ulong *)(unaff_x22 + 0x2f0) = uVar14;
      uVar15 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar15);
      if (lVar43 == 0) {
LAB_101e01f00:
        uVar18 = 1;
      }
      else {
        lVar7 = lVar43;
        func_0x000107c40bd8();
        func_0x000107c61180();
        if (lVar7 == 0) goto LAB_101e01f00;
        func_0x000107c5ee94(uVar15);
        func_0x000107c61170(lVar7);
        uVar18 = 0;
      }
      (*pcVar30)(uVar15,uVar18,1,lVar12);
      uVar22 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001003a4c00(uVar15,uVar22);
      uVar28 = uVar22;
      (*pcVar48)(uVar22,1,lVar12);
      if ((int)uVar28 == 1) {
        (**(code **)(lVar53 + 0x10))(uVar14,uVar13,lVar12);
        uVar28 = 1;
        uVar34 = uVar22;
        (*pcVar48)(uVar22,1,lVar12);
        if ((int)uVar34 != 1) {
          uVar28 = 0x112d373d8;
          FUN_101e05d90(uVar22,0x112d373d8,&UNK_10d9014c0);
        }
      }
      else {
        uVar28 = uVar22;
        (**(code **)(lVar53 + 0x20))(uVar14,uVar22,lVar12);
      }
      func_0x000107c615c0(uVar22);
      func_0x000107c615c0(uVar15);
      uVar15 = uVar54;
      func_0x000107c307d0();
      if (uVar15 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x101e02f94);
        (*pcVar30)();
      }
      if (lVar47 == 0) {
LAB_101e02010:
        lVar16 = 0;
        uVar28 = 0;
      }
      else {
        lVar7 = *(long *)(unaff_x22 + 0x248);
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (lVar7 == 0) goto LAB_101e02010;
        lVar16 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
      }
      puVar23 = *(undefined8 **)(unaff_x22 + 0x240);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x3fc);
      uVar4 = *(undefined1 *)(unaff_x22 + 0x99);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1f8);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x200);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x1e0);
      uVar1 = *(undefined4 *)(unaff_x22 + 0x3f8);
      uVar2 = *(undefined4 *)(unaff_x22 + 0x9c);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x1d0);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x1b0);
      uVar49 = *(undefined8 *)(unaff_x22 + 0x1b8);
      FUN_101e05bec(puVar23,lVar16,uVar28);
      *(undefined8 **)(unaff_x22 + 0x2f8) = puVar23;
      func_0x000107c6142c(uVar28);
      uVar28 = uVar24 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      pcVar45 = *(code **)(lVar53 + 0x10);
      (*pcVar45)();
      uVar24 = uVar24 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      (*pcVar45)();
      uVar22 = uVar9 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001009f0578(uVar39,uVar22);
      uVar34 = (ulong)*(byte *)(lVar53 + 0x50);
      uVar55 = uVar34 + 0x62 & (uVar34 ^ 0xffffffffffffffff);
      uVar59 = lVar62 + uVar34 + uVar55 & (uVar34 ^ 0xffffffffffffffff);
      lVar62 = uVar59 + lVar62;
      bVar5 = *(byte *)(lVar11 + 0x50);
      uVar34 = (ulong)bVar5 + lVar62 + 1 & ((ulong)bVar5 ^ 0xffffffffffffffff);
      uVar58 = lVar29 + uVar34 + 7 & 0xfffffffffffffff8;
      puVar44 = &UNK_110488c58;
      func_0x000107c613fc(&UNK_110488c58,uVar58 + 0x20,*(byte *)(lVar53 + 0x50) | bVar5 | 7);
      *(undefined8 *)(puVar44 + 0x10) = uVar41;
      *(undefined8 *)(puVar44 + 0x18) = uVar42;
      *(undefined8 *)(puVar44 + 0x20) = uVar36;
      *(undefined8 *)(puVar44 + 0x28) = uVar32;
      *(undefined4 *)(puVar44 + 0x30) = uVar2;
      *(undefined4 *)(puVar44 + 0x34) = uVar1;
      *(undefined **)(puVar44 + 0x38) = puVar10;
      *(undefined8 *)(puVar44 + 0x40) = uVar33;
      *(undefined8 *)(puVar44 + 0x48) = uVar20;
      *(undefined8 *)(puVar44 + 0x50) = uVar37;
      *(undefined8 *)(puVar44 + 0x58) = uVar18;
      puVar44[0x60] = uVar4;
      puVar44[0x61] = (char)iVar38;
      pcVar45 = *(code **)(lVar53 + 0x20);
      (*pcVar45)(puVar44 + uVar55,uVar28,lVar12);
      (*pcVar45)(puVar44 + uVar59,uVar24,lVar12);
      puVar44[lVar62] = uVar3;
      func_0x0001003a4c00(uVar22,puVar44 + uVar34);
      *(ulong *)(puVar44 + uVar58) = uVar54;
      *(int *)(puVar44 + uVar58 + 8) = (int)uVar15;
      *(undefined8 *)(puVar44 + uVar58 + 0x10) = uVar35;
      *(undefined8 *)((long)(puVar44 + uVar58 + 0x10) + 8) = uVar49;
      func_0x000107c615c0(uVar22);
      func_0x000107c615c0(uVar24);
      func_0x000107c615c0(uVar28);
      func_0x0001000285a8(0x112e2f070,&UNK_10da17ca8);
      func_0x000107c613fc();
      func_0x000107c61434(uVar18);
      func_0x000107c61434(uVar42);
      func_0x000107c61434(uVar49);
      func_0x000107c61434(uVar32);
      func_0x000107c61174(puVar10);
      func_0x000107c61434(uVar20);
      pcVar45 = FUN_101e05dd0;
      func_0x0001000bdd8c(FUN_101e05dd0,puVar44);
      *(code **)(unaff_x22 + 0x300) = pcVar45;
      puVar44 = PTR_PTR_1126d7f18;
      func_0x000107c610f8();
      func_0x000107c46700();
      *(undefined **)(unaff_x22 + 0x308) = puVar44;
      if (puVar44 == (undefined *)0x0) {
        func_0x000107c6142c();
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar23,0,0);
        puVar23[1] = 0;
        *puVar23 = 5;
        *(undefined1 *)(puVar23 + 2) = 0x80;
        func_0x000107c61654();
        func_0x000107c615e8(puVar61);
        func_0x000107c615e8(lVar64);
        func_0x000107c61574(pcVar45);
        func_0x000107c61170(puVar21);
        func_0x000107c61170(puVar19);
        func_0x000107c61170(puVar17);
        func_0x000107c61170(puVar10);
        func_0x0001000b44c0(lVar57,uVar51);
        (*pcVar31)(uVar14,lVar12);
        (*pcVar31)(uVar13,lVar12);
        FUN_101df7f70(puVar8);
        func_0x000107c615c0(uVar14);
        func_0x000107c615c0(uVar13);
        func_0x000107c615c0(puVar8);
        goto LAB_101e0127c;
      }
      lVar7 = *(long *)(unaff_x22 + 0x268);
      lVar11 = *(long *)(unaff_x22 + 0x260);
      uVar18 = *(undefined8 *)(lVar11 + 0x18);
      lVar64 = *(long *)(lVar11 + 0x20);
      func_0x0001000a8868(lVar11,uVar18);
      puVar61 = (undefined8 *)0x4;
      (**(code **)(lVar64 + 8))(4,lVar7,uVar18,lVar64);
      if (iVar38 != 0) {
        if (lVar47 == 0) {
          func_0x000107c61174(puVar44);
          lVar64 = 0;
          lVar7 = 0;
        }
        else {
          lVar43 = *(long *)(unaff_x22 + 0x248);
          func_0x000107c61174(puVar44);
          func_0x000107c5b2d0();
          func_0x000107c61180();
          if (lVar43 == 0) {
            lVar64 = 0;
            lVar7 = 0;
          }
          else {
            lVar64 = lVar43;
            func_0x000107c5faec();
            func_0x000107c61170(lVar43);
          }
        }
        *(long *)(unaff_x22 + 0x318) = lVar7;
        *(long *)(unaff_x22 + 0x310) = lVar64;
        puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c46ecc();
        *(undefined **)(unaff_x22 + 800) = puVar10;
        if (lVar56 == 0) {
          uVar41 = 0;
          uVar50 = 0;
          uVar20 = 0;
          uVar18 = 0;
        }
        else {
          puVar61 = (undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5578);
          uVar50 = *puVar61;
          uVar20 = puVar61[1];
          puVar61 = (undefined8 *)(*(long *)(unaff_x22 + 0x230) + _DAT_112ff5580);
          uVar18 = *puVar61;
          uVar41 = puVar61[1];
          func_0x000107c61434(uVar41);
          func_0x000107c61434(uVar20);
        }
        *(undefined8 *)(unaff_x22 + 0x340) = uVar20;
        *(undefined8 *)(unaff_x22 + 0x338) = uVar50;
        *(undefined8 *)(unaff_x22 + 0x330) = uVar41;
        *(undefined8 *)(unaff_x22 + 0x328) = uVar18;
        plVar46 = *(long **)(*(long *)(unaff_x22 + 0x280) + 0x18);
        uVar50 = 0;
        FUN_101e05f34(0,0x112d51320,&PTR_PTR_1126b24d8);
        *(undefined8 *)(unaff_x22 + 0x170) = uVar50;
        plVar26 = (long *)0xa0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x348) = plVar26;
        plVar27 = plVar26;
        func_0x000100faa6a0();
        *(long **)(unaff_x22 + 0x350) = plVar27;
        *plVar26 = unaff_x22;
        plVar26[1] = (long)FUN_101e03018;
        plVar26[0xb] = (long)plVar27;
        plVar26[0xc] = unaff_x22 + 0x178;
        plVar26[9] = unaff_x22 + 0x170;
        plVar26[10] = (long)&UNK_1107a6f08;
        plVar26[8] = unaff_x22 + 0x168;
        lVar43 = *plVar46;
        plVar26[0xd] = (long)&PTR_DAT_1107a6e88;
        lVar64 = 0x10;
        _swift_task_alloc();
        plVar26[0xe] = lVar64;
        lVar64 = *(long *)(lVar43 + 0x50);
        plVar26[0xf] = lVar64;
        lVar64 = *(long *)(lVar64 + -8);
        plVar26[0x10] = lVar64;
        uVar24 = *(long *)(lVar64 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar26[0x11] = uVar24;
        plVar27 = (long *)0x70;
        _swift_task_alloc();
        plVar26[0x12] = (long)plVar27;
        *plVar27 = (long)plVar26;
        plVar27[1] = (long)&UNK_104876614;
        plVar27[5] = uVar24;
        plVar27[6] = (long)plVar46;
        lVar43 = *(long *)(*plVar46 + 0x50);
        plVar27[7] = lVar43;
        lVar64 = 0;
        __sSqMa(0,lVar43);
        plVar27[8] = lVar64;
        lVar64 = *(long *)(lVar64 + -8);
        plVar27[9] = lVar64;
        uVar24 = *(long *)(lVar64 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar27[10] = uVar24;
        lVar64 = *(long *)(lVar43 + -8);
        plVar27[0xb] = lVar64;
        uVar24 = *(long *)(lVar64 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar27[0xc] = uVar24;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
        return;
      }
      if (lVar47 == 0) {
LAB_101e02468:
        puVar8 = (undefined8 *)0x0;
        lVar7 = 0;
      }
      else {
        puVar61 = *(undefined8 **)(unaff_x22 + 0x248);
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (puVar61 == (undefined8 *)0x0) goto LAB_101e02468;
        puVar8 = puVar61;
        func_0x000107c5faec();
        func_0x000107c61170();
      }
      *(long *)(unaff_x22 + 0x388) = lVar7;
      func_0x0001000d224c(unaff_x22 + 0x138);
      puVar52 = *(undefined8 **)(unaff_x22 + 0x138);
      *(undefined8 **)(unaff_x22 + 0x390) = puVar52;
      if (puVar52 == (undefined8 *)0x0) {
LAB_101e026e8:
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar61,0,0);
        puVar61[1] = 0;
        *puVar61 = 0x16;
        *(undefined1 *)(puVar61 + 2) = 0x80;
        func_0x000107c61654();
      }
      else {
        func_0x0001000d224c(unaff_x22 + 0x140);
        lVar64 = *(long *)(unaff_x22 + 0x140);
        *(long *)(unaff_x22 + 0x398) = lVar64;
        if (lVar64 == 0) {
LAB_101e026e0:
          func_0x000107c615e8();
          puVar61 = puVar52;
          goto LAB_101e026e8;
        }
        func_0x0001000d224c(unaff_x22 + 0x148);
        lVar56 = *(long *)(unaff_x22 + 0x148);
        *(long *)(unaff_x22 + 0x3a0) = lVar56;
        if (lVar56 == 0) {
LAB_101e026d8:
          func_0x000107c615e8(lVar64);
          goto LAB_101e026e0;
        }
        func_0x0001000d224c(unaff_x22 + 0x150);
        lVar62 = *(long *)(unaff_x22 + 0x150);
        *(long *)(unaff_x22 + 0x3a8) = lVar62;
        if (lVar62 == 0) {
          func_0x000107c61170(lVar56);
          goto LAB_101e026d8;
        }
        ppuVar40 = &PTR____CFConstantStringClassReference_110ec3518;
        puVar25 = (undefined8 *)(uVar9 & 0xfffffffffffffff0);
        func_0x000107c615b8();
        func_0x000107c61174();
        func_0x000107c5eea0(puVar25);
        uVar18 = 0;
        puVar61 = puVar25;
        (*pcVar30)(puVar25,0,1,lVar12);
        func_0x00010011df08();
        func_0x000107c61180();
        if (puVar61 == (undefined8 *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar18);
        }
        uVar18 = 0x65766153;
        func_0x000107c5fadc(0x65766153,0xe400000000000000);
        puVar65 = puVar25;
        (*pcVar48)(puVar25,1,lVar12);
        if ((int)puVar65 == 1) {
          puVar65 = (undefined8 *)0x0;
        }
        else {
          func_0x000107c5ee70();
          (*pcVar31)(puVar25,lVar12);
        }
        if (*(long *)(unaff_x22 + 0x218) == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(undefined8 *)(unaff_x22 + 0x210);
          func_0x000107c5fadc();
        }
        puVar10 = PTR_PTR_1126b2220;
        func_0x000107c610f8();
        func_0x000107c4888c();
        *(undefined **)(unaff_x22 + 0x3b0) = puVar10;
        func_0x000107c61170(uVar20);
        func_0x000107c61170(puVar61);
        func_0x000107c61170(puVar65);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(ppuVar40);
        func_0x000107c615c0();
        if (puVar10 != (undefined *)0x0) {
          uVar20 = *(undefined8 *)(unaff_x22 + 0x1a0);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x1a8);
          func_0x0001000a8868(*(long *)(unaff_x22 + 0x280) + 0x20,
                              *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x38));
          FUN_101e06018(uVar20,uVar18);
          *(undefined8 *)(unaff_x22 + 0x3b8) = 0;
          uVar18 = 0x112e2f078;
          func_0x0001000285a8(0x112e2f078,&UNK_10da17cb0);
          pcVar30 = FUN_101e04608;
          func_0x0001000cb480(FUN_101e04608,0,uVar18);
          pcVar48 = pcVar30;
          func_0x0001003a5b88();
          *(code **)(unaff_x22 + 0x3c0) = pcVar48;
          func_0x000107c61574(pcVar30);
          puVar44 = PTR_PTR_1126d7f70;
          func_0x000107c610f8();
          func_0x000107c474c8();
          *(undefined **)(unaff_x22 + 0x3c8) = puVar44;
          if (lVar43 == 0) {
            func_0x0001000d224c(unaff_x22 + 0x158);
            uVar18 = *(undefined8 *)(unaff_x22 + 0x158);
          }
          else {
            uVar18 = *(undefined8 *)(unaff_x22 + 0x240);
          }
          *(undefined8 *)(unaff_x22 + 0x3d0) = uVar18;
          if (lVar7 == 0) {
            func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x240));
            func_0x000107c615f0(uVar18);
            func_0x000107c61174(puVar44);
            func_0x000107c615f0(lVar64);
            func_0x000107c61174(puVar10);
            func_0x000107c61174(pcVar48);
            puVar61 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x240));
            func_0x000107c615f0(uVar18);
            func_0x000107c61174(puVar44);
            func_0x000107c615f0(lVar64);
            func_0x000107c61174(puVar10);
            func_0x000107c61174(pcVar48);
            puVar61 = puVar8;
            func_0x000107c5fadc(puVar8,lVar7);
          }
          if (puVar23 == (undefined8 *)0x0) {
            puVar25 = (undefined8 *)0x0;
          }
          else {
            puVar25 = puVar23;
            func_0x000107c5f9dc(puVar23,PTR___sSSN_11034da80,uVar50,PTR___sSSSHsWP_11034da90);
          }
          puVar17 = PTR_PTR_1126d7f60;
          func_0x000107c610f8();
          func_0x000107c48750();
          *(undefined **)(unaff_x22 + 0x3d8) = puVar17;
          func_0x000107c61170(puVar25);
          func_0x000107c61170(puVar61);
          func_0x000107c61170(pcVar48);
          func_0x000107c61170(puVar10);
          func_0x000107c615e8(lVar64);
          func_0x000107c61170(puVar44);
          func_0x000107c615e8(uVar18);
          if (lVar7 == 0) {
            bVar6 = false;
          }
          else {
            puVar10 = PTR_PTR_1126af4d0;
            func_0x000107c61168();
            puVar61 = puVar8;
            func_0x000107c5fadc(puVar8,lVar7);
            func_0x000107c43118();
            func_0x000107c61180();
            func_0x000107c61170(puVar61);
            if (puVar10 == (undefined *)0x0) {
              bVar6 = false;
            }
            else {
              func_0x000107c615e8(puVar10);
              bVar6 = true;
            }
          }
          uVar41 = *(undefined8 *)(unaff_x22 + 0x1b8);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
          lVar64 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          lVar43 = lVar64;
          func_0x000107c61534();
          *(undefined8 *)(lVar43 + 0x18) = 2;
          *(undefined8 *)(lVar43 + 0x10) = 1;
          *(undefined8 *)(lVar43 + 0x20) = uVar18;
          *(undefined8 *)(lVar43 + 0x28) = uVar41;
          if (lVar7 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = lVar64;
            func_0x000107c613fc(lVar64,0x30,7);
            *(undefined8 *)(lVar12 + 0x18) = 2;
            *(undefined8 *)(lVar12 + 0x10) = 1;
            *(undefined8 **)(lVar12 + 0x20) = puVar8;
            *(long *)(lVar12 + 0x28) = lVar7;
          }
          uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
          if (puVar23 == (undefined8 *)0x0) {
            func_0x000107c61434(lVar7);
            func_0x000107c61434(uVar18);
            puVar23 = (undefined8 *)0x0;
          }
          else {
            func_0x000107c61434(lVar7);
            func_0x000107c61434(uVar18);
            func_0x000107c5f9dc(puVar23,PTR___sSSN_11034da80,uVar50,PTR___sSSSHsWP_11034da90);
          }
          uVar24 = (ulong)*(byte *)(unaff_x22 + 0x99);
          func_0x000107c5fca0(uVar24);
          uVar50 = *(undefined8 *)(unaff_x22 + 0x1b0);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
          if (bVar6) {
            func_0x000107c613fc(lVar64,0x30,7);
            *(undefined8 *)(lVar64 + 0x18) = 2;
            *(undefined8 *)(lVar64 + 0x10) = 1;
            *(undefined8 *)(lVar64 + 0x20) = uVar50;
            *(undefined8 *)(lVar64 + 0x28) = uVar18;
            func_0x000107c61434(uVar18);
          }
          else {
            lVar64 = 0;
          }
          uVar35 = *(undefined8 *)(unaff_x22 + 0x278);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x270);
          puVar61 = *(undefined8 **)(unaff_x22 + 0x268);
          uVar37 = *(undefined8 *)(unaff_x22 + 0x260);
          FUN_101e05f34(0,0x112e2f080,&PTR_PTR_1126d7f28);
          lVar7 = lVar43;
          func_0x000103bbb748(lVar43,lVar12,puVar23,0,0,uVar24,lVar64,0);
          *(long *)(unaff_x22 + 0x3e0) = lVar7;
          func_0x000107c61170(uVar24);
          func_0x000107c6142c(lVar64);
          func_0x000107c61170(puVar23);
          func_0x000107c6142c(lVar12);
          func_0x000107c61588(lVar43);
          func_0x000107c61408((undefined8 *)(lVar43 + 0x20),*(undefined8 *)(lVar43 + 0x10),
                              PTR___sSSN_11034da80);
          uVar41 = *(undefined8 *)(lVar11 + 0x18);
          lVar64 = *(long *)(lVar11 + 0x20);
          func_0x0001000a8868(uVar37,uVar41);
          (**(code **)(lVar64 + 8))(6,puVar61,uVar41,lVar64);
          func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
          FUN_101e0567c(uVar37,unaff_x22 + 0xd0);
          puVar10 = &UNK_110488c80;
          func_0x000107c613fc(&UNK_110488c80,0x118,7);
          *(undefined8 **)(puVar10 + 0x10) = puVar52;
          *(undefined **)(puVar10 + 0x18) = puVar17;
          *(undefined8 *)(puVar10 + 0x20) = uVar20;
          *(long *)(puVar10 + 0x28) = lVar7;
          *(undefined8 *)(puVar10 + 0x30) = uVar36;
          *(undefined8 *)(puVar10 + 0x38) = uVar35;
          *(long *)(puVar10 + 0x40) = lVar56;
          FUN_101e056c0(unaff_x22 + 0xd0,puVar10 + 0x48);
          uVar20 = *puVar61;
          *(undefined8 *)(puVar10 + 0x78) = puVar61[1];
          *(undefined8 *)(puVar10 + 0x70) = uVar20;
          uVar41 = puVar61[3];
          uVar20 = puVar61[2];
          uVar42 = puVar61[5];
          uVar37 = puVar61[4];
          uVar49 = puVar61[6];
          uVar33 = puVar61[9];
          uVar32 = puVar61[8];
          *(undefined8 *)(puVar10 + 0xa8) = puVar61[7];
          *(undefined8 *)(puVar10 + 0xa0) = uVar49;
          *(undefined8 *)(puVar10 + 0xb8) = uVar33;
          *(undefined8 *)(puVar10 + 0xb0) = uVar32;
          *(undefined8 *)(puVar10 + 0x88) = uVar41;
          *(undefined8 *)(puVar10 + 0x80) = uVar20;
          *(undefined8 *)(puVar10 + 0x98) = uVar42;
          *(undefined8 *)(puVar10 + 0x90) = uVar37;
          uVar41 = puVar61[0xb];
          uVar20 = puVar61[10];
          uVar42 = puVar61[0xd];
          uVar37 = puVar61[0xc];
          uVar32 = puVar61[0xf];
          uVar49 = puVar61[0xe];
          uVar33 = *(undefined8 *)((long)puVar61 + 0x79);
          *(undefined8 *)(puVar10 + 0xf1) = *(undefined8 *)((long)puVar61 + 0x81);
          *(undefined8 *)(puVar10 + 0xe9) = uVar33;
          *(undefined8 *)(puVar10 + 0xd8) = uVar42;
          *(undefined8 *)(puVar10 + 0xd0) = uVar37;
          *(undefined8 *)(puVar10 + 0xe8) = uVar32;
          *(undefined8 *)(puVar10 + 0xe0) = uVar49;
          *(undefined8 *)(puVar10 + 200) = uVar41;
          *(undefined8 *)(puVar10 + 0xc0) = uVar20;
          puVar10[0xf9] = uVar4;
          *(undefined8 *)(puVar10 + 0x100) = uVar50;
          *(undefined8 *)(puVar10 + 0x108) = uVar18;
          *(long *)(puVar10 + 0x110) = lVar62;
          func_0x000107c61434();
          func_0x000107c61174(puVar17);
          func_0x000107c61174(lVar7);
          func_0x000107c61174(lVar62);
          func_0x000107c61174(lVar56);
          func_0x000107c615f0(puVar52);
          FUN_101df8040(uVar36,uVar35);
          func_0x000101df658c(puVar61,unaff_x22 + 0x10);
          uVar50 = 0;
          func_0x0001048897a0(0,1,0,FUN_101e05ee4,puVar10);
          *(undefined8 *)(unaff_x22 + 1000) = uVar50;
          func_0x000107c61574(puVar10);
          plVar27 = (long *)0x80;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3f0) = plVar27;
          *plVar27 = unaff_x22;
          plVar27[1] = (long)FUN_101e03b38;
                    /* WARNING: Could not recover jumptable at 0x000101e02f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)&UNK_100fab8ec)();
          return;
        }
        FUN_101df6cf4();
        func_0x000107c613f8(&UNK_1106e3fc0,puVar25,0,0);
        puVar25[1] = 0;
        *puVar25 = 6;
        *(undefined1 *)(puVar25 + 2) = 0x80;
        func_0x000107c61654();
        func_0x000107c61170(lVar62);
        func_0x000107c61170(lVar56);
        func_0x000107c615e8(lVar64);
        func_0x000107c615e8(puVar52);
      }
      uVar35 = *(undefined8 *)(unaff_x22 + 0x388);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x308);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x2f8);
      uVar37 = *(undefined8 *)(unaff_x22 + 0x2f0);
      uVar63 = *(undefined8 *)(unaff_x22 + 0x2e8);
      uVar66 = *(undefined8 *)(unaff_x22 + 0x2e0);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x2d8);
      pcVar30 = *(code **)(unaff_x22 + 0x2d0);
      uVar50 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x2c0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x2b8);
      uVar60 = *(undefined8 *)(unaff_x22 + 0x2b0);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x2a8);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x2a0);
      uVar49 = *(undefined8 *)(unaff_x22 + 0x298);
      uVar32 = *(undefined8 *)(unaff_x22 + 0x290);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x300));
      func_0x000107c61170(uVar39);
      func_0x000107c61170(uVar63);
      func_0x000107c61170(uVar66);
      func_0x000107c61170(uVar33);
      func_0x000107c61170(uVar42);
      func_0x000107c615e8(uVar49);
      func_0x000107c615e8(uVar32);
      func_0x000107c6142c(uVar36);
      func_0x000107c6142c(uVar35);
      func_0x0001000b44c0(uVar18,uVar50);
      (*pcVar30)(uVar37,uVar60);
      (*pcVar30)(uVar20,uVar60);
      FUN_101df7f70(uVar41);
      func_0x000107c615c0(uVar37);
      func_0x000107c615c0(uVar20);
      func_0x000107c615c0(uVar41);
      goto LAB_101e0127c;
    }
    func_0x000107c615e8();
    param_1 = puVar61;
  }
  FUN_101df6cf4();
  func_0x000107c613f8(&UNK_1106e3fc0,param_1,0,0);
  param_1[1] = 0;
  *param_1 = 0x16;
  *(undefined1 *)(param_1 + 2) = 0x80;
  func_0x000107c61654();
LAB_101e0127c:
                    /* WARNING: Could not recover jumptable at 0x000101e012a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e03018; end: 101e03153;  */

void FUN_101e03018(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x348));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101e03070;
  }
  else {
    pcVar1 = FUN_101e03154;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101e03154; end: 101e032db;  */

void FUN_101e03154(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x350);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar6 = *(undefined8 *)(unaff_x22 + 800);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar12);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2d8);
  pcVar7 = *(code **)(unaff_x22 + 0x2d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x290);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x300));
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar12);
  func_0x000107c615e8(uVar10);
  func_0x000107c615e8(uVar5);
  func_0x0001000b44c0(uVar2,uVar8);
  (*pcVar7)(uVar6,uVar15);
  (*pcVar7)(uVar3,uVar15);
  FUN_101df7f70(uVar4);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e032d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e032dc; end: 101e034a7;  */

void FUN_101e032dc(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar17 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar8 = *(undefined8 *)(unaff_x22 + 800);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x310);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2f8);
  lVar14 = *(long *)(unaff_x22 + 0x280);
  uVar12 = *(undefined8 *)(unaff_x22 + 600);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x370) = uVar11;
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar15 = *(undefined8 *)(lVar14 + 0x90);
  puVar1 = &UNK_110488ca8;
  func_0x000107c613fc(&UNK_110488ca8,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar17;
  *(undefined8 *)(puVar1 + 0x18) = uVar10;
  *(undefined8 *)(puVar1 + 0x20) = uVar13;
  *(undefined8 *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x30) = uVar7;
  *(undefined8 *)(puVar1 + 0x38) = uVar18;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  *(undefined8 *)(puVar1 + 0x48) = uVar16;
  *(undefined8 *)(puVar1 + 0x50) = uVar6;
  *(undefined8 *)(puVar1 + 0x58) = uVar11;
  *(undefined8 *)(puVar1 + 0x60) = uVar5;
  *(undefined8 *)(puVar1 + 0x68) = uVar9;
  *(undefined8 *)(puVar1 + 0x70) = uVar4;
  *(undefined8 *)(puVar1 + 0x78) = uVar12;
  *(undefined8 *)(puVar1 + 0x80) = uVar15;
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar17);
  func_0x000107c6157c(uVar6);
  func_0x000107c615f0(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar10);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar18);
  func_0x000107c61434(uVar16);
  func_0x000107c61434(uVar4);
  uVar3 = 0;
  func_0x0001048897a0(0,1,0,FUN_101e05f74,puVar1);
  *(undefined8 *)(unaff_x22 + 0x378) = uVar3;
  func_0x000107c61574(puVar1);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x380) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e034a8;
                    /* WARNING: Could not recover jumptable at 0x000101e034a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 101e034a8; end: 101e034fb;  */

void FUN_101e034a8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x108) = param_2;
  *(long **)(lVar1 + 0xf8) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x100) = param_1;
  *(undefined1 *)(lVar1 + 0x3fd) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x380));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e034fc,0,0);
  return;
}



/* Entry: 101e034fc; end: 101e039a3;  */

void FUN_101e034fc(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (*(char *)(unaff_x22 + 0x3fd) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x100);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar8 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x198,uVar8,PTR___ss5ErrorWS_11034ee10);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x340);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar16 = *(undefined8 *)(unaff_x22 + 800);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2f8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar21);
    func_0x000107c6142c(uVar18);
    func_0x000107c6142c(uVar14);
    func_0x000107c6142c(uVar12);
    func_0x000107c6142c(uVar23);
    func_0x000107c61170(uVar10);
    func_0x000107c615e8(uVar8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2d8);
    pcVar13 = *(code **)(unaff_x22 + 0x2d0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x290);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x300));
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar24);
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar23);
    func_0x0001000b44c0(uVar8,uVar16);
    (*pcVar13)(uVar14,uVar21);
    (*pcVar13)(uVar10,uVar21);
    FUN_101df7f70(uVar12);
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101e036d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar16 = *(undefined8 *)(unaff_x22 + 800);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x378));
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c6142c(uVar18);
  func_0x000107c6142c(uVar14);
  func_0x000107c6142c(uVar12);
  func_0x000107c6142c(uVar23);
  lVar11 = *(long *)(unaff_x22 + 0x368);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar2 = *(long *)(unaff_x22 + 0x260);
  lVar9 = *(long *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar8);
  (**(code **)(lVar3 + 8))(5,uVar10,uVar8,lVar3);
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar3 = lVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar9);
    func_0x00010006c090(lVar3,uVar10);
  }
  lVar3 = *(long *)(unaff_x22 + 0x1a0);
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar3 = lVar2;
    func_0x0001010282b0(lVar2,uVar10);
    func_0x00010006c090(lVar2,uVar10);
    if (lVar11 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c614ac(lVar11);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2d8);
  pcVar13 = *(code **)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000103bd6ae0(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar10);
  func_0x000107c61174(uVar14);
  func_0x000103bd6888();
  func_0x000107c615e8(uVar20);
  func_0x000107c615e8(uVar24);
  func_0x000107c61574(uVar16);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar19);
  func_0x0001000b44c0(uVar23,uVar7);
  (*pcVar13)(uVar18,uVar17);
  (*pcVar13)(uVar15,uVar17);
  FUN_101df7f70(uVar22);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar22);
                    /* WARNING: Could not recover jumptable at 0x000101e039a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar14);
  return;
}



/* Entry: 101e039a4; end: 101e03b37;  */

void FUN_101e039a4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x358);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x350);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar7 = *(undefined8 *)(unaff_x22 + 800);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar13);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2d8);
  pcVar6 = *(code **)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x290);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x300));
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uVar9);
  func_0x000107c615e8(uVar13);
  func_0x0001000b44c0(uVar2,uVar7);
  (*pcVar6)(uVar5,uVar15);
  (*pcVar6)(uVar3,uVar15);
  FUN_101df7f70(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101e03b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e03b38; end: 101e03b8b;  */

void FUN_101e03b38(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x120) = param_2;
  *(long **)(lVar1 + 0x110) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  *(undefined1 *)(lVar1 + 0x3fe) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x3f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e03b8c,0,0);
  return;
}



/* Entry: 101e03b8c; end: 101e040a3;  */

void FUN_101e03b8c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (*(char *)(unaff_x22 + 0x3fe) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x118);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x160,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3c8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x3c0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x398);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x390);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 1000));
    func_0x000107c615e8(uVar9);
    func_0x000107c615e8(uVar7);
    func_0x000107c61170(uVar23);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar14);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar4);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x2d8);
    pcVar13 = *(code **)(unaff_x22 + 0x2d0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2b8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2a8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2a0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x290);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x300));
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar19);
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar24);
    func_0x000107c61170(uVar17);
    func_0x000107c615e8(uVar18);
    func_0x000107c615e8(uVar23);
    func_0x000107c6142c(uVar14);
    func_0x000107c6142c(uVar12);
    func_0x0001000b44c0(uVar7,uVar4);
    (*pcVar13)(uVar16,uVar21);
    (*pcVar13)(uVar9,uVar21);
    FUN_101df7f70(uVar10);
    func_0x000107c615c0(uVar16);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000101e03d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3c0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2f8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 1000));
  func_0x000107c615e8(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar15);
  func_0x000107c615e8(uVar17);
  func_0x000107c615e8(uVar9);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar7);
  lVar11 = *(long *)(unaff_x22 + 0x3b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar2 = *(long *)(unaff_x22 + 0x260);
  lVar8 = *(long *)(unaff_x22 + 0x1a0);
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar4);
  (**(code **)(lVar3 + 8))(5,uVar7,uVar4,lVar3);
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar3 = lVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar8);
    func_0x00010006c090(lVar3,uVar7);
  }
  lVar3 = *(long *)(unaff_x22 + 0x1a0);
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar3);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    lVar3 = lVar2;
    func_0x0001010282b0(lVar2,uVar7);
    func_0x00010006c090(lVar2,uVar7);
    if (lVar11 == 0) {
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c614ac(lVar11);
    }
  }
  uVar22 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  pcVar13 = *(code **)(unaff_x22 + 0x2d0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000103bd6ae0(0);
  func_0x000107c610f8();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(uVar10);
  func_0x000103bd6888();
  func_0x000107c615e8(uVar20);
  func_0x000107c615e8(uVar19);
  func_0x000107c61574(uVar12);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x0001000b44c0(uVar18,uVar6);
  (*pcVar13)(uVar14,uVar23);
  (*pcVar13)(uVar21,uVar23);
  FUN_101df7f70(uVar17);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar17);
                    /* WARNING: Could not recover jumptable at 0x000101e040a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar10);
  return;
}



/* Entry: 101e040a4; end: 101e0411b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e040a4(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    uVar3 = *(ulong *)(param_1 + _DAT_112ff5570);
    iVar2 = (int)uVar3;
    func_0x000107c49804();
    if (iVar2 != 0) {
      func_0x000107c49804();
      if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0411c);
        (*pcVar1)();
      }
      uVar3 = uVar3 & 0xffffffff;
      func_0x000107c307d4();
      if (uVar3 != 0) {
        return;
      }
    }
  }
  if ((param_2 != 0) && (func_0x000107c3fbb0(), (int)param_2 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e04118);
    (*pcVar1)();
  }
  return;
}



/* Entry: 101e0411c; end: 101e04607;  */

void FUN_101e0411c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 in_x7;
  long extraout_x8;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  byte in_stack_00000030;
  undefined8 in_stack_00000038;
  ulong in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_70 [8];
  undefined8 *puStack_68;
  
  lVar4 = 0x112d373d8;
  puStack_68 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  puVar7 = PTR_PTR_1126bf8c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fadc(param_2,param_3);
  puVar2 = puVar7;
  func_0x000107c545ec();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(param_2);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045c4);
    (*pcVar1)();
  }
  if (param_5 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fadc(param_4,param_5);
  }
  puVar7 = puVar2;
  func_0x000107c547f8();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045c8);
    (*pcVar1)();
  }
  puVar2 = puVar7;
  func_0x000107c54618();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045cc);
    (*pcVar1)();
  }
  puVar7 = puVar2;
  func_0x000107c54d60();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045d0);
    (*pcVar1)();
  }
  puVar2 = puVar7;
  func_0x000107c54ac8();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045d4);
    (*pcVar1)();
  }
  if (in_stack_00000000 == 0) {
    in_x7 = 0;
  }
  else {
    func_0x000107c5fadc(in_x7);
  }
  puVar7 = puVar2;
  func_0x000107c59e18();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(in_x7);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045d8);
    (*pcVar1)();
  }
  if (in_stack_00000010 == 0) {
    in_stack_00000008 = 0;
  }
  else {
    func_0x000107c5fadc(in_stack_00000008);
  }
  puVar2 = puVar7;
  func_0x000107c59a8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(in_stack_00000008);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045dc);
    (*pcVar1)();
  }
  puVar7 = puVar2;
  func_0x000107c557c4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045e0);
    (*pcVar1)();
  }
  puVar2 = puVar7;
  func_0x000107c55884();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5ee70();
    puVar3 = puVar2;
    func_0x000107c53a8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar7);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045e8);
      (*pcVar1)();
    }
    func_0x000107c5ee70();
    puVar2 = puVar3;
    func_0x000107c5439c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045ec);
      (*pcVar1)();
    }
    func_0x000107c5ee70();
    puVar3 = puVar2;
    func_0x000107c55ad8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar7);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045f0);
      (*pcVar1)();
    }
    if ((in_stack_00000030 & 1) == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      func_0x000107c5ee70();
    }
    puVar2 = puVar3;
    func_0x000107c52ac0();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar7);
    if (puVar2 != (undefined *)0x0) {
      func_0x0001009f0578(in_stack_00000038,puVar8);
      lVar4 = 0;
      func_0x000107c5eea4();
      lVar6 = *(long *)(lVar4 + -8);
      puVar5 = puVar8;
      (**(code **)(lVar6 + 0x30))(puVar8,1,lVar4);
      puVar9 = (undefined1 *)0x0;
      if ((int)puVar5 != 1) {
        func_0x000107c5ee70();
        (**(code **)(lVar6 + 8))(puVar8,lVar4);
        puVar9 = puVar5;
      }
      puVar7 = puVar2;
      func_0x000107c5493c();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar9);
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045f8);
        (*pcVar1)();
      }
      if (in_stack_00000040 >> 0x1f != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045c0);
        (*pcVar1)();
      }
      puVar2 = puVar7;
      func_0x000107c53484();
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      if (puVar2 != (undefined *)0x0) {
        puVar7 = puVar2;
        func_0x000107c53478();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e04600);
          (*pcVar1)();
        }
        func_0x000107c5fadc(in_stack_00000050,in_stack_00000058);
        puVar2 = puVar7;
        func_0x000107c594e0();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c61170(in_stack_00000050);
        if (puVar2 != (undefined *)0x0) {
          puVar7 = puVar2;
          func_0x000107c3ecc8();
          func_0x000107c61180();
          func_0x000107c61170(puVar2);
          if (puVar7 != (undefined *)0x0) {
            *puStack_68 = puVar7;
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e04608);
          (*pcVar1)();
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e04604);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045fc);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045f4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e045e4);
  (*pcVar1)();
}



/* Entry: 101e04608; end: 101e04613;  */

void FUN_101e04608(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101e04614; end: 101e0493b;  */

void FUN_101e04614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long extraout_x8;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 auStack_1c0 [4];
  undefined1 auStack_1a0 [12];
  uint uStack_194;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [48];
  
  uStack_168 = param_15;
  uStack_170 = param_14;
  uStack_190 = param_13;
  uStack_194 = (uint)param_11;
  lVar6 = 0;
  uStack_180 = param_5;
  uStack_178 = param_1;
  uStack_160 = param_8;
  uStack_158 = param_2;
  func_0x000107c5f804();
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_1a0 + lVar1;
  if (param_6 == 0) {
    ppuStack_188 = (undefined **)0x0;
  }
  else {
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0x42000000;
    pcStack_140 = FUN_101e0493c;
    puStack_138 = &UNK_110488bf8;
    ppuVar7 = &puStack_150;
    lStack_130 = param_6;
    uStack_128 = param_7;
    func_0x000107c60bc4();
    uVar2 = uStack_128;
    ppuStack_188 = ppuVar7;
    func_0x000107c6157c(param_7);
    func_0x000107c61574(uVar2);
  }
  FUN_101e05f34(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar12 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar6);
  puVar8 = puVar11;
  func_0x000107c5fff0();
  (**(code **)(lVar12 + 8))(puVar11,lVar6);
  FUN_101e0567c(param_9,auStack_90);
  puVar9 = &UNK_110488bb8;
  func_0x000107c613fc(&UNK_110488bb8,0xf0,7);
  uVar2 = uStack_178;
  *(undefined8 *)(puVar9 + 0x10) = uStack_178;
  FUN_101e056c0(auStack_90,puVar9 + 0x18);
  uVar5 = uStack_160;
  uVar4 = uStack_168;
  uVar3 = uStack_170;
  uVar13 = param_10[0xc];
  uVar15 = param_10[0xf];
  uVar14 = param_10[0xe];
  *(undefined8 *)(puVar9 + 0xa8) = param_10[0xd];
  *(undefined8 *)(puVar9 + 0xa0) = uVar13;
  *(undefined8 *)(puVar9 + 0xb8) = uVar15;
  *(undefined8 *)(puVar9 + 0xb0) = uVar14;
  uVar13 = *(undefined8 *)((long)param_10 + 0x79);
  *(undefined8 *)(puVar9 + 0xc1) = *(undefined8 *)((long)param_10 + 0x81);
  *(undefined8 *)(puVar9 + 0xb9) = uVar13;
  uVar13 = param_10[4];
  uVar15 = param_10[7];
  uVar14 = param_10[6];
  *(undefined8 *)(puVar9 + 0x68) = param_10[5];
  *(undefined8 *)(puVar9 + 0x60) = uVar13;
  *(undefined8 *)(puVar9 + 0x78) = uVar15;
  *(undefined8 *)(puVar9 + 0x70) = uVar14;
  uVar15 = param_10[8];
  uVar14 = param_10[0xb];
  uVar13 = param_10[10];
  *(undefined8 *)(puVar9 + 0x88) = param_10[9];
  *(undefined8 *)(puVar9 + 0x80) = uVar15;
  *(undefined8 *)(puVar9 + 0x98) = uVar14;
  *(undefined8 *)(puVar9 + 0x90) = uVar13;
  uVar15 = *param_10;
  uVar14 = param_10[3];
  uVar13 = param_10[2];
  *(undefined8 *)(puVar9 + 0x48) = param_10[1];
  *(undefined8 *)(puVar9 + 0x40) = uVar15;
  *(undefined8 *)(puVar9 + 0x58) = uVar14;
  *(undefined8 *)(puVar9 + 0x50) = uVar13;
  puVar9[0xc9] = (byte)uStack_194 & 1;
  *(undefined8 *)(puVar9 + 0xd0) = uStack_190;
  *(undefined8 *)(puVar9 + 0xd8) = uStack_170;
  *(undefined8 *)(puVar9 + 0xe0) = uStack_168;
  *(undefined8 *)(puVar9 + 0xe8) = uStack_160;
  pcStack_a0 = FUN_101e056d8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1013b7310;
  puStack_a8 = &UNK_110488bd0;
  ppuVar10 = &puStack_c0;
  puStack_98 = puVar9;
  func_0x000107c60bc4();
  puVar9 = puStack_98;
  func_0x000107c6157c(uVar2);
  func_0x000101df658c(param_10,&puStack_150);
  func_0x000107c61434(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar9);
  *(undefined1 **)((long)auStack_1c0 + lVar1 + 8) = puVar8;
  *(undefined ***)((long)auStack_1c0 + lVar1 + 0x10) = ppuVar10;
  ppuVar7 = ppuStack_188;
  *(undefined ***)((long)auStack_1c0 + lVar1) = ppuStack_188;
  func_0x000107c3df08(uStack_158);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 101e0493c; end: 101e049ab;  */

/* WARNING: Possible PIC construction at 0x000101e04994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e04998) */

void FUN_101e0493c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_110488c30;
  func_0x000107c613fc(&UNK_110488c30,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(FUN_101e05710,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101e049ac; end: 101e04afb;  */

void FUN_101e049ac(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  ulong param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
                  undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  if ((((ulong)param_1 & 1) != 0) && (param_2 == 0)) {
    uVar1 = *(undefined8 *)(param_4 + 0x18);
    lVar2 = *(long *)(param_4 + 0x20);
    func_0x0001000a8868(param_4,uVar1);
    (**(code **)(lVar2 + 8))(7,param_5,uVar1,lVar2);
    if ((param_6 & 1) == 0) {
      puVar3 = PTR_PTR_1126af4d0;
      func_0x000107c61168();
      func_0x000107c5fadc(param_7,param_8);
      func_0x000107c430f4();
      func_0x000107c61180();
      func_0x000107c61170(param_7);
      if (puVar3 != (undefined *)0x0) {
        func_0x000107c45334(param_11);
        func_0x000107c615e8(puVar3);
      }
    }
    func_0x000100b60084();
    return;
  }
  FUN_101df6cf4();
  puVar3 = &UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,param_1,0,0);
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0x20;
  func_0x000107c614b0(param_2);
  func_0x00010488ade0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101e04afc; end: 101e04cfb;  */

void FUN_101e04afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puVar1 = &UNK_110488b40;
  func_0x000107c613fc(&UNK_110488b40,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_11;
  *(undefined8 *)(puVar1 + 0x58) = param_12;
  *(undefined8 *)(puVar1 + 0x60) = param_2;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  pcStack_88 = FUN_101e05200;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_110488b58;
  ppuVar2 = &puStack_a8;
  puStack_80 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_80;
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_3);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61434(param_7);
  func_0x000107c61434(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_2);
  func_0x000107c61434(param_14);
  func_0x000107c61574(puVar1);
  pcStack_88 = FUN_101e055d8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1013b7310;
  puStack_90 = &UNK_110488b80;
  ppuVar3 = &puStack_a8;
  puStack_80 = (undefined *)param_1;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_80;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c4e560(param_2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101e04cfc; end: 101e051ff;  */

void FUN_101e04cfc(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined *param_10,undefined8 param_11,undefined8 param_12,long param_13,
                  undefined8 param_14)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  uStack_90 = param_4;
  uStack_88 = param_6;
  lStack_80 = param_7;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&uStack_90 + lVar1;
  lStack_70 = param_1;
  if (param_1 == 0) {
LAB_101e04ee0:
    puVar10 = PTR_PTR_1126bc830;
    func_0x000107c61168();
    func_0x0001000d224c(&uStack_68);
    func_0x000107c40c64();
    func_0x000107c61180();
    func_0x000107c61170(uStack_68);
    if (puVar10 == (undefined *)0x0) {
      return;
    }
    puVar7 = puVar10;
    func_0x000107c4e818();
    func_0x000107c61180();
    if (puVar7 == (undefined *)0x0) goto LAB_101e051d0;
    puVar5 = PTR_PTR_1126b2508;
    func_0x000107c61168();
    func_0x000107c3f7a8();
    func_0x000107c61180();
    if (puVar5 != (undefined *)0x0) {
      puVar8 = puVar5;
      func_0x000107c5eea0(lVar12);
      func_0x000107c5ee70();
      (**(code **)(lVar11 + 8))(lVar12,lVar4);
      func_0x000107c5434c(puVar10);
      func_0x000107c61170(puVar8);
      uStack_78 = param_9;
      func_0x000107c5d984(param_9);
      func_0x000107c61180();
      func_0x000107c58be8(puVar10);
      func_0x000107c61170(param_9);
      lVar6 = 0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      uVar9 = 0;
      FUN_101e05f34(0,0x112e2f4e8,&PTR_PTR_1126e0520);
      *(undefined8 *)(lVar6 + 0x38) = uVar9;
      *(undefined **)(lVar6 + 0x20) = puVar7;
      FUN_101e05f34(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61174(puVar7);
      func_0x000107c600f0(lVar6);
      func_0x000107c3d668(puVar5);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
      puVar5 = puVar10;
      goto LAB_101e05060;
    }
  }
  else {
    uStack_78 = param_9;
    puVar5 = PTR_PTR_1126bc830;
    func_0x000107c61168();
    lVar6 = lStack_70;
    func_0x000107c61174();
    func_0x000107c3f7a4();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c61170(lVar6);
      param_9 = uStack_78;
      goto LAB_101e04ee0;
    }
    if (param_2 != 0) {
      FUN_101e0523c(param_2);
      lVar4 = param_2;
      func_0x000107c5f9dc();
      func_0x000107c6142c(param_2);
      func_0x000107c594e4(puVar5);
      func_0x000107c61170(lVar4);
    }
    if (param_3 != 0) {
      func_0x000107c61174();
      lVar4 = param_3;
      func_0x000107c49820();
      if (lVar4 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e051fc);
        (*pcVar2)();
      }
      if (0x7fffffff < lVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101e05200);
        (*pcVar2)();
      }
      func_0x000107c53478(puVar5);
      func_0x000107c61170(param_3);
    }
    if (param_5 != 0) {
      uVar9 = uStack_90;
      func_0x000107c5fadc(uStack_90,param_5);
      func_0x000107c59c44(puVar5);
      func_0x000107c61170(uVar9);
    }
    if (lStack_80 != 0) {
      uVar9 = uStack_88;
      func_0x000107c5fadc(uStack_88);
      func_0x000107c53578(puVar5);
      func_0x000107c61170(uVar9);
    }
    lVar4 = lVar6;
    func_0x000107c3fba8();
    iVar3 = (int)lVar4;
    func_0x000107c307ac();
    if (iVar3 != 0) {
      func_0x000107c594f0(puVar5);
      func_0x000107c556a8(puVar5);
      func_0x000107c58dac(puVar5);
    }
LAB_101e05060:
    func_0x000107c61170(lVar6);
    if (param_10 == (undefined *)0x0) {
      func_0x000107c61174(0);
      puVar8 = (undefined *)0x0;
      puVar7 = (undefined *)0x0;
      if (param_13 == 0) goto LAB_101e05170;
LAB_101e05104:
      param_10 = (undefined *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(param_10 + 0x18) = 2;
      *(undefined8 *)(param_10 + 0x10) = 1;
      *(undefined8 *)(param_10 + 0x20) = param_12;
      *(long *)(param_10 + 0x28) = param_13;
      func_0x000107c61434(param_13);
      puVar10 = param_10;
      func_0x000107c5fc48(param_10,PTR___sSSN_11034da80);
      func_0x000107c61574(param_10);
      puVar8 = puVar7;
    }
    else {
      puVar10 = (undefined *)0x112e2f4f0;
      FUN_101e05604(0x112e2f4f0,&PTR_PTR_1126d7f18,0x112e2f4f8,&UNK_10da181c8);
      func_0x000107c613fc();
      *(undefined8 *)(puVar10 + 0x18) = 3;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      *(undefined **)(puVar10 + 0x20) = param_10;
      uVar9 = 0;
      FUN_101e05f34(0,0x112e2f4f0,&PTR_PTR_1126d7f18);
      func_0x000107c61174(param_10);
      puVar8 = puVar10;
      func_0x000107c5fc48(puVar10,uVar9);
      func_0x000107c6142c(puVar10);
      param_10 = puVar10;
      puVar7 = puVar8;
      if (param_13 != 0) goto LAB_101e05104;
LAB_101e05170:
      puVar10 = (undefined *)0x0;
    }
    func_0x000107c5eac8();
    auStack_a0[lVar1] = 1;
    puVar7 = puVar5;
    func_0x000107f58a24(puVar5,lStack_70,param_11,uStack_78,puVar8,puVar10,param_14,param_10);
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar8);
  }
  func_0x000107c61170(puVar10);
  puVar10 = puVar7;
LAB_101e051d0:
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 101e05200; end: 101e0523b;  */

void FUN_101e05200(void)

{
  long unaff_x20;
  
  FUN_101e04cfc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101e0523c; end: 101e05573;  */

undefined * FUN_101e0523c(long param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [32];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [32];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar3 = 0x112d37798;
    func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar11,uVar3);
    puVar12 = puVar11;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar14 << 6;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      uStack_158 = *puVar9;
      uVar3 = puVar9[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
      uStack_150 = uVar3;
      func_0x000107c61438(uVar3,2);
      func_0x000107c61174();
      func_0x000107c6147c(&uStack_148,&uStack_158,PTR___sSSN_11034da80,
                          PTR___ss11AnyHashableVN_11034e448,7);
      uVar4 = 0;
      uStack_160 = uVar15;
      FUN_101e05f34(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c61174(uVar15);
      func_0x000107c6147c(auStack_120,&uStack_160,uVar4,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar3);
      if (lStack_130 == 0) {
        func_0x000107c61574(param_1);
        FUN_101e05d90(&uStack_148,0x112d55e70,&UNK_10d92d170);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e05574);
        (*pcVar1)();
      }
      uStack_f8 = uStack_140;
      uStack_100 = uStack_148;
      lStack_e8 = lStack_130;
      uStack_f0 = uStack_138;
      uStack_e0 = uStack_128;
      func_0x000100102924(auStack_120,auStack_d8);
      uStack_88 = uStack_f8;
      uStack_90 = uStack_100;
      lStack_78 = lStack_e8;
      uStack_80 = uStack_f0;
      uStack_70 = uStack_e0;
      func_0x000100102924(auStack_d8,auStack_b0);
      uVar5 = *(ulong *)(puVar12 + 0x28);
      func_0x000107c602c4();
      uVar10 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar2 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar5 = uVar7 + 1;
          if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e05548);
            (*pcVar1)();
          }
          uVar7 = 0;
          if (uVar5 != uVar6) {
            uVar7 = uVar5;
          }
          bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        } while (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar12 + uVar7 * 8 + 0x40);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar12 + uVar7 + 0x40)
      ;
      puVar9 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar6 * 0x28);
      puVar9[1] = uStack_88;
      *puVar9 = uStack_90;
      puVar9[3] = lStack_78;
      puVar9[2] = uStack_80;
      puVar9[4] = uStack_70;
      func_0x000100102924(auStack_b0,*(long *)(puVar12 + 0x38) + uVar6 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar2 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e05544);
      (*pcVar1)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}


