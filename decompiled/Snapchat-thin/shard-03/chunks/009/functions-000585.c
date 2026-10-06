/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e2e8e8; end: 102e2e907;  */

void FUN_102e2e8e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e733ad0,1);
  return;
}



/* Entry: 102e2e908; end: 102e2e94b;  */

void FUN_102e2e908(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    func_0x000107c61520(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Entry: 102e2e94c; end: 102e2e97f;  */

void FUN_102e2e94c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 102e2e980; end: 102e2ec8b;  */

undefined1 FUN_102e2e980(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10db56670;
  func_0x000107c614e0(&UNK_10db56670);
  puVar2 = &UNK_10db56698;
  func_0x000107c614e0(&UNK_10db56698);
  func_0x000107c5f20c(&uStack_31);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_31;
}



/* Entry: 102e2ec8c; end: 102e2ed0b;  */

void FUN_102e2ec8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10db56628;
  func_0x000107c614e0(&UNK_10db56628);
  puVar4 = &UNK_10db56650;
  func_0x000107c614e0(&UNK_10db56650);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c5f210(&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 102e2ed0c; end: 102e2ed7b;  */

undefined8 FUN_102e2ed0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10db566d8;
  func_0x000107c614e0(&UNK_10db566d8);
  puVar2 = &UNK_10db56700;
  func_0x000107c614e0(&UNK_10db56700);
  func_0x000107c5f20c(&uStack_38);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return uStack_38;
}



/* Entry: 102e2ed7c; end: 102e2ed8f;  */

bool FUN_102e2ed7c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e2ed90; end: 102e2ee3b;  */

void FUN_102e2ed90(void)

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



/* Entry: 102e2ee3c; end: 102e2eff3;  */

/* WARNING: Possible PIC construction at 0x000102e2ee8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e2ee90) */

void FUN_102e2ee3c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10db56670;
  func_0x000107c614e0(&UNK_10db56670);
  puVar2 = &UNK_10db56698;
  func_0x000107c614e0(&UNK_10db56698);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102e2eff4; end: 102e2f093;  */

void FUN_102e2eff4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  lVar4 = 0x112ebc650;
  func_0x0001000285a8(0x112ebc650,&UNK_10dad6480);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e2f094,uVar2,uVar3);
  return;
}



/* Entry: 102e2f094; end: 102e2f10f;  */

void FUN_102e2f094(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  func_0x000107c5fd34(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e2f110;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 102e2f110; end: 102e2f153;  */

void FUN_102e2f110(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102e2f154,*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x68));
  return;
}



/* Entry: 102e2f154; end: 102e2f25f;  */

void FUN_102e2f154(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar3 = &UNK_10db56628;
    func_0x000107c614e0(&UNK_10db56628);
    puVar4 = &UNK_10db56650;
    func_0x000107c614e0(&UNK_10db56650);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
    *(long *)(unaff_x22 + 0x28) = lVar2;
    func_0x000107c6157c(uVar6);
    func_0x000107c5f210((undefined8 *)(unaff_x22 + 0x20),uVar6,puVar3,puVar4);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102e2f260;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar5,(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61574(uVar6);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102e2f25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e2f260; end: 102e2f2a3;  */

void FUN_102e2f260(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102e2f2a4,*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x68));
  return;
}



/* Entry: 102e2f2a4; end: 102e2f3af;  */

void FUN_102e2f2a4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  if (lVar2 != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar3 = &UNK_10db56628;
    func_0x000107c614e0(&UNK_10db56628);
    puVar4 = &UNK_10db56650;
    func_0x000107c614e0(&UNK_10db56650);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
    *(long *)(unaff_x22 + 0x28) = lVar2;
    func_0x000107c6157c(uVar6);
    func_0x000107c5f210((undefined8 *)(unaff_x22 + 0x20),uVar6,puVar3,puVar4);
    plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_102e2f260;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar5,(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x40));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61574(uVar6);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102e2f3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e2f3b0; end: 102e2f483;  */

void FUN_102e2f3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  lVar4 = 0x112f1e418;
  func_0x0001000285a8(0x112f1e418,&UNK_10db566c8);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar1;
  lVar4 = 0x112f1e420;
  func_0x0001000285a8(0x112f1e420,&UNK_10db566d0);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e2f484,uVar2,uVar3);
  return;
}



/* Entry: 102e2f484; end: 102e2f5a7;  */

/* WARNING: Removing unreachable block (ram,0x000102e2f4c0) */
/* WARNING: Removing unreachable block (ram,0x000102e2f574) */
/* WARNING: Removing unreachable block (ram,0x000102e2f4ec) */
/* WARNING: Removing unreachable block (ram,0x000102e2f57c) */

void FUN_102e2f484(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x0001000a8868(*(long *)(unaff_x22 + 0x88),
                      *(undefined8 *)(*(long *)(unaff_x22 + 0x88) + 0x18));
  FUN_102e29608(uVar2);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c5fdbc(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x28,0,0);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScs8IteratorV4nextxSgyYaKFTu_11034ff30 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xe0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102e2f5a8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScs8IteratorV4nextxSgyYaKF_11034ff28)
            (plVar1,unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 102e2f5a8; end: 102e2f603;  */

void FUN_102e2f5a8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_102e2f604;
  }
  else {
    *(long *)(lVar4 + 0xf0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_102e2f958;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102e2f604; end: 102e2f8fb;  */

void FUN_102e2f604(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar11 = *(ulong *)(unaff_x22 + 0x40);
  if (uVar11 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar3 = *(long *)(unaff_x22 + 0xb8);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
    (**(code **)(lVar1 + 8))(uVar2,uVar12);
    pcVar9 = *(code **)(lVar3 + 8);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(long *)(unaff_x22 + 0x90) + 0x10;
    func_0x000107c61648();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5fd5c();
      if ((uVar5 & 1) == 0) {
        puVar6 = &UNK_10db566d8;
        func_0x000107c614e0(&UNK_10db566d8);
        puVar7 = &UNK_10db56700;
        func_0x000107c614e0(&UNK_10db56700);
        func_0x000107c61434(uVar11);
        func_0x000107c5f20c(unaff_x22 + 0x78,uVar4,puVar6,puVar7);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar6);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar5 = uVar11;
        FUN_102e2add8(uVar11,uVar13);
        func_0x000107c6142c(uVar13);
        if ((uVar5 & 1) == 0) {
          puVar6 = &UNK_10db566d8;
          func_0x000107c614e0(&UNK_10db566d8);
          puVar7 = &UNK_10db56700;
          func_0x000107c614e0(&UNK_10db56700);
          *(ulong *)(unaff_x22 + 0x80) = uVar11;
          func_0x000107c6157c(uVar4);
          func_0x000107c5f210(unaff_x22 + 0x80,uVar4,puVar6,puVar7);
          puVar6 = &UNK_10db56628;
          func_0x000107c614e0(&UNK_10db56628);
          puVar7 = &UNK_10db56650;
          func_0x000107c614e0(&UNK_10db56650);
          func_0x000107c5f20c(unaff_x22 + 0x58,uVar4,puVar6,puVar7);
          func_0x000107c61574(puVar7);
          func_0x000107c61574(puVar6);
          if (*(long *)(unaff_x22 + 0x60) == 0) {
            puVar6 = &UNK_10db56628;
            func_0x000107c614e0(&UNK_10db56628);
            puVar7 = &UNK_10db56650;
            func_0x000107c614e0(&UNK_10db56650);
            *(undefined8 *)(unaff_x22 + 0x68) = uVar10;
            *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
            func_0x000107c61434(uVar2);
            func_0x000107c6157c(uVar4);
            func_0x000107c5f210(unaff_x22 + 0x68,uVar4,puVar6,puVar7);
          }
          else {
            func_0x000107c6142c();
          }
          puVar6 = &UNK_10db56670;
          func_0x000107c614e0(&UNK_10db56670);
          puVar7 = &UNK_10db56698;
          func_0x000107c614e0(&UNK_10db56698);
          *(undefined1 *)(unaff_x22 + 0xf8) = 3;
          func_0x000107c5f210(unaff_x22 + 0xf8,uVar4,puVar6,puVar7);
          func_0x000107c6142c(uVar11);
        }
        else {
          func_0x000107c61574(uVar4);
          func_0x000107c61430(uVar11,2);
        }
        func_0x000107c6142c(uVar2);
        plVar8 = (long *)(ulong)*(uint *)(PTR___sScs8IteratorV4nextxSgyYaKFTu_11034ff30 + 4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xe8) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_102e2f8fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___sScs8IteratorV4nextxSgyYaKF_11034ff28)
                  (plVar8,(ulong *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x98));
        return;
      }
      func_0x000107c61574(uVar4);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar3 = *(long *)(unaff_x22 + 0xb8);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar2);
    (**(code **)(lVar1 + 8))(uVar12,uVar14);
    pcVar9 = *(code **)(lVar3 + 8);
  }
  (*pcVar9)(uVar10,uVar13);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000102e2f700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e2f8fc; end: 102e2f957;  */

