/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fd5a20; end: 100fd5a37;  */

void FUN_100fd5a20(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5a38);
  return;
}



/* Entry: 100fd5a38; end: 100fd5ac7;  */

void FUN_100fd5a38(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fd5ac8;
                    /* WARNING: Could not recover jumptable at 0x000100fd5ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x50),uVar3,lVar2);
  return;
}



/* Entry: 100fd5ac8; end: 100fd5b3b;  */

void FUN_100fd5ac8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(long *)(lVar3 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x68));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x78) = param_1;
    pcVar2 = FUN_100fd5b3c;
  }
  else {
    pcVar2 = FUN_100fd5b4c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0x58),0);
  return;
}



/* Entry: 100fd5b3c; end: 100fd5b4b;  */

void FUN_100fd5b3c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100fd5b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 100fd5b4c; end: 100fd5df7;  */

void FUN_100fd5b4c(void)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c614b0();
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar4 = unaff_x22 + 0x80;
  func_0x000107c6147c(lVar4,(undefined8 *)(unaff_x22 + 0x30),uVar3,&UNK_1106bf798,0);
  if ((int)lVar4 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x30));
    func_0x000107c602fc(0x28);
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xe000000000000000;
    func_0x000107c5fb78(0xd000000000000022,0x800000010ef1e800);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x203a,0xe200000000000000);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
    func_0x000107c603d0((undefined8 *)(unaff_x22 + 0x40),(undefined8 *)(unaff_x22 + 0x20),uVar3,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x28);
    func_0x000107c6142c();
    func_0x000100fd6fec();
    func_0x000107c613f8(&UNK_110375e38,puVar5,0,0);
    *puVar5 = uVar8;
    *(undefined1 *)(puVar5 + 1) = 2;
    func_0x000107c61654();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x70));
    cVar1 = *(char *)(unaff_x22 + 0x80);
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
    puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
    func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                        PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c5fb78(0x6e6f73616572202c,0xea0000000000203a);
    bVar2 = cVar1 == -0x80;
    uVar3 = 0xd000000000000011;
    if (!bVar2) {
      uVar3 = 0x6961466863746566;
    }
    uVar8 = 0x800000010ef1e850;
    if (!bVar2) {
      uVar8 = 0xeb0000000064656c;
    }
    func_0x000107c5fb78(uVar3,uVar8);
    func_0x000107c6142c(uVar8);
    puVar5 = (undefined8 *)0x800000010ef1e830;
    func_0x000107c6142c();
    func_0x000100fd6fec();
    func_0x000107c613f8(&UNK_110375e38,puVar5,0,0);
    *puVar5 = uVar7;
    *(bool *)(puVar5 + 1) = bVar2;
    func_0x000107c61654();
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  }
  func_0x000107c614ac(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100fd5df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd5df8; end: 100fd5e0f;  */

void FUN_100fd5df8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5e10);
  return;
}



/* Entry: 100fd5e10; end: 100fd5ebf;  */

void FUN_100fd5e10(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  *(undefined1 *)(unaff_x22 + 0x30) = 3;
  *(undefined4 *)(unaff_x22 + 0x34) = 0x14;
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  func_0x0001000a8868(unaff_x22 + 0x38,uVar2);
  piVar5 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fd5ec0;
                    /* WARNING: Could not recover jumptable at 0x000100fd5ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))((undefined8 *)(unaff_x22 + 0x10),uVar2,lVar3);
  return;
}



/* Entry: 100fd5ec0; end: 100fd5f1f;  */

void FUN_100fd5ec0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fd5f20;
  }
  else {
    pcVar1 = FUN_100fd6014;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x60),0);
  return;
}



/* Entry: 100fd5f20; end: 100fd5fcb;  */

void FUN_100fd5f20(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x70);
  if (lVar3 != 0) {
    func_0x0001000834e4(unaff_x22 + 0x38);
    lVar1 = lVar3;
    FUN_100fd6a68(lVar3,0x100fd71d0,0);
    FUN_100fd65e4();
    func_0x000107c6142c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fd5f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar1);
    return;
  }
  func_0x0001000834e4(unaff_x22 + 0x38);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100fd5fcc;
  lVar3 = *(long *)(unaff_x22 + 0x60);
  plVar2[7] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd6060,lVar3,0);
  return;
}



/* Entry: 100fd5fcc; end: 100fd6013;  */

void FUN_100fd5fcc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100fd6010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fd6014; end: 100fd6047;  */

void FUN_100fd6014(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100fd6044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd6048; end: 100fd605f;  */

void FUN_100fd6048(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd6060);
  return;
}



/* Entry: 100fd6060; end: 100fd60eb;  */

void FUN_100fd6060(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100fd60ec;
                    /* WARNING: Could not recover jumptable at 0x000100fd60e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(2,uVar2,lVar3);
  return;
}



/* Entry: 100fd60ec; end: 100fd614b;  */

void FUN_100fd60ec(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100fd614c;
  }
  else {
    pcVar1 = FUN_100fd6308;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0x38),0);
  return;
}



