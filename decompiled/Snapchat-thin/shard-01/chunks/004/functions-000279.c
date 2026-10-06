/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fde968; end: 100fdeabf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fde968(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  lVar5 = _DAT_112d52c40;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  lVar9 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar9 + _DAT_112d52c40,unaff_x22 + 0x48,0,0);
  lVar6 = lVar9 + lVar5;
  (**(code **)(lVar2 + 0x30))(lVar6,1,uVar8);
  bVar1 = (int)lVar6 == 0;
  if (bVar1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar6 = *(long *)(unaff_x22 + 0xa0);
    (**(code **)(lVar6 + 0x10))(uVar8,lVar9 + lVar5,uVar4);
    *(undefined8 *)(unaff_x22 + 0x28) = 3;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined1 *)(unaff_x22 + 0x40) = 1;
    func_0x000107c5fd28(uVar3,(undefined8 *)(unaff_x22 + 0x28),uVar4);
    func_0x000107c614ac(uVar7);
    (**(code **)(lVar6 + 8))(uVar8,uVar4);
  }
  else {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xe8));
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar6 = 0x112d52e70;
  func_0x0001000285a8(0x112d52e70,&UNK_10d919770);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar8,!bVar1,1,lVar6);
  FUN_100fe0c14(uVar8,0x112d52e68,&UNK_10d919760);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fdeabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fdeac0; end: 100fdeb2b;  */

void FUN_100fdeac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  lVar2 = 0x112d52e60;
  func_0x0001000285a8(0x112d52e60,&UNK_10d919750);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdeb2c,0,0);
  return;
}



/* Entry: 100fdeb2c; end: 100fdebc3;  */

void FUN_100fdeb2c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar1 = *(long *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fdebc4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x28,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 100fdebc4; end: 100fdec0b;  */

void FUN_100fdebc4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdec0c,0,0);
  return;
}



/* Entry: 100fdec0c; end: 100fded23;  */

void FUN_100fdec0c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fdeccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x30);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  lVar2 = *(long *)(unaff_x22 + 0x40) + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  if (lVar2 != 0) {
    plVar3 = (long *)0x130;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100fded24;
    plVar3[0x1a] = lVar2;
    plVar3[0x19] = lVar6;
    plVar3[0x18] = lVar5;
    lVar5 = 0x112d52cd8;
    func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
    plVar3[0x1b] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar3[0x1c] = lVar5;
    uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x1d] = uVar4;
    lVar5 = 0x112d52e68;
    func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
    uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x1e] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdf0d4,0,0);
    return;
  }
  func_0x000107c61170(lVar5);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fdedd4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,(long *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 100fded24; end: 100fdee1b;  */

void FUN_100fded24(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fded6c,0,0);
  return;
}



/* Entry: 100fdee1c; end: 100fdef33;  */

void FUN_100fdee1c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  if (lVar5 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x48));
    func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fdeedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x30);
  *(long *)(unaff_x22 + 0x68) = lVar5;
  lVar2 = *(long *)(unaff_x22 + 0x40) + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  if (lVar2 != 0) {
    plVar3 = (long *)0x130;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100fded24;
    plVar3[0x1a] = lVar2;
    plVar3[0x19] = lVar6;
    plVar3[0x18] = lVar5;
    lVar5 = 0x112d52cd8;
    func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
    plVar3[0x1b] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar3[0x1c] = lVar5;
    uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x1d] = uVar4;
    lVar5 = 0x112d52e68;
    func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
    uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x1e] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdf0d4,0,0);
    return;
  }
  func_0x000107c61170(lVar5);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fdedd4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,(long *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 100fdef34; end: 100fdef9b;  */

void FUN_100fdef34(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x0001000285a8();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2,param_1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8)));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fdef9c; end: 100fdf033;  */

void FUN_100fdef9c(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112d52e28;
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fe1440;
  plVar1[7] = unaff_x20 + uVar2;
  plVar1[8] = lVar3;
  lVar3 = 0x112d52e60;
  func_0x0001000285a8(0x112d52e60,&UNK_10d919750);
  plVar1[9] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[10] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xb] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdeb2c,0,0);
  return;
}



/* Entry: 100fdf034; end: 100fdf0d3;  */

void FUN_100fdf034(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2;
  lVar2 = 0x112d52cd8;
  func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
  *(long *)(unaff_x22 + 0xd8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar1;
  lVar2 = 0x112d52e68;
  func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdf0d4,0,0);
  return;
}



/* Entry: 100fdf0d4; end: 100fdf387;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdf0d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(lVar7 + _DAT_112d52c28);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c6157c(uVar8);
  puVar3 = PTR___sytN_11034f1b0;
  puVar6 = (undefined *)(unaff_x22 + 0x10);
  func_0x000100075034(FUN_100fdff8c,puVar6,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0xf8) = 0;
  func_0x000107c61574(uVar8);
  uVar8 = *(undefined8 *)(lVar7 + _DAT_112d52c18);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(unaff_x22 + 0x38);
  func_0x000107c61574(uVar8);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(long *)(unaff_x22 + 0x40) != 0) {
    lVar7 = *(long *)(unaff_x22 + 0xd0);
    lVar9 = *(long *)(lVar7 + _DAT_112d52c60);
    if (lVar9 != 0) {
      func_0x000107c6157c(lVar9);
      puVar6 = puVar3 + 8;
      func_0x000107c5fd50();
      func_0x000107c61574(lVar9);
      lVar7 = *(long *)(unaff_x22 + 0xd0);
    }
    lVar9 = *(long *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(lVar7 + _DAT_112d52c10);
    func_0x000107c6157c(uVar8);
    func_0x0001000c74f0(unaff_x22 + 0xb8);
    func_0x000107c61574(uVar8);
    lVar10 = *(long *)(unaff_x22 + 0xb8);
    func_0x000107c5cda4();
    func_0x000107c61180();
    lVar7 = lVar9;
    func_0x000107c2bb50();
    func_0x000107c61170(lVar9);
    if ((*(long *)(lVar10 + 0x10) == 0) || (FUN_100fda8d4(), ((ulong)puVar6 & 1) == 0)) {
      lVar9 = *(long *)(unaff_x22 + 0xc0);
      func_0x000107c6142c(lVar10);
      func_0x000107c5cda4();
      func_0x000107c61180();
      lVar7 = lVar9;
      func_0x000107c2bb50();
      func_0x000107c61170(lVar9);
      plVar5 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x118) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_100fdf388;
      lVar9 = *(long *)(unaff_x22 + 0xd0);
      *(undefined1 *)((long)plVar5 + 0x39) = 1;
      plVar5[9] = lVar7;
      plVar5[10] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdffc4,0,0);
      return;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + lVar7 * 8);
    func_0x000107c61174(uVar4);
    func_0x000107c6142c(lVar10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd0) + _DAT_112d52c20);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c6157c(uVar11);
    func_0x000100075034(FUN_100fe0c54,unaff_x22 + 0xa0,puVar3 + 8);
    func_0x000107c61574(uVar11);
    func_0x000107c61434(uVar8);
    uVar11 = uVar4;
    FUN_100fdf668(uVar4);
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar1);
    FUN_100fe02c4(uVar2,uVar8,uVar11);
    func_0x000107c61170(uVar4);
    func_0x000107c6142c(uVar8);
    func_0x000107c61170(uVar11);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fdf308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fdf388; end: 100fdf3db;  */

void FUN_100fdf388(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x120) = param_1;
  *(undefined1 *)(lVar1 + 0x61) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdf3dc,0,0);
  return;
}



