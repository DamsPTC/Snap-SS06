/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b8b230; end: 101b8b24b;  */

ulong FUN_101b8b230(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8b330);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8b334);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x72656c6c61474353,0xee007972746e4579);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8b3f8);
  (*pcVar2)();
}



/* Entry: 101b8b24c; end: 101b8b3f7;  */

ulong FUN_101b8b24c(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8b330);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8b334);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar4 = param_1;
    func_0x000107c61494();
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x72656c6c61474353,param_4);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8b3f8);
  (*pcVar2)();
}



/* Entry: 101b8b3f8; end: 101b8b437;  */

undefined8 FUN_101b8b3f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101b8b438; end: 101b8b43f;  */

void FUN_101b8b438(long param_1,long param_2)

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



/* Entry: 101b8b440; end: 101b8b4bb;  */

long FUN_101b8b440(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101b8b4bc; end: 101b8b553;  */

undefined8 * FUN_101b8b4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar5 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar5;
  pcVar4 = (code *)**(undefined8 **)(lVar5 + -8);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  (*pcVar4)(param_1 + 2,param_2 + 2,lVar5);
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  uVar1 = param_2[9];
  uVar3 = param_2[10];
  param_1[9] = uVar1;
  param_1[10] = uVar3;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  return param_1;
}



/* Entry: 101b8b554; end: 101b8b61b;  */

undefined8 * FUN_101b8b554(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  func_0x000100083374(param_1 + 2,param_2 + 2);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101b8b61c; end: 101b8b6af;  */

undefined8 * FUN_101b8b61c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(param_1 + 2);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c61170(uVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61170(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101b8b6b0; end: 101b8b75b;  */

int FUN_101b8b6b0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xb] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101b8b75c; end: 101b8bbb3;  */

/* WARNING: Possible PIC construction at 0x000101b8ba24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b8bb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b8ba28) */
/* WARNING: Removing unreachable block (ram,0x000101b8bb38) */

void FUN_101b8b75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *unaff_x20;
  ulong *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_c0;
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
  undefined *puStack_68;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    puVar2 = (undefined *)*unaff_x20;
    func_0x000107c4cd6c();
    func_0x000107c61180();
    puVar13 = puVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    if (puVar13 != (undefined *)0x0) {
      lVar3 = param_1;
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      puVar2 = puVar13;
      func_0x000107c4310c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar2 != (undefined *)0x0) {
        uVar4 = 0x112d508c0;
        func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
        puVar8 = puVar2;
        func_0x000107c5fc54(puVar2,uVar4);
        func_0x000107c61170(puVar2);
      }
      uVar4 = 0x112d508c0;
      func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
      puVar2 = puVar8;
      func_0x000107c5fc48(puVar8,uVar4);
      func_0x000107c6142c(puVar8);
      puVar8 = puVar13;
      func_0x000107c42f94();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      uVar4 = 0x112d511e8;
      func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
      puVar7 = puVar8;
      func_0x000107c5f9e8(puVar8,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(puVar8);
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
      puVar11 = (ulong *)(param_1 + 0x28);
      do {
        if (lVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8bb6c);
          (*pcVar1)();
        }
        if (*(long *)(puVar7 + 0x10) != 0) {
          uVar5 = puVar11[-1];
          uVar10 = *puVar11;
          func_0x000107c61434(uVar10);
          func_0x000107c61434(puVar7);
          uVar9 = uVar10;
          func_0x000100029284();
          if ((uVar9 & 1) != 0) {
            puVar13 = *(undefined **)(*(long *)(puVar7 + 0x38) + uVar5 * 8);
            func_0x000107c615f0(puVar13);
            func_0x000107c6142c(puVar7);
            func_0x000107c6142c(uVar10);
            puVar8 = puVar13;
            func_0x000107c4a274();
            if (((ulong)puVar8 & 1) == 0) {
              puVar8 = puVar13;
              func_0x000107c42950();
              func_0x000107c61180();
              if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8bbb4);
                (*pcVar1)();
              }
              puVar7 = puVar8;
              func_0x000107c5faec();
              func_0x000107c61170(puVar8);
              puVar6 = &uStack_c0;
              func_0x000100403b00(puVar6,puVar7,uVar9);
              func_0x000107c6142c(uStack_b8);
              if (((ulong)puVar6 & 1) != 0) {
                func_0x000107c615f0(puVar13);
                puVar8 = puVar2;
                func_0x000107c61550();
                if (((((ulong)puVar8 & 1) == 0) || ((long)puVar2 < 0)) ||
                   (puVar8 = puVar2, ((ulong)puVar2 >> 0x3e & 1) != 0)) {
                  if ((ulong)puVar2 >> 0x3e == 0) {
                    puVar7 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar7 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar2) {
                      puVar7 = puVar2;
                    }
                    func_0x000107c60480(puVar7);
                  }
                  puVar8 = (undefined *)0x0;
                  FUN_101b8c954(0,puVar7 + 1,1,puVar2,FUN_101a3eb44,FUN_101a3ed00);
                }
                uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
                uVar5 = *(ulong *)(uVar10 + 0x10);
                if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
                  uVar10 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
                  FUN_101b8c954(uVar10,uVar5 + 1,1,puVar8,FUN_101a3eb44,FUN_101a3ed00);
                  uVar10 = uVar10 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
                *(undefined **)(uVar10 + uVar5 * 8 + 0x20) = puVar13;
              }
            }
            goto code_r0x000107c615e8;
          }
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(puVar7);
        }
        puVar8 = puStack_68;
        puVar11 = puVar11 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      func_0x000107c6142c(puVar7);
      func_0x000107c6142c(puVar8);
      if ((ulong)puVar2 >> 0x3e == 0) {
        puVar8 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar8 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar2) {
          puVar8 = puVar2;
        }
        func_0x000107c60480();
      }
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c6142c(puVar2);
      }
      else {
        FUN_101b8c8a8();
        puVar8 = &UNK_11044fb10;
        func_0x000107c613fc(&UNK_11044fb10,0x80,7);
        *(undefined8 *)(puVar8 + 0x38) = uStack_98;
        *(undefined8 *)(puVar8 + 0x30) = uStack_a0;
        *(undefined8 *)(puVar8 + 0x48) = uStack_88;
        *(undefined8 *)(puVar8 + 0x40) = uStack_90;
        *(undefined8 *)(puVar8 + 0x58) = uStack_78;
        *(undefined8 *)(puVar8 + 0x50) = uStack_80;
        *(undefined8 *)(puVar8 + 0x18) = uStack_b8;
        *(undefined8 *)(puVar8 + 0x10) = uStack_c0;
        *(undefined8 *)(puVar8 + 0x28) = uStack_a8;
        *(undefined8 *)(puVar8 + 0x20) = uStack_b0;
        *(undefined8 *)(puVar8 + 0x60) = uStack_70;
        *(undefined **)(puVar8 + 0x68) = puVar2;
        *(undefined8 *)(puVar8 + 0x70) = param_2;
        *(undefined8 *)(puVar8 + 0x78) = param_3;
        func_0x000107c615f0(param_2);
        func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d9da8f8,puVar8);
      }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar13);
      return;
    }
  }
  return;
}



/* Entry: 101b8bbb4; end: 101b8bc37;  */

void FUN_101b8bbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8bc38,uVar1,uVar2);
  return;
}



/* Entry: 101b8bc38; end: 101b8bcfb;  */

void FUN_101b8bc38(ulong param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  int *piVar6;
  long unaff_x22;
  
  FUN_101b8bde0();
  if ((param_1 & 1) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    FUN_101b8be50(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                  *(undefined8 *)(unaff_x22 + 0x28));
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c5fca8(uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101b8bdb0,uVar3,uVar5);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c614f0(uVar3);
  piVar6 = *(int **)(lVar2 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b8bcfc;
                    /* WARNING: Could not recover jumptable at 0x000101b8bcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar3,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Entry: 101b8bcfc; end: 101b8bddf;  */

void FUN_101b8bcfc(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x68) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x101b8bd48,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58));
  return;
}



/* Entry: 101b8bde0; end: 101b8be4f;  */

long FUN_101b8bde0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar3;
      func_0x000107c43c6c(lVar3);
      func_0x000107c61170(lVar3);
    }
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8be50);
  (*pcVar1)();
}



/* Entry: 101b8be50; end: 101b8c233;  */

/* WARNING: Possible PIC construction at 0x000101b8c114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b8c200: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b8c118) */
/* WARNING: Removing unreachable block (ram,0x000101b8c204) */

void FUN_101b8be50(undefined *param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uStack_c0;
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
  undefined *puStack_68;
  
  func_0x000107c614f0();
  (**(code **)(param_3 + 8))();
  if (param_2 == 0) {
    return;
  }
  uVar5 = (ulong)param_1 >> 0x3e;
  puVar12 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if (uVar5 == 0) {
    puVar7 = *(undefined **)(puVar12 + 0x10);
  }
  else {
    puVar7 = puVar12;
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar7 = param_1;
    }
    func_0x000107c60480();
  }
  puVar8 = (undefined *)0x0;
  do {
    if (puVar7 == puVar8) {
      if (uVar5 == 0) {
        puVar7 = *(undefined **)(puVar12 + 0x10);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar7 = puVar12;
        if (((ulong)param_1 & 0x8000000000000000) != 0) {
          puVar7 = param_1;
        }
        func_0x000107c60480();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
      if (puVar7 != (undefined *)0x0) {
        uVar10 = 0;
        do {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar12 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8c128);
              (*pcVar1)();
            }
            uVar11 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
            func_0x000107c615f0(uVar11);
          }
          else {
            uVar11 = uVar10;
            FUN_101b8b230(uVar10,param_1);
          }
          if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8c124);
            (*pcVar1)();
          }
          puVar9 = (undefined *)(uVar10 + 1);
          uVar2 = uVar11;
          puStack_68 = PTR_DAT_11269fa68;
          func_0x000107c61494(uVar11,1,&puStack_68);
          if (uVar2 == 0) {
            func_0x000107c615e8(uVar11);
          }
          else {
            puVar4 = puVar8;
            func_0x000107c61550();
            if ((((int)puVar4 == 0) || ((long)puVar8 < 0)) ||
               (puVar4 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar8 >> 0x3e == 0) {
                puVar3 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar3 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar8) {
                  puVar3 = puVar8;
                }
                func_0x000107c60480(puVar3);
              }
              puVar4 = (undefined *)0x0;
              FUN_101b8c954(0,puVar3 + 1,1,puVar8,FUN_101b8c894,FUN_101b8cb10);
            }
            uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
            uVar11 = *(ulong *)(uVar6 + 0x10);
            puVar8 = puVar4;
            if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar11) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
              FUN_101b8c954(puVar8,uVar11 + 1,1,puVar4,FUN_101b8c894,FUN_101b8cb10);
              uVar6 = (ulong)puVar8 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar6 + 0x10) = uVar11 + 1;
            *(ulong *)(uVar6 + uVar11 * 8 + 0x20) = uVar2;
          }
          uVar10 = uVar10 + 1;
        } while (puVar9 != puVar7);
      }
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar7 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        if (uVar5 != 0) goto LAB_101b8c158;
LAB_101b8c0f4:
        if (puVar7 == *(undefined **)(puVar12 + 0x10)) goto LAB_101b8c16c;
      }
      else {
        puVar7 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar7 = puVar8;
        }
        func_0x000107c60480();
        if (uVar5 == 0) goto LAB_101b8c0f4;
LAB_101b8c158:
        if (((ulong)param_1 & 0x8000000000000000) != 0) {
          puVar12 = param_1;
        }
        func_0x000107c60480();
        if (puVar7 == puVar12) {
LAB_101b8c16c:
          FUN_101b8c8a8(unaff_x20,&uStack_c0);
          puVar12 = &UNK_11044fb38;
          func_0x000107c613fc(&UNK_11044fb38,0x78,7);
          *(undefined8 *)(puVar12 + 0x38) = uStack_98;
          *(undefined8 *)(puVar12 + 0x30) = uStack_a0;
          *(undefined8 *)(puVar12 + 0x48) = uStack_88;
          *(undefined8 *)(puVar12 + 0x40) = uStack_90;
          *(undefined8 *)(puVar12 + 0x58) = uStack_78;
          *(undefined8 *)(puVar12 + 0x50) = uStack_80;
          *(undefined8 *)(puVar12 + 0x18) = uStack_b8;
          *(undefined8 *)(puVar12 + 0x10) = uStack_c0;
          *(undefined8 *)(puVar12 + 0x28) = uStack_a8;
          *(undefined8 *)(puVar12 + 0x20) = uStack_b0;
          *(undefined8 *)(puVar12 + 0x60) = uStack_70;
          *(undefined **)(puVar12 + 0x68) = puVar8;
          *(long *)(puVar12 + 0x70) = param_2;
          func_0x000107c61174(param_2);
          func_0x0001001ca524(0x40,0,0x48,3,0,0,&UNK_10d9da918,puVar12);
          goto code_r0x000107c61170;
        }
      }
      func_0x000107c6142c(puVar8);
      func_0x000108df7438(param_2);
      goto code_r0x000107c61170;
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar12 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8c120);
        (*pcVar1)();
      }
      puVar9 = *(undefined **)(param_1 + (long)puVar8 * 8 + 0x20);
      func_0x000107c615f0(puVar9);
    }
    else {
      puVar9 = puVar8;
      FUN_101b8b230(puVar8,param_1);
    }
    if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8bf24);
      (*pcVar1)();
    }
    puVar4 = puVar9;
    func_0x000107c30788();
    func_0x000107c615e8(puVar9);
    puVar8 = puVar8 + 1;
  } while (((ulong)puVar4 & 1) != 0);
  func_0x000108df9400(param_2);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101b8c234; end: 101b8c2cb;  */

void FUN_101b8c234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8c2cc,uVar3,uVar4);
  return;
}



/* Entry: 101b8c2cc; end: 101b8c347;  */

void FUN_101b8c2cc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  lVar3 = *(long *)(lVar5 + 0x30);
  func_0x0001000a8868(lVar5 + 0x10,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b8c348;
                    /* WARNING: Could not recover jumptable at 0x000101b8c344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 101b8c348; end: 101b8c3db;  */

void FUN_101b8c348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x60));
  if (unaff_x20 == 0) {
    func_0x00010006c090(param_1,param_2);
    func_0x00010006c090(param_3,param_4);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101b8c3dc;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_101b8c430;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101b8c3dc; end: 101b8c42f;  */

void FUN_101b8c3dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  FUN_101b8c4fc(uVar1,uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101b8c42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b8c430; end: 101b8c4fb;  */

void FUN_101b8c430(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(ulong *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  puVar5 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar5 = uVar3;
  func_0x000107c614b0(uVar3);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar2,puVar5,uVar3,uVar6,0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  if ((uVar2 & 1) == 0) {
    func_0x000107c614ac(*puVar5);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    func_0x000107c614ac(uVar3);
    (**(code **)(lVar1 + 8))(uVar6,uVar4);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  }
  func_0x000107c614ac(uVar3);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000101b8c4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b8c4fc; end: 101b8c6f3;  */

void FUN_101b8c4fc(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c5ddc0(uVar2);
  func_0x000107c61180();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c4f1c8(uVar3);
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  func_0x000107c4cb6c(uVar4);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(unaff_x20 + 8);
  uVar5 = uVar11;
  func_0x000107c4cd4c();
  func_0x000107c61180();
  func_0x000107c3d86c();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126c38e8;
  func_0x000107c610f8();
  uVar8 = 0x112e06a58;
  func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
  uVar7 = param_1;
  func_0x000107c5fc48(param_1,uVar8);
  uVar8 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f001b10);
  func_0x000107c46ad0();
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  if (puVar6 != (undefined *)0x0) {
    puVar9 = &UNK_11044fb60;
    func_0x000107c613fc(&UNK_11044fb60,0x18,7);
    *(undefined8 *)(puVar9 + 0x10) = param_1;
    pcStack_70 = FUN_101b8ccd8;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101b8c84c;
    puStack_78 = &UNK_11044fb78;
    ppuVar10 = &puStack_90;
    puStack_68 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_68;
    func_0x000107c61434(param_1);
    func_0x000107c61574(puVar9);
    func_0x000107c509a0(puVar6);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(puVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8c6f4);
  (*pcVar1)();
}



/* Entry: 101b8c6f4; end: 101b8c84b;  */

void FUN_101b8c6f4(ulong param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  
  func_0x000107c602fc(0x24);
  if (param_3 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f001b40);
  bVar3 = (param_1 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x6c6c65636e616320,0xeb000000003d6465);
  bVar3 = (param_2 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 101b8c84c; end: 101b8c893;  */

void FUN_101b8c84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101b8c894; end: 101b8c8a7;  */

void FUN_101b8c894(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e06a60 == (undefined *)0x0 || ((ulong)puRam0000000112e06a60 & 1) != 0) {
    puVar1 = &UNK_10e8a2d9e;
    func_0x000107c61518(&UNK_10e8a2d9e,0x1a,0,0);
    puRam0000000112e06a60 = puVar1;
  }
  return;
}



/* Entry: 101b8c8a8; end: 101b8c8db;  */

undefined8 FUN_101b8c8a8(undefined8 param_1,undefined8 param_2)

{
  FUN_101b8b4bc(param_2,param_1,&UNK_11044fad0);
  return param_2;
}



/* Entry: 101b8c8dc; end: 101b8c953;  */

void FUN_101b8c8dc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x68);
  lVar1 = *(long *)(unaff_x20 + 0x70);
  lVar4 = *(long *)(unaff_x20 + 0x78);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b8ccfc;
  plVar3[4] = lVar1;
  plVar3[5] = lVar4;
  plVar3[2] = unaff_x20 + 0x10;
  plVar3[3] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[6] = lVar1;
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  plVar3[9] = lVar2;
  func_0x000107c5fca8();
  plVar3[10] = lVar1;
  plVar3[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8bc38,lVar1,lVar2);
  return;
}



/* Entry: 101b8c954; end: 101b8ca8f;  */

ulong FUN_101b8c954(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8ca90);
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
  FUN_101b8ca90(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8ca8c);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101b8ca90; end: 101b8cb0f;  */

undefined * FUN_101b8ca90(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 101b8cb10; end: 101b8cc33;  */

long FUN_101b8cb10(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101b8cc30);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101b8cc34);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e06a58;
        func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e06a58;
      func_0x0001000285a8(0x112e06a58,&UNK_10dd02010);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b8cc2c);
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



/* Entry: 101b8cc34; end: 101b8cc9b;  */

void FUN_101b8cc34(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  lVar3 = *(long *)(unaff_x20 + 0x70);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101b8cc9c;
  plVar4[4] = lVar1;
  plVar4[5] = lVar3;
  plVar4[3] = unaff_x20 + 0x10;
  lVar1 = 0;
  func_0x000107c5fcbc();
  plVar4[6] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[7] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[8] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[9] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[10] = lVar3;
  plVar4[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8c2cc,lVar3,lVar1);
  return;
}



/* Entry: 101b8cc9c; end: 101b8ccd7;  */

void FUN_101b8cc9c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b8ccd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b8ccd8; end: 101b8ccff;  */

void FUN_101b8ccd8(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c602fc(0x24);
  if (uVar5 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f001b40);
  bVar3 = (param_1 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x6c6c65636e616320,0xeb000000003d6465);
  bVar3 = (param_2 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar3) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar3) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 101b8cd00; end: 101b8cd97;  */

void FUN_101b8cd00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101b8d498();
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  FUN_101b8d28c(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101b8cd98; end: 101b8ce37; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager isFaceTaggingFeatureEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b8cd98(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_40 [2];
  
  func_0x000107c61174();
  func_0x000100083b20(alStack_40);
  lVar1 = alStack_40[0];
  uVar2 = *(undefined8 *)(alStack_40[0] + _DAT_1130806b8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar1);
  func_0x0001000d224c(alStack_40);
  func_0x000107c61574(uVar2);
  lVar1 = alStack_40[0];
  func_0x000107c49d48(alStack_40[0]);
  func_0x000107c615e8(alStack_40[0]);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 101b8ce38; end: 101b8ce43; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager isFaceTaggingFeatureEnabledWithCompletion:] */

void FUN_101b8ce38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_101b8d4b8();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b8ce44; end: 101b8cf6b;  */

void FUN_101b8ce44(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    puVar1 = PTR_PTR_1126defe0;
    func_0x000107c61168(PTR_PTR_1126defe0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5aca8();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = &UNK_11044fe90;
    func_0x000107c613fc(&UNK_11044fe90,0x20,7);
    *(code **)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    uStack_50 = 0x101b8db20;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_11044fea8;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4db80(puVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101b8cf6c; end: 101b8cf77; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager shouldPromptForFaceTaggingOnHomeTabWithCompletion:] */

void FUN_101b8cf6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  FUN_101b8d558();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b8cf78; end: 101b8cfd7;  */

void FUN_101b8cf78(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*param_4)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b8cfd8; end: 101b8d02b; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager shouldIncludeFaceTagsInUploadWithCompletion:] */

/* WARNING: Possible PIC construction at 0x000101b8d010: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b8d014) */

void FUN_101b8cfd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  func_0x000101b8d718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(param_3);
  return;
}



/* Entry: 101b8d02c; end: 101b8d14f;  */

void FUN_101b8d02c(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    puVar1 = PTR_PTR_1126defd8;
    func_0x000107c61168(PTR_PTR_1126defd8);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c49cac();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = &UNK_11044fe40;
    func_0x000107c613fc(&UNK_11044fe40,0x20,7);
    *(code **)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    uStack_50 = 0x101b8db1c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_11044fe58;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4db80(puVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101b8d150; end: 101b8d15b; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager isEligibleForFaceTaggingWithCompletion:] */

void FUN_101b8d150(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*(code *)0x101b8d718)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b8d15c; end: 101b8d27f;  */

void FUN_101b8d15c(long param_1,code *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    puVar1 = PTR_PTR_1126defe8;
    func_0x000107c61168(PTR_PTR_1126defe8);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar1);
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5ad5c();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    puVar1 = &UNK_11044fdf0;
    func_0x000107c613fc(&UNK_11044fdf0,0x20,7);
    *(code **)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    uStack_50 = 0x101b8daac;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_11044fe08;
    puStack_48 = puVar1;
    func_0x000107c60bc4(&puStack_70);
    puVar1 = puStack_48;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(puVar1);
    func_0x000107c4db80(puVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101b8d280; end: 101b8d28b; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager shouldShowFaceTaggingSettingWithCompletion:] */

void FUN_101b8d280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c60bc4(param_3);
  func_0x000107c60bc4();
  func_0x000107c61174(param_1);
  (*(code *)0x101b8d8d8)();
  func_0x000107c60bd0(param_3);
  func_0x000107c60bd0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b8d28c; end: 101b8d3d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8d28c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar1 = _DAT_112e06a80;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2
            );
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd000000000000031;
  func_0x000107c5fadc(0xd000000000000031,0x800000010f001b60);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e06a78) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e06a70) = param_2;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b8d3d8; end: 101b8d40b;  */

void FUN_101b8d3d8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  if (param_1 == 0) {
    (*pcVar1)();
  }
  else {
    puVar3 = PTR_PTR_1126defe0;
    func_0x000107c61168(PTR_PTR_1126defe0);
    func_0x000107c615f0(param_1);
    func_0x000107c43be4(puVar3);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5aca8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = &UNK_11044fe90;
    func_0x000107c613fc(&UNK_11044fe90,0x20,7);
    *(code **)(puVar3 + 0x10) = pcVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    uStack_50 = 0x101b8db20;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101286f34;
    puStack_58 = &UNK_11044fea8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c4db80(puVar4);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 101b8d40c; end: 101b8d43f;  */

void FUN_101b8d40c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b8d440; end: 101b8d44f;  */

undefined1  [16] FUN_101b8d440(void)

{
  return ZEXT816(0x11044fc68);
}



/* Entry: 101b8d450; end: 101b8d497; -[_TtC33FaceTaggingPermissionsServiceImpl29FaceTaggingPermissionsManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8d450(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e06a78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e06a70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e06a80));
  return;
}



/* Entry: 101b8d498; end: 101b8d4b7;  */

void FUN_101b8d498(void)

{
  func_0x000107c61168(&PTR_PTR_1127fbb58);
  return;
}



/* Entry: 101b8d4b8; end: 101b8d557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8d4b8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_40 [2];
  
  func_0x000100083b20(alStack_40);
  lVar1 = alStack_40[0];
  uVar2 = *(undefined8 *)(alStack_40[0] + _DAT_1130806b8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar1);
  func_0x0001000d224c(alStack_40);
  func_0x000107c61574(uVar2);
  lVar1 = alStack_40[0];
  func_0x000107c49d48(alStack_40[0]);
  func_0x000107c615e8(alStack_40[0]);
  (**(code **)(param_2 + 0x10))(param_2,lVar1);
  return;
}



/* Entry: 101b8d558; end: 101b8da97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8d558(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = &UNK_11044fd78;
  func_0x000107c613fc(&UNK_11044fd78,0x18,7);
  *(long *)(puVar1 + 0x10) = param_2;
  func_0x000107c60bc4(param_2);
  func_0x000100083b20(&puStack_70);
  puVar3 = puStack_70;
  uVar5 = *(undefined8 *)(puStack_70 + _DAT_1130806b8);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(puVar3);
  func_0x0001000d224c(&puStack_70);
  func_0x000107c61574(uVar5);
  puVar3 = puStack_70;
  puVar2 = puStack_70;
  func_0x000107c49d48();
  func_0x000107c615e8(puVar3);
  if ((int)puVar2 == 0) {
    (**(code **)(param_2 + 0x10))(param_2,0);
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000100083b20(&puStack_70);
    uVar5 = *(undefined8 *)(puStack_70 + _DAT_112ff82c0);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(puStack_70);
    puVar3 = &UNK_11044fda0;
    func_0x000107c613fc(&UNK_11044fda0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x101b8db14;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    uStack_50 = 0x101b8db18;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1011eaae0;
    puStack_58 = &UNK_11044fdb8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c44284(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 101b8da98; end: 101b8daaf;  */

void FUN_101b8da98(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101b8daa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 101b8dab0; end: 101b8dad7;  */

void FUN_101b8dab0(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c3ebcc();
  }
  (*pcVar1)();
  return;
}



/* Entry: 101b8dad8; end: 101b8db33;  */

void FUN_101b8dad8(long param_1,long param_2)

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



/* Entry: 101b8db34; end: 101b8de87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8db34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [5];
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 auStack_78 [3];
  
  uVar2 = 0x112d51878;
  func_0x0001000285a8(0x112d51878,&UNK_10d9186c0);
  func_0x0001000bda74(param_3,uVar2);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_6 != 0) {
    uVar3 = 0;
    func_0x000101b8e00c();
    func_0x0001000d224c(auStack_78);
    uVar4 = auStack_78[0];
    func_0x000107c614f0();
    func_0x000100083b20(&lStack_80);
    uVar5 = *(undefined8 *)(lStack_80 + _DAT_112ff5600);
    func_0x000107c6157c();
    func_0x000107c61170(lStack_80);
    func_0x000100083b20(&uStack_88);
    uVar6 = uStack_88;
    func_0x000107c4cd6c();
    func_0x000107c61180();
    func_0x000107c61170(uStack_88);
    func_0x0001000285a8(0x112d62478,&UNK_10d928340);
    func_0x000107c6157c(in_stack_00000018);
    func_0x000100083b20(auStack_b8);
    uVar2 = auStack_b8[0];
    func_0x000107c4cbc4();
    func_0x000107c61180();
    func_0x000107c61170(auStack_b8[0]);
    uVar7 = uVar2;
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&lStack_90);
    func_0x0001007a5aa4(lStack_90 + _DAT_112e2cf80,auStack_b8);
    func_0x000107c61170(lStack_90);
    func_0x0001000285a8(0x112e06ad0,&UNK_10d9daa68);
    func_0x000107c613fc();
    func_0x000107c6157c(in_stack_00000030);
    pcVar1 = FUN_101b8df3c;
    func_0x0001000bdd8c(FUN_101b8df3c,in_stack_00000030);
    func_0x0001000285a8(0x112e06ad8,&UNK_10d9daa70);
    func_0x000107c613fc();
    func_0x000107c6157c(in_stack_00000038);
    uVar2 = 0x101b8df44;
    func_0x0001000bdd8c(0x101b8df44,in_stack_00000038);
    uStack_d0 = in_stack_00000018;
    uVar8 = 0;
    uStack_c8 = param_5;
    uStack_c0 = param_4;
    func_0x0001007a5a84();
    uVar9 = 0;
    func_0x0001007a5918();
    uVar10 = 0;
    func_0x0001007a58f8();
    func_0x000107c61174();
    func_0x000107c6157c(in_stack_00000008);
    func_0x000107c6157c(in_stack_00000010);
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    FUN_101b9ce64(param_2,param_3,&uStack_c0,&uStack_c8,param_6,auStack_78[0],uVar5,uVar6,
                  in_stack_00000000,in_stack_00000008,in_stack_00000010,&uStack_d0,uVar7,auStack_b8,
                  pcVar1,uVar2,uVar3,uVar8,uVar9,uVar10,uVar4,&PTR_DAT_110450650,&PTR_DAT_1104832c8,
                  &PTR_DAT_110450878);
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8de88);
  (*pcVar1)();
}



/* Entry: 101b8de88; end: 101b8def7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8de88(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11303eae0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(param_1);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101b8def8; end: 101b8df3b;  */

void FUN_101b8def8(void)

{
  long unaff_x20;
  
  FUN_101b8db34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101b8df3c; end: 101b8df4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8df3c(undefined8 param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_11303eae0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(lStack_38);
  func_0x0001000d224c(param_1);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 101b8df50; end: 101b8e02b;  */

void FUN_101b8df50(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x0001000834e4(unaff_x20 + 0x48);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x0001000834e4(unaff_x20 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x0001000834e4(unaff_x20 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  return;
}



/* Entry: 101b8e02c; end: 101b8e593;  */

void FUN_101b8e02c(ulong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *apuStack_f0 [3];
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  ulong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  ulong uStack_78;
  ulong auStack_70 [2];
  
  uVar3 = param_1;
  FUN_101b9d1cc();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c49e3c();
    if (param_1 >> 0x3e == 0) {
      uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar11 = param_1;
      }
      func_0x000107c60480();
    }
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar11 != 0) {
      puStack_c8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101b9b784(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8e594);
        (*pcVar2)();
      }
      uVar12 = 0;
      do {
        puVar10 = puStack_c8;
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(long *)((param_1 & 0xffffffffffffff8) + 0x10) <= (long)uVar12) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8e49c);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar12;
          FUN_101b9bcc0(uVar12,param_1,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        func_0x000107c61174();
        uVar6 = uVar5;
        FUN_101bad438();
        func_0x000107c61170(uVar5);
        uVar1 = *(ulong *)(puVar10 + 0x10);
        puStack_c8 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
          FUN_101b9b784(1 < *(ulong *)(puVar10 + 0x18),uVar1 + 1,1);
        }
        uVar12 = uVar12 + 1;
        *(ulong *)(puStack_c8 + 0x10) = uVar1 + 1;
        *(ulong *)(puStack_c8 + uVar1 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puStack_c8 + uVar1 * 0x10 + 0x28) = uVar6;
        puVar10 = puStack_c8;
      } while (uVar11 != uVar12);
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0x78);
    puVar7 = &UNK_1104500c8;
    func_0x000107c613fc(&UNK_1104500c8,0x18,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar9;
    puVar8 = &UNK_1104500f0;
    func_0x000107c613fc(&UNK_1104500f0,0x18,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar9;
    func_0x000107c615f4(uVar9,2);
    FUN_101b8e614(&puStack_c8,puVar10,(int)uVar4,FUN_101b9d280,puVar7,0x101b9d298,puVar8);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar8);
    func_0x000107c6142c(puVar10);
    auStack_70[0] = uStack_a8;
    if (uStack_a8 >> 0x3e != 0) {
      uVar11 = uStack_a8;
      if (-1 < (long)uStack_a8) {
        uVar11 = uStack_a8 & 0xffffffffffffff8;
      }
      func_0x000107c60480(uVar11);
    }
    uStack_78 = uStack_b0;
    if (uStack_b0 >> 0x3e == 0) {
      uVar11 = *(ulong *)((uStack_b0 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar11 = uStack_b0;
      if (-1 < (long)uStack_b0) {
        uVar11 = uStack_b0 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    uVar12 = uStack_b8;
    puVar10 = PTR___sytN_11034f1b0;
    if (uVar11 != 0) {
      uStack_88 = uStack_c0;
      puStack_80 = puStack_c8;
      uStack_90 = uStack_b8;
      puVar7 = &UNK_110450118;
      func_0x000107c613fc(&UNK_110450118,0x41,7);
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar7 + 0x20) = uStack_c0;
      *(undefined **)(puVar7 + 0x18) = puStack_c8;
      *(ulong *)(puVar7 + 0x30) = uStack_b0;
      *(ulong *)(puVar7 + 0x28) = uStack_b8;
      *(ulong *)(puVar7 + 0x38) = uStack_a8;
      puVar7[0x40] = param_2 & 1;
      func_0x000107c6157c(unaff_x20);
      FUN_101b9d31c(&puStack_80,apuStack_f0,0x112e06c00,&UNK_10d9daba0);
      FUN_101b9d31c(&uStack_88,apuStack_f0,0x112e06c00,&UNK_10d9daba0);
      FUN_101b9d31c(&uStack_90,apuStack_f0,0x112e06c08,&UNK_10d9daba8);
      FUN_101b9d31c(&uStack_78,apuStack_f0,0x112e06c08,&UNK_10d9daba8);
      FUN_101b9d31c(auStack_70,apuStack_f0,0x112e06c08,&UNK_10d9daba8);
      uVar9 = 0xa3;
      func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10d9dab98,puVar7,puVar10 + 8);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar9);
    }
    if (uVar12 >> 0x3e == 0) {
      uVar12 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)uVar12) {
        uVar12 = uVar12 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    if (uVar12 == 0) {
      func_0x000107c615e8(uVar3);
      apuStack_f0[0] = puStack_c8;
      func_0x000101b9d8a0(apuStack_f0,0x112e06c00,&UNK_10d9daba0);
      uStack_a0 = uStack_c0;
      func_0x000101b9d8a0(&uStack_a0,0x112e06c00,&UNK_10d9daba0);
      func_0x000101b9d8a0(auStack_98,0x112e06c08,&UNK_10d9daba8);
      func_0x000101b9d8a0(&uStack_78,0x112e06c08,&UNK_10d9daba8);
      func_0x000101b9d8a0(auStack_70,0x112e06c08,&UNK_10d9daba8);
    }
    else {
      uStack_a0 = 1;
      func_0x0001000d224c(apuStack_f0);
      if (lStack_d8 == 0) {
        func_0x000101b9d8a0(apuStack_f0,0x112e06c10,&UNK_10d9dabb0);
      }
      else {
        func_0x0001000a8868(apuStack_f0,lStack_d8);
        (**(code **)(lStack_d0 + 8))
                  (&uStack_a0,&UNK_110450488,&PTR_DAT_110450458,lStack_d8,lStack_d0);
        func_0x0001000834e4(apuStack_f0);
      }
      puVar7 = &UNK_110450140;
      func_0x000107c613fc(&UNK_110450140,0x52,7);
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar7 + 0x20) = uStack_c0;
      *(undefined **)(puVar7 + 0x18) = puStack_c8;
      *(ulong *)(puVar7 + 0x30) = uStack_b0;
      *(ulong *)(puVar7 + 0x28) = uStack_b8;
      *(ulong *)(puVar7 + 0x38) = uStack_a8;
      *(undefined8 *)(puVar7 + 0x40) = param_3;
      *(undefined8 *)(puVar7 + 0x48) = param_4;
      puVar7[0x50] = (char)uVar4;
      puVar7[0x51] = param_2 & 1;
      func_0x000107c6157c(unaff_x20);
      FUN_101b9d3f4(param_3,param_4);
      uVar9 = 0xa3;
      func_0x0001001ca524(0xa3,0,0x48,4,0,0,&UNK_10d9dabc0,puVar7,puVar10 + 8);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(uVar9);
      func_0x000107c615e8(uVar3);
    }
  }
  return;
}



/* Entry: 101b8e594; end: 101b8e613; -[_TtC35MemoriesFeaturedStorySnapGeneration34MemoriesFeaturedStorySnapGenerator scheduleClientGenOperationsForCollections:scheduleJobsImmediately:] */

void FUN_101b8e594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_101b9d860(0,0x112d61d40,&PTR_PTR_1126bf9a8);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c6157c(param_1);
  FUN_101b8e02c(param_3,param_4,0,0);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101b8e614; end: 101b8eaa7;  */

void FUN_101b8e614(undefined8 *param_1,long param_2,uint param_3,code *param_4,undefined8 param_5,
                  code *param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined *apuStack_b0 [9];
  undefined *puStack_68;
  
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  apuStack_b0[0] = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar16 = *(long *)(param_2 + 0x10);
  if (lVar16 != 0) {
    puVar15 = (undefined8 *)(param_2 + 0x28);
    lVar12 = lVar16;
    do {
      func_0x000107c61434(*puVar15);
      func_0x000101b9b1d8();
      lVar12 = lVar12 + -1;
      puVar15 = puVar15 + 2;
    } while (lVar12 != 0);
  }
  puVar3 = apuStack_b0[0];
  puStack_68 = puVar2;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_101b9a554(0,apuStack_b0[0]);
    if (((uVar4 & 1) != 0) && ((*param_4)(), (uVar4 & 1) != 0)) {
      FUN_101bab294(apuStack_b0,0);
    }
  }
  uVar4 = 1;
  FUN_101b9a554(1,puVar3);
  if (((uVar4 & 1) != 0) && ((*param_6)(), (uVar4 & 1) != 0)) {
    FUN_101bab294(apuStack_b0,1);
  }
  puVar2 = puStack_68;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar16 != 0) {
    lVar12 = 0;
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar15 = (undefined8 *)(param_2 + 0x20 + lVar12 * 0x10);
      uVar1 = *puVar15;
      lVar11 = puVar15[1];
      puVar5 = puVar14;
      if (*(long *)(lVar11 + 0x10) != 0) {
        func_0x000107c6068c(apuStack_b0,*(undefined8 *)(lVar11 + 0x28));
        uVar4 = 1;
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar9 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
        uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar11 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
          do {
            if (*(char *)(*(long *)(lVar11 + 0x30) + uVar4) == '\x01') {
              func_0x000107c61174(uVar1);
              goto LAB_101b8e9c4;
            }
            uVar4 = uVar4 + 1 & ~uVar9;
          } while ((*(ulong *)(lVar11 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0);
        }
      }
      uVar6 = uVar1;
      func_0x000107c61174(uVar1);
      func_0x000107c61434(lVar11);
      puVar7 = puVar2;
      FUN_101b9b2c8(puVar2,lVar11);
      func_0x000107c6142c(lVar11);
      if (((ulong)puVar7 & 1) == 0) {
LAB_101b8e9c4:
        func_0x000107c61174(uVar1);
        puVar7 = puVar14;
        func_0x000107c61550();
        if ((((int)puVar7 == 0) || ((long)puVar14 < 0)) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar7 = puVar14;
            }
            func_0x000107c60480(puVar7);
          }
          puVar5 = (undefined *)0x0;
          FUN_101b9c250(0,puVar7 + 1,1,puVar14,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                        &UNK_10d9dac00);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar4 = *(ulong *)(uVar9 + 0x10);
        lVar11 = uVar4 + 1;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_101b9c250(puVar7,lVar11,1,puVar5,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                        &UNK_10d9dac00);
          puVar14 = puVar7;
          goto LAB_101b8ea20;
        }
      }
      else {
        func_0x000107c61174(uVar6);
        if ((param_3 & 1) == 0) {
          puVar7 = puVar10;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar10 < 0)) ||
             (puVar8 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar7 = puVar10;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            FUN_101b9c250(0,puVar7 + 1,1,puVar10,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                          &UNK_10d9dac00);
          }
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar4 = *(ulong *)(uVar9 + 0x10);
          lVar11 = uVar4 + 1;
          puVar10 = puVar8;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_101b9c250(puVar7,lVar11,1,puVar8,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                          &UNK_10d9dac00);
            puVar10 = puVar7;
            goto LAB_101b8ea20;
          }
        }
        else {
          puVar7 = puVar13;
          func_0x000107c61550();
          if ((((int)puVar7 == 0) || ((long)puVar13 < 0)) ||
             (puVar8 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar13 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar13) {
                puVar7 = puVar13;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            FUN_101b9c250(0,puVar7 + 1,1,puVar13,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                          &UNK_10d9dac00);
          }
          uVar9 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar4 = *(ulong *)(uVar9 + 0x10);
          lVar11 = uVar4 + 1;
          puVar13 = puVar8;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar4) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_101b9c250(puVar7,lVar11,1,puVar8,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                          &UNK_10d9dac00);
            puVar13 = puVar7;
LAB_101b8ea20:
            uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
            puVar5 = puVar14;
          }
        }
      }
      lVar12 = lVar12 + 1;
      *(long *)(uVar9 + 0x10) = lVar11;
      *(undefined8 *)(uVar9 + uVar4 * 8 + 0x20) = uVar1;
      func_0x000107c61170(uVar1);
      puVar14 = puVar5;
    } while (lVar12 != lVar16);
  }
  *param_1 = puVar3;
  param_1[1] = puVar2;
  param_1[2] = puVar5;
  param_1[3] = puVar13;
  param_1[4] = puVar10;
  return;
}



