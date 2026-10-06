/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fc130c; end: 100fc13cf;  */

void FUN_100fc130c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x0001000834e4(unaff_x22 + 0x10);
  FUN_100fbfd5c(uVar7,0);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar5 = uVar2;
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar4 + 0xa8))(1,uVar5,lVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar2);
  (**(code **)(lVar3 + 8))(uVar7,uVar1);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100fc13cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc13d0; end: 100fc143b;  */

void FUN_100fc13d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c61170(uVar2);
  FUN_100fc3b98(uVar3);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fc1438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc143c; end: 100fc14df;  */

void FUN_100fc143c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  lVar4 = 0x112d51a40;
  func_0x0001000285a8(0x112d51a40,&UNK_10d918958);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc14e0,uVar2,uVar3);
  return;
}



/* Entry: 100fc14e0; end: 100fc1577;  */

void FUN_100fc14e0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x90);
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x60,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fc1578;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 100fc1578; end: 100fc15bb;  */

void FUN_100fc1578(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fc15bc,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 100fc15bc; end: 100fc1923;  */

void FUN_100fc15bc(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x78);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  if (lVar1 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
  }
  else {
    uVar2 = *(long *)(unaff_x22 + 0x90) + 0x10;
    func_0x000107c61648();
    if (uVar2 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
    }
    else {
      uVar6 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar6 & 1) == 0) {
        if (lVar1 == 0) {
          if (*(char *)(unaff_x22 + 0xd8) == '\x01') {
            uVar8 = *(undefined8 *)(uVar2 + 0x28);
            uVar10 = *(undefined8 *)(uVar2 + 0x28);
            uVar9 = *(undefined8 *)(uVar2 + 0x20);
            FUN_100fc3f28(uVar2 + 0x30,unaff_x22 + 0x10);
            puVar4 = &UNK_110372bb0;
            func_0x000107c613fc(&UNK_110372bb0,0x50,7);
            *(ulong *)(puVar4 + 0x10) = uVar2;
            func_0x000100c9e540(unaff_x22 + 0x10,puVar4 + 0x18);
            *(undefined8 *)(puVar4 + 0x48) = uVar10;
            *(undefined8 *)(puVar4 + 0x40) = uVar9;
            func_0x000107c6157c(uVar2);
            func_0x000107c6157c(uVar8);
            uVar5 = 0x41;
            func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918960,puVar4,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(puVar4);
            func_0x000107c61574(uVar2);
            uVar2 = uVar5;
          }
        }
        else {
          if ((uVar5 & 1) != 0) {
            puVar4 = &UNK_1103729a8;
            func_0x000107c613fc(&UNK_1103729a8,0x18,7);
            func_0x000107c61644(puVar4 + 0x10,uVar2);
            puVar3 = &UNK_110372c00;
            func_0x000107c613fc(&UNK_110372c00,0x20,7);
            *(undefined **)(puVar3 + 0x10) = puVar4;
            *(long *)(puVar3 + 0x18) = lVar1;
            FUN_100fc3e24(uVar5,lVar1);
            func_0x000107c61434(lVar1);
            func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918978,puVar3,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574();
            func_0x000107c61574(puVar3);
            func_0x000107c61574(uVar2);
            FUN_100fc3c80(uVar5,lVar1);
            FUN_100fc3c80(uVar5,lVar1);
            goto LAB_100fc18d0;
          }
          uVar8 = *(undefined8 *)(uVar2 + 0x28);
          uVar10 = *(undefined8 *)(uVar2 + 0x28);
          uVar9 = *(undefined8 *)(uVar2 + 0x20);
          FUN_100fc3f28(uVar2 + 0x30,unaff_x22 + 0x38);
          puVar4 = &UNK_110372bd8;
          func_0x000107c613fc(&UNK_110372bd8,0x50,7);
          *(ulong *)(puVar4 + 0x10) = uVar2;
          func_0x000100c9e540(unaff_x22 + 0x38,puVar4 + 0x18);
          *(undefined8 *)(puVar4 + 0x48) = uVar10;
          *(undefined8 *)(puVar4 + 0x40) = uVar9;
          func_0x000107c6157c(uVar8);
          func_0x000107c6157c(uVar2);
          uVar6 = 0x41;
          func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918968,puVar4,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(uVar2);
          FUN_100fc3c80(uVar5,lVar1);
          uVar2 = uVar6;
        }
        func_0x000107c61574(uVar2);
LAB_100fc18d0:
        plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xd0) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100fc1924;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar7,(ulong *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x98));
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
      func_0x000107c61574(uVar2);
    }
    FUN_100fc3c80(uVar5,lVar1);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fc1688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc1924; end: 100fc1967;  */

void FUN_100fc1924(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100fc1968,*(undefined8 *)(lVar1 + 0xb8),*(undefined8 *)(lVar1 + 0xc0));
  return;
}



/* Entry: 100fc1968; end: 100fc1ccf;  */

void FUN_100fc1968(void)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x78);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  if (lVar1 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
  }
  else {
    uVar2 = *(long *)(unaff_x22 + 0x90) + 0x10;
    func_0x000107c61648();
    if (uVar2 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
    }
    else {
      uVar6 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar6 & 1) == 0) {
        if (lVar1 == 0) {
          if (*(char *)(unaff_x22 + 0xd8) == '\x01') {
            uVar8 = *(undefined8 *)(uVar2 + 0x28);
            uVar10 = *(undefined8 *)(uVar2 + 0x28);
            uVar9 = *(undefined8 *)(uVar2 + 0x20);
            FUN_100fc3f28(uVar2 + 0x30,unaff_x22 + 0x10);
            puVar4 = &UNK_110372bb0;
            func_0x000107c613fc(&UNK_110372bb0,0x50,7);
            *(ulong *)(puVar4 + 0x10) = uVar2;
            func_0x000100c9e540(unaff_x22 + 0x10,puVar4 + 0x18);
            *(undefined8 *)(puVar4 + 0x48) = uVar10;
            *(undefined8 *)(puVar4 + 0x40) = uVar9;
            func_0x000107c6157c(uVar2);
            func_0x000107c6157c(uVar8);
            uVar5 = 0x41;
            func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918960,puVar4,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(puVar4);
            func_0x000107c61574(uVar2);
            uVar2 = uVar5;
          }
        }
        else {
          if ((uVar5 & 1) != 0) {
            puVar4 = &UNK_1103729a8;
            func_0x000107c613fc(&UNK_1103729a8,0x18,7);
            func_0x000107c61644(puVar4 + 0x10,uVar2);
            puVar3 = &UNK_110372c00;
            func_0x000107c613fc(&UNK_110372c00,0x20,7);
            *(undefined **)(puVar3 + 0x10) = puVar4;
            *(long *)(puVar3 + 0x18) = lVar1;
            FUN_100fc3e24(uVar5,lVar1);
            func_0x000107c61434(lVar1);
            func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918978,puVar3,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574();
            func_0x000107c61574(puVar3);
            func_0x000107c61574(uVar2);
            FUN_100fc3c80(uVar5,lVar1);
            FUN_100fc3c80(uVar5,lVar1);
            goto LAB_100fc1c7c;
          }
          uVar8 = *(undefined8 *)(uVar2 + 0x28);
          uVar10 = *(undefined8 *)(uVar2 + 0x28);
          uVar9 = *(undefined8 *)(uVar2 + 0x20);
          FUN_100fc3f28(uVar2 + 0x30,unaff_x22 + 0x38);
          puVar4 = &UNK_110372bd8;
          func_0x000107c613fc(&UNK_110372bd8,0x50,7);
          *(ulong *)(puVar4 + 0x10) = uVar2;
          func_0x000100c9e540(unaff_x22 + 0x38,puVar4 + 0x18);
          *(undefined8 *)(puVar4 + 0x48) = uVar10;
          *(undefined8 *)(puVar4 + 0x40) = uVar9;
          func_0x000107c6157c(uVar8);
          func_0x000107c6157c(uVar2);
          uVar6 = 0x41;
          func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918968,puVar4,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(uVar2);
          FUN_100fc3c80(uVar5,lVar1);
          uVar2 = uVar6;
        }
        func_0x000107c61574(uVar2);
LAB_100fc1c7c:
        plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xd0) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100fc1924;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                  (plVar7,(ulong *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x98));
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x98));
      func_0x000107c61574(uVar2);
    }
    FUN_100fc3c80(uVar5,lVar1);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100fc1a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc1cd0; end: 100fc1ce7;  */

