/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101cfa9ac; end: 101cfad4f;  */

void FUN_101cfa9ac(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  uint5 uVar5;
  long lVar6;
  undefined *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  long *plVar17;
  ulong uVar18;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  if (lVar2 != 1) {
    if (lVar2 != 0) {
      uVar5 = *(uint5 *)(unaff_x22 + 0x80);
      uVar18 = (ulong)uVar5;
      uVar14 = *(ulong *)(unaff_x22 + 0x130);
      lVar6 = *(long *)(*(long *)(unaff_x22 + 0xf0) + 0x28);
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar16;
      func_0x000107c6157c();
      puVar7 = PTR___ss6UInt64VN_11034f048;
      puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c();
      lVar13 = 0x112e1d080;
      func_0x0001000285a8(0x112e1d080,&UNK_10d9fe608);
      func_0x000107c613fc();
      *(undefined8 *)(lVar13 + 0x10) = uVar16;
      *(long *)(lVar13 + 0x18) = lVar2;
      *(int *)(lVar13 + 0x20) = (int)uVar5;
      uVar4 = (undefined1)(uVar5 >> 0x20);
      *(undefined1 *)(lVar13 + 0x24) = uVar4;
      uVar12 = *(undefined8 *)(lVar6 + 0x10);
      puVar8 = (ulong *)0x112e1cf90;
      func_0x0001000285a8(0x112e1cf90,&UNK_10d9fe510);
      puVar9 = puVar8;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)
               ((long)puVar9 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar9) + 0x68))
      ;
      *puVar1 = puVar7;
      puVar1[1] = puVar11;
      FUN_101cfbbe0(uVar16,lVar2,uVar18);
      FUN_101cfbbe0(uVar16,lVar2,uVar18);
      plVar17 = (long *)(unaff_x22 + 0x98);
      *plVar17 = (long)puVar9;
      *(ulong **)(unaff_x22 + 0xa0) = puVar8;
      puVar7 = PTR_s_init_1125d9248;
      func_0x000107c61434(puVar11);
      func_0x000107c61154(plVar17,puVar7);
      func_0x000107c56bcc(uVar12);
      func_0x000107c61170(plVar17);
      func_0x000107c61574(lVar13);
      func_0x000101cfbbf4(uVar16,lVar2,uVar18);
      func_0x000107c6142c(puVar11);
      func_0x000107c61574(lVar6);
      *(undefined8 *)(unaff_x22 + 0xb8) = 0;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xc0));
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x800000010f00c210;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar16;
      puVar7 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
      func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                          PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xb0));
      func_0x000107c61558();
      uVar18 = *(ulong *)(unaff_x22 + 0x130);
      if ((uVar14 & 1) == 0) {
        plVar17 = (long *)(uVar18 + 0x10);
        uVar18 = 0;
        FUN_101cfbd30(0,*plVar17 + 1,1);
      }
      uVar14 = *(ulong *)(uVar18 + 0x10);
      if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar14) {
        uVar18 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
        FUN_101cfbd30(uVar18,uVar14 + 1,1);
      }
      *(ulong *)(uVar18 + 0x10) = uVar14 + 1;
      lVar13 = uVar18 + uVar14 * 0x18;
      *(undefined8 *)(lVar13 + 0x20) = uVar16;
      *(long *)(lVar13 + 0x28) = lVar2;
      *(int *)(lVar13 + 0x30) = (int)uVar5;
      *(undefined1 *)(lVar13 + 0x34) = uVar4;
      *(ulong *)(unaff_x22 + 0x130) = uVar18;
    }
    plVar17 = (long *)(ulong)*(uint *)(PTR___sScg8IteratorV4nextxSgyYaKFTu_11034fe80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x138) = plVar17;
    *plVar17 = unaff_x22;
    plVar17[1] = (long)FUN_101cfa950;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg8IteratorV4nextxSgyYaKF_11034fe78)
              (plVar17,(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x118));
    return;
  }
  puVar10 = *(undefined1 **)(unaff_x22 + 0x128);
  lVar2 = *(long *)(unaff_x22 + 0x130);
  (**(code **)(*(long *)(unaff_x22 + 0x120) + 8))(puVar10,*(undefined8 *)(unaff_x22 + 0x118));
  uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
  if (*(long *)(lVar2 + 0x10) == 0) {
    FUN_101cf8454();
    func_0x000107c613f8(&UNK_1106bf798,puVar10,0,0);
    *puVar10 = 0;
    func_0x000107c61654();
    func_0x000107c6142c(uVar16);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x128));
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x110);
    func_0x000107c6142c(uVar16);
    func_0x000107c615c0(uVar15);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101cfad14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101cfad50; end: 101cfadb7;  */

