/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10376b63c; end: 10376b73b;  */

void FUN_10376b63c(undefined1 *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long *plVar9;
  
  if (*(long *)(unaff_x22 + 0x98) != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x70);
    uVar6 = puVar5[7];
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
    uVar8 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
    FUN_103768fec(puVar5 + 1,unaff_x22 + 0x40);
    plVar9 = (long *)0x30;
    func_0x000107c6157c(uVar6);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar8);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_10376b73c;
    lVar1 = *(long *)(unaff_x22 + 0x78);
    plVar4 = (long *)0xd0;
    func_0x000107c615b8(0xd0,*(undefined8 *)(unaff_x22 + 0x80));
    plVar9[3] = (long)plVar4;
    *plVar4 = (long)plVar9;
    plVar4[1] = (long)FUN_10376c228;
    plVar4[0x12] = 0;
    plVar4[0x13] = lVar1;
    lVar1 = 0x112f90770;
    func_0x0001000285a8(0x112f90770,&UNK_10dc08ed8);
    plVar4[0x14] = lVar1;
    uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x15] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x16] = uVar3;
    lVar1 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
    uVar2 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x17] = uVar2;
    uVar3 = uVar3 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar4[0x18] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10376be1c,0,0);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_10376bccc();
  func_0x000107c613f8(&UNK_11068fa90,param_1,0,0);
  *param_1 = 2;
  func_0x000107c61654();
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010376b738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376b73c; end: 10376b7eb;  */

void FUN_10376b73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *unaff_x22;
  long lVar9;
  
  lVar7 = *unaff_x22;
  lVar9 = *unaff_x22;
  *(undefined8 *)(lVar7 + 200) = param_1;
  *(undefined8 *)(lVar7 + 0xd0) = param_2;
  *(undefined8 *)(lVar7 + 0xd8) = param_3;
  *(undefined8 *)(lVar7 + 0xe0) = param_4;
  *(long *)(lVar7 + 0xe8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar7 + 0xc0));
  if (unaff_x20 == 0) {
    plVar2 = (long *)0x30;
    func_0x000107c615b8();
    *(long **)(lVar7 + 0xf0) = plVar2;
    *plVar2 = lVar9;
    plVar2[1] = (long)FUN_10376b820;
    lVar9 = *(long *)(lVar7 + 0x78);
    plVar5 = (long *)0xd0;
    func_0x000107c615b8(0xd0,*(undefined8 *)(lVar7 + 0x80));
    plVar2[3] = (long)plVar5;
    *plVar5 = (long)plVar2;
    plVar5[1] = (long)FUN_10376c228;
    plVar5[0x12] = 2;
    plVar5[0x13] = lVar9;
    lVar7 = 0x112f90770;
    func_0x0001000285a8(0x112f90770,&UNK_10dc08ed8);
    plVar5[0x14] = lVar7;
    uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x15] = uVar3;
    uVar4 = uVar4 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x16] = uVar4;
    lVar7 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar4 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x17] = uVar3;
    uVar4 = uVar4 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar5[0x18] = uVar4;
    pcVar6 = FUN_10376be1c;
  }
  else {
    uVar1 = *(undefined8 *)(lVar7 + 0xb0);
    uVar8 = *(undefined8 *)(lVar7 + 0x88);
    func_0x000107c61574(*(undefined8 *)(lVar7 + 0xb8));
    func_0x000107c61574(uVar8);
    func_0x000107c61574(uVar1);
    pcVar6 = FUN_10376b8dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 10376b7ec; end: 10376b81f;  */

void FUN_10376b7ec(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010376b81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376b820; end: 10376b8db;  */

void FUN_10376b820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0xf8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0xf0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar5 + 0x100) = param_4;
    *(undefined8 *)(lVar5 + 0x108) = param_3;
    *(undefined8 *)(lVar5 + 0x110) = param_2;
    *(undefined8 *)(lVar5 + 0x118) = param_1;
    *(undefined8 *)(lVar5 + 0x120) = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x128) = *(undefined8 *)(lVar5 + 0x18);
    pcVar3 = FUN_10376b92c;
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 0xb0);
    uVar2 = *(undefined8 *)(lVar5 + 0xb8);
    uVar4 = *(undefined8 *)(lVar5 + 0x88);
    FUN_10376c380(*(undefined8 *)(lVar5 + 200),*(undefined8 *)(lVar5 + 0xd0),
                  *(undefined8 *)(lVar5 + 0xd8),*(undefined8 *)(lVar5 + 0xe0));
    func_0x000107c61574(uVar2);
    func_0x000107c61574(uVar4);
    func_0x000107c61574(uVar1);
    pcVar3 = FUN_10376ba0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 10376b8dc; end: 10376b92b;  */

void FUN_10376b8dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  FUN_10376c430(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010376b928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376b92c; end: 10376ba0b;  */

void FUN_10376b92c(void)

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
  long unaff_x22;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar14 = *(undefined8 **)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  auVar16 = *(undefined1 (*) [16])(unaff_x22 + 0x100);
  auVar15 = *(undefined1 (*) [16])(unaff_x22 + 0x110);
  func_0x000107c615e8();
  puVar14[3] = &UNK_11068f558;
  FUN_10376c3b0();
  puVar14[4] = uVar11;
  puVar12 = &UNK_11068f9d0;
  func_0x000107c613fc(&UNK_11068f9d0,0xb0,7);
  *puVar14 = puVar12;
  *(undefined8 *)(puVar12 + 0x10) = uVar2;
  *(undefined8 *)(puVar12 + 0x18) = uVar13;
  *(undefined8 *)(puVar12 + 0x20) = uVar5;
  FUN_10376c3f0(unaff_x22 + 0x40,puVar12 + 0x28);
  *(undefined8 *)(puVar12 + 0x58) = uVar8;
  *(undefined8 *)(puVar12 + 0x50) = uVar7;
  *(undefined8 *)(puVar12 + 0x68) = uVar10;
  *(undefined8 *)(puVar12 + 0x60) = uVar9;
  *(undefined8 *)(puVar12 + 0x70) = uVar4;
  *(undefined8 *)(puVar12 + 0x78) = uVar3;
  *(undefined8 *)(puVar12 + 0x80) = uVar1;
  *(undefined8 *)(puVar12 + 0x88) = uVar6;
  auVar15 = NEON_ext(auVar15,auVar15,8,1);
  auVar16 = NEON_ext(auVar16,auVar16,8,1);
  *(long *)(puVar12 + 0x98) = auVar15._8_8_;
  *(long *)(puVar12 + 0x90) = auVar15._0_8_;
  *(long *)(puVar12 + 0xa8) = auVar16._8_8_;
  *(long *)(puVar12 + 0xa0) = auVar16._0_8_;
                    /* WARNING: Could not recover jumptable at 0x00010376ba08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376ba0c; end: 10376ba5b;  */

void FUN_10376ba0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  FUN_10376c430(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010376ba58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376ba5c; end: 10376baa7;  */

void FUN_10376ba5c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x290;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10376baa8;
  plVar1[0x48] = unaff_x20;
  plVar1[0x47] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376ae84,0,0);
  return;
}



/* Entry: 10376baa8; end: 10376bb07;  */

void FUN_10376baa8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376bb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10376bb08; end: 10376bb17;  */