void FUN_100fc1cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc1ce8,0,0);
  return;
}



/* Entry: 100fc1ce8; end: 100fc1e23;  */

void FUN_100fc1ce8(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x38,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x68) = lVar3;
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    FUN_100fc3f28(lVar3 + 0x30,unaff_x22 + 0x10);
    puVar1 = &UNK_110372c28;
    func_0x000107c613fc(&UNK_110372c28,0x50,7);
    *(long *)(puVar1 + 0x10) = lVar3;
    func_0x000100c9e540(unaff_x22 + 0x10,puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x48) = uVar6;
    *(undefined8 *)(puVar1 + 0x40) = uVar5;
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(lVar3);
    uVar4 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918980,puVar1,PTR___sytN_11034f1b0 + 8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
    func_0x000107c61574(puVar1);
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fc1e24;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fc1e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc1e24; end: 100fc1e73;  */

void FUN_100fc1e24(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc1e74,0,0);
  return;
}



/* Entry: 100fc1e74; end: 100fc1eef;  */

void FUN_100fc1e74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  uVar1 = 0;
  func_0x000107c5fcec(0);
  func_0x000107c6157c();
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc1ef0,uVar1,uVar2);
  return;
}



/* Entry: 100fc1ef0; end: 100fc1f97;  */

void FUN_100fc1ef0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x0001000d224c(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  if (lVar4 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    pcVar2 = (code *)0x100fc4354;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c5fc48(uVar1,PTR___sSSN_11034da80);
    func_0x000107c5aef4(lVar4);
    func_0x000107c61574(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar4);
    pcVar2 = FUN_100fc1f98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 100fc1f98; end: 100fc1fc7;  */

void FUN_100fc1f98(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000100fc1fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc1fc8; end: 100fc2177;  */

void FUN_100fc1fc8(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  long lStack_50;
  
  func_0x0001000d224c(&uStack_58);
  func_0x000107c614f0(uStack_58);
  (**(code **)(lStack_50 + 0xb0))();
  func_0x000107c615e8(uStack_58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100fc3f28(unaff_x20 + 0x30,&uStack_58);
  puVar1 = &UNK_1103729d0;
  func_0x000107c613fc(&UNK_1103729d0,0x50,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  func_0x000100c9e540(&uStack_58,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c();
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918718,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 100fc2178; end: 100fc218b;  */

void FUN_100fc2178(void)

{
  FUN_100fc2308();
  return;
}



/* Entry: 100fc218c; end: 100fc2263;  */

void FUN_100fc218c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined1 auStack_68 [40];
  
  FUN_100fc3f28(param_1,auStack_68);
  puVar1 = &UNK_110372ac0;
  func_0x000107c613fc(&UNK_110372ac0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  func_0x000100c9e540(auStack_68,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_4;
  func_0x000107c6157c();
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_4);
  uVar2 = 0x41;
  func_0x000100859150(0x41,0,0x48,3,0,0,&UNK_10d918900,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 100fc2264; end: 100fc2303;  */

/* WARNING: Possible PIC construction at 0x000100fc22e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fc22ec) */

void FUN_100fc2264(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_110372a98;
  func_0x000107c613fc(&UNK_110372a98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c();
  func_0x000107c615f0(param_1);
  func_0x000100859150(0x41,0,0x48,3,0,0,&UNK_10d9188f8,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 100fc2304; end: 100fc2307;  */

void FUN_100fc2304(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  long lStack_50;
  
  func_0x0001000d224c(&uStack_58);
  func_0x000107c614f0(uStack_58);
  (**(code **)(lStack_50 + 0xb0))();
  func_0x000107c615e8(uStack_58);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100fc3f28(unaff_x20 + 0x30,&uStack_58);
  puVar1 = &UNK_1103729d0;
  func_0x000107c613fc(&UNK_1103729d0,0x50,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  func_0x000100c9e540(&uStack_58,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x48) = uVar4;
  *(undefined8 *)(puVar1 + 0x40) = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c();
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918718,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 100fc2308; end: 100fc23d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc2308(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  long lStack_40;
  
  lVar1 = unaff_x20 + _DAT_112d51890;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126aff58;
    func_0x000107c610f8(PTR_PTR_1126aff58);
    func_0x000107c48080();
    FUN_100fa58a4(unaff_x20 + 0x80,auStack_58);
    if (lStack_40 == 0) {
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
      func_0x000100fa58f4(auStack_58);
    }
    else {
      func_0x0001000a8868();
      func_0x000107c61174(puVar2);
      FUN_100fc3094();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
      func_0x0001000834e4(auStack_58);
    }
  }
  return;
}



/* Entry: 100fc23d8; end: 100fc2593;  */

void FUN_100fc23d8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001000d224c(&uStack_60);
  uVar1 = uStack_60;
  func_0x000107c614f0(uStack_60);
  lVar5 = *(long *)(param_1 + 0x10);
  func_0x000107c602fc(0x21);
  func_0x000107c6142c(0xe000000000000000);
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0xd000000000000016,0x800000010ef1daa0);
  (**(code **)(lStack_58 + 0xc0))(lVar5 != 0,0x6465766965636552,0xe900000000000020,uVar1,lStack_58);
  func_0x000107c615e8(uStack_60);
  func_0x000107c6142c(0xe900000000000020);
  puVar2 = &UNK_1103729a8;
  func_0x000107c613fc(&UNK_1103729a8,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1103729f8;
  func_0x000107c613fc(&UNK_1103729f8,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = param_1;
  func_0x000107c61434(param_1);
  uVar1 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar4 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918728,puVar3,uVar1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  return;
}



/* Entry: 100fc2594; end: 100fc25af;  */

void FUN_100fc2594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc25b0,0,0);
  return;
}



/* Entry: 100fc25b0; end: 100fc2697;  */

void FUN_100fc25b0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x100fc2648;
    plVar1[7] = *(long *)(unaff_x22 + 0x38);
    plVar1[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbdb84,0,0);
    return;
  }
  **(undefined1 **)(unaff_x22 + 0x28) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100fc2644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc2698; end: 100fc26a7;  */

void FUN_100fc2698(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100fc26a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc26a8; end: 100fc27bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc26a8(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_40;
  
  func_0x0001000d224c(&lStack_58);
  lVar1 = lStack_58;
  func_0x000107c614f0(lStack_58);
  (**(code **)(lStack_50 + 0xc0))(1,0xd000000000000026,0x800000010ef1dac0,lVar1,lStack_50);
  func_0x000107c615e8(lStack_58);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c5fcec(0);
    FUN_100f7a598(FUN_100fc3444);
  }
  else {
    FUN_100fa58a4(unaff_x20 + 0x80,&lStack_58);
    if (lStack_40 == 0) {
      func_0x000100fa58f4(&lStack_58);
    }
    else {
      plVar2 = &lStack_58;
      func_0x0001000a8868();
      lVar1 = *plVar2 + _DAT_112d50888;
      func_0x000107c61618();
      if (lVar1 != 0) {
        func_0x000107c41864();
        func_0x000107c615e8(lVar1);
      }
      func_0x0001000834e4(&lStack_58);
    }
  }
  return;
}



/* Entry: 100fc27c0; end: 100fc29a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc27c0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long lVar12;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar1 = 0x112d51790;
  func_0x0001000285a8(0x112d51790,&UNK_10d918ae0);
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_90 - extraout_x8;
  lVar2 = 0x112d51a38;
  puVar6 = &UNK_10d918928;
  func_0x0001000285a8();
  lVar10 = *(long *)(lVar2 + -8);
  lStack_88 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 == 0) {
    func_0x000100fc65c0();
    uVar11 = 0;
  }
  else {
    func_0x000100fc668c();
    lVar3 = 0x112d36008;
    lStack_90 = lVar2;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    puVar4 = PTR___sSiN_11034deb0;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    lStack_80 = lVar12;
    func_0x000107c6057c();
    *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
    puVar5 = puVar4;
    func_0x00010075bbf0();
    *(undefined **)(lVar3 + 0x40) = puVar5;
    *(undefined **)(lVar3 + 0x20) = puVar4;
    *(undefined **)(lVar3 + 0x28) = puVar7;
    lVar2 = lStack_90;
    puVar4 = puVar6;
    func_0x000107c5fb00(lStack_90,puVar6,lVar3);
    func_0x000107c6142c(puVar6);
    uVar11 = 2;
    puVar6 = puVar4;
  }
  (**(code **)(lVar9 + 0x10))(lVar8,unaff_x20 + _DAT_112d51888,lVar1);
  uStack_70 = 0x210;
  lStack_80 = lVar2;
  puStack_78 = puVar6;
  uStack_68 = uVar11;
  func_0x000107c5fd28(lVar8 - extraout_x8_00,&lStack_80,lVar1);
  (**(code **)(lVar9 + 8))(lVar8,lVar1);
  (**(code **)(lVar10 + 8))(lVar8 - extraout_x8_00,lStack_88);
  return;
}



/* Entry: 100fc29a4; end: 100fc2a07;  */

void FUN_100fc29a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  FUN_100fc2a08();
  func_0x000107c615e8(uStack_38);
  *param_1 = uVar1;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 100fc2a08; end: 100fc2c07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100fc2a08(ulong param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  undefined8 uVar6;
  
  lVar12 = *(long *)(param_2 + 0x10);
  if (lVar12 == 0) {
    lVar9 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar9 = 0;
    pbVar13 = (byte *)(param_2 + 0x28);
    do {
      uVar10 = *(ulong *)(pbVar13 + -8);
      bVar1 = *pbVar13;
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          if (*(char *)(uVar10 + _DAT_112fda138) != '\0') {
            if (*(char *)(uVar10 + _DAT_112fda138) == '\x01') goto LAB_100fc2a50;
LAB_100fc2b74:
            bVar3 = SCARRY8(lVar8,1);
            lVar8 = lVar8 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc2c04);
              (*pcVar2)();
            }
          }
        }
        else {
          func_0x000107c307a8();
          if ((uVar10 & 1) != 0) goto LAB_100fc2b74;
LAB_100fc2a50:
          bVar3 = SCARRY8(lVar9,1);
          lVar9 = lVar9 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc2c00);
            (*pcVar2)();
          }
        }
      }
      else {
        if (bVar1 != 2) {
          func_0x000107c4ca5c();
          if (uVar10 != 2) goto LAB_100fc2a50;
          goto LAB_100fc2b74;
        }
        if (param_1 != 0) {
          func_0x000107c615f0(uVar10);
          uVar7 = param_1;
          func_0x000107c430f8();
          func_0x000107c61180();
          if (uVar7 == 0) {
            func_0x000100f9d754(uVar10,2);
          }
          else {
            uVar11 = 0x112d508c0;
            func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
            uVar5 = uVar7;
            func_0x000107c5fc54(uVar7,uVar11);
            func_0x000107c61170(uVar7);
            if (uVar5 >> 0x3e == 0) {
              uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar7 = uVar5 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar5) {
                uVar7 = uVar5;
              }
              func_0x000107c60480();
            }
            if (uVar7 != 0) {
              if ((uVar5 & 0xc000000000000001) == 0) {
                if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fc2c08);
                  (*pcVar2)();
                }
                uVar11 = *(undefined8 *)(uVar5 + 0x20);
                func_0x000107c615f0(uVar11);
              }
              else {
                uVar11 = 0;
                FUN_100fb0ba0(0,uVar5);
              }
              func_0x000107c6142c(uVar5);
              uVar6 = uVar11;
              func_0x000107c615f0();
              iVar4 = (int)uVar6;
              func_0x000107c307a8();
              func_0x000100f9d754(uVar10,2);
              func_0x000107c615ec(uVar11,2);
              if (iVar4 == 0) goto LAB_100fc2a50;
              goto LAB_100fc2b74;
            }
            func_0x000100f9d754(uVar10,2);
            func_0x000107c6142c(uVar5);
          }
        }
      }
      pbVar13 = pbVar13 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  auVar14._8_8_ = lVar8;
  auVar14._0_8_ = lVar9;
  return auVar14;
}



/* Entry: 100fc2c08; end: 100fc2db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc2c08(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_70 [24];
  long lStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112d51890;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      puVar2 = PTR_PTR_1126aff58;
      func_0x000107c610f8(PTR_PTR_1126aff58);
      func_0x000107c48080();
      FUN_100fa58a4(param_1 + 0x80,auStack_70);
      if (lStack_58 == 0) {
        func_0x000107c61170(puVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61574(param_1);
        func_0x000100fa58f4(auStack_70);
      }
      else {
        func_0x0001000a8868();
        func_0x000107c61174(puVar2);
        FUN_100fc3094();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61574(param_1);
        func_0x0001000834e4(auStack_70);
      }
    }
  }
  return;
}



/* Entry: 100fc2db8; end: 100fc2e53;  */

char FUN_100fc2db8(long param_1)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    cVar3 = '\x03';
  }
  else {
    cVar3 = 2 < *(byte *)(param_1 + 0x28);
    pbVar2 = (byte *)(param_1 + 0x28);
    do {
      uVar4 = *(undefined8 *)(pbVar2 + -8);
      bVar1 = *pbVar2;
      FUN_100f9d71c(uVar4,bVar1);
      func_0x000100f9d754(uVar4,bVar1);
      cVar6 = cVar3;
      if ((bool)cVar3 != 2 < bVar1) {
        cVar6 = '\x02';
      }
      if (cVar3 != '\x02') {
        cVar3 = cVar6;
      }
      lVar5 = lVar5 + -1;
      pbVar2 = pbVar2 + 0x10;
    } while (lVar5 != 0);
  }
  return cVar3;
}



/* Entry: 100fc2e54; end: 100fc2e7b;  */

void FUN_100fc2e54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation14LocalizedErrorPAAE16errorDescriptionSSSgvg_1103506c0)();
  return;
}