/* Entry: 100fdf3dc; end: 100fdf5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdf3dc(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  
  if (*(char *)(unaff_x22 + 0x61) == '\x01') {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar3 = *(long *)(unaff_x22 + 0xe0);
    lVar11 = *(long *)(unaff_x22 + 0xd0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x110));
    func_0x000107c6142c(uVar8);
    lVar6 = _DAT_112d52c40;
    func_0x000107c61428(lVar11 + _DAT_112d52c40,unaff_x22 + 0x88,0,0);
    lVar7 = lVar11 + lVar6;
    (**(code **)(lVar3 + 0x30))(lVar7,1,uVar2);
    bVar1 = (int)lVar7 != 0;
    if (!bVar1) {
      bVar5 = *(byte *)(unaff_x22 + 0x120);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar7 = *(long *)(unaff_x22 + 0xe0);
      (**(code **)(lVar7 + 0x10))(uVar8,lVar11 + lVar6,uVar2);
      *(undefined8 *)(unaff_x22 + 0x70) = 0;
      *(undefined8 *)(unaff_x22 + 0x78) = 0;
      *(ulong *)(unaff_x22 + 0x68) = (ulong)bVar5;
      *(undefined1 *)(unaff_x22 + 0x80) = 1;
      func_0x000107c5fd28(uVar4,unaff_x22 + 0x68,uVar2);
      (**(code **)(lVar7 + 8))(uVar8,uVar2);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar7 = 0x112d52e70;
    func_0x0001000285a8(0x112d52e70,&UNK_10d919770);
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar8,bVar1,1,lVar7);
    FUN_100fe0c14(uVar8,0x112d52e68,&UNK_10d919760);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd0) + _DAT_112d52c20);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0xc0);
    func_0x000107c6157c(uVar9);
    func_0x000100075034(FUN_100fe0c54,unaff_x22 + 0xa0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar9);
    func_0x000107c61434(uVar8);
    uVar9 = uVar10;
    FUN_100fdf668(uVar10);
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar2);
    FUN_100fe02c4(uVar4,uVar8,uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c6142c(uVar8);
    func_0x000107c61170(uVar9);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fdf5d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fdf5d4; end: 100fdf667;  */

void FUN_100fdf5d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar2 = param_2[4];
  uVar1 = *(undefined1 *)(param_2 + 5);
  FUN_100fe13fc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],*(undefined1 *)(param_1 + 5));
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = uVar1;
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  func_0x000100402194(&uStack_50,auStack_70);
  func_0x000100402194(&uStack_60,auStack_70);
  return;
}



/* Entry: 100fdf668; end: 100fdf99b;  */

/* WARNING: Possible PIC construction at 0x000100fdf7ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fdf7f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdf668(double param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  long lStack_58;
  
  lVar1 = param_2;
  func_0x000107c5cd58();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c5cda4();
  func_0x000107c61180();
  lVar3 = lVar1;
  func_0x000107c2bb50();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d52c28);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(&lStack_58);
  func_0x000107c61574(uVar4);
  if ((*(long *)(lStack_58 + 0x10) == 0) || (FUN_100fda8d4(), (param_3 & 1) == 0)) {
    func_0x000107c6142c(lStack_58);
  }
  else {
    dVar6 = *(double *)(*(long *)(lStack_58 + 0x38) + lVar3 * 8);
    func_0x000107c6142c(lStack_58);
    lVar1 = param_2;
    func_0x000107c5cd58(param_2);
    func_0x000107c61180();
    func_0x000107c5bb48();
    dVar5 = param_1;
    func_0x000107c61170(lVar1);
    if (dVar6 == param_1) {
      lVar1 = param_2;
      func_0x000107c5cd58(param_2);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5cd58();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x000107c4161c(lVar2);
      func_0x000107c61170(lVar2);
      if (dVar6 == dVar5) goto code_r0x000107c61174;
    }
    func_0x000107c5cd58(param_2);
    func_0x000107c61180();
    lVar1 = param_2;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    param_2 = lVar1;
    func_0x000108420014(dVar6,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 100fdf99c; end: 100fdff03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fdf99c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_a0 [4];
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112d52cd8;
  uStack_9c = param_5;
  func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_a0 + -extraout_x8;
  lVar5 = 0x112d52e68;
  func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112d52c40;
  lVar13 = (long)puVar12 - extraout_x8_00;
  func_0x000107c61428(unaff_x20 + _DAT_112d52c40,auStack_78,0,0);
  lVar5 = unaff_x20 + lVar3;
  (**(code **)(lVar14 + 0x30))(lVar5,1,lVar4);
  bVar1 = (int)lVar5 == 0;
  if (bVar1) {
    (**(code **)(lVar14 + 0x10))(puVar12,unaff_x20 + lVar3,lVar4);
    uStack_80 = 0;
    uStack_98 = param_1;
    uStack_90 = param_2;
    uStack_88 = param_3;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c5fd28(lVar13,&uStack_98,lVar4);
    (**(code **)(lVar14 + 8))(puVar12,lVar4);
    lVar4 = 0x112d52e70;
    func_0x0001000285a8(0x112d52e70,&UNK_10d919770);
    pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  else {
    lVar4 = 0x112d52e70;
    func_0x0001000285a8(0x112d52e70,&UNK_10d919770);
    pcVar11 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  }
  (*pcVar11)(lVar13,!bVar1,1,lVar4);
  FUN_100fe0c14(lVar13,0x112d52e68,&UNK_10d919760);
  lVar4 = unaff_x20 + _DAT_112d52bf8;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  (**(code **)(lVar5 + 8))(param_1,param_2,param_4,0,uVar2,lVar5);
  if ((uStack_9c & 1) == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    lVar5 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar2);
    func_0x000107c5cd58();
    func_0x000107c61180();
    uVar6 = param_3;
    func_0x000107c5cd58();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    uVar7 = uVar6;
    func_0x000107c5cda4();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c2bb50();
    func_0x000107c61170(uVar7);
    puVar9 = PTR___ss6UInt64VN_11034f048;
    puVar10 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    uStack_98 = uVar8;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c61170(uVar6);
    (**(code **)(lVar5 + 0x10))(puVar9,puVar10,uVar2,lVar5);
    func_0x000107c6142c(puVar10);
  }
  return;
}



/* Entry: 100fdff04; end: 100fdff8b;  */

void FUN_100fdff04(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5cda4(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c2bb50();
  func_0x000107c61170(param_3);
  uVar2 = *param_2;
  func_0x000107c61558(uVar2);
  uVar3 = *param_2;
  FUN_100fdac4c(param_1,uVar1,uVar2);
  *param_2 = uVar3;
  return;
}



/* Entry: 100fdff8c; end: 100fdffa7;  */

void FUN_100fdff8c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100fdff04(*(undefined8 *)(unaff_x20 + 0x20),param_1,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100fdffa8; end: 100fdffc3;  */

void FUN_100fdffa8(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x39) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdffc4,0,0);
  return;
}



/* Entry: 100fdffc4; end: 100fe0073;  */

void FUN_100fdffc4(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c61644(unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x50));
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fe0020;
  plVar1[0xe] = *(long *)(unaff_x22 + 0x48);
  plVar1[0xf] = unaff_x22 + 0x40;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe0538,0,0);
  return;
}



/* Entry: 100fe0074; end: 100fe0137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe0074(void)

{
  char cVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x3a);
  if (cVar1 == '\x01') {
    if (*(char *)(unaff_x22 + 0x39) == '\0') {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + _DAT_112d52c18);
      func_0x000107c6157c(uVar4);
      func_0x0001000c74f0(unaff_x22 + 0x10);
      func_0x000107c61574(uVar4);
      *(long *)(unaff_x22 + 0x68) = *(long *)(unaff_x22 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
      if (*(long *)(unaff_x22 + 0x18) != 0) {
        plVar2 = (long *)0xa0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x78) = plVar2;
        *plVar2 = unaff_x22;
        plVar2[1] = (long)FUN_100fe0138;
        plVar2[0xd] = *(long *)(unaff_x22 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe0cf8,0,0);
        return;
      }
    }
    uVar3 = (ulong)*(byte *)(unaff_x22 + 0x60);
  }
  else {
    uVar3 = *(ulong *)(unaff_x22 + 0x60);
  }
  func_0x000107c61640(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000100fe00c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,cVar1);
  return;
}



/* Entry: 100fe0138; end: 100fe01e3;  */

void FUN_100fe0138(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x68);
    func_0x000107c6142c(*(undefined8 *)(lVar4 + 0x70));
    func_0x000107c6142c(uVar1);
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x80) = plVar2;
    *plVar2 = lVar5;
    plVar2[1] = (long)FUN_100fe01e4;
    plVar2[0xe] = param_1;
    plVar2[0xf] = lVar4 + 0x40;
    pcVar3 = FUN_100fe0538;
  }
  else {
    func_0x000107c614ac();
    pcVar3 = FUN_100fe0278;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 100fe01e4; end: 100fe0237;  */

void FUN_100fe01e4(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x3b) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe0238,0,0);
  return;
}



/* Entry: 100fe0238; end: 100fe0277;  */

void FUN_100fe0238(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x3b);
  func_0x000107c61640(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000100fe0274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar1);
  return;
}



/* Entry: 100fe0278; end: 100fe02c3;  */

void FUN_100fe0278(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c6142c(uVar1);
  func_0x000107c61640(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x000100fe02c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,1);
  return;
}