void FUN_102e2f8fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xe8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_102e2f604;
  }
  else {
    *(long *)(lVar4 + 0xf0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    uVar3 = *(undefined8 *)(lVar4 + 0xd8);
    pcVar1 = FUN_102e2f958;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102e2f958; end: 102e2fa23;  */

void FUN_102e2f958(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar2 = *(long *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  (**(code **)(lVar5 + 8))(uVar3,uVar6);
  (**(code **)(lVar2 + 8))(uVar4,uVar1);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar5 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    func_0x000107c614ac(uVar4);
  }
  else {
    FUN_102e2ffd4();
    func_0x000107c614ac(uVar4);
    func_0x000107c61574(lVar5);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102e2fa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e2fa24; end: 102e2fb3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2fa24(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112f1e2e0;
  lVar2 = 0x112f1e050;
  func_0x0001000285a8(0x112f1e050,&UNK_10db560f0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112f1e2e8;
  lVar2 = 0x112f1e048;
  func_0x0001000285a8(0x112f1e048,&UNK_10db56610);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_112f1e2f0;
  lVar2 = 0x112eb7548;
  func_0x0001000285a8(0x112eb7548,&UNK_10dace100);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x0001000834e4(unaff_x20 + _DAT_112f1e2f8);
  lVar1 = _DAT_112f1e300;
  lVar2 = 0x112ebc648;
  func_0x0001000285a8(0x112ebc648,&UNK_10db560b0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f1e308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f1e310));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e2fb3c; end: 102e2fb43;  */

void FUN_102e2fb3c(void)

{
  if (lRam0000000112f1e340 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e733af8);
  return;
}



/* Entry: 102e2fb44; end: 102e2fb7b;  */

void FUN_102e2fb44(undefined8 param_1)

{
  if (lRam0000000112f1e340 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e733af8);
  return;
}



/* Entry: 102e2fb7c; end: 102e2fd3f;  */

void FUN_102e2fb7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0x112f1e350;
  lVar1 = 0x13f;
  func_0x000102e2fcfc(0x13f,0x112f1e350,&UNK_1105d9a40,PTR___s7Combine9PublishedVMa_11034ae80);
  if (uVar2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112f1e358;
    lVar1 = 0x13f;
    func_0x000102e2fcac(0x13f,0x112f1e358,0x112f1e058,&UNK_10db563e0);
    if (uVar2 < 0x40) {
      lStack_50 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0x112eb7530;
      lVar1 = 0x13f;
      func_0x000102e2fcac(0x13f,0x112eb7530,0x112d35ff8,&UNK_10d900cd0);
      if (uVar2 < 0x40) {
        lStack_48 = *(long *)(lVar1 + -8) + 0x40;
        puStack_40 = &UNK_10db56518;
        uVar2 = 0x112f1e360;
        lVar1 = 0x13f;
        func_0x000102e2fcfc(0x13f,0x112f1e360,PTR___sSSN_11034da80,PTR___sScSMa_11034fda0);
        if (uVar2 < 0x40) {
          lStack_38 = *(long *)(lVar1 + -8) + 0x40;
          puStack_30 = &UNK_10db56530;
          puStack_28 = &UNK_10db56530;
          func_0x000107c61630(param_1,0x100,7,&lStack_58,param_1 + 0x50);
        }
      }
    }
  }
  return;
}



/* Entry: 102e2fd40; end: 102e2fea7;  */

int FUN_102e2fd40(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e2fdbc;
        goto LAB_102e2fda0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e2fda0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102e2fdbc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e2fea8; end: 102e2fee7;  */

void FUN_102e2fea8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1e410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db565a4;
  func_0x000107c61520(&UNK_10db565a4,&UNK_1105d9a40);
  puRam0000000112f1e410 = puVar1;
  return;
}



/* Entry: 102e2fee8; end: 102e2fef3;  */

undefined * FUN_102e2fee8(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 102e2fef4; end: 102e2ff1b;  */

void FUN_102e2fef4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 102e2ff1c; end: 102e2ff33;  */

undefined8 * FUN_102e2ff1c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102e2ff34; end: 102e2ff97;  */

void FUN_102e2ff34(void)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar3 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102e2ff98;
  plVar3[0x11] = unaff_x20 + 0x10;
  plVar3[0x12] = lVar4;
  lVar4 = 0x112f1e418;
  func_0x0001000285a8(0x112f1e418,&UNK_10db566c8);
  plVar3[0x13] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x14] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x15] = uVar1;
  lVar4 = 0x112f1e420;
  func_0x0001000285a8(0x112f1e420,&UNK_10db566d0);
  plVar3[0x16] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x17] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x18] = uVar1;
  lVar2 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0x19] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x1a] = lVar2;
  plVar3[0x1b] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e2f484,lVar2,lVar4);
  return;
}



/* Entry: 102e2ff98; end: 102e2ffd3;  */

void FUN_102e2ff98(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e2ffd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e2ffd4; end: 102e30093;  */

void FUN_102e2ffd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 uStack_39;
  long lStack_38;
  
  puVar1 = &UNK_10db566d8;
  func_0x000107c614e0(&UNK_10db566d8);
  puVar2 = &UNK_10db56700;
  func_0x000107c614e0(&UNK_10db56700);
  func_0x000107c5f20c(&lStack_38);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  lVar3 = *(long *)(lStack_38 + 0x10);
  func_0x000107c6142c();
  if (lVar3 == 0) {
    func_0x000107c614e0(&UNK_10db56670);
    func_0x000107c614e0(&UNK_10db56698);
    uStack_39 = 2;
    func_0x000107c6157c();
    func_0x000107c5f210(&uStack_39);
  }
  return;
}



/* Entry: 102e30094; end: 102e300df; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder layoutId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e30094(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1e428);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f1e428))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102e300e0; end: 102e3011b; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder setLayoutId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e300e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112f1e428);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102e3011c; end: 102e3017b; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder init] */

void FUN_102e3011c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerDynamicLayoutImplementation.StackLayoutDataBinder",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e30148);
  (*pcVar1)();
}



/* Entry: 102e3017c; end: 102e301b7; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e3019c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e301a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e3017c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f1e428 + 8))
  ;
  return;
}



/* Entry: 102e301b8; end: 102e301d7;  */

void FUN_102e301b8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a88e0);
  return;
}



/* Entry: 102e301d8; end: 102e304bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e301d8(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_78 [24];
  
  lVar16 = _DAT_112f1e430;
  func_0x000107c61428(unaff_x20 + _DAT_112f1e430,auStack_78,0,0);
  lVar16 = *(long *)(unaff_x20 + lVar16);
  uVar11 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(lVar16 + 0x40);
  func_0x000107c61434(lVar16);
  lVar13 = 0;
joined_r0x000102e302bc:
  while (uVar12 == 0) {
    bVar6 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x102e304bc);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar13) {
      func_0x000107c61574(lVar16);
      return;
    }
    uVar12 = ((ulong *)(lVar16 + 0x40))[lVar13];
  }
  uVar4 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
  uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar12 = uVar12 - 1 & uVar12;
  plVar10 = (long *)(*(long *)(lVar16 + 0x38) +
                    (LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar13 << 6) * 0x28);
  lVar1 = *plVar10;
  lVar2 = plVar10[1];
  cVar3 = (char)plVar10[2];
  lVar15 = plVar10[3];
  if (cVar3 != '\0') goto code_r0x000102e30310;
  lVar14 = lVar2;
  func_0x000102e30a40(lVar1,lVar2,0);
  func_0x000107c61174(lVar15);
  lVar7 = lVar1;
  func_0x000107c43770();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102e304c0);
    (*pcVar5)();
  }
  lVar8 = param_1;
  func_0x000107c3e364(param_1);
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c529c4(lVar1);
  func_0x000107c61170(lVar8);
  lVar7 = lVar1;
  func_0x000107c61174();
  lVar8 = lVar7;
  func_0x000107c3e374();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x000107c5c158();
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    func_0x000107c6142c(lVar14);
  }
  func_0x000107c550d8(lVar7);
  goto LAB_102e30290;
code_r0x000102e30310:
  if (cVar3 == '\x01') {
    func_0x000102e30a40(lVar1,lVar2,1);
    func_0x000102e30a40(lVar1,lVar2,1);
    func_0x000107c61174(lVar15);
    lVar7 = param_1;
    func_0x000107c45080();
    func_0x000107c61180();
    func_0x000107c61174(lVar1);
    if (lVar7 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = lVar7;
      func_0x000107c45154(lVar7);
      func_0x000107c61180();
    }
    func_0x000107c55258();
    func_0x000107c61170(lVar14);
    func_0x000102e30a54(lVar1,lVar2,1);
    func_0x000107c61170(lVar7);
LAB_102e30290:
    func_0x000102e30a54(lVar1,lVar2,cVar3);
    func_0x000102e30a54(lVar1,lVar2,cVar3);
    func_0x000107c61170(lVar15);
  }
  goto joined_r0x000102e302bc;
}



/* Entry: 102e304c0; end: 102e30507; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder bindLayoutViewModel:] */