void FUN_101cfad50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  (**(code **)(*(long *)(unaff_x22 + 0x120) + 8))
            (*(undefined8 *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101cfadb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cfadb8; end: 101cfadd3;  */

void FUN_101cfadb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfadd4,0,0);
  return;
}



/* Entry: 101cfadd4; end: 101cfae4b;  */

/* WARNING: Removing unreachable block (ram,0x000101cfadf8) */

void FUN_101cfadd4(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c5fd64();
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZTu_11034fe28 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101cfae4c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5yieldyyYaFZ_11034fe20)();
  return;
}



/* Entry: 101cfae4c; end: 101cfae93;  */

void FUN_101cfae4c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfae94,0,0);
  return;
}



/* Entry: 101cfae94; end: 101cfaf13;  */

void FUN_101cfae94(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101cfaf14;
                    /* WARNING: Could not recover jumptable at 0x000101cfaf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x48),uVar2,lVar3);
  return;
}



/* Entry: 101cfaf14; end: 101cfaf67;  */

void FUN_101cfaf14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x60) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfaf68,0,0);
  return;
}



/* Entry: 101cfaf68; end: 101cfb03b;  */

void FUN_101cfaf68(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  if (lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
    puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(0x800000010f00c230);
    lVar2 = *(long *)(unaff_x22 + 0x60);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x38);
  *puVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3[1] = lVar2;
  *(int *)(puVar3 + 2) = (int)uVar4;
  *(char *)((long)puVar3 + 0x14) = (char)((ulong)uVar4 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x000101cfb038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cfb03c; end: 101cfb053;  */

void FUN_101cfb03c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfb054,0,0);
  return;
}



/* Entry: 101cfb054; end: 101cfb257;  */

void FUN_101cfb054(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x38);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c6157c(lVar7);
  puVar2 = PTR___ss6UInt64VN_11034f048;
  puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar9 = *(long *)(lVar7 + 0x10);
  puVar3 = (ulong *)0x112e1cf78;
  func_0x0001000285a8(0x112e1cf78,&UNK_10d9fe4c0);
  puVar4 = puVar3;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)
           ((long)puVar4 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar4) + 0x68));
  *puVar1 = puVar2;
  puVar1[1] = puVar6;
  plVar8 = (long *)(unaff_x22 + 0x10);
  *plVar8 = (long)puVar4;
  *(ulong **)(unaff_x22 + 0x18) = puVar3;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(puVar6);
  func_0x000107c61154(plVar8,puVar2);
  func_0x000107c4d9c0();
  func_0x000107c61180();
  func_0x000107c61170(plVar8);
  if (lVar9 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(lVar9 + 0x10);
    func_0x000107c61174(uVar5);
    func_0x000107c61574(lVar9);
    func_0x000107c61574(lVar7);
    func_0x000107c6142c(puVar6);
    func_0x000107c602fc(0x31);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
    puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar2);
    func_0x000107c6142c(0x800000010f00c1b0);
    uVar10 = uVar5;
    func_0x000107c5cd58(uVar5);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101cfb204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar10);
    return;
  }
  func_0x000107c61574(lVar7);
  func_0x000107c6142c(puVar6);
  plVar8 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101cfb258;
  lVar9 = *(long *)(unaff_x22 + 0x38);
  plVar8[10] = *(long *)(unaff_x22 + 0x30);
  plVar8[0xb] = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf7f44,0,0);
  return;
}



/* Entry: 101cfb258; end: 101cfb2c3;  */