/* Entry: 100fe02c4; end: 100fe051f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe02c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0x112d52cd8;
  func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_a0 + -extraout_x8;
  lVar5 = 0x112d52e68;
  func_0x0001000285a8(0x112d52e68,&UNK_10d919760);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = _DAT_112d52c40;
  lVar12 = (long)puVar11 - extraout_x8_00;
  func_0x000107c61428(unaff_x20 + _DAT_112d52c40,auStack_78,0,0);
  lVar5 = unaff_x20 + lVar3;
  (**(code **)(lVar13 + 0x30))(lVar5,1,lVar4);
  bVar1 = (int)lVar5 != 0;
  if (!bVar1) {
    (**(code **)(lVar13 + 0x10))(puVar11,unaff_x20 + lVar3,lVar4);
    uStack_80 = 0;
    uStack_98 = param_1;
    uStack_90 = param_2;
    uStack_88 = param_3;
    func_0x000107c61434(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c5fd28(lVar12,&uStack_98,lVar4);
    (**(code **)(lVar13 + 8))(puVar11,lVar4);
  }
  lVar4 = 0x112d52e70;
  func_0x0001000285a8(0x112d52e70,&UNK_10d919770);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar12,bVar1,1,lVar4);
  FUN_100fe0c14(lVar12,0x112d52e68,&UNK_10d919760);
  lVar4 = unaff_x20 + _DAT_112d52bf8;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar7 = uVar6;
  func_0x000107c5cda4();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c2bb50();
  func_0x000107c61170(uVar7);
  puVar9 = PTR___ss6UInt64VN_11034f048;
  puVar10 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  uStack_98 = uVar8;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c61170(uVar6);
  (**(code **)(lVar5 + 0x10))(puVar9,puVar10,uVar2,lVar5);
  func_0x000107c6142c(puVar10);
  return;
}



/* Entry: 100fe0520; end: 100fe0537;  */

void FUN_100fe0520(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe0538,0,0);
  return;
}



/* Entry: 100fe0538; end: 100fe05f3;  */

void FUN_100fe0538(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x80) = lVar3;
  if (lVar3 != 0) {
    func_0x0001000d224c(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar3 = *(long *)(unaff_x22 + 0x50);
    func_0x0001000a8868(unaff_x22 + 0x30,uVar2);
    piVar5 = *(int **)(lVar3 + 0x18);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x88) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100fe05f4;
                    /* WARNING: Could not recover jumptable at 0x000100fe05d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x70),uVar2,lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fe05f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(2,1);
  return;
}



/* Entry: 100fe05f4; end: 100fe065f;  */

void FUN_100fe05f4(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x98) = param_1;
    pcVar1 = FUN_100fe0660;
  }
  else {
    pcVar1 = FUN_100fe06f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fe0660; end: 100fe06f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe0660(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112d52c10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_100fe12d4,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fe06f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,0);
  return;
}



/* Entry: 100fe06f8; end: 100fe07cf;  */

void FUN_100fe06f8(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x0001000834e4(unaff_x22 + 0x30);
  puVar3 = (undefined8 *)(unaff_x22 + 0x68);
  *puVar3 = uVar2;
  uVar4 = unaff_x22 + 0x58;
  func_0x000107c614b0(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar4,puVar3,uVar2,&UNK_110375e38,0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  if ((uVar4 & 1) == 0) {
    func_0x000107c614ac(*puVar3);
  }
  else {
    func_0x000107c614ac(uVar2);
    cVar1 = *(char *)(unaff_x22 + 0x60);
    if (cVar1 != '\x03') {
      uVar2 = *puVar3;
      goto LAB_100fe07ac;
    }
    uVar2 = *puVar3;
  }
  cVar1 = '\x02';
LAB_100fe07ac:
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fe07cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(cVar1,1);
  return;
}



/* Entry: 100fe07d0; end: 100fe083f;  */

void FUN_100fe07d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_100fdad68(param_3,param_2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 100fe0840; end: 100fe099f;  */

void FUN_100fe0840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  lVar2 = 0x112d52e80;
  func_0x0001000285a8(0x112d52e80,&UNK_10d919798);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fe08b4,0,0);
  return;
}



/* Entry: 100fe09a0; end: 100fe0b7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe09a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  if (*(char *)(unaff_x22 + 0xb0) == '\x01') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar11 = *(ulong *)(*(long *)(unaff_x22 + 0x98) + _DAT_112d52c08);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
    FUN_100fe13dc(uVar10);
    func_0x000107c6157c(uVar11);
    func_0x000100075034(0x100fe13c0,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c5fd5c();
    uVar7 = *(undefined1 *)(unaff_x22 + 0xb0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
    if ((uVar11 & 1) == 0) {
      lVar1 = *(long *)(unaff_x22 + 0x88);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar8 = uVar10;
      func_0x000107c5cd58();
      func_0x000107c61180();
      uVar9 = uVar8;
      func_0x000107c5cd58();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
      func_0x000107c61174(uVar9);
      uVar8 = 0x112d52e40;
      func_0x0001000285a8(0x112d52e40,&UNK_10d919710);
      func_0x000107c5fd28(uVar4,unaff_x22 + 0x50,uVar8);
      func_0x000107c61170(uVar9);
      (**(code **)(lVar1 + 8))(uVar4,uVar5);
      FUN_100fe13dc(uVar13,uVar7);
      func_0x000107c61434(uVar6);
      FUN_100fdf99c(uVar3,uVar6,uVar10,uVar2,0);
      func_0x000107c6142c(uVar6);
      func_0x000100fe13ec(uVar13,uVar7);
      func_0x000100fe13ec(uVar13,uVar7);
      func_0x000107c61170(uVar10);
    }
    else {
      func_0x000100fe13ec(uVar13,uVar7);
      func_0x000100fe13ec(uVar13,uVar7);
    }
  }
  func_0x000107c61574(uVar12);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000100fe0b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe0b80; end: 100fe0c13;  */

void FUN_100fe0b80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_4);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  FUN_100fdae98(param_4,param_2,param_3,uVar1);
  func_0x000107c6142c(param_3);
  *param_1 = uVar2;
  return;
}



/* Entry: 100fe0c14; end: 100fe0c53;  */

undefined8 FUN_100fe0c14(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100fe0c54; end: 100fe0c97;  */

void FUN_100fe0c54(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 100fe0c98; end: 100fe0cf7;  */

undefined8 FUN_100fe0c98(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe0cd8);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 3 & 0xffffffffffffff8) + 0x40) >> (param_1 & 0x3f) & 1) != 0
     ) {
    if (*(int *)(param_4 + 0x24) == param_2) {
      return *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe0ce0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe0cdc);
  (*pcVar1)();
}



/* Entry: 100fe0cf8; end: 100fe0f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe0cf8(void)

{
  undefined4 uVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long unaff_x22;
  
  lVar5 = _DAT_112d52c30;
  *(long *)(unaff_x22 + 0x70) = _DAT_112d52c30;
  uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + lVar5);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(unaff_x22 + 0x50);
  func_0x000107c61574(uVar8);
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x10);
  func_0x000107c6142c();
  lVar5 = *(long *)(unaff_x22 + 0x68);
  if (lVar9 == 0) {
    lVar9 = *(long *)(lVar5 + _DAT_112d52c78);
    *(long *)(unaff_x22 + 0x78) = lVar9;
    if (lVar9 != 0) {
      plVar7 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
      func_0x000107c6157c(lVar9);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x80) = plVar7;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100fe0f28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScT5valuexvg_11034fdb8)();
      return;
    }
  }
  plVar7 = (long *)(lVar5 + _DAT_112d52c38);
  lVar9 = *plVar7;
  if (lVar9 != 0) {
    uVar6 = plVar7[1];
    if (uVar6 != *(ulong *)(lVar9 + 0x10)) {
      if (*(ulong *)(lVar9 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe0f28);
        (*pcVar3)();
      }
      puVar4 = *(undefined1 **)(lVar9 + uVar6 * 8 + 0x20);
      plVar7[1] = uVar6 + 1;
      goto LAB_100fe0f04;
    }
  }
  uVar8 = *(undefined8 *)(lVar5 + _DAT_112d52c10);
  func_0x000107c6157c(uVar8);
  func_0x0001000c74f0(unaff_x22 + 0x58);
  func_0x000107c61574(uVar8);
  puVar10 = *(undefined1 **)(unaff_x22 + 0x58);
  bVar2 = puVar10[0x20];
  func_0x000107c61434(puVar10);
  puVar4 = puVar10 + 0x40;
  func_0x000107c60268(puVar4,~(-1L << ((ulong)bVar2 & 0x3f)));
  uVar1 = *(undefined4 *)(puVar10 + 0x24);
  bVar2 = puVar10[0x20];
  func_0x000107c6142c(puVar10);
  if (puVar4 == (undefined1 *)(1L << ((ulong)bVar2 & 0x3f))) {
    func_0x000107c6142c();
    FUN_100fdddf0();
    func_0x000107c613f8(&UNK_110374120,puVar10,0,0);
    *puVar10 = 3;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100fe0e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_100fe0c98(puVar4,uVar1,0,puVar10);
  func_0x000107c6142c(puVar10);
LAB_100fe0f04:
                    /* WARNING: Could not recover jumptable at 0x000100fe0f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 100fe0f28; end: 100fe0f83;  */

