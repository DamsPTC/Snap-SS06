/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c77f1c; end: 103c77f33;  */

void FUN_103c77f1c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103c77f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c77f34; end: 103c77f53;  */

void FUN_103c77f34(void)

{
  func_0x000107c61168(&PTR_PTR_112ffd1a8);
  return;
}



/* Entry: 103c77f54; end: 103c77fd3;  */

void FUN_103c77f54(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ffd2a8);
  func_0x000107c5f164(uVar1,0xd000000000000020,0x800000010f1b2200,0x7275507070416e49,
                      0xed00006573616863);
  return;
}



/* Entry: 103c77fd4; end: 103c7806b;  */

void FUN_103c77fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  lVar1 = 0;
  func_0x000107c5f168();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c7806c,uVar3,uVar4);
  return;
}



/* Entry: 103c7806c; end: 103c78337;  */

void FUN_103c7806c(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong *puVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  long lVar15;
  
  lVar5 = *(long *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar12 = *(ulong **)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  uVar2 = 0x8000000000000000;
  FUN_103c7842c();
  uVar2 = uVar2 | 0x8000000000000000;
  uVar3 = *(ulong *)(lVar5 + 0x18);
  uVar10 = *(ulong *)(lVar5 + 0x20);
  func_0x0001000a8868(lVar5,uVar3);
  (**(code **)(uVar10 + 8))();
  uVar4 = 0;
  func_0x000103c79ccc();
  puVar12[3] = uVar4;
  puVar12[4] = (ulong)&PTR_DAT_1106f19f8;
  func_0x0001000c5db4();
  func_0x000107c5eea0((long)puVar12 + (long)*(int *)(uVar4 + 0x1c));
  iVar1 = *(int *)(uVar4 + 0x20);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar15 = *(long *)(lVar5 + -8);
  (**(code **)(lVar15 + 0x10))((long)puVar12 + (long)iVar1,uVar9,lVar5);
  (**(code **)(lVar15 + 0x38))((long)puVar12 + (long)iVar1,0,1,lVar5);
  *puVar12 = uVar2;
  puVar12[1] = uVar2;
  puVar12[2] = uVar3;
  puVar12[3] = uVar10;
  if (lRam0000000112ffd2a0 != -1) {
    func_0x000107c61568(0x112ffd2a0,FUN_103c77f54);
  }
  lVar5 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar14 = uVar11;
  func_0x000100028790(uVar11,0x112ffd2a8);
  (**(code **)(lVar5 + 0x10))(uVar9,uVar14,uVar11);
  func_0x000103c72cf8(uVar13,unaff_x22 + 0x10);
  func_0x000103c72cf8(unaff_x22 + 0x10,unaff_x22 + 0x38);
  lVar5 = unaff_x22 + 0x10;
  FUN_103c784b4();
  func_0x000107c5f160();
  lVar6 = lVar5;
  func_0x000107c5ff70();
  lVar7 = lVar5;
  func_0x000107c611d4(lVar5,(uint)lVar6 & 0xff);
  lVar15 = *(long *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  if ((int)lVar7 == 0) {
    func_0x000107c61170(lVar5);
    (**(code **)(lVar15 + 8))(uVar9,uVar14);
    FUN_103c784b4(unaff_x22 + 0x38);
  }
  else {
    puVar8 = (undefined4 *)0x16;
    func_0x000107c6158c(0x16,0xffffffffffffffff);
    uVar13 = 0x20;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar8 = 0x8200202;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
    lVar7 = *(long *)(unaff_x22 + 0x58);
    func_0x0001000a8868(unaff_x22 + 0x38,uVar11);
    (**(code **)(lVar7 + 8))(uVar11,lVar7);
    func_0x0001014bfa20();
    func_0x000107c6142c(lVar7);
    *(undefined8 *)(puVar8 + 1) = uVar11;
    *(undefined2 *)(puVar8 + 3) = 0x800;
    *(ulong *)((long)puVar8 + 0xe) = uVar2;
    FUN_103c784b4(unaff_x22 + 0x38);
    func_0x000107c60ea4(0x100000000,lVar5,(uint)lVar6 & 0xff,
                        "mock.transaction productId: %s transactionId: %llu",puVar8,0x16);
    FUN_103c784b4(uVar13);
    func_0x000107c61590(uVar13,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar8,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(lVar5);
    (**(code **)(lVar15 + 8))(uVar9,uVar14);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar5 = *(long *)(unaff_x22 + 0x60);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103c7831c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c78338; end: 103c78347;  */

void FUN_103c78338(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c78348; end: 103c78367;  */

void FUN_103c78348(void)

{
  func_0x000107c61168(&PTR_PTR_112ffd248);
  return;
}



/* Entry: 103c78368; end: 103c783d3;  */

void FUN_103c78368(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103c783d4;
  plVar4[0xd] = param_2;
  plVar4[0xe] = param_3;
  plVar4[0xc] = param_1;
  lVar1 = 0;
  func_0x000107c5f168();
  plVar4[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x11] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x12] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c7806c,lVar3,lVar1);
  return;
}



/* Entry: 103c783d4; end: 103c7842b;  */

void FUN_103c783d4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c78428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c7842c; end: 103c784b3;  */

undefined8 FUN_103c7842c(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uStack_28;
  
  if (param_1 != 0) {
    uStack_28 = 0;
    func_0x000107c61598(&uStack_28,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_28;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    uVar6 = SUB168(auVar1 * auVar3,8);
    if (uStack_28 * param_1 < param_1) {
      uVar7 = 0;
      if (param_1 != 0) {
        uVar7 = -param_1 / param_1;
      }
      uVar7 = -param_1 - uVar7 * param_1;
      if (uStack_28 * param_1 < uVar7) {
        do {
          uStack_28 = 0;
          func_0x000107c61598(&uStack_28,8);
        } while (uStack_28 * param_1 < uVar7);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uStack_28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        uVar6 = SUB168(auVar2 * auVar4,8);
      }
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x103c784b4);
  (*pcVar5)();
}



/* Entry: 103c784b4; end: 103c784d3;  */

void FUN_103c784b4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c784c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c784d4; end: 103c7856b;  */

void FUN_103c784d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  uVar3 = 0x112d45220;
  FUN_103c78a38(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c7856c,uVar2,uVar3);
  return;
}



/* Entry: 103c7856c; end: 103c78707;  */

/* WARNING: Removing unreachable block (ram,0x000103c785a0) */

void FUN_103c7856c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_103c78a8c();
  lVar2 = *(long *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  lVar4 = 0;
  func_0x000107c5f94c();
  lVar10 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar5);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  func_0x000107c5f940(uVar6,uVar9);
  func_0x0001016a0a3c(uVar5,uVar6);
  (**(code **)(lVar10 + 8))(uVar5,lVar4);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
  lVar4 = 0;
  func_0x000107c5f950();
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar5;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar3);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  *(ulong *)(unaff_x22 + 0xb8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar9;
  piVar8 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103c78708;
                    /* WARNING: Could not recover jumptable at 0x000103c78704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar7,uVar6,uVar9,uVar3,lVar4);
  return;
}



/* Entry: 103c78708; end: 103c7875f;  */

void FUN_103c78708(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c78760;
  }
  else {
    pcVar1 = FUN_103c7884c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98));
  return;
}



/* Entry: 103c78760; end: 103c7884b;  */

void FUN_103c78760(void)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *(long *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar2 + 0x20))(uVar1,uVar7,uVar4);
  func_0x000107c615c0(uVar7);
  FUN_103c68bbc(uVar6,uVar1,unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0xa8) + 8);
  if (lVar5 == 0) {
    (*UNRECOVERED_JUMPTABLE)(uVar1,*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c6142c(uVar4);
    func_0x000107c615c0(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
    (*UNRECOVERED_JUMPTABLE)(uVar1);
    func_0x000107c6142c(uVar4);
    func_0x000107c615c0(uVar1);
    puVar3 = *(undefined8 **)(unaff_x22 + 0x80);
    puVar3[1] = uVar9;
    *puVar3 = uVar8;
    puVar3[3] = uVar6;
    puVar3[2] = uVar7;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c78848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c7884c; end: 103c78927;  */

void FUN_103c7884c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(uVar2);
  func_0x000103c6b700();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  if ((int)uVar2 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x10),&UNK_1106f1e20,uVar2);
  }
  func_0x000107c614ac(uVar5);
  func_0x000107c6142c(uVar4);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  puVar1 = *(undefined8 **)(unaff_x22 + 0x80);
  *puVar1 = uVar3;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
                    /* WARNING: Could not recover jumptable at 0x000103c78924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c78928; end: 103c78937;  */

void FUN_103c78928(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c78938; end: 103c78957;  */

void FUN_103c78938(void)

{
  func_0x000107c61168(&PTR_PTR_112ffd300);
  return;
}



/* Entry: 103c78958; end: 103c789df;  */

void FUN_103c78958(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  plVar4 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103c789e0;
  plVar4[0xf] = param_5;
  plVar4[0x10] = unaff_x22 + 0x10;
  plVar4[0xd] = param_3;
  plVar4[0xe] = param_4;
  plVar4[0xb] = param_1;
  plVar4[0xc] = param_2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar4[0x11] = lVar3;
  lVar3 = 0x112d45220;
  FUN_103c78a38(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x12] = lVar2;
  plVar4[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c7856c,lVar2,lVar3);
  return;
}



/* Entry: 103c789e0; end: 103c78a37;  */

void FUN_103c789e0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c78a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c78a38; end: 103c78a77;  */

void FUN_103c78a38(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103c78a78; end: 103c78a8b;  */

void FUN_103c78a78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 103c78a8c; end: 103c78b97;  */

undefined * FUN_103c78a8c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined *puStack_48;
  
  lVar2 = 0;
  func_0x000107c5f94c();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar1 != 0) && (FUN_103c78cd4(puVar4,param_1), puVar3 = puStack_68, unaff_x21 == 0)) {
      func_0x0001016a0a3c((long)puVar4 - extraout_x12,puVar4);
      (**(code **)(lVar5 + 8))((long)puVar4 - extraout_x12,lVar2);
      puVar3 = puStack_48;
    }
  }
  return puVar3;
}