/* Entry: 101b8eaa8; end: 101b8eb0b;  */

void FUN_101b8eaa8(undefined8 param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(param_3 + 0x18);
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b8eb0c;
  *(undefined1 *)(plVar1 + 0x18) = param_4;
  plVar1[0xe] = lVar3;
  plVar1[0xf] = param_2;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar1[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0x11] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x12] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8ebac,0,0);
  return;
}



/* Entry: 101b8eb0c; end: 101b8ebab;  */

void FUN_101b8eb0c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b8eb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b8ebac; end: 101b8ec73;  */

void FUN_101b8ebac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c5eec4(uVar3);
  func_0x000107c5eeac();
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  (**(code **)(lVar2 + 8))(uVar3,uVar4);
  func_0x0001000d224c(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x60);
  func_0x0001000a8868(unaff_x22 + 0x40,uVar3);
  piVar6 = *(int **)(lVar2 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b8ec74;
                    /* WARNING: Could not recover jumptable at 0x000101b8ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(param_1,param_2,uVar3,lVar2);
  return;
}



/* Entry: 101b8ec74; end: 101b8ecbb;  */

void FUN_101b8ec74(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8ecbc,0,0);
  return;
}



/* Entry: 101b8ecbc; end: 101b8eff3;  */

void FUN_101b8ecbc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long unaff_x22;
  ulong uVar20;
  
  uVar16 = *(ulong *)(unaff_x22 + 0x70);
  func_0x0001000834e4(unaff_x22 + 0x40);
  if (uVar16 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar18 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x70)) {
      uVar18 = *(ulong *)(unaff_x22 + 0x70);
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar18 != 0) {
    lVar15 = *(long *)(unaff_x22 + 0x70);
    uVar6 = 0;
    do {
      while( true ) {
        if ((uVar16 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101b8ee54);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(lVar15 + 0x20 + uVar6 * 8);
          func_0x000107c61174();
          lVar13 = param_2;
        }
        else {
          lVar13 = *(long *)(unaff_x22 + 0x70);
          uVar4 = uVar6;
          FUN_101b9bcc0(uVar6,lVar13,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101b8ee50);
          (*pcVar3)();
        }
        uVar20 = uVar6 + 1;
        func_0x000107c61174();
        uVar5 = uVar4;
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (uVar5 == 0) break;
        uVar6 = uVar5;
        func_0x000107c5faec();
        param_2 = lVar13;
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
        puVar7 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar7 & 1) == 0) {
          param_2 = *(long *)(puVar9 + 0x10) + 1;
          puVar8 = (undefined *)0x0;
          FUN_101b9beb8(0,param_2,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar4 = *(ulong *)(puVar8 + 0x10);
        lVar1 = uVar4 + 1;
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          param_2 = lVar1;
          FUN_101b9beb8(puVar9,lVar1,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(long *)(puVar9 + 0x10) = lVar1;
        *(ulong *)(puVar9 + uVar4 * 0x10 + 0x20) = uVar6;
        *(long *)(puVar9 + uVar4 * 0x10 + 0x28) = lVar13;
        uVar6 = uVar20;
        if (uVar20 == uVar18) goto LAB_101b8ee78;
      }
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      param_2 = lVar13;
      uVar6 = uVar6 + 1;
    } while (uVar20 != uVar18);
  }
LAB_101b8ee78:
  lVar15 = *(long *)(unaff_x22 + 0x78);
  *(undefined **)(unaff_x22 + 0x68) = puVar9;
  uVar17 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar19 = uVar17;
  func_0x00010011d734();
  uVar10 = 0x202c;
  uVar14 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar17,uVar19);
  func_0x000107c6142c(puVar9);
  uVar17 = *(undefined8 *)(lVar15 + 0x70);
  uVar19 = *(undefined8 *)(lVar15 + 0x110);
  puVar9 = &UNK_110450168;
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar15);
  puVar7 = &UNK_110450190;
  func_0x000107c613fc(&UNK_110450190,0x50,7);
  *(undefined **)(puVar7 + 0x10) = puVar9;
  *(undefined8 *)(puVar7 + 0x18) = 0xd00000000000001b;
  *(undefined8 *)(puVar7 + 0x20) = 0x800000010f001c20;
  puVar7[0x28] = 0;
  *(undefined8 *)(puVar7 + 0x30) = 0;
  *(undefined8 *)(puVar7 + 0x38) = 0;
  *(undefined8 *)(puVar7 + 0x40) = uVar10;
  *(undefined8 *)(puVar7 + 0x48) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = 0x101b9d404;
  *(undefined **)(unaff_x22 + 0x38) = puVar7;
  puVar11 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x20) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 0x28) = &UNK_1104501a8;
  func_0x000107c60bc4();
  uVar10 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c61434(uVar14);
  func_0x000107c61574(uVar10);
  func_0x000108ec0f10(uVar17,uVar19,puVar11);
  func_0x000107c60bd0(puVar11);
  func_0x000107c6142c(uVar14);
  plVar12 = (long *)0x3e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101b8eff4;
  uVar2 = *(undefined1 *)(unaff_x22 + 0xc0);
  lVar15 = *(long *)(unaff_x22 + 0x70);
  plVar12[0x50] = *(long *)(unaff_x22 + 0x78);
  *(undefined1 *)(plVar12 + 0x7a) = uVar2;
  plVar12[0x4f] = lVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b92758,0,0);
  return;
}



/* Entry: 101b8eff4; end: 101b8f04f;  */

void FUN_101b8eff4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b8f050;
  }
  else {
    pcVar1 = FUN_101b8f118;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b8f050; end: 101b8f117;  */

void FUN_101b8f050(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar3 = &UNK_1104501e0;
  func_0x000107c613fc(&UNK_1104501e0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(uVar2);
  func_0x000100859150(0xa3,0,0x48,4,0,0,&UNK_10d9dabe8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101b8f114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b8f118; end: 101b8f1e7;  */

void FUN_101b8f118(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xb8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar3 = &UNK_1104501e0;
  func_0x000107c613fc(&UNK_1104501e0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar5;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(uVar2);
  func_0x000100859150(0xa3,0,0x48,4,0,0,&UNK_10d9dabe8,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101b8f1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b8f1e8; end: 101b8f253;  */

void FUN_101b8f1e8(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x49) = param_7;
  *(undefined1 *)(unaff_x22 + 0x48) = param_6;
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  lVar1 = *(long *)(param_3 + 8);
  lVar2 = *(long *)(param_3 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(long *)(unaff_x22 + 0x28) = lVar2;
  plVar3 = (long *)0x2e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101b8f254;
  plVar3[0x3a] = lVar1;
  plVar3[0x3b] = param_2;
  plVar3[0x39] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8f398,0,0);
  return;
}



/* Entry: 101b8f254; end: 101b8f37b;  */

void FUN_101b8f254(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101b8f2a4,0,0);
  return;
}



/* Entry: 101b8f37c; end: 101b8f397;  */

void FUN_101b8f37c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b8f398,0,0);
  return;
}



/* Entry: 101b8f398; end: 101b8f983;  */

/* WARNING: Possible PIC construction at 0x000101b8f8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b8f91c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b8f8d0) */
/* WARNING: Removing unreachable block (ram,0x000101b8f920) */
/* WARNING: Removing unreachable block (ram,0x000101b9e2d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */
/* WARNING: Removing unreachable block (ram,0x000101b8f790) */
/* WARNING: Removing unreachable block (ram,0x000101b8f550) */

void FUN_101b8f398(undefined8 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x22;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *apuStack_68 [2];
  
  uVar13 = *(ulong *)(unaff_x22 + 0x1c8);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101690820();
  if (uVar13 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x1c8)) {
      uVar15 = *(ulong *)(unaff_x22 + 0x1c8);
    }
    func_0x000107c60480();
  }
  *(ulong *)(unaff_x22 + 0x1e0) = uVar13 & 0xffffffffffffff8;
  *(ulong *)(unaff_x22 + 0x1e8) = uVar15;
  puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    lVar11 = *(long *)(unaff_x22 + 0x1c8);
    puVar5 = param_2;
    uVar9 = 0;
    do {
      while( true ) {
        if ((uVar13 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8f6d8);
            (*pcVar1)();
          }
          uVar3 = *(ulong *)(lVar11 + 0x20 + uVar9 * 8);
          func_0x000107c61174();
          param_2 = puVar5;
        }
        else {
          param_2 = *(undefined **)(unaff_x22 + 0x1c8);
          uVar3 = uVar9;
          FUN_101b9bcc0(uVar9,param_2,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8f6d4);
          (*pcVar1)();
        }
        uVar18 = uVar9 + 1;
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c3fd78();
        func_0x000107c61180();
        if (uVar4 == 0) break;
        uVar9 = uVar4;
        func_0x000107c5faec();
        puVar5 = param_2;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        puVar14 = puVar19;
        func_0x000107c61558();
        puVar8 = puVar19;
        if (((ulong)puVar14 & 1) == 0) {
          puVar5 = (undefined *)(*(long *)(puVar19 + 0x10) + 1);
          puVar8 = (undefined *)0x0;
          FUN_101b9beb8(0,puVar5,1,puVar19,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar3 = *(ulong *)(puVar8 + 0x10);
        puVar14 = (undefined *)(uVar3 + 1);
        puVar19 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
          puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          puVar5 = puVar14;
          FUN_101b9beb8(puVar19,puVar14,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(undefined **)(puVar19 + 0x10) = puVar14;
        *(ulong *)(puVar19 + uVar3 * 0x10 + 0x20) = uVar9;
        *(undefined **)(puVar19 + uVar3 * 0x10 + 0x28) = param_2;
        param_2 = puVar5;
        uVar9 = uVar18;
        if (uVar18 == uVar15) goto LAB_101b8f53c;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      puVar5 = param_2;
      uVar9 = uVar9 + 1;
    } while (uVar18 != uVar15);
  }
LAB_101b8f53c:
  puVar5 = puVar19;
  FUN_101b9a3dc();
  func_0x000107c6142c(puVar19);
  puVar19 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar14 = *(undefined **)(puVar19 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar14 = puVar19;
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar14 = puVar5;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar14 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar19 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8f6e0);
            (*pcVar1)();
          }
          puVar17 = *(undefined **)(puVar5 + (long)puVar6 * 8 + 0x20);
          func_0x000107c615f0(puVar17);
          puVar10 = param_2;
        }
        else {
          puVar17 = puVar6;
          puVar10 = puVar5;
          FUN_101b8b230();
        }
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8f6dc);
          (*pcVar1)();
        }
        puVar16 = puVar6 + 1;
        puVar7 = puVar17;
        func_0x000107c42c98();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) break;
        puVar6 = puVar7;
        func_0x000107c5faec();
        param_2 = puVar10;
        func_0x000107c61170(puVar7);
        puVar7 = puVar8;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          param_2 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
          puVar7 = (undefined *)0x0;
          FUN_101b9c0e8(0,param_2,1,puVar8);
          puVar8 = puVar7;
        }
        uVar13 = *(ulong *)(puVar8 + 0x10);
        puVar7 = (undefined *)(uVar13 + 1);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          param_2 = puVar7;
          FUN_101b9c0e8(puVar8,puVar7,1);
        }
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined **)(puVar8 + uVar13 * 0x18 + 0x20) = puVar6;
        *(undefined **)(puVar8 + uVar13 * 0x18 + 0x28) = puVar10;
        *(undefined **)(puVar8 + uVar13 * 0x18 + 0x30) = puVar17;
        puVar6 = puVar16;
        if (puVar16 == puVar14) goto LAB_101b8f720;
      }
      func_0x000107c615e8(puVar17);
      param_2 = puVar10;
      puVar6 = puVar6 + 1;
    } while (puVar16 != puVar14);
  }
LAB_101b8f720:
  func_0x000107c6142c(puVar5);
  puVar19 = *(undefined **)(puVar8 + 0x10);
  apuStack_68[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar19 != (undefined *)0x0) {
    uVar12 = 0x112e06c18;
    func_0x0001000285a8(0x112e06c18,&UNK_10d9dabf0);
    func_0x000107c60498(puVar19,uVar12);
    apuStack_68[0] = puVar19;
  }
  FUN_101b9d5ec(puVar8,1,apuStack_68);
  func_0x000107c6142c(puVar8);
  *(undefined **)(unaff_x22 + 0x1f0) = apuStack_68[0];
  puVar19 = apuStack_68[0];
  if (uVar15 != 0) {
    uVar13 = 0;
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(*(long *)(unaff_x22 + 0x1d8) + 0x108);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(*(long *)(unaff_x22 + 0x1d8) + 0x88);
    do {
      *(undefined **)(unaff_x22 + 0x218) = puVar2;
      *(undefined8 *)(unaff_x22 + 0x210) = 0;
      *(undefined **)(unaff_x22 + 0x208) = puVar2;
      uVar15 = *(ulong *)(unaff_x22 + 0x1c8);
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8f984);
          (*pcVar1)();
        }
        uVar9 = *(ulong *)(uVar15 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar13;
        FUN_101b9bcc0(uVar13,uVar15,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x220) = uVar9;
      *(ulong *)(unaff_x22 + 0x228) = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8f980);
        (*pcVar1)();
      }
      uVar13 = uVar9;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar13 == 0) {
        func_0x000107c61170(uVar9);
      }
      else {
        lVar11 = *(long *)(unaff_x22 + 0x1f0);
        uVar3 = uVar13;
        func_0x000107c5faec();
        func_0x000107c61170(uVar13);
        *(ulong *)(unaff_x22 + 0x230) = uVar3;
        *(ulong *)(unaff_x22 + 0x238) = uVar15;
        if (*(long *)(lVar11 + 0x10) != 0) {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
          uVar13 = uVar15;
          func_0x000100029284();
          lVar11 = *(long *)(unaff_x22 + 0x1f0);
          if ((uVar13 & 1) == 0) {
            func_0x000107c61170(uVar9);
            func_0x000107c6142c(uVar15);
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar3 * 8);
            *(undefined8 *)(unaff_x22 + 0x240) = uVar12;
            func_0x000107c615f0(uVar12);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_release_11034f4c0)(lVar11);
          return;
        }
        func_0x000107c61170(uVar9);
        func_0x000107c6142c(uVar15);
      }
      uVar13 = *(ulong *)(unaff_x22 + 0x228);
    } while (uVar13 != *(ulong *)(unaff_x22 + 0x1e8));
    puVar19 = *(undefined **)(unaff_x22 + 0x1f0);
  }
  func_0x000107c61574(puVar19);
  func_0x000100cc810c(0,0);
                    /* WARNING: Could not recover jumptable at 0x000101b8f588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2);
  return;
}



/* Entry: 101b8f984; end: 101b8f9e7;  */

void FUN_101b8f984(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x250) = param_1;
  *(long *)(lVar2 + 600) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x248));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b8f9e8;
  }
  else {
    pcVar1 = FUN_101b90188;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b8f9e8; end: 101b90187;  */

void FUN_101b8f9e8(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x22;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_a0 [72];
  
  lVar17 = *(long *)(unaff_x22 + 0x250);
  lVar12 = *(long *)(lVar17 + 0x10);
  *(long *)(unaff_x22 + 0x260) = lVar12;
  if (lVar12 == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x238);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c615e8(uVar16);
    func_0x000107c6142c(lVar17);
    func_0x000107c6142c(uVar20);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x208);
  }
  else {
    lVar12 = 0;
    uVar13 = 0;
    uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x208);
    do {
      *(undefined8 *)(unaff_x22 + 0x288) = uVar16;
      *(ulong *)(unaff_x22 + 0x280) = uVar13;
      *(long *)(unaff_x22 + 0x278) = lVar12;
      *(undefined8 *)(unaff_x22 + 0x270) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x268) = uVar25;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x250) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b90180);
        (*pcVar4)();
      }
      lVar17 = *(long *)(unaff_x22 + 0x1d0);
      lVar12 = *(long *)(unaff_x22 + 0x250) + uVar13 * 0x50;
      uVar20 = *(undefined8 *)(lVar12 + 0x38);
      uVar16 = *(undefined8 *)(lVar12 + 0x30);
      uVar18 = *(undefined8 *)(lVar12 + 0x48);
      uVar25 = *(undefined8 *)(lVar12 + 0x40);
      uVar22 = *(undefined8 *)(lVar12 + 0x50);
      uVar26 = *(undefined8 *)(lVar12 + 0x68);
      uVar24 = *(undefined8 *)(lVar12 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar12 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar26;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar24;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar25;
      uVar16 = *(undefined8 *)(lVar12 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar12 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar16;
      bVar2 = *(byte *)(unaff_x22 + 0x20);
      uVar13 = (ulong)bVar2;
      *(byte *)(unaff_x22 + 0x2d0) = bVar2;
      if (*(long *)(lVar17 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar17 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar15 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
        uVar13 = uVar13 & (uVar15 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar17 + (uVar13 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar13 & 0x3f) & 1)
            != 0) {
          do {
            if (*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x30) + uVar13) == bVar2) {
              FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
              uVar11 = 0;
              goto LAB_101b8fb88;
            }
            uVar13 = uVar13 + 1 & ~uVar15;
          } while ((*(ulong *)(*(long *)(unaff_x22 + 0x1d0) + 0x38 + (uVar13 >> 6) * 8) >>
                    (uVar13 & 0x3f) & 1) != 0);
        }
      }
      FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
      if (bVar2 != 0) {
        uVar11 = 1;
LAB_101b8fb88:
        *(undefined1 *)(unaff_x22 + 0x2d1) = uVar11;
        lVar12 = *(long *)(unaff_x22 + 0x28);
        if (lVar12 == 0) {
          lVar12 = *(long *)(unaff_x22 + 0x30);
          if (((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) &&
             (lVar17 = *(long *)(unaff_x22 + 0x50), lVar17 != 0)) {
            uVar16 = *(undefined8 *)(unaff_x22 + 0x48);
            puVar8 = PTR_PTR_1126bf8d0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            *(undefined **)(unaff_x22 + 0x290) = puVar8;
            lVar21 = *(long *)(lVar12 + 0x10);
            puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar21 != 0) {
              *(undefined **)(unaff_x22 + 0x1b0) = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000100c077e4(0,lVar21,0);
              puVar9 = PTR___sSSN_11034da80;
              puVar19 = *(undefined **)(unaff_x22 + 0x1b0);
              puVar23 = (undefined8 *)(lVar12 + 0x28);
              do {
                uVar20 = *puVar23;
                *(undefined8 *)(unaff_x22 + 0x198) = puVar23[-1];
                *(undefined8 *)(unaff_x22 + 0x1a0) = uVar20;
                func_0x000107c61434();
                func_0x000107c6147c(unaff_x22 + 0x128,unaff_x22 + 0x198,puVar9,
                                    PTR___sypN_11034f1a8 + 8,7);
                *(undefined **)(unaff_x22 + 0x1b0) = puVar19;
                uVar13 = *(ulong *)(puVar19 + 0x10);
                if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar13) {
                  func_0x000100c077e4(1 < *(ulong *)(puVar19 + 0x18),uVar13 + 1,1);
                  puVar19 = *(undefined **)(unaff_x22 + 0x1b0);
                }
                puVar23 = puVar23 + 2;
                *(ulong *)(puVar19 + 0x10) = uVar13 + 1;
                func_0x000100102924(unaff_x22 + 0x128,puVar19 + uVar13 * 0x20 + 0x20);
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            lVar21 = *(long *)(unaff_x22 + 0x1d8);
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            puVar10 = puVar19;
            func_0x000107c5fc48(puVar19,PTR___sypN_11034f1a8 + 8);
            func_0x000107c6142c(puVar19);
            func_0x000107c45788(puVar9);
            func_0x000107c61170(puVar10);
            func_0x000107c59588(puVar8);
            func_0x000107c61170(puVar9);
            func_0x000107c5fadc(uVar16,lVar17);
            func_0x000107c55d70(puVar8);
            func_0x000107c61170(uVar16);
            func_0x000107c5356c(puVar8);
            uVar16 = *(undefined8 *)(lVar21 + 0xf0);
            lVar12 = *(long *)(lVar21 + 0xf8);
            func_0x0001000a8868(lVar21 + 0xd8,uVar16);
            piVar14 = *(int **)(lVar12 + 8);
            iVar1 = *piVar14;
            plVar7 = (long *)(ulong)(uint)piVar14[1];
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x298) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101b903cc;
                    /* WARNING: Could not recover jumptable at 0x000101b90178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar14))(puVar8,uVar16,lVar12);
            return;
          }
        }
        else {
          func_0x000107c61174();
          lVar17 = lVar12;
          func_0x000107c40794();
          func_0x000107c60234(unaff_x22 + 0x148);
          func_0x000107c61170(lVar12);
          func_0x000107c615e8(lVar17);
          uVar20 = 0;
          FUN_101b9d860(0,0x112d50c78,&PTR_PTR_1126b25c0);
          uVar13 = unaff_x22 + 0x1c0;
          func_0x000107c6147c(uVar13,unaff_x22 + 0x148,PTR___sypN_11034f1a8 + 8,uVar20,6);
          if ((uVar13 & 1) != 0) {
            uVar15 = *(ulong *)(unaff_x22 + 0x1c0);
            *(ulong *)(unaff_x22 + 0x2b0) = uVar15;
            cVar3 = *(char *)(unaff_x22 + 0x2d1);
            uVar13 = uVar15;
            func_0x000107e6277c();
            if ((cVar3 == '\x01') && ((uVar13 & 1) != 0)) {
              func_0x000107c61170(uVar15);
              goto LAB_101b8fa68;
            }
            func_0x000107c61174();
            func_0x000107c6071c();
            *(undefined8 *)(unaff_x22 + 0x2b8) = uVar16;
            plVar7 = (long *)0xe0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x2c0) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101b912f4;
            lVar12 = *(long *)(unaff_x22 + 0x1d8);
            plVar7[0xf] = *(long *)(unaff_x22 + 0x240);
            plVar7[0x10] = lVar12;
            plVar7[0xd] = uVar15;
            plVar7[0xe] = unaff_x22 + 0x10;
            pcVar4 = FUN_101b9a62c;
            goto LAB_107c615e0;
          }
        }
        *(undefined8 *)(unaff_x22 + 0x1a8) = 1;
        func_0x0001000d224c(unaff_x22 + 0xb0);
        lVar12 = *(long *)(unaff_x22 + 200);
        if (lVar12 == 0) {
          func_0x000101b9d8a0(unaff_x22 + 0xb0,0x112e06c10,&UNK_10d9dabb0);
        }
        else {
          lVar17 = *(long *)(unaff_x22 + 0xd0);
          func_0x0001000a8868(unaff_x22 + 0xb0,lVar12);
          (**(code **)(lVar17 + 8))
                    (unaff_x22 + 0x1a8,&UNK_1104505b0,&PTR_DAT_1104503f8,lVar12,lVar17);
          func_0x0001000834e4(unaff_x22 + 0xb0);
        }
      }
LAB_101b8fa68:
      func_0x000101b9d508(unaff_x22 + 0x10);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x288);
      lVar12 = *(long *)(unaff_x22 + 0x278);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar13 = *(long *)(unaff_x22 + 0x280) + 1;
    } while (uVar13 != *(ulong *)(unaff_x22 + 0x260));
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
    if (lVar12 < 1) {
      uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x240);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
      func_0x000107c615e8(uVar22);
      func_0x000107c6142c(uVar18);
    }
    else {
      lVar12 = *(long *)(unaff_x22 + 0x200);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar24 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x240);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x220);
      if (lVar12 == 0) {
        func_0x000107c6142c(uVar24);
        func_0x000107c615e8(uVar22);
        func_0x000107c61170(uVar18);
      }
      else {
        func_0x000107c4fd80();
        func_0x000107c6142c(uVar24);
        func_0x000107c615e8(uVar22);
        func_0x000107c61170(uVar18);
        func_0x000107c615e8(lVar12);
      }
    }
  }
  uVar13 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar13 != *(ulong *)(unaff_x22 + 0x1e8)) {
    do {
      *(undefined8 *)(unaff_x22 + 0x218) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x210) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar25;
      uVar15 = *(ulong *)(unaff_x22 + 0x1c8);
      if ((uVar15 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b90188);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(uVar15 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar13;
        FUN_101b9bcc0(uVar13,uVar15,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x220) = uVar5;
      *(ulong *)(unaff_x22 + 0x228) = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b90184);
        (*pcVar4)();
      }
      uVar13 = uVar5;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar13 == 0) {
        func_0x000107c61170(uVar5);
      }
      else {
        lVar12 = *(long *)(unaff_x22 + 0x1f0);
        uVar6 = uVar13;
        func_0x000107c5faec();
        func_0x000107c61170(uVar13);
        *(ulong *)(unaff_x22 + 0x230) = uVar6;
        *(ulong *)(unaff_x22 + 0x238) = uVar15;
        if (*(long *)(lVar12 + 0x10) == 0) {
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar15);
        }
        else {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
          uVar13 = uVar15;
          func_0x000100029284();
          lVar12 = *(long *)(unaff_x22 + 0x1f0);
          if ((uVar13 & 1) != 0) {
            lVar21 = *(long *)(unaff_x22 + 0x1d8);
            lVar17 = *(long *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
            *(long *)(unaff_x22 + 0x240) = lVar17;
            func_0x000107c615f0(lVar17);
            func_0x000107c61574(lVar12);
            plVar7 = (long *)(lVar21 + 0x20);
            func_0x0001000a8868(plVar7,*(undefined8 *)(lVar21 + 0x38));
            lVar12 = *plVar7;
            plVar7 = (long *)0x550;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x248) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101b8f984;
            plVar7[99] = lVar12;
            *(undefined1 *)((long)plVar7 + 0x542) = 1;
            plVar7[0x62] = lVar17;
            plVar7[0x61] = uVar5;
            pcVar4 = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
            return;
          }
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar15);
          func_0x000107c61574(lVar12);
        }
      }
      uVar13 = *(ulong *)(unaff_x22 + 0x228);
    } while (uVar13 != *(ulong *)(unaff_x22 + 0x1e8));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000100cc810c(uVar20,0);
                    /* WARNING: Could not recover jumptable at 0x000101b8fda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar16);
  return;
}



/* Entry: 101b90188; end: 101b903cb;  */

void FUN_101b90188(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 600);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x220);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c614ac(uVar8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar9 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar9 != *(ulong *)(unaff_x22 + 0x1e8)) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x208);
    do {
      *(undefined8 *)(unaff_x22 + 0x218) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x210) = uVar8;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar10;
      uVar5 = *(ulong *)(unaff_x22 + 0x1c8);
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b903cc);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar5 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar9;
        FUN_101b9bcc0(uVar9,uVar5,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x220) = uVar2;
      *(ulong *)(unaff_x22 + 0x228) = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b903c8);
        (*pcVar1)();
      }
      uVar9 = uVar2;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar9 == 0) {
        func_0x000107c61170(uVar2);
      }
      else {
        lVar12 = *(long *)(unaff_x22 + 0x1f0);
        uVar3 = uVar9;
        func_0x000107c5faec();
        func_0x000107c61170(uVar9);
        *(ulong *)(unaff_x22 + 0x230) = uVar3;
        *(ulong *)(unaff_x22 + 0x238) = uVar5;
        if (*(long *)(lVar12 + 0x10) == 0) {
          func_0x000107c61170(uVar2);
          func_0x000107c6142c(uVar5);
        }
        else {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
          uVar9 = uVar5;
          func_0x000100029284();
          lVar12 = *(long *)(unaff_x22 + 0x1f0);
          if ((uVar9 & 1) != 0) {
            lVar11 = *(long *)(unaff_x22 + 0x1d8);
            lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + uVar3 * 8);
            *(long *)(unaff_x22 + 0x240) = lVar7;
            func_0x000107c615f0(lVar7);
            func_0x000107c61574(lVar12);
            plVar4 = (long *)(lVar11 + 0x20);
            func_0x0001000a8868(plVar4,*(undefined8 *)(lVar11 + 0x38));
            lVar12 = *plVar4;
            plVar4 = (long *)0x550;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x248) = plVar4;
            *plVar4 = unaff_x22;
            plVar4[1] = (long)FUN_101b8f984;
            plVar4[99] = lVar12;
            *(undefined1 *)((long)plVar4 + 0x542) = 1;
            plVar4[0x62] = lVar7;
            plVar4[0x61] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(FUN_101b9e2f4,0,0);
            return;
          }
          func_0x000107c61170(uVar2);
          func_0x000107c6142c(uVar5);
          func_0x000107c61574(lVar12);
        }
      }
      uVar9 = *(ulong *)(unaff_x22 + 0x228);
    } while (uVar9 != *(ulong *)(unaff_x22 + 0x1e8));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000100cc810c(uVar8,0);
                    /* WARNING: Could not recover jumptable at 0x000101b90228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 101b903cc; end: 101b90437;  */