void FUN_100fe0f28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fe0f84;
  }
  else {
    pcVar1 = FUN_100fe125c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100fe0f84; end: 100fe100b;  */

void FUN_100fe0f84(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  func_0x0001000a8868(unaff_x22 + 0x28,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fe100c;
                    /* WARNING: Could not recover jumptable at 0x000100fe1008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 100fe100c; end: 100fe105b;  */

void FUN_100fe100c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe105c,0,0);
  return;
}



/* Entry: 100fe105c; end: 100fe125b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fe105c(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long unaff_x22;
  long lVar13;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar8 = *(long *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar13 = *(long *)(unaff_x22 + 0x68);
  func_0x0001000834e4(unaff_x22 + 0x28);
  uVar11 = *(undefined8 *)(lVar13 + lVar8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  func_0x000107c6157c(uVar11);
  func_0x000100075034(FUN_100fe1290,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar11);
  func_0x000107c6142c(uVar10);
  uVar10 = *(undefined8 *)(lVar13 + lVar8);
  func_0x000107c6157c(uVar10);
  func_0x0001000c74f0(unaff_x22 + 0x60);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar10);
  puVar1 = (undefined8 *)(lVar13 + _DAT_112d52c38);
  uVar6 = *puVar1;
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar1[1] = 0;
  func_0x000107c6142c(uVar6);
  plVar2 = (long *)(*(long *)(unaff_x22 + 0x68) + _DAT_112d52c38);
  lVar8 = *plVar2;
  if (lVar8 != 0) {
    uVar9 = plVar2[1];
    if (uVar9 != *(ulong *)(lVar8 + 0x10)) {
      if (*(ulong *)(lVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100fe125c);
        (*pcVar5)();
      }
      puVar7 = *(undefined1 **)(lVar8 + uVar9 * 8 + 0x20);
      plVar2[1] = uVar9 + 1;
      goto LAB_100fe1234;
    }
  }
  uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_112d52c10);
  func_0x000107c6157c(uVar6);
  func_0x0001000c74f0(unaff_x22 + 0x58);
  func_0x000107c61574(uVar6);
  puVar12 = *(undefined1 **)(unaff_x22 + 0x58);
  bVar4 = puVar12[0x20];
  func_0x000107c61434(puVar12);
  puVar7 = puVar12 + 0x40;
  func_0x000107c60268(puVar7,~(-1L << ((ulong)bVar4 & 0x3f)));
  uVar3 = *(undefined4 *)(puVar12 + 0x24);
  bVar4 = puVar12[0x20];
  func_0x000107c6142c(puVar12);
  if (puVar7 == (undefined1 *)(1L << ((ulong)bVar4 & 0x3f))) {
    func_0x000107c6142c();
    FUN_100fdddf0();
    func_0x000107c613f8(&UNK_110374120,puVar12,0,0);
    *puVar12 = 3;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100fe11f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_100fe0c98(puVar7,uVar3,0,puVar12);
  func_0x000107c6142c(puVar12);
LAB_100fe1234:
                    /* WARNING: Could not recover jumptable at 0x000100fe1254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 100fe125c; end: 100fe128f;  */

void FUN_100fe125c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100fe128c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe1290; end: 100fe12d3;  */

void FUN_100fe1290(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = uVar1;
  func_0x000107c61434(uVar1);
  return;
}



/* Entry: 100fe12d4; end: 100fe1303;  */

void FUN_100fe12d4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100fe07d0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100fe1304; end: 100fe1383;  */

void FUN_100fe1304(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fe1384;
  plVar5[0xe] = lVar3;
  plVar5[0xf] = lVar7;
  plVar5[0xc] = lVar2;
  plVar5[0xd] = lVar1;
  plVar5[0xb] = lVar6;
  lVar6 = 0x112d52e80;
  func_0x0001000285a8(0x112d52e80,&UNK_10d919798);
  plVar5[0x10] = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  plVar5[0x11] = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fe08b4,0,0);
  return;
}



/* Entry: 100fe1384; end: 100fe13db;  */

void FUN_100fe1384(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe13bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe13dc; end: 100fe13fb;  */

void FUN_100fe13dc(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 100fe13fc; end: 100fe142b;  */

/* WARNING: Possible PIC construction at 0x000100fe1414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fe1418) */

void FUN_100fe13fc(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 100fe142c; end: 100fe1443;  */

void FUN_100fe142c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100fdddf0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100fe1444; end: 100fe14a7;  */

void FUN_100fe1444(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fe14a8; end: 100fe19fb;  */

void FUN_100fe14a8(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long alStack_f0 [2];
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d52f50;
  lStack_d0 = param_1;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  lVar10 = *(long *)(lVar3 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar11 + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&lStack_e0 - extraout_x8;
  lVar4 = 0x112d52f58;
  func_0x0001000285a8(0x112d52f58,&UNK_10d919838);
  lVar12 = *(long *)(lVar4 + -8);
  lVar14 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar16 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar13 - extraout_x12;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c5fd2c(lVar3);
  }
  else {
    func_0x000100fe172c(lVar9);
    puVar5 = &UNK_110374300;
    func_0x000107c613fc(&UNK_110374300,0x18,7);
    puStack_d8 = puVar5;
    func_0x000107c61644(puVar5 + 0x10,param_2);
    FUN_100fe27a4(param_2 + 0x10,auStack_a0);
    FUN_100fe27e8(auStack_a0,auStack_c8);
    (**(code **)(lVar12 + 0x10))(lVar13,lVar9,lVar4);
    (**(code **)(lVar10 + 0x10))(lVar16,lStack_d0,lVar3);
    bVar1 = *(byte *)(lVar12 + 0x50);
    uVar7 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    uVar15 = lVar14 + uVar7 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(lVar10 + 0x50);
    uVar8 = bVar2 + uVar15 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar5 = &UNK_110374328;
    lStack_e0 = lVar4;
    lStack_d0 = lVar9;
    func_0x000107c613fc(&UNK_110374328,uVar8 + lVar11,bVar1 | bVar2 | 7);
    FUN_100fe27e8(auStack_c8,puVar5 + 0x10);
    lVar4 = lStack_e0;
    (**(code **)(lVar12 + 0x20))(puVar5 + uVar7,lVar13,lStack_e0);
    *(undefined **)(puVar5 + uVar15) = puStack_d8;
    (**(code **)(lVar10 + 0x20))(puVar5 + uVar8,lVar16,lVar3);
    *(undefined **)(lVar9 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar6 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d919848,puVar5);
    func_0x000107c61574(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar6);
    (**(code **)(lVar12 + 8))(lStack_d0,lVar4);
  }
  return;
}



/* Entry: 100fe19fc; end: 100fe1ad7;  */

void FUN_100fe19fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x548) = param_5;
  *(undefined8 *)(unaff_x22 + 0x540) = param_4;
  *(undefined8 *)(unaff_x22 + 0x538) = param_3;
  *(undefined8 *)(unaff_x22 + 0x530) = param_2;
  lVar2 = 0x112d52f60;
  func_0x0001000285a8(0x112d52f60,&UNK_10d919850);
  *(long *)(unaff_x22 + 0x550) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x558) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x560) = uVar1;
  lVar2 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  *(long *)(unaff_x22 + 0x568) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x570) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x578) = uVar1;
  lVar2 = 0x112d52f70;
  func_0x0001000285a8(0x112d52f70,&UNK_10d919860);
  *(long *)(unaff_x22 + 0x580) = lVar2;
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x588) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe1ad8,0,0);
  return;
}



/* Entry: 100fe1ad8; end: 100fe1c77;  */