/* Entry: 103c78b98; end: 103c78b9f;  */

void FUN_103c78b98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103c78ba0; end: 103c78c0f;  */

undefined8 * FUN_103c78ba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c78c10; end: 103c78cd3;  */

int FUN_103c78c10(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c78cd4; end: 103c78e8f;  */

void FUN_103c78cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uVar2 = uVar1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  FUN_103c78e90();
  puVar5 = &UNK_1106f16b8;
  puVar3 = &uStack_70;
  func_0x000107c5eb4c(puVar3,&UNK_1106f16b8,uVar2);
  if (unaff_x21 == 0) {
    func_0x000107c61574(uVar1);
    func_0x000107c5f948(param_1,0xd000000000000014,0x800000010efb6070,puVar3,puVar5);
    func_0x00010006c090(puVar3,puVar5);
  }
  else {
    func_0x000107c61574(uVar1);
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x32);
    func_0x000107c5fb78(0xd000000000000030,0x800000010f1b2530);
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c603d0(&stack0xffffffffffffffb8,&uStack_70,uVar2,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_68;
    uVar2 = uStack_70;
    uStack_68 = 1;
    uStack_70 = 0;
    uStack_60 = uVar2;
    uStack_58 = uVar1;
    uVar4 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar4 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(&uStack_70,&UNK_1106f1e20,uVar4);
    }
    func_0x000107c614ac();
    param_4[1] = 1;
    *param_4 = 0;
    param_4[2] = uVar2;
    param_4[3] = uVar1;
  }
  return;
}