/* Entry: 100fc2e7c; end: 100fc2f33;  */

void FUN_100fc2e7c(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x000107c509b4();
  func_0x000107c61180();
  puVar1 = (undefined8 *)0x112d51a60;
  func_0x0001000285a8(0x112d51a60,&UNK_10d9189e0);
  func_0x0001048da110(auStack_38);
  if (unaff_x21 == 0) {
    func_0x000107c615e8(unaff_x20);
  }
  else {
    FUN_100faaf10();
    func_0x000107c613f8(&UNK_1107b5fe0,puVar1,0,0);
    *puVar1 = uStack_40;
    func_0x000107c615e8(unaff_x20);
  }
  return;
}



/* Entry: 100fc2f34; end: 100fc3093;  */

void FUN_100fc2f34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x100fc4064;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100f1c768;
  puStack_48 = &UNK_110372c68;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c440d8(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100fc3094; end: 100fc3367;  */

/* WARNING: Possible PIC construction at 0x000100fc32a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc32b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc3304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc3318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100fc3328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fc331c) */
/* WARNING: Removing unreachable block (ram,0x000100fc3308) */
/* WARNING: Removing unreachable block (ram,0x000100fc32b4) */
/* WARNING: Removing unreachable block (ram,0x000100fc32a4) */
/* WARNING: Removing unreachable block (ram,0x000100fc332c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc3094(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = *(long *)(param_2 + _DAT_112d50860);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c610f8();
    func_0x000107c48174();
    func_0x0001000d224c(&uStack_70);
    lVar4 = lStack_68;
    uVar1 = uStack_70;
    uVar3 = uStack_70;
    func_0x000107c614f0();
    lVar4 = *(long *)(lVar4 + 0x20);
    (**(code **)(lVar4 + 0x28))();
    func_0x000107c615e8(uVar1);
    func_0x000107c5fe40();
    FUN_100fc61c4();
    func_0x0001000d224c(&uStack_70);
    func_0x000107c614f0();
    (**(code **)(*(long *)(lStack_68 + 0x20) + 0x50))();
    func_0x000107c615e8();
    uVar1 = uStack_70;
    FUN_100f9ab90();
    puVar2 = PTR_PTR_1126aff70;
    func_0x000107c610f8(PTR_PTR_1126aff70);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c5fadc(uVar3,lVar4);
    func_0x000107c6142c(lVar4);
    uVar3 = 0;
    FUN_100fc3ee4(0);
    func_0x000107c5fc48(uVar1,uVar3);
    func_0x000107c6142c(uVar1);
    func_0x000107c48d88(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100fc3368; end: 100fc33df;  */

void FUN_100fc3368(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100fc4364;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = unaff_x20 + 0x18;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100fbf9b0;
  plVar3[2] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fc33e0; end: 100fc3443;  */

void FUN_100fc33e0(long param_1)

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
  plVar3[1] = 0x100fc4368;
  plVar3[6] = lVar1;
  plVar3[7] = lVar2;
  plVar3[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc25b0,0,0);
  return;
}



/* Entry: 100fc3444; end: 100fc3467;  */

void FUN_100fc3444(void)

{
  FUN_100fc1fc8();
  return;
}



/* Entry: 100fc3468; end: 100fc346f;  */

void FUN_100fc3468(void)

{
  if (lRam0000000112d518d8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61ccf4);
  return;
}



/* Entry: 100fc3470; end: 100fc34a7;  */

void FUN_100fc3470(undefined8 param_1)

{
  if (lRam0000000112d518d8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61ccf4);
  return;
}



/* Entry: 100fc34a8; end: 100fc35cf;  */

void FUN_100fc34a8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
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
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBoWV_11034d678;
  puStack_e8 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_f0 = &UNK_10d918820;
  puStack_d8 = PTR___sBOWV_11034d658 + 0x40;
  puStack_e0 = &UNK_10d918838;
  puStack_d0 = PTR___sBoWV_11034d678 + 0x40;
  puStack_c8 = &UNK_10d918850;
  puStack_b0 = &UNK_10d918868;
  puStack_a8 = &UNK_10d918838;
  puStack_68 = &UNK_10d918820;
  uVar3 = 0x112d518e8;
  lVar2 = 0x13f;
  puStack_c0 = puStack_d0;
  puStack_b8 = puStack_d0;
  puStack_a0 = puStack_d0;
  puStack_98 = puStack_d0;
  puStack_90 = puStack_d0;
  puStack_88 = puStack_d0;
  puStack_80 = puStack_d0;
  puStack_78 = puStack_d0;
  puStack_70 = puStack_d0;
  FUN_100fc35d0(0x13f,0x112d518e8,PTR___sScSMa_11034fda0);
  if (uVar3 < 0x40) {
    lStack_60 = *(long *)(lVar2 + -8) + 0x40;
    uVar3 = 0x112d518f0;
    lVar2 = 0x13f;
    FUN_100fc35d0(0x13f,0x112d518f0,PTR___sScS12ContinuationVMa_11034fd50);
    if (uVar3 < 0x40) {
      lStack_58 = *(long *)(lVar2 + -8) + 0x40;
      puStack_50 = &UNK_10d918880;
      puStack_48 = &UNK_10d918880;
      puStack_40 = &UNK_10d918850;
      puStack_38 = puVar1 + 0x40;
      func_0x000107c61630(param_1,0x100,0x18,&puStack_f0,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100fc35d0; end: 100fc363b;  */

void FUN_100fc35d0(long param_1,long *param_2,code *param_3)

{
  undefined *puVar1;
  
  if (*param_2 != 0) {
    return;
  }
  puVar1 = &UNK_110376c30;
  (*param_3)();
  if (puVar1 == (undefined *)0x0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100fc363c; end: 100fc367b;  */

void FUN_100fc363c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d51a28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9188b4;
  func_0x000107c61520(&UNK_10d9188b4,&UNK_110372d10);
  puRam0000000112d51a28 = puVar1;
  return;
}



/* Entry: 100fc367c; end: 100fc36df;  */

void FUN_100fc367c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100fc4360;
  plVar4[9] = lVar1;
  plVar4[10] = lVar3;
  lVar1 = 0;
  func_0x0001038e5950();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xb] = uVar2;
  lVar1 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  plVar4[0xc] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xd] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xe] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0xf] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x10] = lVar3;
  plVar4[0x11] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc10f8,lVar3,lVar1);
  return;
}