void FUN_100fe1ad8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x588);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x580);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x578);
  lVar10 = *(long *)(unaff_x22 + 0x570);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x568);
  lVar7 = *(long *)(unaff_x22 + 0x540);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x538);
  lVar2 = *(long *)(unaff_x22 + 0x530);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar3);
  (**(code **)(lVar1 + 8))(uVar11,uVar3,lVar1);
  uVar3 = 0x112d52f58;
  func_0x0001000285a8(0x112d52f58,&UNK_10d919838);
  uVar4 = 0x112d52f78;
  FUN_100fe290c(0x112d52f78,0x112d52f68,&UNK_10d919a00);
  uVar5 = 0x112d52f80;
  FUN_100fe290c(0x112d52f80,0x112d52f58,&UNK_10d919838);
  func_0x00010410b100(uVar9,uVar11,uVar13,uVar12,uVar3,uVar4,uVar5);
  (**(code **)(lVar10 + 8))(uVar11,uVar12);
  func_0x00010410b214();
  *(undefined8 *)(unaff_x22 + 0x590) = uVar8;
  FUN_100fe2968(uVar9,0x112d52f70,&UNK_10d919860);
  *(undefined8 *)(unaff_x22 + 0x528) = uVar8;
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x510,0,0);
  plVar6 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x598) = plVar6;
  func_0x0001000285a8(0x112d52f88,&UNK_10d919868);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100fe1c78;
  plVar6[2] = unaff_x22 + 0x10;
  plVar6[3] = unaff_x22 + 0x528;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
  return;
}



/* Entry: 100fe1c78; end: 100fe1cd7;  */

void FUN_100fe1c78(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x598));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe1cd8,0,0);
  return;
}



/* Entry: 100fe1cd8; end: 100fe2063;  */

void FUN_100fe1cd8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x40);
  puVar1 = (undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined1 *)(unaff_x22 + 0x230) = *(undefined1 *)(unaff_x22 + 0xc0);
  *(undefined1 *)(unaff_x22 + 0x178) = *(undefined1 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x40);
  iVar3 = (int)unaff_x22 + 0x180;
  FUN_100fe2950();
  if (iVar3 == 1) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x590));
  }
  else {
    uVar4 = *(long *)(unaff_x22 + 0x540) + 0x10;
    func_0x000107c61648();
    if (uVar4 == 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x590));
      FUN_100fe2968(unaff_x22 + 0x128,0x112d52f90,&UNK_10d919870);
    }
    else {
      uVar5 = uVar4;
      func_0x000107c5fd5c();
      if ((uVar5 & 1) == 0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x560);
        lVar11 = *(long *)(unaff_x22 + 0x558);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x550);
        if (*(long *)(unaff_x22 + 0x130) == 0) {
          *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0xf0);
          *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0xe8);
          *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x100);
          *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0xf8);
          *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x110);
          *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x108);
          *(undefined8 *)(unaff_x22 + 0x289) = *(undefined8 *)(unaff_x22 + 0x119);
          *(undefined8 *)(unaff_x22 + 0x281) = *(undefined8 *)(unaff_x22 + 0x111);
          *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0xd0);
          *(undefined8 *)(unaff_x22 + 0x238) = *puVar1;
          *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0xe0);
          *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0xd8);
          func_0x000100fe29dc(puVar1,unaff_x22 + 0x298);
          uVar10 = 0x112d52f50;
          func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
          func_0x000107c5fd28(uVar8,(undefined8 *)(unaff_x22 + 0x238),uVar10);
          func_0x000107c61574(uVar4);
          func_0x000100fe29a8(puVar1);
        }
        else {
          puVar6 = (undefined8 *)(unaff_x22 + 0x358);
          puVar2 = (undefined8 *)(unaff_x22 + 0x128);
          *(undefined1 *)(unaff_x22 + 0x3a8) = *(undefined1 *)(unaff_x22 + 0x178);
          *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x150);
          *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x148);
          *(undefined8 *)(unaff_x22 + 0x390) = *(undefined8 *)(unaff_x22 + 0x160);
          *(undefined8 *)(unaff_x22 + 0x388) = *(undefined8 *)(unaff_x22 + 0x158);
          *(undefined8 *)(unaff_x22 + 0x3a0) = *(undefined8 *)(unaff_x22 + 0x170);
          *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(unaff_x22 + 0x168);
          *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x130);
          *puVar6 = *puVar2;
          *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x140);
          *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0x138);
          uVar10 = *(undefined8 *)(unaff_x22 + 200);
          *(undefined1 *)(unaff_x22 + 0x458) = *(undefined1 *)(unaff_x22 + 0x178);
          *(undefined8 *)(unaff_x22 + 0x410) = *(undefined8 *)(unaff_x22 + 0x130);
          *(undefined8 *)(unaff_x22 + 0x408) = *puVar2;
          *(undefined8 *)(unaff_x22 + 0x420) = *(undefined8 *)(unaff_x22 + 0x140);
          *(undefined8 *)(unaff_x22 + 0x418) = *(undefined8 *)(unaff_x22 + 0x138);
          *(undefined8 *)(unaff_x22 + 0x430) = *(undefined8 *)(unaff_x22 + 0x150);
          *(undefined8 *)(unaff_x22 + 0x428) = *(undefined8 *)(unaff_x22 + 0x148);
          *(undefined8 *)(unaff_x22 + 0x440) = *(undefined8 *)(unaff_x22 + 0x160);
          *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x158);
          *(undefined8 *)(unaff_x22 + 0x450) = *(undefined8 *)(unaff_x22 + 0x170);
          *(undefined8 *)(unaff_x22 + 0x448) = *(undefined8 *)(unaff_x22 + 0x168);
          func_0x000100fe2a18((undefined8 *)(unaff_x22 + 0x408),unaff_x22 + 0x460);
          FUN_100fe20c4(puVar6,uVar10);
          *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x150);
          *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x148);
          *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x160);
          *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x158);
          *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x170);
          *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x168);
          *(undefined1 *)(unaff_x22 + 0x350) = *(undefined1 *)(unaff_x22 + 0x178);
          *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 0x130);
          *(undefined8 *)(unaff_x22 + 0x300) = *puVar2;
          *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x140);
          *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x138);
          *(undefined8 **)(unaff_x22 + 0x2f8) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x3b8) = *(undefined8 *)(unaff_x22 + 0x130);
          *(undefined8 *)(unaff_x22 + 0x3b0) = *puVar2;
          *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x140);
          *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x138);
          *(undefined8 *)(unaff_x22 + 1000) = *(undefined8 *)(unaff_x22 + 0x160);
          *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x158);
          *(undefined8 *)(unaff_x22 + 0x3f8) = *(undefined8 *)(unaff_x22 + 0x170);
          *(undefined8 *)(unaff_x22 + 0x3f0) = *(undefined8 *)(unaff_x22 + 0x168);
          *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x150);
          *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x148);
          *(undefined1 *)(unaff_x22 + 0x400) = *(undefined1 *)(unaff_x22 + 0x178);
          func_0x000100fe2a18(unaff_x22 + 0x3b0,unaff_x22 + 0x4b8);
          uVar10 = 0x112d52f50;
          func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
          func_0x000107c5fd28(uVar8,unaff_x22 + 0x2f8,uVar10);
          func_0x000107c61574(uVar4);
          FUN_100fe2968(puVar2,0x112d52f90,&UNK_10d919870);
          func_0x000100fe29a8(puVar1);
          FUN_100fe2968(puVar2,0x112d52f90,&UNK_10d919870);
        }
        (**(code **)(lVar11 + 8))(uVar8,uVar9);
        plVar7 = (long *)0x30;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x5a0) = plVar7;
        func_0x0001000285a8(0x112d52f88,&UNK_10d919868);
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100fe2064;
        plVar7[2] = unaff_x22 + 0x10;
        plVar7[3] = unaff_x22 + 0x528;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
        return;
      }
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x590));
      FUN_100fe2968(unaff_x22 + 0x128,0x112d52f90,&UNK_10d919870);
      func_0x000107c61574(uVar4);
    }
    func_0x000100fe29a8(puVar1);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x588);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x578);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x560);
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  func_0x000107c5fd2c();
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100fe1e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fe2064; end: 100fe20c3;  */

void FUN_100fe2064(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x5a0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe1cd8,0,0);
  return;
}



/* Entry: 100fe20c4; end: 100fe23f7;  */