/* Entry: 103c78e90; end: 103c78ecf;  */

void FUN_103c78e90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd3d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bd8c;
  func_0x000107c61520(&UNK_10dc6bd8c,&UNK_1106f16b8);
  puRam0000000112ffd3d8 = puVar1;
  return;
}



/* Entry: 103c78ed0; end: 103c78f0b;  */

undefined1  [16] FUN_103c78ed0(void)

{
  return ZEXT816(0x1106f1640);
}



/* Entry: 103c78f0c; end: 103c78f8b;  */

void FUN_103c78f0c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  if (param_2 == 0x6e656b6f74 && param_3 == -0x1b00000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x6e656b6f74,0xe500000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 103c78f8c; end: 103c78f97;  */

undefined1  [16] FUN_103c78f8c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103c78f98; end: 103c78fe7;  */

void FUN_103c78f98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103c795c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103c78fe8; end: 103c790ef;  */

void FUN_103c78fe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112ffd3e0;
  func_0x0001000285a8(0x112ffd3e0,&UNK_10dc6bdb8);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000103c79388();
  func_0x000107c606ec((long)&uStack_70 - extraout_x8,&UNK_1106f1750,&UNK_1106f1750,param_1,uVar1,
                      uVar2);
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000103c793c8();
  func_0x000107c60554(&uStack_70);
  (**(code **)(lVar4 + 8))((long)&uStack_70 - extraout_x8,lVar3);
  return;
}