void FUN_10376bb08(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010376bb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10376bb18; end: 10376bccb;  */

void FUN_10376bb18(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  lVar3 = 0x112f90770;
  func_0x0001000285a8(0x112f90770,&UNK_10dc08ed8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = (undefined8 *)(puVar5 + -extraout_x12);
  plVar2 = (long *)(param_1 + 0x20);
  FUN_10376c498(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_4 != 0) {
    uVar7 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_4;
    func_0x000107c61174(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar7);
    return;
  }
  *puVar6 = param_2;
  iVar1 = *(int *)(lVar3 + 0x30);
  if (param_3 == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4((undefined1 *)((long)puVar6 + (long)iVar1),param_3);
    lVar3 = 0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))
            ((undefined1 *)((long)puVar6 + (long)iVar1),param_3 == 0,1);
  FUN_10376c450(puVar6,puVar5,0x112f90770,&UNK_10dc08ed8);
  uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0x40) + 0x28);
  func_0x000107c61174(param_2);
  FUN_10376c450(puVar5,uVar7,0x112f90770,&UNK_10dc08ed8);
  func_0x000107c61450(lVar4);
  return;
}



/* Entry: 10376bccc; end: 10376bd0b;  */

void FUN_10376bccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08fb4;
  func_0x000107c61520(&UNK_10dc08fb4,&UNK_11068fa90);
  puRam0000000112f90760 = puVar1;
  return;
}



/* Entry: 10376bd0c; end: 10376bd6f;  */

ulong FUN_10376bd0c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10376bd70; end: 10376be1b;  */

void FUN_10376bd70(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  lVar1 = 0x112f90770;
  func_0x0001000285a8(0x112f90770,&UNK_10dc08ed8);
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376be1c,0,0);
  return;
}



/* Entry: 10376be1c; end: 10376becb;  */

void FUN_10376be1c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10376becc;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar3 = 0x112f90778;
  func_0x0001000285a8(0x112f90778,&UNK_10dc08ee8);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10376bb18;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11068f9e8;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c507cc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10376becc; end: 10376bf23;  */

void FUN_10376becc(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10376bf24;
  }
  else {
    pcVar1 = FUN_10376c164;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10376bf24; end: 10376c163;  */

void FUN_10376bf24(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  plVar1 = *(long **)(unaff_x22 + 0xa8);
  lVar9 = *(long *)(unaff_x22 + 0xa0);
  FUN_10376c450(*(undefined8 *)(unaff_x22 + 0xb0),plVar1,0x112f90770,&UNK_10dc08ed8);
  lVar7 = *plVar1;
  FUN_10376c450((long)plVar1 + (long)*(int *)(lVar9 + 0x30),uVar10,0x112d36580,&UNK_10d9016d0);
  func_0x000100029394(uVar10,uVar8);
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar9 + -8);
  puVar6 = (undefined1 *)0x1;
  (**(code **)(lVar11 + 0x30))(uVar8,1,lVar9);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  if ((int)uVar8 == 1) {
    func_0x0001000293e4(uVar10);
    if (lVar7 == 0) {
      puVar6 = (undefined1 *)0x0;
      goto LAB_10376c058;
    }
LAB_10376c044:
    func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000107c61170(lVar7);
  }
  else {
    func_0x000107c5ed88();
    (**(code **)(lVar11 + 8))(uVar10,lVar9);
    if (lVar7 != 0) {
      if (puVar6 != (undefined1 *)0x0) {
        lVar9 = lVar7;
        func_0x000107c404a8();
        if ((int)lVar9 != 2) {
          uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
          func_0x000107c6142c();
          FUN_10376bccc();
          func_0x000107c613f8(&UNK_11068fa90,puVar6,0,0);
          *puVar6 = 1;
          func_0x000107c61654();
          func_0x000107c61170(lVar7);
          func_0x0001000293e4(uVar8);
          uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
          func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
          func_0x000107c615c0(uVar8);
          func_0x000107c615c0(uVar2);
          func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010376c15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        lVar9 = lVar7;
        func_0x000107c3e268();
        func_0x000107c61180();
        if (lVar9 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10376c164);
          (*pcVar5)();
        }
        func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0xc0));
        func_0x000107c61170(lVar7);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
        goto LAB_10376c078;
      }
      goto LAB_10376c044;
    }
LAB_10376c058:
    func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000107c6142c(puVar6);
  }
  uVar8 = 0;
  puVar6 = (undefined1 *)0x0;
  uVar10 = 0;
  lVar9 = 0;
LAB_10376c078:
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010376c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8,puVar6,uVar10,lVar9);
  return;
}



/* Entry: 10376c164; end: 10376c1cb;  */

void FUN_10376c164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  func_0x000107c61654();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010376c1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376c1cc; end: 10376c227;  */

void FUN_10376c1cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10376c228;
  plVar4[0x12] = param_1;
  plVar4[0x13] = unaff_x20;
  lVar1 = 0x112f90770;
  func_0x0001000285a8(0x112f90770,&UNK_10dc08ed8);
  plVar4[0x14] = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar3;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376be1c,0,0);
  return;
}



/* Entry: 10376c228; end: 10376c2c3;  */

void FUN_10376c228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10376c2c4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010376c2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10376c2c4; end: 10376c37f;  */

void FUN_10376c2c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x28;
  func_0x000107c6147c(lVar2,(undefined8 *)(unaff_x22 + 0x10),uVar1,&UNK_11068fa90,0);
  if ((int)lVar2 == 0 || *(char *)(unaff_x22 + 0x28) != '\x01') {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376c344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376c37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0);
  return;
}



/* Entry: 10376c380; end: 10376c3af;  */

void FUN_10376c380(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return;
  }
  return;
}



/* Entry: 10376c3b0; end: 10376c3ef;  */

void FUN_10376c3b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc08ba0;
  func_0x000107c61520(&DAT_10dc08ba0,&UNK_11068f558);
  puRam0000000112f90768 = puVar1;
  return;
}



/* Entry: 10376c3f0; end: 10376c417;  */

undefined8 * FUN_10376c3f0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10376c418; end: 10376c42f;  */

void FUN_10376c418(long param_1)

{
  FUN_10376c430(param_1 + 0x20);
  return;
}



/* Entry: 10376c430; end: 10376c44f;  */

void FUN_10376c430(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010376c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10376c450; end: 10376c497;  */

undefined8 FUN_10376c450(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10376c498; end: 10376c61f;  */

long * FUN_10376c498(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10376c620; end: 10376c643;  */

void FUN_10376c620(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10376bccc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10376c644; end: 10376c647;  */

void FUN_10376c644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08f8c;
  func_0x000107c61520(&UNK_10dc08f8c,&UNK_11068fa90);
  puRam0000000112f90780 = puVar1;
  return;
}



/* Entry: 10376c648; end: 10376c687;  */

void FUN_10376c648(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc08f8c;
  func_0x000107c61520(&UNK_10dc08f8c,&UNK_11068fa90);
  puRam0000000112f90780 = puVar1;
  return;
}



/* Entry: 10376c688; end: 10376c6af;  */

void FUN_10376c688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 200) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376c6b0,0,0);
  return;
}



/* Entry: 10376c6b0; end: 10376c78f;  */

