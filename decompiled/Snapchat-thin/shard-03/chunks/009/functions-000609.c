/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102eb9d90; end: 102eb9e6b;  */

void FUN_102eb9d90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar3 + 8))(uVar4,uVar2);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar3 + 0x40))(uVar4,uVar5,0,0,0x54,uVar2,lVar3);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000102ebf318(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102eb9e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb9e6c; end: 102eb9eeb;  */

void FUN_102eb9e6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb9ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb9eec; end: 102eb9fab;  */

void FUN_102eb9eec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c61170(uVar1);
  FUN_102ebf318(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar4,uVar3,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb9fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb9fac; end: 102eba06f;  */

void FUN_102eb9fac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar3 + 0x40))(uVar5,uVar4,0,0,0x54,uVar1,lVar3);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eba06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eba070; end: 102eba13b;  */

void FUN_102eba070(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar5 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x148));
  func_0x000107c61170(uVar1);
  (**(code **)(lVar5 + 8))(uVar2,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar5 + 0x40))(uVar4,uVar6,0,0,0x54,uVar1,lVar5);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eba138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eba13c; end: 102eba157;  */

void FUN_102eba13c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba158,0,0);
  return;
}



/* Entry: 102eba158; end: 102eba2b7;  */

void FUN_102eba158(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar2 = &UNK_1105e4970;
  func_0x000107c613fc(&UNK_1105e4970,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar1);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  uVar4 = lVar10 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  (**(code **)(lVar9 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1105e4998;
  func_0x000107c613fc(&UNK_1105e4998,uVar11 + lVar10,uVar8 | 7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  (**(code **)(lVar9 + 0x20))(puVar5 + uVar11,uVar4,lVar3);
  func_0x000107c615c0(uVar4);
  uVar6 = 0;
  func_0x0001048897a0(0,1,0,0x102ebf46c,puVar5);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  func_0x000107c61574(puVar5);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102eba2b8;
                    /* WARNING: Could not recover jumptable at 0x000102eba2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 102eba2b8; end: 102eba30b;  */

void FUN_102eba2b8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba30c,0,0);
  return;
}



/* Entry: 102eba30c; end: 102eba3a7;  */

void FUN_102eba30c(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102eba3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102eba3a8; end: 102eba3c3;  */

void FUN_102eba3a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba3c4,0,0);
  return;
}



/* Entry: 102eba3c4; end: 102eba45b;  */

void FUN_102eba3c4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x38) + 0x10);
  uVar1 = 0x112f27458;
  func_0x0001000285a8(0x112f27458,&UNK_10db62b40);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102eba45c;
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



/* Entry: 102eba45c; end: 102eba503;  */

void FUN_102eba45c(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x40));
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long *)(lVar5 + 0x50) = lVar4;
    lVar1 = lVar4;
    func_0x000107c614f0();
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x58) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_102eba504;
    lVar6 = *(long *)(lVar5 + 0x28);
    lVar5 = *(long *)(lVar5 + 0x30);
    plVar2[8] = lVar1;
    plVar2[9] = lVar4;
    plVar2[6] = lVar6;
    plVar2[7] = lVar5;
    pcVar3 = FUN_102eba5e8;
  }
  else {
    pcVar3 = FUN_102eba574;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102eba504; end: 102eba567;  */

void FUN_102eba504(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102eba568;
  }
  else {
    pcVar2 = FUN_102eba5c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102eba568; end: 102eba573;  */

void FUN_102eba568(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102eba570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eba574; end: 102eba5bf;  */

void FUN_102eba574(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102eba5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eba5c0; end: 102eba5e7;  */

void FUN_102eba5c0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102eba5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eba5e8; end: 102eba6fb;  */

void FUN_102eba5e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar4 = &UNK_1105e4970;
  func_0x000107c613fc(&UNK_1105e4970,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,uVar2);
  puVar5 = &UNK_1105e49e8;
  func_0x000107c613fc(&UNK_1105e49e8,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  uVar6 = 0;
  func_0x0001048897a0(0,1,0,FUN_102ebf4bc,puVar5);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  func_0x000107c61574(puVar5);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102eba6fc;
                    /* WARNING: Could not recover jumptable at 0x000102eba6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_100fab8ec)();
  return;
}



/* Entry: 102eba6fc; end: 102eba74f;  */

void FUN_102eba6fc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_2;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined1 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba750,0,0);
  return;
}



/* Entry: 102eba750; end: 102eba7eb;  */

void FUN_102eba750(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102eba7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102eba7ec; end: 102eba893;  */

void FUN_102eba7ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x100) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x108) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba894,0,0);
  return;
}



/* Entry: 102eba894; end: 102eba957;  */

/* WARNING: Removing unreachable block (ram,0x000102eba8c4) */

void FUN_102eba894(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  FUN_102eb414c();
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0xf0) + 0x18);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eba958;
  plVar1[5] = unaff_x22 + 0x10;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102eba958; end: 102eba99f;  */

void FUN_102eba958(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba9a0,0,0);
  return;
}



/* Entry: 102eba9a0; end: 102ebaa37;  */

void FUN_102eba9a0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x138) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ebaa38;
                    /* WARNING: Could not recover jumptable at 0x000102ebaa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x128),"renderShareableMedia(snapDoc:)",0x1e,
             0x1000000000000002,0x6b,uVar2,lVar3);
  return;
}



/* Entry: 102ebaa38; end: 102ebaa97;  */

void FUN_102ebaa38(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x140) = param_1;
  *(long *)(lVar2 + 0x148) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebaa98;
  }
  else {
    pcVar1 = FUN_102ebc4c4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebaa98; end: 102ebac7f;  */

void FUN_102ebaa98(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  lVar12 = *(long *)(unaff_x22 + 0x148);
  func_0x000107c5fd64();
  *(long *)(unaff_x22 + 0x150) = lVar12;
  if (lVar12 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar12 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar12 + 0x40))(uVar13,uVar7,0,0,0x54,uVar3,lVar12);
    func_0x000107c61574();
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar7);
    func_0x000102ebf318(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000102ebab6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x0001000d224c(unaff_x22 + 0xb0);
  uVar10 = *(ulong *)(unaff_x22 + 0xb0);
  uVar1 = uVar10;
  func_0x000107c5ab5c();
  func_0x000107c615e8();
  if (((uVar1 & 1) == 0) || (func_0x000103be4468(), (uVar10 & 1) == 0)) {
    plVar11 = *(long **)(*(long *)(unaff_x22 + 0xf0) + 0x28);
    uVar3 = 0x112f27440;
    func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    plVar4 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x160) = plVar4;
    plVar2 = plVar4;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x168) = plVar2;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102ebaf4c;
    plVar4[0xb] = (long)plVar2;
    plVar4[0xc] = unaff_x22 + 0xd0;
    plVar4[9] = unaff_x22 + 200;
    plVar4[10] = (long)&UNK_1107a6f08;
    plVar4[8] = unaff_x22 + 0xc0;
    lVar9 = *plVar11;
    plVar4[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar12 = 0x10;
    _swift_task_alloc();
    plVar4[0xe] = lVar12;
    lVar12 = *(long *)(lVar9 + 0x50);
    plVar4[0xf] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar4[0x10] = lVar12;
    uVar1 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[0x11] = uVar1;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    plVar4[0x12] = (long)plVar2;
    *plVar2 = (long)plVar4;
    plVar2[1] = (long)&UNK_104876614;
    plVar2[5] = uVar1;
    plVar2[6] = (long)plVar11;
    lVar9 = *(long *)(*plVar11 + 0x50);
    plVar2[7] = lVar9;
    lVar12 = 0;
    __sSqMa(0,lVar9);
    plVar2[8] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar2[9] = lVar12;
    uVar1 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar1;
    lVar12 = *(long *)(lVar9 + -8);
    plVar2[0xb] = lVar12;
    uVar1 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar1;
    pcVar5 = (code *)&UNK_104875f90;
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x140);
    plVar2 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x158) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102ebac80;
    lVar6 = *(long *)(unaff_x22 + 0x128);
    lVar12 = *(long *)(unaff_x22 + 0xf0);
    lVar9 = *(long *)(unaff_x22 + 0xf8);
    plVar2[0x10] = lVar8;
    plVar2[0x11] = lVar12;
    plVar2[0xe] = lVar9;
    plVar2[0xf] = lVar6;
    lVar12 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar1 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0x12] = uVar1;
    lVar12 = 0;
    func_0x000107c5ede0();
    plVar2[0x13] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar2[0x14] = lVar12;
    uVar1 = *(long *)(lVar12 + 0x40) + 0xf;
    uVar10 = uVar1 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0x15] = uVar10;
    uVar10 = uVar1 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0x16] = uVar10;
    uVar1 = uVar1 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar2[0x17] = uVar1;
    pcVar5 = FUN_102eb8304;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 102ebac80; end: 102ebacc7;  */