/* Entry: 100fc36e0; end: 100fc371b;  */

void FUN_100fc36e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fc371c; end: 100fc379b;  */

void FUN_100fc371c(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  plVar4 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fc379c;
  plVar4[0x11] = lVar3;
  plVar4[0x12] = lVar7;
  plVar4[0xf] = unaff_x20 + 0x18;
  plVar4[0x10] = lVar5;
  plVar4[0xe] = lVar6;
  lVar5 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  plVar4[0x13] = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  plVar4[0x14] = lVar5;
  uVar1 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x15] = uVar1;
  lVar5 = 0;
  func_0x0001038e5950();
  uVar1 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x16] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar5 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x18] = lVar5;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x19] = lVar3;
  plVar4[0x1a] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc0838,lVar3,lVar5);
  return;
}



/* Entry: 100fc379c; end: 100fc3803;  */

void FUN_100fc379c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fc37d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fc3804; end: 100fc3867;  */

void FUN_100fc3804(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fc3868;
  plVar4[0x16] = lVar1;
  plVar4[0x17] = lVar3;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x19] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x1a] = lVar3;
  plVar4[0x1b] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbff9c,lVar3,lVar1);
  return;
}



/* Entry: 100fc3868; end: 100fc38a3;  */

void FUN_100fc3868(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fc38a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fc38a4; end: 100fc38e7;  */

void FUN_100fc38a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_60;
  uStack_40 = 0x100fc38c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_110372b28;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60,uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c5e2a4(uVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 100fc38e8; end: 100fc3b97;  */

void FUN_100fc38e8(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  lVar10 = *param_3;
  func_0x000107c61434(uVar3);
  func_0x000107c615f0(uVar12);
  uVar5 = uVar2;
  uVar6 = uVar3;
  FUN_100fac43c();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar13 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_100fc3b90:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100fc3b94);
    (*pcVar4)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar13) {
    func_0x000100fb68c8(lVar13,param_2 & 1);
    uVar5 = uVar2;
    uVar8 = uVar3;
    FUN_100fac43c();
    if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) {
LAB_100fc3998:
      func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fc39b4);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000100fb5f60();
    lVar13 = *param_3;
    goto joined_r0x000100fc3a14;
  }
  lVar13 = *param_3;
joined_r0x000100fc3a14:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar13 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_100fc3b94:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100fc3b98);
      (*pcVar4)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
  }
  else {
    uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    func_0x000107c615f0(uVar11);
    func_0x000107c615e8(uVar12);
    func_0x000107c6142c(uVar3);
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
    *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar11;
    func_0x000107c615e8(uVar12);
  }
  if (lVar9 != 1) {
    lVar9 = lVar9 + -1;
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar14[-2];
      uVar3 = puVar14[-1];
      uVar12 = *puVar14;
      lVar10 = *param_3;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar12);
      uVar5 = uVar2;
      uVar6 = uVar3;
      FUN_100fac43c();
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = (ulong)~(uint)uVar6 & 1;
      lVar13 = lVar7 + uVar8;
      if (SCARRY8(lVar7,uVar8)) goto LAB_100fc3b90;
      if (*(long *)(lVar10 + 0x18) < lVar13) {
        func_0x000100fb68c8(lVar13,1);
        uVar5 = uVar2;
        uVar8 = uVar3;
        FUN_100fac43c();
        if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) goto LAB_100fc3998;
      }
      lVar13 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar13 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar12;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_100fc3b94;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        func_0x000107c615f0(uVar11);
        func_0x000107c615e8(uVar12);
        func_0x000107c6142c(uVar3);
        uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8);
        *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar5 * 8) = uVar11;
        func_0x000107c615e8(uVar12);
      }
      puVar14 = puVar14 + 3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 100fc3b98; end: 100fc3bd3;  */

