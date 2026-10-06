/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ff8348; end: 100ff849f;  */

void FUN_100ff8348(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long alStack_60 [2];
  
  lVar1 = 0x112d53868;
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
  lVar9 = *(long *)(lVar1 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar7 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + 0x70) == 0) {
    puVar2 = &UNK_1103758e0;
    func_0x000107c613fc(&UNK_1103758e0,0x18,7);
    func_0x000107c61644(puVar2 + 0x10);
    (**(code **)(lVar9 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x8,param_1,lVar1);
    uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
    uVar10 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
    uVar8 = lVar7 + uVar10 + 7 & 0xfffffffffffffff8;
    puVar3 = &UNK_110375908;
    func_0x000107c613fc(&UNK_110375908,uVar8 + 8,uVar6 | 7);
    (**(code **)(lVar9 + 0x20))(puVar3 + uVar10,&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
    *(undefined **)(puVar3 + uVar8) = puVar2;
    *(undefined **)((long)alStack_60 + -extraout_x8) = PTR___sytN_11034f1b0 + 8;
    uVar4 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91aa98,puVar3);
    func_0x000107c61574(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
    *(undefined8 *)(unaff_x20 + 0x70) = uVar4;
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 100ff84a0; end: 100ff8533;  */

void FUN_100ff84a0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x70);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x0001000834e4(unaff_x20 + 0x10);
  FUN_100ff9518(unaff_x20 + 0x38);
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61610(unaff_x20 + 0x78);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ff8534; end: 100ff85bf;  */

void FUN_100ff8534(void)

{
  func_0x000107c61168(&PTR_PTR_112d53e28);
  return;
}



/* Entry: 100ff85c0; end: 100ff8657;  */

void FUN_100ff85c0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100ff8658;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x28,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 100ff8658; end: 100ff869f;  */

void FUN_100ff8658(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff86a0,0,0);
  return;
}



/* Entry: 100ff86a0; end: 100ff8773;  */

void FUN_100ff86a0(void)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x38);
  if (cVar1 != -1) {
    lVar6 = *(long *)(unaff_x22 + 0x28);
    lVar5 = *(long *)(unaff_x22 + 0x30);
    uVar2 = *(long *)(unaff_x22 + 0x48) + 0x10;
    func_0x000107c61648();
    *(ulong *)(unaff_x22 + 0x70) = uVar2;
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        plVar4 = (long *)0xb0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x78) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_100ff8774;
        plVar4[3] = lVar5;
        plVar4[4] = uVar2;
        *(char *)(plVar4 + 0x15) = cVar1;
        plVar4[2] = lVar6;
        lVar5 = 0;
        func_0x000107c5fcec();
        plVar4[5] = lVar5;
        lVar6 = lVar5;
        func_0x000107c5fce8();
        plVar4[6] = lVar6;
        func_0x000100eea164();
        plVar4[7] = lVar6;
        func_0x000107c5fca8();
        plVar4[8] = lVar5;
        plVar4[9] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff8898,lVar5,lVar6);
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
                (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
      func_0x000107c61574(uVar2);
      goto LAB_100ff8714;
    }
  }
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
LAB_100ff8714:
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x000100ff8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff8774; end: 100ff881b;  */

void FUN_100ff8774(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ff87bc,0,0);
  return;
}



/* Entry: 100ff881c; end: 100ff8897;  */

void FUN_100ff881c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff8898,uVar1,uVar2);
  return;
}



/* Entry: 100ff8898; end: 100ff8a27;  */

void FUN_100ff8898(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulong *puVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0xa8);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x20);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
      puVar3 = (ulong *)(lVar6 + 0x78);
      func_0x000107c61618();
      if (puVar3 != (ulong *)0x0) {
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x188))
                  (*(undefined8 *)(unaff_x22 + 0x10));
        func_0x000107c61170(puVar3);
      }
LAB_100ff8a10:
                    /* WARNING: Could not recover jumptable at 0x000100ff8a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar6 = *(long *)(unaff_x22 + 0x38);
    lVar7 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x50) = param_1;
    func_0x000107c5fca8();
    *(long *)(unaff_x22 + 0x58) = lVar7;
    *(long *)(unaff_x22 + 0x60) = lVar6;
    pcVar5 = FUN_100ff8a28;
  }
  else if (bVar2 == 2) {
    lVar6 = *(long *)(unaff_x22 + 0x38);
    lVar7 = *(long *)(unaff_x22 + 0x28);
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x80) = param_1;
    func_0x000107c5fca8();
    *(long *)(unaff_x22 + 0x88) = lVar7;
    *(long *)(unaff_x22 + 0x90) = lVar6;
    pcVar5 = FUN_100ff8c44;
  }
  else {
    if (*(long *)(unaff_x22 + 0x10) == 0 && *(long *)(unaff_x22 + 0x18) == 0) {
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
      goto LAB_100ff8a10;
    }
    lVar7 = *(long *)(unaff_x22 + 0x20);
    uVar1 = *(undefined8 *)(lVar7 + 0x60);
    lVar6 = *(long *)(lVar7 + 0x68);
    func_0x0001000a8868(lVar7 + 0x48,uVar1);
    (**(code **)(lVar6 + 8))(uVar1,lVar6);
    plVar4 = (long *)0x40;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x70) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100ff8ac0;
    plVar4[2] = *(long *)(unaff_x22 + 0x20);
    lVar7 = 0;
    func_0x000107c5fcec();
    lVar6 = lVar7;
    func_0x000107c5fce8();
    plVar4[3] = lVar6;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar4[4] = lVar7;
    plVar4[5] = lVar6;
    pcVar5 = FUN_100ff8e4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,lVar7,lVar6);
  return;
}



/* Entry: 100ff8a28; end: 100ff8abf;  */

void FUN_100ff8a28(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20) + 0x78;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x68) = lVar1;
  if (lVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
    lVar1 = *(long *)(unaff_x22 + 0x40);
    lVar4 = *(long *)(unaff_x22 + 0x48);
    pcVar3 = FUN_100ff8bcc;
  }
  else {
    plVar2 = (long *)(*(long *)(unaff_x22 + 0x20) + 0x10);
    func_0x0001000a8868(plVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28));
    lVar4 = *plVar2;
    plVar2 = (long *)0x40;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x100ff8b34;
    plVar2[2] = lVar1;
    plVar2[3] = lVar4;
    lVar1 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar1;
    func_0x000107c5fce8();
    plVar2[4] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[5] = lVar1;
    plVar2[6] = lVar4;
    pcVar3 = FUN_100fdcba8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar1,lVar4);
  return;
}



/* Entry: 100ff8ac0; end: 100ff8b77;  */

void FUN_100ff8ac0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x100ff8b04,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48));
  return;
}



/* Entry: 100ff8b78; end: 100ff8bcb;  */

void FUN_100ff8b78(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61574(uVar2);
  func_0x000107c61604(lVar1 + 0x78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff8bcc,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 100ff8bcc; end: 100ff8c43;  */

void FUN_100ff8bcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(uint *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  uVar2 = *(undefined8 *)(lVar3 + 0x60);
  lVar4 = *(long *)(lVar3 + 0x68);
  func_0x0001000a8868(lVar3 + 0x48,uVar2);
  (**(code **)(lVar4 + 0x10))(uVar5 & 1,uVar1,uVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x000100ff8c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff8c44; end: 100ff8cdb;  */

void FUN_100ff8c44(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20) + 0x78;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  if (lVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    lVar1 = *(long *)(unaff_x22 + 0x40);
    lVar4 = *(long *)(unaff_x22 + 0x48);
    pcVar3 = FUN_100ff8d74;
  }
  else {
    plVar2 = (long *)(*(long *)(unaff_x22 + 0x20) + 0x10);
    func_0x0001000a8868(plVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28));
    lVar4 = *plVar2;
    plVar2 = (long *)0x40;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100ff8cdc;
    plVar2[2] = lVar1;
    plVar2[3] = lVar4;
    lVar1 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar1;
    func_0x000107c5fce8();
    plVar2[4] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[5] = lVar1;
    plVar2[6] = lVar4;
    pcVar3 = FUN_100fdcba8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar1,lVar4);
  return;
}



/* Entry: 100ff8cdc; end: 100ff8d1f;  */

void FUN_100ff8cdc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff8d20,*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90));
  return;
}



/* Entry: 100ff8d20; end: 100ff8d73;  */

void FUN_100ff8d20(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61574(uVar2);
  func_0x000107c61604(lVar1 + 0x78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff8d74,*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Entry: 100ff8d74; end: 100ff8ddf;  */

void FUN_100ff8d74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  uVar1 = *(undefined8 *)(lVar4 + 0x60);
  lVar2 = *(long *)(lVar4 + 0x68);
  func_0x0001000a8868(lVar4 + 0x48,uVar1);
  (**(code **)(lVar2 + 0x18))(uVar3,uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100ff8ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff8de0; end: 100ff8e4b;  */

void FUN_100ff8de0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff8e4c,uVar1,uVar2);
  return;
}



/* Entry: 100ff8e4c; end: 100ff8ff7;  */

void FUN_100ff8e4c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(unaff_x22 + 0x10) + 0x78;
  func_0x000107c61618();
  if (lVar9 != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x000107c61170(lVar9);
                    /* WARNING: Could not recover jumptable at 0x000100ff8eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar8 = *(undefined8 **)(unaff_x22 + 0x10);
  FUN_100ff8124();
  func_0x000100ff81ac();
  uVar3 = 0;
  func_0x0001038dabac(0);
  uVar4 = uVar3;
  func_0x000107c610f8();
  func_0x000107c610f8(uVar3);
  func_0x000107c6157c();
  func_0x0001038dabcc();
  *(undefined8 **)(unaff_x22 + 0x30) = puVar8;
  uVar3 = uVar4;
  func_0x000107c614f0(uVar4);
  func_0x000107c61464(uVar4,uVar3,0x88,7);
  puVar5 = puVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 0x10);
    puVar6 = puVar5;
    func_0x000101015bd4();
    uVar4 = *puVar6;
    uVar3 = puVar6[1];
    func_0x000107c61434(uVar3);
    func_0x000107c5fadc(uVar4,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c520f4(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar5);
    plVar7 = (long *)(lVar9 + 0x10);
    func_0x0001000a8868(plVar7,*(undefined8 *)(lVar9 + 0x28));
    lVar9 = *plVar7;
    plVar7 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x38) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100ff8ff8;
    *(undefined1 *)((long)plVar7 + 0x41) = 0;
    *(undefined1 *)(plVar7 + 8) = 0;
    plVar7[2] = (long)puVar8;
    plVar7[3] = lVar9;
    lVar2 = 0;
    func_0x000107c5fcec();
    lVar9 = lVar2;
    func_0x000107c5fce8();
    plVar7[4] = lVar9;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar7[5] = lVar2;
    plVar7[6] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fdc7ac,lVar2,lVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff8ff8);
  (*pcVar1)();
}



/* Entry: 100ff8ff8; end: 100ff903b;  */

void FUN_100ff8ff8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff903c,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  return;
}



/* Entry: 100ff903c; end: 100ff9083;  */

void FUN_100ff903c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c61604(lVar1 + 0x78,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100ff9080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff9084; end: 100ff90f7;  */

void FUN_100ff9084(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff90f8,uVar1,uVar2);
  return;
}



/* Entry: 100ff90f8; end: 100ff91a7;  */

void FUN_100ff90f8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c5fce8();
    *(long *)(unaff_x22 + 0xa0) = lVar2;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff91a8,uVar3,uVar1);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100ff91a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff91a8; end: 100ff923f;  */

void FUN_100ff91a8(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98) + 0x78;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  if (lVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    lVar1 = *(long *)(unaff_x22 + 0x88);
    lVar4 = *(long *)(unaff_x22 + 0x90);
    pcVar3 = FUN_100ff92d4;
  }
  else {
    plVar2 = (long *)(*(long *)(unaff_x22 + 0x98) + 0x10);
    func_0x0001000a8868(plVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x98) + 0x28));
    lVar4 = *plVar2;
    plVar2 = (long *)0x40;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100ff9240;
    plVar2[2] = lVar1;
    plVar2[3] = lVar4;
    lVar1 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar1;
    func_0x000107c5fce8();
    plVar2[4] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar2[5] = lVar1;
    plVar2[6] = lVar4;
    pcVar3 = FUN_100fdcba8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar1,lVar4);
  return;
}



/* Entry: 100ff9240; end: 100ff9283;  */

void FUN_100ff9240(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff9284,*(undefined8 *)(lVar1 + 0xa8),*(undefined8 *)(lVar1 + 0xb0));
  return;
}



/* Entry: 100ff9284; end: 100ff92d3;  */