void FUN_102ebac80(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x158));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebacc8,0,0);
  return;
}



/* Entry: 102ebacc8; end: 102ebaf4b;  */

void FUN_102ebacc8(void)

{
  undefined8 uVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar4 = *(long *)(unaff_x22 + 0x108);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = uVar11;
  (**(code **)(lVar4 + 0x30))(uVar11,1,uVar3);
  if ((int)uVar10 == 1) {
    func_0x0001000293e4(uVar11);
    plVar9 = *(long **)(*(long *)(unaff_x22 + 0xf0) + 0x28);
    uVar3 = 0x112f27440;
    func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x160) = plVar2;
    plVar6 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x168) = plVar6;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102ebaf4c;
    plVar2[0xb] = (long)plVar6;
    plVar2[0xc] = unaff_x22 + 0xd0;
    plVar2[9] = unaff_x22 + 200;
    plVar2[10] = (long)&UNK_1107a6f08;
    plVar2[8] = unaff_x22 + 0xc0;
    lVar8 = *plVar9;
    plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar4 = 0x10;
    _swift_task_alloc();
    plVar2[0xe] = lVar4;
    lVar4 = *(long *)(lVar8 + 0x50);
    plVar2[0xf] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar2[0x10] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0x11] = uVar5;
    plVar6 = (long *)0x70;
    _swift_task_alloc();
    plVar2[0x12] = (long)plVar6;
    *plVar6 = (long)plVar2;
    plVar6[1] = (long)&UNK_104876614;
    plVar6[5] = uVar5;
    plVar6[6] = (long)plVar9;
    lVar8 = *(long *)(*plVar9 + 0x50);
    plVar6[7] = lVar8;
    lVar4 = 0;
    __sSqMa(0,lVar8);
    plVar6[8] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar6[9] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[10] = uVar5;
    lVar4 = *(long *)(lVar8 + -8);
    plVar6[0xb] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0x150);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(lVar4 + 0x20))(uVar10,uVar11,uVar3);
  FUN_102ebc938(uVar12,uVar10);
  if (lVar8 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x100));
    uVar3 = 0;
    func_0x00010392d0f4(0);
    func_0x000107c6159c(uVar10,uVar3,1);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar11);
    (**(code **)(lVar4 + 0x40))(uVar12,uVar7,0,0,0x54,uVar11,lVar4);
    func_0x000107c61574();
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar7);
    func_0x000102ebf318(unaff_x22 + 0x10);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x100));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar4 + 0x40))(uVar10,uVar11,0,0,0x54,uVar3,lVar4);
    func_0x000107c61574();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000102ebf318(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ebaf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ebaf4c; end: 102ebaff3;  */

void FUN_102ebaf4c(void)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x160));
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar5 + 0xc0);
    *(long *)(lVar5 + 0x170) = lVar4;
    func_0x000107c614f0(lVar4);
    plVar2 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x178) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_102ebaff4;
    lVar5 = *(long *)(lVar5 + 0x128);
    plVar1 = (long *)0x100;
    func_0x000107c615b8();
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = 0x102eb4c30;
    plVar1[0x13] = 0;
    plVar1[0x14] = lVar4;
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar1[0xf] = lVar5;
    plVar1[0x10] = 0x10;
    pcVar3 = FUN_102eb4270;
  }
  else {
    pcVar3 = FUN_102ebc55c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102ebaff4; end: 102ebb05b;  */

void FUN_102ebaff4(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x180) = param_1;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x178));
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x170));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebb05c;
  }
  else {
    pcVar1 = FUN_102ebc640;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebb05c; end: 102ebb10f;  */

void FUN_102ebb05c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000107c5b198();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 400) = uVar4;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102ebb110;
                    /* WARNING: Could not recover jumptable at 0x000102ebb10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (uVar4,"renderShareableMedia(snapDoc:)",0x1e,0x1000000000000002,0x7f,uVar2,lVar3);
  return;
}



/* Entry: 102ebb110; end: 102ebb16f;  */

void FUN_102ebb110(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1a0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebb170;
  }
  else {
    pcVar1 = FUN_102ebc700;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebb170; end: 102ebb267;  */

void FUN_102ebb170(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  code *pcVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  iVar1 = (int)*(undefined8 *)(unaff_x22 + 400);
  func_0x000107c44920();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x128);
    func_0x000107c4adb4();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x1a8) = lVar2;
    if (lVar2 != 0) {
      func_0x000107c44fd8();
      *(long *)(unaff_x22 + 0xd8) = lVar2;
      puVar3 = PTR___ss5Int64VN_11034ee50;
      puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      func_0x000107c6057c();
      *(undefined **)(unaff_x22 + 0x1b0) = puVar7;
      plVar4 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x1b8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102ebb268;
      lVar2 = *(long *)(unaff_x22 + 0xf0);
      plVar4[0x13] = *(long *)(unaff_x22 + 0x128);
      plVar4[0x14] = lVar2;
      plVar4[0x11] = (long)puVar3;
      plVar4[0x12] = (long)puVar7;
      pcVar6 = FUN_102ebccd4;
      goto _swift_task_switch;
    }
  }
  *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
  plVar8 = *(long **)(*(long *)(unaff_x22 + 0xf0) + 0x30);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1d0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102ebb328;
  plVar4[5] = unaff_x22 + 0x38;
  plVar4[6] = (long)plVar8;
  lVar9 = *(long *)(*plVar8 + 0x50);
  plVar4[7] = lVar9;
  lVar2 = 0;
  __sSqMa(0,lVar9);
  plVar4[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[9] = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[10] = uVar5;
  lVar2 = *(long *)(lVar9 + -8);
  plVar4[0xb] = lVar2;
  uVar5 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[0xc] = uVar5;
  pcVar6 = (code *)&UNK_104875f90;
_swift_task_switch:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar6,0,0);
  return;
}



/* Entry: 102ebb268; end: 102ebb36f;  */

void FUN_102ebb268(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x1b0);
  *(undefined8 *)(lVar2 + 0x1c0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1b8));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ebb2c0,0,0);
  return;
}



/* Entry: 102ebb370; end: 102ebb5a7;  */