undefined8 FUN_100fc3b98(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001038e5950();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100fc3bd4; end: 100fc3c7f;  */

void FUN_100fc3bd4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = 0x112d515c0;
  func_0x0001000285a8(0x112d515c0,&UNK_10d918660);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  plVar1 = (long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  lVar4 = *plVar1;
  lVar2 = plVar1[1];
  plVar1 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fc436c;
  *(char *)(plVar1 + 0x1b) = (char)lVar2;
  plVar1[0x11] = unaff_x20 + uVar3;
  plVar1[0x12] = lVar4;
  lVar2 = 0x112d51a40;
  func_0x0001000285a8(0x112d51a40,&UNK_10d918958);
  plVar1[0x13] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x14] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x15] = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar4;
  func_0x000107c5fce8();
  plVar1[0x16] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar1[0x17] = lVar4;
  plVar1[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc14e0,lVar4,lVar2);
  return;
}



/* Entry: 100fc3c80; end: 100fc3c93;  */

void FUN_100fc3c80(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 100fc3c94; end: 100fc3d0b;  */

void FUN_100fc3c94(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100fc4370;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = unaff_x20 + 0x18;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100fbf9b0;
  plVar3[2] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fc3d0c; end: 100fc3d83;  */

void FUN_100fc3d0c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100fc4374;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = unaff_x20 + 0x18;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100fbf9b0;
  plVar3[2] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fc3d84; end: 100fc3dbf;  */

void FUN_100fc3d84(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fc3dc0; end: 100fc3e23;  */

void FUN_100fc3dc0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100fc4378;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc1ce8,0,0);
  return;
}



/* Entry: 100fc3e24; end: 100fc3e37;  */

void FUN_100fc3e24(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100fc3e38; end: 100fc3e6b;  */

void FUN_100fc3e38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fc3e6c; end: 100fc3ee3;  */

void FUN_100fc3e6c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x40);
  lVar2 = *(long *)(unaff_x20 + 0x48);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100fc437c;
  plVar4[4] = lVar1;
  plVar4[5] = lVar2;
  plVar4[2] = lVar5;
  plVar4[3] = unaff_x20 + 0x18;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_100fbf9b0;
  plVar3[2] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbebf0,0,0);
  return;
}



/* Entry: 100fc3ee4; end: 100fc3f27;  */

void FUN_100fc3ee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d513a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b3060;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d513a0 = puVar1;
  return;
}



/* Entry: 100fc3f28; end: 100fc3f6b;  */

long FUN_100fc3f28(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100fc3f6c; end: 100fc3fbb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_100fc3f6c(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar2 = uVar1 >> 0x1c & 3;
  if ((uVar2 < 2) && (uVar2 != 0)) {
    uVar1 = uVar1 >> 0x1e;
    if (uVar1 == 1) {
      param_1 = param_2 & 0xfffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 100fc3fbc; end: 100fc3fd3;  */

void FUN_100fc3fbc(void)

{
  FUN_100fbd31c();
  return;
}



/* Entry: 100fc3fd4; end: 100fc4027;  */

void FUN_100fc3fd4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fc4380;
  plVar1[0x11] = param_1;
  plVar1[0x12] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbd3e8,0,0);
  return;
}



/* Entry: 100fc4028; end: 100fc405b;  */

undefined8 FUN_100fc4028(undefined8 param_1)

{
  (*(code *)(undefined *)0x100faa90c)();
  return param_1;
}



/* Entry: 100fc405c; end: 100fc406b;  */

void FUN_100fc405c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar2 = &puStack_60;
  uStack_40 = 0x100fc4064;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_100f1c768;
  puStack_48 = &UNK_110372c68;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c440d8(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100fc406c; end: 100fc409f;  */

undefined8 FUN_100fc406c(undefined8 param_1)

{
  (*(code *)(undefined *)0x100fa3b64)();
  return param_1;
}



/* Entry: 100fc40a0; end: 100fc40b7;  */

void FUN_100fc40a0(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (3 < bVar1) {
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
_objc_release:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
    if (bVar1 != 1) {
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      return;
    }
    goto _objc_release;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 100fc40b8; end: 100fc41cf;  */

undefined8 * FUN_100fc40b8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_2 + 1);
  if (bVar1 < 4) {
    uVar2 = *param_2;
    FUN_100f9d71c(uVar2,bVar1);
    *param_1 = uVar2;
    *(byte *)(param_1 + 1) = bVar1;
  }
  else {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return param_1;
}



/* Entry: 100fc41d0; end: 100fc425f;  */

undefined8 * FUN_100fc41d0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 1) < 4) {
    bVar1 = *(byte *)(param_2 + 1);
    if (bVar1 < 4) {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *(byte *)(param_1 + 1) = bVar1;
      func_0x000100f9d754(uVar2);
    }
    else {
      func_0x000100f9d754(*param_1);
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    }
  }
  else {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  }
  return param_1;
}



/* Entry: 100fc4260; end: 100fc4383;  */

int FUN_100fc4260(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar2 = (uint)*(byte *)(param_1 + 2);
  if (0xfd < uVar2) {
    uVar2 = 0xfe;
  }
  iVar1 = (uVar2 ^ 0xff) - 1;
  if (*(byte *)(param_1 + 2) < 4) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 100fc4384; end: 100fc440b;  */

long FUN_100fc4384(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100fc440c; end: 100fc44d7;  */

undefined8 * FUN_100fc440c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[3];
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  lVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = lVar2;
  pcVar3 = (code *)**(undefined8 **)(lVar2 + -8);
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar1);
  (*pcVar3)(param_1 + 4,param_2 + 4,lVar2);
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  lVar2 = param_2[0xe];
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  if (lVar2 == 0) {
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    param_1[0xf] = param_2[0xf];
  }
  else {
    uVar1 = param_2[0xf];
    param_1[0xe] = lVar2;
    param_1[0xf] = uVar1;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 0xb,param_2 + 0xb,lVar2);
  }
  return param_1;
}



/* Entry: 100fc44d8; end: 100fc45db;  */

undefined8 * FUN_100fc44d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615f0();
  func_0x000107c615e8(uVar3);
  param_1[1] = uVar1;
  uVar3 = param_1[3];
  uVar1 = param_2[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000100083374(param_1 + 4,param_2 + 4);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  lVar2 = param_2[0xe];
  if (param_1[0xe] == 0) {
    if (lVar2 != 0) {
      param_1[0xe] = lVar2;
      param_1[0xf] = param_2[0xf];
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 0xb,param_2 + 0xb);
      return param_1;
    }
  }
  else {
    if (lVar2 != 0) {
      func_0x000100083374(param_1 + 0xb,param_2 + 0xb);
      return param_1;
    }
    func_0x0001000834e4(param_1 + 0xb);
  }
  uVar3 = param_2[0xc];
  uVar1 = param_2[0xb];
  uVar5 = param_2[0xe];
  uVar4 = param_2[0xd];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar1;
  return param_1;
}



/* Entry: 100fc45dc; end: 100fc467f;  */

undefined8 * FUN_100fc45dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c615e8(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = uVar2;
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(param_1 + 4);
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c61574(uVar2);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar1);
  if (param_1[0xe] != 0) {
    func_0x0001000834e4(param_1 + 0xb);
  }
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  param_1[0xf] = param_2[0xf];
  return param_1;
}



/* Entry: 100fc4680; end: 100fc4737;  */