/* Entry: 100fd614c; end: 100fd6307;  */

void FUN_100fd614c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x22;
  ulong uVar11;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x48);
  uVar11 = uVar9 & 0xffffffffffffff8;
  if (uVar9 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar11 + 0x10);
    uVar2 = uVar9;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar11;
    if (0x7fffffffffffffff < uVar9) {
      uVar8 = uVar9;
    }
    func_0x000107c60480();
    uVar2 = *(ulong *)(unaff_x22 + 0x48);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar3;
  if (uVar8 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if ((uVar9 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100fd6284);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(uVar2 + 0x20 + uVar10 * 8);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar10;
          FUN_100fd6df4(uVar10,*(undefined8 *)(unaff_x22 + 0x48));
        }
        uVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100fd6280);
          (*pcVar4)();
        }
        uVar6 = uVar5;
        func_0x000107c5ce30();
        if ((int)uVar6 == 1) break;
        func_0x000107c61170(uVar5);
        uVar10 = uVar10 + 1;
        if (uVar1 == uVar8) goto LAB_100fd62a4;
      }
      puVar7 = puVar3;
      func_0x000107c61558();
      if (((ulong)puVar7 & 1) == 0) {
        FUN_100fd6724(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        FUN_100fd6724(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar3 + uVar10 * 8 + 0x20) = uVar5;
      uVar10 = uVar1;
    } while (uVar1 != uVar8);
  }
LAB_100fd62a4:
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar7 = puVar3;
  FUN_100fd6a68(puVar3,0x100fd71cc,0);
  FUN_100fd65e4();
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000100fd6304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar7);
  return;
}



/* Entry: 100fd6308; end: 100fd636f;  */

void FUN_100fd6308(void)

{
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100fd6338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100fd6370; end: 100fd6393;  */

void FUN_100fd6370(void)

{
  return;
}



/* Entry: 100fd6394; end: 100fd644f;  */

void FUN_100fd6394(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100fd63c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100fd6450; end: 100fd649f;  */

void FUN_100fd6450(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100fd64a0;
  plVar1[10] = param_1;
  plVar1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5a38,lVar2,0);
  return;
}



/* Entry: 100fd64a0; end: 100fd64e7;  */

void FUN_100fd64a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fd64e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fd64e8; end: 100fd6563;  */

void FUN_100fd64e8(void)

{
  func_0x000107c61168(&PTR_PTR_112d525a0);
  return;
}



/* Entry: 100fd6564; end: 100fd65e3;  */

undefined * FUN_100fd6564(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d52660;
    func_0x0001000285a8(0x112d52660,&UNK_10d921580);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  return puVar2;
}



/* Entry: 100fd65e4; end: 100fd6723;  */

void FUN_100fd65e4(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uStack_58;
  
  uVar10 = *unaff_x20;
  uVar11 = *(ulong *)(uVar10 + 0x10);
  uVar1 = uVar11 - 2;
  if (1 < uVar11) {
    uVar12 = 0;
    do {
      uStack_58 = 0;
      func_0x000107c61598(&uStack_58,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_58;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar11;
      lVar8 = SUB168(auVar2 * auVar4,8);
      if (uStack_58 * uVar11 < uVar11) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = -uVar11 / uVar11;
        }
        uVar13 = -uVar11 - uVar13 * uVar11;
        if (uStack_58 * uVar11 < uVar13) {
          do {
            uStack_58 = 0;
            func_0x000107c61598(&uStack_58,8);
          } while (uStack_58 * uVar11 < uVar13);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uStack_58;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar11;
          lVar8 = SUB168(auVar3 * auVar5,8);
        }
      }
      uVar13 = uVar12 + lVar8;
      if (SCARRY8(uVar12,lVar8)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100fd6714);
        (*pcVar6)();
      }
      if (uVar12 != uVar13) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100fd6718);
          (*pcVar6)();
        }
        if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100fd671c);
          (*pcVar6)();
        }
        uVar14 = *(undefined8 *)(uVar10 + 0x20 + uVar12 * 8);
        uVar15 = *(undefined8 *)(uVar10 + 0x20 + uVar13 * 8);
        uVar9 = uVar10;
        func_0x000107c61558();
        if ((uVar9 & 1) == 0) {
          FUN_100fd6a3c();
        }
        uVar9 = *(ulong *)(uVar10 + 0x10);
        if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100fd6720);
          (*pcVar6)();
        }
        *(undefined8 *)(uVar10 + 0x20 + uVar12 * 8) = uVar15;
        if (uVar9 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100fd6724);
          (*pcVar6)();
        }
        *(undefined8 *)(uVar10 + 0x20 + uVar13 * 8) = uVar14;
        *unaff_x20 = uVar10;
      }
      uVar11 = uVar11 - 1;
      bVar7 = uVar12 != uVar1;
      uVar12 = uVar12 + 1;
    } while (bVar7);
  }
  return;
}



/* Entry: 100fd6724; end: 100fd673f;  */