void FUN_101cfb258(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x50) = param_1;
    pcVar1 = FUN_101cfb2c4;
  }
  else {
    pcVar1 = FUN_101cfb358;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101cfb2c4; end: 101cfb357;  */

void FUN_101cfb2c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = uVar3;
  func_0x000107c5cd58(uVar3);
  func_0x000107c61180();
  FUN_101cfb3c8();
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x000107c5cd58(uVar3);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101cfb354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 101cfb358; end: 101cfb3c7;  */

void FUN_101cfb358(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_101cf8454();
  func_0x000107c613f8(&UNK_1106bf798,param_1,0,0);
  *param_1 = 0x41;
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101cfb3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101cfb3c8; end: 101cfb5bb;  */

void FUN_101cfb3c8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  ulong *puStack_70;
  ulong *puStack_68;
  
  uVar12 = param_1;
  func_0x000107c5cd58();
  func_0x000107c61180();
  uVar3 = uVar12;
  func_0x000107c5cda4();
  func_0x000107c61180();
  func_0x000107c61170(uVar12);
  func_0x000107c2bb50();
  func_0x000107c61170(uVar3);
  lVar11 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c6157c(lVar11);
  puVar10 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  puVar2 = PTR___ss6UInt64VN_11034f048;
  puVar4 = PTR___ss6UInt64VN_11034f048;
  puVar9 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c();
  lVar5 = 0x112e1d070;
  func_0x0001000285a8(0x112e1d070,&UNK_10d9fe5e0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_1;
  uVar12 = *(undefined8 *)(lVar11 + 0x10);
  puVar6 = (ulong *)0x112e1cf78;
  func_0x0001000285a8(0x112e1cf78,&UNK_10d9fe4c0);
  puVar7 = puVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)
           ((long)puVar7 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar7) + 0x68));
  *puVar1 = puVar4;
  puVar1[1] = puVar9;
  puVar4 = PTR_s_init_1125d9248;
  puStack_70 = puVar7;
  puStack_68 = puVar6;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(puVar9);
  ppuVar8 = &puStack_70;
  func_0x000107c61154(ppuVar8,puVar4);
  func_0x000107c56bcc(uVar12);
  func_0x000107c61574(lVar11);
  func_0x000107c6142c(puVar9);
  func_0x000107c61170(param_1);
  func_0x000107c61574(lVar5);
  func_0x000107c61170(ppuVar8);
  func_0x000107c602fc(0x23);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c6057c(puVar2,puVar10);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar10);
  func_0x000107c6142c(0x800000010f00c1e0);
  return;
}



/* Entry: 101cfb5bc; end: 101cfb607;  */

void FUN_101cfb5bc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfb608; end: 101cfb653;  */

void FUN_101cfb608(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101cfb654;
  plVar1[8] = param_1;
  plVar1[9] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf877c,0,0);
  return;
}



/* Entry: 101cfb654; end: 101cfb69b;  */

void FUN_101cfb654(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101cfb698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101cfb69c; end: 101cfb6e7;  */

void FUN_101cfb69c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101cfb6e8;
  plVar1[0x10] = param_1;
  plVar1[0x11] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf9adc,0,0);
  return;
}



/* Entry: 101cfb6e8; end: 101cfb757;  */

void FUN_101cfb6e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101cfb754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101cfb758; end: 101cfb7a3;  */

void FUN_101cfb758(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101cfc2b0;
  plVar1[6] = param_1;
  plVar1[7] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfb054,0,0);
  return;
}



/* Entry: 101cfb7a4; end: 101cfb7ef;  */

void FUN_101cfb7a4(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101cfc2b4;
  plVar1[10] = param_1;
  plVar1[0xb] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf7f44,0,0);
  return;
}



/* Entry: 101cfb7f0; end: 101cfb83b;  */

void FUN_101cfb7f0(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101cfc2ac;
  plVar1[0x2a] = param_1;
  plVar1[0x2b] = (long)unaff_x20;
  plVar1[0x2c] = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf8bdc,0,0);
  return;
}



/* Entry: 101cfb83c; end: 101cfb887;  */

void FUN_101cfb83c(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101cfb888;
  plVar1[0x2e] = param_1;
  plVar1[0x2f] = (long)unaff_x20;
  plVar1[0x30] = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfa0c4,0,0);
  return;
}



/* Entry: 101cfb888; end: 101cfb8c3;  */

void FUN_101cfb888(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101cfb8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101cfb8c4; end: 101cfb8db;  */

void FUN_101cfb8c4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfb8dc,0,0);
  return;
}



/* Entry: 101cfb8dc; end: 101cfb9a3;  */

void FUN_101cfb8dc(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101cfb924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101cfb9a4;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110470cc8;
  func_0x000107c613fc(&UNK_110470cc8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,FUN_101cfc24c,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101cfb9a4; end: 101cfb9e3;  */

void FUN_101cfb9a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfb9e4,0,0);
  return;
}



/* Entry: 101cfb9e4; end: 101cfba07;  */

void FUN_101cfb9e4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101cfb9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101cfba08; end: 101cfba87;  */

void FUN_101cfba08(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101cfc2b8;
  plVar6[0x10] = lVar1;
  plVar6[0x11] = lVar3;
  plVar6[0xe] = lVar7;
  plVar6[0xf] = lVar2;
  plVar6[0xd] = param_2;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar5;
  lVar7 = 0x112e1d090;
  func_0x0001000285a8(0x112e1d090,&UNK_10d9fe618);
  plVar6[0x14] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x15] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x16] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf913c,0,0);
  return;
}



/* Entry: 101cfba88; end: 101cfbb07;  */

void FUN_101cfba88(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x101cfc2bc;
  plVar6[0x1f] = lVar1;
  plVar6[0x20] = lVar3;
  plVar6[0x1d] = lVar7;
  plVar6[0x1e] = lVar2;
  plVar6[0x1c] = param_2;
  lVar7 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar5 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x21] = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x22] = uVar5;
  lVar7 = 0x112e1d078;
  func_0x0001000285a8(0x112e1d078,&UNK_10d9fe5f0);
  plVar6[0x23] = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  plVar6[0x24] = lVar7;
  uVar5 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x25] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfa5d8,0,0);
  return;
}