int FUN_100fc4680(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100fc4738; end: 100fc49db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc4738(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  func_0x0001000d224c(&lStack_90);
  lVar1 = lStack_90;
  func_0x000107c614f0();
  lStack_68 = lStack_90;
  lVar10 = *(long *)(lStack_88 + 0x20);
  (**(code **)(lVar10 + 0x38))();
  func_0x000107c615e8();
  lVar2 = lStack_90;
  func_0x000103a7f694();
  uVar12 = *(undefined8 *)(param_4 + _DAT_11307a4a0);
  puVar3 = &UNK_110372e38;
  func_0x000107c613fc(&UNK_110372e38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  func_0x0001000285a8(0x112d51a68,&UNK_10d918aa8);
  func_0x000107c613fc();
  func_0x000107c61174(param_5);
  pcVar4 = FUN_100fc4b80;
  func_0x0001000bdd8c(FUN_100fc4b80,puVar3);
  puVar3 = &UNK_110372e60;
  func_0x000107c613fc(&UNK_110372e60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  func_0x0001000285a8(0x112d51a70,&UNK_10d918ab0);
  func_0x000107c613fc();
  func_0x000107c61174(param_6);
  uVar5 = 0x100fc4b88;
  func_0x0001000bdd8c(0x100fc4b88,puVar3);
  lVar6 = 0;
  func_0x000100fa6138();
  lVar7 = lVar6;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined **)(lVar7 + 0x80) = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = *(undefined8 *)(param_7 + _DAT_113091b70);
  *(code **)(lVar7 + 0x70) = pcVar4;
  *(undefined8 *)(lVar7 + 0x78) = uVar5;
  ppuStack_70 = &PTR_DAT_110371a48;
  lVar8 = 0;
  lStack_90 = lVar7;
  lStack_78 = lVar6;
  FUN_100fa5284();
  lVar6 = lVar8;
  func_0x000107c610f8();
  lVar7 = lVar6 + _DAT_112d50df0;
  *(undefined8 *)(lVar7 + 8) = 0;
  func_0x000107c61614(lVar7,0);
  func_0x000107c61614(lVar6 + _DAT_112d50df8,0);
  *(undefined8 *)(lVar6 + _DAT_112d50e00) = 0;
  *(long *)(lVar6 + _DAT_112d50dc8) = lVar1;
  plVar9 = (long *)(lVar6 + _DAT_112d50dd0);
  *plVar9 = lVar2;
  plVar9[1] = lVar10;
  *(undefined8 *)(lVar6 + _DAT_112d50dd8) = uVar12;
  FUN_100fa7d84(&lStack_90,lVar6 + _DAT_112d50de0);
  *(undefined8 *)(lVar6 + _DAT_112d50de8) = uVar11;
  puVar3 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar8;
  func_0x000107c61174(uVar12);
  func_0x000107c615f0(uVar11);
  plVar9 = &lStack_a0;
  func_0x000107c61154(plVar9,puVar3);
  func_0x0001000834e4(&lStack_90);
  *param_1 = (long)plVar9;
  param_1[1] = (long)&PTR_DAT_110371918;
  return;
}



/* Entry: 100fc49dc; end: 100fc4b7f;  */

void FUN_100fc49dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100fc4b80; end: 100fc4b8f;  */

void FUN_100fc4b80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100fc4b90; end: 100fc4be3;  */

void FUN_100fc4b90(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar1);
  uVar3 = 2;
  func_0x000100774b74(2,0xc,0,uVar1,uVar2,param_2);
  *param_1 = uVar3;
  return;
}



/* Entry: 100fc4be4; end: 100fc581f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fc4be4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 *puVar18;
  undefined *puVar19;
  long alStack_300 [4];
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined *puStack_2b0;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  code *pcStack_210;
  code *pcStack_208;
  code *pcStack_200;
  undefined *puStack_1f8;
  code *pcStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 auStack_168 [3];
  long lStack_150;
  undefined **ppuStack_148;
  long alStack_140 [3];
  long lStack_128;
  undefined **ppuStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *apuStack_d0 [3];
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lVar6;
  
  pcStack_210 = (code *)param_20;
  uStack_1c0 = param_19;
  uStack_220 = param_17;
  puStack_260 = (undefined1 *)param_16;
  uStack_268 = param_15;
  uStack_1c8 = param_14;
  lStack_1d8 = param_13;
  uStack_1d0 = param_12;
  uStack_238 = param_11;
  pcStack_1a8 = (code *)param_10;
  uStack_1a0 = param_9;
  uStack_248 = param_4;
  uStack_230 = param_6;
  lStack_218 = param_8;
  pcStack_208 = (code *)param_2;
  lStack_1b8 = param_5;
  uStack_198 = param_3;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_228 = unaff_x20;
  if ((((undefined8 *)(param_1 + _DAT_112facb88))[1] & 0x3000000000000000) == 0x2000000000000000) {
    puVar19 = *(undefined **)(param_1 + _DAT_112facb88);
    func_0x000107c61434(puVar19);
  }
  uStack_270 = _DAT_1130806b8;
  func_0x0001000d224c(&lStack_f0);
  lVar6 = lStack_f0;
  puStack_280 = (undefined8 *)param_7;
  func_0x000107c614f0();
  uVar4 = (undefined4)lVar6;
  lStack_118 = lStack_f0;
  (**(code **)(*(long *)((long)ppuStack_e8 + 0x20) + 0x48))();
  lStack_1e8 = CONCAT44(lStack_1e8._4_4_,uVar4);
  func_0x000107c615e8(lStack_f0);
  uVar13 = 0x112d51708;
  func_0x0001000285a8(0x112d51708,&UNK_10d918530);
  uVar11 = uStack_198;
  uStack_1b0 = uVar13;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar13 = uVar11;
  func_0x0001000bda74();
  pcStack_1f0 = (code *)uVar13;
  func_0x000107c61170(uVar11);
  uVar13 = 0x112d51728;
  func_0x0001000285a8(0x112d51728,&UNK_10d918550);
  uVar11 = uStack_1a0;
  uStack_1e0 = uVar13;
  func_0x000107c4cd6c(uStack_1a0);
  func_0x000107c61180();
  uVar13 = uVar11;
  func_0x0001000bda74();
  func_0x000107c61170(uVar11);
  func_0x0001000d224c(&lStack_f0);
  plVar7 = &lStack_f0;
  func_0x0001000a8868(plVar7,puStack_d8);
  uVar8 = 2;
  func_0x000100774b74(2,8,0,puStack_d8,apuStack_d0[0],plVar7);
  func_0x0001000834e4(&lStack_f0);
  puVar9 = &UNK_110372e88;
  func_0x000107c613fc(&UNK_110372e88,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = param_18;
  func_0x0001000285a8(0x112d51738,&UNK_10d918560);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar10 = FUN_100fc5820;
  uStack_250 = param_18;
  func_0x0001000bdd8c(FUN_100fc5820,puVar9);
  uVar11 = 0;
  FUN_100f9f050();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar13);
  func_0x000107c61174(uVar8);
  pcVar12 = pcVar10;
  func_0x000100fbb860(pcVar10,uVar13,uVar8,uVar11);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(uVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61434(puVar19);
  func_0x000107c6157c(pcVar12);
  puStack_240 = puVar19;
  func_0x000100fbb584(puVar19,pcStack_1f0,pcVar12,(uint)lStack_1e8 & 1);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar13);
  func_0x000107c61170(uVar8);
  puVar9 = &UNK_110372eb0;
  func_0x000107c613fc(&UNK_110372eb0,0x18,7);
  *(long *)(puVar9 + 0x10) = param_1;
  uVar13 = 0;
  puStack_1f8 = puVar9;
  FUN_100fb21bc();
  ppuStack_b0 = &PTR_DAT_110372440;
  apuStack_d0[0] = puVar19;
  uStack_b8 = uVar13;
  func_0x0001000285a8(0x112d51760,&UNK_10d9185b0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar10 = FUN_100fc59b0;
  lStack_2a8 = param_1;
  func_0x0001000bdd8c(FUN_100fc59b0,0);
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  ppuStack_e8 = &PTR_DAT_1106a7e78;
  puStack_e0 = &UNK_10d918ac0;
  uStack_a0 = 0;
  puVar19 = &UNK_110372ed8;
  pcStack_1f0 = pcVar10;
  lStack_f0 = param_1;
  puStack_d8 = puVar9;
  pcStack_a8 = pcVar10;
  func_0x000107c613fc(&UNK_110372ed8,0x18,7);
  pcVar12 = pcStack_1a8;
  *(code **)(puVar19 + 0x10) = pcStack_1a8;
  func_0x0001000285a8(0x112d51710,&UNK_10d918ad0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar10 = FUN_100fc5f50;
  uStack_258 = pcVar12;
  func_0x0001000bdd8c(FUN_100fc5f50,puVar19);
  uVar13 = 0x112d51718;
  pcStack_1a8 = pcVar10;
  func_0x0001000285a8(0x112d51718,&UNK_10d918540);
  pcVar10 = FUN_100fc4b90;
  func_0x0001000cb480(FUN_100fc4b90,0,uVar13);
  uVar13 = uStack_198;
  pcStack_200 = pcVar10;
  func_0x000107c4cca8();
  func_0x000107c61180();
  uVar11 = uVar13;
  func_0x0001000bda74();
  uStack_1b0 = uVar11;
  func_0x000107c61170(uVar13);
  uVar11 = uStack_1a0;
  func_0x000107c4cd6c();
  func_0x000107c61180();
  uVar13 = uVar11;
  func_0x0001000bda74();
  uStack_1e0 = uVar13;
  func_0x000107c61170(uVar11);
  uVar11 = *(undefined8 *)(lStack_1b8 + _DAT_112faccc0);
  FUN_100fa58a4(&uStack_98,&lStack_118);
  uVar13 = uVar11;
  uStack_2e0 = uVar11;
  func_0x000107c6157c();
  func_0x000103fbdbb8();
  uVar8 = *(undefined8 *)(lStack_1d8 + _DAT_112facd00);
  lVar14 = 0;
  func_0x000100faa680();
  lVar6 = lVar14;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar11;
  *(undefined8 *)(lVar6 + 0x18) = uVar13;
  *(undefined8 *)(lVar6 + 0x20) = uVar8;
  lStack_1e8 = lVar6;
  func_0x0001000285a8(0x112d51770,&UNK_10d918bd0);
  func_0x000107c6157c(uVar8);
  uVar13 = uStack_1c8;
  func_0x000107c5b900();
  func_0x000107c61180();
  uVar11 = uVar13;
  func_0x0001000bda74();
  alStack_300[3] = uVar11;
  func_0x000107c61170(uVar13);
  puVar19 = &UNK_110372f00;
  func_0x000107c613fc(&UNK_110372f00,0x40,7);
  pcVar12 = pcStack_208;
  pcVar10 = pcStack_210;
  uVar11 = uStack_220;
  puVar15 = puStack_260;
  uVar13 = uStack_268;
  puVar18 = puStack_280;
  *(undefined8 **)(puVar19 + 0x10) = puStack_280;
  *(undefined8 *)(puVar19 + 0x18) = uStack_268;
  *(undefined1 **)(puVar19 + 0x20) = puStack_260;
  *(undefined8 *)(puVar19 + 0x28) = uStack_220;
  *(code **)(puVar19 + 0x30) = pcStack_210;
  *(code **)(puVar19 + 0x38) = pcStack_208;
  func_0x0001000285a8(0x112d51778,&UNK_10d9185d0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uStack_278 = puVar18;
  func_0x000107c61174();
  func_0x000107c61174();
  uStack_288 = puVar15;
  func_0x000107c61174();
  uStack_290 = uVar11;
  func_0x000107c61174();
  uStack_298 = pcVar10;
  func_0x000107c61174();
  pcVar10 = FUN_100fc5f70;
  uStack_2a0 = pcVar12;
  func_0x0001000bdd8c();
  uStack_268 = uVar13;
  pcStack_208 = pcVar10;
  func_0x000103a7f694();
  uVar13 = 0x100fc4a98;
  puStack_2b0 = puVar19;
  pcStack_210 = pcVar10;
  func_0x0001000cb480(0x100fc4a98,0,PTR___sSbN_11034dd40);
  puVar19 = &UNK_110372f28;
  func_0x000107c613fc(&UNK_110372f28,0x18,7);
  lVar6 = lStack_218;
  *(long *)(puVar19 + 0x10) = lStack_218;
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar11 = 0x100fc5f74;
  uStack_270 = lVar6;
  func_0x0001000bdd8c(0x100fc5f74,puVar19);
  lVar1 = lStack_1e8;
  ppuStack_120 = &PTR_DAT_110371cc0;
  alStack_140[0] = lStack_1e8;
  lVar16 = 0;
  uStack_220 = uVar11;
  lStack_128 = lVar14;
  FUN_100fc3470();
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_140,lVar14);
  puStack_260 = (undefined1 *)alStack_300;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  puVar18 = (undefined8 *)((long)alStack_300 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar18);
  auStack_168[0] = *puVar18;
  ppuStack_148 = &PTR_DAT_110371cc0;
  lStack_150 = lVar14;
  func_0x000107c61614(lVar16 + _DAT_112d51890,0);
  func_0x000107c61614(lVar16 + _DAT_112d51898,0);
  *(undefined8 *)(lVar16 + _DAT_1137ff110) = 0;
  lVar6 = _DAT_112d518a0;
  lStack_190 = 0;
  func_0x0001000285a8(0x112d51780,&UNK_10d9186d0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  plVar7 = &lStack_190;
  func_0x00010006c248();
  lVar14 = lStack_2a8;
  *(long **)(lVar16 + lVar6) = plVar7;
  *(long *)(lVar16 + 0x10) = lStack_2a8;
  *(undefined ***)(lVar16 + 0x18) = &PTR_DAT_1106a7e78;
  *(undefined **)(lVar16 + 0x20) = &UNK_10d918ac0;
  *(undefined **)(lVar16 + 0x28) = puStack_1f8;
  FUN_100fc5f7c(apuStack_d0,lVar16 + 0x30);
  uVar8 = uStack_248;
  uVar11 = uStack_2e0;
  *(undefined8 *)(lVar16 + 0x58) = uStack_248;
  *(code **)(lVar16 + 0x60) = pcStack_1f0;
  *(undefined8 *)(lVar16 + 0x68) = 0;
  *(undefined8 *)(lVar16 + 0x70) = uStack_1b0;
  *(undefined8 *)(lVar16 + 0x78) = uStack_2e0;
  FUN_100fa58a4(&lStack_118,lVar16 + 0x80);
  FUN_100fc5f7c(auStack_168,lVar16 + 0xa8);
  uVar3 = uStack_1e0;
  lVar1 = alStack_300[3];
  *(undefined8 *)(lVar16 + 0xd0) = uStack_1e0;
  *(code **)(lVar16 + 0xd8) = pcStack_1a8;
  *(code **)(lVar16 + 0xe0) = pcStack_200;
  *(long *)(lVar16 + 0xe8) = alStack_300[3];
  *(undefined8 *)(lVar16 + 0xf0) = uVar13;
  *(undefined8 *)(lVar16 + 0xf8) = uStack_220;
  *(code **)(lVar16 + 0x100) = pcStack_208;
  *(code **)(lVar16 + 0x108) = pcStack_210;
  *(undefined **)(lVar16 + 0x110) = puStack_2b0;
  lVar6 = 0x112d51788;
  func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
  lStack_2c0 = *(long *)(lVar6 + -8);
  lStack_2b8 = lVar6;
  puStack_280 = puVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_2c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar18 - extraout_x8_00;
  lVar6 = 0x112d51790;
  lStack_2c8 = lVar17;
  func_0x0001000285a8(0x112d51790,&UNK_10d918ae0);
  lStack_2d8 = *(long *)(lVar6 + -8);
  lStack_2d0 = lVar6;
  puStack_2b0 = (undefined *)lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(lStack_2d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_01;
  lVar6 = 0x112d51798;
  lStack_218 = lVar17;
  func_0x0001000285a8(0x112d51798,&UNK_10d9185f0);
  alStack_300[2] = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)(lVar17 - extraout_x8_02);
  *puVar18 = 1;
  alStack_300[0] = extraout_x12_00;
  alStack_300[1] = lVar6;
  (**(code **)(extraout_x12_00 + 0x68))
            (puVar18,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
            );
  iVar5 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  func_0x000107c61174(lVar14);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(puStack_1f8);
  func_0x000107c61174();
  puStack_1f8 = (undefined *)uVar8;
  func_0x000107c6157c(pcStack_1f0);
  func_0x000107c6157c(uStack_1b0);
  func_0x000107c6157c(uVar3);
  pcVar12 = pcStack_208;
  func_0x000107c6157c(pcStack_1a8);
  pcVar2 = pcStack_200;
  pcVar10 = pcStack_210;
  func_0x000107c6157c();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar13);
  uVar11 = uStack_220;
  func_0x000107c6157c();
  func_0x000107c6157c(pcVar12);
  func_0x000107c615f0(pcVar10);
  lVar6 = lStack_2c8;
  if (iVar5 == 0) {
    func_0x000100fbb2e8(lStack_2c8,lStack_218,puVar18);
  }
  else {
    func_0x000107c5fd10(lStack_2c8,lStack_218,&UNK_110376c30,puVar18,&UNK_110376c30);
  }
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(lStack_1d8);
  func_0x000107c61170(uStack_198);
  func_0x000107c61170(uStack_230);
  func_0x000107c61170(uStack_1a0);
  func_0x000107c61170(uStack_238);
  func_0x000107c61170(uStack_1d0);
  func_0x000107c61170(uStack_1c8);
  func_0x000107c61170(uStack_250);
  func_0x000107c6142c(puStack_240);
  func_0x000107c61170(uStack_258);
  func_0x000107c61170(uStack_268);
  func_0x000107c61170(uStack_288);
  func_0x000107c61170(uStack_290);
  func_0x000107c61170(uStack_298);
  func_0x000107c61170(uStack_2a0);
  func_0x000107c61170(uStack_270);
  func_0x000107c61574(lStack_1e8);
  func_0x000107c61170(puStack_1f8);
  func_0x000107c61574(uStack_1b0);
  func_0x000107c61574(uStack_1e0);
  func_0x000107c61574(lVar1);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c615e8(pcVar10);
  func_0x000107c61170(uStack_1c0);
  func_0x000107c61170(uStack_278);
  func_0x000107c61574(pcStack_1a8);
  (**(code **)(alStack_300[0] + 8))(puVar18,alStack_300[1]);
  func_0x000107c61170(lStack_1b8);
  func_0x0001000834e4(auStack_168);
  (**(code **)(lStack_2c0 + 0x20))(lVar16 + _DAT_112d51880,lVar6,lStack_2b8);
  (**(code **)(lStack_2d8 + 0x20))(lVar16 + _DAT_112d51888,lStack_218,lStack_2d0);
  uStack_188 = uStack_110;
  lStack_190 = lStack_118;
  lStack_178 = lStack_100;
  uStack_180 = uStack_108;
  uStack_170 = uStack_f8;
  if (lStack_100 == 0) {
    func_0x000100fa58f4(&lStack_190);
  }
  else {
    plVar7 = &lStack_190;
    func_0x0001000a8868();
    lVar6 = *plVar7 + _DAT_112d50880;
    *(undefined ***)(lVar6 + 8) = &PTR_DAT_110372a58;
    func_0x000107c61604(lVar6,lVar16);
    func_0x0001000834e4(&lStack_190);
  }
  func_0x0001000834e4(alStack_140);
  func_0x000100fbbc20(&lStack_f0);
  *(long *)(lStack_228 + 0x10) = lVar16;
  return;
}



/* Entry: 100fc5820; end: 100fc5867;  */

void FUN_100fc5820(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3ef74();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 100fc5868; end: 100fc58d7;  */

void FUN_100fc5868(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar1 + 0x70,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x70;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc58d8,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fc58d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc58d8; end: 100fc596b;  */

void FUN_100fc58d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  lVar1 = lVar3;
  func_0x000107c4ffc8(lVar3,param_2,*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  func_0x000107c615e8(lVar3);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x000107c614f0();
    plVar2 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100fc596c;
    plVar2[3] = lVar3;
    plVar2[4] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100fbc3c4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100fc5968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc596c; end: 100fc59af;  */

void FUN_100fc596c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100fc59ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 100fc59b0; end: 100fc59c7;  */

void FUN_100fc59b0(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &UNK_110372fb8;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110372fc8;
  return;
}



/* Entry: 100fc59c8; end: 100fc59e7;  */

void FUN_100fc59c8(void)

{
  func_0x000103a76c34();
  return;
}



/* Entry: 100fc59e8; end: 100fc5adf;  */

undefined * FUN_100fc59e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_110372f50;
  func_0x000107c613fc(&UNK_110372f50,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c61174(puVar1);
  func_0x000107c6157c(uVar3);
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10d918af8,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  puVar2 = puVar1;
  func_0x000107c4f3ec(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 100fc5ae0; end: 100fc5af7;  */

void FUN_100fc5ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc5af8,0,0);
  return;
}



/* Entry: 100fc5af8; end: 100fc5bf3;  */

void FUN_100fc5af8(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  FUN_100fc5f7c(lVar4 + 0x30,unaff_x22 + 0x10);
  puVar1 = &UNK_110372f90;
  func_0x000107c613fc(&UNK_110372f90,0x50,7);
  *(long *)(puVar1 + 0x10) = lVar4;
  FUN_100fbbf40(unaff_x22 + 0x10,puVar1 + 0x18);
  *(undefined8 *)(puVar1 + 0x48) = uVar6;
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(lVar4);
  uVar3 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918b58,puVar1,PTR___sytN_11034f1b0 + 8);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c61574(puVar1);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fc5bf4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
  return;
}



/* Entry: 100fc5bf4; end: 100fc5c9f;  */

void FUN_100fc5bf4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fc5c44,0,0);
  return;
}



/* Entry: 100fc5ca0; end: 100fc5d2f;  */

/* WARNING: Possible PIC construction at 0x000100fc5cf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fc5cfc) */

void FUN_100fc5ca0(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c6157c(uVar1);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d918b50,uVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 100fc5d30; end: 100fc5d37;  */

void FUN_100fc5d30(void)

{
  return;
}



/* Entry: 100fc5d38; end: 100fc5da3;  */

void FUN_100fc5d38(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = 0x112d515c8;
  func_0x0001000285a8(0x112d515c8,&UNK_10d918280);
  *(long *)(unaff_x22 + 0x18) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc5da4,0,0);
  return;
}



/* Entry: 100fc5da4; end: 100fc5e1b;  */

void FUN_100fc5da4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x68))
            (uVar2,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             *(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5fd48(uVar1,&UNK_110371cb0,uVar2,FUN_100fc5d30,0,&UNK_110371cb0);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fc5e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc5e1c; end: 100fc5e87;  */

void FUN_100fc5e1c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = 0x112d515c8;
  func_0x0001000285a8(0x112d515c8,&UNK_10d918280);
  *(long *)(unaff_x22 + 0x18) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fc5e88,0,0);
  return;
}



