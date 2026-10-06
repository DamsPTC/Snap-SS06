/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10927e618; end: 10927e72b;  */

/* WARNING: Removing unreachable block (ram,0x00010927773c) */

void FUN_10927e618(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  
  FUN_10927e564();
  uVar3 = param_4;
  func_0x000107c2abd4(param_4,param_3);
  if (((uint)uVar3 >> 7 & 1) != 0) {
    FUN_10927761c(param_3,param_4);
    uVar3 = param_3;
    func_0x000107c2abd4(param_3,param_2);
    if (((uint)uVar3 >> 7 & 1) != 0) {
      FUN_10927761c(param_2,param_3);
      puVar4 = param_2;
      func_0x000107c2abd4(param_2,param_1);
      if (((uint)puVar4 >> 7 & 1) != 0) {
        FUN_10927761c(param_1,param_2);
      }
    }
  }
  uVar3 = param_5;
  func_0x000107c2abd4(param_5,param_4);
  if (((uint)uVar3 >> 7 & 1) != 0) {
    FUN_10927761c(param_4,param_5);
    uVar3 = param_4;
    func_0x000107c2abd4(param_4,param_3);
    if (((uint)uVar3 >> 7 & 1) != 0) {
      FUN_10927761c(param_3,param_4);
      uVar3 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      if (((uint)uVar3 >> 7 & 1) != 0) {
        FUN_10927761c(param_2,param_3);
        puVar4 = param_2;
        func_0x000107c2abd4(param_2,param_1);
        if (((uint)puVar4 >> 7 & 1) != 0) {
          uVar12 = param_1[1];
          uVar11 = *param_1;
          uVar3 = param_1[2];
          uVar1 = param_1[3];
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          uVar2 = *(undefined4 *)(param_1 + 4);
          puVar6 = param_1 + 5;
          uVar10 = param_1[6];
          uVar8 = *puVar6;
          uStack_68 = 0;
          uVar7 = param_1[7];
          *puVar6 = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar5 = param_2[2];
          uVar9 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar9;
          param_1[2] = uVar5;
          *(undefined1 *)((long)param_2 + 0x17) = 0;
          *(undefined1 *)param_2 = 0;
          uVar5 = param_2[3];
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
          param_1[3] = uVar5;
          uStack_78 = uVar8;
          FUN_109241da0(puVar6);
          puVar4 = param_2 + 5;
          uVar5 = *puVar4;
          param_1[6] = param_2[6];
          *puVar6 = uVar5;
          param_1[7] = param_2[7];
          *puVar4 = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            __ZdlPv(*param_2);
          }
          param_2[1] = uVar12;
          *param_2 = uVar11;
          param_2[2] = uVar3;
          param_2[3] = uVar1;
          *(undefined4 *)(param_2 + 4) = uVar2;
          FUN_109241da0(puVar4);
          param_2[6] = uVar10;
          param_2[5] = uVar8;
          param_2[7] = uVar7;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_78 = 0;
          puStack_58 = &uStack_78;
          func_0x00010922df48(&puStack_58);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10927e72c; end: 10927f5e7;  */

bool FUN_10927e72c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_68;
  
  uVar4 = (long)param_2 - (long)param_1 >> 6;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_10927e7dc:
      FUN_10927e564(param_1,param_1 + 8,param_1 + 0x10);
      if (param_1 + 0x18 == param_2) {
        return true;
      }
      lVar8 = 0;
      iVar9 = 0;
      puVar3 = param_1 + 0x18;
      puVar7 = param_1 + 0x10;
      do {
        puVar6 = puVar3;
        puVar3 = puVar6;
        func_0x000107c2abd4(puVar6,puVar7);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uStack_a0 = puVar6[2];
          uStack_98 = puVar6[3];
          uStack_a8 = puVar6[1];
          uStack_b0 = *puVar6;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          uStack_90 = (undefined4)puVar6[4];
          uStack_80 = puVar6[6];
          uStack_88 = puVar6[5];
          uStack_78 = puVar6[7];
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          lVar1 = lVar8;
          do {
            lVar5 = lVar1;
            if (*(char *)((long)param_1 + lVar5 + 0xd7) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar5 + 0xc0));
            }
            *(undefined8 *)((long)param_1 + lVar5 + 200) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x88);
            *(undefined8 *)((long)param_1 + lVar5 + 0xc0) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x80);
            *(undefined1 *)((long)param_1 + lVar5 + 0x97) = 0;
            *(undefined1 *)((long)param_1 + lVar5 + 0x80) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0xd0) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x90);
            *(undefined8 *)((long)param_1 + lVar5 + 0xd8) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x98);
            *(undefined4 *)((long)param_1 + lVar5 + 0xe0) =
                 *(undefined4 *)((long)param_1 + lVar5 + 0xa0);
            FUN_109241da0((long)param_1 + lVar5 + 0xe8);
            *(undefined8 *)((long)param_1 + lVar5 + 0xf0) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0xb0);
            *(undefined8 *)((long)param_1 + lVar5 + 0xe8) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0xa8);
            *(undefined8 *)((long)param_1 + lVar5 + 0xf8) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0xb8);
            *(undefined8 *)((long)param_1 + lVar5 + 0xb0) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0xb8) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0xa8) = 0;
            puVar3 = param_1;
            if (lVar5 == -0x80) goto LAB_10927e8e4;
            uVar2 = (uint)&uStack_b0;
            func_0x000107c2abd4(&uStack_b0,(long)param_1 + lVar5 + 0x40);
            lVar1 = lVar5 + -0x40;
          } while ((uVar2 >> 7 & 1) != 0);
          puVar3 = (ulong *)((long)param_1 + lVar5 + 0x80);
LAB_10927e8e4:
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            __ZdlPv(*puVar3);
          }
          puVar3[1] = uStack_a8;
          *puVar3 = uStack_b0;
          puVar3[2] = uStack_a0;
          uStack_a0 = uStack_a0 & 0xffffffffffffff;
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          *(ulong *)((long)param_1 + lVar5 + 0x98) = uStack_98;
          *(undefined4 *)((long)param_1 + lVar5 + 0xa0) = uStack_90;
          FUN_109241da0((long)param_1 + lVar5 + 0xa8);
          *(ulong *)((long)param_1 + lVar5 + 0xa8) = uStack_88;
          puVar3[7] = uStack_78;
          puVar3[6] = uStack_80;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_88 = 0;
          puStack_68 = &uStack_88;
          func_0x00010922df48(&puStack_68);
          if ((long)uStack_a0 < 0) {
            __ZdlPv(uStack_b0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 8 == param_2;
          }
        }
        lVar8 = lVar8 + 0x40;
        puVar3 = puVar6 + 8;
        puVar7 = puVar6;
        if (puVar6 + 8 == param_2) {
          return true;
        }
      } while( true );
    }
    param_2 = param_2 + -8;
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_10927e564(param_1,param_1 + 8,param_2 + -8);
      return true;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        FUN_10927e618(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
        return true;
      }
      goto LAB_10927e7dc;
    }
    param_2 = param_2 + -8;
    FUN_10927e564(param_1,param_1 + 8,param_1 + 0x10);
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1 + 0x10);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927761c(param_1 + 0x10,param_2);
    puVar3 = param_1 + 0x10;
    func_0x000107c2abd4(puVar3,param_1 + 8);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927761c(param_1 + 8,param_1 + 0x10);
    puVar3 = param_1 + 8;
    func_0x000107c2abd4(puVar3,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 8;
  }
  FUN_10927761c(param_1,param_2);
  return true;
}



/* Entry: 10927f5e8; end: 10927f69b;  */

void FUN_10927f5e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar12;
  
  puVar7 = param_2 + 2;
  puVar9 = param_3;
  func_0x000107c2abd4(puVar7,param_1 + 2);
  puVar8 = param_3 + 2;
  func_0x000107c2abd4(puVar8,param_2 + 2);
  if (((uint)puVar7 >> 7 & 1) == 0) {
    if ((char)puVar8 < '\0') {
      FUN_1092759e0(param_2,param_3);
      puVar7 = param_2 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      param_3 = param_2;
      if (((uint)puVar7 >> 7 & 1) != 0) goto code_r0x0001092759e0;
    }
    return;
  }
  if (-1 < (char)puVar8) {
    FUN_1092759e0(param_1,param_2);
    puVar7 = param_3 + 2;
    func_0x000107c2abd4(puVar7,param_2 + 2);
    param_1 = param_2;
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return;
    }
  }
code_r0x0001092759e0:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    uVar11 = *(undefined8 *)(param_1 + 8);
    *param_1 = *param_3;
    uVar12 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 4) = uVar12;
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(undefined1 *)((long)param_3 + 0x1f) = 0;
    *(undefined1 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *param_3 = uVar2;
    puVar8 = param_3;
    puVar7 = puVar9;
    if (*(char *)((long)param_3 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_3 + 2);
      __ZdlPv();
      puVar7 = puVar9;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_3 + 2) = uVar1;
    *(undefined8 *)(param_3 + 4) = uVar10;
    *(undefined8 *)((long)param_3 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_3 + 0x1f) = bVar3;
    *(undefined8 *)(param_3 + 8) = uVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
    *(ulong *)((long)register0x00000008 + -0x78) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x68) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x109275ab0;
    puVar5 = puVar8 + 2;
    puVar9 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_1092759e0(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x000109275b38:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_1092759e0(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x000109275b38;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = puVar7;
  } while( true );
}



/* Entry: 10927f69c; end: 10927f7af;  */

void FUN_10927f69c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  
  puVar10 = param_3;
  FUN_10927f5e8();
  lVar7 = param_4 + 8;
  func_0x000107c2abd4(lVar7,param_3 + 2);
  if (((uint)lVar7 >> 7 & 1) != 0) {
    FUN_1092759e0(param_3,param_4);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    if (((uint)puVar8 >> 7 & 1) != 0) {
      FUN_1092759e0(param_2,param_3);
      puVar8 = param_2 + 2;
      func_0x000107c2abd4(puVar8,param_1 + 2);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        FUN_1092759e0(param_1,param_2);
      }
    }
  }
  lVar7 = param_5 + 8;
  func_0x000107c2abd4(lVar7,param_4 + 8);
  if (((uint)lVar7 >> 7 & 1) != 0) {
    FUN_1092759e0(param_4,param_5);
    lVar7 = param_4 + 8;
    func_0x000107c2abd4(lVar7,param_3 + 2);
    if (((uint)lVar7 >> 7 & 1) != 0) {
      FUN_1092759e0(param_3,param_4);
      puVar8 = param_3 + 2;
      func_0x000107c2abd4(puVar8,param_2 + 2);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        FUN_1092759e0(param_2,param_3);
        puVar8 = param_2 + 2;
        func_0x000107c2abd4(puVar8,param_1 + 2);
        if (((uint)puVar8 >> 7 & 1) != 0) {
          do {
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar2 = *param_1;
            uVar1 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)((long)register0x00000008 + -0x41) =
                 *(undefined8 *)((long)param_1 + 0x17);
            bVar3 = *(byte *)((long)param_1 + 0x1f);
            *(undefined8 *)(param_1 + 4) = 0;
            *(undefined8 *)(param_1 + 6) = 0;
            *(undefined8 *)(param_1 + 2) = 0;
            uVar12 = *(undefined8 *)(param_1 + 8);
            *param_1 = *param_2;
            uVar13 = *(undefined8 *)(param_2 + 4);
            uVar11 = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
            *(undefined8 *)(param_1 + 4) = uVar13;
            *(undefined8 *)(param_1 + 2) = uVar11;
            *(undefined1 *)((long)param_2 + 0x1f) = 0;
            *(undefined1 *)(param_2 + 2) = 0;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
            *param_2 = uVar2;
            puVar9 = param_2;
            puVar8 = puVar10;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              param_1 = *(undefined4 **)(param_2 + 2);
              __ZdlPv();
              puVar8 = puVar10;
            }
            uVar11 = *(undefined8 *)((long)register0x00000008 + -0x48);
            *(undefined8 *)(param_2 + 2) = uVar1;
            *(undefined8 *)(param_2 + 4) = uVar11;
            *(undefined8 *)((long)param_2 + 0x17) =
                 *(undefined8 *)((long)register0x00000008 + -0x41);
            *(byte *)((long)param_2 + 0x1f) = bVar3;
            *(undefined8 *)(param_2 + 8) = uVar12;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x38)) {
              return;
            }
            ___stack_chk_fail();
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar12;
            *(ulong *)((long)register0x00000008 + -0x78) = (ulong)bVar3;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
            *(undefined4 **)((long)register0x00000008 + -0x68) = param_2;
            *(undefined1 **)((long)register0x00000008 + -0x60) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0x109275ab0;
            puVar5 = puVar9 + 2;
            puVar10 = puVar8;
            func_0x000107c2abd4(puVar5,param_1 + 2);
            puVar6 = puVar8 + 2;
            func_0x000107c2abd4(puVar6,puVar9 + 2);
            if (((uint)puVar5 >> 7 & 1) == 0) {
              if (-1 < (char)puVar6) {
                return;
              }
              FUN_1092759e0(puVar9,puVar8);
              puVar8 = puVar9 + 2;
              func_0x000107c2abd4(puVar8,param_1 + 2);
              uVar4 = (uint)puVar8;
              puVar8 = puVar9;
joined_r0x000109275b38:
              if ((uVar4 >> 7 & 1) == 0) {
                return;
              }
            }
            else if (-1 < (char)puVar6) {
              FUN_1092759e0(param_1,puVar9);
              puVar5 = puVar8 + 2;
              func_0x000107c2abd4(puVar5,puVar9 + 2);
              uVar4 = (uint)puVar5;
              param_1 = puVar9;
              goto joined_r0x000109275b38;
            }
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
            unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
            unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
            param_2 = puVar8;
          } while( true );
        }
      }
    }
  }
  return;
}



/* Entry: 10927f7b0; end: 10927fa1f;  */

bool FUN_10927f7b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_10927f864:
      FUN_10927f5e8(param_1,param_1 + 10,param_1 + 0x14);
      if (param_1 + 0x1e == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x14;
      puVar8 = param_1 + 0x1e;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 4);
          uStack_70 = *(ulong *)(puVar8 + 2);
          uStack_60 = *(ulong *)(puVar8 + 6);
          uStack_58 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x78) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x50);
            if (*(char *)((long)param_1 + lVar7 + 0x97) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x80));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x60);
            *(undefined8 *)((long)param_1 + lVar7 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x58);
            *(undefined1 *)((long)param_1 + lVar7 + 0x6f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x58) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            puVar5 = param_1;
            if (lVar7 == -0x50) goto LAB_10927f930;
            puVar4 = &uStack_70;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x30);
            lVar2 = lVar7 + -0x28;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x50);
LAB_10927f930:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x58));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x60) = uStack_68;
          *(ulong *)((long)param_1 + lVar7 + 0x58) = uStack_70;
          *(ulong *)((long)param_1 + lVar7 + 0x68) = uStack_60;
          uStack_60 = uStack_60 & 0xffffffffffffff;
          uStack_70 = uStack_70 & 0xffffffffffffff00;
          *(undefined8 *)(puVar5 + 8) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 10 == param_2;
          }
        }
        puVar3 = puVar8 + 10;
        lVar9 = lVar9 + 0x28;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -10;
  }
  else {
    if (uVar6 == 3) {
      FUN_10927f5e8(param_1,param_1 + 10,param_2 + -10);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_10927f69c(param_1,param_1 + 10,param_1 + 0x14,param_1 + 0x1e,param_2 + -10);
        return true;
      }
      goto LAB_10927f864;
    }
    FUN_10927f5e8(param_1,param_1 + 10,param_1 + 0x14);
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 0x16);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_1092759e0(param_1 + 0x14,param_2 + -10);
    puVar5 = param_1 + 0x16;
    func_0x000107c2abd4(puVar5,param_1 + 0xc);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_1092759e0(param_1 + 10,param_1 + 0x14);
    puVar5 = param_1 + 0xc;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 10;
  }
  FUN_1092759e0(param_1,param_2);
  return true;
}



/* Entry: 10927fa20; end: 1092805eb;  */

/* WARNING: Removing unreachable block (ram,0x000109280520) */
/* WARNING: Removing unreachable block (ram,0x000109280344) */
/* WARNING: Removing unreachable block (ram,0x00010927fe74) */
/* WARNING: Removing unreachable block (ram,0x00010927fcb4) */
/* WARNING: Removing unreachable block (ram,0x000109280574) */
/* WARNING: Removing unreachable block (ram,0x00010927fea4) */
/* WARNING: Removing unreachable block (ram,0x00010927fce4) */

void FUN_10927fa20(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong **ppuVar3;
  bool bVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong *unaff_x21;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  code *pcStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined4 auStack_a0 [2];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar22 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_1;
  puVar18 = param_3;
  puVar12 = param_2;
  do {
    puStack_a8 = puVar12 + -5;
    puStack_b0 = puVar12 + -10;
    puStack_b8 = puVar12 + -0xf;
    puStack_c0 = puVar12 + -4;
    puVar6 = puVar10;
LAB_10927fa80:
    puVar10 = puVar6;
    uVar19 = (long)puVar12 - (long)puVar10;
    uVar21 = ((long)uVar19 >> 3) * -0x3333333333333333;
    if (uVar21 - 2 == 0 || (long)uVar21 < 2) {
      if (uVar21 < 2) goto LAB_1092805b0;
      if (uVar21 == 2) {
        param_2 = puVar10 + 1;
        param_1 = puStack_c0;
        func_0x000107c2abd4();
        puVar12 = puStack_a8;
        if (((uint)param_1 >> 7 & 1) != 0) {
LAB_10927fef0:
          param_2 = puVar12;
          param_1 = puVar10;
          FUN_10927bf2c();
        }
        goto LAB_1092805b0;
      }
    }
    else {
      if (uVar21 == 3) {
        param_2 = puVar10 + 5;
        param_1 = puVar10;
        param_3 = puStack_a8;
        FUN_1092805ec();
        goto LAB_1092805b0;
      }
      if (uVar21 == 4) {
        param_3 = puVar10 + 10;
        FUN_1092805ec(puVar10,puVar10 + 5);
        param_2 = puVar10 + 0xb;
        param_1 = puStack_c0;
        func_0x000107c2abd4();
        if (((uint)param_1 >> 7 & 1) != 0) {
          FUN_10927bf2c(puVar10 + 10,puStack_a8);
          param_1 = puVar10 + 0xb;
          param_2 = puVar10 + 6;
          func_0x000107c2abd4();
          if (((uint)param_1 >> 7 & 1) != 0) {
            FUN_10927bf2c(puVar10 + 5,puVar10 + 10);
            param_1 = puVar10 + 6;
            param_2 = puVar10 + 1;
            func_0x000107c2abd4();
            if (((uint)param_1 >> 7 & 1) != 0) {
              puVar12 = puVar10 + 5;
              goto LAB_10927fef0;
            }
          }
        }
        goto LAB_1092805b0;
      }
      if (uVar21 == 5) {
        param_2 = puVar10 + 5;
        param_3 = puVar10 + 10;
        param_1 = puVar10;
        FUN_1092806a0();
        goto LAB_1092805b0;
      }
    }
    if ((long)uVar19 < 0x3c0) {
      if ((param_4 & 1) == 0) {
        if ((puVar10 != puVar12) && (puVar10 + 5 != puVar12)) {
          unaff_x20 = (ulong *)auStack_a0;
          unaff_x21 = puVar10 + 9;
          puVar6 = puVar10 + 5;
          puVar18 = puVar10;
          do {
            puVar10 = puVar6;
            param_1 = puVar18 + 6;
            param_2 = puVar18 + 1;
            func_0x000107c2abd4();
            if (((uint)param_1 >> 7 & 1) != 0) {
              auStack_a0[0] = (undefined4)*puVar10;
              uStack_90 = puVar18[7];
              uStack_98 = puVar18[6];
              uStack_88 = puVar18[8];
              uStack_80 = puVar18[9];
              puVar18[6] = 0;
              puVar18[7] = 0;
              puVar18[8] = 0;
              puVar18 = unaff_x21;
              do {
                puVar6 = puVar18;
                *(int *)(puVar6 + -4) = (int)puVar6[-9];
                puVar6[-2] = puVar6[-7];
                puVar6[-3] = puVar6[-8];
                puVar6[-1] = puVar6[-6];
                *(undefined1 *)((long)puVar6 - 0x29) = 0;
                *(undefined1 *)(puVar6 + -8) = 0;
                puVar18 = puVar6 + -5;
                *puVar6 = *puVar18;
                param_2 = puVar6 + -0xd;
                param_1 = &uStack_98;
                func_0x000107c2abd4();
              } while (((uint)param_1 >> 7 & 1) != 0);
              *(undefined4 *)(puVar6 + -9) = auStack_a0[0];
              puVar6[-6] = uStack_88;
              puVar6[-7] = uStack_90;
              puVar6[-8] = uStack_98;
              uStack_88 = uStack_88 & 0xffffffffffffff;
              uStack_98 = uStack_98 & 0xffffffffffffff00;
              *puVar18 = uStack_80;
            }
            unaff_x21 = unaff_x21 + 5;
            puVar6 = puVar10 + 5;
            puVar18 = puVar10;
          } while (puVar10 + 5 != puVar12);
        }
        goto LAB_1092805b0;
      }
      if ((puVar10 == puVar12) || (puVar10 + 5 == puVar12)) goto LAB_1092805b0;
      unaff_x20 = (ulong *)0x0;
      puVar6 = puVar10 + 5;
      puVar8 = puVar10;
      break;
    }
    if (puVar18 == (ulong *)0x0) {
      if (puVar10 == puVar12) goto LAB_1092805b0;
      uVar16 = uVar21 - 2 >> 1;
      uVar17 = uVar16;
      puStack_a8 = puVar12;
      goto LAB_109280098;
    }
    puVar6 = puVar10 + (uVar21 >> 1) * 5;
    if (uVar19 < 0x1401) {
      param_3 = puStack_a8;
      FUN_1092805ec(puVar6,puVar10);
    }
    else {
      FUN_1092805ec(puVar10,puVar6,puStack_a8);
      FUN_1092805ec(puVar10 + 5,puVar6 + -5,puStack_b0);
      FUN_1092805ec(puVar10 + 10,puVar6 + 5,puStack_b8);
      param_3 = puVar6 + 5;
      FUN_1092805ec(puVar6 + -5,puVar6);
      FUN_10927c1c4(puVar10,puVar6);
    }
    puVar18 = (ulong *)((long)puVar18 - 1);
    if ((param_4 & 1) == 0) {
      puVar6 = puVar10 + -4;
      func_0x000107c2abd4(puVar6,puVar10 + 1);
      if (((uint)puVar6 >> 7 & 1) != 0) goto LAB_10927fb68;
      auStack_a0[0] = (undefined4)*puVar10;
      uStack_90 = puVar10[2];
      uStack_98 = puVar10[1];
      uStack_88 = puVar10[3];
      uStack_80 = puVar10[4];
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[1] = 0;
      puVar11 = &uStack_98;
      puVar8 = puStack_c0;
      func_0x000107c2abd4();
      puVar13 = puVar10;
      if (((uint)puVar11 >> 7 & 1) == 0) {
        puVar13 = puVar10 + 6;
        do {
          puVar6 = puVar13 + -1;
          if (puVar12 <= puVar6) break;
          puVar11 = &uStack_98;
          puVar8 = puVar13;
          func_0x000107c2abd4();
          puVar13 = puVar13 + 5;
        } while (((uint)puVar11 >> 7 & 1) == 0);
      }
      else {
        do {
          puVar6 = puVar13 + 5;
          puVar11 = &uStack_98;
          puVar8 = puVar13 + 6;
          func_0x000107c2abd4();
          puVar13 = puVar6;
        } while (((uint)puVar11 >> 7 & 1) == 0);
      }
      puVar13 = puVar12;
      puVar20 = puVar12;
      if (puVar6 < puVar12) {
        do {
          puVar20 = puVar13 + -5;
          puVar8 = puVar13 + -4;
          puVar11 = &uStack_98;
          func_0x000107c2abd4();
          puVar13 = puVar20;
        } while (((uint)puVar11 >> 7 & 1) != 0);
      }
      while (puVar6 < puVar20) {
        FUN_10927bf2c(puVar6,puVar20);
        puVar8 = puVar6;
        do {
          puVar6 = puVar8 + 5;
          puVar11 = &uStack_98;
          func_0x000107c2abd4(puVar11,puVar8 + 6);
          puVar8 = puVar6;
        } while (((uint)puVar11 >> 7 & 1) == 0);
        do {
          puVar8 = puVar20 + -4;
          puVar20 = puVar20 + -5;
          puVar11 = &uStack_98;
          func_0x000107c2abd4();
        } while (((uint)puVar11 >> 7 & 1) != 0);
      }
      if (puVar6 + -5 != puVar10) {
        *(int *)puVar10 = (int)puVar6[-5];
        if (*(char *)((long)puVar10 + 0x1f) < '\0') {
          puVar11 = (ulong *)puVar10[1];
          __ZdlPv();
        }
        uVar21 = puVar6[-3];
        uVar19 = puVar6[-4];
        puVar10[3] = puVar6[-2];
        puVar10[2] = uVar21;
        puVar10[1] = uVar19;
        *(undefined1 *)((long)puVar6 + -9) = 0;
        *(undefined1 *)(puVar6 + -4) = 0;
        puVar10[4] = puVar6[-1];
      }
      puVar10 = puVar11;
      *(undefined4 *)(puVar6 + -5) = auStack_a0[0];
      puVar6[-2] = uStack_88;
      puVar6[-3] = uStack_90;
      puVar6[-4] = uStack_98;
      uStack_88 = uStack_88 & 0xffffffffffffff;
      uStack_98 = uStack_98 & 0xffffffffffffff00;
      puVar6[-1] = uStack_80;
      goto LAB_10927fd30;
    }
LAB_10927fb68:
    lVar14 = 0;
    auStack_a0[0] = (undefined4)*puVar10;
    uStack_90 = puVar10[2];
    uStack_98 = puVar10[1];
    uStack_88 = puVar10[3];
    uStack_80 = puVar10[4];
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[1] = 0;
    do {
      lVar7 = (long)puVar10 + lVar14 + 0x30;
      func_0x000107c2abd4(lVar7,&uStack_98);
      lVar14 = lVar14 + 0x28;
    } while (((uint)lVar7 >> 7 & 1) != 0);
    puVar11 = (ulong *)((long)puVar10 + lVar14);
    puVar6 = puVar12;
    if (lVar14 == 0x28) {
      do {
        puVar13 = puVar6;
        if (puVar6 <= puVar11) break;
        puVar13 = puVar6 + -5;
        puVar8 = puVar6 + -4;
        func_0x000107c2abd4(puVar8,&uStack_98);
        puVar6 = puVar13;
      } while (((uint)puVar8 >> 7 & 1) == 0);
    }
    else {
      do {
        puVar13 = puVar6 + -5;
        puVar8 = puVar6 + -4;
        func_0x000107c2abd4(puVar8,&uStack_98);
        puVar6 = puVar13;
      } while (((uint)puVar8 >> 7 & 1) == 0);
    }
    puVar8 = puVar11;
    puVar6 = puVar11;
    puVar20 = puVar13;
    if (puVar11 < puVar13) {
      do {
        FUN_10927bf2c(puVar8,puVar20);
        do {
          puVar6 = puVar8 + 5;
          puVar9 = puVar8 + 6;
          func_0x000107c2abd4(puVar9,&uStack_98);
          puVar8 = puVar6;
        } while (((uint)puVar9 >> 7 & 1) != 0);
        do {
          puVar9 = puVar20 + -4;
          puVar20 = puVar20 + -5;
          func_0x000107c2abd4(puVar9,&uStack_98);
        } while (((uint)puVar9 >> 7 & 1) == 0);
      } while (puVar6 < puVar20);
    }
    puVar8 = puVar6 + -5;
    if (puVar8 != puVar10) {
      *(int *)puVar10 = (int)*puVar8;
      if (*(char *)((long)puVar10 + 0x1f) < '\0') {
        __ZdlPv(puVar10[1]);
      }
      uVar21 = puVar6[-3];
      uVar19 = puVar6[-4];
      puVar10[3] = puVar6[-2];
      puVar10[2] = uVar21;
      puVar10[1] = uVar19;
      *(undefined1 *)((long)puVar6 - 9) = 0;
      *(undefined1 *)(puVar6 + -4) = 0;
      puVar10[4] = puVar6[-1];
    }
    *(undefined4 *)(puVar6 + -5) = auStack_a0[0];
    unaff_x20 = puVar6 + -4;
    puVar6[-2] = uStack_88;
    puVar6[-3] = uStack_90;
    *unaff_x20 = uStack_98;
    uStack_88 = uStack_88 & 0xffffffffffffff;
    uStack_98 = uStack_98 & 0xffffffffffffff00;
    puVar6[-1] = uStack_80;
    unaff_x21 = puVar12;
    if (puVar11 < puVar13) goto LAB_10927fd1c;
    puVar11 = puVar10;
    FUN_1092807b4(puVar10,puVar8);
    param_1 = puVar6;
    param_2 = puVar12;
    FUN_1092807b4();
    if ((int)param_1 == 0) goto code_r0x00010927fd18;
    puVar12 = puVar8;
    if (((ulong)puVar11 & 1) != 0) goto LAB_1092805b0;
  } while( true );
  do {
    puVar18 = puVar6;
    param_1 = puVar8 + 6;
    param_2 = puVar8 + 1;
    func_0x000107c2abd4();
    if (((uint)param_1 >> 7 & 1) != 0) {
      auStack_a0[0] = (undefined4)*puVar18;
      uStack_90 = puVar8[7];
      uStack_98 = puVar8[6];
      uStack_88 = puVar8[8];
      uStack_80 = puVar8[9];
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar6 = unaff_x20;
      do {
        puVar8 = puVar6;
        puVar1 = (undefined4 *)((long)puVar10 + (long)puVar8);
        puVar1[10] = *puVar1;
        if (*(char *)((long)puVar1 + 0x47) < '\0') {
          param_1 = *(ulong **)(puVar1 + 0xc);
          __ZdlPv();
        }
        *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar1 + 2);
        *(undefined1 *)((long)puVar1 + 0x1f) = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 8);
        puVar6 = puVar10;
        if (puVar8 == (ulong *)0x0) goto LAB_109280034;
        param_2 = (ulong *)(((long)puVar10 + (long)puVar8) - 0x20);
        param_1 = &uStack_98;
        func_0x000107c2abd4();
        puVar6 = puVar8 + -5;
      } while (((uint)param_1 >> 7 & 1) != 0);
      puVar6 = (ulong *)((long)puVar10 + (long)(puVar8 + -5) + 0x28);
LAB_109280034:
      *(undefined4 *)puVar6 = auStack_a0[0];
      lVar14 = (long)puVar10 + (long)puVar8;
      if (*(char *)((long)puVar6 + 0x1f) < '\0') {
        param_1 = *(ulong **)(lVar14 + 8);
        __ZdlPv();
      }
      *(ulong *)(lVar14 + 0x18) = uStack_88;
      *(ulong *)(lVar14 + 0x10) = uStack_90;
      *(ulong *)(lVar14 + 8) = uStack_98;
      puVar6[4] = uStack_80;
    }
    unaff_x20 = unaff_x20 + 5;
    puVar6 = puVar18 + 5;
    unaff_x21 = (ulong *)auStack_a0;
    puVar8 = puVar18;
  } while (puVar18 + 5 != puVar12);
  goto LAB_1092805b0;
code_r0x00010927fd18:
  if (((ulong)puVar11 & 1) == 0) {
LAB_10927fd1c:
    param_3 = puVar18;
    FUN_10927fa20();
LAB_10927fd30:
    param_4 = 0;
    param_1 = puVar10;
    param_2 = puVar8;
  }
  goto LAB_10927fa80;
LAB_109280098:
  do {
    if ((long)uVar17 <= (long)uVar16) {
      uVar24 = uVar17 << 1 | 1;
      puVar18 = puVar10 + uVar24 * 5;
      uVar23 = uVar17 * 2 + 2;
      uVar15 = uVar24;
      if ((long)uVar23 < (long)uVar21) {
        puVar12 = puVar18 + 1;
        func_0x000107c2abd4(puVar12,puVar18 + 6);
        bVar4 = -1 < (char)puVar12;
        lVar14 = 0x28;
        if (bVar4) {
          lVar14 = 0;
        }
        puVar18 = (ulong *)((long)puVar18 + lVar14);
        uVar15 = uVar23;
        if (bVar4) {
          uVar15 = uVar24;
        }
      }
      puVar12 = puVar10 + uVar17 * 5;
      param_1 = puVar18 + 1;
      param_2 = puVar12 + 1;
      func_0x000107c2abd4();
      if (((uint)param_1 >> 7 & 1) == 0) {
        auStack_a0[0] = (undefined4)*puVar12;
        uStack_90 = puVar12[2];
        uStack_98 = puVar12[1];
        uStack_88 = puVar12[3];
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[1] = 0;
        uStack_80 = puVar12[4];
        do {
          puVar6 = puVar18;
          *(int *)puVar12 = (int)*puVar6;
          if (*(char *)((long)puVar12 + 0x1f) < '\0') {
            param_1 = (ulong *)puVar12[1];
            __ZdlPv();
          }
          uVar24 = puVar6[2];
          uVar23 = puVar6[1];
          puVar12[3] = puVar6[3];
          puVar12[2] = uVar24;
          puVar12[1] = uVar23;
          *(undefined1 *)((long)puVar6 + 0x1f) = 0;
          *(undefined1 *)(puVar6 + 1) = 0;
          puVar12[4] = puVar6[4];
          if ((long)uVar16 < (long)uVar15) break;
          uVar24 = uVar15 << 1 | 1;
          puVar18 = puVar10 + uVar24 * 5;
          uVar23 = uVar15 * 2 + 2;
          uVar15 = uVar24;
          if ((long)uVar23 < (long)uVar21) {
            puVar12 = puVar18 + 1;
            func_0x000107c2abd4(puVar12,puVar18 + 6);
            bVar4 = -1 < (char)puVar12;
            lVar14 = 0x28;
            if (bVar4) {
              lVar14 = 0;
            }
            puVar18 = (ulong *)((long)puVar18 + lVar14);
            uVar15 = uVar23;
            if (bVar4) {
              uVar15 = uVar24;
            }
          }
          param_1 = puVar18 + 1;
          param_2 = &uStack_98;
          func_0x000107c2abd4();
          puVar12 = puVar6;
        } while (((uint)param_1 >> 7 & 1) == 0);
        *(undefined4 *)puVar6 = auStack_a0[0];
        if (*(char *)((long)puVar6 + 0x1f) < '\0') {
          param_1 = (ulong *)puVar6[1];
          __ZdlPv();
        }
        puVar6[3] = uStack_88;
        puVar6[2] = uStack_90;
        puVar6[1] = uStack_98;
        puVar6[4] = uStack_80;
      }
    }
    bVar4 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar4);
  puVar12 = (ulong *)((uVar19 >> 3) * -0x3333333333333333);
  puVar6 = puStack_a8;
  do {
    unaff_x20 = puVar6;
    uVar19 = 0;
    puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,(int)*puVar10);
    puStack_b0 = (ulong *)puVar10[1];
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0x17) >> 8);
    uStack_78 = (undefined7)puVar10[2];
    uStack_71 = (undefined1)(puVar10[2] >> 0x38);
    puStack_a8 = (ulong *)CONCAT44(puStack_a8._4_4_,(uint)*(byte *)((long)puVar10 + 0x1f));
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[1] = 0;
    puStack_b8 = (ulong *)puVar10[4];
    puVar18 = puVar10;
    do {
      unaff_x21 = puVar18 + uVar19 * 5;
      uVar17 = uVar19 << 1 | 1;
      uVar21 = uVar19 * 2 + 2;
      uVar19 = uVar17;
      puVar8 = unaff_x21 + 5;
      if ((long)uVar21 < (long)puVar12) {
        param_1 = unaff_x21 + 6;
        param_2 = unaff_x21 + 0xb;
        func_0x000107c2abd4();
        uVar19 = uVar21;
        puVar8 = unaff_x21 + 10;
        if (-1 < (char)param_1) {
          uVar19 = uVar17;
          puVar8 = unaff_x21 + 5;
        }
      }
      *(int *)puVar18 = (int)*puVar8;
      if (*(char *)((long)puVar18 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar18[1];
        __ZdlPv();
      }
      uVar17 = puVar8[2];
      uVar21 = puVar8[1];
      puVar18[3] = puVar8[3];
      puVar18[2] = uVar17;
      puVar18[1] = uVar21;
      *(undefined1 *)((long)puVar8 + 0x1f) = 0;
      *(undefined1 *)(puVar8 + 1) = 0;
      puVar18[4] = puVar8[4];
      puVar18 = puVar8;
    } while ((long)uVar19 <= (long)((long)puVar12 - 2U >> 1));
    puVar6 = unaff_x20 + -5;
    if (puVar8 == puVar6) {
      *(undefined4 *)puVar8 = puStack_c0._0_4_;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar8[1];
        __ZdlPv();
      }
      puVar8[1] = (ulong)puStack_b0;
      puVar8[2] = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar8 + 0x17) = CONCAT71(uStack_70,uStack_71);
      *(char *)((long)puVar8 + 0x1f) = (char)puStack_a8;
      puVar8[4] = (ulong)puStack_b8;
    }
    else {
      *(int *)puVar8 = (int)*puVar6;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar8[1];
        __ZdlPv();
      }
      uVar21 = unaff_x20[-3];
      uVar19 = unaff_x20[-4];
      puVar8[3] = unaff_x20[-2];
      puVar8[2] = uVar21;
      puVar8[1] = uVar19;
      *(undefined1 *)((long)unaff_x20 - 9) = 0;
      *(undefined1 *)(unaff_x20 + -4) = 0;
      puVar8[4] = unaff_x20[-1];
      *(undefined4 *)(unaff_x20 + -5) = puStack_c0._0_4_;
      unaff_x20[-4] = (ulong)puStack_b0;
      *(ulong *)((long)unaff_x20 - 0x11) = CONCAT71(uStack_70,uStack_71);
      unaff_x20[-3] = CONCAT17(uStack_71,uStack_78);
      *(char *)((long)unaff_x20 - 9) = (char)puStack_a8;
      unaff_x20[-1] = (ulong)puStack_b8;
      uVar19 = (long)puVar8 + (0x28 - (long)puVar10);
      if (0x28 < (long)uVar19) {
        puVar18 = (ulong *)((uVar19 >> 3) * -0x3333333333333333 - 2 >> 1);
        param_1 = puVar10 + (long)puVar18 * 5 + 1;
        param_2 = puVar8 + 1;
        func_0x000107c2abd4();
        unaff_x20 = puVar18;
        if (((uint)param_1 >> 7 & 1) != 0) {
          auStack_a0[0] = (undefined4)*puVar8;
          uStack_90 = puVar8[2];
          uStack_98 = puVar8[1];
          uStack_88 = puVar8[3];
          uStack_80 = puVar8[4];
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[1] = 0;
          puVar11 = puVar10 + (long)puVar18 * 5;
          do {
            unaff_x21 = puVar11;
            *(int *)puVar8 = (int)*unaff_x21;
            if (*(char *)((long)puVar8 + 0x1f) < '\0') {
              param_1 = (ulong *)puVar8[1];
              __ZdlPv();
            }
            uVar21 = unaff_x21[2];
            uVar19 = unaff_x21[1];
            puVar8[3] = unaff_x21[3];
            puVar8[2] = uVar21;
            puVar8[1] = uVar19;
            *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
            *(undefined1 *)(unaff_x21 + 1) = 0;
            puVar8[4] = unaff_x21[4];
            unaff_x20 = (ulong *)0x0;
            if (puVar18 == (ulong *)0x0) break;
            puVar18 = (ulong *)((long)puVar18 - 1U >> 1);
            param_1 = puVar10 + (long)puVar18 * 5 + 1;
            param_2 = &uStack_98;
            func_0x000107c2abd4();
            unaff_x20 = puVar18;
            puVar11 = puVar10 + (long)puVar18 * 5;
            puVar8 = unaff_x21;
          } while (((uint)param_1 >> 7 & 1) != 0);
          *(undefined4 *)unaff_x21 = auStack_a0[0];
          if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
            param_1 = (ulong *)unaff_x21[1];
            __ZdlPv();
          }
          unaff_x21[3] = uStack_88;
          unaff_x21[2] = uStack_90;
          unaff_x21[1] = uStack_98;
          unaff_x21[4] = uStack_80;
        }
      }
    }
    puVar18 = (ulong *)((long)puVar12 - 1);
    bVar4 = 2 < (long)puVar12;
    puVar12 = puVar18;
  } while (bVar4);
LAB_1092805b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_c8 = FUN_1092805ec;
  puVar12 = param_2 + 1;
  puVar8 = param_3;
  func_0x000107c2abd4(puVar12,param_1 + 1);
  puVar6 = param_3 + 1;
  func_0x000107c2abd4(puVar6,param_2 + 1);
  if (((uint)puVar12 >> 7 & 1) != 0) {
    ppuVar3 = &puStack_c0;
    if (-1 < (char)puVar6) {
      FUN_10927bf2c(param_1,param_2);
      puVar12 = param_3 + 1;
      func_0x000107c2abd4(puVar12,param_2 + 1);
      ppuVar3 = &puStack_c0;
      param_1 = param_2;
      if (((uint)puVar12 >> 7 & 1) == 0) {
        return;
      }
    }
code_r0x00010927bf2c:
    do {
      *(ulong **)((long)ppuVar3 + -0x30) = puVar18;
      *(ulong **)((long)ppuVar3 + -0x28) = unaff_x21;
      *(ulong **)((long)ppuVar3 + -0x20) = unaff_x20;
      *(ulong **)((long)ppuVar3 + -0x18) = puVar10;
      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar22;
      *(code **)((long)ppuVar3 + -8) = pcStack_c8;
      *(undefined8 *)((long)ppuVar3 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar21 = *param_1;
      uVar19 = param_1[1];
      *(ulong *)((long)ppuVar3 + -0x48) = param_1[2];
      *(undefined8 *)((long)ppuVar3 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
      bVar2 = *(byte *)((long)param_1 + 0x1f);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      uVar17 = param_1[4];
      *(int *)param_1 = (int)*param_3;
      uVar23 = param_3[2];
      uVar16 = param_3[1];
      param_1[3] = param_3[3];
      param_1[2] = uVar23;
      param_1[1] = uVar16;
      *(undefined1 *)((long)param_3 + 0x1f) = 0;
      *(undefined1 *)(param_3 + 1) = 0;
      param_1[4] = param_3[4];
      *(int *)param_3 = (int)uVar21;
      puVar18 = param_3;
      puVar12 = puVar8;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        param_1 = (ulong *)param_3[1];
        __ZdlPv();
        puVar12 = puVar8;
      }
      uVar21 = *(ulong *)((long)ppuVar3 + -0x48);
      param_3[1] = uVar19;
      param_3[2] = uVar21;
      *(undefined8 *)((long)param_3 + 0x17) = *(undefined8 *)((long)ppuVar3 + -0x41);
      *(byte *)((long)param_3 + 0x1f) = bVar2;
      param_3[4] = uVar17;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar3 + -0x38)) {
        return;
      }
      ___stack_chk_fail();
      *(ulong *)((long)ppuVar3 + -0x80) = uVar17;
      *(ulong *)((long)ppuVar3 + -0x78) = (ulong)bVar2;
      *(ulong *)((long)ppuVar3 + -0x70) = uVar19;
      *(ulong **)((long)ppuVar3 + -0x68) = param_3;
      *(undefined1 **)((long)ppuVar3 + -0x60) = (undefined1 *)((long)ppuVar3 + -0x10);
      *(undefined8 *)((long)ppuVar3 + -0x58) = 0x10927bffc;
      puVar10 = puVar18 + 1;
      puVar8 = puVar12;
      func_0x000107c2abd4(puVar10,param_1 + 1);
      puVar6 = puVar12 + 1;
      func_0x000107c2abd4(puVar6,puVar18 + 1);
      if (((uint)puVar10 >> 7 & 1) == 0) {
        if (-1 < (char)puVar6) {
          return;
        }
        FUN_10927bf2c(puVar18,puVar12);
        puVar10 = puVar18 + 1;
        func_0x000107c2abd4(puVar10,param_1 + 1);
        uVar5 = (uint)puVar10;
        puVar12 = puVar18;
joined_r0x00010927c084:
        if ((uVar5 >> 7 & 1) == 0) {
          return;
        }
      }
      else if (-1 < (char)puVar6) {
        FUN_10927bf2c(param_1,puVar18);
        puVar10 = puVar12 + 1;
        func_0x000107c2abd4(puVar10,puVar18 + 1);
        uVar5 = (uint)puVar10;
        param_1 = puVar18;
        goto joined_r0x00010927c084;
      }
      puVar22 = *(undefined1 **)((long)ppuVar3 + -0x60);
      pcStack_c8 = *(code **)((long)ppuVar3 + -0x58);
      unaff_x20 = *(ulong **)((long)ppuVar3 + -0x70);
      puVar10 = *(ulong **)((long)ppuVar3 + -0x68);
      puVar18 = *(ulong **)((long)ppuVar3 + -0x80);
      unaff_x21 = *(ulong **)((long)ppuVar3 + -0x78);
      ppuVar3 = (ulong **)((long)ppuVar3 + -0x50);
      param_3 = puVar12;
    } while( true );
  }
  if ((char)puVar6 < '\0') {
    FUN_10927bf2c(param_2,param_3);
    puVar12 = param_2 + 1;
    func_0x000107c2abd4(puVar12,param_1 + 1);
    ppuVar3 = &puStack_c0;
    param_3 = param_2;
    if (((uint)puVar12 >> 7 & 1) != 0) goto code_r0x00010927bf2c;
  }
  return;
}



/* Entry: 1092805ec; end: 10928069f;  */

void FUN_1092805ec(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar12;
  
  puVar7 = param_2 + 2;
  puVar9 = param_3;
  func_0x000107c2abd4(puVar7,param_1 + 2);
  puVar8 = param_3 + 2;
  func_0x000107c2abd4(puVar8,param_2 + 2);
  if (((uint)puVar7 >> 7 & 1) == 0) {
    if ((char)puVar8 < '\0') {
      FUN_10927bf2c(param_2,param_3);
      puVar7 = param_2 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      param_3 = param_2;
      if (((uint)puVar7 >> 7 & 1) != 0) goto code_r0x00010927bf2c;
    }
    return;
  }
  if (-1 < (char)puVar8) {
    FUN_10927bf2c(param_1,param_2);
    puVar7 = param_3 + 2;
    func_0x000107c2abd4(puVar7,param_2 + 2);
    param_1 = param_2;
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return;
    }
  }
code_r0x00010927bf2c:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    uVar11 = *(undefined8 *)(param_1 + 8);
    *param_1 = *param_3;
    uVar12 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 4) = uVar12;
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(undefined1 *)((long)param_3 + 0x1f) = 0;
    *(undefined1 *)(param_3 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
    *param_3 = uVar2;
    puVar8 = param_3;
    puVar7 = puVar9;
    if (*(char *)((long)param_3 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_3 + 2);
      __ZdlPv();
      puVar7 = puVar9;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_3 + 2) = uVar1;
    *(undefined8 *)(param_3 + 4) = uVar10;
    *(undefined8 *)((long)param_3 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_3 + 0x1f) = bVar3;
    *(undefined8 *)(param_3 + 8) = uVar11;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar11;
    *(ulong *)((long)register0x00000008 + -0x78) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x68) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10927bffc;
    puVar5 = puVar8 + 2;
    puVar9 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_10927bf2c(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x00010927c084:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_10927bf2c(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x00010927c084;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_3 = puVar7;
  } while( true );
}



/* Entry: 1092806a0; end: 1092807b3;  */

void FUN_1092806a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  
  puVar10 = param_3;
  FUN_1092805ec();
  lVar7 = param_4 + 8;
  func_0x000107c2abd4(lVar7,param_3 + 2);
  if (((uint)lVar7 >> 7 & 1) != 0) {
    FUN_10927bf2c(param_3,param_4);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    if (((uint)puVar8 >> 7 & 1) != 0) {
      FUN_10927bf2c(param_2,param_3);
      puVar8 = param_2 + 2;
      func_0x000107c2abd4(puVar8,param_1 + 2);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        FUN_10927bf2c(param_1,param_2);
      }
    }
  }
  lVar7 = param_5 + 8;
  func_0x000107c2abd4(lVar7,param_4 + 8);
  if (((uint)lVar7 >> 7 & 1) != 0) {
    FUN_10927bf2c(param_4,param_5);
    lVar7 = param_4 + 8;
    func_0x000107c2abd4(lVar7,param_3 + 2);
    if (((uint)lVar7 >> 7 & 1) != 0) {
      FUN_10927bf2c(param_3,param_4);
      puVar8 = param_3 + 2;
      func_0x000107c2abd4(puVar8,param_2 + 2);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        FUN_10927bf2c(param_2,param_3);
        puVar8 = param_2 + 2;
        func_0x000107c2abd4(puVar8,param_1 + 2);
        if (((uint)puVar8 >> 7 & 1) != 0) {
          do {
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar2 = *param_1;
            uVar1 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)((long)register0x00000008 + -0x41) =
                 *(undefined8 *)((long)param_1 + 0x17);
            bVar3 = *(byte *)((long)param_1 + 0x1f);
            *(undefined8 *)(param_1 + 4) = 0;
            *(undefined8 *)(param_1 + 6) = 0;
            *(undefined8 *)(param_1 + 2) = 0;
            uVar12 = *(undefined8 *)(param_1 + 8);
            *param_1 = *param_2;
            uVar13 = *(undefined8 *)(param_2 + 4);
            uVar11 = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
            *(undefined8 *)(param_1 + 4) = uVar13;
            *(undefined8 *)(param_1 + 2) = uVar11;
            *(undefined1 *)((long)param_2 + 0x1f) = 0;
            *(undefined1 *)(param_2 + 2) = 0;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
            *param_2 = uVar2;
            puVar9 = param_2;
            puVar8 = puVar10;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              param_1 = *(undefined4 **)(param_2 + 2);
              __ZdlPv();
              puVar8 = puVar10;
            }
            uVar11 = *(undefined8 *)((long)register0x00000008 + -0x48);
            *(undefined8 *)(param_2 + 2) = uVar1;
            *(undefined8 *)(param_2 + 4) = uVar11;
            *(undefined8 *)((long)param_2 + 0x17) =
                 *(undefined8 *)((long)register0x00000008 + -0x41);
            *(byte *)((long)param_2 + 0x1f) = bVar3;
            *(undefined8 *)(param_2 + 8) = uVar12;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x38)) {
              return;
            }
            ___stack_chk_fail();
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar12;
            *(ulong *)((long)register0x00000008 + -0x78) = (ulong)bVar3;
            *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
            *(undefined4 **)((long)register0x00000008 + -0x68) = param_2;
            *(undefined1 **)((long)register0x00000008 + -0x60) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10927bffc;
            puVar5 = puVar9 + 2;
            puVar10 = puVar8;
            func_0x000107c2abd4(puVar5,param_1 + 2);
            puVar6 = puVar8 + 2;
            func_0x000107c2abd4(puVar6,puVar9 + 2);
            if (((uint)puVar5 >> 7 & 1) == 0) {
              if (-1 < (char)puVar6) {
                return;
              }
              FUN_10927bf2c(puVar9,puVar8);
              puVar8 = puVar9 + 2;
              func_0x000107c2abd4(puVar8,param_1 + 2);
              uVar4 = (uint)puVar8;
              puVar8 = puVar9;
joined_r0x00010927c084:
              if ((uVar4 >> 7 & 1) == 0) {
                return;
              }
            }
            else if (-1 < (char)puVar6) {
              FUN_10927bf2c(param_1,puVar9);
              puVar5 = puVar8 + 2;
              func_0x000107c2abd4(puVar5,puVar9 + 2);
              uVar4 = (uint)puVar5;
              param_1 = puVar9;
              goto joined_r0x00010927c084;
            }
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
            unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
            unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
            param_2 = puVar8;
          } while( true );
        }
      }
    }
  }
  return;
}



/* Entry: 1092807b4; end: 109280a23;  */

bool FUN_1092807b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_109280868:
      FUN_1092805ec(param_1,param_1 + 10,param_1 + 0x14);
      if (param_1 + 0x1e == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x14;
      puVar8 = param_1 + 0x1e;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 4);
          uStack_70 = *(ulong *)(puVar8 + 2);
          uStack_60 = *(ulong *)(puVar8 + 6);
          uStack_58 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x78) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x50);
            if (*(char *)((long)param_1 + lVar7 + 0x97) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x80));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x60);
            *(undefined8 *)((long)param_1 + lVar7 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x58);
            *(undefined1 *)((long)param_1 + lVar7 + 0x6f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x58) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            puVar5 = param_1;
            if (lVar7 == -0x50) goto LAB_109280934;
            puVar4 = &uStack_70;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x30);
            lVar2 = lVar7 + -0x28;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x50);
LAB_109280934:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x58));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x60) = uStack_68;
          *(ulong *)((long)param_1 + lVar7 + 0x58) = uStack_70;
          *(ulong *)((long)param_1 + lVar7 + 0x68) = uStack_60;
          uStack_60 = uStack_60 & 0xffffffffffffff;
          uStack_70 = uStack_70 & 0xffffffffffffff00;
          *(undefined8 *)(puVar5 + 8) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 10 == param_2;
          }
        }
        puVar3 = puVar8 + 10;
        lVar9 = lVar9 + 0x28;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -10;
  }
  else {
    if (uVar6 == 3) {
      FUN_1092805ec(param_1,param_1 + 10,param_2 + -10);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_1092806a0(param_1,param_1 + 10,param_1 + 0x14,param_1 + 0x1e,param_2 + -10);
        return true;
      }
      goto LAB_109280868;
    }
    FUN_1092805ec(param_1,param_1 + 10,param_1 + 0x14);
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 0x16);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927bf2c(param_1 + 0x14,param_2 + -10);
    puVar5 = param_1 + 0x16;
    func_0x000107c2abd4(puVar5,param_1 + 0xc);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927bf2c(param_1 + 10,param_1 + 0x14);
    puVar5 = param_1 + 0xc;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 10;
  }
  FUN_10927bf2c(param_1,param_2);
  return true;
}



/* Entry: 109280a24; end: 109280a8f;  */

void FUN_109280a24(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
  }
  puVar1[3] = param_2[3];
  *(undefined8 **)(param_1 + 8) = puVar1 + 4;
  return;
}



/* Entry: 109280a90; end: 109280c1f;  */

/* WARNING: Removing unreachable block (ram,0x000109280c60) */

long * FUN_109280a90(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  long *plStack_58;
  
  puVar7 = (undefined8 *)*param_1;
  puVar8 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar8 - (long)puVar7 >> 5;
  uVar1 = lVar9 + 1;
  if (uVar1 >> 0x3b != 0) {
    FUN_109280c20();
LAB_109280c08:
    func_0x000104c4f740();
    FUN_109280c34(&puStack_78);
    __Unwind_Resume(param_1);
    plVar4 = (long *)&UNK_10f5629b6;
    func_0x000104c4f6cc();
    lVar9 = plVar4[2];
    while (lVar9 != plVar4[1]) {
      lVar9 = lVar9 + -0x20;
      plVar4[2] = lVar9;
    }
    if (*plVar4 != 0) {
      __ZdlPv();
    }
    return plVar4;
  }
  uVar6 = param_1[2] - (long)puVar7 >> 4;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffdf < (ulong)(param_1[2] - (long)puVar7)) {
    uVar6 = 0x7ffffffffffffff;
  }
  plStack_58 = param_1;
  if (uVar6 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (uVar6 >> 0x3b != 0) goto LAB_109280c08;
    puVar3 = (undefined8 *)(uVar6 << 5);
    __Znwm();
  }
  puVar2 = (undefined8 *)((long)puVar3 + ((long)puVar8 - (long)puVar7));
  puVar10 = puVar3 + uVar6 * 4;
  puStack_78 = puVar3;
  puStack_70 = puVar2;
  puStack_68 = puVar2;
  puStack_60 = puVar10;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(puVar2,*param_2,param_2[1]);
    puVar7 = (undefined8 *)*param_1;
    puVar8 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar8 - (long)puVar7 >> 5;
  }
  else {
    uVar11 = *param_2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar11;
    puVar2[2] = param_2[2];
  }
  puVar2[3] = param_2[3];
  puVar3 = puVar7;
  puVar5 = puVar2 + lVar9 * -4;
  if (puVar7 != puVar8) {
    do {
      uVar12 = puVar3[1];
      uVar11 = *puVar3;
      puVar5[2] = puVar3[2];
      puVar5[1] = uVar12;
      *puVar5 = uVar11;
      puVar3[1] = 0;
      puVar3[2] = 0;
      *puVar3 = 0;
      puVar5[3] = puVar3[3];
      puVar3 = puVar3 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar3 != puVar8);
    do {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar8);
    puVar7 = (undefined8 *)*param_1;
    puVar10 = puStack_60;
  }
  *param_1 = (long)(puVar2 + lVar9 * -4);
  param_1[1] = (long)(puVar2 + 4);
  puStack_60 = (undefined8 *)param_1[2];
  param_1[2] = (long)puVar10;
  puStack_78 = puVar7;
  puStack_70 = puVar7;
  puStack_68 = puVar7;
  FUN_109280c34(&puStack_78);
  return puVar2 + 4;
}



/* Entry: 109280c20; end: 109280c33;  */

/* WARNING: Removing unreachable block (ram,0x000109280c60) */

long * FUN_109280c20(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x20;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109280c34; end: 109280c93;  */

/* WARNING: Removing unreachable block (ram,0x000109280c60) */

long * FUN_109280c34(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109280c94; end: 109280ca7;  */

void FUN_109280c94(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar9 = (uint *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar24 = param_2;
  puVar25 = param_3;
  puVar26 = param_4;
  do {
    puVar11 = puVar24 + -4;
    puVar28 = puVar24 + -8;
    puVar29 = puVar24 + -0xc;
    puVar27 = puVar8;
LAB_109280cf8:
    puVar8 = puVar27;
    uVar13 = (long)puVar24 - (long)puVar8 >> 4;
    if (uVar13 - 2 != 0 && 1 < (long)uVar13) {
      if (uVar13 == 3) {
        puVar25 = puVar8 + 4;
        uVar22 = *puVar25;
        puVar26 = puVar24 + -4;
        if (uVar22 < *puVar8) {
          if (*puVar26 < uVar22) goto LAB_1092813a8;
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar8 + 6) = uVar30;
          *(undefined8 *)puVar25 = uVar14;
          if (*puVar26 < puVar8[4]) {
            uVar30 = *(undefined8 *)(puVar8 + 6);
            uVar14 = *(undefined8 *)puVar25;
            uVar31 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar24 + -2);
            *(undefined8 *)puVar25 = uVar31;
            goto LAB_1092813bc;
          }
          break;
        }
        if (uVar22 <= *puVar26) break;
        uVar30 = *(undefined8 *)(puVar8 + 6);
        uVar14 = *(undefined8 *)puVar25;
        uVar31 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar25 = uVar31;
        *(undefined8 *)(puVar24 + -2) = uVar30;
        *(undefined8 *)puVar26 = uVar14;
      }
      else {
        if (uVar13 != 4) {
          if (uVar13 != 5) goto LAB_109280d34;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_1092818a0;
          param_2 = puVar8 + 4;
          param_3 = puVar8 + 8;
          param_4 = puVar8 + 0xc;
          goto FUN_1092818a4;
        }
        puVar25 = puVar8 + 4;
        uVar22 = *puVar25;
        puVar26 = puVar8 + 8;
        uVar3 = *puVar26;
        if (uVar22 < *puVar8) {
          if (uVar3 < uVar22) {
            uVar30 = *(undefined8 *)(puVar8 + 2);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar26;
          }
          else {
            uVar30 = *(undefined8 *)(puVar8 + 2);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = uVar30;
            *(undefined8 *)puVar25 = uVar14;
            if (puVar8[4] <= uVar3) goto LAB_1092817fc;
            uVar30 = *(undefined8 *)(puVar8 + 6);
            uVar14 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
          }
          *(undefined8 *)(puVar8 + 10) = uVar30;
          *(undefined8 *)puVar26 = uVar14;
        }
        else if (uVar3 < uVar22) {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar14 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
          *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 10) = uVar30;
          *(undefined8 *)puVar26 = uVar14;
          if (puVar8[4] < *puVar8) {
            uVar30 = *(undefined8 *)(puVar8 + 2);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = uVar30;
            *(undefined8 *)puVar25 = uVar14;
          }
        }
LAB_1092817fc:
        if (*puVar26 <= *puVar11) break;
        uVar30 = *(undefined8 *)(puVar8 + 10);
        uVar14 = *(undefined8 *)puVar26;
        uVar31 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar26 = uVar31;
        *(undefined8 *)(puVar24 + -2) = uVar30;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar25 <= *puVar26) break;
        uVar30 = *(undefined8 *)(puVar8 + 6);
        uVar14 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar8 + 10) = uVar30;
        *(undefined8 *)puVar26 = uVar14;
      }
      puVar24 = puVar8 + 4;
      if (*puVar24 < *puVar8) {
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
        *(undefined8 *)(puVar8 + 6) = uVar30;
        *(undefined8 *)puVar24 = uVar14;
      }
      break;
    }
    if (uVar13 < 2) break;
    if (uVar13 == 2) {
      if (puVar24[-4] < *puVar8) {
LAB_1092813a8:
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        uVar31 = *(undefined8 *)(puVar24 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar8 = uVar31;
LAB_1092813bc:
        *(undefined8 *)(puVar24 + -2) = uVar30;
        *(undefined8 *)(puVar24 + -4) = uVar14;
      }
      break;
    }
LAB_109280d34:
    if ((long)uVar13 < 0x18) {
      puVar25 = puVar8 + 4;
      if (((ulong)puVar26 & 1) == 0) {
        if (puVar8 != puVar24 && puVar25 != puVar24) {
          do {
            puVar26 = puVar25;
            uVar22 = puVar8[4];
            if (uVar22 < *puVar8) {
              uVar14 = *(undefined8 *)(puVar8 + 5);
              uVar3 = puVar8[7];
              puVar8 = puVar26;
              do {
                puVar25 = puVar8;
                *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar25 + -2);
                *(undefined8 *)puVar25 = *(undefined8 *)(puVar25 + -4);
                puVar8 = puVar25 + -4;
              } while (uVar22 < puVar25[-8]);
              puVar25[-4] = uVar22;
              puVar25[-1] = uVar3;
              *(undefined8 *)(puVar25 + -3) = uVar14;
            }
            puVar25 = puVar26 + 4;
            puVar8 = puVar26;
          } while (puVar26 + 4 != puVar24);
        }
        break;
      }
      if (puVar8 == puVar24 || puVar25 == puVar24) break;
      lVar18 = 0;
      puVar26 = puVar8;
      goto LAB_109281420;
    }
    if (puVar25 == (uint *)0x0) {
      if (puVar8 == puVar24) break;
      uVar15 = uVar13 - 2 >> 1;
      uVar16 = uVar15;
      goto LAB_1092814b4;
    }
    puVar27 = puVar8 + (uVar13 >> 1) * 4;
    uVar22 = *puVar11;
    if (uVar13 < 0x81) {
      uVar3 = *puVar8;
      if (uVar3 < *puVar27) {
        if (uVar22 < uVar3) {
          uStack_88 = *(undefined8 *)(puVar27 + 2);
          uStack_90 = *(undefined8 *)puVar27;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar27 = uVar14;
        }
        else {
          uVar31 = *(undefined8 *)(puVar27 + 2);
          uVar14 = *(undefined8 *)puVar27;
          uVar30 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar27 = uVar30;
          *(undefined8 *)(puVar8 + 2) = uVar31;
          *(undefined8 *)puVar8 = uVar14;
          if (*puVar8 <= *puVar11) goto LAB_109281114;
          uStack_88 = *(undefined8 *)(puVar8 + 2);
          uStack_90 = *(undefined8 *)puVar8;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar8 = uVar14;
        }
        *(undefined8 *)(puVar24 + -2) = uStack_88;
        *(undefined8 *)puVar11 = uStack_90;
      }
      else if (uVar22 < uVar3) {
        uVar31 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        uVar30 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar8 = uVar30;
        *(undefined8 *)(puVar24 + -2) = uVar31;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar8 < *puVar27) {
          uVar31 = *(undefined8 *)(puVar27 + 2);
          uVar14 = *(undefined8 *)puVar27;
          uVar30 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar27 = uVar30;
          *(undefined8 *)(puVar8 + 2) = uVar31;
          *(undefined8 *)puVar8 = uVar14;
        }
      }
    }
    else {
      uVar3 = *puVar27;
      if (uVar3 < *puVar8) {
        if (uVar22 < uVar3) {
          uStack_88 = *(undefined8 *)(puVar8 + 2);
          uStack_90 = *(undefined8 *)puVar8;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar8 = uVar14;
        }
        else {
          uVar31 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          uVar30 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar8 = uVar30;
          *(undefined8 *)(puVar27 + 2) = uVar31;
          *(undefined8 *)puVar27 = uVar14;
          if (*puVar27 <= *puVar11) goto LAB_109280e84;
          uStack_88 = *(undefined8 *)(puVar27 + 2);
          uStack_90 = *(undefined8 *)puVar27;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar27 = uVar14;
        }
        *(undefined8 *)(puVar24 + -2) = uStack_88;
        *(undefined8 *)puVar11 = uStack_90;
      }
      else if (uVar22 < uVar3) {
        uVar31 = *(undefined8 *)(puVar27 + 2);
        uVar14 = *(undefined8 *)puVar27;
        uVar30 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar27 = uVar30;
        *(undefined8 *)(puVar24 + -2) = uVar31;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar27 < *puVar8) {
          uVar31 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          uVar30 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar8 = uVar30;
          *(undefined8 *)(puVar27 + 2) = uVar31;
          *(undefined8 *)puVar27 = uVar14;
        }
      }
LAB_109280e84:
      puVar10 = puVar8 + 4;
      puVar7 = puVar27 + -4;
      uVar22 = *puVar7;
      if (uVar22 < *puVar10) {
        if (*puVar28 < uVar22) {
          uVar31 = *(undefined8 *)(puVar8 + 6);
          uVar30 = *(undefined8 *)puVar10;
          uVar14 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar24 + -6);
          *(undefined8 *)puVar10 = uVar14;
        }
        else {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar14 = *(undefined8 *)puVar10;
          uVar31 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar27 + -2);
          *(undefined8 *)puVar10 = uVar31;
          *(undefined8 *)(puVar27 + -2) = uVar30;
          *(undefined8 *)puVar7 = uVar14;
          if (*puVar7 <= *puVar28) goto LAB_109280f84;
          uVar31 = *(undefined8 *)(puVar27 + -2);
          uVar30 = *(undefined8 *)puVar7;
          uVar14 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar24 + -6);
          *(undefined8 *)puVar7 = uVar14;
        }
        *(undefined8 *)(puVar24 + -6) = uVar31;
        *(undefined8 *)puVar28 = uVar30;
      }
      else if (*puVar28 < uVar22) {
        uVar31 = *(undefined8 *)(puVar27 + -2);
        uVar14 = *(undefined8 *)puVar7;
        uVar30 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar24 + -6);
        *(undefined8 *)puVar7 = uVar30;
        *(undefined8 *)(puVar24 + -6) = uVar31;
        *(undefined8 *)puVar28 = uVar14;
        if (*puVar7 < *puVar10) {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar14 = *(undefined8 *)puVar10;
          uVar31 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar27 + -2);
          *(undefined8 *)puVar10 = uVar31;
          *(undefined8 *)(puVar27 + -2) = uVar30;
          *(undefined8 *)puVar7 = uVar14;
        }
      }
LAB_109280f84:
      puVar17 = puVar8 + 8;
      puVar10 = puVar27 + 4;
      uVar22 = *puVar10;
      if (uVar22 < *puVar17) {
        if (*puVar29 < uVar22) {
          uVar31 = *(undefined8 *)(puVar8 + 10);
          uVar30 = *(undefined8 *)puVar17;
          uVar14 = *(undefined8 *)puVar29;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar24 + -10);
          *(undefined8 *)puVar17 = uVar14;
        }
        else {
          uVar30 = *(undefined8 *)(puVar8 + 10);
          uVar14 = *(undefined8 *)puVar17;
          uVar31 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar17 = uVar31;
          *(undefined8 *)(puVar27 + 6) = uVar30;
          *(undefined8 *)puVar10 = uVar14;
          if (*puVar10 <= *puVar29) goto LAB_109281040;
          uVar31 = *(undefined8 *)(puVar27 + 6);
          uVar30 = *(undefined8 *)puVar10;
          uVar14 = *(undefined8 *)puVar29;
          *(undefined8 *)(puVar27 + 6) = *(undefined8 *)(puVar24 + -10);
          *(undefined8 *)puVar10 = uVar14;
        }
        *(undefined8 *)(puVar24 + -10) = uVar31;
        *(undefined8 *)puVar29 = uVar30;
      }
      else if (*puVar29 < uVar22) {
        uVar31 = *(undefined8 *)(puVar27 + 6);
        uVar14 = *(undefined8 *)puVar10;
        uVar30 = *(undefined8 *)puVar29;
        *(undefined8 *)(puVar27 + 6) = *(undefined8 *)(puVar24 + -10);
        *(undefined8 *)puVar10 = uVar30;
        *(undefined8 *)(puVar24 + -10) = uVar31;
        *(undefined8 *)puVar29 = uVar14;
        if (*puVar10 < *puVar17) {
          uVar30 = *(undefined8 *)(puVar8 + 10);
          uVar14 = *(undefined8 *)puVar17;
          uVar31 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar17 = uVar31;
          *(undefined8 *)(puVar27 + 6) = uVar30;
          *(undefined8 *)puVar10 = uVar14;
        }
      }
LAB_109281040:
      uVar22 = *puVar27;
      if (uVar22 < puVar27[-4]) {
        if (puVar27[4] < uVar22) {
          uStack_88 = *(undefined8 *)(puVar27 + -2);
          uStack_90 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar10;
        }
        else {
          uVar30 = *(undefined8 *)(puVar27 + -2);
          uVar14 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar27 + 2) = uVar30;
          *(undefined8 *)puVar27 = uVar14;
          if (*puVar27 <= puVar27[4]) goto LAB_1092810fc;
          uStack_88 = *(undefined8 *)(puVar27 + 2);
          uStack_90 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar27 = *(undefined8 *)puVar10;
        }
        *(undefined8 *)(puVar27 + 6) = uStack_88;
        *(undefined8 *)puVar10 = uStack_90;
      }
      else if (puVar27[4] < uVar22) {
        uVar30 = *(undefined8 *)(puVar27 + 2);
        uVar14 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar27 + 6);
        *(undefined8 *)puVar27 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar27 + 6) = uVar30;
        *(undefined8 *)puVar10 = uVar14;
        if (*puVar27 < puVar27[-4]) {
          uVar30 = *(undefined8 *)(puVar27 + -2);
          uVar14 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar27 + 2) = uVar30;
          *(undefined8 *)puVar27 = uVar14;
        }
      }
LAB_1092810fc:
      uVar31 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)puVar27;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + 2);
      *(undefined8 *)puVar8 = uVar30;
      *(undefined8 *)(puVar27 + 2) = uVar31;
      *(undefined8 *)puVar27 = uVar14;
    }
LAB_109281114:
    puVar25 = (uint *)((long)puVar25 + -1);
    uVar22 = *puVar8;
    if ((((ulong)puVar26 & 1) == 0) && (uVar22 <= puVar8[-4])) {
      uVar14 = *(undefined8 *)(puVar8 + 1);
      uVar3 = puVar8[3];
      puVar27 = puVar8;
      if (uVar22 < *puVar11) {
        do {
          puVar27 = puVar27 + 4;
        } while (*puVar27 <= uVar22);
      }
      else {
        do {
          puVar27 = puVar27 + 4;
          if (puVar24 <= puVar27) break;
        } while (*puVar27 <= uVar22);
      }
      puVar26 = puVar24;
      if (puVar27 < puVar24) {
        do {
          puVar26 = puVar26 + -4;
        } while (uVar22 < *puVar26);
      }
      while (puVar27 < puVar26) {
        uVar32 = *(undefined8 *)(puVar27 + 2);
        uVar30 = *(undefined8 *)puVar27;
        uVar31 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar26 + 2);
        *(undefined8 *)puVar27 = uVar31;
        *(undefined8 *)(puVar26 + 2) = uVar32;
        *(undefined8 *)puVar26 = uVar30;
        do {
          puVar27 = puVar27 + 4;
        } while (*puVar27 <= uVar22);
        do {
          puVar26 = puVar26 + -4;
        } while (uVar22 < *puVar26);
      }
      if (puVar27 + -4 != puVar8) {
        uVar30 = *(undefined8 *)(puVar27 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + -2);
        *(undefined8 *)puVar8 = uVar30;
      }
      puVar26 = (uint *)0x0;
      puVar27[-4] = uVar22;
      puVar27[-1] = uVar3;
      *(undefined8 *)(puVar27 + -3) = uVar14;
      goto LAB_109280cf8;
    }
    lVar18 = 0;
    uVar14 = *(undefined8 *)(puVar8 + 1);
    uVar3 = puVar8[3];
    do {
      lVar6 = lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    } while (*(uint *)((long)puVar8 + lVar6) < uVar22);
    puVar9 = (uint *)((long)puVar8 + lVar18);
    puVar7 = puVar24;
    if (lVar18 == 0x10) {
      do {
        if (puVar7 <= puVar9) break;
        puVar7 = puVar7 + -4;
      } while (uVar22 <= *puVar7);
    }
    else {
      do {
        puVar7 = puVar7 + -4;
      } while (uVar22 <= *puVar7);
    }
    puVar10 = puVar7;
    puVar27 = puVar9;
    if (puVar9 < puVar7) {
      do {
        uVar32 = *(undefined8 *)(puVar27 + 2);
        uVar30 = *(undefined8 *)puVar27;
        uVar31 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)puVar27 = uVar31;
        *(undefined8 *)(puVar10 + 2) = uVar32;
        *(undefined8 *)puVar10 = uVar30;
        do {
          puVar27 = puVar27 + 4;
        } while (*puVar27 < uVar22);
        do {
          puVar10 = puVar10 + -4;
        } while (uVar22 <= *puVar10);
      } while (puVar27 < puVar10);
    }
    puVar10 = puVar27 + -4;
    if (puVar10 != puVar8) {
      uVar30 = *(undefined8 *)puVar10;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + -2);
      *(undefined8 *)puVar8 = uVar30;
    }
    puVar27[-4] = uVar22;
    puVar27[-1] = uVar3;
    *(undefined8 *)(puVar27 + -3) = uVar14;
    if (puVar9 < puVar7) goto LAB_109281228;
    puVar7 = puVar8;
    FUN_109281a28(puVar8,puVar10);
    puVar9 = puVar27;
    param_2 = puVar24;
    FUN_109281a28();
    if ((int)puVar9 == 0) goto code_r0x000109281224;
    puVar24 = puVar10;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_109281868;
LAB_109281420:
  do {
    puVar27 = puVar25;
    uVar22 = puVar26[4];
    if (uVar22 < *puVar26) {
      uVar14 = *(undefined8 *)(puVar26 + 5);
      uVar3 = puVar26[7];
      lVar6 = lVar18;
      do {
        lVar19 = lVar6;
        puVar1 = (undefined8 *)((long)puVar8 + lVar19);
        puVar1[3] = puVar1[1];
        puVar1[2] = *puVar1;
        puVar25 = puVar8;
        if (lVar19 == 0) goto LAB_109281478;
        lVar6 = lVar19 + -0x10;
      } while (uVar22 < *(uint *)(puVar1 + -2));
      puVar25 = (uint *)((long)puVar8 + lVar19);
LAB_109281478:
      *puVar25 = uVar22;
      puVar25[3] = uVar3;
      *(undefined8 *)(puVar25 + 1) = uVar14;
    }
    puVar25 = puVar27 + 4;
    lVar18 = lVar18 + 0x10;
    puVar26 = puVar27;
  } while (puVar25 != puVar24);
  goto LAB_109281868;
code_r0x000109281224:
  if (((ulong)puVar7 & 1) == 0) {
LAB_109281228:
    param_4 = (uint *)(ulong)((uint)puVar26 & 1);
    param_3 = puVar25;
    FUN_109280ca8();
    puVar26 = (uint *)0x0;
    puVar9 = puVar8;
    param_2 = puVar10;
  }
  goto LAB_109280cf8;
LAB_1092814b4:
  do {
    if ((long)uVar16 <= (long)uVar15) {
      uVar21 = uVar16 << 1 | 1;
      puVar25 = puVar8 + uVar21 * 4;
      uVar20 = uVar16 * 2 + 2;
      if ((long)uVar20 < (long)uVar13) {
        uVar3 = *puVar25;
        uVar23 = puVar25[4];
        uVar22 = uVar3;
        if (uVar3 <= uVar23) {
          uVar22 = uVar23;
        }
        puVar26 = puVar25 + 4;
        if (uVar23 <= uVar3) {
          puVar26 = puVar25;
          uVar20 = uVar21;
        }
      }
      else {
        uVar22 = *puVar25;
        puVar26 = puVar25;
        uVar20 = uVar21;
      }
      puVar25 = puVar8 + uVar16 * 4;
      uVar3 = *puVar25;
      if (uVar3 <= uVar22) {
        uVar14 = *(undefined8 *)(puVar25 + 1);
        uVar22 = puVar25[3];
        do {
          puVar27 = puVar26;
          uVar30 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar25 = uVar30;
          if ((long)uVar15 < (long)uVar20) break;
          uVar21 = uVar20 << 1 | 1;
          puVar25 = puVar8 + uVar21 * 4;
          uVar20 = uVar20 * 2 + 2;
          if ((long)uVar20 < (long)uVar13) {
            uVar4 = *puVar25;
            uVar5 = puVar25[4];
            puVar9 = (uint *)(ulong)uVar5;
            uVar23 = uVar4;
            if (uVar4 <= uVar5) {
              uVar23 = uVar5;
            }
            puVar26 = puVar25 + 4;
            if (uVar5 <= uVar4) {
              puVar26 = puVar25;
              uVar20 = uVar21;
            }
          }
          else {
            uVar23 = *puVar25;
            puVar26 = puVar25;
            uVar20 = uVar21;
          }
          puVar25 = puVar27;
        } while (uVar3 <= uVar23);
        *puVar27 = uVar3;
        puVar27[3] = uVar22;
        *(undefined8 *)(puVar27 + 1) = uVar14;
      }
    }
    bVar2 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar2);
  do {
    uVar30 = *(undefined8 *)(puVar8 + 2);
    uVar14 = *(undefined8 *)puVar8;
    puVar25 = puVar8;
    uVar16 = 0;
    do {
      uVar20 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      puVar26 = puVar25 + uVar16 * 4 + 4;
      uVar21 = uVar20;
      if (((long)uVar15 < (long)uVar13) &&
         (puVar26 = puVar25 + uVar16 * 4 + 8, uVar21 = uVar15,
         puVar25[uVar16 * 4 + 8] <= puVar25[uVar16 * 4 + 4])) {
        puVar26 = puVar25 + uVar16 * 4 + 4;
        uVar21 = uVar20;
      }
      uVar31 = *(undefined8 *)puVar26;
      *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar26 + 2);
      *(undefined8 *)puVar25 = uVar31;
      puVar25 = puVar26;
      uVar16 = uVar21;
    } while ((long)uVar21 <= (long)(uVar13 - 2 >> 1));
    puVar25 = puVar24 + -4;
    if (puVar26 == puVar25) {
      *(undefined8 *)(puVar26 + 2) = uVar30;
      *(undefined8 *)puVar26 = uVar14;
    }
    else {
      uVar31 = *(undefined8 *)puVar25;
      *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar24 + -2);
      *(undefined8 *)puVar26 = uVar31;
      *(undefined8 *)(puVar24 + -2) = uVar30;
      *(undefined8 *)puVar25 = uVar14;
      lVar18 = (long)((long)puVar26 + (0x10 - (long)puVar8)) >> 4;
      if (1 < lVar18) {
        uVar16 = lVar18 - 2U >> 1;
        uVar22 = *puVar26;
        if (puVar8[uVar16 * 4] < uVar22) {
          uVar14 = *(undefined8 *)(puVar26 + 1);
          uVar3 = puVar26[3];
          puVar24 = puVar8 + uVar16 * 4;
          do {
            puVar27 = puVar24;
            uVar30 = *(undefined8 *)puVar27;
            *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar27 + 2);
            *(undefined8 *)puVar26 = uVar30;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            puVar26 = puVar27;
            puVar24 = puVar8 + uVar16 * 4;
          } while (puVar8[uVar16 * 4] < uVar22);
          *puVar27 = uVar22;
          puVar27[3] = uVar3;
          *(undefined8 *)(puVar27 + 1) = uVar14;
        }
      }
    }
    bVar2 = 2 < (long)uVar13;
    uVar13 = uVar13 - 1;
    puVar24 = puVar25;
  } while (bVar2);
LAB_109281868:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
LAB_1092818a0:
  puVar11 = param_5;
  puVar8 = puVar9;
  ___stack_chk_fail();
FUN_1092818a4:
  uVar22 = *param_2;
  if (uVar22 < *puVar8) {
    if (*param_3 < uVar22) {
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar8 = uVar31;
    }
    else {
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar31;
      *(undefined8 *)(param_2 + 2) = uVar30;
      *(undefined8 *)param_2 = uVar14;
      if (*param_2 <= *param_3) goto LAB_109281940;
      uVar30 = *(undefined8 *)(param_2 + 2);
      uVar14 = *(undefined8 *)param_2;
      uVar31 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar31;
    }
    *(undefined8 *)(param_3 + 2) = uVar30;
    *(undefined8 *)param_3 = uVar14;
  }
  else if (*param_3 < uVar22) {
    uVar30 = *(undefined8 *)(param_2 + 2);
    uVar14 = *(undefined8 *)param_2;
    uVar31 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar31;
    *(undefined8 *)(param_3 + 2) = uVar30;
    *(undefined8 *)param_3 = uVar14;
    if (*param_2 < *puVar8) {
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar31;
      *(undefined8 *)(param_2 + 2) = uVar30;
      *(undefined8 *)param_2 = uVar14;
    }
  }
LAB_109281940:
  if (*param_4 < *param_3) {
    uVar30 = *(undefined8 *)(param_3 + 2);
    uVar14 = *(undefined8 *)param_3;
    uVar31 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar31;
    *(undefined8 *)(param_4 + 2) = uVar30;
    *(undefined8 *)param_4 = uVar14;
    if (*param_3 < *param_2) {
      uVar30 = *(undefined8 *)(param_2 + 2);
      uVar14 = *(undefined8 *)param_2;
      uVar31 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar31;
      *(undefined8 *)(param_3 + 2) = uVar30;
      *(undefined8 *)param_3 = uVar14;
      if (*param_2 < *puVar8) {
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        uVar31 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar8 = uVar31;
        *(undefined8 *)(param_2 + 2) = uVar30;
        *(undefined8 *)param_2 = uVar14;
      }
    }
  }
  if (*puVar11 < *param_4) {
    uVar30 = *(undefined8 *)(param_4 + 2);
    uVar14 = *(undefined8 *)param_4;
    uVar31 = *(undefined8 *)puVar11;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)param_4 = uVar31;
    *(undefined8 *)(puVar11 + 2) = uVar30;
    *(undefined8 *)puVar11 = uVar14;
    if (*param_4 < *param_3) {
      uVar30 = *(undefined8 *)(param_3 + 2);
      uVar14 = *(undefined8 *)param_3;
      uVar31 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar31;
      *(undefined8 *)(param_4 + 2) = uVar30;
      *(undefined8 *)param_4 = uVar14;
      if (*param_3 < *param_2) {
        uVar30 = *(undefined8 *)(param_2 + 2);
        uVar14 = *(undefined8 *)param_2;
        uVar31 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar31;
        *(undefined8 *)(param_3 + 2) = uVar30;
        *(undefined8 *)param_3 = uVar14;
        if (*param_2 < *puVar8) {
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          uVar31 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar8 = uVar31;
          *(undefined8 *)(param_2 + 2) = uVar30;
          *(undefined8 *)param_2 = uVar14;
        }
      }
    }
  }
  return;
}



/* Entry: 109280ca8; end: 1092818a3;  */

void FUN_109280ca8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puVar23 = param_2;
  puVar24 = param_3;
  puVar25 = param_4;
  do {
    puVar10 = puVar23 + -4;
    puVar27 = puVar23 + -8;
    puVar28 = puVar23 + -0xc;
    puVar26 = puVar8;
LAB_109280cf8:
    puVar8 = puVar26;
    uVar12 = (long)puVar23 - (long)puVar8 >> 4;
    if (uVar12 - 2 != 0 && 1 < (long)uVar12) {
      if (uVar12 == 3) {
        puVar24 = puVar8 + 4;
        uVar21 = *puVar24;
        puVar25 = puVar23 + -4;
        if (uVar21 < *puVar8) {
          if (*puVar25 < uVar21) goto LAB_1092813a8;
          uVar29 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar8 + 6) = uVar29;
          *(undefined8 *)puVar24 = uVar13;
          if (*puVar25 < puVar8[4]) {
            uVar29 = *(undefined8 *)(puVar8 + 6);
            uVar13 = *(undefined8 *)puVar24;
            uVar30 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar23 + -2);
            *(undefined8 *)puVar24 = uVar30;
            goto LAB_1092813bc;
          }
          break;
        }
        if (uVar21 <= *puVar25) break;
        uVar29 = *(undefined8 *)(puVar8 + 6);
        uVar13 = *(undefined8 *)puVar24;
        uVar30 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar24 = uVar30;
        *(undefined8 *)(puVar23 + -2) = uVar29;
        *(undefined8 *)puVar25 = uVar13;
      }
      else {
        if (uVar12 != 4) {
          if (uVar12 != 5) goto LAB_109280d34;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_1092818a0;
          param_2 = puVar8 + 4;
          param_3 = puVar8 + 8;
          param_4 = puVar8 + 0xc;
          goto FUN_1092818a4;
        }
        puVar24 = puVar8 + 4;
        uVar21 = *puVar24;
        puVar25 = puVar8 + 8;
        uVar3 = *puVar25;
        if (uVar21 < *puVar8) {
          if (uVar3 < uVar21) {
            uVar29 = *(undefined8 *)(puVar8 + 2);
            uVar13 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
          }
          else {
            uVar29 = *(undefined8 *)(puVar8 + 2);
            uVar13 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar8 + 6) = uVar29;
            *(undefined8 *)puVar24 = uVar13;
            if (puVar8[4] <= uVar3) goto LAB_1092817fc;
            uVar29 = *(undefined8 *)(puVar8 + 6);
            uVar13 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
          }
          *(undefined8 *)(puVar8 + 10) = uVar29;
          *(undefined8 *)puVar25 = uVar13;
        }
        else if (uVar3 < uVar21) {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar13 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
          *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar8 + 10) = uVar29;
          *(undefined8 *)puVar25 = uVar13;
          if (puVar8[4] < *puVar8) {
            uVar29 = *(undefined8 *)(puVar8 + 2);
            uVar13 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar8 + 6) = uVar29;
            *(undefined8 *)puVar24 = uVar13;
          }
        }
LAB_1092817fc:
        if (*puVar25 <= *puVar10) break;
        uVar29 = *(undefined8 *)(puVar8 + 10);
        uVar13 = *(undefined8 *)puVar25;
        uVar30 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar25 = uVar30;
        *(undefined8 *)(puVar23 + -2) = uVar29;
        *(undefined8 *)puVar10 = uVar13;
        if (*puVar24 <= *puVar25) break;
        uVar29 = *(undefined8 *)(puVar8 + 6);
        uVar13 = *(undefined8 *)puVar24;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 10) = uVar29;
        *(undefined8 *)puVar25 = uVar13;
      }
      puVar23 = puVar8 + 4;
      if (*puVar23 < *puVar8) {
        uVar29 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar23;
        *(undefined8 *)(puVar8 + 6) = uVar29;
        *(undefined8 *)puVar23 = uVar13;
      }
      break;
    }
    if (uVar12 < 2) break;
    if (uVar12 == 2) {
      if (puVar23[-4] < *puVar8) {
LAB_1092813a8:
        uVar29 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        uVar30 = *(undefined8 *)(puVar23 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar8 = uVar30;
LAB_1092813bc:
        *(undefined8 *)(puVar23 + -2) = uVar29;
        *(undefined8 *)(puVar23 + -4) = uVar13;
      }
      break;
    }
LAB_109280d34:
    if ((long)uVar12 < 0x18) {
      puVar24 = puVar8 + 4;
      if (((ulong)puVar25 & 1) == 0) {
        if (puVar8 != puVar23 && puVar24 != puVar23) {
          do {
            puVar25 = puVar24;
            uVar21 = puVar8[4];
            if (uVar21 < *puVar8) {
              uVar13 = *(undefined8 *)(puVar8 + 5);
              uVar3 = puVar8[7];
              puVar8 = puVar25;
              do {
                puVar24 = puVar8;
                *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + -2);
                *(undefined8 *)puVar24 = *(undefined8 *)(puVar24 + -4);
                puVar8 = puVar24 + -4;
              } while (uVar21 < puVar24[-8]);
              puVar24[-4] = uVar21;
              puVar24[-1] = uVar3;
              *(undefined8 *)(puVar24 + -3) = uVar13;
            }
            puVar24 = puVar25 + 4;
            puVar8 = puVar25;
          } while (puVar25 + 4 != puVar23);
        }
        break;
      }
      if (puVar8 == puVar23 || puVar24 == puVar23) break;
      lVar17 = 0;
      puVar25 = puVar8;
      goto LAB_109281420;
    }
    if (puVar24 == (uint *)0x0) {
      if (puVar8 == puVar23) break;
      uVar14 = uVar12 - 2 >> 1;
      uVar16 = uVar14;
      goto LAB_1092814b4;
    }
    puVar26 = puVar8 + (uVar12 >> 1) * 4;
    uVar21 = *puVar10;
    if (uVar12 < 0x81) {
      uVar3 = *puVar8;
      if (uVar3 < *puVar26) {
        if (uVar21 < uVar3) {
          uStack_78 = *(undefined8 *)(puVar26 + 2);
          uStack_80 = *(undefined8 *)puVar26;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar26 = uVar13;
        }
        else {
          uVar30 = *(undefined8 *)(puVar26 + 2);
          uVar13 = *(undefined8 *)puVar26;
          uVar29 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar26 = uVar29;
          *(undefined8 *)(puVar8 + 2) = uVar30;
          *(undefined8 *)puVar8 = uVar13;
          if (*puVar8 <= *puVar10) goto LAB_109281114;
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          uStack_80 = *(undefined8 *)puVar8;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar8 = uVar13;
        }
        *(undefined8 *)(puVar23 + -2) = uStack_78;
        *(undefined8 *)puVar10 = uStack_80;
      }
      else if (uVar21 < uVar3) {
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        uVar29 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar8 = uVar29;
        *(undefined8 *)(puVar23 + -2) = uVar30;
        *(undefined8 *)puVar10 = uVar13;
        if (*puVar8 < *puVar26) {
          uVar30 = *(undefined8 *)(puVar26 + 2);
          uVar13 = *(undefined8 *)puVar26;
          uVar29 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar26 = uVar29;
          *(undefined8 *)(puVar8 + 2) = uVar30;
          *(undefined8 *)puVar8 = uVar13;
        }
      }
    }
    else {
      uVar3 = *puVar26;
      if (uVar3 < *puVar8) {
        if (uVar21 < uVar3) {
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          uStack_80 = *(undefined8 *)puVar8;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar8 = uVar13;
        }
        else {
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          uVar29 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar8 = uVar29;
          *(undefined8 *)(puVar26 + 2) = uVar30;
          *(undefined8 *)puVar26 = uVar13;
          if (*puVar26 <= *puVar10) goto LAB_109280e84;
          uStack_78 = *(undefined8 *)(puVar26 + 2);
          uStack_80 = *(undefined8 *)puVar26;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar26 = uVar13;
        }
        *(undefined8 *)(puVar23 + -2) = uStack_78;
        *(undefined8 *)puVar10 = uStack_80;
      }
      else if (uVar21 < uVar3) {
        uVar30 = *(undefined8 *)(puVar26 + 2);
        uVar13 = *(undefined8 *)puVar26;
        uVar29 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar26 = uVar29;
        *(undefined8 *)(puVar23 + -2) = uVar30;
        *(undefined8 *)puVar10 = uVar13;
        if (*puVar26 < *puVar8) {
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          uVar29 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar8 = uVar29;
          *(undefined8 *)(puVar26 + 2) = uVar30;
          *(undefined8 *)puVar26 = uVar13;
        }
      }
LAB_109280e84:
      puVar15 = puVar8 + 4;
      puVar7 = puVar26 + -4;
      uVar21 = *puVar7;
      if (uVar21 < *puVar15) {
        if (*puVar27 < uVar21) {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar29 = *(undefined8 *)puVar15;
          uVar13 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar23 + -6);
          *(undefined8 *)puVar15 = uVar13;
        }
        else {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar13 = *(undefined8 *)puVar15;
          uVar30 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar26 + -2);
          *(undefined8 *)puVar15 = uVar30;
          *(undefined8 *)(puVar26 + -2) = uVar29;
          *(undefined8 *)puVar7 = uVar13;
          if (*puVar7 <= *puVar27) goto LAB_109280f84;
          uVar30 = *(undefined8 *)(puVar26 + -2);
          uVar29 = *(undefined8 *)puVar7;
          uVar13 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar23 + -6);
          *(undefined8 *)puVar7 = uVar13;
        }
        *(undefined8 *)(puVar23 + -6) = uVar30;
        *(undefined8 *)puVar27 = uVar29;
      }
      else if (*puVar27 < uVar21) {
        uVar30 = *(undefined8 *)(puVar26 + -2);
        uVar13 = *(undefined8 *)puVar7;
        uVar29 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar23 + -6);
        *(undefined8 *)puVar7 = uVar29;
        *(undefined8 *)(puVar23 + -6) = uVar30;
        *(undefined8 *)puVar27 = uVar13;
        if (*puVar7 < *puVar15) {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar13 = *(undefined8 *)puVar15;
          uVar30 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar26 + -2);
          *(undefined8 *)puVar15 = uVar30;
          *(undefined8 *)(puVar26 + -2) = uVar29;
          *(undefined8 *)puVar7 = uVar13;
        }
      }
LAB_109280f84:
      puVar9 = puVar8 + 8;
      puVar15 = puVar26 + 4;
      uVar21 = *puVar15;
      if (uVar21 < *puVar9) {
        if (*puVar28 < uVar21) {
          uVar30 = *(undefined8 *)(puVar8 + 10);
          uVar29 = *(undefined8 *)puVar9;
          uVar13 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar23 + -10);
          *(undefined8 *)puVar9 = uVar13;
        }
        else {
          uVar29 = *(undefined8 *)(puVar8 + 10);
          uVar13 = *(undefined8 *)puVar9;
          uVar30 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar9 = uVar30;
          *(undefined8 *)(puVar26 + 6) = uVar29;
          *(undefined8 *)puVar15 = uVar13;
          if (*puVar15 <= *puVar28) goto LAB_109281040;
          uVar30 = *(undefined8 *)(puVar26 + 6);
          uVar29 = *(undefined8 *)puVar15;
          uVar13 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar26 + 6) = *(undefined8 *)(puVar23 + -10);
          *(undefined8 *)puVar15 = uVar13;
        }
        *(undefined8 *)(puVar23 + -10) = uVar30;
        *(undefined8 *)puVar28 = uVar29;
      }
      else if (*puVar28 < uVar21) {
        uVar30 = *(undefined8 *)(puVar26 + 6);
        uVar13 = *(undefined8 *)puVar15;
        uVar29 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar26 + 6) = *(undefined8 *)(puVar23 + -10);
        *(undefined8 *)puVar15 = uVar29;
        *(undefined8 *)(puVar23 + -10) = uVar30;
        *(undefined8 *)puVar28 = uVar13;
        if (*puVar15 < *puVar9) {
          uVar29 = *(undefined8 *)(puVar8 + 10);
          uVar13 = *(undefined8 *)puVar9;
          uVar30 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar9 = uVar30;
          *(undefined8 *)(puVar26 + 6) = uVar29;
          *(undefined8 *)puVar15 = uVar13;
        }
      }
LAB_109281040:
      uVar21 = *puVar26;
      if (uVar21 < puVar26[-4]) {
        if (puVar26[4] < uVar21) {
          uStack_78 = *(undefined8 *)(puVar26 + -2);
          uStack_80 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar15;
        }
        else {
          uVar29 = *(undefined8 *)(puVar26 + -2);
          uVar13 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar26 + 2) = uVar29;
          *(undefined8 *)puVar26 = uVar13;
          if (*puVar26 <= puVar26[4]) goto LAB_1092810fc;
          uStack_78 = *(undefined8 *)(puVar26 + 2);
          uStack_80 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar26 = *(undefined8 *)puVar15;
        }
        *(undefined8 *)(puVar26 + 6) = uStack_78;
        *(undefined8 *)puVar15 = uStack_80;
      }
      else if (puVar26[4] < uVar21) {
        uVar29 = *(undefined8 *)(puVar26 + 2);
        uVar13 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar26 + 6);
        *(undefined8 *)puVar26 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar26 + 6) = uVar29;
        *(undefined8 *)puVar15 = uVar13;
        if (*puVar26 < puVar26[-4]) {
          uVar29 = *(undefined8 *)(puVar26 + -2);
          uVar13 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar26 + 2) = uVar29;
          *(undefined8 *)puVar26 = uVar13;
        }
      }
LAB_1092810fc:
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar29 = *(undefined8 *)puVar26;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + 2);
      *(undefined8 *)puVar8 = uVar29;
      *(undefined8 *)(puVar26 + 2) = uVar30;
      *(undefined8 *)puVar26 = uVar13;
    }
LAB_109281114:
    puVar24 = (uint *)((long)puVar24 + -1);
    uVar21 = *puVar8;
    if ((((ulong)puVar25 & 1) == 0) && (uVar21 <= puVar8[-4])) {
      uVar13 = *(undefined8 *)(puVar8 + 1);
      uVar3 = puVar8[3];
      puVar26 = puVar8;
      if (uVar21 < *puVar10) {
        do {
          puVar26 = puVar26 + 4;
        } while (*puVar26 <= uVar21);
      }
      else {
        do {
          puVar26 = puVar26 + 4;
          if (puVar23 <= puVar26) break;
        } while (*puVar26 <= uVar21);
      }
      puVar25 = puVar23;
      if (puVar26 < puVar23) {
        do {
          puVar25 = puVar25 + -4;
        } while (uVar21 < *puVar25);
      }
      while (puVar26 < puVar25) {
        uVar31 = *(undefined8 *)(puVar26 + 2);
        uVar29 = *(undefined8 *)puVar26;
        uVar30 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar25 + 2);
        *(undefined8 *)puVar26 = uVar30;
        *(undefined8 *)(puVar25 + 2) = uVar31;
        *(undefined8 *)puVar25 = uVar29;
        do {
          puVar26 = puVar26 + 4;
        } while (*puVar26 <= uVar21);
        do {
          puVar25 = puVar25 + -4;
        } while (uVar21 < *puVar25);
      }
      if (puVar26 + -4 != puVar8) {
        uVar29 = *(undefined8 *)(puVar26 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + -2);
        *(undefined8 *)puVar8 = uVar29;
      }
      puVar25 = (uint *)0x0;
      puVar26[-4] = uVar21;
      puVar26[-1] = uVar3;
      *(undefined8 *)(puVar26 + -3) = uVar13;
      goto LAB_109280cf8;
    }
    lVar17 = 0;
    uVar13 = *(undefined8 *)(puVar8 + 1);
    uVar3 = puVar8[3];
    do {
      lVar6 = lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    } while (*(uint *)((long)puVar8 + lVar6) < uVar21);
    puVar7 = (uint *)((long)puVar8 + lVar17);
    puVar15 = puVar23;
    if (lVar17 == 0x10) {
      do {
        if (puVar15 <= puVar7) break;
        puVar15 = puVar15 + -4;
      } while (uVar21 <= *puVar15);
    }
    else {
      do {
        puVar15 = puVar15 + -4;
      } while (uVar21 <= *puVar15);
    }
    puVar9 = puVar15;
    puVar26 = puVar7;
    if (puVar7 < puVar15) {
      do {
        uVar31 = *(undefined8 *)(puVar26 + 2);
        uVar29 = *(undefined8 *)puVar26;
        uVar30 = *(undefined8 *)puVar9;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)puVar26 = uVar30;
        *(undefined8 *)(puVar9 + 2) = uVar31;
        *(undefined8 *)puVar9 = uVar29;
        do {
          puVar26 = puVar26 + 4;
        } while (*puVar26 < uVar21);
        do {
          puVar9 = puVar9 + -4;
        } while (uVar21 <= *puVar9);
      } while (puVar26 < puVar9);
    }
    puVar9 = puVar26 + -4;
    if (puVar9 != puVar8) {
      uVar29 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + -2);
      *(undefined8 *)puVar8 = uVar29;
    }
    puVar26[-4] = uVar21;
    puVar26[-1] = uVar3;
    *(undefined8 *)(puVar26 + -3) = uVar13;
    if (puVar7 < puVar15) goto LAB_109281228;
    puVar7 = puVar8;
    FUN_109281a28(puVar8,puVar9);
    param_1 = puVar26;
    param_2 = puVar23;
    FUN_109281a28();
    if ((int)param_1 == 0) goto code_r0x000109281224;
    puVar23 = puVar9;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_109281868;
LAB_109281420:
  do {
    puVar26 = puVar24;
    uVar21 = puVar25[4];
    if (uVar21 < *puVar25) {
      uVar13 = *(undefined8 *)(puVar25 + 5);
      uVar3 = puVar25[7];
      lVar6 = lVar17;
      do {
        lVar18 = lVar6;
        puVar1 = (undefined8 *)((long)puVar8 + lVar18);
        puVar1[3] = puVar1[1];
        puVar1[2] = *puVar1;
        puVar24 = puVar8;
        if (lVar18 == 0) goto LAB_109281478;
        lVar6 = lVar18 + -0x10;
      } while (uVar21 < *(uint *)(puVar1 + -2));
      puVar24 = (uint *)((long)puVar8 + lVar18);
LAB_109281478:
      *puVar24 = uVar21;
      puVar24[3] = uVar3;
      *(undefined8 *)(puVar24 + 1) = uVar13;
    }
    puVar24 = puVar26 + 4;
    lVar17 = lVar17 + 0x10;
    puVar25 = puVar26;
  } while (puVar24 != puVar23);
  goto LAB_109281868;
code_r0x000109281224:
  if (((ulong)puVar7 & 1) == 0) {
LAB_109281228:
    param_4 = (uint *)(ulong)((uint)puVar25 & 1);
    param_3 = puVar24;
    FUN_109280ca8();
    puVar25 = (uint *)0x0;
    param_1 = puVar8;
    param_2 = puVar9;
  }
  goto LAB_109280cf8;
LAB_1092814b4:
  do {
    if ((long)uVar16 <= (long)uVar14) {
      uVar20 = uVar16 << 1 | 1;
      puVar24 = puVar8 + uVar20 * 4;
      uVar19 = uVar16 * 2 + 2;
      if ((long)uVar19 < (long)uVar12) {
        uVar3 = *puVar24;
        uVar22 = puVar24[4];
        uVar21 = uVar3;
        if (uVar3 <= uVar22) {
          uVar21 = uVar22;
        }
        puVar25 = puVar24 + 4;
        if (uVar22 <= uVar3) {
          puVar25 = puVar24;
          uVar19 = uVar20;
        }
      }
      else {
        uVar21 = *puVar24;
        puVar25 = puVar24;
        uVar19 = uVar20;
      }
      puVar24 = puVar8 + uVar16 * 4;
      uVar3 = *puVar24;
      if (uVar3 <= uVar21) {
        uVar13 = *(undefined8 *)(puVar24 + 1);
        uVar21 = puVar24[3];
        do {
          puVar26 = puVar25;
          uVar29 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar24 = uVar29;
          if ((long)uVar14 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar24 = puVar8 + uVar20 * 4;
          uVar19 = uVar19 * 2 + 2;
          if ((long)uVar19 < (long)uVar12) {
            uVar4 = *puVar24;
            uVar5 = puVar24[4];
            param_1 = (uint *)(ulong)uVar5;
            uVar22 = uVar4;
            if (uVar4 <= uVar5) {
              uVar22 = uVar5;
            }
            puVar25 = puVar24 + 4;
            if (uVar5 <= uVar4) {
              puVar25 = puVar24;
              uVar19 = uVar20;
            }
          }
          else {
            uVar22 = *puVar24;
            puVar25 = puVar24;
            uVar19 = uVar20;
          }
          puVar24 = puVar26;
        } while (uVar3 <= uVar22);
        *puVar26 = uVar3;
        puVar26[3] = uVar21;
        *(undefined8 *)(puVar26 + 1) = uVar13;
      }
    }
    bVar2 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar2);
  do {
    uVar29 = *(undefined8 *)(puVar8 + 2);
    uVar13 = *(undefined8 *)puVar8;
    puVar24 = puVar8;
    uVar16 = 0;
    do {
      uVar19 = uVar16 << 1 | 1;
      uVar14 = uVar16 * 2 + 2;
      puVar25 = puVar24 + uVar16 * 4 + 4;
      uVar20 = uVar19;
      if (((long)uVar14 < (long)uVar12) &&
         (puVar25 = puVar24 + uVar16 * 4 + 8, uVar20 = uVar14,
         puVar24[uVar16 * 4 + 8] <= puVar24[uVar16 * 4 + 4])) {
        puVar25 = puVar24 + uVar16 * 4 + 4;
        uVar20 = uVar19;
      }
      uVar30 = *(undefined8 *)puVar25;
      *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar25 + 2);
      *(undefined8 *)puVar24 = uVar30;
      puVar24 = puVar25;
      uVar16 = uVar20;
    } while ((long)uVar20 <= (long)(uVar12 - 2 >> 1));
    puVar24 = puVar23 + -4;
    if (puVar25 == puVar24) {
      *(undefined8 *)(puVar25 + 2) = uVar29;
      *(undefined8 *)puVar25 = uVar13;
    }
    else {
      uVar30 = *(undefined8 *)puVar24;
      *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar23 + -2);
      *(undefined8 *)puVar25 = uVar30;
      *(undefined8 *)(puVar23 + -2) = uVar29;
      *(undefined8 *)puVar24 = uVar13;
      lVar17 = (long)puVar25 + (0x10 - (long)puVar8) >> 4;
      if (1 < lVar17) {
        uVar16 = lVar17 - 2U >> 1;
        uVar21 = *puVar25;
        if (puVar8[uVar16 * 4] < uVar21) {
          uVar13 = *(undefined8 *)(puVar25 + 1);
          uVar3 = puVar25[3];
          puVar23 = puVar8 + uVar16 * 4;
          do {
            puVar26 = puVar23;
            uVar29 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar26 + 2);
            *(undefined8 *)puVar25 = uVar29;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            puVar25 = puVar26;
            puVar23 = puVar8 + uVar16 * 4;
          } while (puVar8[uVar16 * 4] < uVar21);
          *puVar26 = uVar21;
          puVar26[3] = uVar3;
          *(undefined8 *)(puVar26 + 1) = uVar13;
        }
      }
    }
    bVar2 = 2 < (long)uVar12;
    uVar12 = uVar12 - 1;
    puVar23 = puVar24;
  } while (bVar2);
LAB_109281868:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
LAB_1092818a0:
  puVar10 = param_5;
  puVar8 = param_1;
  ___stack_chk_fail();
FUN_1092818a4:
  uVar21 = *param_2;
  if (uVar21 < *puVar8) {
    if (*param_3 < uVar21) {
      uVar29 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar8 = uVar30;
    }
    else {
      uVar29 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar30;
      *(undefined8 *)(param_2 + 2) = uVar29;
      *(undefined8 *)param_2 = uVar13;
      if (*param_2 <= *param_3) goto LAB_109281940;
      uVar29 = *(undefined8 *)(param_2 + 2);
      uVar13 = *(undefined8 *)param_2;
      uVar30 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar30;
    }
    *(undefined8 *)(param_3 + 2) = uVar29;
    *(undefined8 *)param_3 = uVar13;
  }
  else if (*param_3 < uVar21) {
    uVar29 = *(undefined8 *)(param_2 + 2);
    uVar13 = *(undefined8 *)param_2;
    uVar30 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar30;
    *(undefined8 *)(param_3 + 2) = uVar29;
    *(undefined8 *)param_3 = uVar13;
    if (*param_2 < *puVar8) {
      uVar29 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar30;
      *(undefined8 *)(param_2 + 2) = uVar29;
      *(undefined8 *)param_2 = uVar13;
    }
  }
LAB_109281940:
  if (*param_4 < *param_3) {
    uVar29 = *(undefined8 *)(param_3 + 2);
    uVar13 = *(undefined8 *)param_3;
    uVar30 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar30;
    *(undefined8 *)(param_4 + 2) = uVar29;
    *(undefined8 *)param_4 = uVar13;
    if (*param_3 < *param_2) {
      uVar29 = *(undefined8 *)(param_2 + 2);
      uVar13 = *(undefined8 *)param_2;
      uVar30 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar30;
      *(undefined8 *)(param_3 + 2) = uVar29;
      *(undefined8 *)param_3 = uVar13;
      if (*param_2 < *puVar8) {
        uVar29 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        uVar30 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar8 = uVar30;
        *(undefined8 *)(param_2 + 2) = uVar29;
        *(undefined8 *)param_2 = uVar13;
      }
    }
  }
  if (*puVar10 < *param_4) {
    uVar29 = *(undefined8 *)(param_4 + 2);
    uVar13 = *(undefined8 *)param_4;
    uVar30 = *(undefined8 *)puVar10;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar10 + 2);
    *(undefined8 *)param_4 = uVar30;
    *(undefined8 *)(puVar10 + 2) = uVar29;
    *(undefined8 *)puVar10 = uVar13;
    if (*param_4 < *param_3) {
      uVar29 = *(undefined8 *)(param_3 + 2);
      uVar13 = *(undefined8 *)param_3;
      uVar30 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar30;
      *(undefined8 *)(param_4 + 2) = uVar29;
      *(undefined8 *)param_4 = uVar13;
      if (*param_3 < *param_2) {
        uVar29 = *(undefined8 *)(param_2 + 2);
        uVar13 = *(undefined8 *)param_2;
        uVar30 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar30;
        *(undefined8 *)(param_3 + 2) = uVar29;
        *(undefined8 *)param_3 = uVar13;
        if (*param_2 < *puVar8) {
          uVar29 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          uVar30 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar8 = uVar30;
          *(undefined8 *)(param_2 + 2) = uVar29;
          *(undefined8 *)param_2 = uVar13;
        }
      }
    }
  }
  return;
}



/* Entry: 1092818a4; end: 109281a27;  */

void FUN_1092818a4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    if (*param_3 < uVar1) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar4;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
      if (*param_2 <= *param_3) goto LAB_109281940;
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar4;
    }
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
  }
  else if (*param_3 < uVar1) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
    if (*param_2 < *param_1) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
    }
  }
LAB_109281940:
  if (*param_4 < *param_3) {
    uVar3 = *(undefined8 *)(param_3 + 2);
    uVar2 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar4;
    *(undefined8 *)(param_4 + 2) = uVar3;
    *(undefined8 *)param_4 = uVar2;
    if (*param_3 < *param_2) {
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar4;
      *(undefined8 *)(param_3 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar2;
      if (*param_2 < *param_1) {
        uVar3 = *(undefined8 *)(param_1 + 2);
        uVar2 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar4;
        *(undefined8 *)(param_2 + 2) = uVar3;
        *(undefined8 *)param_2 = uVar2;
      }
    }
  }
  if (*param_5 < *param_4) {
    uVar3 = *(undefined8 *)(param_4 + 2);
    uVar2 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar4;
    *(undefined8 *)(param_5 + 2) = uVar3;
    *(undefined8 *)param_5 = uVar2;
    if (*param_4 < *param_3) {
      uVar3 = *(undefined8 *)(param_3 + 2);
      uVar2 = *(undefined8 *)param_3;
      uVar4 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar4;
      *(undefined8 *)(param_4 + 2) = uVar3;
      *(undefined8 *)param_4 = uVar2;
      if (*param_3 < *param_2) {
        uVar3 = *(undefined8 *)(param_2 + 2);
        uVar2 = *(undefined8 *)param_2;
        uVar4 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar4;
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)param_3 = uVar2;
        if (*param_2 < *param_1) {
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar2 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar4;
          *(undefined8 *)(param_2 + 2) = uVar3;
          *(undefined8 *)param_2 = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 109281a28; end: 109281d9f;  */

void FUN_109281a28(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  uint *puVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = (long)param_2 - (long)param_1 >> 4;
  puVar9 = param_2;
  if ((long)uVar13 < 3) {
    if (1 < uVar13) {
      if (uVar13 == 2) {
        puVar9 = param_2 + -4;
        if (param_2[-4] < *param_1) {
LAB_109281ac8:
          uVar31 = *(undefined8 *)(param_1 + 2);
          uVar15 = *(undefined8 *)param_1;
          uVar32 = *(undefined8 *)(param_2 + -4);
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar32;
LAB_109281ad4:
          *(undefined8 *)(param_2 + -2) = uVar31;
          *(undefined8 *)(param_2 + -4) = uVar15;
          puVar9 = param_2 + -4;
        }
      }
      else {
LAB_109281adc:
        puVar8 = param_1 + 8;
        uVar23 = *puVar8;
        puVar25 = param_1 + 4;
        uVar2 = *puVar25;
        if (uVar2 < *param_1) {
          if (uVar23 < uVar2) {
            uVar31 = *(undefined8 *)(param_1 + 2);
            uVar15 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)param_1 = *(undefined8 *)puVar8;
          }
          else {
            uVar31 = *(undefined8 *)(param_1 + 2);
            uVar15 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)param_1 = *(undefined8 *)puVar25;
            *(undefined8 *)(param_1 + 6) = uVar31;
            *(undefined8 *)puVar25 = uVar15;
            if (param_1[4] <= uVar23) goto LAB_109281c30;
            uVar31 = *(undefined8 *)(param_1 + 6);
            uVar15 = *(undefined8 *)puVar25;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)puVar25 = *(undefined8 *)puVar8;
          }
          *(undefined8 *)(param_1 + 10) = uVar31;
          *(undefined8 *)puVar8 = uVar15;
        }
        else if (uVar23 < uVar2) {
          uVar31 = *(undefined8 *)(param_1 + 6);
          uVar15 = *(undefined8 *)puVar25;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)puVar25 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 10) = uVar31;
          *(undefined8 *)puVar8 = uVar15;
          if (*puVar25 < *param_1) {
            uVar31 = *(undefined8 *)(param_1 + 2);
            uVar15 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)param_1 = *(undefined8 *)puVar25;
            *(undefined8 *)(param_1 + 6) = uVar31;
            *(undefined8 *)puVar25 = uVar15;
          }
        }
LAB_109281c30:
        if (param_1 + 0xc != param_2) {
          lVar20 = 0;
          iVar18 = 0;
          puVar25 = param_1 + 0xc;
          do {
            puVar26 = puVar25;
            uVar23 = *puVar26;
            if (uVar23 < *puVar8) {
              uVar15 = *(undefined8 *)(puVar26 + 1);
              uVar2 = puVar26[3];
              lVar5 = lVar20;
              do {
                lVar14 = lVar5;
                *(undefined8 *)((long)param_1 + lVar14 + 0x38) =
                     *(undefined8 *)((long)param_1 + lVar14 + 0x28);
                *(undefined8 *)((long)param_1 + lVar14 + 0x30) =
                     *(undefined8 *)((long)param_1 + lVar14 + 0x20);
                puVar8 = param_1;
                if (lVar14 == -0x20) goto LAB_109281c9c;
                lVar5 = lVar14 + -0x10;
              } while (uVar23 < *(uint *)((long)param_1 + lVar14 + 0x10));
              puVar8 = (uint *)((long)param_1 + lVar14 + 0x20);
LAB_109281c9c:
              *puVar8 = uVar23;
              *(undefined8 *)(puVar8 + 1) = uVar15;
              puVar8[3] = uVar2;
              iVar18 = iVar18 + 1;
              if (iVar18 == 8) {
                bVar6 = puVar26 + 4 == param_2;
                goto LAB_109281d64;
              }
            }
            lVar20 = lVar20 + 0x10;
            puVar25 = puVar26 + 4;
            puVar8 = puVar26;
          } while (puVar26 + 4 != param_2);
        }
      }
    }
  }
  else if (uVar13 == 3) {
    puVar8 = param_1 + 4;
    uVar23 = *puVar8;
    puVar9 = param_2 + -4;
    if (uVar23 < *param_1) {
      if (*puVar9 < uVar23) goto LAB_109281ac8;
      uVar31 = *(undefined8 *)(param_1 + 2);
      uVar15 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 6) = uVar31;
      *(undefined8 *)puVar8 = uVar15;
      if (*puVar9 < param_1[4]) {
        uVar31 = *(undefined8 *)(param_1 + 6);
        uVar15 = *(undefined8 *)puVar8;
        uVar32 = *(undefined8 *)puVar9;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar8 = uVar32;
        goto LAB_109281ad4;
      }
    }
    else if (*puVar9 < uVar23) {
      uVar31 = *(undefined8 *)(param_1 + 6);
      uVar15 = *(undefined8 *)puVar8;
      uVar32 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar8 = uVar32;
      *(undefined8 *)(param_2 + -2) = uVar31;
      *(undefined8 *)puVar9 = uVar15;
LAB_109281d40:
      puVar8 = param_1 + 4;
      if (*puVar8 < *param_1) {
        uVar31 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 6) = uVar31;
        *(undefined8 *)puVar8 = uVar15;
      }
    }
  }
  else if (uVar13 == 4) {
    puVar8 = param_1 + 4;
    uVar23 = *puVar8;
    puVar25 = param_1 + 8;
    uVar2 = *puVar25;
    puVar26 = param_2 + -4;
    if (uVar23 < *param_1) {
      if (uVar2 < uVar23) {
        uVar31 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)param_1 = *(undefined8 *)puVar25;
      }
      else {
        uVar31 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 6) = uVar31;
        *(undefined8 *)puVar8 = uVar15;
        if (param_1[4] <= uVar2) goto LAB_109281d00;
        uVar31 = *(undefined8 *)(param_1 + 6);
        uVar15 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
      }
      *(undefined8 *)(param_1 + 10) = uVar31;
      *(undefined8 *)puVar25 = uVar15;
    }
    else if (uVar2 < uVar23) {
      uVar31 = *(undefined8 *)(param_1 + 6);
      uVar15 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
      *(undefined8 *)(param_1 + 10) = uVar31;
      *(undefined8 *)puVar25 = uVar15;
      if (*puVar8 < *param_1) {
        uVar31 = *(undefined8 *)(param_1 + 2);
        uVar15 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 6) = uVar31;
        *(undefined8 *)puVar8 = uVar15;
      }
    }
LAB_109281d00:
    if (*puVar26 < *puVar25) {
      uVar31 = *(undefined8 *)(param_1 + 10);
      uVar15 = *(undefined8 *)puVar25;
      uVar32 = *(undefined8 *)puVar26;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar25 = uVar32;
      *(undefined8 *)(param_2 + -2) = uVar31;
      *(undefined8 *)puVar26 = uVar15;
      if (*puVar25 < *puVar8) {
        uVar31 = *(undefined8 *)(param_1 + 6);
        uVar15 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
        *(undefined8 *)(param_1 + 10) = uVar31;
        *(undefined8 *)puVar25 = uVar15;
        goto LAB_109281d40;
      }
    }
  }
  else {
    if (uVar13 != 5) goto LAB_109281adc;
    param_5 = param_2 + -4;
    puVar9 = param_1 + 4;
    param_3 = param_1 + 8;
    param_4 = param_1 + 0xc;
    FUN_1092818a4();
  }
  bVar6 = true;
  param_2 = puVar9;
LAB_109281d64:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail(bVar6);
  puVar9 = (uint *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar25 = param_2;
  puVar26 = param_3;
  puVar27 = param_4;
  do {
    puVar11 = puVar25 + -4;
    puVar29 = puVar25 + -8;
    puVar30 = puVar25 + -0xc;
    puVar28 = puVar8;
LAB_109281e04:
    puVar8 = puVar28;
    uVar13 = (long)puVar25 - (long)puVar8 >> 4;
    if (uVar13 - 2 != 0 && 1 < (long)uVar13) {
      if (uVar13 == 3) {
        puVar26 = puVar8 + 4;
        uVar23 = *puVar26;
        puVar27 = puVar25 + -4;
        if (uVar23 < *puVar8) {
          if (*puVar27 < uVar23) goto LAB_1092824b4;
          uVar31 = *(undefined8 *)(puVar8 + 2);
          uVar15 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 6) = uVar31;
          *(undefined8 *)puVar26 = uVar15;
          if (*puVar27 < puVar8[4]) {
            uVar31 = *(undefined8 *)(puVar8 + 6);
            uVar15 = *(undefined8 *)puVar26;
            uVar32 = *(undefined8 *)puVar27;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar25 + -2);
            *(undefined8 *)puVar26 = uVar32;
            goto LAB_1092824c8;
          }
          break;
        }
        if (uVar23 <= *puVar27) break;
        uVar31 = *(undefined8 *)(puVar8 + 6);
        uVar15 = *(undefined8 *)puVar26;
        uVar32 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar25 + -2);
        *(undefined8 *)puVar26 = uVar32;
        *(undefined8 *)(puVar25 + -2) = uVar31;
        *(undefined8 *)puVar27 = uVar15;
      }
      else {
        if (uVar13 != 4) {
          if (uVar13 != 5) goto LAB_109281e40;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_1092829ac;
          param_2 = puVar8 + 4;
          param_3 = puVar8 + 8;
          param_4 = puVar8 + 0xc;
          goto FUN_1092829b0;
        }
        puVar26 = puVar8 + 4;
        uVar23 = *puVar26;
        puVar27 = puVar8 + 8;
        uVar2 = *puVar27;
        if (uVar23 < *puVar8) {
          if (uVar2 < uVar23) {
            uVar31 = *(undefined8 *)(puVar8 + 2);
            uVar15 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar27;
          }
          else {
            uVar31 = *(undefined8 *)(puVar8 + 2);
            uVar15 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar8 + 6) = uVar31;
            *(undefined8 *)puVar26 = uVar15;
            if (puVar8[4] <= uVar2) goto LAB_109282908;
            uVar31 = *(undefined8 *)(puVar8 + 6);
            uVar15 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar26 = *(undefined8 *)puVar27;
          }
          *(undefined8 *)(puVar8 + 10) = uVar31;
          *(undefined8 *)puVar27 = uVar15;
        }
        else if (uVar2 < uVar23) {
          uVar31 = *(undefined8 *)(puVar8 + 6);
          uVar15 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
          *(undefined8 *)puVar26 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 10) = uVar31;
          *(undefined8 *)puVar27 = uVar15;
          if (puVar8[4] < *puVar8) {
            uVar31 = *(undefined8 *)(puVar8 + 2);
            uVar15 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar8 + 6) = uVar31;
            *(undefined8 *)puVar26 = uVar15;
          }
        }
LAB_109282908:
        if (*puVar27 <= *puVar11) break;
        uVar31 = *(undefined8 *)(puVar8 + 10);
        uVar15 = *(undefined8 *)puVar27;
        uVar32 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar25 + -2);
        *(undefined8 *)puVar27 = uVar32;
        *(undefined8 *)(puVar25 + -2) = uVar31;
        *(undefined8 *)puVar11 = uVar15;
        if (*puVar26 <= *puVar27) break;
        uVar31 = *(undefined8 *)(puVar8 + 6);
        uVar15 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)puVar26 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar8 + 10) = uVar31;
        *(undefined8 *)puVar27 = uVar15;
      }
      puVar25 = puVar8 + 4;
      if (*puVar25 < *puVar8) {
        uVar31 = *(undefined8 *)(puVar8 + 2);
        uVar15 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 6) = uVar31;
        *(undefined8 *)puVar25 = uVar15;
      }
      break;
    }
    if (uVar13 < 2) break;
    if (uVar13 == 2) {
      if (puVar25[-4] < *puVar8) {
LAB_1092824b4:
        uVar31 = *(undefined8 *)(puVar8 + 2);
        uVar15 = *(undefined8 *)puVar8;
        uVar32 = *(undefined8 *)(puVar25 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar25 + -2);
        *(undefined8 *)puVar8 = uVar32;
LAB_1092824c8:
        *(undefined8 *)(puVar25 + -2) = uVar31;
        *(undefined8 *)(puVar25 + -4) = uVar15;
      }
      break;
    }
LAB_109281e40:
    if ((long)uVar13 < 0x18) {
      puVar26 = puVar8 + 4;
      if (((ulong)puVar27 & 1) == 0) {
        if (puVar8 != puVar25 && puVar26 != puVar25) {
          do {
            puVar27 = puVar26;
            uVar23 = puVar8[4];
            if (uVar23 < *puVar8) {
              uVar15 = *(undefined8 *)(puVar8 + 5);
              uVar2 = puVar8[7];
              puVar8 = puVar27;
              do {
                puVar26 = puVar8;
                *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar26 + -2);
                *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + -4);
                puVar8 = puVar26 + -4;
              } while (uVar23 < puVar26[-8]);
              puVar26[-4] = uVar23;
              puVar26[-1] = uVar2;
              *(undefined8 *)(puVar26 + -3) = uVar15;
            }
            puVar26 = puVar27 + 4;
            puVar8 = puVar27;
          } while (puVar27 + 4 != puVar25);
        }
        break;
      }
      if (puVar8 == puVar25 || puVar26 == puVar25) break;
      lVar20 = 0;
      puVar27 = puVar8;
      goto LAB_10928252c;
    }
    if (puVar26 == (uint *)0x0) {
      if (puVar8 == puVar25) break;
      uVar16 = uVar13 - 2 >> 1;
      uVar17 = uVar16;
      goto LAB_1092825c0;
    }
    puVar28 = puVar8 + (uVar13 >> 1) * 4;
    uVar23 = *puVar11;
    if (uVar13 < 0x81) {
      uVar2 = *puVar8;
      if (uVar2 < *puVar28) {
        if (uVar23 < uVar2) {
          uStack_1f8 = *(undefined8 *)(puVar28 + 2);
          uStack_200 = *(undefined8 *)puVar28;
          uVar15 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar25 + -2);
          *(undefined8 *)puVar28 = uVar15;
        }
        else {
          uVar32 = *(undefined8 *)(puVar28 + 2);
          uVar15 = *(undefined8 *)puVar28;
          uVar31 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar28 = uVar31;
          *(undefined8 *)(puVar8 + 2) = uVar32;
          *(undefined8 *)puVar8 = uVar15;
          if (*puVar8 <= *puVar11) goto LAB_109282220;
          uStack_1f8 = *(undefined8 *)(puVar8 + 2);
          uStack_200 = *(undefined8 *)puVar8;
          uVar15 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar25 + -2);
          *(undefined8 *)puVar8 = uVar15;
        }
        *(undefined8 *)(puVar25 + -2) = uStack_1f8;
        *(undefined8 *)puVar11 = uStack_200;
      }
      else if (uVar23 < uVar2) {
        uVar32 = *(undefined8 *)(puVar8 + 2);
        uVar15 = *(undefined8 *)puVar8;
        uVar31 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar25 + -2);
        *(undefined8 *)puVar8 = uVar31;
        *(undefined8 *)(puVar25 + -2) = uVar32;
        *(undefined8 *)puVar11 = uVar15;
        if (*puVar8 < *puVar28) {
          uVar32 = *(undefined8 *)(puVar28 + 2);
          uVar15 = *(undefined8 *)puVar28;
          uVar31 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar28 = uVar31;
          *(undefined8 *)(puVar8 + 2) = uVar32;
          *(undefined8 *)puVar8 = uVar15;
        }
      }
    }
    else {
      uVar2 = *puVar28;
      if (uVar2 < *puVar8) {
        if (uVar23 < uVar2) {
          uStack_1f8 = *(undefined8 *)(puVar8 + 2);
          uStack_200 = *(undefined8 *)puVar8;
          uVar15 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar25 + -2);
          *(undefined8 *)puVar8 = uVar15;
        }
        else {
          uVar32 = *(undefined8 *)(puVar8 + 2);
          uVar15 = *(undefined8 *)puVar8;
          uVar31 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar28 + 2);
          *(undefined8 *)puVar8 = uVar31;
          *(undefined8 *)(puVar28 + 2) = uVar32;
          *(undefined8 *)puVar28 = uVar15;
          if (*puVar28 <= *puVar11) goto LAB_109281f90;
          uStack_1f8 = *(undefined8 *)(puVar28 + 2);
          uStack_200 = *(undefined8 *)puVar28;
          uVar15 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar25 + -2);
          *(undefined8 *)puVar28 = uVar15;
        }
        *(undefined8 *)(puVar25 + -2) = uStack_1f8;
        *(undefined8 *)puVar11 = uStack_200;
      }
      else if (uVar23 < uVar2) {
        uVar32 = *(undefined8 *)(puVar28 + 2);
        uVar15 = *(undefined8 *)puVar28;
        uVar31 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar25 + -2);
        *(undefined8 *)puVar28 = uVar31;
        *(undefined8 *)(puVar25 + -2) = uVar32;
        *(undefined8 *)puVar11 = uVar15;
        if (*puVar28 < *puVar8) {
          uVar32 = *(undefined8 *)(puVar8 + 2);
          uVar15 = *(undefined8 *)puVar8;
          uVar31 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar28 + 2);
          *(undefined8 *)puVar8 = uVar31;
          *(undefined8 *)(puVar28 + 2) = uVar32;
          *(undefined8 *)puVar28 = uVar15;
        }
      }
LAB_109281f90:
      puVar10 = puVar8 + 4;
      puVar7 = puVar28 + -4;
      uVar23 = *puVar7;
      if (uVar23 < *puVar10) {
        if (*puVar29 < uVar23) {
          uVar32 = *(undefined8 *)(puVar8 + 6);
          uVar31 = *(undefined8 *)puVar10;
          uVar15 = *(undefined8 *)puVar29;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar25 + -6);
          *(undefined8 *)puVar10 = uVar15;
        }
        else {
          uVar31 = *(undefined8 *)(puVar8 + 6);
          uVar15 = *(undefined8 *)puVar10;
          uVar32 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar28 + -2);
          *(undefined8 *)puVar10 = uVar32;
          *(undefined8 *)(puVar28 + -2) = uVar31;
          *(undefined8 *)puVar7 = uVar15;
          if (*puVar7 <= *puVar29) goto LAB_109282090;
          uVar32 = *(undefined8 *)(puVar28 + -2);
          uVar31 = *(undefined8 *)puVar7;
          uVar15 = *(undefined8 *)puVar29;
          *(undefined8 *)(puVar28 + -2) = *(undefined8 *)(puVar25 + -6);
          *(undefined8 *)puVar7 = uVar15;
        }
        *(undefined8 *)(puVar25 + -6) = uVar32;
        *(undefined8 *)puVar29 = uVar31;
      }
      else if (*puVar29 < uVar23) {
        uVar32 = *(undefined8 *)(puVar28 + -2);
        uVar15 = *(undefined8 *)puVar7;
        uVar31 = *(undefined8 *)puVar29;
        *(undefined8 *)(puVar28 + -2) = *(undefined8 *)(puVar25 + -6);
        *(undefined8 *)puVar7 = uVar31;
        *(undefined8 *)(puVar25 + -6) = uVar32;
        *(undefined8 *)puVar29 = uVar15;
        if (*puVar7 < *puVar10) {
          uVar31 = *(undefined8 *)(puVar8 + 6);
          uVar15 = *(undefined8 *)puVar10;
          uVar32 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar28 + -2);
          *(undefined8 *)puVar10 = uVar32;
          *(undefined8 *)(puVar28 + -2) = uVar31;
          *(undefined8 *)puVar7 = uVar15;
        }
      }
LAB_109282090:
      puVar19 = puVar8 + 8;
      puVar10 = puVar28 + 4;
      uVar23 = *puVar10;
      if (uVar23 < *puVar19) {
        if (*puVar30 < uVar23) {
          uVar32 = *(undefined8 *)(puVar8 + 10);
          uVar31 = *(undefined8 *)puVar19;
          uVar15 = *(undefined8 *)puVar30;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar25 + -10);
          *(undefined8 *)puVar19 = uVar15;
        }
        else {
          uVar31 = *(undefined8 *)(puVar8 + 10);
          uVar15 = *(undefined8 *)puVar19;
          uVar32 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar28 + 6);
          *(undefined8 *)puVar19 = uVar32;
          *(undefined8 *)(puVar28 + 6) = uVar31;
          *(undefined8 *)puVar10 = uVar15;
          if (*puVar10 <= *puVar30) goto LAB_10928214c;
          uVar32 = *(undefined8 *)(puVar28 + 6);
          uVar31 = *(undefined8 *)puVar10;
          uVar15 = *(undefined8 *)puVar30;
          *(undefined8 *)(puVar28 + 6) = *(undefined8 *)(puVar25 + -10);
          *(undefined8 *)puVar10 = uVar15;
        }
        *(undefined8 *)(puVar25 + -10) = uVar32;
        *(undefined8 *)puVar30 = uVar31;
      }
      else if (*puVar30 < uVar23) {
        uVar32 = *(undefined8 *)(puVar28 + 6);
        uVar15 = *(undefined8 *)puVar10;
        uVar31 = *(undefined8 *)puVar30;
        *(undefined8 *)(puVar28 + 6) = *(undefined8 *)(puVar25 + -10);
        *(undefined8 *)puVar10 = uVar31;
        *(undefined8 *)(puVar25 + -10) = uVar32;
        *(undefined8 *)puVar30 = uVar15;
        if (*puVar10 < *puVar19) {
          uVar31 = *(undefined8 *)(puVar8 + 10);
          uVar15 = *(undefined8 *)puVar19;
          uVar32 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar28 + 6);
          *(undefined8 *)puVar19 = uVar32;
          *(undefined8 *)(puVar28 + 6) = uVar31;
          *(undefined8 *)puVar10 = uVar15;
        }
      }
LAB_10928214c:
      uVar23 = *puVar28;
      if (uVar23 < puVar28[-4]) {
        if (puVar28[4] < uVar23) {
          uStack_1f8 = *(undefined8 *)(puVar28 + -2);
          uStack_200 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar28 + -2) = *(undefined8 *)(puVar28 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar10;
        }
        else {
          uVar31 = *(undefined8 *)(puVar28 + -2);
          uVar15 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar28 + -2) = *(undefined8 *)(puVar28 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar28 + 2) = uVar31;
          *(undefined8 *)puVar28 = uVar15;
          if (*puVar28 <= puVar28[4]) goto LAB_109282208;
          uStack_1f8 = *(undefined8 *)(puVar28 + 2);
          uStack_200 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar28 + 6);
          *(undefined8 *)puVar28 = *(undefined8 *)puVar10;
        }
        *(undefined8 *)(puVar28 + 6) = uStack_1f8;
        *(undefined8 *)puVar10 = uStack_200;
      }
      else if (puVar28[4] < uVar23) {
        uVar31 = *(undefined8 *)(puVar28 + 2);
        uVar15 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar28 + 6);
        *(undefined8 *)puVar28 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar28 + 6) = uVar31;
        *(undefined8 *)puVar10 = uVar15;
        if (*puVar28 < puVar28[-4]) {
          uVar31 = *(undefined8 *)(puVar28 + -2);
          uVar15 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar28 + -2) = *(undefined8 *)(puVar28 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar28 + 2) = uVar31;
          *(undefined8 *)puVar28 = uVar15;
        }
      }
LAB_109282208:
      uVar32 = *(undefined8 *)(puVar8 + 2);
      uVar15 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)puVar28;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar28 + 2);
      *(undefined8 *)puVar8 = uVar31;
      *(undefined8 *)(puVar28 + 2) = uVar32;
      *(undefined8 *)puVar28 = uVar15;
    }
LAB_109282220:
    puVar26 = (uint *)((long)puVar26 + -1);
    uVar23 = *puVar8;
    if ((((ulong)puVar27 & 1) == 0) && (uVar23 <= puVar8[-4])) {
      uVar15 = *(undefined8 *)(puVar8 + 1);
      uVar2 = puVar8[3];
      puVar28 = puVar8;
      if (uVar23 < *puVar11) {
        do {
          puVar28 = puVar28 + 4;
        } while (*puVar28 <= uVar23);
      }
      else {
        do {
          puVar28 = puVar28 + 4;
          if (puVar25 <= puVar28) break;
        } while (*puVar28 <= uVar23);
      }
      puVar27 = puVar25;
      if (puVar28 < puVar25) {
        do {
          puVar27 = puVar27 + -4;
        } while (uVar23 < *puVar27);
      }
      while (puVar28 < puVar27) {
        uVar33 = *(undefined8 *)(puVar28 + 2);
        uVar31 = *(undefined8 *)puVar28;
        uVar32 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar27 + 2);
        *(undefined8 *)puVar28 = uVar32;
        *(undefined8 *)(puVar27 + 2) = uVar33;
        *(undefined8 *)puVar27 = uVar31;
        do {
          puVar28 = puVar28 + 4;
        } while (*puVar28 <= uVar23);
        do {
          puVar27 = puVar27 + -4;
        } while (uVar23 < *puVar27);
      }
      if (puVar28 + -4 != puVar8) {
        uVar31 = *(undefined8 *)(puVar28 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar28 + -2);
        *(undefined8 *)puVar8 = uVar31;
      }
      puVar27 = (uint *)0x0;
      puVar28[-4] = uVar23;
      puVar28[-1] = uVar2;
      *(undefined8 *)(puVar28 + -3) = uVar15;
      goto LAB_109281e04;
    }
    lVar20 = 0;
    uVar15 = *(undefined8 *)(puVar8 + 1);
    uVar2 = puVar8[3];
    do {
      lVar5 = lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    } while (*(uint *)((long)puVar8 + lVar5) < uVar23);
    puVar9 = (uint *)((long)puVar8 + lVar20);
    puVar7 = puVar25;
    if (lVar20 == 0x10) {
      do {
        if (puVar7 <= puVar9) break;
        puVar7 = puVar7 + -4;
      } while (uVar23 <= *puVar7);
    }
    else {
      do {
        puVar7 = puVar7 + -4;
      } while (uVar23 <= *puVar7);
    }
    puVar10 = puVar7;
    puVar28 = puVar9;
    if (puVar9 < puVar7) {
      do {
        uVar33 = *(undefined8 *)(puVar28 + 2);
        uVar31 = *(undefined8 *)puVar28;
        uVar32 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar28 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)puVar28 = uVar32;
        *(undefined8 *)(puVar10 + 2) = uVar33;
        *(undefined8 *)puVar10 = uVar31;
        do {
          puVar28 = puVar28 + 4;
        } while (*puVar28 < uVar23);
        do {
          puVar10 = puVar10 + -4;
        } while (uVar23 <= *puVar10);
      } while (puVar28 < puVar10);
    }
    puVar10 = puVar28 + -4;
    if (puVar10 != puVar8) {
      uVar31 = *(undefined8 *)puVar10;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar28 + -2);
      *(undefined8 *)puVar8 = uVar31;
    }
    puVar28[-4] = uVar23;
    puVar28[-1] = uVar2;
    *(undefined8 *)(puVar28 + -3) = uVar15;
    if (puVar9 < puVar7) goto LAB_109282334;
    puVar7 = puVar8;
    FUN_109282b34(puVar8,puVar10);
    puVar9 = puVar28;
    param_2 = puVar25;
    FUN_109282b34();
    if ((int)puVar9 == 0) goto code_r0x000109282330;
    puVar25 = puVar10;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_109282974;
LAB_10928252c:
  do {
    puVar28 = puVar26;
    uVar23 = puVar27[4];
    if (uVar23 < *puVar27) {
      uVar15 = *(undefined8 *)(puVar27 + 5);
      uVar2 = puVar27[7];
      lVar5 = lVar20;
      do {
        lVar14 = lVar5;
        puVar1 = (undefined8 *)((long)puVar8 + lVar14);
        puVar1[3] = puVar1[1];
        puVar1[2] = *puVar1;
        puVar26 = puVar8;
        if (lVar14 == 0) goto LAB_109282584;
        lVar5 = lVar14 + -0x10;
      } while (uVar23 < *(uint *)(puVar1 + -2));
      puVar26 = (uint *)((long)puVar8 + lVar14);
LAB_109282584:
      *puVar26 = uVar23;
      puVar26[3] = uVar2;
      *(undefined8 *)(puVar26 + 1) = uVar15;
    }
    puVar26 = puVar28 + 4;
    lVar20 = lVar20 + 0x10;
    puVar27 = puVar28;
  } while (puVar26 != puVar25);
  goto LAB_109282974;
code_r0x000109282330:
  if (((ulong)puVar7 & 1) == 0) {
LAB_109282334:
    param_4 = (uint *)(ulong)((uint)puVar27 & 1);
    param_3 = puVar26;
    FUN_109281db4();
    puVar27 = (uint *)0x0;
    puVar9 = puVar8;
    param_2 = puVar10;
  }
  goto LAB_109281e04;
LAB_1092825c0:
  do {
    if ((long)uVar17 <= (long)uVar16) {
      uVar22 = uVar17 << 1 | 1;
      puVar26 = puVar8 + uVar22 * 4;
      uVar21 = uVar17 * 2 + 2;
      if ((long)uVar21 < (long)uVar13) {
        uVar2 = *puVar26;
        uVar24 = puVar26[4];
        uVar23 = uVar2;
        if (uVar2 <= uVar24) {
          uVar23 = uVar24;
        }
        puVar27 = puVar26 + 4;
        if (uVar24 <= uVar2) {
          puVar27 = puVar26;
          uVar21 = uVar22;
        }
      }
      else {
        uVar23 = *puVar26;
        puVar27 = puVar26;
        uVar21 = uVar22;
      }
      puVar26 = puVar8 + uVar17 * 4;
      uVar2 = *puVar26;
      if (uVar2 <= uVar23) {
        uVar15 = *(undefined8 *)(puVar26 + 1);
        uVar23 = puVar26[3];
        do {
          puVar28 = puVar27;
          uVar31 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar28 + 2);
          *(undefined8 *)puVar26 = uVar31;
          if ((long)uVar16 < (long)uVar21) break;
          uVar22 = uVar21 << 1 | 1;
          puVar26 = puVar8 + uVar22 * 4;
          uVar21 = uVar21 * 2 + 2;
          if ((long)uVar21 < (long)uVar13) {
            uVar3 = *puVar26;
            uVar4 = puVar26[4];
            puVar9 = (uint *)(ulong)uVar4;
            uVar24 = uVar3;
            if (uVar3 <= uVar4) {
              uVar24 = uVar4;
            }
            puVar27 = puVar26 + 4;
            if (uVar4 <= uVar3) {
              puVar27 = puVar26;
              uVar21 = uVar22;
            }
          }
          else {
            uVar24 = *puVar26;
            puVar27 = puVar26;
            uVar21 = uVar22;
          }
          puVar26 = puVar28;
        } while (uVar2 <= uVar24);
        *puVar28 = uVar2;
        puVar28[3] = uVar23;
        *(undefined8 *)(puVar28 + 1) = uVar15;
      }
    }
    bVar6 = uVar17 != 0;
    uVar17 = uVar17 - 1;
  } while (bVar6);
  do {
    uVar31 = *(undefined8 *)(puVar8 + 2);
    uVar15 = *(undefined8 *)puVar8;
    puVar26 = puVar8;
    uVar17 = 0;
    do {
      uVar21 = uVar17 << 1 | 1;
      uVar16 = uVar17 * 2 + 2;
      puVar27 = puVar26 + uVar17 * 4 + 4;
      uVar22 = uVar21;
      if (((long)uVar16 < (long)uVar13) &&
         (puVar27 = puVar26 + uVar17 * 4 + 8, uVar22 = uVar16,
         puVar26[uVar17 * 4 + 8] <= puVar26[uVar17 * 4 + 4])) {
        puVar27 = puVar26 + uVar17 * 4 + 4;
        uVar22 = uVar21;
      }
      uVar32 = *(undefined8 *)puVar27;
      *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar27 + 2);
      *(undefined8 *)puVar26 = uVar32;
      puVar26 = puVar27;
      uVar17 = uVar22;
    } while ((long)uVar22 <= (long)(uVar13 - 2 >> 1));
    puVar26 = puVar25 + -4;
    if (puVar27 == puVar26) {
      *(undefined8 *)(puVar27 + 2) = uVar31;
      *(undefined8 *)puVar27 = uVar15;
    }
    else {
      uVar32 = *(undefined8 *)puVar26;
      *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar25 + -2);
      *(undefined8 *)puVar27 = uVar32;
      *(undefined8 *)(puVar25 + -2) = uVar31;
      *(undefined8 *)puVar26 = uVar15;
      lVar20 = (long)((long)puVar27 + (0x10 - (long)puVar8)) >> 4;
      if (1 < lVar20) {
        uVar17 = lVar20 - 2U >> 1;
        uVar23 = *puVar27;
        if (puVar8[uVar17 * 4] < uVar23) {
          uVar15 = *(undefined8 *)(puVar27 + 1);
          uVar2 = puVar27[3];
          puVar25 = puVar8 + uVar17 * 4;
          do {
            puVar28 = puVar25;
            uVar31 = *(undefined8 *)puVar28;
            *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar28 + 2);
            *(undefined8 *)puVar27 = uVar31;
            if (uVar17 == 0) break;
            uVar17 = uVar17 - 1 >> 1;
            puVar27 = puVar28;
            puVar25 = puVar8 + uVar17 * 4;
          } while (puVar8[uVar17 * 4] < uVar23);
          *puVar28 = uVar23;
          puVar28[3] = uVar2;
          *(undefined8 *)(puVar28 + 1) = uVar15;
        }
      }
    }
    bVar6 = 2 < (long)uVar13;
    uVar13 = uVar13 - 1;
    puVar25 = puVar26;
  } while (bVar6);
LAB_109282974:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
LAB_1092829ac:
  puVar11 = param_5;
  puVar8 = puVar9;
  ___stack_chk_fail();
FUN_1092829b0:
  uVar23 = *param_2;
  if (uVar23 < *puVar8) {
    if (*param_3 < uVar23) {
      uVar31 = *(undefined8 *)(puVar8 + 2);
      uVar15 = *(undefined8 *)puVar8;
      uVar32 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar8 = uVar32;
    }
    else {
      uVar31 = *(undefined8 *)(puVar8 + 2);
      uVar15 = *(undefined8 *)puVar8;
      uVar32 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar32;
      *(undefined8 *)(param_2 + 2) = uVar31;
      *(undefined8 *)param_2 = uVar15;
      if (*param_2 <= *param_3) goto LAB_109282a4c;
      uVar31 = *(undefined8 *)(param_2 + 2);
      uVar15 = *(undefined8 *)param_2;
      uVar32 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar32;
    }
    *(undefined8 *)(param_3 + 2) = uVar31;
    *(undefined8 *)param_3 = uVar15;
  }
  else if (*param_3 < uVar23) {
    uVar31 = *(undefined8 *)(param_2 + 2);
    uVar15 = *(undefined8 *)param_2;
    uVar32 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar32;
    *(undefined8 *)(param_3 + 2) = uVar31;
    *(undefined8 *)param_3 = uVar15;
    if (*param_2 < *puVar8) {
      uVar31 = *(undefined8 *)(puVar8 + 2);
      uVar15 = *(undefined8 *)puVar8;
      uVar32 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar32;
      *(undefined8 *)(param_2 + 2) = uVar31;
      *(undefined8 *)param_2 = uVar15;
    }
  }
LAB_109282a4c:
  if (*param_4 < *param_3) {
    uVar31 = *(undefined8 *)(param_3 + 2);
    uVar15 = *(undefined8 *)param_3;
    uVar32 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar32;
    *(undefined8 *)(param_4 + 2) = uVar31;
    *(undefined8 *)param_4 = uVar15;
    if (*param_3 < *param_2) {
      uVar31 = *(undefined8 *)(param_2 + 2);
      uVar15 = *(undefined8 *)param_2;
      uVar32 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar32;
      *(undefined8 *)(param_3 + 2) = uVar31;
      *(undefined8 *)param_3 = uVar15;
      if (*param_2 < *puVar8) {
        uVar31 = *(undefined8 *)(puVar8 + 2);
        uVar15 = *(undefined8 *)puVar8;
        uVar32 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar8 = uVar32;
        *(undefined8 *)(param_2 + 2) = uVar31;
        *(undefined8 *)param_2 = uVar15;
      }
    }
  }
  if (*puVar11 < *param_4) {
    uVar31 = *(undefined8 *)(param_4 + 2);
    uVar15 = *(undefined8 *)param_4;
    uVar32 = *(undefined8 *)puVar11;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)param_4 = uVar32;
    *(undefined8 *)(puVar11 + 2) = uVar31;
    *(undefined8 *)puVar11 = uVar15;
    if (*param_4 < *param_3) {
      uVar31 = *(undefined8 *)(param_3 + 2);
      uVar15 = *(undefined8 *)param_3;
      uVar32 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar32;
      *(undefined8 *)(param_4 + 2) = uVar31;
      *(undefined8 *)param_4 = uVar15;
      if (*param_3 < *param_2) {
        uVar31 = *(undefined8 *)(param_2 + 2);
        uVar15 = *(undefined8 *)param_2;
        uVar32 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar32;
        *(undefined8 *)(param_3 + 2) = uVar31;
        *(undefined8 *)param_3 = uVar15;
        if (*param_2 < *puVar8) {
          uVar31 = *(undefined8 *)(puVar8 + 2);
          uVar15 = *(undefined8 *)puVar8;
          uVar32 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar8 = uVar32;
          *(undefined8 *)(param_2 + 2) = uVar31;
          *(undefined8 *)param_2 = uVar15;
        }
      }
    }
  }
  return;
}



/* Entry: 109281da0; end: 109281db3;  */

void FUN_109281da0(undefined8 param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar9 = (uint *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar9;
  puVar24 = param_2;
  puVar25 = param_3;
  puVar26 = param_4;
  do {
    puVar11 = puVar24 + -4;
    puVar28 = puVar24 + -8;
    puVar29 = puVar24 + -0xc;
    puVar27 = puVar8;
LAB_109281e04:
    puVar8 = puVar27;
    uVar13 = (long)puVar24 - (long)puVar8 >> 4;
    if (uVar13 - 2 != 0 && 1 < (long)uVar13) {
      if (uVar13 == 3) {
        puVar25 = puVar8 + 4;
        uVar22 = *puVar25;
        puVar26 = puVar24 + -4;
        if (uVar22 < *puVar8) {
          if (*puVar26 < uVar22) goto LAB_1092824b4;
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar8 + 6) = uVar30;
          *(undefined8 *)puVar25 = uVar14;
          if (*puVar26 < puVar8[4]) {
            uVar30 = *(undefined8 *)(puVar8 + 6);
            uVar14 = *(undefined8 *)puVar25;
            uVar31 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar24 + -2);
            *(undefined8 *)puVar25 = uVar31;
            goto LAB_1092824c8;
          }
          break;
        }
        if (uVar22 <= *puVar26) break;
        uVar30 = *(undefined8 *)(puVar8 + 6);
        uVar14 = *(undefined8 *)puVar25;
        uVar31 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar25 = uVar31;
        *(undefined8 *)(puVar24 + -2) = uVar30;
        *(undefined8 *)puVar26 = uVar14;
      }
      else {
        if (uVar13 != 4) {
          if (uVar13 != 5) goto LAB_109281e40;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) goto LAB_1092829ac;
          param_2 = puVar8 + 4;
          param_3 = puVar8 + 8;
          param_4 = puVar8 + 0xc;
          goto FUN_1092829b0;
        }
        puVar25 = puVar8 + 4;
        uVar22 = *puVar25;
        puVar26 = puVar8 + 8;
        uVar3 = *puVar26;
        if (uVar22 < *puVar8) {
          if (uVar3 < uVar22) {
            uVar30 = *(undefined8 *)(puVar8 + 2);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar26;
          }
          else {
            uVar30 = *(undefined8 *)(puVar8 + 2);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = uVar30;
            *(undefined8 *)puVar25 = uVar14;
            if (puVar8[4] <= uVar3) goto LAB_109282908;
            uVar30 = *(undefined8 *)(puVar8 + 6);
            uVar14 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
          }
          *(undefined8 *)(puVar8 + 10) = uVar30;
          *(undefined8 *)puVar26 = uVar14;
        }
        else if (uVar3 < uVar22) {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar14 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
          *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 10) = uVar30;
          *(undefined8 *)puVar26 = uVar14;
          if (puVar8[4] < *puVar8) {
            uVar30 = *(undefined8 *)(puVar8 + 2);
            uVar14 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = uVar30;
            *(undefined8 *)puVar25 = uVar14;
          }
        }
LAB_109282908:
        if (*puVar26 <= *puVar11) break;
        uVar30 = *(undefined8 *)(puVar8 + 10);
        uVar14 = *(undefined8 *)puVar26;
        uVar31 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar26 = uVar31;
        *(undefined8 *)(puVar24 + -2) = uVar30;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar25 <= *puVar26) break;
        uVar30 = *(undefined8 *)(puVar8 + 6);
        uVar14 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)puVar25 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar8 + 10) = uVar30;
        *(undefined8 *)puVar26 = uVar14;
      }
      puVar24 = puVar8 + 4;
      if (*puVar24 < *puVar8) {
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
        *(undefined8 *)(puVar8 + 6) = uVar30;
        *(undefined8 *)puVar24 = uVar14;
      }
      break;
    }
    if (uVar13 < 2) break;
    if (uVar13 == 2) {
      if (puVar24[-4] < *puVar8) {
LAB_1092824b4:
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        uVar31 = *(undefined8 *)(puVar24 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar8 = uVar31;
LAB_1092824c8:
        *(undefined8 *)(puVar24 + -2) = uVar30;
        *(undefined8 *)(puVar24 + -4) = uVar14;
      }
      break;
    }
LAB_109281e40:
    if ((long)uVar13 < 0x18) {
      puVar25 = puVar8 + 4;
      if (((ulong)puVar26 & 1) == 0) {
        if (puVar8 != puVar24 && puVar25 != puVar24) {
          do {
            puVar26 = puVar25;
            uVar22 = puVar8[4];
            if (uVar22 < *puVar8) {
              uVar14 = *(undefined8 *)(puVar8 + 5);
              uVar3 = puVar8[7];
              puVar8 = puVar26;
              do {
                puVar25 = puVar8;
                *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar25 + -2);
                *(undefined8 *)puVar25 = *(undefined8 *)(puVar25 + -4);
                puVar8 = puVar25 + -4;
              } while (uVar22 < puVar25[-8]);
              puVar25[-4] = uVar22;
              puVar25[-1] = uVar3;
              *(undefined8 *)(puVar25 + -3) = uVar14;
            }
            puVar25 = puVar26 + 4;
            puVar8 = puVar26;
          } while (puVar26 + 4 != puVar24);
        }
        break;
      }
      if (puVar8 == puVar24 || puVar25 == puVar24) break;
      lVar18 = 0;
      puVar26 = puVar8;
      goto LAB_10928252c;
    }
    if (puVar25 == (uint *)0x0) {
      if (puVar8 == puVar24) break;
      uVar15 = uVar13 - 2 >> 1;
      uVar16 = uVar15;
      goto LAB_1092825c0;
    }
    puVar27 = puVar8 + (uVar13 >> 1) * 4;
    uVar22 = *puVar11;
    if (uVar13 < 0x81) {
      uVar3 = *puVar8;
      if (uVar3 < *puVar27) {
        if (uVar22 < uVar3) {
          uStack_88 = *(undefined8 *)(puVar27 + 2);
          uStack_90 = *(undefined8 *)puVar27;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar27 = uVar14;
        }
        else {
          uVar31 = *(undefined8 *)(puVar27 + 2);
          uVar14 = *(undefined8 *)puVar27;
          uVar30 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar27 = uVar30;
          *(undefined8 *)(puVar8 + 2) = uVar31;
          *(undefined8 *)puVar8 = uVar14;
          if (*puVar8 <= *puVar11) goto LAB_109282220;
          uStack_88 = *(undefined8 *)(puVar8 + 2);
          uStack_90 = *(undefined8 *)puVar8;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar8 = uVar14;
        }
        *(undefined8 *)(puVar24 + -2) = uStack_88;
        *(undefined8 *)puVar11 = uStack_90;
      }
      else if (uVar22 < uVar3) {
        uVar31 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        uVar30 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar8 = uVar30;
        *(undefined8 *)(puVar24 + -2) = uVar31;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar8 < *puVar27) {
          uVar31 = *(undefined8 *)(puVar27 + 2);
          uVar14 = *(undefined8 *)puVar27;
          uVar30 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar27 = uVar30;
          *(undefined8 *)(puVar8 + 2) = uVar31;
          *(undefined8 *)puVar8 = uVar14;
        }
      }
    }
    else {
      uVar3 = *puVar27;
      if (uVar3 < *puVar8) {
        if (uVar22 < uVar3) {
          uStack_88 = *(undefined8 *)(puVar8 + 2);
          uStack_90 = *(undefined8 *)puVar8;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar8 = uVar14;
        }
        else {
          uVar31 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          uVar30 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar8 = uVar30;
          *(undefined8 *)(puVar27 + 2) = uVar31;
          *(undefined8 *)puVar27 = uVar14;
          if (*puVar27 <= *puVar11) goto LAB_109281f90;
          uStack_88 = *(undefined8 *)(puVar27 + 2);
          uStack_90 = *(undefined8 *)puVar27;
          uVar14 = *(undefined8 *)puVar11;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar24 + -2);
          *(undefined8 *)puVar27 = uVar14;
        }
        *(undefined8 *)(puVar24 + -2) = uStack_88;
        *(undefined8 *)puVar11 = uStack_90;
      }
      else if (uVar22 < uVar3) {
        uVar31 = *(undefined8 *)(puVar27 + 2);
        uVar14 = *(undefined8 *)puVar27;
        uVar30 = *(undefined8 *)puVar11;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar24 + -2);
        *(undefined8 *)puVar27 = uVar30;
        *(undefined8 *)(puVar24 + -2) = uVar31;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar27 < *puVar8) {
          uVar31 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          uVar30 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar8 = uVar30;
          *(undefined8 *)(puVar27 + 2) = uVar31;
          *(undefined8 *)puVar27 = uVar14;
        }
      }
LAB_109281f90:
      puVar10 = puVar8 + 4;
      puVar7 = puVar27 + -4;
      uVar22 = *puVar7;
      if (uVar22 < *puVar10) {
        if (*puVar28 < uVar22) {
          uVar31 = *(undefined8 *)(puVar8 + 6);
          uVar30 = *(undefined8 *)puVar10;
          uVar14 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar24 + -6);
          *(undefined8 *)puVar10 = uVar14;
        }
        else {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar14 = *(undefined8 *)puVar10;
          uVar31 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar27 + -2);
          *(undefined8 *)puVar10 = uVar31;
          *(undefined8 *)(puVar27 + -2) = uVar30;
          *(undefined8 *)puVar7 = uVar14;
          if (*puVar7 <= *puVar28) goto LAB_109282090;
          uVar31 = *(undefined8 *)(puVar27 + -2);
          uVar30 = *(undefined8 *)puVar7;
          uVar14 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar24 + -6);
          *(undefined8 *)puVar7 = uVar14;
        }
        *(undefined8 *)(puVar24 + -6) = uVar31;
        *(undefined8 *)puVar28 = uVar30;
      }
      else if (*puVar28 < uVar22) {
        uVar31 = *(undefined8 *)(puVar27 + -2);
        uVar14 = *(undefined8 *)puVar7;
        uVar30 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar24 + -6);
        *(undefined8 *)puVar7 = uVar30;
        *(undefined8 *)(puVar24 + -6) = uVar31;
        *(undefined8 *)puVar28 = uVar14;
        if (*puVar7 < *puVar10) {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar14 = *(undefined8 *)puVar10;
          uVar31 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar27 + -2);
          *(undefined8 *)puVar10 = uVar31;
          *(undefined8 *)(puVar27 + -2) = uVar30;
          *(undefined8 *)puVar7 = uVar14;
        }
      }
LAB_109282090:
      puVar17 = puVar8 + 8;
      puVar10 = puVar27 + 4;
      uVar22 = *puVar10;
      if (uVar22 < *puVar17) {
        if (*puVar29 < uVar22) {
          uVar31 = *(undefined8 *)(puVar8 + 10);
          uVar30 = *(undefined8 *)puVar17;
          uVar14 = *(undefined8 *)puVar29;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar24 + -10);
          *(undefined8 *)puVar17 = uVar14;
        }
        else {
          uVar30 = *(undefined8 *)(puVar8 + 10);
          uVar14 = *(undefined8 *)puVar17;
          uVar31 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar17 = uVar31;
          *(undefined8 *)(puVar27 + 6) = uVar30;
          *(undefined8 *)puVar10 = uVar14;
          if (*puVar10 <= *puVar29) goto LAB_10928214c;
          uVar31 = *(undefined8 *)(puVar27 + 6);
          uVar30 = *(undefined8 *)puVar10;
          uVar14 = *(undefined8 *)puVar29;
          *(undefined8 *)(puVar27 + 6) = *(undefined8 *)(puVar24 + -10);
          *(undefined8 *)puVar10 = uVar14;
        }
        *(undefined8 *)(puVar24 + -10) = uVar31;
        *(undefined8 *)puVar29 = uVar30;
      }
      else if (*puVar29 < uVar22) {
        uVar31 = *(undefined8 *)(puVar27 + 6);
        uVar14 = *(undefined8 *)puVar10;
        uVar30 = *(undefined8 *)puVar29;
        *(undefined8 *)(puVar27 + 6) = *(undefined8 *)(puVar24 + -10);
        *(undefined8 *)puVar10 = uVar30;
        *(undefined8 *)(puVar24 + -10) = uVar31;
        *(undefined8 *)puVar29 = uVar14;
        if (*puVar10 < *puVar17) {
          uVar30 = *(undefined8 *)(puVar8 + 10);
          uVar14 = *(undefined8 *)puVar17;
          uVar31 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar17 = uVar31;
          *(undefined8 *)(puVar27 + 6) = uVar30;
          *(undefined8 *)puVar10 = uVar14;
        }
      }
LAB_10928214c:
      uVar22 = *puVar27;
      if (uVar22 < puVar27[-4]) {
        if (puVar27[4] < uVar22) {
          uStack_88 = *(undefined8 *)(puVar27 + -2);
          uStack_90 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar10;
        }
        else {
          uVar30 = *(undefined8 *)(puVar27 + -2);
          uVar14 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar27 + 2) = uVar30;
          *(undefined8 *)puVar27 = uVar14;
          if (*puVar27 <= puVar27[4]) goto LAB_109282208;
          uStack_88 = *(undefined8 *)(puVar27 + 2);
          uStack_90 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar27 + 6);
          *(undefined8 *)puVar27 = *(undefined8 *)puVar10;
        }
        *(undefined8 *)(puVar27 + 6) = uStack_88;
        *(undefined8 *)puVar10 = uStack_90;
      }
      else if (puVar27[4] < uVar22) {
        uVar30 = *(undefined8 *)(puVar27 + 2);
        uVar14 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar27 + 6);
        *(undefined8 *)puVar27 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar27 + 6) = uVar30;
        *(undefined8 *)puVar10 = uVar14;
        if (*puVar27 < puVar27[-4]) {
          uVar30 = *(undefined8 *)(puVar27 + -2);
          uVar14 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar27 + -2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar27 + 2) = uVar30;
          *(undefined8 *)puVar27 = uVar14;
        }
      }
LAB_109282208:
      uVar31 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)puVar27;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + 2);
      *(undefined8 *)puVar8 = uVar30;
      *(undefined8 *)(puVar27 + 2) = uVar31;
      *(undefined8 *)puVar27 = uVar14;
    }
LAB_109282220:
    puVar25 = (uint *)((long)puVar25 + -1);
    uVar22 = *puVar8;
    if ((((ulong)puVar26 & 1) == 0) && (uVar22 <= puVar8[-4])) {
      uVar14 = *(undefined8 *)(puVar8 + 1);
      uVar3 = puVar8[3];
      puVar27 = puVar8;
      if (uVar22 < *puVar11) {
        do {
          puVar27 = puVar27 + 4;
        } while (*puVar27 <= uVar22);
      }
      else {
        do {
          puVar27 = puVar27 + 4;
          if (puVar24 <= puVar27) break;
        } while (*puVar27 <= uVar22);
      }
      puVar26 = puVar24;
      if (puVar27 < puVar24) {
        do {
          puVar26 = puVar26 + -4;
        } while (uVar22 < *puVar26);
      }
      while (puVar27 < puVar26) {
        uVar32 = *(undefined8 *)(puVar27 + 2);
        uVar30 = *(undefined8 *)puVar27;
        uVar31 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar26 + 2);
        *(undefined8 *)puVar27 = uVar31;
        *(undefined8 *)(puVar26 + 2) = uVar32;
        *(undefined8 *)puVar26 = uVar30;
        do {
          puVar27 = puVar27 + 4;
        } while (*puVar27 <= uVar22);
        do {
          puVar26 = puVar26 + -4;
        } while (uVar22 < *puVar26);
      }
      if (puVar27 + -4 != puVar8) {
        uVar30 = *(undefined8 *)(puVar27 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + -2);
        *(undefined8 *)puVar8 = uVar30;
      }
      puVar26 = (uint *)0x0;
      puVar27[-4] = uVar22;
      puVar27[-1] = uVar3;
      *(undefined8 *)(puVar27 + -3) = uVar14;
      goto LAB_109281e04;
    }
    lVar18 = 0;
    uVar14 = *(undefined8 *)(puVar8 + 1);
    uVar3 = puVar8[3];
    do {
      lVar6 = lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    } while (*(uint *)((long)puVar8 + lVar6) < uVar22);
    puVar9 = (uint *)((long)puVar8 + lVar18);
    puVar7 = puVar24;
    if (lVar18 == 0x10) {
      do {
        if (puVar7 <= puVar9) break;
        puVar7 = puVar7 + -4;
      } while (uVar22 <= *puVar7);
    }
    else {
      do {
        puVar7 = puVar7 + -4;
      } while (uVar22 <= *puVar7);
    }
    puVar10 = puVar7;
    puVar27 = puVar9;
    if (puVar9 < puVar7) {
      do {
        uVar32 = *(undefined8 *)(puVar27 + 2);
        uVar30 = *(undefined8 *)puVar27;
        uVar31 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar10 + 2);
        *(undefined8 *)puVar27 = uVar31;
        *(undefined8 *)(puVar10 + 2) = uVar32;
        *(undefined8 *)puVar10 = uVar30;
        do {
          puVar27 = puVar27 + 4;
        } while (*puVar27 < uVar22);
        do {
          puVar10 = puVar10 + -4;
        } while (uVar22 <= *puVar10);
      } while (puVar27 < puVar10);
    }
    puVar10 = puVar27 + -4;
    if (puVar10 != puVar8) {
      uVar30 = *(undefined8 *)puVar10;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar27 + -2);
      *(undefined8 *)puVar8 = uVar30;
    }
    puVar27[-4] = uVar22;
    puVar27[-1] = uVar3;
    *(undefined8 *)(puVar27 + -3) = uVar14;
    if (puVar9 < puVar7) goto LAB_109282334;
    puVar7 = puVar8;
    FUN_109282b34(puVar8,puVar10);
    puVar9 = puVar27;
    param_2 = puVar24;
    FUN_109282b34();
    if ((int)puVar9 == 0) goto code_r0x000109282330;
    puVar24 = puVar10;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_109282974;
LAB_10928252c:
  do {
    puVar27 = puVar25;
    uVar22 = puVar26[4];
    if (uVar22 < *puVar26) {
      uVar14 = *(undefined8 *)(puVar26 + 5);
      uVar3 = puVar26[7];
      lVar6 = lVar18;
      do {
        lVar19 = lVar6;
        puVar1 = (undefined8 *)((long)puVar8 + lVar19);
        puVar1[3] = puVar1[1];
        puVar1[2] = *puVar1;
        puVar25 = puVar8;
        if (lVar19 == 0) goto LAB_109282584;
        lVar6 = lVar19 + -0x10;
      } while (uVar22 < *(uint *)(puVar1 + -2));
      puVar25 = (uint *)((long)puVar8 + lVar19);
LAB_109282584:
      *puVar25 = uVar22;
      puVar25[3] = uVar3;
      *(undefined8 *)(puVar25 + 1) = uVar14;
    }
    puVar25 = puVar27 + 4;
    lVar18 = lVar18 + 0x10;
    puVar26 = puVar27;
  } while (puVar25 != puVar24);
  goto LAB_109282974;
code_r0x000109282330:
  if (((ulong)puVar7 & 1) == 0) {
LAB_109282334:
    param_4 = (uint *)(ulong)((uint)puVar26 & 1);
    param_3 = puVar25;
    FUN_109281db4();
    puVar26 = (uint *)0x0;
    puVar9 = puVar8;
    param_2 = puVar10;
  }
  goto LAB_109281e04;
LAB_1092825c0:
  do {
    if ((long)uVar16 <= (long)uVar15) {
      uVar21 = uVar16 << 1 | 1;
      puVar25 = puVar8 + uVar21 * 4;
      uVar20 = uVar16 * 2 + 2;
      if ((long)uVar20 < (long)uVar13) {
        uVar3 = *puVar25;
        uVar23 = puVar25[4];
        uVar22 = uVar3;
        if (uVar3 <= uVar23) {
          uVar22 = uVar23;
        }
        puVar26 = puVar25 + 4;
        if (uVar23 <= uVar3) {
          puVar26 = puVar25;
          uVar20 = uVar21;
        }
      }
      else {
        uVar22 = *puVar25;
        puVar26 = puVar25;
        uVar20 = uVar21;
      }
      puVar25 = puVar8 + uVar16 * 4;
      uVar3 = *puVar25;
      if (uVar3 <= uVar22) {
        uVar14 = *(undefined8 *)(puVar25 + 1);
        uVar22 = puVar25[3];
        do {
          puVar27 = puVar26;
          uVar30 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)puVar25 = uVar30;
          if ((long)uVar15 < (long)uVar20) break;
          uVar21 = uVar20 << 1 | 1;
          puVar25 = puVar8 + uVar21 * 4;
          uVar20 = uVar20 * 2 + 2;
          if ((long)uVar20 < (long)uVar13) {
            uVar4 = *puVar25;
            uVar5 = puVar25[4];
            puVar9 = (uint *)(ulong)uVar5;
            uVar23 = uVar4;
            if (uVar4 <= uVar5) {
              uVar23 = uVar5;
            }
            puVar26 = puVar25 + 4;
            if (uVar5 <= uVar4) {
              puVar26 = puVar25;
              uVar20 = uVar21;
            }
          }
          else {
            uVar23 = *puVar25;
            puVar26 = puVar25;
            uVar20 = uVar21;
          }
          puVar25 = puVar27;
        } while (uVar3 <= uVar23);
        *puVar27 = uVar3;
        puVar27[3] = uVar22;
        *(undefined8 *)(puVar27 + 1) = uVar14;
      }
    }
    bVar2 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar2);
  do {
    uVar30 = *(undefined8 *)(puVar8 + 2);
    uVar14 = *(undefined8 *)puVar8;
    puVar25 = puVar8;
    uVar16 = 0;
    do {
      uVar20 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      puVar26 = puVar25 + uVar16 * 4 + 4;
      uVar21 = uVar20;
      if (((long)uVar15 < (long)uVar13) &&
         (puVar26 = puVar25 + uVar16 * 4 + 8, uVar21 = uVar15,
         puVar25[uVar16 * 4 + 8] <= puVar25[uVar16 * 4 + 4])) {
        puVar26 = puVar25 + uVar16 * 4 + 4;
        uVar21 = uVar20;
      }
      uVar31 = *(undefined8 *)puVar26;
      *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar26 + 2);
      *(undefined8 *)puVar25 = uVar31;
      puVar25 = puVar26;
      uVar16 = uVar21;
    } while ((long)uVar21 <= (long)(uVar13 - 2 >> 1));
    puVar25 = puVar24 + -4;
    if (puVar26 == puVar25) {
      *(undefined8 *)(puVar26 + 2) = uVar30;
      *(undefined8 *)puVar26 = uVar14;
    }
    else {
      uVar31 = *(undefined8 *)puVar25;
      *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar24 + -2);
      *(undefined8 *)puVar26 = uVar31;
      *(undefined8 *)(puVar24 + -2) = uVar30;
      *(undefined8 *)puVar25 = uVar14;
      lVar18 = (long)((long)puVar26 + (0x10 - (long)puVar8)) >> 4;
      if (1 < lVar18) {
        uVar16 = lVar18 - 2U >> 1;
        uVar22 = *puVar26;
        if (puVar8[uVar16 * 4] < uVar22) {
          uVar14 = *(undefined8 *)(puVar26 + 1);
          uVar3 = puVar26[3];
          puVar24 = puVar8 + uVar16 * 4;
          do {
            puVar27 = puVar24;
            uVar30 = *(undefined8 *)puVar27;
            *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar27 + 2);
            *(undefined8 *)puVar26 = uVar30;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            puVar26 = puVar27;
            puVar24 = puVar8 + uVar16 * 4;
          } while (puVar8[uVar16 * 4] < uVar22);
          *puVar27 = uVar22;
          puVar27[3] = uVar3;
          *(undefined8 *)(puVar27 + 1) = uVar14;
        }
      }
    }
    bVar2 = 2 < (long)uVar13;
    uVar13 = uVar13 - 1;
    puVar24 = puVar25;
  } while (bVar2);
LAB_109282974:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
LAB_1092829ac:
  puVar11 = param_5;
  puVar8 = puVar9;
  ___stack_chk_fail();
FUN_1092829b0:
  uVar22 = *param_2;
  if (uVar22 < *puVar8) {
    if (*param_3 < uVar22) {
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar8 = uVar31;
    }
    else {
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar31;
      *(undefined8 *)(param_2 + 2) = uVar30;
      *(undefined8 *)param_2 = uVar14;
      if (*param_2 <= *param_3) goto LAB_109282a4c;
      uVar30 = *(undefined8 *)(param_2 + 2);
      uVar14 = *(undefined8 *)param_2;
      uVar31 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar31;
    }
    *(undefined8 *)(param_3 + 2) = uVar30;
    *(undefined8 *)param_3 = uVar14;
  }
  else if (*param_3 < uVar22) {
    uVar30 = *(undefined8 *)(param_2 + 2);
    uVar14 = *(undefined8 *)param_2;
    uVar31 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar31;
    *(undefined8 *)(param_3 + 2) = uVar30;
    *(undefined8 *)param_3 = uVar14;
    if (*param_2 < *puVar8) {
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar14 = *(undefined8 *)puVar8;
      uVar31 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar31;
      *(undefined8 *)(param_2 + 2) = uVar30;
      *(undefined8 *)param_2 = uVar14;
    }
  }
LAB_109282a4c:
  if (*param_4 < *param_3) {
    uVar30 = *(undefined8 *)(param_3 + 2);
    uVar14 = *(undefined8 *)param_3;
    uVar31 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar31;
    *(undefined8 *)(param_4 + 2) = uVar30;
    *(undefined8 *)param_4 = uVar14;
    if (*param_3 < *param_2) {
      uVar30 = *(undefined8 *)(param_2 + 2);
      uVar14 = *(undefined8 *)param_2;
      uVar31 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar31;
      *(undefined8 *)(param_3 + 2) = uVar30;
      *(undefined8 *)param_3 = uVar14;
      if (*param_2 < *puVar8) {
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar14 = *(undefined8 *)puVar8;
        uVar31 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar8 = uVar31;
        *(undefined8 *)(param_2 + 2) = uVar30;
        *(undefined8 *)param_2 = uVar14;
      }
    }
  }
  if (*puVar11 < *param_4) {
    uVar30 = *(undefined8 *)(param_4 + 2);
    uVar14 = *(undefined8 *)param_4;
    uVar31 = *(undefined8 *)puVar11;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar11 + 2);
    *(undefined8 *)param_4 = uVar31;
    *(undefined8 *)(puVar11 + 2) = uVar30;
    *(undefined8 *)puVar11 = uVar14;
    if (*param_4 < *param_3) {
      uVar30 = *(undefined8 *)(param_3 + 2);
      uVar14 = *(undefined8 *)param_3;
      uVar31 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar31;
      *(undefined8 *)(param_4 + 2) = uVar30;
      *(undefined8 *)param_4 = uVar14;
      if (*param_3 < *param_2) {
        uVar30 = *(undefined8 *)(param_2 + 2);
        uVar14 = *(undefined8 *)param_2;
        uVar31 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar31;
        *(undefined8 *)(param_3 + 2) = uVar30;
        *(undefined8 *)param_3 = uVar14;
        if (*param_2 < *puVar8) {
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar14 = *(undefined8 *)puVar8;
          uVar31 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar8 = uVar31;
          *(undefined8 *)(param_2 + 2) = uVar30;
          *(undefined8 *)param_2 = uVar14;
        }
      }
    }
  }
  return;
}



/* Entry: 109281db4; end: 1092829af;  */

void FUN_109281db4(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puVar23 = param_2;
  puVar24 = param_3;
  puVar25 = param_4;
  do {
    puVar10 = puVar23 + -4;
    puVar27 = puVar23 + -8;
    puVar28 = puVar23 + -0xc;
    puVar26 = puVar8;
LAB_109281e04:
    puVar8 = puVar26;
    uVar12 = (long)puVar23 - (long)puVar8 >> 4;
    if (uVar12 - 2 != 0 && 1 < (long)uVar12) {
      if (uVar12 == 3) {
        puVar24 = puVar8 + 4;
        uVar21 = *puVar24;
        puVar25 = puVar23 + -4;
        if (uVar21 < *puVar8) {
          if (*puVar25 < uVar21) goto LAB_1092824b4;
          uVar29 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar8 + 6) = uVar29;
          *(undefined8 *)puVar24 = uVar13;
          if (*puVar25 < puVar8[4]) {
            uVar29 = *(undefined8 *)(puVar8 + 6);
            uVar13 = *(undefined8 *)puVar24;
            uVar30 = *(undefined8 *)puVar25;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar23 + -2);
            *(undefined8 *)puVar24 = uVar30;
            goto LAB_1092824c8;
          }
          break;
        }
        if (uVar21 <= *puVar25) break;
        uVar29 = *(undefined8 *)(puVar8 + 6);
        uVar13 = *(undefined8 *)puVar24;
        uVar30 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar24 = uVar30;
        *(undefined8 *)(puVar23 + -2) = uVar29;
        *(undefined8 *)puVar25 = uVar13;
      }
      else {
        if (uVar12 != 4) {
          if (uVar12 != 5) goto LAB_109281e40;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) goto LAB_1092829ac;
          param_2 = puVar8 + 4;
          param_3 = puVar8 + 8;
          param_4 = puVar8 + 0xc;
          goto FUN_1092829b0;
        }
        puVar24 = puVar8 + 4;
        uVar21 = *puVar24;
        puVar25 = puVar8 + 8;
        uVar3 = *puVar25;
        if (uVar21 < *puVar8) {
          if (uVar3 < uVar21) {
            uVar29 = *(undefined8 *)(puVar8 + 2);
            uVar13 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar25;
          }
          else {
            uVar29 = *(undefined8 *)(puVar8 + 2);
            uVar13 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar8 + 6) = uVar29;
            *(undefined8 *)puVar24 = uVar13;
            if (puVar8[4] <= uVar3) goto LAB_109282908;
            uVar29 = *(undefined8 *)(puVar8 + 6);
            uVar13 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
            *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
          }
          *(undefined8 *)(puVar8 + 10) = uVar29;
          *(undefined8 *)puVar25 = uVar13;
        }
        else if (uVar3 < uVar21) {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar13 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
          *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
          *(undefined8 *)(puVar8 + 10) = uVar29;
          *(undefined8 *)puVar25 = uVar13;
          if (puVar8[4] < *puVar8) {
            uVar29 = *(undefined8 *)(puVar8 + 2);
            uVar13 = *(undefined8 *)puVar8;
            *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
            *(undefined8 *)puVar8 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar8 + 6) = uVar29;
            *(undefined8 *)puVar24 = uVar13;
          }
        }
LAB_109282908:
        if (*puVar25 <= *puVar10) break;
        uVar29 = *(undefined8 *)(puVar8 + 10);
        uVar13 = *(undefined8 *)puVar25;
        uVar30 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar25 = uVar30;
        *(undefined8 *)(puVar23 + -2) = uVar29;
        *(undefined8 *)puVar10 = uVar13;
        if (*puVar24 <= *puVar25) break;
        uVar29 = *(undefined8 *)(puVar8 + 6);
        uVar13 = *(undefined8 *)puVar24;
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar8 + 10);
        *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar8 + 10) = uVar29;
        *(undefined8 *)puVar25 = uVar13;
      }
      puVar23 = puVar8 + 4;
      if (*puVar23 < *puVar8) {
        uVar29 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar8 + 6);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar23;
        *(undefined8 *)(puVar8 + 6) = uVar29;
        *(undefined8 *)puVar23 = uVar13;
      }
      break;
    }
    if (uVar12 < 2) break;
    if (uVar12 == 2) {
      if (puVar23[-4] < *puVar8) {
LAB_1092824b4:
        uVar29 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        uVar30 = *(undefined8 *)(puVar23 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar8 = uVar30;
LAB_1092824c8:
        *(undefined8 *)(puVar23 + -2) = uVar29;
        *(undefined8 *)(puVar23 + -4) = uVar13;
      }
      break;
    }
LAB_109281e40:
    if ((long)uVar12 < 0x18) {
      puVar24 = puVar8 + 4;
      if (((ulong)puVar25 & 1) == 0) {
        if (puVar8 != puVar23 && puVar24 != puVar23) {
          do {
            puVar25 = puVar24;
            uVar21 = puVar8[4];
            if (uVar21 < *puVar8) {
              uVar13 = *(undefined8 *)(puVar8 + 5);
              uVar3 = puVar8[7];
              puVar8 = puVar25;
              do {
                puVar24 = puVar8;
                *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar24 + -2);
                *(undefined8 *)puVar24 = *(undefined8 *)(puVar24 + -4);
                puVar8 = puVar24 + -4;
              } while (uVar21 < puVar24[-8]);
              puVar24[-4] = uVar21;
              puVar24[-1] = uVar3;
              *(undefined8 *)(puVar24 + -3) = uVar13;
            }
            puVar24 = puVar25 + 4;
            puVar8 = puVar25;
          } while (puVar25 + 4 != puVar23);
        }
        break;
      }
      if (puVar8 == puVar23 || puVar24 == puVar23) break;
      lVar17 = 0;
      puVar25 = puVar8;
      goto LAB_10928252c;
    }
    if (puVar24 == (uint *)0x0) {
      if (puVar8 == puVar23) break;
      uVar14 = uVar12 - 2 >> 1;
      uVar16 = uVar14;
      goto LAB_1092825c0;
    }
    puVar26 = puVar8 + (uVar12 >> 1) * 4;
    uVar21 = *puVar10;
    if (uVar12 < 0x81) {
      uVar3 = *puVar8;
      if (uVar3 < *puVar26) {
        if (uVar21 < uVar3) {
          uStack_78 = *(undefined8 *)(puVar26 + 2);
          uStack_80 = *(undefined8 *)puVar26;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar26 = uVar13;
        }
        else {
          uVar30 = *(undefined8 *)(puVar26 + 2);
          uVar13 = *(undefined8 *)puVar26;
          uVar29 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar26 = uVar29;
          *(undefined8 *)(puVar8 + 2) = uVar30;
          *(undefined8 *)puVar8 = uVar13;
          if (*puVar8 <= *puVar10) goto LAB_109282220;
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          uStack_80 = *(undefined8 *)puVar8;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar8 = uVar13;
        }
        *(undefined8 *)(puVar23 + -2) = uStack_78;
        *(undefined8 *)puVar10 = uStack_80;
      }
      else if (uVar21 < uVar3) {
        uVar30 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        uVar29 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar8 = uVar29;
        *(undefined8 *)(puVar23 + -2) = uVar30;
        *(undefined8 *)puVar10 = uVar13;
        if (*puVar8 < *puVar26) {
          uVar30 = *(undefined8 *)(puVar26 + 2);
          uVar13 = *(undefined8 *)puVar26;
          uVar29 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)puVar26 = uVar29;
          *(undefined8 *)(puVar8 + 2) = uVar30;
          *(undefined8 *)puVar8 = uVar13;
        }
      }
    }
    else {
      uVar3 = *puVar26;
      if (uVar3 < *puVar8) {
        if (uVar21 < uVar3) {
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          uStack_80 = *(undefined8 *)puVar8;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar8 = uVar13;
        }
        else {
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          uVar29 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar8 = uVar29;
          *(undefined8 *)(puVar26 + 2) = uVar30;
          *(undefined8 *)puVar26 = uVar13;
          if (*puVar26 <= *puVar10) goto LAB_109281f90;
          uStack_78 = *(undefined8 *)(puVar26 + 2);
          uStack_80 = *(undefined8 *)puVar26;
          uVar13 = *(undefined8 *)puVar10;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar23 + -2);
          *(undefined8 *)puVar26 = uVar13;
        }
        *(undefined8 *)(puVar23 + -2) = uStack_78;
        *(undefined8 *)puVar10 = uStack_80;
      }
      else if (uVar21 < uVar3) {
        uVar30 = *(undefined8 *)(puVar26 + 2);
        uVar13 = *(undefined8 *)puVar26;
        uVar29 = *(undefined8 *)puVar10;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar23 + -2);
        *(undefined8 *)puVar26 = uVar29;
        *(undefined8 *)(puVar23 + -2) = uVar30;
        *(undefined8 *)puVar10 = uVar13;
        if (*puVar26 < *puVar8) {
          uVar30 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          uVar29 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar8 = uVar29;
          *(undefined8 *)(puVar26 + 2) = uVar30;
          *(undefined8 *)puVar26 = uVar13;
        }
      }
LAB_109281f90:
      puVar15 = puVar8 + 4;
      puVar7 = puVar26 + -4;
      uVar21 = *puVar7;
      if (uVar21 < *puVar15) {
        if (*puVar27 < uVar21) {
          uVar30 = *(undefined8 *)(puVar8 + 6);
          uVar29 = *(undefined8 *)puVar15;
          uVar13 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar23 + -6);
          *(undefined8 *)puVar15 = uVar13;
        }
        else {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar13 = *(undefined8 *)puVar15;
          uVar30 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar26 + -2);
          *(undefined8 *)puVar15 = uVar30;
          *(undefined8 *)(puVar26 + -2) = uVar29;
          *(undefined8 *)puVar7 = uVar13;
          if (*puVar7 <= *puVar27) goto LAB_109282090;
          uVar30 = *(undefined8 *)(puVar26 + -2);
          uVar29 = *(undefined8 *)puVar7;
          uVar13 = *(undefined8 *)puVar27;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar23 + -6);
          *(undefined8 *)puVar7 = uVar13;
        }
        *(undefined8 *)(puVar23 + -6) = uVar30;
        *(undefined8 *)puVar27 = uVar29;
      }
      else if (*puVar27 < uVar21) {
        uVar30 = *(undefined8 *)(puVar26 + -2);
        uVar13 = *(undefined8 *)puVar7;
        uVar29 = *(undefined8 *)puVar27;
        *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar23 + -6);
        *(undefined8 *)puVar7 = uVar29;
        *(undefined8 *)(puVar23 + -6) = uVar30;
        *(undefined8 *)puVar27 = uVar13;
        if (*puVar7 < *puVar15) {
          uVar29 = *(undefined8 *)(puVar8 + 6);
          uVar13 = *(undefined8 *)puVar15;
          uVar30 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar26 + -2);
          *(undefined8 *)puVar15 = uVar30;
          *(undefined8 *)(puVar26 + -2) = uVar29;
          *(undefined8 *)puVar7 = uVar13;
        }
      }
LAB_109282090:
      puVar9 = puVar8 + 8;
      puVar15 = puVar26 + 4;
      uVar21 = *puVar15;
      if (uVar21 < *puVar9) {
        if (*puVar28 < uVar21) {
          uVar30 = *(undefined8 *)(puVar8 + 10);
          uVar29 = *(undefined8 *)puVar9;
          uVar13 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar23 + -10);
          *(undefined8 *)puVar9 = uVar13;
        }
        else {
          uVar29 = *(undefined8 *)(puVar8 + 10);
          uVar13 = *(undefined8 *)puVar9;
          uVar30 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar9 = uVar30;
          *(undefined8 *)(puVar26 + 6) = uVar29;
          *(undefined8 *)puVar15 = uVar13;
          if (*puVar15 <= *puVar28) goto LAB_10928214c;
          uVar30 = *(undefined8 *)(puVar26 + 6);
          uVar29 = *(undefined8 *)puVar15;
          uVar13 = *(undefined8 *)puVar28;
          *(undefined8 *)(puVar26 + 6) = *(undefined8 *)(puVar23 + -10);
          *(undefined8 *)puVar15 = uVar13;
        }
        *(undefined8 *)(puVar23 + -10) = uVar30;
        *(undefined8 *)puVar28 = uVar29;
      }
      else if (*puVar28 < uVar21) {
        uVar30 = *(undefined8 *)(puVar26 + 6);
        uVar13 = *(undefined8 *)puVar15;
        uVar29 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar26 + 6) = *(undefined8 *)(puVar23 + -10);
        *(undefined8 *)puVar15 = uVar29;
        *(undefined8 *)(puVar23 + -10) = uVar30;
        *(undefined8 *)puVar28 = uVar13;
        if (*puVar15 < *puVar9) {
          uVar29 = *(undefined8 *)(puVar8 + 10);
          uVar13 = *(undefined8 *)puVar9;
          uVar30 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar9 = uVar30;
          *(undefined8 *)(puVar26 + 6) = uVar29;
          *(undefined8 *)puVar15 = uVar13;
        }
      }
LAB_10928214c:
      uVar21 = *puVar26;
      if (uVar21 < puVar26[-4]) {
        if (puVar26[4] < uVar21) {
          uStack_78 = *(undefined8 *)(puVar26 + -2);
          uStack_80 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar15;
        }
        else {
          uVar29 = *(undefined8 *)(puVar26 + -2);
          uVar13 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar26 + 2) = uVar29;
          *(undefined8 *)puVar26 = uVar13;
          if (*puVar26 <= puVar26[4]) goto LAB_109282208;
          uStack_78 = *(undefined8 *)(puVar26 + 2);
          uStack_80 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar26 + 6);
          *(undefined8 *)puVar26 = *(undefined8 *)puVar15;
        }
        *(undefined8 *)(puVar26 + 6) = uStack_78;
        *(undefined8 *)puVar15 = uStack_80;
      }
      else if (puVar26[4] < uVar21) {
        uVar29 = *(undefined8 *)(puVar26 + 2);
        uVar13 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar26 + 6);
        *(undefined8 *)puVar26 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar26 + 6) = uVar29;
        *(undefined8 *)puVar15 = uVar13;
        if (*puVar26 < puVar26[-4]) {
          uVar29 = *(undefined8 *)(puVar26 + -2);
          uVar13 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar26 + -2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar26 + 2) = uVar29;
          *(undefined8 *)puVar26 = uVar13;
        }
      }
LAB_109282208:
      uVar30 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar29 = *(undefined8 *)puVar26;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + 2);
      *(undefined8 *)puVar8 = uVar29;
      *(undefined8 *)(puVar26 + 2) = uVar30;
      *(undefined8 *)puVar26 = uVar13;
    }
LAB_109282220:
    puVar24 = (uint *)((long)puVar24 + -1);
    uVar21 = *puVar8;
    if ((((ulong)puVar25 & 1) == 0) && (uVar21 <= puVar8[-4])) {
      uVar13 = *(undefined8 *)(puVar8 + 1);
      uVar3 = puVar8[3];
      puVar26 = puVar8;
      if (uVar21 < *puVar10) {
        do {
          puVar26 = puVar26 + 4;
        } while (*puVar26 <= uVar21);
      }
      else {
        do {
          puVar26 = puVar26 + 4;
          if (puVar23 <= puVar26) break;
        } while (*puVar26 <= uVar21);
      }
      puVar25 = puVar23;
      if (puVar26 < puVar23) {
        do {
          puVar25 = puVar25 + -4;
        } while (uVar21 < *puVar25);
      }
      while (puVar26 < puVar25) {
        uVar31 = *(undefined8 *)(puVar26 + 2);
        uVar29 = *(undefined8 *)puVar26;
        uVar30 = *(undefined8 *)puVar25;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar25 + 2);
        *(undefined8 *)puVar26 = uVar30;
        *(undefined8 *)(puVar25 + 2) = uVar31;
        *(undefined8 *)puVar25 = uVar29;
        do {
          puVar26 = puVar26 + 4;
        } while (*puVar26 <= uVar21);
        do {
          puVar25 = puVar25 + -4;
        } while (uVar21 < *puVar25);
      }
      if (puVar26 + -4 != puVar8) {
        uVar29 = *(undefined8 *)(puVar26 + -4);
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + -2);
        *(undefined8 *)puVar8 = uVar29;
      }
      puVar25 = (uint *)0x0;
      puVar26[-4] = uVar21;
      puVar26[-1] = uVar3;
      *(undefined8 *)(puVar26 + -3) = uVar13;
      goto LAB_109281e04;
    }
    lVar17 = 0;
    uVar13 = *(undefined8 *)(puVar8 + 1);
    uVar3 = puVar8[3];
    do {
      lVar6 = lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    } while (*(uint *)((long)puVar8 + lVar6) < uVar21);
    puVar7 = (uint *)((long)puVar8 + lVar17);
    puVar15 = puVar23;
    if (lVar17 == 0x10) {
      do {
        if (puVar15 <= puVar7) break;
        puVar15 = puVar15 + -4;
      } while (uVar21 <= *puVar15);
    }
    else {
      do {
        puVar15 = puVar15 + -4;
      } while (uVar21 <= *puVar15);
    }
    puVar9 = puVar15;
    puVar26 = puVar7;
    if (puVar7 < puVar15) {
      do {
        uVar31 = *(undefined8 *)(puVar26 + 2);
        uVar29 = *(undefined8 *)puVar26;
        uVar30 = *(undefined8 *)puVar9;
        *(undefined8 *)(puVar26 + 2) = *(undefined8 *)(puVar9 + 2);
        *(undefined8 *)puVar26 = uVar30;
        *(undefined8 *)(puVar9 + 2) = uVar31;
        *(undefined8 *)puVar9 = uVar29;
        do {
          puVar26 = puVar26 + 4;
        } while (*puVar26 < uVar21);
        do {
          puVar9 = puVar9 + -4;
        } while (uVar21 <= *puVar9);
      } while (puVar26 < puVar9);
    }
    puVar9 = puVar26 + -4;
    if (puVar9 != puVar8) {
      uVar29 = *(undefined8 *)puVar9;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(puVar26 + -2);
      *(undefined8 *)puVar8 = uVar29;
    }
    puVar26[-4] = uVar21;
    puVar26[-1] = uVar3;
    *(undefined8 *)(puVar26 + -3) = uVar13;
    if (puVar7 < puVar15) goto LAB_109282334;
    puVar7 = puVar8;
    FUN_109282b34(puVar8,puVar9);
    param_1 = puVar26;
    param_2 = puVar23;
    FUN_109282b34();
    if ((int)param_1 == 0) goto code_r0x000109282330;
    puVar23 = puVar9;
  } while (((ulong)puVar7 & 1) == 0);
  goto LAB_109282974;
LAB_10928252c:
  do {
    puVar26 = puVar24;
    uVar21 = puVar25[4];
    if (uVar21 < *puVar25) {
      uVar13 = *(undefined8 *)(puVar25 + 5);
      uVar3 = puVar25[7];
      lVar6 = lVar17;
      do {
        lVar18 = lVar6;
        puVar1 = (undefined8 *)((long)puVar8 + lVar18);
        puVar1[3] = puVar1[1];
        puVar1[2] = *puVar1;
        puVar24 = puVar8;
        if (lVar18 == 0) goto LAB_109282584;
        lVar6 = lVar18 + -0x10;
      } while (uVar21 < *(uint *)(puVar1 + -2));
      puVar24 = (uint *)((long)puVar8 + lVar18);
LAB_109282584:
      *puVar24 = uVar21;
      puVar24[3] = uVar3;
      *(undefined8 *)(puVar24 + 1) = uVar13;
    }
    puVar24 = puVar26 + 4;
    lVar17 = lVar17 + 0x10;
    puVar25 = puVar26;
  } while (puVar24 != puVar23);
  goto LAB_109282974;
code_r0x000109282330:
  if (((ulong)puVar7 & 1) == 0) {
LAB_109282334:
    param_4 = (uint *)(ulong)((uint)puVar25 & 1);
    param_3 = puVar24;
    FUN_109281db4();
    puVar25 = (uint *)0x0;
    param_1 = puVar8;
    param_2 = puVar9;
  }
  goto LAB_109281e04;
LAB_1092825c0:
  do {
    if ((long)uVar16 <= (long)uVar14) {
      uVar20 = uVar16 << 1 | 1;
      puVar24 = puVar8 + uVar20 * 4;
      uVar19 = uVar16 * 2 + 2;
      if ((long)uVar19 < (long)uVar12) {
        uVar3 = *puVar24;
        uVar22 = puVar24[4];
        uVar21 = uVar3;
        if (uVar3 <= uVar22) {
          uVar21 = uVar22;
        }
        puVar25 = puVar24 + 4;
        if (uVar22 <= uVar3) {
          puVar25 = puVar24;
          uVar19 = uVar20;
        }
      }
      else {
        uVar21 = *puVar24;
        puVar25 = puVar24;
        uVar19 = uVar20;
      }
      puVar24 = puVar8 + uVar16 * 4;
      uVar3 = *puVar24;
      if (uVar3 <= uVar21) {
        uVar13 = *(undefined8 *)(puVar24 + 1);
        uVar21 = puVar24[3];
        do {
          puVar26 = puVar25;
          uVar29 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar26 + 2);
          *(undefined8 *)puVar24 = uVar29;
          if ((long)uVar14 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar24 = puVar8 + uVar20 * 4;
          uVar19 = uVar19 * 2 + 2;
          if ((long)uVar19 < (long)uVar12) {
            uVar4 = *puVar24;
            uVar5 = puVar24[4];
            param_1 = (uint *)(ulong)uVar5;
            uVar22 = uVar4;
            if (uVar4 <= uVar5) {
              uVar22 = uVar5;
            }
            puVar25 = puVar24 + 4;
            if (uVar5 <= uVar4) {
              puVar25 = puVar24;
              uVar19 = uVar20;
            }
          }
          else {
            uVar22 = *puVar24;
            puVar25 = puVar24;
            uVar19 = uVar20;
          }
          puVar24 = puVar26;
        } while (uVar3 <= uVar22);
        *puVar26 = uVar3;
        puVar26[3] = uVar21;
        *(undefined8 *)(puVar26 + 1) = uVar13;
      }
    }
    bVar2 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar2);
  do {
    uVar29 = *(undefined8 *)(puVar8 + 2);
    uVar13 = *(undefined8 *)puVar8;
    puVar24 = puVar8;
    uVar16 = 0;
    do {
      uVar19 = uVar16 << 1 | 1;
      uVar14 = uVar16 * 2 + 2;
      puVar25 = puVar24 + uVar16 * 4 + 4;
      uVar20 = uVar19;
      if (((long)uVar14 < (long)uVar12) &&
         (puVar25 = puVar24 + uVar16 * 4 + 8, uVar20 = uVar14,
         puVar24[uVar16 * 4 + 8] <= puVar24[uVar16 * 4 + 4])) {
        puVar25 = puVar24 + uVar16 * 4 + 4;
        uVar20 = uVar19;
      }
      uVar30 = *(undefined8 *)puVar25;
      *(undefined8 *)(puVar24 + 2) = *(undefined8 *)(puVar25 + 2);
      *(undefined8 *)puVar24 = uVar30;
      puVar24 = puVar25;
      uVar16 = uVar20;
    } while ((long)uVar20 <= (long)(uVar12 - 2 >> 1));
    puVar24 = puVar23 + -4;
    if (puVar25 == puVar24) {
      *(undefined8 *)(puVar25 + 2) = uVar29;
      *(undefined8 *)puVar25 = uVar13;
    }
    else {
      uVar30 = *(undefined8 *)puVar24;
      *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar23 + -2);
      *(undefined8 *)puVar25 = uVar30;
      *(undefined8 *)(puVar23 + -2) = uVar29;
      *(undefined8 *)puVar24 = uVar13;
      lVar17 = (long)puVar25 + (0x10 - (long)puVar8) >> 4;
      if (1 < lVar17) {
        uVar16 = lVar17 - 2U >> 1;
        uVar21 = *puVar25;
        if (puVar8[uVar16 * 4] < uVar21) {
          uVar13 = *(undefined8 *)(puVar25 + 1);
          uVar3 = puVar25[3];
          puVar23 = puVar8 + uVar16 * 4;
          do {
            puVar26 = puVar23;
            uVar29 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar25 + 2) = *(undefined8 *)(puVar26 + 2);
            *(undefined8 *)puVar25 = uVar29;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            puVar25 = puVar26;
            puVar23 = puVar8 + uVar16 * 4;
          } while (puVar8[uVar16 * 4] < uVar21);
          *puVar26 = uVar21;
          puVar26[3] = uVar3;
          *(undefined8 *)(puVar26 + 1) = uVar13;
        }
      }
    }
    bVar2 = 2 < (long)uVar12;
    uVar12 = uVar12 - 1;
    puVar23 = puVar24;
  } while (bVar2);
LAB_109282974:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
LAB_1092829ac:
  puVar10 = param_5;
  puVar8 = param_1;
  ___stack_chk_fail();
FUN_1092829b0:
  uVar21 = *param_2;
  if (uVar21 < *puVar8) {
    if (*param_3 < uVar21) {
      uVar29 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)param_3;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)puVar8 = uVar30;
    }
    else {
      uVar29 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar30;
      *(undefined8 *)(param_2 + 2) = uVar29;
      *(undefined8 *)param_2 = uVar13;
      if (*param_2 <= *param_3) goto LAB_109282a4c;
      uVar29 = *(undefined8 *)(param_2 + 2);
      uVar13 = *(undefined8 *)param_2;
      uVar30 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar30;
    }
    *(undefined8 *)(param_3 + 2) = uVar29;
    *(undefined8 *)param_3 = uVar13;
  }
  else if (*param_3 < uVar21) {
    uVar29 = *(undefined8 *)(param_2 + 2);
    uVar13 = *(undefined8 *)param_2;
    uVar30 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar30;
    *(undefined8 *)(param_3 + 2) = uVar29;
    *(undefined8 *)param_3 = uVar13;
    if (*param_2 < *puVar8) {
      uVar29 = *(undefined8 *)(puVar8 + 2);
      uVar13 = *(undefined8 *)puVar8;
      uVar30 = *(undefined8 *)param_2;
      *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)puVar8 = uVar30;
      *(undefined8 *)(param_2 + 2) = uVar29;
      *(undefined8 *)param_2 = uVar13;
    }
  }
LAB_109282a4c:
  if (*param_4 < *param_3) {
    uVar29 = *(undefined8 *)(param_3 + 2);
    uVar13 = *(undefined8 *)param_3;
    uVar30 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar30;
    *(undefined8 *)(param_4 + 2) = uVar29;
    *(undefined8 *)param_4 = uVar13;
    if (*param_3 < *param_2) {
      uVar29 = *(undefined8 *)(param_2 + 2);
      uVar13 = *(undefined8 *)param_2;
      uVar30 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar30;
      *(undefined8 *)(param_3 + 2) = uVar29;
      *(undefined8 *)param_3 = uVar13;
      if (*param_2 < *puVar8) {
        uVar29 = *(undefined8 *)(puVar8 + 2);
        uVar13 = *(undefined8 *)puVar8;
        uVar30 = *(undefined8 *)param_2;
        *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)puVar8 = uVar30;
        *(undefined8 *)(param_2 + 2) = uVar29;
        *(undefined8 *)param_2 = uVar13;
      }
    }
  }
  if (*puVar10 < *param_4) {
    uVar29 = *(undefined8 *)(param_4 + 2);
    uVar13 = *(undefined8 *)param_4;
    uVar30 = *(undefined8 *)puVar10;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(puVar10 + 2);
    *(undefined8 *)param_4 = uVar30;
    *(undefined8 *)(puVar10 + 2) = uVar29;
    *(undefined8 *)puVar10 = uVar13;
    if (*param_4 < *param_3) {
      uVar29 = *(undefined8 *)(param_3 + 2);
      uVar13 = *(undefined8 *)param_3;
      uVar30 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar30;
      *(undefined8 *)(param_4 + 2) = uVar29;
      *(undefined8 *)param_4 = uVar13;
      if (*param_3 < *param_2) {
        uVar29 = *(undefined8 *)(param_2 + 2);
        uVar13 = *(undefined8 *)param_2;
        uVar30 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar30;
        *(undefined8 *)(param_3 + 2) = uVar29;
        *(undefined8 *)param_3 = uVar13;
        if (*param_2 < *puVar8) {
          uVar29 = *(undefined8 *)(puVar8 + 2);
          uVar13 = *(undefined8 *)puVar8;
          uVar30 = *(undefined8 *)param_2;
          *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)puVar8 = uVar30;
          *(undefined8 *)(param_2 + 2) = uVar29;
          *(undefined8 *)param_2 = uVar13;
        }
      }
    }
  }
  return;
}



/* Entry: 1092829b0; end: 109282b33;  */

void FUN_1092829b0(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    if (*param_3 < uVar1) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar4;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
      if (*param_2 <= *param_3) goto LAB_109282a4c;
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar4;
    }
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
  }
  else if (*param_3 < uVar1) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
    if (*param_2 < *param_1) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
    }
  }
LAB_109282a4c:
  if (*param_4 < *param_3) {
    uVar3 = *(undefined8 *)(param_3 + 2);
    uVar2 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar4;
    *(undefined8 *)(param_4 + 2) = uVar3;
    *(undefined8 *)param_4 = uVar2;
    if (*param_3 < *param_2) {
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar4;
      *(undefined8 *)(param_3 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar2;
      if (*param_2 < *param_1) {
        uVar3 = *(undefined8 *)(param_1 + 2);
        uVar2 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar4;
        *(undefined8 *)(param_2 + 2) = uVar3;
        *(undefined8 *)param_2 = uVar2;
      }
    }
  }
  if (*param_5 < *param_4) {
    uVar3 = *(undefined8 *)(param_4 + 2);
    uVar2 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar4;
    *(undefined8 *)(param_5 + 2) = uVar3;
    *(undefined8 *)param_5 = uVar2;
    if (*param_4 < *param_3) {
      uVar3 = *(undefined8 *)(param_3 + 2);
      uVar2 = *(undefined8 *)param_3;
      uVar4 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar4;
      *(undefined8 *)(param_4 + 2) = uVar3;
      *(undefined8 *)param_4 = uVar2;
      if (*param_3 < *param_2) {
        uVar3 = *(undefined8 *)(param_2 + 2);
        uVar2 = *(undefined8 *)param_2;
        uVar4 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar4;
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)param_3 = uVar2;
        if (*param_2 < *param_1) {
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar2 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar4;
          *(undefined8 *)(param_2 + 2) = uVar3;
          *(undefined8 *)param_2 = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 109282b34; end: 109282eab;  */

void FUN_109282b34(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = (long)param_2 - (long)param_1 >> 4;
  puVar6 = param_2;
  if (2 < (long)uVar10) {
    if (uVar10 == 3) {
      puVar12 = param_1 + 4;
      uVar24 = *puVar12;
      puVar6 = param_2 + -4;
      if (uVar24 < *param_1) {
        if (*puVar6 < uVar24) goto LAB_109282bd4;
        uVar27 = *(undefined8 *)(param_1 + 2);
        uVar13 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 6) = uVar27;
        *(undefined8 *)puVar12 = uVar13;
        if (param_1[4] <= *puVar6) goto LAB_109282e6c;
        uVar27 = *(undefined8 *)(param_1 + 6);
        uVar13 = *(undefined8 *)puVar12;
        uVar28 = *(undefined8 *)puVar6;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar12 = uVar28;
        goto LAB_109282be0;
      }
      if (uVar24 <= *puVar6) goto LAB_109282e6c;
      uVar27 = *(undefined8 *)(param_1 + 6);
      uVar13 = *(undefined8 *)puVar12;
      uVar28 = *(undefined8 *)puVar6;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar12 = uVar28;
      *(undefined8 *)(param_2 + -2) = uVar27;
      *(undefined8 *)puVar6 = uVar13;
    }
    else {
      if (uVar10 != 4) {
        if (uVar10 == 5) {
          puVar6 = param_1 + 4;
          param_3 = param_1 + 8;
          param_4 = param_1 + 0xc;
          FUN_1092829b0();
          goto LAB_109282e6c;
        }
        goto LAB_109282be8;
      }
      puVar12 = param_1 + 4;
      uVar24 = *puVar12;
      puVar15 = param_1 + 8;
      uVar2 = *puVar15;
      puVar16 = param_2 + -4;
      if (uVar24 < *param_1) {
        if (uVar2 < uVar24) {
          uVar27 = *(undefined8 *)(param_1 + 2);
          uVar13 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_1 = *(undefined8 *)puVar15;
        }
        else {
          uVar27 = *(undefined8 *)(param_1 + 2);
          uVar13 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 6) = uVar27;
          *(undefined8 *)puVar12 = uVar13;
          if (param_1[4] <= uVar2) goto LAB_109282e0c;
          uVar27 = *(undefined8 *)(param_1 + 6);
          uVar13 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar15;
        }
        *(undefined8 *)(param_1 + 10) = uVar27;
        *(undefined8 *)puVar15 = uVar13;
      }
      else if (uVar2 < uVar24) {
        uVar27 = *(undefined8 *)(param_1 + 6);
        uVar13 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar15;
        *(undefined8 *)(param_1 + 10) = uVar27;
        *(undefined8 *)puVar15 = uVar13;
        if (*puVar12 < *param_1) {
          uVar27 = *(undefined8 *)(param_1 + 2);
          uVar13 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 6) = uVar27;
          *(undefined8 *)puVar12 = uVar13;
        }
      }
LAB_109282e0c:
      if (*puVar15 <= *puVar16) goto LAB_109282e6c;
      uVar27 = *(undefined8 *)(param_1 + 10);
      uVar13 = *(undefined8 *)puVar15;
      uVar28 = *(undefined8 *)puVar16;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar15 = uVar28;
      *(undefined8 *)(param_2 + -2) = uVar27;
      *(undefined8 *)puVar16 = uVar13;
      if (*puVar12 <= *puVar15) goto LAB_109282e6c;
      uVar27 = *(undefined8 *)(param_1 + 6);
      uVar13 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)puVar12 = *(undefined8 *)puVar15;
      *(undefined8 *)(param_1 + 10) = uVar27;
      *(undefined8 *)puVar15 = uVar13;
    }
    puVar12 = param_1 + 4;
    if (*puVar12 < *param_1) {
      uVar27 = *(undefined8 *)(param_1 + 2);
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)puVar12;
      *(undefined8 *)(param_1 + 6) = uVar27;
      *(undefined8 *)puVar12 = uVar13;
    }
    goto LAB_109282e6c;
  }
  if (uVar10 < 2) goto LAB_109282e6c;
  if (uVar10 == 2) {
    puVar6 = param_2 + -4;
    if (*param_1 <= param_2[-4]) goto LAB_109282e6c;
LAB_109282bd4:
    uVar27 = *(undefined8 *)(param_1 + 2);
    uVar13 = *(undefined8 *)param_1;
    uVar28 = *(undefined8 *)(param_2 + -4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)param_1 = uVar28;
LAB_109282be0:
    *(undefined8 *)(param_2 + -2) = uVar27;
    *(undefined8 *)(param_2 + -4) = uVar13;
    puVar6 = param_2 + -4;
    goto LAB_109282e6c;
  }
LAB_109282be8:
  puVar12 = param_1 + 8;
  uVar24 = *puVar12;
  puVar15 = param_1 + 4;
  uVar2 = *puVar15;
  if (uVar2 < *param_1) {
    if (uVar24 < uVar2) {
      uVar27 = *(undefined8 *)(param_1 + 2);
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)param_1 = *(undefined8 *)puVar12;
    }
    else {
      uVar27 = *(undefined8 *)(param_1 + 2);
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)puVar15;
      *(undefined8 *)(param_1 + 6) = uVar27;
      *(undefined8 *)puVar15 = uVar13;
      if (param_1[4] <= uVar24) goto LAB_109282d3c;
      uVar27 = *(undefined8 *)(param_1 + 6);
      uVar13 = *(undefined8 *)puVar15;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)puVar15 = *(undefined8 *)puVar12;
    }
    *(undefined8 *)(param_1 + 10) = uVar27;
    *(undefined8 *)puVar12 = uVar13;
  }
  else if (uVar24 < uVar2) {
    uVar27 = *(undefined8 *)(param_1 + 6);
    uVar13 = *(undefined8 *)puVar15;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)puVar15 = *(undefined8 *)puVar12;
    *(undefined8 *)(param_1 + 10) = uVar27;
    *(undefined8 *)puVar12 = uVar13;
    if (*puVar15 < *param_1) {
      uVar27 = *(undefined8 *)(param_1 + 2);
      uVar13 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)puVar15;
      *(undefined8 *)(param_1 + 6) = uVar27;
      *(undefined8 *)puVar15 = uVar13;
    }
  }
LAB_109282d3c:
  if (param_1 + 0xc != param_2) {
    lVar17 = 0;
    iVar19 = 0;
    puVar15 = param_1 + 0xc;
    do {
      puVar16 = puVar15;
      uVar24 = *puVar16;
      if (uVar24 < *puVar12) {
        uVar13 = *(undefined8 *)(puVar16 + 1);
        uVar2 = puVar16[3];
        lVar21 = lVar17;
        do {
          lVar11 = lVar21;
          *(undefined8 *)((long)param_1 + lVar11 + 0x38) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x28);
          *(undefined8 *)((long)param_1 + lVar11 + 0x30) =
               *(undefined8 *)((long)param_1 + lVar11 + 0x20);
          puVar12 = param_1;
          if (lVar11 == -0x20) goto LAB_109282da8;
          lVar21 = lVar11 + -0x10;
        } while (uVar24 < *(uint *)((long)param_1 + lVar11 + 0x10));
        puVar12 = (uint *)((long)param_1 + lVar11 + 0x20);
LAB_109282da8:
        *puVar12 = uVar24;
        *(undefined8 *)(puVar12 + 1) = uVar13;
        puVar12[3] = uVar2;
        iVar19 = iVar19 + 1;
        if (iVar19 == 8) {
          bVar5 = puVar16 + 4 == param_2;
          goto LAB_109282e70;
        }
      }
      lVar17 = lVar17 + 0x10;
      puVar15 = puVar16 + 4;
      puVar12 = puVar16;
    } while (puVar16 + 4 != param_2);
  }
LAB_109282e6c:
  bVar5 = true;
  param_2 = puVar6;
LAB_109282e70:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail(bVar5);
  puVar6 = (uint *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
LAB_109282ef0:
  puVar15 = param_2 + -4;
  puVar16 = param_2 + -8;
  puVar26 = param_2 + -0xc;
  puVar12 = puVar6;
LAB_109282f00:
  do {
    puVar6 = puVar12;
    uVar10 = (long)param_2 - (long)puVar6 >> 4;
    if (uVar10 - 2 != 0 && 1 < (long)uVar10) {
      if (uVar10 != 3) {
        if (uVar10 != 4) {
          if (uVar10 == 5) {
            puVar12 = puVar6 + 4;
            puVar16 = puVar6 + 8;
            puVar26 = puVar6 + 0xc;
            uVar24 = *puVar12;
            if (uVar24 < *puVar6) {
              if (*puVar16 < uVar24) {
                uVar27 = *(undefined8 *)(puVar6 + 2);
                uVar13 = *(undefined8 *)puVar6;
                *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 10);
                *(undefined8 *)puVar6 = *(undefined8 *)puVar16;
              }
              else {
                uVar27 = *(undefined8 *)(puVar6 + 2);
                uVar13 = *(undefined8 *)puVar6;
                *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
                *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
                *(undefined8 *)(puVar6 + 6) = uVar27;
                *(undefined8 *)puVar12 = uVar13;
                if (*puVar12 <= *puVar16) goto LAB_109283b14;
                uVar27 = *(undefined8 *)(puVar6 + 6);
                uVar13 = *(undefined8 *)puVar12;
                *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
                *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
              }
              *(undefined8 *)(puVar6 + 10) = uVar27;
              *(undefined8 *)puVar16 = uVar13;
            }
            else if (*puVar16 < uVar24) {
              uVar27 = *(undefined8 *)(puVar6 + 6);
              uVar13 = *(undefined8 *)puVar12;
              *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
              *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
              *(undefined8 *)(puVar6 + 10) = uVar27;
              *(undefined8 *)puVar16 = uVar13;
              if (*puVar12 < *puVar6) {
                uVar27 = *(undefined8 *)(puVar6 + 2);
                uVar13 = *(undefined8 *)puVar6;
                *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
                *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
                *(undefined8 *)(puVar6 + 6) = uVar27;
                *(undefined8 *)puVar12 = uVar13;
              }
            }
LAB_109283b14:
            if (*puVar26 < *puVar16) {
              uVar27 = *(undefined8 *)(puVar6 + 10);
              uVar13 = *(undefined8 *)puVar16;
              *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar6 + 0xe);
              *(undefined8 *)puVar16 = *(undefined8 *)puVar26;
              *(undefined8 *)(puVar6 + 0xe) = uVar27;
              *(undefined8 *)puVar26 = uVar13;
              if (*puVar16 < *puVar12) {
                uVar27 = *(undefined8 *)(puVar6 + 6);
                uVar13 = *(undefined8 *)puVar12;
                *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
                *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
                *(undefined8 *)(puVar6 + 10) = uVar27;
                *(undefined8 *)puVar16 = uVar13;
                if (*puVar12 < *puVar6) {
                  uVar27 = *(undefined8 *)(puVar6 + 2);
                  uVar13 = *(undefined8 *)puVar6;
                  *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
                  *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
                  *(undefined8 *)(puVar6 + 6) = uVar27;
                  *(undefined8 *)puVar12 = uVar13;
                }
              }
            }
            if (*puVar15 < *puVar26) {
              uVar27 = *(undefined8 *)(puVar6 + 0xe);
              uVar13 = *(undefined8 *)puVar26;
              uVar28 = *(undefined8 *)puVar15;
              *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)puVar26 = uVar28;
              *(undefined8 *)(param_2 + -2) = uVar27;
              *(undefined8 *)puVar15 = uVar13;
              if (*puVar26 < *puVar16) {
                uVar27 = *(undefined8 *)(puVar6 + 10);
                uVar13 = *(undefined8 *)puVar16;
                *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar6 + 0xe);
                *(undefined8 *)puVar16 = *(undefined8 *)puVar26;
                *(undefined8 *)(puVar6 + 0xe) = uVar27;
                *(undefined8 *)puVar26 = uVar13;
                if (*puVar16 < *puVar12) {
                  uVar27 = *(undefined8 *)(puVar6 + 6);
                  uVar13 = *(undefined8 *)puVar12;
                  *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
                  *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
                  *(undefined8 *)(puVar6 + 10) = uVar27;
                  *(undefined8 *)puVar16 = uVar13;
                  if (*puVar12 < *puVar6) {
                    uVar27 = *(undefined8 *)(puVar6 + 2);
                    uVar13 = *(undefined8 *)puVar6;
                    *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
                    *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
                    *(undefined8 *)(puVar6 + 6) = uVar27;
                    *(undefined8 *)puVar12 = uVar13;
                  }
                }
              }
            }
            return;
          }
          goto LAB_109282f3c;
        }
        puVar12 = puVar6 + 4;
        uVar24 = *puVar12;
        puVar16 = puVar6 + 8;
        uVar2 = *puVar16;
        if (uVar24 < *puVar6) {
          if (uVar2 < uVar24) {
            uVar27 = *(undefined8 *)(puVar6 + 2);
            uVar13 = *(undefined8 *)puVar6;
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 10);
            *(undefined8 *)puVar6 = *(undefined8 *)puVar16;
          }
          else {
            uVar27 = *(undefined8 *)(puVar6 + 2);
            uVar13 = *(undefined8 *)puVar6;
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
            *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
            *(undefined8 *)(puVar6 + 6) = uVar27;
            *(undefined8 *)puVar12 = uVar13;
            if (puVar6[4] <= uVar2) goto LAB_1092839ec;
            uVar27 = *(undefined8 *)(puVar6 + 6);
            uVar13 = *(undefined8 *)puVar12;
            *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
            *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
          }
          *(undefined8 *)(puVar6 + 10) = uVar27;
          *(undefined8 *)puVar16 = uVar13;
        }
        else if (uVar2 < uVar24) {
          uVar27 = *(undefined8 *)(puVar6 + 6);
          uVar13 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar6 + 10) = uVar27;
          *(undefined8 *)puVar16 = uVar13;
          if (puVar6[4] < *puVar6) {
            uVar27 = *(undefined8 *)(puVar6 + 2);
            uVar13 = *(undefined8 *)puVar6;
            *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
            *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
            *(undefined8 *)(puVar6 + 6) = uVar27;
            *(undefined8 *)puVar12 = uVar13;
          }
        }
LAB_1092839ec:
        if (*puVar16 <= *puVar15) {
          return;
        }
        uVar27 = *(undefined8 *)(puVar6 + 10);
        uVar13 = *(undefined8 *)puVar16;
        uVar28 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar16 = uVar28;
        *(undefined8 *)(param_2 + -2) = uVar27;
        *(undefined8 *)puVar15 = uVar13;
        if (*puVar12 <= *puVar16) {
          return;
        }
        uVar27 = *(undefined8 *)(puVar6 + 6);
        uVar13 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar6 + 10);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar16;
        *(undefined8 *)(puVar6 + 10) = uVar27;
        *(undefined8 *)puVar16 = uVar13;
LAB_109283a30:
        puVar12 = puVar6 + 4;
        if (*puVar6 <= *puVar12) {
          return;
        }
        uVar27 = *(undefined8 *)(puVar6 + 2);
        uVar13 = *(undefined8 *)puVar6;
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar6 + 6) = uVar27;
        *(undefined8 *)puVar12 = uVar13;
        return;
      }
      puVar12 = puVar6 + 4;
      uVar24 = *puVar12;
      puVar15 = param_2 + -4;
      if (*puVar6 <= uVar24) {
        if (uVar24 <= *puVar15) {
          return;
        }
        uVar27 = *(undefined8 *)(puVar6 + 6);
        uVar13 = *(undefined8 *)puVar12;
        uVar28 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar12 = uVar28;
        *(undefined8 *)(param_2 + -2) = uVar27;
        *(undefined8 *)puVar15 = uVar13;
        goto LAB_109283a30;
      }
      if (uVar24 <= *puVar15) {
        uVar27 = *(undefined8 *)(puVar6 + 2);
        uVar13 = *(undefined8 *)puVar6;
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)puVar6 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar6 + 6) = uVar27;
        *(undefined8 *)puVar12 = uVar13;
        if (puVar6[4] <= *puVar15) {
          return;
        }
        uVar27 = *(undefined8 *)(puVar6 + 6);
        uVar13 = *(undefined8 *)puVar12;
        uVar28 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar12 = uVar28;
        goto LAB_1092835ac;
      }
LAB_109283598:
      uVar27 = *(undefined8 *)(puVar6 + 2);
      uVar13 = *(undefined8 *)puVar6;
      uVar28 = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar6 = uVar28;
LAB_1092835ac:
      *(undefined8 *)(param_2 + -2) = uVar27;
      *(undefined8 *)(param_2 + -4) = uVar13;
      return;
    }
    if (uVar10 < 2) {
      return;
    }
    if (uVar10 == 2) {
      if (*puVar6 <= param_2[-4]) {
        return;
      }
      goto LAB_109283598;
    }
LAB_109282f3c:
    if ((long)uVar10 < 0x18) {
      puVar12 = puVar6 + 4;
      if (((ulong)param_4 & 1) == 0) {
        if (puVar6 == param_2 || puVar12 == param_2) {
          return;
        }
        do {
          puVar15 = puVar12;
          uVar24 = puVar6[4];
          if (uVar24 < *puVar6) {
            uVar13 = *(undefined8 *)(puVar6 + 5);
            uVar2 = puVar6[7];
            puVar6 = puVar15;
            do {
              puVar12 = puVar6;
              *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + -2);
              *(undefined8 *)puVar12 = *(undefined8 *)(puVar12 + -4);
              puVar6 = puVar12 + -4;
            } while (uVar24 < puVar12[-8]);
            puVar12[-4] = uVar24;
            puVar12[-1] = uVar2;
            *(undefined8 *)(puVar12 + -3) = uVar13;
          }
          puVar12 = puVar15 + 4;
          puVar6 = puVar15;
        } while (puVar15 + 4 != param_2);
        return;
      }
      if (puVar6 == param_2 || puVar12 == param_2) {
        return;
      }
      lVar9 = 0;
      puVar15 = puVar6;
      break;
    }
    if (param_3 == (uint *)0x0) {
      if (puVar6 == param_2) {
        return;
      }
      uVar14 = uVar10 - 2 >> 1;
      uVar18 = uVar14;
      goto LAB_1092836a4;
    }
    puVar12 = puVar6 + (uVar10 >> 1) * 4;
    uVar24 = *puVar15;
    if (uVar10 < 0x81) {
      uVar2 = *puVar6;
      if (uVar2 < *puVar12) {
        if (uVar24 < uVar2) {
          uStack_1e8 = *(undefined8 *)(puVar12 + 2);
          uStack_1f0 = *(undefined8 *)puVar12;
          uVar13 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar12 = uVar13;
        }
        else {
          uVar28 = *(undefined8 *)(puVar12 + 2);
          uVar13 = *(undefined8 *)puVar12;
          uVar27 = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)puVar12 = uVar27;
          *(undefined8 *)(puVar6 + 2) = uVar28;
          *(undefined8 *)puVar6 = uVar13;
          if (*puVar6 <= *puVar15) goto LAB_10928331c;
          uStack_1e8 = *(undefined8 *)(puVar6 + 2);
          uStack_1f0 = *(undefined8 *)puVar6;
          uVar13 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar6 = uVar13;
        }
        *(undefined8 *)(param_2 + -2) = uStack_1e8;
        *(undefined8 *)puVar15 = uStack_1f0;
      }
      else if (uVar24 < uVar2) {
        uVar28 = *(undefined8 *)(puVar6 + 2);
        uVar13 = *(undefined8 *)puVar6;
        uVar27 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar6 = uVar27;
        *(undefined8 *)(param_2 + -2) = uVar28;
        *(undefined8 *)puVar15 = uVar13;
        if (*puVar6 < *puVar12) {
          uVar28 = *(undefined8 *)(puVar12 + 2);
          uVar13 = *(undefined8 *)puVar12;
          uVar27 = *(undefined8 *)puVar6;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar6 + 2);
          *(undefined8 *)puVar12 = uVar27;
          *(undefined8 *)(puVar6 + 2) = uVar28;
          *(undefined8 *)puVar6 = uVar13;
        }
      }
    }
    else {
      uVar2 = *puVar12;
      if (uVar2 < *puVar6) {
        if (uVar24 < uVar2) {
          uStack_1e8 = *(undefined8 *)(puVar6 + 2);
          uStack_1f0 = *(undefined8 *)puVar6;
          uVar13 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar6 = uVar13;
        }
        else {
          uVar28 = *(undefined8 *)(puVar6 + 2);
          uVar13 = *(undefined8 *)puVar6;
          uVar27 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar12 + 2);
          *(undefined8 *)puVar6 = uVar27;
          *(undefined8 *)(puVar12 + 2) = uVar28;
          *(undefined8 *)puVar12 = uVar13;
          if (*puVar12 <= *puVar15) goto LAB_10928308c;
          uStack_1e8 = *(undefined8 *)(puVar12 + 2);
          uStack_1f0 = *(undefined8 *)puVar12;
          uVar13 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar12 = uVar13;
        }
        *(undefined8 *)(param_2 + -2) = uStack_1e8;
        *(undefined8 *)puVar15 = uStack_1f0;
      }
      else if (uVar24 < uVar2) {
        uVar28 = *(undefined8 *)(puVar12 + 2);
        uVar13 = *(undefined8 *)puVar12;
        uVar27 = *(undefined8 *)puVar15;
        *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar12 = uVar27;
        *(undefined8 *)(param_2 + -2) = uVar28;
        *(undefined8 *)puVar15 = uVar13;
        if (*puVar12 < *puVar6) {
          uVar28 = *(undefined8 *)(puVar6 + 2);
          uVar13 = *(undefined8 *)puVar6;
          uVar27 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar12 + 2);
          *(undefined8 *)puVar6 = uVar27;
          *(undefined8 *)(puVar12 + 2) = uVar28;
          *(undefined8 *)puVar12 = uVar13;
        }
      }
LAB_10928308c:
      puVar8 = puVar6 + 4;
      puVar7 = puVar12 + -4;
      uVar24 = *puVar7;
      if (uVar24 < *puVar8) {
        if (*puVar16 < uVar24) {
          uVar28 = *(undefined8 *)(puVar6 + 6);
          uVar27 = *(undefined8 *)puVar8;
          uVar13 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)puVar8 = uVar13;
        }
        else {
          uVar27 = *(undefined8 *)(puVar6 + 6);
          uVar13 = *(undefined8 *)puVar8;
          uVar28 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar12 + -2);
          *(undefined8 *)puVar8 = uVar28;
          *(undefined8 *)(puVar12 + -2) = uVar27;
          *(undefined8 *)puVar7 = uVar13;
          if (*puVar7 <= *puVar16) goto LAB_10928318c;
          uVar28 = *(undefined8 *)(puVar12 + -2);
          uVar27 = *(undefined8 *)puVar7;
          uVar13 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)puVar7 = uVar13;
        }
        *(undefined8 *)(param_2 + -6) = uVar28;
        *(undefined8 *)puVar16 = uVar27;
      }
      else if (*puVar16 < uVar24) {
        uVar28 = *(undefined8 *)(puVar12 + -2);
        uVar13 = *(undefined8 *)puVar7;
        uVar27 = *(undefined8 *)puVar16;
        *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(param_2 + -6);
        *(undefined8 *)puVar7 = uVar27;
        *(undefined8 *)(param_2 + -6) = uVar28;
        *(undefined8 *)puVar16 = uVar13;
        if (*puVar7 < *puVar8) {
          uVar27 = *(undefined8 *)(puVar6 + 6);
          uVar13 = *(undefined8 *)puVar8;
          uVar28 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar12 + -2);
          *(undefined8 *)puVar8 = uVar28;
          *(undefined8 *)(puVar12 + -2) = uVar27;
          *(undefined8 *)puVar7 = uVar13;
        }
      }
LAB_10928318c:
      puVar20 = puVar6 + 8;
      puVar8 = puVar12 + 4;
      uVar24 = *puVar8;
      if (uVar24 < *puVar20) {
        if (*puVar26 < uVar24) {
          uVar28 = *(undefined8 *)(puVar6 + 10);
          uVar27 = *(undefined8 *)puVar20;
          uVar13 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar20 = uVar13;
        }
        else {
          uVar27 = *(undefined8 *)(puVar6 + 10);
          uVar13 = *(undefined8 *)puVar20;
          uVar28 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)puVar20 = uVar28;
          *(undefined8 *)(puVar12 + 6) = uVar27;
          *(undefined8 *)puVar8 = uVar13;
          if (*puVar8 <= *puVar26) goto LAB_109283248;
          uVar28 = *(undefined8 *)(puVar12 + 6);
          uVar27 = *(undefined8 *)puVar8;
          uVar13 = *(undefined8 *)puVar26;
          *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar8 = uVar13;
        }
        *(undefined8 *)(param_2 + -10) = uVar28;
        *(undefined8 *)puVar26 = uVar27;
      }
      else if (*puVar26 < uVar24) {
        uVar28 = *(undefined8 *)(puVar12 + 6);
        uVar13 = *(undefined8 *)puVar8;
        uVar27 = *(undefined8 *)puVar26;
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)puVar8 = uVar27;
        *(undefined8 *)(param_2 + -10) = uVar28;
        *(undefined8 *)puVar26 = uVar13;
        if (*puVar8 < *puVar20) {
          uVar27 = *(undefined8 *)(puVar6 + 10);
          uVar13 = *(undefined8 *)puVar20;
          uVar28 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)puVar20 = uVar28;
          *(undefined8 *)(puVar12 + 6) = uVar27;
          *(undefined8 *)puVar8 = uVar13;
        }
      }
LAB_109283248:
      uVar24 = *puVar12;
      if (uVar24 < puVar12[-4]) {
        if (puVar12[4] < uVar24) {
          uStack_1e8 = *(undefined8 *)(puVar12 + -2);
          uStack_1f0 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar8;
        }
        else {
          uVar27 = *(undefined8 *)(puVar12 + -2);
          uVar13 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(puVar12 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar12 + 2) = uVar27;
          *(undefined8 *)puVar12 = uVar13;
          if (*puVar12 <= puVar12[4]) goto LAB_109283304;
          uStack_1e8 = *(undefined8 *)(puVar12 + 2);
          uStack_1f0 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 6);
          *(undefined8 *)puVar12 = *(undefined8 *)puVar8;
        }
        *(undefined8 *)(puVar12 + 6) = uStack_1e8;
        *(undefined8 *)puVar8 = uStack_1f0;
      }
      else if (puVar12[4] < uVar24) {
        uVar27 = *(undefined8 *)(puVar12 + 2);
        uVar13 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar12 + 6);
        *(undefined8 *)puVar12 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar12 + 6) = uVar27;
        *(undefined8 *)puVar8 = uVar13;
        if (*puVar12 < puVar12[-4]) {
          uVar27 = *(undefined8 *)(puVar12 + -2);
          uVar13 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(puVar12 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar12 + 2) = uVar27;
          *(undefined8 *)puVar12 = uVar13;
        }
      }
LAB_109283304:
      uVar28 = *(undefined8 *)(puVar6 + 2);
      uVar13 = *(undefined8 *)puVar6;
      uVar27 = *(undefined8 *)puVar12;
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)puVar6 = uVar27;
      *(undefined8 *)(puVar12 + 2) = uVar28;
      *(undefined8 *)puVar12 = uVar13;
    }
LAB_10928331c:
    param_3 = (uint *)((long)param_3 + -1);
    uVar24 = *puVar6;
    if ((((ulong)param_4 & 1) != 0) || (puVar6[-4] < uVar24)) {
      lVar9 = 0;
      uVar13 = *(undefined8 *)(puVar6 + 1);
      uVar2 = puVar6[3];
      do {
        lVar17 = lVar9 + 0x10;
        lVar9 = lVar9 + 0x10;
      } while (*(uint *)((long)puVar6 + lVar17) < uVar24);
      puVar7 = (uint *)((long)puVar6 + lVar9);
      puVar8 = param_2;
      if (lVar9 == 0x10) {
        do {
          if (puVar8 <= puVar7) break;
          puVar8 = puVar8 + -4;
        } while (uVar24 <= *puVar8);
      }
      else {
        do {
          puVar8 = puVar8 + -4;
        } while (uVar24 <= *puVar8);
      }
      puVar20 = puVar8;
      puVar12 = puVar7;
      if (puVar7 < puVar8) {
        do {
          uVar29 = *(undefined8 *)(puVar12 + 2);
          uVar27 = *(undefined8 *)puVar12;
          uVar28 = *(undefined8 *)puVar20;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar20 + 2);
          *(undefined8 *)puVar12 = uVar28;
          *(undefined8 *)(puVar20 + 2) = uVar29;
          *(undefined8 *)puVar20 = uVar27;
          do {
            puVar12 = puVar12 + 4;
          } while (*puVar12 < uVar24);
          do {
            puVar20 = puVar20 + -4;
          } while (uVar24 <= *puVar20);
        } while (puVar12 < puVar20);
      }
      puVar20 = puVar12 + -4;
      if (puVar20 != puVar6) {
        uVar27 = *(undefined8 *)puVar20;
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar12 + -2);
        *(undefined8 *)puVar6 = uVar27;
      }
      puVar12[-4] = uVar24;
      puVar12[-1] = uVar2;
      *(undefined8 *)(puVar12 + -3) = uVar13;
      if (puVar8 <= puVar7) {
        puVar7 = puVar6;
        FUN_109283bfc(puVar6,puVar20);
        puVar8 = puVar12;
        FUN_109283bfc(puVar12,param_2);
        if ((int)puVar8 != 0) goto LAB_109283524;
        if (((ulong)puVar7 & 1) != 0) goto LAB_109282f00;
      }
      FUN_109282ec0(puVar6,puVar20,param_3,(uint)param_4 & 1);
      param_4 = (uint *)0x0;
      goto LAB_109282f00;
    }
    uVar13 = *(undefined8 *)(puVar6 + 1);
    uVar2 = puVar6[3];
    puVar12 = puVar6;
    if (uVar24 < *puVar15) {
      do {
        puVar12 = puVar12 + 4;
      } while (*puVar12 <= uVar24);
    }
    else {
      do {
        puVar12 = puVar12 + 4;
        if (param_2 <= puVar12) break;
      } while (*puVar12 <= uVar24);
    }
    puVar7 = param_2;
    if (puVar12 < param_2) {
      do {
        puVar7 = puVar7 + -4;
      } while (uVar24 < *puVar7);
    }
    while (puVar12 < puVar7) {
      uVar29 = *(undefined8 *)(puVar12 + 2);
      uVar27 = *(undefined8 *)puVar12;
      uVar28 = *(undefined8 *)puVar7;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar7 + 2);
      *(undefined8 *)puVar12 = uVar28;
      *(undefined8 *)(puVar7 + 2) = uVar29;
      *(undefined8 *)puVar7 = uVar27;
      do {
        puVar12 = puVar12 + 4;
      } while (*puVar12 <= uVar24);
      do {
        puVar7 = puVar7 + -4;
      } while (uVar24 < *puVar7);
    }
    if (puVar12 + -4 != puVar6) {
      uVar27 = *(undefined8 *)(puVar12 + -4);
      *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar12 + -2);
      *(undefined8 *)puVar6 = uVar27;
    }
    param_4 = (uint *)0x0;
    puVar12[-4] = uVar24;
    puVar12[-1] = uVar2;
    *(undefined8 *)(puVar12 + -3) = uVar13;
  } while( true );
LAB_109283610:
  puVar16 = puVar12;
  uVar24 = puVar15[4];
  if (uVar24 < *puVar15) {
    uVar13 = *(undefined8 *)(puVar15 + 5);
    uVar2 = puVar15[7];
    lVar17 = lVar9;
    do {
      lVar21 = lVar17;
      puVar1 = (undefined8 *)((long)puVar6 + lVar21);
      puVar1[3] = puVar1[1];
      puVar1[2] = *puVar1;
      puVar12 = puVar6;
      if (lVar21 == 0) goto LAB_109283668;
      lVar17 = lVar21 + -0x10;
    } while (uVar24 < *(uint *)(puVar1 + -2));
    puVar12 = (uint *)((long)puVar6 + lVar21);
LAB_109283668:
    *puVar12 = uVar24;
    puVar12[3] = uVar2;
    *(undefined8 *)(puVar12 + 1) = uVar13;
  }
  puVar12 = puVar16 + 4;
  lVar9 = lVar9 + 0x10;
  puVar15 = puVar16;
  if (puVar12 == param_2) {
    return;
  }
  goto LAB_109283610;
LAB_1092836a4:
  do {
    if ((long)uVar18 <= (long)uVar14) {
      uVar23 = uVar18 << 1 | 1;
      puVar12 = puVar6 + uVar23 * 4;
      uVar22 = uVar18 * 2 + 2;
      if ((long)uVar22 < (long)uVar10) {
        uVar2 = *puVar12;
        uVar25 = puVar12[4];
        uVar24 = uVar2;
        if (uVar2 <= uVar25) {
          uVar24 = uVar25;
        }
        puVar15 = puVar12 + 4;
        if (uVar25 <= uVar2) {
          puVar15 = puVar12;
          uVar22 = uVar23;
        }
      }
      else {
        uVar24 = *puVar12;
        puVar15 = puVar12;
        uVar22 = uVar23;
      }
      puVar12 = puVar6 + uVar18 * 4;
      uVar2 = *puVar12;
      if (uVar2 <= uVar24) {
        uVar13 = *(undefined8 *)(puVar12 + 1);
        uVar24 = puVar12[3];
        do {
          puVar16 = puVar15;
          uVar27 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar16 + 2);
          *(undefined8 *)puVar12 = uVar27;
          if ((long)uVar14 < (long)uVar22) break;
          uVar23 = uVar22 << 1 | 1;
          puVar12 = puVar6 + uVar23 * 4;
          uVar22 = uVar22 * 2 + 2;
          if ((long)uVar22 < (long)uVar10) {
            uVar3 = *puVar12;
            uVar4 = puVar12[4];
            uVar25 = uVar3;
            if (uVar3 <= uVar4) {
              uVar25 = uVar4;
            }
            puVar15 = puVar12 + 4;
            if (uVar4 <= uVar3) {
              puVar15 = puVar12;
              uVar22 = uVar23;
            }
          }
          else {
            uVar25 = *puVar12;
            puVar15 = puVar12;
            uVar22 = uVar23;
          }
          puVar12 = puVar16;
        } while (uVar2 <= uVar25);
        *puVar16 = uVar2;
        puVar16[3] = uVar24;
        *(undefined8 *)(puVar16 + 1) = uVar13;
      }
    }
    bVar5 = uVar18 != 0;
    uVar18 = uVar18 - 1;
  } while (bVar5);
  do {
    uVar27 = *(undefined8 *)(puVar6 + 2);
    uVar13 = *(undefined8 *)puVar6;
    puVar12 = puVar6;
    uVar18 = 0;
    do {
      uVar22 = uVar18 << 1 | 1;
      uVar14 = uVar18 * 2 + 2;
      puVar15 = puVar12 + uVar18 * 4 + 4;
      uVar23 = uVar22;
      if (((long)uVar14 < (long)uVar10) &&
         (puVar15 = puVar12 + uVar18 * 4 + 8, uVar23 = uVar14,
         puVar12[uVar18 * 4 + 8] <= puVar12[uVar18 * 4 + 4])) {
        puVar15 = puVar12 + uVar18 * 4 + 4;
        uVar23 = uVar22;
      }
      uVar28 = *(undefined8 *)puVar15;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar15 + 2);
      *(undefined8 *)puVar12 = uVar28;
      puVar12 = puVar15;
      uVar18 = uVar23;
    } while ((long)uVar23 <= (long)(uVar10 - 2 >> 1));
    puVar12 = param_2 + -4;
    if (puVar15 == puVar12) {
      *(undefined8 *)(puVar15 + 2) = uVar27;
      *(undefined8 *)puVar15 = uVar13;
    }
    else {
      uVar28 = *(undefined8 *)puVar12;
      *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar15 = uVar28;
      *(undefined8 *)(param_2 + -2) = uVar27;
      *(undefined8 *)puVar12 = uVar13;
      lVar9 = (long)((long)puVar15 + (0x10 - (long)puVar6)) >> 4;
      if (1 < lVar9) {
        uVar18 = lVar9 - 2U >> 1;
        uVar24 = *puVar15;
        if (puVar6[uVar18 * 4] < uVar24) {
          uVar13 = *(undefined8 *)(puVar15 + 1);
          uVar2 = puVar15[3];
          puVar16 = puVar6 + uVar18 * 4;
          do {
            puVar26 = puVar16;
            uVar27 = *(undefined8 *)puVar26;
            *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar26 + 2);
            *(undefined8 *)puVar15 = uVar27;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            puVar15 = puVar26;
            puVar16 = puVar6 + uVar18 * 4;
          } while (puVar6[uVar18 * 4] < uVar24);
          *puVar26 = uVar24;
          puVar26[3] = uVar2;
          *(undefined8 *)(puVar26 + 1) = uVar13;
        }
      }
    }
    bVar5 = (long)uVar10 < 3;
    uVar10 = uVar10 - 1;
    param_2 = puVar12;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_109283524:
  param_2 = puVar20;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_109282ef0;
}



/* Entry: 109282eac; end: 109282ebf;  */

void FUN_109282eac(undefined8 param_1,uint *param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar7 = (uint *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
LAB_109282ef0:
  puVar13 = param_2 + -4;
  puVar23 = param_2 + -8;
  puVar24 = param_2 + -0xc;
  puVar18 = puVar7;
LAB_109282f00:
  do {
    puVar7 = puVar18;
    uVar10 = (long)param_2 - (long)puVar7 >> 4;
    if (uVar10 - 2 != 0 && 1 < (long)uVar10) {
      if (uVar10 != 3) {
        if (uVar10 != 4) {
          if (uVar10 == 5) {
            puVar18 = puVar7 + 4;
            puVar23 = puVar7 + 8;
            puVar24 = puVar7 + 0xc;
            uVar21 = *puVar18;
            if (uVar21 < *puVar7) {
              if (*puVar23 < uVar21) {
                uVar25 = *(undefined8 *)(puVar7 + 2);
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 10);
                *(undefined8 *)puVar7 = *(undefined8 *)puVar23;
              }
              else {
                uVar25 = *(undefined8 *)(puVar7 + 2);
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
                *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
                *(undefined8 *)(puVar7 + 6) = uVar25;
                *(undefined8 *)puVar18 = uVar11;
                if (*puVar18 <= *puVar23) goto LAB_109283b14;
                uVar25 = *(undefined8 *)(puVar7 + 6);
                uVar11 = *(undefined8 *)puVar18;
                *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
                *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
              }
              *(undefined8 *)(puVar7 + 10) = uVar25;
              *(undefined8 *)puVar23 = uVar11;
            }
            else if (*puVar23 < uVar21) {
              uVar25 = *(undefined8 *)(puVar7 + 6);
              uVar11 = *(undefined8 *)puVar18;
              *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
              *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
              *(undefined8 *)(puVar7 + 10) = uVar25;
              *(undefined8 *)puVar23 = uVar11;
              if (*puVar18 < *puVar7) {
                uVar25 = *(undefined8 *)(puVar7 + 2);
                uVar11 = *(undefined8 *)puVar7;
                *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
                *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
                *(undefined8 *)(puVar7 + 6) = uVar25;
                *(undefined8 *)puVar18 = uVar11;
              }
            }
LAB_109283b14:
            if (*puVar24 < *puVar23) {
              uVar25 = *(undefined8 *)(puVar7 + 10);
              uVar11 = *(undefined8 *)puVar23;
              *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar7 + 0xe);
              *(undefined8 *)puVar23 = *(undefined8 *)puVar24;
              *(undefined8 *)(puVar7 + 0xe) = uVar25;
              *(undefined8 *)puVar24 = uVar11;
              if (*puVar23 < *puVar18) {
                uVar25 = *(undefined8 *)(puVar7 + 6);
                uVar11 = *(undefined8 *)puVar18;
                *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
                *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
                *(undefined8 *)(puVar7 + 10) = uVar25;
                *(undefined8 *)puVar23 = uVar11;
                if (*puVar18 < *puVar7) {
                  uVar25 = *(undefined8 *)(puVar7 + 2);
                  uVar11 = *(undefined8 *)puVar7;
                  *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
                  *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
                  *(undefined8 *)(puVar7 + 6) = uVar25;
                  *(undefined8 *)puVar18 = uVar11;
                }
              }
            }
            if (*puVar13 < *puVar24) {
              uVar25 = *(undefined8 *)(puVar7 + 0xe);
              uVar11 = *(undefined8 *)puVar24;
              uVar26 = *(undefined8 *)puVar13;
              *(undefined8 *)(puVar7 + 0xe) = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)puVar24 = uVar26;
              *(undefined8 *)(param_2 + -2) = uVar25;
              *(undefined8 *)puVar13 = uVar11;
              if (*puVar24 < *puVar23) {
                uVar25 = *(undefined8 *)(puVar7 + 10);
                uVar11 = *(undefined8 *)puVar23;
                *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar7 + 0xe);
                *(undefined8 *)puVar23 = *(undefined8 *)puVar24;
                *(undefined8 *)(puVar7 + 0xe) = uVar25;
                *(undefined8 *)puVar24 = uVar11;
                if (*puVar23 < *puVar18) {
                  uVar25 = *(undefined8 *)(puVar7 + 6);
                  uVar11 = *(undefined8 *)puVar18;
                  *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
                  *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
                  *(undefined8 *)(puVar7 + 10) = uVar25;
                  *(undefined8 *)puVar23 = uVar11;
                  if (*puVar18 < *puVar7) {
                    uVar25 = *(undefined8 *)(puVar7 + 2);
                    uVar11 = *(undefined8 *)puVar7;
                    *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
                    *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
                    *(undefined8 *)(puVar7 + 6) = uVar25;
                    *(undefined8 *)puVar18 = uVar11;
                  }
                }
              }
            }
            return;
          }
          goto LAB_109282f3c;
        }
        puVar18 = puVar7 + 4;
        uVar21 = *puVar18;
        puVar23 = puVar7 + 8;
        uVar3 = *puVar23;
        if (uVar21 < *puVar7) {
          if (uVar3 < uVar21) {
            uVar25 = *(undefined8 *)(puVar7 + 2);
            uVar11 = *(undefined8 *)puVar7;
            *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 10);
            *(undefined8 *)puVar7 = *(undefined8 *)puVar23;
          }
          else {
            uVar25 = *(undefined8 *)(puVar7 + 2);
            uVar11 = *(undefined8 *)puVar7;
            *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
            *(undefined8 *)(puVar7 + 6) = uVar25;
            *(undefined8 *)puVar18 = uVar11;
            if (puVar7[4] <= uVar3) goto LAB_1092839ec;
            uVar25 = *(undefined8 *)(puVar7 + 6);
            uVar11 = *(undefined8 *)puVar18;
            *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
            *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
          }
          *(undefined8 *)(puVar7 + 10) = uVar25;
          *(undefined8 *)puVar23 = uVar11;
        }
        else if (uVar3 < uVar21) {
          uVar25 = *(undefined8 *)(puVar7 + 6);
          uVar11 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
          *(undefined8 *)(puVar7 + 10) = uVar25;
          *(undefined8 *)puVar23 = uVar11;
          if (puVar7[4] < *puVar7) {
            uVar25 = *(undefined8 *)(puVar7 + 2);
            uVar11 = *(undefined8 *)puVar7;
            *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
            *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
            *(undefined8 *)(puVar7 + 6) = uVar25;
            *(undefined8 *)puVar18 = uVar11;
          }
        }
LAB_1092839ec:
        if (*puVar23 <= *puVar13) {
          return;
        }
        uVar25 = *(undefined8 *)(puVar7 + 10);
        uVar11 = *(undefined8 *)puVar23;
        uVar26 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar23 = uVar26;
        *(undefined8 *)(param_2 + -2) = uVar25;
        *(undefined8 *)puVar13 = uVar11;
        if (*puVar18 <= *puVar23) {
          return;
        }
        uVar25 = *(undefined8 *)(puVar7 + 6);
        uVar11 = *(undefined8 *)puVar18;
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar7 + 10);
        *(undefined8 *)puVar18 = *(undefined8 *)puVar23;
        *(undefined8 *)(puVar7 + 10) = uVar25;
        *(undefined8 *)puVar23 = uVar11;
LAB_109283a30:
        puVar18 = puVar7 + 4;
        if (*puVar7 <= *puVar18) {
          return;
        }
        uVar25 = *(undefined8 *)(puVar7 + 2);
        uVar11 = *(undefined8 *)puVar7;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
        *(undefined8 *)(puVar7 + 6) = uVar25;
        *(undefined8 *)puVar18 = uVar11;
        return;
      }
      puVar18 = puVar7 + 4;
      uVar21 = *puVar18;
      puVar13 = param_2 + -4;
      if (*puVar7 <= uVar21) {
        if (uVar21 <= *puVar13) {
          return;
        }
        uVar25 = *(undefined8 *)(puVar7 + 6);
        uVar11 = *(undefined8 *)puVar18;
        uVar26 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar18 = uVar26;
        *(undefined8 *)(param_2 + -2) = uVar25;
        *(undefined8 *)puVar13 = uVar11;
        goto LAB_109283a30;
      }
      if (uVar21 <= *puVar13) {
        uVar25 = *(undefined8 *)(puVar7 + 2);
        uVar11 = *(undefined8 *)puVar7;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar7 + 6);
        *(undefined8 *)puVar7 = *(undefined8 *)puVar18;
        *(undefined8 *)(puVar7 + 6) = uVar25;
        *(undefined8 *)puVar18 = uVar11;
        if (puVar7[4] <= *puVar13) {
          return;
        }
        uVar25 = *(undefined8 *)(puVar7 + 6);
        uVar11 = *(undefined8 *)puVar18;
        uVar26 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar18 = uVar26;
        goto LAB_1092835ac;
      }
LAB_109283598:
      uVar25 = *(undefined8 *)(puVar7 + 2);
      uVar11 = *(undefined8 *)puVar7;
      uVar26 = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar7 = uVar26;
LAB_1092835ac:
      *(undefined8 *)(param_2 + -2) = uVar25;
      *(undefined8 *)(param_2 + -4) = uVar11;
      return;
    }
    if (uVar10 < 2) {
      return;
    }
    if (uVar10 == 2) {
      if (*puVar7 <= param_2[-4]) {
        return;
      }
      goto LAB_109283598;
    }
LAB_109282f3c:
    if ((long)uVar10 < 0x18) {
      puVar18 = puVar7 + 4;
      if ((param_4 & 1) == 0) {
        if (puVar7 == param_2 || puVar18 == param_2) {
          return;
        }
        do {
          puVar13 = puVar18;
          uVar21 = puVar7[4];
          if (uVar21 < *puVar7) {
            uVar11 = *(undefined8 *)(puVar7 + 5);
            uVar3 = puVar7[7];
            puVar7 = puVar13;
            do {
              puVar18 = puVar7;
              *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar18 + -2);
              *(undefined8 *)puVar18 = *(undefined8 *)(puVar18 + -4);
              puVar7 = puVar18 + -4;
            } while (uVar21 < puVar18[-8]);
            puVar18[-4] = uVar21;
            puVar18[-1] = uVar3;
            *(undefined8 *)(puVar18 + -3) = uVar11;
          }
          puVar18 = puVar13 + 4;
          puVar7 = puVar13;
        } while (puVar13 + 4 != param_2);
        return;
      }
      if (puVar7 == param_2 || puVar18 == param_2) {
        return;
      }
      lVar15 = 0;
      puVar13 = puVar7;
      break;
    }
    if (param_3 == 0) {
      if (puVar7 == param_2) {
        return;
      }
      uVar12 = uVar10 - 2 >> 1;
      uVar14 = uVar12;
      goto LAB_1092836a4;
    }
    puVar18 = puVar7 + (uVar10 >> 1) * 4;
    uVar21 = *puVar13;
    if (uVar10 < 0x81) {
      uVar3 = *puVar7;
      if (uVar3 < *puVar18) {
        if (uVar21 < uVar3) {
          uStack_78 = *(undefined8 *)(puVar18 + 2);
          uStack_80 = *(undefined8 *)puVar18;
          uVar11 = *(undefined8 *)puVar13;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar18 = uVar11;
        }
        else {
          uVar26 = *(undefined8 *)(puVar18 + 2);
          uVar11 = *(undefined8 *)puVar18;
          uVar25 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)puVar18 = uVar25;
          *(undefined8 *)(puVar7 + 2) = uVar26;
          *(undefined8 *)puVar7 = uVar11;
          if (*puVar7 <= *puVar13) goto LAB_10928331c;
          uStack_78 = *(undefined8 *)(puVar7 + 2);
          uStack_80 = *(undefined8 *)puVar7;
          uVar11 = *(undefined8 *)puVar13;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar7 = uVar11;
        }
        *(undefined8 *)(param_2 + -2) = uStack_78;
        *(undefined8 *)puVar13 = uStack_80;
      }
      else if (uVar21 < uVar3) {
        uVar26 = *(undefined8 *)(puVar7 + 2);
        uVar11 = *(undefined8 *)puVar7;
        uVar25 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar7 = uVar25;
        *(undefined8 *)(param_2 + -2) = uVar26;
        *(undefined8 *)puVar13 = uVar11;
        if (*puVar7 < *puVar18) {
          uVar26 = *(undefined8 *)(puVar18 + 2);
          uVar11 = *(undefined8 *)puVar18;
          uVar25 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar7 + 2);
          *(undefined8 *)puVar18 = uVar25;
          *(undefined8 *)(puVar7 + 2) = uVar26;
          *(undefined8 *)puVar7 = uVar11;
        }
      }
    }
    else {
      uVar3 = *puVar18;
      if (uVar3 < *puVar7) {
        if (uVar21 < uVar3) {
          uStack_78 = *(undefined8 *)(puVar7 + 2);
          uStack_80 = *(undefined8 *)puVar7;
          uVar11 = *(undefined8 *)puVar13;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar7 = uVar11;
        }
        else {
          uVar26 = *(undefined8 *)(puVar7 + 2);
          uVar11 = *(undefined8 *)puVar7;
          uVar25 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar7 = uVar25;
          *(undefined8 *)(puVar18 + 2) = uVar26;
          *(undefined8 *)puVar18 = uVar11;
          if (*puVar18 <= *puVar13) goto LAB_10928308c;
          uStack_78 = *(undefined8 *)(puVar18 + 2);
          uStack_80 = *(undefined8 *)puVar18;
          uVar11 = *(undefined8 *)puVar13;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar18 = uVar11;
        }
        *(undefined8 *)(param_2 + -2) = uStack_78;
        *(undefined8 *)puVar13 = uStack_80;
      }
      else if (uVar21 < uVar3) {
        uVar26 = *(undefined8 *)(puVar18 + 2);
        uVar11 = *(undefined8 *)puVar18;
        uVar25 = *(undefined8 *)puVar13;
        *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar18 = uVar25;
        *(undefined8 *)(param_2 + -2) = uVar26;
        *(undefined8 *)puVar13 = uVar11;
        if (*puVar18 < *puVar7) {
          uVar26 = *(undefined8 *)(puVar7 + 2);
          uVar11 = *(undefined8 *)puVar7;
          uVar25 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar7 = uVar25;
          *(undefined8 *)(puVar18 + 2) = uVar26;
          *(undefined8 *)puVar18 = uVar11;
        }
      }
LAB_10928308c:
      puVar9 = puVar7 + 4;
      puVar8 = puVar18 + -4;
      uVar21 = *puVar8;
      if (uVar21 < *puVar9) {
        if (*puVar23 < uVar21) {
          uVar26 = *(undefined8 *)(puVar7 + 6);
          uVar25 = *(undefined8 *)puVar9;
          uVar11 = *(undefined8 *)puVar23;
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)puVar9 = uVar11;
        }
        else {
          uVar25 = *(undefined8 *)(puVar7 + 6);
          uVar11 = *(undefined8 *)puVar9;
          uVar26 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar18 + -2);
          *(undefined8 *)puVar9 = uVar26;
          *(undefined8 *)(puVar18 + -2) = uVar25;
          *(undefined8 *)puVar8 = uVar11;
          if (*puVar8 <= *puVar23) goto LAB_10928318c;
          uVar26 = *(undefined8 *)(puVar18 + -2);
          uVar25 = *(undefined8 *)puVar8;
          uVar11 = *(undefined8 *)puVar23;
          *(undefined8 *)(puVar18 + -2) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)puVar8 = uVar11;
        }
        *(undefined8 *)(param_2 + -6) = uVar26;
        *(undefined8 *)puVar23 = uVar25;
      }
      else if (*puVar23 < uVar21) {
        uVar26 = *(undefined8 *)(puVar18 + -2);
        uVar11 = *(undefined8 *)puVar8;
        uVar25 = *(undefined8 *)puVar23;
        *(undefined8 *)(puVar18 + -2) = *(undefined8 *)(param_2 + -6);
        *(undefined8 *)puVar8 = uVar25;
        *(undefined8 *)(param_2 + -6) = uVar26;
        *(undefined8 *)puVar23 = uVar11;
        if (*puVar8 < *puVar9) {
          uVar25 = *(undefined8 *)(puVar7 + 6);
          uVar11 = *(undefined8 *)puVar9;
          uVar26 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar18 + -2);
          *(undefined8 *)puVar9 = uVar26;
          *(undefined8 *)(puVar18 + -2) = uVar25;
          *(undefined8 *)puVar8 = uVar11;
        }
      }
LAB_10928318c:
      puVar16 = puVar7 + 8;
      puVar9 = puVar18 + 4;
      uVar21 = *puVar9;
      if (uVar21 < *puVar16) {
        if (*puVar24 < uVar21) {
          uVar26 = *(undefined8 *)(puVar7 + 10);
          uVar25 = *(undefined8 *)puVar16;
          uVar11 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar16 = uVar11;
        }
        else {
          uVar25 = *(undefined8 *)(puVar7 + 10);
          uVar11 = *(undefined8 *)puVar16;
          uVar26 = *(undefined8 *)puVar9;
          *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar18 + 6);
          *(undefined8 *)puVar16 = uVar26;
          *(undefined8 *)(puVar18 + 6) = uVar25;
          *(undefined8 *)puVar9 = uVar11;
          if (*puVar9 <= *puVar24) goto LAB_109283248;
          uVar26 = *(undefined8 *)(puVar18 + 6);
          uVar25 = *(undefined8 *)puVar9;
          uVar11 = *(undefined8 *)puVar24;
          *(undefined8 *)(puVar18 + 6) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar9 = uVar11;
        }
        *(undefined8 *)(param_2 + -10) = uVar26;
        *(undefined8 *)puVar24 = uVar25;
      }
      else if (*puVar24 < uVar21) {
        uVar26 = *(undefined8 *)(puVar18 + 6);
        uVar11 = *(undefined8 *)puVar9;
        uVar25 = *(undefined8 *)puVar24;
        *(undefined8 *)(puVar18 + 6) = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)puVar9 = uVar25;
        *(undefined8 *)(param_2 + -10) = uVar26;
        *(undefined8 *)puVar24 = uVar11;
        if (*puVar9 < *puVar16) {
          uVar25 = *(undefined8 *)(puVar7 + 10);
          uVar11 = *(undefined8 *)puVar16;
          uVar26 = *(undefined8 *)puVar9;
          *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(puVar18 + 6);
          *(undefined8 *)puVar16 = uVar26;
          *(undefined8 *)(puVar18 + 6) = uVar25;
          *(undefined8 *)puVar9 = uVar11;
        }
      }
LAB_109283248:
      uVar21 = *puVar18;
      if (uVar21 < puVar18[-4]) {
        if (puVar18[4] < uVar21) {
          uStack_78 = *(undefined8 *)(puVar18 + -2);
          uStack_80 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar18 + -2) = *(undefined8 *)(puVar18 + 6);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
        }
        else {
          uVar25 = *(undefined8 *)(puVar18 + -2);
          uVar11 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar18 + -2) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar18 + 2) = uVar25;
          *(undefined8 *)puVar18 = uVar11;
          if (*puVar18 <= puVar18[4]) goto LAB_109283304;
          uStack_78 = *(undefined8 *)(puVar18 + 2);
          uStack_80 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar18 + 6);
          *(undefined8 *)puVar18 = *(undefined8 *)puVar9;
        }
        *(undefined8 *)(puVar18 + 6) = uStack_78;
        *(undefined8 *)puVar9 = uStack_80;
      }
      else if (puVar18[4] < uVar21) {
        uVar25 = *(undefined8 *)(puVar18 + 2);
        uVar11 = *(undefined8 *)puVar18;
        *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar18 + 6);
        *(undefined8 *)puVar18 = *(undefined8 *)puVar9;
        *(undefined8 *)(puVar18 + 6) = uVar25;
        *(undefined8 *)puVar9 = uVar11;
        if (*puVar18 < puVar18[-4]) {
          uVar25 = *(undefined8 *)(puVar18 + -2);
          uVar11 = *(undefined8 *)puVar8;
          *(undefined8 *)(puVar18 + -2) = *(undefined8 *)(puVar18 + 2);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar18;
          *(undefined8 *)(puVar18 + 2) = uVar25;
          *(undefined8 *)puVar18 = uVar11;
        }
      }
LAB_109283304:
      uVar26 = *(undefined8 *)(puVar7 + 2);
      uVar11 = *(undefined8 *)puVar7;
      uVar25 = *(undefined8 *)puVar18;
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar18 + 2);
      *(undefined8 *)puVar7 = uVar25;
      *(undefined8 *)(puVar18 + 2) = uVar26;
      *(undefined8 *)puVar18 = uVar11;
    }
LAB_10928331c:
    param_3 = param_3 + -1;
    uVar21 = *puVar7;
    if (((param_4 & 1) != 0) || (puVar7[-4] < uVar21)) {
      lVar15 = 0;
      uVar11 = *(undefined8 *)(puVar7 + 1);
      uVar3 = puVar7[3];
      do {
        lVar6 = lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      } while (*(uint *)((long)puVar7 + lVar6) < uVar21);
      puVar8 = (uint *)((long)puVar7 + lVar15);
      puVar9 = param_2;
      if (lVar15 == 0x10) {
        do {
          if (puVar9 <= puVar8) break;
          puVar9 = puVar9 + -4;
        } while (uVar21 <= *puVar9);
      }
      else {
        do {
          puVar9 = puVar9 + -4;
        } while (uVar21 <= *puVar9);
      }
      puVar16 = puVar9;
      puVar18 = puVar8;
      if (puVar8 < puVar9) {
        do {
          uVar27 = *(undefined8 *)(puVar18 + 2);
          uVar25 = *(undefined8 *)puVar18;
          uVar26 = *(undefined8 *)puVar16;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar16 + 2);
          *(undefined8 *)puVar18 = uVar26;
          *(undefined8 *)(puVar16 + 2) = uVar27;
          *(undefined8 *)puVar16 = uVar25;
          do {
            puVar18 = puVar18 + 4;
          } while (*puVar18 < uVar21);
          do {
            puVar16 = puVar16 + -4;
          } while (uVar21 <= *puVar16);
        } while (puVar18 < puVar16);
      }
      puVar16 = puVar18 + -4;
      if (puVar16 != puVar7) {
        uVar25 = *(undefined8 *)puVar16;
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar18 + -2);
        *(undefined8 *)puVar7 = uVar25;
      }
      puVar18[-4] = uVar21;
      puVar18[-1] = uVar3;
      *(undefined8 *)(puVar18 + -3) = uVar11;
      if (puVar9 <= puVar8) {
        puVar8 = puVar7;
        FUN_109283bfc(puVar7,puVar16);
        puVar9 = puVar18;
        FUN_109283bfc(puVar18,param_2);
        if ((int)puVar9 != 0) goto LAB_109283524;
        if (((ulong)puVar8 & 1) != 0) goto LAB_109282f00;
      }
      FUN_109282ec0(puVar7,puVar16,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_109282f00;
    }
    uVar11 = *(undefined8 *)(puVar7 + 1);
    uVar3 = puVar7[3];
    puVar18 = puVar7;
    if (uVar21 < *puVar13) {
      do {
        puVar18 = puVar18 + 4;
      } while (*puVar18 <= uVar21);
    }
    else {
      do {
        puVar18 = puVar18 + 4;
        if (param_2 <= puVar18) break;
      } while (*puVar18 <= uVar21);
    }
    puVar8 = param_2;
    if (puVar18 < param_2) {
      do {
        puVar8 = puVar8 + -4;
      } while (uVar21 < *puVar8);
    }
    while (puVar18 < puVar8) {
      uVar27 = *(undefined8 *)(puVar18 + 2);
      uVar25 = *(undefined8 *)puVar18;
      uVar26 = *(undefined8 *)puVar8;
      *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar8 + 2);
      *(undefined8 *)puVar18 = uVar26;
      *(undefined8 *)(puVar8 + 2) = uVar27;
      *(undefined8 *)puVar8 = uVar25;
      do {
        puVar18 = puVar18 + 4;
      } while (*puVar18 <= uVar21);
      do {
        puVar8 = puVar8 + -4;
      } while (uVar21 < *puVar8);
    }
    if (puVar18 + -4 != puVar7) {
      uVar25 = *(undefined8 *)(puVar18 + -4);
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar18 + -2);
      *(undefined8 *)puVar7 = uVar25;
    }
    param_4 = 0;
    puVar18[-4] = uVar21;
    puVar18[-1] = uVar3;
    *(undefined8 *)(puVar18 + -3) = uVar11;
  } while( true );
LAB_109283610:
  puVar23 = puVar18;
  uVar21 = puVar13[4];
  if (uVar21 < *puVar13) {
    uVar11 = *(undefined8 *)(puVar13 + 5);
    uVar3 = puVar13[7];
    lVar6 = lVar15;
    do {
      lVar17 = lVar6;
      puVar1 = (undefined8 *)((long)puVar7 + lVar17);
      puVar1[3] = puVar1[1];
      puVar1[2] = *puVar1;
      puVar18 = puVar7;
      if (lVar17 == 0) goto LAB_109283668;
      lVar6 = lVar17 + -0x10;
    } while (uVar21 < *(uint *)(puVar1 + -2));
    puVar18 = (uint *)((long)puVar7 + lVar17);
LAB_109283668:
    *puVar18 = uVar21;
    puVar18[3] = uVar3;
    *(undefined8 *)(puVar18 + 1) = uVar11;
  }
  puVar18 = puVar23 + 4;
  lVar15 = lVar15 + 0x10;
  puVar13 = puVar23;
  if (puVar18 == param_2) {
    return;
  }
  goto LAB_109283610;
LAB_1092836a4:
  do {
    if ((long)uVar14 <= (long)uVar12) {
      uVar20 = uVar14 << 1 | 1;
      puVar18 = puVar7 + uVar20 * 4;
      uVar19 = uVar14 * 2 + 2;
      if ((long)uVar19 < (long)uVar10) {
        uVar3 = *puVar18;
        uVar22 = puVar18[4];
        uVar21 = uVar3;
        if (uVar3 <= uVar22) {
          uVar21 = uVar22;
        }
        puVar13 = puVar18 + 4;
        if (uVar22 <= uVar3) {
          puVar13 = puVar18;
          uVar19 = uVar20;
        }
      }
      else {
        uVar21 = *puVar18;
        puVar13 = puVar18;
        uVar19 = uVar20;
      }
      puVar18 = puVar7 + uVar14 * 4;
      uVar3 = *puVar18;
      if (uVar3 <= uVar21) {
        uVar11 = *(undefined8 *)(puVar18 + 1);
        uVar21 = puVar18[3];
        do {
          puVar23 = puVar13;
          uVar25 = *(undefined8 *)puVar23;
          *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar23 + 2);
          *(undefined8 *)puVar18 = uVar25;
          if ((long)uVar12 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar18 = puVar7 + uVar20 * 4;
          uVar19 = uVar19 * 2 + 2;
          if ((long)uVar19 < (long)uVar10) {
            uVar4 = *puVar18;
            uVar5 = puVar18[4];
            uVar22 = uVar4;
            if (uVar4 <= uVar5) {
              uVar22 = uVar5;
            }
            puVar13 = puVar18 + 4;
            if (uVar5 <= uVar4) {
              puVar13 = puVar18;
              uVar19 = uVar20;
            }
          }
          else {
            uVar22 = *puVar18;
            puVar13 = puVar18;
            uVar19 = uVar20;
          }
          puVar18 = puVar23;
        } while (uVar3 <= uVar22);
        *puVar23 = uVar3;
        puVar23[3] = uVar21;
        *(undefined8 *)(puVar23 + 1) = uVar11;
      }
    }
    bVar2 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar2);
  do {
    uVar25 = *(undefined8 *)(puVar7 + 2);
    uVar11 = *(undefined8 *)puVar7;
    puVar18 = puVar7;
    uVar14 = 0;
    do {
      uVar19 = uVar14 << 1 | 1;
      uVar12 = uVar14 * 2 + 2;
      puVar13 = puVar18 + uVar14 * 4 + 4;
      uVar20 = uVar19;
      if (((long)uVar12 < (long)uVar10) &&
         (puVar13 = puVar18 + uVar14 * 4 + 8, uVar20 = uVar12,
         puVar18[uVar14 * 4 + 8] <= puVar18[uVar14 * 4 + 4])) {
        puVar13 = puVar18 + uVar14 * 4 + 4;
        uVar20 = uVar19;
      }
      uVar26 = *(undefined8 *)puVar13;
      *(undefined8 *)(puVar18 + 2) = *(undefined8 *)(puVar13 + 2);
      *(undefined8 *)puVar18 = uVar26;
      puVar18 = puVar13;
      uVar14 = uVar20;
    } while ((long)uVar20 <= (long)(uVar10 - 2 >> 1));
    puVar18 = param_2 + -4;
    if (puVar13 == puVar18) {
      *(undefined8 *)(puVar13 + 2) = uVar25;
      *(undefined8 *)puVar13 = uVar11;
    }
    else {
      uVar26 = *(undefined8 *)puVar18;
      *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar13 = uVar26;
      *(undefined8 *)(param_2 + -2) = uVar25;
      *(undefined8 *)puVar18 = uVar11;
      lVar15 = (long)((long)puVar13 + (0x10 - (long)puVar7)) >> 4;
      if (1 < lVar15) {
        uVar14 = lVar15 - 2U >> 1;
        uVar21 = *puVar13;
        if (puVar7[uVar14 * 4] < uVar21) {
          uVar11 = *(undefined8 *)(puVar13 + 1);
          uVar3 = puVar13[3];
          puVar23 = puVar7 + uVar14 * 4;
          do {
            puVar24 = puVar23;
            uVar25 = *(undefined8 *)puVar24;
            *(undefined8 *)(puVar13 + 2) = *(undefined8 *)(puVar24 + 2);
            *(undefined8 *)puVar13 = uVar25;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar13 = puVar24;
            puVar23 = puVar7 + uVar14 * 4;
          } while (puVar7[uVar14 * 4] < uVar21);
          *puVar24 = uVar21;
          puVar24[3] = uVar3;
          *(undefined8 *)(puVar24 + 1) = uVar11;
        }
      }
    }
    bVar2 = (long)uVar10 < 3;
    uVar10 = uVar10 - 1;
    param_2 = puVar18;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_109283524:
  param_2 = puVar16;
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  goto LAB_109282ef0;
}



/* Entry: 109282ec0; end: 109283a77;  */

void FUN_109282ec0(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
LAB_109282ef0:
  puVar12 = param_2 + -4;
  puVar22 = param_2 + -8;
  puVar23 = param_2 + -0xc;
  puVar17 = param_1;
LAB_109282f00:
  do {
    param_1 = puVar17;
    uVar9 = (long)param_2 - (long)param_1 >> 4;
    if (uVar9 - 2 != 0 && 1 < (long)uVar9) {
      if (uVar9 != 3) {
        if (uVar9 != 4) {
          if (uVar9 == 5) {
            puVar17 = param_1 + 4;
            puVar22 = param_1 + 8;
            puVar23 = param_1 + 0xc;
            uVar20 = *puVar17;
            if (uVar20 < *param_1) {
              if (*puVar22 < uVar20) {
                uVar24 = *(undefined8 *)(param_1 + 2);
                uVar10 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
                *(undefined8 *)param_1 = *(undefined8 *)puVar22;
              }
              else {
                uVar24 = *(undefined8 *)(param_1 + 2);
                uVar10 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
                *(undefined8 *)param_1 = *(undefined8 *)puVar17;
                *(undefined8 *)(param_1 + 6) = uVar24;
                *(undefined8 *)puVar17 = uVar10;
                if (*puVar17 <= *puVar22) goto LAB_109283b14;
                uVar24 = *(undefined8 *)(param_1 + 6);
                uVar10 = *(undefined8 *)puVar17;
                *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
                *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
              }
              *(undefined8 *)(param_1 + 10) = uVar24;
              *(undefined8 *)puVar22 = uVar10;
            }
            else if (*puVar22 < uVar20) {
              uVar24 = *(undefined8 *)(param_1 + 6);
              uVar10 = *(undefined8 *)puVar17;
              *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
              *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
              *(undefined8 *)(param_1 + 10) = uVar24;
              *(undefined8 *)puVar22 = uVar10;
              if (*puVar17 < *param_1) {
                uVar24 = *(undefined8 *)(param_1 + 2);
                uVar10 = *(undefined8 *)param_1;
                *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
                *(undefined8 *)param_1 = *(undefined8 *)puVar17;
                *(undefined8 *)(param_1 + 6) = uVar24;
                *(undefined8 *)puVar17 = uVar10;
              }
            }
LAB_109283b14:
            if (*puVar23 < *puVar22) {
              uVar24 = *(undefined8 *)(param_1 + 10);
              uVar10 = *(undefined8 *)puVar22;
              *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
              *(undefined8 *)puVar22 = *(undefined8 *)puVar23;
              *(undefined8 *)(param_1 + 0xe) = uVar24;
              *(undefined8 *)puVar23 = uVar10;
              if (*puVar22 < *puVar17) {
                uVar24 = *(undefined8 *)(param_1 + 6);
                uVar10 = *(undefined8 *)puVar17;
                *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
                *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
                *(undefined8 *)(param_1 + 10) = uVar24;
                *(undefined8 *)puVar22 = uVar10;
                if (*puVar17 < *param_1) {
                  uVar24 = *(undefined8 *)(param_1 + 2);
                  uVar10 = *(undefined8 *)param_1;
                  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
                  *(undefined8 *)param_1 = *(undefined8 *)puVar17;
                  *(undefined8 *)(param_1 + 6) = uVar24;
                  *(undefined8 *)puVar17 = uVar10;
                }
              }
            }
            if (*puVar12 < *puVar23) {
              uVar24 = *(undefined8 *)(param_1 + 0xe);
              uVar10 = *(undefined8 *)puVar23;
              uVar25 = *(undefined8 *)puVar12;
              *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
              *(undefined8 *)puVar23 = uVar25;
              *(undefined8 *)(param_2 + -2) = uVar24;
              *(undefined8 *)puVar12 = uVar10;
              if (*puVar23 < *puVar22) {
                uVar24 = *(undefined8 *)(param_1 + 10);
                uVar10 = *(undefined8 *)puVar22;
                *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_1 + 0xe);
                *(undefined8 *)puVar22 = *(undefined8 *)puVar23;
                *(undefined8 *)(param_1 + 0xe) = uVar24;
                *(undefined8 *)puVar23 = uVar10;
                if (*puVar22 < *puVar17) {
                  uVar24 = *(undefined8 *)(param_1 + 6);
                  uVar10 = *(undefined8 *)puVar17;
                  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
                  *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
                  *(undefined8 *)(param_1 + 10) = uVar24;
                  *(undefined8 *)puVar22 = uVar10;
                  if (*puVar17 < *param_1) {
                    uVar24 = *(undefined8 *)(param_1 + 2);
                    uVar10 = *(undefined8 *)param_1;
                    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
                    *(undefined8 *)param_1 = *(undefined8 *)puVar17;
                    *(undefined8 *)(param_1 + 6) = uVar24;
                    *(undefined8 *)puVar17 = uVar10;
                  }
                }
              }
            }
            return;
          }
          goto LAB_109282f3c;
        }
        puVar17 = param_1 + 4;
        uVar20 = *puVar17;
        puVar22 = param_1 + 8;
        uVar3 = *puVar22;
        if (uVar20 < *param_1) {
          if (uVar3 < uVar20) {
            uVar24 = *(undefined8 *)(param_1 + 2);
            uVar10 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)param_1 = *(undefined8 *)puVar22;
          }
          else {
            uVar24 = *(undefined8 *)(param_1 + 2);
            uVar10 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)param_1 = *(undefined8 *)puVar17;
            *(undefined8 *)(param_1 + 6) = uVar24;
            *(undefined8 *)puVar17 = uVar10;
            if (param_1[4] <= uVar3) goto LAB_1092839ec;
            uVar24 = *(undefined8 *)(param_1 + 6);
            uVar10 = *(undefined8 *)puVar17;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
          }
          *(undefined8 *)(param_1 + 10) = uVar24;
          *(undefined8 *)puVar22 = uVar10;
        }
        else if (uVar3 < uVar20) {
          uVar24 = *(undefined8 *)(param_1 + 6);
          uVar10 = *(undefined8 *)puVar17;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
          *(undefined8 *)(param_1 + 10) = uVar24;
          *(undefined8 *)puVar22 = uVar10;
          if (param_1[4] < *param_1) {
            uVar24 = *(undefined8 *)(param_1 + 2);
            uVar10 = *(undefined8 *)param_1;
            *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
            *(undefined8 *)param_1 = *(undefined8 *)puVar17;
            *(undefined8 *)(param_1 + 6) = uVar24;
            *(undefined8 *)puVar17 = uVar10;
          }
        }
LAB_1092839ec:
        if (*puVar22 <= *puVar12) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 10);
        uVar10 = *(undefined8 *)puVar22;
        uVar25 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar22 = uVar25;
        *(undefined8 *)(param_2 + -2) = uVar24;
        *(undefined8 *)puVar12 = uVar10;
        if (*puVar17 <= *puVar22) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 6);
        uVar10 = *(undefined8 *)puVar17;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar17 = *(undefined8 *)puVar22;
        *(undefined8 *)(param_1 + 10) = uVar24;
        *(undefined8 *)puVar22 = uVar10;
LAB_109283a30:
        puVar17 = param_1 + 4;
        if (*param_1 <= *puVar17) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 2);
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)puVar17;
        *(undefined8 *)(param_1 + 6) = uVar24;
        *(undefined8 *)puVar17 = uVar10;
        return;
      }
      puVar17 = param_1 + 4;
      uVar20 = *puVar17;
      puVar12 = param_2 + -4;
      if (*param_1 <= uVar20) {
        if (uVar20 <= *puVar12) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 6);
        uVar10 = *(undefined8 *)puVar17;
        uVar25 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar17 = uVar25;
        *(undefined8 *)(param_2 + -2) = uVar24;
        *(undefined8 *)puVar12 = uVar10;
        goto LAB_109283a30;
      }
      if (uVar20 <= *puVar12) {
        uVar24 = *(undefined8 *)(param_1 + 2);
        uVar10 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
        *(undefined8 *)param_1 = *(undefined8 *)puVar17;
        *(undefined8 *)(param_1 + 6) = uVar24;
        *(undefined8 *)puVar17 = uVar10;
        if (param_1[4] <= *puVar12) {
          return;
        }
        uVar24 = *(undefined8 *)(param_1 + 6);
        uVar10 = *(undefined8 *)puVar17;
        uVar25 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar17 = uVar25;
        goto LAB_1092835ac;
      }
LAB_109283598:
      uVar24 = *(undefined8 *)(param_1 + 2);
      uVar10 = *(undefined8 *)param_1;
      uVar25 = *(undefined8 *)(param_2 + -4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar25;
LAB_1092835ac:
      *(undefined8 *)(param_2 + -2) = uVar24;
      *(undefined8 *)(param_2 + -4) = uVar10;
      return;
    }
    if (uVar9 < 2) {
      return;
    }
    if (uVar9 == 2) {
      if (*param_1 <= param_2[-4]) {
        return;
      }
      goto LAB_109283598;
    }
LAB_109282f3c:
    if ((long)uVar9 < 0x18) {
      puVar17 = param_1 + 4;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar17 == param_2) {
          return;
        }
        do {
          puVar12 = puVar17;
          uVar20 = param_1[4];
          if (uVar20 < *param_1) {
            uVar10 = *(undefined8 *)(param_1 + 5);
            uVar3 = param_1[7];
            puVar17 = puVar12;
            do {
              puVar22 = puVar17;
              *(undefined8 *)(puVar22 + 2) = *(undefined8 *)(puVar22 + -2);
              *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + -4);
              puVar17 = puVar22 + -4;
            } while (uVar20 < puVar22[-8]);
            puVar22[-4] = uVar20;
            puVar22[-1] = uVar3;
            *(undefined8 *)(puVar22 + -3) = uVar10;
          }
          puVar17 = puVar12 + 4;
          param_1 = puVar12;
        } while (puVar12 + 4 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar17 == param_2) {
        return;
      }
      lVar14 = 0;
      puVar12 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar11 = uVar9 - 2 >> 1;
      uVar13 = uVar11;
      goto LAB_1092836a4;
    }
    puVar17 = param_1 + (uVar9 >> 1) * 4;
    uVar20 = *puVar12;
    if (uVar9 < 0x81) {
      uVar3 = *param_1;
      if (uVar3 < *puVar17) {
        if (uVar20 < uVar3) {
          uStack_68 = *(undefined8 *)(puVar17 + 2);
          uStack_70 = *(undefined8 *)puVar17;
          uVar10 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar17 = uVar10;
        }
        else {
          uVar25 = *(undefined8 *)(puVar17 + 2);
          uVar10 = *(undefined8 *)puVar17;
          uVar24 = *(undefined8 *)param_1;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)puVar17 = uVar24;
          *(undefined8 *)(param_1 + 2) = uVar25;
          *(undefined8 *)param_1 = uVar10;
          if (*param_1 <= *puVar12) goto LAB_10928331c;
          uStack_68 = *(undefined8 *)(param_1 + 2);
          uStack_70 = *(undefined8 *)param_1;
          uVar10 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar10;
        }
        *(undefined8 *)(param_2 + -2) = uStack_68;
        *(undefined8 *)puVar12 = uStack_70;
      }
      else if (uVar20 < uVar3) {
        uVar25 = *(undefined8 *)(param_1 + 2);
        uVar10 = *(undefined8 *)param_1;
        uVar24 = *(undefined8 *)puVar12;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)param_1 = uVar24;
        *(undefined8 *)(param_2 + -2) = uVar25;
        *(undefined8 *)puVar12 = uVar10;
        if (*param_1 < *puVar17) {
          uVar25 = *(undefined8 *)(puVar17 + 2);
          uVar10 = *(undefined8 *)puVar17;
          uVar24 = *(undefined8 *)param_1;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)puVar17 = uVar24;
          *(undefined8 *)(param_1 + 2) = uVar25;
          *(undefined8 *)param_1 = uVar10;
        }
      }
    }
    else {
      uVar3 = *puVar17;
      if (uVar3 < *param_1) {
        if (uVar20 < uVar3) {
          uStack_68 = *(undefined8 *)(param_1 + 2);
          uStack_70 = *(undefined8 *)param_1;
          uVar10 = *(undefined8 *)puVar12;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)param_1 = uVar10;
        }
        else {
          uVar25 = *(undefined8 *)(param_1 + 2);
          uVar10 = *(undefined8 *)param_1;
          uVar24 = *(undefined8 *)puVar17;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar17 + 2);
          *(undefined8 *)param_1 = uVar24;
          *(undefined8 *)(puVar17 + 2) = uVar25;
          *(undefined8 *)puVar17 = uVar10;
          if (*puVar17 <= *puVar12) goto LAB_10928308c;
          uStack_68 = *(undefined8 *)(puVar17 + 2);
          uStack_70 = *(undefined8 *)puVar17;
          uVar10 = *(undefined8 *)puVar12;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)puVar17 = uVar10;
        }
        *(undefined8 *)(param_2 + -2) = uStack_68;
        *(undefined8 *)puVar12 = uStack_70;
      }
      else if (uVar20 < uVar3) {
        uVar25 = *(undefined8 *)(puVar17 + 2);
        uVar10 = *(undefined8 *)puVar17;
        uVar24 = *(undefined8 *)puVar12;
        *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)puVar17 = uVar24;
        *(undefined8 *)(param_2 + -2) = uVar25;
        *(undefined8 *)puVar12 = uVar10;
        if (*puVar17 < *param_1) {
          uVar25 = *(undefined8 *)(param_1 + 2);
          uVar10 = *(undefined8 *)param_1;
          uVar24 = *(undefined8 *)puVar17;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar17 + 2);
          *(undefined8 *)param_1 = uVar24;
          *(undefined8 *)(puVar17 + 2) = uVar25;
          *(undefined8 *)puVar17 = uVar10;
        }
      }
LAB_10928308c:
      puVar8 = param_1 + 4;
      puVar7 = puVar17 + -4;
      uVar20 = *puVar7;
      if (uVar20 < *puVar8) {
        if (*puVar22 < uVar20) {
          uVar25 = *(undefined8 *)(param_1 + 6);
          uVar24 = *(undefined8 *)puVar8;
          uVar10 = *(undefined8 *)puVar22;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)puVar8 = uVar10;
        }
        else {
          uVar24 = *(undefined8 *)(param_1 + 6);
          uVar10 = *(undefined8 *)puVar8;
          uVar25 = *(undefined8 *)puVar7;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar17 + -2);
          *(undefined8 *)puVar8 = uVar25;
          *(undefined8 *)(puVar17 + -2) = uVar24;
          *(undefined8 *)puVar7 = uVar10;
          if (*puVar7 <= *puVar22) goto LAB_10928318c;
          uVar25 = *(undefined8 *)(puVar17 + -2);
          uVar24 = *(undefined8 *)puVar7;
          uVar10 = *(undefined8 *)puVar22;
          *(undefined8 *)(puVar17 + -2) = *(undefined8 *)(param_2 + -6);
          *(undefined8 *)puVar7 = uVar10;
        }
        *(undefined8 *)(param_2 + -6) = uVar25;
        *(undefined8 *)puVar22 = uVar24;
      }
      else if (*puVar22 < uVar20) {
        uVar25 = *(undefined8 *)(puVar17 + -2);
        uVar10 = *(undefined8 *)puVar7;
        uVar24 = *(undefined8 *)puVar22;
        *(undefined8 *)(puVar17 + -2) = *(undefined8 *)(param_2 + -6);
        *(undefined8 *)puVar7 = uVar24;
        *(undefined8 *)(param_2 + -6) = uVar25;
        *(undefined8 *)puVar22 = uVar10;
        if (*puVar7 < *puVar8) {
          uVar24 = *(undefined8 *)(param_1 + 6);
          uVar10 = *(undefined8 *)puVar8;
          uVar25 = *(undefined8 *)puVar7;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(puVar17 + -2);
          *(undefined8 *)puVar8 = uVar25;
          *(undefined8 *)(puVar17 + -2) = uVar24;
          *(undefined8 *)puVar7 = uVar10;
        }
      }
LAB_10928318c:
      puVar15 = param_1 + 8;
      puVar8 = puVar17 + 4;
      uVar20 = *puVar8;
      if (uVar20 < *puVar15) {
        if (*puVar23 < uVar20) {
          uVar25 = *(undefined8 *)(param_1 + 10);
          uVar24 = *(undefined8 *)puVar15;
          uVar10 = *(undefined8 *)puVar23;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar15 = uVar10;
        }
        else {
          uVar24 = *(undefined8 *)(param_1 + 10);
          uVar10 = *(undefined8 *)puVar15;
          uVar25 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar17 + 6);
          *(undefined8 *)puVar15 = uVar25;
          *(undefined8 *)(puVar17 + 6) = uVar24;
          *(undefined8 *)puVar8 = uVar10;
          if (*puVar8 <= *puVar23) goto LAB_109283248;
          uVar25 = *(undefined8 *)(puVar17 + 6);
          uVar24 = *(undefined8 *)puVar8;
          uVar10 = *(undefined8 *)puVar23;
          *(undefined8 *)(puVar17 + 6) = *(undefined8 *)(param_2 + -10);
          *(undefined8 *)puVar8 = uVar10;
        }
        *(undefined8 *)(param_2 + -10) = uVar25;
        *(undefined8 *)puVar23 = uVar24;
      }
      else if (*puVar23 < uVar20) {
        uVar25 = *(undefined8 *)(puVar17 + 6);
        uVar10 = *(undefined8 *)puVar8;
        uVar24 = *(undefined8 *)puVar23;
        *(undefined8 *)(puVar17 + 6) = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)puVar8 = uVar24;
        *(undefined8 *)(param_2 + -10) = uVar25;
        *(undefined8 *)puVar23 = uVar10;
        if (*puVar8 < *puVar15) {
          uVar24 = *(undefined8 *)(param_1 + 10);
          uVar10 = *(undefined8 *)puVar15;
          uVar25 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(puVar17 + 6);
          *(undefined8 *)puVar15 = uVar25;
          *(undefined8 *)(puVar17 + 6) = uVar24;
          *(undefined8 *)puVar8 = uVar10;
        }
      }
LAB_109283248:
      uVar20 = *puVar17;
      if (uVar20 < puVar17[-4]) {
        if (puVar17[4] < uVar20) {
          uStack_68 = *(undefined8 *)(puVar17 + -2);
          uStack_70 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar17 + -2) = *(undefined8 *)(puVar17 + 6);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar8;
        }
        else {
          uVar24 = *(undefined8 *)(puVar17 + -2);
          uVar10 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar17 + -2) = *(undefined8 *)(puVar17 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar17;
          *(undefined8 *)(puVar17 + 2) = uVar24;
          *(undefined8 *)puVar17 = uVar10;
          if (*puVar17 <= puVar17[4]) goto LAB_109283304;
          uStack_68 = *(undefined8 *)(puVar17 + 2);
          uStack_70 = *(undefined8 *)puVar17;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar17 + 6);
          *(undefined8 *)puVar17 = *(undefined8 *)puVar8;
        }
        *(undefined8 *)(puVar17 + 6) = uStack_68;
        *(undefined8 *)puVar8 = uStack_70;
      }
      else if (puVar17[4] < uVar20) {
        uVar24 = *(undefined8 *)(puVar17 + 2);
        uVar10 = *(undefined8 *)puVar17;
        *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar17 + 6);
        *(undefined8 *)puVar17 = *(undefined8 *)puVar8;
        *(undefined8 *)(puVar17 + 6) = uVar24;
        *(undefined8 *)puVar8 = uVar10;
        if (*puVar17 < puVar17[-4]) {
          uVar24 = *(undefined8 *)(puVar17 + -2);
          uVar10 = *(undefined8 *)puVar7;
          *(undefined8 *)(puVar17 + -2) = *(undefined8 *)(puVar17 + 2);
          *(undefined8 *)puVar7 = *(undefined8 *)puVar17;
          *(undefined8 *)(puVar17 + 2) = uVar24;
          *(undefined8 *)puVar17 = uVar10;
        }
      }
LAB_109283304:
      uVar25 = *(undefined8 *)(param_1 + 2);
      uVar10 = *(undefined8 *)param_1;
      uVar24 = *(undefined8 *)puVar17;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar17 + 2);
      *(undefined8 *)param_1 = uVar24;
      *(undefined8 *)(puVar17 + 2) = uVar25;
      *(undefined8 *)puVar17 = uVar10;
    }
LAB_10928331c:
    param_3 = param_3 + -1;
    uVar20 = *param_1;
    if (((param_4 & 1) != 0) || (param_1[-4] < uVar20)) {
      lVar14 = 0;
      uVar10 = *(undefined8 *)(param_1 + 1);
      uVar3 = param_1[3];
      do {
        lVar6 = lVar14 + 0x10;
        lVar14 = lVar14 + 0x10;
      } while (*(uint *)((long)param_1 + lVar6) < uVar20);
      puVar7 = (uint *)((long)param_1 + lVar14);
      puVar8 = param_2;
      if (lVar14 == 0x10) {
        do {
          if (puVar8 <= puVar7) break;
          puVar8 = puVar8 + -4;
        } while (uVar20 <= *puVar8);
      }
      else {
        do {
          puVar8 = puVar8 + -4;
        } while (uVar20 <= *puVar8);
      }
      puVar15 = puVar8;
      puVar17 = puVar7;
      if (puVar7 < puVar8) {
        do {
          uVar26 = *(undefined8 *)(puVar17 + 2);
          uVar24 = *(undefined8 *)puVar17;
          uVar25 = *(undefined8 *)puVar15;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar15 + 2);
          *(undefined8 *)puVar17 = uVar25;
          *(undefined8 *)(puVar15 + 2) = uVar26;
          *(undefined8 *)puVar15 = uVar24;
          do {
            puVar17 = puVar17 + 4;
          } while (*puVar17 < uVar20);
          do {
            puVar15 = puVar15 + -4;
          } while (uVar20 <= *puVar15);
        } while (puVar17 < puVar15);
      }
      puVar15 = puVar17 + -4;
      if (puVar15 != param_1) {
        uVar24 = *(undefined8 *)puVar15;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar17 + -2);
        *(undefined8 *)param_1 = uVar24;
      }
      puVar17[-4] = uVar20;
      puVar17[-1] = uVar3;
      *(undefined8 *)(puVar17 + -3) = uVar10;
      if (puVar8 <= puVar7) {
        puVar7 = param_1;
        FUN_109283bfc(param_1,puVar15);
        puVar8 = puVar17;
        FUN_109283bfc(puVar17,param_2);
        if ((int)puVar8 != 0) goto LAB_109283524;
        if (((ulong)puVar7 & 1) != 0) goto LAB_109282f00;
      }
      FUN_109282ec0(param_1,puVar15,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_109282f00;
    }
    uVar10 = *(undefined8 *)(param_1 + 1);
    uVar3 = param_1[3];
    puVar17 = param_1;
    if (uVar20 < *puVar12) {
      do {
        puVar17 = puVar17 + 4;
      } while (*puVar17 <= uVar20);
    }
    else {
      do {
        puVar17 = puVar17 + 4;
        if (param_2 <= puVar17) break;
      } while (*puVar17 <= uVar20);
    }
    puVar7 = param_2;
    if (puVar17 < param_2) {
      do {
        puVar7 = puVar7 + -4;
      } while (uVar20 < *puVar7);
    }
    while (puVar17 < puVar7) {
      uVar26 = *(undefined8 *)(puVar17 + 2);
      uVar24 = *(undefined8 *)puVar17;
      uVar25 = *(undefined8 *)puVar7;
      *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar7 + 2);
      *(undefined8 *)puVar17 = uVar25;
      *(undefined8 *)(puVar7 + 2) = uVar26;
      *(undefined8 *)puVar7 = uVar24;
      do {
        puVar17 = puVar17 + 4;
      } while (*puVar17 <= uVar20);
      do {
        puVar7 = puVar7 + -4;
      } while (uVar20 < *puVar7);
    }
    if (puVar17 + -4 != param_1) {
      uVar24 = *(undefined8 *)(puVar17 + -4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(puVar17 + -2);
      *(undefined8 *)param_1 = uVar24;
    }
    param_4 = 0;
    puVar17[-4] = uVar20;
    puVar17[-1] = uVar3;
    *(undefined8 *)(puVar17 + -3) = uVar10;
  } while( true );
LAB_109283610:
  puVar22 = puVar17;
  uVar20 = puVar12[4];
  if (uVar20 < *puVar12) {
    uVar10 = *(undefined8 *)(puVar12 + 5);
    uVar3 = puVar12[7];
    lVar6 = lVar14;
    do {
      lVar16 = lVar6;
      puVar1 = (undefined8 *)((long)param_1 + lVar16);
      puVar1[3] = puVar1[1];
      puVar1[2] = *puVar1;
      puVar17 = param_1;
      if (lVar16 == 0) goto LAB_109283668;
      lVar6 = lVar16 + -0x10;
    } while (uVar20 < *(uint *)(puVar1 + -2));
    puVar17 = (uint *)((long)param_1 + lVar16);
LAB_109283668:
    *puVar17 = uVar20;
    puVar17[3] = uVar3;
    *(undefined8 *)(puVar17 + 1) = uVar10;
  }
  puVar17 = puVar22 + 4;
  lVar14 = lVar14 + 0x10;
  puVar12 = puVar22;
  if (puVar17 == param_2) {
    return;
  }
  goto LAB_109283610;
LAB_1092836a4:
  do {
    if ((long)uVar13 <= (long)uVar11) {
      uVar19 = uVar13 << 1 | 1;
      puVar17 = param_1 + uVar19 * 4;
      uVar18 = uVar13 * 2 + 2;
      if ((long)uVar18 < (long)uVar9) {
        uVar3 = *puVar17;
        uVar21 = puVar17[4];
        uVar20 = uVar3;
        if (uVar3 <= uVar21) {
          uVar20 = uVar21;
        }
        puVar12 = puVar17 + 4;
        if (uVar21 <= uVar3) {
          puVar12 = puVar17;
          uVar18 = uVar19;
        }
      }
      else {
        uVar20 = *puVar17;
        puVar12 = puVar17;
        uVar18 = uVar19;
      }
      puVar17 = param_1 + uVar13 * 4;
      uVar3 = *puVar17;
      if (uVar3 <= uVar20) {
        uVar10 = *(undefined8 *)(puVar17 + 1);
        uVar20 = puVar17[3];
        do {
          puVar22 = puVar12;
          uVar24 = *(undefined8 *)puVar22;
          *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar22 + 2);
          *(undefined8 *)puVar17 = uVar24;
          if ((long)uVar11 < (long)uVar18) break;
          uVar19 = uVar18 << 1 | 1;
          puVar17 = param_1 + uVar19 * 4;
          uVar18 = uVar18 * 2 + 2;
          if ((long)uVar18 < (long)uVar9) {
            uVar4 = *puVar17;
            uVar5 = puVar17[4];
            uVar21 = uVar4;
            if (uVar4 <= uVar5) {
              uVar21 = uVar5;
            }
            puVar12 = puVar17 + 4;
            if (uVar5 <= uVar4) {
              puVar12 = puVar17;
              uVar18 = uVar19;
            }
          }
          else {
            uVar21 = *puVar17;
            puVar12 = puVar17;
            uVar18 = uVar19;
          }
          puVar17 = puVar22;
        } while (uVar3 <= uVar21);
        *puVar22 = uVar3;
        puVar22[3] = uVar20;
        *(undefined8 *)(puVar22 + 1) = uVar10;
      }
    }
    bVar2 = uVar13 != 0;
    uVar13 = uVar13 - 1;
  } while (bVar2);
  do {
    uVar24 = *(undefined8 *)(param_1 + 2);
    uVar10 = *(undefined8 *)param_1;
    puVar17 = param_1;
    uVar13 = 0;
    do {
      uVar18 = uVar13 << 1 | 1;
      uVar11 = uVar13 * 2 + 2;
      puVar12 = puVar17 + uVar13 * 4 + 4;
      uVar19 = uVar18;
      if (((long)uVar11 < (long)uVar9) &&
         (puVar12 = puVar17 + uVar13 * 4 + 8, uVar19 = uVar11,
         puVar17[uVar13 * 4 + 8] <= puVar17[uVar13 * 4 + 4])) {
        puVar12 = puVar17 + uVar13 * 4 + 4;
        uVar19 = uVar18;
      }
      uVar25 = *(undefined8 *)puVar12;
      *(undefined8 *)(puVar17 + 2) = *(undefined8 *)(puVar12 + 2);
      *(undefined8 *)puVar17 = uVar25;
      puVar17 = puVar12;
      uVar13 = uVar19;
    } while ((long)uVar19 <= (long)(uVar9 - 2 >> 1));
    puVar17 = param_2 + -4;
    if (puVar12 == puVar17) {
      *(undefined8 *)(puVar12 + 2) = uVar24;
      *(undefined8 *)puVar12 = uVar10;
    }
    else {
      uVar25 = *(undefined8 *)puVar17;
      *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar12 = uVar25;
      *(undefined8 *)(param_2 + -2) = uVar24;
      *(undefined8 *)puVar17 = uVar10;
      lVar14 = (long)puVar12 + (0x10 - (long)param_1) >> 4;
      if (1 < lVar14) {
        uVar13 = lVar14 - 2U >> 1;
        uVar20 = *puVar12;
        if (param_1[uVar13 * 4] < uVar20) {
          uVar10 = *(undefined8 *)(puVar12 + 1);
          uVar3 = puVar12[3];
          puVar22 = param_1 + uVar13 * 4;
          do {
            puVar23 = puVar22;
            uVar24 = *(undefined8 *)puVar23;
            *(undefined8 *)(puVar12 + 2) = *(undefined8 *)(puVar23 + 2);
            *(undefined8 *)puVar12 = uVar24;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1 >> 1;
            puVar12 = puVar23;
            puVar22 = param_1 + uVar13 * 4;
          } while (param_1[uVar13 * 4] < uVar20);
          *puVar23 = uVar20;
          puVar23[3] = uVar3;
          *(undefined8 *)(puVar23 + 1) = uVar10;
        }
      }
    }
    bVar2 = (long)uVar9 < 3;
    uVar9 = uVar9 - 1;
    param_2 = puVar17;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_109283524:
  param_2 = puVar15;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_109282ef0;
}



/* Entry: 109283a78; end: 109283bfb;  */

void FUN_109283a78(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    if (*param_3 < uVar1) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar4;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
      if (*param_2 <= *param_3) goto LAB_109283b14;
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar4;
    }
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
  }
  else if (*param_3 < uVar1) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    uVar2 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_3 + 2) = uVar3;
    *(undefined8 *)param_3 = uVar2;
    if (*param_2 < *param_1) {
      uVar3 = *(undefined8 *)(param_1 + 2);
      uVar2 = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar3;
      *(undefined8 *)param_2 = uVar2;
    }
  }
LAB_109283b14:
  if (*param_4 < *param_3) {
    uVar3 = *(undefined8 *)(param_3 + 2);
    uVar2 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar4;
    *(undefined8 *)(param_4 + 2) = uVar3;
    *(undefined8 *)param_4 = uVar2;
    if (*param_3 < *param_2) {
      uVar3 = *(undefined8 *)(param_2 + 2);
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar4;
      *(undefined8 *)(param_3 + 2) = uVar3;
      *(undefined8 *)param_3 = uVar2;
      if (*param_2 < *param_1) {
        uVar3 = *(undefined8 *)(param_1 + 2);
        uVar2 = *(undefined8 *)param_1;
        uVar4 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar4;
        *(undefined8 *)(param_2 + 2) = uVar3;
        *(undefined8 *)param_2 = uVar2;
      }
    }
  }
  if (*param_5 < *param_4) {
    uVar3 = *(undefined8 *)(param_4 + 2);
    uVar2 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar4;
    *(undefined8 *)(param_5 + 2) = uVar3;
    *(undefined8 *)param_5 = uVar2;
    if (*param_4 < *param_3) {
      uVar3 = *(undefined8 *)(param_3 + 2);
      uVar2 = *(undefined8 *)param_3;
      uVar4 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar4;
      *(undefined8 *)(param_4 + 2) = uVar3;
      *(undefined8 *)param_4 = uVar2;
      if (*param_3 < *param_2) {
        uVar3 = *(undefined8 *)(param_2 + 2);
        uVar2 = *(undefined8 *)param_2;
        uVar4 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar4;
        *(undefined8 *)(param_3 + 2) = uVar3;
        *(undefined8 *)param_3 = uVar2;
        if (*param_2 < *param_1) {
          uVar3 = *(undefined8 *)(param_1 + 2);
          uVar2 = *(undefined8 *)param_1;
          uVar4 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar4;
          *(undefined8 *)(param_2 + 2) = uVar3;
          *(undefined8 *)param_2 = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 109283bfc; end: 109283f47;  */

bool FUN_109283bfc(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_109283ca0:
      puVar8 = param_1 + 8;
      uVar1 = *puVar8;
      puVar5 = param_1 + 4;
      uVar2 = *puVar5;
      if (uVar2 < *param_1) {
        if (uVar1 < uVar2) {
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_1 = *(undefined8 *)puVar8;
        }
        else {
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)puVar5;
          *(undefined8 *)(param_1 + 6) = uVar12;
          *(undefined8 *)puVar5 = uVar6;
          if (param_1[4] <= uVar1) goto LAB_109283df4;
          uVar12 = *(undefined8 *)(param_1 + 6);
          uVar6 = *(undefined8 *)puVar5;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
        }
        *(undefined8 *)(param_1 + 10) = uVar12;
        *(undefined8 *)puVar8 = uVar6;
      }
      else if (uVar1 < uVar2) {
        uVar12 = *(undefined8 *)(param_1 + 6);
        uVar6 = *(undefined8 *)puVar5;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar5 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 10) = uVar12;
        *(undefined8 *)puVar8 = uVar6;
        if (*puVar5 < *param_1) {
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)puVar5;
          *(undefined8 *)(param_1 + 6) = uVar12;
          *(undefined8 *)puVar5 = uVar6;
        }
      }
LAB_109283df4:
      if (param_1 + 0xc != param_2) {
        lVar10 = 0;
        iVar11 = 0;
        puVar5 = param_1 + 0xc;
        do {
          puVar9 = puVar5;
          uVar1 = *puVar9;
          if (uVar1 < *puVar8) {
            uVar6 = *(undefined8 *)(puVar9 + 1);
            uVar2 = puVar9[3];
            lVar3 = lVar10;
            do {
              lVar7 = lVar3;
              *(undefined8 *)((long)param_1 + lVar7 + 0x38) =
                   *(undefined8 *)((long)param_1 + lVar7 + 0x28);
              *(undefined8 *)((long)param_1 + lVar7 + 0x30) =
                   *(undefined8 *)((long)param_1 + lVar7 + 0x20);
              puVar8 = param_1;
              if (lVar7 == -0x20) goto LAB_109283e60;
              lVar3 = lVar7 + -0x10;
            } while (uVar1 < *(uint *)((long)param_1 + lVar7 + 0x10));
            puVar8 = (uint *)((long)param_1 + lVar7 + 0x20);
LAB_109283e60:
            *puVar8 = uVar1;
            *(undefined8 *)(puVar8 + 1) = uVar6;
            puVar8[3] = uVar2;
            iVar11 = iVar11 + 1;
            if (iVar11 == 8) {
              return puVar9 + 4 == param_2;
            }
          }
          lVar10 = lVar10 + 0x10;
          puVar5 = puVar9 + 4;
          puVar8 = puVar9;
        } while (puVar9 + 4 != param_2);
      }
      return true;
    }
    if (*param_1 <= param_2[-4]) {
      return true;
    }
  }
  else {
    if (uVar4 != 3) {
      if (uVar4 != 4) {
        if (uVar4 == 5) {
          FUN_109283a78(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_2 + -4);
          return true;
        }
        goto LAB_109283ca0;
      }
      puVar8 = param_1 + 4;
      uVar1 = *puVar8;
      puVar5 = param_1 + 8;
      uVar2 = *puVar5;
      puVar9 = param_2 + -4;
      if (uVar1 < *param_1) {
        if (uVar2 < uVar1) {
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)param_1 = *(undefined8 *)puVar5;
        }
        else {
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 6) = uVar12;
          *(undefined8 *)puVar8 = uVar6;
          if (param_1[4] <= uVar2) goto LAB_109283ec4;
          uVar12 = *(undefined8 *)(param_1 + 6);
          uVar6 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *(undefined8 *)puVar8 = *(undefined8 *)puVar5;
        }
        *(undefined8 *)(param_1 + 10) = uVar12;
        *(undefined8 *)puVar5 = uVar6;
      }
      else if (uVar2 < uVar1) {
        uVar12 = *(undefined8 *)(param_1 + 6);
        uVar6 = *(undefined8 *)puVar8;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        *(undefined8 *)puVar8 = *(undefined8 *)puVar5;
        *(undefined8 *)(param_1 + 10) = uVar12;
        *(undefined8 *)puVar5 = uVar6;
        if (*puVar8 < *param_1) {
          uVar12 = *(undefined8 *)(param_1 + 2);
          uVar6 = *(undefined8 *)param_1;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)param_1 = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 6) = uVar12;
          *(undefined8 *)puVar8 = uVar6;
        }
      }
LAB_109283ec4:
      if (*puVar5 <= *puVar9) {
        return true;
      }
      uVar12 = *(undefined8 *)(param_1 + 10);
      uVar6 = *(undefined8 *)puVar5;
      uVar13 = *(undefined8 *)puVar9;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar5 = uVar13;
      *(undefined8 *)(param_2 + -2) = uVar12;
      *(undefined8 *)puVar9 = uVar6;
      if (*puVar8 <= *puVar5) {
        return true;
      }
      uVar12 = *(undefined8 *)(param_1 + 6);
      uVar6 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      *(undefined8 *)puVar8 = *(undefined8 *)puVar5;
      *(undefined8 *)(param_1 + 10) = uVar12;
      *(undefined8 *)puVar5 = uVar6;
LAB_109283f04:
      puVar8 = param_1 + 4;
      if (*param_1 <= *puVar8) {
        return true;
      }
      uVar12 = *(undefined8 *)(param_1 + 2);
      uVar6 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 6) = uVar12;
      *(undefined8 *)puVar8 = uVar6;
      return true;
    }
    puVar5 = param_1 + 4;
    uVar1 = *puVar5;
    puVar8 = param_2 + -4;
    if (*param_1 <= uVar1) {
      if (uVar1 <= *puVar8) {
        return true;
      }
      uVar12 = *(undefined8 *)(param_1 + 6);
      uVar6 = *(undefined8 *)puVar5;
      uVar13 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar5 = uVar13;
      *(undefined8 *)(param_2 + -2) = uVar12;
      *(undefined8 *)puVar8 = uVar6;
      goto LAB_109283f04;
    }
    if (uVar1 <= *puVar8) {
      uVar12 = *(undefined8 *)(param_1 + 2);
      uVar6 = *(undefined8 *)param_1;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)param_1 = *(undefined8 *)puVar5;
      *(undefined8 *)(param_1 + 6) = uVar12;
      *(undefined8 *)puVar5 = uVar6;
      if (param_1[4] <= *puVar8) {
        return true;
      }
      uVar12 = *(undefined8 *)(param_1 + 6);
      uVar6 = *(undefined8 *)puVar5;
      uVar13 = *(undefined8 *)puVar8;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)puVar5 = uVar13;
      goto LAB_109283c98;
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 2);
  uVar6 = *(undefined8 *)param_1;
  uVar13 = *(undefined8 *)(param_2 + -4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)param_1 = uVar13;
LAB_109283c98:
  *(undefined8 *)(param_2 + -2) = uVar12;
  *(undefined8 *)(param_2 + -4) = uVar6;
  return true;
}



/* Entry: 109283f48; end: 109283fa7;  */

undefined4 * FUN_109283f48(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return param_1;
}



/* Entry: 109283fa8; end: 109283fbb;  */

/* WARNING: Removing unreachable block (ram,0x000109283fe8) */

long * FUN_109283fa8(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x30;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109283fbc; end: 10928401b;  */

/* WARNING: Removing unreachable block (ram,0x000109283fe8) */

long * FUN_109283fbc(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10928401c; end: 109284fc7;  */

/* WARNING: Possible PIC construction at 0x000109284714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109284718) */
/* WARNING: Removing unreachable block (ram,0x000109284728) */
/* WARNING: Removing unreachable block (ram,0x000109284744) */
/* WARNING: Removing unreachable block (ram,0x000109284760) */
/* WARNING: Removing unreachable block (ram,0x00010928477c) */
/* WARNING: Removing unreachable block (ram,0x000109284794) */
/* WARNING: Removing unreachable block (ram,0x000109284eb4) */
/* WARNING: Removing unreachable block (ram,0x000109284c6c) */
/* WARNING: Removing unreachable block (ram,0x000109284514) */
/* WARNING: Removing unreachable block (ram,0x0001092846bc) */
/* WARNING: Removing unreachable block (ram,0x000109284f04) */

void FUN_10928401c(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint *unaff_x19;
  uint *puVar21;
  ulong uVar22;
  uint *unaff_x20;
  uint *puVar23;
  uint *unaff_x21;
  ulong uVar24;
  uint *puVar25;
  uint *unaff_x22;
  uint *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar30;
  undefined1 auStack_e0 [8];
  uint *puStack_d8;
  uint *puStack_d0;
  uint *puStack_c8;
  uint uStack_bc;
  uint *puStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined6 uStack_7f;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_bc = (uint)param_4;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = unaff_x19;
  puVar23 = param_3;
  puVar26 = unaff_x22;
  puVar9 = param_2;
  puVar12 = param_1;
  do {
    puVar25 = puVar9 + -0xc;
    puStack_d8 = puVar9 + -0x24;
    puStack_d0 = puVar9 + -0x18;
    puStack_b0 = puVar9;
    puStack_c8 = puVar25;
    puVar13 = puVar9;
    puVar10 = puVar12;
LAB_109284078:
    puVar12 = puVar10;
    uVar27 = (long)puVar13 - (long)puVar12;
    uVar29 = ((long)uVar27 >> 4) * -0x5555555555555555;
    if (uVar29 - 2 == 0 || (long)uVar29 < 2) {
      if (uVar29 < 2) break;
      if (uVar29 == 2) {
        if (*puVar12 <= puVar13[-0xc]) break;
LAB_1092847d4:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_109284fc4;
LAB_1092847f0:
        puVar25 = puVar13 + -0xc;
        goto code_r0x000109284fc8;
      }
    }
    else {
      if (uVar29 == 3) {
        puVar25 = puVar12 + 0xc;
        uVar17 = *puVar25;
        puVar9 = puVar13 + -0xc;
        if (uVar17 < *puVar12) {
          if (*puVar9 < uVar17) goto LAB_1092847d4;
          param_1 = puVar12;
          param_2 = puVar25;
          FUN_109284fc8();
          if (puVar12[0xc] <= *puVar9) break;
          puVar12 = puVar25;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto LAB_1092847f0;
        }
        else {
          if ((uVar17 <= *puVar9) ||
             (param_1 = puVar25, FUN_109284fc8(), param_2 = puVar9, *puVar12 <= puVar12[0xc]))
          break;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) goto code_r0x000109284fc8;
        }
        goto LAB_109284fc4;
      }
      if (uVar29 == 4) {
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
          puVar9 = puVar12 + 0x18;
          puVar10 = puVar12 + 0xc;
          puVar13 = puVar25;
          goto SUB_1092850bc;
        }
        goto LAB_109284fc4;
      }
      if (uVar29 == 5) {
        puVar9 = puVar12 + 0x18;
        unaff_x30 = (code *)0x109284718;
        register0x00000008 = (BADSPACEBASE *)auStack_e0;
        puVar10 = puVar12 + 0xc;
        puVar13 = puVar12 + 0x24;
        unaff_x19 = puVar21;
        unaff_x20 = puVar23;
        unaff_x21 = puVar25;
        unaff_x22 = puVar26;
        unaff_x29 = puVar1;
        goto SUB_1092850bc;
      }
    }
    if ((long)uVar27 < 0x480) {
      puVar9 = puVar12 + 0xc;
      if ((uStack_bc & 1) == 0) {
        if (puVar12 != puVar13 && puVar9 != puVar13) {
          puVar21 = puVar12 + 0x14;
          do {
            puVar23 = puVar9;
            uVar17 = puVar12[0xc];
            puVar26 = (uint *)(ulong)uVar17;
            if (uVar17 < *puVar12) {
              uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0x47) >> 8);
              uVar18 = *(undefined8 *)(puVar12 + 0xe);
              uVar28 = *(undefined8 *)(puVar12 + 0x10);
              uStack_78 = (undefined7)uVar28;
              uStack_71 = (undefined1)((ulong)uVar28 >> 0x38);
              bVar7 = *(byte *)((long)puVar12 + 0x4f);
              puVar25 = (uint *)(ulong)bVar7;
              puVar12[0x10] = 0;
              puVar12[0x11] = 0;
              puVar12[0x12] = 0;
              puVar12[0x13] = 0;
              puVar12[0xe] = 0;
              puVar12[0xf] = 0;
              uVar19 = *(undefined8 *)(puVar12 + 0x14);
              uStack_88 = (undefined7)uVar19;
              uStack_81 = (undefined1)((ulong)uVar19 >> 0x38);
              uStack_80 = (undefined1)puVar12[0x16];
              uVar14 = *puVar12;
              puVar12 = puVar21;
              do {
                puVar9 = puVar12;
                puVar9[-8] = uVar14;
                *(undefined8 *)(puVar9 + -4) = *(undefined8 *)(puVar9 + -0x10);
                *(undefined8 *)(puVar9 + -6) = *(undefined8 *)(puVar9 + -0x12);
                *(undefined8 *)(puVar9 + -2) = *(undefined8 *)(puVar9 + -0xe);
                *(undefined1 *)((long)puVar9 + -0x31) = 0;
                *(undefined1 *)(puVar9 + -0x12) = 0;
                puVar12 = puVar9 + -0xc;
                *(undefined8 *)puVar9 = *(undefined8 *)puVar12;
                *(char *)(puVar9 + 2) = (char)puVar9[-10];
                uVar14 = puVar9[-0x20];
              } while (uVar17 < uVar14);
              puVar9[-0x14] = uVar17;
              *(undefined8 *)(puVar9 + -0x12) = uVar18;
              *(ulong *)((long)puVar9 + -0x39) = CONCAT71(uStack_70,uStack_71);
              *(undefined8 *)(puVar9 + -0x10) = uVar28;
              *(byte *)((long)puVar9 + -0x31) = bVar7;
              *(undefined1 *)(puVar9 + -10) = uStack_80;
              *(undefined8 *)puVar12 = uVar19;
              puVar13 = puStack_b0;
            }
            puVar21 = puVar21 + 0xc;
            puVar9 = puVar23 + 0xc;
            puVar12 = puVar23;
          } while (puVar23 + 0xc != puVar13);
        }
        break;
      }
      if (puVar12 == puVar13 || puVar9 == puVar13) break;
      puVar21 = (uint *)0x0;
      puVar10 = puVar12;
      goto LAB_109284880;
    }
    if (puVar23 == (uint *)0x0) {
      if (puVar12 == puVar13) break;
      uVar24 = uVar29 - 2 >> 1;
      uVar16 = uVar24;
      goto LAB_10928499c;
    }
    puVar21 = puVar12 + (uVar29 >> 1) * 0xc;
    uVar17 = *puVar25;
    if (uVar27 < 0x1801) {
      uVar14 = *puVar12;
      if (uVar14 < *puVar21) {
        puVar26 = puVar25;
        if ((uVar17 < uVar14) ||
           (param_2 = puVar12, FUN_109284fc8(), param_1 = puVar21, puVar21 = puVar12,
           *puVar25 < *puVar12)) {
LAB_109284218:
          param_2 = puVar26;
          param_1 = puVar21;
          FUN_109284fc8();
        }
      }
      else if ((uVar17 < uVar14) &&
              (param_1 = puVar12, param_2 = puVar25, FUN_109284fc8(), puVar26 = puVar12,
              *puVar12 < *puVar21)) goto LAB_109284218;
    }
    else {
      uVar14 = *puVar21;
      puVar26 = puVar12;
      if (uVar14 < *puVar12) {
        puVar9 = puVar25;
        if ((uVar17 < uVar14) ||
           (param_1 = puVar12, param_2 = puVar21, FUN_109284fc8(), puVar26 = puVar21,
           *puVar25 < *puVar21)) {
LAB_109284194:
          FUN_109284fc8();
          param_1 = puVar26;
          param_2 = puVar9;
        }
      }
      else if ((uVar17 < uVar14) &&
              (param_1 = puVar21, param_2 = puVar25, FUN_109284fc8(), puVar9 = puVar21,
              *puVar21 < *puVar12)) goto LAB_109284194;
      puVar9 = puVar12 + 0xc;
      puVar10 = puVar21 + -0xc;
      uVar17 = *puVar10;
      puVar26 = puVar9;
      if (uVar17 < *puVar9) {
        puVar13 = puStack_d0;
        if ((*puStack_d0 < uVar17) ||
           (param_2 = puVar10, FUN_109284fc8(), puVar26 = puVar10, param_1 = puVar9,
           puVar13 = puStack_d0, *puStack_d0 < *puVar10)) {
LAB_10928424c:
          FUN_109284fc8();
          param_1 = puVar26;
          param_2 = puVar13;
        }
      }
      else if ((*puStack_d0 < uVar17) &&
              (param_1 = puVar10, param_2 = puStack_d0, FUN_109284fc8(), puVar13 = puVar10,
              *puVar10 < *puVar9)) goto LAB_10928424c;
      puVar9 = puVar12 + 0x18;
      puVar13 = puVar21 + 0xc;
      uVar17 = *puVar13;
      puVar26 = puVar9;
      if (uVar17 < *puVar9) {
        puVar11 = puStack_d8;
        if ((*puStack_d8 < uVar17) ||
           (param_2 = puVar13, FUN_109284fc8(), puVar26 = puVar13, param_1 = puVar9,
           puVar11 = puStack_d8, *puStack_d8 < *puVar13)) {
LAB_1092842d0:
          FUN_109284fc8();
          param_1 = puVar26;
          param_2 = puVar11;
        }
      }
      else if ((*puStack_d8 < uVar17) &&
              (param_1 = puVar13, param_2 = puStack_d8, FUN_109284fc8(), puVar11 = puVar13,
              *puVar13 < *puVar9)) goto LAB_1092842d0;
      uVar17 = *puVar21;
      puVar26 = puVar10;
      if (uVar17 < puVar21[-0xc]) {
        puVar9 = puVar13;
        if ((puVar21[0xc] < uVar17) ||
           (param_2 = puVar21, FUN_109284fc8(), puVar26 = puVar21, param_1 = puVar10,
           puVar21[0xc] < *puVar21)) {
LAB_109284344:
          FUN_109284fc8();
          param_1 = puVar26;
          param_2 = puVar9;
        }
      }
      else if ((puVar21[0xc] < uVar17) &&
              (param_1 = puVar21, FUN_109284fc8(), puVar9 = puVar21, param_2 = puVar13,
              *puVar21 < puVar21[-0xc])) goto LAB_109284344;
      uVar17 = *puVar12;
      uVar18 = *(undefined8 *)(puVar12 + 2);
      uVar28 = *(undefined8 *)(puVar12 + 4);
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0x17) >> 8);
      uStack_71 = (undefined1)((ulong)uVar28 >> 0x38);
      uVar6 = *(undefined1 *)((long)puVar12 + 0x1f);
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar19 = *(undefined8 *)(puVar12 + 8);
      uVar14 = puVar12[10];
      *puVar12 = *puVar21;
      uVar30 = *(undefined8 *)(puVar21 + 4);
      uVar20 = *(undefined8 *)(puVar21 + 2);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar21 + 6);
      *(undefined8 *)(puVar12 + 4) = uVar30;
      *(undefined8 *)(puVar12 + 2) = uVar20;
      *(undefined1 *)((long)puVar21 + 0x1f) = 0;
      uVar20 = *(undefined8 *)(puVar21 + 8);
      *(char *)(puVar12 + 10) = (char)puVar21[10];
      *(undefined8 *)(puVar12 + 8) = uVar20;
      *puVar21 = uVar17;
      *(undefined8 *)(puVar21 + 2) = uVar18;
      *(ulong *)((long)puVar21 + 0x17) = CONCAT71(uStack_70,uStack_71);
      *(undefined8 *)(puVar21 + 4) = uVar28;
      *(undefined1 *)((long)puVar21 + 0x1f) = uVar6;
      *(char *)(puVar21 + 10) = (char)uVar14;
      *(undefined8 *)(puVar21 + 8) = uVar19;
    }
    puVar23 = (uint *)((long)puVar23 + -1);
    uVar17 = *puVar12;
    if (((uStack_bc & 1) == 0) && (uVar17 <= puVar12[-0xc])) {
      puVar9 = puVar12 + 2;
      puVar26 = *(uint **)puVar9;
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0x17) >> 8);
      uStack_78 = (undefined7)*(undefined8 *)(puVar12 + 4);
      uStack_71 = (undefined1)((ulong)*(undefined8 *)(puVar12 + 4) >> 0x38);
      bVar7 = *(byte *)((long)puVar12 + 0x1f);
      puVar21 = (uint *)(ulong)bVar7;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      puVar12[7] = 0;
      uVar18 = *(undefined8 *)(puVar12 + 8);
      puVar9[0] = 0;
      puVar9[1] = 0;
      uStack_80 = (char)puVar12[10];
      uStack_88 = (undefined7)uVar18;
      uStack_81 = (undefined1)((ulong)uVar18 >> 0x38);
      puVar10 = puVar12;
      if (uVar17 < *puVar25) {
        do {
          puVar10 = puVar10 + 0xc;
        } while (*puVar10 <= uVar17);
      }
      else {
        do {
          puVar10 = puVar10 + 0xc;
          if (puStack_b0 <= puVar10) break;
        } while (*puVar10 <= uVar17);
      }
      puVar13 = puStack_b0;
      if (puVar10 < puStack_b0) {
        do {
          puVar13 = puVar13 + -0xc;
        } while (uVar17 < *puVar13);
      }
      while (puVar10 < puVar13) {
        param_1 = puVar10;
        param_2 = puVar13;
        FUN_109284fc8();
        do {
          puVar10 = puVar10 + 0xc;
        } while (*puVar10 <= uVar17);
        do {
          puVar13 = puVar13 + -0xc;
        } while (uVar17 < *puVar13);
      }
      if (puVar10 + -0xc != puVar12) {
        *puVar12 = puVar10[-0xc];
        if (*(char *)((long)puVar12 + 0x1f) < '\0') {
          param_1 = *(uint **)puVar9;
          __ZdlPv();
        }
        uVar28 = *(undefined8 *)(puVar10 + -8);
        uVar18 = *(undefined8 *)(puVar10 + -10);
        *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar10 + -6);
        *(undefined8 *)(puVar12 + 4) = uVar28;
        *(undefined8 *)puVar9 = uVar18;
        *(undefined1 *)((long)puVar10 + -0x11) = 0;
        *(undefined1 *)(puVar10 + -10) = 0;
        uVar18 = *(undefined8 *)(puVar10 + -4);
        *(char *)(puVar12 + 10) = (char)puVar10[-2];
        *(undefined8 *)(puVar12 + 8) = uVar18;
      }
      puVar10[-0xc] = uVar17;
      uStack_bc = 0;
      *(uint **)(puVar10 + -10) = puVar26;
      *(ulong *)((long)puVar10 + -0x19) = CONCAT71(uStack_70,uStack_71);
      *(ulong *)(puVar10 + -8) = CONCAT17(uStack_71,uStack_78);
      *(byte *)((long)puVar10 + -0x11) = bVar7;
      *(undefined1 *)(puVar10 + -2) = uStack_80;
      *(ulong *)(puVar10 + -4) = CONCAT17(uStack_81,uStack_88);
      puVar13 = puStack_b0;
      goto LAB_109284078;
    }
    lVar15 = 0;
    puVar21 = puVar12 + 2;
    uVar28 = *(undefined8 *)puVar21;
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0x17) >> 8);
    uStack_78 = (undefined7)*(undefined8 *)(puVar12 + 4);
    uStack_71 = (undefined1)((ulong)*(undefined8 *)(puVar12 + 4) >> 0x38);
    puVar21[0] = 0;
    puVar21[1] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    uVar18 = *(undefined8 *)(puVar12 + 8);
    uStack_88 = (undefined7)uVar18;
    uStack_81 = (undefined1)((ulong)uVar18 >> 0x38);
    uStack_80 = (undefined1)puVar12[10];
    uVar6 = *(undefined1 *)((long)puVar12 + 0x1f);
    puVar12[6] = 0;
    puVar12[7] = 0;
    do {
      lVar8 = lVar15 + 0x30;
      lVar15 = lVar15 + 0x30;
    } while (*(uint *)((long)puVar12 + lVar8) < uVar17);
    puVar26 = (uint *)((long)puVar12 + lVar15);
    puVar11 = puStack_b0;
    if (lVar15 == 0x30) {
      do {
        if (puVar11 <= puVar26) break;
        puVar11 = puVar11 + -0xc;
      } while (uVar17 <= *puVar11);
    }
    else {
      do {
        puVar11 = puVar11 + -0xc;
      } while (uVar17 <= *puVar11);
    }
    puVar10 = puVar26;
    puVar9 = puVar11;
    puStack_b8 = puVar23;
    if (puVar26 < puVar11) {
      do {
        FUN_109284fc8(puVar10,puVar9);
        do {
          puVar10 = puVar10 + 0xc;
        } while (*puVar10 < uVar17);
        do {
          puVar9 = puVar9 + -0xc;
        } while (uVar17 <= *puVar9);
      } while (puVar10 < puVar9);
    }
    puVar9 = puVar10 + -0xc;
    if (puVar9 != puVar12) {
      *puVar12 = *puVar9;
      if (*(char *)((long)puVar12 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)puVar21);
      }
      uVar19 = *(undefined8 *)(puVar10 + -8);
      uVar18 = *(undefined8 *)(puVar10 + -10);
      *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar10 + -6);
      *(undefined8 *)(puVar12 + 4) = uVar19;
      *(undefined8 *)puVar21 = uVar18;
      *(undefined1 *)((long)puVar10 + -0x11) = 0;
      *(undefined1 *)(puVar10 + -10) = 0;
      uVar18 = *(undefined8 *)(puVar10 + -4);
      *(char *)(puVar12 + 10) = (char)puVar10[-2];
      *(undefined8 *)(puVar12 + 8) = uVar18;
    }
    puVar13 = puStack_b0;
    puVar23 = puStack_b8;
    puVar25 = puStack_c8;
    puVar10[-0xc] = uVar17;
    *(undefined8 *)(puVar10 + -10) = uVar28;
    *(ulong *)((long)puVar10 + -0x19) = CONCAT71(uStack_70,uStack_71);
    *(ulong *)(puVar10 + -8) = CONCAT17(uStack_71,uStack_78);
    *(undefined1 *)((long)puVar10 + -0x11) = uVar6;
    *(undefined1 *)(puVar10 + -2) = uStack_80;
    *(ulong *)(puVar10 + -4) = CONCAT17(uStack_81,uStack_88);
    if (puVar26 < puVar11) goto LAB_109284578;
    puVar11 = puVar12;
    FUN_1092851c0(puVar12,puVar9);
    param_1 = puVar10;
    param_2 = puVar13;
    FUN_1092851c0();
    if ((int)param_1 == 0) goto code_r0x000109284574;
  } while (((ulong)puVar11 & 1) == 0);
  goto LAB_109284f8c;
LAB_109284880:
  do {
    puVar23 = puVar9;
    uVar17 = puVar10[0xc];
    if (uVar17 < *puVar10) {
      uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar10 + 0x47) >> 8);
      puVar26 = *(uint **)(puVar10 + 0xe);
      uStack_78 = (undefined7)*(undefined8 *)(puVar10 + 0x10);
      uStack_71 = (undefined1)((ulong)*(undefined8 *)(puVar10 + 0x10) >> 0x38);
      bVar7 = *(byte *)((long)puVar10 + 0x4f);
      puVar25 = (uint *)(ulong)bVar7;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0x12] = 0;
      puVar10[0x13] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      uStack_88 = (undefined7)*(undefined8 *)(puVar10 + 0x14);
      uStack_81 = (undefined1)((ulong)*(undefined8 *)(puVar10 + 0x14) >> 0x38);
      uStack_80 = (undefined1)puVar10[0x16];
      uVar14 = *puVar10;
      puVar9 = puVar21;
      do {
        puVar10 = puVar9;
        lVar15 = (long)puVar12 + (long)puVar10;
        *(uint *)(lVar15 + 0x30) = uVar14;
        if (*(char *)(lVar15 + 0x4f) < '\0') {
          param_1 = *(uint **)(lVar15 + 0x38);
          __ZdlPv();
        }
        *(undefined8 *)(lVar15 + 0x40) = *(undefined8 *)(lVar15 + 0x10);
        *(undefined8 *)(lVar15 + 0x38) = *(undefined8 *)(lVar15 + 8);
        *(undefined1 *)(lVar15 + 0x1f) = 0;
        *(undefined1 *)(lVar15 + 8) = 0;
        *(undefined8 *)(lVar15 + 0x48) = *(undefined8 *)(lVar15 + 0x18);
        *(undefined8 *)(lVar15 + 0x50) = *(undefined8 *)(lVar15 + 0x20);
        *(undefined1 *)(lVar15 + 0x58) = *(undefined1 *)(lVar15 + 0x28);
        puVar9 = puVar12;
        if (puVar10 == (uint *)0x0) goto LAB_10928492c;
        uVar14 = *(uint *)((long)puVar12 + (long)puVar10 + -0x30);
        puVar9 = puVar10 + -0xc;
      } while (uVar17 < uVar14);
      puVar9 = (uint *)((long)puVar12 + (long)(puVar10 + -0xc) + 0x30);
LAB_10928492c:
      *puVar9 = uVar17;
      lVar15 = (long)puVar12 + (long)puVar10;
      if (*(char *)((long)puVar9 + 0x1f) < '\0') {
        param_1 = *(uint **)(lVar15 + 8);
        __ZdlPv();
      }
      *(uint **)(lVar15 + 8) = puVar26;
      *(ulong *)(puVar9 + 4) = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar9 + 0x17) = CONCAT71(uStack_70,uStack_71);
      *(byte *)((long)puVar9 + 0x1f) = bVar7;
      *(undefined1 *)(lVar15 + 0x28) = uStack_80;
      *(ulong *)(lVar15 + 0x20) = CONCAT17(uStack_81,uStack_88);
      puVar13 = puStack_b0;
    }
    puVar21 = puVar21 + 0xc;
    puVar9 = puVar23 + 0xc;
    puVar10 = puVar23;
  } while (puVar23 + 0xc != puVar13);
  goto LAB_109284f8c;
LAB_10928499c:
  do {
    if ((long)uVar16 <= (long)uVar24) {
      uVar2 = uVar16 << 1 | 1;
      puVar21 = puVar12 + uVar2 * 0xc;
      uVar22 = uVar16 * 2 + 2;
      if ((long)uVar22 < (long)uVar29) {
        uVar14 = *puVar21;
        uVar4 = puVar21[0xc];
        uVar17 = uVar14;
        if (uVar14 <= uVar4) {
          uVar17 = uVar4;
        }
        puVar26 = puVar21 + 0xc;
        if (uVar4 <= uVar14) {
          puVar26 = puVar21;
          uVar22 = uVar2;
        }
      }
      else {
        uVar17 = *puVar21;
        puVar26 = puVar21;
        uVar22 = uVar2;
      }
      puVar21 = puVar12 + uVar16 * 0xc;
      uVar14 = *puVar21;
      if (uVar14 <= uVar17) {
        puStack_b8 = *(uint **)(puVar21 + 2);
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar21 + 0x17) >> 8);
        uStack_78 = (undefined7)*(undefined8 *)(puVar21 + 4);
        uStack_71 = (undefined1)((ulong)*(undefined8 *)(puVar21 + 4) >> 0x38);
        uStack_bc = (uint)*(byte *)((long)puVar21 + 0x1f);
        puVar21[2] = 0;
        puVar21[3] = 0;
        puVar21[4] = 0;
        puVar21[5] = 0;
        puVar21[6] = 0;
        puVar21[7] = 0;
        uStack_80 = (undefined1)puVar21[10];
        uStack_88 = (undefined7)*(undefined8 *)(puVar21 + 8);
        uStack_81 = (undefined1)((ulong)*(undefined8 *)(puVar21 + 8) >> 0x38);
        uVar17 = *puVar26;
        do {
          puVar23 = puVar26;
          *puVar21 = uVar17;
          if (*(char *)((long)puVar21 + 0x1f) < '\0') {
            param_1 = *(uint **)(puVar21 + 2);
            __ZdlPv();
          }
          uVar28 = *(undefined8 *)(puVar23 + 4);
          uVar18 = *(undefined8 *)(puVar23 + 2);
          *(undefined8 *)(puVar21 + 6) = *(undefined8 *)(puVar23 + 6);
          *(undefined8 *)(puVar21 + 4) = uVar28;
          *(undefined8 *)(puVar21 + 2) = uVar18;
          uVar18 = *(undefined8 *)(puVar23 + 8);
          *(undefined1 *)((long)puVar23 + 0x1f) = 0;
          *(undefined1 *)(puVar23 + 2) = 0;
          *(char *)(puVar21 + 10) = (char)puVar23[10];
          *(undefined8 *)(puVar21 + 8) = uVar18;
          if ((long)uVar24 < (long)uVar22) break;
          uVar2 = uVar22 << 1 | 1;
          puVar21 = puVar12 + uVar2 * 0xc;
          uVar22 = uVar22 * 2 + 2;
          if ((long)uVar22 < (long)uVar29) {
            uVar4 = *puVar21;
            uVar5 = puVar21[0xc];
            uVar17 = uVar4;
            if (uVar4 <= uVar5) {
              uVar17 = uVar5;
            }
            puVar26 = puVar21 + 0xc;
            if (uVar5 <= uVar4) {
              puVar26 = puVar21;
              uVar22 = uVar2;
            }
          }
          else {
            uVar17 = *puVar21;
            puVar26 = puVar21;
            uVar22 = uVar2;
          }
          puVar21 = puVar23;
        } while (uVar14 <= uVar17);
        *puVar23 = uVar14;
        if (*(char *)((long)puVar23 + 0x1f) < '\0') {
          param_1 = *(uint **)(puVar23 + 2);
          __ZdlPv();
        }
        *(uint **)(puVar23 + 2) = puStack_b8;
        *(ulong *)(puVar23 + 4) = CONCAT17(uStack_71,uStack_78);
        *(ulong *)((long)puVar23 + 0x17) = CONCAT71(uStack_70,uStack_71);
        *(char *)((long)puVar23 + 0x1f) = (char)uStack_bc;
        *(ulong *)(puVar23 + 8) = CONCAT17(uStack_81,uStack_88);
        *(undefined1 *)(puVar23 + 10) = uStack_80;
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  puVar9 = (uint *)((uVar27 >> 4) * -0x5555555555555555);
  puVar10 = puStack_b0;
  do {
    puVar21 = puVar10;
    puVar25 = (uint *)0x0;
    uVar17 = *puVar12;
    puStack_b8 = *(uint **)(puVar12 + 2);
    uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + 0x17) >> 8);
    uStack_7f = (undefined6)((ulong)*(undefined8 *)((long)puVar12 + 0x17) >> 0x10);
    uStack_88 = (undefined7)*(undefined8 *)(puVar12 + 4);
    uStack_81 = (undefined1)((ulong)*(undefined8 *)(puVar12 + 4) >> 0x38);
    puStack_b0 = (uint *)CONCAT44(puStack_b0._4_4_,(uint)*(byte *)((long)puVar12 + 0x1f));
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    uStack_a8 = *(undefined8 *)(puVar12 + 8);
    uStack_a0 = (undefined1)puVar12[10];
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar26 = puVar12;
    do {
      puVar10 = puVar26 + (long)puVar25 * 0xc + 0xc;
      puVar11 = (uint *)((long)puVar25 << 1 | 1);
      puVar13 = (uint *)((long)puVar25 * 2 + 2);
      if ((long)puVar13 < (long)puVar9) {
        uVar5 = puVar26[(long)puVar25 * 0xc + 0x18];
        uVar4 = puVar26[(long)puVar25 * 0xc + 0xc];
        uVar14 = uVar4;
        if (uVar4 <= uVar5) {
          uVar14 = uVar5;
        }
        puVar23 = puVar26 + (long)puVar25 * 0xc + 0x18;
        puVar25 = puVar13;
        if (uVar5 <= uVar4) {
          puVar23 = puVar10;
          puVar25 = puVar11;
        }
      }
      else {
        uVar14 = *puVar10;
        puVar23 = puVar10;
        puVar25 = puVar11;
      }
      *puVar26 = uVar14;
      if (*(char *)((long)puVar26 + 0x1f) < '\0') {
        param_1 = *(uint **)(puVar26 + 2);
        __ZdlPv();
      }
      uVar28 = *(undefined8 *)(puVar23 + 4);
      uVar18 = *(undefined8 *)(puVar23 + 2);
      *(undefined8 *)(puVar26 + 6) = *(undefined8 *)(puVar23 + 6);
      *(undefined8 *)(puVar26 + 4) = uVar28;
      *(undefined8 *)(puVar26 + 2) = uVar18;
      puVar13 = puVar23 + 8;
      uVar18 = *(undefined8 *)puVar13;
      *(undefined1 *)((long)puVar23 + 0x1f) = 0;
      *(undefined1 *)(puVar23 + 2) = 0;
      *(char *)(puVar26 + 10) = (char)puVar23[10];
      *(undefined8 *)(puVar26 + 8) = uVar18;
      puVar26 = puVar23;
    } while ((long)puVar25 <= (long)((long)puVar9 - 2U >> 1));
    puVar10 = puVar21 + -0xc;
    if (puVar23 == puVar10) {
      *puVar23 = uVar17;
      if (*(char *)((long)puVar23 + 0x1f) < '\0') {
        param_1 = *(uint **)(puVar23 + 2);
        __ZdlPv();
      }
      *(uint **)(puVar23 + 2) = puStack_b8;
      *(ulong *)(puVar23 + 4) = CONCAT17(uStack_81,uStack_88);
      *(ulong *)((long)puVar23 + 0x17) = CONCAT62(uStack_7f,CONCAT11(uStack_80,uStack_81));
      *(char *)((long)puVar23 + 0x1f) = (char)puStack_b0;
      *(undefined8 *)puVar13 = uStack_a8;
      *(undefined1 *)(puVar23 + 10) = uStack_a0;
    }
    else {
      *puVar23 = *puVar10;
      if (*(char *)((long)puVar23 + 0x1f) < '\0') {
        param_1 = *(uint **)(puVar23 + 2);
        __ZdlPv();
      }
      uVar28 = *(undefined8 *)(puVar21 + -8);
      uVar18 = *(undefined8 *)(puVar21 + -10);
      *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar21 + -6);
      *(undefined8 *)(puVar23 + 4) = uVar28;
      *(undefined8 *)(puVar23 + 2) = uVar18;
      puVar25 = puVar21 + -4;
      uVar18 = *(undefined8 *)puVar25;
      *(undefined1 *)((long)puVar21 + -0x11) = 0;
      *(undefined1 *)(puVar21 + -10) = 0;
      *(char *)(puVar23 + 10) = (char)puVar21[-2];
      *(undefined8 *)puVar13 = uVar18;
      puVar21[-0xc] = uVar17;
      *(uint **)(puVar21 + -10) = puStack_b8;
      *(ulong *)((long)puVar21 + -0x19) = CONCAT62(uStack_7f,CONCAT11(uStack_80,uStack_81));
      *(ulong *)(puVar21 + -8) = CONCAT17(uStack_81,uStack_88);
      *(char *)((long)puVar21 + -0x11) = (char)puStack_b0;
      *(undefined1 *)(puVar21 + -2) = uStack_a0;
      *(undefined8 *)puVar25 = uStack_a8;
      uVar27 = (long)puVar23 + (0x30 - (long)puVar12);
      if (0x30 < (long)uVar27) {
        uVar27 = (uVar27 >> 4) * -0x5555555555555555 - 2 >> 1;
        puVar26 = puVar12 + uVar27 * 0xc;
        uVar17 = *puVar23;
        if (*puVar26 < uVar17) {
          puVar21 = *(uint **)(puVar23 + 2);
          uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar23 + 0x17) >> 8);
          uStack_78 = (undefined7)*(undefined8 *)(puVar23 + 4);
          uStack_71 = (undefined1)((ulong)*(undefined8 *)(puVar23 + 4) >> 0x38);
          bVar7 = *(byte *)((long)puVar23 + 0x1f);
          puVar25 = (uint *)(ulong)bVar7;
          puVar23[4] = 0;
          puVar23[5] = 0;
          puVar23[6] = 0;
          puVar23[7] = 0;
          puVar23[2] = 0;
          puVar23[3] = 0;
          uStack_90 = (undefined1)puVar23[10];
          uStack_98 = *(undefined8 *)puVar13;
          uVar14 = *puVar26;
          puStack_b0 = puVar10;
          do {
            puVar10 = puVar26;
            *puVar23 = uVar14;
            if (*(char *)((long)puVar23 + 0x1f) < '\0') {
              param_1 = *(uint **)(puVar23 + 2);
              __ZdlPv();
            }
            uVar28 = *(undefined8 *)(puVar10 + 4);
            uVar18 = *(undefined8 *)(puVar10 + 2);
            *(undefined8 *)(puVar23 + 6) = *(undefined8 *)(puVar10 + 6);
            *(undefined8 *)(puVar23 + 4) = uVar28;
            *(undefined8 *)(puVar23 + 2) = uVar18;
            uVar18 = *(undefined8 *)(puVar10 + 8);
            *(undefined1 *)((long)puVar10 + 0x1f) = 0;
            *(undefined1 *)(puVar10 + 2) = 0;
            *(char *)(puVar23 + 10) = (char)puVar10[10];
            *(undefined8 *)(puVar23 + 8) = uVar18;
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1 >> 1;
            uVar14 = puVar12[uVar27 * 0xc];
            puVar26 = puVar12 + uVar27 * 0xc;
            puVar23 = puVar10;
          } while (uVar14 < uVar17);
          *puVar10 = uVar17;
          if (*(char *)((long)puVar10 + 0x1f) < '\0') {
            param_1 = *(uint **)(puVar10 + 2);
            __ZdlPv();
          }
          *(uint **)(puVar10 + 2) = puVar21;
          *(ulong *)(puVar10 + 4) = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar10 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(byte *)((long)puVar10 + 0x1f) = bVar7;
          *(undefined8 *)(puVar10 + 8) = uStack_98;
          *(undefined1 *)(puVar10 + 10) = uStack_90;
          puVar10 = puStack_b0;
        }
      }
    }
    puVar26 = (uint *)((long)puVar9 + -1);
    bVar3 = 2 < (long)puVar9;
    puVar9 = puVar26;
  } while (bVar3);
LAB_109284f8c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_109284fc4:
  unaff_x22 = puVar26;
  unaff_x21 = puVar25;
  unaff_x20 = puVar23;
  unaff_x19 = puVar21;
  puVar25 = param_2;
  puVar12 = param_1;
  unaff_x30 = FUN_109284fc8;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)auStack_e0;
  unaff_x29 = puVar1;
code_r0x000109284fc8:
  do {
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar17 = *puVar12;
    unaff_x20 = *(uint **)(puVar12 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(puVar12 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar12 + 0x17);
    bVar7 = *(byte *)((long)puVar12 + 0x1f);
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(puVar12 + 8);
    *(char *)((long)register0x00000008 + -0x50) = (char)puVar12[10];
    *puVar12 = *puVar25;
    uVar28 = *(undefined8 *)(puVar25 + 4);
    uVar18 = *(undefined8 *)(puVar25 + 2);
    *(undefined8 *)(puVar12 + 6) = *(undefined8 *)(puVar25 + 6);
    *(undefined8 *)(puVar12 + 4) = uVar28;
    *(undefined8 *)(puVar12 + 2) = uVar18;
    *(undefined1 *)((long)puVar25 + 0x1f) = 0;
    unaff_x22 = puVar25 + 8;
    uVar18 = *(undefined8 *)unaff_x22;
    *(undefined1 *)(puVar25 + 2) = 0;
    *(char *)(puVar12 + 10) = (char)puVar25[10];
    *(undefined8 *)(puVar12 + 8) = uVar18;
    *puVar25 = uVar17;
    puVar10 = puVar25;
    puVar9 = param_3;
    if (*(char *)((long)puVar25 + 0x1f) < '\0') {
      puVar12 = *(uint **)(puVar25 + 2);
      __ZdlPv();
      puVar9 = param_3;
    }
    uVar18 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(uint **)(puVar25 + 2) = unaff_x20;
    *(undefined8 *)(puVar25 + 4) = uVar18;
    *(undefined8 *)((long)puVar25 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar25 + 0x1f) = bVar7;
    *(undefined8 *)unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined1 *)(puVar25 + 10) = *(undefined1 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    unaff_x30 = (code *)0x1092850bc;
    ___stack_chk_fail();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    puVar13 = param_4;
    unaff_x19 = puVar25;
    unaff_x21 = (uint *)(ulong)bVar7;
SUB_1092850bc:
    puVar25 = puVar10;
    *(uint **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(uint **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(uint **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    uVar17 = *puVar25;
    puVar21 = puVar12;
    param_3 = puVar9;
    param_4 = puVar13;
    if (uVar17 < *puVar12) {
      puVar26 = puVar9;
      if ((*puVar9 < uVar17) ||
         (FUN_109284fc8(puVar12,puVar25), puVar21 = puVar25, *puVar9 < *puVar25)) {
LAB_10928514c:
        FUN_109284fc8(puVar21,puVar26);
      }
    }
    else if ((*puVar9 < uVar17) &&
            (FUN_109284fc8(puVar25,puVar9), puVar26 = puVar25, *puVar25 < *puVar12))
    goto LAB_10928514c;
    if (((*puVar9 <= *puVar13) || (FUN_109284fc8(puVar9,puVar13), *puVar25 <= *puVar9)) ||
       (FUN_109284fc8(puVar25,puVar9), *puVar12 <= *puVar25)) {
      return;
    }
    unaff_x29 = *(undefined1 **)((long)register0x00000008 + -0x10);
    unaff_x30 = *(code **)((long)register0x00000008 + -8);
    unaff_x20 = *(uint **)((long)register0x00000008 + -0x20);
    unaff_x19 = *(uint **)((long)register0x00000008 + -0x18);
    unaff_x22 = *(uint **)((long)register0x00000008 + -0x30);
    unaff_x21 = *(uint **)((long)register0x00000008 + -0x28);
  } while( true );
code_r0x000109284574:
  if (((ulong)puVar11 & 1) == 0) {
LAB_109284578:
    param_4 = (uint *)(ulong)(uStack_bc & 1);
    param_3 = puVar23;
    FUN_10928401c();
    uStack_bc = 0;
    param_1 = puVar12;
    param_2 = puVar9;
  }
  goto LAB_109284078;
}



/* Entry: 109284fc8; end: 1092851bf;  */

void FUN_109284fc8(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 8);
    *(char *)((long)register0x00000008 + -0x50) = (char)param_1[10];
    *param_1 = *param_2;
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    puVar4 = param_2 + 8;
    uVar9 = *(undefined8 *)puVar4;
    *(undefined1 *)(param_2 + 2) = 0;
    *(char *)(param_1 + 10) = (char)param_2[10];
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_2 = uVar2;
    puVar5 = param_2;
    puVar7 = param_3;
    puVar8 = param_4;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      param_1 = *(uint **)(param_2 + 2);
      __ZdlPv();
      puVar7 = param_3;
      puVar8 = param_4;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar9;
    *(undefined8 *)((long)param_2 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x1f) = bVar3;
    *(undefined8 *)puVar4 = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined1 *)(param_2 + 10) = *(undefined1 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(uint **)((long)register0x00000008 + -0x90) = puVar4;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(uint **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x1092850bc;
    uVar2 = *puVar5;
    puVar4 = param_1;
    param_3 = puVar7;
    param_4 = puVar8;
    if (uVar2 < *param_1) {
      puVar6 = puVar7;
      if ((*puVar7 < uVar2) || (FUN_109284fc8(param_1,puVar5), puVar4 = puVar5, *puVar7 < *puVar5))
      {
LAB_10928514c:
        FUN_109284fc8(puVar4,puVar6);
      }
    }
    else if ((*puVar7 < uVar2) &&
            (FUN_109284fc8(puVar5,puVar7), puVar6 = puVar5, *puVar5 < *param_1)) goto LAB_10928514c;
    if (((*puVar7 <= *puVar8) || (FUN_109284fc8(puVar7,puVar8), *puVar5 <= *puVar7)) ||
       (FUN_109284fc8(puVar5,puVar7), *param_1 <= *puVar5)) {
      return;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar5;
  } while( true );
}



/* Entry: 1092851c0; end: 10928555b;  */

void FUN_1092851c0(uint *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined7 uStack_78;
  undefined1 uStack_71;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  puVar10 = param_2;
  if ((long)uVar14 < 3) {
    if (uVar14 < 2) goto LAB_10928550c;
    if (uVar14 != 2) {
LAB_109285300:
      puVar8 = param_1 + 0x18;
      puVar11 = param_1 + 0xc;
      uVar2 = *puVar11;
      puVar6 = param_1;
      if (uVar2 < *param_1) {
        puVar9 = puVar8;
        if ((*puVar8 < uVar2) ||
           (puVar10 = puVar11, FUN_109284fc8(param_1), puVar6 = puVar11,
           param_1[0x18] < param_1[0xc])) {
LAB_1092853c0:
          FUN_109284fc8(puVar6);
          puVar10 = puVar9;
        }
      }
      else if ((*puVar8 < uVar2) &&
              (puVar10 = puVar8, FUN_109284fc8(puVar11), puVar9 = puVar11, param_1[0xc] < *param_1))
      goto LAB_1092853c0;
      if (param_1 + 0x24 != param_2) {
        lVar18 = 0;
        iVar20 = 0;
        puVar6 = param_1 + 0x24;
        do {
          uVar2 = *puVar6;
          if (uVar2 < *puVar8) {
            uVar1 = *(undefined8 *)(puVar6 + 2);
            uStack_78 = (undefined7)*(undefined8 *)(puVar6 + 4);
            uVar15 = *(undefined8 *)((long)puVar6 + 0x17);
            uStack_71 = (undefined1)uVar15;
            uVar3 = *(undefined1 *)((long)puVar6 + 0x1f);
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            uVar16 = *(undefined8 *)(puVar6 + 8);
            uVar4 = puVar6[10];
            uVar12 = *puVar8;
            lVar5 = lVar18;
            do {
              lVar17 = lVar5;
              *(uint *)((long)param_1 + lVar17 + 0x90) = uVar12;
              if (*(char *)((long)param_1 + lVar17 + 0xaf) < '\0') {
                __ZdlPv(*(undefined8 *)((long)param_1 + lVar17 + 0x98));
              }
              *(undefined8 *)((long)param_1 + lVar17 + 0xa0) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x70);
              *(undefined8 *)((long)param_1 + lVar17 + 0x98) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x68);
              *(undefined1 *)((long)param_1 + lVar17 + 0x7f) = 0;
              *(undefined1 *)((long)param_1 + lVar17 + 0x68) = 0;
              *(undefined8 *)((long)param_1 + lVar17 + 0xa8) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x78);
              *(undefined8 *)((long)param_1 + lVar17 + 0xb0) =
                   *(undefined8 *)((long)param_1 + lVar17 + 0x80);
              *(undefined1 *)((long)param_1 + lVar17 + 0xb8) =
                   *(undefined1 *)((long)param_1 + lVar17 + 0x88);
              puVar8 = param_1;
              if (lVar17 == -0x60) goto LAB_109285484;
              uVar12 = *(uint *)((long)param_1 + lVar17 + 0x30);
              lVar5 = lVar17 + -0x30;
            } while (uVar2 < uVar12);
            puVar8 = (uint *)((long)param_1 + lVar17 + 0x60);
LAB_109285484:
            *puVar8 = uVar2;
            if (*(char *)((long)puVar8 + 0x1f) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar17 + 0x68));
            }
            *(undefined8 *)((long)param_1 + lVar17 + 0x68) = uVar1;
            *(ulong *)(puVar8 + 4) = CONCAT17(uStack_71,uStack_78);
            *(undefined8 *)((long)puVar8 + 0x17) = uVar15;
            *(undefined1 *)((long)puVar8 + 0x1f) = uVar3;
            *(undefined8 *)((long)param_1 + lVar17 + 0x80) = uVar16;
            *(char *)((long)param_1 + lVar17 + 0x88) = (char)uVar4;
            iVar20 = iVar20 + 1;
            if (iVar20 == 8) {
              puVar7 = (undefined8 *)(ulong)(puVar6 + 0xc == param_2);
              goto LAB_109285510;
            }
          }
          puVar11 = puVar6 + 0xc;
          lVar18 = lVar18 + 0x30;
          puVar8 = puVar6;
          puVar6 = puVar11;
        } while (puVar11 != param_2);
      }
      goto LAB_10928550c;
    }
    if (*param_1 <= param_2[-0xc]) goto LAB_10928550c;
LAB_1092852f4:
    puVar6 = param_2 + -0xc;
  }
  else if (uVar14 == 3) {
    puVar6 = param_1 + 0xc;
    uVar2 = *puVar6;
    puVar8 = param_2 + -0xc;
    if (uVar2 < *param_1) {
      if ((uVar2 <= *puVar8) &&
         (puVar10 = puVar6, FUN_109284fc8(param_1), puVar11 = param_1 + 0xc, param_1 = puVar6,
         *puVar11 <= *puVar8)) goto LAB_10928550c;
      goto LAB_1092852f4;
    }
    if ((uVar2 <= *puVar8) || (FUN_109284fc8(puVar6), puVar10 = puVar8, *param_1 <= param_1[0xc]))
    goto LAB_10928550c;
  }
  else {
    if (uVar14 == 4) {
      param_4 = param_2 + -0xc;
      puVar10 = param_1 + 0xc;
      param_3 = param_1 + 0x18;
      func_0x0001092850bc(param_1);
      goto LAB_10928550c;
    }
    if (uVar14 != 5) goto LAB_109285300;
    puVar10 = param_1 + 0xc;
    param_3 = param_1 + 0x18;
    param_4 = param_1 + 0x24;
    func_0x0001092850bc(param_1);
    param_2 = param_2 + -0xc;
    if ((param_1[0x24] <= *param_2) ||
       (FUN_109284fc8(param_1 + 0x24), puVar10 = param_2, param_1[0x18] <= param_1[0x24]))
    goto LAB_10928550c;
    puVar10 = param_1 + 0x24;
    FUN_109284fc8(param_1 + 0x18);
    if (param_1[0xc] <= param_1[0x18]) goto LAB_10928550c;
    puVar10 = param_1 + 0x18;
    FUN_109284fc8(param_1 + 0xc);
    if (*param_1 <= param_1[0xc]) goto LAB_10928550c;
    puVar6 = param_1 + 0xc;
  }
  FUN_109284fc8(param_1);
  puVar10 = puVar6;
LAB_10928550c:
  puVar7 = (undefined8 *)0x1;
LAB_109285510:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  uVar14 = puVar7[2];
  puVar19 = (undefined8 *)*puVar7;
  if ((uint *)((long)(uVar14 - (long)puVar19) >> 2) < param_4) {
    puVar21 = puVar7;
    puVar6 = puVar10;
    puVar8 = param_3;
    puVar11 = param_4;
    if (puVar19 != (undefined8 *)0x0) {
      puVar7[1] = puVar19;
      __ZdlPv();
      uVar14 = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar21 = puVar19;
    }
    if ((ulong)param_4 >> 0x3e != 0) {
      FUN_10923f788();
      if (puVar11 != (uint *)0x0) {
        FUN_10925b938();
        lVar18 = puVar21[1];
        lVar13 = (long)puVar8 - (long)puVar6;
        if (lVar13 != 0) {
          _memmove(lVar18,puVar6,lVar13);
        }
        puVar21[1] = lVar18 + lVar13;
      }
      return;
    }
    puVar6 = (uint *)((long)uVar14 >> 1);
    if ((uint *)((long)uVar14 >> 1) <= param_4) {
      puVar6 = param_4;
    }
    if (0x7ffffffffffffffb < uVar14) {
      puVar6 = (uint *)0x3fffffffffffffff;
    }
    FUN_10925b938(puVar7,puVar6);
    lVar13 = puVar7[1];
    lVar18 = (long)param_3 - (long)puVar10;
    if (lVar18 != 0) {
      _memmove(lVar13,puVar10,lVar18);
    }
    lVar13 = lVar13 + lVar18;
  }
  else {
    puVar21 = (undefined8 *)puVar7[1];
    if ((uint *)((long)puVar21 - (long)puVar19 >> 2) < param_4) {
      lVar18 = (long)puVar10 + ((long)puVar21 - (long)puVar19);
      if (puVar21 != puVar19) {
        _memmove(puVar19,puVar10);
        puVar21 = (undefined8 *)puVar7[1];
      }
      lVar13 = (long)param_3 - lVar18;
      if (lVar13 != 0) {
        _memmove(puVar21,lVar18,lVar13);
      }
      lVar13 = (long)puVar21 + lVar13;
    }
    else {
      lVar13 = (long)param_3 - (long)puVar10;
      if (lVar13 != 0) {
        _memmove(puVar19,puVar10,lVar13);
      }
      lVar13 = (long)puVar19 + lVar13;
    }
  }
  puVar7[1] = lVar13;
  return;
}



/* Entry: 10928555c; end: 109285683;  */

void FUN_10928555c(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar6) >> 2) < param_4) {
    puVar7 = param_1;
    lVar1 = param_2;
    lVar4 = param_3;
    uVar2 = param_4;
    if (puVar6 != (undefined8 *)0x0) {
      param_1[1] = puVar6;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar7 = puVar6;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_10923f788();
      if (uVar2 != 0) {
        FUN_10925b938();
        lVar5 = puVar7[1];
        lVar4 = lVar4 - lVar1;
        if (lVar4 != 0) {
          _memmove(lVar5,lVar1,lVar4);
        }
        puVar7[1] = lVar5 + lVar4;
      }
      return;
    }
    uVar2 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar2 = 0x3fffffffffffffff;
    }
    FUN_10925b938(param_1,uVar2);
    lVar4 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar4,param_2,param_3);
    }
    lVar4 = lVar4 + param_3;
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar7 - (long)puVar6 >> 2) < param_4) {
      lVar4 = param_2 + ((long)puVar7 - (long)puVar6);
      if (puVar7 != puVar6) {
        _memmove(puVar6,param_2);
        puVar7 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar4;
      if (param_3 != 0) {
        _memmove(puVar7,lVar4,param_3);
      }
      lVar4 = (long)puVar7 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(puVar6,param_2,param_3);
      }
      lVar4 = (long)puVar6 + param_3;
    }
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 109285684; end: 1092856fb;  */

void FUN_109285684(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_10925b938(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1092856fc; end: 10928570f;  */

long * FUN_1092856fc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar1 = plVar3[1];
  lVar2 = plVar3[2];
  while (lVar4 = lVar2, lVar4 != lVar1) {
    plVar3[2] = lVar4 + -0x20;
    lVar2 = lVar4 + -0x20;
    if (*(long *)(lVar4 + -0x18) != 0) {
      *(long *)(lVar4 + -0x10) = *(long *)(lVar4 + -0x18);
      __ZdlPv();
      lVar2 = plVar3[2];
    }
  }
  if (*plVar3 != 0) {
    __ZdlPv();
  }
  return plVar3;
}



/* Entry: 109285710; end: 10928576f;  */

long * FUN_109285710(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar3 = lVar2, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x20;
    lVar2 = lVar3 + -0x20;
    if (*(long *)(lVar3 + -0x18) != 0) {
      *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x18);
      __ZdlPv();
      lVar2 = param_1[2];
    }
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109285770; end: 109285783;  */

void FUN_109285770(undefined8 param_1,uint *param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  long lVar21;
  uint *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  uint *puVar26;
  uint *puVar27;
  undefined8 uStack_80;
  uint uStack_78;
  
  puVar9 = (uint *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
LAB_1092857b4:
  puVar18 = param_2 + -3;
  puVar27 = param_2 + -6;
  puVar26 = param_2 + -9;
  puVar22 = puVar9;
LAB_1092857c4:
  do {
    puVar9 = puVar22;
    uVar13 = (long)param_2 - (long)puVar9;
    uVar12 = ((long)uVar13 >> 2) * -0x5555555555555555;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        if (*puVar9 <= param_2[-3]) {
          return;
        }
LAB_1092860c0:
        uVar14 = *(undefined8 *)puVar9;
        uVar16 = puVar9[2];
        uVar15 = *(undefined8 *)(param_2 + -3);
        puVar9[2] = param_2[-1];
        *(undefined8 *)puVar9 = uVar15;
        param_2[-1] = uVar16;
        *(undefined8 *)(param_2 + -3) = uVar14;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        puVar22 = puVar9 + 3;
        uVar16 = *puVar22;
        puVar18 = param_2 + -3;
        if (uVar16 < *puVar9) {
          if (uVar16 <= *puVar18) {
            uVar14 = *(undefined8 *)puVar9;
            uVar16 = puVar9[2];
            *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
            puVar9[2] = puVar9[5];
            *(undefined8 *)puVar22 = uVar14;
            puVar9[5] = uVar16;
            if (puVar9[3] <= *puVar18) {
              return;
            }
            uVar14 = *(undefined8 *)puVar22;
            uVar16 = puVar9[5];
            uVar5 = param_2[-1];
            *(undefined8 *)puVar22 = *(undefined8 *)puVar18;
            puVar9[5] = uVar5;
            param_2[-1] = uVar16;
            *(undefined8 *)puVar18 = uVar14;
            return;
          }
          goto LAB_1092860c0;
        }
        if (uVar16 <= *puVar18) {
          return;
        }
        uVar14 = *(undefined8 *)puVar22;
        uVar16 = puVar9[5];
        uVar5 = param_2[-1];
        *(undefined8 *)puVar22 = *(undefined8 *)puVar18;
        puVar9[5] = uVar5;
        param_2[-1] = uVar16;
        *(undefined8 *)puVar18 = uVar14;
        goto LAB_109286648;
      }
      if (uVar12 == 4) {
        puVar22 = puVar9 + 3;
        uVar16 = *puVar22;
        puVar26 = puVar9 + 6;
        uVar5 = *puVar26;
        if (uVar16 < *puVar9) {
          if (uVar5 < uVar16) {
            uVar14 = *(undefined8 *)puVar9;
            uVar16 = puVar9[2];
            *(undefined8 *)puVar9 = *(undefined8 *)puVar26;
            puVar9[2] = puVar9[8];
            *(undefined8 *)puVar26 = uVar14;
          }
          else {
            uVar14 = *(undefined8 *)puVar9;
            uVar16 = puVar9[2];
            *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
            puVar9[2] = puVar9[5];
            *(undefined8 *)puVar22 = uVar14;
            puVar9[5] = uVar16;
            if (puVar9[3] <= uVar5) goto LAB_1092865e0;
            uVar16 = puVar9[5];
            uVar14 = *(undefined8 *)puVar22;
            *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
            puVar9[5] = puVar9[8];
            *(undefined8 *)puVar26 = uVar14;
          }
          puVar9[8] = uVar16;
        }
        else if (uVar5 < uVar16) {
          uVar16 = puVar9[5];
          uVar14 = *(undefined8 *)puVar22;
          *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
          puVar9[5] = puVar9[8];
          *(undefined8 *)puVar26 = uVar14;
          puVar9[8] = uVar16;
          if (puVar9[3] < *puVar9) {
            uVar14 = *(undefined8 *)puVar9;
            uVar16 = puVar9[2];
            *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
            puVar9[2] = puVar9[5];
            *(undefined8 *)puVar22 = uVar14;
            puVar9[5] = uVar16;
          }
        }
LAB_1092865e0:
        if (*puVar26 <= *puVar18) {
          return;
        }
        uVar14 = *(undefined8 *)puVar26;
        uVar16 = puVar9[8];
        uVar5 = param_2[-1];
        *(undefined8 *)puVar26 = *(undefined8 *)puVar18;
        puVar9[8] = uVar5;
        param_2[-1] = uVar16;
        *(undefined8 *)puVar18 = uVar14;
        if (*puVar22 <= *puVar26) {
          return;
        }
        uVar16 = puVar9[5];
        uVar14 = *(undefined8 *)puVar22;
        *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
        puVar9[5] = puVar9[8];
        *(undefined8 *)puVar26 = uVar14;
        puVar9[8] = uVar16;
LAB_109286648:
        puVar22 = puVar9 + 3;
        if (*puVar9 <= *puVar22) {
          return;
        }
        uVar14 = *(undefined8 *)puVar9;
        uVar16 = puVar9[2];
        *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
        puVar9[2] = puVar9[5];
        *(undefined8 *)puVar22 = uVar14;
        puVar9[5] = uVar16;
        return;
      }
      if (uVar12 == 5) {
        puVar22 = puVar9 + 3;
        puVar26 = puVar9 + 6;
        puVar27 = puVar9 + 9;
        uVar16 = *puVar22;
        if (uVar16 < *puVar9) {
          if (*puVar26 < uVar16) {
            uVar16 = puVar9[2];
            uVar14 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar9 = *(undefined8 *)puVar26;
            puVar9[2] = puVar9[8];
          }
          else {
            uVar16 = puVar9[2];
            uVar14 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
            puVar9[2] = puVar9[5];
            *(undefined8 *)puVar22 = uVar14;
            puVar9[5] = uVar16;
            if ((uint)uVar14 <= *puVar26) goto LAB_109286790;
            uVar16 = puVar9[5];
            uVar14 = *(undefined8 *)puVar22;
            *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
            puVar9[5] = puVar9[8];
          }
          *(undefined8 *)puVar26 = uVar14;
          puVar9[8] = uVar16;
        }
        else if (*puVar26 < uVar16) {
          uVar16 = puVar9[5];
          uVar14 = *(undefined8 *)puVar22;
          *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
          puVar9[5] = puVar9[8];
          *(undefined8 *)puVar26 = uVar14;
          puVar9[8] = uVar16;
          if (*puVar22 < *puVar9) {
            uVar16 = puVar9[2];
            uVar14 = *(undefined8 *)puVar9;
            *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
            puVar9[2] = puVar9[5];
            *(undefined8 *)puVar22 = uVar14;
            puVar9[5] = uVar16;
          }
        }
LAB_109286790:
        if (*puVar27 < *puVar26) {
          uVar16 = puVar9[8];
          uVar14 = *(undefined8 *)puVar26;
          *(undefined8 *)puVar26 = *(undefined8 *)puVar27;
          puVar9[8] = puVar9[0xb];
          *(undefined8 *)puVar27 = uVar14;
          puVar9[0xb] = uVar16;
          if (*puVar26 < *puVar22) {
            uVar16 = puVar9[5];
            uVar14 = *(undefined8 *)puVar22;
            *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
            puVar9[5] = puVar9[8];
            *(undefined8 *)puVar26 = uVar14;
            puVar9[8] = uVar16;
            if (*puVar22 < *puVar9) {
              uVar16 = puVar9[2];
              uVar14 = *(undefined8 *)puVar9;
              *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
              puVar9[2] = puVar9[5];
              *(undefined8 *)puVar22 = uVar14;
              puVar9[5] = uVar16;
            }
          }
        }
        if (*puVar18 < *puVar27) {
          uVar16 = puVar9[0xb];
          uVar14 = *(undefined8 *)puVar27;
          uVar5 = param_2[-1];
          *(undefined8 *)puVar27 = *(undefined8 *)puVar18;
          puVar9[0xb] = uVar5;
          *(undefined8 *)puVar18 = uVar14;
          param_2[-1] = uVar16;
          if (*puVar27 < *puVar26) {
            uVar16 = puVar9[8];
            uVar14 = *(undefined8 *)puVar26;
            *(undefined8 *)puVar26 = *(undefined8 *)puVar27;
            puVar9[8] = puVar9[0xb];
            *(undefined8 *)puVar27 = uVar14;
            puVar9[0xb] = uVar16;
            if (*puVar26 < *puVar22) {
              uVar16 = puVar9[5];
              uVar14 = *(undefined8 *)puVar22;
              *(undefined8 *)puVar22 = *(undefined8 *)puVar26;
              puVar9[5] = puVar9[8];
              *(undefined8 *)puVar26 = uVar14;
              puVar9[8] = uVar16;
              if (*puVar22 < *puVar9) {
                uVar16 = puVar9[2];
                uVar14 = *(undefined8 *)puVar9;
                *(undefined8 *)puVar9 = *(undefined8 *)puVar22;
                puVar9[2] = puVar9[5];
                *(undefined8 *)puVar22 = uVar14;
                puVar9[5] = uVar16;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar13 < 0x120) {
      puVar22 = puVar9 + 3;
      if ((param_4 & 1) == 0) {
        if (puVar9 == param_2 || puVar22 == param_2) {
          return;
        }
        do {
          puVar18 = puVar22;
          uVar16 = puVar9[3];
          if (uVar16 < *puVar9) {
            uVar14 = *(undefined8 *)(puVar9 + 4);
            puVar9 = puVar18;
            do {
              puVar22 = puVar9;
              puVar9 = puVar22 + -3;
              *(undefined8 *)puVar22 = *(undefined8 *)puVar9;
              puVar22[2] = puVar22[-1];
            } while (uVar16 < puVar22[-6]);
            *puVar9 = uVar16;
            *(undefined8 *)(puVar22 + -2) = uVar14;
          }
          puVar22 = puVar18 + 3;
          puVar9 = puVar18;
        } while (puVar18 + 3 != param_2);
        return;
      }
      if (puVar9 == param_2 || puVar22 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar18 = puVar9;
      break;
    }
    if (param_3 == 0) {
      if (puVar9 == param_2) {
        return;
      }
      uVar17 = uVar12 - 2 >> 1;
      uVar24 = uVar17;
      goto LAB_1092861f0;
    }
    puVar22 = puVar9 + (uVar12 >> 1) * 3;
    uVar16 = *puVar18;
    if (uVar13 < 0x601) {
      uVar5 = *puVar9;
      if (uVar5 < *puVar22) {
        if (uVar16 < uVar5) {
          uStack_80 = *(undefined8 *)puVar22;
          uStack_78 = puVar22[2];
          uVar14 = *(undefined8 *)puVar18;
          puVar22[2] = param_2[-1];
          *(undefined8 *)puVar22 = uVar14;
        }
        else {
          uVar14 = *(undefined8 *)puVar22;
          uVar16 = puVar22[2];
          uVar15 = *(undefined8 *)puVar9;
          puVar22[2] = puVar9[2];
          *(undefined8 *)puVar22 = uVar15;
          puVar9[2] = uVar16;
          *(undefined8 *)puVar9 = uVar14;
          if (*puVar9 <= *puVar18) goto LAB_109285e34;
          uStack_80 = *(undefined8 *)puVar9;
          uStack_78 = puVar9[2];
          uVar14 = *(undefined8 *)puVar18;
          puVar9[2] = param_2[-1];
          *(undefined8 *)puVar9 = uVar14;
        }
        param_2[-1] = uStack_78;
        *(undefined8 *)puVar18 = uStack_80;
      }
      else if (uVar16 < uVar5) {
        uVar14 = *(undefined8 *)puVar9;
        uVar16 = puVar9[2];
        uVar15 = *(undefined8 *)puVar18;
        puVar9[2] = param_2[-1];
        *(undefined8 *)puVar9 = uVar15;
        param_2[-1] = uVar16;
        *(undefined8 *)puVar18 = uVar14;
        if (*puVar9 < *puVar22) {
          uVar14 = *(undefined8 *)puVar22;
          uVar16 = puVar22[2];
          uVar15 = *(undefined8 *)puVar9;
          puVar22[2] = puVar9[2];
          *(undefined8 *)puVar22 = uVar15;
          puVar9[2] = uVar16;
          *(undefined8 *)puVar9 = uVar14;
        }
      }
    }
    else {
      uVar5 = *puVar22;
      if (uVar5 < *puVar9) {
        if (uVar16 < uVar5) {
          uStack_80 = *(undefined8 *)puVar9;
          uStack_78 = puVar9[2];
          uVar14 = *(undefined8 *)puVar18;
          puVar9[2] = param_2[-1];
          *(undefined8 *)puVar9 = uVar14;
        }
        else {
          uVar14 = *(undefined8 *)puVar9;
          uVar16 = puVar9[2];
          uVar15 = *(undefined8 *)puVar22;
          puVar9[2] = puVar22[2];
          *(undefined8 *)puVar9 = uVar15;
          puVar22[2] = uVar16;
          *(undefined8 *)puVar22 = uVar14;
          if (*puVar22 <= *puVar18) goto LAB_109285a10;
          uStack_80 = *(undefined8 *)puVar22;
          uStack_78 = puVar22[2];
          uVar14 = *(undefined8 *)puVar18;
          puVar22[2] = param_2[-1];
          *(undefined8 *)puVar22 = uVar14;
        }
        param_2[-1] = uStack_78;
        *(undefined8 *)puVar18 = uStack_80;
      }
      else if (uVar16 < uVar5) {
        uVar14 = *(undefined8 *)puVar22;
        uVar16 = puVar22[2];
        uVar15 = *(undefined8 *)puVar18;
        puVar22[2] = param_2[-1];
        *(undefined8 *)puVar22 = uVar15;
        param_2[-1] = uVar16;
        *(undefined8 *)puVar18 = uVar14;
        if (*puVar22 < *puVar9) {
          uVar14 = *(undefined8 *)puVar9;
          uVar16 = puVar9[2];
          uVar15 = *(undefined8 *)puVar22;
          puVar9[2] = puVar22[2];
          *(undefined8 *)puVar9 = uVar15;
          puVar22[2] = uVar16;
          *(undefined8 *)puVar22 = uVar14;
        }
      }
LAB_109285a10:
      puVar11 = puVar9 + 3;
      puVar10 = puVar22 + -3;
      uVar16 = *puVar10;
      if (uVar16 < *puVar11) {
        if (*puVar27 < uVar16) {
          uVar14 = *(undefined8 *)puVar11;
          uVar16 = puVar9[5];
          uVar5 = param_2[-4];
          *(undefined8 *)puVar11 = *(undefined8 *)puVar27;
          puVar9[5] = uVar5;
          param_2[-4] = uVar16;
          *(undefined8 *)puVar27 = uVar14;
        }
        else {
          uVar14 = *(undefined8 *)puVar11;
          uVar16 = puVar9[5];
          uVar5 = puVar22[-1];
          *(undefined8 *)puVar11 = *(undefined8 *)puVar10;
          puVar9[5] = uVar5;
          puVar22[-1] = uVar16;
          *(undefined8 *)puVar10 = uVar14;
          if (*puVar27 < (uint)uVar14) {
            uVar14 = *(undefined8 *)puVar10;
            uVar16 = puVar22[-1];
            uVar15 = *(undefined8 *)puVar27;
            puVar22[-1] = param_2[-4];
            *(undefined8 *)puVar10 = uVar15;
            param_2[-4] = uVar16;
            *(undefined8 *)puVar27 = uVar14;
          }
        }
      }
      else if (*puVar27 < uVar16) {
        uVar14 = *(undefined8 *)puVar10;
        uVar16 = puVar22[-1];
        uVar15 = *(undefined8 *)puVar27;
        puVar22[-1] = param_2[-4];
        *(undefined8 *)puVar10 = uVar15;
        param_2[-4] = uVar16;
        *(undefined8 *)puVar27 = uVar14;
        if (*puVar10 < *puVar11) {
          uVar14 = *(undefined8 *)puVar11;
          uVar16 = puVar9[5];
          uVar5 = puVar22[-1];
          *(undefined8 *)puVar11 = *(undefined8 *)puVar10;
          puVar9[5] = uVar5;
          puVar22[-1] = uVar16;
          *(undefined8 *)puVar10 = uVar14;
        }
      }
      puVar20 = puVar9 + 6;
      puVar11 = puVar22 + 3;
      uVar16 = *puVar11;
      if (uVar16 < *puVar20) {
        if (*puVar26 < uVar16) {
          uVar14 = *(undefined8 *)puVar20;
          uVar16 = puVar9[8];
          uVar5 = param_2[-7];
          *(undefined8 *)puVar20 = *(undefined8 *)puVar26;
          puVar9[8] = uVar5;
          param_2[-7] = uVar16;
          *(undefined8 *)puVar26 = uVar14;
        }
        else {
          uVar14 = *(undefined8 *)puVar20;
          uVar16 = puVar9[8];
          uVar5 = puVar22[5];
          *(undefined8 *)puVar20 = *(undefined8 *)puVar11;
          puVar9[8] = uVar5;
          puVar22[5] = uVar16;
          *(undefined8 *)puVar11 = uVar14;
          if (*puVar26 < (uint)uVar14) {
            uVar14 = *(undefined8 *)puVar11;
            uVar16 = puVar22[5];
            uVar15 = *(undefined8 *)puVar26;
            puVar22[5] = param_2[-7];
            *(undefined8 *)puVar11 = uVar15;
            param_2[-7] = uVar16;
            *(undefined8 *)puVar26 = uVar14;
          }
        }
      }
      else if (*puVar26 < uVar16) {
        uVar14 = *(undefined8 *)puVar11;
        uVar16 = puVar22[5];
        uVar15 = *(undefined8 *)puVar26;
        puVar22[5] = param_2[-7];
        *(undefined8 *)puVar11 = uVar15;
        param_2[-7] = uVar16;
        *(undefined8 *)puVar26 = uVar14;
        if (*puVar11 < *puVar20) {
          uVar14 = *(undefined8 *)puVar20;
          uVar16 = puVar9[8];
          uVar5 = puVar22[5];
          *(undefined8 *)puVar20 = *(undefined8 *)puVar11;
          puVar9[8] = uVar5;
          puVar22[5] = uVar16;
          *(undefined8 *)puVar11 = uVar14;
        }
      }
      uVar16 = *puVar22;
      if (uVar16 < puVar22[-3]) {
        if (puVar22[3] < uVar16) {
          uStack_80 = *(undefined8 *)puVar10;
          uStack_78 = puVar22[-1];
          *(undefined8 *)puVar10 = *(undefined8 *)puVar11;
          puVar22[-1] = puVar22[5];
        }
        else {
          uVar14 = *(undefined8 *)puVar10;
          uVar16 = puVar22[-1];
          *(undefined8 *)puVar10 = *(undefined8 *)puVar22;
          puVar22[-1] = puVar22[2];
          puVar22[2] = uVar16;
          *(undefined8 *)puVar22 = uVar14;
          if ((uint)uVar14 <= puVar22[3]) goto LAB_109285e04;
          uStack_80 = *(undefined8 *)puVar22;
          uStack_78 = puVar22[2];
          *(undefined8 *)puVar22 = *(undefined8 *)puVar11;
          puVar22[2] = puVar22[5];
        }
        puVar22[5] = uStack_78;
        *(undefined8 *)puVar11 = uStack_80;
      }
      else if (puVar22[3] < uVar16) {
        uVar14 = *(undefined8 *)puVar22;
        uVar16 = puVar22[2];
        *(undefined8 *)puVar22 = *(undefined8 *)puVar11;
        puVar22[2] = puVar22[5];
        puVar22[5] = uVar16;
        *(undefined8 *)puVar11 = uVar14;
        if (*puVar22 < puVar22[-3]) {
          uVar14 = *(undefined8 *)puVar10;
          uVar16 = puVar22[-1];
          *(undefined8 *)puVar10 = *(undefined8 *)puVar22;
          puVar22[-1] = puVar22[2];
          puVar22[2] = uVar16;
          *(undefined8 *)puVar22 = uVar14;
        }
      }
LAB_109285e04:
      uVar14 = *(undefined8 *)puVar9;
      uVar16 = puVar9[2];
      uVar15 = *(undefined8 *)puVar22;
      puVar9[2] = puVar22[2];
      *(undefined8 *)puVar9 = uVar15;
      puVar22[2] = uVar16;
      *(undefined8 *)puVar22 = uVar14;
    }
LAB_109285e34:
    param_3 = param_3 + -1;
    uVar16 = *puVar9;
    if (((param_4 & 1) != 0) || (puVar9[-3] < uVar16)) {
      lVar19 = 0;
      uVar14 = *(undefined8 *)(puVar9 + 1);
      do {
        lVar8 = lVar19 + 0xc;
        lVar19 = lVar19 + 0xc;
      } while (*(uint *)((long)puVar9 + lVar8) < uVar16);
      puVar10 = (uint *)((long)puVar9 + lVar19);
      puVar11 = param_2;
      if (lVar19 == 0xc) {
        do {
          if (puVar11 <= puVar10) break;
          puVar11 = puVar11 + -3;
        } while (uVar16 <= *puVar11);
      }
      else {
        do {
          puVar11 = puVar11 + -3;
        } while (uVar16 <= *puVar11);
      }
      puVar20 = puVar11;
      puVar22 = puVar10;
      if (puVar10 < puVar11) {
        do {
          uVar15 = *(undefined8 *)puVar22;
          uVar5 = puVar22[2];
          uVar23 = *(undefined8 *)puVar20;
          puVar22[2] = puVar20[2];
          *(undefined8 *)puVar22 = uVar23;
          puVar20[2] = uVar5;
          *(undefined8 *)puVar20 = uVar15;
          do {
            puVar22 = puVar22 + 3;
          } while (*puVar22 < uVar16);
          do {
            puVar20 = puVar20 + -3;
          } while (uVar16 <= *puVar20);
        } while (puVar22 < puVar20);
      }
      puVar20 = puVar22 + -3;
      if (puVar20 != puVar9) {
        uVar15 = *(undefined8 *)puVar20;
        puVar9[2] = puVar22[-1];
        *(undefined8 *)puVar9 = uVar15;
      }
      puVar22[-3] = uVar16;
      *(undefined8 *)(puVar22 + -2) = uVar14;
      if (puVar11 <= puVar10) {
        puVar10 = puVar9;
        FUN_1092868e8(puVar9,puVar20);
        puVar11 = puVar22;
        FUN_1092868e8(puVar22,param_2);
        if ((int)puVar11 != 0) goto LAB_10928604c;
        if (((ulong)puVar10 & 1) != 0) goto LAB_1092857c4;
      }
      FUN_109285784(puVar9,puVar20,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_1092857c4;
    }
    puVar22 = puVar9;
    if (uVar16 < *puVar18) {
      do {
        puVar22 = puVar22 + 3;
      } while (*puVar22 <= uVar16);
    }
    else {
      do {
        puVar22 = puVar22 + 3;
        if (param_2 <= puVar22) break;
      } while (*puVar22 <= uVar16);
    }
    puVar10 = param_2;
    if (puVar22 < param_2) {
      do {
        puVar10 = puVar10 + -3;
      } while (uVar16 < *puVar10);
    }
    uVar14 = *(undefined8 *)(puVar9 + 1);
    while (puVar22 < puVar10) {
      uVar15 = *(undefined8 *)puVar22;
      uVar5 = puVar22[2];
      uVar23 = *(undefined8 *)puVar10;
      puVar22[2] = puVar10[2];
      *(undefined8 *)puVar22 = uVar23;
      puVar10[2] = uVar5;
      *(undefined8 *)puVar10 = uVar15;
      do {
        puVar22 = puVar22 + 3;
      } while (*puVar22 <= uVar16);
      do {
        puVar10 = puVar10 + -3;
      } while (uVar16 < *puVar10);
    }
    if (puVar22 + -3 != puVar9) {
      uVar15 = *(undefined8 *)(puVar22 + -3);
      puVar9[2] = puVar22[-1];
      *(undefined8 *)puVar9 = uVar15;
    }
    param_4 = 0;
    puVar22[-3] = uVar16;
    *(undefined8 *)(puVar22 + -2) = uVar14;
  } while( true );
LAB_109286168:
  puVar26 = puVar22;
  uVar16 = puVar18[3];
  if (uVar16 < *puVar18) {
    uVar14 = *(undefined8 *)(puVar18 + 4);
    lVar8 = lVar19;
    do {
      lVar21 = lVar8;
      puVar2 = (undefined8 *)((long)puVar9 + lVar21);
      *(undefined8 *)((long)puVar2 + 0xc) = *puVar2;
      *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)(puVar2 + 1);
      puVar22 = puVar9;
      if (lVar21 == 0) goto LAB_1092861bc;
      lVar8 = lVar21 + -0xc;
    } while (uVar16 < *(uint *)((long)puVar2 + -0xc));
    puVar22 = (uint *)((long)puVar9 + lVar21);
LAB_1092861bc:
    *puVar22 = uVar16;
    *(undefined8 *)(puVar22 + 1) = uVar14;
  }
  puVar22 = puVar26 + 3;
  lVar19 = lVar19 + 0xc;
  puVar18 = puVar26;
  if (puVar22 == param_2) {
    return;
  }
  goto LAB_109286168;
LAB_1092861f0:
  do {
    if ((long)uVar24 <= (long)uVar17) {
      uVar3 = uVar24 << 1 | 1;
      puVar22 = puVar9 + uVar3 * 3;
      uVar25 = uVar24 * 2 + 2;
      if ((long)uVar25 < (long)uVar12) {
        uVar5 = *puVar22;
        uVar6 = puVar22[3];
        uVar16 = uVar5;
        if (uVar5 <= uVar6) {
          uVar16 = uVar6;
        }
        puVar18 = puVar22 + 3;
        if (uVar6 <= uVar5) {
          puVar18 = puVar22;
          uVar25 = uVar3;
        }
      }
      else {
        uVar16 = *puVar22;
        puVar18 = puVar22;
        uVar25 = uVar3;
      }
      puVar22 = puVar9 + uVar24 * 3;
      uVar5 = *puVar22;
      if (uVar5 <= uVar16) {
        uVar14 = *(undefined8 *)(puVar22 + 1);
        do {
          puVar26 = puVar18;
          uVar15 = *(undefined8 *)puVar26;
          puVar22[2] = puVar26[2];
          *(undefined8 *)puVar22 = uVar15;
          if ((long)uVar17 < (long)uVar25) break;
          uVar3 = uVar25 << 1 | 1;
          puVar22 = puVar9 + uVar3 * 3;
          uVar25 = uVar25 * 2 + 2;
          if ((long)uVar25 < (long)uVar12) {
            uVar6 = *puVar22;
            uVar7 = puVar22[3];
            uVar16 = uVar6;
            if (uVar6 <= uVar7) {
              uVar16 = uVar7;
            }
            puVar18 = puVar22 + 3;
            if (uVar7 <= uVar6) {
              puVar18 = puVar22;
              uVar25 = uVar3;
            }
          }
          else {
            uVar16 = *puVar22;
            puVar18 = puVar22;
            uVar25 = uVar3;
          }
          puVar22 = puVar26;
        } while (uVar5 <= uVar16);
        *puVar26 = uVar5;
        *(undefined8 *)(puVar26 + 1) = uVar14;
      }
    }
    bVar4 = uVar24 != 0;
    uVar24 = uVar24 - 1;
  } while (bVar4);
  lVar19 = (uVar13 >> 2) * -0x5555555555555555;
  do {
    uVar14 = *(undefined8 *)puVar9;
    uVar16 = puVar9[2];
    puVar22 = puVar9;
    uVar12 = 0;
    do {
      uVar24 = uVar12 << 1 | 1;
      uVar13 = uVar12 * 2 + 2;
      puVar18 = puVar22 + uVar12 * 3 + 3;
      uVar17 = uVar24;
      if (((long)uVar13 < lVar19) &&
         (puVar18 = puVar22 + uVar12 * 3 + 6, uVar17 = uVar13,
         puVar22[uVar12 * 3 + 6] <= puVar22[uVar12 * 3 + 3])) {
        puVar18 = puVar22 + uVar12 * 3 + 3;
        uVar17 = uVar24;
      }
      uVar15 = *(undefined8 *)puVar18;
      puVar22[2] = puVar18[2];
      *(undefined8 *)puVar22 = uVar15;
      puVar22 = puVar18;
      uVar12 = uVar17;
    } while ((long)uVar17 <= (long)(lVar19 - 2U >> 1));
    puVar22 = param_2 + -3;
    if (puVar18 == puVar22) {
      puVar18[2] = uVar16;
      *(undefined8 *)puVar18 = uVar14;
    }
    else {
      uVar15 = *(undefined8 *)puVar22;
      puVar18[2] = param_2[-1];
      *(undefined8 *)puVar18 = uVar15;
      param_2[-1] = uVar16;
      *(undefined8 *)puVar22 = uVar14;
      puVar1 = (undefined *)((long)puVar18 + (0xc - (long)puVar9));
      if (0xc < (long)puVar1) {
        uVar12 = ((ulong)puVar1 >> 2) * -0x5555555555555555 - 2 >> 1;
        uVar16 = *puVar18;
        if (puVar9[uVar12 * 3] < uVar16) {
          uVar14 = *(undefined8 *)(puVar18 + 1);
          puVar26 = puVar9 + uVar12 * 3;
          do {
            puVar27 = puVar26;
            uVar15 = *(undefined8 *)puVar27;
            puVar18[2] = puVar27[2];
            *(undefined8 *)puVar18 = uVar15;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1 >> 1;
            puVar18 = puVar27;
            puVar26 = puVar9 + uVar12 * 3;
          } while (puVar9[uVar12 * 3] < uVar16);
          *puVar27 = uVar16;
          *(undefined8 *)(puVar27 + 1) = uVar14;
        }
      }
    }
    bVar4 = lVar19 < 3;
    lVar19 = lVar19 + -1;
    param_2 = puVar22;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_10928604c:
  param_2 = puVar20;
  if (((ulong)puVar10 & 1) != 0) {
    return;
  }
  goto LAB_1092857b4;
}



/* Entry: 109285784; end: 1092866a7;  */

void FUN_109285784(uint *param_1,uint *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  uint *puVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined8 uStack_70;
  uint uStack_68;
  
LAB_1092857b4:
  puVar16 = param_2 + -3;
  puVar25 = param_2 + -6;
  puVar24 = param_2 + -9;
  puVar20 = param_1;
LAB_1092857c4:
  do {
    param_1 = puVar20;
    uVar11 = (long)param_2 - (long)param_1;
    uVar10 = ((long)uVar11 >> 2) * -0x5555555555555555;
    if (uVar10 - 2 == 0 || (long)uVar10 < 2) {
      if (uVar10 < 2) {
        return;
      }
      if (uVar10 == 2) {
        if (*param_1 <= param_2[-3]) {
          return;
        }
LAB_1092860c0:
        uVar12 = *(undefined8 *)param_1;
        uVar14 = param_1[2];
        uVar13 = *(undefined8 *)(param_2 + -3);
        param_1[2] = param_2[-1];
        *(undefined8 *)param_1 = uVar13;
        param_2[-1] = uVar14;
        *(undefined8 *)(param_2 + -3) = uVar12;
        return;
      }
    }
    else {
      if (uVar10 == 3) {
        puVar20 = param_1 + 3;
        uVar14 = *puVar20;
        puVar16 = param_2 + -3;
        if (uVar14 < *param_1) {
          if (uVar14 <= *puVar16) {
            uVar12 = *(undefined8 *)param_1;
            uVar14 = param_1[2];
            *(undefined8 *)param_1 = *(undefined8 *)puVar20;
            param_1[2] = param_1[5];
            *(undefined8 *)puVar20 = uVar12;
            param_1[5] = uVar14;
            if (param_1[3] <= *puVar16) {
              return;
            }
            uVar12 = *(undefined8 *)puVar20;
            uVar14 = param_1[5];
            uVar4 = param_2[-1];
            *(undefined8 *)puVar20 = *(undefined8 *)puVar16;
            param_1[5] = uVar4;
            param_2[-1] = uVar14;
            *(undefined8 *)puVar16 = uVar12;
            return;
          }
          goto LAB_1092860c0;
        }
        if (uVar14 <= *puVar16) {
          return;
        }
        uVar12 = *(undefined8 *)puVar20;
        uVar14 = param_1[5];
        uVar4 = param_2[-1];
        *(undefined8 *)puVar20 = *(undefined8 *)puVar16;
        param_1[5] = uVar4;
        param_2[-1] = uVar14;
        *(undefined8 *)puVar16 = uVar12;
        goto LAB_109286648;
      }
      if (uVar10 == 4) {
        puVar20 = param_1 + 3;
        uVar14 = *puVar20;
        puVar24 = param_1 + 6;
        uVar4 = *puVar24;
        if (uVar14 < *param_1) {
          if (uVar4 < uVar14) {
            uVar12 = *(undefined8 *)param_1;
            uVar14 = param_1[2];
            *(undefined8 *)param_1 = *(undefined8 *)puVar24;
            param_1[2] = param_1[8];
            *(undefined8 *)puVar24 = uVar12;
          }
          else {
            uVar12 = *(undefined8 *)param_1;
            uVar14 = param_1[2];
            *(undefined8 *)param_1 = *(undefined8 *)puVar20;
            param_1[2] = param_1[5];
            *(undefined8 *)puVar20 = uVar12;
            param_1[5] = uVar14;
            if (param_1[3] <= uVar4) goto LAB_1092865e0;
            uVar14 = param_1[5];
            uVar12 = *(undefined8 *)puVar20;
            *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
            param_1[5] = param_1[8];
            *(undefined8 *)puVar24 = uVar12;
          }
          param_1[8] = uVar14;
        }
        else if (uVar4 < uVar14) {
          uVar14 = param_1[5];
          uVar12 = *(undefined8 *)puVar20;
          *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
          param_1[5] = param_1[8];
          *(undefined8 *)puVar24 = uVar12;
          param_1[8] = uVar14;
          if (param_1[3] < *param_1) {
            uVar12 = *(undefined8 *)param_1;
            uVar14 = param_1[2];
            *(undefined8 *)param_1 = *(undefined8 *)puVar20;
            param_1[2] = param_1[5];
            *(undefined8 *)puVar20 = uVar12;
            param_1[5] = uVar14;
          }
        }
LAB_1092865e0:
        if (*puVar24 <= *puVar16) {
          return;
        }
        uVar12 = *(undefined8 *)puVar24;
        uVar14 = param_1[8];
        uVar4 = param_2[-1];
        *(undefined8 *)puVar24 = *(undefined8 *)puVar16;
        param_1[8] = uVar4;
        param_2[-1] = uVar14;
        *(undefined8 *)puVar16 = uVar12;
        if (*puVar20 <= *puVar24) {
          return;
        }
        uVar14 = param_1[5];
        uVar12 = *(undefined8 *)puVar20;
        *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
        param_1[5] = param_1[8];
        *(undefined8 *)puVar24 = uVar12;
        param_1[8] = uVar14;
LAB_109286648:
        puVar20 = param_1 + 3;
        if (*param_1 <= *puVar20) {
          return;
        }
        uVar12 = *(undefined8 *)param_1;
        uVar14 = param_1[2];
        *(undefined8 *)param_1 = *(undefined8 *)puVar20;
        param_1[2] = param_1[5];
        *(undefined8 *)puVar20 = uVar12;
        param_1[5] = uVar14;
        return;
      }
      if (uVar10 == 5) {
        puVar20 = param_1 + 3;
        puVar24 = param_1 + 6;
        puVar25 = param_1 + 9;
        uVar14 = *puVar20;
        if (uVar14 < *param_1) {
          if (*puVar24 < uVar14) {
            uVar14 = param_1[2];
            uVar12 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)puVar24;
            param_1[2] = param_1[8];
          }
          else {
            uVar14 = param_1[2];
            uVar12 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)puVar20;
            param_1[2] = param_1[5];
            *(undefined8 *)puVar20 = uVar12;
            param_1[5] = uVar14;
            if ((uint)uVar12 <= *puVar24) goto LAB_109286790;
            uVar14 = param_1[5];
            uVar12 = *(undefined8 *)puVar20;
            *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
            param_1[5] = param_1[8];
          }
          *(undefined8 *)puVar24 = uVar12;
          param_1[8] = uVar14;
        }
        else if (*puVar24 < uVar14) {
          uVar14 = param_1[5];
          uVar12 = *(undefined8 *)puVar20;
          *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
          param_1[5] = param_1[8];
          *(undefined8 *)puVar24 = uVar12;
          param_1[8] = uVar14;
          if (*puVar20 < *param_1) {
            uVar14 = param_1[2];
            uVar12 = *(undefined8 *)param_1;
            *(undefined8 *)param_1 = *(undefined8 *)puVar20;
            param_1[2] = param_1[5];
            *(undefined8 *)puVar20 = uVar12;
            param_1[5] = uVar14;
          }
        }
LAB_109286790:
        if (*puVar25 < *puVar24) {
          uVar14 = param_1[8];
          uVar12 = *(undefined8 *)puVar24;
          *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
          param_1[8] = param_1[0xb];
          *(undefined8 *)puVar25 = uVar12;
          param_1[0xb] = uVar14;
          if (*puVar24 < *puVar20) {
            uVar14 = param_1[5];
            uVar12 = *(undefined8 *)puVar20;
            *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
            param_1[5] = param_1[8];
            *(undefined8 *)puVar24 = uVar12;
            param_1[8] = uVar14;
            if (*puVar20 < *param_1) {
              uVar14 = param_1[2];
              uVar12 = *(undefined8 *)param_1;
              *(undefined8 *)param_1 = *(undefined8 *)puVar20;
              param_1[2] = param_1[5];
              *(undefined8 *)puVar20 = uVar12;
              param_1[5] = uVar14;
            }
          }
        }
        if (*puVar16 < *puVar25) {
          uVar14 = param_1[0xb];
          uVar12 = *(undefined8 *)puVar25;
          uVar4 = param_2[-1];
          *(undefined8 *)puVar25 = *(undefined8 *)puVar16;
          param_1[0xb] = uVar4;
          *(undefined8 *)puVar16 = uVar12;
          param_2[-1] = uVar14;
          if (*puVar25 < *puVar24) {
            uVar14 = param_1[8];
            uVar12 = *(undefined8 *)puVar24;
            *(undefined8 *)puVar24 = *(undefined8 *)puVar25;
            param_1[8] = param_1[0xb];
            *(undefined8 *)puVar25 = uVar12;
            param_1[0xb] = uVar14;
            if (*puVar24 < *puVar20) {
              uVar14 = param_1[5];
              uVar12 = *(undefined8 *)puVar20;
              *(undefined8 *)puVar20 = *(undefined8 *)puVar24;
              param_1[5] = param_1[8];
              *(undefined8 *)puVar24 = uVar12;
              param_1[8] = uVar14;
              if (*puVar20 < *param_1) {
                uVar14 = param_1[2];
                uVar12 = *(undefined8 *)param_1;
                *(undefined8 *)param_1 = *(undefined8 *)puVar20;
                param_1[2] = param_1[5];
                *(undefined8 *)puVar20 = uVar12;
                param_1[5] = uVar14;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar11 < 0x120) {
      puVar20 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar20 == param_2) {
          return;
        }
        do {
          puVar16 = puVar20;
          uVar14 = param_1[3];
          if (uVar14 < *param_1) {
            uVar12 = *(undefined8 *)(param_1 + 4);
            puVar20 = puVar16;
            do {
              puVar24 = puVar20;
              puVar20 = puVar24 + -3;
              *(undefined8 *)puVar24 = *(undefined8 *)puVar20;
              puVar24[2] = puVar24[-1];
            } while (uVar14 < puVar24[-6]);
            *puVar20 = uVar14;
            *(undefined8 *)(puVar24 + -2) = uVar12;
          }
          puVar20 = puVar16 + 3;
          param_1 = puVar16;
        } while (puVar16 + 3 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar20 == param_2) {
        return;
      }
      lVar17 = 0;
      puVar16 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar15 = uVar10 - 2 >> 1;
      uVar22 = uVar15;
      goto LAB_1092861f0;
    }
    puVar20 = param_1 + (uVar10 >> 1) * 3;
    uVar14 = *puVar16;
    if (uVar11 < 0x601) {
      uVar4 = *param_1;
      if (uVar4 < *puVar20) {
        if (uVar14 < uVar4) {
          uStack_70 = *(undefined8 *)puVar20;
          uStack_68 = puVar20[2];
          uVar12 = *(undefined8 *)puVar16;
          puVar20[2] = param_2[-1];
          *(undefined8 *)puVar20 = uVar12;
        }
        else {
          uVar12 = *(undefined8 *)puVar20;
          uVar14 = puVar20[2];
          uVar13 = *(undefined8 *)param_1;
          puVar20[2] = param_1[2];
          *(undefined8 *)puVar20 = uVar13;
          param_1[2] = uVar14;
          *(undefined8 *)param_1 = uVar12;
          if (*param_1 <= *puVar16) goto LAB_109285e34;
          uStack_70 = *(undefined8 *)param_1;
          uStack_68 = param_1[2];
          uVar12 = *(undefined8 *)puVar16;
          param_1[2] = param_2[-1];
          *(undefined8 *)param_1 = uVar12;
        }
        param_2[-1] = uStack_68;
        *(undefined8 *)puVar16 = uStack_70;
      }
      else if (uVar14 < uVar4) {
        uVar12 = *(undefined8 *)param_1;
        uVar14 = param_1[2];
        uVar13 = *(undefined8 *)puVar16;
        param_1[2] = param_2[-1];
        *(undefined8 *)param_1 = uVar13;
        param_2[-1] = uVar14;
        *(undefined8 *)puVar16 = uVar12;
        if (*param_1 < *puVar20) {
          uVar12 = *(undefined8 *)puVar20;
          uVar14 = puVar20[2];
          uVar13 = *(undefined8 *)param_1;
          puVar20[2] = param_1[2];
          *(undefined8 *)puVar20 = uVar13;
          param_1[2] = uVar14;
          *(undefined8 *)param_1 = uVar12;
        }
      }
    }
    else {
      uVar4 = *puVar20;
      if (uVar4 < *param_1) {
        if (uVar14 < uVar4) {
          uStack_70 = *(undefined8 *)param_1;
          uStack_68 = param_1[2];
          uVar12 = *(undefined8 *)puVar16;
          param_1[2] = param_2[-1];
          *(undefined8 *)param_1 = uVar12;
        }
        else {
          uVar12 = *(undefined8 *)param_1;
          uVar14 = param_1[2];
          uVar13 = *(undefined8 *)puVar20;
          param_1[2] = puVar20[2];
          *(undefined8 *)param_1 = uVar13;
          puVar20[2] = uVar14;
          *(undefined8 *)puVar20 = uVar12;
          if (*puVar20 <= *puVar16) goto LAB_109285a10;
          uStack_70 = *(undefined8 *)puVar20;
          uStack_68 = puVar20[2];
          uVar12 = *(undefined8 *)puVar16;
          puVar20[2] = param_2[-1];
          *(undefined8 *)puVar20 = uVar12;
        }
        param_2[-1] = uStack_68;
        *(undefined8 *)puVar16 = uStack_70;
      }
      else if (uVar14 < uVar4) {
        uVar12 = *(undefined8 *)puVar20;
        uVar14 = puVar20[2];
        uVar13 = *(undefined8 *)puVar16;
        puVar20[2] = param_2[-1];
        *(undefined8 *)puVar20 = uVar13;
        param_2[-1] = uVar14;
        *(undefined8 *)puVar16 = uVar12;
        if (*puVar20 < *param_1) {
          uVar12 = *(undefined8 *)param_1;
          uVar14 = param_1[2];
          uVar13 = *(undefined8 *)puVar20;
          param_1[2] = puVar20[2];
          *(undefined8 *)param_1 = uVar13;
          puVar20[2] = uVar14;
          *(undefined8 *)puVar20 = uVar12;
        }
      }
LAB_109285a10:
      puVar9 = param_1 + 3;
      puVar8 = puVar20 + -3;
      uVar14 = *puVar8;
      if (uVar14 < *puVar9) {
        if (*puVar25 < uVar14) {
          uVar12 = *(undefined8 *)puVar9;
          uVar14 = param_1[5];
          uVar4 = param_2[-4];
          *(undefined8 *)puVar9 = *(undefined8 *)puVar25;
          param_1[5] = uVar4;
          param_2[-4] = uVar14;
          *(undefined8 *)puVar25 = uVar12;
        }
        else {
          uVar12 = *(undefined8 *)puVar9;
          uVar14 = param_1[5];
          uVar4 = puVar20[-1];
          *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
          param_1[5] = uVar4;
          puVar20[-1] = uVar14;
          *(undefined8 *)puVar8 = uVar12;
          if (*puVar25 < (uint)uVar12) {
            uVar12 = *(undefined8 *)puVar8;
            uVar14 = puVar20[-1];
            uVar13 = *(undefined8 *)puVar25;
            puVar20[-1] = param_2[-4];
            *(undefined8 *)puVar8 = uVar13;
            param_2[-4] = uVar14;
            *(undefined8 *)puVar25 = uVar12;
          }
        }
      }
      else if (*puVar25 < uVar14) {
        uVar12 = *(undefined8 *)puVar8;
        uVar14 = puVar20[-1];
        uVar13 = *(undefined8 *)puVar25;
        puVar20[-1] = param_2[-4];
        *(undefined8 *)puVar8 = uVar13;
        param_2[-4] = uVar14;
        *(undefined8 *)puVar25 = uVar12;
        if (*puVar8 < *puVar9) {
          uVar12 = *(undefined8 *)puVar9;
          uVar14 = param_1[5];
          uVar4 = puVar20[-1];
          *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
          param_1[5] = uVar4;
          puVar20[-1] = uVar14;
          *(undefined8 *)puVar8 = uVar12;
        }
      }
      puVar18 = param_1 + 6;
      puVar9 = puVar20 + 3;
      uVar14 = *puVar9;
      if (uVar14 < *puVar18) {
        if (*puVar24 < uVar14) {
          uVar12 = *(undefined8 *)puVar18;
          uVar14 = param_1[8];
          uVar4 = param_2[-7];
          *(undefined8 *)puVar18 = *(undefined8 *)puVar24;
          param_1[8] = uVar4;
          param_2[-7] = uVar14;
          *(undefined8 *)puVar24 = uVar12;
        }
        else {
          uVar12 = *(undefined8 *)puVar18;
          uVar14 = param_1[8];
          uVar4 = puVar20[5];
          *(undefined8 *)puVar18 = *(undefined8 *)puVar9;
          param_1[8] = uVar4;
          puVar20[5] = uVar14;
          *(undefined8 *)puVar9 = uVar12;
          if (*puVar24 < (uint)uVar12) {
            uVar12 = *(undefined8 *)puVar9;
            uVar14 = puVar20[5];
            uVar13 = *(undefined8 *)puVar24;
            puVar20[5] = param_2[-7];
            *(undefined8 *)puVar9 = uVar13;
            param_2[-7] = uVar14;
            *(undefined8 *)puVar24 = uVar12;
          }
        }
      }
      else if (*puVar24 < uVar14) {
        uVar12 = *(undefined8 *)puVar9;
        uVar14 = puVar20[5];
        uVar13 = *(undefined8 *)puVar24;
        puVar20[5] = param_2[-7];
        *(undefined8 *)puVar9 = uVar13;
        param_2[-7] = uVar14;
        *(undefined8 *)puVar24 = uVar12;
        if (*puVar9 < *puVar18) {
          uVar12 = *(undefined8 *)puVar18;
          uVar14 = param_1[8];
          uVar4 = puVar20[5];
          *(undefined8 *)puVar18 = *(undefined8 *)puVar9;
          param_1[8] = uVar4;
          puVar20[5] = uVar14;
          *(undefined8 *)puVar9 = uVar12;
        }
      }
      uVar14 = *puVar20;
      if (uVar14 < puVar20[-3]) {
        if (puVar20[3] < uVar14) {
          uStack_70 = *(undefined8 *)puVar8;
          uStack_68 = puVar20[-1];
          *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
          puVar20[-1] = puVar20[5];
        }
        else {
          uVar12 = *(undefined8 *)puVar8;
          uVar14 = puVar20[-1];
          *(undefined8 *)puVar8 = *(undefined8 *)puVar20;
          puVar20[-1] = puVar20[2];
          puVar20[2] = uVar14;
          *(undefined8 *)puVar20 = uVar12;
          if ((uint)uVar12 <= puVar20[3]) goto LAB_109285e04;
          uStack_70 = *(undefined8 *)puVar20;
          uStack_68 = puVar20[2];
          *(undefined8 *)puVar20 = *(undefined8 *)puVar9;
          puVar20[2] = puVar20[5];
        }
        puVar20[5] = uStack_68;
        *(undefined8 *)puVar9 = uStack_70;
      }
      else if (puVar20[3] < uVar14) {
        uVar12 = *(undefined8 *)puVar20;
        uVar14 = puVar20[2];
        *(undefined8 *)puVar20 = *(undefined8 *)puVar9;
        puVar20[2] = puVar20[5];
        puVar20[5] = uVar14;
        *(undefined8 *)puVar9 = uVar12;
        if (*puVar20 < puVar20[-3]) {
          uVar12 = *(undefined8 *)puVar8;
          uVar14 = puVar20[-1];
          *(undefined8 *)puVar8 = *(undefined8 *)puVar20;
          puVar20[-1] = puVar20[2];
          puVar20[2] = uVar14;
          *(undefined8 *)puVar20 = uVar12;
        }
      }
LAB_109285e04:
      uVar12 = *(undefined8 *)param_1;
      uVar14 = param_1[2];
      uVar13 = *(undefined8 *)puVar20;
      param_1[2] = puVar20[2];
      *(undefined8 *)param_1 = uVar13;
      puVar20[2] = uVar14;
      *(undefined8 *)puVar20 = uVar12;
    }
LAB_109285e34:
    param_3 = param_3 + -1;
    uVar14 = *param_1;
    if (((param_4 & 1) != 0) || (param_1[-3] < uVar14)) {
      lVar17 = 0;
      uVar12 = *(undefined8 *)(param_1 + 1);
      do {
        lVar7 = lVar17 + 0xc;
        lVar17 = lVar17 + 0xc;
      } while (*(uint *)((long)param_1 + lVar7) < uVar14);
      puVar8 = (uint *)((long)param_1 + lVar17);
      puVar9 = param_2;
      if (lVar17 == 0xc) {
        do {
          if (puVar9 <= puVar8) break;
          puVar9 = puVar9 + -3;
        } while (uVar14 <= *puVar9);
      }
      else {
        do {
          puVar9 = puVar9 + -3;
        } while (uVar14 <= *puVar9);
      }
      puVar18 = puVar9;
      puVar20 = puVar8;
      if (puVar8 < puVar9) {
        do {
          uVar13 = *(undefined8 *)puVar20;
          uVar4 = puVar20[2];
          uVar21 = *(undefined8 *)puVar18;
          puVar20[2] = puVar18[2];
          *(undefined8 *)puVar20 = uVar21;
          puVar18[2] = uVar4;
          *(undefined8 *)puVar18 = uVar13;
          do {
            puVar20 = puVar20 + 3;
          } while (*puVar20 < uVar14);
          do {
            puVar18 = puVar18 + -3;
          } while (uVar14 <= *puVar18);
        } while (puVar20 < puVar18);
      }
      puVar18 = puVar20 + -3;
      if (puVar18 != param_1) {
        uVar13 = *(undefined8 *)puVar18;
        param_1[2] = puVar20[-1];
        *(undefined8 *)param_1 = uVar13;
      }
      puVar20[-3] = uVar14;
      *(undefined8 *)(puVar20 + -2) = uVar12;
      if (puVar9 <= puVar8) {
        puVar8 = param_1;
        FUN_1092868e8(param_1,puVar18);
        puVar9 = puVar20;
        FUN_1092868e8(puVar20,param_2);
        if ((int)puVar9 != 0) goto LAB_10928604c;
        if (((ulong)puVar8 & 1) != 0) goto LAB_1092857c4;
      }
      FUN_109285784(param_1,puVar18,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_1092857c4;
    }
    puVar20 = param_1;
    if (uVar14 < *puVar16) {
      do {
        puVar20 = puVar20 + 3;
      } while (*puVar20 <= uVar14);
    }
    else {
      do {
        puVar20 = puVar20 + 3;
        if (param_2 <= puVar20) break;
      } while (*puVar20 <= uVar14);
    }
    puVar8 = param_2;
    if (puVar20 < param_2) {
      do {
        puVar8 = puVar8 + -3;
      } while (uVar14 < *puVar8);
    }
    uVar12 = *(undefined8 *)(param_1 + 1);
    while (puVar20 < puVar8) {
      uVar13 = *(undefined8 *)puVar20;
      uVar4 = puVar20[2];
      uVar21 = *(undefined8 *)puVar8;
      puVar20[2] = puVar8[2];
      *(undefined8 *)puVar20 = uVar21;
      puVar8[2] = uVar4;
      *(undefined8 *)puVar8 = uVar13;
      do {
        puVar20 = puVar20 + 3;
      } while (*puVar20 <= uVar14);
      do {
        puVar8 = puVar8 + -3;
      } while (uVar14 < *puVar8);
    }
    if (puVar20 + -3 != param_1) {
      uVar13 = *(undefined8 *)(puVar20 + -3);
      param_1[2] = puVar20[-1];
      *(undefined8 *)param_1 = uVar13;
    }
    param_4 = 0;
    puVar20[-3] = uVar14;
    *(undefined8 *)(puVar20 + -2) = uVar12;
  } while( true );
LAB_109286168:
  puVar24 = puVar20;
  uVar14 = puVar16[3];
  if (uVar14 < *puVar16) {
    uVar12 = *(undefined8 *)(puVar16 + 4);
    lVar7 = lVar17;
    do {
      lVar19 = lVar7;
      puVar1 = (undefined8 *)((long)param_1 + lVar19);
      *(undefined8 *)((long)puVar1 + 0xc) = *puVar1;
      *(undefined4 *)((long)puVar1 + 0x14) = *(undefined4 *)(puVar1 + 1);
      puVar20 = param_1;
      if (lVar19 == 0) goto LAB_1092861bc;
      lVar7 = lVar19 + -0xc;
    } while (uVar14 < *(uint *)((long)puVar1 + -0xc));
    puVar20 = (uint *)((long)param_1 + lVar19);
LAB_1092861bc:
    *puVar20 = uVar14;
    *(undefined8 *)(puVar20 + 1) = uVar12;
  }
  puVar20 = puVar24 + 3;
  lVar17 = lVar17 + 0xc;
  puVar16 = puVar24;
  if (puVar20 == param_2) {
    return;
  }
  goto LAB_109286168;
LAB_1092861f0:
  do {
    if ((long)uVar22 <= (long)uVar15) {
      uVar2 = uVar22 << 1 | 1;
      puVar20 = param_1 + uVar2 * 3;
      uVar23 = uVar22 * 2 + 2;
      if ((long)uVar23 < (long)uVar10) {
        uVar4 = *puVar20;
        uVar5 = puVar20[3];
        uVar14 = uVar4;
        if (uVar4 <= uVar5) {
          uVar14 = uVar5;
        }
        puVar16 = puVar20 + 3;
        if (uVar5 <= uVar4) {
          puVar16 = puVar20;
          uVar23 = uVar2;
        }
      }
      else {
        uVar14 = *puVar20;
        puVar16 = puVar20;
        uVar23 = uVar2;
      }
      puVar20 = param_1 + uVar22 * 3;
      uVar4 = *puVar20;
      if (uVar4 <= uVar14) {
        uVar12 = *(undefined8 *)(puVar20 + 1);
        do {
          puVar24 = puVar16;
          uVar13 = *(undefined8 *)puVar24;
          puVar20[2] = puVar24[2];
          *(undefined8 *)puVar20 = uVar13;
          if ((long)uVar15 < (long)uVar23) break;
          uVar2 = uVar23 << 1 | 1;
          puVar20 = param_1 + uVar2 * 3;
          uVar23 = uVar23 * 2 + 2;
          if ((long)uVar23 < (long)uVar10) {
            uVar5 = *puVar20;
            uVar6 = puVar20[3];
            uVar14 = uVar5;
            if (uVar5 <= uVar6) {
              uVar14 = uVar6;
            }
            puVar16 = puVar20 + 3;
            if (uVar6 <= uVar5) {
              puVar16 = puVar20;
              uVar23 = uVar2;
            }
          }
          else {
            uVar14 = *puVar20;
            puVar16 = puVar20;
            uVar23 = uVar2;
          }
          puVar20 = puVar24;
        } while (uVar4 <= uVar14);
        *puVar24 = uVar4;
        *(undefined8 *)(puVar24 + 1) = uVar12;
      }
    }
    bVar3 = uVar22 != 0;
    uVar22 = uVar22 - 1;
  } while (bVar3);
  lVar17 = (uVar11 >> 2) * -0x5555555555555555;
  do {
    uVar12 = *(undefined8 *)param_1;
    uVar14 = param_1[2];
    puVar20 = param_1;
    uVar10 = 0;
    do {
      uVar22 = uVar10 << 1 | 1;
      uVar11 = uVar10 * 2 + 2;
      puVar16 = puVar20 + uVar10 * 3 + 3;
      uVar15 = uVar22;
      if (((long)uVar11 < lVar17) &&
         (puVar16 = puVar20 + uVar10 * 3 + 6, uVar15 = uVar11,
         puVar20[uVar10 * 3 + 6] <= puVar20[uVar10 * 3 + 3])) {
        puVar16 = puVar20 + uVar10 * 3 + 3;
        uVar15 = uVar22;
      }
      uVar13 = *(undefined8 *)puVar16;
      puVar20[2] = puVar16[2];
      *(undefined8 *)puVar20 = uVar13;
      puVar20 = puVar16;
      uVar10 = uVar15;
    } while ((long)uVar15 <= (long)(lVar17 - 2U >> 1));
    puVar20 = param_2 + -3;
    if (puVar16 == puVar20) {
      puVar16[2] = uVar14;
      *(undefined8 *)puVar16 = uVar12;
    }
    else {
      uVar13 = *(undefined8 *)puVar20;
      puVar16[2] = param_2[-1];
      *(undefined8 *)puVar16 = uVar13;
      param_2[-1] = uVar14;
      *(undefined8 *)puVar20 = uVar12;
      uVar10 = (long)puVar16 + (0xc - (long)param_1);
      if (0xc < (long)uVar10) {
        uVar10 = (uVar10 >> 2) * -0x5555555555555555 - 2 >> 1;
        uVar14 = *puVar16;
        if (param_1[uVar10 * 3] < uVar14) {
          uVar12 = *(undefined8 *)(puVar16 + 1);
          puVar24 = param_1 + uVar10 * 3;
          do {
            puVar25 = puVar24;
            uVar13 = *(undefined8 *)puVar25;
            puVar16[2] = puVar25[2];
            *(undefined8 *)puVar16 = uVar13;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar16 = puVar25;
            puVar24 = param_1 + uVar10 * 3;
          } while (param_1[uVar10 * 3] < uVar14);
          *puVar25 = uVar14;
          *(undefined8 *)(puVar25 + 1) = uVar12;
        }
      }
    }
    bVar3 = lVar17 < 3;
    lVar17 = lVar17 + -1;
    param_2 = puVar20;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10928604c:
  param_2 = puVar18;
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  goto LAB_1092857b4;
}



/* Entry: 1092866a8; end: 1092868e7;  */

void FUN_1092866a8(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  if (uVar2 < *param_1) {
    if (*param_3 < uVar2) {
      uVar2 = param_1[2];
      uVar3 = *(undefined8 *)param_1;
      uVar1 = param_3[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      param_1[2] = uVar1;
    }
    else {
      uVar2 = param_1[2];
      uVar3 = *(undefined8 *)param_1;
      uVar1 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = uVar1;
      *(undefined8 *)param_2 = uVar3;
      param_2[2] = uVar2;
      if ((uint)uVar3 <= *param_3) goto LAB_109286790;
      uVar2 = param_2[2];
      uVar3 = *(undefined8 *)param_2;
      uVar1 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = uVar1;
    }
    *(undefined8 *)param_3 = uVar3;
    param_3[2] = uVar2;
  }
  else if (*param_3 < uVar2) {
    uVar2 = param_2[2];
    uVar3 = *(undefined8 *)param_2;
    uVar1 = param_3[2];
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    param_2[2] = uVar1;
    *(undefined8 *)param_3 = uVar3;
    param_3[2] = uVar2;
    if (*param_2 < *param_1) {
      uVar2 = param_1[2];
      uVar3 = *(undefined8 *)param_1;
      uVar1 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = uVar1;
      *(undefined8 *)param_2 = uVar3;
      param_2[2] = uVar2;
    }
  }
LAB_109286790:
  if (*param_4 < *param_3) {
    uVar2 = param_3[2];
    uVar3 = *(undefined8 *)param_3;
    uVar1 = param_4[2];
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    param_3[2] = uVar1;
    *(undefined8 *)param_4 = uVar3;
    param_4[2] = uVar2;
    if (*param_3 < *param_2) {
      uVar2 = param_2[2];
      uVar3 = *(undefined8 *)param_2;
      uVar1 = param_3[2];
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      param_2[2] = uVar1;
      *(undefined8 *)param_3 = uVar3;
      param_3[2] = uVar2;
      if (*param_2 < *param_1) {
        uVar2 = param_1[2];
        uVar3 = *(undefined8 *)param_1;
        uVar1 = param_2[2];
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        param_1[2] = uVar1;
        *(undefined8 *)param_2 = uVar3;
        param_2[2] = uVar2;
      }
    }
  }
  if (*param_5 < *param_4) {
    uVar2 = param_4[2];
    uVar3 = *(undefined8 *)param_4;
    uVar1 = param_5[2];
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    param_4[2] = uVar1;
    *(undefined8 *)param_5 = uVar3;
    param_5[2] = uVar2;
    if (*param_4 < *param_3) {
      uVar2 = param_3[2];
      uVar3 = *(undefined8 *)param_3;
      uVar1 = param_4[2];
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      param_3[2] = uVar1;
      *(undefined8 *)param_4 = uVar3;
      param_4[2] = uVar2;
      if (*param_3 < *param_2) {
        uVar2 = param_2[2];
        uVar3 = *(undefined8 *)param_2;
        uVar1 = param_3[2];
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        param_2[2] = uVar1;
        *(undefined8 *)param_3 = uVar3;
        param_3[2] = uVar2;
        if (*param_2 < *param_1) {
          uVar2 = param_1[2];
          uVar3 = *(undefined8 *)param_1;
          uVar1 = param_2[2];
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          param_1[2] = uVar1;
          *(undefined8 *)param_2 = uVar3;
          param_2[2] = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 1092868e8; end: 109286d43;  */

bool FUN_1092868e8(uint *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  
  uVar3 = ((long)param_2 - (long)param_1 >> 2) * -0x5555555555555555;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 != 2) {
LAB_1092869a8:
      puVar4 = param_1 + 6;
      uVar10 = *puVar4;
      puVar6 = param_1 + 3;
      uVar1 = *puVar6;
      if (uVar1 < *param_1) {
        if (uVar10 < uVar1) {
          uVar10 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar4;
          param_1[2] = param_1[8];
          *(undefined8 *)puVar4 = uVar5;
          param_1[8] = uVar10;
        }
        else {
          uVar1 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[2] = param_1[5];
          *(undefined8 *)puVar6 = uVar5;
          param_1[5] = uVar1;
          if (uVar10 < param_1[3]) {
            uVar10 = param_1[5];
            uVar5 = *(undefined8 *)puVar6;
            *(undefined8 *)puVar6 = *(undefined8 *)puVar4;
            param_1[5] = param_1[8];
            *(undefined8 *)puVar4 = uVar5;
            param_1[8] = uVar10;
          }
        }
      }
      else if (uVar10 < uVar1) {
        uVar10 = param_1[5];
        uVar5 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar6 = *(undefined8 *)puVar4;
        param_1[5] = param_1[8];
        *(undefined8 *)puVar4 = uVar5;
        param_1[8] = uVar10;
        if (*puVar6 < *param_1) {
          uVar10 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[2] = param_1[5];
          *(undefined8 *)puVar6 = uVar5;
          param_1[5] = uVar10;
        }
      }
      if (param_1 + 9 == param_2) {
        return true;
      }
      lVar8 = 0;
      iVar9 = 0;
      puVar6 = param_1 + 9;
      do {
        uVar10 = *puVar6;
        if (uVar10 < *puVar4) {
          uVar5 = *(undefined8 *)(puVar6 + 1);
          lVar2 = lVar8;
          do {
            lVar11 = lVar2;
            *(undefined8 *)((long)param_1 + lVar11 + 0x24) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x18);
            *(undefined4 *)((long)param_1 + lVar11 + 0x2c) =
                 *(undefined4 *)((long)param_1 + lVar11 + 0x20);
            puVar4 = param_1;
            if (lVar11 == -0x18) goto LAB_109286c18;
            lVar2 = lVar11 + -0xc;
          } while (uVar10 < *(uint *)((long)param_1 + lVar11 + 0xc));
          puVar4 = (uint *)((long)param_1 + lVar11 + 0x18);
LAB_109286c18:
          *puVar4 = uVar10;
          *(undefined8 *)(puVar4 + 1) = uVar5;
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 3 == param_2;
          }
        }
        puVar7 = puVar6 + 3;
        lVar8 = lVar8 + 0xc;
        puVar4 = puVar6;
        puVar6 = puVar7;
        if (puVar7 == param_2) {
          return true;
        }
      } while( true );
    }
    if (*param_1 <= param_2[-3]) {
      return true;
    }
LAB_109286984:
    uVar10 = param_1[2];
    uVar5 = *(undefined8 *)param_1;
    uVar1 = param_2[-1];
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -3);
    param_1[2] = uVar1;
    *(undefined8 *)(param_2 + -3) = uVar5;
    param_2[-1] = uVar10;
  }
  else {
    if (uVar3 == 3) {
      puVar6 = param_1 + 3;
      uVar10 = *puVar6;
      puVar4 = param_2 + -3;
      if (uVar10 < *param_1) {
        if (uVar10 <= *puVar4) {
          uVar10 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[2] = param_1[5];
          *(undefined8 *)puVar6 = uVar5;
          param_1[5] = uVar10;
          if (param_1[3] <= *puVar4) {
            return true;
          }
          uVar10 = param_1[5];
          uVar5 = *(undefined8 *)puVar6;
          uVar1 = param_2[-1];
          *(undefined8 *)puVar6 = *(undefined8 *)puVar4;
          param_1[5] = uVar1;
          *(undefined8 *)puVar4 = uVar5;
          param_2[-1] = uVar10;
          return true;
        }
        goto LAB_109286984;
      }
      if (uVar10 <= *puVar4) {
        return true;
      }
      uVar10 = param_1[5];
      uVar5 = *(undefined8 *)puVar6;
      uVar1 = param_2[-1];
      *(undefined8 *)puVar6 = *(undefined8 *)puVar4;
      param_1[5] = uVar1;
      *(undefined8 *)puVar4 = uVar5;
      param_2[-1] = uVar10;
    }
    else {
      if (uVar3 != 4) {
        if (uVar3 == 5) {
          FUN_1092866a8(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
          return true;
        }
        goto LAB_1092869a8;
      }
      puVar4 = param_1 + 3;
      uVar10 = *puVar4;
      puVar6 = param_1 + 6;
      uVar1 = *puVar6;
      puVar7 = param_2 + -3;
      if (uVar10 < *param_1) {
        if (uVar1 < uVar10) {
          uVar10 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar6;
          param_1[2] = param_1[8];
        }
        else {
          uVar10 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar4;
          param_1[2] = param_1[5];
          *(undefined8 *)puVar4 = uVar5;
          param_1[5] = uVar10;
          if (param_1[3] <= uVar1) goto LAB_109286c90;
          uVar10 = param_1[5];
          uVar5 = *(undefined8 *)puVar4;
          *(undefined8 *)puVar4 = *(undefined8 *)puVar6;
          param_1[5] = param_1[8];
        }
        *(undefined8 *)puVar6 = uVar5;
        param_1[8] = uVar10;
      }
      else if (uVar1 < uVar10) {
        uVar10 = param_1[5];
        uVar5 = *(undefined8 *)puVar4;
        *(undefined8 *)puVar4 = *(undefined8 *)puVar6;
        param_1[5] = param_1[8];
        *(undefined8 *)puVar6 = uVar5;
        param_1[8] = uVar10;
        if (*puVar4 < *param_1) {
          uVar10 = param_1[2];
          uVar5 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)puVar4;
          param_1[2] = param_1[5];
          *(undefined8 *)puVar4 = uVar5;
          param_1[5] = uVar10;
        }
      }
LAB_109286c90:
      if (*puVar6 <= *puVar7) {
        return true;
      }
      uVar10 = param_1[8];
      uVar5 = *(undefined8 *)puVar6;
      uVar1 = param_2[-1];
      *(undefined8 *)puVar6 = *(undefined8 *)puVar7;
      param_1[8] = uVar1;
      *(undefined8 *)puVar7 = uVar5;
      param_2[-1] = uVar10;
      if (*puVar4 <= *puVar6) {
        return true;
      }
      uVar10 = param_1[5];
      uVar5 = *(undefined8 *)puVar4;
      *(undefined8 *)puVar4 = *(undefined8 *)puVar6;
      param_1[5] = param_1[8];
      *(undefined8 *)puVar6 = uVar5;
      param_1[8] = uVar10;
    }
    puVar4 = param_1 + 3;
    if (*puVar4 < *param_1) {
      uVar10 = param_1[2];
      uVar5 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)puVar4;
      param_1[2] = param_1[5];
      *(undefined8 *)puVar4 = uVar5;
      param_1[5] = uVar10;
    }
  }
  return true;
}



/* Entry: 109286d44; end: 109286eaf;  */

long * FUN_109286d44(long *param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  lVar3 = param_1[2];
  plVar5 = (long *)*param_1;
  if (param_4 <= (long *)((lVar3 - (long)plVar5 >> 2) * -0x3333333333333333)) {
    plVar4 = (long *)param_1[1];
    plVar1 = param_1;
    if ((long *)(((long)plVar4 - (long)plVar5 >> 2) * -0x3333333333333333) < param_4) {
      lVar3 = param_2 + ((long)plVar4 - (long)plVar5);
      if (plVar4 != plVar5) {
        _memmove(plVar5,param_2);
        plVar4 = (long *)param_1[1];
        plVar1 = plVar5;
      }
      param_3 = param_3 - lVar3;
      if (param_3 != 0) {
        plVar1 = plVar4;
        _memmove(plVar4,lVar3,param_3);
      }
      param_3 = (long)plVar4 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        plVar1 = plVar5;
        _memmove(plVar5,param_2,param_3);
      }
      param_3 = (long)plVar5 + param_3;
    }
LAB_109286e94:
    param_1[1] = param_3;
    return plVar1;
  }
  plVar4 = param_1;
  lVar2 = param_2;
  if (plVar5 != (long *)0x0) {
    param_1[1] = (long)plVar5;
    __ZdlPv();
    lVar3 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    plVar4 = plVar5;
  }
  if (param_4 < (long *)0xccccccccccccccd) {
    plVar4 = (long *)((lVar3 >> 2) * -0x6666666666666666);
    if (plVar4 < param_4 || (long)plVar4 - (long)param_4 == 0) {
      plVar4 = param_4;
    }
    if (0x666666666666665 < (ulong)((lVar3 >> 2) * -0x3333333333333333)) {
      plVar4 = (long *)0xccccccccccccccc;
    }
    if (plVar4 < (long *)0xccccccccccccccd) {
      FUN_109279b7c();
      *param_1 = (long)plVar4;
      param_1[1] = (long)plVar4;
      param_1[2] = (long)plVar4 + lVar2 * 0x14;
      param_3 = param_3 - param_2;
      plVar1 = plVar4;
      if (param_3 != 0) {
        _memmove(plVar4,param_2,param_3);
      }
      param_3 = (long)plVar4 + param_3;
      goto LAB_109286e94;
    }
  }
  FUN_109279b68();
  plVar5 = (long *)plVar4[2];
  while (plVar5 != (long *)0x0) {
    lVar3 = *plVar5;
    if (*(char *)((long)plVar5 + 0x27) < '\0') {
      __ZdlPv(plVar5[2]);
    }
    __ZdlPv(plVar5);
    plVar5 = (long *)lVar3;
  }
  lVar3 = *plVar4;
  *plVar4 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  return plVar4;
}



/* Entry: 109286eb0; end: 109286f13;  */

long * FUN_109286eb0(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109286f14; end: 10928730f;  */

long * FUN_109286f14(long *param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x25;
  ulong uVar14;
  
  plVar8 = param_1;
  func_0x000107c31944();
  plVar13 = (long *)param_1[1];
  if (plVar13 != (long *)0x0) {
    uVar14 = (long)plVar13 - 1;
    if (((ulong)plVar13 & uVar14) == 0) {
      unaff_x25 = (long *)(uVar14 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar13 <= plVar8) {
        uVar1 = 0;
        if (plVar13 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar13;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar13);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        plVar6 = (long *)plVar5[1];
        if (plVar6 == plVar8) {
          plVar6 = param_1;
          func_0x000104c4fbc4(param_1,plVar5 + 2,param_2);
          if (((ulong)plVar6 & 1) != 0) {
            return plVar5;
          }
        }
        else {
          if (((ulong)plVar13 & uVar14) == 0) {
            plVar6 = (long *)((ulong)plVar6 & uVar14);
          }
          else if (plVar13 <= plVar6) {
            uVar1 = 0;
            if (plVar13 != (long *)0x0) {
              uVar1 = (ulong)plVar6 / (ulong)plVar13;
            }
            plVar6 = (long *)((long)plVar6 - uVar1 * (long)plVar13);
          }
          if (plVar6 != unaff_x25) break;
        }
      }
    }
  }
  plVar5 = (long *)0x30;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = (long)plVar8;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(plVar5 + 2,*param_3,param_3[1]);
  }
  else {
    lVar3 = *param_3;
    plVar5[3] = param_3[1];
    plVar5[2] = lVar3;
    plVar5[4] = param_3[2];
  }
  plVar5[5] = 0;
  if ((plVar13 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar13)) goto LAB_109287214;
  uVar14 = 1;
  if ((long *)0x2 < plVar13) {
    uVar14 = (ulong)(((ulong)plVar13 & (long)plVar13 - 1U) != 0);
  }
  plVar6 = (long *)(uVar14 | (long)plVar13 << 1);
  plVar13 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
  if (plVar6 <= plVar13) {
    plVar6 = plVar13;
  }
  if ((long)plVar6 - 1U == 0) {
    plVar6 = (long *)0x2;
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar13 = (long *)param_1[1];
  if (plVar13 < plVar6) {
LAB_10928709c:
    if ((ulong)plVar6 >> 0x3d != 0) {
      func_0x000104c4f740();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1092872e8);
      (*pcVar2)();
    }
    lVar3 = (long)plVar6 << 3;
    __Znwm();
    lVar4 = *param_1;
    *param_1 = lVar3;
    if (lVar4 != 0) {
      __ZdlPv();
    }
    plVar13 = (long *)0x0;
    param_1[1] = (long)plVar6;
    do {
      *(undefined8 *)(*param_1 + (long)plVar13 * 8) = 0;
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar6 != plVar13);
    plVar7 = (long *)param_1[2];
    plVar13 = plVar6;
    if (plVar7 != (long *)0x0) {
      plVar9 = (long *)plVar7[1];
      uVar14 = (long)plVar6 - 1;
      if (((ulong)plVar6 & uVar14) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar14);
      }
      else if (plVar6 <= plVar9) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)plVar6;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar6);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar10 = (long *)*plVar7;
      while (plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)plVar6 & uVar14) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar14);
        }
        else if (plVar6 <= plVar12) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar12 / (ulong)plVar6;
          }
          plVar12 = (long *)((long)plVar12 - uVar1 * (long)plVar6);
        }
        plVar11 = plVar10;
        if (plVar12 != plVar9) {
          lVar3 = *param_1;
          if (*(long *)(lVar3 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar3 + (long)plVar12 * 8) = plVar7;
            plVar9 = plVar12;
          }
          else {
            *plVar7 = *plVar10;
            *plVar10 = **(undefined8 **)(lVar3 + (long)plVar12 * 8);
            **(long **)(lVar3 + (long)plVar12 * 8) = (long)plVar10;
            plVar11 = plVar7;
          }
        }
        plVar7 = plVar11;
        plVar10 = (long *)*plVar11;
      }
    }
  }
  else if (plVar6 < plVar13) {
    plVar7 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar13 < (long *)0x3) || (((ulong)plVar13 & (long)plVar13 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar7) {
      plVar7 = (long *)(1L << (-LZCOUNT((long)plVar7 + -1) & 0x3fU));
    }
    if (plVar6 <= plVar7) {
      plVar6 = plVar7;
    }
    if (plVar6 < plVar13) {
      if (plVar6 != (long *)0x0) goto LAB_10928709c;
      lVar3 = *param_1;
      *param_1 = 0;
      if (lVar3 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      plVar13 = (long *)0x0;
    }
    else {
      plVar13 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
    unaff_x25 = (long *)((long)plVar13 - 1U & (ulong)plVar8);
  }
  else {
    unaff_x25 = plVar8;
    if (plVar13 <= plVar8) {
      uVar14 = 0;
      if (plVar13 != (long *)0x0) {
        uVar14 = (ulong)plVar8 / (ulong)plVar13;
      }
      unaff_x25 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
    }
  }
LAB_109287214:
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar5 != 0) {
      plVar8 = *(long **)(*plVar5 + 8);
      if (((ulong)plVar13 & (long)plVar13 - 1U) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (long)plVar13 - 1U);
      }
      else if (plVar13 <= plVar8) {
        uVar14 = 0;
        if (plVar13 != (long *)0x0) {
          uVar14 = (ulong)plVar8 / (ulong)plVar13;
        }
        plVar8 = (long *)((long)plVar8 - uVar14 * (long)plVar13);
      }
      *(long **)(*param_1 + (long)plVar8 * 8) = plVar5;
    }
  }
  else {
    *plVar5 = *plVar8;
    *plVar8 = (long)plVar5;
  }
  param_1[3] = param_1[3] + 1;
  return plVar5;
}



/* Entry: 109287310; end: 109287343;  */

void FUN_109287310(ulong param_1,long param_2)

{
  if (((param_1 & 1) != 0) && (*(char *)(param_2 + 0x27) < '\0')) {
    __ZdlPv(*(undefined8 *)(param_2 + 0x10));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 109287344; end: 109287427;  */

long FUN_109287344(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar2) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 109287428; end: 109287477;  */

long * FUN_109287428(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if (((char)param_1[2] == '\x01') && (*(char *)(lVar1 + 0x27) < '\0')) {
      __ZdlPv(*(undefined8 *)(lVar1 + 0x10));
    }
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 109287478; end: 1092874d3;  */

long * FUN_109287478(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_1092874d4(plVar1[4]);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092874d4; end: 10928751b;  */

void FUN_1092874d4(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1092874d4(*param_1);
    FUN_1092874d4(param_1[1]);
    if (param_1[5] != 0) {
      param_1[6] = param_1[5];
      __ZdlPv();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10928751c; end: 1092878e7;  */

long * FUN_10928751c(long *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong unaff_x24;
  
  uVar14 = (ulong)param_2;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar5 = uVar16 - 1;
    uVar15 = (uint)uVar16;
    if ((uVar16 & uVar5) == 0) {
      unaff_x24 = (ulong)(uVar15 - 1 & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar1 = 0;
        if (uVar15 != 0) {
          uVar1 = param_2 / uVar15;
        }
        unaff_x24 = (ulong)(param_2 - uVar1 * uVar15);
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar9 = plVar8[1];
        if (uVar9 == uVar14) {
          if (*(uint *)(plVar8 + 2) == param_2) {
            return plVar8;
          }
        }
        else {
          if ((uVar16 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar16 <= uVar9) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar9 / uVar16;
            }
            uVar9 = uVar9 - uVar6 * uVar16;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar8 = (long *)0x30;
  __Znwm();
  *plVar8 = 0;
  plVar8[1] = uVar14;
  *(undefined4 *)(plVar8 + 2) = *param_3;
  plVar8[5] = 0;
  plVar8[4] = 0;
  plVar8[3] = (long)(plVar8 + 4);
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar16) {
      uVar5 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar5 = uVar5 | uVar16 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar5) {
LAB_109287688:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1092878cc);
        (*pcVar3)();
      }
      lVar10 = uVar5 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar10;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar5;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar5 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar5;
      if (plVar7 != (long *)0x0) {
        uVar9 = plVar7[1];
        uVar6 = uVar5 - 1;
        if ((uVar5 & uVar6) == 0) {
          uVar9 = uVar9 & uVar6;
        }
        else if (uVar5 <= uVar9) {
          uVar13 = 0;
          if (uVar5 != 0) {
            uVar13 = uVar9 / uVar5;
          }
          uVar9 = uVar9 - uVar13 * uVar5;
        }
        *(long **)(*param_1 + uVar9 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar7;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar5 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar5 <= uVar13) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar13 / uVar5;
            }
            uVar13 = uVar13 - uVar2 * uVar5;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar9) {
            lVar10 = *param_1;
            if (*(long *)(lVar10 + uVar13 * 8) == 0) {
              *(long **)(lVar10 + uVar13 * 8) = plVar7;
              uVar9 = uVar13;
            }
            else {
              *plVar7 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar10 + uVar13 * 8);
              **(long **)(lVar10 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar7;
            }
          }
          plVar7 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar5 < uVar16) {
      uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar9) {
        uVar9 = 1L << (-LZCOUNT(uVar9 - 1) & 0x3fU);
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      if (uVar5 < uVar16) {
        if (uVar5 != 0) goto LAB_109287688;
        lVar10 = *param_1;
        *param_1 = 0;
        if (lVar10 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar16 - 1U & param_2);
    }
    else {
      unaff_x24 = uVar14;
      if (uVar16 <= uVar14) {
        uVar5 = 0;
        if (uVar16 != 0) {
          uVar5 = uVar14 / uVar16;
        }
        unaff_x24 = uVar14 - uVar5 * uVar16;
      }
    }
  }
  lVar10 = *param_1;
  plVar7 = *(long **)(lVar10 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar8 = *plVar7;
    *plVar7 = (long)plVar8;
    *(long **)(lVar10 + unaff_x24 * 8) = plVar7;
    if (*plVar8 == 0) goto LAB_109287864;
    uVar14 = *(ulong *)(*plVar8 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar14 = uVar14 & uVar16 - 1;
    }
    else if (uVar16 <= uVar14) {
      uVar5 = 0;
      if (uVar16 != 0) {
        uVar5 = uVar14 / uVar16;
      }
      uVar14 = uVar14 - uVar5 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar14 * 8);
  }
  else {
    *plVar8 = *plVar7;
  }
  *plVar7 = (long)plVar8;
LAB_109287864:
  param_1[3] = param_1[3] + 1;
  return plVar8;
}



/* Entry: 1092878e8; end: 1092879bb;  */

long * FUN_1092878e8(long *param_1,uint param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1 + 1;
  plVar2 = (long *)*plVar1;
  do {
    plVar3 = plVar1;
    if (plVar2 == (long *)0x0) {
LAB_10928794c:
      plVar2 = (long *)0x40;
      __Znwm();
      *(undefined4 *)(plVar2 + 4) = *param_3;
      plVar2[6] = 0;
      plVar2[7] = 0;
      plVar2[5] = 0;
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = (long)plVar1;
      *plVar3 = (long)plVar2;
      plVar1 = plVar2;
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        plVar1 = (long *)*plVar3;
      }
      func_0x000107c27d40(param_1[1],plVar1);
      param_1[2] = param_1[2] + 1;
      return plVar2;
    }
    while (plVar1 = plVar2, *(uint *)(plVar1 + 4) <= param_2) {
      if (param_2 <= *(uint *)(plVar1 + 4)) {
        return plVar1;
      }
      plVar2 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar3 = plVar1 + 1;
        goto LAB_10928794c;
      }
    }
    plVar2 = (long *)*plVar1;
  } while( true );
}



/* Entry: 1092879bc; end: 1092879f3;  */

void FUN_1092879bc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1092879bc(*param_1);
    FUN_1092879bc(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 1092879f4; end: 109287a7b;  */

void FUN_1092879f4(undefined8 *param_1,undefined8 param_2,long param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  *param_1 = *(undefined8 *)(param_3 + 0xb8);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0xb0);
  FUN_10926dea0(param_3,param_2);
  uVar1 = *param_4;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_3 + 0xac);
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = param_4[2];
  *(undefined4 *)(param_1 + 3) = param_6;
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)(param_3 + 0x24);
  uVar1 = *(undefined4 *)(param_3 + 0x40);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 5) = uVar1;
  *(undefined4 *)((long)param_1 + 0x2c) = param_5;
  return;
}



/* Entry: 109287a7c; end: 109287baf;  */

ulong FUN_109287a7c(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined **ppuVar1;
  short **ppsVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short *psStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined1 uStack_c1;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar4 = &uStack_a0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  if (param_4 == 0) {
    puVar3 = &UNK_10f562af9;
    FUN_10924962c();
    uVar5 = *(ulong *)(puVar3 + 8);
    if (-1 < (char)puVar3[0x17]) {
      uVar5 = (ulong)(byte)puVar3[0x17];
    }
    if (uVar5 < 3) {
      uVar5 = 0;
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&psStack_e0,puVar3,0,3,&uStack_c1);
      if (-1 < (char)bStack_c9) {
        uStack_d8 = (ulong)bStack_c9;
      }
      if (uStack_d8 == 3) {
        ppsVar2 = (short **)psStack_e0;
        if (-1 < (char)bStack_c9) {
          ppsVar2 = &psStack_e0;
        }
        uVar5 = (ulong)(*(short *)ppsVar2 == 0x6c67 && (char)*(short *)((long)ppsVar2 + 2) == '_');
      }
      else {
        uVar5 = 0;
      }
      if ((char)bStack_c9 < '\0') {
        __ZdlPv(psStack_e0);
      }
    }
    return uVar5;
  }
  uVar5 = param_2;
  FUN_1092879f4(&uStack_70,param_2,param_4,param_3,0,0);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_5 != 0) {
    FUN_1092879f4(&uStack_a0,param_2,param_5,param_3,0,0);
    uVar5 = param_2;
  }
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_4 + 0x40) * 4;
  if (0x56 < *(uint *)(param_4 + 0x40)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  if (*(int *)((long)ppuVar1 + 0x14) == 0) {
    puVar4 = &uStack_70;
  }
  else {
    param_1[0x32] = uStack_68;
    param_1[0x31] = uStack_70;
    param_1[0x34] = uStack_58;
    param_1[0x33] = uStack_60;
    param_1[0x36] = uStack_48;
    param_1[0x35] = uStack_50;
    if (param_5 == 0) {
      return uVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  uVar6 = *puVar4;
  uVar8 = puVar4[3];
  uVar7 = puVar4[2];
  param_1[1] = puVar4[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = puVar4[4];
  param_1[5] = puVar4[5];
  param_1[4] = uVar6;
  return uVar5;
}



/* Entry: 109287bb0; end: 109287c6f;  */

bool FUN_109287bb0(long param_1)

{
  ulong uVar1;
  short **ppsVar2;
  bool bVar3;
  short *psStack_40;
  ulong uStack_38;
  byte bStack_29;
  undefined1 uStack_21;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  if (uVar1 < 3) {
    bVar3 = false;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&psStack_40,param_1,0,3,&uStack_21);
    if (-1 < (char)bStack_29) {
      uStack_38 = (ulong)bStack_29;
    }
    if (uStack_38 == 3) {
      ppsVar2 = (short **)psStack_40;
      if (-1 < (char)bStack_29) {
        ppsVar2 = &psStack_40;
      }
      bVar3 = *(short *)ppsVar2 == 0x6c67 && (char)*(short *)((long)ppsVar2 + 2) == '_';
    }
    else {
      bVar3 = false;
    }
    if ((char)bStack_29 < '\0') {
      __ZdlPv(psStack_40);
    }
  }
  return bVar3;
}



/* Entry: 109287c70; end: 109287e4f;  */

void FUN_109287c70(long param_1,long param_2,uint *param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  
  if (((param_1 != 0) && (param_2 != 0)) && (uVar7 = *param_3, uVar7 != 0)) {
    lVar11 = *(long *)(param_1 + 0x38);
    if ((uVar7 >> 8 & 1) != 0) {
      _glDepthMask(*(undefined1 *)(param_2 + 0x309));
      uVar7 = *param_3;
    }
    if ((uVar7 >> 10 & 1) != 0) {
      iVar2 = *(int *)(param_2 + 0x328);
      if ((*(char *)(param_1 + 0x1c4) != '\x01') || (*(int *)(param_1 + 0x1c0) != iVar2)) {
        *(undefined1 *)(param_1 + 0x1c4) = 1;
        *(int *)(param_1 + 0x1c0) = iVar2;
        _glStencilMaskSeparate(0x404);
      }
      iVar2 = *(int *)(param_2 + 0x340);
      if ((*(char *)(param_1 + 0x1cc) != '\x01') || (*(int *)(param_1 + 0x1c8) != iVar2)) {
        *(undefined1 *)(param_1 + 0x1cc) = 1;
        *(int *)(param_1 + 0x1c8) = iVar2;
        _glStencilMaskSeparate(0x405);
      }
    }
    if ((*(byte *)((long)param_3 + 1) >> 6 & 1) != 0) {
      if (*(char *)(lVar11 + 0x29) == '\x01') {
        if (*(long *)(param_2 + 0x448) != 0) {
          uVar8 = 0;
          uVar7 = 1;
          do {
            uVar3 = *(uint *)(param_2 + 0x364 + uVar8 * 0x20);
            FUN_109248cd8(lVar11,uVar7 - 1,uVar3 & 1,uVar3 >> 1 & 1,uVar3 >> 2 & 1,uVar3 >> 3 & 1,
                          param_1);
            uVar8 = (ulong)uVar7;
            uVar1 = (ulong)uVar7;
            uVar7 = uVar7 + 1;
          } while (uVar1 < *(ulong *)(param_2 + 0x448));
        }
      }
      else if (*(long *)(param_2 + 0x448) != 0) {
        lVar11 = *(long *)(param_1 + 600);
        lVar9 = *(long *)(param_1 + 0x260);
        if (lVar11 != lVar9) {
          uVar3 = *(uint *)(param_2 + 0x364);
          uVar4 = uVar3 >> 1 & 1;
          uVar5 = uVar3 >> 2 & 1;
          uVar6 = uVar3 >> 3 & 1;
          uVar7 = uVar5 << 0x10 | uVar6 << 0x18 | uVar4 << 8 | uVar3 & 1;
          bVar10 = true;
          do {
            while ((((*(char *)(lVar11 + 6) != '\x01' ||
                     ((uint)*(byte *)(lVar11 + 2) != (uVar3 & 1))) ||
                    (*(byte *)(lVar11 + 3) != uVar4)) ||
                   ((*(byte *)(lVar11 + 4) != uVar5 || (*(byte *)(lVar11 + 5) != uVar6))))) {
              bVar10 = false;
              *(undefined1 *)(lVar11 + 6) = 1;
              *(uint *)(lVar11 + 2) = uVar7;
              lVar11 = lVar11 + 0x28;
              if (lVar11 == lVar9) goto LAB_109287e34;
            }
            *(undefined1 *)(lVar11 + 6) = 1;
            *(uint *)(lVar11 + 2) = uVar7;
            lVar11 = lVar11 + 0x28;
          } while (lVar11 != lVar9);
          if (!bVar10) {
LAB_109287e34:
            _glColorMask();
          }
        }
      }
    }
  }
  *param_3 = 0;
  return;
}



/* Entry: 109287e50; end: 109288083;  */

void FUN_109287e50(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9,int param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,int param_14,int param_15,undefined4 param_16,
                  undefined4 param_17,int param_18,int param_19,undefined4 param_20,
                  undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined8 param_24,
                  undefined8 param_25,undefined4 param_26)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lStack_3f8;
  long *plStack_3f0;
  undefined4 uStack_3e4;
  undefined1 auStack_3e0 [440];
  long lStack_228;
  long *plStack_220;
  undefined1 auStack_218 [440];
  long lStack_60;
  undefined4 uStack_54;
  
  lVar4 = *(long *)(param_1 + 0x38);
  lStack_60 = param_1;
  FUN_109287a7c(auStack_218,param_1,param_6,param_3,param_24);
  FUN_1092536b0(param_1,0x8ca8,auStack_218);
  (**(code **)(lVar4 + 0x758))(0x8ce0);
  plStack_220 = &lStack_60;
  lStack_228 = lVar4;
  FUN_109287a7c(auStack_3e0,param_1,param_13,param_7,param_25);
  FUN_1092536b0(lStack_60,0x8ca9,auStack_3e0);
  uStack_3e4 = 0x8ce0;
  (**(code **)(lVar4 + 0x750))(1,&uStack_3e4);
  plStack_3f0 = &lStack_60;
  lStack_3f8 = lVar4;
  if (lStack_60 != 0) {
    lVar1 = *(long *)(lStack_60 + 600);
    lVar2 = *(long *)(lStack_60 + 0x260);
    if (lVar1 == lVar2) goto LAB_109287fb0;
    bVar3 = true;
    do {
      while ((((*(char *)(lVar1 + 6) != '\x01' || (*(char *)(lVar1 + 2) != '\x01')) ||
              (*(char *)(lVar1 + 3) != '\x01')) ||
             ((*(char *)(lVar1 + 4) != '\x01' || (*(char *)(lVar1 + 5) != '\x01'))))) {
        bVar3 = false;
        *(undefined1 *)(lVar1 + 6) = 1;
        *(undefined4 *)(lVar1 + 2) = 0x1010101;
        lVar1 = lVar1 + 0x28;
        if (lVar1 == lVar2) goto LAB_109287f9c;
      }
      *(undefined1 *)(lVar1 + 6) = 1;
      *(undefined4 *)(lVar1 + 2) = 0x1010101;
      lVar1 = lVar1 + 0x28;
    } while (lVar1 != lVar2);
    if (bVar3) goto LAB_109287fb0;
  }
LAB_109287f9c:
  _glColorMask(1,1,1,1);
LAB_109287fb0:
  (**(code **)(lVar4 + 0x850))
            (param_4,param_4 >> 0x20,param_14 + (int)param_4,param_15 + (int)(param_4 >> 0x20),
             param_9,param_10,param_18 + param_9,param_19 + param_10,param_22,param_26);
  uStack_54 = 0x4000;
  FUN_109287c70(lStack_60,param_2,&uStack_54);
  FUN_109288084(&lStack_3f8);
  func_0x0001092880dc(&lStack_228);
  return;
}



/* Entry: 109288084; end: 109288133;  */

undefined8 * FUN_109288084(undefined8 *param_1)

{
  long lVar1;
  
  if (*(int *)(*(long *)*param_1 + 0x914) == 1) {
    lVar1 = *(long *)param_1[1];
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x10c) == 0) {
        return param_1;
      }
      *(undefined4 *)(lVar1 + 0x10c) = 0;
    }
    _glBindFramebuffer(0x8ca9,0);
  }
  return param_1;
}



/* Entry: 109288134; end: 10928842f;  */

void FUN_109288134(undefined8 param_1,undefined8 param_2,long *param_3,long *param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar1._0_8_ = param_3[1] & 0xffffffff;
  auVar1._8_4_ = (int)((ulong)param_3[1] >> 0x20);
  auVar1._12_4_ = 0;
  auVar1 = NEON_rev64(auVar1,4);
  auVar2._0_8_ = param_4[1] & 0xffffffff;
  auVar2._8_4_ = (int)((ulong)param_4[1] >> 0x20);
  auVar2._12_4_ = 0;
  auVar2 = NEON_rev64(auVar2,4);
  auVar3._4_12_ = auVar2._4_12_;
  auVar3._0_4_ = auVar2._4_4_;
  auVar5._0_8_ = auVar3._0_8_;
  auVar5._8_4_ = auVar2._12_4_;
  auVar5._12_4_ = auVar2._12_4_;
  auVar4._8_8_ = auVar5._8_8_;
  auVar4._0_8_ = CONCAT44(1,auVar2._4_4_);
  auVar6._0_12_ = auVar4._0_12_;
  auVar6._12_4_ = 1;
  uStack_28 = auVar6._8_8_;
  uStack_18 = CONCAT44(1,auVar1._12_4_);
  uStack_20 = CONCAT44(1,auVar1._4_4_);
  uStack_30 = auVar4._0_8_;
  FUN_109287e50(param_1,param_2,*param_3,0,0,&uStack_20,*param_4,param_8,0,0,&uStack_30,
                *(undefined8 *)(*param_3 + 0x24),0,*(undefined8 *)(*param_4 + 0x24),0,param_5);
  return;
}



/* Entry: 109288430; end: 10928857f;  */

ulong FUN_109288430(long param_1,ulong param_2,long param_3,long param_4,undefined8 *param_5,
                   undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined *puVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  byte bVar15;
  long *plVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  uint *puVar25;
  ulong uVar26;
  long *plStack_140;
  int iStack_12c;
  long lStack_128;
  long *plStack_f8;
  undefined8 uStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x1c) * 4;
  if (0x56 < *(uint *)(param_3 + 0x1c)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  bVar15 = *(byte *)(ppuVar1 + 3);
  bVar2 = *(byte *)((long)ppuVar1 + 0x19);
  if (param_2 == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0;
    uVar14 = (uint)param_4;
    lVar21 = param_2 * 0x38;
    puVar25 = (uint *)(param_1 + 0x30);
    do {
      plVar13 = (long *)(ulong)*(uint *)(param_3 + 0x1c);
      ppuVar1 = &PTR_DAT_110ae4700 + (long)plVar13 * 4;
      if (0x56 < *(uint *)(param_3 + 0x1c)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      if (*(byte *)((long)ppuVar1 + 0x1a) == 0) {
        puVar10 = &UNK_10f62e152;
        FUN_109243bf8();
        if (*(char *)((long)param_5 + 0x24) == '\x01') {
          lVar21 = *(long *)(puVar10 + 0x58);
          if (lVar21 == 0) {
            bVar15 = 1;
          }
          else {
            plStack_d8 = *(long **)(lVar21 + 0x50);
            plStack_d0 = *(long **)(lVar21 + 0x18);
            FUN_10925bdc8(lVar21,param_7,&plStack_d8);
            if (*(int *)(lVar21 + 0x2c) != 0) {
              plVar22 = (long *)*param_5;
              ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
              if (0x56 < *(uint *)(param_2 + 0x40)) {
                ppuVar1 = &PTR_DAT_110ae4700;
              }
              bVar15 = *(byte *)(ppuVar1 + 3);
              bVar2 = *(byte *)((long)ppuVar1 + 0x19);
              lVar21 = *(long *)(puVar10 + 0x58);
              if (lVar21 == 0) {
                iVar12 = 0;
              }
              else {
                plStack_d8 = *(long **)(lVar21 + 0x50);
                plStack_d0 = *(long **)(lVar21 + 0x18);
                FUN_10925bdc8(lVar21,param_7,&plStack_d8);
                iVar12 = *(int *)(lVar21 + 0x2c);
              }
              if (param_7 == 0) {
LAB_10928893c:
                _glBindBuffer(0x88ec);
              }
              else if (*(int *)(param_7 + 0x130) != iVar12) {
                *(int *)(param_7 + 0x130) = iVar12;
                goto LAB_10928893c;
              }
              plVar11 = plVar13;
              FUN_109288430(plVar13,param_4,param_2 + 0x24,*(undefined1 *)((long)param_5 + 0x51));
              plStack_e8 = (long *)0x0;
              plStack_e0 = (long *)0x0;
              if (plVar11 == (long *)0x0) {
LAB_1092889c8:
                iStack_12c = 0;
                plStack_140 = plStack_e0;
              }
              else {
                uStack_f0 = 0x600000040;
                plStack_f8 = plVar11;
                (**(code **)(*plVar22 + 0x70))(&plStack_d8,plVar22,&plStack_f8);
                plStack_e8 = plStack_d8;
                plStack_e0 = plStack_d0;
                plStack_140 = plStack_d0;
                lVar21 = plStack_d8[0xb];
                if (lVar21 == 0) goto LAB_1092889c8;
                plStack_d8 = *(long **)(lVar21 + 0x50);
                plStack_d0 = *(long **)(lVar21 + 0x18);
                FUN_10925bdc8(lVar21,param_7,&plStack_d8);
                iStack_12c = *(int *)(lVar21 + 0x2c);
              }
              lVar21 = *(long *)(puVar10 + 0x58);
              if (lVar21 == 0) {
                iVar12 = 0;
                if (param_7 != 0) goto LAB_109288a08;
LAB_109288a18:
                _glBindBuffer(0x8f36);
                if (param_7 != 0) goto LAB_109288a24;
LAB_109288a3c:
                _glBindBuffer(0x8f37,iStack_12c);
              }
              else {
                plStack_d8 = *(long **)(lVar21 + 0x50);
                plStack_d0 = *(long **)(lVar21 + 0x18);
                FUN_10925bdc8(lVar21,param_7,&plStack_d8);
                iVar12 = *(int *)(lVar21 + 0x2c);
                if (param_7 == 0) goto LAB_109288a18;
LAB_109288a08:
                if (*(int *)(param_7 + 0x118) != iVar12) {
                  *(int *)(param_7 + 0x118) = iVar12;
                  goto LAB_109288a18;
                }
LAB_109288a24:
                if (*(int *)(param_7 + 0x11c) != iStack_12c) {
                  *(int *)(param_7 + 0x11c) = iStack_12c;
                  goto LAB_109288a3c;
                }
              }
              if (param_4 == 0) goto LAB_109288c4c;
              plVar22 = plVar13 + param_4 * 7;
              goto LAB_109288a58;
            }
            bVar15 = *(byte *)((long)param_5 + 0x24);
          }
        }
        else {
          bVar15 = 0;
        }
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
        if (0x56 < *(uint *)(param_2 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        bVar2 = *(byte *)(ppuVar1 + 3);
        bVar3 = *(byte *)((long)ppuVar1 + 0x19);
        if ((bVar15 & 1) != 0) {
          if (param_7 != 0) {
            if (*(int *)(param_7 + 0x130) == 0) goto LAB_1092886bc;
            *(undefined4 *)(param_7 + 0x130) = 0;
          }
          _glBindBuffer(0x88ec,0);
        }
LAB_1092886bc:
        plVar22 = plVar13;
        FUN_109288430(plVar13,param_4,param_2 + 0x24,*(undefined1 *)((long)param_5 + 0x51));
        plStack_d8 = (long *)0x0;
        plStack_d0 = (long *)0x0;
        uStack_c8 = 0;
        if (*(long *)(puVar10 + 0x50) == 0) {
          lStack_128 = *(long *)(puVar10 + 0x58);
          if (lStack_128 == 0) {
            lStack_128 = 0;
          }
          else {
            FUN_10925ca24(lStack_128,1,0,0,param_7);
          }
        }
        else {
          lStack_128 = *(long *)(*(long *)(puVar10 + 0x50) + 0x10);
        }
        if (param_4 == 0) goto LAB_1092888e4;
        plVar11 = plVar13 + param_4 * 7;
        goto LAB_109288728;
      }
      bVar3 = *(byte *)(ppuVar1 + 3);
      uVar26 = (ulong)puVar25[-2];
      param_2 = (ulong)puVar25[-1];
      uVar7 = 0;
      if (bVar3 != 0) {
        uVar7 = ((puVar25[-2] + (uint)bVar3) - 1) / (uint)bVar3;
      }
      uVar7 = uVar7 * *(byte *)((long)ppuVar1 + 0x1a);
      func_0x000109fc8e58();
      uVar17 = uVar7;
      if (puVar25[-10] != 0) {
        uVar17 = puVar25[-10];
      }
      uVar18 = *(ulong *)(puVar25 + -8);
      if (uVar18 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_3 + 0x1c) * 4;
        if (0x56 < *(uint *)(param_3 + 0x1c)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar19 = (uint)*(byte *)((long)ppuVar1 + 0x19);
        if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
          uVar19 = 1;
        }
        uVar8 = 0;
        if (uVar19 != 0) {
          uVar8 = ((puVar25[-1] + uVar19) - 1) / uVar19;
        }
        uVar18 = (ulong)uVar8 * (ulong)uVar17;
      }
      uVar8 = uVar14 ^ 1;
      uVar19 = uVar14;
      if (uVar17 == uVar7 && uVar18 == uVar26) {
        uVar19 = 1;
        uVar8 = 1;
      }
      if (((uVar19 != 1) || ((uVar8 & 1) == 0 && ((bVar2 & 0xfe) != 0 || 1 < bVar15))) &&
         (uVar20 <= uVar26 * *puVar25)) {
        uVar20 = uVar26 * *puVar25;
      }
      puVar25 = puVar25 + 0xe;
      lVar21 = lVar21 + -0x38;
    } while (lVar21 != 0);
  }
  return uVar20;
  while( true ) {
    bVar4 = *(byte *)(ppuVar1 + 3);
    uVar14 = *(uint *)(plVar13 + 5);
    uVar20 = (ulong)uVar14;
    func_0x000109fc8e58(uVar20,*(undefined4 *)((long)plVar13 + 0x2c));
    uVar7 = 0;
    if (bVar4 != 0) {
      uVar7 = ((uVar14 + bVar4) - 1) / (uint)bVar4;
    }
    uVar7 = uVar7 * bVar15;
    uVar14 = uVar7;
    if (*(uint *)(plVar13 + 1) != 0) {
      uVar14 = *(uint *)(plVar13 + 1);
    }
    uVar26 = (ulong)uVar14;
    uVar18 = plVar13[2];
    if (uVar18 == 0) {
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
      if (0x56 < *(uint *)(param_2 + 0x40)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uVar17 = (uint)*(byte *)((long)ppuVar1 + 0x19);
      if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
        uVar17 = 1;
      }
      uVar19 = 0;
      if (uVar17 != 0) {
        uVar19 = ((*(int *)((long)plVar13 + 0x2c) + uVar17) - 1) / uVar17;
      }
      uVar18 = uVar19 * uVar26;
    }
    if ((((*(byte *)((long)param_5 + 0x51) & 1) == 0) && (uVar14 != uVar7 || uVar18 != uVar20)) ||
       (((uVar14 != uVar7 || uVar18 != uVar20) &&
        ((*(byte *)((long)param_5 + 0x51) ^ 0xff) & 1) == 0) && ((bVar3 & 0xfe) != 0 || 1 < bVar2)))
    {
      lVar21 = *plVar13;
      plVar16 = (long *)((long)plStack_d0 - (long)plStack_d8);
      if (plVar22 < plVar16 || (long)plVar22 - (long)plVar16 == 0) {
        if (plVar22 < plVar16) {
          plStack_d0 = (long *)((long)plStack_d8 + (long)plVar22);
        }
      }
      else {
        func_0x000107c27d58(&plStack_d8,(long)plVar22 - (long)plVar16);
      }
      uVar14 = *(uint *)(plVar13 + 6);
      if (uVar14 != 0) {
        uVar17 = 0;
        lVar21 = lStack_128 + lVar21;
        uVar19 = 0;
        plVar16 = plStack_d8;
        if (uVar26 != 0) {
          uVar19 = (uint)(uVar18 / uVar26);
        }
        do {
          if (uVar19 != 0) {
            lVar24 = 0;
            uVar14 = 0;
            do {
              _memcpy(plVar16,lVar21 + lVar24,(ulong)uVar7);
              plVar16 = (long *)((long)plVar16 + (ulong)uVar7);
              uVar14 = uVar14 + 1;
              lVar24 = lVar24 + uVar26;
            } while (uVar14 < uVar19);
            uVar14 = *(uint *)(plVar13 + 6);
          }
          lVar21 = lVar21 + uVar18;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar14);
      }
      FUN_10926eaf8(param_2,(long)plVar13 + 0x1c,plVar13 + 5,(int)plVar13[3],plStack_d8,0,0,param_7)
      ;
    }
    else {
      FUN_10926eaf8(param_2,(long)plVar13 + 0x1c,plVar13 + 5,(int)plVar13[3],lStack_128 + *plVar13,
                    uVar26,uVar18,param_7);
    }
    plVar13 = plVar13 + 7;
    if (plVar13 == plVar11) break;
LAB_109288728:
    ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
    if (0x56 < *(uint *)(param_2 + 0x40)) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    bVar15 = *(byte *)((long)ppuVar1 + 0x1a);
    if (bVar15 == 0) {
      FUN_109243bf8(&UNK_10f62e152);
LAB_109288d34:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x109288d38);
      (*pcVar9)();
    }
  }
LAB_1092888e4:
  if ((*(long *)(puVar10 + 0x50) == 0) && (*(long *)(puVar10 + 0x58) != 0)) {
    FUN_10925c194(*(long *)(puVar10 + 0x58),param_7);
  }
  if (plStack_d8 != (long *)0x0) {
    plStack_d0 = plStack_d8;
    __ZdlPv();
  }
  goto LAB_109288cd8;
LAB_109288a58:
  do {
    ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
    if (0x56 < *(uint *)(param_2 + 0x40)) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    bVar3 = *(byte *)((long)ppuVar1 + 0x1a);
    if (bVar3 == 0) {
      FUN_109243bf8(&UNK_10f62e152);
      goto LAB_109288d34;
    }
    bVar4 = *(byte *)(ppuVar1 + 3);
    uVar14 = *(uint *)(plVar13 + 5);
    uVar20 = (ulong)uVar14;
    func_0x000109fc8e58(uVar20,*(undefined4 *)((long)plVar13 + 0x2c));
    uVar7 = 0;
    if (bVar4 != 0) {
      uVar7 = ((uVar14 + bVar4) - 1) / (uint)bVar4;
    }
    uVar7 = uVar7 * bVar3;
    uVar14 = uVar7;
    if (*(uint *)(plVar13 + 1) != 0) {
      uVar14 = *(uint *)(plVar13 + 1);
    }
    uVar26 = (ulong)uVar14;
    uVar18 = plVar13[2];
    if (uVar18 == 0) {
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
      if (0x56 < *(uint *)(param_2 + 0x40)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uVar17 = (uint)*(byte *)((long)ppuVar1 + 0x19);
      if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
        uVar17 = 1;
      }
      uVar19 = 0;
      if (uVar17 != 0) {
        uVar19 = ((*(int *)((long)plVar13 + 0x2c) + uVar17) - 1) / uVar17;
      }
      uVar18 = uVar19 * uVar26;
    }
    if (uVar14 == uVar7 && uVar18 == uVar20 || (bVar2 & 0xfe) == 0 && bVar15 < 2) {
      lVar21 = *(long *)(puVar10 + 0x58);
      if (lVar21 == 0) {
        iVar12 = 0;
        if (param_7 != 0) goto LAB_109288c00;
LAB_109288c10:
        _glBindBuffer(0x88ec);
      }
      else {
        plStack_d8 = *(long **)(lVar21 + 0x50);
        plStack_d0 = *(long **)(lVar21 + 0x18);
        FUN_10925bdc8(lVar21,param_7,&plStack_d8);
        iVar12 = *(int *)(lVar21 + 0x2c);
        if (param_7 == 0) goto LAB_109288c10;
LAB_109288c00:
        if (*(int *)(param_7 + 0x130) != iVar12) {
          *(int *)(param_7 + 0x130) = iVar12;
          goto LAB_109288c10;
        }
      }
      FUN_10926eaf8(param_2,(long)plVar13 + 0x1c,plVar13 + 5,(int)plVar13[3],*plVar13,uVar26,uVar18,
                    param_7);
    }
    else {
      uVar14 = *(uint *)(plVar13 + 6);
      if (uVar14 != 0) {
        uVar17 = 0;
        lVar21 = 0;
        lVar24 = *plVar13;
        uVar19 = 0;
        if (uVar26 != 0) {
          uVar19 = (uint)(uVar18 / uVar26);
        }
        do {
          if (uVar19 != 0) {
            uVar14 = 0;
            lVar23 = lVar24;
            do {
              (*(code *)param_5[0x109])(0x8f36,0x8f37,lVar23,lVar21,(ulong)uVar7);
              lVar23 = lVar23 + uVar26;
              lVar21 = lVar21 + (ulong)uVar7;
              uVar14 = uVar14 + 1;
            } while (uVar14 < uVar19);
            uVar14 = *(uint *)(plVar13 + 6);
          }
          lVar24 = lVar24 + uVar18;
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar14);
      }
      if (param_7 == 0) {
LAB_109288bc4:
        _glBindBuffer(0x88ec,iStack_12c);
      }
      else if (*(int *)(param_7 + 0x130) != iStack_12c) {
        *(int *)(param_7 + 0x130) = iStack_12c;
        goto LAB_109288bc4;
      }
      FUN_10926eaf8(param_2,(long)plVar13 + 0x1c,plVar13 + 5,(int)plVar13[3],0,0,0,param_7);
    }
    plVar13 = plVar13 + 7;
  } while (plVar13 != plVar22);
LAB_109288c4c:
  if (param_7 == 0) {
LAB_109288c60:
    _glBindBuffer(0x8f37,0);
    if (param_7 != 0) goto LAB_109288c70;
LAB_109288c7c:
    _glBindBuffer(0x8f36,0);
  }
  else {
    if (*(int *)(param_7 + 0x11c) != 0) {
      *(undefined4 *)(param_7 + 0x11c) = 0;
      goto LAB_109288c60;
    }
LAB_109288c70:
    if (*(int *)(param_7 + 0x118) != 0) {
      *(undefined4 *)(param_7 + 0x118) = 0;
      goto LAB_109288c7c;
    }
  }
  if (plStack_140 != (long *)0x0) {
    plVar13 = plStack_140 + 1;
    do {
      lVar21 = *plVar13;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = lVar21 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plStack_140 + 0x10))(plStack_140);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
    }
  }
  if (param_7 != 0) {
    if (*(int *)(param_7 + 0x130) == 0) goto LAB_109288cd8;
    *(undefined4 *)(param_7 + 0x130) = 0;
  }
  _glBindBuffer(0x88ec,0);
LAB_109288cd8:
  (*(code *)param_5[0x12a])(0xcf2,0);
  uVar20 = 0x806e;
  (*(code *)param_5[0x12a])(0x806e,0);
  return uVar20;
}



/* Entry: 109288580; end: 109288e37;  */

void FUN_109288580(long param_1,long param_2,long *param_3,long param_4,undefined8 *param_5,
                  undefined8 param_6,long param_7)

{
  undefined **ppuVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  byte bVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *plStack_e0;
  int iStack_cc;
  long lStack_c8;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (*(char *)((long)param_5 + 0x24) == '\x01') {
    lVar16 = *(long *)(param_1 + 0x58);
    if (lVar16 == 0) {
      bVar13 = 1;
    }
    else {
      plStack_78 = *(long **)(lVar16 + 0x50);
      plStack_70 = *(long **)(lVar16 + 0x18);
      FUN_10925bdc8(lVar16,param_7,&plStack_78);
      if (*(int *)(lVar16 + 0x2c) != 0) {
        plVar17 = (long *)*param_5;
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
        if (0x56 < *(uint *)(param_2 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        bVar13 = *(byte *)(ppuVar1 + 3);
        bVar2 = *(byte *)((long)ppuVar1 + 0x19);
        lVar16 = *(long *)(param_1 + 0x58);
        if (lVar16 == 0) {
          iVar12 = 0;
        }
        else {
          plStack_78 = *(long **)(lVar16 + 0x50);
          plStack_70 = *(long **)(lVar16 + 0x18);
          FUN_10925bdc8(lVar16,param_7,&plStack_78);
          iVar12 = *(int *)(lVar16 + 0x2c);
        }
        if (param_7 == 0) {
LAB_10928893c:
          _glBindBuffer(0x88ec);
        }
        else if (*(int *)(param_7 + 0x130) != iVar12) {
          *(int *)(param_7 + 0x130) = iVar12;
          goto LAB_10928893c;
        }
        plVar11 = param_3;
        FUN_109288430(param_3,param_4,param_2 + 0x24,*(undefined1 *)((long)param_5 + 0x51));
        plStack_88 = (long *)0x0;
        plStack_80 = (long *)0x0;
        if (plVar11 == (long *)0x0) {
LAB_1092889c8:
          iStack_cc = 0;
          plStack_e0 = plStack_80;
        }
        else {
          uStack_90 = 0x600000040;
          plStack_98 = plVar11;
          (**(code **)(*plVar17 + 0x70))(&plStack_78,plVar17,&plStack_98);
          plStack_88 = plStack_78;
          plStack_80 = plStack_70;
          plStack_e0 = plStack_70;
          lVar16 = plStack_78[0xb];
          if (lVar16 == 0) goto LAB_1092889c8;
          plStack_78 = *(long **)(lVar16 + 0x50);
          plStack_70 = *(long **)(lVar16 + 0x18);
          FUN_10925bdc8(lVar16,param_7,&plStack_78);
          iStack_cc = *(int *)(lVar16 + 0x2c);
        }
        lVar16 = *(long *)(param_1 + 0x58);
        if (lVar16 == 0) {
          iVar12 = 0;
          if (param_7 != 0) goto LAB_109288a08;
LAB_109288a18:
          _glBindBuffer(0x8f36);
          if (param_7 != 0) goto LAB_109288a24;
LAB_109288a3c:
          _glBindBuffer(0x8f37,iStack_cc);
        }
        else {
          plStack_78 = *(long **)(lVar16 + 0x50);
          plStack_70 = *(long **)(lVar16 + 0x18);
          FUN_10925bdc8(lVar16,param_7,&plStack_78);
          iVar12 = *(int *)(lVar16 + 0x2c);
          if (param_7 == 0) goto LAB_109288a18;
LAB_109288a08:
          if (*(int *)(param_7 + 0x118) != iVar12) {
            *(int *)(param_7 + 0x118) = iVar12;
            goto LAB_109288a18;
          }
LAB_109288a24:
          if (*(int *)(param_7 + 0x11c) != iStack_cc) {
            *(int *)(param_7 + 0x11c) = iStack_cc;
            goto LAB_109288a3c;
          }
        }
        if (param_4 != 0) {
          plVar17 = param_3 + param_4 * 7;
          do {
            ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
            if (0x56 < *(uint *)(param_2 + 0x40)) {
              ppuVar1 = &PTR_DAT_110ae4700;
            }
            bVar3 = *(byte *)((long)ppuVar1 + 0x1a);
            if (bVar3 == 0) {
              FUN_109243bf8(&UNK_10f62e152);
              goto LAB_109288d34;
            }
            bVar4 = *(byte *)(ppuVar1 + 3);
            uVar18 = *(uint *)(param_3 + 5);
            uVar10 = (ulong)uVar18;
            func_0x000109fc8e58(uVar10,*(undefined4 *)((long)param_3 + 0x2c));
            uVar7 = 0;
            if (bVar4 != 0) {
              uVar7 = ((uVar18 + bVar4) - 1) / (uint)bVar4;
            }
            uVar7 = uVar7 * bVar3;
            uVar18 = uVar7;
            if (*(uint *)(param_3 + 1) != 0) {
              uVar18 = *(uint *)(param_3 + 1);
            }
            uVar21 = (ulong)uVar18;
            uVar22 = param_3[2];
            if (uVar22 == 0) {
              ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
              if (0x56 < *(uint *)(param_2 + 0x40)) {
                ppuVar1 = &PTR_DAT_110ae4700;
              }
              uVar15 = (uint)*(byte *)((long)ppuVar1 + 0x19);
              if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
                uVar15 = 1;
              }
              uVar8 = 0;
              if (uVar15 != 0) {
                uVar8 = ((*(int *)((long)param_3 + 0x2c) + uVar15) - 1) / uVar15;
              }
              uVar22 = uVar8 * uVar21;
            }
            if (uVar18 == uVar7 && uVar22 == uVar10 || (bVar2 & 0xfe) == 0 && bVar13 < 2) {
              lVar16 = *(long *)(param_1 + 0x58);
              if (lVar16 == 0) {
                iVar12 = 0;
                if (param_7 != 0) goto LAB_109288c00;
LAB_109288c10:
                _glBindBuffer(0x88ec);
              }
              else {
                plStack_78 = *(long **)(lVar16 + 0x50);
                plStack_70 = *(long **)(lVar16 + 0x18);
                FUN_10925bdc8(lVar16,param_7,&plStack_78);
                iVar12 = *(int *)(lVar16 + 0x2c);
                if (param_7 == 0) goto LAB_109288c10;
LAB_109288c00:
                if (*(int *)(param_7 + 0x130) != iVar12) {
                  *(int *)(param_7 + 0x130) = iVar12;
                  goto LAB_109288c10;
                }
              }
              FUN_10926eaf8(param_2,(long)param_3 + 0x1c,param_3 + 5,(int)param_3[3],*param_3,uVar21
                            ,uVar22,param_7);
            }
            else {
              uVar18 = *(uint *)(param_3 + 6);
              if (uVar18 != 0) {
                uVar15 = 0;
                lVar16 = 0;
                lVar20 = *param_3;
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = (uint)(uVar22 / uVar21);
                }
                do {
                  if (uVar8 != 0) {
                    uVar18 = 0;
                    lVar19 = lVar20;
                    do {
                      (*(code *)param_5[0x109])(0x8f36,0x8f37,lVar19,lVar16,(ulong)uVar7);
                      lVar19 = lVar19 + uVar21;
                      lVar16 = lVar16 + (ulong)uVar7;
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < uVar8);
                    uVar18 = *(uint *)(param_3 + 6);
                  }
                  lVar20 = lVar20 + uVar22;
                  uVar15 = uVar15 + 1;
                } while (uVar15 < uVar18);
              }
              if (param_7 == 0) {
LAB_109288bc4:
                _glBindBuffer(0x88ec,iStack_cc);
              }
              else if (*(int *)(param_7 + 0x130) != iStack_cc) {
                *(int *)(param_7 + 0x130) = iStack_cc;
                goto LAB_109288bc4;
              }
              FUN_10926eaf8(param_2,(long)param_3 + 0x1c,param_3 + 5,(int)param_3[3],0,0,0,param_7);
            }
            param_3 = param_3 + 7;
          } while (param_3 != plVar17);
        }
        if (param_7 == 0) {
LAB_109288c60:
          _glBindBuffer(0x8f37,0);
          if (param_7 != 0) goto LAB_109288c70;
LAB_109288c7c:
          _glBindBuffer(0x8f36,0);
        }
        else {
          if (*(int *)(param_7 + 0x11c) != 0) {
            *(undefined4 *)(param_7 + 0x11c) = 0;
            goto LAB_109288c60;
          }
LAB_109288c70:
          if (*(int *)(param_7 + 0x118) != 0) {
            *(undefined4 *)(param_7 + 0x118) = 0;
            goto LAB_109288c7c;
          }
        }
        if (plStack_e0 != (long *)0x0) {
          plVar17 = plStack_e0 + 1;
          do {
            lVar16 = *plVar17;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar6) {
              *plVar17 = lVar16 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_e0);
          }
        }
        if (param_7 != 0) {
          if (*(int *)(param_7 + 0x130) == 0) goto LAB_109288cd8;
          *(undefined4 *)(param_7 + 0x130) = 0;
        }
        _glBindBuffer(0x88ec,0);
        goto LAB_109288cd8;
      }
      bVar13 = *(byte *)((long)param_5 + 0x24);
    }
  }
  else {
    bVar13 = 0;
  }
  ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
  if (0x56 < *(uint *)(param_2 + 0x40)) {
    ppuVar1 = &PTR_DAT_110ae4700;
  }
  bVar2 = *(byte *)(ppuVar1 + 3);
  bVar3 = *(byte *)((long)ppuVar1 + 0x19);
  if ((bVar13 & 1) != 0) {
    if (param_7 != 0) {
      if (*(int *)(param_7 + 0x130) == 0) goto LAB_1092886bc;
      *(undefined4 *)(param_7 + 0x130) = 0;
    }
    _glBindBuffer(0x88ec,0);
  }
LAB_1092886bc:
  plVar17 = param_3;
  FUN_109288430(param_3,param_4,param_2 + 0x24,*(undefined1 *)((long)param_5 + 0x51));
  plStack_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    lStack_c8 = *(long *)(param_1 + 0x58);
    if (lStack_c8 == 0) {
      lStack_c8 = 0;
    }
    else {
      FUN_10925ca24(lStack_c8,1,0,0,param_7);
    }
  }
  else {
    lStack_c8 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
  }
  if (param_4 != 0) {
    plVar11 = param_3 + param_4 * 7;
    do {
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
      if (0x56 < *(uint *)(param_2 + 0x40)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      bVar13 = *(byte *)((long)ppuVar1 + 0x1a);
      if (bVar13 == 0) {
        FUN_109243bf8(&UNK_10f62e152);
LAB_109288d34:
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x109288d38);
        (*pcVar9)();
      }
      bVar4 = *(byte *)(ppuVar1 + 3);
      uVar18 = *(uint *)(param_3 + 5);
      uVar10 = (ulong)uVar18;
      func_0x000109fc8e58(uVar10,*(undefined4 *)((long)param_3 + 0x2c));
      uVar7 = 0;
      if (bVar4 != 0) {
        uVar7 = ((uVar18 + bVar4) - 1) / (uint)bVar4;
      }
      uVar7 = uVar7 * bVar13;
      uVar18 = uVar7;
      if (*(uint *)(param_3 + 1) != 0) {
        uVar18 = *(uint *)(param_3 + 1);
      }
      uVar21 = (ulong)uVar18;
      uVar22 = param_3[2];
      if (uVar22 == 0) {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_2 + 0x40) * 4;
        if (0x56 < *(uint *)(param_2 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar15 = (uint)*(byte *)((long)ppuVar1 + 0x19);
        if (*(byte *)((long)ppuVar1 + 0x19) < 2) {
          uVar15 = 1;
        }
        uVar8 = 0;
        if (uVar15 != 0) {
          uVar8 = ((*(int *)((long)param_3 + 0x2c) + uVar15) - 1) / uVar15;
        }
        uVar22 = uVar8 * uVar21;
      }
      if ((((*(byte *)((long)param_5 + 0x51) & 1) == 0) && (uVar18 != uVar7 || uVar22 != uVar10)) ||
         (((uVar18 != uVar7 || uVar22 != uVar10) &&
          ((*(byte *)((long)param_5 + 0x51) ^ 0xff) & 1) == 0) && ((bVar3 & 0xfe) != 0 || 1 < bVar2)
         )) {
        lVar16 = *param_3;
        plVar14 = (long *)((long)plStack_70 - (long)plStack_78);
        if (plVar17 < plVar14 || (long)plVar17 - (long)plVar14 == 0) {
          if (plVar17 < plVar14) {
            plStack_70 = (long *)((long)plStack_78 + (long)plVar17);
          }
        }
        else {
          func_0x000107c27d58(&plStack_78,(long)plVar17 - (long)plVar14);
        }
        uVar18 = *(uint *)(param_3 + 6);
        if (uVar18 != 0) {
          uVar15 = 0;
          lVar16 = lStack_c8 + lVar16;
          uVar8 = 0;
          plVar14 = plStack_78;
          if (uVar21 != 0) {
            uVar8 = (uint)(uVar22 / uVar21);
          }
          do {
            if (uVar8 != 0) {
              lVar20 = 0;
              uVar18 = 0;
              do {
                _memcpy(plVar14,lVar16 + lVar20,(ulong)uVar7);
                plVar14 = (long *)((long)plVar14 + (ulong)uVar7);
                uVar18 = uVar18 + 1;
                lVar20 = lVar20 + uVar21;
              } while (uVar18 < uVar8);
              uVar18 = *(uint *)(param_3 + 6);
            }
            lVar16 = lVar16 + uVar22;
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar18);
        }
        FUN_10926eaf8(param_2,(long)param_3 + 0x1c,param_3 + 5,(int)param_3[3],plStack_78,0,0,
                      param_7);
      }
      else {
        FUN_10926eaf8(param_2,(long)param_3 + 0x1c,param_3 + 5,(int)param_3[3],lStack_c8 + *param_3,
                      uVar21,uVar22,param_7);
      }
      param_3 = param_3 + 7;
    } while (param_3 != plVar11);
  }
  if ((*(long *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_10925c194(*(long *)(param_1 + 0x58),param_7);
  }
  if (plStack_78 != (long *)0x0) {
    plStack_70 = plStack_78;
    __ZdlPv();
  }
LAB_109288cd8:
  (*(code *)param_5[0x12a])(0xcf2,0);
  (*(code *)param_5[0x12a])(0x806e,0);
  return;
}



/* Entry: 109288e38; end: 109288eb7;  */

void FUN_109288e38(long param_1)

{
  long lStack_30;
  undefined4 uStack_28;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  lStack_30 = param_1 + 0x70;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uStack_28 = 0;
  func_0x0001092898ac(&lStack_30,0x20);
  lStack_30 = param_1 + 0x78;
  uStack_28 = 0;
  func_0x000109289800(&lStack_30,8);
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



/* Entry: 109288eb8; end: 109288f17;  */

void FUN_109288eb8(long param_1,ulong param_2,long param_3,int param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puStack_30;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  if ((*(long *)(param_1 + 8 + (param_2 & 0xffffffff) * 8) != param_3) ||
     (*(int *)(lVar1 + 0x48) != param_4)) {
    *(long *)(param_1 + 8 + (param_2 & 0xffffffff) * 8) = param_3;
    *(int *)(lVar1 + 0x48) = param_4;
    if (7 < (uint)param_2) {
      puVar2 = &UNK_10f562bf3;
      FUN_109262df8();
      pcStack_18 = FUN_109288f18;
      if (*(ulong *)(puVar2 + 0x68) != param_2) {
        *(ulong *)(puVar2 + 0x68) = param_2;
        puStack_30 = puVar2 + 0x78;
        uStack_28 = 0;
        puStack_20 = &stack0xfffffffffffffff0;
        FUN_109289750(&puStack_30,8);
      }
      return;
    }
    *(ulong *)(param_1 + 0x78) = *(ulong *)(param_1 + 0x78) | 1L << (param_2 & 0x3f);
  }
  return;
}



/* Entry: 109288f18; end: 109288f5b;  */

void FUN_109288f18(long param_1,long param_2)

{
  long lStack_20;
  undefined4 uStack_18;
  
  if (*(long *)(param_1 + 0x68) != param_2) {
    *(long *)(param_1 + 0x68) = param_2;
    lStack_20 = param_1 + 0x78;
    uStack_18 = 0;
    FUN_109289750(&lStack_20,8);
  }
  return;
}



/* Entry: 109288f5c; end: 10928974f;  */

/* WARNING: Removing unreachable block (ram,0x0001092890ec) */
/* WARNING: Removing unreachable block (ram,0x0001092896f0) */

void FUN_109288f5c(long *param_1,long *****param_2,uint param_3)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  long *****ppppplVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  bool bVar11;
  code *pcVar12;
  long *plVar13;
  uint uVar14;
  long *****ppppplVar15;
  long lVar16;
  ulong uVar17;
  long ****pppplVar18;
  long lVar19;
  long *****ppppplVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint *puVar28;
  long lVar29;
  ulong uVar30;
  long ***ppplVar31;
  long ***ppplVar32;
  int iStack_9c;
  long ****pppplStack_80;
  ulong uStack_78;
  byte bStack_69;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 != param_3) || ((char)param_1[0xf] != '\0')) {
    lVar19 = *(long *)*param_1;
    lVar24 = param_1[0xd];
    lVar16 = *(long *)(lVar24 + 0x18);
    ppppplVar15 = param_2;
    lVar27 = lVar24;
    if ((*(byte *)(lVar24 + 0x8b0) & 1) == 0) {
      FUN_10925e060(lVar24 + 0x590);
      (*(code *)**(undefined8 **)(lVar24 + 0x590))(lVar24 + 0x590);
      *(undefined1 *)(lVar24 + 0x8b0) = 1;
      lVar27 = param_1[0xd];
    }
    uVar17 = *(ulong *)(lVar27 + 0x2d8);
    if (uVar17 != 0) {
      uVar21 = 0;
      do {
        if (uVar21 == 8) {
          plVar13 = (long *)&UNK_10f62bc82;
          FUN_109262df8();
          func_0x000104bd46a0();
          __Unwind_Resume();
          func_0x000104bd46a0();
          uVar5 = *(uint *)(plVar13 + 1);
          puVar22 = (ulong *)*plVar13;
          puVar23 = puVar22;
          if (uVar5 != 0) {
            ppppplVar20 = (long *****)(ulong)(0x40 - uVar5);
            ppppplVar4 = ppppplVar20;
            if (ppppplVar15 <= ppppplVar20) {
              ppppplVar4 = ppppplVar15;
            }
            puVar23 = puVar22 + 1;
            *puVar22 = *puVar22 |
                       0xffffffffffffffffU >> ((long)ppppplVar20 - (long)ppppplVar4 & 0x3fU) &
                       -1L << ((ulong)uVar5 & 0x3f);
            ppppplVar15 = (long *****)((long)ppppplVar15 - (long)ppppplVar4);
            *plVar13 = (long)puVar23;
          }
          uVar17 = (ulong)ppppplVar15 >> 6;
          if ((long *****)0x3f < ppppplVar15) {
            _memset(puVar23,0xff,uVar17 << 3);
          }
          if (((ulong)ppppplVar15 & 0x3f) != 0) {
            *plVar13 = (long)(puVar23 + uVar17);
            puVar23[uVar17] =
                 puVar23[uVar17] | 0xffffffffffffffffU >> (-((ulong)ppppplVar15 & 0x3f) & 0x3f);
          }
          return;
        }
        puVar1 = (uint *)(lVar27 + 600 + uVar21 * 0x10);
        uVar6 = puVar1[3];
        if ((((ulong)param_1[0xf] >> (uVar21 & 0x3f) & 1) != 0) || (uVar5 != param_3 && uVar6 == 1))
        {
          uVar7 = *puVar1;
          lVar29 = param_1[(ulong)uVar7 + 1];
          if (lVar29 != 0) {
            uVar8 = puVar1[1];
            uVar3 = uVar8;
            if (uVar6 != 1) {
              uVar3 = 0;
            }
            if ((param_3 == 0) || (uVar3 == 0)) {
              if ((uVar6 != 1 || param_3 == 0) || uVar3 == 0) goto LAB_1092890fc;
LAB_10928911c:
              uVar6 = 0;
              if (uVar8 != 0) {
                uVar6 = param_3 / uVar8;
              }
              iStack_9c = puVar1[2] * uVar6;
            }
            else {
              uVar10 = 0;
              if (uVar8 != 0) {
                uVar10 = param_3 / uVar8;
              }
              if (param_3 != uVar10 * uVar8) {
                FUN_109231308(&pppplStack_80,&UNK_10f562b4f);
                uVar17 = uStack_78;
                ppppplVar4 = (long *****)pppplStack_80;
                if (-1 < (char)bStack_69) {
                  uVar17 = (ulong)bStack_69;
                  ppppplVar4 = &pppplStack_80;
                }
                ppppplVar15 = (long *****)0x6;
                func_0x000109fd19d0(lVar19 + 0x810,6,0x10,ppppplVar4,uVar17);
              }
              if (uVar6 == 1) goto LAB_10928911c;
LAB_1092890fc:
              iStack_9c = 0;
            }
            lVar25 = lVar24 + 0x8e8 + (ulong)uVar7 * 0x184;
            if (*(int *)(lVar25 + 0x180) != 0) {
              uVar17 = 0;
              do {
                puVar28 = (uint *)(lVar25 + uVar17 * 0x18);
                ppplVar32 = (long ***)
                            (ulong)(*(int *)((long)param_1 + (ulong)*puVar1 * 4 + 0x48) + iStack_9c
                                   + puVar28[5]);
                lVar26 = *(long *)(lVar29 + 0x58);
                if (lVar26 == 0) {
LAB_1092891b0:
                  if (*(long *)(lVar29 + 0x50) == 0) {
                    lVar26 = *(long *)(lVar29 + 0x58);
                    if (lVar26 != 0) {
                      ppppplVar15 = (long *****)0x1;
                      FUN_10925ca24(lVar26,1,0,0,param_2);
                    }
                  }
                  else {
                    lVar26 = *(long *)(*(long *)(lVar29 + 0x50) + 0x10);
                  }
                  ppplVar31 = (long ***)(lVar26 + (long)ppplVar32);
                  bVar11 = true;
                }
                else {
                  pppplStack_80 = *(long *****)(lVar26 + 0x50);
                  uStack_78 = *(ulong *)(lVar26 + 0x18);
                  ppppplVar15 = param_2;
                  FUN_10925bdc8(lVar26,param_2,&pppplStack_80);
                  if (*(int *)(lVar26 + 0x2c) == 0) goto LAB_1092891b0;
                  bVar11 = false;
                  ppplVar31 = ppplVar32;
                }
                uVar6 = *puVar28;
                uVar30 = (ulong)uVar6;
                if (puVar1[3] == 2) {
                  if (0x1f < uVar6) {
LAB_1092896c4:
                    FUN_109262df8(&UNK_10f562bf3);
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x1092896d4);
                    (*pcVar12)();
                  }
                  param_1[0xe] = param_1[0xe] & (1L << (uVar30 & 0x3f) ^ 0xffffffffffffffffU);
                  if (param_2 == (long *****)0x0) {
LAB_109289240:
                    _glDisableVertexAttribArray(uVar30);
                  }
                  else {
                    pcVar2 = (char *)((long)param_2[0x50] + uVar30 * 2);
                    if (pcVar2[1] != '\x01' || *pcVar2 != '\0') {
                      pcVar2[0] = '\0';
                      pcVar2[1] = '\x01';
                      goto LAB_109289240;
                    }
                  }
                  if (!bVar11) {
                    if (*(long *)(lVar29 + 0x50) == 0) {
                      lVar26 = *(long *)(lVar29 + 0x58);
                      if (lVar26 != 0) {
                        ppppplVar15 = (long *****)0x1;
                        FUN_10925ca24(lVar26,1,0,0,param_2);
                      }
                    }
                    else {
                      lVar26 = *(long *)(*(long *)(lVar29 + 0x50) + 0x10);
                    }
                    ppplVar31 = (long ***)(lVar26 + (long)ppplVar32);
                  }
                  uVar6 = puVar28[2];
                  if ((int)uVar6 < 0x1402) {
                    if (uVar6 == 0x1400) {
                      pppplStack_80 = (long ****)0x0;
                      uStack_78 = 0;
                      if (0 < (int)puVar28[1]) {
                        lVar26 = 0;
                        do {
                          *(int *)((long)&pppplStack_80 + lVar26 * 4) =
                               (int)*(char *)((long)ppplVar31 + lVar26);
                          lVar26 = lVar26 + 1;
                        } while (lVar26 < (int)puVar28[1]);
                      }
                      ppppplVar15 = &pppplStack_80;
                      (**(code **)(*param_1 + 0x8e0))(uVar30);
                    }
                    else if (uVar6 == 0x1401) {
                      pppplStack_80 = (long ****)0x0;
                      uStack_78 = 0;
                      if (0 < (int)puVar28[1]) {
                        lVar26 = 0;
                        do {
                          *(uint *)((long)&pppplStack_80 + lVar26 * 4) =
                               (uint)*(byte *)((long)ppplVar31 + lVar26);
                          lVar26 = lVar26 + 1;
                        } while (lVar26 < (int)puVar28[1]);
                      }
                      ppppplVar15 = &pppplStack_80;
                      (**(code **)(*param_1 + 0x8e8))(uVar30);
                    }
                  }
                  else if (uVar6 == 0x1402) {
                    pppplStack_80 = (long ****)0x0;
                    uStack_78 = 0;
                    if (0 < (int)puVar28[1]) {
                      lVar26 = 0;
                      do {
                        *(int *)((long)&pppplStack_80 + lVar26 * 4) =
                             (int)*(short *)((long)ppplVar31 + lVar26 * 2);
                        lVar26 = lVar26 + 1;
                      } while (lVar26 < (int)puVar28[1]);
                    }
                    ppppplVar15 = &pppplStack_80;
                    (**(code **)(*param_1 + 0x8e0))(uVar30);
                  }
                  else if (uVar6 == 0x1403) {
                    pppplStack_80 = (long ****)0x0;
                    uStack_78 = 0;
                    if (0 < (int)puVar28[1]) {
                      lVar26 = 0;
                      do {
                        *(uint *)((long)&pppplStack_80 + lVar26 * 4) =
                             (uint)*(ushort *)((long)ppplVar31 + lVar26 * 2);
                        lVar26 = lVar26 + 1;
                      } while (lVar26 < (int)puVar28[1]);
                    }
                    ppppplVar15 = &pppplStack_80;
                    (**(code **)(*param_1 + 0x8e8))(uVar30);
                  }
                  else if (uVar6 == 0x1406) {
                    pppplStack_80 = (long ****)0x0;
                    uStack_78 = 0;
                    _memcpy(&pppplStack_80,ppplVar31,(long)(int)puVar28[1] << 2);
                    ppppplVar15 = &pppplStack_80;
                    _glVertexAttrib4fv(uVar30);
                  }
LAB_1092895c0:
                  if ((*(long *)(lVar29 + 0x50) == 0) && (*(long *)(lVar29 + 0x58) != 0)) {
                    ppppplVar15 = param_2;
                    FUN_10925c194();
                  }
                }
                else {
                  if (0x1f < uVar6) goto LAB_1092896c4;
                  param_1[0xe] = param_1[0xe] | 1L << (uVar30 & 0x3f);
                  if (param_2 == (long *****)0x0) {
LAB_1092892a8:
                    _glEnableVertexAttribArray(uVar30);
                  }
                  else {
                    pcVar2 = (char *)((long)param_2[0x50] + uVar30 * 2);
                    if (pcVar2[1] != '\x01' || *pcVar2 != '\x01') {
                      pcVar2[0] = '\x01';
                      pcVar2[1] = '\x01';
                      goto LAB_1092892a8;
                    }
                  }
                  uVar7 = puVar28[1];
                  uVar8 = puVar28[2];
                  cVar9 = (char)puVar28[3];
                  uVar10 = puVar28[4];
                  lVar26 = *(long *)(lVar29 + 0x58);
                  ppppplVar15 = (long *****)(ulong)uVar3;
                  if (lVar26 == 0) {
                    uVar14 = 0;
                    if (param_2 != (long *****)0x0) goto LAB_1092892f8;
LAB_109289394:
                    _glBindBuffer(0x8892);
LAB_10928939c:
                    _glVertexAttribPointer(uVar30,uVar7,uVar8,cVar9,uVar10,ppplVar31);
                    lVar26 = *param_1;
                    if (param_2 != (long *****)0x0) goto LAB_1092893c8;
LAB_1092893e0:
                    (**(code **)(lVar26 + 0x8d8))(uVar30);
                  }
                  else {
                    pppplStack_80 = *(long *****)(lVar26 + 0x50);
                    uStack_78 = *(ulong *)(lVar26 + 0x18);
                    FUN_10925bdc8(lVar26,param_2,&pppplStack_80);
                    uVar14 = *(uint *)(lVar26 + 0x2c);
                    if (param_2 == (long *****)0x0) goto LAB_109289394;
LAB_1092892f8:
                    pppplVar18 = param_2[0x56] + (ulong)uVar6 * 5;
                    if (((((*(char *)(pppplVar18 + 4) != '\x01') || (*(uint *)pppplVar18 != uVar7))
                         || (*(uint *)((long)pppplVar18 + 4) != uVar8)) ||
                        ((*(char *)(pppplVar18 + 1) != cVar9 ||
                         (*(uint *)((long)pppplVar18 + 0xc) != uVar10)))) ||
                       ((pppplVar18[2] != ppplVar31 || (*(uint *)(pppplVar18 + 3) != uVar14)))) {
                      *(undefined1 *)(pppplVar18 + 4) = 1;
                      *(uint *)pppplVar18 = uVar7;
                      *(uint *)((long)pppplVar18 + 4) = uVar8;
                      *(char *)(pppplVar18 + 1) = cVar9;
                      *(uint *)((long)pppplVar18 + 0xc) = uVar10;
                      pppplVar18[2] = ppplVar31;
                      *(uint *)(pppplVar18 + 3) = uVar14;
                      if (*(uint *)((long)param_2 + 0x114) != uVar14) {
                        *(uint *)((long)param_2 + 0x114) = uVar14;
                        goto LAB_109289394;
                      }
                      goto LAB_10928939c;
                    }
                    lVar26 = *param_1;
LAB_1092893c8:
                    if (*(uint *)((long)param_2[0x53] + uVar30 * 4) != uVar3) {
                      *(uint *)((long)param_2[0x53] + uVar30 * 4) = uVar3;
                      goto LAB_1092893e0;
                    }
                  }
                  if (bVar11) goto LAB_1092895c0;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(uint *)(lVar25 + 0x180));
            }
            uVar17 = *(ulong *)(lVar27 + 0x2d8);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar17);
    }
    uVar5 = *(uint *)(lVar16 + 0xfc);
    if (uVar5 != 0) {
      lVar27 = 0;
      uVar17 = 0;
      if (0x1f < uVar5) {
        uVar5 = 0x20;
      }
      do {
        if (((ulong)param_1[0xe] >> (uVar17 & 0x3f) & 1) == 0) {
          if (param_2 != (long *****)0x0) {
            pcVar2 = (char *)((long)param_2[0x50] + lVar27);
            if (pcVar2[1] == '\x01' && *pcVar2 == '\0') goto LAB_109289674;
            pcVar2[0] = '\0';
            pcVar2[1] = '\x01';
          }
          _glDisableVertexAttribArray(uVar17);
        }
LAB_109289674:
        uVar17 = uVar17 + 1;
        lVar27 = lVar27 + 2;
      } while (uVar5 != uVar17);
    }
    pppplStack_80 = (long ****)(param_1 + 0xf);
    uStack_78 = uStack_78 & 0xffffffff00000000;
    func_0x000109289800(&pppplStack_80,8);
    *(uint *)(param_1 + 0x10) = param_3;
  }
  return;
}



/* Entry: 109289750; end: 109289957;  */

void FUN_109289750(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 | 0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f)
    ;
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _memset(puVar4,0xff,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] = puVar4[uVar5] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}



/* Entry: 109289958; end: 109289ae3;  */

undefined8 FUN_109289958(undefined4 param_1,undefined4 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  puVar2 = PTR__kCFTypeDictionaryValueCallBacks_11034ac20;
  puVar1 = PTR__kCFTypeDictionaryKeyCallBacks_11034ac18;
  uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
  uVar4 = uVar6;
  _CFDictionaryCreate(uVar6,0,0,0,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                      PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
  uVar5 = uVar6;
  _CFDictionaryCreateMutable(uVar6,1,puVar1,puVar2);
  uVar7 = *(undefined8 *)PTR__kCFBooleanTrue_11034ab90;
  _CFDictionarySetValue();
  _CFDictionarySetValue
            (uVar5,*(undefined8 *)PTR__kCVPixelBufferIOSurfacePropertiesKey_11034a390,uVar4);
  _CFDictionarySetValue
            (uVar5,*(undefined8 *)PTR__kCVPixelBufferMetalCompatibilityKey_11034a398,uVar7);
  uStack_58 = 0;
  _CVPixelBufferCreate
            (uVar6,param_1,param_2,*(undefined4 *)(&UNK_10dfbff98 + (param_3 & 0xffffffff) * 4),
             uVar5,&uStack_58);
  _CFRelease(uVar5);
  _CFRelease(uVar4);
  if ((int)uVar6 == 0) {
    return uStack_58;
  }
  __ZNSt3__19to_stringEi(auStack_88,uVar6);
  FUN_10928a5e0(auStack_70,&UNK_10f562dbf,auStack_88);
  FUN_10924a434(auStack_70);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109289ab0);
  (*pcVar3)();
}



/* Entry: 109289ae4; end: 109289ba7;  */

long * FUN_109289ae4(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  puVar3 = (uint *)param_1[1];
  if (puVar3 < (uint *)param_1[2]) {
    puVar12 = puVar3 + 1;
    *puVar3 = *param_2;
    plVar6 = param_1;
  }
  else {
    lVar11 = (long)puVar3 - *param_1;
    uVar7 = (lVar11 >> 2) + 1;
    if (uVar7 >> 0x3e != 0) {
      FUN_10928b0f8();
      param_1[0xb] = (long)&PTR_FUN_110ae74c8;
      param_1[0xc] = *(long *)param_2;
      uVar2 = param_2[3];
      *(uint *)(param_1 + 0xd) = param_2[2];
      *(undefined4 *)((long)param_1 + 0x6c) = 1;
      uVar1 = param_2[4];
      *(uint *)(param_1 + 0xe) = param_2[5];
      *(uint *)((long)param_1 + 0x74) = uVar2;
      *(undefined4 *)(param_1 + 0xf) = 1;
      *(uint *)((long)param_1 + 0x7c) = uVar1;
      param_1[0x11] = 0x500000004;
      param_1[0x10] = 0x300000002;
      *(undefined4 *)(param_1 + 0x12) = 0;
      uVar9 = *(undefined8 *)(param_2 + 4);
      uVar13 = *(undefined8 *)param_2;
      *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)((long)param_1 + 0x94) = uVar13;
      *(undefined8 *)((long)param_1 + 0xa4) = uVar9;
      param_1[0x17] = 0;
      param_1[0x16] = 0;
      param_1[0x19] = 0;
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
      param_1[0x1a] = 0;
      param_1[0x1d] = 0;
      param_1[0x1c] = 0;
      param_1[0x1e] = 0;
      *(undefined4 *)(param_1 + 0x1f) = 0;
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      *param_1 = (long)&PTR_FUN_110ae72f8;
      param_1[0xb] = (long)&PTR_DAT_110ae7368;
      param_1[0x22] = (long)&PTR_FUN_110ae73c0;
      param_1[0x23] = (long)&PTR_DAT_110ae7408;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      param_1[10] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[7] = 0;
      uVar7 = (ulong)*param_2;
      FUN_109289958(uVar7,param_2[1],param_2[4]);
      param_1[1] = uVar7;
      param_1[2] = 0;
      uStack_64 = 1;
      FUN_109289ae4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x58,&uStack_64);
      uStack_68 = 2;
      FUN_109289ae4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x58,&uStack_68);
      return param_1;
    }
    uVar8 = param_1[2] - *param_1;
    uVar10 = (long)uVar8 >> 1;
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    if (0x7ffffffffffffffb < uVar8) {
      uVar10 = 0x3fffffffffffffff;
    }
    plVar5 = param_1;
    FUN_10928b10c();
    lVar4 = *param_1;
    puVar3 = (uint *)((long)plVar5 + lVar11);
    lVar11 = (long)puVar3 - (param_1[1] - lVar4);
    puVar12 = puVar3 + 1;
    *puVar3 = *param_2;
    _memcpy(lVar11,lVar4);
    plVar6 = (long *)*param_1;
    *param_1 = lVar11;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)plVar5 + uVar10 * 4;
    if (plVar6 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return plVar6;
}



/* Entry: 109289ba8; end: 109289d07;  */

long * FUN_109289ba8(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  param_1[0xb] = (long)&PTR_FUN_110ae74c8;
  param_1[0xc] = *(long *)param_2;
  uVar2 = param_2[3];
  *(uint *)(param_1 + 0xd) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x6c) = 1;
  uVar1 = param_2[4];
  *(uint *)(param_1 + 0xe) = param_2[5];
  *(uint *)((long)param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *(uint *)((long)param_1 + 0x7c) = uVar1;
  param_1[0x11] = 0x500000004;
  param_1[0x10] = 0x300000002;
  *(undefined4 *)(param_1 + 0x12) = 0;
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)((long)param_1 + 0x9c) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)((long)param_1 + 0x94) = uVar5;
  *(undefined8 *)((long)param_1 + 0xa4) = uVar4;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = (long)&PTR_FUN_110ae72f8;
  param_1[0xb] = (long)&PTR_DAT_110ae7368;
  param_1[0x22] = (long)&PTR_FUN_110ae73c0;
  param_1[0x23] = (long)&PTR_DAT_110ae7408;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  uVar3 = (ulong)*param_2;
  FUN_109289958(uVar3,param_2[1],param_2[4]);
  param_1[1] = uVar3;
  param_1[2] = 0;
  uStack_34 = 1;
  FUN_109289ae4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x58,&uStack_34);
  uStack_38 = 2;
  FUN_109289ae4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x58,&uStack_38);
  return param_1;
}



/* Entry: 109289d08; end: 10928a037;  */

long * FUN_109289d08(long *param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  param_1[0xb] = (long)&PTR_DAT_110ae7368;
  param_1[0xd] = 0x100000000;
  param_1[0xc] = 0;
  param_1[0xf] = 1;
  param_1[0xe] = 0;
  param_1[0x11] = 0x500000004;
  param_1[0x10] = 0x300000002;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = (long)&PTR_FUN_110ae72f8;
  param_1[0x22] = (long)&PTR_FUN_110ae73c0;
  param_1[0x23] = (long)&PTR_DAT_110ae7408;
  plVar8 = param_1 + 1;
  param_1[2] = 0;
  *plVar8 = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  if (param_2 == 0) {
    FUN_109243bf8(&UNK_10f562c14);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109289fec);
    (*pcVar1)();
  }
  _CVPixelBufferRetain();
  param_1[1] = param_2;
  param_1[2] = param_3;
  _CVPixelBufferGetPlaneCount();
  if ((param_2 == 0) || (param_2 <= (ulong)param_1[2])) {
    uVar7 = (undefined4)*plVar8;
    _CVPixelBufferGetWidth();
    uVar2 = (undefined4)*plVar8;
    _CVPixelBufferGetHeight();
  }
  else {
    uVar7 = (undefined4)*plVar8;
    _CVPixelBufferGetWidthOfPlane();
    lVar5 = param_1[1];
    _CVPixelBufferGetHeightOfPlane(lVar5,param_1[2]);
    uVar2 = (undefined4)lVar5;
  }
  iVar3 = (int)*plVar8;
  _CVPixelBufferGetPixelFormatType();
  uVar4 = 0x27;
  if (iVar3 < 0x52476841) {
    if (iVar3 < 0x34323076) {
      if (iVar3 == 0x32433038) {
        uVar4 = 2;
        goto LAB_109289f04;
      }
      if (iVar3 != 0x34323066) goto LAB_109289f04;
    }
    else if (iVar3 != 0x34323076) {
      if (iVar3 == 0x4c303038) {
        uVar4 = 1;
      }
      goto LAB_109289f04;
    }
    uVar4 = 1;
    if (param_1[2] != 0) {
      uVar4 = 2;
    }
    goto LAB_109289f04;
  }
  if (iVar3 < 0x66646973) {
    if (iVar3 == 0x52476841) {
      uVar4 = 0x22;
      goto LAB_109289f04;
    }
    if (iVar3 != 0x66646570) goto LAB_109289f04;
  }
  else if (iVar3 != 0x66646973) {
    if ((iVar3 == 0x68646570) || (iVar3 == 0x68646973)) {
      uVar4 = 0x20;
    }
    goto LAB_109289f04;
  }
  uVar4 = 0x23;
LAB_109289f04:
  lVar5 = *param_1;
  lVar6 = *(long *)(lVar5 + -0x18);
  *(undefined4 *)((long)param_1 + lVar6 + 0x3c) = uVar7;
  *(undefined4 *)((long)param_1 + lVar6 + 0x40) = uVar2;
  *(undefined4 *)((long)param_1 + lVar6 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x4c) = uVar4;
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x48) = 0x35;
  lVar6 = *(long *)(lVar5 + -0x18);
  *(undefined4 *)((long)param_1 + lVar6 + 8) = uVar7;
  *(undefined4 *)((long)param_1 + lVar6 + 0xc) = uVar2;
  *(undefined4 *)((long)param_1 + lVar6 + 0x10) = 1;
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x24) = uVar4;
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x1c) =
       *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x48);
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x18) = 0;
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x14) = 1;
  *(undefined4 *)((long)param_1 + *(long *)(lVar5 + -0x18) + 0x20) = 1;
  uStack_44 = 1;
  FUN_109289ae4((long)param_1 + *(long *)(lVar5 + -0x18) + 0x58,&uStack_44);
  uStack_48 = 2;
  FUN_109289ae4((long)param_1 + *(long *)(*param_1 + -0x18) + 0x58,&uStack_48);
  return param_1;
}



/* Entry: 10928a038; end: 10928a11b;  */

undefined8 * FUN_10928a038(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xb] = &PTR_DAT_110ae7368;
  *param_1 = &PTR_FUN_110ae72f8;
  param_1[0x22] = &PTR_FUN_110ae73c0;
  param_1[0x23] = &PTR_DAT_110ae7408;
  if (param_1[5] != 0) {
    _CFRelease();
    param_1[5] = 0;
  }
  if (param_1[4] != 0) {
    _CVOpenGLESTextureCacheFlush(param_1[4],0);
    param_1[4] = 0;
  }
  if (param_1[8] != 0) {
    _CFRelease();
    param_1[8] = 0;
  }
  uVar1 = param_1[9];
  param_1[9] = 0;
  _objc_release(uVar1);
  uVar1 = param_1[10];
  param_1[10] = 0;
  _objc_release(uVar1);
  if (param_1[7] != 0) {
    _CVMetalTextureCacheFlush(param_1[7],0);
    param_1[7] = 0;
  }
  if (param_1[1] != 0) {
    _CFRelease();
    param_1[1] = 0;
  }
  _objc_release(param_1[10]);
  _objc_release(param_1[9]);
  param_1[0xb] = &PTR_DAT_110b981f0;
  func_0x00010928b19c(param_1 + 0x20);
  func_0x00010928b140(param_1 + 0xb);
  return param_1;
}



/* Entry: 10928a11c; end: 10928a14b;  */

undefined8 * FUN_10928a11c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x28));
  puVar1[0xb] = &PTR_DAT_110ae7368;
  *puVar1 = &PTR_FUN_110ae72f8;
  puVar1[0x22] = &PTR_FUN_110ae73c0;
  puVar1[0x23] = &PTR_DAT_110ae7408;
  if (puVar1[5] != 0) {
    _CFRelease();
    puVar1[5] = 0;
  }
  if (puVar1[4] != 0) {
    _CVOpenGLESTextureCacheFlush(puVar1[4],0);
    puVar1[4] = 0;
  }
  if (puVar1[8] != 0) {
    _CFRelease();
    puVar1[8] = 0;
  }
  uVar2 = puVar1[9];
  puVar1[9] = 0;
  _objc_release(uVar2);
  uVar2 = puVar1[10];
  puVar1[10] = 0;
  _objc_release(uVar2);
  if (puVar1[7] != 0) {
    _CVMetalTextureCacheFlush(puVar1[7],0);
    puVar1[7] = 0;
  }
  if (puVar1[1] != 0) {
    _CFRelease();
    puVar1[1] = 0;
  }
  _objc_release(puVar1[10]);
  _objc_release(puVar1[9]);
  puVar1[0xb] = &PTR_DAT_110b981f0;
  func_0x00010928b19c(puVar1 + 0x20);
  func_0x00010928b140(puVar1 + 0xb);
  return puVar1;
}



/* Entry: 10928a14c; end: 10928a15f;  */

void FUN_10928a14c(void)

{
  FUN_10928a038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10928a160; end: 10928a21f;  */

void FUN_10928a160(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x28);
  FUN_10928a038((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10928a220; end: 10928a567;  */

void FUN_10928a220(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_78 [24];
  long alStack_60 [3];
  long lStack_48;
  
  puVar3 = PTR__kCFAllocatorDefault_11034ab78;
  if ((int)param_1[6] != 0) {
    return;
  }
  if (param_1[1] == 0) {
    FUN_109243bf8(&UNK_10f562c48);
  }
  else {
    lVar17 = param_1[4];
    if (lVar17 == 0) {
      plVar6 = param_1;
      FUN_109374fe0();
      if (plVar6 == (long *)0x0) {
        param_1[4] = 0;
        goto LAB_10928a48c;
      }
      if ((bRam0000000113732a30 & 1) == 0) goto LAB_10928a498;
LAB_10928a27c:
      if ((bRam0000000113732a38 & 1) == 0) {
        iVar5 = 0x13732a38;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          uRam0000000113732a68 = 0;
          uRam0000000113732a60 = 0;
          uRam0000000113732a58 = 0;
          lRam0000000113732a50 = 0;
          uRam0000000113732a70 = 0x3f800000;
          ___cxa_atexit(FUN_10928b1fc,0x113732a50,0x100000000);
          ___cxa_guard_release(0x113732a38);
        }
      }
      __ZNSt3__15mutex4lockEv(0x1132ce9a0);
      if (uRam0000000113732a58 != 0) {
        uVar12 = ((ulong)(uint)((int)plVar6 << 3) + 8 ^ (ulong)plVar6 >> 0x20) * -0x622015f714c7d297
        ;
        uVar12 = ((ulong)plVar6 >> 0x20 ^ uVar12 >> 0x2f ^ uVar12) * -0x622015f714c7d297;
        uVar12 = (uVar12 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
        uVar13 = uRam0000000113732a58 - 1;
        if ((uRam0000000113732a58 & uVar13) == 0) {
          uVar14 = uVar13 & uVar12;
        }
        else {
          uVar14 = uVar12;
          if (uRam0000000113732a58 <= uVar12) {
            uVar14 = 0;
            if (uRam0000000113732a58 != 0) {
              uVar14 = uVar12 / uRam0000000113732a58;
            }
            uVar14 = uVar12 - uVar14 * uRam0000000113732a58;
          }
        }
        plVar15 = *(long **)(lRam0000000113732a50 + uVar14 * 8);
        if (plVar15 != (long *)0x0) {
          do {
            while( true ) {
              plVar15 = (long *)*plVar15;
              if (plVar15 == (long *)0x0) goto LAB_10928a360;
              uVar16 = plVar15[1];
              if (uVar16 != uVar12) break;
              if ((long *)plVar15[2] == plVar6) {
                lVar17 = plVar15[3];
                goto LAB_10928a39c;
              }
            }
            if ((uRam0000000113732a58 & uVar13) == 0) {
              uVar16 = uVar16 & uVar13;
            }
            else if (uRam0000000113732a58 <= uVar16) {
              uVar2 = 0;
              if (uRam0000000113732a58 != 0) {
                uVar2 = uVar16 / uRam0000000113732a58;
              }
              uVar16 = uVar16 - uVar2 * uRam0000000113732a58;
            }
          } while (uVar16 == uVar14);
        }
      }
LAB_10928a360:
      alStack_60[0] = 0;
      uVar7 = *(undefined8 *)puVar3;
      _CVOpenGLESTextureCacheCreate(uVar7,0,plVar6,0,alStack_60);
      if ((int)uVar7 == 0) {
        FUN_10928b244(plVar6,plVar6,alStack_60[0]);
        lVar17 = alStack_60[0];
      }
      else {
        lVar17 = 0;
      }
LAB_10928a39c:
      __ZNSt3__15mutex6unlockEv(0x1132ce9a0);
      param_1[4] = lVar17;
      if (lVar17 == 0) {
LAB_10928a48c:
        plVar6 = (long *)0x0;
        FUN_109243bf8(&UNK_10f562c5d);
LAB_10928a498:
        iVar5 = 0x13732a30;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132ce9a0,0x100000000);
          ___cxa_guard_release(0x113732a30);
        }
        goto LAB_10928a27c;
      }
    }
    lVar9 = *(long *)(*param_1 + -0x18);
    uVar1 = *(uint *)((long)param_1 + lVar9 + 0x4c);
    if ((uVar1 == 0x27) || (uVar1 == 4)) {
      uVar8 = 0x1908;
      uVar10 = 0x1401;
      uVar11 = 0x80e1;
    }
    else {
      param_2 = param_2 + (ulong)uVar1 * 0xc;
      uVar10 = *(undefined4 *)(param_2 + 0x254);
      uVar11 = *(undefined4 *)(param_2 + 0x250);
      uVar8 = *(undefined4 *)(param_2 + 0x24c);
    }
    lStack_48 = 0;
    uVar7 = *(undefined8 *)puVar3;
    _CVOpenGLESTextureCacheCreateTextureFromImage
              (uVar7,lVar17,param_1[1],0,0xde1,uVar8,*(undefined4 *)((long)param_1 + lVar9 + 0x3c),
               *(undefined4 *)((long)param_1 + lVar9 + 0x40),uVar11,uVar10,param_1[2],&lStack_48);
    if ((int)uVar7 == 0) {
      param_1[5] = lStack_48;
      _CVOpenGLESTextureGetName();
      *(int *)(param_1 + 6) = (int)lStack_48;
      return;
    }
  }
  __ZNSt3__19to_stringEi(auStack_78);
  FUN_10928a5e0(alStack_60,&UNK_10f562c86,auStack_78);
  FUN_10924a434(alStack_60);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10928a488);
  (*pcVar4)();
}



/* Entry: 10928a568; end: 10928a5cf;  */

int FUN_10928a568(long *param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x20);
  iVar2 = *(int *)(lVar1 + 0x30);
  if (iVar2 == 0) {
    FUN_10928a220(lVar1);
    iVar2 = *(int *)(lVar1 + 0x30);
  }
  return iVar2;
}



/* Entry: 10928a5d0; end: 10928a5df;  */

void FUN_10928a5d0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x28);
  lVar2 = *(long *)(lVar1 + 0x28);
  if (lVar2 == 0) {
    FUN_10928a220(lVar1);
    lVar2 = *(long *)(lVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbbe88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CVOpenGLESTextureGetTarget_11034a1e0)(lVar2);
  return;
}



/* Entry: 10928a5e0; end: 10928a63b;  */

void FUN_10928a5e0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  _strlen();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (param_3,0,param_2,uVar1);
  uVar1 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar1;
  param_1[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



/* Entry: 10928a63c; end: 10928ad53;  */

void FUN_10928a63c(long *param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x19;
  ulong unaff_x22;
  long lStack_98;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  
  puVar3 = PTR__kCFAllocatorDefault_11034ab78;
  if (param_1[1] == 0) {
    FUN_109243bf8(&UNK_10f562c48);
  }
  else {
    if (param_1[7] == 0) {
      _objc_retain(param_2);
      if (param_2 == 0) {
        param_1[7] = 0;
        goto LAB_10928ac48;
      }
      if ((bRam0000000113732a40 & 1) == 0) goto LAB_10928ac54;
LAB_10928a698:
      if ((bRam0000000113732a48 & 1) == 0) {
        iVar5 = 0x13732a48;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          uRam0000000113732a90 = 0;
          plRam0000000113732a88 = (long *)0x0;
          uRam0000000113732a80 = 0;
          lRam0000000113732a78 = 0;
          fRam0000000113732a98 = 1.0;
          ___cxa_atexit(FUN_10928b644,0x113732a78,0x100000000);
          ___cxa_guard_release(0x113732a48);
        }
      }
      __ZNSt3__15mutex4lockEv(0x1132ce9e0);
      uVar10 = ((ulong)(uint)((int)param_2 << 3) + 8 ^ param_2 >> 0x20) * -0x622015f714c7d297;
      uVar10 = (param_2 >> 0x20 ^ uVar10 >> 0x2f ^ uVar10) * -0x622015f714c7d297;
      uVar10 = (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
      if (uRam0000000113732a80 != 0) {
        uVar11 = uRam0000000113732a80 - 1;
        if ((uRam0000000113732a80 & uVar11) == 0) {
          uVar13 = uVar11 & uVar10;
        }
        else {
          uVar13 = uVar10;
          if (uRam0000000113732a80 <= uVar10) {
            uVar13 = 0;
            if (uRam0000000113732a80 != 0) {
              uVar13 = uVar10 / uRam0000000113732a80;
            }
            uVar13 = uVar10 - uVar13 * uRam0000000113732a80;
          }
        }
        plVar14 = *(long **)(lRam0000000113732a78 + uVar13 * 8);
        if (plVar14 != (long *)0x0) {
          do {
            while( true ) {
              plVar14 = (long *)*plVar14;
              if (plVar14 == (long *)0x0) goto LAB_10928a77c;
              uVar17 = plVar14[1];
              if (uVar17 != uVar10) break;
              if (plVar14[2] == param_2) {
                lVar7 = plVar14[3];
                goto LAB_10928aae8;
              }
            }
            if ((uRam0000000113732a80 & uVar11) == 0) {
              uVar17 = uVar17 & uVar11;
            }
            else if (uRam0000000113732a80 <= uVar17) {
              uVar8 = 0;
              if (uRam0000000113732a80 != 0) {
                uVar8 = uVar17 / uRam0000000113732a80;
              }
              uVar17 = uVar17 - uVar8 * uRam0000000113732a80;
            }
          } while (uVar17 == uVar13);
        }
      }
LAB_10928a77c:
      alStack_78[0] = 0;
      uVar6 = *(undefined8 *)puVar3;
      _CVMetalTextureCacheCreate(uVar6,0,param_2,0,alStack_78);
      lVar7 = alStack_78[0];
      uVar11 = uRam0000000113732a80;
      if ((int)uVar6 == 0) {
        if (uRam0000000113732a80 != 0) {
          uVar13 = uRam0000000113732a80 - 1;
          if ((uRam0000000113732a80 & uVar13) == 0) {
            unaff_x22 = uVar13 & uVar10;
          }
          else {
            unaff_x22 = uVar10;
            if (uRam0000000113732a80 <= uVar10) {
              uVar17 = 0;
              if (uRam0000000113732a80 != 0) {
                uVar17 = uVar10 / uRam0000000113732a80;
              }
              unaff_x22 = uVar10 - uVar17 * uRam0000000113732a80;
            }
          }
          plVar14 = *(long **)(lRam0000000113732a78 + unaff_x22 * 8);
          if (plVar14 != (long *)0x0) {
            do {
              while( true ) {
                plVar14 = (long *)*plVar14;
                if (plVar14 == (long *)0x0) goto LAB_10928a838;
                uVar17 = plVar14[1];
                if (uVar17 != uVar10) break;
                if (plVar14[2] == param_2) goto LAB_10928aae8;
              }
              if ((uRam0000000113732a80 & uVar13) == 0) {
                uVar17 = uVar17 & uVar13;
              }
              else if (uRam0000000113732a80 <= uVar17) {
                uVar8 = 0;
                if (uRam0000000113732a80 != 0) {
                  uVar8 = uVar17 / uRam0000000113732a80;
                }
                uVar17 = uVar17 - uVar8 * uRam0000000113732a80;
              }
            } while (uVar17 == unaff_x22);
          }
        }
LAB_10928a838:
        plVar14 = (long *)0x20;
        __Znwm();
        *plVar14 = 0;
        plVar14[1] = uVar10;
        plVar14[2] = param_2;
        plVar14[3] = lVar7;
        if ((uVar11 == 0) ||
           (fRam0000000113732a98 * (float)uVar11 < (float)(uRam0000000113732a90 + 1))) {
          uVar13 = 1;
          if (2 < uVar11) {
            uVar13 = (ulong)((uVar11 & uVar11 - 1) != 0);
          }
          uVar13 = uVar13 | uVar11 << 1;
          uVar17 = (ulong)((float)(uRam0000000113732a90 + 1) / fRam0000000113732a98);
          if (uVar13 <= uVar17) {
            uVar13 = uVar17;
          }
          uVar17 = uVar11;
          if (uVar13 - 1 == 0) {
            uVar13 = 2;
          }
          else if ((uVar13 & uVar13 - 1) != 0) {
            __ZNSt3__112__next_primeEm();
            uVar17 = uRam0000000113732a80;
          }
          if (uVar17 < uVar13) {
LAB_10928a8d8:
            if (uVar13 >> 0x3d != 0) {
              func_0x000104c4f740();
              goto LAB_10928ace0;
            }
            lVar9 = uVar13 << 3;
            __Znwm();
            lVar7 = lRam0000000113732a78;
            bVar1 = lRam0000000113732a78 != 0;
            lRam0000000113732a78 = lVar9;
            if (bVar1) {
              __ZdlPv(lVar7);
            }
            uVar11 = 0;
            uRam0000000113732a80 = uVar13;
            do {
              *(undefined8 *)(lRam0000000113732a78 + uVar11 * 8) = 0;
              plVar12 = plRam0000000113732a88;
              uVar11 = uVar11 + 1;
            } while (uVar13 != uVar11);
            uVar11 = uVar13;
            if (plRam0000000113732a88 != (long *)0x0) {
              uVar17 = plRam0000000113732a88[1];
              uVar8 = uVar13 - 1;
              if ((uVar13 & uVar8) == 0) {
                uVar17 = uVar17 & uVar8;
              }
              else if (uVar13 <= uVar17) {
                uVar18 = 0;
                if (uVar13 != 0) {
                  uVar18 = uVar17 / uVar13;
                }
                uVar17 = uVar17 - uVar18 * uVar13;
              }
              *(undefined8 *)(lRam0000000113732a78 + uVar17 * 8) = 0x113732a88;
              plVar15 = (long *)*plVar12;
              lVar7 = lRam0000000113732a78;
              while (lRam0000000113732a78 = lVar7, plVar15 != (long *)0x0) {
                uVar18 = plVar15[1];
                if ((uVar13 & uVar8) == 0) {
                  uVar18 = uVar18 & uVar8;
                }
                else if (uVar13 <= uVar18) {
                  uVar2 = 0;
                  if (uVar13 != 0) {
                    uVar2 = uVar18 / uVar13;
                  }
                  uVar18 = uVar18 - uVar2 * uVar13;
                }
                plVar16 = plVar15;
                if (uVar18 != uVar17) {
                  if (*(long *)(lVar7 + uVar18 * 8) == 0) {
                    *(long **)(lVar7 + uVar18 * 8) = plVar12;
                    uVar17 = uVar18;
                  }
                  else {
                    *plVar12 = *plVar15;
                    *plVar15 = **(long **)(lVar7 + uVar18 * 8);
                    **(undefined8 **)(lVar7 + uVar18 * 8) = plVar15;
                    plVar16 = plVar12;
                  }
                }
                lVar7 = lRam0000000113732a78;
                plVar12 = plVar16;
                plVar15 = (long *)*plVar16;
              }
            }
          }
          else {
            uVar11 = uVar17;
            if (uVar13 < uVar17) {
              uVar11 = (ulong)((float)uRam0000000113732a90 / fRam0000000113732a98);
              if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if (1 < uVar11) {
                uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
              }
              lVar7 = lRam0000000113732a78;
              if (uVar13 <= uVar11) {
                uVar13 = uVar11;
              }
              uVar11 = uRam0000000113732a80;
              if (uVar13 < uVar17) {
                if (uVar13 != 0) goto LAB_10928a8d8;
                lRam0000000113732a78 = 0;
                if (lVar7 != 0) {
                  __ZdlPv();
                }
                uRam0000000113732a80 = 0;
                uVar11 = 0;
              }
            }
          }
          if ((uVar11 & uVar11 - 1) == 0) {
            unaff_x22 = uVar11 - 1 & uVar10;
          }
          else {
            unaff_x22 = uVar10;
            if (uVar11 <= uVar10) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = uVar10 / uVar11;
              }
              unaff_x22 = uVar10 - uVar13 * uVar11;
            }
          }
        }
        lVar7 = lRam0000000113732a78;
        plVar12 = *(long **)(lRam0000000113732a78 + unaff_x22 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar14 = (long)plRam0000000113732a88;
          plRam0000000113732a88 = plVar14;
          *(undefined8 *)(lVar7 + unaff_x22 * 8) = 0x113732a88;
          if (*plVar14 != 0) {
            uVar10 = *(ulong *)(*plVar14 + 8);
            if ((uVar11 & uVar11 - 1) == 0) {
              uVar10 = uVar10 & uVar11 - 1;
            }
            else if (uVar11 <= uVar10) {
              uVar13 = 0;
              if (uVar11 != 0) {
                uVar13 = uVar10 / uVar11;
              }
              uVar10 = uVar10 - uVar13 * uVar11;
            }
            plVar12 = (long *)(lRam0000000113732a78 + uVar10 * 8);
            goto LAB_10928aad0;
          }
        }
        else {
          *plVar14 = *plVar12;
LAB_10928aad0:
          *plVar12 = (long)plVar14;
        }
        uRam0000000113732a90 = uRam0000000113732a90 + 1;
        lVar7 = alStack_78[0];
      }
      else {
        lVar7 = 0;
      }
LAB_10928aae8:
      __ZNSt3__15mutex6unlockEv(0x1132ce9e0);
      _objc_release(param_2);
      param_1[7] = lVar7;
      if (lVar7 == 0) {
LAB_10928ac48:
        FUN_109243bf8(&UNK_10f562cb3);
LAB_10928ac54:
        iVar5 = 0x13732a40;
        ___cxa_guard_acquire();
        if (iVar5 != 0) {
          ___cxa_atexit(PTR___ZNSt3__15mutexD1Ev_110346798,0x1132ce9e0,0x100000000);
          ___cxa_guard_release(0x113732a40);
        }
        goto LAB_10928a698;
      }
    }
    uVar10 = (ulong)*(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x4c);
    func_0x000109fe4e08();
    unaff_x19 = param_1;
    if (uVar10 != 0) {
      lStack_98 = 0;
      uVar6 = *(undefined8 *)puVar3;
      _CVMetalTextureCacheCreateTextureFromImage
                (uVar6,param_1[7],param_1[1],0,uVar10,
                 *(undefined4 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x3c),
                 *(undefined4 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x40),param_1[2],
                 &lStack_98);
      if ((int)uVar6 == 0) {
        param_1[8] = lStack_98;
        lVar7 = lStack_98;
        _CVMetalTextureGetTexture();
        _objc_retainAutoreleasedReturnValue();
        lVar9 = param_1[9];
        param_1[9] = lVar7;
        _objc_release(lVar9);
        return;
      }
      __ZNSt3__19to_stringEi(auStack_90);
      FUN_10928a5e0(alStack_78,&UNK_10f562cfd,auStack_90);
      FUN_10924a434(alStack_78);
      goto LAB_10928ace0;
    }
  }
  __ZNSt3__19to_stringEj
            (auStack_90,*(undefined4 *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0x4c));
  FUN_10928a5e0(alStack_78,&UNK_10f562cd8,auStack_90);
  FUN_10924a434(alStack_78);
LAB_10928ace0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10928ace4);
  (*pcVar4)();
}



/* Entry: 10928ad54; end: 10928adbf;  */

long * FUN_10928ad54(long param_1,undefined8 *param_2)

{
  if (*(long *)(param_1 + 0x48) == 0) {
    FUN_10928a63c(param_1,*param_2);
  }
  return (long *)(param_1 + 0x48);
}



/* Entry: 10928adc0; end: 10928af2f;  */

void FUN_10928adc0(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar11;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 *puVar12;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar13;
  
  while( true ) {
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      FUN_109243bf8(&UNK_10f562d32);
      puVar9 = param_2;
    }
    else {
      if ((param_3 != 0) && (plVar10 = *(long **)(param_3 + 8), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x40))(plVar10);
        lVar4 = param_1[1];
      }
      iVar3 = (int)lVar4;
      puVar9 = (undefined8 *)(ulong)((int)param_2 == 1);
      param_1[3] = (long)puVar9;
      _CVPixelBufferLockBaseAddress();
      unaff_x20 = param_2;
      if (iVar3 == 0) {
        *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x90) =
             *(undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x88);
        lVar4 = param_1[1];
        _CVPixelBufferGetPlaneCount();
        if (lVar4 == 0) {
          uVar5 = param_1[1];
          _CVPixelBufferGetBytesPerRow();
          *(int *)((long)register0x00000008 + -0x50) = (int)uVar5;
          uVar6 = param_1[1];
          _CVPixelBufferGetWidth();
          uVar2 = 0;
          if (uVar6 != 0) {
            uVar2 = (undefined4)((uVar5 & 0xffffffff) / uVar6);
          }
          *(undefined4 *)((long)register0x00000008 + -0x4c) = uVar2;
          lVar4 = param_1[1];
          _CVPixelBufferGetBaseAddress();
          *(long *)((long)register0x00000008 + -0x48) = lVar4;
          FUN_10928af30((undefined *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x88),
                        (undefined1 *)((long)register0x00000008 + -0x50));
        }
        else {
          lVar11 = 0;
          do {
            uVar5 = param_1[1];
            _CVPixelBufferGetBytesPerRowOfPlane(uVar5,lVar11);
            *(int *)((long)register0x00000008 + -0x50) = (int)uVar5;
            uVar6 = param_1[1];
            _CVPixelBufferGetWidthOfPlane(uVar6,lVar11);
            uVar2 = 0;
            if (uVar6 != 0) {
              uVar2 = (undefined4)((uVar5 & 0xffffffff) / uVar6);
            }
            *(undefined4 *)((long)register0x00000008 + -0x4c) = uVar2;
            lVar7 = param_1[1];
            _CVPixelBufferGetBaseAddressOfPlane(lVar7,lVar11);
            *(long *)((long)register0x00000008 + -0x48) = lVar7;
            FUN_10928af30((undefined *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x88),
                          (undefined1 *)((long)register0x00000008 + -0x50));
            lVar11 = lVar11 + 1;
          } while (lVar4 != lVar11);
        }
        return;
      }
    }
    unaff_x19 = (ulong *)&UNK_10f562d5e;
    FUN_109243bf8();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10928af30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    puVar12 = (undefined8 *)unaff_x19[1];
    if (puVar12 < (undefined8 *)unaff_x19[2]) break;
    unaff_x20 = (undefined8 *)*unaff_x19;
    unaff_x22 = (long)puVar12 - (long)unaff_x20;
    unaff_x23 = unaff_x22 >> 4;
    uVar5 = unaff_x23 + 1;
    puVar8 = unaff_x19;
    param_2 = puVar9;
    if (uVar5 >> 0x3c == 0) {
      uVar6 = (long)unaff_x19[2] - (long)unaff_x20;
      unaff_x24 = (long)uVar6 >> 3;
      if (unaff_x24 <= uVar5) {
        unaff_x24 = uVar5;
      }
      if (0x7fffffffffffffef < uVar6) {
        unaff_x24 = 0xfffffffffffffff;
      }
      if (unaff_x24 >> 0x3c == 0) {
        lVar4 = unaff_x24 << 4;
        __Znwm();
        puVar1 = (undefined8 *)(lVar4 + unaff_x22);
        uVar13 = *puVar9;
        puVar1[1] = puVar9[1];
        *puVar1 = uVar13;
        puVar12 = puVar1 + 2;
        _memcpy(puVar1 + unaff_x23 * -2,unaff_x20,unaff_x22);
        *unaff_x19 = (ulong)(puVar1 + unaff_x23 * -2);
        unaff_x19[1] = (ulong)puVar12;
        unaff_x19[2] = lVar4 + unaff_x24 * 0x10;
        if (unaff_x20 != (undefined8 *)0x0) {
          __ZdlPv(unaff_x20);
        }
LAB_10928aff0:
        unaff_x19[1] = (ulong)puVar12;
        return;
      }
    }
    else {
      FUN_10928b68c();
    }
    unaff_x30 = FUN_10928b014;
    func_0x000104c4f740();
    param_1 = (long *)((long)puVar8 + *(long *)(*puVar8 - 0x20));
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x21 = puVar9;
  }
  uVar13 = *puVar9;
  puVar12[1] = puVar9[1];
  *puVar12 = uVar13;
  puVar12 = puVar12 + 2;
  goto LAB_10928aff0;
}



/* Entry: 10928af30; end: 10928b013;  */

void FUN_10928af30(ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long lVar12;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar13;
  
  do {
    puVar8 = param_2;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    puVar9 = (undefined8 *)param_1[1];
    if (puVar9 < (undefined8 *)param_1[2]) {
      uVar13 = *puVar8;
      puVar9[1] = puVar8[1];
      *puVar9 = uVar13;
      puVar9 = puVar9 + 2;
LAB_10928aff0:
      param_1[1] = (ulong)puVar9;
      return;
    }
    unaff_x20 = (undefined8 *)*param_1;
    unaff_x22 = (long)puVar9 - (long)unaff_x20;
    unaff_x23 = unaff_x22 >> 4;
    uVar4 = unaff_x23 + 1;
    puVar7 = param_1;
    puVar9 = puVar8;
    if (uVar4 >> 0x3c == 0) {
      uVar11 = (long)param_1[2] - (long)unaff_x20;
      unaff_x24 = (long)uVar11 >> 3;
      if (unaff_x24 <= uVar4) {
        unaff_x24 = uVar4;
      }
      if (0x7fffffffffffffef < uVar11) {
        unaff_x24 = 0xfffffffffffffff;
      }
      if (unaff_x24 >> 0x3c == 0) {
        lVar6 = unaff_x24 << 4;
        __Znwm();
        puVar1 = (undefined8 *)(lVar6 + unaff_x22);
        uVar13 = *puVar8;
        puVar1[1] = puVar8[1];
        *puVar1 = uVar13;
        puVar9 = puVar1 + 2;
        _memcpy(puVar1 + unaff_x23 * -2,unaff_x20,unaff_x22);
        *param_1 = (ulong)(puVar1 + unaff_x23 * -2);
        param_1[1] = (ulong)puVar9;
        param_1[2] = lVar6 + unaff_x24 * 0x10;
        if (unaff_x20 != (undefined8 *)0x0) {
          __ZdlPv(unaff_x20);
        }
        goto LAB_10928aff0;
      }
    }
    else {
      FUN_10928b68c();
    }
    func_0x000104c4f740();
    unaff_x19 = (long *)((long)puVar7 + *(long *)(*puVar7 - 0x20));
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x78) = puVar8;
    *(undefined8 **)((long)register0x00000008 + -0x70) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x68) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10928b014;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    lVar6 = unaff_x19[1];
    if (lVar6 == 0) {
      FUN_109243bf8(&UNK_10f562d32);
      param_2 = puVar9;
    }
    else {
      if ((param_3 != 0) && (plVar10 = *(long **)(param_3 + 8), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x40))(plVar10);
        lVar6 = unaff_x19[1];
      }
      iVar3 = (int)lVar6;
      param_2 = (undefined8 *)(ulong)((int)puVar9 == 1);
      unaff_x19[3] = (long)param_2;
      _CVPixelBufferLockBaseAddress();
      unaff_x20 = puVar9;
      if (iVar3 == 0) {
        *(undefined8 *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0x90) =
             *(undefined8 *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0x88);
        lVar6 = unaff_x19[1];
        _CVPixelBufferGetPlaneCount();
        if (lVar6 == 0) {
          uVar4 = unaff_x19[1];
          _CVPixelBufferGetBytesPerRow();
          *(int *)((long)register0x00000008 + -0xa0) = (int)uVar4;
          uVar11 = unaff_x19[1];
          _CVPixelBufferGetWidth();
          uVar2 = 0;
          if (uVar11 != 0) {
            uVar2 = (undefined4)((uVar4 & 0xffffffff) / uVar11);
          }
          *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar2;
          lVar6 = unaff_x19[1];
          _CVPixelBufferGetBaseAddress();
          *(long *)((long)register0x00000008 + -0x98) = lVar6;
          FUN_10928af30((undefined *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0x88),
                        (undefined1 *)((long)register0x00000008 + -0xa0));
        }
        else {
          lVar12 = 0;
          do {
            uVar4 = unaff_x19[1];
            _CVPixelBufferGetBytesPerRowOfPlane(uVar4,lVar12);
            *(int *)((long)register0x00000008 + -0xa0) = (int)uVar4;
            uVar11 = unaff_x19[1];
            _CVPixelBufferGetWidthOfPlane(uVar11,lVar12);
            uVar2 = 0;
            if (uVar11 != 0) {
              uVar2 = (undefined4)((uVar4 & 0xffffffff) / uVar11);
            }
            *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar2;
            lVar5 = unaff_x19[1];
            _CVPixelBufferGetBaseAddressOfPlane(lVar5,lVar12);
            *(long *)((long)register0x00000008 + -0x98) = lVar5;
            FUN_10928af30((undefined *)((long)unaff_x19 + *(long *)(*unaff_x19 + -0x18) + 0x88),
                          (undefined1 *)((long)register0x00000008 + -0xa0));
            lVar12 = lVar12 + 1;
          } while (lVar6 != lVar12);
        }
        return;
      }
    }
    param_1 = (ulong *)&UNK_10f562d5e;
    unaff_x30 = FUN_10928af30;
    FUN_109243bf8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x21 = puVar8;
  } while( true );
}



/* Entry: 10928b014; end: 10928b023;  */

void FUN_10928b014(ulong *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong *unaff_x19;
  undefined8 *unaff_x20;
  long lVar11;
  undefined8 *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar12;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uVar13;
  
  while( true ) {
    plVar2 = (long *)((long)param_1 + *(long *)(*param_1 - 0x20));
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    lVar5 = plVar2[1];
    if (lVar5 == 0) {
      FUN_109243bf8(&UNK_10f562d32);
      puVar9 = param_2;
    }
    else {
      if ((param_3 != 0) && (plVar10 = *(long **)(param_3 + 8), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x40))(plVar10);
        lVar5 = plVar2[1];
      }
      iVar4 = (int)lVar5;
      puVar9 = (undefined8 *)(ulong)((int)param_2 == 1);
      plVar2[3] = (long)puVar9;
      _CVPixelBufferLockBaseAddress();
      unaff_x20 = param_2;
      if (iVar4 == 0) {
        *(undefined8 *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x90) =
             *(undefined8 *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x88);
        lVar5 = plVar2[1];
        _CVPixelBufferGetPlaneCount();
        if (lVar5 == 0) {
          uVar6 = plVar2[1];
          _CVPixelBufferGetBytesPerRow();
          *(int *)((long)register0x00000008 + -0x50) = (int)uVar6;
          uVar7 = plVar2[1];
          _CVPixelBufferGetWidth();
          uVar3 = 0;
          if (uVar7 != 0) {
            uVar3 = (undefined4)((uVar6 & 0xffffffff) / uVar7);
          }
          *(undefined4 *)((long)register0x00000008 + -0x4c) = uVar3;
          lVar5 = plVar2[1];
          _CVPixelBufferGetBaseAddress();
          *(long *)((long)register0x00000008 + -0x48) = lVar5;
          FUN_10928af30((undefined *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x88),
                        (undefined1 *)((long)register0x00000008 + -0x50));
        }
        else {
          lVar11 = 0;
          do {
            uVar6 = plVar2[1];
            _CVPixelBufferGetBytesPerRowOfPlane(uVar6,lVar11);
            *(int *)((long)register0x00000008 + -0x50) = (int)uVar6;
            uVar7 = plVar2[1];
            _CVPixelBufferGetWidthOfPlane(uVar7,lVar11);
            uVar3 = 0;
            if (uVar7 != 0) {
              uVar3 = (undefined4)((uVar6 & 0xffffffff) / uVar7);
            }
            *(undefined4 *)((long)register0x00000008 + -0x4c) = uVar3;
            lVar8 = plVar2[1];
            _CVPixelBufferGetBaseAddressOfPlane(lVar8,lVar11);
            *(long *)((long)register0x00000008 + -0x48) = lVar8;
            FUN_10928af30((undefined *)((long)plVar2 + *(long *)(*plVar2 + -0x18) + 0x88),
                          (undefined1 *)((long)register0x00000008 + -0x50));
            lVar11 = lVar11 + 1;
          } while (lVar5 != lVar11);
        }
        return;
      }
    }
    unaff_x19 = (ulong *)&UNK_10f562d5e;
    FUN_109243bf8();
    *(undefined8 *)((long)register0x00000008 + -0xa0) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x98) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x90) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x88) = unaff_x23;
    *(long *)((long)register0x00000008 + -0x80) = unaff_x22;
    *(undefined8 **)((long)register0x00000008 + -0x78) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x70) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x68) = plVar2;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x58) = FUN_10928af30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x60);
    puVar12 = (undefined8 *)unaff_x19[1];
    if (puVar12 < (undefined8 *)unaff_x19[2]) break;
    unaff_x20 = (undefined8 *)*unaff_x19;
    unaff_x22 = (long)puVar12 - (long)unaff_x20;
    unaff_x23 = unaff_x22 >> 4;
    uVar6 = unaff_x23 + 1;
    param_1 = unaff_x19;
    param_2 = puVar9;
    if (uVar6 >> 0x3c == 0) {
      uVar7 = (long)unaff_x19[2] - (long)unaff_x20;
      unaff_x24 = (long)uVar7 >> 3;
      if (unaff_x24 <= uVar6) {
        unaff_x24 = uVar6;
      }
      if (0x7fffffffffffffef < uVar7) {
        unaff_x24 = 0xfffffffffffffff;
      }
      if (unaff_x24 >> 0x3c == 0) {
        lVar5 = unaff_x24 << 4;
        __Znwm();
        puVar1 = (undefined8 *)(lVar5 + unaff_x22);
        uVar13 = *puVar9;
        puVar1[1] = puVar9[1];
        *puVar1 = uVar13;
        puVar12 = puVar1 + 2;
        _memcpy(puVar1 + unaff_x23 * -2,unaff_x20,unaff_x22);
        *unaff_x19 = (ulong)(puVar1 + unaff_x23 * -2);
        unaff_x19[1] = (ulong)puVar12;
        unaff_x19[2] = lVar5 + unaff_x24 * 0x10;
        if (unaff_x20 != (undefined8 *)0x0) {
          __ZdlPv(unaff_x20);
        }
LAB_10928aff0:
        unaff_x19[1] = (ulong)puVar12;
        return;
      }
    }
    else {
      FUN_10928b68c();
    }
    unaff_x30 = FUN_10928b014;
    func_0x000104c4f740();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x21 = puVar9;
  }
  uVar13 = *puVar9;
  puVar12[1] = puVar9[1];
  *puVar12 = uVar13;
  puVar12 = puVar12 + 2;
  goto LAB_10928aff0;
}



/* Entry: 10928b024; end: 10928b07b;  */

void FUN_10928b024(undefined8 *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *extraout_x8;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar3 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    if (*(long *)(param_2 + 8) != 0) break;
    plVar2 = (long *)&UNK_10f562d91;
    unaff_x30 = FUN_10928b07c;
    FUN_109243bf8();
    param_2 = (undefined *)((long)plVar2 + *(long *)(*plVar2 + -0x28));
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = extraout_x8;
    unaff_x19 = puVar3;
  }
  _CVPixelBufferUnlockBaseAddress(*(long *)(param_2 + 8),*(undefined8 *)(param_2 + 0x18));
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b981a0;
  *puVar3 = puVar1;
  return;
}



/* Entry: 10928b07c; end: 10928b08b;  */

void FUN_10928b07c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    puVar3 = param_1;
    lVar4 = *(long *)(*param_2 + -0x28);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar2 = *(long *)((long)param_2 + lVar4 + 8);
    if (lVar2 != 0) break;
    param_2 = (long *)&UNK_10f562d91;
    unaff_x30 = FUN_10928b07c;
    FUN_109243bf8();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
    param_1 = extraout_x8;
    unaff_x19 = puVar3;
  }
  _CVPixelBufferUnlockBaseAddress(lVar2,*(undefined8 *)((long)param_2 + lVar4 + 0x18));
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b981a0;
  *puVar3 = puVar1;
  return;
}



/* Entry: 10928b08c; end: 10928b0b7;  */

void FUN_10928b08c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  
  if ((param_3 != 0) && (*(long **)(param_3 + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_3 + 8) + 0x40))();
  }
  FUN_109243bf8(&UNK_10f562de7);
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b981a0;
  *extraout_x8 = puVar1;
  return;
}



/* Entry: 10928b0b8; end: 10928b0ef;  */

void FUN_10928b0b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110b981a0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10928b0f0; end: 10928b0f7;  */

undefined8 FUN_10928b0f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10928b0f8; end: 10928b10b;  */

undefined1  [16] FUN_10928b0f8(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)&UNK_10f562de0;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    lVar2 = param_2 << 2;
    __Znwm(lVar2);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000104c4f740();
  *puVar1 = &PTR_FUN_110ae74c8;
  if (puVar1[0x11] != 0) {
    puVar1[0x12] = puVar1[0x11];
    __ZdlPv();
  }
  if (puVar1[0xe] != 0) {
    puVar1[0xf] = puVar1[0xe];
    __ZdlPv();
  }
  if (puVar1[0xb] != 0) {
    puVar1[0xc] = puVar1[0xb];
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10928b10c; end: 10928b1f3;  */

undefined1  [16] FUN_10928b10c(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = param_2 << 2;
    __Znwm(lVar1);
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000104c4f740();
  *param_1 = &PTR_FUN_110ae74c8;
  if (param_1[0x11] != 0) {
    param_1[0x12] = param_1[0x11];
    __ZdlPv();
  }
  if (param_1[0xe] != 0) {
    param_1[0xf] = param_1[0xe];
    __ZdlPv();
  }
  if (param_1[0xb] != 0) {
    param_1[0xc] = param_1[0xb];
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10928b1f4; end: 10928b1fb;  */

void FUN_10928b1f4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10928b1f8);
  (*pcVar1)();
}



/* Entry: 10928b1fc; end: 10928b243;  */

long * FUN_10928b1fc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10928b244; end: 10928b643;  */

void FUN_10928b244(ulong param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x26;
  
  uVar6 = uRam0000000113732a58;
  uVar9 = ((ulong)(uint)((int)param_1 << 3) + 8 ^ param_1 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (param_1 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar9 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  if (uRam0000000113732a58 != 0) {
    uVar5 = uRam0000000113732a58 - 1;
    if ((uRam0000000113732a58 & uVar5) == 0) {
      unaff_x26 = uVar5 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uRam0000000113732a58 <= uVar9) {
        uVar11 = 0;
        if (uRam0000000113732a58 != 0) {
          uVar11 = uVar9 / uRam0000000113732a58;
        }
        unaff_x26 = uVar9 - uVar11 * uRam0000000113732a58;
      }
    }
    plVar10 = *(long **)(lRam0000000113732a50 + unaff_x26 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10928b334;
          uVar11 = plVar10[1];
          if (uVar11 != uVar9) break;
          if (plVar10[2] == param_1) {
            return;
          }
        }
        if ((uRam0000000113732a58 & uVar5) == 0) {
          uVar11 = uVar11 & uVar5;
        }
        else if (uRam0000000113732a58 <= uVar11) {
          uVar7 = 0;
          if (uRam0000000113732a58 != 0) {
            uVar7 = uVar11 / uRam0000000113732a58;
          }
          uVar11 = uVar11 - uVar7 * uRam0000000113732a58;
        }
      } while (uVar11 == unaff_x26);
    }
  }
LAB_10928b334:
  plVar10 = (long *)0x20;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar9;
  plVar10[2] = param_2;
  plVar10[3] = param_3;
  if ((uVar6 == 0) || (fRam0000000113732a70 * (float)uVar6 < (float)(uRam0000000113732a68 + 1))) {
    uVar5 = 1;
    if (2 < uVar6) {
      uVar5 = (ulong)((uVar6 & uVar6 - 1) != 0);
    }
    uVar5 = uVar5 | uVar6 << 1;
    uVar11 = (ulong)((float)(uRam0000000113732a68 + 1) / fRam0000000113732a70);
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    uVar11 = uVar6;
    if (uVar5 - 1 == 0) {
      uVar5 = 2;
    }
    else if ((uVar5 & uVar5 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar11 = uRam0000000113732a58;
    }
    if (uVar11 < uVar5) {
LAB_10928b3d4:
      if (uVar5 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10928b630);
        (*pcVar3)();
      }
      lVar4 = uVar5 << 3;
      __Znwm();
      bVar1 = lRam0000000113732a50 != 0;
      lRam0000000113732a50 = lVar4;
      if (bVar1) {
        __ZdlPv();
      }
      uVar6 = 0;
      uRam0000000113732a58 = uVar5;
      do {
        *(undefined8 *)(lRam0000000113732a50 + uVar6 * 8) = 0;
        plVar8 = plRam0000000113732a60;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
      uVar6 = uVar5;
      if (plRam0000000113732a60 != (long *)0x0) {
        uVar11 = plRam0000000113732a60[1];
        uVar7 = uVar5 - 1;
        if ((uVar5 & uVar7) == 0) {
          uVar11 = uVar11 & uVar7;
        }
        else if (uVar5 <= uVar11) {
          uVar14 = 0;
          if (uVar5 != 0) {
            uVar14 = uVar11 / uVar5;
          }
          uVar11 = uVar11 - uVar14 * uVar5;
        }
        *(undefined8 *)(lRam0000000113732a50 + uVar11 * 8) = 0x113732a60;
        plVar12 = (long *)*plVar8;
        lVar4 = lRam0000000113732a50;
        while (lRam0000000113732a50 = lVar4, plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar5 & uVar7) == 0) {
            uVar14 = uVar14 & uVar7;
          }
          else if (uVar5 <= uVar14) {
            uVar2 = 0;
            if (uVar5 != 0) {
              uVar2 = uVar14 / uVar5;
            }
            uVar14 = uVar14 - uVar2 * uVar5;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar11) {
            if (*(long *)(lVar4 + uVar14 * 8) == 0) {
              *(long **)(lVar4 + uVar14 * 8) = plVar8;
              uVar11 = uVar14;
            }
            else {
              *plVar8 = *plVar12;
              *plVar12 = **(long **)(lVar4 + uVar14 * 8);
              **(undefined8 **)(lVar4 + uVar14 * 8) = plVar12;
              plVar13 = plVar8;
            }
          }
          lVar4 = lRam0000000113732a50;
          plVar8 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else {
      uVar6 = uVar11;
      if (uVar5 < uVar11) {
        uVar6 = (ulong)((float)uRam0000000113732a68 / fRam0000000113732a70);
        if ((uVar11 < 3) || ((uVar11 & uVar11 - 1) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
        lVar4 = lRam0000000113732a50;
        if (uVar5 <= uVar6) {
          uVar5 = uVar6;
        }
        uVar6 = uRam0000000113732a58;
        if (uVar5 < uVar11) {
          if (uVar5 != 0) goto LAB_10928b3d4;
          lRam0000000113732a50 = 0;
          if (lVar4 != 0) {
            __ZdlPv();
          }
          uRam0000000113732a58 = 0;
          uVar6 = 0;
        }
      }
    }
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x26 = uVar6 - 1 & uVar9;
    }
    else {
      unaff_x26 = uVar9;
      if (uVar6 <= uVar9) {
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar9 / uVar6;
        }
        unaff_x26 = uVar9 - uVar5 * uVar6;
      }
    }
  }
  lVar4 = lRam0000000113732a50;
  plVar8 = *(long **)(lRam0000000113732a50 + unaff_x26 * 8);
  if (plVar8 == (long *)0x0) {
    *plVar10 = (long)plRam0000000113732a60;
    plRam0000000113732a60 = plVar10;
    *(undefined8 *)(lVar4 + unaff_x26 * 8) = 0x113732a60;
    if (*plVar10 == 0) goto LAB_10928b5c0;
    uVar9 = *(ulong *)(*plVar10 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar9 = uVar9 & uVar6 - 1;
    }
    else if (uVar6 <= uVar9) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar5 * uVar6;
    }
    plVar8 = (long *)(lRam0000000113732a50 + uVar9 * 8);
  }
  else {
    *plVar10 = *plVar8;
  }
  *plVar8 = (long)plVar10;
LAB_10928b5c0:
  uRam0000000113732a68 = uRam0000000113732a68 + 1;
  return;
}



/* Entry: 10928b644; end: 10928b68b;  */

long * FUN_10928b644(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10928b68c; end: 10928b69f;  */

void FUN_10928b68c(void)

{
  long *plVar1;
  long *extraout_x8;
  
  func_0x000104c4f6cc(&UNK_10f562de0);
  plVar1 = (long *)0x120;
  __Znwm();
  FUN_109289ba8();
  *extraout_x8 = (long)plVar1 + *(long *)(*plVar1 + -0x18);
  return;
}



/* Entry: 10928b6a0; end: 10928b6ff;  */

void FUN_10928b6a0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x120;
  __Znwm();
  FUN_109289ba8();
  *param_1 = (long)plVar1 + *(long *)(*plVar1 + -0x18);
  return;
}



/* Entry: 10928b700; end: 10928b767;  */

void FUN_10928b700(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)0x120;
  __Znwm();
  FUN_109289d08();
  *param_1 = (long)plVar1 + *(long *)(*plVar1 + -0x18);
  return;
}



/* Entry: 10928b768; end: 10928b80f;  */

void FUN_10928b768(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_40;
  long *plStack_38;
  undefined8 uStack_28;
  
  plStack_38 = (long *)param_3[1];
  uStack_40 = *param_3;
  if (param_3[1] != 0) {
    plVar1 = (long *)(param_3[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_28 = param_1;
  FUN_10924d640(param_1,&uStack_28,param_2,&uStack_40);
  plVar1 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar2 = plStack_38 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10928b810; end: 10928b997;  */

long FUN_10928b810(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 auStack_d0 [2];
  undefined1 auStack_c8 [40];
  undefined8 uStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  lVar1 = param_1;
  FUN_10928b998();
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c((undefined8 *)(lVar1 + 0x530),*param_3,param_3[1]);
  }
  else {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    *(undefined8 *)(lVar1 + 0x540) = param_3[2];
    *(undefined8 *)(lVar1 + 0x538) = uVar3;
    *(undefined8 *)(lVar1 + 0x530) = uVar2;
  }
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c((undefined8 *)(param_1 + 0x548),*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(param_1 + 0x558) = param_4[2];
    *(undefined8 *)(param_1 + 0x550) = uVar3;
    *(undefined8 *)(param_1 + 0x548) = uVar2;
  }
  if (*(char *)((long)param_5 + 0x17) < '\0') {
    func_0x000107c3192c((undefined8 *)(param_1 + 0x560),*param_5,param_5[1]);
  }
  else {
    uVar3 = param_5[1];
    uVar2 = *param_5;
    *(undefined8 *)(param_1 + 0x570) = param_5[2];
    *(undefined8 *)(param_1 + 0x568) = uVar3;
    *(undefined8 *)(param_1 + 0x560) = uVar2;
  }
  if (*(long *)(param_1 + 0x428) != 0) {
    func_0x000109fce474(auStack_d0,*(long *)(param_1 + 0x428) + 0x28,
                        *(undefined4 *)(param_2 + 0x430),*(undefined1 *)(param_2 + 0x2e8));
    *(undefined4 *)(param_1 + 0x438) = auStack_d0[0];
    FUN_10928bd7c(param_1 + 0x440,auStack_c8);
    *(undefined8 *)(param_1 + 0x468) = uStack_a0;
    FUN_109261f4c(param_1 + 0x470,auStack_98);
    *(undefined8 *)(param_1 + 0x498) = uStack_70;
    FUN_109261f4c(param_1 + 0x4a0,auStack_68);
  }
  return param_1;
}



/* Entry: 10928b998; end: 10928bb53;  */

undefined4 * FUN_10928b998(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  if (*(long *)(param_2 + 8) != 0) {
    lVar3 = *(long *)(param_2 + 8) << 3;
    puVar2 = param_2;
    do {
      puVar2 = puVar2 + 2;
      FUN_10928bb54(param_1 + 2,puVar2);
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  FUN_10925ec38(param_1 + 10,param_2 + 10);
  func_0x00010925ecf4(param_1 + 0x8c,param_2 + 0x8c);
  uVar4 = *(undefined8 *)(param_2 + 0xb0);
  uVar1 = *(undefined8 *)(param_2 + 0xae);
  uVar5 = *(undefined8 *)(param_2 + 0xb2);
  uVar7 = *(undefined8 *)(param_2 + 0xb8);
  uVar6 = *(undefined8 *)(param_2 + 0xb6);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
  *(undefined8 *)(param_1 + 0xb2) = uVar5;
  *(undefined8 *)(param_1 + 0xb8) = uVar7;
  *(undefined8 *)(param_1 + 0xb6) = uVar6;
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  *(undefined8 *)(param_1 + 0xae) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0xbc);
  uVar1 = *(undefined8 *)(param_2 + 0xba);
  uVar6 = *(undefined8 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 0xbe);
  uVar8 = *(undefined8 *)(param_2 + 0xc4);
  uVar7 = *(undefined8 *)(param_2 + 0xc2);
  param_1[0xc6] = param_2[0xc6];
  *(undefined8 *)(param_1 + 0xc0) = uVar6;
  *(undefined8 *)(param_1 + 0xbe) = uVar5;
  *(undefined8 *)(param_1 + 0xc4) = uVar8;
  *(undefined8 *)(param_1 + 0xc2) = uVar7;
  *(undefined8 *)(param_1 + 0xbc) = uVar4;
  *(undefined8 *)(param_1 + 0xba) = uVar1;
  FUN_10928bbd4(param_1 + 200,param_2 + 200);
  uVar1 = *(undefined8 *)(param_2 + 0x10a);
  param_1[0x10c] = param_2[0x10c];
  *(undefined8 *)(param_1 + 0x10a) = uVar1;
  param_1[0x10e] = param_2[0x10e];
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (*(long *)(param_2 + 0x118) != 0) {
    puVar2 = param_2 + 0x110;
    lVar3 = *(long *)(param_2 + 0x118) << 2;
    do {
      FUN_10928bcfc(param_1 + 0x110,puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  *(undefined8 *)(param_1 + 0x11a) = *(undefined8 *)(param_2 + 0x11a);
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  if (*(long *)(param_2 + 0x124) != 0) {
    puVar2 = param_2 + 0x11c;
    lVar3 = *(long *)(param_2 + 0x124) << 2;
    do {
      FUN_109261ecc(param_1 + 0x11c,puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  *(undefined8 *)(param_1 + 0x126) = *(undefined8 *)(param_2 + 0x126);
  *(undefined8 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (*(long *)(param_2 + 0x130) != 0) {
    puVar2 = param_2 + 0x128;
    lVar3 = *(long *)(param_2 + 0x130) << 2;
    do {
      FUN_109261ecc(param_1 + 0x128,puVar2);
      puVar2 = puVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  uVar4 = *(undefined8 *)(param_2 + 0x134);
  uVar1 = *(undefined8 *)(param_2 + 0x132);
  *(undefined8 *)(param_1 + 0x136) = *(undefined8 *)(param_2 + 0x136);
  *(undefined8 *)(param_1 + 0x134) = uVar4;
  *(undefined8 *)(param_1 + 0x132) = uVar1;
  FUN_10925ee60(param_1 + 0x138,param_2 + 0x138);
  return param_1;
}



/* Entry: 10928bb54; end: 10928bbd3;  */

undefined8 * FUN_10928bb54(long param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x18);
  if (uVar6 < 3) {
    puVar3 = (undefined8 *)(param_1 + uVar6 * 8);
    *puVar3 = *param_2;
    *(ulong *)(param_1 + 0x18) = uVar6 + 1;
    return puVar3;
  }
  puVar2 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  puVar3 = puVar2;
  puVar4 = PTR___ZTISt12length_error_110352238;
  ___cxa_throw(puVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(puVar2);
  __Unwind_Resume();
  lVar5 = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1f] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x19] = 0;
  puVar3[0x18] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1a] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x17] = 0;
  puVar3[0x16] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  do {
    puVar1 = (undefined1 *)((long)puVar3 + lVar5);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000000;
    *(undefined8 *)(puVar1 + 4) = 1;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x100);
  puVar3[0x20] = 0;
  if (*(long *)(puVar4 + 0x100) != 0) {
    lVar5 = *(long *)(puVar4 + 0x100) << 5;
    do {
      FUN_10928bc78(puVar3,puVar4);
      puVar4 = puVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  return puVar3;
}



/* Entry: 10928bbd4; end: 10928bc77;  */

undefined8 * FUN_10928bbd4(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  do {
    puVar1 = (undefined1 *)((long)param_1 + lVar2);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0x100000000;
    *(undefined8 *)(puVar1 + 4) = 1;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined4 *)(puVar1 + 0x14) = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x100);
  param_1[0x20] = 0;
  if (*(long *)(param_2 + 0x100) != 0) {
    lVar2 = *(long *)(param_2 + 0x100) << 5;
    do {
      FUN_10928bc78(param_1,param_2);
      param_2 = param_2 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  return param_1;
}