void FUN_102e304c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_102e301d8(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e30508; end: 102e305bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_102e30508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_48 [24];
  
  func_0x000107c49820();
  lVar5 = _DAT_112f1e430;
  puVar2 = auStack_48;
  func_0x000107c61428(unaff_x20 + _DAT_112f1e430,puVar2,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if ((*(long *)(lVar5 + 0x10) == 0) || (func_0x00010035a314(), ((ulong)puVar2 & 1) == 0)) {
    func_0x000107c614a8(auStack_48);
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_5 * 0x28);
    uVar4 = *puVar3;
    cVar1 = *(char *)(puVar3 + 2);
    func_0x000107c614a8(auStack_48);
    if (cVar1 != '\0') {
      uVar6 = 0;
      uVar7 = 0;
      if (cVar1 != '\x01') goto LAB_102e305ac;
    }
    uVar6 = param_3;
    uVar7 = param_4;
    func_0x000107c438d4(uVar4);
  }
LAB_102e305ac:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 102e305c0; end: 102e3062b; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder sizeForUIElementWithId:] */

undefined1  [16]
FUN_102e305c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102e30508(param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 102e3062c; end: 102e307f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e3062c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long unaff_x20;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_88 [24];
  
  lVar7 = _DAT_112f1e430;
  func_0x000107c61428(unaff_x20 + _DAT_112f1e430,auStack_88,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  puVar12 = (ulong *)(lVar7 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar15 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar12;
  func_0x000107c61438(lVar7,2);
  lVar13 = 0;
  lVar14 = lVar13;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar4 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar10 = (undefined8 *)
                (*(long *)(lVar7 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x28 +
                lVar13 * 0xa00);
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = *(undefined1 *)(puVar10 + 2);
      uVar8 = puVar10[3];
      lVar14 = puVar10[4];
      func_0x000107c61174(uVar8);
      func_0x000102e30a40(uVar1,uVar2,uVar3);
      uVar9 = uVar8;
      func_0x000107c4aba4(uVar8);
      func_0x000107c61180();
      dVar17 = 0.0;
      dVar16 = 0.0;
      if (lVar14 == 1) {
        func_0x000107c3ec60(uVar8);
        func_0x000107c609cc();
        dVar17 = dVar16;
        func_0x000107c3ec60(uVar8);
        func_0x000107c609b0();
        if (dVar16 <= dVar17) {
          dVar17 = dVar16;
        }
        dVar17 = dVar17 * 0.5;
      }
      func_0x000107c539d4(dVar17,uVar9);
      func_0x000107c61170(uVar9);
      func_0x000102e30a54(uVar1,uVar2,uVar3);
      func_0x000107c61170(uVar8);
      lVar14 = lVar13;
    }
    bVar6 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar13) {
      func_0x000107c6142c(lVar7);
      func_0x000102e30a38(lVar7,puVar12,~uVar11,lVar14,0);
      return;
    }
    uVar15 = puVar12[lVar13];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102e307f4);
  (*pcVar5)();
}



/* Entry: 102e307f4; end: 102e3081b; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder handleLayoutUpdates] */

void FUN_102e307f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e3062c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e3081c; end: 102e309bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e3081c(void)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  ulong *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_78 [24];
  
  lVar7 = _DAT_112f1e430;
  func_0x000107c61428(unaff_x20 + _DAT_112f1e430,auStack_78,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  puVar8 = (ulong *)(lVar7 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar14 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar14 = uVar14 & *puVar8;
  func_0x000107c61438(lVar7,2);
  lVar9 = 0;
  lVar10 = lVar9;
  while( true ) {
    while (uVar14 != 0) {
      uVar1 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      puVar6 = (undefined8 *)
               (*(long *)(lVar7 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 +
               lVar9 * 0xa00);
      uVar11 = *puVar6;
      lVar10 = lVar9;
      if (*(char *)(puVar6 + 2) == '\0') {
        uVar4 = puVar6[3];
        uVar12 = puVar6[1];
        func_0x000107c61174(uVar4);
        func_0x000102e30a40(uVar11,uVar12,0);
        uVar5 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c59c6c(uVar11);
        func_0x000107c61170(uVar5);
        func_0x000102e30a54(uVar11,uVar12,0);
        func_0x000107c61170(uVar4);
      }
      else if (*(char *)(puVar6 + 2) == '\x01') {
        func_0x000107c55258(uVar11);
      }
    }
    bVar3 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar3) break;
    if ((long)(0x3f - uVar13 >> 6) <= lVar9) {
      func_0x000107c6142c(lVar7);
      func_0x000102e30a38(lVar7,puVar8,~uVar13,lVar10,0);
      return;
    }
    uVar14 = puVar8[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e309bc);
  (*pcVar2)();
}



/* Entry: 102e309bc; end: 102e309e3; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder reset] */

void FUN_102e309bc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e3081c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e309e4; end: 102e30a37; -[_TtC41SCLensExplorerDynamicLayoutImplementation21StackLayoutDataBinder cleanup] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e309e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1e430;
  func_0x000107c61428(param_1 + _DAT_112f1e430,auStack_38,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102e30a38; end: 102e30a8f;  */

void FUN_102e30a38(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102e30a90; end: 102e30ad3;  */

void FUN_102e30a90(long param_1,long *param_2,long param_3)

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



/* Entry: 102e30ad4; end: 102e30faf;  */

long FUN_102e30ad4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102e30fb0; end: 102e3111f;  */

undefined * FUN_102e30fb0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  func_0x000107c4abe0();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x0001002ed07c(0);
  uVar3 = unaff_x20;
  func_0x000107c5fc54(unaff_x20,uVar2);
  func_0x000107c61170(unaff_x20);
  if (uVar3 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar7 = uVar3;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 == 0) {
    func_0x000107c6142c(uVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100dd4260(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e31120);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar8;
        func_0x0001002ec9a0(uVar8,uVar3);
      }
      uVar5 = uVar4;
      func_0x000107c49820();
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
        func_0x000100dd4260(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar6 + uVar4 * 8 + 0x20) = uVar5;
    } while (uVar7 != uVar8);
    func_0x000107c6142c(uVar3);
  }
  return puVar6;
}



/* Entry: 102e31120; end: 102e3125b;  */

undefined8 FUN_102e31120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong unaff_x20;
  
  uVar4 = unaff_x20;
  func_0x000107c3db0c();
  func_0x000107c4e080();
  uVar1 = 3;
  if (unaff_x20 < 2) {
    uVar1 = 4;
  }
  uVar3 = 3;
  if (unaff_x20 < 2) {
    uVar3 = 1;
  }
  uVar2 = 3;
  if (uVar4 == 1) {
    uVar2 = uVar3;
  }
  if (uVar4 != 2) {
    uVar1 = uVar2;
  }
  uVar3 = 0;
  if (uVar4 != 3) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 102e3125c; end: 102e313d3;  */

undefined8 FUN_102e3125c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar6 = &puStack_b0;
  uStack_78 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uStack_80 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uStack_68 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  func_0x000107c4abc0();
  func_0x000107c61180();
  puVar4 = &UNK_1105d9e00;
  func_0x000107c613fc(&UNK_1105d9e00,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_80;
  puVar5 = &UNK_1105d9e28;
  func_0x000107c613fc(&UNK_1105d9e28,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_102e31460;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_90 = 0x102e31468;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_102e342b8;
  puStack_98 = &UNK_1105d9e40;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  puVar1 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c648(unaff_x20);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(unaff_x20);
  uVar2 = uStack_80;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x73,0x10,0x27,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e313d4);
  (*pcVar3)();
}



/* Entry: 102e313d4; end: 102e3145f;  */

void FUN_102e313d4(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  func_0x000107c423e0();
  func_0x000107c61180();
  dVar1 = (double)func_0x000107c5cbd8();
  dVar2 = (double)func_0x000107c5ba38(param_1);
  dVar3 = (double)func_0x000107c3ec10(param_1);
  dVar4 = (double)func_0x000107c427dc(param_1);
  func_0x000107c61170(param_1);
  *param_2 = dVar1 * 8.0;
  param_2[1] = dVar2 * 8.0;
  auVar5 = NEON_fmov(0x4020000000000000,8);
  param_2[3] = dVar4 * auVar5._8_8_;
  param_2[2] = dVar3 * auVar5._0_8_;
  return;
}



/* Entry: 102e31460; end: 102e3149b;  */

void FUN_102e31460(undefined8 param_1)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  pdVar1 = *(double **)(unaff_x20 + 0x10);
  func_0x000107c423e0();
  func_0x000107c61180();
  dVar2 = (double)func_0x000107c5cbd8();
  dVar3 = (double)func_0x000107c5ba38(param_1);
  dVar4 = (double)func_0x000107c3ec10(param_1);
  dVar5 = (double)func_0x000107c427dc(param_1);
  func_0x000107c61170(param_1);
  *pdVar1 = dVar2 * 8.0;
  pdVar1[1] = dVar3 * 8.0;
  auVar6 = NEON_fmov(0x4020000000000000,8);
  pdVar1[3] = dVar5 * auVar6._8_8_;
  pdVar1[2] = dVar4 * auVar6._0_8_;
  return;
}



/* Entry: 102e3149c; end: 102e317c7;  */

long FUN_102e3149c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 auStack_b0 [40];
  long alStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112e2fb98,&UNK_10da84c50);
  uVar1 = param_4;
  func_0x000107c421c8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  puVar3 = &UNK_1105d9e98;
  func_0x000107c613fc(&UNK_1105d9e98,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar1 = 0x102e31ad0;
  func_0x0001000bdd8c(0x102e31ad0,puVar3);
  lVar4 = 0;
  func_0x0001007b1c58();
  lVar5 = lVar4;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = uVar1;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined8 *)(lVar5 + 0x10) = uVar2;
  ppuStack_68 = &PTR_DAT_1105da2a0;
  alStack_88[0] = lVar5;
  lStack_70 = lVar4;
  func_0x0001007b1c78(alStack_88,auStack_b0);
  puVar3 = &UNK_1105d9ec0;
  func_0x000107c613fc(&UNK_1105d9ec0,0x40,7);
  func_0x0001007b1cbc(auStack_b0,puVar3 + 0x10);
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  func_0x0001000285a8(0x112f1e470,&UNK_10db56870);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  pcVar6 = FUN_102e3188c;
  func_0x0001000bdd8c(FUN_102e3188c,puVar3);
  func_0x0001007b1c78(alStack_88,auStack_b0);
  puVar3 = &UNK_1105d9ee8;
  func_0x000107c613fc(&UNK_1105d9ee8,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x0001007b1cbc(auStack_b0,puVar3 + 0x18);
  func_0x0001000285a8(0x112f1e478,&UNK_10db56878);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  pcVar7 = FUN_102e31a08;
  func_0x0001000bdd8c(FUN_102e31a08,puVar3);
  pcVar8 = pcVar7;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar7);
  uVar1 = 0x112f1e480;
  func_0x0001000285a8(0x112f1e480,&UNK_10db56880);
  uVar2 = 0x102e31ac0;
  func_0x0001000cb480(0x102e31ac0,0,uVar1);
  uVar9 = uVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar2);
  uVar1 = 0x112f1e488;
  func_0x0001000285a8(0x112f1e488,&UNK_10db56888);
  uVar2 = 0x102e31ac4;
  func_0x0001000cb480(0x102e31ac4,0,uVar1);
  uVar1 = uVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(uVar2);
  puVar3 = PTR_PTR_1126ac570;
  func_0x000107c610f8();
  func_0x000107c46720();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61574(pcVar6);
  func_0x000107c61170(pcVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(alStack_88);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return unaff_x20;
}