/* Entry: 101cfbb08; end: 101cfbb27;  */

void FUN_101cfbb08(void)

{
  func_0x000107c61168(&PTR_PTR_112e1cfe8);
  return;
}



/* Entry: 101cfbb28; end: 101cfbba3;  */

void FUN_101cfbb28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101cfbba4;
  plVar3[8] = unaff_x20 + 0x20;
  plVar3[9] = lVar1;
  plVar3[7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cfadd4,0,0,unaff_x20 + 0x20,lVar1,uVar2);
  return;
}



/* Entry: 101cfbba4; end: 101cfbbdf;  */

void FUN_101cfbba4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101cfbbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101cfbbe0; end: 101cfbc07;  */

void FUN_101cfbbe0(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 101cfbc08; end: 101cfbd2f;  */

ulong FUN_101cfbc08(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cfbd30);
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
  FUN_101cfbec8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101cfbd2c);
      (*pcVar1)();
    }
    FUN_101cfbf48(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101cfbd30; end: 101cfbe47;  */

undefined * FUN_101cfbd30(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101cfbe48);
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
    puVar2 = (undefined *)0x112e1d088;
    func_0x0001000285a8(0x112e1d088,&UNK_10d9fe610);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_11072d6f8);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 101cfbe48; end: 101cfbec7;  */

void FUN_101cfbe48(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101cfc2c0;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
  plVar3[4] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101cf97d4,0,0,lVar1,lVar2,uVar4);
  return;
}



/* Entry: 101cfbec8; end: 101cfbf47;  */

undefined * FUN_101cfbec8(undefined *param_1,undefined *param_2)

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
    func_0x000101cfc084();
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



/* Entry: 101cfbf48; end: 101cfc03f;  */

long FUN_101cfbf48(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101cfc03c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101cfc040);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101cfc040(0);
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
      FUN_101cfc040(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101cfc038);
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



/* Entry: 101cfc040; end: 101cfc0df;  */

void FUN_101cfc040(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e1d098 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c3928;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e1d098 = puVar1;
  return;
}



/* Entry: 101cfc0e0; end: 101cfc24b;  */

void FUN_101cfc0e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,ulong *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong *puStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  
  ppuVar4 = &puStack_70;
  if (param_1 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x0001000285a8(param_6,param_7);
    puVar3 = param_6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)
             ((long)puVar3 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x68));
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar2 = PTR_s_init_1125d9248;
    puStack_60 = puVar3;
    puStack_58 = param_6;
    func_0x000107c61434(param_3);
    ppuVar4 = &puStack_60;
    func_0x000107c61154(ppuVar4,puVar2);
    func_0x000107c4ff88(uVar5);
  }
  else {
    func_0x0001000285a8(param_4,param_5);
    func_0x000107c613fc();
    *(long *)(param_4 + 0x10) = param_1;
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x0001000285a8(param_6,param_7);
    puVar3 = param_6;
    func_0x000107c610f8();
    puVar1 = (undefined8 *)
             ((long)puVar3 + *(long *)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x68));
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar2 = PTR_s_init_1125d9248;
    puStack_70 = puVar3;
    puStack_68 = param_6;
    func_0x000107c61174(param_1);
    func_0x000107c61434(param_3);
    func_0x000107c61154(&puStack_70,puVar2);
    func_0x000107c56bcc(uVar5);
    func_0x000107c61170(param_1);
    func_0x000107c61574(param_4);
  }
  func_0x000107c61170(ppuVar4);
  return;
}



/* Entry: 101cfc24c; end: 101cfc297;  */