void FUN_100ff9284(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61574(uVar2);
  func_0x000107c61604(lVar1 + 0x78,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff92d4,*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Entry: 100ff92d4; end: 100ff93db;  */

void FUN_100ff92d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  lVar3 = lVar3 + 0x38;
  func_0x000107c61618();
  if (lVar3 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    lVar2 = *(long *)(lVar3 + 0x38);
    func_0x0001000a8868(lVar3 + 0x18,uVar4);
    (**(code **)(lVar2 + 0x10))(1,0xd00000000000003a,0x800000010ef1f1b0,uVar4,lVar2);
    func_0x000107c61428(lVar3 + 0x78,unaff_x22 + 0x50,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    if (*(long *)(lVar3 + 0x90) != 0) {
      FUN_100fe9114(lVar3 + 0x78,unaff_x22 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar2 = *(long *)(unaff_x22 + 0x30);
      func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
      (**(code **)(lVar2 + 0x20))(uVar1,lVar2);
      func_0x0001000834e4(unaff_x22 + 0x10);
    }
    func_0x000107c61574(uVar4);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x000100ff93d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff93dc; end: 100ff9483; -[_TtC23QuickCutViewIntegration33QuickCutTranscodeHandlingWorkflow didTapCancel] */

/* WARNING: Possible PIC construction at 0x000100ff9460: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff9464) */

void FUN_100ff93dc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103758e0;
  func_0x000107c613fc(&UNK_1103758e0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  func_0x000107c6157c(param_1);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91aa80,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100ff9484; end: 100ff9487; -[_TtC23QuickCutViewIntegration33QuickCutTranscodeHandlingWorkflow didTapRetry] */

void FUN_100ff9484(void)

{
  return;
}



/* Entry: 100ff9488; end: 100ff94db;  */

void FUN_100ff9488(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100ff94dc;
  plVar3[0xd] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0xe] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xf] = lVar2;
  func_0x000100eea164();
  plVar3[0x10] = lVar2;
  func_0x000107c5fca8();
  plVar3[0x11] = lVar1;
  plVar3[0x12] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff90f8,lVar1,lVar2);
  return;
}



/* Entry: 100ff94dc; end: 100ff9517;  */

void FUN_100ff94dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100ff9514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100ff9518; end: 100ff953b;  */

undefined8 FUN_100ff9518(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ff953c; end: 100ff95d3;  */

void FUN_100ff953c(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112d53868;
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100ff95d4;
  plVar1[8] = unaff_x20 + uVar2;
  plVar1[9] = lVar3;
  lVar3 = 0x112d53eb8;
  func_0x0001000285a8(0x112d53eb8,&UNK_10d91aaa0);
  plVar1[10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff85c0,0,0);
  return;
}



/* Entry: 100ff95d4; end: 100ff95ef;  */

void FUN_100ff95d4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100ff9514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100ff95f0; end: 100ff96af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff95f0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000100ff4a80();
  func_0x0001000d224c(unaff_x22 + 0x10);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c3fa88(lVar1);
    func_0x000107c615e8(lVar1);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x18) + 0x10) + _DAT_112d54c10);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  lVar1 = lVar2;
  func_0x000107c614f0();
  plVar3 = (long *)0x60;
  func_0x000107c615f0(lVar2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100ff96b0;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar2;
  func_0x000107c5fce8();
  plVar3[5] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[6] = lVar2;
  plVar3[7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4210,lVar2,lVar1);
  return;
}



/* Entry: 100ff96b0; end: 100ff96f3;  */

void FUN_100ff96b0(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ff96f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100ff96f4; end: 100ff9eb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff96f4(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  code *pcVar12;
  long lVar13;
  long unaff_x20;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long alStack_b0 [2];
  
  lVar6 = 0;
  FUN_10101134c();
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar19 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_10100b3d0();
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar20 = (undefined1 *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_100ff4838();
  pcVar12 = (code *)0x0;
  puVar14 = (undefined *)0x0;
  lVar16 = *(long *)(unaff_x20 + 0x10);
  if (*(char *)(lVar16 + _DAT_1137ff150) == '\x01') {
    puVar14 = &UNK_110375940;
    func_0x000107c613fc(&UNK_110375940,0x18,7);
    func_0x000107c61644(puVar14 + 0x10);
    func_0x000107c6157c(puVar14);
    pcVar12 = FUN_100fff5c8;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = *(long *)(lVar16 + _DAT_112d54c20);
  lVar21 = *(long *)(lVar17 + 0x10);
  if (lVar21 == 0) {
    uVar15 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  }
  else {
    func_0x000107c61434(lVar17);
    func_0x000100fe2d30(0,lVar21,0);
    lVar18 = lVar17 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar13 + 0x48);
    alStack_b0[1] = lVar17;
    do {
      FUN_100ffd1ac(lVar18,lVar19);
      puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x14));
      uVar22 = *puVar1;
      uVar3 = puVar1[1];
      iVar4 = *(int *)(lVar7 + 0x18);
      func_0x000107c61434(uVar3);
      uVar8 = 0x112d51788;
      func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
      FUN_101014b1c(puVar20 + iVar4,0x41,0,0x48,3,&UNK_10d91a738,0,uVar8,&UNK_1103765a8);
      puVar1 = (undefined8 *)(lVar19 + *(int *)(lVar6 + 0x18));
      *puVar20 = 1;
      *(undefined8 *)(puVar20 + 8) = uVar22;
      *(undefined8 *)(puVar20 + 0x10) = uVar3;
      iVar4 = *(int *)(lVar7 + 0x1c);
      uVar8 = puVar1[1];
      uVar22 = *puVar1;
      *(undefined8 *)((long)(puVar20 + iVar4) + 8) = puVar1[1];
      *(undefined8 *)(puVar20 + iVar4) = uVar22;
      func_0x000107c6157c(uVar8);
      func_0x000100ffd1f0(lVar19);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x000100fe2d30(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      uVar15 = (ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
      func_0x000100ffd22c(puVar20,puVar5 + *(long *)(lVar11 + 0x48) * uVar2 + uVar15);
      lVar18 = lVar18 + lVar13;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    func_0x000107c6142c(alStack_b0[1]);
  }
  lVar6 = 0x112d52fc0;
  func_0x0001000285a8(0x112d52fc0,&UNK_10d91ac80);
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  func_0x000100ff9d50(lVar6 + uVar15);
  func_0x000100fe4344(lVar6);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d53ed8);
  puVar9 = &UNK_110375940;
  func_0x000107c613fc(&UNK_110375940,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,unaff_x20);
  func_0x000107c6157c(puVar9);
  puVar10 = puVar5;
  FUN_10100f08c(puVar5,uVar8,&PTR_DAT_110374938,pcVar12,puVar14,FUN_100ffd270,puVar9);
  func_0x000107c6142c(puVar5);
  func_0x000107c61574(puVar9);
  FUN_100c9fbfc(pcVar12,puVar14);
  func_0x000107c61574(puVar9);
  uVar8 = *(undefined8 *)(lVar16 + _DAT_112d54c10);
  func_0x000107c614f0(puVar10);
  func_0x000107c3e2c0(uVar8);
  func_0x000107c61174(puVar10);
  FUN_100ffd590();
  func_0x000107c61170(puVar10);
  func_0x000107c61174(puVar10);
  FUN_100ff9fbc();
  FUN_100c9fbfc(pcVar12,puVar14);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar10);
  return;
}



/* Entry: 100ff9eb4; end: 100ff9fbb;  */

/* WARNING: Possible PIC construction at 0x000100ff9f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff9fa0) */

void FUN_100ff9eb4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar1 = *(long *)(unaff_x20 + 0x68);
  func_0x0001000a8868(unaff_x20 + 0x48,uVar4);
  (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))(1,0xd000000000000040,0x800000010ef1f1f0,uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110375940;
  func_0x000107c613fc(&UNK_110375940,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110375968;
  func_0x000107c613fc(&UNK_110375968,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  func_0x000107c61174(uVar4);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91ac28,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100ff9fbc; end: 100ffa227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff9fbc(undefined8 param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  long alStack_88 [3];
  undefined8 uStack_70;
  
  FUN_10100047c(unaff_x20 + 0x48,alStack_88);
  plVar2 = alStack_88;
  func_0x0001000a8868(plVar2,uStack_70);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1137ff138);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1137ff140);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000107c61434(uVar5);
    puVar6 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    uStack_90 = *puVar1;
    func_0x000107c61434(uVar5);
    puVar6 = PTR___ss6UInt64VN_11034f048;
    puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c();
  }
  uVar8 = *(undefined8 *)(*plVar2 + 0x10);
  puVar3 = &UNK_1103759e0;
  func_0x000107c613fc(&UNK_1103759e0,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(undefined **)(puVar3 + 0x28) = puVar6;
  *(undefined **)(puVar3 + 0x30) = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c61434(uVar5);
  func_0x000107c6157c(uVar8);
  func_0x0001000d224c(&uStack_90);
  uVar4 = uStack_90;
  uVar8 = uStack_90;
  func_0x000107c614f0(uStack_90);
  puVar6 = &UNK_110375a08;
  func_0x000107c613fc(&UNK_110375a08,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x100fff664;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  func_0x000107c6157c(puVar3);
  func_0x00010090569c(0x100fff674,puVar6,uVar8);
  func_0x000107c615e8(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(puVar7);
  func_0x0001000834e4(alStack_88);
  puVar6 = &UNK_110375940;
  func_0x000107c613fc(&UNK_110375940,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_110375a30;
  func_0x000107c613fc(&UNK_110375a30,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(undefined8 *)(puVar7 + 0x18) = param_1;
  puVar6 = &UNK_110375a58;
  func_0x000107c613fc(&UNK_110375a58,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10d91acb0;
  *(undefined **)(puVar6 + 0x18) = puVar7;
  func_0x000107c61174(param_1);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar5 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91acb8,puVar6,uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100ffa228; end: 100ffa2e3;  */

void FUN_100ffa228(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  func_0x000107c4c974();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c40a84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar2 = 0;
  func_0x000100fe71e4();
  lVar1 = lVar2;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100ff358c();
  *(long *)(lVar1 + 0x70) = lVar4;
  *(undefined **)(lVar1 + 0x78) = puVar3;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110374638;
  *param_1 = lVar1;
  return;
}



/* Entry: 100ffa2e4; end: 100ffa2fb;  */

void FUN_100ffa2e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffa2fc,0,0);
  return;
}



/* Entry: 100ffa2fc; end: 100ffa373;  */

void FUN_100ffa2fc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100ffa374;
                    /* WARNING: Could not recover jumptable at 0x000100ffa370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 100ffa374; end: 100ffa3c3;  */

void FUN_100ffa374(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffa3c4,0,0);
  return;
}



/* Entry: 100ffa3c4; end: 100ffa44b;  */

void FUN_100ffa3c4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(lVar3,uVar1,lVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100ffa448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))((double)lVar3 / 1000.0);
  return;
}



/* Entry: 100ffa44c; end: 100ffa557;  */

uint FUN_100ffa44c(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(lVar4 + 8))();
    func_0x000107c615e8(lVar1);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 100ffa558; end: 100ffa6ef;  */

void FUN_100ffa558(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar1 = *(long *)(unaff_x20 + 0x68);
  func_0x0001000a8868(unaff_x20 + 0x48,uVar5);
  (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))(1,0xd000000000000041,0x800000010ef1f2f0,uVar5);
  puVar2 = (undefined8 *)(unaff_x20 + 0x48);
  func_0x0001000a8868(puVar2,*(undefined8 *)(unaff_x20 + 0x60));
  uVar5 = *puVar2;
  puVar3 = &UNK_110375bc0;
  func_0x000107c613fc(&UNK_110375bc0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,uVar5);
  func_0x000107c6157c(puVar3);
  func_0x0001000d224c(&uStack_48);
  uVar5 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar4 = &UNK_110375be8;
  func_0x000107c613fc(&UNK_110375be8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101000630;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(puVar3);
  func_0x00010090569c(FUN_101000730,puVar4,uVar5);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar4);
  func_0x000107c61578(puVar3,2);
  puVar3 = &UNK_110375940;
  func_0x000107c613fc(&UNK_110375940,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar5 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91adf0,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar5);
  return;
}



/* Entry: 100ffa6f0; end: 100ffa707;  */

void FUN_100ffa6f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffa708,0,0);
  return;
}



/* Entry: 100ffa708; end: 100ffa99b;  */