void FUN_100fd6724(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000100fd684c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100fd6740; end: 100fd6a3b;  */

undefined *
FUN_100fd6740(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd684c);
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
    puVar3 = (undefined *)0x112d52660;
    func_0x0001000285a8(0x112d52660,&UNK_10d921580);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 100fd6a3c; end: 100fd6a67;  */

void FUN_100fd6a3c(long param_1)

{
  FUN_100fd6740(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 100fd6a68; end: 100fd6df3;  */

undefined * FUN_100fd6a68(undefined *param_1,code *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uStack_98;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar8 = (ulong)param_1 >> 0x3e;
  if (uVar8 == 0) {
    puVar11 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar11 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar11 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (puVar11 != (undefined *)0x0) {
    puVar6 = puVar11;
    FUN_100fd6564(puVar11,0);
    func_0x000107c6157c();
  }
  uVar10 = *(ulong *)(puVar6 + 0x18);
  func_0x000107c61574(puVar6);
  if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6df0);
    (*pcVar2)();
  }
  puVar15 = (undefined8 *)(puVar6 + 0x20);
  uVar10 = uVar10 >> 1;
  if (puVar11 != (undefined *)0x0) {
    if (uVar8 == 0) {
      puVar12 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar12 = param_1;
      }
      func_0x000107c60480();
    }
    uStack_98 = (ulong)param_1 & 0xffffffffffffff8;
    lVar14 = 0;
    puVar13 = (undefined *)0x0;
    do {
      if (puVar11 == puVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6ddc);
        (*pcVar2)();
      }
      if (puVar12 == puVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6de0);
        (*pcVar2)();
      }
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(long *)(uStack_98 + 0x10) <= (long)puVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6dec);
          (*pcVar2)();
        }
        puVar4 = *(undefined **)(param_1 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar4 = puVar13;
        FUN_100fd6df4(puVar13,param_1);
      }
      puStack_68 = puVar4;
      func_0x000107c61174();
      (*param_2)(&uStack_70,&puStack_68);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      if ((undefined *)(uVar10 | 0x8000000000000000) == puVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6de4);
        (*pcVar2)();
      }
      puVar15[(long)puVar13] = uStack_70;
      puVar13 = puVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (puVar11 != puVar13);
    puVar15 = (undefined8 *)((long)puVar15 - lVar14);
    uVar10 = uVar10 - (long)puVar11;
  }
  uStack_78 = (ulong)param_1 & 0xc000000000000001;
  puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  puVar12 = puVar13;
  if (((ulong)param_1 & 0x8000000000000000) != 0) {
    puVar12 = param_1;
  }
  if (uVar8 != 0) goto LAB_100fd6c34;
  while (puVar4 = puVar6, puVar16 = puVar15, puVar11 != *(undefined **)(puVar13 + 0x10)) {
    while( true ) {
      if (uStack_78 == 0) {
        if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6dd0);
          (*pcVar2)();
        }
        if (*(undefined **)(puVar13 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6dd4);
          (*pcVar2)();
        }
        puVar6 = *(undefined **)(param_1 + (long)puVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar6 = puVar11;
        FUN_100fd6df4(puVar11,param_1);
      }
      if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6d8c);
        (*pcVar2)();
      }
      puStack_68 = puVar6;
      func_0x000107c61174();
      (*param_2)(&uStack_70,&puStack_68);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar6);
      uVar1 = uStack_70;
      puVar6 = puVar4;
      if (uVar10 == 0) {
        uVar10 = *(ulong *)(puVar4 + 0x18);
        if ((long)((uVar10 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6de8);
          (*pcVar2)();
        }
        uVar9 = uVar10 & 0xfffffffffffffffe;
        if ((long)uVar10 < 2) {
          uVar9 = 1;
        }
        puVar6 = (undefined *)0x112d52660;
        func_0x0001000285a8(0x112d52660,&UNK_10d921580);
        func_0x000107c613fc();
        puVar7 = puVar6;
        func_0x000107c610a4();
        puVar5 = puVar7 + -0x19;
        if (0x1f < (long)puVar7) {
          puVar5 = puVar7 + -0x20;
        }
        *(ulong *)(puVar6 + 0x10) = uVar9;
        *(long *)(puVar6 + 0x18) = ((long)puVar5 >> 3) << 1;
        puVar7 = puVar6 + 0x20;
        uVar10 = *(ulong *)(puVar4 + 0x18) >> 1;
        if (*(long *)(puVar4 + 0x10) != 0) {
          if ((puVar6 != puVar4) || (puVar4 + 0x20 + uVar10 * 8 <= puVar7)) {
            func_0x000107c610b8(puVar7,puVar4 + 0x20,uVar10 << 3);
          }
          *(undefined8 *)(puVar4 + 0x10) = 0;
        }
        puVar16 = (undefined8 *)(puVar7 + uVar10 * 8);
        uVar10 = ((long)puVar5 >> 3 & 0x7fffffffffffffffU) - uVar10;
        func_0x000107c61574(puVar4);
      }
      bVar3 = SBORROW8(uVar10,1);
      uVar10 = uVar10 - 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6dd8);
        (*pcVar2)();
      }
      puVar15 = puVar16 + 1;
      *puVar16 = uVar1;
      puVar11 = puVar11 + 1;
      if (uVar8 == 0) break;