void FUN_102ebb370(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar4 = *(long *)(unaff_x22 + 400);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000102ebf338(unaff_x22 + 0x38,uVar10);
  (**(code **)(lVar2 + 8))(lVar4,uVar10,lVar2);
  plVar1 = (long *)(unaff_x22 + 0x38);
  func_0x000102ebf318();
  if (lVar4 == 1) {
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0xf0) + 0x20);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x210) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102ebba7c;
    lVar2 = unaff_x22 + 0x60;
  }
  else {
    if (lVar4 != 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x1c8);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar9 = *(undefined8 *)(unaff_x22 + 400);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
      func_0x000102ebe0f8();
      func_0x000107c613f8(&UNK_1105e4ab0,plVar1,0,0);
      *plVar1 = lVar4;
      func_0x000107c61654();
      func_0x000107c61170(uVar10);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar2 = *(long *)(unaff_x22 + 0x30);
      func_0x000102ebf338(unaff_x22 + 0x10,uVar10);
      (**(code **)(lVar2 + 0x40))(uVar9,uVar11,0,0,0x54,uVar10,lVar2);
      func_0x000107c61574();
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar9);
      func_0x000107c615e8(uVar8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar2 = *(long *)(unaff_x22 + 0x30);
      func_0x000102ebf338(unaff_x22 + 0x10,uVar10);
      (**(code **)(lVar2 + 0x40))(uVar7,uVar6,0,0,0x54,uVar10,lVar2);
      func_0x000107c61574();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000102ebf318(unaff_x22 + 0x10);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
      func_0x000107c615c0(uVar10);
      func_0x000107c615c0(uVar6);
      func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102ebb5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0xf0) + 0x20);
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1d8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102ebb5a8;
    lVar2 = unaff_x22 + 0x88;
  }
  plVar1[5] = lVar2;
  plVar1[6] = (long)plVar5;
  lVar4 = *(long *)(*plVar5 + 0x50);
  plVar1[7] = lVar4;
  lVar2 = 0;
  __sSqMa(0,lVar4);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar4 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ebb5a8; end: 102ebb5ef;  */

void FUN_102ebb5a8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebb5f0,0,0);
  return;
}



/* Entry: 102ebb5f0; end: 102ebb66b;  */

void FUN_102ebb5f0(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000102ebf338(unaff_x22 + 0x88,*(undefined8 *)(unaff_x22 + 0xa0));
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ebb66c;
                    /* WARNING: Could not recover jumptable at 0x000102ebb668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102ebcea4(*(undefined8 *)(unaff_x22 + 400),uVar2);
  return;
}



/* Entry: 102ebb66c; end: 102ebb6cb;  */

void FUN_102ebb66c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1e8) = param_1;
  *(long *)(lVar2 + 0x1f0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1e0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebb6cc;
  }
  else {
    pcVar1 = FUN_102ebc800;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebb6cc; end: 102ebb8b7;  */

void FUN_102ebb6cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x1c8);
  FUN_102ebf318(unaff_x22 + 0x88);
  if (lVar7 != 0) {
    lVar9 = *(long *)(unaff_x22 + 0x1c8);
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0xf0) + 0x50);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x1f8) = lVar7;
    if (lVar7 != 0) {
      lVar2 = lVar7;
      func_0x000107c43d6c();
      if ((int)lVar2 != 0) {
        plVar3 = (long *)0xb0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x200) = plVar3;
        *plVar3 = unaff_x22;
        plVar3[1] = (long)FUN_102ebb8b8;
        lVar7 = *(long *)(unaff_x22 + 0xf0);
        plVar3[0x12] = *(long *)(unaff_x22 + 0x1e8);
        plVar3[0x13] = lVar7;
        plVar3[0x11] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebd1e8,0,0);
        return;
      }
      func_0x000107c615e8(lVar7);
    }
    func_0x000107c61170(lVar9);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar8 = *(undefined8 **)(unaff_x22 + 0xe0);
  *puVar8 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar4 = 0;
  func_0x00010392d0f4(0);
  func_0x000107c6159c(puVar8,uVar4,0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar7 + 0x40))(uVar10,uVar5,0,0,0x54,uVar4,lVar7);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar11);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar10);
  (**(code **)(lVar7 + 0x40))(uVar11,uVar6,0,0,0x54,uVar10,lVar7);
  func_0x000107c61574();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  FUN_102ebf318(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000102ebb8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebb8b8; end: 102ebb907;  */

void FUN_102ebb8b8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x208) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebb908,0,0);
  return;
}



/* Entry: 102ebb908; end: 102ebba7b;  */

void FUN_102ebb908(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x1f8));
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar6 = *(undefined8 **)(unaff_x22 + 0xe0);
  *puVar6 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar3 = 0;
  func_0x00010392d0f4(0);
  func_0x000107c6159c(puVar6,uVar3,0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
  (**(code **)(lVar1 + 0x40))(uVar7,uVar5,0,0,0x54,uVar3,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c615e8(uVar8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar7);
  (**(code **)(lVar1 + 0x40))(uVar8,uVar4,0,0,0x54,uVar7,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000102ebf318(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000102ebba78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebba7c; end: 102ebbac3;  */

void FUN_102ebba7c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebbac4,0,0);
  return;
}



/* Entry: 102ebbac4; end: 102ebbceb;  */

void FUN_102ebbac4(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = (undefined8 *)(unaff_x22 + 0x60);
  func_0x000102ebf338(puVar2,*(undefined8 *)(unaff_x22 + 0x78));
  func_0x00010391354c();
  *(undefined8 **)(unaff_x22 + 0x218) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
    plVar3 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x220) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102ebbcec;
                    /* WARNING: Could not recover jumptable at 0x000102ebbb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    FUN_102ebecf4(plVar3,*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 400),uVar4,
                  puVar2);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000102ebe138();
  func_0x000107c613f8(&UNK_1105e4c38,puVar2,0,0);
  *puVar2 = uVar7;
  puVar2[1] = uVar4;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 5;
  func_0x000107c61654();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000102ebf318(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar1 + 0x40))(uVar10,uVar9,0,0,0x54,uVar4,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar11);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar4);
  (**(code **)(lVar1 + 0x40))(uVar6,uVar5,0,0,0x54,uVar4,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102ebbce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebbcec; end: 102ebbd47;  */

void FUN_102ebbcec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x228) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x220));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebbd48;
  }
  else {
    pcVar1 = FUN_102ebc074;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebbd48; end: 102ebc073;  */

void FUN_102ebbd48(void)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(unaff_x22 + 0x1c8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x218));
  FUN_102ebf318(unaff_x22 + 0x60);
  if (lVar6 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x1c8);
    lVar4 = *(long *)(*(long *)(unaff_x22 + 0xf0) + 0x50);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x230) = lVar4;
    if (lVar4 != 0) {
      lVar7 = lVar4;
      func_0x000107c43d6c();
      if ((int)lVar7 != 0) {
        plVar1 = (long *)0x110;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x238) = plVar1;
        *plVar1 = unaff_x22;
        plVar1[1] = (long)FUN_102ebc1c0;
        lVar4 = *(long *)(unaff_x22 + 0x110);
        lVar7 = *(long *)(unaff_x22 + 0xf0);
        plVar1[0x18] = *(long *)(unaff_x22 + 0x118);
        plVar1[0x19] = lVar7;
        plVar1[0x16] = lVar4;
        plVar1[0x17] = lVar6;
        lVar6 = 0;
        func_0x000107c5ede0();
        plVar1[0x1a] = lVar6;
        lVar6 = *(long *)(lVar6 + -8);
        plVar1[0x1b] = lVar6;
        lVar6 = *(long *)(lVar6 + 0x40);
        plVar1[0x1c] = lVar6;
        uVar3 = lVar6 + 0xf;
        uVar2 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar1[0x1d] = uVar2;
        uVar3 = uVar3 & 0xfffffffffffffff0;
        func_0x000107c615b8();
        plVar1[0x1e] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebd44c,0,0);
        return;
      }
      func_0x000107c615e8(lVar4);
    }
    func_0x000107c61170(lVar6);
  }
  lVar6 = *(long *)(unaff_x22 + 0x228);
  FUN_102ebc938(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x118));
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar9 = *(undefined8 *)(unaff_x22 + 400);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  if (lVar6 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x100));
    func_0x000107c61170(uVar8);
    uVar8 = 0;
    func_0x00010392d0f4(0);
    func_0x000107c6159c(uVar11,uVar8,1);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar8);
    (**(code **)(lVar6 + 0x40))(uVar9,uVar10,0,0,0x54,uVar8,lVar6);
    func_0x000107c61574();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar5);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar9);
    (**(code **)(lVar6 + 0x40))(uVar10,uVar12,0,0,0x54,uVar9,lVar6);
    func_0x000107c61574();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar12);
    FUN_102ebf318(unaff_x22 + 0x10);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x100));
    func_0x000107c61170(uVar8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar8);
    (**(code **)(lVar6 + 0x40))(uVar9,uVar10,0,0,0x54,uVar8,lVar6);
    func_0x000107c61574();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c615e8(uVar5);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar6 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar5);
    (**(code **)(lVar6 + 0x40))(uVar12,uVar11,0,0,0x54,uVar5,lVar6);
    func_0x000107c61574();
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    FUN_102ebf318(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ebc070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ebc074; end: 102ebc1bf;  */

void FUN_102ebc074(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x218));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1c8));
  FUN_102ebf318(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar6,uVar5,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar7);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar4,uVar3,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ebc1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebc1c0; end: 102ebc207;  */