void FUN_101cfc24c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101cfc298(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101cfc298; end: 101cfc2c3;  */

void FUN_101cfc298(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101cfc2c4; end: 101cfc2e7;  */

void FUN_101cfc2c4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfc2e8; end: 101cfc2f3;  */

/* WARNING: Possible PIC construction at 0x000101cfc3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cfc3d0) */

void FUN_101cfc2e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (*(code *)&UNK_105830388)(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cfc2f4; end: 101cfc367;  */

/* WARNING: Possible PIC construction at 0x000101cfc34c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cfc350) */

void FUN_101cfc2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x0001058305b8(uVar1,param_1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cfc368; end: 101cfc373;  */

/* WARNING: Possible PIC construction at 0x000101cfc3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cfc3d0) */

void FUN_101cfc368(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (*(code *)&UNK_1058307e8)(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cfc374; end: 101cfc3e7;  */

/* WARNING: Possible PIC construction at 0x000101cfc3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101cfc3d0) */

void FUN_101cfc374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  (*param_7)(uVar1,param_1,param_3,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101cfc3e8; end: 101cfc427;  */

void FUN_101cfc3e8(void)

{
  func_0x000107c61168(&PTR_PTR_112e1d0f0);
  return;
}



/* Entry: 101cfc428; end: 101cfc48f;  */

void FUN_101cfc428(void)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e1d150,&UNK_10d9fe6b0);
  func_0x000107c613fc();
  pcVar1 = FUN_101cfc490;
  func_0x0001000bdd8c(FUN_101cfc490,0);
  func_0x0001002882fc(0);
  func_0x000107c610f8();
  func_0x000101cfc630(pcVar1);
  return;
}



/* Entry: 101cfc490; end: 101cfc4f3;  */

void FUN_101cfc490(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  FUN_101cfc3e8();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126a9198;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110470d68;
  *param_1 = lVar2;
  return;
}



/* Entry: 101cfc4f4; end: 101cfc503;  */

void FUN_101cfc4f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfc504; end: 101cfc56f;  */

void FUN_101cfc504(undefined8 param_1)

{
  if (lRam0000000112e1d180 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6874bc);
  return;
}



/* Entry: 101cfc570; end: 101cfc67b;  */

void FUN_101cfc570(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e1d150,&UNK_10d9fe6b0);
  func_0x000107c613fc();
  pcVar1 = FUN_101cfc490;
  func_0x0001000bdd8c(FUN_101cfc490,0);
  uVar2 = 0;
  func_0x0001002882fc(0);
  func_0x000107c610f8();
  func_0x000101cfc630(pcVar1,uVar2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101cfc67c; end: 101cfc6db; -[SCLensMediaShufflerLoggingServices init] */

void FUN_101cfc67c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensMediaShufflerLoggingServices.LensMediaShufflerLoggingServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cfc6a8);
  (*pcVar1)();
}



/* Entry: 101cfc6dc; end: 101cfc6eb; -[SCLensMediaShufflerLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfc6dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e1d220));
  return;
}



/* Entry: 101cfc6ec; end: 101cfc757; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl41LensRemoteApiAsyncTaskCompletionAnnouncer notifyAsyncTaskCompletedWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfc6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101cfc758; end: 101cfc78b;  */

void FUN_101cfc758(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101cfc78c; end: 101cfc79b; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl41LensRemoteApiAsyncTaskCompletionAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfc78c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e1d258));
  return;
}



/* Entry: 101cfc79c; end: 101cfc7bb;  */

void FUN_101cfc79c(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 101cfc7bc; end: 101cfc7cb;  */

void FUN_101cfc7bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfc7cc; end: 101cfc7ef;  */

void FUN_101cfc7cc(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010068384c();
  *param_1 = param_2;
  return;
}



/* Entry: 101cfc7f0; end: 101cfc85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfc7f0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101cfd0b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e1d418) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101cfc860; end: 101cfc86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfc860(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101cfd0b8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e1d418) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101cfc870; end: 101cfcc6b;  */

long FUN_101cfc870(long param_1)

{
  ulong *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  long lVar12;
  long unaff_x20;
  long lVar13;
  byte *pbStack_50;
  ulong uStack_48;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101cfcc6c);
    (*pcVar5)();
  }
  lVar13 = param_1;
  func_0x000107c4e33c();
  func_0x000107c61180();
  lVar12 = lVar13;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar13);
  if (*(long *)(lVar12 + 0x10) == 0) {
    func_0x000107c6142c(lVar12);
  }
  else {
    lVar13 = *(long *)(unaff_x20 + 0x18);
    uVar7 = *(ulong *)(unaff_x20 + 0x20);
    func_0x000107c61434(lVar12);
    func_0x000100029284();
    if ((uVar7 & 1) == 0) {
      func_0x000107c61430(lVar12,2);
    }
    else {
      puVar1 = (ulong *)(*(long *)(lVar12 + 0x38) + lVar13 * 0x10);
      pbVar10 = (byte *)*puVar1;
      pbVar4 = (byte *)puVar1[1];
      func_0x000107c61434(pbVar4);
      func_0x000107c61430(lVar12,2);
      pbVar8 = (byte *)((ulong)pbVar10 & 0xffffffffffff);
      pbVar9 = (byte *)((ulong)pbVar4 >> 0x38 & 0xf);
      pbVar3 = pbVar8;
      if (((ulong)pbVar4 & 0x2000000000000000) != 0) {
        pbVar3 = pbVar9;
      }
      if (pbVar3 == (byte *)0x0) {
        func_0x000107c6142c(pbVar4);
      }
      else {
        if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
          if (((ulong)pbVar4 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar10 >> 0x3c & 1) == 0) {
              pbVar8 = pbVar4;
              func_0x000107c60358();
            }
            else {
              pbVar10 = (byte *)(((ulong)pbVar4 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar10 == 0x2b) {
              if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101cfcc64);
                (*pcVar5)();
              }
              pbVar8 = pbVar8 + -1;
              if (pbVar8 != (byte *)0x0) {
                lVar13 = 0;
                do {
                  pbVar10 = pbVar10 + 1;
                  if (((9 < *pbVar10 - 0x30) ||
                      (lVar12 = lVar13 * 10,
                      SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar7 = (ulong)(byte)(*pbVar10 - 0x30), lVar13 = lVar12 + uVar7,
                     SCARRY8(lVar12,uVar7))) break;
                  pbVar8 = pbVar8 + -1;
                } while (pbVar8 != (byte *)0x0);
              }
            }
            else if (*pbVar10 == 0x2d) {
              if ((long)pbVar8 < 1) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101cfcc5c);
                (*pcVar5)();
              }
              pbVar8 = pbVar8 + -1;
              if (pbVar8 != (byte *)0x0) {
                lVar13 = 0;
                while( true ) {
                  pbVar10 = pbVar10 + 1;
                  if ((9 < *pbVar10 - 0x30) ||
                     (lVar12 = lVar13 * 10,
                     SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar12 >> 0x3f)) break;
                  uVar7 = (ulong)(byte)(*pbVar10 - 0x30);
                  lVar13 = lVar12 - uVar7;
                  if ((SBORROW8(lVar12,uVar7)) || (pbVar8 = pbVar8 + -1, pbVar8 == (byte *)0x0))
                  break;
                }
              }
            }
            else if (pbVar8 != (byte *)0x0) {
              lVar13 = 0;
              pbVar3 = pbVar10;
              while (pbVar3 != (byte *)0x0) {
                if (((9 < *pbVar10 - 0x30) ||
                    (lVar12 = lVar13 * 10, SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar12 >> 0x3f
                    )) || (uVar7 = (ulong)(byte)(*pbVar10 - 0x30), lVar13 = lVar12 + uVar7,
                          SCARRY8(lVar12,uVar7))) break;
                pbVar8 = pbVar8 + -1;
                pbVar10 = pbVar10 + 1;
                pbVar3 = pbVar8;
              }
            }
          }
          else {
            pbStack_50 = pbVar10;
            uStack_48 = (ulong)pbVar4 & 0xffffffffffffff;
            uVar2 = (uint)pbVar10 & 0xff;
            if (uVar2 == 0x2b) {
              if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101cfcc68);
                (*pcVar5)();
              }
              pbVar9 = pbVar9 + -1;
              if (pbVar9 != (byte *)0x0) {
                lVar13 = 0;
                pbVar10 = (byte *)((ulong)&pbStack_50 | 1);
                do {
                  if (((9 < *pbVar10 - 0x30) ||
                      (lVar12 = lVar13 * 10,
                      SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar7 = (ulong)(byte)(*pbVar10 - 0x30), lVar13 = lVar12 + uVar7,
                     SCARRY8(lVar12,uVar7))) break;
                  pbVar9 = pbVar9 + -1;
                  pbVar10 = pbVar10 + 1;
                } while (pbVar9 != (byte *)0x0);
              }
            }
            else if (uVar2 == 0x2d) {
              if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101cfcc60);
                (*pcVar5)();
              }
              pbVar9 = pbVar9 + -1;
              if (pbVar9 != (byte *)0x0) {
                lVar13 = 0;
                pbVar10 = (byte *)((ulong)&pbStack_50 | 1);
                while( true ) {
                  if ((9 < *pbVar10 - 0x30) ||
                     (lVar12 = lVar13 * 10,
                     SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar12 >> 0x3f)) break;
                  uVar7 = (ulong)(byte)(*pbVar10 - 0x30);
                  lVar13 = lVar12 - uVar7;
                  if ((SBORROW8(lVar12,uVar7)) ||
                     (pbVar9 = pbVar9 + -1, pbVar10 = pbVar10 + 1, pbVar9 == (byte *)0x0)) break;
                }
              }
            }
            else if (pbVar9 != (byte *)0x0) {
              lVar13 = 0;
              ppbVar11 = &pbStack_50;
              while( true ) {
                if ((9 < *(byte *)ppbVar11 - 0x30) ||
                   (lVar12 = lVar13 * 10, SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar12 >> 0x3f)
                   ) break;
                uVar7 = (ulong)(byte)(*(byte *)ppbVar11 - 0x30);
                lVar13 = lVar12 + uVar7;
                if ((SCARRY8(lVar12,uVar7)) ||
                   (pbVar9 = pbVar9 + -1, ppbVar11 = (byte **)((long)ppbVar11 + 1),
                   pbVar9 == (byte *)0x0)) break;
              }
            }
          }
        }
        else {
          func_0x000100edba6c(pbVar10,pbVar4,10);
        }
        func_0x000107c6142c(pbVar4);
      }
    }
  }
  puVar6 = PTR_PTR_1126a91a0;
  func_0x000107c610f8(PTR_PTR_1126a91a0);
  func_0x000107c489cc();
  lVar13 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar13 != 0) {
    func_0x000107c4d874();
    func_0x000107c615e8(lVar13);
  }
  FUN_101cfcd18(param_1,1,0);
  func_0x000107c61170(puVar6);
  return param_1;
}