void FUN_101b903cc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2a0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x298));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x2a8) = param_1;
    pcVar1 = FUN_101b90438;
  }
  else {
    pcVar1 = FUN_101b90ba8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b90438; end: 101b90ba7;  */

void FUN_101b90438(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_a0 [72];
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x290));
  uVar15 = *(ulong *)(unaff_x22 + 0x2a8);
  *(ulong *)(unaff_x22 + 0x2b0) = uVar15;
  cVar2 = *(char *)(unaff_x22 + 0x2d1);
  uVar24 = uVar15;
  func_0x000107e6277c();
  if (cVar2 == '\x01' && (int)uVar24 != 0) {
LAB_101b90504:
    func_0x000107c61170(uVar15);
LAB_101b90550:
    do {
      func_0x000101b9d508(unaff_x22 + 0x10);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x288);
      lVar16 = *(long *)(unaff_x22 + 0x278);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar24 = *(long *)(unaff_x22 + 0x280) + 1;
      if (uVar24 == *(ulong *)(unaff_x22 + 0x260)) {
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
        if (lVar16 < 1) {
          uVar17 = *(undefined8 *)(unaff_x22 + 0x250);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x240);
          func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
          func_0x000107c615e8(uVar13);
          func_0x000107c6142c(uVar17);
        }
        else {
          lVar16 = *(long *)(unaff_x22 + 0x200);
          func_0x000107c5c734();
          func_0x000107c61180();
          uVar19 = *(undefined8 *)(unaff_x22 + 0x250);
          uVar13 = *(undefined8 *)(unaff_x22 + 0x240);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
          if (lVar16 == 0) {
            func_0x000107c6142c(uVar19);
            func_0x000107c615e8(uVar13);
            func_0x000107c61170(uVar17);
          }
          else {
            func_0x000107c4fd80();
            func_0x000107c6142c(uVar19);
            func_0x000107c615e8(uVar13);
            func_0x000107c61170(uVar17);
            func_0x000107c615e8(lVar16);
          }
        }
        uVar24 = *(ulong *)(unaff_x22 + 0x228);
        if (uVar24 == *(ulong *)(unaff_x22 + 0x1e8)) goto LAB_101b907f4;
        goto LAB_101b90854;
      }
      *(undefined8 *)(unaff_x22 + 0x288) = uVar23;
      *(ulong *)(unaff_x22 + 0x280) = uVar24;
      *(long *)(unaff_x22 + 0x278) = lVar16;
      *(undefined8 *)(unaff_x22 + 0x270) = uVar25;
      *(undefined8 *)(unaff_x22 + 0x268) = uVar21;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x250) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b90ba0);
        (*pcVar4)();
      }
      lVar22 = *(long *)(unaff_x22 + 0x1d0);
      lVar16 = *(long *)(unaff_x22 + 0x250) + uVar24 * 0x50;
      uVar23 = *(undefined8 *)(lVar16 + 0x38);
      uVar21 = *(undefined8 *)(lVar16 + 0x30);
      uVar13 = *(undefined8 *)(lVar16 + 0x48);
      uVar25 = *(undefined8 *)(lVar16 + 0x40);
      uVar17 = *(undefined8 *)(lVar16 + 0x50);
      uVar26 = *(undefined8 *)(lVar16 + 0x68);
      uVar19 = *(undefined8 *)(lVar16 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar16 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar26;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar23;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar21;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar25;
      param_1 = *(undefined8 *)(lVar16 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar16 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x10) = param_1;
      bVar3 = *(byte *)(unaff_x22 + 0x20);
      uVar24 = (ulong)bVar3;
      *(byte *)(unaff_x22 + 0x2d0) = bVar3;
      if (*(long *)(lVar22 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar22 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar15 = -1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
        uVar24 = uVar24 & (uVar15 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar22 + (uVar24 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar24 & 0x3f) & 1)
            != 0) {
          do {
            if (*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x30) + uVar24) == bVar3) {
              func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
              uVar11 = 0;
              goto LAB_101b90670;
            }
            uVar24 = uVar24 + 1 & ~uVar15;
          } while ((*(ulong *)(*(long *)(unaff_x22 + 0x1d0) + 0x38 + (uVar24 >> 6) * 8) >>
                    (uVar24 & 0x3f) & 1) != 0);
        }
      }
      func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
    } while (bVar3 == 0);
    uVar11 = 1;
LAB_101b90670:
    *(undefined1 *)(unaff_x22 + 0x2d1) = uVar11;
    lVar16 = *(long *)(unaff_x22 + 0x28);
    if (lVar16 == 0) {
      lVar16 = *(long *)(unaff_x22 + 0x30);
      if (((lVar16 != 0) && (*(long *)(lVar16 + 0x10) != 0)) &&
         (lVar22 = *(long *)(unaff_x22 + 0x50), lVar22 != 0)) {
        uVar21 = *(undefined8 *)(unaff_x22 + 0x48);
        puVar8 = PTR_PTR_1126bf8d0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0x290) = puVar8;
        lVar20 = *(long *)(lVar16 + 0x10);
        puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar20 != 0) {
          *(undefined **)(unaff_x22 + 0x1b0) = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000100c077e4(0,lVar20,0);
          puVar9 = PTR___sSSN_11034da80;
          puVar18 = *(undefined **)(unaff_x22 + 0x1b0);
          puVar14 = (undefined8 *)(lVar16 + 0x28);
          do {
            uVar23 = *puVar14;
            *(undefined8 *)(unaff_x22 + 0x198) = puVar14[-1];
            *(undefined8 *)(unaff_x22 + 0x1a0) = uVar23;
            func_0x000107c61434();
            func_0x000107c6147c(unaff_x22 + 0x128,unaff_x22 + 0x198,puVar9,PTR___sypN_11034f1a8 + 8,
                                7);
            *(undefined **)(unaff_x22 + 0x1b0) = puVar18;
            uVar24 = *(ulong *)(puVar18 + 0x10);
            if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar24) {
              func_0x000100c077e4(1 < *(ulong *)(puVar18 + 0x18),uVar24 + 1,1);
              puVar18 = *(undefined **)(unaff_x22 + 0x1b0);
            }
            puVar14 = puVar14 + 2;
            *(ulong *)(puVar18 + 0x10) = uVar24 + 1;
            func_0x000100102924(unaff_x22 + 0x128,puVar18 + uVar24 * 0x20 + 0x20);
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        lVar20 = *(long *)(unaff_x22 + 0x1d8);
        puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar10 = puVar18;
        func_0x000107c5fc48(puVar18,PTR___sypN_11034f1a8 + 8);
        func_0x000107c6142c(puVar18);
        func_0x000107c45788(puVar9);
        func_0x000107c61170(puVar10);
        func_0x000107c59588(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c5fadc(uVar21,lVar22);
        func_0x000107c55d70(puVar8);
        func_0x000107c61170(uVar21);
        func_0x000107c5356c(puVar8);
        uVar21 = *(undefined8 *)(lVar20 + 0xf0);
        lVar16 = *(long *)(lVar20 + 0xf8);
        func_0x0001000a8868(lVar20 + 0xd8,uVar21);
        piVar12 = *(int **)(lVar16 + 8);
        iVar1 = *piVar12;
        plVar5 = (long *)(ulong)(uint)piVar12[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x298) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_101b903cc;
                    /* WARNING: Could not recover jumptable at 0x000101b90b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar12))(puVar8,uVar21,lVar16);
        return;
      }
    }
    else {
      func_0x000107c61174();
      lVar22 = lVar16;
      func_0x000107c40794();
      func_0x000107c60234(unaff_x22 + 0x148);
      func_0x000107c61170(lVar16);
      func_0x000107c615e8(lVar22);
      uVar21 = 0;
      FUN_101b9d860(0,0x112d50c78,&PTR_PTR_1126b25c0);
      uVar24 = unaff_x22 + 0x1c0;
      func_0x000107c6147c(uVar24,unaff_x22 + 0x148,PTR___sypN_11034f1a8 + 8,uVar21,6);
      if ((uVar24 & 1) != 0) goto LAB_101b90728;
    }
    *(undefined8 *)(unaff_x22 + 0x1a8) = 1;
    func_0x0001000d224c(unaff_x22 + 0xb0);
    lVar16 = *(long *)(unaff_x22 + 200);
    if (lVar16 == 0) {
      func_0x000101b9d8a0(unaff_x22 + 0xb0,0x112e06c10,&UNK_10d9dabb0);
    }
    else {
      lVar22 = *(long *)(unaff_x22 + 0xd0);
      func_0x0001000a8868(unaff_x22 + 0xb0,lVar16);
      (**(code **)(lVar22 + 8))(unaff_x22 + 0x1a8,&UNK_1104505b0,&PTR_DAT_1104503f8,lVar16,lVar22);
      func_0x0001000834e4(unaff_x22 + 0xb0);
    }
    goto LAB_101b90550;
  }
LAB_101b90484:
  func_0x000107c61174();
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_1;
  plVar5 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2c0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b912f4;
  lVar16 = *(long *)(unaff_x22 + 0x1d8);
  plVar5[0xf] = *(long *)(unaff_x22 + 0x240);
  plVar5[0x10] = lVar16;
  plVar5[0xd] = uVar15;
  plVar5[0xe] = unaff_x22 + 0x10;
  pcVar4 = FUN_101b9a62c;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
LAB_101b90854:
  *(undefined8 *)(unaff_x22 + 0x218) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar25;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar21;
  uVar15 = *(ulong *)(unaff_x22 + 0x1c8);
  if ((uVar15 & 0xc000000000000001) == 0) {
    if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b90ba8);
      (*pcVar4)();
    }
    uVar6 = *(ulong *)(uVar15 + uVar24 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar6 = uVar24;
    FUN_101b9bcc0(uVar24,uVar15,&PTR_PTR_1126bf9a8,0x112d61d40);
  }
  *(ulong *)(unaff_x22 + 0x220) = uVar6;
  *(ulong *)(unaff_x22 + 0x228) = uVar24 + 1;
  if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b90ba4);
    (*pcVar4)();
  }
  uVar24 = uVar6;
  func_0x000107c3fd78();
  func_0x000107c61180();
  if (uVar24 == 0) {
    func_0x000107c61170(uVar6);
  }
  else {
    lVar16 = *(long *)(unaff_x22 + 0x1f0);
    uVar7 = uVar24;
    func_0x000107c5faec();
    func_0x000107c61170(uVar24);
    *(ulong *)(unaff_x22 + 0x230) = uVar7;
    *(ulong *)(unaff_x22 + 0x238) = uVar15;
    if (*(long *)(lVar16 + 0x10) == 0) {
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar15);
    }
    else {
      func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
      uVar24 = uVar15;
      func_0x000100029284();
      lVar16 = *(long *)(unaff_x22 + 0x1f0);
      if ((uVar24 & 1) != 0) {
        lVar20 = *(long *)(unaff_x22 + 0x1d8);
        lVar22 = *(long *)(*(long *)(lVar16 + 0x38) + uVar7 * 8);
        *(long *)(unaff_x22 + 0x240) = lVar22;
        func_0x000107c615f0(lVar22);
        func_0x000107c61574(lVar16);
        plVar5 = (long *)(lVar20 + 0x20);
        func_0x0001000a8868(plVar5,*(undefined8 *)(lVar20 + 0x38));
        lVar16 = *plVar5;
        plVar5 = (long *)0x550;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x248) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_101b8f984;
        plVar5[99] = lVar16;
        *(undefined1 *)((long)plVar5 + 0x542) = 1;
        plVar5[0x62] = lVar22;
        plVar5[0x61] = uVar6;
        pcVar4 = FUN_101b9e2f4;
        goto LAB_107c615e0;
      }
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(uVar15);
      func_0x000107c61574(lVar16);
    }
  }
  uVar24 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar24 == *(ulong *)(unaff_x22 + 0x1e8)) {
LAB_101b907f4:
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f0));
    func_0x000100cc810c(uVar25,0);
                    /* WARNING: Could not recover jumptable at 0x000101b9082c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar23);
    return;
  }
  goto LAB_101b90854;
LAB_101b90728:
  uVar15 = *(ulong *)(unaff_x22 + 0x1c0);
  *(ulong *)(unaff_x22 + 0x2b0) = uVar15;
  cVar2 = *(char *)(unaff_x22 + 0x2d1);
  uVar24 = uVar15;
  func_0x000107e6277c();
  if ((cVar2 != '\x01') || ((uVar24 & 1) == 0)) goto LAB_101b90484;
  goto LAB_101b90504;
}



/* Entry: 101b90ba8; end: 101b912f3;  */

void FUN_101b90ba8(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined1 auStack_a0 [72];
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2a0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x290));
  func_0x000107c614ac(uVar15);
  puVar4 = PTR___sypN_11034f1a8;
LAB_101b90c00:
  *(undefined8 *)(unaff_x22 + 0x1a8) = 1;
  func_0x0001000d224c(unaff_x22 + 0xb0);
  lVar21 = *(long *)(unaff_x22 + 200);
  if (lVar21 == 0) {
    func_0x000101b9d8a0(unaff_x22 + 0xb0,0x112e06c10,&UNK_10d9dabb0);
  }
  else {
    lVar24 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,lVar21);
    (**(code **)(lVar24 + 8))(unaff_x22 + 0x1a8,&UNK_1104505b0,&PTR_DAT_1104503f8,lVar21,lVar24);
    func_0x0001000834e4(unaff_x22 + 0xb0);
  }
  do {
    do {
      func_0x000101b9d508(unaff_x22 + 0x10);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x288);
      lVar21 = *(long *)(unaff_x22 + 0x278);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar23 = *(long *)(unaff_x22 + 0x280) + 1;
      if (uVar23 == *(ulong *)(unaff_x22 + 0x260)) {
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
        if (lVar21 < 1) {
          uVar17 = *(undefined8 *)(unaff_x22 + 0x250);
          uVar18 = *(undefined8 *)(unaff_x22 + 0x240);
          func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
          func_0x000107c615e8(uVar18);
          func_0x000107c6142c(uVar17);
        }
        else {
          lVar21 = *(long *)(unaff_x22 + 0x200);
          func_0x000107c5c734();
          func_0x000107c61180();
          uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x240);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
          if (lVar21 == 0) {
            func_0x000107c6142c(uVar18);
            func_0x000107c615e8(uVar20);
            func_0x000107c61170(uVar17);
          }
          else {
            func_0x000107c4fd80();
            func_0x000107c6142c(uVar18);
            func_0x000107c615e8(uVar20);
            func_0x000107c61170(uVar17);
            func_0x000107c615e8(lVar21);
          }
        }
        uVar23 = *(ulong *)(unaff_x22 + 0x228);
        if (uVar23 != *(ulong *)(unaff_x22 + 0x1e8)) {
          do {
            *(undefined8 *)(unaff_x22 + 0x218) = uVar22;
            *(undefined8 *)(unaff_x22 + 0x210) = uVar25;
            *(undefined8 *)(unaff_x22 + 0x208) = uVar15;
            uVar14 = *(ulong *)(unaff_x22 + 0x1c8);
            if ((uVar14 & 0xc000000000000001) == 0) {
              if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101b912f4);
                (*pcVar5)();
              }
              uVar8 = *(ulong *)(uVar14 + uVar23 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar8 = uVar23;
              FUN_101b9bcc0(uVar23,uVar14,&PTR_PTR_1126bf9a8,0x112d61d40);
            }
            *(ulong *)(unaff_x22 + 0x220) = uVar8;
            *(ulong *)(unaff_x22 + 0x228) = uVar23 + 1;
            if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b912f0);
              (*pcVar5)();
            }
            uVar23 = uVar8;
            func_0x000107c3fd78();
            func_0x000107c61180();
            if (uVar23 == 0) {
              func_0x000107c61170(uVar8);
            }
            else {
              lVar21 = *(long *)(unaff_x22 + 0x1f0);
              uVar9 = uVar23;
              func_0x000107c5faec();
              func_0x000107c61170(uVar23);
              *(ulong *)(unaff_x22 + 0x230) = uVar9;
              *(ulong *)(unaff_x22 + 0x238) = uVar14;
              if (*(long *)(lVar21 + 0x10) == 0) {
                func_0x000107c61170(uVar8);
                func_0x000107c6142c(uVar14);
              }
              else {
                func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
                uVar23 = uVar14;
                func_0x000100029284();
                if ((uVar23 & 1) != 0) {
                  lVar24 = *(long *)(unaff_x22 + 0x1f0);
                  lVar19 = *(long *)(unaff_x22 + 0x1d8);
                  lVar21 = *(long *)(*(long *)(lVar24 + 0x38) + uVar9 * 8);
                  *(long *)(unaff_x22 + 0x240) = lVar21;
                  func_0x000107c615f0(lVar21);
                  func_0x000107c61574(lVar24);
                  plVar7 = (long *)(lVar19 + 0x20);
                  func_0x0001000a8868(plVar7,*(undefined8 *)(lVar19 + 0x38));
                  lVar24 = *plVar7;
                  plVar7 = (long *)0x550;
                  func_0x000107c615b8();
                  *(long **)(unaff_x22 + 0x248) = plVar7;
                  *plVar7 = unaff_x22;
                  plVar7[1] = (long)FUN_101b8f984;
                  plVar7[99] = lVar24;
                  *(undefined1 *)((long)plVar7 + 0x542) = 1;
                  plVar7[0x62] = lVar21;
                  plVar7[0x61] = uVar8;
                  pcVar5 = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
                  return;
                }
                uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
                func_0x000107c61170(uVar8);
                func_0x000107c6142c(uVar14);
                func_0x000107c61574(uVar17);
              }
            }
            uVar23 = *(ulong *)(unaff_x22 + 0x228);
          } while (uVar23 != *(ulong *)(unaff_x22 + 0x1e8));
        }
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f0));
        func_0x000100cc810c(uVar25,0);
                    /* WARNING: Could not recover jumptable at 0x000101b91054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(uVar22);
        return;
      }
      *(undefined8 *)(unaff_x22 + 0x288) = uVar22;
      *(ulong *)(unaff_x22 + 0x280) = uVar23;
      *(long *)(unaff_x22 + 0x278) = lVar21;
      *(undefined8 *)(unaff_x22 + 0x270) = uVar25;
      *(undefined8 *)(unaff_x22 + 0x268) = uVar15;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x250) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101b911f4);
        (*pcVar5)();
      }
      lVar24 = *(long *)(unaff_x22 + 0x1d0);
      lVar21 = *(long *)(unaff_x22 + 0x250) + uVar23 * 0x50;
      uVar22 = *(undefined8 *)(lVar21 + 0x38);
      uVar15 = *(undefined8 *)(lVar21 + 0x30);
      uVar17 = *(undefined8 *)(lVar21 + 0x48);
      uVar25 = *(undefined8 *)(lVar21 + 0x40);
      uVar18 = *(undefined8 *)(lVar21 + 0x50);
      uVar27 = *(undefined8 *)(lVar21 + 0x68);
      uVar20 = *(undefined8 *)(lVar21 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar21 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar27;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar25;
      uVar15 = *(undefined8 *)(lVar21 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar21 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar15;
      bVar2 = *(byte *)(unaff_x22 + 0x20);
      uVar23 = (ulong)bVar2;
      *(byte *)(unaff_x22 + 0x2d0) = bVar2;
      if (*(long *)(lVar24 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a0,*(undefined8 *)(lVar24 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar14 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
        uVar23 = uVar23 & (uVar14 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar24 + (uVar23 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar23 & 0x3f) & 1)
            != 0) {
          do {
            if (*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x30) + uVar23) == bVar2) {
              func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
              uVar12 = 0;
              goto LAB_101b90d98;
            }
            uVar23 = uVar23 + 1 & ~uVar14;
          } while ((*(ulong *)(*(long *)(unaff_x22 + 0x1d0) + 0x38 + (uVar23 >> 6) * 8) >>
                    (uVar23 & 0x3f) & 1) != 0);
        }
      }
      func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
    } while (bVar2 == 0);
    uVar12 = 1;
LAB_101b90d98:
    *(undefined1 *)(unaff_x22 + 0x2d1) = uVar12;
    lVar21 = *(long *)(unaff_x22 + 0x28);
    if (lVar21 == 0) {
      lVar21 = *(long *)(unaff_x22 + 0x30);
      if (((lVar21 != 0) && (*(long *)(lVar21 + 0x10) != 0)) &&
         (lVar24 = *(long *)(unaff_x22 + 0x50), lVar24 != 0)) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
        puVar6 = PTR_PTR_1126bf8d0;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(unaff_x22 + 0x290) = puVar6;
        lVar19 = *(long *)(lVar21 + 0x10);
        puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (lVar19 != 0) {
          *(undefined **)(unaff_x22 + 0x1b0) = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000100c077e4(0,lVar19,0);
          puVar10 = PTR___sSSN_11034da80;
          puVar16 = *(undefined **)(unaff_x22 + 0x1b0);
          puVar26 = (undefined8 *)(lVar21 + 0x28);
          do {
            uVar22 = *puVar26;
            *(undefined8 *)(unaff_x22 + 0x198) = puVar26[-1];
            *(undefined8 *)(unaff_x22 + 0x1a0) = uVar22;
            func_0x000107c61434();
            func_0x000107c6147c(unaff_x22 + 0x128,unaff_x22 + 0x198,puVar10,puVar4 + 8,7);
            *(undefined **)(unaff_x22 + 0x1b0) = puVar16;
            uVar23 = *(ulong *)(puVar16 + 0x10);
            if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar23) {
              func_0x000100c077e4(1 < *(ulong *)(puVar16 + 0x18),uVar23 + 1,1);
              puVar16 = *(undefined **)(unaff_x22 + 0x1b0);
            }
            puVar26 = puVar26 + 2;
            *(ulong *)(puVar16 + 0x10) = uVar23 + 1;
            func_0x000100102924(unaff_x22 + 0x128,puVar16 + uVar23 * 0x20 + 0x20);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        lVar19 = *(long *)(unaff_x22 + 0x1d8);
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        puVar11 = puVar16;
        func_0x000107c5fc48(puVar16,puVar4 + 8);
        func_0x000107c6142c(puVar16);
        func_0x000107c45788(puVar10);
        func_0x000107c61170(puVar11);
        func_0x000107c59588(puVar6);
        func_0x000107c61170(puVar10);
        func_0x000107c5fadc(uVar15,lVar24);
        func_0x000107c55d70(puVar6);
        func_0x000107c61170(uVar15);
        func_0x000107c5356c(puVar6);
        uVar15 = *(undefined8 *)(lVar19 + 0xf0);
        lVar21 = *(long *)(lVar19 + 0xf8);
        func_0x0001000a8868(lVar19 + 0xd8,uVar15);
        piVar13 = *(int **)(lVar21 + 8);
        iVar1 = *piVar13;
        plVar7 = (long *)(ulong)(uint)piVar13[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x298) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_101b903cc;
                    /* WARNING: Could not recover jumptable at 0x000101b912e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar13))(puVar6,uVar15,lVar21);
        return;
      }
      goto LAB_101b90c00;
    }
    func_0x000107c61174();
    lVar24 = lVar21;
    func_0x000107c40794();
    func_0x000107c60234(unaff_x22 + 0x148);
    func_0x000107c61170(lVar21);
    func_0x000107c615e8(lVar24);
    uVar22 = 0;
    FUN_101b9d860(0,0x112d50c78,&PTR_PTR_1126b25c0);
    uVar23 = unaff_x22 + 0x1c0;
    func_0x000107c6147c(uVar23,unaff_x22 + 0x148,puVar4 + 8,uVar22,6);
    if ((uVar23 & 1) == 0) goto LAB_101b90c00;
    uVar14 = *(ulong *)(unaff_x22 + 0x1c0);
    *(ulong *)(unaff_x22 + 0x2b0) = uVar14;
    cVar3 = *(char *)(unaff_x22 + 0x2d1);
    uVar23 = uVar14;
    func_0x000107e6277c();
    if ((cVar3 != '\x01') || ((uVar23 & 1) == 0)) {
      func_0x000107c61174();
      func_0x000107c6071c();
      *(undefined8 *)(unaff_x22 + 0x2b8) = uVar15;
      plVar7 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x2c0) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_101b912f4;
      lVar21 = *(long *)(unaff_x22 + 0x1d8);
      plVar7[0xf] = *(long *)(unaff_x22 + 0x240);
      plVar7[0x10] = lVar21;
      plVar7[0xd] = uVar14;
      plVar7[0xe] = unaff_x22 + 0x10;
      pcVar5 = FUN_101b9a62c;
      goto LAB_107c615e0;
    }
    func_0x000107c61170(uVar14);
  } while( true );
}



/* Entry: 101b912f4; end: 101b91357;  */