/* WARNING: Removing unreachable block (ram,0x000100ffa7b4) */
/* WARNING: Removing unreachable block (ram,0x000100ffa820) */
/* WARNING: Removing unreachable block (ram,0x000100ffa870) */
/* WARNING: Removing unreachable block (ram,0x000100ffa96c) */
/* WARNING: Removing unreachable block (ram,0x000100ffa970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffa708(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x150);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 200,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x158) = lVar6;
  lVar3 = _DAT_112d53ee8;
  if (lVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ffa998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61428(lVar6 + _DAT_112d53ee8,unaff_x22 + 0xe0,0,0);
  FUN_10100068c(lVar6 + lVar3,unaff_x22 + 0x50,0x112d535d0,&UNK_10d919d50);
  func_0x0001000285a8(0x112d535d0,&UNK_10d919d50);
  func_0x0001048da110(unaff_x22 + 0x78);
  FUN_101000588(unaff_x22 + 0x50,0x112d535d0,&UNK_10d919d50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar6 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000a8868(unaff_x22 + 0x78,uVar2);
  piVar5 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x160) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100ffa99c;
                    /* WARNING: Could not recover jumptable at 0x000100ffa968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar4,unaff_x22 + 0x10,uVar2,lVar6);
  return;
}



/* Entry: 100ffa99c; end: 100ffa9f7;  */

void FUN_100ffa99c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ffa9f8;
  }
  else {
    pcVar1 = FUN_100ffac3c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100ffa9f8; end: 100ffaa67;  */

void FUN_100ffa9f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x78);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x170) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffaa68,uVar1,uVar2);
  return;
}



/* Entry: 100ffaa68; end: 100ffab5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffaa68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x158);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x170));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar5 = *(long *)(lVar5 + 0x10) + _DAT_1137ff130;
  func_0x000107c61428(lVar5,unaff_x22 + 0x128,0,0);
  lVar3 = lVar5;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar5 + 8);
    lVar5 = lVar3;
    func_0x000107c614f0();
    pcVar7 = *(code **)(lVar6 + 0x18);
    func_0x000107c61434(uVar2);
    func_0x000107c61174(uVar4);
    (*pcVar7)(unaff_x22 + 0x10,uVar1,uVar2,uVar4,lVar5,lVar6);
    func_0x000107c6142c(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffab5c,0,0);
  return;
}



/* Entry: 100ffab5c; end: 100ffabaf;  */

void FUN_100ffab5c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x158);
  func_0x0001000a8868(lVar1 + 0x48,*(undefined8 *)(lVar1 + 0x60));
  FUN_100fd9b24(0);
  func_0x000107c61574(lVar1);
  func_0x0001010006d4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100ffabac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffabb0; end: 100ffac3b;  */

void FUN_100ffabb0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x180));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ffabf8,0,0);
  return;
}



/* Entry: 100ffac3c; end: 100ffad83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffac3c(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x178) = uVar5;
  func_0x000107c614cc(uVar5,unaff_x22 + 0x148,unaff_x22 + 0xf8);
  uVar2 = *(ulong *)(unaff_x22 + 0x100);
  FUN_101010328(uVar2,*(undefined8 *)(unaff_x22 + 0x108));
  if ((uVar2 & 0xff) != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x158);
    func_0x0001000a8868(lVar7 + 0x48,*(undefined8 *)(lVar7 + 0x60));
    func_0x000107c614b0(uVar5);
    FUN_100fd9b24(uVar5);
    func_0x000107c614ac(uVar5);
    lVar7 = lVar7 + _DAT_112d53ee0;
    func_0x000107c61428(lVar7,unaff_x22 + 0x110,0,0);
    if (*(long *)(lVar7 + 0x18) != 0) {
      FUN_10100047c(lVar7,unaff_x22 + 0xa0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar7 = *(long *)(unaff_x22 + 0xc0);
      func_0x0001000a8868(unaff_x22 + 0xa0,uVar6);
      piVar4 = *(int **)(lVar7 + 8);
      iVar1 = *piVar4;
      plVar3 = (long *)(ulong)(uint)piVar4[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x180) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100ffabb0;
                    /* WARNING: Could not recover jumptable at 0x000100ffad50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar4))(uVar5,1,uVar6,lVar7);
      return;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000107c614ac(uVar5);
  func_0x000107c61574(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100ffad80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffad84; end: 100ffae5b;  */

void FUN_100ffad84(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  lVar5 = 0x112d53870;
  func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
  *(long *)(unaff_x22 + 0xf0) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar1;
  lVar5 = 0x112d54098;
  func_0x0001000285a8(0x112d54098,&UNK_10d91ac98);
  uVar1 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar1;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffae5c,uVar3,uVar4);
  return;
}



/* Entry: 100ffae5c; end: 100ffb04b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffae5c(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x88,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x130) = lVar8;
  lVar4 = _DAT_112d53ec0;
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar3 = *(long *)(unaff_x22 + 0xf8);
    *(long *)(unaff_x22 + 0x138) = _DAT_112d53ec0;
    func_0x000107c61428(lVar8 + lVar4,unaff_x22 + 0xa0,0,0);
    pcVar6 = *(code **)(lVar3 + 0x30);
    *(code **)(unaff_x22 + 0x140) = pcVar6;
    lVar3 = lVar8 + lVar4;
    (*pcVar6)(lVar3,1,uVar10);
    bVar1 = (int)lVar3 != 0;
    if (!bVar1) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x110);
      lVar3 = *(long *)(unaff_x22 + 0xf8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
      (**(code **)(lVar3 + 0x10))(uVar10,lVar8 + lVar4,uVar11);
      *(undefined1 *)(unaff_x22 + 0x191) = 1;
      func_0x000107c5fd28(uVar9,unaff_x22 + 0x191,uVar11);
      (**(code **)(lVar3 + 8))(uVar10,uVar11);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar4 = 0x112d53898;
    func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar10,bVar1,1,lVar4);
    FUN_101000588(uVar10,0x112d54098,&UNK_10d91ac98);
    FUN_10100047c(*(long *)(lVar8 + 0x10) + _DAT_112d54c18,unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar8 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar10);
    piVar7 = *(int **)(lVar8 + 0x30);
    iVar2 = *piVar7;
    plVar5 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x148) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100ffb04c;
                    /* WARNING: Could not recover jumptable at 0x000100ffb004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar7))(uVar10,lVar8);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100ffb048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffb04c; end: 100ffb0a7;  */

void FUN_100ffb04c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x150) = param_1;
  *(long *)(lVar2 + 0x158) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ffb0a8;
  }
  else {
    pcVar1 = FUN_100ffb7e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
  return;
}



/* Entry: 100ffb0a8; end: 100ffb1a7;  */

void FUN_100ffb0a8(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x130);
  func_0x0001000834e4(unaff_x22 + 0x10);
  plVar4 = *(long **)(lVar3 + 200);
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x160) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100ffb108;
  plVar1[5] = unaff_x22 + 0x60;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar3 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[9] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar2;
  lVar3 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 100ffb1a8; end: 100ffb20b;  */

void FUN_100ffb1a8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x170) = param_1;
  *(long *)(lVar2 + 0x178) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x168));
  func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x150));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ffb20c;
  }
  else {
    pcVar1 = FUN_100ffb3f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
  return;
}



/* Entry: 100ffb20c; end: 100ffb3ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffb20c(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x0001000834e4(unaff_x22 + 0x60);
  lVar6 = *(long *)(lVar6 + 0x10) + _DAT_1137ff130;
  func_0x000107c61428(lVar6,unaff_x22 + 0xd0,0,0);
  lVar3 = lVar6;
  func_0x000107c61618();
  lVar4 = *(long *)(unaff_x22 + 0x170);
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar6 + 8);
    lVar6 = lVar3;
    func_0x000107c614f0();
    (**(code **)(lVar7 + 0x20))(lVar4,lVar6,lVar7);
    func_0x000107c615e8(lVar4);
    lVar4 = lVar3;
  }
  func_0x000107c615e8(lVar4);
  lVar3 = *(long *)(unaff_x22 + 0x138);
  lVar4 = *(long *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar6 = lVar4 + lVar3;
  (**(code **)(unaff_x22 + 0x140))(lVar6,1,uVar5);
  bVar1 = (int)lVar6 != 0;
  if (!bVar1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar6 = *(long *)(unaff_x22 + 0xf8);
    (**(code **)(lVar6 + 0x10))(uVar2,lVar4 + lVar3,uVar5);
    *(undefined1 *)(unaff_x22 + 400) = 2;
    func_0x000107c5fd28(uVar8,unaff_x22 + 400,uVar5);
    (**(code **)(lVar6 + 8))(uVar2,uVar5);
    lVar4 = *(long *)(unaff_x22 + 0x130);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar6 = 0x112d53898;
  func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar5,bVar1,1,lVar6);
  FUN_101000588(uVar5,0x112d54098,&UNK_10d91ac98);
  uVar5 = *(undefined8 *)(lVar4 + _DAT_112d53ef0);
  func_0x000107c6157c(uVar5);
  func_0x000100075034(FUN_101000708,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100ffb3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffb3f0; end: 100ffb623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffb3f0(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  func_0x0001000834e4(unaff_x22 + 0x60);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x180) = uVar7;
  lVar10 = *(long *)(unaff_x22 + 0x130) + _DAT_112d53ee0;
  func_0x000107c61428(lVar10,unaff_x22 + 0xb8,0,0);
  if (*(long *)(lVar10 + 0x18) != 0) {
    FUN_10100047c(lVar10,unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar10 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
    piVar5 = *(int **)(lVar10 + 8);
    iVar2 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x188) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100ffb624;
                    /* WARNING: Could not recover jumptable at 0x000100ffb4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar5))(uVar7,2,uVar6,lVar10);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c614ac(uVar7);
  func_0x000107c61574(uVar6);
  lVar3 = *(long *)(unaff_x22 + 0x138);
  lVar9 = *(long *)(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar10 = lVar9 + lVar3;
  (**(code **)(unaff_x22 + 0x140))(lVar10,1,uVar7);
  bVar1 = (int)lVar10 != 0;
  if (!bVar1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar10 = *(long *)(unaff_x22 + 0xf8);
    (**(code **)(lVar10 + 0x10))(uVar6,lVar9 + lVar3,uVar7);
    *(undefined1 *)(unaff_x22 + 400) = 2;
    func_0x000107c5fd28(uVar8,unaff_x22 + 400,uVar7);
    (**(code **)(lVar10 + 8))(uVar6,uVar7);
    lVar9 = *(long *)(unaff_x22 + 0x130);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar10 = 0x112d53898;
  func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar7,bVar1,1,lVar10);
  FUN_101000588(uVar7,0x112d54098,&UNK_10d91ac98);
  uVar7 = *(undefined8 *)(lVar9 + _DAT_112d53ef0);
  func_0x000107c6157c(uVar7);
  func_0x000100075034(FUN_101000708,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100ffb620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffb624; end: 100ffb667;  */

void FUN_100ffb624(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ffb668,*(undefined8 *)(lVar1 + 0x120),*(undefined8 *)(lVar1 + 0x128));
  return;
}



/* Entry: 100ffb668; end: 100ffb7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffb668(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x180));
  func_0x000107c61574(uVar4);
  func_0x0001000834e4(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x138);
  lVar6 = *(long *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar7 = lVar6 + lVar2;
  (**(code **)(unaff_x22 + 0x140))(lVar7,1,uVar4);
  bVar1 = (int)lVar7 != 0;
  if (!bVar1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar7 = *(long *)(unaff_x22 + 0xf8);
    (**(code **)(lVar7 + 0x10))(uVar3,lVar6 + lVar2,uVar4);
    *(undefined1 *)(unaff_x22 + 400) = 2;
    func_0x000107c5fd28(uVar5,unaff_x22 + 400,uVar4);
    (**(code **)(lVar7 + 8))(uVar3,uVar4);
    lVar6 = *(long *)(unaff_x22 + 0x130);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar7 = 0x112d53898;
  func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar4,bVar1,1,lVar7);
  FUN_101000588(uVar4,0x112d54098,&UNK_10d91ac98);
  uVar4 = *(undefined8 *)(lVar6 + _DAT_112d53ef0);
  func_0x000107c6157c(uVar4);
  func_0x000100075034(FUN_101000708,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100ffb7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffb7e8; end: 100ffba1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffb7e8(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  long lVar10;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x180) = uVar7;
  lVar10 = *(long *)(unaff_x22 + 0x130) + _DAT_112d53ee0;
  func_0x000107c61428(lVar10,unaff_x22 + 0xb8,0,0);
  if (*(long *)(lVar10 + 0x18) != 0) {
    FUN_10100047c(lVar10,unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar10 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar6);
    piVar5 = *(int **)(lVar10 + 8);
    iVar2 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x188) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100ffb624;
                    /* WARNING: Could not recover jumptable at 0x000100ffb8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar5))(uVar7,2,uVar6,lVar10);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  func_0x000107c614ac(uVar7);
  func_0x000107c61574(uVar6);
  lVar3 = *(long *)(unaff_x22 + 0x138);
  lVar9 = *(long *)(unaff_x22 + 0x130);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar10 = lVar9 + lVar3;
  (**(code **)(unaff_x22 + 0x140))(lVar10,1,uVar7);
  bVar1 = (int)lVar10 != 0;
  if (!bVar1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar10 = *(long *)(unaff_x22 + 0xf8);
    (**(code **)(lVar10 + 0x10))(uVar6,lVar9 + lVar3,uVar7);
    *(undefined1 *)(unaff_x22 + 400) = 2;
    func_0x000107c5fd28(uVar8,unaff_x22 + 400,uVar7);
    (**(code **)(lVar10 + 8))(uVar6,uVar7);
    lVar9 = *(long *)(unaff_x22 + 0x130);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar10 = 0x112d53898;
  func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(uVar7,bVar1,1,lVar10);
  FUN_101000588(uVar7,0x112d54098,&UNK_10d91ac98);
  uVar7 = *(undefined8 *)(lVar9 + _DAT_112d53ef0);
  func_0x000107c6157c(uVar7);
  func_0x000100075034(FUN_101000708,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar7);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100ffba18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffba1c; end: 100ffba87;  */