void FUN_10376c6b0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10376c790;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_11068fb60;
  func_0x000107c613fc(&UNK_11068fb60,0x20,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(code **)(unaff_x22 + 0x70) = FUN_10376cad0;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_100f1c768;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11068fb78;
  func_0x000107c60bc4(puVar4);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615f0(uVar3);
  func_0x000107c61574(uVar5);
  func_0x000107c440d8(uVar3);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10376c790; end: 10376c7cf;  */

void FUN_10376c790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376c7d0,0,0);
  return;
}



/* Entry: 10376c7d0; end: 10376c9d3;  */

void FUN_10376c7d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  undefined8 *puVar11;
  
  puVar1 = *(undefined **)(unaff_x22 + 0x80);
  puVar4 = *(undefined **)(unaff_x22 + 0x88);
  puVar7 = puVar1;
  puVar8 = puVar4;
  if (puVar1 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126d1f00;
    func_0x000107c61168();
    func_0x000107c43be4();
    func_0x000107c61180();
    puVar8 = PTR_PTR_1126d1ef0;
    func_0x000107c61168();
    func_0x000107c43be4();
    func_0x000107c61180();
  }
  uVar6 = *(undefined4 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar11 = *(undefined8 **)(unaff_x22 + 0x90);
  FUN_103768fec(*(undefined8 *)(unaff_x22 + 0xc0),puVar11 + 3);
  puVar9 = &UNK_11068fbb0;
  func_0x000107c613fc(&UNK_11068fbb0,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  func_0x0001000285a8(0x112f907f8,&UNK_10dc0a050);
  func_0x000107c613fc();
  FUN_10376cd1c(puVar1,puVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0x10376cd10;
  func_0x0001000bdd8c(0x10376cd10,puVar9);
  puVar9 = &UNK_11068fbd8;
  func_0x000107c613fc(&UNK_11068fbd8,0x20,7);
  *(undefined **)(puVar9 + 0x10) = puVar7;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  func_0x0001000285a8(0x112f90800,&UNK_10dc09010);
  func_0x000107c613fc();
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar8);
  UNRECOVERED_JUMPTABLE = FUN_10376cd48;
  func_0x0001000bdd8c(FUN_10376cd48,puVar9);
  FUN_10376cd54(puVar1,puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  *puVar11 = uVar3;
  puVar11[1] = uVar5;
  puVar11[2] = uVar2;
  *(undefined4 *)(puVar11 + 8) = uVar6;
  puVar11[9] = uVar10;
  puVar11[10] = UNRECOVERED_JUMPTABLE;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar5);
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010376c9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10376c9d4; end: 10376cacf;  */

void FUN_10376c9d4(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  if ((param_1 != 0) &&
     (uVar1 = param_3,
     func_0x000107c61150(param_3,PTR_s_respondsToSelector__11262c7e0,
                         PTR_s_getWorkerOnExecutor_block__1125d0ac0), (uVar1 & 1) != 0)) {
    puVar2 = &UNK_11068fc00;
    func_0x000107c613fc(&UNK_11068fc00,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    pcStack_40 = FUN_10376cd80;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1011eaae0;
    puStack_48 = &UNK_11068fc18;
    puStack_38 = puVar2;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c443bc(param_3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puStack_38);
    return;
  }
  puVar4 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
  *puVar4 = 0;
  puVar4[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 10376cad0; end: 10376cad7;  */

void FUN_10376cad0(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_60;
  if ((param_1 != 0) &&
     (uVar3 = uVar2,
     func_0x000107c61150(uVar2,PTR_s_respondsToSelector__11262c7e0,
                         PTR_s_getWorkerOnExecutor_block__1125d0ac0), (uVar3 & 1) != 0)) {
    puVar4 = &UNK_11068fc00;
    func_0x000107c613fc(&UNK_11068fc00,0x18,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    pcStack_40 = FUN_10376cd80;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1011eaae0;
    puStack_48 = &UNK_11068fc18;
    puStack_38 = puVar4;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c443bc(uVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puStack_38);
    return;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28);
  *puVar6 = 0;
  puVar6[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10376cad8; end: 10376cb37;  */

/* WARNING: Possible PIC construction at 0x00010376cb08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376cb0c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10376cad8(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28);
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c615f0();
    FUN_10376cb38();
    plVar2 = *(long **)(*(long *)(param_2 + 0x40) + 0x28);
    *plVar2 = param_1;
    plVar2[1] = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_2);
  return;
}



/* Entry: 10376cb38; end: 10376ccf3;  */

undefined1  [16] FUN_10376cb38(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  lStack_50 = 0;
  lStack_48 = 0;
  puVar2 = PTR_PTR_1126ad6e8;
  func_0x000107c61168();
  puVar3 = &UNK_11068fc50;
  func_0x000107c613fc(&UNK_11068fc50,0x28,7);
  *(long **)(puVar3 + 0x10) = &lStack_48;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(long **)(puVar3 + 0x20) = &lStack_50;
  puVar4 = &UNK_11068fc78;
  func_0x000107c613fc(&UNK_11068fc78,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10376d10c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_60 = FUN_10376d118;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10006eb60;
  puStack_68 = &UNK_11068fc90;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c50974();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar6 = puVar4;
  func_0x000107c61544(puVar4,"",0x65,0x6b,0x3f,1);
  func_0x000107c61574(puVar4);
  lVar8 = lStack_48;
  lVar7 = lStack_50;
  if (((ulong)puVar6 & 1) == 0) {
    if (puVar2 == (undefined *)0x0) {
      if (lStack_48 == 0) {
        lVar9 = 0;
      }
      else if (lStack_50 == 0) {
        lVar8 = 0;
        lVar9 = 0;
      }
      else {
        func_0x000107c61174(lStack_48);
        func_0x000107c61174(lVar7);
        lVar9 = lVar7;
      }
    }
    else {
      func_0x000107c61170(puVar2);
      lVar8 = 0;
      lVar7 = lStack_50;
      lVar9 = 0;
    }
    func_0x000107c61170(lVar7);
    lVar7 = lStack_48;
    func_0x000107c61574(puVar3);
    func_0x000107c61170(lVar7);
    auVar10._8_8_ = lVar9;
    auVar10._0_8_ = lVar8;
    return auVar10;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10376ccf4);
  (*pcVar1)();
}



/* Entry: 10376ccf4; end: 10376cd1b;  */

void FUN_10376ccf4(long param_1,long param_2)

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



/* Entry: 10376cd1c; end: 10376cd47;  */

/* WARNING: Possible PIC construction at 0x00010376cd30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376cd34) */

void FUN_10376cd1c(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 10376cd48; end: 10376cd53;  */

void FUN_10376cd48(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10376cd54; end: 10376cd7f;  */

/* WARNING: Possible PIC construction at 0x00010376cd68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376cd6c) */

void FUN_10376cd54(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 10376cd80; end: 10376cd87;  */

/* WARNING: Possible PIC construction at 0x00010376cb08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376cb0c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_10376cd80(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28);
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c615f0();
    FUN_10376cb38();
    plVar3 = *(long **)(*(long *)(lVar2 + 0x40) + 0x28);
    *plVar3 = param_1;
    plVar3[1] = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 10376cd88; end: 10376ce4f;  */

void FUN_10376cd88(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  uVar2 = *unaff_x20;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10376cdec;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
            (plVar1,unaff_x22 + 0x10,uVar2,&UNK_11068f778);
  return;
}



/* Entry: 10376ce50; end: 10376ceeb;  */

void FUN_10376ce50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10376ceec,0,0);
    return;
  }
  FUN_10376d14c(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376cee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3);
  return;
}



/* Entry: 10376ceec; end: 10376d037;  */

void FUN_10376ceec(void)

{
  long unaff_x22;
  
  FUN_10376d14c(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376cf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10376d038; end: 10376d08b;  */

void FUN_10376d038(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_103767154(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  FUN_10376d14c(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010376d088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 10376d08c; end: 10376d10b;  */

/* WARNING: Possible PIC construction at 0x00010376d0d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376d0d4) */

void FUN_10376d08c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126d1f00;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  uVar2 = *param_1;
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10376d10c; end: 10376d117;  */

/* WARNING: Possible PIC construction at 0x00010376d0d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010376d0d4) */

void FUN_10376d10c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126d1f00;
  func_0x000107c61168(PTR_PTR_1126d1f00,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c43be4();
  func_0x000107c61180();
  uVar3 = *puVar1;
  *puVar1 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10376d118; end: 10376d137;  */

void FUN_10376d118(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10376d138; end: 10376d14b;  */

undefined1  [16] FUN_10376d138(void)

{
  return ZEXT816(0x11068fcc8);
}



/* Entry: 10376d14c; end: 10376d17f;  */

undefined8 FUN_10376d14c(undefined8 param_1)

{
  (*(code *)(undefined *)0x103768ce0)();
  return param_1;
}



/* Entry: 10376d180; end: 10376d18f;  */

void FUN_10376d180(long param_1,long param_2)

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



/* Entry: 10376d190; end: 10376d28f;  */

undefined8
FUN_10376d190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = param_3;
  func_0x000107c5fa08(param_3,param_4,param_5,param_7);
  func_0x000107c5f9f4();
  uVar1 = 0;
  uStack_a0 = param_4;
  uStack_98 = param_5;
  uStack_90 = param_6;
  uStack_88 = param_7;
  uStack_80 = param_8;
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c5fa34(0,param_4,param_5,param_7);
  uVar2 = 0;
  func_0x000107c5fa34(0,param_6,param_5,param_8);
  puVar3 = PTR___sSDyxq_GSTsMc_11034d798;
  func_0x000107c61520(PTR___sSDyxq_GSTsMc_11034d798,uVar1);
  func_0x000107c5fc04(&uStack_58,&uStack_68,FUN_10376d448,auStack_b0,uVar1,uVar2,puVar3);
  return uStack_58;
}



/* Entry: 10376d290; end: 10376d447;  */

void FUN_10376d290(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_70 = param_1;
  lStack_68 = param_5;
  func_0x000107c61510(0,param_5,param_6,"key value ",0);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_80 = (long)&lStack_80 - extraout_x8;
  func_0x000107c60188(0,param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = ((long)&lStack_80 - extraout_x8) - extraout_x8_00;
  lStack_78 = param_7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_7 + -8) + 0x40));
  lVar4 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*param_3)(lVar4,param_2);
  lVar2 = lStack_80;
  if (unaff_x21 == 0) {
    (**(code **)(lVar5 + 0x10))(lStack_80,param_2,lVar1);
    lVar5 = *(long *)(param_6 + -8);
    (**(code **)(lVar5 + 0x20))(lVar6,lVar2 + *(int *)(lVar1 + 0x30),param_6);
    (**(code **)(lVar5 + 0x38))(lVar6,0,1,param_6);
    uVar3 = 0;
    func_0x000107c5fa34(0,lStack_78,param_6,param_9);
    func_0x000107c5fa44(lVar6,lVar4,uVar3);
    (**(code **)(*(long *)(lStack_68 + -8) + 8))(lVar2);
  }
  return;
}



/* Entry: 10376d448; end: 10376d477;  */

void FUN_10376d448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10376d290(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 10376d478; end: 10376d613;  */

uint FUN_10376d478(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  uint uVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar6 - extraout_x12;
  lVar2 = unaff_x20;
  func_0x000107c4d850();
  if ((int)lVar2 == 0) {
    uVar3 = 1;
  }
  else {
    func_0x000107c3f8c8();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c5ee94(lVar5);
      func_0x000107c61170(unaff_x20);
    }
    (**(code **)(lVar7 + 0x38))(lVar5,unaff_x20 == 0,1,lVar1);
    func_0x0001009f0578(lVar5,lVar6);
    lVar2 = lVar6;
    (**(code **)(lVar7 + 0x30))(lVar6,1,lVar1);
    if ((int)lVar2 == 1) {
      uVar3 = 0;
    }
    else {
      (**(code **)(lVar7 + 0x20))(puVar4,lVar6,lVar1);
      func_0x000107c5ee78(param_1,puVar4);
      uVar3 = (uint)param_1;
      (**(code **)(lVar7 + 8))(puVar4,lVar1);
    }
    func_0x0001000d1dcc(lVar5);
  }
  return uVar3 & 1;
}



/* Entry: 10376d614; end: 10376d85f;  */

void FUN_10376d614(undefined8 param_1,double param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  func_0x000107c4e04c();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
LAB_10376d7ec:
    uVar8 = 1;
  }
  else {
    uVar2 = 0x112d64d20;
    func_0x0001000285a8(0x112d64d20,&UNK_10d92bec0);
    uVar3 = unaff_x20;
    func_0x000107c5fc54();
    func_0x000107c61170(unaff_x20);
    if (uVar3 >> 0x3e == 0) {
      uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar10 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar10 = uVar3;
      }
      func_0x000107c60480();
    }
    if (uVar10 != 0) {
      uVar11 = 0;
      do {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10376d7f8);
            (*pcVar1)();
          }
          uVar12 = *(ulong *)(uVar3 + uVar11 * 8 + 0x20);
          func_0x000107c615f0(uVar12);
          uVar7 = uVar2;
        }
        else {
          uVar12 = uVar11;
          uVar7 = uVar3;
          func_0x0001011be488();
        }
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10376d780);
          (*pcVar1)();
        }
        uVar9 = uVar11 + 1;
        uVar4 = uVar12;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar2 = uVar7;
        if (uVar4 != 0) {
          uVar5 = uVar4;
          func_0x000107c5faec();
          func_0x000107c61170(uVar4);
          if ((uVar5 == param_3) && (uVar7 == param_4)) {
            func_0x000107c6142c(uVar3);
            uVar3 = uVar7;
          }
          else {
            uVar2 = uVar7;
            func_0x000107c605b8(uVar5,uVar7,param_3,param_4,0);
            func_0x000107c6142c(uVar7);
            if ((uVar5 & 1) == 0) goto LAB_10376d6d4;
          }
          func_0x000107c6142c(uVar3);
          uVar2 = uVar12;
          func_0x000107c4a844();
          func_0x000107c61180();
          func_0x000107c615e8(uVar12);
          if (uVar2 == 0) goto LAB_10376d7ec;
          func_0x000107c4223c(uVar2);
          func_0x000107c5ee88(param_1,param_2 / 1000.0);
          func_0x000107c61170(uVar2);
          uVar8 = 0;
          goto LAB_10376d820;
        }
LAB_10376d6d4:
        func_0x000107c615e8(uVar12);
        uVar11 = uVar11 + 1;
      } while (uVar9 != uVar10);
    }
    func_0x000107c6142c(uVar3);
    uVar8 = 1;
  }
LAB_10376d820:
  lVar6 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x00010376d85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1,uVar8,1,lVar6);
  return;
}



/* Entry: 10376d860; end: 10376dc7b;  */

/* WARNING: Removing unreachable block (ram,0x00010376dc68) */

void FUN_10376d860(long param_1)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined8 uVar9;
  double dVar10;
  undefined **ppuVar11;
  double dVar12;
  undefined *puVar13;
  double dVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long unaff_x20;
  ulong uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  undefined **ppuStack_178;
  undefined *puStack_170;
  undefined *apuStack_168 [9];
  double dStack_120;
  double dStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lVar15 = unaff_x20;
  func_0x000107c42efc();
  if (lVar15 != 0) {
    func_0x000107c42ef0();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar15 = unaff_x20;
      func_0x000107c5ff48();
      uVar6 = 0;
      lStack_80 = lVar15;
      func_0x000107c5ff54(0);
      uVar7 = uVar6;
      FUN_10376dc7c();
      func_0x000107c601c0(&uStack_c0,uVar6,uVar7);
      puVar17 = PTR___sypN_11034f1a8;
      if (lStack_a8 == 0) {
        puStack_170 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puStack_170 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar13 = PTR___sSSN_11034da80;
        do {
          uStack_108 = uStack_b8;
          uStack_110 = uStack_c0;
          lStack_f8 = lStack_a8;
          uStack_100 = uStack_b0;
          uStack_e8 = uStack_98;
          uStack_f0 = uStack_a0;
          uStack_d8 = uStack_88;
          uStack_e0 = uStack_90;
          uVar9 = uStack_a0;
          func_0x0001000bb420(&uStack_110,apuStack_168);
          fVar21 = (float)uVar9;
          pdVar8 = &dStack_120;
          func_0x000107c6147c(pdVar8,apuStack_168,puVar17 + 8,puVar13,6);
          dVar3 = dStack_118;
          dVar2 = dStack_120;
          if ((int)pdVar8 == 0) {
LAB_10376d918:
            FUN_10376de8c(&uStack_110);
          }
          else {
            func_0x0001000bb420(&uStack_f0,apuStack_168);
            uVar9 = 0;
            FUN_10376ded4(0);
            pdVar8 = &dStack_120;
            ppuStack_178 = apuStack_168;
            func_0x000107c6147c(pdVar8,ppuStack_178,puVar17 + 8,uVar9,6);
            dVar12 = dStack_120;
            if (((ulong)pdVar8 & 1) == 0) {
              func_0x000107c6142c(dVar3);
              goto LAB_10376d918;
            }
            dVar10 = dStack_120;
            func_0x000107c5dc3c();
            iVar5 = SUB84(dVar10,0);
            if (iVar5 == 3) {
              dVar10 = dVar12;
              func_0x000107c5c1d4();
              func_0x000107c61180();
              if (dVar10 == 0.0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10376dc68);
                (*pcVar4)();
              }
              dVar14 = dVar10;
              func_0x000107c5faec();
              func_0x000107c61170(dVar12);
              func_0x000107c61170(dVar10);
              uVar20 = 0;
              uVar19 = 0;
              lVar15 = *(long *)(param_1 + 0x10);
            }
            else if (iVar5 == 2) {
              func_0x000107c436dc(dVar12);
              func_0x000107c61170(dVar12);
              ppuStack_178 = (undefined **)0x0;
              dVar14 = (double)fVar21;
              uVar20 = 1;
              uVar19 = 1;
              lVar15 = *(long *)(param_1 + 0x10);
            }
            else {
              if (iVar5 != 1) {
                func_0x000107c6142c(dVar3);
                func_0x000107c61170(dVar12);
                goto LAB_10376d918;
              }
              dVar14 = dVar12;
              func_0x000107c3ebcc();
              func_0x000107c61170(dVar12);
              dVar14 = (double)((ulong)dVar14 & 0xffffffff);
              ppuStack_178 = (undefined **)0x0;
              uVar20 = 2;
              uVar19 = 2;
              lVar15 = *(long *)(param_1 + 0x10);
            }
            if (lVar15 != 0) {
              func_0x000107c6068c(apuStack_168,*(undefined8 *)(param_1 + 0x28));
              ppuVar11 = apuStack_168;
              func_0x000107c5fb58(ppuVar11,dVar2,dVar3);
              func_0x000107c606a8();
              uVar16 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
              uVar18 = (ulong)ppuVar11 & (uVar16 ^ 0xffffffffffffffff);
              if ((*(ulong *)(param_1 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) {
                do {
                  pdVar8 = (double *)(*(long *)(param_1 + 0x30) + uVar18 * 0x10);
                  dVar12 = *pdVar8;
                  dVar10 = pdVar8[1];
                  uVar19 = uVar20;
                  if ((dVar12 == dVar2 && dVar10 == dVar3) ||
                     (func_0x000107c605b8(dVar12,dVar10,dVar2,dVar3,0), ((ulong)dVar12 & 1) != 0))
                  goto LAB_10376db14;
                  uVar18 = uVar18 + 1 & ~uVar16;
                } while ((*(ulong *)(param_1 + 0x38 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) !=
                         0);
              }
              FUN_10376df18(dVar14,ppuStack_178,uVar20);
              func_0x000107c6142c(dVar3);
              puVar13 = PTR___sSSN_11034da80;
              goto LAB_10376d918;
            }
LAB_10376db14:
            FUN_10376de8c(&uStack_110);
            puVar13 = puStack_170;
            func_0x000107c61558();
            if (((ulong)puVar13 & 1) == 0) {
              plVar1 = (long *)(puStack_170 + 0x10);
              puStack_170 = (undefined *)0x0;
              func_0x000103762508(0,*plVar1 + 1,1);
            }
            uVar16 = *(ulong *)(puStack_170 + 0x10);
            if (*(ulong *)(puStack_170 + 0x18) >> 1 <= uVar16) {
              puStack_170 = (undefined *)(ulong)(1 < *(ulong *)(puStack_170 + 0x18));
              func_0x000103762508(puStack_170,uVar16 + 1,1);
            }
            *(ulong *)(puStack_170 + 0x10) = uVar16 + 1;
            *(double *)(puStack_170 + uVar16 * 0x28 + 0x20) = dVar2;
            *(double *)(puStack_170 + uVar16 * 0x28 + 0x28) = dVar3;
            *(double *)(puStack_170 + uVar16 * 0x28 + 0x30) = dVar14;
            *(undefined ***)(puStack_170 + uVar16 * 0x28 + 0x38) = ppuStack_178;
            puStack_170[uVar16 * 0x28 + 0x40] = uVar19;
            puVar13 = PTR___sSSN_11034da80;
          }
          func_0x000107c601c0(&uStack_c0,uVar6,uVar7);
        } while (lStack_a8 != 0);
      }
      func_0x000107c61574(lStack_80);
      puVar17 = *(undefined **)(puStack_170 + 0x10);
      apuStack_168[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (puVar17 != (undefined *)0x0) {
        func_0x0001000285a8(0x112f90840,&UNK_10dc0a8f0);
        func_0x000107c60498();
        apuStack_168[0] = puVar17;
      }
      FUN_10376dcc0(puStack_170,1,apuStack_168);
      func_0x000107c61170(unaff_x20);
      func_0x000107c6142c(puStack_170);
    }
  }
  return;
}



/* Entry: 10376dc7c; end: 10376dcbf;  */

void FUN_10376dc7c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f90838 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5ff54(0xff);
  puVar2 = PTR___sSo12NSDictionaryC10FoundationE8IteratorCStACMc_110351108;
  func_0x000107c61520(PTR___sSo12NSDictionaryC10FoundationE8IteratorCStACMc_110351108,uVar1);
  puRam0000000112f90838 = puVar2;
  return;
}



/* Entry: 10376dcc0; end: 10376de8b;  */

void FUN_10376dcc0(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined1 *puVar19;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != 0) {
    puVar19 = (undefined1 *)(param_1 + 0x40);
    do {
      uVar3 = *(ulong *)(puVar19 + -0x20);
      uVar6 = *(ulong *)(puVar19 + -0x18);
      uVar4 = *(undefined8 *)(puVar19 + -0x10);
      uVar7 = *(undefined8 *)(puVar19 + -8);
      uVar9 = *puVar19;
      lVar17 = *param_3;
      func_0x000107c61434(uVar6);
      func_0x00010376df2c(uVar4,uVar7,uVar9);
      uVar11 = uVar3;
      uVar12 = uVar6;
      FUN_10378de14();
      lVar14 = *(long *)(lVar17 + 0x10);
      uVar16 = (ulong)~(uint)uVar12 & 1;
      lVar18 = lVar14 + uVar16;
      if (SCARRY8(lVar14,uVar16)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10376de78);
        (*pcVar10)();
      }
      if (*(long *)(lVar17 + 0x18) < lVar18) {
        FUN_10378f290(lVar18,param_2 & 1);
        uVar11 = uVar3;
        uVar16 = uVar6;
        FUN_10378de14();
        if (((uint)uVar12 & 1) != ((uint)uVar16 & 1)) {
          func_0x000107c60624(&UNK_11068fd50);
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10376de8c);
          (*pcVar10)();
        }
      }
      else if ((param_2 & 1) == 0) {
        FUN_10378e724();
      }
      lVar18 = *param_3;
      if ((uVar12 & 1) == 0) {
        lVar14 = lVar18 + (uVar11 >> 6) * 8;
        *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar18 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar6;
        puVar15 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar11 * 0x18);
        *puVar15 = uVar4;
        puVar15[1] = uVar7;
        *(undefined1 *)(puVar15 + 2) = uVar9;
        if (SCARRY8(*(long *)(lVar18 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10376de7c);
          (*pcVar10)();
        }
        *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar6);
        puVar15 = (undefined8 *)(*(long *)(lVar18 + 0x38) + uVar11 * 0x18);
        uVar2 = *puVar15;
        uVar5 = puVar15[1];
        *puVar15 = uVar4;
        puVar15[1] = uVar7;
        uVar8 = *(undefined1 *)(puVar15 + 2);
        *(undefined1 *)(puVar15 + 2) = uVar9;
        func_0x00010376df18(uVar2,uVar5,uVar8);
      }
      puVar19 = puVar19 + 0x28;
      param_2 = 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 10376de8c; end: 10376ded3;  */

undefined8 FUN_10376de8c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f90848;
  func_0x0001000285a8(0x112f90848,&UNK_10dc09078);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10376ded4; end: 10376df17;  */

void FUN_10376ded4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90850 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126d2eb0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f90850 = puVar1;
  return;
}



/* Entry: 10376df18; end: 10376df3f;  */

void FUN_10376df18(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10376df40; end: 10376df87;  */

void FUN_10376df40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10376df88; end: 10376df8f;  */

void FUN_10376df88(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 10376df90; end: 10376dfd3;  */

void FUN_10376df90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68);
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10376dfd4; end: 10376dfef;  */

void FUN_10376dfd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10376dff0; end: 10376e02f;  */

void FUN_10376dff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc090f8;
  func_0x000107c61520(&UNK_10dc090f8,&UNK_11068fd50);
  puRam0000000112f90858 = puVar1;
  return;
}



/* Entry: 10376e030; end: 10376e05f;  */

long FUN_10376e030(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  return 1;
}



/* Entry: 10376e060; end: 10376e097;  */

undefined1  [16] FUN_10376e060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [16];
  
  func_0x000107c5fc24(auStack_30,param_2,param_3);
  return auStack_30;
}



/* Entry: 10376e098; end: 10376e09f;  */

void FUN_10376e098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10376e0a0; end: 10376e10f;  */

undefined8 * FUN_10376e0a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10376e110; end: 10376e1ab;  */

int FUN_10376e110(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10376e1ac; end: 10376e207;  */

void FUN_10376e1ac(undefined8 *param_1)

{
  func_0x000107c61574(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 10376e208; end: 10376e263;  */

undefined8 * FUN_10376e208(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10376e264; end: 10376e29f;  */

undefined8 * FUN_10376e264(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10376e2a0; end: 10376e337;  */

int FUN_10376e2a0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10376e338; end: 10376e377;  */

void FUN_10376e338(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc090b8;
  func_0x000107c61520(&UNK_10dc090b8,&UNK_11068fd50);
  puRam0000000112f90860 = puVar1;
  return;
}



/* Entry: 10376e378; end: 10376e37b;  */

void FUN_10376e378(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09080;
  func_0x000107c61520(&UNK_10dc09080,&UNK_11068fd50);
  puRam0000000112f90868 = puVar1;
  return;
}



/* Entry: 10376e37c; end: 10376e3bb;  */

void FUN_10376e37c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc09080;
  func_0x000107c61520(&UNK_10dc09080,&UNK_11068fd50);
  puRam0000000112f90868 = puVar1;
  return;
}



/* Entry: 10376e3bc; end: 10376e3bf;  */

void FUN_10376e3bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f90628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4aa70;
  func_0x000107c61520(&UNK_10dc4aa70,&UNK_1106c9520);
  puRam0000000112f90628 = puVar1;
  return;
}



/* Entry: 10376e3c0; end: 10376e42b;  */

void FUN_10376e3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10376e42c;
                    /* WARNING: Could not recover jumptable at 0x00010376e428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103770484(param_1,param_3);
  return;
}



/* Entry: 10376e42c; end: 10376e467;  */

void FUN_10376e42c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010376e464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10376e468; end: 10376e483;  */

void FUN_10376e468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376e484,0,0);
  return;
}



/* Entry: 10376e484; end: 10376e523;  */

void FUN_10376e484(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x60) = param_1;
  func_0x000107c61428();
  uVar4 = *param_1;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000016;
  func_0x000100029b28(0xd000000000000016,0x800000010f163b70);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  func_0x000107c61170(uVar4);
  plVar6 = (long *)0x2a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10376e524;
  lVar1 = *(long *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  plVar6[0x49] = *(long *)(unaff_x22 + 0x58);
  plVar6[0x48] = lVar1;
  plVar6[0x47] = lVar3;
  plVar6[0x46] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376e620,0,0);
  return;
}



/* Entry: 10376e524; end: 10376e573;  */

void FUN_10376e524(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376e574,0,0);
  return;
}