undefined * FUN_100fe20c4(ulong *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined *apuStack_180 [11];
  undefined *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 uStack_70;
  
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  uStack_70 = (undefined1)param_1[10];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  uVar7 = *(ulong *)(param_2 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      lVar5 = 0;
      if (uVar8 <= uVar7) {
        lVar5 = uVar7 - uVar8;
      }
      puVar10 = (ulong *)(param_2 + 0x20 + uVar8 * 0x58);
      uVar8 = uVar8 + 1;
      while( true ) {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fe23f0);
          (*pcVar2)();
        }
        uStack_f8 = puVar10[5];
        uStack_100 = puVar10[4];
        uStack_e8 = puVar10[7];
        uStack_f0 = puVar10[6];
        uStack_d8 = puVar10[9];
        uStack_e0 = puVar10[8];
        uStack_d0 = (undefined1)puVar10[10];
        uStack_118 = puVar10[1];
        uVar11 = *puVar10;
        uStack_108 = puVar10[3];
        uStack_110 = puVar10[2];
        uStack_120 = uVar11;
        if (((uVar11 != *param_1) || (uStack_118 != param_1[1])) &&
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) break;
        lVar5 = lVar5 + -1;
        puVar10 = puVar10 + 0xb;
        uVar8 = uVar8 + 1;
        if (uVar8 - uVar7 == 1) goto LAB_100fe2254;
      }
      func_0x000100fe2a18(&uStack_120,apuStack_180);
      puVar3 = puVar4;
      func_0x000107c61558();
      puStack_128 = puVar4;
      if (((ulong)puVar3 & 1) == 0) {
        FUN_100fe2d0c(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar11 = *(ulong *)(puStack_128 + 0x10);
      if (*(ulong *)(puStack_128 + 0x18) >> 1 <= uVar11) {
        FUN_100fe2d0c(1 < *(ulong *)(puStack_128 + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(puStack_128 + 0x10) = uVar11 + 1;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x28) = uStack_118;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x20) = uStack_120;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x38) = uStack_108;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x30) = uStack_110;
      puStack_128[uVar11 * 0x58 + 0x70] = uStack_d0;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x58) = uStack_e8;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x50) = uStack_f0;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x68) = uStack_d8;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x60) = uStack_e0;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x48) = uStack_f8;
      *(ulong *)(puStack_128 + uVar11 * 0x58 + 0x40) = uStack_100;
      puVar4 = puStack_128;
    } while (uVar8 != uVar7);
  }
LAB_100fe2254:
  lVar5 = *(long *)(puVar4 + 0x10);
  apuStack_180[0] = puVar4;
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ulong *)(unaff_x20 + 0x48);
    lVar1 = *(long *)(unaff_x20 + 0x50);
    plVar9 = (long *)(puVar4 + 0x28);
    lVar6 = 1;
    do {
      uVar8 = plVar9[-1];
      if ((uVar8 == uVar7 && *plVar9 == lVar1) ||
         (func_0x000107c605b8(uVar8,*plVar9,uVar7,lVar1,0), (uVar8 & 1) != 0)) {
        if (lVar5 < lVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fe23f4);
          (*pcVar2)();
        }
        uVar7 = *(ulong *)(puVar4 + 0x10);
        if ((long)uVar7 < lVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fe23f8);
          (*pcVar2)();
        }
        func_0x000100fe2a18(param_1,&uStack_120);
        puVar3 = puVar4;
        func_0x000107c61558();
        if (((int)puVar3 == 0) || (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7)) {
          FUN_100fe2d54();
          apuStack_180[0] = puVar3;
        }
        goto LAB_100fe23b8;
      }
      plVar9 = plVar9 + 0xb;
      lVar6 = lVar6 + 1;
    } while (lVar6 - lVar5 != 1);
    uVar7 = *(ulong *)(puVar4 + 0x10);
  }
  func_0x000100fe2a18(param_1,&uStack_120);
  puVar3 = puVar4;
  func_0x000107c61558();
  if (((int)puVar3 == 0) || (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7)) {
    FUN_100fe2d54();
    puVar4 = puVar3;
  }
  lVar6 = 0;
  apuStack_180[0] = puVar4;
LAB_100fe23b8:
  puVar4 = apuStack_180[0];
  uStack_120 = uStack_c0;
  uStack_118 = uStack_b8;
  uStack_110 = uStack_b0;
  uStack_108 = uStack_a8;
  uStack_100 = uStack_a0;
  uStack_f8 = uStack_98;
  uStack_f0 = uStack_90;
  uStack_e8 = uStack_88;
  uStack_e0 = uStack_80;
  uStack_d8 = uStack_78;
  uStack_d0 = uStack_70;
  func_0x000100fe3000(lVar6,lVar6,1,&uStack_120);
  FUN_100fe3114(param_1);
  return puVar4;
}



/* Entry: 100fe23f8; end: 100fe25b7;  */

void FUN_100fe23f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  puVar9 = (undefined *)*param_1;
  cVar1 = (char)param_1[1];
  if (cVar1 == '\x01') {
    iVar3 = 2;
    puStack_90 = puVar9;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_90,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else if (puVar9 != (undefined *)0x0) {
    puVar5 = &UNK_110374378;
    func_0x000107c613fc(&UNK_110374378,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = param_2;
    *(undefined8 *)(puVar5 + 0x18) = param_3;
    puVar6 = &UNK_1103743a0;
    func_0x000107c613fc(&UNK_1103743a0,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_100fe31cc;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_100fe31d4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100fe2610;
    puStack_78 = &UNK_1103743b8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000100fe3210(puVar9,cVar1);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar6);
    pcStack_70 = FUN_100fe2650;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100fe2654;
    puStack_78 = &UNK_1103743e0;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c744(puVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000100fe3224(puVar9,cVar1);
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 100fe25b8; end: 100fe260f;  */

void FUN_100fe25b8(void)

{
  undefined8 in_x3;
  undefined1 auStack_78 [88];
  
  FUN_100ff3780(auStack_78,in_x3);
  func_0x000100087c34(auStack_78);
  FUN_100fe2968(auStack_78,0x112d52f90,&UNK_10d919870);
  return;
}



/* Entry: 100fe2610; end: 100fe264f;  */

void FUN_100fe2610(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100fe2650; end: 100fe2653;  */

void FUN_100fe2650(void)

{
  return;
}



/* Entry: 100fe2654; end: 100fe279b;  */

void FUN_100fe2654(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,uVar2,param_3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100fe279c; end: 100fe27a3;  */

void FUN_100fe279c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long alStack_f0 [2];
  long lStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [40];
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d52f50;
  lStack_d0 = param_1;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  lVar11 = *(long *)(lVar3 + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&lStack_e0 - extraout_x8;
  lVar4 = 0x112d52f58;
  func_0x0001000285a8(0x112d52f58,&UNK_10d919838);
  lVar13 = *(long *)(lVar4 + -8);
  lVar15 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar17 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    func_0x000107c5fd2c(lVar3);
  }
  else {
    func_0x000100fe172c(lVar10);
    puVar6 = &UNK_110374300;
    func_0x000107c613fc(&UNK_110374300,0x18,7);
    puStack_d8 = puVar6;
    func_0x000107c61644(puVar6 + 0x10,lVar5);
    FUN_100fe27a4(lVar5 + 0x10,auStack_a0);
    FUN_100fe27e8(auStack_a0,auStack_c8);
    (**(code **)(lVar13 + 0x10))(lVar14,lVar10,lVar4);
    (**(code **)(lVar11 + 0x10))(lVar17,lStack_d0,lVar3);
    bVar1 = *(byte *)(lVar13 + 0x50);
    uVar8 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    uVar16 = lVar15 + uVar8 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(lVar11 + 0x50);
    uVar9 = bVar2 + uVar16 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110374328;
    lStack_e0 = lVar4;
    lStack_d0 = lVar10;
    func_0x000107c613fc(&UNK_110374328,uVar9 + lVar12,bVar1 | bVar2 | 7);
    FUN_100fe27e8(auStack_c8,puVar6 + 0x10);
    lVar4 = lStack_e0;
    (**(code **)(lVar13 + 0x20))(puVar6 + uVar8,lVar14,lStack_e0);
    *(undefined **)(puVar6 + uVar16) = puStack_d8;
    (**(code **)(lVar11 + 0x20))(puVar6 + uVar9,lVar17,lVar3);
    *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar7 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d919848,puVar6);
    func_0x000107c61574(lVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar7);
    (**(code **)(lVar13 + 8))(lStack_d0,lVar4);
  }
  return;
}



/* Entry: 100fe27a4; end: 100fe27e7;  */

long FUN_100fe27a4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fe27e8; end: 100fe27ff;  */

undefined8 * FUN_100fe27e8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 100fe2800; end: 100fe28cf;  */

void FUN_100fe2800(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  
  lVar4 = 0x112d52f58;
  func_0x0001000285a8(0x112d52f58,&UNK_10d919838);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar5 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  lVar4 = 0x112d52f50;
  func_0x0001000285a8(0x112d52f50,&UNK_10d919830);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + uVar3);
  plVar1 = (long *)0x5b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fe28d0;
  plVar1[0xa9] = unaff_x20 + (uVar3 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
  plVar1[0xa8] = lVar4;
  plVar1[0xa7] = unaff_x20 + uVar5;
  plVar1[0xa6] = unaff_x20 + 0x10;
  lVar4 = 0x112d52f60;
  func_0x0001000285a8(0x112d52f60,&UNK_10d919850);
  plVar1[0xaa] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0xab] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xac] = uVar2;
  lVar4 = 0x112d52f68;
  func_0x0001000285a8(0x112d52f68,&UNK_10d919a00);
  plVar1[0xad] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar1[0xae] = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xaf] = uVar2;
  lVar4 = 0x112d52f70;
  func_0x0001000285a8(0x112d52f70,&UNK_10d919860);
  plVar1[0xb0] = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xb1] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fe1ad8,0,0);
  return;
}