void FUN_102ebc1c0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x238));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebc208,0,0);
  return;
}



/* Entry: 102ebc208; end: 102ebc4c3;  */

void FUN_102ebc208(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar4 = *(long *)(unaff_x22 + 0x108);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x230));
  func_0x000107c61170(uVar2);
  (**(code **)(lVar4 + 8))(uVar5,uVar3);
  (**(code **)(lVar4 + 0x20))(uVar5,uVar1,uVar3);
  lVar4 = *(long *)(unaff_x22 + 0x228);
  FUN_102ebc938(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x118));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar5 = *(undefined8 *)(unaff_x22 + 400);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x100));
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x00010392d0f4(0);
    func_0x000107c6159c(uVar6,uVar3,1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar4 + 0x40))(uVar5,uVar2,0,0,0x54,uVar3,lVar4);
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar1);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar5);
    (**(code **)(lVar4 + 0x40))(uVar2,uVar7,0,0,0x54,uVar5,lVar4);
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    func_0x000102ebf318(unaff_x22 + 0x10);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    (**(code **)(*(long *)(unaff_x22 + 0x108) + 8))
              (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x100));
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar4 + 0x40))(uVar5,uVar2,0,0,0x54,uVar3,lVar4);
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar1);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar4 = *(long *)(unaff_x22 + 0x30);
    func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar4 + 0x40))(uVar7,uVar6,0,0,0x54,uVar1,lVar4);
    func_0x000107c61574();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000102ebf318(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ebc4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ebc4c4; end: 102ebc55b;  */

void FUN_102ebc4c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102ebc558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebc55c; end: 102ebc63f;  */

void FUN_102ebc55c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x168);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c613f8(&UNK_1107a6f08,puVar2,0,0);
  *puVar2 = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar3);
  (**(code **)(lVar1 + 0x40))(uVar5,uVar4,0,0,0x54,uVar3,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102ebc63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebc640; end: 102ebc6ff;  */

void FUN_102ebc640(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar4,uVar3,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ebc6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebc700; end: 102ebc7ff;  */

void FUN_102ebc700(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000100fb85f0();
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar6;
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar1 + 0x40))(uVar5,uVar4,0,0,0x54,uVar2,lVar1);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000102ebf318(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ebc7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebc800; end: 102ebc937;  */

void FUN_102ebc800(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 400);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x1c8));
  FUN_102ebf318(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar6,uVar5,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar7);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000102ebf338(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 0x40))(uVar4,uVar3,0,0,0x54,uVar1,lVar2);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  FUN_102ebf318(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102ebc934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebc938; end: 102ebccb7;  */

void FUN_102ebc938(undefined *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined *unaff_x21;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = 0;
  func_0x000107c5eec8();
  lVar10 = *(long *)(uVar1 - 8);
  uVar11 = uVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  func_0x0001000d224c(&puStack_78);
  puVar2 = puStack_78;
  if (puStack_78 == (undefined *)0x0) {
    puVar2 = (undefined *)0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    puVar3 = (undefined *)0xd000000000000033;
    lVar10 = -0x7ffffffef0eec950;
    func_0x000107c5fadc();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168();
    puVar9 = puVar2;
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    param_1 = puVar3;
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c5ed6c();
    uVar12 = param_3;
    uVar8 = param_3;
    func_0x000107c6142c(param_3);
    uVar11 = uVar11 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar11 = param_3 >> 0x38 & 0xf;
    }
    if (uVar11 == 0) {
      uVar11 = 0xe300000000000000;
      uVar12 = 0x34706d;
    }
    else {
      func_0x000107c5ed6c();
      uVar11 = uVar8;
    }
    puStack_78 = (undefined *)0x0;
    lStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x1c);
    lVar5 = lStack_70;
    func_0x000107c6142c(lStack_70);
    puStack_78 = (undefined *)0xd000000000000017;
    lStack_70 = -0x7ffffffef0eec910;
    func_0x000107c5eec4(&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5eeac();
    (**(code **)(lVar10 + 8))
              (&stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar1);
    func_0x000107c5fb78(lVar5,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c5fb78(0x2e,0xe100000000000000);
    func_0x000107c5fb78(uVar12,uVar11);
    func_0x000107c6142c(uVar11);
    lVar10 = lStack_70;
    puVar3 = puStack_78;
    lVar5 = lStack_70;
    func_0x000107c5fadc(puStack_78);
    func_0x000107c6142c(lVar10);
    puVar4 = puVar2;
    func_0x000107c43444(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c5faec(puVar4);
    func_0x000107c61170(puVar4);
    lVar10 = lVar5;
    func_0x000107c5ed80(param_1,puVar3);
    func_0x000107c6142c(lVar5);
    puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar6 = puVar4;
    func_0x000107c5ed90();
    puVar3 = puVar6;
    func_0x000107c5ed90();
    puStack_78 = (undefined *)0x0;
    puVar7 = puVar4;
    puVar9 = puVar6;
    func_0x000107c4079c();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar3);
    puVar4 = puStack_78;
    if (((ulong)puVar7 & 1) == 0) {
      puVar3 = puStack_78;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(puVar3);
      func_0x000107c61654();
      func_0x000107c615e8(puVar2);
      lVar10 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar10 + -8) + 8))();
    }
    else {
      func_0x000107c61174(puStack_78);
      func_0x000107c615e8();
      param_1 = puVar2;
      puVar4 = unaff_x21;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(undefined **)(puVar4 + 0x98) = puVar9;
  *(undefined **)(puVar4 + 0xa0) = puVar3;
  *(undefined **)(puVar4 + 0x88) = param_1;
  *(long *)(puVar4 + 0x90) = lVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebccd4,0,0);
  return;
}



/* Entry: 102ebccb8; end: 102ebccd3;  */

void FUN_102ebccb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebccd4,0,0);
  return;
}



/* Entry: 102ebccd4; end: 102ebce2f;  */

void FUN_102ebccd4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  if (lVar4 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102ebce30;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    func_0x000107c5fadc(uVar5,uVar2);
    uVar2 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    puVar3 = &UNK_1105e4790;
    func_0x000107c613fc(&UNK_1105e4790,0x18,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_102ebf35c;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x102ebf53c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105e47a8;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4b55c(lVar4);
    func_0x000107c60bd0(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102ebce2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102ebce30; end: 102ebcea3;  */

void FUN_102ebce30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ebce70,0,0);
  return;
}



/* Entry: 102ebcea4; end: 102ebcebf;  */

void FUN_102ebcea4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebcec0,0,0);
  return;
}