LAB_100fd6c34:
      puVar5 = puVar12;
      func_0x000107c60480();
      puVar4 = puVar6;
      puVar16 = puVar15;
      if (puVar11 == puVar5) goto LAB_100fd6d8c;
    }
  }
LAB_100fd6d8c:
  if (1 < *(ulong *)(puVar6 + 0x18)) {
    uVar8 = *(ulong *)(puVar6 + 0x18) >> 1;
    if (SBORROW8(uVar8,uVar10)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6df4);
      (*pcVar2)();
    }
    *(ulong *)(puVar6 + 0x10) = uVar8 - uVar10;
  }
  return puVar6;
}



/* Entry: 100fd6df4; end: 100fd6fa7;  */

ulong FUN_100fd6df4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6ed8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6edc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126bfa50;
    func_0x000107c61168(PTR_PTR_1126bfa50);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126bfa50;
    func_0x000107c61168(PTR_PTR_1126bfa50);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100fd6fa8(0);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100fd6fa8);
  (*pcVar2)();
}



/* Entry: 100fd6fa8; end: 100fd706b;  */

void FUN_100fd6fa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d52668 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126bfa50;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d52668 = puVar1;
  return;
}



/* Entry: 100fd706c; end: 100fd70eb;  */

void FUN_100fd706c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar7 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x100fd71d4;
  plVar7[0x14] = lVar1;
  plVar7[0x15] = lVar3;
  plVar7[0x12] = lVar4;
  plVar7[0x13] = lVar2;
  plVar7[0x11] = param_2;
  lVar4 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar6 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x16] = uVar5;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[0x17] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd4d94,0,0);
  return;
}



/* Entry: 100fd70ec; end: 100fd717f;  */

void FUN_100fd70ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100fd7180;
  plVar5[9] = lVar2;
  plVar5[10] = lVar4;
  plVar5[7] = lVar1;
  plVar5[8] = lVar3;
  plVar5[6] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fd5254,0,0);
  return;
}



/* Entry: 100fd7180; end: 100fd71bb;  */