/* Entry: 103c790f0; end: 103c791df;  */

void FUN_103c790f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112ffd410;
  func_0x0001000285a8(0x112ffd410,&UNK_10dc6bf10);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x000103c795c8();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_1106f1860,&UNK_1106f1860,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 103c791e0; end: 103c791e7;  */

undefined8 FUN_103c791e0(void)

{
  return 1;
}



/* Entry: 103c791e8; end: 103c79263;  */

void FUN_103c791e8(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c79264; end: 103c79287;  */

undefined1  [16] FUN_103c79264(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006f666e4965;
  auVar1._0_8_ = 0x727574616e676973;
  return auVar1;
}



/* Entry: 103c79288; end: 103c79313;  */

void FUN_103c79288(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x73;
  if (param_2 == 0x727574616e676973 && param_3 == -0x12ffff909991b69b) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8();
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 103c79314; end: 103c7931f;  */

undefined1  [16] FUN_103c79314(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103c79320; end: 103c7936f;  */

void FUN_103c79320(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103c79388();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103c79370; end: 103c79407;  */

void FUN_103c79370(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103c78fe8(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Entry: 103c79408; end: 103c79427;  */

undefined8 FUN_103c79408(void)

{
  return 0;
}



/* Entry: 103c79428; end: 103c79467;  */

undefined8 * FUN_103c79428(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103c79468; end: 103c794ff;  */

int FUN_103c79468(int *param_1,int param_2)

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



/* Entry: 103c79500; end: 103c7953f;  */

void FUN_103c79500(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd3f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6be6c;
  func_0x000107c61520(&UNK_10dc6be6c,&UNK_1106f1750);
  puRam0000000112ffd3f8 = puVar1;
  return;
}



/* Entry: 103c79540; end: 103c79543;  */

void FUN_103c79540(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6be04;
  func_0x000107c61520(&UNK_10dc6be04,&UNK_1106f1750);
  puRam0000000112ffd400 = puVar1;
  return;
}



/* Entry: 103c79544; end: 103c79583;  */

void FUN_103c79544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6be04;
  func_0x000107c61520(&UNK_10dc6be04,&UNK_1106f1750);
  puRam0000000112ffd400 = puVar1;
  return;
}



/* Entry: 103c79584; end: 103c79587;  */

void FUN_103c79584(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bddc;
  func_0x000107c61520(&UNK_10dc6bddc,&UNK_1106f1750);
  puRam0000000112ffd408 = puVar1;
  return;
}



/* Entry: 103c79588; end: 103c79607;  */

void FUN_103c79588(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bddc;
  func_0x000107c61520(&UNK_10dc6bddc,&UNK_1106f1750);
  puRam0000000112ffd408 = puVar1;
  return;
}



/* Entry: 103c79608; end: 103c796f7;  */

uint FUN_103c79608(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 103c796f8; end: 103c79737;  */

void FUN_103c796f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bfa8;
  func_0x000107c61520(&UNK_10dc6bfa8,&UNK_1106f1860);
  puRam0000000112ffd420 = puVar1;
  return;
}



/* Entry: 103c79738; end: 103c7973b;  */

void FUN_103c79738(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bf40;
  func_0x000107c61520(&UNK_10dc6bf40,&UNK_1106f1860);
  puRam0000000112ffd428 = puVar1;
  return;
}



/* Entry: 103c7973c; end: 103c7977b;  */

void FUN_103c7973c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bf40;
  func_0x000107c61520(&UNK_10dc6bf40,&UNK_1106f1860);
  puRam0000000112ffd428 = puVar1;
  return;
}



/* Entry: 103c7977c; end: 103c7977f;  */

void FUN_103c7977c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bf18;
  func_0x000107c61520(&UNK_10dc6bf18,&UNK_1106f1860);
  puRam0000000112ffd430 = puVar1;
  return;
}



/* Entry: 103c79780; end: 103c797bf;  */

void FUN_103c79780(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6bf18;
  func_0x000107c61520(&UNK_10dc6bf18,&UNK_1106f1860);
  puRam0000000112ffd430 = puVar1;
  return;
}



/* Entry: 103c797c0; end: 103c79827;  */

void FUN_103c797c0(void)

{
  func_0x000107c60690(0);
  return;
}



/* Entry: 103c79828; end: 103c79b87;  */

long FUN_103c79828(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c79b88; end: 103c79b8b;  */

void FUN_103c79b88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb72b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit7ProductV2idSSvg_110347db8)();
  return;
}



/* Entry: 103c79b8c; end: 103c79bef;  */

void FUN_103c79b8c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKFTu_110347de0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c79bf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit7ProductV8purchase7optionsAC14PurchaseResultOShyAC0F6OptionVG_tYaKF_110347dd8)
            (plVar1,param_1,param_2);
  return;
}



/* Entry: 103c79bf0; end: 103c79c2b;  */

void FUN_103c79bf0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c79c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c79c2c; end: 103c79c47;  */

void FUN_103c79c2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb716c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit11TransactionV2ids6UInt64Vvg_110347c08)();
  return;
}