void FUN_100ffba1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffba88,uVar1,uVar2);
  return;
}



/* Entry: 100ffba88; end: 100ffbb73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffba88(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar3);
    lVar3 = lVar2 + _DAT_1137ff130;
    func_0x000107c61428(lVar3,unaff_x22 + 0x28,0,0);
    lVar1 = lVar3;
    func_0x000107c61618();
    lVar3 = *(long *)(lVar3 + 8);
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar2 = lVar1;
      func_0x000107c614f0(lVar1);
      (**(code **)(lVar3 + 8))(uVar4,lVar2,lVar3);
      func_0x000107c615e8(lVar1);
      uVar4 = 0;
      goto LAB_100ffbb5c;
    }
  }
  uVar4 = 1;
LAB_100ffbb5c:
                    /* WARNING: Could not recover jumptable at 0x000100ffbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 100ffbb74; end: 100ffbbcb;  */

void FUN_100ffbb74(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100ffbbcc;
                    /* WARNING: Could not recover jumptable at 0x000100ffbbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 100ffbbcc; end: 100ffbc0f;  */

void FUN_100ffbbcc(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100ffbc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100ffbc10; end: 100ffbc7b;  */

void FUN_100ffbc10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffbc7c,uVar1,uVar2);
  return;
}



/* Entry: 100ffbc7c; end: 100ffbd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffbc7c(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d53ed0);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar2);
    func_0x000100ff4a80();
    func_0x000107c61574(uVar3);
  }
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x48) + _DAT_112d54c10);
  lVar2 = lVar4;
  func_0x000107c614f0();
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100ffbd38;
  plVar1[3] = lVar2;
  plVar1[4] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar4;
  func_0x000107c5fce8();
  plVar1[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[6] = lVar4;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4210,lVar4,lVar2);
  return;
}



/* Entry: 100ffbd38; end: 100ffbd7b;  */

void FUN_100ffbd38(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ffbd7c,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Entry: 100ffbd7c; end: 100ffbdfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffbd7c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  lVar2 = lVar2 + _DAT_1137ff130;
  func_0x000107c61428(lVar2,unaff_x22 + 0x28,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x28))();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100ffbdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ffbdfc; end: 100ffbf0b;  */

/* WARNING: Possible PIC construction at 0x000100ffbeec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ffbef0) */

void FUN_100ffbdfc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar1 = *(long *)(unaff_x20 + 0x68);
  func_0x0001000a8868(unaff_x20 + 0x48,uVar4);
  (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))(1,0xd000000000000043,0x800000010ef1f240,uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110375990;
  func_0x000107c613fc(&UNK_110375990,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  puVar3 = &UNK_1103759b8;
  func_0x000107c613fc(&UNK_1103759b8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = &UNK_10d91ac38;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61174(uVar4);
  uVar4 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91ac48,puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100ffbf0c; end: 100ffbf77;  */

void FUN_100ffbf0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffbf78,uVar1,uVar2);
  return;
}



/* Entry: 100ffbf78; end: 100ffc003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffbf78(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  lVar2 = lVar2 + _DAT_1137ff130;
  func_0x000107c61428(lVar2,unaff_x22 + 0x10,0,0);
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 0x10))();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100ffc000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar1 == 0);
  return;
}



/* Entry: 100ffc004; end: 100ffc183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffc004(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  FUN_101000588(unaff_x20 + _DAT_112d53ec0,0x112d54088,&UNK_10d91ac58);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53ec8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53ed0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53ed8));
  FUN_101000588(unaff_x20 + _DAT_112d53ee0,0x112d54090,&UNK_10d91ac60);
  FUN_101000588(unaff_x20 + _DAT_112d53ee8,0x112d535d0,&UNK_10d919d50);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112d53ef0));
  return;
}



/* Entry: 100ffc184; end: 100ffc18b;  */

void FUN_100ffc184(void)

{
  if (lRam0000000112d53f20 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61dc60);
  return;
}



/* Entry: 100ffc18c; end: 100ffc1c3;  */

void FUN_100ffc18c(undefined8 param_1)

{
  if (lRam0000000112d53f20 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61dc60);
  return;
}



/* Entry: 100ffc1c4; end: 100ffc2ab;  */

void FUN_100ffc1c4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
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
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puStack_110 = PTR___sBOWV_11034d658 + 0x40;
  puVar1 = PTR___sBoWV_11034d678 + 0x40;
  puStack_d8 = &UNK_10d91ab90;
  puStack_d0 = &UNK_10d91aba8;
  puStack_88 = &UNK_10d91abc0;
  puStack_78 = &UNK_10d91abd8;
  puStack_70 = &UNK_10d91abd8;
  lVar2 = 0x13f;
  puStack_108 = puStack_110;
  puStack_100 = puStack_110;
  puStack_f8 = puStack_110;
  puStack_f0 = puVar1;
  puStack_e8 = puStack_110;
  puStack_e0 = puStack_110;
  puStack_c8 = puVar1;
  puStack_c0 = puVar1;
  puStack_b8 = puStack_110;
  puStack_b0 = puStack_110;
  puStack_a8 = puStack_110;
  puStack_a0 = puVar1;
  puStack_98 = puVar1;
  puStack_90 = puVar1;
  puStack_80 = puVar1;
  FUN_100ffc2ac();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_60 = &UNK_10d91abd8;
    puStack_48 = &UNK_10d91abf8;
    puStack_40 = &UNK_10d91abf8;
    puStack_58 = puVar1;
    puStack_50 = puVar1;
    puStack_38 = puVar1;
    func_0x000107c61630(param_1,0x100,0x1c,&puStack_110,param_1 + 0x50);
  }
  return;
}



/* Entry: 100ffc2ac; end: 100ffc30b;  */

void FUN_100ffc2ac(long param_1)

{
  long lVar1;
  
  if (lRam0000000112d53f30 == 0) {
    lVar1 = 0x112d53870;
    func_0x00010002969c(0x112d53870,&UNK_10d91abf0);
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112d53f30 = param_1;
    }
  }
  return;
}



/* Entry: 100ffc30c; end: 100ffc36f;  */

void FUN_100ffc30c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10100073c;
  plVar3[8] = lVar2;
  plVar3[9] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffbc7c,lVar1,lVar2);
  return;
}



/* Entry: 100ffc370; end: 100ffc3ff;  */

void FUN_100ffc370(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x100ffc3bc;
  plVar2[5] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[6] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffbf78,lVar1,lVar3);
  return;
}



/* Entry: 100ffc400; end: 100ffc46f;  */

void FUN_100ffc400(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101000738;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100ffbbcc;
                    /* WARNING: Could not recover jumptable at 0x000100ffbbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100ffc470; end: 100ffd12f;  */

void FUN_100ffc470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_70;
  
  lVar2 = 0x112d54158;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_1;
  func_0x0001000285a8(0x112d54158,&UNK_10d91adc0);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d52e48;
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  lVar4 = 0x112d54160;
  func_0x0001000285a8(0x112d54160,&UNK_10d91add0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar4 = 0x112d52e40;
  func_0x0001000285a8(0x112d52e40,&UNK_10d919710);
  lVar5 = *(long *)(lVar4 + -8);
  (**(code **)(lVar5 + 0x38))(lVar8,1,1,lVar4);
  (**(code **)(lVar9 + 0x10))(auStack_a0 + -extraout_x8,uStack_90,lVar2);
  lStack_70 = lVar8;
  FUN_100fdda24(0);
  func_0x000107c5fd48(lVar6);
  (**(code **)(lVar10 + 0x10))(uStack_88,lVar6,lVar3);
  FUN_10100068c(lVar8,lVar7,0x112d54160,&UNK_10d91add0);
  lVar2 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar2 != 1) {
    (**(code **)(lVar10 + 8))(lVar6,lVar3);
    (**(code **)(lVar5 + 0x20))(uStack_98,lVar7,lVar4);
    FUN_101000588(lVar8,0x112d54160,&UNK_10d91add0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ffc690);
  (*pcVar1)();
}



/* Entry: 100ffd130; end: 100ffd1ab;  */

void FUN_100ffd130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  FUN_101000588(param_2,param_3,param_4);
  func_0x0001000285a8(param_5,param_6);
  lVar1 = *(long *)(param_5 + -8);
  (**(code **)(lVar1 + 0x10))(param_2,param_1,param_5);
                    /* WARNING: Could not recover jumptable at 0x000100ffd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x38))(param_2,0,1,param_5);
  return;
}



/* Entry: 100ffd1ac; end: 100ffd26f;  */

undefined8 FUN_100ffd1ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10101134c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ffd270; end: 100ffd28f;  */

void FUN_100ffd270(void)

{
  func_0x000100ffa500();
  return;
}



/* Entry: 100ffd290; end: 100ffd4d3;  */

long FUN_100ffd290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long extraout_x12;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long alStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar1 = 0x112d53808;
  func_0x0001000285a8(0x112d53808,&UNK_10d91a100);
  lVar12 = *(long *)(lVar1 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)&puStack_a0 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar8 - extraout_x12;
  uVar2 = 0;
  func_0x000100fdc718();
  ppuStack_68 = &PTR_DAT_110374048;
  *(undefined8 *)(param_4 + 0x38) = 0;
  auStack_88[0] = param_1;
  uStack_70 = uVar2;
  func_0x000107c61614(param_4 + 0x40,0);
  FUN_10100047c(auStack_88,param_4 + 0x10);
  if (*(long *)(param_4 + 0x38) == 0) {
    puVar3 = &UNK_110375b48;
    func_0x000107c613fc(&UNK_110375b48,0x18,7);
    puStack_a0 = puVar3;
    func_0x000107c61644(puVar3 + 0x10,param_4);
    pcVar9 = *(code **)(lVar12 + 0x10);
    (*pcVar9)(lVar10,param_2,lVar1);
    (*pcVar9)(lVar8,param_3,lVar1);
    uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar13 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
    uVar6 = lVar11 + uVar5 + uVar13 & (uVar5 ^ 0xffffffffffffffff);
    uVar7 = lVar11 + uVar6 + 7 & 0xfffffffffffffff8;
    puVar3 = &UNK_110375b70;
    uStack_98 = param_3;
    uStack_90 = param_2;
    func_0x000107c613fc(&UNK_110375b70,uVar7 + 8,uVar5 | 7);
    pcVar9 = *(code **)(lVar12 + 0x20);
    (*pcVar9)(puVar3 + uVar13,lVar10,lVar1);
    (*pcVar9)(puVar3 + uVar6,lVar8,lVar1);
    *(undefined **)(puVar3 + uVar7) = puStack_a0;
    *(undefined **)(lVar10 + -0x10) = PTR___sytN_11034f1b0 + 8;
    uVar2 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91ad70,puVar3);
    func_0x000107c61574(puVar3);
    pcVar9 = *(code **)(lVar12 + 8);
    (*pcVar9)(uStack_98,lVar1);
    (*pcVar9)(uStack_90,lVar1);
    func_0x0001000834e4(auStack_88);
    uVar4 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x38) = uVar2;
    func_0x000107c61574(uVar4);
  }
  else {
    pcVar9 = *(code **)(lVar12 + 8);
    (*pcVar9)(param_3,lVar1);
    (*pcVar9)(param_2,lVar1);
    func_0x0001000834e4(auStack_88);
  }
  return param_4;
}