void FUN_100fd7180(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fd71b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100fd71bc; end: 100fd71d7;  */

void FUN_100fd71bc(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100fd71d8; end: 100fd7217;  */

void FUN_100fd71d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 100fd7218; end: 100fd7233;  */

/* WARNING: Possible PIC construction at 0x000100fd7224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7228) */

void FUN_100fd7218(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100fd7234; end: 100fd727f;  */

void FUN_100fd7234(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fd7280; end: 100fd7357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7280(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcab00);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11303ff00);
  puVar1 = &UNK_110373818;
  func_0x000107c613fc(&UNK_110373818,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x0001000285a8(0x112d52698,&UNK_10d9190e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_100fd7408;
  func_0x0001000bdd8c(FUN_100fd7408,puVar1);
  uVar3 = 0;
  FUN_101003eac(0);
  func_0x000107c610f8();
  func_0x000101003df0(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100fd7358; end: 100fd735f;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd7358(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_100fd64e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x70) = 3;
  *(undefined8 *)(lVar5 + 0x78) = uVar1;
  *(undefined8 *)(lVar5 + 0x80) = uVar2;
  *(undefined **)(lVar5 + 0x88) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fd7360; end: 100fd7407;  */

void FUN_100fd7360(undefined8 param_1)

{
  if (lRam0000000112d526c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d1b4);
  return;
}



/* Entry: 100fd7408; end: 100fd740b;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd7408(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_100fd64e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x70) = 3;
  *(undefined8 *)(lVar5 + 0x78) = uVar1;
  *(undefined8 *)(lVar5 + 0x80) = uVar2;
  *(undefined **)(lVar5 + 0x88) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fd740c; end: 100fd748f;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd740c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  FUN_100fd64e8();
  lVar3 = lVar2;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar3 + 0x70) = 3;
  *(undefined8 *)(lVar3 + 0x78) = param_2;
  *(undefined8 *)(lVar3 + 0x80) = param_3;
  *(undefined **)(lVar3 + 0x88) = puVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100fd7490; end: 100fd74cf;  */

void FUN_100fd7490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 100fd74d0; end: 100fd74d7;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd74d0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_100fd64e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x70) = 3;
  *(undefined8 *)(lVar5 + 0x78) = uVar1;
  *(undefined8 *)(lVar5 + 0x80) = uVar2;
  *(undefined **)(lVar5 + 0x88) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fd74d8; end: 100fd74f3;  */

/* WARNING: Possible PIC construction at 0x000100fd74e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd74e8) */

void FUN_100fd74d8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100fd74f4; end: 100fd753f;  */

void FUN_100fd74f4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100fd7540; end: 100fd75bb;  */

void FUN_100fd7540(undefined8 param_1)

{
  if (lRam0000000112d527a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61d218);
  return;
}



/* Entry: 100fd75bc; end: 100fd7693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd75bc(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcab00);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11303ff00);
  puVar1 = &UNK_110373858;
  func_0x000107c613fc(&UNK_110373858,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  func_0x0001000285a8(0x112d52698,&UNK_10d9190e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  pcVar2 = FUN_100fd76c0;
  func_0x0001000bdd8c(FUN_100fd76c0,puVar1);
  uVar3 = 0;
  FUN_101003eac(0);
  func_0x000107c610f8();
  func_0x000101003df0(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}



/* Entry: 100fd7694; end: 100fd76bf;  */

void FUN_100fd7694(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100fd76c0; end: 100fd76c3;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd76c0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_100fd64e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x70) = 3;
  *(undefined8 *)(lVar5 + 0x78) = uVar1;
  *(undefined8 *)(lVar5 + 0x80) = uVar2;
  *(undefined **)(lVar5 + 0x88) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fd76c4; end: 100fd76cf; -[SCQuickCutMusicFetcherServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd76c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52850;
  func_0x000107c61428(param_1 + _DAT_112d52850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd76d0; end: 100fd76db; -[SCQuickCutMusicFetcherServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd76d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52850;
  func_0x000107c61428(param_1 + _DAT_112d52850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd76dc; end: 100fd76e7; -[SCQuickCutMusicFetcherServiceProvider externalMusicFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd76dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52858;
  func_0x000107c61428(param_1 + _DAT_112d52858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd76e8; end: 100fd76f3; -[SCQuickCutMusicFetcherServiceProvider setExternalMusicFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd76e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52858;
  func_0x000107c61428(param_1 + _DAT_112d52858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd76f4; end: 100fd76ff; -[SCQuickCutMusicFetcherServiceProvider musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd76f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52860;
  func_0x000107c61428(param_1 + _DAT_112d52860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7700; end: 100fd7743;  */

void FUN_100fd7700(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7744; end: 100fd774f; -[SCQuickCutMusicFetcherServiceProvider setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52860;
  func_0x000107c61428(param_1 + _DAT_112d52860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd7750; end: 100fd77a3;  */

void FUN_100fd7750(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd77a4; end: 100fd795f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd77a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c42cc0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d280();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_100fd7360();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar2;
        *(long *)(lVar4 + 0x18) = lVar3;
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d52868);
        *(long *)(unaff_x20 + _DAT_112d52868) = lVar4;
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar7);
        uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + _DAT_112fcab00);
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + _DAT_11303ff00);
        puVar5 = &UNK_110373898;
        func_0x000107c613fc(&UNK_110373898,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar7;
        *(undefined8 *)(puVar5 + 0x18) = uVar8;
        func_0x0001000285a8(0x112d52698,&UNK_10d9190e0);
        func_0x000107c613fc();
        func_0x000107c6157c(uVar7);
        func_0x000107c6157c(uVar8);
        pcVar6 = FUN_100fd7960;
        func_0x0001000bdd8c(FUN_100fd7960,puVar5);
        uVar7 = 0;
        FUN_101003eac(0);
        func_0x000107c610f8();
        func_0x000101003df0(pcVar6,uVar7);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100fd7960; end: 100fd7967;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd7960(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_100fd64e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x70) = 3;
  *(undefined8 *)(lVar5 + 0x78) = uVar1;
  *(undefined8 *)(lVar5 + 0x80) = uVar2;
  *(undefined **)(lVar5 + 0x88) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fd7968; end: 100fd79f3; -[SCQuickCutMusicFetcherServiceProvider provide] */

void FUN_100fd7968(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100fd77a4();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "QuickCutMusicFetcherImpl/SCQuickCutMusicFetcherServiceProvider.swift",0x44,2,
                      0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd79f4);
  (*pcVar1)();
}



/* Entry: 100fd79f4; end: 100fd7a27; -[SCQuickCutMusicFetcherServiceProvider __safeProvide] */

void FUN_100fd79f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100fd77a4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100fd7a28; end: 100fd7a6b; -[SCQuickCutMusicFetcherServiceProvider end] */

void FUN_100fd7a28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7a6c; end: 100fd7c7b;  */

void FUN_100fd7a6c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10e1680)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef1e980,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x726553636973756d;
        if (((param_2 != 0x726553636973756d) || (param_3 != -0x12ffff8c9a9c968a)) &&
           (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "QuickCutMusicFetcherImpl/SCQuickCutMusicFetcherServiceProvider.swift"
                              ,0x44,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd7c7c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56870();
        goto LAB_100fd7af8;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54810();
  }
LAB_100fd7af8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100fd7c7c; end: 100fd7d27; -[SCQuickCutMusicFetcherServiceProvider setValue:forIvarName:] */

void FUN_100fd7c7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100fd7a6c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100fd7d28; end: 100fd7daf; -[SCQuickCutMusicFetcherServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7d28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d52850,0);
  func_0x000107c61614(param_1 + _DAT_112d52858,0);
  func_0x000107c61614(param_1 + _DAT_112d52860,0);
  *(undefined8 *)(param_1 + _DAT_112d52868) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100fd7db0; end: 100fd7de3;  */

void FUN_100fd7db0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fd7de4; end: 100fd7e3b; -[SCQuickCutMusicFetcherServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7de4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d52850);
  func_0x000107c61610(param_1 + _DAT_112d52858);
  func_0x000107c61610(param_1 + _DAT_112d52860);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d52868));
  return;
}



/* Entry: 100fd7e3c; end: 100fd7e5b;  */

void FUN_100fd7e3c(void)

{
  func_0x000107c61168(&PTR_PTR_112d528b0);
  return;
}



/* Entry: 100fd7e5c; end: 100fd7e67; -[SCSnapEditorQuickCutMusicFetcherServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7e5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52920;
  func_0x000107c61428(param_1 + _DAT_112d52920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7e68; end: 100fd7e73; -[SCSnapEditorQuickCutMusicFetcherServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52920;
  func_0x000107c61428(param_1 + _DAT_112d52920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd7e74; end: 100fd7e7f; -[SCSnapEditorQuickCutMusicFetcherServiceProvider externalMusicFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7e74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52928;
  func_0x000107c61428(param_1 + _DAT_112d52928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7e80; end: 100fd7e8b; -[SCSnapEditorQuickCutMusicFetcherServiceProvider setExternalMusicFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52928;
  func_0x000107c61428(param_1 + _DAT_112d52928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd7e8c; end: 100fd7e97; -[SCSnapEditorQuickCutMusicFetcherServiceProvider musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7e8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d52930;
  func_0x000107c61428(param_1 + _DAT_112d52930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7e98; end: 100fd7edb;  */

void FUN_100fd7e98(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd7edc; end: 100fd7ee7; -[SCSnapEditorQuickCutMusicFetcherServiceProvider setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7edc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d52930;
  func_0x000107c61428(param_1 + _DAT_112d52930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd7ee8; end: 100fd7f3b;  */

void FUN_100fd7ee8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100fd7f3c; end: 100fd80f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd7f3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c42cc0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4d280();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_100fd7540();
        func_0x000107c613fc();
        *(long *)(lVar4 + 0x10) = lVar2;
        *(long *)(lVar4 + 0x18) = lVar3;
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d52938);
        *(long *)(unaff_x20 + _DAT_112d52938) = lVar4;
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar7);
        uVar7 = *(undefined8 *)(*(long *)(lVar4 + 0x10) + _DAT_112fcab00);
        uVar8 = *(undefined8 *)(*(long *)(lVar4 + 0x18) + _DAT_11303ff00);
        puVar5 = &UNK_1103738c0;
        func_0x000107c613fc(&UNK_1103738c0,0x20,7);
        *(undefined8 *)(puVar5 + 0x10) = uVar7;
        *(undefined8 *)(puVar5 + 0x18) = uVar8;
        func_0x0001000285a8(0x112d52698,&UNK_10d9190e0);
        func_0x000107c613fc();
        func_0x000107c6157c(uVar7);
        func_0x000107c6157c(uVar8);
        pcVar6 = FUN_100fd80f8;
        func_0x0001000bdd8c(FUN_100fd80f8,puVar5);
        uVar7 = 0;
        FUN_101003eac(0);
        func_0x000107c610f8();
        func_0x000101003df0(pcVar6,uVar7);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100fd80f8; end: 100fd80ff;  */

/* WARNING: Possible PIC construction at 0x000100fd7474: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fd7478) */

void FUN_100fd80f8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = 0;
  FUN_100fd64e8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar5 + 0x70) = 3;
  *(undefined8 *)(lVar5 + 0x78) = uVar1;
  *(undefined8 *)(lVar5 + 0x80) = uVar2;
  *(undefined **)(lVar5 + 0x88) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110373750;
  *param_1 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100fd8100; end: 100fd818b; -[SCSnapEditorQuickCutMusicFetcherServiceProvider provide] */

void FUN_100fd8100(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_100fd7f3c();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "QuickCutMusicFetcherImpl/SCSnapEditorQuickCutMusicFetcherServiceProvider.swift"
                      ,0x4e,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd818c);
  (*pcVar1)();
}



/* Entry: 100fd818c; end: 100fd81bf; -[SCSnapEditorQuickCutMusicFetcherServiceProvider __safeProvide] */

void FUN_100fd818c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100fd7f3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100fd81c0; end: 100fd8203; -[SCSnapEditorQuickCutMusicFetcherServiceProvider end] */

void FUN_100fd81c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100fd8204; end: 100fd8413;  */

void FUN_100fd8204(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10e1680)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001a,0x800000010ef1e980,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0x726553636973756d;
        if (((param_2 != 0x726553636973756d) || (param_3 != -0x12ffff8c9a9c968a)) &&
           (func_0x000107c605b8(0x726553636973756d,0xed00007365636976,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "QuickCutMusicFetcherImpl/SCSnapEditorQuickCutMusicFetcherServiceProvider.swift"
                              ,0x4e,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100fd8414);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c56870();
        goto LAB_100fd8290;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54810();
  }
LAB_100fd8290:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100fd8414; end: 100fd84bf; -[SCSnapEditorQuickCutMusicFetcherServiceProvider setValue:forIvarName:] */

void FUN_100fd8414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100fd8204(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100fd84c0; end: 100fd8547; -[SCSnapEditorQuickCutMusicFetcherServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd84c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d52920,0);
  func_0x000107c61614(param_1 + _DAT_112d52928,0);
  func_0x000107c61614(param_1 + _DAT_112d52930,0);
  *(undefined8 *)(param_1 + _DAT_112d52938) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100fd8548; end: 100fd857b;  */

void FUN_100fd8548(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100fd857c; end: 100fd85d3; -[SCSnapEditorQuickCutMusicFetcherServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd857c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d52920);
  func_0x000107c61610(param_1 + _DAT_112d52928);
  func_0x000107c61610(param_1 + _DAT_112d52930);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d52938));
  return;
}



/* Entry: 100fd85d4; end: 100fd85f3;  */

void FUN_100fd85d4(void)

{
  func_0x000107c61168(&PTR_PTR_112d52980);
  return;
}



/* Entry: 100fd85f4; end: 100fd86d7;  */

void FUN_100fd85f4(void)

{
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001000d224c(&uStack_30);
  func_0x000107c614f0(uStack_30);
  (**(code **)(lStack_28 + 0x48))();
  func_0x000107c615e8(uStack_30);
  return;
}



/* Entry: 100fd86d8; end: 100fd8757;  */

void FUN_100fd86d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0x60))(param_2,param_3,param_4,param_5,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  return;
}



/* Entry: 100fd8758; end: 100fd87bf;  */

void FUN_100fd8758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 0x68))(param_2,param_3,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  return;
}



/* Entry: 100fd87c0; end: 100fd88c7;  */

void FUN_100fd87c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61434(param_3);
    func_0x000107c5eea0(puVar2);
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,0,1,lVar1);
    func_0x000107c61428(param_1 + 0x20,auStack_70,0x21,0);
    FUN_100fd88c8(puVar2,param_2,param_3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100fd88c8; end: 100fd8a4b;  */

void FUN_100fd88c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001003a4c00(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000d1dcc(lVar5);
    FUN_100fda9f8(puVar4,param_2,param_3);
    func_0x000107c6142c(param_3);
    func_0x0001000d1dcc(puVar4);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,lVar5,lVar2);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    func_0x000100fdab18(lVar6,param_2,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 100fd8a4c; end: 100fd8d07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd8a4c(double param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_b0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_00;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + 0x20,&uStack_a0,0x20,0);
    lVar5 = *(long *)(param_2 + 0x20);
    if (*(long *)(lVar5 + 0x10) != 0) {
      func_0x000107c61434(lVar5);
      lVar2 = param_3;
      uVar3 = param_4;
      func_0x000100029284(param_3);
      if ((uVar3 & 1) == 0) {
        func_0x000107c6142c(lVar5);
      }
      else {
        (**(code **)(lVar11 + 0x10))
                  (lVar9,*(long *)(lVar5 + 0x38) + *(long *)(lVar11 + 0x48) * lVar2,lVar1);
        pcVar6 = *(code **)(lVar11 + 0x20);
        lStack_a8 = param_3;
        (*pcVar6)(lVar8,lVar9,lVar1);
        func_0x000107c614a8(&uStack_a0);
        func_0x000107c6142c(lVar5);
        func_0x000107c5eea0(lVar7);
        func_0x000107c5ee68(lVar8);
        func_0x0001000d224c(&uStack_a0);
        func_0x000107c614f0(uStack_a0);
        (**(code **)(lStack_98 + 0x70))(param_1 * 1000.0);
        func_0x000107c615e8(uStack_a0);
        pcVar10 = *(code **)(lVar11 + 0x38);
        (*pcVar10)(puVar4,1,1,lVar1);
        func_0x000107c61428(param_2 + 0x20,&uStack_a0,0x21,0);
        func_0x000107c61434(param_4);
        FUN_100fd88c8(puVar4,lStack_a8,param_4);
        func_0x000107c614a8(&uStack_a0);
        (**(code **)(lVar11 + 8))(lVar8,lVar1);
        (*pcVar6)(puVar4,lVar7,lVar1);
        (*pcVar10)(puVar4,0,1,lVar1);
        lVar1 = _DAT_112d529f0;
        func_0x000107c61428(param_2 + _DAT_112d529f0,&uStack_a0,0x21,0);
        func_0x000100ed9cbc(puVar4,param_2 + lVar1);
      }
    }
    func_0x000107c614a8(&uStack_a0);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 100fd8d08; end: 100fd8e13;  */

void FUN_100fd8d08(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_58;
  
  puVar1 = &UNK_110373c48;
  func_0x000107c613fc(&UNK_110373c48,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000107c613fc(param_3,0x28,7);
  *(undefined **)(param_3 + 0x10) = puVar1;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x000107c61434(param_2);
  func_0x0001000d224c(&uStack_58);
  uVar2 = uStack_58;
  func_0x000107c614f0(uStack_58);
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(long *)(param_4 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010090569c(param_6,param_4,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 100fd8e14; end: 100fd8f13;  */

void FUN_100fd8e14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(auStack_70 + -extraout_x8,1,1,lVar1);
    func_0x000107c61428(param_1 + 0x20,auStack_70,0x21,0);
    func_0x000107c61434(param_3);
    FUN_100fd88c8(auStack_70 + -extraout_x8,param_2,param_3);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100fd8f14; end: 100fd915b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd8f14(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)puVar6 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12_00;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_112d529f0;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112d529f0,auStack_a0,0,0);
    func_0x0001009f0578(param_2 + lVar1,lVar4);
    lVar3 = lVar4;
    (**(code **)(lVar8 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x000107c61574(param_2);
      func_0x0001000d1dcc(lVar4);
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar5,lVar4,lVar2);
      func_0x000107c5eea0(lVar7);
      func_0x000107c5ee68(lVar5);
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar7,lVar2);
      (**(code **)(lVar8 + 0x38))(puVar6,1,1,lVar2);
      func_0x000107c61428(param_2 + lVar1,&uStack_b8,0x21,0);
      func_0x000100ed9cbc(puVar6,param_2 + lVar1);
      func_0x000107c614a8(&uStack_b8);
      func_0x0001000d224c(&uStack_b8);
      func_0x000107c614f0(uStack_b8);
      (**(code **)(lStack_b0 + 0x78))(param_1 * 1000.0);
      func_0x000107c61574(param_2);
      func_0x000107c615e8(uStack_b8);
      (*pcVar9)(lVar5,lVar2);
    }
  }
  return;
}



/* Entry: 100fd915c; end: 100fd922b;  */

void FUN_100fd915c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110373c48;
  func_0x000107c613fc(&UNK_110373c48,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000107c6157c(puVar1);
  func_0x0001000d224c(&uStack_48);
  uVar2 = uStack_48;
  func_0x000107c614f0(uStack_48);
  func_0x000107c613fc(param_1,0x20,7);
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x18) = puVar1;
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(param_3,param_1,uVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(param_1);
  func_0x000107c61578(puVar1,2);
  return;
}



/* Entry: 100fd922c; end: 100fd931b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd922c(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_60 + -extraout_x8;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c5eea0(puVar2);
    lVar1 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,0,1,lVar1);
    lVar1 = _DAT_112d529f8;
    func_0x000107c61428(param_1 + _DAT_112d529f8,auStack_60,0x21,0);
    func_0x000100ed9cbc(puVar2,param_1 + lVar1);
    func_0x000107c614a8(auStack_60);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 100fd931c; end: 100fd941f;  */

void FUN_100fd931c(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110373c48;
  func_0x000107c613fc(&UNK_110373c48,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110373e28;
  func_0x000107c613fc(&UNK_110373e28,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar2[0x18] = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar4 = &UNK_110373e50;
  func_0x000107c613fc(&UNK_110373e50,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x100fdc314;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c6157c(puVar2);
  func_0x00010090569c(0x100fdc464,puVar4,uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 100fd9420; end: 100fd967b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100fd9420(double param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = (long)&uStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar9 - extraout_x12_00;
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  lVar1 = _DAT_112d529f8;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112d529f8,auStack_a0,0,0);
    func_0x0001009f0578(param_2 + lVar1,lVar6);
    lVar3 = lVar6;
    (**(code **)(lVar10 + 0x30))(lVar6,1,lVar2);
    if ((int)lVar3 == 1) {
      func_0x000107c61574(param_2);
      func_0x0001000d1dcc(lVar6);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar8,lVar6,lVar2);
      func_0x000107c5eea0(lVar9);
      func_0x000107c5ee68(lVar8);
      pcVar7 = *(code **)(lVar10 + 8);
      uStack_c0 = param_4;
      (*pcVar7)(lVar9,lVar2);
      func_0x0001000d224c(&uStack_b8);
      uVar4 = uStack_b8;
      func_0x000107c614f0(uStack_b8);
      (**(code **)(lStack_b0 + 0x80))(param_1 * 1000.0,param_3 & 1,uStack_c0,uVar4,lStack_b0);
      func_0x000107c615e8(uStack_b8);
      (*pcVar7)(lVar8,lVar2);
      (**(code **)(lVar10 + 0x38))(lVar5,1,1,lVar2);
      func_0x000107c61428(param_2 + lVar1,&uStack_b8,0x21,0);
      func_0x000100ed9cbc(lVar5,param_2 + lVar1);
      func_0x000107c614a8(&uStack_b8);
      func_0x000107c61574(param_2);
    }
  }
  return;
}