/* Entry: 102ebcec0; end: 102ebd00f;  */

void FUN_102ebcec0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long unaff_x22;
  
  func_0x000103913740();
  *(undefined8 **)(unaff_x22 + 0x28) = param_1;
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000102ebe138();
    func_0x000107c613f8(&UNK_1105e4c38,param_1,0,0);
    *param_1 = uVar2;
    param_1[1] = uVar4;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 4;
    func_0x000107c61654();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar4);
  }
  else {
    puVar5 = param_1;
    func_0x000102ebe138();
    *(undefined8 **)(unaff_x22 + 0x30) = puVar5;
    puVar6 = &UNK_1105e4c38;
    func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = param_1;
    *(undefined1 *)(puVar5 + 3) = 3;
    func_0x000107c61174();
    func_0x000107c4c930();
    func_0x000107c61180();
    *(undefined8 **)(unaff_x22 + 0x38) = param_1;
    if (param_1 != (undefined8 *)0x0) {
      func_0x000107c614ac(puVar6);
      plVar7 = (long *)0x30;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x40) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_102ebd010;
      lVar1 = *(long *)(unaff_x22 + 0x18);
      lVar3 = *(long *)(unaff_x22 + 0x20);
      lVar9 = *(long *)(unaff_x22 + 0x10);
      plVar7[2] = lVar1;
      plVar7[3] = (long)param_1;
      plVar8 = (long *)0x90;
      func_0x000107c615b8();
      plVar7[4] = (long)plVar8;
      *plVar8 = (long)plVar7;
      plVar8[1] = (long)FUN_102ebf70c;
      plVar8[8] = (long)param_1;
      plVar8[9] = lVar3;
      plVar8[6] = lVar9;
      plVar8[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec0060,0,0);
      return;
    }
    func_0x000107c61654();
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ebd00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebd010; end: 102ebd073;  */

void FUN_102ebd010(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(undefined8 *)(lVar2 + 0x50) = param_2;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebd074;
  }
  else {
    pcVar1 = FUN_102ebd190;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebd074; end: 102ebd18f;  */

void FUN_102ebd074(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x00010006c00c(uVar1,uVar2);
  uVar5 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x000107c4635c();
  func_0x000107c61170(uVar5);
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  if (puVar3 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x00010006c090(uVar1,uVar2);
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102ebd12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar3);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x30);
  func_0x000107c613f8(&UNK_1105e4c38,puVar4,0,0);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = uVar5;
  *(undefined1 *)(puVar4 + 3) = 6;
  func_0x000107c61654();
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ebd18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebd190; end: 102ebd1cb;  */

void FUN_102ebd190(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000102ebd1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebd1cc; end: 102ebd1e7;  */

void FUN_102ebd1cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebd1e8,0,0);
  return;
}



/* Entry: 102ebd1e8; end: 102ebd363;  */

void FUN_102ebd1e8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  if (lVar5 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102ebd364;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c4ee64(uVar6);
    func_0x000107c5e150(uVar6);
    puVar4 = &UNK_1105e47e0;
    func_0x000107c613fc(&UNK_1105e47e0,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(code **)(unaff_x22 + 0x70) = FUN_102ebf38c;
    *(undefined **)(unaff_x22 + 0x78) = puVar4;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102ebe918;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105e47f8;
    lVar2 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar2);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
    func_0x000107c61174(uVar1);
    func_0x000107c61574(uVar6);
    func_0x000107c43e14(lVar5);
    func_0x000107c60bd0(lVar2);
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000102ebd360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ebd364; end: 102ebd44b;  */

void FUN_102ebd364(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ebd3a4,0,0);
  return;
}



/* Entry: 102ebd44c; end: 102ebd73f;  */

void FUN_102ebd44c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  func_0x0001000d224c(unaff_x22 + 0x98);
  lVar10 = *(long *)(unaff_x22 + 0x98);
  *(long *)(unaff_x22 + 0xf8) = lVar10;
  if (lVar10 != 0) {
    lVar4 = lVar10;
    func_0x000107c40b94();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x100) = lVar4;
    if (lVar4 != 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c61644(unaff_x22 + 0xa0,*(undefined8 *)(unaff_x22 + 200));
      *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102ebd740;
      lVar10 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar10,0);
      func_0x000107c61428(unaff_x22 + 0xa0,unaff_x22 + 0x80,0,0);
      lVar5 = unaff_x22 + 0xa0;
      func_0x000107c61648();
      if (lVar5 == 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
        lVar4 = *(long *)(unaff_x22 + 0xd8);
        (**(code **)(lVar4 + 0x10))(uVar12,*(undefined8 *)(unaff_x22 + 0xc0),uVar11);
        (**(code **)(lVar4 + 0x20))(*(undefined8 *)(*(long *)(lVar10 + 0x40) + 0x28),uVar12,uVar11);
        func_0x000107c6144c(lVar10);
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
        lVar1 = *(long *)(unaff_x22 + 0xd8);
        lVar2 = *(long *)(unaff_x22 + 0xe0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar6 = uVar3;
        FUN_102ebe178(uVar12,uVar3);
        func_0x0001000d224c(unaff_x22 + 0xa8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
        func_0x000107c5ed90();
        uVar7 = uVar14;
        func_0x000107c5dde4(uVar14);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(uVar14);
        func_0x000107c5a534(lVar4);
        func_0x000107c5a658(lVar4);
        func_0x000107c5513c(lVar4);
        func_0x000107c58bec(lVar4);
        func_0x000107c529f4(lVar4);
        (**(code **)(lVar1 + 0x10))(uVar11,uVar3,uVar13);
        uVar9 = (ulong)*(byte *)(lVar1 + 0x50);
        uVar15 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
        puVar8 = &UNK_1105e4920;
        func_0x000107c613fc(&UNK_1105e4920,uVar15 + lVar2,uVar9 | 7);
        *(long *)(puVar8 + 0x10) = lVar10;
        (**(code **)(lVar1 + 0x20))(puVar8 + uVar15,uVar11,uVar13);
        *(code **)(unaff_x22 + 0x70) = FUN_102ebf41c;
        *(undefined **)(unaff_x22 + 0x78) = puVar8;
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_101ef3328;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_1105e4938;
        lVar10 = unaff_x22 + 0x50;
        func_0x000107c60bc4(lVar10);
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
        func_0x000107c434fc(lVar4);
        func_0x000107c615e8(uVar7);
        func_0x000107c60bd0(lVar10);
        func_0x000107c61574(lVar5);
        (**(code **)(lVar1 + 8))(uVar12,uVar13);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(lVar10);
  }
  (**(code **)(*(long *)(unaff_x22 + 0xd8) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0xb0),*(undefined8 *)(unaff_x22 + 0xc0),
             *(undefined8 *)(unaff_x22 + 0xd0));
  uVar11 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000102ebd6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebd740; end: 102ebd77f;  */

void FUN_102ebd740(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebd780,0,0);
  return;
}



/* Entry: 102ebd780; end: 102ebd7d3;  */

void FUN_102ebd780(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61640(unaff_x22 + 0xa0);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ebd7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebd7d4; end: 102ebd7ef;  */

void FUN_102ebd7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebd7f0,0,0);
  return;
}



/* Entry: 102ebd7f0; end: 102ebd93f;  */