void FUN_101b912f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2c0));
  func_0x000107c61170(*(undefined8 *)(lVar2 + 0x2b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b91358;
  }
  else {
    pcVar1 = FUN_101b91db0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b91358; end: 101b91daf;  */

void FUN_101b91358(double param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  long unaff_x22;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  undefined1 auStack_a8 [72];
  
  lVar5 = *(long *)(unaff_x22 + 0x278) + 1;
  if (SCARRY8(*(long *)(unaff_x22 + 0x278),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x101b91d50);
    (*pcVar4)();
  }
  if (*(char *)(unaff_x22 + 0x2d0) == '\x01') {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar24 = *(ulong *)(unaff_x22 + 0x268);
    uVar18 = *(ulong *)(unaff_x22 + 0x238);
    uVar19 = *(ulong *)(unaff_x22 + 0x230);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c61434(uVar21);
    func_0x000100cc810c(uVar14,0);
    uVar15 = uVar24;
    func_0x000107c61558();
    *(ulong *)(unaff_x22 + 0x1b8) = uVar24;
    func_0x000100029284();
    uVar12 = (ulong)~(uint)uVar18 & 1;
    lVar22 = *(long *)(uVar24 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(uVar24 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x101b91d54);
      (*pcVar4)();
    }
    if (*(long *)(*(long *)(unaff_x22 + 0x268) + 0x18) < lVar22) {
      uVar17 = (uint)*(undefined8 *)(unaff_x22 + 0x238);
      uVar19 = *(ulong *)(unaff_x22 + 0x230);
      func_0x000101b9ca5c(lVar22,uVar15,0x112dbeb88,&UNK_10d9dac50);
      func_0x000100029284();
      if (((uint)uVar18 & 1) != (uVar17 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                  (PTR___sSSN_11034da80);
        return;
      }
    }
    else if ((uVar15 & 1) == 0) {
      func_0x000101b9c660(0x112dbeb88,&UNK_10d9dac50);
    }
    lVar27 = *(long *)(unaff_x22 + 0x1b8);
    if ((uVar18 & 1) == 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
      lVar22 = lVar27 + (uVar19 >> 6) * 8;
      *(ulong *)(lVar22 + 0x40) = *(ulong *)(lVar22 + 0x40) | 1L << (uVar19 & 0x3f);
      puVar26 = (undefined8 *)(*(long *)(lVar27 + 0x30) + uVar19 * 0x10);
      *puVar26 = uVar13;
      puVar26[1] = uVar14;
      *(undefined **)(*(long *)(lVar27 + 0x38) + uVar19 * 8) =
           PTR___swiftEmptyArrayStorage_11034f1c8;
      if (SCARRY8(*(long *)(lVar27 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b91db0);
        (*pcVar4)();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x238);
      *(long *)(lVar27 + 0x10) = *(long *)(lVar27 + 0x10) + 1;
      func_0x000107c61434(uVar14);
    }
    lVar22 = *(long *)(lVar27 + 0x38);
    uVar12 = *(ulong *)(lVar22 + uVar19 * 8);
    uVar15 = uVar12;
    func_0x000107c61558();
    *(ulong *)(lVar22 + uVar19 * 8) = uVar12;
    uVar18 = uVar12;
    if ((uVar15 & 1) == 0) {
      uVar18 = 0;
      FUN_101b9beb8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12,PTR__swift_bridgeObjectRelease_11034f258
                   );
      *(ulong *)(lVar22 + uVar19 * 8) = uVar18;
    }
    uVar15 = *(ulong *)(uVar18 + 0x10);
    uVar12 = uVar18;
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar15) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_101b9beb8(uVar12,uVar15 + 1,1,uVar18,PTR__swift_bridgeObjectRelease_11034f258);
      *(ulong *)(lVar22 + uVar19 * 8) = uVar12;
    }
    *(ulong *)(uVar12 + 0x10) = uVar15 + 1;
    lVar22 = uVar12 + uVar15 * 0x10;
    *(undefined8 *)(lVar22 + 0x20) = uVar20;
    *(undefined8 *)(lVar22 + 0x28) = uVar21;
    pcVar4 = FUN_101b9ac9c;
    lVar22 = lVar27;
  }
  else {
    lVar27 = *(long *)(unaff_x22 + 0x288);
    pcVar4 = *(code **)(unaff_x22 + 0x270);
    lVar22 = *(long *)(unaff_x22 + 0x268);
  }
  dVar31 = *(double *)(unaff_x22 + 0x2b8);
  func_0x000107c6071c();
  *(double *)(unaff_x22 + 0x180) = param_1 - dVar31;
  *(undefined8 *)(unaff_x22 + 0x188) = 0x73736563637573;
  *(undefined8 *)(unaff_x22 + 400) = 0xe700000000000000;
  func_0x0001000d224c(unaff_x22 + 0x100);
  lVar23 = *(long *)(unaff_x22 + 0x118);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2b0);
  if (lVar23 == 0) {
    func_0x000107c61170(uVar20);
    func_0x000101b9d508(unaff_x22 + 0x10);
    func_0x000101b9d8a0(unaff_x22 + 0x100,0x112e06c10,&UNK_10d9dabb0);
  }
  else {
    lVar25 = *(long *)(unaff_x22 + 0x120);
    func_0x0001000a8868(unaff_x22 + 0x100,lVar23);
    (**(code **)(lVar25 + 8))(unaff_x22 + 0x180,&UNK_110450508,&PTR_DAT_110450438,lVar23,lVar25);
    func_0x000107c61170(uVar20);
    func_0x000101b9d508(unaff_x22 + 0x10);
    func_0x0001000834e4(unaff_x22 + 0x100);
  }
  uVar15 = *(long *)(unaff_x22 + 0x280) + 1;
  if (uVar15 != *(ulong *)(unaff_x22 + 0x260)) {
    do {
      *(long *)(unaff_x22 + 0x288) = lVar27;
      *(ulong *)(unaff_x22 + 0x280) = uVar15;
      *(long *)(unaff_x22 + 0x278) = lVar5;
      *(code **)(unaff_x22 + 0x270) = pcVar4;
      *(long *)(unaff_x22 + 0x268) = lVar22;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x250) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b91d44);
        (*pcVar4)();
      }
      lVar22 = *(long *)(unaff_x22 + 0x1d0);
      lVar5 = *(long *)(unaff_x22 + 0x250) + uVar15 * 0x50;
      uVar21 = *(undefined8 *)(lVar5 + 0x38);
      uVar20 = *(undefined8 *)(lVar5 + 0x30);
      uVar13 = *(undefined8 *)(lVar5 + 0x48);
      uVar14 = *(undefined8 *)(lVar5 + 0x40);
      uVar28 = *(undefined8 *)(lVar5 + 0x50);
      uVar30 = *(undefined8 *)(lVar5 + 0x68);
      uVar29 = *(undefined8 *)(lVar5 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar5 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar28;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar30;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar29;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar21;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar14;
      uVar20 = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar5 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar20;
      bVar2 = *(byte *)(unaff_x22 + 0x20);
      uVar15 = (ulong)bVar2;
      *(byte *)(unaff_x22 + 0x2d0) = bVar2;
      if (*(long *)(lVar22 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar22 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar19 = -1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
        uVar15 = uVar15 & (uVar19 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar22 + (uVar15 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar15 & 0x3f) & 1)
            != 0) {
          do {
            if (*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x30) + uVar15) == bVar2) {
              func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
              uVar10 = 0;
              goto LAB_101b917cc;
            }
            uVar15 = uVar15 + 1 & ~uVar19;
          } while ((*(ulong *)(*(long *)(unaff_x22 + 0x1d0) + 0x38 + (uVar15 >> 6) * 8) >>
                    (uVar15 & 0x3f) & 1) != 0);
        }
      }
      func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
      if (bVar2 != 0) {
        uVar10 = 1;
LAB_101b917cc:
        *(undefined1 *)(unaff_x22 + 0x2d1) = uVar10;
        lVar5 = *(long *)(unaff_x22 + 0x28);
        if (lVar5 == 0) {
          lVar5 = *(long *)(unaff_x22 + 0x30);
          if (((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) &&
             (lVar22 = *(long *)(unaff_x22 + 0x50), lVar22 != 0)) {
            uVar20 = *(undefined8 *)(unaff_x22 + 0x48);
            puVar7 = PTR_PTR_1126bf8d0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            *(undefined **)(unaff_x22 + 0x290) = puVar7;
            lVar27 = *(long *)(lVar5 + 0x10);
            puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar27 != 0) {
              *(undefined **)(unaff_x22 + 0x1b0) = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000100c077e4(0,lVar27,0);
              puVar8 = PTR___sSSN_11034da80;
              puVar16 = *(undefined **)(unaff_x22 + 0x1b0);
              puVar26 = (undefined8 *)(lVar5 + 0x28);
              do {
                uVar21 = *puVar26;
                *(undefined8 *)(unaff_x22 + 0x198) = puVar26[-1];
                *(undefined8 *)(unaff_x22 + 0x1a0) = uVar21;
                func_0x000107c61434();
                func_0x000107c6147c(unaff_x22 + 0x128,unaff_x22 + 0x198,puVar8,
                                    PTR___sypN_11034f1a8 + 8,7);
                *(undefined **)(unaff_x22 + 0x1b0) = puVar16;
                uVar15 = *(ulong *)(puVar16 + 0x10);
                if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar15) {
                  func_0x000100c077e4(1 < *(ulong *)(puVar16 + 0x18),uVar15 + 1,1);
                  puVar16 = *(undefined **)(unaff_x22 + 0x1b0);
                }
                puVar26 = puVar26 + 2;
                *(ulong *)(puVar16 + 0x10) = uVar15 + 1;
                func_0x000100102924(unaff_x22 + 0x128,puVar16 + uVar15 * 0x20 + 0x20);
                lVar27 = lVar27 + -1;
              } while (lVar27 != 0);
            }
            lVar27 = *(long *)(unaff_x22 + 0x1d8);
            puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            puVar9 = puVar16;
            func_0x000107c5fc48(puVar16,PTR___sypN_11034f1a8 + 8);
            func_0x000107c6142c(puVar16);
            func_0x000107c45788(puVar8);
            func_0x000107c61170(puVar9);
            func_0x000107c59588(puVar7);
            func_0x000107c61170(puVar8);
            func_0x000107c5fadc(uVar20,lVar22);
            func_0x000107c55d70(puVar7);
            func_0x000107c61170(uVar20);
            func_0x000107c5356c(puVar7);
            uVar20 = *(undefined8 *)(lVar27 + 0xf0);
            lVar5 = *(long *)(lVar27 + 0xf8);
            func_0x0001000a8868(lVar27 + 0xd8,uVar20);
            piVar11 = *(int **)(lVar5 + 8);
            iVar1 = *piVar11;
            plVar6 = (long *)(ulong)(uint)piVar11[1];
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x298) = plVar6;
            *plVar6 = unaff_x22;
            plVar6[1] = (long)FUN_101b903cc;
                    /* WARNING: Could not recover jumptable at 0x000101b91d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar11))(puVar7,uVar20,lVar5);
            return;
          }
        }
        else {
          func_0x000107c61174();
          lVar22 = lVar5;
          func_0x000107c40794();
          func_0x000107c60234(unaff_x22 + 0x148);
          func_0x000107c61170(lVar5);
          func_0x000107c615e8(lVar22);
          uVar21 = 0;
          FUN_101b9d860(0,0x112d50c78,&PTR_PTR_1126b25c0);
          uVar15 = unaff_x22 + 0x1c0;
          func_0x000107c6147c(uVar15,unaff_x22 + 0x148,PTR___sypN_11034f1a8 + 8,uVar21,6);
          if ((uVar15 & 1) != 0) {
            uVar19 = *(ulong *)(unaff_x22 + 0x1c0);
            *(ulong *)(unaff_x22 + 0x2b0) = uVar19;
            cVar3 = *(char *)(unaff_x22 + 0x2d1);
            uVar15 = uVar19;
            func_0x000107e6277c();
            if ((cVar3 == '\x01') && ((uVar15 & 1) != 0)) {
              func_0x000107c61170(uVar19);
              goto LAB_101b916ac;
            }
            func_0x000107c61174();
            func_0x000107c6071c();
            *(undefined8 *)(unaff_x22 + 0x2b8) = uVar20;
            plVar6 = (long *)0xe0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x2c0) = plVar6;
            *plVar6 = unaff_x22;
            plVar6[1] = (long)FUN_101b912f4;
            lVar5 = *(long *)(unaff_x22 + 0x1d8);
            plVar6[0xf] = *(long *)(unaff_x22 + 0x240);
            plVar6[0x10] = lVar5;
            plVar6[0xd] = uVar19;
            plVar6[0xe] = unaff_x22 + 0x10;
            pcVar4 = FUN_101b9a62c;
            goto LAB_107c615e0;
          }
        }
        *(undefined8 *)(unaff_x22 + 0x1a8) = 1;
        func_0x0001000d224c(unaff_x22 + 0xb0);
        lVar5 = *(long *)(unaff_x22 + 200);
        if (lVar5 == 0) {
          func_0x000101b9d8a0(unaff_x22 + 0xb0,0x112e06c10,&UNK_10d9dabb0);
        }
        else {
          lVar22 = *(long *)(unaff_x22 + 0xd0);
          func_0x0001000a8868(unaff_x22 + 0xb0,lVar5);
          (**(code **)(lVar22 + 8))
                    (unaff_x22 + 0x1a8,&UNK_1104505b0,&PTR_DAT_1104503f8,lVar5,lVar22);
          func_0x0001000834e4(unaff_x22 + 0xb0);
        }
      }
LAB_101b916ac:
      func_0x000101b9d508(unaff_x22 + 0x10);
      lVar27 = *(long *)(unaff_x22 + 0x288);
      lVar5 = *(long *)(unaff_x22 + 0x278);
      pcVar4 = *(code **)(unaff_x22 + 0x270);
      lVar22 = *(long *)(unaff_x22 + 0x268);
      uVar15 = *(long *)(unaff_x22 + 0x280) + 1;
    } while (uVar15 != *(ulong *)(unaff_x22 + 0x260));
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
  if (lVar5 < 1) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x240);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c615e8(uVar21);
    func_0x000107c6142c(uVar20);
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x200);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
    if (lVar5 == 0) {
      func_0x000107c6142c(uVar14);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar20);
    }
    else {
      func_0x000107c4fd80();
      func_0x000107c6142c(uVar14);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar20);
      func_0x000107c615e8(lVar5);
    }
  }
  uVar15 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar15 != *(ulong *)(unaff_x22 + 0x1e8)) {
    do {
      *(long *)(unaff_x22 + 0x218) = lVar27;
      *(code **)(unaff_x22 + 0x210) = pcVar4;
      *(long *)(unaff_x22 + 0x208) = lVar22;
      uVar19 = *(ulong *)(unaff_x22 + 0x1c8);
      if ((uVar19 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b91d4c);
          (*pcVar4)();
        }
        uVar18 = *(ulong *)(uVar19 + uVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar18 = uVar15;
        FUN_101b9bcc0(uVar15,uVar19,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x220) = uVar18;
      *(ulong *)(unaff_x22 + 0x228) = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b91d48);
        (*pcVar4)();
      }
      uVar15 = uVar18;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar15 == 0) {
        func_0x000107c61170(uVar18);
      }
      else {
        lVar5 = *(long *)(unaff_x22 + 0x1f0);
        uVar12 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        *(ulong *)(unaff_x22 + 0x230) = uVar12;
        *(ulong *)(unaff_x22 + 0x238) = uVar19;
        if (*(long *)(lVar5 + 0x10) == 0) {
          func_0x000107c61170(uVar18);
          func_0x000107c6142c(uVar19);
        }
        else {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
          uVar15 = uVar19;
          func_0x000100029284();
          lVar5 = *(long *)(unaff_x22 + 0x1f0);
          if ((uVar15 & 1) != 0) {
            lVar27 = *(long *)(unaff_x22 + 0x1d8);
            lVar22 = *(long *)(*(long *)(lVar5 + 0x38) + uVar12 * 8);
            *(long *)(unaff_x22 + 0x240) = lVar22;
            func_0x000107c615f0(lVar22);
            func_0x000107c61574(lVar5);
            plVar6 = (long *)(lVar27 + 0x20);
            func_0x0001000a8868(plVar6,*(undefined8 *)(lVar27 + 0x38));
            lVar5 = *plVar6;
            plVar6 = (long *)0x550;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x248) = plVar6;
            *plVar6 = unaff_x22;
            plVar6[1] = (long)FUN_101b8f984;
            plVar6[99] = lVar5;
            *(undefined1 *)((long)plVar6 + 0x542) = 1;
            plVar6[0x62] = lVar22;
            plVar6[0x61] = uVar18;
            pcVar4 = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
            return;
          }
          func_0x000107c61170(uVar18);
          func_0x000107c6142c(uVar19);
          func_0x000107c61574(lVar5);
        }
      }
      uVar15 = *(ulong *)(unaff_x22 + 0x228);
    } while (uVar15 != *(ulong *)(unaff_x22 + 0x1e8));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000100cc810c(pcVar4,0);
                    /* WARNING: Could not recover jumptable at 0x000101b91960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar27);
  return;
}



/* Entry: 101b91db0; end: 101b92603;  */

void FUN_101b91db0(double param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  double dVar27;
  undefined1 auStack_a8 [72];
  
  dVar27 = *(double *)(unaff_x22 + 0x2b8);
  func_0x000107c6071c();
  *(double *)(unaff_x22 + 0x168) = param_1 - dVar27;
  *(undefined8 *)(unaff_x22 + 0x170) = 0x6961665f65766173;
  *(undefined8 *)(unaff_x22 + 0x178) = 0xeb0000000064656c;
  func_0x0001000d224c(unaff_x22 + 0xd8);
  lVar20 = *(long *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2b0);
  if (lVar20 == 0) {
    func_0x000107c61170(uVar18);
    func_0x000107c614ac(uVar14);
    func_0x000101b9d508(unaff_x22 + 0x10);
    func_0x000101b9d8a0(unaff_x22 + 0xd8,0x112e06c10,&UNK_10d9dabb0);
  }
  else {
    lVar23 = *(long *)(unaff_x22 + 0xf8);
    func_0x0001000a8868(unaff_x22 + 0xd8,lVar20);
    (**(code **)(lVar23 + 8))(unaff_x22 + 0x168,&UNK_110450508,&PTR_DAT_110450438,lVar20,lVar23);
    func_0x000107c61170(uVar18);
    func_0x000107c614ac(uVar14);
    func_0x000101b9d508(unaff_x22 + 0x10);
    func_0x0001000834e4(unaff_x22 + 0xd8);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x288);
  lVar20 = *(long *)(unaff_x22 + 0x278);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar16 = *(long *)(unaff_x22 + 0x280) + 1;
  if (uVar16 != *(ulong *)(unaff_x22 + 0x260)) {
    do {
      *(undefined8 *)(unaff_x22 + 0x288) = uVar14;
      *(ulong *)(unaff_x22 + 0x280) = uVar16;
      *(long *)(unaff_x22 + 0x278) = lVar20;
      *(undefined8 *)(unaff_x22 + 0x270) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x268) = uVar25;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x250) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b925fc);
        (*pcVar4)();
      }
      lVar23 = *(long *)(unaff_x22 + 0x1d0);
      lVar20 = *(long *)(unaff_x22 + 0x250) + uVar16 * 0x50;
      uVar18 = *(undefined8 *)(lVar20 + 0x38);
      uVar14 = *(undefined8 *)(lVar20 + 0x30);
      uVar15 = *(undefined8 *)(lVar20 + 0x48);
      uVar25 = *(undefined8 *)(lVar20 + 0x40);
      uVar21 = *(undefined8 *)(lVar20 + 0x50);
      uVar26 = *(undefined8 *)(lVar20 + 0x68);
      uVar24 = *(undefined8 *)(lVar20 + 0x60);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar20 + 0x58);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar26;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar24;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar25;
      uVar14 = *(undefined8 *)(lVar20 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar20 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
      bVar2 = *(byte *)(unaff_x22 + 0x20);
      uVar16 = (ulong)bVar2;
      *(byte *)(unaff_x22 + 0x2d0) = bVar2;
      if (*(long *)(lVar23 + 0x10) != 0) {
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar23 + 0x28));
        func_0x000107c60690();
        func_0x000107c606a8();
        uVar11 = -1L << ((ulong)*(byte *)(lVar23 + 0x20) & 0x3f);
        uVar16 = uVar16 & (uVar11 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar23 + (uVar16 >> 3 & 0xffffffffffffff8) + 0x38) >> (uVar16 & 0x3f) & 1)
            != 0) {
          do {
            if (*(byte *)(*(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x30) + uVar16) == bVar2) {
              func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
              uVar12 = 0;
              goto LAB_101b92088;
            }
            uVar16 = uVar16 + 1 & ~uVar11;
          } while ((*(ulong *)(*(long *)(unaff_x22 + 0x1d0) + 0x38 + (uVar16 >> 6) * 8) >>
                    (uVar16 & 0x3f) & 1) != 0);
        }
      }
      func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
      if (bVar2 != 0) {
        uVar12 = 1;
LAB_101b92088:
        *(undefined1 *)(unaff_x22 + 0x2d1) = uVar12;
        lVar20 = *(long *)(unaff_x22 + 0x28);
        if (lVar20 == 0) {
          lVar20 = *(long *)(unaff_x22 + 0x30);
          if (((lVar20 != 0) && (*(long *)(lVar20 + 0x10) != 0)) &&
             (lVar23 = *(long *)(unaff_x22 + 0x50), lVar23 != 0)) {
            uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
            puVar8 = PTR_PTR_1126bf8d0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            *(undefined **)(unaff_x22 + 0x290) = puVar8;
            lVar19 = *(long *)(lVar20 + 0x10);
            puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (lVar19 != 0) {
              *(undefined **)(unaff_x22 + 0x1b0) = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000100c077e4(0,lVar19,0);
              puVar9 = PTR___sSSN_11034da80;
              puVar17 = *(undefined **)(unaff_x22 + 0x1b0);
              puVar22 = (undefined8 *)(lVar20 + 0x28);
              do {
                uVar18 = *puVar22;
                *(undefined8 *)(unaff_x22 + 0x198) = puVar22[-1];
                *(undefined8 *)(unaff_x22 + 0x1a0) = uVar18;
                func_0x000107c61434();
                func_0x000107c6147c(unaff_x22 + 0x128,unaff_x22 + 0x198,puVar9,
                                    PTR___sypN_11034f1a8 + 8,7);
                *(undefined **)(unaff_x22 + 0x1b0) = puVar17;
                uVar16 = *(ulong *)(puVar17 + 0x10);
                if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar16) {
                  func_0x000100c077e4(1 < *(ulong *)(puVar17 + 0x18),uVar16 + 1,1);
                  puVar17 = *(undefined **)(unaff_x22 + 0x1b0);
                }
                puVar22 = puVar22 + 2;
                *(ulong *)(puVar17 + 0x10) = uVar16 + 1;
                func_0x000100102924(unaff_x22 + 0x128,puVar17 + uVar16 * 0x20 + 0x20);
                lVar19 = lVar19 + -1;
              } while (lVar19 != 0);
            }
            lVar19 = *(long *)(unaff_x22 + 0x1d8);
            puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            puVar10 = puVar17;
            func_0x000107c5fc48(puVar17,PTR___sypN_11034f1a8 + 8);
            func_0x000107c6142c(puVar17);
            func_0x000107c45788(puVar9);
            func_0x000107c61170(puVar10);
            func_0x000107c59588(puVar8);
            func_0x000107c61170(puVar9);
            func_0x000107c5fadc(uVar14,lVar23);
            func_0x000107c55d70(puVar8);
            func_0x000107c61170(uVar14);
            func_0x000107c5356c(puVar8);
            uVar14 = *(undefined8 *)(lVar19 + 0xf0);
            lVar20 = *(long *)(lVar19 + 0xf8);
            func_0x0001000a8868(lVar19 + 0xd8,uVar14);
            piVar13 = *(int **)(lVar20 + 8);
            iVar1 = *piVar13;
            plVar7 = (long *)(ulong)(uint)piVar13[1];
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x298) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101b903cc;
                    /* WARNING: Could not recover jumptable at 0x000101b925f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar13))(puVar8,uVar14,lVar20);
            return;
          }
        }
        else {
          func_0x000107c61174();
          lVar23 = lVar20;
          func_0x000107c40794();
          func_0x000107c60234(unaff_x22 + 0x148);
          func_0x000107c61170(lVar20);
          func_0x000107c615e8(lVar23);
          uVar18 = 0;
          FUN_101b9d860(0,0x112d50c78,&PTR_PTR_1126b25c0);
          uVar16 = unaff_x22 + 0x1c0;
          func_0x000107c6147c(uVar16,unaff_x22 + 0x148,PTR___sypN_11034f1a8 + 8,uVar18,6);
          if ((uVar16 & 1) != 0) {
            uVar11 = *(ulong *)(unaff_x22 + 0x1c0);
            *(ulong *)(unaff_x22 + 0x2b0) = uVar11;
            cVar3 = *(char *)(unaff_x22 + 0x2d1);
            uVar16 = uVar11;
            func_0x000107e6277c();
            if ((cVar3 == '\x01') && ((uVar16 & 1) != 0)) {
              func_0x000107c61170(uVar11);
              goto LAB_101b91f68;
            }
            func_0x000107c61174();
            func_0x000107c6071c();
            *(undefined8 *)(unaff_x22 + 0x2b8) = uVar14;
            plVar7 = (long *)0xe0;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x2c0) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101b912f4;
            lVar20 = *(long *)(unaff_x22 + 0x1d8);
            plVar7[0xf] = *(long *)(unaff_x22 + 0x240);
            plVar7[0x10] = lVar20;
            plVar7[0xd] = uVar11;
            plVar7[0xe] = unaff_x22 + 0x10;
            pcVar4 = FUN_101b9a62c;
            goto LAB_107c615e0;
          }
        }
        *(undefined8 *)(unaff_x22 + 0x1a8) = 1;
        func_0x0001000d224c(unaff_x22 + 0xb0);
        lVar20 = *(long *)(unaff_x22 + 200);
        if (lVar20 == 0) {
          func_0x000101b9d8a0(unaff_x22 + 0xb0,0x112e06c10,&UNK_10d9dabb0);
        }
        else {
          lVar23 = *(long *)(unaff_x22 + 0xd0);
          func_0x0001000a8868(unaff_x22 + 0xb0,lVar20);
          (**(code **)(lVar23 + 8))
                    (unaff_x22 + 0x1a8,&UNK_1104505b0,&PTR_DAT_1104503f8,lVar20,lVar23);
          func_0x0001000834e4(unaff_x22 + 0xb0);
        }
      }
LAB_101b91f68:
      func_0x000101b9d508(unaff_x22 + 0x10);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x288);
      lVar20 = *(long *)(unaff_x22 + 0x278);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x270);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar16 = *(long *)(unaff_x22 + 0x280) + 1;
    } while (uVar16 != *(ulong *)(unaff_x22 + 0x260));
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x238));
  if (lVar20 < 1) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x240);
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c615e8(uVar21);
    func_0x000107c6142c(uVar15);
  }
  else {
    lVar20 = *(long *)(unaff_x22 + 0x200);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar24 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
    if (lVar20 == 0) {
      func_0x000107c6142c(uVar24);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar15);
    }
    else {
      func_0x000107c4fd80();
      func_0x000107c6142c(uVar24);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar15);
      func_0x000107c615e8(lVar20);
    }
  }
  uVar16 = *(ulong *)(unaff_x22 + 0x228);
  if (uVar16 != *(ulong *)(unaff_x22 + 0x1e8)) {
    do {
      *(undefined8 *)(unaff_x22 + 0x218) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x210) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar25;
      uVar11 = *(ulong *)(unaff_x22 + 0x1c8);
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)(*(long *)(unaff_x22 + 0x1e0) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101b92604);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(uVar11 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar16;
        FUN_101b9bcc0(uVar16,uVar11,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x220) = uVar5;
      *(ulong *)(unaff_x22 + 0x228) = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101b92600);
        (*pcVar4)();
      }
      uVar16 = uVar5;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar16 == 0) {
        func_0x000107c61170(uVar5);
      }
      else {
        lVar20 = *(long *)(unaff_x22 + 0x1f0);
        uVar6 = uVar16;
        func_0x000107c5faec();
        func_0x000107c61170(uVar16);
        *(ulong *)(unaff_x22 + 0x230) = uVar6;
        *(ulong *)(unaff_x22 + 0x238) = uVar11;
        if (*(long *)(lVar20 + 0x10) == 0) {
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar11);
        }
        else {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x1f0));
          uVar16 = uVar11;
          func_0x000100029284();
          lVar20 = *(long *)(unaff_x22 + 0x1f0);
          if ((uVar16 & 1) != 0) {
            lVar19 = *(long *)(unaff_x22 + 0x1d8);
            lVar23 = *(long *)(*(long *)(lVar20 + 0x38) + uVar6 * 8);
            *(long *)(unaff_x22 + 0x240) = lVar23;
            func_0x000107c615f0(lVar23);
            func_0x000107c61574(lVar20);
            plVar7 = (long *)(lVar19 + 0x20);
            func_0x0001000a8868(plVar7,*(undefined8 *)(lVar19 + 0x38));
            lVar20 = *plVar7;
            plVar7 = (long *)0x550;
            func_0x000107c615b8();
            *(long **)(unaff_x22 + 0x248) = plVar7;
            *plVar7 = unaff_x22;
            plVar7[1] = (long)FUN_101b8f984;
            plVar7[99] = lVar20;
            *(undefined1 *)((long)plVar7 + 0x542) = 1;
            plVar7[0x62] = lVar23;
            plVar7[0x61] = uVar5;
            pcVar4 = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
            return;
          }
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar11);
          func_0x000107c61574(lVar20);
        }
      }
      uVar16 = *(ulong *)(unaff_x22 + 0x228);
    } while (uVar16 != *(ulong *)(unaff_x22 + 0x1e8));
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f0));
  func_0x000100cc810c(uVar18,0);
                    /* WARNING: Could not recover jumptable at 0x000101b92218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar14);
  return;
}



/* Entry: 101b92604; end: 101b926cf; -[_TtC35MemoriesFeaturedStorySnapGeneration34MemoriesFeaturedStorySnapGenerator scheduleClientGenOperationsForCollections:scheduleJobsImmediately:fastPathSaveCompletion:] */

void FUN_101b92604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  uVar1 = 0;
  FUN_101b9d860(0,0x112d61d40,&PTR_PTR_1126bf9a8);
  func_0x000107c5fc54(param_3,uVar1);
  if (param_5 == 0) {
    puVar3 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar3 = &UNK_1104500a0;
    func_0x000107c613fc(&UNK_1104500a0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_5;
    pcVar2 = FUN_101b9b704;
  }
  func_0x000107c6157c(param_1);
  FUN_101b8e02c(param_3,param_4,pcVar2,puVar3);
  func_0x000100cc810c(pcVar2,puVar3);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 101b926d0; end: 101b92737;  */

void FUN_101b926d0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,uVar1,PTR___sSSSHsWP_11034da90);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b92738; end: 101b92757;  */

void FUN_101b92738(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x280) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x3d0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x278) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b92758,0,0);
  return;
}



/* Entry: 101b92758; end: 101b93867;  */

/* WARNING: Possible PIC construction at 0x000101b92cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b92de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b93020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b93188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b933a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b93848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b93728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b930c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b92e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b9372c) */
/* WARNING: Removing unreachable block (ram,0x000101b937bc) */
/* WARNING: Removing unreachable block (ram,0x000101b9376c) */
/* WARNING: Removing unreachable block (ram,0x000101bae054) */
/* WARNING: Removing unreachable block (ram,0x000101b9384c) */
/* WARNING: Removing unreachable block (ram,0x000101b93850) */
/* WARNING: Removing unreachable block (ram,0x000101b933ac) */
/* WARNING: Removing unreachable block (ram,0x000101b9351c) */
/* WARNING: Removing unreachable block (ram,0x000101b9353c) */
/* WARNING: Removing unreachable block (ram,0x000101b93560) */
/* WARNING: Removing unreachable block (ram,0x000101b93670) */
/* WARNING: Removing unreachable block (ram,0x000101b935f0) */
/* WARNING: Removing unreachable block (ram,0x000101b93678) */
/* WARNING: Removing unreachable block (ram,0x000101b933e8) */
/* WARNING: Removing unreachable block (ram,0x000101b9318c) */
/* WARNING: Removing unreachable block (ram,0x000101b93024) */
/* WARNING: Removing unreachable block (ram,0x000101b9302c) */
/* WARNING: Removing unreachable block (ram,0x000101b9342c) */
/* WARNING: Removing unreachable block (ram,0x000101b93438) */
/* WARNING: Removing unreachable block (ram,0x000101b93048) */
/* WARNING: Removing unreachable block (ram,0x000101b931ac) */
/* WARNING: Removing unreachable block (ram,0x000101b93200) */
/* WARNING: Removing unreachable block (ram,0x000101b931c0) */
/* WARNING: Removing unreachable block (ram,0x000101b9320c) */
/* WARNING: Removing unreachable block (ram,0x000101b932ec) */
/* WARNING: Removing unreachable block (ram,0x000101b932d0) */
/* WARNING: Removing unreachable block (ram,0x000101b932f4) */
/* WARNING: Removing unreachable block (ram,0x000101b931fc) */
/* WARNING: Removing unreachable block (ram,0x000101b93480) */
/* WARNING: Removing unreachable block (ram,0x000101bad728) */
/* WARNING: Removing unreachable block (ram,0x000101b9307c) */
/* WARNING: Removing unreachable block (ram,0x000101b930cc) */
/* WARNING: Removing unreachable block (ram,0x000101b93090) */
/* WARNING: Removing unreachable block (ram,0x000101b930d4) */
/* WARNING: Removing unreachable block (ram,0x000101b92dec) */
/* WARNING: Removing unreachable block (ram,0x000101b92cc8) */
/* WARNING: Removing unreachable block (ram,0x000101b9360c) */
/* WARNING: Removing unreachable block (ram,0x000101b93648) */
/* WARNING: Removing unreachable block (ram,0x000101b9e2d0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */
/* WARNING: Removing unreachable block (ram,0x000101b92cf8) */
/* WARNING: Removing unreachable block (ram,0x000101b930c8) */
/* WARNING: Removing unreachable block (ram,0x000101b92b50) */
/* WARNING: Removing unreachable block (ram,0x000101b92918) */

void FUN_101b92758(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long unaff_x22;
  undefined *puVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  undefined *apuStack_70 [2];
  
  uVar16 = *(ulong *)(unaff_x22 + 0x278);
  uVar22 = uVar16 & 0xffffffffffffff8;
  if (uVar16 >> 0x3e == 0) {
    uVar14 = *(ulong *)(uVar22 + 0x10);
    uVar13 = uVar16;
  }
  else {
    uVar14 = uVar22;
    if ((uVar16 & 0x8000000000000000) != 0) {
      uVar14 = uVar16;
    }
    func_0x000107c60480();
    uVar13 = *(ulong *)(unaff_x22 + 0x278);
  }
  *(ulong *)(unaff_x22 + 0x288) = uVar14;
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != 0) {
    puVar11 = param_2;
    uVar5 = 0;
    do {
      while( true ) {
        if ((uVar16 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar22 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b92a9c);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar13 + 0x20 + uVar5 * 8);
          func_0x000107c61174();
          param_2 = puVar11;
        }
        else {
          param_2 = *(undefined **)(unaff_x22 + 0x278);
          uVar3 = uVar5;
          FUN_101b9bcc0(uVar5,param_2,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b92a98);
          (*pcVar2)();
        }
        uVar20 = uVar5 + 1;
        func_0x000107c61174();
        uVar4 = uVar3;
        func_0x000107c3fd78();
        func_0x000107c61180();
        if (uVar4 == 0) break;
        uVar5 = uVar4;
        func_0x000107c5faec();
        puVar11 = param_2;
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar3);
        puVar18 = puVar23;
        func_0x000107c61558();
        puVar8 = puVar23;
        if (((ulong)puVar18 & 1) == 0) {
          puVar11 = (undefined *)(*(long *)(puVar23 + 0x10) + 1);
          puVar8 = (undefined *)0x0;
          FUN_101b9beb8(0,puVar11,1,puVar23,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar3 = *(ulong *)(puVar8 + 0x10);
        puVar18 = (undefined *)(uVar3 + 1);
        puVar23 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
          puVar23 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          puVar11 = puVar18;
          FUN_101b9beb8(puVar23,puVar18,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(undefined **)(puVar23 + 0x10) = puVar18;
        *(ulong *)(puVar23 + uVar3 * 0x10 + 0x20) = uVar5;
        *(undefined **)(puVar23 + uVar3 * 0x10 + 0x28) = param_2;
        param_2 = puVar11;
        uVar5 = uVar20;
        if (uVar20 == uVar14) goto LAB_101b928f8;
      }
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar3);
      puVar11 = param_2;
      uVar5 = uVar5 + 1;
    } while (uVar20 != uVar14);
  }
LAB_101b928f8:
  puVar11 = puVar23;
  FUN_101b9a3dc();
  func_0x000107c6142c(puVar23);
  if (uVar16 >> 0x3e != 0) {
    if ((uVar16 & 0x8000000000000000) != 0) {
      uVar22 = *(ulong *)(unaff_x22 + 0x278);
    }
    func_0x000107c60480(uVar22);
  }
  puVar23 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar18 = *(undefined **)(puVar23 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar18 = puVar23;
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar18 = puVar11;
    }
    func_0x000107c60480(puVar18);
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar18 != (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)puVar11 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar23 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b92aa4);
            (*pcVar2)();
          }
          puVar21 = *(undefined **)(puVar11 + (long)puVar6 * 8 + 0x20);
          func_0x000107c615f0(puVar21);
          puVar12 = param_2;
        }
        else {
          puVar21 = puVar6;
          puVar12 = puVar11;
          FUN_101b8b230();
        }
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b92aa0);
          (*pcVar2)();
        }
        puVar19 = puVar6 + 1;
        puVar7 = puVar21;
        func_0x000107c42c98();
        func_0x000107c61180();
        if (puVar7 == (undefined *)0x0) break;
        puVar6 = puVar7;
        func_0x000107c5faec();
        param_2 = puVar12;
        func_0x000107c61170(puVar7);
        puVar7 = puVar8;
        func_0x000107c61558();
        if (((ulong)puVar7 & 1) == 0) {
          param_2 = (undefined *)(*(long *)(puVar8 + 0x10) + 1);
          puVar7 = (undefined *)0x0;
          FUN_101b9c0e8(0,param_2,1,puVar8);
          puVar8 = puVar7;
        }
        uVar22 = *(ulong *)(puVar8 + 0x10);
        puVar7 = (undefined *)(uVar22 + 1);
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar22) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          param_2 = puVar7;
          FUN_101b9c0e8(puVar8,puVar7,1);
        }
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined **)(puVar8 + uVar22 * 0x18 + 0x20) = puVar6;
        *(undefined **)(puVar8 + uVar22 * 0x18 + 0x28) = puVar12;
        *(undefined **)(puVar8 + uVar22 * 0x18 + 0x30) = puVar21;
        puVar6 = puVar19;
        if (puVar19 == puVar18) goto LAB_101b92ae4;
      }
      func_0x000107c615e8(puVar21);
      param_2 = puVar12;
      puVar6 = puVar6 + 1;
    } while (puVar19 != puVar18);
  }