/* Entry: 102e317c8; end: 102e3188b;  */

void FUN_102e317c8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [40];
  
  func_0x0001007b1c78(param_2,auStack_58);
  puVar1 = &UNK_1105d9f88;
  func_0x000107c613fc(&UNK_1105d9f88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  pcVar2 = FUN_102e31aa4;
  func_0x0001000bdd8c(FUN_102e31aa4,puVar1);
  func_0x0001007b1cd4(0);
  func_0x000107c610f8();
  puVar3 = auStack_58;
  FUN_102e33448(puVar3,pcVar2);
  func_0x000107c61574(pcVar2);
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 102e3188c; end: 102e31897;  */

void FUN_102e3188c(long *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [40];
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001007b1c78(unaff_x20 + 0x10,auStack_58);
  puVar1 = &UNK_1105d9f88;
  func_0x000107c613fc(&UNK_1105d9f88,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  pcVar2 = FUN_102e31aa4;
  func_0x0001000bdd8c(FUN_102e31aa4,puVar1);
  func_0x0001007b1cd4(0);
  func_0x000107c610f8();
  puVar3 = auStack_58;
  FUN_102e33448(puVar3,pcVar2);
  func_0x000107c61574(pcVar2);
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 102e31898; end: 102e3190f;  */

void FUN_102e31898(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 102e31910; end: 102e31a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e31910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  func_0x0001000285a8(0x112d6e398,&UNK_10d930300);
  func_0x000107c5b6b8();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  lVar3 = 0;
  FUN_102e343f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f1e5e8;
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar1) = uVar5;
  *(undefined8 *)(lVar4 + _DAT_112f1e5d8) = uVar2;
  func_0x0001007b1c78(param_3,lVar4 + _DAT_112f1e5e0);
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar6;
  return;
}



/* Entry: 102e31a08; end: 102e31a13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e31a08(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_60;
  func_0x0001000285a8(0x112d6e398,&UNK_10d930300);
  func_0x000107c5b6b8();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar3 = 0;
  FUN_102e343f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f1e5e8;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar1) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f1e5d8) = uVar2;
  func_0x0001007b1c78(unaff_x20 + 0x18,lVar4 + _DAT_112f1e5e0);
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 102e31a14; end: 102e31a6b;  */

void FUN_102e31a14(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102e31a6c; end: 102e31a73;  */

void FUN_102e31a6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e31a74; end: 102e31a97;  */

void FUN_102e31a74(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e31a98; end: 102e31aa3;  */

void FUN_102e31a98(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102e31aa4; end: 102e31abb;  */

void FUN_102e31aa4(void)

{
  long unaff_x20;
  
  FUN_102e31898(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e31abc; end: 102e31ad3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e31abc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar5 = &lStack_60;
  func_0x0001000285a8(0x112d6e398,&UNK_10d930300);
  func_0x000107c5b6b8();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x0001000bda74();
  func_0x000107c61170(uVar6);
  lVar3 = 0;
  FUN_102e343f8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112f1e5e8;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + lVar1) = uVar6;
  *(undefined8 *)(lVar4 + _DAT_112f1e5d8) = uVar2;
  func_0x0001007b1c78(unaff_x20 + 0x18,lVar4 + _DAT_112f1e5e0);
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 102e31ad4; end: 102e31af3;  */

void FUN_102e31ad4(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 102e31af4; end: 102e31c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e31af4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  long unaff_x20;
  long *plStack_48;
  
  func_0x0001000d224c(&plStack_48);
  if (plStack_48 != (long *)0x0) {
    lVar1 = unaff_x20 + _DAT_112f1e560;
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar3);
    (**(code **)(lVar2 + 8))(uVar3,lVar2);
    plVar4 = plStack_48;
    func_0x000100471e0c(plStack_48,1);
    func_0x000107c61574(uVar3);
    puVar5 = &UNK_1105da1a8;
    func_0x000107c613fc(&UNK_1105da1a8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcVar6 = FUN_102e34270;
    puVar8 = puVar5;
    (**(code **)(*plVar4 + 0x60))(FUN_102e34270);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar5);
    pcVar7 = pcVar6;
    func_0x000107c614f0(pcVar6);
    (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f1e570),pcVar7,puVar8);
    func_0x000107c615e8(plStack_48);
    func_0x000107c615e8(pcVar6);
  }
  return;
}



/* Entry: 102e31c18; end: 102e31c77; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutBuilder init] */

void FUN_102e31c18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensExplorerDynamicLayoutImplementation.LensExplorerStackLayoutBuilder",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e31c44);
  (*pcVar1)();
}



/* Entry: 102e31c78; end: 102e31cdf; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e31c78(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f1e560);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1e568));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1e570));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f1e578));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f1e580));
  return;
}



/* Entry: 102e31ce0; end: 102e32133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e31ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [16];
  undefined *puStack_78;
  
  uVar8 = 0x112f1e5c0;
  func_0x0001000285a8(0x112f1e5c0,&UNK_10db568f8);
  puVar13 = auStack_a0;
  func_0x000100087bd4(&puStack_78,FUN_102e34254,puVar13,uVar8);
  puVar11 = puStack_78;
  if (puStack_78 == (undefined *)0x0) {
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_102e33db8();
    lVar10 = 0;
    FUN_102e301b8();
    lVar12 = lVar10;
    func_0x000107c610f8();
    lVar3 = _DAT_112f1e430;
    *(undefined **)(lVar12 + _DAT_112f1e430) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar2 = (undefined8 *)(lVar12 + _DAT_112f1e428);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    func_0x000107c61428(lVar12 + lVar3,auStack_a0,1,0);
    *(undefined **)(lVar12 + lVar3) = puVar11;
    puVar11 = PTR_s_init_1125d9248;
    lStack_b8 = lVar12;
    lStack_b0 = lVar10;
    func_0x000107c61434(param_3);
    func_0x000107c61154(&lStack_b8,puVar11);
  }
  else {
    func_0x000107c40374();
    puVar4 = puStack_78;
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c4abf8();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar6 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puStack_78 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puVar5 = puVar11;
    func_0x000107c508cc(puVar11);
    func_0x000107c61180();
    puVar7 = puVar11;
    func_0x000107c4ac28(puVar11);
    func_0x000107c61180();
    uVar8 = 0;
    FUN_102e32a98(0);
    puVar9 = puVar7;
    func_0x000107c5fc54(puVar7,uVar8);
    func_0x000107c61170(puVar7);
    puVar7 = puVar5;
    FUN_102e321d4(param_1,puVar5,puVar9,param_4,puVar6,puVar13,&puStack_78);
    func_0x000107c61170(puVar5);
    func_0x000107c6142c(puVar9);
    func_0x000107c3e2c8(param_5);
    puVar5 = puStack_78;
    lVar10 = 0;
    FUN_102e301b8();
    lVar12 = lVar10;
    func_0x000107c610f8();
    lVar3 = _DAT_112f1e430;
    *(undefined **)(lVar12 + _DAT_112f1e430) = puVar4;
    plVar1 = (long *)(lVar12 + _DAT_112f1e428);
    *plVar1 = (long)puVar6;
    plVar1[1] = (long)puVar13;
    func_0x000107c61428(lVar12 + lVar3,auStack_a0,1,0);
    *(undefined **)(lVar12 + lVar3) = puVar5;
    puVar4 = PTR_s_init_1125d9248;
    lStack_c8 = lVar12;
    lStack_c0 = lVar10;
    func_0x000107c61434(puVar5);
    func_0x000107c61154(&lStack_c8,puVar4);
    func_0x000107c6142c(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar11);
  }
  return;
}



/* Entry: 102e32134; end: 102e321d3; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutBuilder buildLayoutWithId:requiredWidth:styleOverride:attachingToContainer:] */

void FUN_102e32134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_2);
  FUN_102e31ce0(param_1,param_4,param_3,param_5,param_6);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 102e321d4; end: 102e32a07;  */

long FUN_102e321d4(double param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 unaff_x20;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  char cStack_e0;
  long lStack_d8;
  double dStack_d0;
  char cStack_c8;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  char cStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  
  dVar29 = param_1;
  FUN_102e33558();
  lVar5 = param_2;
  dVar28 = dVar29;
  FUN_102e33670(param_2,param_3);
  FUN_102e30fb0();
  uVar21 = *(ulong *)(lVar5 + 0x10);
  if (uVar21 == 0) {
    func_0x000107c6142c();
    dVar30 = 0.0;
  }
  else {
    uVar25 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar22 = *(ulong *)(uVar25 + 0x10);
    }
    else {
      uVar22 = uVar25;
      if (0x7fffffffffffffff < param_3) {
        uVar22 = param_3;
      }
      func_0x000107c60480();
    }
    uVar27 = 0;
    lVar26 = 0;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329c8);
        (*pcVar3)();
      }
      if (uVar22 != 0) {
        uVar23 = 0;
        uVar24 = *(ulong *)(lVar5 + 0x20 + uVar27 * 8);
        do {
          if ((param_3 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar25 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329bc);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(param_3 + uVar23 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar23;
            func_0x000102e3673c(uVar23,param_3);
          }
          uVar19 = uVar23 + 1;
          if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329b8);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          func_0x000107c42468();
          if (uVar7 == uVar24) {
            uVar23 = uVar6;
            func_0x000107c5e29c();
            func_0x000107c61170(uVar6);
            bVar4 = SCARRY8(lVar26,uVar23);
            lVar26 = lVar26 + uVar23;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329d0);
              (*pcVar3)();
            }
            break;
          }
          func_0x000107c61170(uVar6);
          uVar23 = uVar23 + 1;
        } while (uVar19 != uVar22);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar21);
    func_0x000107c6142c();
    dVar30 = (double)lVar26;
  }
  uVar8 = 0;
  func_0x0001013c6c44();
  puStack_120 = (undefined *)CONCAT44(puStack_120._4_4_,0x447a0000);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x3f800000);
  uVar9 = uVar8;
  FUN_102e338bc();
  func_0x000107c5f170(&uStack_c4,&puStack_120,&uStack_c0,uVar8);
  lVar5 = param_2;
  FUN_102e33900();
  lVar26 = lVar5;
  FUN_102e30fb0();
  uVar21 = *(ulong *)(lVar26 + 0x10);
  if (uVar21 == 0) {
    puStack_160 = (undefined *)0x0;
    pcStack_158 = (code *)0x0;
    puStack_150 = (undefined *)0x0;
    uStack_148 = 0;
    puStack_138 = (undefined *)0x0;
    uStack_130 = 0;
  }
  else {
    dVar28 = param_1 - dVar28;
    dVar29 = dVar28 - dVar29;
    uVar25 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar22 = *(ulong *)(uVar25 + 0x10);
    }
    else {
      uVar22 = uVar25;
      if (0x7fffffffffffffff < param_3) {
        uVar22 = param_3;
      }
      func_0x000107c60480();
    }
    puStack_160 = (undefined *)0x0;
    pcStack_158 = (code *)0x0;
    puStack_150 = (undefined *)0x0;
    uStack_148 = 0;
    puStack_138 = (undefined *)0x0;
    uStack_130 = 0;
    uVar27 = 0;
    do {
      if (*(ulong *)(lVar26 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329cc);
        (*pcVar3)();
      }
      if (uVar22 != 0) {
        uVar23 = 0;
        uVar24 = *(ulong *)(lVar26 + 0x20 + uVar27 * 8);
        do {
          if ((param_3 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar25 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329c4);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(param_3 + uVar23 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar23;
            func_0x000102e3673c(uVar23,param_3);
          }
          uVar19 = uVar23 + 1;
          if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e329c0);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          func_0x000107c42468();
          if (uVar7 == uVar24) {
            dStack_d0 = 0.0;
            cStack_c8 = '\x01';
            lVar10 = param_2;
            func_0x000107c4e080();
            if ((lVar10 == 0) && (uVar23 = uVar6, func_0x000107c5e29c(), 0 < (long)uVar23)) {
              uVar23 = uVar6;
              func_0x000107c5e29c();
              dVar28 = (double)(long)((((dVar29 / param_1) * (double)(long)uVar23) / dVar30) * 100.0
                                     ) / 100.0;
              cStack_c8 = '\0';
              dStack_d0 = dVar28;
            }
            lStack_d8 = 0;
            uStack_f0 = 0;
            uStack_e8 = 0;
            cStack_e0 = -1;
            uVar23 = uVar6;
            func_0x000107c4abc0();
            func_0x000107c61180();
            puVar11 = &UNK_1105d9fc8;
            func_0x000107c613fc(&UNK_1105d9fc8,0x70,7);
            *(double **)(puVar11 + 0x10) = &dStack_d0;
            *(double *)(puVar11 + 0x18) = param_1;
            *(double *)(puVar11 + 0x20) = dVar29;
            *(long **)(puVar11 + 0x28) = &lStack_d8;
            *(undefined8 *)(puVar11 + 0x30) = unaff_x20;
            *(ulong *)(puVar11 + 0x38) = param_3;
            *(long *)(puVar11 + 0x40) = param_2;
            *(undefined8 *)(puVar11 + 0x48) = param_4;
            *(undefined8 *)(puVar11 + 0x50) = param_5;
            *(undefined8 *)(puVar11 + 0x58) = param_6;
            *(undefined8 **)(puVar11 + 0x60) = param_7;
            *(undefined8 **)(puVar11 + 0x68) = &uStack_f0;
            uVar18 = unaff_x20;
            func_0x000107c61174();
            func_0x000107c61434(param_3);
            func_0x000107c61174(param_2);
            func_0x000107c61434(param_6);
            func_0x000100d28b54(pcStack_158,puStack_160);
            puVar12 = &UNK_1105d9ff0;
            func_0x000107c613fc(&UNK_1105d9ff0,0x20,7);
            *(code **)(puVar12 + 0x10) = FUN_102e33a18;
            *(undefined **)(puVar12 + 0x18) = puVar11;
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_100 = (code *)0x102e342e0;
            puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_118 = 0x42000000;
            pcStack_110 = (code *)0x102e342bc;
            puStack_108 = &UNK_1105da008;
            ppuVar13 = &puStack_120;
            puStack_f8 = puVar12;
            func_0x000107c60bc4();
            func_0x000107c61574(puStack_f8);
            puVar12 = &UNK_1105da040;
            func_0x000107c613fc(&UNK_1105da040,0x30,7);
            *(undefined8 *)(puVar12 + 0x10) = uVar18;
            *(undefined8 *)(puVar12 + 0x18) = param_4;
            *(long **)(puVar12 + 0x20) = &lStack_d8;
            *(undefined8 **)(puVar12 + 0x28) = &uStack_f0;
            func_0x000107c61174();
            func_0x000100d28b54(uStack_148,puStack_150);
            puVar14 = &UNK_1105da068;
            func_0x000107c613fc(&UNK_1105da068,0x20,7);
            *(undefined8 *)(puVar14 + 0x10) = 0x102e33a74;
            *(undefined **)(puVar14 + 0x18) = puVar12;
            pcStack_100 = (code *)0x102e342dc;
            puStack_120 = puVar1;
            uStack_118 = 0x42000000;
            pcStack_110 = FUN_102e342b8;
            puStack_108 = &UNK_1105da080;
            ppuVar15 = &puStack_120;
            puStack_f8 = puVar14;
            func_0x000107c60bc4();
            func_0x000107c61574(puStack_f8);
            puVar14 = &UNK_1105da0b8;
            func_0x000107c613fc(&UNK_1105da0b8,0x30,7);
            *(undefined8 *)(puVar14 + 0x10) = uVar18;
            *(undefined8 *)(puVar14 + 0x18) = param_4;
            *(long **)(puVar14 + 0x20) = &lStack_d8;
            *(undefined8 **)(puVar14 + 0x28) = &uStack_f0;
            func_0x000107c61174(uVar18);
            func_0x000100d28b54(uStack_130,puStack_138);
            puVar16 = &UNK_1105da0e0;
            func_0x000107c613fc(&UNK_1105da0e0,0x20,7);
            *(undefined8 *)(puVar16 + 0x10) = 0x102e33a80;
            *(undefined **)(puVar16 + 0x18) = puVar14;
            pcStack_100 = FUN_102e33a8c;
            puStack_120 = puVar1;
            uStack_118 = 0x42000000;
            pcStack_110 = (code *)0x102e342c0;
            puStack_108 = &UNK_1105da0f8;
            ppuVar17 = &puStack_120;
            puStack_f8 = puVar16;
            func_0x000107c60bc4(ppuVar17);
            func_0x000107c61574(puStack_f8);
            func_0x000107c4c648(uVar23);
            func_0x000107c60bd0(ppuVar17);
            func_0x000107c60bd0(ppuVar15);
            func_0x000107c60bd0(ppuVar13);
            func_0x000107c61170(uVar23);
            if (lStack_d8 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e32a08);
              (*pcVar3)();
            }
            lVar10 = lStack_d8;
            func_0x000107c61174();
            uVar23 = uVar6;
            lVar20 = lVar10;
            FUN_102e33aac(uVar6,lVar10,param_4);
            func_0x000107c61170(lVar10);
            if (cStack_e0 == -1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e32a04);
              (*pcVar3)();
            }
            uStack_c0 = uStack_f0;
            uStack_b8 = uStack_e8;
            cStack_b0 = cStack_e0;
            uStack_a8 = uVar23;
            lStack_a0 = lVar20;
            FUN_102e33d90();
            func_0x000107c61174(uVar23);
            uVar18 = *param_7;
            func_0x000107c61558(uVar18);
            puStack_120 = (undefined *)*param_7;
            *param_7 = 0x8000000000000000;
            FUN_102e32eb4(&uStack_c0,uVar24,uVar18);
            *param_7 = puStack_120;
            func_0x000107c3e1f4(uVar6);
            if (0.0 < dVar28) {
              uVar24 = uVar23;
              func_0x000107c5e308(uVar23);
              func_0x000107c61180();
              uVar19 = uVar23;
              func_0x000107c44d9c(uVar23);
              func_0x000107c61180();
              func_0x000107c3e1f4(uVar6);
              uVar7 = uVar24;
              func_0x000107c40288(uVar24);
              func_0x000107c61180();
              func_0x000107c61170(uVar24);
              func_0x000107c61170(uVar19);
              func_0x000107c521e8(uVar7);
              func_0x000107c61170(uVar7);
            }
            func_0x000107c3d5b4(lVar5);
            dVar2 = dStack_d0;
            if (cStack_c8 != '\x01') {
              uVar24 = uVar23;
              func_0x000107c5e308(uVar23);
              func_0x000107c61180();
              lVar10 = lVar5;
              func_0x000107c5e308(lVar5);
              func_0x000107c61180();
              uVar19 = uVar24;
              func_0x000107c40288(dVar2,uVar24);
              func_0x000107c61180();
              func_0x000107c61170(uVar24);
              func_0x000107c61170(lVar10);
              dVar28 = (double)(ulong)uStack_c4;
              func_0x000107c5784c(uVar19);
              puStack_120 = (undefined *)CONCAT44(puStack_120._4_4_,0x3f800000);
              func_0x000107c5f174(&uStack_c4,&puStack_120,uVar8,uVar9);
              func_0x000107c521e8(uVar19);
              func_0x000107c61170(uVar19);
            }
            func_0x000107c61170(uVar6);
            func_0x000107c61170(uVar23);
            func_0x000102e33da4(uStack_f0,uStack_e8,cStack_e0);
            func_0x000107c61170(lStack_d8);
            pcStack_158 = FUN_102e33a18;
            uStack_148 = 0x102e33a74;
            uStack_130 = 0x102e33a80;
            puStack_160 = puVar11;
            puStack_150 = puVar12;
            puStack_138 = puVar14;
            break;
          }
          func_0x000107c61170(uVar6);
          uVar23 = uVar23 + 1;
        } while (uVar19 != uVar22);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar21);
  }
  func_0x000107c6142c(lVar26);
  func_0x000100d28b54(pcStack_158,puStack_160);
  func_0x000100d28b54(uStack_148,puStack_150);
  func_0x000100d28b54(uStack_130,puStack_138);
  return lVar5;
}