/* Entry: 10376e574; end: 10376e5fb;  */

void FUN_10376e574(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = uVar4;
  FUN_10376fbb8(uVar4,*(undefined8 *)(*(long *)(unaff_x22 + 0x40) + 0x10));
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(puVar1,unaff_x22 + 0x28,0,0);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010376e5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10376e5fc; end: 10376e61f;  */

void FUN_10376e5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x248) = param_4;
  *(undefined8 *)(unaff_x22 + 0x240) = param_3;
  *(undefined8 *)(unaff_x22 + 0x238) = param_2;
  *(undefined8 *)(unaff_x22 + 0x230) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376e620,0,0);
  return;
}



/* Entry: 10376e620; end: 10376ead7;  */

void FUN_10376e620(void)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x230);
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar4 = 0x112f90610;
    func_0x0001000285a8(0x112f90610,&UNK_10dc091d0);
    uVar17 = 0x112f908e0;
    func_0x0001000285a8(0x112f908e0,&UNK_10dc092a0);
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x250) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10376ead8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )(plVar3,unaff_x22 + 0x218,uVar4,uVar17,0,0,&UNK_10dc09258,unaff_x22 + 0x110,uVar4,uVar17);
    return;
  }
  lVar1 = unaff_x22 + 0x10;
  lVar13 = *(long *)(unaff_x22 + 0x248);
  uVar4 = 0x112f90610;
  func_0x0001000285a8(0x112f90610,&UNK_10dc091d0);
  *(undefined8 *)(unaff_x22 + 600) = uVar4;
  func_0x000107c615ac(lVar1);
  *(long *)(unaff_x22 + 0x220) = lVar1;
  lVar13 = *(long *)(lVar13 + 0x10);
  if (lVar13 != 0) {
    lVar11 = *(long *)(unaff_x22 + 0x248) + 0x20;
    do {
      uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x240);
      uVar14 = *(ulong *)(unaff_x22 + 0x238);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x230);
      FUN_103768fec(lVar11,unaff_x22 + 0x140);
      FUN_10376c3f0(unaff_x22 + 0x140,unaff_x22 + 0x168);
      lVar6 = 0x112d453c8;
      func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
      uVar8 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
      uVar5 = uVar8 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      lVar6 = 0;
      func_0x000107c5fd0c();
      lVar16 = *(long *)(lVar6 + -8);
      (**(code **)(lVar16 + 0x38))(uVar5,1,1,lVar6);
      FUN_103768fec(unaff_x22 + 0x168,unaff_x22 + 400);
      puVar7 = &UNK_11068fec0;
      func_0x000107c613fc(&UNK_11068fec0,0x68,7);
      *(long *)(puVar7 + 0x10) = 0;
      *(undefined8 *)(puVar7 + 0x18) = 0;
      FUN_10376c3f0(unaff_x22 + 400,puVar7 + 0x20);
      *(undefined8 *)(puVar7 + 0x48) = uVar17;
      *(undefined8 *)(puVar7 + 0x50) = uVar19;
      *(undefined8 *)(puVar7 + 0x58) = uVar18;
      *(ulong *)(puVar7 + 0x60) = uVar14;
      uVar8 = uVar8 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      func_0x0001037708ec(uVar5,uVar8,0x112d453c8,&UNK_10d90ac60);
      uVar12 = uVar8;
      (**(code **)(lVar16 + 0x30))(uVar8,1,lVar6);
      func_0x000107c6157c(uVar17);
      func_0x000107c61434(uVar19);
      func_0x000107c61434(uVar18);
      func_0x000107c61434(uVar14);
      if ((int)uVar12 == 1) {
        func_0x000103770934(uVar8,0x112d453c8,&UNK_10d90ac60);
        uVar12 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar16 + 8))(uVar8,lVar6);
        uVar12 = uVar14 & 0xff | 0x3100;
      }
      func_0x000107c615c0(uVar8);
      lVar6 = *(long *)(puVar7 + 0x10);
      if (lVar6 == 0) {
        lVar16 = 0;
        lVar15 = 0;
      }
      else {
        lVar15 = *(long *)(puVar7 + 0x18);
        lVar16 = lVar6;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar6);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar6);
      }
      puVar9 = &UNK_11068fee8;
      func_0x000107c613fc(&UNK_11068fee8,0x20,7);
      *(undefined **)(puVar9 + 0x10) = &UNK_10dc09278;
      *(undefined **)(puVar9 + 0x18) = puVar7;
      func_0x000107c6157c(puVar7);
      if (lVar15 == 0 && lVar16 == 0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
        *(long *)(unaff_x22 + 0x1f0) = lVar16;
        *(long *)(unaff_x22 + 0x1f8) = lVar15;
        puVar10 = (undefined8 *)(unaff_x22 + 0x1e0);
      }
      *(undefined8 *)(unaff_x22 + 0x200) = 1;
      *(undefined8 **)(unaff_x22 + 0x208) = puVar10;
      *(long *)(unaff_x22 + 0x210) = lVar1;
      func_0x000107c615bc(uVar12,unaff_x22 + 0x200,uVar4,&UNK_10dc09280,puVar9);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar12);
      func_0x000103770934(uVar5,0x112d453c8,&UNK_10d90ac60);
      func_0x0001000834e4(unaff_x22 + 0x168);
      func_0x000107c615c0(uVar5);
      lVar11 = lVar11 + 0x28;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  lVar13 = 0x112f908c8;
  func_0x0001000285a8(0x112f908c8,&UNK_10dc09288);
  *(long *)(unaff_x22 + 0x260) = lVar13;
  lVar11 = *(long *)(lVar13 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar11;
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x270) = uVar8;
  func_0x000107c5fcc4(uVar8,lVar1,uVar4);
  uVar4 = 0x112f908d0;
  func_0x0001037708a8(0x112f908d0,0x112f908c8,&UNK_10dc09288,
                      PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x278) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10376eb20;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)(plVar3,unaff_x22 + 0x228,lVar13,uVar4);
  return;
}