/* Entry: 100fe28d0; end: 100fe290b;  */

void FUN_100fe28d0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fe2908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fe290c; end: 100fe294f;  */

void FUN_100fe290c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sScSyxGScisMc_11034fdb0;
    func_0x000107c61520(PTR___sScSyxGScisMc_11034fdb0,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 100fe2950; end: 100fe2967;  */

int FUN_100fe2950(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100fe2968; end: 100fe2a53;  */

undefined8 FUN_100fe2968(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100fe2a54; end: 100fe2a5f;  */

undefined * FUN_100fe2a54(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fe2e80);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d52fa0;
    func_0x0001000285a8(0x112d52fa0,&UNK_10d919880);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3 + 0x20,param_4 + 0x20,uVar6,&UNK_110376178);
  }
  else {
    if (puVar3 != param_4 || param_4 + 0x20 + uVar6 * 0x58 <= puVar3 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar1)(param_4);
  return puVar3;
}



/* Entry: 100fe2a60; end: 100fe2b87;  */

ulong FUN_100fe2a60(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe2b88);
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
  FUN_100fe2b94(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe2b84);
      (*pcVar1)();
    }
    FUN_100fe2c14(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100fe2b88; end: 100fe2b93;  */

undefined * FUN_100fe2b88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar3 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar8 = param_2;
  if ((param_3 & 1) != 0) {
    uVar8 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar8 < (long)param_2) {
      if ((long)(uVar8 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe3000);
        (*pcVar4)();
      }
      uVar8 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar8 <= (long)param_2) {
        uVar8 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar8 <= (long)uVar10) {
    uVar8 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    puVar5 = (undefined *)0x112d52fc0;
    func_0x0001000285a8(0x112d52fc0,&UNK_10d91ac80);
    lVar6 = 0;
    FUN_10100b3d0();
    lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
    uVar9 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    uVar12 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar5,uVar12 + lVar11 * uVar8,uVar9 | 7);
    puVar7 = puVar5;
    func_0x000107c610a4();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe2ff8);
      (*pcVar4)();
    }
    lVar6 = (long)puVar7 - uVar12;
    if (lVar6 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fe2ffc);
      (*pcVar4)();
    }
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar6 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar2 << 1;
  }
  lVar6 = 0;
  FUN_10100b3d0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar7 = puVar5 + uVar8;
  puVar1 = param_4 + uVar8;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar7,puVar1,uVar10,lVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar1 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * uVar10 <= puVar7))
    {
      func_0x000107c61414(puVar7,puVar1,uVar10);
    }
    else if (puVar5 != param_4) {
      func_0x000107c61410(puVar7,puVar1,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar3)(param_4);
  return puVar5;
}



/* Entry: 100fe2b94; end: 100fe2c13;  */

undefined * FUN_100fe2b94(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x000100fe4188();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100fe2c14; end: 100fe2d0b;  */

long FUN_100fe2c14(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe2d08);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe2d0c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100c70ba8(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100c70ba8(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe2d04);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100fe2d0c; end: 100fe2d53;  */

void FUN_100fe2d0c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100fe2d54();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100fe2d54; end: 100fe2e7f;  */

undefined *
FUN_100fe2d54(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100fe2e80);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112d52fa0;
    func_0x0001000285a8(0x112d52fa0,&UNK_10d919880);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x58) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_110376178);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x58 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar2;
}



/* Entry: 100fe2e80; end: 100fe3113;  */

undefined *
FUN_100fe2e80(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe3000);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d52fc0;
    func_0x0001000285a8(0x112d52fc0,&UNK_10d91ac80);
    lVar5 = 0;
    FUN_10100b3d0();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe2ff8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe2ffc);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_10100b3d0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar4;
}



/* Entry: 100fe3114; end: 100fe3197;  */

undefined8 FUN_100fe3114(undefined8 param_1)

{
  FUN_101006914();
  return param_1;
}



/* Entry: 100fe3198; end: 100fe319f;  */

void FUN_100fe3198(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  puVar10 = (undefined *)*param_1;
  cVar2 = (char)param_1[1];
  if (cVar2 == '\x01') {
    iVar4 = 2;
    puStack_90 = puVar10;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar4 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&puStack_90,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else if (puVar10 != (undefined *)0x0) {
    puVar6 = &UNK_110374378;
    func_0x000107c613fc(&UNK_110374378,0x20,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar1;
    puVar7 = &UNK_1103743a0;
    func_0x000107c613fc(&UNK_1103743a0,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_100fe31cc;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_100fe31d4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100fe2610;
    puStack_78 = &UNK_1103743b8;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000100fe3210(puVar10,cVar2);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(puVar7);
    pcStack_70 = FUN_100fe2650;
    puStack_68 = (undefined *)0x0;
    puStack_90 = puVar3;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_100fe2654;
    puStack_78 = &UNK_1103743e0;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c744(puVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000100fe3224(puVar10,cVar2);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 100fe31a0; end: 100fe31cb;  */

void FUN_100fe31a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fe31cc; end: 100fe31d3;  */

void FUN_100fe31cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_78 [88];
  
  FUN_100ff3780(auStack_78,*(undefined8 *)(unaff_x20 + 0x18),param_2,
                *(undefined8 *)(unaff_x20 + 0x10));
  func_0x000100087c34(auStack_78);
  FUN_100fe2968(auStack_78,0x112d52f90,&UNK_10d919870);
  return;
}



/* Entry: 100fe31d4; end: 100fe31f3;  */

void FUN_100fe31d4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100fe31f4; end: 100fe323f;  */

void FUN_100fe31f4(long param_1,long param_2)

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



/* Entry: 100fe3240; end: 100fe327f;  */

void FUN_100fe3240(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61174(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100fe327c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}



/* Entry: 100fe3280; end: 100fe3347;  */

void FUN_100fe3280(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_6;
  *(int **)(unaff_x22 + 0x10) = param_4;
  if (param_4 != (int *)0x0) {
    iVar1 = *param_4;
    plVar2 = (long *)(ulong)(uint)param_4[1];
    func_0x000107c6157c(param_5);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fe3348;
                    /* WARNING: Could not recover jumptable at 0x000100fe3310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)param_4 + (long)iVar1))(param_1,param_2,param_3);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61174(param_6);
                    /* WARNING: Could not recover jumptable at 0x000100fe3344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_6);
  return;
}



/* Entry: 100fe3348; end: 100fe33e7;  */

void FUN_100fe3348(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fe3398,0,0);
  return;
}



/* Entry: 100fe33e8; end: 100fe33f7;  */

void FUN_100fe33e8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 100fe33f8; end: 100fe3453;  */

long FUN_100fe33f8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_100fe3454();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar1;
    func_0x000107c615f0();
    FUN_100fe3f08(uVar3);
  }
  func_0x000100fe3f18(lVar2);
  return lVar1;
}



/* Entry: 100fe3454; end: 100fe35b3;  */

long FUN_100fe3454(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      func_0x000107c615e8(lStack_48);
    }
    else {
      lVar1 = 0x112d53088;
      FUN_100fe41ac(0x112d53088,&PTR_PTR_1126b6868,0x112d53090,&UNK_10d919920);
      func_0x000107c613fc();
      *(undefined8 *)(lVar1 + 0x18) = 3;
      *(undefined8 *)(lVar1 + 0x10) = 1;
      *(long *)(lVar1 + 0x20) = lVar4;
      uVar2 = 0;
      func_0x000100fe46c4(0,0x112d53088,&PTR_PTR_1126b6868);
      func_0x000107c61174(lVar4);
      func_0x000107c61174();
      lVar3 = lVar1;
      func_0x000107c5fc48(lVar1,uVar2);
      func_0x000107c61574(lVar1);
      lVar1 = lStack_48;
      func_0x000107c4cfd0();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        lVar3 = lVar1;
        func_0x000107c5c734(lVar1);
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lStack_48);
        func_0x000107c61170(lVar4);
        return lVar3;
      }
      func_0x000107c615e8(lStack_48);
      func_0x000107c61170(lVar4);
    }
  }
  return 0;
}



/* Entry: 100fe35b4; end: 100fe3743;  */

void FUN_100fe35b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_58;
  
  uVar10 = *unaff_x20;
  FUN_100fe33f8();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112d53098,&UNK_10d919930);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112d530a0,&UNK_10d9db4c0);
    lVar2 = param_1;
    func_0x000107c4cd74(param_1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    pcVar4 = FUN_100fe3744;
    func_0x00010487de38(FUN_100fe3744,0);
    func_0x000107c61574(lVar3);
    uVar5 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    pcVar6 = FUN_100fe3bd4;
    func_0x0001000d5158(FUN_100fe3bd4,0,uVar5);
    func_0x000107c61574(pcVar4);
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar7 = &puStack_58;
    func_0x0001006c71a4(ppuVar7);
    func_0x000107c61574(pcVar6);
    uVar9 = unaff_x20[6];
    uVar5 = unaff_x20[3];
    uVar1 = unaff_x20[4];
    puVar8 = &UNK_110374430;
    func_0x000107c613fc(&UNK_110374430,0x30,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar9;
    *(undefined8 *)(puVar8 + 0x18) = uVar5;
    *(undefined8 *)(puVar8 + 0x20) = uVar1;
    *(undefined8 *)(puVar8 + 0x28) = uVar10;
    func_0x000107c6157c(uVar9);
    func_0x000107c61434(uVar1);
    func_0x0001000bfde0(FUN_100fe417c,puVar8,&UNK_110376078);
    func_0x000107c615e8(param_1);
    func_0x000107c61574(ppuVar7);
    func_0x000107c61574(puVar8);
  }
  return;
}