/* Entry: 102e32a08; end: 102e32a97; -[_TtC41SCLensExplorerDynamicLayoutImplementation30LensExplorerStackLayoutBuilder buildLayout:requiredWidth:styleOverride:attachingToContainer:] */

void FUN_102e32a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_2);
  uVar1 = param_4;
  func_0x000102e31f80(param_1,param_4,param_5,param_6);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e32a98; end: 102e32adb;  */

void FUN_102e32a98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1e5b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ac578;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f1e5b0 = puVar1;
  return;
}



/* Entry: 102e32adc; end: 102e32b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e32adc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_60 = param_2;
    uStack_58 = uVar1;
    func_0x000100087bd4(FUN_102e34278,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102e32b6c; end: 102e32d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e32b6c(ulong *param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *(ulong *)(param_2 + _DAT_112f1e580);
  uVar4 = param_3;
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar8);
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e32cfc);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
        uVar7 = uVar4;
      }
      else {
        uVar3 = uVar10;
        uVar7 = uVar8;
        FUN_102e3690c();
      }
      uVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e32cf8);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c40374();
      func_0x000107c61180();
      uVar5 = uVar4;
      func_0x000107c4abf8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      uVar6 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      if ((uVar6 == param_3) && (uVar7 == param_4)) {
        func_0x000107c6142c(uVar8);
        uVar8 = uVar7;
LAB_102e32cc8:
        func_0x000107c6142c(uVar8);
        goto LAB_102e32ccc;
      }
      uVar4 = uVar7;
      func_0x000107c605b8(uVar6,uVar7,param_3,param_4,0);
      func_0x000107c6142c(uVar7);
      if ((uVar6 & 1) != 0) goto LAB_102e32cc8;
      func_0x000107c61170(uVar3);
      uVar10 = uVar10 + 1;
    } while (uVar1 != uVar9);
  }
  func_0x000107c6142c(uVar8);
  uVar3 = 0;
LAB_102e32ccc:
  *param_1 = uVar3;
  return;
}



/* Entry: 102e32d10; end: 102e32ddb;  */