/* Entry: 103c79c48; end: 103c79d03;  */

void FUN_103c79c48(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x103c79c90;
                    /* WARNING: Could not recover jumptable at 0x00010bdb719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit11TransactionV6finishyyYaF_110347c30)();
  return;
}



/* Entry: 103c79d04; end: 103c79d1b;  */

void FUN_103c79d04(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103c79d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c79d1c; end: 103c79d47;  */

undefined1  [16] FUN_103c79d1c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103c79d48; end: 103c79d8b;  */

void FUN_103c79d48(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000103c79d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return;
}



/* Entry: 103c79d8c; end: 103c79dab;  */

undefined8 FUN_103c79d8c(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x20);
  lVar2 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,unaff_x20 + iVar1,lVar2);
  return param_1;
}



/* Entry: 103c79dac; end: 103c79edb;  */

long * FUN_103c79dac(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    lVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar4;
    iVar2 = *(int *)(param_3 + 0x1c);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x10);
    func_0x000107c61434(lVar4);
    (*pcVar8)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    lVar6 = (long)*(int *)(param_3 + 0x20);
    lVar3 = 0;
    func_0x000107c5eec8();
    lVar7 = *(long *)(lVar3 + -8);
    lVar4 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar4,1,lVar3);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar3);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar3);
    }
    else {
      lVar4 = 0x112d3bc20;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                          *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c79edc; end: 103c79f73;  */

void FUN_103c79edc(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
  iVar1 = *(int *)(param_2 + 0x20);
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar4 = *(long *)(lVar3 + -8);
  lVar2 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103c79f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar3);
  return;
}



/* Entry: 103c79f74; end: 103c7a1d3;  */

undefined8 * FUN_103c79f74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
  pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  func_0x000107c61434(uVar7);
  (*pcVar6)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  lVar4 = (long)*(int *)(param_3 + 0x20);
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar3 + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar3);
  }
  else {
    lVar2 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103c7a1d4; end: 103c7a2bb;  */

undefined8 * FUN_103c7a1d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  lVar4 = (long)*(int *)(param_3 + 0x20);
  lVar3 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar3 + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,lVar3);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar3);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar3);
  }
  else {
    lVar2 = 0x112d3bc20;
    func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  }
  return param_1;
}



/* Entry: 103c7a2bc; end: 103c7a3ff;  */