LAB_101b92ae4:
  func_0x000107c6142c(puVar11);
  puVar23 = *(undefined **)(puVar8 + 0x10);
  apuStack_70[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar23 != (undefined *)0x0) {
    uVar15 = 0x112e06c18;
    func_0x0001000285a8(0x112e06c18,&UNK_10d9dabf0);
    func_0x000107c60498(puVar23,uVar15);
    apuStack_70[0] = puVar23;
  }
  FUN_101b9d5ec(puVar8,1,apuStack_70);
  func_0x000107c6142c(puVar8);
  *(undefined **)(unaff_x22 + 0x290) = apuStack_70[0];
  puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (uVar14 != 0) {
    *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x70);
    *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x110);
    puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if ((long)uVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b93868);
      (*pcVar2)();
    }
    lVar9 = 0;
    do {
      *(undefined **)(unaff_x22 + 0x2c0) = puVar11;
      *(undefined **)(unaff_x22 + 0x2b8) = puVar23;
      *(long *)(unaff_x22 + 0x2b0) = lVar9;
      *(undefined **)(unaff_x22 + 0x2a8) = puVar11;
      uVar22 = *(ulong *)(unaff_x22 + 0x278);
      if ((uVar22 & 0xc000000000000001) == 0) {
        lVar9 = *(long *)(uVar22 + lVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        FUN_101b9bcc0(lVar9,uVar22,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(long *)(unaff_x22 + 0x2c8) = lVar9;
      lVar17 = lVar9;
      func_0x000107c3f6f8();
      if (lVar17 == 0x31) {
        lVar17 = lVar9;
        func_0x000107c3fd78();
        func_0x000107c61180();
        if (lVar17 == 0) goto LAB_101b92bdc;
        lVar24 = *(long *)(unaff_x22 + 0x290);
        lVar10 = lVar17;
        func_0x000107c5faec();
        func_0x000107c61170(lVar17);
        *(long *)(unaff_x22 + 0x2d0) = lVar10;
        *(ulong *)(unaff_x22 + 0x2d8) = uVar22;
        if (*(long *)(lVar24 + 0x10) != 0) {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
          uVar16 = uVar22;
          func_0x000100029284();
          lVar17 = *(long *)(unaff_x22 + 0x290);
          if ((uVar16 & 1) == 0) {
            func_0x000107c6142c(uVar22);
            func_0x000107c61170(lVar9);
          }
          else {
            uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + lVar10 * 8);
            *(undefined8 *)(unaff_x22 + 0x2e0) = uVar15;
            func_0x000107c615f0(uVar15);
          }
          goto code_r0x000107c61574;
        }
        func_0x000107c6142c(uVar22);
        func_0x000107c61170(lVar9);
      }
      else {
LAB_101b92bdc:
        func_0x000107c61170(lVar9);
      }
      lVar9 = *(long *)(unaff_x22 + 0x2b0) + 1;
    } while (lVar9 != *(long *)(unaff_x22 + 0x288));
  }
  *(undefined **)(unaff_x22 + 0x308) = puVar11;
  *(undefined **)(unaff_x22 + 0x300) = puVar23;
  if ((ulong)puVar23 >> 0x3e == 0) {
    puVar11 = *(undefined **)((undefined *)((ulong)puVar23 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar11 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
    if (((ulong)puVar23 & 0x8000000000000000) != 0) {
      puVar11 = puVar23;
    }
    func_0x000107c60480();
  }
  *(undefined **)(unaff_x22 + 0x310) = puVar11;
  puVar18 = *(undefined **)(unaff_x22 + 0x278);
  if (puVar11 != (undefined *)0x0) {
    puVar18 = puVar23;
  }
  func_0x000107c61434(puVar18);
  if ((ulong)puVar23 >> 0x3e != 0) {
    puVar11 = (undefined *)((ulong)puVar23 & 0xffffffffffffff8);
    if (((ulong)puVar23 & 0x8000000000000000) != 0) {
      puVar11 = puVar23;
    }
    func_0x000107c60480(puVar11);
  }
  if ((ulong)puVar18 >> 0x3e == 0) {
    puVar23 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
    *(undefined **)(unaff_x22 + 0x318) = puVar23;
  }
  else {
    puVar23 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar18) {
      puVar23 = puVar18;
    }
    func_0x000107c60480();
    *(undefined **)(unaff_x22 + 0x318) = puVar23;
  }
  if (puVar23 != (undefined *)0x0) {
    uVar22 = 0;
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x70);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x110);
    do {
      puVar1 = (ulong *)(unaff_x22 + 0x278);
      if (*(long *)(unaff_x22 + 0x310) != 0) {
        puVar1 = (ulong *)(unaff_x22 + 0x300);
      }
      uVar16 = *puVar1;
      if ((uVar16 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b937fc);
          (*pcVar2)();
        }
        uVar14 = *(ulong *)(uVar16 + uVar22 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar14 = uVar22;
        FUN_101b9bcc0(uVar22,uVar16,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x330) = uVar14;
      *(ulong *)(unaff_x22 + 0x338) = uVar22 + 1;
      if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101b937f8);
        (*pcVar2)();
      }
      uVar22 = uVar14;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar22 != 0) {
        lVar9 = *(long *)(unaff_x22 + 0x290);
        uVar13 = uVar22;
        func_0x000107c5faec();
        func_0x000107c61170(uVar22);
        if (*(long *)(lVar9 + 0x10) != 0) {
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
          uVar22 = uVar16;
          func_0x000100029284();
          if ((uVar22 & 1) == 0) {
            lVar17 = *(long *)(unaff_x22 + 0x290);
            func_0x000107c6142c(uVar16);
            func_0x000107c61170(uVar14);
          }
          else {
            lVar17 = *(long *)(unaff_x22 + 0x290);
            uVar15 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar13 * 8);
            *(undefined8 *)(unaff_x22 + 0x340) = uVar15;
            func_0x000107c615f0(uVar15);
          }
          goto code_r0x000107c61574;
        }
        func_0x000107c6142c(uVar16);
      }
      func_0x000107c61170(uVar14);
      uVar22 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar22 != *(ulong *)(unaff_x22 + 0x318));
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x300);
  lVar17 = *(long *)(unaff_x22 + 0x290);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar15);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar17);
  return;
}



/* Entry: 101b93868; end: 101b938cb;  */

void FUN_101b93868(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x2f0) = param_1;
  *(long *)(lVar2 + 0x2f8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2e8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b938cc;
  }
  else {
    pcVar1 = FUN_101b94794;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b938cc; end: 101b94793;  */

void FUN_101b938cc(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar12 = *(long *)(unaff_x22 + 0x2f0);
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2c8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2d8));
    func_0x000107c61170(uVar23);
    func_0x000107c615e8(uVar18);
    func_0x000107c6142c(lVar12);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2c0);
    uVar4 = *(ulong *)(unaff_x22 + 0x2b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2a8);
  }
  else {
    uVar13 = *(ulong *)(unaff_x22 + 0x2b8);
    func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x2c8));
    uVar4 = uVar13;
    func_0x000107c61550();
    uVar11 = *(ulong *)(unaff_x22 + 0x2b8);
    if ((((int)uVar4 == 0) || ((uVar13 >> 0x3e & 1) != 0)) || (uVar5 = uVar11, (long)uVar11 < 0)) {
      if (uVar11 >> 0x3e == 0) {
        uVar4 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar4 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar4 = uVar11;
        }
        func_0x000107c60480(uVar4);
        uVar11 = *(ulong *)(unaff_x22 + 0x2b8);
      }
      uVar5 = 0;
      FUN_101b9c250(0,uVar4 + 1,1,uVar11,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,&UNK_10d9dac00);
      uVar13 = uVar5;
    }
    uVar13 = uVar13 & 0xffffffffffffff8;
    uVar11 = *(ulong *)(uVar13 + 0x10);
    uVar4 = uVar5;
    if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar11) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
      FUN_101b9c250(uVar4,uVar11 + 1,1,uVar5,0x112d61d40,&PTR_PTR_1126bf9a8,0x112d61d48,
                    &UNK_10d9dac00);
      uVar13 = uVar4 & 0xffffffffffffff8;
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x2a8);
    *(ulong *)(uVar13 + 0x10) = uVar11 + 1;
    *(undefined8 *)(uVar13 + uVar11 * 8 + 0x20) = uVar22;
    uVar18 = uVar23;
    func_0x000107c61558(uVar23);
    FUN_101b9ccf0(uVar15,uVar19,uVar17,uVar18);
    func_0x000107c6142c(uVar17);
    func_0x000107c615e8(uVar16);
    func_0x000107c61170(uVar22);
    uVar18 = uVar23;
  }
  uVar13 = *(long *)(unaff_x22 + 0x2b0) + 1;
  if (uVar13 != *(ulong *)(unaff_x22 + 0x288)) {
    lVar12 = *(long *)(unaff_x22 + 0x2f8);
    do {
      while( true ) {
        *(undefined8 *)(unaff_x22 + 0x2c0) = uVar18;
        *(ulong *)(unaff_x22 + 0x2b8) = uVar4;
        *(ulong *)(unaff_x22 + 0x2b0) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x2a8) = uVar23;
        uVar11 = *(ulong *)(unaff_x22 + 0x278);
        if ((uVar11 & 0xc000000000000001) == 0) {
          uVar13 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          FUN_101b9bcc0(uVar13,uVar11,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        *(ulong *)(unaff_x22 + 0x2c8) = uVar13;
        uVar5 = uVar13;
        func_0x000107c3f6f8();
        if (uVar5 == 0x31) break;
LAB_101b94028:
        func_0x000107c61170(uVar13);
LAB_101b94030:
        uVar13 = *(long *)(unaff_x22 + 0x2b0) + 1;
        if (uVar13 == *(ulong *)(unaff_x22 + 0x288)) goto LAB_101b93a3c;
      }
      uVar5 = uVar13;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar5 == 0) goto LAB_101b94028;
      lVar14 = *(long *)(unaff_x22 + 0x290);
      uVar7 = uVar5;
      func_0x000107c5faec();
      func_0x000107c61170(uVar5);
      *(ulong *)(unaff_x22 + 0x2d0) = uVar7;
      *(ulong *)(unaff_x22 + 0x2d8) = uVar11;
      if (*(long *)(lVar14 + 0x10) == 0) {
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar13);
        goto LAB_101b94030;
      }
      func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
      uVar5 = uVar11;
      func_0x000100029284();
      lVar14 = *(long *)(unaff_x22 + 0x290);
      if ((uVar5 & 1) == 0) {
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar13);
        func_0x000107c61574(lVar14);
        goto LAB_101b94030;
      }
      lVar21 = *(long *)(unaff_x22 + 0x280);
      lVar20 = *(long *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
      *(long *)(unaff_x22 + 0x2e0) = lVar20;
      func_0x000107c615f0(lVar20);
      func_0x000107c61574(lVar14);
      uVar18 = *(undefined8 *)(lVar21 + 0xc0);
      lVar14 = *(long *)(lVar21 + 200);
      func_0x0001000a8868(lVar21 + 0xa8,uVar18);
      (**(code **)(lVar14 + 0x18))(lVar20,uVar18,lVar14);
      if (lVar12 == 0) {
        plVar10 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x20);
        func_0x0001000a8868(plVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x38));
        lVar12 = *plVar10;
        plVar10 = (long *)0x550;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x2e8) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_101b93868;
        goto LAB_101b94328;
      }
      func_0x000107c6142c(uVar11);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x2e0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x2c8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x2a0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x298);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
      func_0x000107c614cc(lVar12,unaff_x22 + 0x270,unaff_x22 + 0x200);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x210);
      func_0x000107c60640();
      puVar8 = &UNK_110450168;
      func_0x000107c613fc(&UNK_110450168,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,uVar16);
      puVar9 = &UNK_110450398;
      func_0x000107c613fc(&UNK_110450398,0x50,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined8 *)(puVar9 + 0x18) = 0xd000000000000034;
      *(undefined8 *)(puVar9 + 0x20) = 0x800000010f001cb0;
      puVar9[0x28] = 1;
      *(undefined8 *)(puVar9 + 0x30) = uVar18;
      *(undefined8 *)(puVar9 + 0x38) = uVar23;
      *(undefined8 *)(puVar9 + 0x40) = 0;
      *(undefined8 *)(puVar9 + 0x48) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0x101b9d92c;
      *(undefined **)(unaff_x22 + 0x1c8) = puVar9;
      *(undefined **)(unaff_x22 + 0x1a0) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
      *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104503b0;
      lVar14 = unaff_x22 + 0x1a0;
      func_0x000107c60bc4(lVar14);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1c8);
      func_0x000107c61434(uVar23);
      func_0x000107c61574(uVar18);
      func_0x000108ec0f10(uVar15,uVar22,lVar14);
      func_0x000107c60bd0(lVar14);
      func_0x000107c61170(uVar19);
      func_0x000107c615e8(uVar17);
      func_0x000107c6142c(uVar23);
      func_0x000107c614ac(lVar12);
      lVar12 = 0;
      uVar18 = *(undefined8 *)(unaff_x22 + 0x2c0);
      uVar4 = *(ulong *)(unaff_x22 + 0x2b8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x2a8);
      uVar13 = *(long *)(unaff_x22 + 0x2b0) + 1;
    } while (uVar13 != *(ulong *)(unaff_x22 + 0x288));
  }
LAB_101b93a3c:
  *(undefined8 *)(unaff_x22 + 0x308) = uVar18;
  *(ulong *)(unaff_x22 + 0x300) = uVar4;
  if (uVar4 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar13 = uVar4;
    }
    func_0x000107c60480();
  }
  *(ulong *)(unaff_x22 + 0x310) = uVar13;
  uVar11 = *(ulong *)(unaff_x22 + 0x278);
  if (uVar13 != 0) {
    uVar11 = uVar4;
  }
  func_0x000107c61434(uVar11);
  if (uVar4 >> 0x3e != 0) {
    uVar13 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar13 = uVar4;
    }
    func_0x000107c60480(uVar13);
  }
  if (uVar11 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
    *(ulong *)(unaff_x22 + 0x318) = uVar4;
  }
  else {
    uVar4 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar4 = uVar11;
    }
    func_0x000107c60480();
    *(ulong *)(unaff_x22 + 0x318) = uVar4;
  }
  if (uVar4 != 0) {
    uVar4 = 0;
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x70);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x110);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      puVar1 = (ulong *)(unaff_x22 + 0x278);
      if (*(long *)(unaff_x22 + 0x310) != 0) {
        puVar1 = (ulong *)(unaff_x22 + 0x300);
      }
      uVar11 = *puVar1;
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b946a8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar13 = *(ulong *)(uVar11 + uVar4 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar13 = uVar4;
        FUN_101b9bcc0(uVar4,uVar11,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x330) = uVar13;
      *(ulong *)(unaff_x22 + 0x338) = uVar4 + 1;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b94664);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar4 = uVar13;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar4 == 0) {
LAB_101b93af0:
        func_0x000107c61170(uVar13);
      }
      else {
        lVar12 = *(long *)(unaff_x22 + 0x290);
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        if (*(long *)(lVar12 + 0x10) == 0) {
          func_0x000107c6142c(uVar11);
          goto LAB_101b93af0;
        }
        func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
        uVar4 = uVar5;
        uVar7 = uVar11;
        func_0x000100029284();
        if ((uVar7 & 1) != 0) {
          lVar12 = *(long *)(unaff_x22 + 0x308);
          lVar14 = *(long *)(unaff_x22 + 0x290);
          lVar20 = *(long *)(*(long *)(lVar14 + 0x38) + uVar4 * 8);
          *(long *)(unaff_x22 + 0x340) = lVar20;
          func_0x000107c615f0(lVar20);
          func_0x000107c61574(lVar14);
          if (*(long *)(lVar12 + 0x10) != 0) {
            func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
            uVar4 = uVar11;
            func_0x000100029284();
            if ((uVar4 & 1) != 0) {
              lVar12 = *(long *)(unaff_x22 + 0x308);
              lVar14 = *(long *)(*(long *)(lVar12 + 0x38) + uVar5 * 8);
              func_0x000107c61434(lVar14);
              func_0x000107c6142c(uVar11);
              func_0x000107c6142c(lVar12);
              *(long *)(unaff_x22 + 0x360) = lVar14;
              lVar12 = *(long *)(lVar14 + 0x10);
              *(long *)(unaff_x22 + 0x368) = lVar12;
              if (lVar12 == 0) {
                lVar14 = *(long *)(unaff_x22 + 0x330);
                func_0x000107c5cab0();
                func_0x000107c61180();
                if (lVar14 == 0) {
                  lVar20 = 0;
                  uVar4 = 0;
                }
                else {
                  lVar20 = lVar14;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar14);
                }
                uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
                uVar23 = *(undefined8 *)(unaff_x22 + 800);
                uVar15 = *(undefined8 *)(unaff_x22 + 0x280);
                puVar9 = &UNK_110450168;
                func_0x000107c613fc(&UNK_110450168,0x18,7);
                func_0x000107c61644(puVar9 + 0x10,uVar15);
                puVar6 = &UNK_110450348;
                func_0x000107c613fc(&UNK_110450348,0x50,7);
                *(undefined **)(puVar6 + 0x10) = puVar9;
                *(undefined8 *)(puVar6 + 0x18) = 0xd000000000000014;
                *(undefined8 *)(puVar6 + 0x20) = 0x800000010f001c90;
                puVar6[0x28] = 1;
                *(undefined8 *)(puVar6 + 0x30) = 0;
                *(undefined8 *)(puVar6 + 0x38) = 0;
                *(long *)(puVar6 + 0x40) = lVar20;
                *(ulong *)(puVar6 + 0x48) = uVar4;
                *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
                *(undefined **)(unaff_x22 + 0x198) = puVar6;
                *(undefined **)(unaff_x22 + 0x170) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
                *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
                lVar14 = unaff_x22 + 0x170;
                func_0x000107c60bc4(lVar14);
                uVar15 = *(undefined8 *)(unaff_x22 + 0x198);
                func_0x000107c61434(uVar4);
                func_0x000107c61574(uVar15);
                func_0x000108ec0f10(uVar23,uVar18,lVar14);
                func_0x000107c60bd0(lVar14);
                func_0x000107c6142c(uVar4);
              }
              lVar14 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c42d70();
              func_0x000107c61180();
              if (lVar14 == 0) {
                *(undefined8 *)(unaff_x22 + 0x370) = 0;
              }
              else {
                uVar23 = *(undefined8 *)(unaff_x22 + 0x330);
                func_0x000107c61170();
                func_0x000107c42d70();
                func_0x000107c61180();
                uVar18 = uVar23;
                func_0x000107e6b314();
                func_0x000107c61180();
                func_0x000107c61170(uVar23);
                *(undefined8 *)(unaff_x22 + 0x370) = uVar18;
              }
              if (lVar12 != 0) {
                *(undefined **)(unaff_x22 + 0x388) = puVar8;
                *(undefined **)(unaff_x22 + 0x380) = puVar8;
                *(undefined8 *)(unaff_x22 + 0x378) = 0;
                lVar12 = *(long *)(unaff_x22 + 0x360);
                uVar18 = *(undefined8 *)(lVar12 + 0x20);
                *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar12 + 0x28);
                *(undefined8 *)(unaff_x22 + 0x10) = uVar18;
                uVar18 = *(undefined8 *)(lVar12 + 0x50);
                uVar15 = *(undefined8 *)(lVar12 + 0x68);
                uVar23 = *(undefined8 *)(lVar12 + 0x60);
                uVar22 = *(undefined8 *)(lVar12 + 0x38);
                uVar19 = *(undefined8 *)(lVar12 + 0x30);
                uVar17 = *(undefined8 *)(lVar12 + 0x48);
                uVar16 = *(undefined8 *)(lVar12 + 0x40);
                *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar12 + 0x58);
                *(undefined8 *)(unaff_x22 + 0x40) = uVar18;
                *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
                *(undefined8 *)(unaff_x22 + 0x50) = uVar23;
                *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
                *(undefined8 *)(unaff_x22 + 0x20) = uVar19;
                *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
                *(undefined8 *)(unaff_x22 + 0x30) = uVar16;
                plVar10 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
                func_0x0001000a8868(plVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
                lVar14 = *plVar10;
                FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
                plVar10 = (long *)0x1d0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x390) = plVar10;
                *plVar10 = unaff_x22;
                plVar10[1] = (long)FUN_101b9695c;
                lVar12 = *(long *)(unaff_x22 + 0x340);
                plVar10[0x27] = *(long *)(unaff_x22 + 0x370);
                plVar10[0x28] = lVar14;
                plVar10[0x25] = lVar12;
                plVar10[0x26] = unaff_x22 + 0x10;
                UNRECOVERED_JUMPTABLE = FUN_101bad744;
                goto LAB_107c615e0;
              }
              *(undefined **)(unaff_x22 + 0x3a8) = puVar8;
              *(undefined **)(unaff_x22 + 0x3a0) = puVar8;
              lVar12 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
              *(undefined8 *)(unaff_x22 + 0x228) = 0;
              *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
              func_0x000107c602fc(0x13);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
              *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
              *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
              *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar8 + 0x10);
              puVar9 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar9);
              uVar18 = 0xeb00000000736e6f;
              func_0x000107c5fb78(0x6974617265706f20);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x218);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x220);
              lVar14 = *(long *)(puVar8 + 0x10);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar12 == 0) {
                lVar20 = 0;
                uVar18 = 0;
              }
              else {
                lVar20 = lVar12;
                func_0x000107c5faec();
                func_0x000107c61170(lVar12);
              }
              uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar17 = *(undefined8 *)(unaff_x22 + 800);
              uVar19 = *(undefined8 *)(unaff_x22 + 0x280);
              puVar8 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar8 + 0x10,uVar19);
              puVar9 = &UNK_1104502a8;
              func_0x000107c613fc(&UNK_1104502a8,0x50,7);
              *(undefined **)(puVar9 + 0x10) = puVar8;
              *(undefined8 *)(puVar9 + 0x18) = uVar15;
              *(undefined8 *)(puVar9 + 0x20) = uVar23;
              puVar9[0x28] = lVar14 == 0;
              *(undefined8 *)(puVar9 + 0x30) = 0;
              *(undefined8 *)(puVar9 + 0x38) = 0;
              *(long *)(puVar9 + 0x40) = lVar20;
              *(undefined8 *)(puVar9 + 0x48) = uVar18;
              *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
              *(undefined **)(unaff_x22 + 0x138) = puVar9;
              *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
              lVar12 = unaff_x22 + 0x110;
              func_0x000107c60bc4(lVar12);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x138);
              func_0x000107c61434(uVar18);
              func_0x000107c61434(uVar23);
              func_0x000107c61574(uVar15);
              func_0x000108ec0f10(uVar17,uVar16,lVar12);
              func_0x000107c60bd0(lVar12);
              func_0x000107c6142c(uVar18);
              func_0x000107c6142c(uVar23);
              puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
              lVar12 = *(long *)(unaff_x22 + 0x330);
              if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
                func_0x000107c61170();
                uVar23 = *(undefined8 *)(unaff_x22 + 0x3a8);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar15 = *(undefined8 *)(unaff_x22 + 0x370);
                func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
                func_0x000107c6142c(uVar23);
                func_0x000107c6142c(uVar18);
                func_0x000107c61170(uVar15);
                goto LAB_101b93af8;
              }
              bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
              uVar18 = 0xe900000000000065;
              if (bVar3) {
                uVar18 = 0xed00006574616964;
              }
              uVar23 = 0x74616964656d6d69;
              if (bVar3) {
                uVar23 = 0x656d6d69206e6f6e;
              }
              *(undefined8 *)(unaff_x22 + 0x248) = 0;
              *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
              func_0x000107c602fc(0x10);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
              *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
              *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
              func_0x000107c5fb78(uVar23,uVar18);
              func_0x000107c6142c(uVar18);
              uVar18 = 0xe400000000000000;
              func_0x000107c5fb78(0x626f6a20);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x240);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar12 == 0) {
                lVar14 = 0;
                uVar18 = 0;
              }
              else {
                lVar14 = lVar12;
                func_0x000107c5faec();
                func_0x000107c61170(lVar12);
              }
              uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar17 = *(undefined8 *)(unaff_x22 + 800);
              lVar20 = *(long *)(unaff_x22 + 0x280);
              cVar2 = *(char *)(unaff_x22 + 0x3d0);
              puVar8 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar8 + 0x10,lVar20);
              puVar9 = &UNK_1104502f8;
              func_0x000107c613fc(&UNK_1104502f8,0x50,7);
              *(undefined **)(puVar9 + 0x10) = puVar8;
              *(undefined8 *)(puVar9 + 0x18) = uVar15;
              *(undefined8 *)(puVar9 + 0x20) = uVar23;
              puVar9[0x28] = 0;
              *(undefined8 *)(puVar9 + 0x30) = 0;
              *(undefined8 *)(puVar9 + 0x38) = 0;
              *(long *)(puVar9 + 0x40) = lVar14;
              *(undefined8 *)(puVar9 + 0x48) = uVar18;
              *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
              *(undefined **)(unaff_x22 + 0x168) = puVar9;
              *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
              lVar12 = unaff_x22 + 0x140;
              func_0x000107c60bc4(lVar12);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
              func_0x000107c61434(uVar18);
              func_0x000107c61434(uVar23);
              func_0x000107c61574(uVar15);
              func_0x000108ec0f10(uVar17,uVar16,lVar12);
              func_0x000107c60bd0(lVar12);
              func_0x000107c6142c(uVar18);
              func_0x000107c6142c(uVar23);
              plVar10 = (long *)(lVar20 + 0x48);
              func_0x0001000a8868(plVar10,*(undefined8 *)(lVar20 + 0x60));
              lVar12 = *plVar10;
              if (cVar2 != '\x01') {
                plVar10 = (long *)0xd0;
                UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x3c0) = plVar10;
                *plVar10 = unaff_x22;
                plVar10[1] = (long)FUN_101b99514;
                goto LAB_101b94714;
              }
              plVar10 = (long *)0xe0;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x3b0) = plVar10;
              *plVar10 = unaff_x22;
              plVar10[1] = (long)FUN_101b9800c;
              plVar10[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
              plVar10[0x16] = lVar12;
              UNRECOVERED_JUMPTABLE = FUN_101bae06c;
              goto LAB_107c615e0;
            }
            func_0x000107c6142c(uVar11);
            uVar11 = *(ulong *)(unaff_x22 + 0x308);
          }
          lVar12 = *(long *)(unaff_x22 + 0x280);
          func_0x000107c6142c(uVar11);
          plVar10 = (long *)(lVar12 + 0x20);
          func_0x0001000a8868(plVar10,*(undefined8 *)(lVar12 + 0x38));
          lVar12 = *plVar10;
          plVar10 = (long *)0x550;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x348) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_101b954b4;
LAB_101b94328:
          plVar10[99] = lVar12;
          *(undefined1 *)((long)plVar10 + 0x542) = 0;
          plVar10[0x62] = lVar20;
          plVar10[0x61] = uVar13;
          UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
          return;
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar13);
        func_0x000107c61574(uVar18);
      }
LAB_101b93af8:
      uVar4 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar4 != *(ulong *)(unaff_x22 + 0x318));
  }
  lVar12 = *(long *)(unaff_x22 + 0x310);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar15);
  func_0x000107c61574(uVar23);
  if (lVar12 != 0) {
    uVar18 = uVar15;
  }
  func_0x000107c6142c(uVar18);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101b94714:
                    /* WARNING: Could not recover jumptable at 0x000101b94734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b94794; end: 101b954b3;  */

/* WARNING: Removing unreachable block (ram,0x000101b94a80) */