/* Entry: 101cfcc6c; end: 101cfccc7; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl29LensRemoteApiAsyncTaskHandler handleRequest:] */

void FUN_101cfcc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_101cfc870(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101cfccc8; end: 101cfcccb; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl29LensRemoteApiAsyncTaskHandler reset] */

void FUN_101cfccc8(void)

{
  return;
}



/* Entry: 101cfcccc; end: 101cfcd17;  */

void FUN_101cfcccc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfcd18; end: 101cfcfdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101cfcd18(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined8 *puStack_80;
  long alStack_78 [4];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_3 == 0) {
    alStack_78[0] = 0;
    uVar7 = 0;
    alStack_78[1] = 0;
    alStack_78[2] = 0;
  }
  else {
    uVar7 = 0x112d550a0;
    func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
    alStack_78[0] = param_3;
  }
  puVar6 = auStack_b8;
  alStack_78[3] = uVar7;
  func_0x000100672b50(alStack_78,puVar6);
  if (lStack_a0 == 0) {
    func_0x000107c61434(param_3);
    func_0x00010006e7f4(auStack_b8);
    puVar5 = (undefined *)0x0;
    puVar8 = (undefined8 *)0xf000000000000000;
  }
  else {
    func_0x000100102924(auStack_b8,auStack_98);
    puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar1 = auStack_98;
    func_0x0001006732c8(puVar1,puStack_80);
    func_0x000107c61434(param_3);
    func_0x000107c605b0(puVar1);
    auStack_b8[0] = 0;
    func_0x000107c41300();
    func_0x000107c61180();
    func_0x000107c615e8(puVar1);
    uVar7 = auStack_b8[0];
    func_0x000107c61174(auStack_b8[0]);
    if (puVar9 == (undefined *)0x0) {
      uVar2 = uVar7;
      func_0x000107c5ed30();
      func_0x000107c61170(uVar7);
      func_0x000107c61654();
      func_0x000107c614ac(uVar2);
      puVar5 = (undefined *)0x0;
      puVar8 = (undefined8 *)0xf000000000000000;
      puVar6 = puStack_80;
    }
    else {
      puVar5 = puVar9;
      puVar8 = puStack_80;
      func_0x000107c5ee30();
      puVar6 = puVar8;
      func_0x000107c61170(puVar9);
    }
    func_0x000100183ab8(auStack_98);
  }
  func_0x00010006e7f4(alStack_78);
  func_0x000107c50374();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar6);
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000100de78a0(puVar5,puVar8);
  puVar3 = puVar9;
  func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar9);
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    puVar9 = puVar5;
    func_0x000107c5ee20(puVar5,puVar8);
    func_0x0001000b44c0(puVar5,puVar8);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  puVar4 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar9);
  puVar9 = PTR_PTR_1126ae6b8;
  func_0x000107c61168();
  puVar3 = puVar4;
  func_0x000107c4a8a4();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  func_0x0001000b44c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  func_0x000107c60e78();
  func_0x000107c5faec();
  uVar7 = *(undefined8 *)(puVar5 + _DAT_112e1d418);
  puVar5 = (undefined *)0x0;
  func_0x000101cfccf8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined8 **)(puVar5 + 0x20) = puVar8;
  func_0x000107c61174(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return puVar5;
}