void FUN_102ebd7f0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  func_0x00010391354c();
  *(undefined8 **)(unaff_x22 + 0x30) = param_1;
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000102ebe138();
    func_0x000107c613f8(&UNK_1105e4c38,param_1,0,0);
    *param_1 = uVar2;
    param_1[1] = uVar4;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 5;
    func_0x000107c61654();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar4);
  }
  else {
    puVar5 = param_1;
    func_0x000102ebe138();
    puVar6 = &UNK_1105e4c38;
    func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = param_1;
    *(undefined1 *)(puVar5 + 3) = 3;
    func_0x000107c61174();
    puVar5 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    *(undefined8 **)(unaff_x22 + 0x38) = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      func_0x000107c614ac(puVar6);
      plVar7 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x40) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_102ebd940;
      lVar8 = *(long *)(unaff_x22 + 0x28);
      lVar1 = *(long *)(unaff_x22 + 0x10);
      lVar3 = *(long *)(unaff_x22 + 0x18);
      plVar7[8] = (long)puVar5;
      plVar7[9] = lVar8;
      plVar7[6] = lVar1;
      plVar7[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf990,0,0);
      return;
    }
    func_0x000107c61654();
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102ebd93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebd940; end: 102ebda13;  */

void FUN_102ebd940(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar1 = 0x102ebd99c;
  }
  else {
    uVar1 = 0x102ebd9d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102ebda14; end: 102ebde23;  */

/* WARNING: Possible PIC construction at 0x000102ebdf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ebdd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ebdd8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ebdd58) */
/* WARNING: Removing unreachable block (ram,0x000102ebdf0c) */
/* WARNING: Removing unreachable block (ram,0x000102ebdd90) */

void FUN_102ebda14(ulong *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  ulong *puVar13;
  ulong *puVar14;
  long unaff_x20;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong auStack_110 [12];
  long alStack_b0 [2];
  undefined1 auStack_a0 [8];
  long lStack_98;
  ulong *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5eec8();
  puVar13 = *(ulong **)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(puVar13[8]);
  puVar18 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(uVar2 - 8);
  uVar16 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar12;
  func_0x000107c5ed6c();
  lVar15 = param_3;
  func_0x000107c5fb1c();
  func_0x000107c6142c(param_3);
  if ((uVar16 == 0x34706d) && (lVar15 == -0x1d00000000000000)) {
LAB_102ebdafc:
    func_0x000107c6142c(lVar15);
LAB_102ebdb04:
    puVar14 = param_1;
    uVar11 = param_2;
    (**(code **)(lVar17 + 0x10))(param_1,param_2,uVar2);
    puVar13 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000102ebdb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar17 + 0x38))(param_1,0,1,uVar2);
      return;
    }
  }
  else {
    uVar3 = uVar16;
    func_0x000107c605b8(uVar16,lVar15,0x34706d,0xe300000000000000,0);
    if (((uVar3 & 1) != 0) || (uVar16 == 0x766f6d && lVar15 == -0x1d00000000000000))
    goto LAB_102ebdafc;
    lVar9 = lVar15;
    func_0x000107c605b8(uVar16,lVar15,0x766f6d,0xe300000000000000,0);
    func_0x000107c6142c(lVar15);
    if ((uVar16 & 1) != 0) goto LAB_102ebdb04;
    lVar15 = *(long *)(unaff_x20 + 0x60);
    func_0x0001000d224c(&puStack_78);
    puVar14 = puStack_78;
    if (puStack_78 != (ulong *)0x0) {
      puStack_78 = (ulong *)0x0;
      uStack_70 = 0xe000000000000000;
      func_0x000107c602fc(0x22);
      uVar11 = uStack_70;
      func_0x000107c6142c(uStack_70);
      puStack_78 = (ulong *)0xd00000000000001c;
      uStack_70 = 0x800000010f113690;
      func_0x000107c5eec4(puVar18);
      func_0x000107c5eeac();
      (*(code *)puVar13[1])(puVar18,lVar1);
      func_0x000107c5fb78(uVar11,lVar9);
      func_0x000107c6142c(lVar9);
      func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
      uVar11 = uStack_70;
      puVar13 = puStack_78;
      uVar10 = uStack_70;
      func_0x000107c5fadc(puStack_78,uStack_70);
      func_0x000107c6142c(uVar11);
      func_0x000107c43444(puVar14);
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      puVar13 = puVar14;
      func_0x000107c5faec(puVar14);
      func_0x000107c61170(puVar14);
      func_0x000107c5ed80(lStack_98,puVar13,uVar10);
      func_0x000107c6142c(uVar10);
      puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5ed90();
      puVar6 = puVar5;
      func_0x000107c5ed90();
      puStack_78 = (ulong *)0x0;
      func_0x000107c4b670();
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      puVar14 = puStack_78;
      goto code_r0x000107c61174;
    }
    uVar11 = 1;
    (**(code **)(lVar17 + 0x38))(param_1,1,1,uVar2);
    puVar14 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  func_0x000107c60e78();
  *(ulong *)(lVar12 + -0x30) = uVar2;
  *(undefined8 *)(lVar12 + -0x28) = param_2;
  *(long *)(lVar12 + -0x20) = lVar15;
  *(ulong **)(lVar12 + -0x18) = puVar13;
  *(undefined1 **)(lVar12 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(lVar12 + -8) = FUN_102ebde24;
  *(undefined8 *)(lVar12 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (ulong *)0x0;
  func_0x000107c5ede0();
  puVar13 = puVar7;
  func_0x000101553b98();
  puVar8 = puVar14;
  func_0x000107c5fab8(puVar14,uVar11,puVar7,puVar13);
  if (((ulong)puVar8 & 1) == 0) {
    puVar13 = (ulong *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar8 = puVar13;
    func_0x000107c5ed90();
    *(undefined8 *)(lVar12 + -0x40) = 0;
    puVar7 = puVar13;
    func_0x000107c4ff50();
    func_0x000107c61170(puVar13);
    func_0x000107c61170();
    puVar14 = *(ulong **)(lVar12 + -0x40);
    if (((int)puVar7 == 0) ||
       (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar12 + -0x38))) {
code_r0x000107c61174:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(puVar14);
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(lVar12 + -0x38)) {
    return;
  }
  func_0x000107c60e78();
  *(ulong **)(lVar12 + -0x70) = puVar14;
  *(ulong *)(lVar12 + -0x60) = lVar12 - 0x10U | 0x1000000000000000;
  *(code **)(lVar12 + -0x58) = FUN_102ebdf64;
  *(ulong *)(lVar12 + -0x68) = uVar2;
  uVar16 = *puVar7;
  puVar13 = (ulong *)0x60;
  func_0x000107c615b8();
  *(ulong **)(uVar2 + 0x10) = puVar13;
  *puVar13 = uVar2;
  puVar13[1] = 0x102ebf4fc;
  puVar13[5] = (ulong)puVar8;
  puVar13[6] = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8b8c,0,0);
  return;
}



/* Entry: 102ebde24; end: 102ebdf63;  */

/* WARNING: Possible PIC construction at 0x000102ebdf08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ebdf0c) */

void FUN_102ebde24(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x0;
  func_0x000107c5ede0();
  plVar2 = plVar1;
  func_0x000101553b98();
  func_0x000107c5fab8(param_1,param_2,plVar1,plVar2);
  if (((ulong)param_1 & 1) == 0) {
    plVar2 = (long *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    param_1 = plVar2;
    func_0x000107c5ed90();
    plVar1 = plVar2;
    func_0x000107c4ff50();
    func_0x000107c61170(plVar2);
    func_0x000107c61170();
    if (((int)plVar1 == 0) || (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(0);
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  func_0x000107c60e78();
  lVar3 = *plVar1;
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ebf4fc;
  plVar2[5] = (long)param_1;
  plVar2[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8b8c,0,0);
  return;
}



/* Entry: 102ebdf64; end: 102ebdfb3;  */

void FUN_102ebdf64(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ebf4fc;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb8b8c,0,0);
  return;
}



/* Entry: 102ebdfb4; end: 102ebe007;  */

void FUN_102ebdfb4(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102ebf500;
  plVar1[6] = 0;
  plVar1[7] = lVar2;
  plVar1[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba3c4,0,0);
  return;
}



/* Entry: 102ebe008; end: 102ebe057;  */

void FUN_102ebe008(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long *unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *unaff_x20;
  plVar2 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102ebf504;
  plVar2[0xc] = param_1;
  plVar2[0xd] = lVar3;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0xe] = uVar1;
  lVar3 = 0;
  func_0x000107c5ede0();
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x11] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb7640,0,0);
  return;
}



/* Entry: 102ebe058; end: 102ebe0bb;  */

void FUN_102ebe058(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0x240;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102ebe0bc;
  plVar3[0x1d] = param_2;
  plVar3[0x1e] = lVar4;
  plVar3[0x1c] = param_1;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x1f] = uVar1;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar3[0x20] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x21] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x22] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x23] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x24] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eba894,0,0);
  return;
}