/* Entry: 100ffd4d4; end: 100ffd58f;  */

void FUN_100ffd4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [40];
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar2 = 0;
  FUN_100fea7bc();
  ppuStack_38 = &PTR_DAT_110374cc8;
  auStack_58[0] = param_1;
  uStack_40 = uVar2;
  FUN_10100047c(auStack_58,auStack_80);
  func_0x000107c61428(param_4 + 0x78,auStack_98,0x21,0);
  func_0x000107c6157c(param_1);
  func_0x0001010005c8(auStack_80,param_4 + 0x78,0x112d535d0,&UNK_10d919d50);
  func_0x000107c614a8(auStack_98);
  uVar2 = *(undefined8 *)(param_4 + 0x68);
  uVar1 = *(undefined8 *)(param_4 + 0x70);
  *(undefined8 *)(param_4 + 0x68) = param_2;
  *(undefined8 *)(param_4 + 0x70) = param_3;
  FUN_100c9fbfc(uVar2,uVar1);
  func_0x000107c6157c(param_3);
  FUN_100fe8a10();
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 100ffd590; end: 100fff5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ffd590(undefined8 param_1,long param_2,undefined8 ****param_3,long param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  long *plVar4;
  undefined **ppuVar5;
  int iVar6;
  undefined8 *****pppppuVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 ****ppppuVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  ulong *puVar19;
  undefined8 *****pppppuVar20;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  undefined8 uVar21;
  undefined8 ****ppppuVar22;
  undefined8 *****pppppuVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 ***pppuVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 *****pppppuVar32;
  undefined8 uVar33;
  long lVar34;
  code *pcVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  long alStack_410 [4];
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  code *pcStack_3d8;
  code *pcStack_3d0;
  undefined4 uStack_3c4;
  code *pcStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  code *pcStack_3a0;
  long lStack_398;
  long lStack_390;
  code *pcStack_388;
  undefined8 *puStack_380;
  long lStack_378;
  code *pcStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined8 uStack_328;
  undefined *puStack_320;
  undefined8 *puStack_318;
  undefined8 **ppuStack_310;
  undefined8 ****ppppuStack_308;
  undefined8 ****ppppuStack_300;
  undefined8 ***pppuStack_2f8;
  long lStack_2f0;
  undefined8 ****ppppuStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 **ppuStack_2b0;
  undefined8 ***pppuStack_2a8;
  undefined8 ****ppppuStack_2a0;
  undefined8 ***pppuStack_298;
  long lStack_290;
  long *plStack_288;
  undefined8 ****ppppuStack_280;
  long lStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ****ppppuStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 ****ppppuStack_250;
  code *pcStack_248;
  undefined8 ****ppppuStack_240;
  undefined8 ***pppuStack_238;
  undefined8 ***pppuStack_230;
  ulong auStack_228 [2];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 auStack_208 [3];
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 auStack_1e0 [3];
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 auStack_1b8 [3];
  long lStack_1a0;
  undefined **ppuStack_198;
  char *apcStack_190 [3];
  long lStack_178;
  undefined **ppuStack_170;
  long alStack_168 [3];
  long lStack_150;
  undefined **ppuStack_148;
  undefined8 auStack_140 [3];
  long lStack_128;
  undefined **ppuStack_120;
  undefined1 auStack_118 [24];
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined8 ***apppuStack_e0 [3];
  undefined8 ****ppppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 *****apppppuStack_b8 [3];
  undefined8 *****pppppuStack_a0;
  undefined **ppuStack_98;
  undefined8 ***apppuStack_90 [3];
  undefined8 ****ppppuStack_78;
  undefined8 ****ppppuStack_70;
  
  ppppuVar22 = param_3;
  (**(code **)(param_4 + 0x38))(param_3,param_4);
  pppuStack_270 = param_3;
  lStack_260 = param_4;
  uStack_258 = param_1;
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  pppppuVar7 = (undefined8 *****)0x0;
  func_0x000100fdc718();
  ppppuStack_308 = pppppuVar7;
  func_0x000107c613fc();
  func_0x000107c61614(pppppuVar7 + 4,0);
  func_0x000107c61614(pppppuVar7 + 5,0);
  pppppuVar7[2] = ppppuVar22;
  pppppuVar7[3] = param_3;
  FUN_10100047c(param_2 + 0x48,apppuStack_90);
  uVar21 = *(undefined8 *)(param_2 + 0xa0);
  func_0x0001000c6518(apppuStack_90,ppppuStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)((long)ppppuStack_78 + -8) + 0x40));
  puVar30 = (undefined8 *)((long)alStack_410 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar30);
  ppppuVar22 = (undefined8 ****)*puVar30;
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(pppppuVar7);
  func_0x000107c6157c(param_2);
  ppppuStack_268 = pppppuVar7;
  FUN_100fff768(ppppuVar22,uVar21,pppppuVar7,param_2);
  func_0x000107c61574(param_2);
  func_0x0001000834e4(apppuStack_90);
  pppppuVar7 = (undefined8 *****)0x0;
  func_0x000100fe76ac();
  lVar25 = _DAT_112d53ee0;
  ppppuStack_70 = (undefined8 ****)&PTR_DAT_110374660;
  ppppuStack_300 = pppppuVar7;
  apppuStack_90[0] = ppppuVar22;
  ppppuStack_78 = pppppuVar7;
  func_0x000107c61428(param_2 + _DAT_112d53ee0,apppppuStack_b8,0x21,0);
  pppuStack_2f8 = ppppuVar22;
  func_0x000107c6157c(ppppuVar22);
  func_0x0001010005c8(apppuStack_90,param_2 + lVar25,0x112d54090,&UNK_10d91ac60);
  func_0x000107c614a8(apppppuStack_b8);
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  puVar8 = &UNK_110375a80;
  func_0x000107c613fc(&UNK_110375a80,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar21;
  func_0x0001000285a8(0x112d540a0,&UNK_10d91acc0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar21);
  pcVar35 = FUN_100fff95c;
  func_0x0001000bdd8c(FUN_100fff95c,puVar8);
  func_0x0001000d224c(apppuStack_90);
  pppppuVar20 = (undefined8 *****)ppppuStack_70;
  pppppuVar7 = (undefined8 *****)ppppuStack_78;
  func_0x0001000a8868(apppuStack_90,ppppuStack_78);
  (*(code *)pppppuVar20[0x22])();
  func_0x0001000834e4(apppuStack_90);
  func_0x0001000d224c(apppuStack_90);
  pppppuVar32 = (undefined8 *****)ppppuStack_70;
  pppppuVar23 = (undefined8 *****)ppppuStack_78;
  func_0x0001000a8868(apppuStack_90,ppppuStack_78);
  (*(code *)pppppuVar32[0x23])(pppppuVar23,pppppuVar32);
  func_0x0001000834e4(apppuStack_90);
  pppuVar9 = (undefined8 ***)PTR_PTR_1126b6868;
  func_0x000107c610f8();
  func_0x000107c5fadc(pppppuVar23,pppppuVar32);
  func_0x000107c6142c(pppppuVar32);
  func_0x000107c47914();
  func_0x000107c61170(pppppuVar23);
  pppuVar28 = *(undefined8 ****)(param_2 + 0xa8);
  ppppuVar10 = (undefined8 ****)0x0;
  func_0x000100fe3e08();
  ppppuVar22 = ppppuVar10;
  func_0x000107c613fc();
  ppppuVar22[2] = pppuVar9;
  ppppuVar22[3] = pppppuVar7;
  ppppuVar22[4] = pppppuVar20;
  ppppuVar22[5] = pppuVar28;
  ppppuVar22[6] = (undefined8 ***)pcVar35;
  ppppuVar22[7] = (undefined8 ***)0x1;
  ppppuStack_70 = (undefined8 ****)&PTR_DAT_110374410;
  uVar21 = *(undefined8 *)(param_2 + 0x78);
  ppppuStack_240 = pppppuVar7;
  apppuStack_90[0] = ppppuVar22;
  ppppuStack_78 = ppppuVar10;
  func_0x000107c61174();
  ppuStack_310 = pppuVar9;
  func_0x000107c61434(pppppuVar20);
  func_0x000107c6157c(pppuVar28);
  ppppuStack_2e8 = (undefined8 ****)pcVar35;
  func_0x000107c6157c(pcVar35);
  pppuStack_238 = (undefined8 ***)uVar21;
  func_0x0001000d224c(apppppuStack_b8);
  ppuVar5 = ppuStack_98;
  ppppppuVar12 = (undefined8 ******)pppppuStack_a0;
  func_0x0001000a8868(apppppuStack_b8,pppppuStack_a0);
  (*(code *)ppuVar5[8])(ppppppuVar12,ppuVar5);
  func_0x0001000834e4(apppppuStack_b8);
  lStack_278 = param_2;
  if (((ulong)ppppppuVar12 & 1) != 0) {
    FUN_10100047c(*(long *)(param_2 + 0x10) + _DAT_112d54c18,apppppuStack_b8);
    func_0x0001000a8868(apppppuStack_b8,pppppuStack_a0);
    lVar25 = 0x112d50a30;
    func_0x0001000285a8(0x112d50a30,&UNK_10d917400);
    lVar29 = *(long *)(lVar25 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pcVar35 = (code *)ppuStack_98[5];
    func_0x000107c61434(pppppuVar20);
    (*pcVar35)((long)puVar30 - extraout_x8_00,pppppuStack_a0,ppuStack_98);
    param_2 = lStack_278;
    ppppppuVar11 = (undefined8 ******)0x0;
    FUN_100fe49c0();
    ppppppuVar12 = ppppppuVar11;
    func_0x000107c613fc();
    FUN_10100047c(apppuStack_90,ppppppuVar12 + 2);
    ppppppuVar12[7] = (undefined8 *****)ppppuStack_240;
    ppppppuVar12[8] = pppppuVar20;
    (**(code **)(lVar29 + 0x20))
              ((long)ppppppuVar12 + _DAT_112d530d0,(long)puVar30 - extraout_x8_00,lVar25);
    func_0x0001000834e4(apppppuStack_b8);
    ppuStack_98 = &PTR_DAT_110374518;
    apppppuStack_b8[0] = ppppppuVar12;
    pppppuStack_a0 = ppppppuVar11;
    func_0x0001000834e4(apppuStack_90);
    FUN_100c9fc64(apppppuStack_b8,apppuStack_90);
  }
  pppuStack_230 = *(undefined8 ****)(param_2 + 0x10);
  pppppuVar7 = (undefined8 *****)((undefined8 *)((long)pppuStack_230 + _DAT_1137ff138))[1];
  if (pppppuVar7 != (undefined8 *****)0x0) {
    pppppuVar23 = *(undefined8 ******)((long)pppuStack_230 + _DAT_1137ff138);
    pppppuVar32 = *(undefined8 ******)(param_2 + 0xb0);
    ppppppuVar11 = (undefined8 ******)0x0;
    func_0x000100fe1488();
    ppppppuVar12 = ppppppuVar11;
    func_0x000107c613fc();
    FUN_10100047c(apppuStack_90,ppppppuVar12 + 2);
    ppppuVar22 = ppppuStack_2e8;
    ppppppuVar12[7] = pppppuVar32;
    ppppppuVar12[8] = (undefined8 *****)ppppuStack_2e8;
    ppppppuVar12[9] = (undefined8 *****)ppppuStack_240;
    ppppppuVar12[10] = pppppuVar20;
    ppppppuVar12[0xb] = pppppuVar23;
    ppppppuVar12[0xc] = pppppuVar7;
    ppuStack_98 = &PTR_DAT_1103742e0;
    apppppuStack_b8[0] = ppppppuVar12;
    pppppuStack_a0 = ppppppuVar11;
    func_0x000107c61434(pppppuVar20);
    func_0x000107c6157c(ppppuVar22);
    func_0x000107c61434(pppppuVar7);
    func_0x000107c6157c(pppppuVar32);
    func_0x0001000834e4(apppuStack_90);
    FUN_100c9fc64(apppppuStack_b8,apppuStack_90);
  }
  lVar25 = 0x112d540a8;
  func_0x0001000285a8(0x112d540a8,&UNK_10d91b2d0);
  puStack_318 = puVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar38 = (long)puVar30 - extraout_x8_01;
  lVar25 = 0x112d53328;
  func_0x0001000285a8(0x112d53328,&UNK_10d919ad0);
  lVar29 = *(long *)(lVar25 + -8);
  pcVar35 = *(code **)(lVar29 + 0x38);
  (*pcVar35)(lVar38,1,1,lVar25);
  func_0x0001000d224c(apppppuStack_b8);
  ppuVar5 = ppuStack_98;
  ppppppuVar12 = (undefined8 ******)pppppuStack_a0;
  func_0x0001000a8868(apppppuStack_b8,pppppuStack_a0);
  (*(code *)ppuVar5[0xb])(ppppppuVar12,ppuVar5);
  func_0x0001000834e4(apppppuStack_b8);
  lStack_2f0 = lVar38;
  if (((ulong)ppppppuVar12 & 1) == 0) {
    func_0x000107c6142c(pppppuVar20);
    pppuVar9 = pppuStack_230;
    lVar26 = lVar38;
  }
  else {
    FUN_10100047c(apppuStack_90,apppppuStack_b8);
    pppuVar9 = pppuStack_230;
    pcStack_248 = pcVar35;
    FUN_10100047c((long)pppuStack_230 + _DAT_112d54c18,apppuStack_e0);
    ppuVar5 = ppuStack_c0;
    ppppuVar22 = ppppuStack_c8;
    func_0x0001000a8868(apppuStack_e0,ppppuStack_c8);
    lVar26 = 0x112d50c50;
    func_0x0001000285a8(0x112d50c50,&UNK_10d9175b8);
    (*(code *)PTR____chkstk_darwin_11034bd40)
              (*(long *)(*(long *)(lVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)((long)ppuVar5 + 0x20))(lVar38 - extraout_x8_02,ppppuVar22,ppuVar5);
    ppppppuVar12 = (undefined8 ******)0x0;
    FUN_100fe6100();
    func_0x000107c613fc();
    lVar26 = lStack_2f0;
    ppppppuVar11 = apppppuStack_b8;
    FUN_100fe56fc(ppppppuVar11,ppppuStack_240,pppppuVar20,lVar38 - extraout_x8_02);
    param_2 = lStack_278;
    func_0x0001000834e4(apppuStack_e0);
    ppuStack_98 = &PTR_DAT_1103745a8;
    apppppuStack_b8[0] = ppppppuVar11;
    pppppuStack_a0 = ppppppuVar12;
    func_0x000107c6157c(ppppppuVar11);
    func_0x000101000588(lVar26,0x112d540a8,&UNK_10d91b2d0);
    func_0x0001000834e4(apppuStack_90);
    FUN_100c9fc64(apppppuStack_b8,apppuStack_90);
    (**(code **)(lVar29 + 0x10))(lVar26,(long)ppppppuVar11 + _DAT_1137ff118,lVar25);
    func_0x000107c61574(ppppppuVar11);
    (*pcStack_248)(lVar26,0,1,lVar25);
  }
  puVar8 = PTR_PTR_1126affa8;
  func_0x000107c61168(PTR_PTR_1126affa8);
  func_0x000107c5aa04();
  func_0x000107c61180();
  pppppuVar7 = (undefined8 *****)apppuStack_90;
  FUN_101006e74(pppppuVar7,lVar26,puVar8);
  ppppuStack_280 = pppppuVar7;
  ppppuStack_240 = (undefined8 ****)lVar26;
  func_0x000107c61170(puVar8);
  lVar25 = lStack_260;
  ppppuVar22 = (undefined8 ****)pppuStack_270;
  ppppuVar10 = (undefined8 ****)pppuStack_270;
  (**(code **)(lStack_260 + 0x20))(pppuStack_270,lStack_260);
  func_0x000107c614f0();
  ppppuStack_250 = pppppuVar7;
  func_0x000107c3e2c0(ppppuVar10);
  func_0x000107c615e8(ppppuVar10);
  pcStack_248 = (code *)_DAT_112d54c18;
  FUN_10100047c((long)pppuVar9 + _DAT_112d54c18,apppppuStack_b8);
  FUN_100c9fc64(apppppuStack_b8,apppuStack_e0);
  puVar8 = &UNK_110375aa8;
  func_0x000107c613fc(&UNK_110375aa8,0x40,7);
  FUN_100c9fc64(apppuStack_e0,puVar8 + 0x10);
  pppuVar9 = pppuStack_238;
  *(undefined8 ****)(puVar8 + 0x38) = pppuStack_238;
  uVar33 = *(undefined8 *)(param_2 + _DAT_112d53ed8);
  pcVar35 = *(code **)(lVar25 + 0x18);
  func_0x000107c61580(uVar33,2);
  func_0x000107c6157c(pppuVar9);
  ppppuVar10 = ppppuVar22;
  (*pcVar35)(ppppuVar22,lVar25);
  ppppuVar13 = ppppuVar22;
  pppuStack_298 = ppppuVar10;
  (**(code **)(lVar25 + 0x28))(ppppuVar22,lVar25);
  ppppuStack_2a0 = ppppuVar13;
  (**(code **)(lVar25 + 0x30))(ppppuVar22,lVar25);
  uVar21 = *(undefined8 *)(param_2 + 0x88);
  uVar31 = *(undefined8 *)(param_2 + 0x90);
  lStack_290 = *(undefined8 *)(param_2 + 0x98);
  lVar25 = *(long *)(param_2 + 0x60);
  pppuStack_2a8 = ppppuVar22;
  func_0x0001000a8868(param_2 + 0x48,lVar25);
  plStack_288 = (long *)lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar25 + -8) + 0x40));
  puVar30 = (undefined8 *)(lVar38 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar30);
  pppppuVar7 = (undefined8 *****)*puVar30;
  lVar25 = 0;
  FUN_100fda79c();
  ppuStack_98 = &PTR_DAT_110373a30;
  lVar14 = 0;
  apppppuStack_b8[0] = pppppuVar7;
  pppppuStack_a0 = (undefined8 *****)lVar25;
  FUN_100ff6c64();
  lVar26 = lVar14;
  func_0x000107c610f8();
  lVar29 = lVar26 + _DAT_112d53d18;
  *(undefined8 *)(lVar29 + 8) = 0;
  func_0x000107c61614(lVar29,0);
  *(undefined8 *)(lVar26 + _DAT_112d53d28) = 0;
  *(undefined8 *)(lVar26 + _DAT_112d53d30) = 0;
  lVar38 = _DAT_112d53d38;
  lVar25 = 0x112d53da0;
  func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
  (**(code **)(*(long *)(lVar25 + -8) + 0x38))(lVar26 + lVar38,1,1,lVar25);
  lVar38 = _DAT_112d53d40;
  lVar25 = 0x112d52e28;
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  pppuStack_238 = *(undefined8 ****)(lVar25 + -8);
  (**(code **)((long)pppuStack_238 + 0x38))(lVar26 + lVar38,1,1,lVar25);
  *(undefined8 *)(lVar26 + _DAT_112d53d48) = 0;
  *(undefined8 *)(lVar26 + _DAT_112d53d50) = 0;
  *(undefined8 *)(lVar26 + _DAT_112d53d58) = 0;
  *(undefined ***)(lVar29 + 8) = &PTR_DAT_110374920;
  func_0x000107c61604(lVar29,uVar33);
  lVar25 = lStack_290;
  *(undefined8 ****)(lVar26 + _DAT_112d53ce0) = pppuStack_298;
  *(undefined8 *****)(lVar26 + _DAT_112d53ce8) = ppppuStack_2a0;
  *(undefined8 ****)(lVar26 + _DAT_112d53cf0) = pppuStack_2a8;
  puVar30 = (undefined8 *)(lVar26 + _DAT_112d53d20);
  *puVar30 = &UNK_10d91acd0;
  puVar30[1] = puVar8;
  *(undefined8 *)(lVar26 + _DAT_112d53cf8) = uVar21;
  *(undefined8 *)(lVar26 + _DAT_112d53d00) = uVar31;
  *(long *)(lVar26 + _DAT_112d53d08) = lStack_290;
  FUN_10100047c(apppppuStack_b8,lVar26 + _DAT_112d53d10);
  puVar2 = PTR_s_init_1125d9248;
  puStack_320 = puVar8;
  lStack_f0 = lVar26;
  lStack_e8 = lVar14;
  func_0x000107c6157c(puVar8);
  func_0x000107c61174(uVar21);
  func_0x000107c61174(uVar31);
  func_0x000107c61174(lVar25);
  plVar15 = &lStack_f0;
  func_0x000107c61154(plVar15,puVar2);
  uStack_328 = uVar33;
  func_0x000107c61574(uVar33);
  func_0x0001000834e4(apppppuStack_b8);
  plVar4 = plStack_288;
  uVar21 = *(undefined8 *)((long)plVar15 + _DAT_112d53ce0);
  func_0x000107c615f0(uVar21);
  FUN_100ff5ee8();
  FUN_100fff9fc();
  func_0x000104884898();
  func_0x000107c61574(uVar21);
  func_0x00010075c898(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  plVar16 = plVar15;
  func_0x000102e96320();
  func_0x000107c42c1c(*(undefined8 *)((long)plVar15 + _DAT_112d53cf8));
  func_0x000107c61170(plVar16);
  uVar21 = *(undefined8 *)(param_2 + 0xd0);
  *(long **)(param_2 + 0xd0) = plVar15;
  func_0x000107c61174();
  plStack_288 = plVar15;
  func_0x000107c61170(uVar21);
  apppppuStack_b8[0] = (undefined8 *****)ppppuStack_280;
  lVar25 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  lStack_290 = (long)plVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar38 = (long)plVar4 - extraout_x8_04;
  (**(code **)((long)ppppuStack_240 + 8))(lVar38,ppppuStack_250);
  ppppuStack_240 = (undefined8 ****)lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)((long)pppuStack_238 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = lVar38 - extraout_x8_05;
  FUN_100ff5f70(lVar25);
  uVar21 = *(undefined8 *)(*(long *)(param_2 + 0x20) + _DAT_112d542f0);
  lVar29 = *(long *)(param_2 + 0x60);
  func_0x0001000a8868(param_2 + 0x48,lVar29);
  uVar33 = *(undefined8 *)((long)pppuStack_230 + _DAT_1137ff140);
  uVar1 = *(undefined1 *)((undefined8 *)((long)pppuStack_230 + _DAT_1137ff140) + 1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
  puVar30 = (undefined8 *)(lVar25 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_01 + 0x10))(puVar30);
  uVar31 = *puVar30;
  func_0x000107c6157c(uVar21);
  FUN_100fffaac(lVar38,lVar25,uVar21,uVar31,uVar33,uVar1);
  func_0x000107c61574(uVar21);
  lVar29 = lStack_290;
  lVar25 = 0x112d52e48;
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  lVar14 = *(long *)(lVar25 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar29 - extraout_x8_07;
  (**(code **)(lVar14 + 0x10))(lVar26,lVar38 + _DAT_112d52c58,lVar25);
  FUN_100ff6310(lVar26);
  (**(code **)(lVar14 + 8))(lVar26,lVar25);
  lVar26 = 0;
  func_0x000100fef61c();
  pcVar17 = "setupChildFlows(with:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  pcVar18 = pcVar17;
  func_0x000107c614f0();
  FUN_100fef74c(pcVar17,lVar26,pcVar18);
  ppppuStack_240 = *(undefined8 *****)(param_2 + 0x30);
  pppuStack_238 = *(undefined8 ****)(*(long *)(param_2 + 0x38) + _DAT_11303eae0);
  func_0x000107c6157c();
  func_0x0001000d224c(apppppuStack_b8);
  FUN_10100047c((long)pppuStack_230 + (long)pcStack_248,apppuStack_e0);
  func_0x0001000a8868(apppuStack_e0,ppppuStack_c8);
  lVar25 = 0x112d50c58;
  func_0x0001000285a8(0x112d50c58,&UNK_10d9175c0);
  lStack_330 = lVar29;
  lStack_348 = *(long *)(lVar25 + -8);
  lStack_338 = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_348 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar29 - extraout_x8_08;
  lStack_350 = lVar29;
  (**(code **)((long)ppuStack_c0 + 0x18))(ppppuStack_c8,ppuStack_c0);
  pppuStack_230 = *(undefined8 ****)(param_2 + 0x40);
  FUN_10100047c(param_2 + 0x48,auStack_118);
  pppuVar9 = (undefined8 ***)&UNK_110375ad0;
  func_0x000107c613fc(&UNK_110375ad0,0x38,7);
  ppuStack_2b0 = pppuVar9;
  FUN_100c9fc64(auStack_118,pppuVar9 + 2);
  pppppuVar7 = pppppuStack_a0;
  func_0x0001000c6518(apppppuStack_b8,pppppuStack_a0);
  lStack_340 = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)((long)pppppuVar7 + -8) + 0x40));
  puVar30 = (undefined8 *)(lVar29 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_02 + 0x10))(puVar30);
  uVar21 = *puVar30;
  lVar29 = 0;
  func_0x000100ff1898();
  ppuStack_120 = &PTR_DAT_110375400;
  lVar14 = 0;
  auStack_140[0] = uVar21;
  lStack_128 = lVar29;
  FUN_100fdd780();
  ppuStack_148 = &PTR_DAT_1103741e0;
  ppuStack_170 = &PTR_DAT_110374e18;
  pppppuVar7 = (undefined8 *****)0x0;
  apcStack_190[0] = pcVar17;
  lStack_178 = lVar26;
  alStack_168[0] = lVar38;
  lStack_150 = lVar14;
  FUN_100fea7bc();
  ppppuStack_2a0 = pppppuVar7;
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_140,lVar29);
  puStack_358 = puVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
  puVar30 = (undefined8 *)((long)puVar30 - (extraout_x8_10 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_03 + 0x10))(puVar30);
  func_0x0001000c6518(alStack_168,lVar14);
  puStack_360 = puVar30;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  puVar37 = (undefined8 *)((long)puVar30 - (extraout_x8_11 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_04 + 0x10))(puVar37);
  func_0x0001000c6518(apcStack_190,lVar26);
  puStack_368 = puVar37;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
  puVar27 = (undefined8 *)((long)puVar37 - (extraout_x8_12 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_05 + 0x10))(puVar27);
  auStack_1b8[0] = *puVar30;
  auStack_1e0[0] = *puVar37;
  auStack_208[0] = *puVar27;
  ppuStack_198 = &PTR_DAT_110375400;
  ppuStack_1c0 = &PTR_DAT_1103741e0;
  ppuStack_1e8 = &PTR_DAT_110374e18;
  *(undefined8 *)((long)pppppuVar7 + _DAT_112d53620) = 0;
  lVar25 = _DAT_112d53628;
  auStack_228[0] = 0;
  auStack_228[1] = 0;
  uStack_218 = 0;
  lStack_1f0 = lVar26;
  lStack_1c8 = lVar14;
  lStack_1a0 = lVar29;
  func_0x0001000285a8(0x112d540c8,&UNK_10d91ace8);
  func_0x000107c613fc();
  lStack_290 = lVar38;
  func_0x000107c61580(lVar38,2);
  pppuStack_298 = (undefined8 ***)pcVar17;
  func_0x000107c61580(pcVar17,2);
  puVar19 = auStack_228;
  func_0x00010006c248();
  *(ulong **)((long)pppppuVar7 + lVar25) = puVar19;
  lVar25 = _DAT_112d53630;
  auStack_228[0] = auStack_228[0] & 0xffffffffffffff00;
  func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
  func_0x000107c613fc();
  puVar19 = auStack_228;
  func_0x00010006c248();
  *(ulong **)((long)pppppuVar7 + lVar25) = puVar19;
  puVar30 = (undefined8 *)((long)pppppuVar7 + _DAT_112d53658);
  *puVar30 = 0;
  puVar30[1] = 0;
  lVar25 = _DAT_112d53660;
  auStack_228[0] = 0;
  func_0x0001000285a8(0x112d540d0,&UNK_10d91acf8);
  func_0x000107c613fc();
  puVar19 = auStack_228;
  func_0x00010006c248();
  *(ulong **)((long)pppppuVar7 + lVar25) = puVar19;
  lVar25 = _DAT_112d53668;
  auStack_228[0] = 0;
  auStack_228[1] = 0;
  uStack_218 = CONCAT62(uStack_218._2_6_,3);
  uStack_210 = 0;
  func_0x0001000285a8(0x112d540d8,&UNK_10d91ad00);
  func_0x000107c613fc();
  puVar19 = auStack_228;
  func_0x00010006c248();
  *(ulong **)((long)pppppuVar7 + lVar25) = puVar19;
  *(undefined8 *)((long)pppppuVar7 + _DAT_112d53670) = 0;
  lVar25 = _DAT_112d53678;
  auStack_228[1] = 0;
  uStack_218 = 0;
  auStack_228[0] = 0;
  func_0x0001000285a8(0x112d540e0,&UNK_10d91ad08);
  func_0x000107c613fc();
  puVar19 = auStack_228;
  func_0x00010006c248();
  *(ulong **)((long)pppppuVar7 + lVar25) = puVar19;
  pppppuVar7[2] = (undefined8 ****)pppuStack_238;
  pppppuVar7[3] = ppppuStack_240;
  FUN_10100047c(auStack_1b8,pppppuVar7 + 4);
  FUN_10100047c(auStack_1e0,pppppuVar7 + 9);
  FUN_10100047c(auStack_208,pppppuVar7 + 0xe);
  pppuVar9 = pppuStack_230;
  pppppuVar7[0x13] = (undefined8 ****)pppuStack_230;
  ppppuVar22 = (undefined8 ****)&UNK_110375af8;
  func_0x000107c613fc(&UNK_110375af8,0x20,7);
  ppuVar3 = ppuStack_2b0;
  ppppuVar22[2] = (undefined8 ***)FUN_101000080;
  ppppuVar22[3] = (undefined8 ***)ppuStack_2b0;
  pppppuVar7[0x14] = (undefined8 ****)FUN_1010000dc;
  pppppuVar7[0x15] = ppppuVar22;
  lVar25 = 0x112d53800;
  func_0x0001000285a8(0x112d53800,&UNK_10d91ad10);
  lStack_2d0 = *(long *)(lVar25 + -8);
  puStack_380 = puVar27;
  lStack_2c8 = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_2d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar38 = (long)puVar27 - extraout_x8_13;
  lVar25 = 0x112d53810;
  func_0x0001000285a8(0x112d53810,&UNK_10d91a118);
  lStack_2e0 = *(long *)(lVar25 + -8);
  lStack_390 = lVar38;
  lStack_2d8 = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_2e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar38 - extraout_x8_14;
  lVar25 = 0x112d540e8;
  func_0x0001000285a8(0x112d540e8,&UNK_10d91ad20);
  lVar26 = *(long *)(lVar25 + -8);
  pcStack_248 = (code *)lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = lVar14 - extraout_x8_15;
  pcStack_3a0 = (code *)CONCAT44(pcStack_3a0._4_4_,
                                 *(undefined4 *)
                                  PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
                                );
  (**(code **)(lVar26 + 0x68))
            (lVar29,*(undefined4 *)
                     PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             lVar25);
  iVar6 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  func_0x000107c6157c(pppuStack_238);
  func_0x000107c6157c(ppppuStack_240);
  func_0x000107c61174(pppuVar9);
  func_0x000107c6157c(ppuVar3);
  ppppuStack_240 = (undefined8 ****)CONCAT44(ppppuStack_240._4_4_,iVar6);
  if (iVar6 == 0) {
    func_0x000100ffcf10(lVar38,lVar14,lVar29);
  }
  else {
    func_0x000107c5fd10(lVar38,lVar14,&UNK_110376e60,lVar29,&UNK_110376e60);
  }
  (**(code **)(lVar26 + 8))(lVar29,lVar25);
  pcVar35 = pcStack_248;
  lStack_398 = lVar38;
  (**(code **)(lStack_2d0 + 0x10))((long)pppppuVar7 + _DAT_112d53610,lVar38,lStack_2c8);
  lStack_3a8 = lVar14;
  (**(code **)(lStack_2e0 + 0x10))((long)pppppuVar7 + _DAT_112d53618,lVar14,lStack_2d8);
  lVar25 = 0x112d53808;
  func_0x0001000285a8(0x112d53808,&UNK_10d91a100);
  lStack_3e0 = (long)pcVar35;
  lVar34 = *(long *)(lVar25 + -8);
  lStack_2b8 = *(long *)(lVar34 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_2b8 + 0xfU & 0xfffffffffffffff0);
  lVar36 = (long)pcVar35 - extraout_x8_16;
  lVar29 = 0x112d53870;
  func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
  pcStack_248 = *(code **)(lVar29 + -8);
  lStack_3b0 = *(long *)((long)pcStack_248 + 0x40);
  lStack_3e8 = lVar36;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_3b0 + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar36 - extraout_x8_17;
  lVar38 = 0x112d540f0;
  func_0x0001000285a8(0x112d540f0,&UNK_10d91ad30);
  lVar26 = *(long *)(lVar38 + -8);
  lStack_3b8 = *(long *)(lVar26 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_3b8 + 0xfU & 0xfffffffffffffff0);
  puVar30 = (undefined8 *)(lVar14 - extraout_x8_18);
  *puVar30 = 1;
  uStack_3c4 = *(undefined4 *)
                PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
  ;
  pcStack_3c0 = *(code **)(lVar26 + 0x68);
  ppppuStack_250 = (undefined8 ****)lVar38;
  (*pcStack_3c0)(puVar30);
  if ((int)ppppuStack_240 == 0) {
    func_0x000100ffccf0(lVar36,lVar14,puVar30);
  }
  else {
    func_0x000107c5fd10(lVar36,lVar14,&UNK_110375810,puVar30,&UNK_110375810);
  }
  pcStack_3d8 = *(code **)(lVar26 + 8);
  (*pcStack_3d8)(puVar30,ppppuStack_250);
  pcStack_388 = *(code **)(lVar34 + 0x10);
  lStack_3f0 = lVar36;
  pcStack_370 = (code *)lVar34;
  pppuStack_230 = (undefined8 ***)lVar25;
  (*pcStack_388)((long)pppppuVar7 + _DAT_112d53638,lVar36,lVar25);
  pcStack_3d0 = *(code **)((long)pcStack_248 + 0x10);
  alStack_410[3] = lVar14;
  pppuStack_2a8 = (undefined8 ***)lVar29;
  (*pcStack_3d0)((long)pppppuVar7 + _DAT_112d53640,lVar14,lVar29);
  lVar25 = 0x112d53868;
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
  alStack_410[0] = *(long *)(lVar25 + -8);
  lStack_378 = *(long *)(alStack_410[0] + 0x40);
  alStack_410[2] = lVar14;
  lStack_2c0 = lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)(lStack_378 + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_19;
  lVar25 = 0x112d53850;
  func_0x0001000285a8(0x112d53850,&UNK_10d91ad40);
  lVar36 = *(long *)(lVar25 + -8);
  alStack_410[1] = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar36 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar34 = lVar14 - extraout_x8_20;
  lVar29 = 0x112d540f8;
  func_0x0001000285a8(0x112d540f8,&UNK_10d91ad48);
  lVar26 = *(long *)(lVar29 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar38 = lVar34 - extraout_x8_21;
  (**(code **)(lVar26 + 0x68))(lVar38,(ulong)pcStack_3a0 & 0xffffffff,lVar29);
  if ((int)ppppuStack_240 == 0) {
    func_0x000100ffcad0(lVar14,lVar34,lVar38);
  }
  else {
    func_0x000107c5fd10(lVar14,lVar34,&UNK_110375090,lVar38,&UNK_110375090);
  }
  (**(code **)(lVar26 + 8))(lVar38,lVar29);
  lVar26 = lStack_2c0;
  lVar29 = alStack_410[0];
  pcStack_3a0 = *(code **)(alStack_410[0] + 0x10);
  (*pcStack_3a0)((long)pppppuVar7 + _DAT_112d53648,lVar14,lStack_2c0);
  (**(code **)(lVar36 + 0x10))((long)pppppuVar7 + _DAT_112d53650,lVar34,lVar25);
  lVar38 = lStack_350;
  FUN_100fea278(lStack_350);
  func_0x000107c61574(lStack_290);
  func_0x000107c61574(pppuStack_298);
  func_0x000107c61574(pppuStack_238);
  func_0x000107c61574(ppuStack_2b0);
  (**(code **)(lVar36 + 8))(lVar34,lVar25);
  (**(code **)(lVar29 + 8))(lVar14,lVar26);
  pppuVar9 = pppuStack_2a8;
  ppuStack_2b0 = *(undefined8 ***)((long)pcStack_248 + 8);
  (*(code *)ppuStack_2b0)(alStack_410[3],pppuStack_2a8);
  pcStack_370 = *(code **)((long)pcStack_370 + 8);
  (*pcStack_370)(lStack_3f0,pppuStack_230);
  (**(code **)(lStack_2e0 + 8))(lStack_3a8,lStack_2d8);
  (**(code **)(lStack_2d0 + 8))(lStack_398,lStack_2c8);
  (**(code **)(lStack_348 + 8))(lVar38,lStack_338);
  func_0x0001000834e4(auStack_208);
  func_0x0001000834e4(auStack_1e0);
  func_0x0001000834e4(auStack_1b8);
  func_0x0001000834e4(apcStack_190);
  func_0x0001000834e4(alStack_168);
  func_0x0001000834e4(auStack_140);
  func_0x0001000834e4(apppppuStack_b8);
  lVar29 = lStack_330;
  func_0x0001000834e4(apppuStack_e0);
  lVar38 = lStack_278;
  lVar25 = _DAT_112d53ee8;
  pppppuStack_a0 = (undefined8 *****)ppppuStack_2a0;
  ppuStack_98 = &PTR_DAT_110374cc8;
  apppppuStack_b8[0] = pppppuVar7;
  func_0x000107c61428(lStack_278 + _DAT_112d53ee8,apppuStack_e0,0x21,0);
  func_0x000107c6157c(pppppuVar7);
  func_0x0001010005c8(apppppuStack_b8,lVar38 + lVar25,0x112d535d0,&UNK_10d919d50);
  func_0x000107c614a8(apppuStack_e0);
  lStack_2c8 = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar29 = lVar29 - (extraout_x12_06 + 0xfU & 0xfffffffffffffff0);
  lStack_2d0 = lVar29;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar29 - (extraout_x12_07 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar30 = (undefined8 *)(lVar25 - (extraout_x12_08 + 0xfU & 0xfffffffffffffff0));
  *puVar30 = 1;
  (*pcStack_3c0)(puVar30,uStack_3c4,ppppuStack_250);
  pppuStack_238 = (undefined8 ***)lVar29;
  if ((int)ppppuStack_240 == 0) {
    func_0x000100ffccf0(lVar29,lVar25,puVar30);
  }
  else {
    func_0x000107c5fd10(lVar29,lVar25,&UNK_110375810,puVar30,&UNK_110375810);
  }
  (*pcStack_3d8)(puVar30,ppppuStack_250);
  lVar29 = 0x112d54088;
  func_0x0001000285a8(0x112d54088,&UNK_10d91ac58);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar29 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar25 - extraout_x8_22;
  (*pcStack_3d0)(lVar26,lVar25,pppuVar9);
  (**(code **)((long)pcStack_248 + 0x38))(lVar26,0,1,pppuVar9);
  lVar29 = _DAT_112d53ec0;
  func_0x000107c61428(lVar38 + _DAT_112d53ec0,apppppuStack_b8,0x21,0);
  func_0x0001010005c8(lVar26,lVar38 + lVar29,0x112d54088,&UNK_10d91ac58);
  func_0x000107c614a8(apppppuStack_b8);
  lVar29 = 0x112d53898;
  func_0x0001000285a8(0x112d53898,&UNK_10d91a1c0);
  lVar26 = *(long *)(lVar29 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  apppppuStack_b8[0] = (undefined8 *****)((ulong)apppppuStack_b8[0] & 0xffffffffffffff00);
  func_0x000107c5fd28(lVar25 - extraout_x8_23,apppppuStack_b8,pppuVar9);
  (**(code **)(lVar26 + 8))(lVar25 - extraout_x8_23,lVar29);
  lVar29 = lStack_2b8;
  ppppuStack_250 = (undefined8 ****)lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pppuVar9 = pppuStack_230;
  pcVar35 = pcStack_388;
  uVar24 = lVar29 + 0xfU & 0xfffffffffffffff0;
  lVar29 = lVar25 - uVar24;
  (*pcStack_388)(lVar29,(long)pppppuVar7 + _DAT_112d53638,pppuStack_230);
  lStack_2d8 = lVar29;
  ppppuStack_240 = (undefined8 ****)lVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar29 - uVar24;
  (*pcVar35)(lVar25,pppuStack_238,pppuVar9);
  pppppuVar23 = (undefined8 *****)ppppuStack_268;
  ppppuVar22 = ppppuStack_308;
  pppppuStack_a0 = (undefined8 *****)ppppuStack_308;
  ppuStack_98 = &PTR_DAT_110374048;
  apppppuStack_b8[0] = (undefined8 *****)ppppuStack_268;
  uVar21 = 0;
  FUN_100ff50f4(0);
  func_0x000107c613fc();
  func_0x0001000c6518(apppppuStack_b8,ppppuVar22);
  (*(code *)PTR____chkstk_darwin_11034bd40)(ppppuVar22[-1][8]);
  puVar30 = (undefined8 *)(lVar25 - (extraout_x8_24 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_09 + 0x10))(puVar30);
  uVar31 = *puVar30;
  func_0x000107c6157c(pppppuVar23);
  FUN_100ffd290(uVar31,lVar29,lVar25,uVar21);
  func_0x0001000834e4(apppppuStack_b8);
  ppppuVar22 = ppppuStack_250;
  uVar21 = *(undefined8 *)(lVar38 + 0xd8);
  *(undefined8 *)(lVar38 + 0xd8) = uVar31;
  pcStack_248 = (code *)uVar31;
  func_0x000107c6157c(uVar31);
  func_0x000107c61574(uVar21);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = (long)ppppuVar22 - (extraout_x12_10 + 0xfU & 0xfffffffffffffff0);
  (*pcStack_3a0)(lVar25,(long)pppppuVar7 + _DAT_112d53648,lStack_2c0);
  lVar29 = *(long *)(lVar38 + 0x60);
  func_0x0001000a8868(lVar38 + 0x48,lVar29);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar29 + -8) + 0x40));
  (**(code **)(extraout_x12_11 + 0x10))(lVar25 - (extraout_x8_25 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c6157c();
  uVar21 = uStack_328;
  FUN_1010000e4();
  func_0x000107c61574(uVar21);
  uVar31 = *(undefined8 *)(lVar38 + _DAT_112d53ec8);
  *(undefined8 ******)(lVar38 + _DAT_112d53ec8) = pppppuVar23;
  func_0x000107c6157c(pppppuVar23);
  func_0x000107c61574(uVar31);
  func_0x0001000285a8(0x112d54100,&UNK_10d91ad50);
  uVar33 = *(undefined8 *)(lVar38 + 0x28);
  func_0x000107c4d6b0(uVar33);
  func_0x000107c61180();
  uVar31 = uVar33;
  func_0x0001000bda74();
  func_0x000107c61170(uVar33);
  pppuVar9 = pppuStack_2f8;
  pppppuStack_a0 = (undefined8 *****)ppppuStack_2a0;
  ppuStack_98 = &PTR_DAT_110374d00;
  ppppuStack_c8 = ppppuStack_300;
  ppuStack_c0 = &PTR_DAT_110374660;
  apppuStack_e0[0] = pppuStack_2f8;
  lVar25 = *(long *)(lVar38 + 0x60);
  lVar29 = *(long *)(lVar38 + 0x68);
  apppppuStack_b8[0] = pppppuVar7;
  func_0x0001000a8868(lVar38 + 0x48,lVar25);
  uStack_f8 = *(undefined8 *)(lVar29 + 0x18);
  lStack_100 = lVar25;
  func_0x0001000c5db4(auStack_118);
  (**(code **)(*(long *)(lVar25 + -8) + 0x10))();
  func_0x000107c6157c(pppuVar9);
  func_0x000107c6157c(pppppuVar7);
  uVar33 = uVar31;
  FUN_101012b28(0x4086800000000000,0x4094000000000000,uVar31,apppppuStack_b8,apppuStack_e0,
                auStack_118,uVar21,&PTR_DAT_1103748f8);
  func_0x000107c61574(uVar31);
  func_0x0001000834e4(auStack_118);
  func_0x0001000834e4(apppuStack_e0);
  func_0x0001000834e4(apppppuStack_b8);
  uVar31 = uStack_258;
  lVar25 = lStack_260;
  ppppuVar22 = (undefined8 ****)pppuStack_270;
  (**(code **)(lStack_260 + 0x10))(pppuStack_270,lStack_260);
  func_0x000107c3e2c0();
  func_0x000107c615e8(ppppuVar22);
  puVar8 = &UNK_110375b20;
  func_0x000107c613fc(&UNK_110375b20,0x20,7);
  *(long *)(puVar8 + 0x18) = lVar25;
  func_0x000107c61614(puVar8 + 0x10,uVar31);
  func_0x000107c6157c(puVar8);
  FUN_100ffd4d4(pppppuVar7,FUN_101000270,puVar8,uVar21);
  func_0x000107c61574(ppppuStack_268);
  func_0x000107c61574(pppuVar9);
  func_0x000107c61170(ppuStack_310);
  func_0x000107c61574(ppppuStack_2e8);
  func_0x000107c61170(ppppuStack_280);
  func_0x000107c61574(puStack_320);
  func_0x000107c61170(plStack_288);
  func_0x000107c61574(lStack_290);
  func_0x000107c61574(pppuStack_298);
  func_0x000107c61574(pppppuVar7);
  func_0x000107c61574(pcStack_248);
  func_0x000107c61574(pppppuVar23);
  func_0x000107c61574(puVar8);
  func_0x000107c61170(uVar33);
  (*(code *)ppuStack_2b0)(ppppuStack_240,pppuStack_2a8);
  (*pcStack_370)(pppuStack_238,pppuStack_230);
  func_0x000101000588(lStack_2f0,0x112d540a8,&UNK_10d91b2d0);
  func_0x0001000834e4(apppuStack_90);
  func_0x000107c61574(puVar8);
  return;
}



/* Entry: 100fff5c8; end: 100fff5e7;  */

void FUN_100fff5c8(void)

{
  func_0x000100ffa500();
  return;
}



/* Entry: 100fff5e8; end: 100fff5ff;  */

void FUN_100fff5e8(undefined1 *param_1)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = *param_1;
  *param_1 = 1;
  return;
}



/* Entry: 100fff600; end: 100fff653;  */

void FUN_100fff600(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x22;
  
  plVar4 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101000744;
  plVar4[0x1d] = unaff_x20;
  lVar5 = 0x112d53870;
  func_0x0001000285a8(0x112d53870,&UNK_10d91abf0);
  plVar4[0x1e] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x1f] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar1;
  lVar5 = 0x112d54098;
  func_0x0001000285a8(0x112d54098,&UNK_10d91ac98);
  uVar1 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x22] = uVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x23] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x24] = lVar3;
  plVar4[0x25] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffae5c,lVar3,lVar5);
  return;
}