undefined8 * FUN_103c7a2bc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  uVar9 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar9;
  func_0x000107c6142c(uVar2);
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x28))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  lVar6 = (long)*(int *)(param_3 + 0x20);
  lVar4 = 0;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = (long)param_1 + lVar6;
  (*pcVar8)(lVar3,1,lVar4);
  lVar5 = (long)param_2 + lVar6;
  (*pcVar8)(lVar5,1,lVar4);
  if ((int)lVar3 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,lVar4);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,lVar4);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,lVar4);
    return param_1;
  }
  lVar3 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  func_0x000107c610b4((long)param_1 + lVar6,(long)param_2 + lVar6,
                      *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  return param_1;
}



/* Entry: 103c7a400; end: 103c7a417;  */

void FUN_103c7a400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103c7a418; end: 103c7a4b7;  */

void FUN_103c7a418(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_38 = &UNK_10dc6c170;
  lVar1 = 0x13f;
  puStack_40 = puStack_48;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x0001000b88b8();
    if (param_2 < 0x40) {
      lStack_28 = *(long *)(lVar1 + -8) + 0x40;
      func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 103c7a4b8; end: 103c7a4ef;  */

void FUN_103c7a4b8(undefined8 param_1)

{
  if (lRam0000000112ffd530 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bd834);
  return;
}



/* Entry: 103c7a4f0; end: 103c7a5ab;  */

long * FUN_103c7a4f0(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    iVar5 = *(int *)(param_3 + 0x14);
    lVar6 = 0;
    func_0x000107c5eec8();
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    func_0x000107c61434(lVar7);
    (*pcVar9)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103c7a5ac; end: 103c7a607;  */

/* WARNING: Possible PIC construction at 0x000103c7a5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7a5cc) */

void FUN_103c7a5ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103c7a608; end: 103c7a697;  */

undefined8 * FUN_103c7a608(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  func_0x000107c5eec8();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61434(uVar2);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103c7a698; end: 103c7a81f;  */

undefined8 * FUN_103c7a698(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  iVar2 = *(int *)(param_3 + 0x14);
  lVar3 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *param_2;
  uVar4 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 103c7a820; end: 103c7a837;  */

void FUN_103c7a820(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103c7a838; end: 103c7a8b3;  */

void FUN_103c7a838(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = &UNK_10dc6c1d8;
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dc6c1f0;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103c7a8b4; end: 103c7a917;  */

undefined8 FUN_103c7a8b4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_1[3];
  lVar4 = param_2[3];
  if (lVar3 == 0x10) {
    if (lVar4 == 0x10) {
      return 1;
    }
  }
  else if (lVar3 == 0xf) {
    if (lVar4 == 0xf) {
      return 1;
    }
  }
  else if (1 < lVar4 - 0xfU) {
    uVar2 = param_1[2];
    switch(lVar3) {
    case 1:
      if (lVar4 == 1) {
        return 1;
      }
      break;
    case 2:
      if (lVar4 == 2) {
        return 1;
      }
      break;
    case 3:
      if (lVar4 == 3) {
        return 1;
      }
      break;
    case 4:
      if (lVar4 == 4) {
        return 1;
      }
      break;
    case 5:
      if (lVar4 == 5) {
        return 1;
      }
      break;
    case 6:
      if (lVar4 == 6) {
        return 1;
      }
      break;
    case 7:
      if (lVar4 == 7) {
        return 1;
      }
      break;
    case 8:
      if (lVar4 == 8) {
        return 1;
      }
      break;
    case 9:
      if (lVar4 == 9) {
        return 1;
      }
      break;
    case 10:
      if (lVar4 == 10) {
        return 1;
      }
      break;
    case 0xb:
      if (lVar4 == 0xb) {
        return 1;
      }
      break;
    case 0xc:
      if (lVar4 == 0xc) {
        return 1;
      }
      break;
    case 0xd:
      if (lVar4 == 0xd) {
        return 1;
      }
      break;
    case 0xe:
      if (lVar4 == 0xe) {
        return 1;
      }
      break;
    default:
      if (0xd < lVar4 - 1U) {
        uVar1 = (uint)param_2[1] & 0xff;
        if ((param_1[1] & 0xffU) == 1) {
          if (uVar1 != 1) {
            return 0;
          }
        }
        else {
          if (uVar1 == 1) {
            return 0;
          }
          if (*param_1 != *param_2) {
            return 0;
          }
        }
        if (lVar3 == 0) {
          if (lVar4 == 0) {
            return 1;
          }
        }
        else if (lVar4 != 0) {
          if ((uVar2 == param_2[2]) && (lVar3 == lVar4)) {
            return 1;
          }
          func_0x000107c605b8(uVar2,lVar3,param_2[2],lVar4,0);
          if ((uVar2 & 1) != 0) {
            return 1;
          }
        }
      }
    }
    return 0;
  }
  return 0;
}



/* Entry: 103c7a918; end: 103c7a957;  */

/* WARNING: Possible PIC construction at 0x000103c7a92c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7a930) */
/* WARNING: Removing unreachable block (ram,0x000103c7a94c) */
/* WARNING: Removing unreachable block (ram,0x000103c7a940) */

void FUN_103c7a918(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103c7a958; end: 103c7ab0b;  */

undefined8 * FUN_103c7a958(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  lVar1 = param_2[5];
  func_0x000107c61434();
  if ((lVar1 - 0xfU < 2) || (lVar1 - 1U < 0xe)) {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
  }
  else {
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1[4] = param_2[4];
    param_1[5] = lVar1;
    func_0x000107c61434(lVar1);
  }
  return param_1;
}



/* Entry: 103c7ab0c; end: 103c7ac0f;  */

undefined8 FUN_103c7ab0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c7ac10; end: 103c7ad07;  */

int FUN_103c7ac10(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103c7ad08; end: 103c7af9f;  */

undefined8 * FUN_103c7ad08(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[3];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (((int)uVar1 + -1 < 0xe) && (0xd < uVar2 - 1)) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    func_0x000107c61434(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  return param_1;
}



/* Entry: 103c7afa0; end: 103c7b0d3;  */

int FUN_103c7afa0(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7fffffee < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffef;
  }
  uVar5 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar5) {
    uVar5 = 0xffffffff;
  }
  uVar4 = (int)uVar5 - 1;
  uVar3 = uVar4;
  if (0x7fffffff < uVar4) {
    uVar3 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < uVar3 - 0xd) {
    iVar1 = uVar3 - 0xf;
  }
  iVar2 = 0;
  if (0xd < (int)uVar4) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 103c7b0d4; end: 103c7b17f;  */

void FUN_103c7b0d4(void)

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



/* Entry: 103c7b180; end: 103c7b197;  */

bool FUN_103c7b180(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103c7b198; end: 103c7b1d7;  */

void FUN_103c7b198(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ffd580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc6c324;
  func_0x000107c61520(&UNK_10dc6c324,&UNK_1106f1c80);
  puRam0000000112ffd580 = puVar1;
  return;
}



/* Entry: 103c7b1d8; end: 103c7b33b;  */

int FUN_103c7b1d8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103c7b254;
        goto LAB_103c7b238;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103c7b238:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103c7b254:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103c7b33c; end: 103c7b66f;  */

long FUN_103c7b33c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103c7b670; end: 103c7b79b;  */

undefined1  [16] FUN_103c7b670(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  lVar2 = 0;
  FUN_103c7b79c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar4);
  FUN_103c6ed1c();
  puVar3 = puVar6;
  func_0x000107c614c4(puVar6,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar5 = *puVar6;
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
      lVar4 = 0x112ffccd0;
      func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
      iVar1 = *(int *)(lVar4 + 0x30);
      lVar4 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar6 + (long)iVar1,lVar4);
    }
    else {
      uVar5 = *puVar6;
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
    }
  }
  else if (iVar1 == 2) {
    uVar5 = *puVar6;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
    uVar7 = *(undefined8 *)(&stack0xfffffffffffffff8 + lVar4);
    func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar4));
    func_0x000107c6142c(uVar7);
  }
  else if (iVar1 == 3) {
    uVar5 = *puVar6;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
    func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar4));
  }
  else {
    func_0x000103c6ed60(puVar6);
    uVar8 = 0x800000010f0cdb80;
    uVar5 = 0xd00000000000001d;
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 103c7b79c; end: 103c7b7d3;  */

void FUN_103c7b79c(undefined8 param_1)

{
  if (lRam0000000112ffd5f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7bd9e0);
  return;
}



/* Entry: 103c7b7d4; end: 103c7ba57;  */

undefined1  [16] FUN_103c7b7d4(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  lVar2 = 0;
  FUN_103c7b79c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar4);
  FUN_103c6ed1c();
  puVar3 = puVar6;
  func_0x000107c614c4(puVar6,lVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar5 = *puVar6;
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
      lVar4 = 0x112ffccd0;
      func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
      iVar1 = *(int *)(lVar4 + 0x30);
      lVar4 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar4 + -8) + 8))((long)puVar6 + (long)iVar1,lVar4);
    }
    else {
      uVar5 = *puVar6;
      uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
    }
  }
  else if (iVar1 == 2) {
    uVar5 = *puVar6;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
    uVar7 = *(undefined8 *)(&stack0xfffffffffffffff8 + lVar4);
    func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar4));
    func_0x000107c6142c(uVar7);
  }
  else if (iVar1 == 3) {
    uVar5 = *puVar6;
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar4);
    func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffe8 + lVar4));
  }
  else {
    uVar5 = *(undefined8 *)(&stack0xffffffffffffffe0 + lVar4);
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffe8 + lVar4);
    func_0x000107c6142c(*(undefined8 *)(&stack0xffffffffffffffd8 + lVar4));
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