void FUN_101b94794(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long unaff_x22;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x2d8));
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2f8);
  puVar5 = &UNK_110450168;
  puVar6 = &UNK_110450398;
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x280);
  func_0x000107c614cc(uVar19,unaff_x22 + 0x270,unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x210);
  func_0x000107c60640();
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,uVar21);
  func_0x000107c613fc(&UNK_110450398,0x50,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = 0xd000000000000034;
  *(undefined8 *)(puVar6 + 0x20) = 0x800000010f001cb0;
  puVar6[0x28] = 1;
  *(undefined8 *)(puVar6 + 0x30) = uVar4;
  *(undefined8 *)(puVar6 + 0x38) = uVar12;
  *(undefined8 *)(puVar6 + 0x40) = 0;
  *(undefined8 *)(puVar6 + 0x48) = 0;
  *(undefined8 *)(unaff_x22 + 0x1c0) = 0x101b9d92c;
  *(undefined **)(unaff_x22 + 0x1c8) = puVar6;
  *(undefined **)(unaff_x22 + 0x1a0) = puVar10;
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x1b0) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 0x1b8) = &UNK_1104503b0;
  lVar22 = unaff_x22 + 0x1a0;
  func_0x000107c60bc4(lVar22);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  func_0x000107c61434(uVar12);
  func_0x000107c61574(uVar4);
  func_0x000108ec0f10(uVar15,uVar17,lVar22);
  func_0x000107c60bd0(lVar22);
  func_0x000107c61170(uVar14);
  func_0x000107c615e8(uVar16);
  func_0x000107c6142c(uVar12);
  func_0x000107c614ac(uVar19);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar20 = *(ulong *)(unaff_x22 + 0x2b8);
  uVar9 = *(long *)(unaff_x22 + 0x2b0) + 1;
  if (uVar9 != *(ulong *)(unaff_x22 + 0x288)) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2a8);
    do {
      *(undefined8 *)(unaff_x22 + 0x2c0) = uVar4;
      *(ulong *)(unaff_x22 + 0x2b8) = uVar20;
      *(ulong *)(unaff_x22 + 0x2b0) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x2a8) = uVar12;
      uVar13 = *(ulong *)(unaff_x22 + 0x278);
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar9 = *(ulong *)(uVar13 + uVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        FUN_101b9bcc0(uVar9,uVar13,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x2c8) = uVar9;
      uVar7 = uVar9;
      func_0x000107c3f6f8();
      if (uVar7 == 0x31) {
        uVar7 = uVar9;
        func_0x000107c3fd78();
        func_0x000107c61180();
        if (uVar7 == 0) goto LAB_101b94940;
        lVar22 = *(long *)(unaff_x22 + 0x290);
        uVar8 = uVar7;
        func_0x000107c5faec();
        func_0x000107c61170(uVar7);
        *(ulong *)(unaff_x22 + 0x2d0) = uVar8;
        *(ulong *)(unaff_x22 + 0x2d8) = uVar13;
        if (*(long *)(lVar22 + 0x10) == 0) {
          func_0x000107c6142c(uVar13);
          goto LAB_101b94940;
        }
        func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
        uVar7 = uVar13;
        func_0x000100029284();
        lVar22 = *(long *)(unaff_x22 + 0x290);
        if ((uVar7 & 1) != 0) {
          lVar18 = *(long *)(unaff_x22 + 0x280);
          lVar23 = *(long *)(*(long *)(lVar22 + 0x38) + uVar8 * 8);
          *(long *)(unaff_x22 + 0x2e0) = lVar23;
          func_0x000107c615f0(lVar23);
          func_0x000107c61574(lVar22);
          uVar4 = *(undefined8 *)(lVar18 + 0xc0);
          lVar22 = *(long *)(lVar18 + 200);
          func_0x0001000a8868(lVar18 + 0xa8,uVar4);
          (**(code **)(lVar22 + 0x18))(lVar23,uVar4,lVar22);
          plVar11 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x20);
          func_0x0001000a8868(plVar11,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x38));
          lVar22 = *plVar11;
          plVar11 = (long *)0x550;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x2e8) = plVar11;
          *plVar11 = unaff_x22;
          plVar11[1] = (long)FUN_101b93868;
          goto LAB_101b95108;
        }
        func_0x000107c6142c(uVar13);
        func_0x000107c61170(uVar9);
        func_0x000107c61574(lVar22);
      }
      else {
LAB_101b94940:
        func_0x000107c61170(uVar9);
      }
      uVar9 = *(long *)(unaff_x22 + 0x2b0) + 1;
    } while (uVar9 != *(ulong *)(unaff_x22 + 0x288));
  }
  *(undefined8 *)(unaff_x22 + 0x308) = uVar4;
  *(ulong *)(unaff_x22 + 0x300) = uVar20;
  if (uVar20 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar20 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar20 & 0xffffffffffffff8;
    if ((uVar20 & 0x8000000000000000) != 0) {
      uVar9 = uVar20;
    }
    func_0x000107c60480();
  }
  puVar10 = PTR___NSConcreteStackBlock_11034bd00;
  *(ulong *)(unaff_x22 + 0x310) = uVar9;
  uVar13 = *(ulong *)(unaff_x22 + 0x278);
  if (uVar9 != 0) {
    uVar13 = uVar20;
  }
  func_0x000107c61434(uVar13);
  if (uVar20 >> 0x3e != 0) {
    uVar9 = uVar20 & 0xffffffffffffff8;
    if ((uVar20 & 0x8000000000000000) != 0) {
      uVar9 = uVar20;
    }
    func_0x000107c60480(uVar9);
  }
  if (uVar13 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar9 = uVar13;
    }
    func_0x000107c60480();
  }
  *(ulong *)(unaff_x22 + 0x318) = uVar9;
  if (uVar9 != 0) {
    uVar20 = 0;
    *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x70);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x110);
    do {
      puVar1 = (ulong *)(unaff_x22 + 0x278);
      if (*(long *)(unaff_x22 + 0x310) != 0) {
        puVar1 = (ulong *)(unaff_x22 + 0x300);
      }
      uVar13 = *puVar1;
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b95490);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar9 = *(ulong *)(uVar13 + uVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar20;
        FUN_101b9bcc0(uVar20,uVar13,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x330) = uVar9;
      *(ulong *)(unaff_x22 + 0x338) = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b9548c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar20 = uVar9;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar20 == 0) {
LAB_101b94b64:
        func_0x000107c61170(uVar9);
      }
      else {
        lVar22 = *(long *)(unaff_x22 + 0x290);
        uVar7 = uVar20;
        func_0x000107c5faec();
        func_0x000107c61170(uVar20);
        if (*(long *)(lVar22 + 0x10) == 0) {
          func_0x000107c6142c(uVar13);
          goto LAB_101b94b64;
        }
        func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
        uVar20 = uVar7;
        uVar8 = uVar13;
        func_0x000100029284();
        if ((uVar8 & 1) != 0) {
          lVar22 = *(long *)(unaff_x22 + 0x308);
          lVar18 = *(long *)(unaff_x22 + 0x290);
          lVar23 = *(long *)(*(long *)(lVar18 + 0x38) + uVar20 * 8);
          *(long *)(unaff_x22 + 0x340) = lVar23;
          func_0x000107c615f0(lVar23);
          func_0x000107c61574(lVar18);
          if (*(long *)(lVar22 + 0x10) != 0) {
            func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
            uVar20 = uVar13;
            func_0x000100029284();
            if ((uVar20 & 1) != 0) {
              lVar22 = *(long *)(unaff_x22 + 0x308);
              lVar23 = *(long *)(*(long *)(lVar22 + 0x38) + uVar7 * 8);
              func_0x000107c61434(lVar23);
              func_0x000107c6142c(uVar13);
              func_0x000107c6142c(lVar22);
              *(long *)(unaff_x22 + 0x360) = lVar23;
              lVar22 = *(long *)(lVar23 + 0x10);
              *(long *)(unaff_x22 + 0x368) = lVar22;
              if (lVar22 == 0) {
                lVar23 = *(long *)(unaff_x22 + 0x330);
                func_0x000107c5cab0();
                func_0x000107c61180();
                if (lVar23 == 0) {
                  lVar18 = 0;
                  uVar20 = 0;
                }
                else {
                  lVar18 = lVar23;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar23);
                }
                uVar4 = *(undefined8 *)(unaff_x22 + 0x328);
                uVar12 = *(undefined8 *)(unaff_x22 + 800);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x280);
                puVar5 = &UNK_110450168;
                func_0x000107c613fc(&UNK_110450168,0x18,7);
                func_0x000107c61644(puVar5 + 0x10,uVar14);
                puVar6 = &UNK_110450348;
                func_0x000107c613fc(&UNK_110450348,0x50,7);
                *(undefined **)(puVar6 + 0x10) = puVar5;
                *(undefined8 *)(puVar6 + 0x18) = 0xd000000000000014;
                *(undefined8 *)(puVar6 + 0x20) = 0x800000010f001c90;
                puVar6[0x28] = 1;
                *(undefined8 *)(puVar6 + 0x30) = 0;
                *(undefined8 *)(puVar6 + 0x38) = 0;
                *(long *)(puVar6 + 0x40) = lVar18;
                *(ulong *)(puVar6 + 0x48) = uVar20;
                *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
                *(undefined **)(unaff_x22 + 0x198) = puVar6;
                *(undefined **)(unaff_x22 + 0x170) = puVar10;
                *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
                *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
                lVar23 = unaff_x22 + 0x170;
                func_0x000107c60bc4(lVar23);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x198);
                func_0x000107c61434(uVar20);
                func_0x000107c61574(uVar14);
                func_0x000108ec0f10(uVar12,uVar4,lVar23);
                func_0x000107c60bd0(lVar23);
                func_0x000107c6142c(uVar20);
              }
              lVar23 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c42d70();
              func_0x000107c61180();
              if (lVar23 == 0) {
                *(undefined8 *)(unaff_x22 + 0x370) = 0;
                puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                uVar12 = *(undefined8 *)(unaff_x22 + 0x330);
                func_0x000107c61170();
                func_0x000107c42d70();
                func_0x000107c61180();
                uVar4 = uVar12;
                func_0x000107e6b314();
                func_0x000107c61180();
                func_0x000107c61170(uVar12);
                *(undefined8 *)(unaff_x22 + 0x370) = uVar4;
                puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
              if (lVar22 != 0) {
                *(undefined **)(unaff_x22 + 0x388) = puVar10;
                *(undefined **)(unaff_x22 + 0x380) = puVar10;
                *(undefined8 *)(unaff_x22 + 0x378) = 0;
                lVar22 = *(long *)(unaff_x22 + 0x360);
                uVar4 = *(undefined8 *)(lVar22 + 0x20);
                *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar22 + 0x28);
                *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
                uVar4 = *(undefined8 *)(lVar22 + 0x50);
                uVar14 = *(undefined8 *)(lVar22 + 0x68);
                uVar12 = *(undefined8 *)(lVar22 + 0x60);
                uVar19 = *(undefined8 *)(lVar22 + 0x38);
                uVar17 = *(undefined8 *)(lVar22 + 0x30);
                uVar16 = *(undefined8 *)(lVar22 + 0x48);
                uVar15 = *(undefined8 *)(lVar22 + 0x40);
                *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar22 + 0x58);
                *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
                *(undefined8 *)(unaff_x22 + 0x58) = uVar14;
                *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
                *(undefined8 *)(unaff_x22 + 0x28) = uVar19;
                *(undefined8 *)(unaff_x22 + 0x20) = uVar17;
                *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
                *(undefined8 *)(unaff_x22 + 0x30) = uVar15;
                plVar11 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
                func_0x0001000a8868(plVar11,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
                lVar23 = *plVar11;
                FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
                plVar11 = (long *)0x1d0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x390) = plVar11;
                *plVar11 = unaff_x22;
                plVar11[1] = (long)FUN_101b9695c;
                lVar22 = *(long *)(unaff_x22 + 0x340);
                plVar11[0x27] = *(long *)(unaff_x22 + 0x370);
                plVar11[0x28] = lVar23;
                plVar11[0x25] = lVar22;
                plVar11[0x26] = unaff_x22 + 0x10;
                UNRECOVERED_JUMPTABLE = FUN_101bad744;
                goto LAB_107c615e0;
              }
              *(undefined **)(unaff_x22 + 0x3a8) = puVar10;
              *(undefined **)(unaff_x22 + 0x3a0) = puVar10;
              lVar22 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
              *(undefined8 *)(unaff_x22 + 0x228) = 0;
              *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
              func_0x000107c602fc(0x13);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
              *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
              *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
              *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar10 + 0x10);
              puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar5);
              uVar4 = 0xeb00000000736e6f;
              func_0x000107c5fb78(0x6974617265706f20);
              uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
              uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
              lVar23 = *(long *)(puVar10 + 0x10);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar22 == 0) {
                lVar18 = 0;
                uVar4 = 0;
              }
              else {
                lVar18 = lVar22;
                func_0x000107c5faec();
                func_0x000107c61170(lVar22);
              }
              uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar16 = *(undefined8 *)(unaff_x22 + 800);
              uVar17 = *(undefined8 *)(unaff_x22 + 0x280);
              puVar10 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar10 + 0x10,uVar17);
              puVar5 = &UNK_1104502a8;
              func_0x000107c613fc(&UNK_1104502a8,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar10;
              *(undefined8 *)(puVar5 + 0x18) = uVar14;
              *(undefined8 *)(puVar5 + 0x20) = uVar12;
              puVar5[0x28] = lVar23 == 0;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar18;
              *(undefined8 *)(puVar5 + 0x48) = uVar4;
              *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
              *(undefined **)(unaff_x22 + 0x138) = puVar5;
              puVar10 = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
              lVar22 = unaff_x22 + 0x110;
              func_0x000107c60bc4(lVar22);
              uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar12);
              func_0x000107c61574(uVar14);
              func_0x000108ec0f10(uVar16,uVar15,lVar22);
              func_0x000107c60bd0(lVar22);
              func_0x000107c6142c(uVar4);
              func_0x000107c6142c(uVar12);
              lVar22 = *(long *)(unaff_x22 + 0x330);
              if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
                func_0x000107c61170();
                uVar12 = *(undefined8 *)(unaff_x22 + 0x3a8);
                uVar4 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x370);
                func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
                func_0x000107c6142c(uVar12);
                func_0x000107c6142c(uVar4);
                func_0x000107c61170(uVar14);
                goto LAB_101b94b6c;
              }
              bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
              uVar4 = 0xe900000000000065;
              if (bVar3) {
                uVar4 = 0xed00006574616964;
              }
              uVar12 = 0x74616964656d6d69;
              if (bVar3) {
                uVar12 = 0x656d6d69206e6f6e;
              }
              *(undefined8 *)(unaff_x22 + 0x248) = 0;
              *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
              func_0x000107c602fc(0x10);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
              *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
              *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
              func_0x000107c5fb78(uVar12,uVar4);
              func_0x000107c6142c(uVar4);
              uVar4 = 0xe400000000000000;
              func_0x000107c5fb78(0x626f6a20);
              uVar14 = *(undefined8 *)(unaff_x22 + 0x238);
              uVar12 = *(undefined8 *)(unaff_x22 + 0x240);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar22 == 0) {
                lVar23 = 0;
                uVar4 = 0;
              }
              else {
                lVar23 = lVar22;
                func_0x000107c5faec();
                func_0x000107c61170(lVar22);
              }
              uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar16 = *(undefined8 *)(unaff_x22 + 800);
              lVar18 = *(long *)(unaff_x22 + 0x280);
              cVar2 = *(char *)(unaff_x22 + 0x3d0);
              puVar10 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar10 + 0x10,lVar18);
              puVar5 = &UNK_1104502f8;
              func_0x000107c613fc(&UNK_1104502f8,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar10;
              *(undefined8 *)(puVar5 + 0x18) = uVar14;
              *(undefined8 *)(puVar5 + 0x20) = uVar12;
              puVar5[0x28] = 0;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar23;
              *(undefined8 *)(puVar5 + 0x48) = uVar4;
              *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
              *(undefined **)(unaff_x22 + 0x168) = puVar5;
              *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
              lVar22 = unaff_x22 + 0x140;
              func_0x000107c60bc4(lVar22);
              uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
              func_0x000107c61434(uVar4);
              func_0x000107c61434(uVar12);
              func_0x000107c61574(uVar14);
              func_0x000108ec0f10(uVar16,uVar15,lVar22);
              func_0x000107c60bd0(lVar22);
              func_0x000107c6142c(uVar4);
              func_0x000107c6142c(uVar12);
              plVar11 = (long *)(lVar18 + 0x48);
              func_0x0001000a8868(plVar11,*(undefined8 *)(lVar18 + 0x60));
              lVar22 = *plVar11;
              if (cVar2 == '\x01') {
                plVar11 = (long *)0xe0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x3b0) = plVar11;
                *plVar11 = unaff_x22;
                plVar11[1] = (long)FUN_101b9800c;
                plVar11[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
                plVar11[0x16] = lVar22;
                UNRECOVERED_JUMPTABLE = FUN_101bae06c;
                goto LAB_107c615e0;
              }
              plVar11 = (long *)0xd0;
              UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x3c0) = plVar11;
              *plVar11 = unaff_x22;
              plVar11[1] = (long)FUN_101b99514;
              goto LAB_101b95094;
            }
            func_0x000107c6142c(uVar13);
            uVar13 = *(ulong *)(unaff_x22 + 0x308);
          }
          lVar22 = *(long *)(unaff_x22 + 0x280);
          func_0x000107c6142c(uVar13);
          plVar11 = (long *)(lVar22 + 0x20);
          func_0x0001000a8868(plVar11,*(undefined8 *)(lVar22 + 0x38));
          lVar22 = *plVar11;
          plVar11 = (long *)0x550;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x348) = plVar11;
          *plVar11 = unaff_x22;
          plVar11[1] = (long)FUN_101b954b4;
LAB_101b95108:
          plVar11[99] = lVar22;
          *(undefined1 *)((long)plVar11 + 0x542) = 0;
          plVar11[0x62] = lVar23;
          plVar11[0x61] = uVar9;
          UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
          return;
        }
        uVar4 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x000107c6142c(uVar13);
        func_0x000107c61170(uVar9);
        func_0x000107c61574(uVar4);
      }
LAB_101b94b6c:
      uVar20 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar20 != *(ulong *)(unaff_x22 + 0x318));
  }
  lVar22 = *(long *)(unaff_x22 + 0x310);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar14);
  func_0x000107c61574(uVar12);
  if (lVar22 != 0) {
    uVar4 = uVar14;
  }
  func_0x000107c6142c(uVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101b95094:
                    /* WARNING: Could not recover jumptable at 0x000101b950b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b954b4; end: 101b9551f;  */

void FUN_101b954b4(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x350) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x348));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x358) = param_1;
    pcVar1 = FUN_101b95520;
  }
  else {
    pcVar1 = FUN_101b95e7c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b95520; end: 101b95e7b;  */

void FUN_101b95520(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar13 = *(long *)(unaff_x22 + 0x358);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
LAB_101b95580:
  *(long *)(unaff_x22 + 0x360) = lVar13;
  lVar13 = *(long *)(lVar13 + 0x10);
  *(long *)(unaff_x22 + 0x368) = lVar13;
  if (lVar13 == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x330);
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar19 = 0;
      param_2 = 0;
    }
    else {
      lVar19 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar17 = *(undefined8 *)(unaff_x22 + 800);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
    puVar5 = &UNK_110450168;
    func_0x000107c613fc(&UNK_110450168,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,uVar20);
    puVar6 = &UNK_110450348;
    func_0x000107c613fc(&UNK_110450348,0x50,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = 0xd000000000000014;
    *(undefined8 *)(puVar6 + 0x20) = 0x800000010f001c90;
    puVar6[0x28] = 1;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x38) = 0;
    *(long *)(puVar6 + 0x40) = lVar19;
    *(ulong *)(puVar6 + 0x48) = param_2;
    *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
    *(undefined **)(unaff_x22 + 0x198) = puVar6;
    *(undefined **)(unaff_x22 + 0x170) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
    lVar4 = unaff_x22 + 0x170;
    func_0x000107c60bc4(lVar4);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x198);
    func_0x000107c61434(param_2);
    func_0x000107c61574(uVar20);
    func_0x000108ec0f10(uVar17,uVar15,lVar4);
    func_0x000107c60bd0(lVar4);
    func_0x000107c6142c(param_2);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  lVar4 = *(long *)(unaff_x22 + 0x330);
  func_0x000107c42d70();
  func_0x000107c61180();
  if (lVar4 == 0) {
    *(undefined8 *)(unaff_x22 + 0x370) = 0;
  }
  else {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x330);
    func_0x000107c61170();
    func_0x000107c42d70();
    func_0x000107c61180();
    uVar15 = uVar17;
    func_0x000107e6b314();
    func_0x000107c61180();
    func_0x000107c61170(uVar17);
    *(undefined8 *)(unaff_x22 + 0x370) = uVar15;
  }
  if (lVar13 != 0) {
    *(undefined **)(unaff_x22 + 0x388) = puVar5;
    *(undefined **)(unaff_x22 + 0x380) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x378) = 0;
    lVar13 = *(long *)(unaff_x22 + 0x360);
    uVar15 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x10) = uVar15;
    uVar15 = *(undefined8 *)(lVar13 + 0x50);
    uVar20 = *(undefined8 *)(lVar13 + 0x68);
    uVar17 = *(undefined8 *)(lVar13 + 0x60);
    uVar22 = *(undefined8 *)(lVar13 + 0x38);
    uVar21 = *(undefined8 *)(lVar13 + 0x30);
    uVar18 = *(undefined8 *)(lVar13 + 0x48);
    uVar16 = *(undefined8 *)(lVar13 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar13 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar16;
    plVar10 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
    func_0x0001000a8868(plVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
    lVar4 = *plVar10;
    FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
    plVar10 = (long *)0x1d0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x390) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101b9695c;
    lVar13 = *(long *)(unaff_x22 + 0x340);
    plVar10[0x27] = *(long *)(unaff_x22 + 0x370);
    plVar10[0x28] = lVar4;
    plVar10[0x25] = lVar13;
    plVar10[0x26] = unaff_x22 + 0x10;
    UNRECOVERED_JUMPTABLE = FUN_101bad744;
    goto LAB_107c615e0;
  }
  *(undefined **)(unaff_x22 + 0x3a8) = puVar5;
  *(undefined **)(unaff_x22 + 0x3a0) = puVar5;
  lVar13 = *(long *)(unaff_x22 + 0x330);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
  *(undefined8 *)(unaff_x22 + 0x228) = 0;
  *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
  *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
  *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar5 + 0x10);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  uVar15 = 0xeb00000000736e6f;
  func_0x000107c5fb78(0x6974617265706f20);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar4 = *(long *)(puVar5 + 0x10);
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar13 == 0) {
    lVar19 = 0;
    uVar15 = 0;
  }
  else {
    lVar19 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar18 = *(undefined8 *)(unaff_x22 + 800);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x280);
  puVar7 = &UNK_110450168;
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar7 + 0x10,uVar21);
  puVar5 = &UNK_1104502a8;
  func_0x000107c613fc(&UNK_1104502a8,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar7;
  *(undefined8 *)(puVar5 + 0x18) = uVar20;
  *(undefined8 *)(puVar5 + 0x20) = uVar17;
  puVar5[0x28] = lVar4 == 0;
  *(undefined8 *)(puVar5 + 0x30) = 0;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  *(long *)(puVar5 + 0x40) = lVar19;
  *(undefined8 *)(puVar5 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
  *(undefined **)(unaff_x22 + 0x138) = puVar5;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
  lVar13 = unaff_x22 + 0x110;
  func_0x000107c60bc4(lVar13);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61434(uVar15);
  func_0x000107c61434(uVar17);
  func_0x000107c61574(uVar20);
  func_0x000108ec0f10(uVar18,uVar16,lVar13);
  func_0x000107c60bd0(lVar13);
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar17);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar13 = *(long *)(unaff_x22 + 0x330);
  if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
    func_0x000107c61170();
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x370);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(uVar15);
    func_0x000107c61170(uVar20);
    uVar14 = *(ulong *)(unaff_x22 + 0x338);
    if (uVar14 != *(ulong *)(unaff_x22 + 0x318)) {
      do {
        puVar1 = (ulong *)(unaff_x22 + 0x278);
        if (*(long *)(unaff_x22 + 0x310) != 0) {
          puVar1 = (ulong *)(unaff_x22 + 0x300);
        }
        uVar11 = *puVar1;
        if ((uVar11 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b95e7c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar8 = *(ulong *)(uVar11 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar14;
          FUN_101b9bcc0(uVar14,uVar11,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        *(ulong *)(unaff_x22 + 0x330) = uVar8;
        *(ulong *)(unaff_x22 + 0x338) = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b95e00);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar14 = uVar8;
        func_0x000107c3fd78();
        func_0x000107c61180();
        if (uVar14 == 0) {
LAB_101b95928:
          func_0x000107c61170(uVar8);
        }
        else {
          lVar13 = *(long *)(unaff_x22 + 0x290);
          uVar9 = uVar14;
          func_0x000107c5faec();
          func_0x000107c61170(uVar14);
          if (*(long *)(lVar13 + 0x10) == 0) {
            func_0x000107c6142c(uVar11);
            goto LAB_101b95928;
          }
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
          uVar14 = uVar9;
          uVar12 = uVar11;
          func_0x000100029284();
          if ((uVar12 & 1) != 0) goto LAB_101b95a1c;
          uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
          func_0x000107c6142c(uVar11);
          func_0x000107c61170(uVar8);
          func_0x000107c61574(uVar15);
        }
        uVar14 = *(ulong *)(unaff_x22 + 0x338);
        if (uVar14 == *(ulong *)(unaff_x22 + 0x318)) break;
      } while( true );
    }
    lVar13 = *(long *)(unaff_x22 + 0x310);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x278);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
    func_0x000107c6142c(uVar20);
    func_0x000107c61574(uVar17);
    if (lVar13 != 0) {
      uVar15 = uVar20;
    }
    func_0x000107c6142c(uVar15);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
    uVar15 = 0xe900000000000065;
    if (bVar3) {
      uVar15 = 0xed00006574616964;
    }
    uVar17 = 0x74616964656d6d69;
    if (bVar3) {
      uVar17 = 0x656d6d69206e6f6e;
    }
    *(undefined8 *)(unaff_x22 + 0x248) = 0;
    *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
    func_0x000107c602fc(0x10);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
    *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
    *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
    func_0x000107c5fb78(uVar17,uVar15);
    func_0x000107c6142c(uVar15);
    uVar15 = 0xe400000000000000;
    func_0x000107c5fb78(0x626f6a20);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x240);
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (lVar13 == 0) {
      lVar4 = 0;
      uVar15 = 0;
    }
    else {
      lVar4 = lVar13;
      func_0x000107c5faec();
      func_0x000107c61170(lVar13);
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar18 = *(undefined8 *)(unaff_x22 + 800);
    lVar19 = *(long *)(unaff_x22 + 0x280);
    cVar2 = *(char *)(unaff_x22 + 0x3d0);
    puVar7 = &UNK_110450168;
    func_0x000107c613fc(&UNK_110450168,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,lVar19);
    puVar5 = &UNK_1104502f8;
    func_0x000107c613fc(&UNK_1104502f8,0x50,7);
    *(undefined **)(puVar5 + 0x10) = puVar7;
    *(undefined8 *)(puVar5 + 0x18) = uVar20;
    *(undefined8 *)(puVar5 + 0x20) = uVar17;
    puVar5[0x28] = 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(long *)(puVar5 + 0x40) = lVar4;
    *(undefined8 *)(puVar5 + 0x48) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
    *(undefined **)(unaff_x22 + 0x168) = puVar5;
    *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
    lVar13 = unaff_x22 + 0x140;
    func_0x000107c60bc4(lVar13);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x168);
    func_0x000107c61434(uVar15);
    func_0x000107c61434(uVar17);
    func_0x000107c61574(uVar20);
    func_0x000108ec0f10(uVar18,uVar16,lVar13);
    func_0x000107c60bd0(lVar13);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(uVar17);
    plVar10 = (long *)(lVar19 + 0x48);
    func_0x0001000a8868(plVar10,*(undefined8 *)(lVar19 + 0x60));
    lVar13 = *plVar10;
    if (cVar2 == '\x01') {
      plVar10 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x3b0) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_101b9800c;
      plVar10[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
      plVar10[0x16] = lVar13;
      UNRECOVERED_JUMPTABLE = FUN_101bae06c;
      goto LAB_107c615e0;
    }
    plVar10 = (long *)0xd0;
    UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x3c0) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101b99514;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b95ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
LAB_101b95a1c:
  lVar13 = *(long *)(unaff_x22 + 0x308);
  lVar4 = *(long *)(unaff_x22 + 0x290);
  lVar19 = *(long *)(*(long *)(lVar4 + 0x38) + uVar14 * 8);
  *(long *)(unaff_x22 + 0x340) = lVar19;
  func_0x000107c615f0(lVar19);
  func_0x000107c61574(lVar4);
  if (*(long *)(lVar13 + 0x10) == 0) goto LAB_101b95e0c;
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
  param_2 = uVar11;
  func_0x000100029284();
  if ((param_2 & 1) == 0) {
    func_0x000107c6142c(uVar11);
    uVar11 = *(ulong *)(unaff_x22 + 0x308);
LAB_101b95e0c:
    lVar13 = *(long *)(unaff_x22 + 0x280);
    func_0x000107c6142c(uVar11);
    plVar10 = (long *)(lVar13 + 0x20);
    func_0x0001000a8868(plVar10,*(undefined8 *)(lVar13 + 0x38));
    lVar13 = *plVar10;
    plVar10 = (long *)0x550;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x348) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101b954b4;
    plVar10[99] = lVar13;
    *(undefined1 *)((long)plVar10 + 0x542) = 0;
    plVar10[0x62] = lVar19;
    plVar10[0x61] = uVar8;
    UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
    return;
  }
  lVar4 = *(long *)(unaff_x22 + 0x308);
  lVar13 = *(long *)(*(long *)(lVar4 + 0x38) + uVar9 * 8);
  func_0x000107c61434(lVar13);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(lVar4);
  goto LAB_101b95580;
}



/* Entry: 101b95e7c; end: 101b9695b;  */

void FUN_101b95e7c(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
  uVar4 = *(undefined8 *)(unaff_x22 + 0x350);
  lVar18 = *(long *)(unaff_x22 + 0x330);
  func_0x000107c614cc(uVar4,unaff_x22 + 600,unaff_x22 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c60640();
  uVar15 = uVar11;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar18 == 0) {
    lVar17 = 0;
    uVar15 = 0;
  }
  else {
    lVar17 = lVar18;
    func_0x000107c5faec();
    func_0x000107c61170(lVar18);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar22 = *(undefined8 *)(unaff_x22 + 800);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x280);
  puVar5 = &UNK_110450168;
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,uVar23);
  puVar6 = &UNK_110450208;
  func_0x000107c613fc(&UNK_110450208,0x50,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = 0xd000000000000029;
  *(undefined8 *)(puVar6 + 0x20) = 0x800000010f001c40;
  puVar6[0x28] = 1;
  *(undefined8 *)(puVar6 + 0x30) = uVar19;
  *(undefined8 *)(puVar6 + 0x38) = uVar11;
  *(long *)(puVar6 + 0x40) = lVar17;
  *(undefined8 *)(puVar6 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0x101b9d918;
  *(undefined **)(unaff_x22 + 0xd8) = puVar6;
  *(undefined **)(unaff_x22 + 0xb0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xc0) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 200) = &UNK_110450220;
  lVar18 = unaff_x22 + 0xb0;
  func_0x000107c60bc4(lVar18);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61434(uVar15);
  func_0x000107c61434(uVar11);
  func_0x000107c61574(uVar19);
  func_0x000108ec0f10(uVar22,uVar20,lVar18);
  func_0x000107c60bd0(lVar18);
  func_0x000107c61170(uVar14);
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar11);
  func_0x000107c614ac(uVar4);
  uVar16 = *(ulong *)(unaff_x22 + 0x338);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != *(ulong *)(unaff_x22 + 0x318)) {
    do {
      puVar1 = (ulong *)(unaff_x22 + 0x278);
      if (*(long *)(unaff_x22 + 0x310) != 0) {
        puVar1 = (ulong *)(unaff_x22 + 0x300);
      }
      uVar12 = *puVar1;
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b9695c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar7 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar16;
        FUN_101b9bcc0(uVar16,uVar12,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x330) = uVar7;
      *(ulong *)(unaff_x22 + 0x338) = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b96958);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar16 = uVar7;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar16 == 0) {
LAB_101b960d0:
        func_0x000107c61170(uVar7);
      }
      else {
        lVar18 = *(long *)(unaff_x22 + 0x290);
        uVar8 = uVar16;
        func_0x000107c5faec();
        func_0x000107c61170(uVar16);
        if (*(long *)(lVar18 + 0x10) == 0) {
          func_0x000107c6142c(uVar12);
          goto LAB_101b960d0;
        }
        func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
        uVar16 = uVar8;
        uVar13 = uVar12;
        func_0x000100029284();
        if ((uVar13 & 1) != 0) {
          lVar18 = *(long *)(unaff_x22 + 0x308);
          lVar17 = *(long *)(unaff_x22 + 0x290);
          lVar21 = *(long *)(*(long *)(lVar17 + 0x38) + uVar16 * 8);
          *(long *)(unaff_x22 + 0x340) = lVar21;
          func_0x000107c615f0(lVar21);
          func_0x000107c61574(lVar17);
          if (*(long *)(lVar18 + 0x10) != 0) {
            func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
            uVar16 = uVar12;
            func_0x000100029284();
            if ((uVar16 & 1) != 0) {
              lVar18 = *(long *)(unaff_x22 + 0x308);
              lVar17 = *(long *)(*(long *)(lVar18 + 0x38) + uVar8 * 8);
              func_0x000107c61434(lVar17);
              func_0x000107c6142c(uVar12);
              func_0x000107c6142c(lVar18);
              *(long *)(unaff_x22 + 0x360) = lVar17;
              lVar18 = *(long *)(lVar17 + 0x10);
              *(long *)(unaff_x22 + 0x368) = lVar18;
              if (lVar18 == 0) {
                lVar17 = *(long *)(unaff_x22 + 0x330);
                func_0x000107c5cab0();
                func_0x000107c61180();
                if (lVar17 == 0) {
                  lVar21 = 0;
                  uVar16 = 0;
                }
                else {
                  lVar21 = lVar17;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar17);
                }
                uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
                uVar15 = *(undefined8 *)(unaff_x22 + 800);
                uVar4 = *(undefined8 *)(unaff_x22 + 0x280);
                puVar6 = &UNK_110450168;
                func_0x000107c613fc(&UNK_110450168,0x18,7);
                func_0x000107c61644(puVar6 + 0x10,uVar4);
                puVar9 = &UNK_110450348;
                func_0x000107c613fc(&UNK_110450348,0x50,7);
                *(undefined **)(puVar9 + 0x10) = puVar6;
                *(undefined8 *)(puVar9 + 0x18) = 0xd000000000000014;
                *(undefined8 *)(puVar9 + 0x20) = 0x800000010f001c90;
                puVar9[0x28] = 1;
                *(undefined8 *)(puVar9 + 0x30) = 0;
                *(undefined8 *)(puVar9 + 0x38) = 0;
                *(long *)(puVar9 + 0x40) = lVar21;
                *(ulong *)(puVar9 + 0x48) = uVar16;
                *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
                *(undefined **)(unaff_x22 + 0x198) = puVar9;
                *(undefined **)(unaff_x22 + 0x170) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
                *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
                lVar17 = unaff_x22 + 0x170;
                func_0x000107c60bc4(lVar17);
                uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
                func_0x000107c61434(uVar16);
                func_0x000107c61574(uVar4);
                func_0x000108ec0f10(uVar15,uVar19,lVar17);
                func_0x000107c60bd0(lVar17);
                func_0x000107c6142c(uVar16);
              }
              lVar17 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c42d70();
              func_0x000107c61180();
              if (lVar17 == 0) {
                *(undefined8 *)(unaff_x22 + 0x370) = 0;
              }
              else {
                uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
                func_0x000107c61170();
                func_0x000107c42d70();
                func_0x000107c61180();
                uVar19 = uVar15;
                func_0x000107e6b314();
                func_0x000107c61180();
                func_0x000107c61170(uVar15);
                *(undefined8 *)(unaff_x22 + 0x370) = uVar19;
              }
              if (lVar18 != 0) {
                *(undefined **)(unaff_x22 + 0x388) = puVar5;
                *(undefined **)(unaff_x22 + 0x380) = puVar5;
                *(undefined8 *)(unaff_x22 + 0x378) = 0;
                lVar18 = *(long *)(unaff_x22 + 0x360);
                uVar19 = *(undefined8 *)(lVar18 + 0x20);
                *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar18 + 0x28);
                *(undefined8 *)(unaff_x22 + 0x10) = uVar19;
                uVar19 = *(undefined8 *)(lVar18 + 0x50);
                uVar4 = *(undefined8 *)(lVar18 + 0x68);
                uVar15 = *(undefined8 *)(lVar18 + 0x60);
                uVar22 = *(undefined8 *)(lVar18 + 0x38);
                uVar20 = *(undefined8 *)(lVar18 + 0x30);
                uVar14 = *(undefined8 *)(lVar18 + 0x48);
                uVar11 = *(undefined8 *)(lVar18 + 0x40);
                *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar18 + 0x58);
                *(undefined8 *)(unaff_x22 + 0x40) = uVar19;
                *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
                *(undefined8 *)(unaff_x22 + 0x50) = uVar15;
                *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
                *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
                *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
                *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
                plVar10 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
                func_0x0001000a8868(plVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
                lVar17 = *plVar10;
                FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
                plVar10 = (long *)0x1d0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x390) = plVar10;
                *plVar10 = unaff_x22;
                plVar10[1] = (long)FUN_101b9695c;
                lVar18 = *(long *)(unaff_x22 + 0x340);
                plVar10[0x27] = *(long *)(unaff_x22 + 0x370);
                plVar10[0x28] = lVar17;
                plVar10[0x25] = lVar18;
                plVar10[0x26] = unaff_x22 + 0x10;
                UNRECOVERED_JUMPTABLE = FUN_101bad744;
                goto LAB_107c615e0;
              }
              *(undefined **)(unaff_x22 + 0x3a8) = puVar5;
              *(undefined **)(unaff_x22 + 0x3a0) = puVar5;
              lVar18 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
              *(undefined8 *)(unaff_x22 + 0x228) = 0;
              *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
              func_0x000107c602fc(0x13);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
              *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
              *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
              *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar5 + 0x10);
              puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar6);
              uVar19 = 0xeb00000000736e6f;
              func_0x000107c5fb78(0x6974617265706f20);
              uVar4 = *(undefined8 *)(unaff_x22 + 0x218);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
              lVar17 = *(long *)(puVar5 + 0x10);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar18 == 0) {
                lVar21 = 0;
                uVar19 = 0;
              }
              else {
                lVar21 = lVar18;
                func_0x000107c5faec();
                func_0x000107c61170(lVar18);
              }
              uVar11 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar14 = *(undefined8 *)(unaff_x22 + 800);
              uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
              puVar5 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar5 + 0x10,uVar20);
              puVar6 = &UNK_1104502a8;
              func_0x000107c613fc(&UNK_1104502a8,0x50,7);
              *(undefined **)(puVar6 + 0x10) = puVar5;
              *(undefined8 *)(puVar6 + 0x18) = uVar4;
              *(undefined8 *)(puVar6 + 0x20) = uVar15;
              puVar6[0x28] = lVar17 == 0;
              *(undefined8 *)(puVar6 + 0x30) = 0;
              *(undefined8 *)(puVar6 + 0x38) = 0;
              *(long *)(puVar6 + 0x40) = lVar21;
              *(undefined8 *)(puVar6 + 0x48) = uVar19;
              *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
              *(undefined **)(unaff_x22 + 0x138) = puVar6;
              *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
              lVar18 = unaff_x22 + 0x110;
              func_0x000107c60bc4(lVar18);
              uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
              func_0x000107c61434(uVar19);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar4);
              func_0x000108ec0f10(uVar14,uVar11,lVar18);
              func_0x000107c60bd0(lVar18);
              func_0x000107c6142c(uVar19);
              func_0x000107c6142c(uVar15);
              puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
              lVar18 = *(long *)(unaff_x22 + 0x330);
              if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
                func_0x000107c61170();
                uVar15 = *(undefined8 *)(unaff_x22 + 0x3a8);
                uVar19 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
                func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
                func_0x000107c6142c(uVar15);
                func_0x000107c6142c(uVar19);
                func_0x000107c61170(uVar4);
                goto LAB_101b960d8;
              }
              bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
              uVar19 = 0xe900000000000065;
              if (bVar3) {
                uVar19 = 0xed00006574616964;
              }
              uVar15 = 0x74616964656d6d69;
              if (bVar3) {
                uVar15 = 0x656d6d69206e6f6e;
              }
              *(undefined8 *)(unaff_x22 + 0x248) = 0;
              *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
              func_0x000107c602fc(0x10);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
              *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
              *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
              func_0x000107c5fb78(uVar15,uVar19);
              func_0x000107c6142c(uVar19);
              uVar19 = 0xe400000000000000;
              func_0x000107c5fb78(0x626f6a20);
              uVar4 = *(undefined8 *)(unaff_x22 + 0x238);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x240);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar18 == 0) {
                lVar17 = 0;
                uVar19 = 0;
              }
              else {
                lVar17 = lVar18;
                func_0x000107c5faec();
                func_0x000107c61170(lVar18);
              }
              uVar11 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar14 = *(undefined8 *)(unaff_x22 + 800);
              lVar21 = *(long *)(unaff_x22 + 0x280);
              cVar2 = *(char *)(unaff_x22 + 0x3d0);
              puVar5 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar5 + 0x10,lVar21);
              puVar6 = &UNK_1104502f8;
              func_0x000107c613fc(&UNK_1104502f8,0x50,7);
              *(undefined **)(puVar6 + 0x10) = puVar5;
              *(undefined8 *)(puVar6 + 0x18) = uVar4;
              *(undefined8 *)(puVar6 + 0x20) = uVar15;
              puVar6[0x28] = 0;
              *(undefined8 *)(puVar6 + 0x30) = 0;
              *(undefined8 *)(puVar6 + 0x38) = 0;
              *(long *)(puVar6 + 0x40) = lVar17;
              *(undefined8 *)(puVar6 + 0x48) = uVar19;
              *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
              *(undefined **)(unaff_x22 + 0x168) = puVar6;
              *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
              lVar18 = unaff_x22 + 0x140;
              func_0x000107c60bc4(lVar18);
              uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
              func_0x000107c61434(uVar19);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar4);
              func_0x000108ec0f10(uVar14,uVar11,lVar18);
              func_0x000107c60bd0(lVar18);
              func_0x000107c6142c(uVar19);
              func_0x000107c6142c(uVar15);
              plVar10 = (long *)(lVar21 + 0x48);
              func_0x0001000a8868(plVar10,*(undefined8 *)(lVar21 + 0x60));
              lVar18 = *plVar10;
              if (cVar2 == '\x01') {
                plVar10 = (long *)0xe0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x3b0) = plVar10;
                *plVar10 = unaff_x22;
                plVar10[1] = (long)FUN_101b9800c;
                plVar10[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
                plVar10[0x16] = lVar18;
                UNRECOVERED_JUMPTABLE = FUN_101bae06c;
                goto LAB_107c615e0;
              }
              plVar10 = (long *)0xd0;
              UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x3c0) = plVar10;
              *plVar10 = unaff_x22;
              plVar10[1] = (long)FUN_101b99514;
              goto LAB_101b96074;
            }
            func_0x000107c6142c(uVar12);
            uVar12 = *(ulong *)(unaff_x22 + 0x308);
          }
          lVar18 = *(long *)(unaff_x22 + 0x280);
          func_0x000107c6142c(uVar12);
          plVar10 = (long *)(lVar18 + 0x20);
          func_0x0001000a8868(plVar10,*(undefined8 *)(lVar18 + 0x38));
          lVar18 = *plVar10;
          plVar10 = (long *)0x550;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x348) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_101b954b4;
          plVar10[99] = lVar18;
          *(undefined1 *)((long)plVar10 + 0x542) = 0;
          plVar10[0x62] = lVar21;
          plVar10[0x61] = uVar7;
          UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
          return;
        }
        uVar19 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x000107c6142c(uVar12);
        func_0x000107c61170(uVar7);
        func_0x000107c61574(uVar19);
      }