/* WARNING: Possible PIC construction at 0x000102e32da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e32da8) */
/* WARNING: Removing unreachable block (ram,0x000102e33da4) */
/* WARNING: Removing unreachable block (ram,0x000102e33db4) */
/* WARNING: Removing unreachable block (ram,0x000102e33db0) */
/* WARNING: Removing unreachable block (ram,0x000102e30a54) */
/* WARNING: Removing unreachable block (ram,0x000102e30a64) */
/* WARNING: Removing unreachable block (ram,0x000102e30a60) */

void FUN_102e32d10(double param_1,double param_2,undefined8 param_3,double *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  
  if (*(char *)(param_4 + 1) != '\x01') {
    param_2 = param_1 * *param_4;
  }
  func_0x000107c4e080();
  if (param_8 != 0) {
    param_2 = param_1;
  }
  FUN_102e321d4(param_2,param_3,param_7,param_9,param_10,param_11,param_12);
  uVar1 = *param_5;
  *param_5 = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e32ddc; end: 102e32e5b;  */

/* WARNING: Possible PIC construction at 0x000102e32e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e32e34) */
/* WARNING: Removing unreachable block (ram,0x000102e33da4) */
/* WARNING: Removing unreachable block (ram,0x000102e33db4) */
/* WARNING: Removing unreachable block (ram,0x000102e33db0) */
/* WARNING: Removing unreachable block (ram,0x000102e30a54) */
/* WARNING: Removing unreachable block (ram,0x000102e30a64) */
/* WARNING: Removing unreachable block (ram,0x000102e30a60) */

void FUN_102e32ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_102e33f10(param_1,param_3);
  func_0x000107c5caa4();
  uVar1 = *param_4;
  *param_4 = param_1;
  func_0x000107c61174(2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e32e5c; end: 102e32eb3;  */

/* WARNING: Possible PIC construction at 0x000102e32e90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e32e94) */
/* WARNING: Removing unreachable block (ram,0x000102e33da4) */
/* WARNING: Removing unreachable block (ram,0x000102e33db4) */
/* WARNING: Removing unreachable block (ram,0x000102e33db0) */
/* WARNING: Removing unreachable block (ram,0x000102e30a54) */
/* WARNING: Removing unreachable block (ram,0x000102e30a64) */
/* WARNING: Removing unreachable block (ram,0x000102e30a60) */

void FUN_102e32e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  FUN_102e34064(param_1,param_3);
  uVar1 = *param_4;
  *param_4 = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e32eb4; end: 102e33017;  */

void FUN_102e32eb4(undefined8 *param_1,ulong param_2,uint param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_2;
  func_0x00010035a314();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e32f98);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    param_3 = param_3 & 1;
    FUN_102e3319c(lVar6);
    uVar3 = param_2;
    func_0x00010035a314();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e32f44);
      (*pcVar2)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102e33018();
    lVar6 = *unaff_x20;
    goto joined_r0x000102e32fac;
  }
  lVar6 = *unaff_x20;