/* Entry: 10376ead8; end: 10376eb1f;  */

void FUN_10376ead8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x250));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376eeac,0,0);
  return;
}



/* Entry: 10376eb20; end: 10376ebbb;  */

void FUN_10376eb20(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x278));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar3 + 0x280) = PTR___swiftEmptyArrayStorage_11034f1c8;
    pcVar1 = FUN_10376ebbc;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x270);
    lVar5 = *(long *)(lVar3 + 0x268);
    uVar4 = *(undefined8 *)(lVar3 + 0x260);
    func_0x000107c614ac();
    func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
    (**(code **)(lVar5 + 8))(uVar2,uVar4);
    pcVar1 = FUN_10376ed84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10376ebbc; end: 10376ed83;  */

void FUN_10376ebbc(void)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  ulong uVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x228);
  if (lVar8 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
    (**(code **)(*(long *)(unaff_x22 + 0x268) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x260));
    func_0x000107c615c0(uVar6);
    *(undefined8 *)(unaff_x22 + 0x218) = uVar5;
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x298) = plVar3;
    func_0x0001000285a8(0x112f908d8,&UNK_10dc09290);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10376ee28;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 0x280);
  lVar2 = 0x112f90608;
  func_0x0001000285a8(0x112f90608,&UNK_10dc08af0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(long *)(lVar2 + 0x20) = lVar8;
  uVar9 = *(ulong *)(lVar7 + 0x10);
  func_0x000107c61558();
  if (((int)lVar7 == 0) ||
     (uVar4 = *(ulong *)(*(long *)(unaff_x22 + 0x280) + 0x18) >> 1,
     lVar8 = *(long *)(unaff_x22 + 0x280), uVar4 <= uVar9)) {
    func_0x000103762648();
    uVar4 = *(ulong *)(lVar7 + 0x18) >> 1;
    lVar8 = lVar7;
  }
  *(long *)(unaff_x22 + 0x288) = lVar8;
  if (uVar4 != *(ulong *)(lVar8 + 0x10)) {
    func_0x000107c6140c(lVar8 + *(ulong *)(lVar8 + 0x10) * 8 + 0x20,(long *)(lVar2 + 0x20),1,
                        *(undefined8 *)(unaff_x22 + 600));
    func_0x000107c61574(lVar2);
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    uVar5 = 0x112f908d0;
    FUN_1037708a8(0x112f908d0,0x112f908c8,&UNK_10dc09288,PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x290) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10376ed8c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
              (plVar3,unaff_x22 + 0x228,*(undefined8 *)(unaff_x22 + 0x260),uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10376ed84);
  (*pcVar1)();
}



/* Entry: 10376ed84; end: 10376ed8b;  */

void FUN_10376ed84(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_dealloc_1103500f0)(*(undefined8 *)(unaff_x22 + 0x270));
  return;
}