LAB_101b960d8:
      uVar16 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar16 != *(ulong *)(unaff_x22 + 0x318));
  }
  lVar18 = *(long *)(unaff_x22 + 0x310);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar4);
  func_0x000107c61574(uVar15);
  if (lVar18 != 0) {
    uVar19 = uVar4;
  }
  func_0x000107c6142c(uVar19);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101b96074:
                    /* WARNING: Could not recover jumptable at 0x000101b96094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b9695c; end: 101b969cb;  */

void FUN_101b9695c(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x398) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x390));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x3d1) = param_1 & 1;
    pcVar1 = FUN_101b969cc;
  }
  else {
    pcVar1 = FUN_101b974d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b969cc; end: 101b974d7;  */

void FUN_101b969cc(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x22;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  
  if ((*(byte *)(unaff_x22 + 0x3d1) & 1) == 0) {
    func_0x000101b9d508(unaff_x22 + 0x10);
    puVar10 = *(undefined **)(unaff_x22 + 0x388);
    puVar13 = *(undefined **)(unaff_x22 + 0x380);
  }
  else {
    uVar11 = *(ulong *)(unaff_x22 + 0x380);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000107c61434(uVar12);
    func_0x000107c61558();
    puVar13 = *(undefined **)(unaff_x22 + 0x380);
    puVar10 = puVar13;
    if ((uVar11 & 1) == 0) {
      puVar10 = (undefined *)0x0;
      FUN_101b9beb8(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13,
                    PTR__swift_bridgeObjectRelease_11034f258);
    }
    uVar11 = *(ulong *)(puVar10 + 0x10);
    puVar13 = puVar10;
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_101b9beb8(puVar13,uVar11 + 1,1,puVar10,PTR__swift_bridgeObjectRelease_11034f258);
    }
    uVar14 = *(ulong *)(unaff_x22 + 0x388);
    *(ulong *)(puVar13 + 0x10) = uVar11 + 1;
    *(undefined8 *)(puVar13 + uVar11 * 0x10 + 0x20) = uVar19;
    *(undefined8 *)(puVar13 + uVar11 * 0x10 + 0x28) = uVar12;
    func_0x000107c61434(uVar12);
    func_0x000107c61558();
    puVar10 = *(undefined **)(unaff_x22 + 0x388);
    puVar7 = puVar10;
    if ((uVar14 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_101b9beb8(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,
                    PTR__swift_bridgeObjectRelease_11034f258);
    }
    uVar11 = *(ulong *)(puVar7 + 0x10);
    puVar10 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar11) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_101b9beb8(puVar10,uVar11 + 1,1,puVar7,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
    *(undefined8 *)(puVar10 + uVar11 * 0x10 + 0x20) = uVar19;
    *(undefined8 *)(puVar10 + uVar11 * 0x10 + 0x28) = uVar12;
    func_0x000101b9d508(unaff_x22 + 0x10);
  }
  lVar15 = *(long *)(unaff_x22 + 0x378) + 1;
  puVar7 = PTR___sSiN_11034deb0;
  if (lVar15 == *(long *)(unaff_x22 + 0x368)) {
LAB_101b96b04:
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    uVar19 = 0xeb00000000736e6f;
    *(undefined **)(unaff_x22 + 0x3a8) = puVar10;
    *(undefined **)(unaff_x22 + 0x3a0) = puVar13;
    lVar15 = *(long *)(unaff_x22 + 0x330);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
    *(undefined8 *)(unaff_x22 + 0x228) = 0;
    *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
    *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
    *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
    *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar13 + 0x10);
    func_0x000107c6057c(puVar7,puVar8);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    func_0x000107c5fb78(0x6974617265706f20);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar22 = *(long *)(puVar13 + 0x10);
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (lVar15 == 0) {
      lVar18 = 0;
      uVar19 = 0;
    }
    else {
      lVar18 = lVar15;
      func_0x000107c5faec();
      func_0x000107c61170(lVar15);
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar20 = *(undefined8 *)(unaff_x22 + 800);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x280);
    puVar13 = &UNK_110450168;
    func_0x000107c613fc(&UNK_110450168,0x18,7);
    func_0x000107c61644(puVar13 + 0x10,uVar17);
    puVar7 = &UNK_1104502a8;
    func_0x000107c613fc(&UNK_1104502a8,0x50,7);
    *(undefined **)(puVar7 + 0x10) = puVar13;
    *(undefined8 *)(puVar7 + 0x18) = uVar21;
    *(undefined8 *)(puVar7 + 0x20) = uVar12;
    puVar7[0x28] = lVar22 == 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(long *)(puVar7 + 0x40) = lVar18;
    *(undefined8 *)(puVar7 + 0x48) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
    *(undefined **)(unaff_x22 + 0x138) = puVar7;
    *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
    lVar15 = unaff_x22 + 0x110;
    func_0x000107c60bc4(lVar15);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c61434(uVar19);
    func_0x000107c61434(uVar12);
    func_0x000107c61574(uVar21);
    func_0x000108ec0f10(uVar20,uVar16,lVar15);
    func_0x000107c60bd0(lVar15);
    func_0x000107c6142c(uVar19);
    func_0x000107c6142c(uVar12);
    lVar15 = *(long *)(unaff_x22 + 0x330);
    if (*(long *)(puVar10 + 0x10) == 0) {
      func_0x000107c61170();
      uVar12 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x370);
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uVar19);
      func_0x000107c61170(uVar21);
      puVar7 = PTR___sSiN_11034deb0;
      uVar11 = *(ulong *)(unaff_x22 + 0x338);
      if (uVar11 != *(ulong *)(unaff_x22 + 0x318)) {
        do {
          puVar1 = (ulong *)(unaff_x22 + 0x278);
          if (*(long *)(unaff_x22 + 0x310) != 0) {
            puVar1 = (ulong *)(unaff_x22 + 0x300);
          }
          uVar14 = *puVar1;
          if ((uVar14 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b97440);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar4 = *(ulong *)(uVar14 + uVar11 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar4 = uVar11;
            FUN_101b9bcc0(uVar11,uVar14,&PTR_PTR_1126bf9a8,0x112d61d40);
          }
          *(ulong *)(unaff_x22 + 0x330) = uVar4;
          *(ulong *)(unaff_x22 + 0x338) = uVar11 + 1;
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b973c4);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar11 = uVar4;
          func_0x000107c3fd78();
          func_0x000107c61180();
          if (uVar11 == 0) {
LAB_101b96d14:
            func_0x000107c61170(uVar4);
          }
          else {
            lVar15 = *(long *)(unaff_x22 + 0x290);
            uVar5 = uVar11;
            func_0x000107c5faec();
            func_0x000107c61170(uVar11);
            if (*(long *)(lVar15 + 0x10) == 0) {
              func_0x000107c6142c(uVar14);
              goto LAB_101b96d14;
            }
            func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
            uVar11 = uVar5;
            uVar9 = uVar14;
            func_0x000100029284();
            if ((uVar9 & 1) != 0) goto LAB_101b96e04;
            uVar19 = *(undefined8 *)(unaff_x22 + 0x290);
            func_0x000107c6142c(uVar14);
            func_0x000107c61170(uVar4);
            func_0x000107c61574(uVar19);
          }
          uVar11 = *(ulong *)(unaff_x22 + 0x338);
          if (uVar11 == *(ulong *)(unaff_x22 + 0x318)) break;
        } while( true );
      }
      lVar15 = *(long *)(unaff_x22 + 0x310);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x300);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x290);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x278);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
      func_0x000107c6142c(uVar21);
      func_0x000107c61574(uVar12);
      if (lVar15 != 0) {
        uVar19 = uVar21;
      }
      func_0x000107c6142c(uVar19);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
    else {
      bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
      uVar19 = 0xe900000000000065;
      if (bVar3) {
        uVar19 = 0xed00006574616964;
      }
      uVar12 = 0x74616964656d6d69;
      if (bVar3) {
        uVar12 = 0x656d6d69206e6f6e;
      }
      *(undefined8 *)(unaff_x22 + 0x248) = 0;
      *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
      func_0x000107c602fc(0x10);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
      *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
      *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
      func_0x000107c5fb78(uVar12,uVar19);
      func_0x000107c6142c(uVar19);
      uVar19 = 0xe400000000000000;
      func_0x000107c5fb78(0x626f6a20);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x240);
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar15 == 0) {
        lVar22 = 0;
        uVar19 = 0;
      }
      else {
        lVar22 = lVar15;
        func_0x000107c5faec();
        func_0x000107c61170(lVar15);
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
      uVar17 = *(undefined8 *)(unaff_x22 + 800);
      lVar18 = *(long *)(unaff_x22 + 0x280);
      cVar2 = *(char *)(unaff_x22 + 0x3d0);
      puVar13 = &UNK_110450168;
      func_0x000107c613fc(&UNK_110450168,0x18,7);
      func_0x000107c61644(puVar13 + 0x10,lVar18);
      puVar7 = &UNK_1104502f8;
      func_0x000107c613fc(&UNK_1104502f8,0x50,7);
      *(undefined **)(puVar7 + 0x10) = puVar13;
      *(undefined8 *)(puVar7 + 0x18) = uVar21;
      *(undefined8 *)(puVar7 + 0x20) = uVar12;
      puVar7[0x28] = 0;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      *(undefined8 *)(puVar7 + 0x38) = 0;
      *(long *)(puVar7 + 0x40) = lVar22;
      *(undefined8 *)(puVar7 + 0x48) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
      *(undefined **)(unaff_x22 + 0x168) = puVar7;
      *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
      *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
      lVar15 = unaff_x22 + 0x140;
      func_0x000107c60bc4(lVar15);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x168);
      func_0x000107c61434(uVar19);
      func_0x000107c61434(uVar12);
      func_0x000107c61574(uVar21);
      func_0x000108ec0f10(uVar17,uVar16,lVar15);
      func_0x000107c60bd0(lVar15);
      func_0x000107c6142c(uVar19);
      func_0x000107c6142c(uVar12);
      plVar6 = (long *)(lVar18 + 0x48);
      func_0x0001000a8868(plVar6,*(undefined8 *)(lVar18 + 0x60));
      lVar15 = *plVar6;
      if (cVar2 == '\x01') {
        plVar6 = (long *)0xe0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x3b0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_101b9800c;
        plVar6[0x15] = (long)puVar10;
        plVar6[0x16] = lVar15;
        UNRECOVERED_JUMPTABLE = FUN_101bae06c;
        goto LAB_107c615e0;
      }
      plVar6 = (long *)0xd0;
      UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x3c0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_101b99514;
    }
                    /* WARNING: Could not recover jumptable at 0x000101b97150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_101b97050:
  *(undefined **)(unaff_x22 + 0x388) = puVar10;
  *(undefined **)(unaff_x22 + 0x380) = puVar13;
  *(long *)(unaff_x22 + 0x378) = lVar15;
  lVar15 = *(long *)(unaff_x22 + 0x360) + lVar15 * 0x50;
  uVar19 = *(undefined8 *)(lVar15 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar15 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar19;
  uVar19 = *(undefined8 *)(lVar15 + 0x50);
  uVar21 = *(undefined8 *)(lVar15 + 0x68);
  uVar12 = *(undefined8 *)(lVar15 + 0x60);
  uVar23 = *(undefined8 *)(lVar15 + 0x38);
  uVar20 = *(undefined8 *)(lVar15 + 0x30);
  uVar17 = *(undefined8 *)(lVar15 + 0x48);
  uVar16 = *(undefined8 *)(lVar15 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar15 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar16;
  plVar6 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
  func_0x0001000a8868(plVar6,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
  lVar22 = *plVar6;
  func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
  plVar6 = (long *)0x1d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x390) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b9695c;
  lVar15 = *(long *)(unaff_x22 + 0x340);
  plVar6[0x27] = *(long *)(unaff_x22 + 0x370);
  plVar6[0x28] = lVar22;
  plVar6[0x25] = lVar15;
  plVar6[0x26] = unaff_x22 + 0x10;
  UNRECOVERED_JUMPTABLE = FUN_101bad744;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
LAB_101b96e04:
  lVar18 = *(long *)(unaff_x22 + 0x308);
  lVar15 = *(long *)(unaff_x22 + 0x290);
  lVar22 = *(long *)(*(long *)(lVar15 + 0x38) + uVar11 * 8);
  *(long *)(unaff_x22 + 0x340) = lVar22;
  func_0x000107c615f0(lVar22);
  func_0x000107c61574(lVar15);
  if (*(long *)(lVar18 + 0x10) != 0) {
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
    uVar11 = uVar14;
    func_0x000100029284();
    if ((uVar11 & 1) != 0) {
      lVar22 = *(long *)(unaff_x22 + 0x308);
      lVar15 = *(long *)(*(long *)(lVar22 + 0x38) + uVar5 * 8);
      func_0x000107c61434(lVar15);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar22);
      *(long *)(unaff_x22 + 0x360) = lVar15;
      lVar15 = *(long *)(lVar15 + 0x10);
      *(long *)(unaff_x22 + 0x368) = lVar15;
      if (lVar15 == 0) {
        lVar22 = *(long *)(unaff_x22 + 0x330);
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (lVar22 == 0) {
          lVar18 = 0;
          uVar11 = 0;
        }
        else {
          lVar18 = lVar22;
          func_0x000107c5faec();
          func_0x000107c61170(lVar22);
        }
        uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
        uVar21 = *(undefined8 *)(unaff_x22 + 800);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
        puVar10 = &UNK_110450168;
        func_0x000107c613fc(&UNK_110450168,0x18,7);
        func_0x000107c61644(puVar10 + 0x10,uVar12);
        puVar13 = &UNK_110450348;
        func_0x000107c613fc(&UNK_110450348,0x50,7);
        *(undefined **)(puVar13 + 0x10) = puVar10;
        *(undefined8 *)(puVar13 + 0x18) = 0xd000000000000014;
        *(undefined8 *)(puVar13 + 0x20) = 0x800000010f001c90;
        puVar13[0x28] = 1;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(long *)(puVar13 + 0x40) = lVar18;
        *(ulong *)(puVar13 + 0x48) = uVar11;
        *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
        *(undefined **)(unaff_x22 + 0x198) = puVar13;
        *(undefined **)(unaff_x22 + 0x170) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
        *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
        lVar22 = unaff_x22 + 0x170;
        func_0x000107c60bc4(lVar22);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
        func_0x000107c61434(uVar11);
        func_0x000107c61574(uVar12);
        func_0x000108ec0f10(uVar21,uVar19,lVar22);
        func_0x000107c60bd0(lVar22);
        func_0x000107c6142c(uVar11);
      }
      lVar22 = *(long *)(unaff_x22 + 0x330);
      func_0x000107c42d70();
      func_0x000107c61180();
      if (lVar22 == 0) {
        uVar19 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x330);
        func_0x000107c61170();
        func_0x000107c42d70();
        func_0x000107c61180();
        uVar19 = uVar12;
        func_0x000107e6b314();
        func_0x000107c61180();
        func_0x000107c61170(uVar12);
      }
      *(undefined8 *)(unaff_x22 + 0x370) = uVar19;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar15 != 0) goto code_r0x000101b97040;
      goto LAB_101b96b04;
    }
    func_0x000107c6142c(uVar14);
    uVar14 = *(ulong *)(unaff_x22 + 0x308);
  }
  lVar15 = *(long *)(unaff_x22 + 0x280);
  func_0x000107c6142c(uVar14);
  plVar6 = (long *)(lVar15 + 0x20);
  func_0x0001000a8868(plVar6,*(undefined8 *)(lVar15 + 0x38));
  lVar15 = *plVar6;
  plVar6 = (long *)0x550;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x348) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101b954b4;
  plVar6[99] = lVar15;
  *(undefined1 *)((long)plVar6 + 0x542) = 0;
  plVar6[0x62] = lVar22;
  plVar6[0x61] = uVar4;
  UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
  goto LAB_107c615e0;
code_r0x000101b97040:
  lVar15 = 0;
  goto LAB_101b97050;
}



/* Entry: 101b974d8; end: 101b9800b;  */

void FUN_101b974d8(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar14 = *(long *)(unaff_x22 + 0x330);
  func_0x000107c614cc(*(undefined8 *)(unaff_x22 + 0x398),unaff_x22 + 0x260,unaff_x22 + 0x1e8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1f8);
  func_0x000107c60640();
  uVar17 = uVar9;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar14 == 0) {
    lVar16 = 0;
    uVar17 = 0;
  }
  else {
    lVar16 = lVar14;
    func_0x000107c5faec();
    func_0x000107c61170(lVar14);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x398);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar20 = *(undefined8 *)(unaff_x22 + 800);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x280);
  puVar4 = &UNK_110450168;
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar23);
  puVar5 = &UNK_110450258;
  func_0x000107c613fc(&UNK_110450258,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = 0xd000000000000017;
  *(undefined8 *)(puVar5 + 0x20) = 0x800000010f001c70;
  puVar5[0x28] = 1;
  *(undefined8 *)(puVar5 + 0x30) = uVar22;
  *(undefined8 *)(puVar5 + 0x38) = uVar9;
  *(long *)(puVar5 + 0x40) = lVar16;
  *(undefined8 *)(puVar5 + 0x48) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x100) = 0x101b9d91c;
  *(undefined **)(unaff_x22 + 0x108) = puVar5;
  *(undefined **)(unaff_x22 + 0xe0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xf0) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 0xf8) = &UNK_110450270;
  lVar14 = unaff_x22 + 0xe0;
  func_0x000107c60bc4(lVar14);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c61434(uVar17);
  func_0x000107c61434(uVar9);
  func_0x000107c61574(uVar22);
  func_0x000108ec0f10(uVar20,uVar19,lVar14);
  func_0x000107c60bd0(lVar14);
  func_0x000101b9d508(unaff_x22 + 0x10);
  func_0x000107c6142c(uVar17);
  func_0x000107c6142c(uVar9);
  func_0x000107c614ac(uVar12);
  puVar13 = *(undefined **)(unaff_x22 + 0x388);
  puVar15 = *(undefined **)(unaff_x22 + 0x380);
  lVar14 = *(long *)(unaff_x22 + 0x378) + 1;
  puVar4 = PTR___sSiN_11034deb0;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  if (lVar14 == *(long *)(unaff_x22 + 0x368)) {
LAB_101b976e4:
    uVar22 = 0xeb00000000736e6f;
    *(undefined **)(unaff_x22 + 0x3a8) = puVar13;
    *(undefined **)(unaff_x22 + 0x3a0) = puVar15;
    lVar14 = *(long *)(unaff_x22 + 0x330);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
    *(undefined8 *)(unaff_x22 + 0x228) = 0;
    *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
    *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
    *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
    *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar15 + 0x10);
    func_0x000107c6057c(puVar4,puVar5);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    func_0x000107c5fb78(0x6974617265706f20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar16 = *(long *)(puVar15 + 0x10);
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (lVar14 == 0) {
      lVar21 = 0;
      uVar22 = 0;
    }
    else {
      lVar21 = lVar14;
      func_0x000107c5faec();
      func_0x000107c61170(lVar14);
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar20 = *(undefined8 *)(unaff_x22 + 800);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x280);
    puVar4 = &UNK_110450168;
    func_0x000107c613fc(&UNK_110450168,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,uVar19);
    puVar5 = &UNK_1104502a8;
    func_0x000107c613fc(&UNK_1104502a8,0x50,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar9;
    *(undefined8 *)(puVar5 + 0x20) = uVar17;
    puVar5[0x28] = lVar16 == 0;
    *(undefined8 *)(puVar5 + 0x30) = 0;
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(long *)(puVar5 + 0x40) = lVar21;
    *(undefined8 *)(puVar5 + 0x48) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
    *(undefined **)(unaff_x22 + 0x138) = puVar5;
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
    lVar14 = unaff_x22 + 0x110;
    func_0x000107c60bc4(lVar14);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
    func_0x000107c61434(uVar22);
    func_0x000107c61434(uVar17);
    func_0x000107c61574(uVar9);
    func_0x000108ec0f10(uVar20,uVar12,lVar14);
    func_0x000107c60bd0(lVar14);
    func_0x000107c6142c(uVar22);
    func_0x000107c6142c(uVar17);
    lVar14 = *(long *)(unaff_x22 + 0x330);
    if (*(long *)(puVar13 + 0x10) == 0) {
      func_0x000107c61170();
      uVar17 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x370);
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar22);
      func_0x000107c61170(uVar9);
      uVar18 = *(ulong *)(unaff_x22 + 0x338);
      if (uVar18 != *(ulong *)(unaff_x22 + 0x318)) {
        do {
          puVar1 = (ulong *)(unaff_x22 + 0x278);
          if (*(long *)(unaff_x22 + 0x310) != 0) {
            puVar1 = (ulong *)(unaff_x22 + 0x300);
          }
          uVar10 = *puVar1;
          if ((uVar10 & 0xc000000000000001) == 0) {
            if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b9800c);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar6 = *(ulong *)(uVar10 + uVar18 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            uVar6 = uVar18;
            FUN_101b9bcc0(uVar18,uVar10,&PTR_PTR_1126bf9a8,0x112d61d40);
          }
          *(ulong *)(unaff_x22 + 0x330) = uVar6;
          *(ulong *)(unaff_x22 + 0x338) = uVar18 + 1;
          if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b97f90);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar18 = uVar6;
          func_0x000107c3fd78();
          func_0x000107c61180();
          if (uVar18 == 0) {
LAB_101b978f4:
            func_0x000107c61170(uVar6);
          }
          else {
            lVar14 = *(long *)(unaff_x22 + 0x290);
            uVar7 = uVar18;
            func_0x000107c5faec();
            func_0x000107c61170(uVar18);
            if (*(long *)(lVar14 + 0x10) == 0) {
              func_0x000107c6142c(uVar10);
              goto LAB_101b978f4;
            }
            func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
            uVar18 = uVar7;
            uVar11 = uVar10;
            func_0x000100029284();
            if ((uVar11 & 1) != 0) goto LAB_101b979e4;
            uVar22 = *(undefined8 *)(unaff_x22 + 0x290);
            func_0x000107c6142c(uVar10);
            func_0x000107c61170(uVar6);
            func_0x000107c61574(uVar22);
          }
          uVar18 = *(ulong *)(unaff_x22 + 0x338);
          if (uVar18 == *(ulong *)(unaff_x22 + 0x318)) break;
        } while( true );
      }
      lVar14 = *(long *)(unaff_x22 + 0x310);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x300);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x290);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x278);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
      func_0x000107c6142c(uVar9);
      func_0x000107c61574(uVar17);
      if (lVar14 != 0) {
        uVar22 = uVar9;
      }
      func_0x000107c6142c(uVar22);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
    else {
      bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
      uVar22 = 0xe900000000000065;
      if (bVar3) {
        uVar22 = 0xed00006574616964;
      }
      uVar17 = 0x74616964656d6d69;
      if (bVar3) {
        uVar17 = 0x656d6d69206e6f6e;
      }
      *(undefined8 *)(unaff_x22 + 0x248) = 0;
      *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
      func_0x000107c602fc(0x10);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
      *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
      *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
      func_0x000107c5fb78(uVar17,uVar22);
      func_0x000107c6142c(uVar22);
      uVar22 = 0xe400000000000000;
      func_0x000107c5fb78(0x626f6a20);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x240);
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar14 == 0) {
        lVar16 = 0;
        uVar22 = 0;
      }
      else {
        lVar16 = lVar14;
        func_0x000107c5faec();
        func_0x000107c61170(lVar14);
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x328);
      uVar19 = *(undefined8 *)(unaff_x22 + 800);
      lVar21 = *(long *)(unaff_x22 + 0x280);
      cVar2 = *(char *)(unaff_x22 + 0x3d0);
      puVar4 = &UNK_110450168;
      func_0x000107c613fc(&UNK_110450168,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,lVar21);
      puVar5 = &UNK_1104502f8;
      func_0x000107c613fc(&UNK_1104502f8,0x50,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(undefined8 *)(puVar5 + 0x18) = uVar9;
      *(undefined8 *)(puVar5 + 0x20) = uVar17;
      puVar5[0x28] = 0;
      *(undefined8 *)(puVar5 + 0x30) = 0;
      *(undefined8 *)(puVar5 + 0x38) = 0;
      *(long *)(puVar5 + 0x40) = lVar16;
      *(undefined8 *)(puVar5 + 0x48) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
      *(undefined **)(unaff_x22 + 0x168) = puVar5;
      *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
      *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
      lVar14 = unaff_x22 + 0x140;
      func_0x000107c60bc4(lVar14);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x168);
      func_0x000107c61434(uVar22);
      func_0x000107c61434(uVar17);
      func_0x000107c61574(uVar9);
      func_0x000108ec0f10(uVar19,uVar12,lVar14);
      func_0x000107c60bd0(lVar14);
      func_0x000107c6142c(uVar22);
      func_0x000107c6142c(uVar17);
      plVar8 = (long *)(lVar21 + 0x48);
      func_0x0001000a8868(plVar8,*(undefined8 *)(lVar21 + 0x60));
      lVar14 = *plVar8;
      if (cVar2 == '\x01') {
        plVar8 = (long *)0xe0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x3b0) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_101b9800c;
        plVar8[0x15] = (long)puVar13;
        plVar8[0x16] = lVar14;
        UNRECOVERED_JUMPTABLE = FUN_101bae06c;
        goto LAB_107c615e0;
      }
      plVar8 = (long *)0xd0;
      UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x3c0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_101b99514;
    }
                    /* WARNING: Could not recover jumptable at 0x000101b97d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_101b97c1c:
  *(undefined **)(unaff_x22 + 0x388) = puVar13;
  *(undefined **)(unaff_x22 + 0x380) = puVar15;
  *(long *)(unaff_x22 + 0x378) = lVar14;
  lVar14 = *(long *)(unaff_x22 + 0x360) + lVar14 * 0x50;
  uVar22 = *(undefined8 *)(lVar14 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar14 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar22;
  uVar22 = *(undefined8 *)(lVar14 + 0x50);
  uVar9 = *(undefined8 *)(lVar14 + 0x68);
  uVar17 = *(undefined8 *)(lVar14 + 0x60);
  uVar23 = *(undefined8 *)(lVar14 + 0x38);
  uVar20 = *(undefined8 *)(lVar14 + 0x30);
  uVar19 = *(undefined8 *)(lVar14 + 0x48);
  uVar12 = *(undefined8 *)(lVar14 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar14 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar23;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  plVar8 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
  func_0x0001000a8868(plVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
  lVar16 = *plVar8;
  func_0x000101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
  plVar8 = (long *)0x1d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x390) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101b9695c;
  lVar14 = *(long *)(unaff_x22 + 0x340);
  plVar8[0x27] = *(long *)(unaff_x22 + 0x370);
  plVar8[0x28] = lVar16;
  plVar8[0x25] = lVar14;
  plVar8[0x26] = unaff_x22 + 0x10;
  UNRECOVERED_JUMPTABLE = FUN_101bad744;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
  return;
LAB_101b979e4:
  lVar21 = *(long *)(unaff_x22 + 0x308);
  lVar14 = *(long *)(unaff_x22 + 0x290);
  lVar16 = *(long *)(*(long *)(lVar14 + 0x38) + uVar18 * 8);
  *(long *)(unaff_x22 + 0x340) = lVar16;
  func_0x000107c615f0(lVar16);
  func_0x000107c61574(lVar14);
  if (*(long *)(lVar21 + 0x10) != 0) {
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
    uVar18 = uVar10;
    func_0x000100029284();
    if ((uVar18 & 1) != 0) {
      lVar16 = *(long *)(unaff_x22 + 0x308);
      lVar14 = *(long *)(*(long *)(lVar16 + 0x38) + uVar7 * 8);
      func_0x000107c61434(lVar14);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(lVar16);
      *(long *)(unaff_x22 + 0x360) = lVar14;
      lVar14 = *(long *)(lVar14 + 0x10);
      *(long *)(unaff_x22 + 0x368) = lVar14;
      if (lVar14 == 0) {
        lVar16 = *(long *)(unaff_x22 + 0x330);
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (lVar16 == 0) {
          lVar21 = 0;
          uVar18 = 0;
        }
        else {
          lVar21 = lVar16;
          func_0x000107c5faec();
          func_0x000107c61170(lVar16);
        }
        uVar22 = *(undefined8 *)(unaff_x22 + 0x328);
        uVar17 = *(undefined8 *)(unaff_x22 + 800);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x280);
        puVar5 = &UNK_110450168;
        func_0x000107c613fc(&UNK_110450168,0x18,7);
        func_0x000107c61644(puVar5 + 0x10,uVar9);
        puVar13 = &UNK_110450348;
        func_0x000107c613fc(&UNK_110450348,0x50,7);
        *(undefined **)(puVar13 + 0x10) = puVar5;
        *(undefined8 *)(puVar13 + 0x18) = 0xd000000000000014;
        *(undefined8 *)(puVar13 + 0x20) = 0x800000010f001c90;
        puVar13[0x28] = 1;
        *(undefined8 *)(puVar13 + 0x30) = 0;
        *(undefined8 *)(puVar13 + 0x38) = 0;
        *(long *)(puVar13 + 0x40) = lVar21;
        *(ulong *)(puVar13 + 0x48) = uVar18;
        *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
        *(undefined **)(unaff_x22 + 0x198) = puVar13;
        *(undefined **)(unaff_x22 + 0x170) = puVar4;
        *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
        *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
        lVar16 = unaff_x22 + 0x170;
        func_0x000107c60bc4(lVar16);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
        func_0x000107c61434(uVar18);
        func_0x000107c61574(uVar9);
        func_0x000108ec0f10(uVar17,uVar22,lVar16);
        func_0x000107c60bd0(lVar16);
        func_0x000107c6142c(uVar18);
      }
      lVar16 = *(long *)(unaff_x22 + 0x330);
      func_0x000107c42d70();
      func_0x000107c61180();
      if (lVar16 == 0) {
        uVar22 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(unaff_x22 + 0x330);
        func_0x000107c61170();
        func_0x000107c42d70();
        func_0x000107c61180();
        uVar22 = uVar17;
        func_0x000107e6b314();
        func_0x000107c61180();
        func_0x000107c61170(uVar17);
      }
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      puVar4 = PTR___sSiN_11034deb0;
      *(undefined8 *)(unaff_x22 + 0x370) = uVar22;
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (lVar14 != 0) goto code_r0x000101b97c0c;
      goto LAB_101b976e4;
    }
    func_0x000107c6142c(uVar10);
    uVar10 = *(ulong *)(unaff_x22 + 0x308);
  }
  lVar14 = *(long *)(unaff_x22 + 0x280);
  func_0x000107c6142c(uVar10);
  plVar8 = (long *)(lVar14 + 0x20);
  func_0x0001000a8868(plVar8,*(undefined8 *)(lVar14 + 0x38));
  lVar14 = *plVar8;
  plVar8 = (long *)0x550;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x348) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101b954b4;
  plVar8[99] = lVar14;
  *(undefined1 *)((long)plVar8 + 0x542) = 0;
  plVar8[0x62] = lVar16;
  plVar8[0x61] = uVar6;
  UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
  goto LAB_107c615e0;
code_r0x000101b97c0c:
  lVar14 = 0;
  goto LAB_101b97c1c;
}



/* Entry: 101b9800c; end: 101b98067;  */