/* Entry: 102ebe0bc; end: 102ebe177;  */

void FUN_102ebe0bc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ebe0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ebe178; end: 102ebe6f7;  */

/* WARNING: Possible PIC construction at 0x000102ebe454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ebe458) */
/* WARNING: Removing unreachable block (ram,0x000102ebe4b8) */

void FUN_102ebe178(code *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long alStack_e0 [12];
  undefined1 auStack_80 [8];
  code *pcStack_78;
  code *pcStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar13 = (code *)0x34706d;
  pcVar1 = (code *)0x0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(pcVar1 + -8);
  pcVar2 = pcVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  pcVar4 = (code *)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)pcVar4 - extraout_x12;
  func_0x000107c5ed6c();
  pcVar6 = param_3;
  func_0x000107c5fb1c();
  func_0x000107c6142c(param_3);
  if ((pcVar2 == (code *)0x34706d) &&
     (UNRECOVERED_JUMPTABLE = pcVar2, pcVar6 == (code *)0xe300000000000000)) {
LAB_102ebe240:
    pcVar3 = pcVar6;
    func_0x000107c6142c();
    pcVar2 = UNRECOVERED_JUMPTABLE;
  }
  else {
    param_4 = (code *)0x34706d;
    param_3 = pcVar2;
    pcVar5 = pcVar6;
    func_0x000107c605b8();
    UNRECOVERED_JUMPTABLE = pcVar6;
    func_0x000107c6142c();
    pcVar3 = UNRECOVERED_JUMPTABLE;
    if (((ulong)param_3 & 1) == 0) {
      pcVar13 = (code *)0x766f6d;
      func_0x000107c5ed6c();
      pcVar6 = pcVar5;
      func_0x000107c5fb1c();
      func_0x000107c6142c(pcVar5);
      if ((UNRECOVERED_JUMPTABLE == (code *)0x766f6d) &&
         (param_3 = pcVar5, pcVar6 == (code *)0xe300000000000000)) goto LAB_102ebe240;
      param_4 = (code *)0x766f6d;
      param_3 = UNRECOVERED_JUMPTABLE;
      pcVar5 = pcVar6;
      func_0x000107c605b8();
      pcVar3 = pcVar6;
      func_0x000107c6142c();
      pcVar2 = UNRECOVERED_JUMPTABLE;
      if (((ulong)param_3 & 1) == 0) {
        func_0x000107c5eda8(pcVar4);
        func_0x000107c5ed88();
        pcStack_78 = pcVar3;
        pcStack_70 = pcVar5;
        func_0x000107c61434(pcVar5);
        func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
        func_0x000107c6142c(pcVar5);
        pcVar6 = pcStack_70;
        func_0x000107c5ed9c(lVar8,pcStack_78,pcStack_70);
        func_0x000107c6142c(pcVar6);
        pcVar13 = *(code **)(lVar11 + 8);
        (*pcVar13)(pcVar4,pcVar1);
        pcVar4 = (code *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        param_3 = pcVar4;
        func_0x000107c5ed90();
        pcVar6 = param_3;
        func_0x000107c5ed90();
        pcStack_78 = (code *)0x0;
        pcVar2 = pcVar4;
        UNRECOVERED_JUMPTABLE = pcVar6;
        func_0x000107c4d13c();
        func_0x000107c61170(pcVar4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(pcVar6);
        pcVar6 = pcStack_78;
        if (((int)pcVar2 == 0) ||
           (pcVar3 = param_1, param_4 = pcVar1, (**(code **)(lVar11 + 0x20))(param_1,lVar8),
           *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_retain_11034d2d8)(pcVar6);
          return;
        }
        goto LAB_102ebe4d8;
      }
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x000102ebe2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,pcVar1);
    return;
  }
LAB_102ebe4d8:
  func_0x000107c60e78();
  *(code **)(lVar8 + -0x60) = pcVar13;
  *(long *)(lVar8 + -0x58) = lVar11;
  *(code **)(lVar8 + -0x50) = pcVar2;
  *(code **)(lVar8 + -0x48) = param_3;
  *(long *)(lVar8 + -0x40) = lVar8;
  *(code **)(lVar8 + -0x38) = pcVar1;
  *(undefined8 *)(lVar8 + -0x30) = param_2;
  *(code **)(lVar8 + -0x28) = pcVar4;
  *(code **)(lVar8 + -0x20) = pcVar6;
  *(code **)(lVar8 + -0x18) = param_1;
  *(undefined1 **)(lVar8 + -0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(lVar8 + -8) = 0x102ebe4dc;
  lVar11 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar10 = (lVar8 + -0x60) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar10 - extraout_x12_00;
  lVar8 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar11 - extraout_x12_01;
  if (pcVar3 == (code *)0x0) {
    (**(code **)(lVar12 + 0x38))(lVar7,1,1,lVar8);
  }
  else {
    func_0x000107c5d7e8();
    func_0x000107c61180();
    if (pcVar3 != (code *)0x0) {
      func_0x000107c5edb4(lVar10);
      func_0x000107c61170(pcVar3);
    }
    (**(code **)(lVar12 + 0x38))(lVar10,pcVar3 == (code *)0x0,1,lVar8);
    func_0x0001001021cc(lVar10,lVar7);
    lVar10 = lVar7;
    (**(code **)(lVar12 + 0x30))(lVar7,1,lVar8);
    if ((int)lVar10 != 1) {
      pcVar6 = *(code **)(lVar12 + 0x20);
      (*pcVar6)(lVar9,lVar7,lVar8);
      (**(code **)(lVar12 + 0x10))(lVar11,lVar9,lVar8);
      (*pcVar6)(*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x28),lVar11,lVar8);
      func_0x000107c6144c(param_4);
      (**(code **)(lVar12 + 8))(lVar9,lVar8);
      return;
    }
  }
  func_0x0001000293e4(lVar7);
  (**(code **)(lVar12 + 0x10))(lVar11,UNRECOVERED_JUMPTABLE,lVar8);
  (**(code **)(lVar12 + 0x20))(*(undefined8 *)(*(long *)(param_4 + 0x40) + 0x28),lVar11,lVar8);
  func_0x000107c6144c(param_4);
  return;
}



/* Entry: 102ebe6f8; end: 102ebe917;  */

void FUN_102ebe6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar3 = &UNK_1105e4830;
  func_0x000107c613fc(&UNK_1105e4830,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  puVar4 = &UNK_1105e4858;
  func_0x000107c613fc(&UNK_1105e4858,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_102ebf394;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102ebf3cc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_1105e4870;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1105e48a8;
  func_0x000107c613fc(&UNK_1105e48a8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  puVar7 = &UNK_1105e48d0;
  func_0x000107c613fc(&UNK_1105e48d0,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x102ebf3ec;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_80 = 0x102ebf538;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1105e48e8;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar1 = puStack_78;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x74,0x175,0x25,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ebe914);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x74,0x17b,0x1c,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ebe918);
  (*pcVar2)();
}



/* Entry: 102ebe918; end: 102ebe963;  */

void FUN_102ebe918(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102ebe964; end: 102ebeae3;  */

void FUN_102ebe964(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    uVar3 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar4 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f113720);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x00010488ade0(puVar5);
  }
  else {
    puVar5 = puVar1;
    func_0x000107c5ed90();
    uStack_68 = 0x102ebf540;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100ff4e10;
    puStack_70 = &UNK_1105e49b0;
    ppuVar2 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar2);
    uVar3 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar3);
    func_0x000107c516b0(puVar1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(puVar1);
  }
  func_0x000107c61170(puVar5);
  return;
}