/* Entry: 10376ed8c; end: 10376ee27;  */

void FUN_10376ed8c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x290));
  uVar2 = *(undefined8 *)(lVar4 + 0x288);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x280) = uVar2;
    pcVar1 = FUN_10376ebbc;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x270);
    lVar6 = *(long *)(lVar4 + 0x268);
    uVar5 = *(undefined8 *)(lVar4 + 0x260);
    func_0x000107c614ac();
    func_0x000107c6142c(uVar2);
    (**(code **)(lVar6 + 8))(uVar3,uVar5);
    pcVar1 = FUN_10376ed84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10376ee28; end: 10376eeab;  */

void FUN_10376ee28(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x298));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10376ee70,0,0);
  return;
}



/* Entry: 10376eeac; end: 10376eeb7;  */

void FUN_10376eeac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010376eeb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x218));
  return;
}



/* Entry: 10376eeb8; end: 10376ef63;  */

void FUN_10376eeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_5;
  *(undefined8 *)(unaff_x22 + 0x118) = param_6;
  *(undefined8 *)(unaff_x22 + 0x100) = param_3;
  *(undefined8 *)(unaff_x22 + 0x108) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2;
  lVar3 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  lVar3 = 0x112f908c8;
  func_0x0001000285a8(0x112f908c8,&UNK_10dc09288);
  *(long *)(unaff_x22 + 0x130) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376ef64,0,0);
  return;
}