/* Entry: 100fe3744; end: 100fe384f;  */

uint FUN_100fe3744(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  lVar4 = *param_2;
  func_0x000107c3d128();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000100fe46c4(0,0x112d530b0,&PTR_PTR_1126d8840);
    lVar3 = lVar1;
    func_0x000107c5fc54(lVar1,uVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c3d128();
  func_0x000107c61180();
  if (lVar4 == 0) {
    if (lVar3 == 0) {
LAB_100fe3838:
      uVar5 = 1;
      goto LAB_100fe383c;
    }
LAB_100fe3818:
    uVar5 = 0;
    lVar1 = lVar3;
  }
  else {
    uVar2 = 0;
    func_0x000100fe46c4(0,0x112d530b0,&PTR_PTR_1126d8840);
    lVar1 = lVar4;
    func_0x000107c5fc54(lVar4,uVar2);
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) {
      if (lVar1 == 0) goto LAB_100fe3838;
      uVar5 = 0;
    }
    else {
      if (lVar1 == 0) goto LAB_100fe3818;
      lVar4 = lVar3;
      FUN_100fe3f28(lVar3,lVar1);
      uVar5 = (uint)lVar4;
      func_0x000107c6142c(lVar3);
    }
  }
  func_0x000107c6142c(lVar1);
LAB_100fe383c:
  return uVar5 & 1;
}



/* Entry: 100fe3850; end: 100fe3bcf;  */

undefined * FUN_100fe3850(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_c8;
  ulong uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  func_0x000107c3d128();
  func_0x000107c61180();
  if (param_1 == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar4 = 0;
  func_0x000100fe46c4(0,0x112d530b0,&PTR_PTR_1126d8840);
  uVar5 = param_1;
  func_0x000107c5fc54(param_1,uVar4);
  func_0x000107c61170(param_1);
  if (uVar5 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar13 = uVar5;
    }
    func_0x000107c60480();
  }
  puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uStack_b0 = uVar5 & 0xffffffffffffff8;
    uVar14 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_b0 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe3b70);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar14 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar14;
        FUN_100ff3f74(uVar14,uVar5);
      }
      puVar11 = PTR___NSConcreteStackBlock_11034bd00;
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe3b6c);
        (*pcVar3)();
      }
      puStack_80 = (undefined *)0x0;
      lStack_78 = 0;
      pcStack_88 = FUN_100fe3bd0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100fe4704;
      puStack_90 = &UNK_110374470;
      ppuVar7 = &puStack_a8;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_80);
      puVar10 = &UNK_1103744a8;
      func_0x000107c613fc(&UNK_1103744a8,0x18,7);
      *(long **)(puVar10 + 0x10) = &lStack_78;
      puVar8 = &UNK_1103744d0;
      func_0x000107c613fc(&UNK_1103744d0,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x100fe4678;
      *(undefined **)(puVar8 + 0x18) = puVar10;
      pcStack_88 = (code *)0x100fe46a4;
      puStack_a8 = puVar11;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100fe4704;
      puStack_90 = &UNK_1103744e8;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar11 = puStack_80;
      func_0x000107c6157c(puVar8);
      func_0x000107c61574(puVar11);
      func_0x000107c4c5c4(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar7);
      uVar6 = 0;
      func_0x000107c61544(0,"",0x82,0x41,0x2b,1);
      func_0x000107c61574(puVar10);
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe3b74);
        (*pcVar3)();
      }
      puVar11 = puVar8;
      func_0x000107c61544(puVar8,"",0x82,0x42,0x1e,1);
      func_0x000107c61574(puVar8);
      lVar2 = lStack_78;
      if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100fe3b78);
        (*pcVar3)();
      }
      if (lStack_78 != 0) {
        puVar11 = puStack_c8;
        func_0x000107c61550();
        if ((((int)puVar11 == 0) || ((long)puStack_c8 < 0)) ||
           (puVar11 = puStack_c8, ((ulong)puStack_c8 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_c8 >> 0x3e == 0) {
            puVar10 = *(undefined **)(((ulong)puStack_c8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar10 = (undefined *)((ulong)puStack_c8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_c8) {
              puVar10 = puStack_c8;
            }
            func_0x000107c60480(puVar10);
          }
          puVar11 = (undefined *)0x0;
          FUN_100fe2a60(0,puVar10 + 1,1,puStack_c8);
        }
        uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar12 + 0x10);
        puStack_c8 = puVar11;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar6) {
          puStack_c8 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          FUN_100fe2a60(puStack_c8,uVar6 + 1,1,puVar11);
          uVar12 = (ulong)puStack_c8 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
        *(long *)(uVar12 + uVar6 * 8 + 0x20) = lVar2;
      }
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar13);
  }
  func_0x000107c6142c(uVar5);
  return puStack_c8;
}



/* Entry: 100fe3bd0; end: 100fe3bd3;  */

void FUN_100fe3bd0(void)

{
  return;
}



/* Entry: 100fe3bd4; end: 100fe3bfb;  */

void FUN_100fe3bd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100fe3850();
  *param_1 = uVar1;
  return;
}



/* Entry: 100fe3bfc; end: 100fe3dc3;  */

void FUN_100fe3bfc(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar7 = *param_2;
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fe3d48);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar9;
        func_0x000100ff3f88(uVar9,uVar7);
      }
      uVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fe3d44);
        (*pcVar2)();
      }
      FUN_100ff3780(&uStack_b8,param_3);
      func_0x000107c61170(uVar3);
      puVar4 = puVar6;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_100fe2a54(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar3 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar3) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100fe2a54(puVar6,uVar3 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x28) = uStack_b0;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x20) = uStack_b8;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x38) = uStack_a0;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x30) = uStack_a8;
      puVar6[uVar3 * 0x58 + 0x70] = uStack_68;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x58) = uStack_80;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x50) = uStack_88;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x68) = uStack_70;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x60) = uStack_78;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x48) = uStack_90;
      *(undefined8 *)(puVar6 + uVar3 * 0x58 + 0x40) = uStack_98;
      uVar9 = uVar9 + 1;
    } while (uVar1 != uVar8);
  }
  FUN_100fe4454(param_4,param_5,puVar6);
  func_0x000107c6142c(puVar6);
  *param_1 = param_4;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 100fe3dc4; end: 100fe3e27;  */

void FUN_100fe3dc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100fe3f08(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fe3e28; end: 100fe3f07;  */

void FUN_100fe3e28(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0x112d52f48;
  func_0x0001000285a8(0x112d52f48,&UNK_10d9199e0);
  lVar4 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  FUN_100fe35b4();
  (**(code **)(lVar4 + 0x68))
            (puVar3,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar1);
  func_0x0001000d52ec(param_1,puVar3);
  func_0x000107c61574(lVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  FUN_100fe33f8();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c5bc1c();
    func_0x000107c615e8(puVar3);
  }
  return;
}