joined_r0x000102e32fac:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x28);
    uVar12 = *puVar7;
    uVar14 = puVar7[1];
    uVar10 = puVar7[3];
    puVar7[4] = param_1[4];
    uVar11 = *param_1;
    uVar15 = param_1[3];
    uVar13 = param_1[2];
    uVar1 = *(undefined1 *)(puVar7 + 2);
    puVar7[1] = param_1[1];
    *puVar7 = uVar11;
    puVar7[3] = uVar15;
    puVar7[2] = uVar13;
    func_0x000102e30a54(uVar12,uVar14,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar10);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 8) = param_2;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x28);
  uVar12 = *param_1;
  uVar10 = param_1[3];
  uVar14 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar12;
  puVar7[3] = uVar10;
  puVar7[2] = uVar14;
  puVar7[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e33018);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}



/* Entry: 102e33018; end: 102e3319b;  */

void FUN_102e33018(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  
  func_0x0001000285a8(0x112f1e5b8,&UNK_10db568f0);
  lVar14 = *unaff_x20;
  lVar10 = lVar14;
  func_0x000107c6048c();
  if (*(long *)(lVar14 + 0x10) != 0) {
    lVar1 = lVar14 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar10 != lVar14 || lVar1 + uVar11 * 8 <= lVar10 + 0x40U) {
      func_0x000107c610b8(lVar10 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar14 + 0x40);
    if (uVar11 == 0) goto LAB_102e330f4;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar15 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x38) + uVar13 * 0x28);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar5 = puVar3[3];
        uVar7 = puVar3[4];
        uVar8 = *(undefined1 *)(puVar3 + 2);
        *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar13 * 8) =
             *(undefined8 *)(*(long *)(lVar14 + 0x30) + uVar13 * 8);
        puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar13 * 0x28);
        *puVar3 = uVar4;
        puVar3[1] = uVar6;
        *(undefined1 *)(puVar3 + 2) = uVar8;
        puVar3[3] = uVar5;
        puVar3[4] = uVar7;
        func_0x000102e30a40();
        func_0x000107c61174(uVar5);
        if (uVar11 != 0) break;
LAB_102e330f4:
        do {
          lVar2 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x102e3319c);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar2) goto LAB_102e33174;
          uVar11 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar15 = lVar2;
      }
    } while( true );
  }
LAB_102e33174:
  func_0x000107c61574(lVar14);
  *unaff_x20 = lVar10;
  return;
}



/* Entry: 102e3319c; end: 102e33447;  */

void FUN_102e3319c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *unaff_x20;
  ulong *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  
  lVar20 = *unaff_x20;
  lVar1 = *(long *)(lVar20 + 0x18);
  if (*(long *)(lVar20 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0x112f1e5b8;
  func_0x0001000285a8(0x112f1e5b8,&UNK_10db568f0);
  lVar9 = lVar20;
  func_0x000107c60490(lVar20,lVar1,param_2,uVar8);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_102e33414:
    func_0x000107c61574(lVar20);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar20 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  lVar1 = lVar9 + 0x40;
  lVar12 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar17 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102e33444);
          (*pcVar7)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
            if ((*(byte *)(lVar20 + 0x20) & 0x3f) < 6) {
              *puVar18 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar18,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar20 + 0x10) = 0;
          }
          goto LAB_102e33414;
        }
        uVar19 = puVar18[lVar17];
        lVar12 = lVar12 + 1;
      } while (uVar19 == 0);
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar11 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar17 = lVar12;
    }
    uVar11 = LZCOUNT(uVar11) | lVar17 << 6;
    uVar21 = *(undefined8 *)(*(long *)(lVar20 + 0x30) + uVar11 * 8);
    puVar13 = (undefined8 *)(*(long *)(lVar20 + 0x38) + uVar11 * 0x28);
    uVar8 = *puVar13;
    uVar3 = puVar13[1];
    uVar5 = *(undefined1 *)(puVar13 + 2);
    uVar2 = puVar13[3];
    uVar4 = puVar13[4];
    if ((param_2 & 1) == 0) {
      func_0x000102e30a40(uVar8,uVar3,uVar5);
      func_0x000107c61174(uVar2);
    }
    uVar10 = *(ulong *)(lVar9 + 0x28);
    func_0x000107c60688(uVar10,uVar21);
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar10 >> 6;
    uVar11 = -1L << (uVar10 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar10 = uVar14 + 1;
        if ((uVar10 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102e33448);
          (*pcVar7)();
        }
        uVar14 = 0;
        if (uVar10 != uVar11) {
          uVar14 = uVar10;
        }
        bVar6 = (bool)(uVar10 == uVar11 | bVar6);
        uVar10 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar10 == 0xffffffffffffffff);
      uVar10 = ~uVar10;
      uVar11 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 8) = uVar21;
    puVar13 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar11 * 0x28);
    *puVar13 = uVar8;
    puVar13[1] = uVar3;
    *(undefined1 *)(puVar13 + 2) = uVar5;
    puVar13[3] = uVar2;
    puVar13[4] = uVar4;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar17;
  } while( true );
}



/* Entry: 102e33448; end: 102e33557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102e33448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  lVar2 = _DAT_112f1e570;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112f1e578;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined **)(unaff_x20 + _DAT_112f1e580) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001007b1c78(param_1,unaff_x20 + _DAT_112f1e560);
  *(undefined8 *)(unaff_x20 + _DAT_112f1e568) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar1);
  func_0x000107c61180();
  FUN_102e31af4();
  func_0x000107c61170(puVar4);
  func_0x0001000834e4(param_1);
  return puVar4;
}



/* Entry: 102e33558; end: 102e3366f;  */

double FUN_102e33558(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_2;
  func_0x000107c5b6a8();
  dVar4 = param_1;
  FUN_102e30fb0();
  lVar3 = *(long *)(lVar1 + 0x10);
  func_0x000107c6142c();
  lVar1 = param_2;
  func_0x000107c4e080();
  lVar2 = param_2;
  func_0x000107c4e22c(param_2);
  func_0x000107c61180();
  if (lVar1 == 1) {
    func_0x000107c5cbd8();
    dVar5 = dVar4;
    func_0x000107c61170(lVar2);
    func_0x000107c4e22c(param_2);
    func_0x000107c61180();
    func_0x000107c3ec10();
  }
  else {
    if (lVar1 == 0) {
      func_0x000107c5ba38();
      dVar5 = dVar4;
      func_0x000107c61170(lVar2);
      func_0x000107c4e22c(param_2);
    }
    else {
      func_0x000107c5ba38();
      dVar5 = dVar4;
      func_0x000107c61170(lVar2);
      func_0x000107c4e22c(param_2);
    }
    func_0x000107c61180();
    func_0x000107c427dc();
  }
  func_0x000107c61170(param_2);
  return (param_1 * (double)(lVar3 + -1) + dVar4 + dVar5) * 8.0;
}



/* Entry: 102e33670; end: 102e338bb;  */

undefined8 FUN_102e33670(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  FUN_102e30fb0();
  uVar9 = *(ulong *)(param_1 + 0x10);
  if (uVar9 == 0) {
    func_0x000107c6142c(param_1);
    uVar14 = 0;
  }
  else {
    uVar11 = param_2 & 0xffffffffffffff8;
    if (param_2 >> 0x3e == 0) {
      uVar10 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar10 = uVar11;
      if (0x7fffffffffffffff < param_2) {
        uVar10 = param_2;
      }
      func_0x000107c60480();
    }
    uVar13 = 0;
    uVar14 = 0;
LAB_102e337dc:
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e338a8);
        (*pcVar3)();
      }
      uVar1 = uVar13 + 1;
      if (uVar10 != 0) {
        uVar12 = 0;
        uVar13 = *(ulong *)(param_1 + 0x20 + uVar13 * 8);
        do {
          if ((param_2 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102e338a4);
              (*pcVar3)();
            }
            uVar7 = *(ulong *)(param_2 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar7 = uVar12;
            func_0x000102e3673c(uVar12,param_2);
          }
          uVar2 = uVar12 + 1;
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102e338a0);
            (*pcVar3)();
          }
          uVar8 = uVar7;
          func_0x000107c42468();
          if (uVar8 == uVar13) {
            uVar13 = uVar7;
            uStack_78 = uVar14;
            func_0x000107c4abc0(uVar7);
            func_0x000107c61180();
            puVar4 = &UNK_1105da130;
            func_0x000107c613fc(&UNK_1105da130,0x20,7);
            *(undefined8 **)(puVar4 + 0x10) = &uStack_78;
            *(undefined8 *)(puVar4 + 0x18) = uVar14;
            puVar5 = &UNK_1105da158;
            func_0x000107c613fc(&UNK_1105da158,0x20,7);
            *(code **)(puVar5 + 0x10) = FUN_102e34218;
            *(undefined **)(puVar5 + 0x18) = puVar4;
            uStack_88 = 0x102e342e4;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            pcStack_98 = FUN_102e342b8;
            puStack_90 = &UNK_1105da170;
            ppuVar6 = &puStack_a8;
            puStack_80 = puVar5;
            func_0x000107c60bc4(ppuVar6);
            func_0x000107c61574(puStack_80);
            func_0x000107c4c648(uVar13);
            func_0x000107c61170(uVar7);
            func_0x000107c60bd0(ppuVar6);
            func_0x000107c61574(puVar4);
            func_0x000107c61170(uVar13);
            uVar13 = uVar1;
            uVar14 = uStack_78;
            if (uVar1 == uVar9) goto LAB_102e3385c;
            goto LAB_102e337dc;
          }
          func_0x000107c61170(uVar7);
          uVar12 = uVar12 + 1;
        } while (uVar2 != uVar10);
      }
      uVar13 = uVar1;
    } while (uVar1 != uVar9);