/* Entry: 10376ef64; end: 10376f2db;  */

void FUN_10376ef64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  lVar11 = *(long *)(*(long *)(unaff_x22 + 0x108) + 0x10);
  if (lVar11 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x108) + 0x20;
    uVar9 = **(undefined8 **)(unaff_x22 + 0xf8);
    do {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar15 = *(ulong *)(unaff_x22 + 0x118);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
      FUN_103768fec(lVar4,unaff_x22 + 0x10);
      FUN_10376c3f0(unaff_x22 + 0x10,unaff_x22 + 0x38);
      lVar5 = 0;
      func_0x000107c5fd0c();
      lVar16 = *(long *)(lVar5 + -8);
      (**(code **)(lVar16 + 0x38))(uVar2,1,1,lVar5);
      FUN_103768fec(unaff_x22 + 0x38,unaff_x22 + 0x60);
      puVar6 = &UNK_11068ff10;
      func_0x000107c613fc(&UNK_11068ff10,0x68,7);
      *(long *)(puVar6 + 0x10) = 0;
      *(undefined8 *)(puVar6 + 0x18) = 0;
      FUN_10376c3f0(unaff_x22 + 0x60,puVar6 + 0x20);
      *(undefined8 *)(puVar6 + 0x48) = uVar1;
      *(undefined8 *)(puVar6 + 0x50) = uVar3;
      *(undefined8 *)(puVar6 + 0x58) = uVar13;
      *(ulong *)(puVar6 + 0x60) = uVar15;
      func_0x0001037708ec(uVar2,uVar12,0x112d453c8,&UNK_10d90ac60);
      (**(code **)(lVar16 + 0x30))(uVar12,1,lVar5);
      func_0x000107c6157c(uVar1);
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar13);
      func_0x000107c61434(uVar15);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
      if ((int)uVar12 == 1) {
        func_0x000103770934(uVar13,0x112d453c8,&UNK_10d90ac60);
        uVar15 = 0x3100;
      }
      else {
        func_0x000107c5fd08();
        (**(code **)(lVar16 + 8))(uVar13,lVar5);
        uVar15 = uVar15 & 0xff | 0x3100;
      }
      lVar5 = *(long *)(puVar6 + 0x10);
      if (lVar5 == 0) {
        lVar16 = 0;
        lVar14 = 0;
      }
      else {
        lVar14 = *(long *)(puVar6 + 0x18);
        lVar16 = lVar5;
        func_0x000107c614f0();
        func_0x000107c615f0(lVar5);
        func_0x000107c5fca8();
        func_0x000107c615e8(lVar5);
      }
      puVar7 = &UNK_11068ff38;
      func_0x000107c613fc(&UNK_11068ff38,0x20,7);
      *(undefined **)(puVar7 + 0x10) = &UNK_10dc092b0;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      func_0x000107c6157c(puVar6);
      uVar12 = 0x112f90610;
      func_0x0001000285a8(0x112f90610,&UNK_10dc091d0);
      puVar10 = (undefined8 *)0x0;
      if (lVar14 != 0 || lVar16 != 0) {
        *(undefined8 *)(unaff_x22 + 0xb0) = 0;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0;
        *(long *)(unaff_x22 + 0xc0) = lVar16;
        *(long *)(unaff_x22 + 200) = lVar14;
        puVar10 = (undefined8 *)(unaff_x22 + 0xb0);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
      *(undefined8 *)(unaff_x22 + 0xd0) = 1;
      *(undefined8 **)(unaff_x22 + 0xd8) = puVar10;
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar9;
      func_0x000107c615bc(uVar15,unaff_x22 + 0xd0,uVar12,&UNK_10dc092b8,puVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar15);
      func_0x000103770934(uVar13,0x112d453c8,&UNK_10d90ac60);
      func_0x0001000834e4(unaff_x22 + 0x38);
      lVar4 = lVar4 + 0x28;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar12 = **(undefined8 **)(unaff_x22 + 0xf8);
  uVar9 = 0x112f90610;
  func_0x0001000285a8(0x112f90610,&UNK_10dc091d0);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar9;
  func_0x000107c5fcc4(uVar13,uVar12,uVar9);
  uVar9 = 0x112f908d0;
  func_0x0001037708a8(0x112f908d0,0x112f908c8,&UNK_10dc09288,
                      PTR___sScG8IteratorVyx_GScIsMc_11034fc18);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScI4next7ElementQzSgyYaKFTjTu_11034fc38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x150) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10376f2dc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScI4next7ElementQzSgyYaKFTj_11034fc30)
            (plVar8,unaff_x22 + 0xe8,*(undefined8 *)(unaff_x22 + 0x130),uVar9);
  return;
}