/* Entry: 101cfcfe0; end: 101cfd04b; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl40LensRemoteApiAsyncTaskHandlerFactoryImpl createHandlerForTaskStatusKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfcfe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e1d418);
  lVar1 = 0;
  func_0x000101cfccf8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 101cfd04c; end: 101cfd0a7; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl40LensRemoteApiAsyncTaskHandlerFactoryImpl init] */

void FUN_101cfd04c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl.LensRemoteApiAsyncTaskHandlerFactoryImpl"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101cfd078);
  (*pcVar1)();
}



/* Entry: 101cfd0a8; end: 101cfd0b7; -[_TtC47SCLensRemoteApiAsyncTaskCompletionAnnouncerImpl40LensRemoteApiAsyncTaskHandlerFactoryImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101cfd0a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e1d418));
  return;
}



/* Entry: 101cfd0b8; end: 101cfd0d7;  */

void FUN_101cfd0b8(void)

{
  func_0x000107c61168(&PTR_PTR_112801c10);
  return;
}



/* Entry: 101cfd0d8; end: 101cfd1f3;  */

long FUN_101cfd0d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x000100949928(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100949948();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c6157c();
  func_0x000100949ae0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 101cfd1f4; end: 101cfd22f;  */

void FUN_101cfd1f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfd230; end: 101cfd263;  */

undefined1  [16] FUN_101cfd230(void)

{
  return ZEXT816(0x110470fe0);
}



/* Entry: 101cfd264; end: 101cfd28f;  */

undefined8 FUN_101cfd264(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return 0;
}



/* Entry: 101cfd290; end: 101cfd3ab;  */

void FUN_101cfd290(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100286e84();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_101d0642c(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101d06010();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174();
  FUN_101d060d0();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 101cfd3ac; end: 101cfd3b7;  */

void FUN_101cfd3ac(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100286e84();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_101d0642c(0);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000101d06010();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c61174();
  FUN_101d060d0();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 101cfd3b8; end: 101cfd48f;  */

long FUN_101cfd3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101d0642c(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101d06010();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  FUN_101d060d0();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 101cfd490; end: 101cfd4c3;  */

void FUN_101cfd490(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfd4c4; end: 101cfd4f7;  */

undefined1  [16] FUN_101cfd4c4(void)

{
  return ZEXT816(0x110471088);
}



/* Entry: 101cfd4f8; end: 101cfd54b;  */

void FUN_101cfd4f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cfd54c; end: 101cfd693;  */

void FUN_101cfd54c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x0001002b74f4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  func_0x000101d09350(0);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  func_0x000101d08ab0(uStack_68,uVar1,uVar2,uVar3,uVar4,uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uStack_68;
  *param_1 = param_2;
  return;
}



/* Entry: 101cfd694; end: 101cfd6a3;  */

void FUN_101cfd694(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x0001002b74f4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  func_0x000101d09350(0);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uStack_90);
  func_0x000101d08ab0(uStack_68,uVar2,uVar3,uVar4,uVar5,uStack_90);
  *(undefined8 *)(lVar1 + 0x10) = uStack_68;
  *param_1 = lVar1;
  return;
}



/* Entry: 101cfd6a4; end: 101cfd777;  */

long FUN_101cfd6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  func_0x000101d09350(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000101d08ab0(param_1,param_2,param_3,param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 101cfd778; end: 101cfd7c3;  */

void FUN_101cfd778(void)

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



/* Entry: 101cfd7c4; end: 101cfd7f7;  */

undefined1  [16] FUN_101cfd7c4(void)

{
  return ZEXT816(0x110471130);
}



/* Entry: 101cfd7f8; end: 101cfd84b;  */

void FUN_101cfd7f8(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cfd84c; end: 101cfd967;  */

void FUN_101cfd84c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x0001002af9f8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  FUN_101d0a810(0);
  func_0x000107c610f8();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  uVar3 = uStack_58;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000101d0a564();
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174();
  FUN_101d0a5e8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 101cfd968; end: 101cfd973;  */

void FUN_101cfd968(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x0001002af9f8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  FUN_101d0a810(0);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000101d0a564();
  *(undefined8 *)(lVar1 + 0x10) = uVar5;
  func_0x000107c61174();
  FUN_101d0a5e8();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  *param_1 = lVar1;
  return;
}



/* Entry: 101cfd974; end: 101cfda4b;  */

long FUN_101cfd974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101d0a810(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101d0a564();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174();
  FUN_101d0a5e8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 101cfda4c; end: 101cfda7f;  */

void FUN_101cfda4c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfda80; end: 101cfdab3;  */

undefined1  [16] FUN_101cfda80(void)

{
  return ZEXT816(0x1104711d8);
}



/* Entry: 101cfdab4; end: 101cfdb07;  */

void FUN_101cfdab4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cfdb08; end: 101cfdb5b;  */

undefined8 FUN_101cfdb08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001004f52b0(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101cfdb5c; end: 101cfdb97;  */

void FUN_101cfdb5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101cfdb98; end: 101cfdbdb;  */

undefined1  [16] FUN_101cfdb98(void)

{
  return ZEXT816(0x110471280);
}



/* Entry: 101cfdbdc; end: 101cfdc2f;  */

void FUN_101cfdbdc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101cfdc30; end: 101cfdc7b;  */

undefined8 FUN_101cfdc30(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010091c42c(param_1,param_2);
  return unaff_x20;
}