LAB_102e3385c:
    func_0x000107c6142c(param_1);
  }
  return uVar14;
}



/* Entry: 102e338bc; end: 102e338ff;  */

void FUN_102e338bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d7a740 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001013c6c44(0xff);
  puVar2 = PTR___sSo16UILayoutPrioritya5UIKit01_C23NumericRawRepresentableACMc_110351670;
  func_0x000107c61520(PTR___sSo16UILayoutPrioritya5UIKit01_C23NumericRawRepresentableACMc_110351670,
                      uVar1);
  puRam0000000112d7a740 = puVar2;
  return;
}



/* Entry: 102e33900; end: 102e33a17;  */

undefined * FUN_102e33900(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c453e4();
  lVar2 = param_2;
  func_0x000107c4e080(param_2);
  puVar3 = puVar1;
  func_0x000107c52b2c(puVar1,param_3,lVar2 == 1);
  FUN_102e31120();
  func_0x000107c52610(puVar1,param_3,puVar3);
  func_0x000107c5b6a8(param_2);
  param_1 = param_1 * 8.0;
  func_0x000107c59594(param_1,puVar1);
  func_0x000107c4e22c(param_2);
  func_0x000107c61180();
  func_0x000107c5cbd8();
  dVar4 = param_1 * 8.0;
  func_0x000107c5ba38(param_2);
  dVar5 = param_1 * 8.0;
  func_0x000107c3ec10(param_2);
  dVar6 = param_1 * 8.0;
  func_0x000107c427dc(param_2);
  func_0x000107c61170(param_2);
  func_0x000107c61174(puVar1);
  func_0x000107c55b3c(dVar4,dVar5,dVar6,param_1 * 8.0);
  func_0x000107c55b40(puVar1,param_3,1);
  func_0x000107c55424(puVar1,param_3,0);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 102e33a18; end: 102e33a57;  */

void FUN_102e33a18(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102e32d10(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_1,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102e33a58; end: 102e33a8b;  */

void FUN_102e33a58(long param_1,long param_2)

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



/* Entry: 102e33a8c; end: 102e33aab;  */

void FUN_102e33a8c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102e33aac; end: 102e33d8f;  */

undefined1  [16]
FUN_102e33aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  func_0x000107c5a930();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a050();
  if (param_5 == 0) {
    param_7 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
  }
  else {
    lVar5 = param_5;
    func_0x000107c3fdb8(param_5);
    func_0x000102e31180(param_7,lVar5);
  }
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c5a050(param_6);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(param_6);
  func_0x000107c61170(puVar2);
  func_0x000107c3d89c(puVar1);
  FUN_102e3125c();
  uVar3 = param_6;
  func_0x000107c5cbe4(param_6);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5cbe4(puVar1);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40284(param_1,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c521e8(uVar4);
  func_0x000107c61170(uVar4);
  uVar3 = param_6;
  func_0x000107c3ec1c(param_6);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ec1c(puVar1);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40284(param_3,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c521e8(uVar4);
  func_0x000107c61170(uVar4);
  uVar3 = param_6;
  func_0x000107c4acb0(param_6);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4acb0(puVar1);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40284(param_2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c521e8(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c5ce8c(param_6);
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ce8c(puVar1);
  func_0x000107c61180();
  uVar3 = param_6;
  func_0x000107c40284(param_4,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_6);
  func_0x000107c61170(puVar2);
  func_0x000107c521e8(uVar3);
  func_0x000107c61170(uVar3);
  if (param_5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_5;
    func_0x000107c5a928(param_5);
    func_0x000107c61170(param_5);
  }
  auVar6._8_8_ = lVar5;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 102e33d90; end: 102e33db7;  */

void FUN_102e33d90(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 == 0xff) {
    return;
  }
  if (param_3 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 102e33db8; end: 102e33f0f;  */

undefined * FUN_102e33db8(long param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  if (puVar14 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar6 = 0;
  func_0x0001000285a8(0x112f1e5b8);
  puVar4 = puVar14;
  func_0x000107c60498();
  uVar12 = *(ulong *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x30);
  uVar2 = *(undefined1 *)(param_1 + 0x38);
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = uVar12;
  func_0x00010035a314();
  if ((uVar6 & 1) == 0) {
    puVar13 = (undefined8 *)(param_1 + 0x78);
    do {
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar6 + 0x40) = *(ulong *)(puVar4 + uVar6 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar12;
      puVar7 = (undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 0x28);
      *puVar7 = uVar8;
      puVar7[1] = uVar10;
      *(undefined1 *)(puVar7 + 2) = uVar2;
      puVar7[3] = uVar15;
      puVar7[4] = uVar9;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e33f10);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      func_0x000102e30a40(uVar8,uVar10,uVar2);
      puVar14 = puVar14 + -1;
      if (puVar14 == (undefined *)0x0) {
        func_0x000107c61174(uVar15);
        return puVar4;
      }
      uVar12 = puVar13[-5];
      uVar8 = puVar13[-4];
      uVar11 = puVar13[-3];
      uVar2 = *(undefined1 *)(puVar13 + -2);
      uVar1 = puVar13[-1];
      uVar9 = *puVar13;
      func_0x000107c61174(uVar15);
      uVar5 = uVar12;
      func_0x00010035a314();
      uVar6 = uVar10 & 1;
      uVar10 = uVar11;
      puVar13 = puVar13 + 6;
      uVar15 = uVar1;
    } while (uVar6 == 0);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e33ed4);
  (*pcVar3)();
}



/* Entry: 102e33f10; end: 102e34063;  */

undefined * FUN_102e33f10(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c53840(puVar1);
  lVar2 = param_2;
  func_0x000107c5caa4();
  if (lVar2 != 0) {
    lVar2 = param_2;
    func_0x000107c5caa4(param_2);
    func_0x000102e31180(param_3,lVar2);
    func_0x000107c59e10(puVar1);
    func_0x000107c61170(param_3);
  }
  func_0x000107c5b08c(param_2);
  puVar3 = puVar1;
  if (0.0 < param_1) {
    func_0x000107c5b08c(param_2);
    func_0x000107c44d9c(puVar1);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40290(param_1 * 8.0);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c521e8(puVar4);
    func_0x000107c61170(puVar4);
    puVar4 = puVar1;
    func_0x000107c5e308(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar3 = puVar4;
    func_0x000107c40290(param_1 * 8.0,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c521e8(puVar3);
  }
  func_0x000107c61170(puVar3);
  return puVar1;
}



/* Entry: 102e34064; end: 102e34217;  */

undefined * FUN_102e34064(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c3db0c();
  func_0x000107c59c74(puVar1);
  func_0x000107c4b654(param_1);
  func_0x000107c56ba8(puVar1);
  func_0x000107c5c224();
  func_0x000107c5a100(puVar1);
  func_0x000107c5c838();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5381c(0x43790000,puVar1);
  func_0x000107c5381c(0x43790000,puVar1);
  func_0x000107c537fc(0x443b4000,puVar1);
  func_0x000107c537fc(0x443b4000,puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 102e34218; end: 102e34253;  */

void FUN_102e34218(double param_1)

{
  double *pdVar1;
  long unaff_x20;
  double dVar2;
  
  pdVar1 = *(double **)(unaff_x20 + 0x10);
  dVar2 = *(double *)(unaff_x20 + 0x18);
  func_0x000107c5b08c();
  *pdVar1 = dVar2 + param_1 * 8.0;
  return;
}



/* Entry: 102e34254; end: 102e3426f;  */

void FUN_102e34254(void)

{
  long unaff_x20;
  
  FUN_102e32b6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102e34270; end: 102e34277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e34270(undefined8 *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lStack_60 = lVar1;
    uStack_58 = uVar2;
    func_0x000100087bd4(FUN_102e34278,auStack_70,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar1);
  }
  return;
}