void FUN_101b9800c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3b8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101b98068;
  }
  else {
    pcVar1 = FUN_101b98a10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b98068; end: 101b98a0f;  */

void FUN_101b98068(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x330));
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
  func_0x000107c6142c(uVar13);
  func_0x000107c6142c(uVar12);
  func_0x000107c61170(uVar16);
  uVar14 = *(ulong *)(unaff_x22 + 0x338);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar14 != *(ulong *)(unaff_x22 + 0x318)) {
    do {
      while( true ) {
        puVar1 = (ulong *)(unaff_x22 + 0x278);
        if (*(long *)(unaff_x22 + 0x310) != 0) {
          puVar1 = (ulong *)(unaff_x22 + 0x300);
        }
        uVar10 = *puVar1;
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b98a10);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar4 = *(ulong *)(uVar10 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar14;
          FUN_101b9bcc0(uVar14,uVar10,&PTR_PTR_1126bf9a8,0x112d61d40);
        }
        *(ulong *)(unaff_x22 + 0x330) = uVar4;
        *(ulong *)(unaff_x22 + 0x338) = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b98a0c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar14 = uVar4;
        func_0x000107c3fd78();
        func_0x000107c61180();
        if (uVar14 != 0) break;
LAB_101b98174:
        func_0x000107c61170(uVar4);
LAB_101b9817c:
        uVar14 = *(ulong *)(unaff_x22 + 0x338);
        if (uVar14 == *(ulong *)(unaff_x22 + 0x318)) goto LAB_101b980d4;
      }
      lVar17 = *(long *)(unaff_x22 + 0x290);
      uVar5 = uVar14;
      func_0x000107c5faec();
      func_0x000107c61170(uVar14);
      if (*(long *)(lVar17 + 0x10) == 0) {
        func_0x000107c6142c(uVar10);
        goto LAB_101b98174;
      }
      func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
      uVar14 = uVar5;
      uVar11 = uVar10;
      func_0x000100029284();
      if ((uVar11 & 1) == 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x000107c6142c(uVar10);
        func_0x000107c61170(uVar4);
        func_0x000107c61574(uVar12);
        goto LAB_101b9817c;
      }
      lVar17 = *(long *)(unaff_x22 + 0x308);
      lVar15 = *(long *)(unaff_x22 + 0x290);
      lVar19 = *(long *)(*(long *)(lVar15 + 0x38) + uVar14 * 8);
      *(long *)(unaff_x22 + 0x340) = lVar19;
      func_0x000107c615f0(lVar19);
      func_0x000107c61574(lVar15);
      if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101b9868c:
        lVar17 = *(long *)(unaff_x22 + 0x280);
        func_0x000107c6142c(uVar10);
        plVar9 = (long *)(lVar17 + 0x20);
        func_0x0001000a8868(plVar9,*(undefined8 *)(lVar17 + 0x38));
        lVar17 = *plVar9;
        plVar9 = (long *)0x550;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x348) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_101b954b4;
        plVar9[99] = lVar17;
        *(undefined1 *)((long)plVar9 + 0x542) = 0;
        plVar9[0x62] = lVar19;
        plVar9[0x61] = uVar4;
        UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
        return;
      }
      func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
      uVar14 = uVar10;
      func_0x000100029284();
      if ((uVar14 & 1) == 0) {
        func_0x000107c6142c(uVar10);
        uVar10 = *(ulong *)(unaff_x22 + 0x308);
        goto LAB_101b9868c;
      }
      lVar17 = *(long *)(unaff_x22 + 0x308);
      lVar15 = *(long *)(*(long *)(lVar17 + 0x38) + uVar5 * 8);
      func_0x000107c61434(lVar15);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(lVar17);
      *(long *)(unaff_x22 + 0x360) = lVar15;
      lVar17 = *(long *)(lVar15 + 0x10);
      *(long *)(unaff_x22 + 0x368) = lVar17;
      if (lVar17 == 0) {
        lVar15 = *(long *)(unaff_x22 + 0x330);
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (lVar15 == 0) {
          lVar19 = 0;
          uVar14 = 0;
        }
        else {
          lVar19 = lVar15;
          func_0x000107c5faec();
          func_0x000107c61170(lVar15);
        }
        uVar12 = *(undefined8 *)(unaff_x22 + 0x328);
        uVar13 = *(undefined8 *)(unaff_x22 + 800);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x280);
        puVar6 = &UNK_110450168;
        func_0x000107c613fc(&UNK_110450168,0x18,7);
        func_0x000107c61644(puVar6 + 0x10,uVar16);
        puVar7 = &UNK_110450348;
        func_0x000107c613fc(&UNK_110450348,0x50,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined8 *)(puVar7 + 0x18) = 0xd000000000000014;
        *(undefined8 *)(puVar7 + 0x20) = 0x800000010f001c90;
        puVar7[0x28] = 1;
        *(undefined8 *)(puVar7 + 0x30) = 0;
        *(undefined8 *)(puVar7 + 0x38) = 0;
        *(long *)(puVar7 + 0x40) = lVar19;
        *(ulong *)(puVar7 + 0x48) = uVar14;
        *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
        *(undefined **)(unaff_x22 + 0x198) = puVar7;
        *(undefined **)(unaff_x22 + 0x170) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
        *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
        lVar15 = unaff_x22 + 0x170;
        func_0x000107c60bc4(lVar15);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
        func_0x000107c61434(uVar14);
        func_0x000107c61574(uVar16);
        func_0x000108ec0f10(uVar13,uVar12,lVar15);
        func_0x000107c60bd0(lVar15);
        func_0x000107c6142c(uVar14);
      }
      lVar15 = *(long *)(unaff_x22 + 0x330);
      func_0x000107c42d70();
      func_0x000107c61180();
      if (lVar15 == 0) {
        *(undefined8 *)(unaff_x22 + 0x370) = 0;
        if (lVar17 == 0) goto LAB_101b98450;
LAB_101b986f8:
        *(undefined **)(unaff_x22 + 0x388) = puVar8;
        *(undefined **)(unaff_x22 + 0x380) = puVar8;
        *(undefined8 *)(unaff_x22 + 0x378) = 0;
        lVar17 = *(long *)(unaff_x22 + 0x360);
        uVar12 = *(undefined8 *)(lVar17 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar17 + 0x28);
        *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
        uVar12 = *(undefined8 *)(lVar17 + 0x50);
        uVar16 = *(undefined8 *)(lVar17 + 0x68);
        uVar13 = *(undefined8 *)(lVar17 + 0x60);
        uVar22 = *(undefined8 *)(lVar17 + 0x38);
        uVar21 = *(undefined8 *)(lVar17 + 0x30);
        uVar20 = *(undefined8 *)(lVar17 + 0x48);
        uVar18 = *(undefined8 *)(lVar17 + 0x40);
        *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar17 + 0x58);
        *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x58) = uVar16;
        *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x20) = uVar21;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar20;
        *(undefined8 *)(unaff_x22 + 0x30) = uVar18;
        plVar9 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
        func_0x0001000a8868(plVar9,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
        lVar15 = *plVar9;
        FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
        plVar9 = (long *)0x1d0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x390) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_101b9695c;
        lVar17 = *(long *)(unaff_x22 + 0x340);
        plVar9[0x27] = *(long *)(unaff_x22 + 0x370);
        plVar9[0x28] = lVar15;
        plVar9[0x25] = lVar17;
        plVar9[0x26] = unaff_x22 + 0x10;
        UNRECOVERED_JUMPTABLE = FUN_101bad744;
        goto LAB_107c615e0;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
      func_0x000107c61170();
      func_0x000107c42d70();
      func_0x000107c61180();
      uVar12 = uVar13;
      func_0x000107e6b314();
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      *(undefined8 *)(unaff_x22 + 0x370) = uVar12;
      if (lVar17 != 0) goto LAB_101b986f8;
LAB_101b98450:
      *(undefined **)(unaff_x22 + 0x3a8) = puVar8;
      *(undefined **)(unaff_x22 + 0x3a0) = puVar8;
      lVar17 = *(long *)(unaff_x22 + 0x330);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
      *(undefined8 *)(unaff_x22 + 0x228) = 0;
      *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
      func_0x000107c602fc(0x13);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
      *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
      *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
      *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar8 + 0x10);
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      uVar12 = 0xeb00000000736e6f;
      func_0x000107c5fb78(0x6974617265706f20);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x218);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x220);
      lVar15 = *(long *)(puVar8 + 0x10);
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar17 == 0) {
        lVar19 = 0;
        uVar12 = 0;
      }
      else {
        lVar19 = lVar17;
        func_0x000107c5faec();
        func_0x000107c61170(lVar17);
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
      uVar20 = *(undefined8 *)(unaff_x22 + 800);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x280);
      puVar8 = &UNK_110450168;
      func_0x000107c613fc(&UNK_110450168,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,uVar21);
      puVar6 = &UNK_1104502a8;
      func_0x000107c613fc(&UNK_1104502a8,0x50,7);
      *(undefined **)(puVar6 + 0x10) = puVar8;
      *(undefined8 *)(puVar6 + 0x18) = uVar16;
      *(undefined8 *)(puVar6 + 0x20) = uVar13;
      puVar6[0x28] = lVar15 == 0;
      *(undefined8 *)(puVar6 + 0x30) = 0;
      *(undefined8 *)(puVar6 + 0x38) = 0;
      *(long *)(puVar6 + 0x40) = lVar19;
      *(undefined8 *)(puVar6 + 0x48) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
      *(undefined **)(unaff_x22 + 0x138) = puVar6;
      *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
      *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
      lVar17 = unaff_x22 + 0x110;
      func_0x000107c60bc4(lVar17);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
      func_0x000107c61434(uVar12);
      func_0x000107c61434(uVar13);
      func_0x000107c61574(uVar16);
      func_0x000108ec0f10(uVar20,uVar18,lVar17);
      func_0x000107c60bd0(lVar17);
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uVar13);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar17 = *(long *)(unaff_x22 + 0x330);
      if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) != 0) {
        bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
        uVar12 = 0xe900000000000065;
        if (bVar3) {
          uVar12 = 0xed00006574616964;
        }
        uVar13 = 0x74616964656d6d69;
        if (bVar3) {
          uVar13 = 0x656d6d69206e6f6e;
        }
        *(undefined8 *)(unaff_x22 + 0x248) = 0;
        *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
        func_0x000107c602fc(0x10);
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
        *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
        *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
        func_0x000107c5fb78(uVar13,uVar12);
        func_0x000107c6142c(uVar12);
        uVar12 = 0xe400000000000000;
        func_0x000107c5fb78(0x626f6a20);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x238);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x240);
        func_0x000107c5cab0();
        func_0x000107c61180();
        if (lVar17 == 0) {
          lVar15 = 0;
          uVar12 = 0;
        }
        else {
          lVar15 = lVar17;
          func_0x000107c5faec();
          func_0x000107c61170(lVar17);
        }
        uVar18 = *(undefined8 *)(unaff_x22 + 0x328);
        uVar20 = *(undefined8 *)(unaff_x22 + 800);
        lVar19 = *(long *)(unaff_x22 + 0x280);
        cVar2 = *(char *)(unaff_x22 + 0x3d0);
        puVar8 = &UNK_110450168;
        func_0x000107c613fc(&UNK_110450168,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,lVar19);
        puVar6 = &UNK_1104502f8;
        func_0x000107c613fc(&UNK_1104502f8,0x50,7);
        *(undefined **)(puVar6 + 0x10) = puVar8;
        *(undefined8 *)(puVar6 + 0x18) = uVar16;
        *(undefined8 *)(puVar6 + 0x20) = uVar13;
        puVar6[0x28] = 0;
        *(undefined8 *)(puVar6 + 0x30) = 0;
        *(undefined8 *)(puVar6 + 0x38) = 0;
        *(long *)(puVar6 + 0x40) = lVar15;
        *(undefined8 *)(puVar6 + 0x48) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
        *(undefined **)(unaff_x22 + 0x168) = puVar6;
        *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
        *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
        lVar17 = unaff_x22 + 0x140;
        func_0x000107c60bc4(lVar17);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x168);
        func_0x000107c61434(uVar12);
        func_0x000107c61434(uVar13);
        func_0x000107c61574(uVar16);
        func_0x000108ec0f10(uVar20,uVar18,lVar17);
        func_0x000107c60bd0(lVar17);
        func_0x000107c6142c(uVar12);
        func_0x000107c6142c(uVar13);
        plVar9 = (long *)(lVar19 + 0x48);
        func_0x0001000a8868(plVar9,*(undefined8 *)(lVar19 + 0x60));
        lVar17 = *plVar9;
        if (cVar2 == '\x01') {
          plVar9 = (long *)0xe0;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x3b0) = plVar9;
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_101b9800c;
          plVar9[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
          plVar9[0x16] = lVar17;
          UNRECOVERED_JUMPTABLE = FUN_101bae06c;
          goto LAB_107c615e0;
        }
        plVar9 = (long *)0xd0;
        UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x3c0) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_101b99514;
        goto LAB_101b98110;
      }
      func_0x000107c61170();
      uVar13 = *(undefined8 *)(unaff_x22 + 0x3a8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x3a0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x370);
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
      func_0x000107c6142c(uVar13);
      func_0x000107c6142c(uVar12);
      func_0x000107c61170(uVar16);
      uVar14 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar14 != *(ulong *)(unaff_x22 + 0x318));
  }
LAB_101b980d4:
  lVar17 = *(long *)(unaff_x22 + 0x310);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar16);
  func_0x000107c61574(uVar13);
  if (lVar17 != 0) {
    uVar12 = uVar16;
  }
  func_0x000107c6142c(uVar12);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101b98110:
                    /* WARNING: Could not recover jumptable at 0x000101b98130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b98a10; end: 101b99513;  */

void FUN_101b98a10(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x370);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar14);
  func_0x000107c61170(uVar18);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3b8);
  lVar19 = *(long *)(unaff_x22 + 0x330);
  func_0x000107c614cc(uVar18,unaff_x22 + 600,unaff_x22 + 0x1d0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c60640();
  uVar15 = uVar10;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar19 == 0) {
    lVar17 = 0;
    uVar15 = 0;
  }
  else {
    lVar17 = lVar19;
    func_0x000107c5faec();
    func_0x000107c61170(lVar19);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar22 = *(undefined8 *)(unaff_x22 + 800);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x280);
  puVar4 = &UNK_110450168;
  func_0x000107c613fc(&UNK_110450168,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,uVar23);
  puVar5 = &UNK_110450208;
  func_0x000107c613fc(&UNK_110450208,0x50,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = 0xd000000000000029;
  *(undefined8 *)(puVar5 + 0x20) = 0x800000010f001c40;
  puVar5[0x28] = 1;
  *(undefined8 *)(puVar5 + 0x30) = uVar14;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(long *)(puVar5 + 0x40) = lVar17;
  *(undefined8 *)(puVar5 + 0x48) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0x101b9d918;
  *(undefined **)(unaff_x22 + 0xd8) = puVar5;
  *(undefined **)(unaff_x22 + 0xb0) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0xb8) = 0x42000000;
  *(undefined **)(unaff_x22 + 0xc0) = &UNK_100288f10;
  *(undefined **)(unaff_x22 + 200) = &UNK_110450220;
  lVar19 = unaff_x22 + 0xb0;
  func_0x000107c60bc4(lVar19);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61434(uVar15);
  func_0x000107c61434(uVar10);
  func_0x000107c61574(uVar14);
  func_0x000108ec0f10(uVar22,uVar20,lVar19);
  func_0x000107c60bd0(lVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(uVar10);
  func_0x000107c614ac(uVar18);
  uVar16 = *(ulong *)(unaff_x22 + 0x338);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != *(ulong *)(unaff_x22 + 0x318)) {
    do {
      puVar1 = (ulong *)(unaff_x22 + 0x278);
      if (*(long *)(unaff_x22 + 0x310) != 0) {
        puVar1 = (ulong *)(unaff_x22 + 0x300);
      }
      uVar11 = *puVar1;
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b99514);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar6 = *(ulong *)(uVar11 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar16;
        FUN_101b9bcc0(uVar16,uVar11,&PTR_PTR_1126bf9a8,0x112d61d40);
      }
      *(ulong *)(unaff_x22 + 0x330) = uVar6;
      *(ulong *)(unaff_x22 + 0x338) = uVar16 + 1;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101b99510);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar16 = uVar6;
      func_0x000107c3fd78();
      func_0x000107c61180();
      if (uVar16 == 0) {
LAB_101b98c88:
        func_0x000107c61170(uVar6);
      }
      else {
        lVar19 = *(long *)(unaff_x22 + 0x290);
        uVar7 = uVar16;
        func_0x000107c5faec();
        func_0x000107c61170(uVar16);
        if (*(long *)(lVar19 + 0x10) == 0) {
          func_0x000107c6142c(uVar11);
          goto LAB_101b98c88;
        }
        func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x290));
        uVar16 = uVar7;
        uVar12 = uVar11;
        func_0x000100029284();
        if ((uVar12 & 1) != 0) {
          lVar19 = *(long *)(unaff_x22 + 0x308);
          lVar17 = *(long *)(unaff_x22 + 0x290);
          lVar21 = *(long *)(*(long *)(lVar17 + 0x38) + uVar16 * 8);
          *(long *)(unaff_x22 + 0x340) = lVar21;
          func_0x000107c615f0(lVar21);
          func_0x000107c61574(lVar17);
          if (*(long *)(lVar19 + 0x10) != 0) {
            func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x308));
            uVar16 = uVar11;
            func_0x000100029284();
            if ((uVar16 & 1) != 0) {
              lVar19 = *(long *)(unaff_x22 + 0x308);
              lVar17 = *(long *)(*(long *)(lVar19 + 0x38) + uVar7 * 8);
              func_0x000107c61434(lVar17);
              func_0x000107c6142c(uVar11);
              func_0x000107c6142c(lVar19);
              *(long *)(unaff_x22 + 0x360) = lVar17;
              lVar19 = *(long *)(lVar17 + 0x10);
              *(long *)(unaff_x22 + 0x368) = lVar19;
              if (lVar19 == 0) {
                lVar17 = *(long *)(unaff_x22 + 0x330);
                func_0x000107c5cab0();
                func_0x000107c61180();
                if (lVar17 == 0) {
                  lVar21 = 0;
                  uVar16 = 0;
                }
                else {
                  lVar21 = lVar17;
                  func_0x000107c5faec();
                  func_0x000107c61170(lVar17);
                }
                uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
                uVar15 = *(undefined8 *)(unaff_x22 + 800);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x280);
                puVar5 = &UNK_110450168;
                func_0x000107c613fc(&UNK_110450168,0x18,7);
                func_0x000107c61644(puVar5 + 0x10,uVar18);
                puVar8 = &UNK_110450348;
                func_0x000107c613fc(&UNK_110450348,0x50,7);
                *(undefined **)(puVar8 + 0x10) = puVar5;
                *(undefined8 *)(puVar8 + 0x18) = 0xd000000000000014;
                *(undefined8 *)(puVar8 + 0x20) = 0x800000010f001c90;
                puVar8[0x28] = 1;
                *(undefined8 *)(puVar8 + 0x30) = 0;
                *(undefined8 *)(puVar8 + 0x38) = 0;
                *(long *)(puVar8 + 0x40) = lVar21;
                *(ulong *)(puVar8 + 0x48) = uVar16;
                *(undefined8 *)(unaff_x22 + 400) = 0x101b9d928;
                *(undefined **)(unaff_x22 + 0x198) = puVar8;
                *(undefined **)(unaff_x22 + 0x170) = PTR___NSConcreteStackBlock_11034bd00;
                *(undefined8 *)(unaff_x22 + 0x178) = 0x42000000;
                *(undefined **)(unaff_x22 + 0x180) = &UNK_100288f10;
                *(undefined **)(unaff_x22 + 0x188) = &UNK_110450360;
                lVar17 = unaff_x22 + 0x170;
                func_0x000107c60bc4(lVar17);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x198);
                func_0x000107c61434(uVar16);
                func_0x000107c61574(uVar18);
                func_0x000108ec0f10(uVar15,uVar14,lVar17);
                func_0x000107c60bd0(lVar17);
                func_0x000107c6142c(uVar16);
              }
              lVar17 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c42d70();
              func_0x000107c61180();
              if (lVar17 == 0) {
                *(undefined8 *)(unaff_x22 + 0x370) = 0;
              }
              else {
                uVar15 = *(undefined8 *)(unaff_x22 + 0x330);
                func_0x000107c61170();
                func_0x000107c42d70();
                func_0x000107c61180();
                uVar14 = uVar15;
                func_0x000107e6b314();
                func_0x000107c61180();
                func_0x000107c61170(uVar15);
                *(undefined8 *)(unaff_x22 + 0x370) = uVar14;
              }
              if (lVar19 != 0) {
                *(undefined **)(unaff_x22 + 0x388) = puVar4;
                *(undefined **)(unaff_x22 + 0x380) = puVar4;
                *(undefined8 *)(unaff_x22 + 0x378) = 0;
                lVar19 = *(long *)(unaff_x22 + 0x360);
                uVar14 = *(undefined8 *)(lVar19 + 0x20);
                *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar19 + 0x28);
                *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
                uVar14 = *(undefined8 *)(lVar19 + 0x50);
                uVar18 = *(undefined8 *)(lVar19 + 0x68);
                uVar15 = *(undefined8 *)(lVar19 + 0x60);
                uVar22 = *(undefined8 *)(lVar19 + 0x38);
                uVar20 = *(undefined8 *)(lVar19 + 0x30);
                uVar13 = *(undefined8 *)(lVar19 + 0x48);
                uVar10 = *(undefined8 *)(lVar19 + 0x40);
                *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(lVar19 + 0x58);
                *(undefined8 *)(unaff_x22 + 0x40) = uVar14;
                *(undefined8 *)(unaff_x22 + 0x58) = uVar18;
                *(undefined8 *)(unaff_x22 + 0x50) = uVar15;
                *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
                *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
                *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
                *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
                plVar9 = (long *)(*(long *)(unaff_x22 + 0x280) + 0x48);
                func_0x0001000a8868(plVar9,*(undefined8 *)(*(long *)(unaff_x22 + 0x280) + 0x60));
                lVar17 = *plVar9;
                FUN_101b9d4cc(unaff_x22 + 0x10,unaff_x22 + 0x60);
                plVar9 = (long *)0x1d0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x390) = plVar9;
                *plVar9 = unaff_x22;
                plVar9[1] = (long)FUN_101b9695c;
                lVar19 = *(long *)(unaff_x22 + 0x340);
                plVar9[0x27] = *(long *)(unaff_x22 + 0x370);
                plVar9[0x28] = lVar17;
                plVar9[0x25] = lVar19;
                plVar9[0x26] = unaff_x22 + 0x10;
                UNRECOVERED_JUMPTABLE = FUN_101bad744;
                goto LAB_107c615e0;
              }
              *(undefined **)(unaff_x22 + 0x3a8) = puVar4;
              *(undefined **)(unaff_x22 + 0x3a0) = puVar4;
              lVar19 = *(long *)(unaff_x22 + 0x330);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x360));
              *(undefined8 *)(unaff_x22 + 0x228) = 0;
              *(undefined8 *)(unaff_x22 + 0x230) = 0xe000000000000000;
              func_0x000107c602fc(0x13);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x230));
              *(undefined8 *)(unaff_x22 + 0x218) = 0x206465646441;
              *(undefined8 *)(unaff_x22 + 0x220) = 0xe600000000000000;
              *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(puVar4 + 0x10);
              puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar5);
              uVar14 = 0xeb00000000736e6f;
              func_0x000107c5fb78(0x6974617265706f20);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x218);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x220);
              lVar17 = *(long *)(puVar4 + 0x10);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                lVar21 = 0;
                uVar14 = 0;
              }
              else {
                lVar21 = lVar19;
                func_0x000107c5faec();
                func_0x000107c61170(lVar19);
              }
              uVar10 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar13 = *(undefined8 *)(unaff_x22 + 800);
              uVar20 = *(undefined8 *)(unaff_x22 + 0x280);
              puVar4 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar4 + 0x10,uVar20);
              puVar5 = &UNK_1104502a8;
              func_0x000107c613fc(&UNK_1104502a8,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar4;
              *(undefined8 *)(puVar5 + 0x18) = uVar18;
              *(undefined8 *)(puVar5 + 0x20) = uVar15;
              puVar5[0x28] = lVar17 == 0;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar21;
              *(undefined8 *)(puVar5 + 0x48) = uVar14;
              *(undefined8 *)(unaff_x22 + 0x130) = 0x101b9d920;
              *(undefined **)(unaff_x22 + 0x138) = puVar5;
              *(undefined **)(unaff_x22 + 0x110) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x118) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x120) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x128) = &UNK_1104502c0;
              lVar19 = unaff_x22 + 0x110;
              func_0x000107c60bc4(lVar19);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
              func_0x000107c61434(uVar14);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar18);
              func_0x000108ec0f10(uVar13,uVar10,lVar19);
              func_0x000107c60bd0(lVar19);
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar15);
              puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
              lVar19 = *(long *)(unaff_x22 + 0x330);
              if (*(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10) == 0) {
                func_0x000107c61170();
                uVar15 = *(undefined8 *)(unaff_x22 + 0x3a8);
                uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
                uVar18 = *(undefined8 *)(unaff_x22 + 0x370);
                func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x340));
                func_0x000107c6142c(uVar15);
                func_0x000107c6142c(uVar14);
                func_0x000107c61170(uVar18);
                goto LAB_101b98c90;
              }
              bVar3 = *(char *)(unaff_x22 + 0x3d0) == '\0';
              uVar14 = 0xe900000000000065;
              if (bVar3) {
                uVar14 = 0xed00006574616964;
              }
              uVar15 = 0x74616964656d6d69;
              if (bVar3) {
                uVar15 = 0x656d6d69206e6f6e;
              }
              *(undefined8 *)(unaff_x22 + 0x248) = 0;
              *(undefined8 *)(unaff_x22 + 0x250) = 0xe000000000000000;
              func_0x000107c602fc(0x10);
              func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x250));
              *(undefined8 *)(unaff_x22 + 0x238) = 0x656c756465686353;
              *(undefined8 *)(unaff_x22 + 0x240) = 0xea00000000002064;
              func_0x000107c5fb78(uVar15,uVar14);
              func_0x000107c6142c(uVar14);
              uVar14 = 0xe400000000000000;
              func_0x000107c5fb78(0x626f6a20);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x238);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x240);
              func_0x000107c5cab0();
              func_0x000107c61180();
              if (lVar19 == 0) {
                lVar17 = 0;
                uVar14 = 0;
              }
              else {
                lVar17 = lVar19;
                func_0x000107c5faec();
                func_0x000107c61170(lVar19);
              }
              uVar10 = *(undefined8 *)(unaff_x22 + 0x328);
              uVar13 = *(undefined8 *)(unaff_x22 + 800);
              lVar21 = *(long *)(unaff_x22 + 0x280);
              cVar2 = *(char *)(unaff_x22 + 0x3d0);
              puVar4 = &UNK_110450168;
              func_0x000107c613fc(&UNK_110450168,0x18,7);
              func_0x000107c61644(puVar4 + 0x10,lVar21);
              puVar5 = &UNK_1104502f8;
              func_0x000107c613fc(&UNK_1104502f8,0x50,7);
              *(undefined **)(puVar5 + 0x10) = puVar4;
              *(undefined8 *)(puVar5 + 0x18) = uVar18;
              *(undefined8 *)(puVar5 + 0x20) = uVar15;
              puVar5[0x28] = 0;
              *(undefined8 *)(puVar5 + 0x30) = 0;
              *(undefined8 *)(puVar5 + 0x38) = 0;
              *(long *)(puVar5 + 0x40) = lVar17;
              *(undefined8 *)(puVar5 + 0x48) = uVar14;
              *(undefined8 *)(unaff_x22 + 0x160) = 0x101b9d924;
              *(undefined **)(unaff_x22 + 0x168) = puVar5;
              *(undefined **)(unaff_x22 + 0x140) = PTR___NSConcreteStackBlock_11034bd00;
              *(undefined8 *)(unaff_x22 + 0x148) = 0x42000000;
              *(undefined **)(unaff_x22 + 0x150) = &UNK_100288f10;
              *(undefined **)(unaff_x22 + 0x158) = &UNK_110450310;
              lVar19 = unaff_x22 + 0x140;
              func_0x000107c60bc4(lVar19);
              uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
              func_0x000107c61434(uVar14);
              func_0x000107c61434(uVar15);
              func_0x000107c61574(uVar18);
              func_0x000108ec0f10(uVar13,uVar10,lVar19);
              func_0x000107c60bd0(lVar19);
              func_0x000107c6142c(uVar14);
              func_0x000107c6142c(uVar15);
              plVar9 = (long *)(lVar21 + 0x48);
              func_0x0001000a8868(plVar9,*(undefined8 *)(lVar21 + 0x60));
              lVar19 = *plVar9;
              if (cVar2 == '\x01') {
                plVar9 = (long *)0xe0;
                func_0x000107c615b8();
                *(long **)(unaff_x22 + 0x3b0) = plVar9;
                *plVar9 = unaff_x22;
                plVar9[1] = (long)FUN_101b9800c;
                plVar9[0x15] = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
                plVar9[0x16] = lVar19;
                UNRECOVERED_JUMPTABLE = FUN_101bae06c;
                goto LAB_107c615e0;
              }
              plVar9 = (long *)0xd0;
              UNRECOVERED_JUMPTABLE = (code *)0x101bae62c;
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x3c0) = plVar9;
              *plVar9 = unaff_x22;
              plVar9[1] = (long)FUN_101b99514;
              goto LAB_101b98c2c;
            }
            func_0x000107c6142c(uVar11);
            uVar11 = *(ulong *)(unaff_x22 + 0x308);
          }
          lVar19 = *(long *)(unaff_x22 + 0x280);
          func_0x000107c6142c(uVar11);
          plVar9 = (long *)(lVar19 + 0x20);
          func_0x0001000a8868(plVar9,*(undefined8 *)(lVar19 + 0x38));
          lVar19 = *plVar9;
          plVar9 = (long *)0x550;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x348) = plVar9;
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_101b954b4;
          plVar9[99] = lVar19;
          *(undefined1 *)((long)plVar9 + 0x542) = 0;
          plVar9[0x62] = lVar21;
          plVar9[0x61] = uVar6;
          UNRECOVERED_JUMPTABLE = FUN_101b9e2f4;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,0,0);
          return;
        }
        uVar14 = *(undefined8 *)(unaff_x22 + 0x290);
        func_0x000107c6142c(uVar11);
        func_0x000107c61170(uVar6);
        func_0x000107c61574(uVar14);
      }
LAB_101b98c90:
      uVar16 = *(ulong *)(unaff_x22 + 0x338);
    } while (uVar16 != *(ulong *)(unaff_x22 + 0x318));
  }
  lVar19 = *(long *)(unaff_x22 + 0x310);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x308));
  func_0x000107c6142c(uVar18);
  func_0x000107c61574(uVar15);
  if (lVar19 != 0) {
    uVar14 = uVar18;
  }
  func_0x000107c6142c(uVar14);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101b98c2c:
                    /* WARNING: Could not recover jumptable at 0x000101b98c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101b99514; end: 101b9956f;  */

void FUN_101b99514(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3c0));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x101b9d948;
  }
  else {
    pcVar1 = FUN_101b99570;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}