/* Entry: 102ebeae4; end: 102ebeb33;  */

void FUN_102ebeae4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102ebeb34; end: 102ebecaf;  */

void FUN_102ebeb34(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar2 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar3 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f113720);
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    func_0x00010488ade0(puVar4);
    func_0x000107c61170(puVar4);
  }
  else {
    pcStack_68 = FUN_102ebf4c8;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100ff4e10;
    puStack_70 = &UNK_1105e4a00;
    ppuVar1 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar1);
    uVar2 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar2);
    func_0x000107c516ac(param_2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 102ebecb0; end: 102ebecf3;  */

void FUN_102ebecb0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c614b0();
    func_0x00010488ade0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 102ebecf4; end: 102ebed13;  */

void FUN_102ebecf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebed14,0,0);
  return;
}



/* Entry: 102ebed14; end: 102ebedef;  */

void FUN_102ebed14(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000102ebe138();
  *(long **)(unaff_x22 + 0x38) = param_1;
  puVar3 = &UNK_1105e4c38;
  func_0x000107c613f8(&UNK_1105e4c38,param_1,0,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = lVar5;
  *(undefined1 *)(param_1 + 3) = 3;
  func_0x000107c61174();
  func_0x000107c4c930();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x40) = lVar5;
  if (lVar5 != 0) {
    func_0x000107c614ac(puVar3);
    plVar4 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102ebedf0;
    lVar6 = *(long *)(unaff_x22 + 0x30);
    lVar1 = *(long *)(unaff_x22 + 0x18);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    plVar4[8] = lVar5;
    plVar4[9] = lVar6;
    plVar4[6] = lVar1;
    plVar4[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec0060,0,0);
    return;
  }
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ebedec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebedf0; end: 102ebee53;  */

void FUN_102ebedf0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebee54;
  }
  else {
    *(long *)(lVar2 + 0x58) = unaff_x20;
    pcVar1 = FUN_102ebf05c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebee54; end: 102ebf05b;  */

void FUN_102ebee54(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x50);
  func_0x000107c43fb4();
  func_0x000107c61180();
  if (uVar1 == 0) {
    puVar5 = *(undefined8 **)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar3 = &UNK_1105e4c38;
    func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = uVar8;
    *(undefined1 *)(puVar5 + 3) = 0;
    func_0x000107c61654();
    func_0x000107c61174(uVar8);
    uVar1 = *(ulong *)(unaff_x22 + 0x50);
  }
  else {
    uVar2 = uVar1;
    func_0x000107c44314();
    if (uVar2 == 0) {
      uVar2 = uVar1;
      func_0x000107c440cc();
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      if ((uVar2 & 1) == 0) {
        func_0x000107c615e8(uVar8);
        uVar2 = uVar1;
        func_0x000107c4407c();
        func_0x000107c61180();
        if (uVar2 != 0) {
          uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
          uVar4 = uVar2;
          func_0x000107c5faec();
          func_0x000107c61170(uVar2);
          func_0x000107c5ed80(uVar7,uVar4,param_2);
          func_0x000107c6142c(param_2);
          func_0x000107c615e8(uVar1);
          func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102ebf018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))();
          return;
        }
        puVar5 = *(undefined8 **)(unaff_x22 + 0x38);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
        puVar3 = &UNK_1105e4c38;
        func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = uVar8;
        *(undefined1 *)(puVar5 + 3) = 8;
        func_0x000107c61654();
        func_0x000107c61174(uVar8);
        goto LAB_102ebef5c;
      }
      puVar5 = *(undefined8 **)(unaff_x22 + 0x38);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      puVar3 = &UNK_1105e4c38;
      func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = uVar7;
      uVar6 = 7;
    }
    else {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
      puVar5 = *(undefined8 **)(unaff_x22 + 0x38);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
      puVar3 = &UNK_1105e4c38;
      func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
      *puVar5 = uVar7;
      puVar5[1] = uVar2;
      puVar5[2] = 0;
      uVar6 = 1;
    }
    *(undefined1 *)(puVar5 + 3) = uVar6;
    func_0x000107c61654();
    func_0x000107c61174(uVar7);
    func_0x000107c615e8(uVar8);
  }
LAB_102ebef5c:
  func_0x000107c615e8(uVar1);
  *(undefined **)(unaff_x22 + 0x58) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf05c,0,0);
  return;
}



/* Entry: 102ebf05c; end: 102ebf08f;  */

void FUN_102ebf05c(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000102ebf08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebf090; end: 102ebf0a7;  */

void FUN_102ebf090(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf0a8,0,0);
  return;
}



/* Entry: 102ebf0a8; end: 102ebf19b;  */

void FUN_102ebf0a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c610f8();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c48fd4();
  *(undefined **)(unaff_x22 + 0xa0) = puVar1;
  func_0x000107c61170(puVar2);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102ebf19c;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar3,1);
  uVar4 = 0x112ebe6c8;
  func_0x0001000285a8(0x112ebe6c8,&UNK_10dada2a0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10279d144;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1105e4758;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  func_0x000107c4b784(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102ebf19c; end: 102ebf1f3;  */

void FUN_102ebf19c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102ebf1f4;
  }
  else {
    pcVar1 = FUN_102ebf260;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebf1f4; end: 102ebf25f;  */

void FUN_102ebf1f4(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x22;
  
  uVar2 = *(ulong *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ebf244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1 != 0);
  return;
}



/* Entry: 102ebf260; end: 102ebf2ef;  */

void FUN_102ebf260(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa0));
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar2 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480(puVar2);
  }
  func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000102ebf2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2 != (undefined *)0x0);
  return;
}



/* Entry: 102ebf2f0; end: 102ebf2ff;  */

long FUN_102ebf2f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102ebf300; end: 102ebf317;  */

void FUN_102ebf300(long param_1)

{
  FUN_102ebf318(param_1 + 0x20);
  return;
}



/* Entry: 102ebf318; end: 102ebf35b;  */

void FUN_102ebf318(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102ebf32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102ebf35c; end: 102ebf38b;  */

void FUN_102ebf35c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 102ebf38c; end: 102ebf393;  */

void FUN_102ebf38c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_a0;
  ppuVar10 = &puStack_a0;
  puVar4 = &UNK_1105e4830;
  func_0x000107c613fc(&UNK_1105e4830,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  puVar5 = &UNK_1105e4858;
  func_0x000107c613fc(&UNK_1105e4858,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102ebf394;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x102ebf3cc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1010a45c8;
  puStack_88 = &UNK_1105e4870;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1105e48a8;
  func_0x000107c613fc(&UNK_1105e48a8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar7;
  puVar9 = &UNK_1105e48d0;
  func_0x000107c613fc(&UNK_1105e48d0,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x102ebf3ec;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  uStack_80 = 0x102ebf538;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100e27b38;
  puStack_88 = &UNK_1105e48e8;
  puStack_78 = puVar9;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x74,0x175,0x25,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102ebe914);
    (*pcVar3)();
  }
  puVar4 = puVar9;
  func_0x000107c61544(puVar9,"",0x74,0x17b,0x1c,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ebe918);
  (*pcVar3)();
}



/* Entry: 102ebf394; end: 102ebf41b;  */

void FUN_102ebf394(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  **(long **)(*(long *)(lVar2 + 0x40) + 0x28) = lVar1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}