/* Entry: 100fc5e88; end: 100fc5eff;  */

void FUN_100fc5e88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x68))
            (uVar2,*(undefined4 *)
                    PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20,
             *(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5fd48(uVar1,&UNK_110371cb0,uVar2,0x100fc5d34,0,&UNK_110371cb0);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100fc5efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fc5f00; end: 100fc5f03;  */

void FUN_100fc5f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_PTR_1126c81d8;
  func_0x000107c610f8(PTR_PTR_1126c81d8);
  func_0x000107c453e4();
  if (lRam0000000112d515a8 != -1) {
    func_0x000107c61568(0x112d515a8,FUN_100fb2c88);
  }
  uVar7 = uRam0000000112d515b0;
  lVar4 = 0x112d515b8;
  func_0x0001000285a8(0x112d515b8,&UNK_10d918260);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  puVar2 = PTR_PTR_1133bb588;
  puVar1 = PTR_PTR_1133bb558;
  *(undefined **)(lVar4 + 0x20) = PTR_PTR_1133bb558;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  func_0x000107c61434(uVar7);
  func_0x000107c61174(puVar1);
  func_0x000107c61174(puVar2);
  func_0x000100fb2a80(lVar4);
  uVar5 = 0;
  FUN_100f99ab0(0);
  uVar6 = uVar7;
  func_0x000107c5fc48(uVar7,uVar5);
  func_0x000107c6142c(uVar7);
  func_0x000107c57538(puVar3);
  func_0x000107c61170(uVar6);
  FUN_100fb7030(param_1,param_2,param_3,param_4);
  uVar7 = param_1;
  FUN_100fb742c();
  func_0x000107c61170(param_1);
  func_0x0001038e138c(0);
  func_0x000107c610f8();
  func_0x0001038e11e8(puVar3,uVar7);
  return;
}



/* Entry: 100fc5f04; end: 100fc5f4f;  */

void FUN_100fc5f04(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100fc61b8;
  plVar1[5] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100fc5840,0,0);
  return;
}