/* Entry: 100fff654; end: 100fff67b;  */

void FUN_100fff654(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 100fff67c; end: 100fff6a7;  */

void FUN_100fff67c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fff6a8; end: 100fff6f7;  */

void FUN_100fff6a8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101000734;
  plVar3[8] = lVar2;
  plVar3[9] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[10] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffba88,lVar1,lVar2);
  return;
}



/* Entry: 100fff6f8; end: 100fff767;  */

void FUN_100fff6f8(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101000740;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100ffbbcc;
                    /* WARNING: Could not recover jumptable at 0x000100ffbbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100fff768; end: 100fff95b;  */

long FUN_100fff768(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [40];
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  undefined8 auStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar1 = 0;
  FUN_100fda79c();
  ppuStack_68 = &PTR_DAT_110373a50;
  lVar2 = 0;
  auStack_88[0] = param_1;
  lStack_70 = lVar1;
  func_0x000100fdc718();
  ppuStack_90 = &PTR_DAT_110374048;
  lVar3 = 0;
  auStack_b0[0] = param_3;
  lStack_98 = lVar2;
  func_0x000100fe76ac();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_88,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  func_0x0001000c6518(auStack_b0,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar4 = *puVar5;
  auStack_d8[0] = *puVar6;
  *(long *)(lVar3 + 0x28) = lVar1;
  *(undefined ***)(lVar3 + 0x30) = &PTR_DAT_110373a50;
  *(undefined8 *)(lVar3 + 0x10) = uVar4;
  ppuStack_b8 = &PTR_DAT_110374048;
  *(undefined8 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x60) = 0;
  puVar5 = (undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *puVar5 = 0;
  lStack_c0 = lVar2;
  func_0x000107c61614(lVar3 + 0x68,0);
  func_0x000107c61614(lVar3 + 0x78,0);
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  FUN_100c9fc64(auStack_d8,auStack_100);
  func_0x000107c61428(puVar5,auStack_118,0x21,0);
  func_0x0001010005c8(auStack_100,puVar5,0x112d534f8,&UNK_10d919c88);
  func_0x000107c614a8(auStack_118);
  *(undefined ***)(lVar3 + 0x70) = &PTR_DAT_110375920;
  func_0x000107c61604(lVar3 + 0x68,param_4);
  func_0x0001000834e4(auStack_b0);
  func_0x0001000834e4(auStack_88);
  return lVar3;
}



/* Entry: 100fff95c; end: 100fff963;  */

void FUN_100fff95c(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4c974();
  func_0x000107c61180();
  lVar1 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c40a84();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar2 = 0;
  func_0x000100fe71e4();
  lVar1 = lVar2;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100ff358c();
  *(long *)(lVar1 + 0x70) = lVar4;
  *(undefined **)(lVar1 + 0x78) = puVar3;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110374638;
  *param_1 = lVar1;
  return;
}



/* Entry: 100fff964; end: 100fff9b7;  */

void FUN_100fff964(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fff9b8;
  plVar1[7] = unaff_x20 + 0x10;
  plVar1[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffa2fc,0,0);
  return;
}