/* Entry: 103c7ba58; end: 103c7bb1f;  */

/* WARNING: Possible PIC construction at 0x000103c7ba90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c7babc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7ba94) */
/* WARNING: Removing unreachable block (ram,0x000103c7bac0) */

void FUN_103c7ba58(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)lVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
      lVar3 = 0x112ffccd0;
      func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
      iVar1 = *(int *)(lVar3 + 0x30);
      lVar3 = 0;
      func_0x000107c5eec8();
                    /* WARNING: Could not recover jumptable at 0x000103c7bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1 + iVar1,lVar3);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
  else if (iVar1 == 2) {
    func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    if ((iVar1 != 3) && (iVar1 != 4)) {
      return;
    }
    uVar2 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103c7bb20; end: 103c7bd1f;  */

undefined8 * FUN_103c7bb20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  iVar6 = (int)puVar2;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      func_0x000107c61434();
      lVar3 = 0x112ffccd0;
      func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
      iVar6 = *(int *)(lVar3 + 0x30);
      lVar3 = 0;
      func_0x000107c5eec8();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))
                ((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar3);
      goto LAB_103c7bbe0;
    }
  }
  else {
    if (iVar6 == 2) {
      uVar4 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar4;
      uVar5 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar5;
      func_0x000107c61434();
    }
    else {
      uVar1 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar1;
      uVar4 = uVar5;
      uVar5 = uVar1;
    }
    func_0x000107c61434(uVar4);
  }
  func_0x000107c61434(uVar5);
LAB_103c7bbe0:
  func_0x000107c6159c(param_1,param_3,puVar2);
  return param_1;
}



/* Entry: 103c7bd20; end: 103c7be8f;  */

undefined8 * FUN_103c7bd20(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  lVar3 = 0x112ffccd0;
  func_0x0001000285a8(0x112ffccd0,&UNK_10dc6b780);
  iVar1 = *(int *)(lVar3 + 0x30);
  lVar3 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 103c7be90; end: 103c7bebf;  */

void FUN_103c7be90(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103c7be98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103c7bec0; end: 103c7bf5b;  */

void FUN_103c7bec0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_78 [32];
  undefined1 *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = 0x13f;
  func_0x000107c5eec8();
  if (param_2 < 0x40) {
    func_0x000107c61504(auStack_78,&UNK_10dc6c3c8,*(long *)(lVar1 + -8) + 0x40);
    puStack_50 = &UNK_10dc6c3c8;
    puStack_48 = &UNK_10dc6c3e0;
    puStack_40 = &UNK_10dc6c3f8;
    puStack_38 = &UNK_10dc6c3f8;
    puStack_58 = auStack_78;
    func_0x000107c61528(param_1,0x100,5,&puStack_58);
  }
  return;
}


