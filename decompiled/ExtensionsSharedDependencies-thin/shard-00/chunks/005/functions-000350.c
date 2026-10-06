/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006ee7cc; end: 006ee7f7;  */

/* WARNING: Removing unreachable block (ram,0x006e389c) */

undefined8 * FUN_006ee7cc(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  code *pcVar16;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong *unaff_x23;
  undefined8 *unaff_x24;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong auStack_240 [5];
  long lStack_218;
  undefined8 *puStack_210;
  uint uStack_204;
  undefined8 *puStack_200;
  long lStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  ulong uStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined8 auStack_1a8 [5];
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 auStack_d8 [18];
  undefined8 uStack_48;
  
  puVar14 = (undefined8 *)(long)*(int *)(param_1 + 0x18);
  uVar15 = *(ulong *)(param_1 + 0x30);
  puVar12 = puVar14;
  func_0x006fd5fc();
  puVar8 = param_2;
  puVar11 = param_3;
  uVar22 = uVar15;
  if (((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar14 ||
       puVar14 != (undefined8 *)(long)*(int *)(uVar15 + 0x20)) ||
     (uVar5 = puVar12 == (undefined8 *)((long)puVar14 * 2), unaff_x19 = puVar14, unaff_x23 = puVar12
     , (undefined8 *)((long)puVar14 * 2) <= puVar12 && !(bool)uVar5)) {
LAB_006e5b94:
    _abort();
  }
  else {
    unaff_x24 = (undefined8 *)((long)puVar14 << 1);
    uStack_48 = extraout_x8;
    func_0x006fe440(auStack_d8);
    func_0x006e3440(auStack_d8,param_3,(long)puVar12 << 3);
    puVar11 = auStack_d8;
    puVar12 = unaff_x24;
    FUN_006e8214();
    unaff_x20 = uVar15;
    unaff_x21 = param_2;
    unaff_x22 = param_3;
    if ((int)puVar8 == 0) goto LAB_006e5b94;
    func_0x006fdf34();
    func_0x006fd534(uStack_48);
    if ((bool)uVar5) {
      return puVar8;
    }
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_006e5b9c;
  uVar15 = uVar22;
  puStack_110 = unaff_x22;
  puStack_108 = unaff_x21;
  uStack_100 = unaff_x20;
  puStack_f8 = unaff_x19;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  puVar19 = puVar8;
  puVar9 = puVar12;
  puStack_1c8 = unaff_x19;
  puStack_1d8 = unaff_x21;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar12 ||
      puVar12 != (undefined8 *)(long)*(int *)(uVar15 + 0x20)) {
LAB_006e5c40:
    _abort();
  }
  else {
    unaff_x22 = (undefined8 *)((long)puVar12 << 1);
    uVar5 = puVar14 == puVar11;
    uStack_118 = extraout_x8_00;
    if ((bool)uVar5) {
      FUN_006e82e4(auStack_1a8,unaff_x22);
    }
    else {
      FUN_006e838c();
    }
    puVar11 = auStack_1a8;
    puVar14 = puVar12;
    puVar9 = unaff_x22;
    FUN_006e8214();
    puStack_1c8 = puVar12;
    puStack_1d8 = puVar8;
    if ((int)puVar19 == 0) goto LAB_006e5c40;
    func_0x006fdf34();
    func_0x006fd534(uStack_118);
    if ((bool)uVar5) {
      return puVar19;
    }
  }
  ___stack_chk_fail();
  puVar13 = auStack_240;
  pcStack_1b8 = FUN_006e5c48;
  puStack_1f0 = unaff_x24;
  puStack_1e8 = unaff_x23;
  puStack_1e0 = unaff_x22;
  uStack_1d0 = uVar22;
  ppuStack_1c0 = &puStack_f0;
  func_0x006fd5fc();
  lStack_1f8 = extraout_x8_01;
  if ((undefined8 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar11 ||
      puVar11 != (undefined8 *)(long)*(int *)(puVar9 + 4)) {
    _abort();
  }
  else {
    func_0x006fdbac();
    puVar14 = (undefined8 *)puVar9[3];
    puVar11 = (undefined8 *)((long)puVar11 << 3);
    func_0x006e3440(auStack_240);
    uVar5 = auStack_240[0] - 2 == 0;
    uVar15 = auStack_240[0] - 2;
    if (auStack_240[0] < 2) {
      auStack_240[0] = auStack_240[0] | 0xfffffffffffffffe;
      uVar21 = 1;
      do {
        uVar5 = uVar21 == uVar22;
        uVar15 = auStack_240[0];
        if (uVar22 <= uVar21) break;
        uVar17 = auStack_240[uVar21];
        auStack_240[uVar21] = uVar17 - 1;
        uVar21 = uVar21 + 1;
      } while (uVar17 == 0);
    }
    auStack_240[0] = uVar15;
    func_0x006fda18();
    FUN_006e58b0();
    func_0x006fd534(lStack_1f8);
    puVar19 = unaff_x22;
    puVar9 = puVar13;
    unaff_x23 = auStack_240;
    if ((bool)uVar5) {
      return unaff_x22;
    }
  }
  ___stack_chk_fail();
  pcVar16 = FUN_006e5d10;
  func_0x006fec68();
  pppuStack_180 = &ppuStack_1c0;
  pcStack_178 = pcVar16;
  if ((*(int *)(puVar9 + 1) < 1) || ((*(byte *)*puVar9 & 1) == 0)) {
    func_0x006fd894();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar9 + 2) != 0) {
    func_0x006fd6a0();
    goto LAB_006e5d88;
  }
  if (*(int *)(puVar14 + 2) == 0) {
    func_0x006feb2c();
    puVar8 = puVar19;
    func_0x006fd9d0();
    iVar7 = (int)puVar8;
    FUN_006e34dc();
    if (iVar7 < 0) {
      iVar7 = *(int *)(puVar11 + 1);
      if (iVar7 == 0) {
        func_0x006fe8dc();
        if ((int)puVar9 != 0) {
          *(undefined4 *)(puVar19 + 2) = 0;
          *(undefined4 *)(puVar19 + 1) = 0;
          return (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar11 = puVar19;
        FUN_006e35dc(puVar19,1);
        if ((int)puVar11 != 0) {
          *(undefined4 *)(puVar19 + 2) = 0;
          *(undefined8 *)*puVar19 = 1;
          *(undefined4 *)(puVar19 + 1) = 1;
          puVar11 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        return puVar11;
      }
      if (unaff_x24 == (undefined8 *)0x0) {
        FUN_006e5680(puVar9,unaff_x23);
        unaff_x24 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          puVar19 = (undefined8 *)0x0;
          uVar22 = 0;
          uVar18 = 0;
          lVar20 = 0;
          goto LAB_006e60b0;
        }
      }
      else {
        puVar9 = (undefined8 *)0x0;
      }
      puStack_210 = puVar9;
      uVar2 = *(uint *)(unaff_x24 + 4);
      lVar20 = (long)(int)uVar2;
      uVar18 = 3;
      if (iVar7 != 1) {
        uVar18 = 1;
      }
      uVar3 = 4;
      if (iVar7 < 2) {
        uVar3 = uVar18;
      }
      uVar18 = 5;
      if (iVar7 < 5) {
        uVar18 = uVar3;
      }
      uStack_204 = 6;
      if (iVar7 < 0xf) {
        uStack_204 = uVar18;
      }
      uVar3 = 1 << (ulong)uStack_204;
      auStack_240[1] = (ulong)uVar3;
      uVar22 = (ulong)uStack_204;
      auStack_240[0] = lVar20 << 1;
      uVar18 = (uint)auStack_240[0];
      if ((int)(uint)auStack_240[0] <= (int)uVar3) {
        uVar18 = uVar3;
      }
      uVar18 = (uVar18 + (uVar2 << uVar22)) * 8;
      uVar15 = (ulong)(int)(uVar18 + 0x40);
      FUN_00701e90();
      if (uVar15 == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar22 = 0;
        lVar20 = 0;
        goto LAB_006e60b0;
      }
      lVar1 = (uVar15 & 0xffffffffffffffc0) + 0x40;
      auStack_240[2] = uVar15;
      auStack_240[3] = (ulong)uVar18;
      auStack_240[4] = (ulong)uVar2;
      func_0x006fd9c0(lVar1);
      puStack_1e8 = (undefined8 *)(lVar1 + (long)(int)(uVar2 << uVar22) * 8);
      puStack_200 = puStack_1e8 + lVar20;
      lStack_1f8 = auStack_240[4] << 0x20;
      puStack_1e0 = (undefined8 *)(auStack_240[4] << 0x20);
      puStack_1f0 = (undefined8 *)0x200000000;
      puStack_1d8 = (undefined8 *)0x200000000;
      ppuVar10 = &puStack_1e8;
      lStack_218 = lVar1;
      FUN_006e60ec(ppuVar10,unaff_x24,unaff_x23);
      if ((int)ppuVar10 == 0) {
        puVar19 = (undefined8 *)0x0;
        uVar18 = (uint)auStack_240[3];
        lVar20 = lStack_218;
        uVar22 = auStack_240[2];
        goto LAB_006e60b0;
      }
      ppuVar10 = &puStack_200;
      func_0x006fe0c0(ppuVar10,puVar14);
      iVar6 = (int)ppuVar10;
      func_0x006e5778();
      lVar1 = lStack_218;
      uVar22 = auStack_240[2];
      if (iVar6 == 0) {
LAB_006e5fcc:
        puVar19 = (undefined8 *)0x0;
        lVar20 = lStack_218;
      }
      else {
        func_0x006fd9d0();
        func_0x006e3f20();
        func_0x006e3f20(lVar1 + lVar20 * 8,lVar20,&puStack_200);
        uVar15 = auStack_240[1];
        if (1 < uStack_204) {
          ppuVar10 = &puStack_1e8;
          func_0x006fdaf8(ppuVar10,&puStack_200,&puStack_200);
          if ((int)ppuVar10 == 0) goto LAB_006e5fcc;
          func_0x006e3f20(lStack_218 + auStack_240[0] * 8,lVar20,&puStack_1e8);
          auStack_240[0] = lVar20 << 3;
          for (uVar21 = 3; uVar21 < uVar15; uVar21 = uVar21 + 1) {
            ppuVar10 = &puStack_1e8;
            func_0x006fdaf8(auStack_240[0],ppuVar10,&puStack_200,&puStack_1e8);
            if ((int)ppuVar10 == 0) goto LAB_006e5fcc;
            func_0x006fd9d0();
            func_0x006e3f20();
          }
        }
        lVar20 = lStack_218;
        iVar6 = iVar7 * 0x40 + -1;
        iVar7 = 0;
        if (uStack_204 != 0) {
          iVar7 = iVar6 / (int)uStack_204;
        }
        for (iVar7 = iVar6 - iVar7 * uStack_204; -1 < iVar7; iVar7 = iVar7 + -1) {
          func_0x006e5334(puVar11,iVar6);
          iVar6 = iVar6 + -1;
        }
        iVar7 = (int)&puStack_1e8;
        func_0x006fe05c();
        while (iVar7 != 0) {
          if (iVar6 < 0) {
            func_0x006fe0c0(puVar19,&puStack_1e8);
            func_0x006e5820();
            goto LAB_006e60ac;
          }
          iVar4 = iVar6 - uStack_204;
          for (iVar7 = 0; uStack_204 + iVar7 != 0; iVar7 = iVar7 + -1) {
            ppuVar10 = &puStack_1e8;
            func_0x006fdaf8(ppuVar10,&puStack_1e8,&puStack_1e8);
            if ((int)ppuVar10 == 0) goto LAB_006e60a4;
            func_0x006e5334(puVar11,iVar6 + iVar7);
          }
          iVar7 = (int)&puStack_200;
          func_0x006fe05c();
          if (iVar7 == 0) break;
          ppuVar10 = &puStack_1e8;
          func_0x006fdaf8(ppuVar10,&puStack_1e8,&puStack_200);
          iVar6 = iVar4;
          iVar7 = (int)ppuVar10;
        }
LAB_006e60a4:
        puVar19 = (undefined8 *)0x0;
      }
LAB_006e60ac:
      uVar18 = (uint)auStack_240[3];
LAB_006e60b0:
      FUN_006e5880();
      if ((uVar22 == 0) && (lVar20 != 0)) {
        FUN_00701f08(lVar20,(long)(int)uVar18);
      }
      func_0x00701ed0(uVar22);
      return puVar19;
    }
  }
  func_0x006fd894();
LAB_006e5d88:
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006ee7f8; end: 006ee8a7;  */

bool FUN_006ee7f8(int param_1)

{
  long *unaff_x20;
  
  func_0x006fd8fc();
  func_0x006ee734();
  if (param_1 == 0) {
    func_0x006fdcc4(*(undefined8 *)(*unaff_x20 + 0xa0));
    func_0x006fdddc();
    func_0x006fdc60();
    FUN_006ee7cc();
  }
  return param_1 == 0;
}



/* Entry: 006ee8a8; end: 006eeb1f;  */

void FUN_006ee8a8(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
code_r0x006ee8a8:
  func_0x006fdcd0();
  *(undefined1 **)((long)register0x00000008 + 0x50) = unaff_x29;
  *(code **)((long)register0x00000008 + 0x58) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x50);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  puVar6 = param_3;
  func_0x006fd588();
  func_0x006fe16c((undefined1 *)((long)register0x00000008 + -0x1b10));
  func_0x006fd840((undefined1 *)((long)register0x00000008 + -0x1a38),param_3);
  func_0x006fd840((undefined1 *)((long)register0x00000008 + -0x19f0),param_3 + 0x48);
  param_3 = param_3 + 0x90;
  func_0x006fd840((undefined1 *)((long)register0x00000008 + -0x19a8));
  for (uVar8 = 2; uVar8 != 0x20; uVar8 = uVar8 + 1) {
    if ((uVar8 & 1) == 0) {
      puVar6 = (undefined1 *)((long)register0x00000008 + (uVar8 >> 1) * 0xd8 + -0x1b10);
      func_0x006fe0d8();
      FUN_006ed530();
    }
    else {
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x1a38);
      func_0x006fe0d8();
      FUN_006ed224();
    }
  }
  puVar4 = param_1 + 0x10;
  FUN_006e3e84();
  bVar2 = false;
  puVar5 = puVar4;
  puVar12 = puVar4;
  do {
    uVar8 = (ulong)((int)puVar12 + 1);
    do {
      uVar10 = (uint)uVar8;
      uVar3 = uVar10 - 2 == (uint)puVar4;
      if ((uint)puVar4 <= uVar10 - 2) {
        param_1 = puVar5;
        param_2 = param_3;
        if (!bVar2) {
          func_0x006fd618();
          func_0x006fdef0();
          param_1 = puVar5;
          param_2 = param_3;
        }
        func_0x006fd508();
        if ((bool)uVar3) {
          return;
        }
        unaff_x30 = FUN_006eeb20;
        ___stack_chk_fail();
        param_3 = (undefined1 *)(*(long *)(param_1 + 8) + 8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1c00);
        param_4 = puVar6;
        goto code_r0x006ee8a8;
      }
      if (bVar2) {
        puVar5 = param_1;
        func_0x006fdc60();
        FUN_006ed530();
      }
      uVar7 = (int)puVar12 - 1;
      puVar12 = (undefined1 *)(ulong)uVar7;
      uVar1 = uVar10 - 1;
      uVar8 = (ulong)uVar1;
    } while (uVar1 + (uVar7 / 5) * -5 != 1);
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar10 + 2 >> 6 < uVar7) {
      func_0x006fe4e0();
      *(ulong *)((long)register0x00000008 + -0x1bf8) = (extraout_x9 & 1) << 4;
      uVar7 = extraout_w8;
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x1bf8) = 0;
    }
    if (uVar10 + 1 >> 6 < uVar7) {
      func_0x006fe4e0();
      lVar9 = (extraout_x9_00 & 1) << 3;
      uVar7 = extraout_w8_00;
    }
    else {
      lVar9 = 0;
    }
    if (uVar10 >> 6 < uVar7) {
      func_0x006fe4e0();
      lVar11 = (extraout_x9_01 & 1) << 2;
      uVar7 = extraout_w8_01;
    }
    else {
      lVar11 = 0;
    }
    *(undefined1 **)((long)register0x00000008 + -0x1bf0) = param_4;
    if (uVar1 >> 6 < uVar7) {
      lVar13 = (*(ulong *)(param_4 + (ulong)(uVar1 >> 6) * 8) >> (uVar8 & 0x3f) & 1) << 1;
    }
    else {
      lVar13 = 0;
    }
    uVar10 = uVar10 - 2;
    puVar12 = (undefined1 *)(ulong)uVar10;
    if (uVar10 >> 6 < uVar7) {
      uVar8 = *(ulong *)(*(long *)((long)register0x00000008 + -0x1bf0) + (ulong)(uVar10 >> 6) * 8)
              >> ((ulong)puVar12 & 0x3f) & 1;
    }
    else {
      uVar8 = 0;
    }
    func_0x006fe16c((undefined1 *)((long)register0x00000008 + -0x1be8));
    lVar9 = lVar9 + *(long *)((long)register0x00000008 + -0x1bf8) + lVar11 + lVar13 + uVar8;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x1b10);
    lVar11 = 0x20;
    param_4 = *(undefined1 **)((long)register0x00000008 + -0x1bf0);
    do {
      puVar6 = (undefined1 *)-(ulong)(lVar9 == 0);
      param_3 = (undefined1 *)((long)register0x00000008 + -0x1be8);
      FUN_006ec874(param_1,param_3,puVar6,puVar5,(undefined1 *)((long)register0x00000008 + -0x1be8))
      ;
      lVar9 = lVar9 + -1;
      puVar5 = puVar5 + 0xd8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (bVar2) {
      puVar5 = param_1;
      func_0x006fd74c();
    }
    else {
      func_0x006fd840(param_2,(undefined1 *)((long)register0x00000008 + -0x1be8));
      func_0x006fd840(param_2 + 0x48,(undefined1 *)((long)register0x00000008 + -0x1ba0));
      puVar5 = param_2 + 0x90;
      param_3 = (undefined1 *)((long)register0x00000008 + -7000);
      func_0x006fd840();
    }
    bVar2 = true;
  } while( true );
}



/* Entry: 006eeb20; end: 006eeb2f;  */

void FUN_006eeb20(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
FUN_006ee8a8:
  puVar6 = (undefined1 *)(*(long *)(param_1 + 8) + 8);
  func_0x006fdcd0();
  *(undefined1 **)((long)register0x00000008 + 0x50) = unaff_x29;
  *(code **)((long)register0x00000008 + 0x58) = unaff_x30;
  unaff_x29 = (undefined1 *)((long)register0x00000008 + 0x50);
  puVar14 = param_3;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  param_3 = puVar6;
  func_0x006fd588();
  func_0x006fe16c((undefined1 *)((long)register0x00000008 + -0x1b10));
  func_0x006fd840((undefined1 *)((long)register0x00000008 + -0x1a38),puVar6);
  func_0x006fd840((undefined1 *)((long)register0x00000008 + -0x19f0),puVar6 + 0x48);
  puVar6 = puVar6 + 0x90;
  func_0x006fd840((undefined1 *)((long)register0x00000008 + -0x19a8));
  for (uVar8 = 2; uVar8 != 0x20; uVar8 = uVar8 + 1) {
    if ((uVar8 & 1) == 0) {
      param_3 = (undefined1 *)((long)register0x00000008 + (uVar8 >> 1) * 0xd8 + -0x1b10);
      func_0x006fe0d8();
      FUN_006ed530();
    }
    else {
      param_3 = (undefined1 *)((long)register0x00000008 + -0x1a38);
      func_0x006fe0d8();
      FUN_006ed224();
    }
  }
  puVar4 = param_1 + 0x10;
  FUN_006e3e84();
  bVar2 = false;
  puVar5 = puVar4;
  puVar12 = puVar4;
  do {
    uVar8 = (ulong)((int)puVar12 + 1);
    do {
      uVar10 = (uint)uVar8;
      uVar3 = uVar10 - 2 == (uint)puVar4;
      if ((uint)puVar4 <= uVar10 - 2) {
        param_1 = puVar5;
        param_2 = puVar6;
        if (!bVar2) {
          func_0x006fd618();
          func_0x006fdef0();
          param_1 = puVar5;
          param_2 = puVar6;
        }
        func_0x006fd508();
        if ((bool)uVar3) {
          return;
        }
        unaff_x30 = FUN_006eeb20;
        ___stack_chk_fail();
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1c00);
        goto FUN_006ee8a8;
      }
      if (bVar2) {
        puVar5 = param_1;
        func_0x006fdc60();
        FUN_006ed530();
      }
      uVar7 = (int)puVar12 - 1;
      puVar12 = (undefined1 *)(ulong)uVar7;
      uVar1 = uVar10 - 1;
      uVar8 = (ulong)uVar1;
    } while (uVar1 + (uVar7 / 5) * -5 != 1);
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar10 + 2 >> 6 < uVar7) {
      func_0x006fe4e0();
      *(ulong *)((long)register0x00000008 + -0x1bf8) = (extraout_x9 & 1) << 4;
      uVar7 = extraout_w8;
    }
    else {
      *(undefined8 *)((long)register0x00000008 + -0x1bf8) = 0;
    }
    if (uVar10 + 1 >> 6 < uVar7) {
      func_0x006fe4e0();
      lVar9 = (extraout_x9_00 & 1) << 3;
      uVar7 = extraout_w8_00;
    }
    else {
      lVar9 = 0;
    }
    if (uVar10 >> 6 < uVar7) {
      func_0x006fe4e0();
      lVar11 = (extraout_x9_01 & 1) << 2;
      uVar7 = extraout_w8_01;
    }
    else {
      lVar11 = 0;
    }
    *(undefined1 **)((long)register0x00000008 + -0x1bf0) = puVar14;
    if (uVar1 >> 6 < uVar7) {
      lVar13 = (*(ulong *)(puVar14 + (ulong)(uVar1 >> 6) * 8) >> (uVar8 & 0x3f) & 1) << 1;
    }
    else {
      lVar13 = 0;
    }
    uVar10 = uVar10 - 2;
    puVar12 = (undefined1 *)(ulong)uVar10;
    if (uVar10 >> 6 < uVar7) {
      uVar8 = *(ulong *)(*(long *)((long)register0x00000008 + -0x1bf0) + (ulong)(uVar10 >> 6) * 8)
              >> ((ulong)puVar12 & 0x3f) & 1;
    }
    else {
      uVar8 = 0;
    }
    func_0x006fe16c((undefined1 *)((long)register0x00000008 + -0x1be8));
    lVar9 = lVar9 + *(long *)((long)register0x00000008 + -0x1bf8) + lVar11 + lVar13 + uVar8;
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x1b10);
    lVar11 = 0x20;
    puVar14 = *(undefined1 **)((long)register0x00000008 + -0x1bf0);
    do {
      param_3 = (undefined1 *)-(ulong)(lVar9 == 0);
      puVar6 = (undefined1 *)((long)register0x00000008 + -0x1be8);
      FUN_006ec874(param_1,puVar6,param_3,puVar5,(undefined1 *)((long)register0x00000008 + -0x1be8))
      ;
      lVar9 = lVar9 + -1;
      puVar5 = puVar5 + 0xd8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (bVar2) {
      puVar5 = param_1;
      func_0x006fd74c();
    }
    else {
      func_0x006fd840(param_2,(undefined1 *)((long)register0x00000008 + -0x1be8));
      func_0x006fd840(param_2 + 0x48,(undefined1 *)((long)register0x00000008 + -0x1ba0));
      puVar5 = param_2 + 0x90;
      puVar6 = (undefined1 *)((long)register0x00000008 + -7000);
      func_0x006fd840();
    }
    bVar2 = true;
  } while( true );
}



/* Entry: 006eeb30; end: 006eecbb;  */

void FUN_006eeb30(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 auStack_2bf0 [9];
  undefined1 auStack_2ba8 [72];
  undefined1 auStack_2b60 [72];
  undefined1 auStack_2b18 [3672];
  undefined8 auStack_1cc0 [459];
  undefined8 auStack_e68 [461];
  
  func_0x006fdcd0();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  func_0x006fd588();
  FUN_006eecbc();
  puVar3 = auStack_1cc0;
  FUN_006eecbc(param_1,puVar3,param_5);
  if (param_7 != (undefined8 *)0x0) {
    puVar3 = auStack_e68;
    param_5 = param_7;
    FUN_006eecbc(param_1,puVar3,param_7);
  }
  uVar5 = param_1 + 0x10;
  FUN_006e3e84();
  bVar1 = true;
  uVar7 = uVar5;
  while( true ) {
    uVar6 = (uint)uVar7;
    uVar2 = uVar6 == (uint)uVar5;
    if ((uint)uVar5 <= uVar6 && !(bool)uVar2) break;
    if (!bVar1) {
      func_0x006fdc60(param_1);
      FUN_006ed530();
    }
    if (uVar6 % 5 == 0) {
      func_0x006fe8a0(param_1,auStack_2bf0,auStack_2b18,param_4);
      if (bVar1) {
        func_0x006fd840(param_2,auStack_2bf0);
        func_0x006fd840(param_2 + 0x48,auStack_2ba8);
        func_0x006fd840(param_2 + 0x90,auStack_2b60);
      }
      else {
        func_0x006fd74c(param_1);
      }
      puVar3 = auStack_2bf0;
      param_5 = auStack_1cc0;
      func_0x006fe8a0(param_1,puVar3,param_5,param_6);
      func_0x006fd74c(param_1);
      if (param_7 != (undefined8 *)0x0) {
        puVar3 = auStack_2bf0;
        param_5 = auStack_e68;
        func_0x006fe8a0(param_1,puVar3,param_5,param_8);
        func_0x006fd74c(param_1);
      }
      bVar1 = false;
    }
    uVar7 = (ulong)(uVar6 - 1);
  }
  if (bVar1) {
    func_0x006fd618();
    func_0x006fdef0();
  }
  func_0x006fd508();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = param_5;
    func_0x006fd8fc();
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[10] = 0;
    puVar3[9] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xe] = 0;
    puVar3[0xd] = 0;
    puVar3[0x10] = 0;
    puVar3[0xf] = 0;
    puVar3[0x11] = 0;
    puVar3[0x13] = 0;
    puVar3[0x12] = 0;
    puVar3[0x15] = 0;
    puVar3[0x14] = 0;
    puVar3[0x17] = 0;
    puVar3[0x16] = 0;
    puVar3[0x19] = 0;
    puVar3[0x18] = 0;
    puVar3[0x1a] = 0;
    func_0x006fd840(puVar3 + 0x1b,puVar4);
    func_0x006fd840(param_2 + 0x120,param_5 + 9);
    func_0x006fd840(param_2 + 0x168,param_5 + 0x12);
    for (uVar5 = 2; uVar5 != 0x11; uVar5 = uVar5 + 1) {
      if ((uVar5 & 1) == 0) {
        func_0x006fdf28();
        FUN_006ed530();
      }
      else {
        func_0x006fdf28();
        FUN_006ed224();
      }
    }
    return;
  }
  return;
}



/* Entry: 006eecbc; end: 006eef03;  */

void FUN_006eecbc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  ulong uVar2;
  
  lVar1 = param_3;
  func_0x006fd8fc();
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[0xc] = 0;
  param_2[0xb] = 0;
  param_2[0xe] = 0;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[0xf] = 0;
  param_2[0x11] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1a] = 0;
  func_0x006fd840(param_2 + 0x1b,lVar1);
  func_0x006fd840(unaff_x19 + 0x120,param_3 + 0x48);
  func_0x006fd840(unaff_x19 + 0x168,param_3 + 0x90);
  for (uVar2 = 2; uVar2 != 0x11; uVar2 = uVar2 + 1) {
    if ((uVar2 & 1) == 0) {
      func_0x006fdf28();
      FUN_006ed530();
    }
    else {
      func_0x006fdf28();
      FUN_006ed224();
    }
  }
  return;
}



/* Entry: 006eef04; end: 006ef047;  */

long * FUN_006eef04(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auStack_1a38 [6712];
  long *plVar4;
  
  func_0x006fdcd0();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  plVar4 = param_1;
  func_0x006fd588();
  uVar3 = (uint)plVar4;
  FUN_006ef048();
  _memcpy(auStack_1a38,param_3,0xd8);
  for (uVar8 = 1; uVar2 = uVar8 == 5, !(bool)uVar2; uVar8 = uVar8 + 1) {
    uVar1 = 1 << (ulong)(uVar8 & 0x1f);
    puVar5 = auStack_1a38 + (ulong)(uVar1 - 1) * 0xd8;
    FUN_006ed530(param_1,puVar5,auStack_1a38 + (ulong)((uVar1 >> 1) - 1) * 0xd8);
    for (uVar6 = 1; uVar6 < uVar3; uVar6 = uVar6 + 1) {
      FUN_006ed530(param_1,puVar5,puVar5);
    }
    for (uVar7 = 1; uVar7 < uVar1; uVar7 = uVar7 + 1) {
      func_0x006fe1e4(param_1);
      FUN_006ed224();
    }
  }
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    func_0x006fd880();
    func_0x006fd5dc();
    param_1 = (long *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,auStack_1a38,0x1f);
  }
  func_0x006fd508();
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    param_1 = param_1 + 7;
    FUN_006e3e84(param_1);
    return (long *)(ulong)(((int)param_1 + 4U) / 5);
  }
  return param_1;
}



/* Entry: 006ef048; end: 006ef06b;  */

uint FUN_006ef048(long param_1)

{
  param_1 = param_1 + 0x38;
  FUN_006e3e84(param_1);
  return ((int)param_1 + 4U) / 5;
}



/* Entry: 006ef06c; end: 006ef197;  */

void FUN_006ef06c(undefined8 param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long in_x6;
  undefined8 in_x7;
  long unaff_x23;
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [80];
  
  func_0x006fea3c();
  uVar3 = param_1;
  FUN_006ef048();
  bVar2 = false;
  uVar1 = (uint)uVar3;
  while (uVar1 = uVar1 - 1, uVar1 < (uint)uVar3) {
    if (bVar2) {
      func_0x006fdc60(param_1);
      FUN_006ed530();
      func_0x006fded8();
      func_0x006fd74c(param_1);
    }
    else {
      func_0x006fded8();
      func_0x006fd840(param_2,auStack_140);
      func_0x006fd840(param_2 + 0x48,auStack_f8);
      func_0x006fd840(param_2 + 0x90,auStack_b0);
    }
    if (unaff_x23 != 0) {
      func_0x006fe200(param_1,auStack_140);
      FUN_006ef198();
      func_0x006fd74c(param_1);
    }
    if (in_x6 != 0) {
      FUN_006ef198(param_1,auStack_140,in_x6,in_x7,uVar1);
      func_0x006fd74c(param_1);
    }
    bVar2 = true;
  }
  if (!bVar2) {
    func_0x006fd618();
    func_0x006fdef0();
  }
  return;
}



/* Entry: 006ef198; end: 006ef28f;  */

void FUN_006ef198(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x19;
  long unaff_x20;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  func_0x006fe858();
  func_0x006fda04();
  uVar1 = *(uint *)(param_1 + 0x18);
  FUN_006ef048();
  uVar9 = 0;
  for (uVar5 = 0; uVar5 != 5; uVar5 = uVar5 + 1) {
    uVar8 = (uint)param_5;
    if (uVar8 >> 6 < uVar1) {
      uVar7 = (uint)(*(ulong *)(param_4 + (ulong)(uVar8 >> 6) * 8) >> (param_5 & 0x3f)) & 1;
    }
    else {
      uVar7 = 0;
    }
    uVar9 = uVar7 << (ulong)(uVar5 & 0x1f) | uVar9;
    param_5 = (ulong)(uVar8 + (int)param_1);
  }
  func_0x006fe16c();
  uVar6 = (ulong)uVar9;
  lVar10 = 0x1f;
  while( true ) {
    uVar6 = uVar6 - 1;
    if (lVar10 == 0) break;
    func_0x006fe108();
    FUN_006ec8dc();
    FUN_006ec8dc(*(undefined4 *)(unaff_x19 + 0x40),unaff_x20 + 0x48,-(ulong)(uVar6 == 0),
                 param_3 + 0x48,unaff_x20 + 0x48);
    param_3 = param_3 + 0x90;
    lVar10 = lVar10 + -1;
  }
  puVar2 = (ulong *)(unaff_x20 + 0x90);
  puVar3 = (ulong *)(unaff_x20 + 0x90);
  puVar4 = (ulong *)(unaff_x19 + 0x140);
  for (lVar10 = (long)*(int *)(unaff_x19 + 0x40); lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar2 = *puVar4 & ~-(ulong)(uVar9 == 0) | *puVar3 & -(ulong)(uVar9 == 0);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



/* Entry: 006ef290; end: 006ef347;  */

void FUN_006ef290(ulong *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (param_3 >> 5) + 0xffffffff & param_3 | 0x3f - param_3 & -(param_3 >> 5);
  *param_1 = -(param_3 >> 5) & 1;
  *param_2 = uVar1 - (uVar1 >> 1);
  return;
}



/* Entry: 006ef348; end: 006ef5ff;  */

long FUN_006ef348(ulong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,ulong param_6)

{
  bool bVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puStack_2448;
  undefined1 *puStack_2440;
  undefined8 auStack_2438 [9];
  undefined1 auStack_23f0 [72];
  undefined8 auStack_23a8 [9];
  undefined8 auStack_2360 [216];
  char acStack_1c99 [529];
  undefined8 auStack_1a88 [648];
  undefined1 auStack_643 [1603];
  
  func_0x006fdcd0();
  (*(code *)PTR____chkstk_darwin_00999f48)();
  uVar10 = param_1;
  puVar5 = param_2;
  puVar6 = param_3;
  func_0x006fd588();
  func_0x006fe998();
  if (param_6 < 4) {
    puStack_2448 = auStack_1a88;
    puStack_2440 = auStack_643;
LAB_006ef3bc:
    uVar10 = uVar10 & 0xffffffff;
    uVar11 = param_6;
    puVar7 = puStack_2448;
    if (param_3 != (undefined8 *)0x0) {
      lVar8 = *(long *)(param_1 + 8);
      func_0x006ef2c4(param_1,acStack_1c99,param_3,uVar10);
      puVar5 = auStack_2360;
      puVar6 = (undefined8 *)(lVar8 + 8);
      FUN_006ef600(param_1,puVar5,puVar6);
    }
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      func_0x006fea74();
      func_0x006ef2c4();
      puVar5 = puVar7;
      puVar6 = param_4;
      FUN_006ef600(param_1,puVar7,param_4);
      param_4 = param_4 + 0x1b;
      puVar7 = puVar7 + 0xd8;
    }
    bVar1 = true;
    for (uVar11 = uVar10; uVar4 = uVar11 == uVar10, uVar11 <= uVar10; uVar11 = uVar11 - 1) {
      if (!bVar1) {
        puVar5 = param_2;
        puVar6 = param_2;
        FUN_006ed530(param_1);
      }
      uVar2 = param_6;
      puVar7 = puStack_2448;
      puVar3 = puStack_2440;
      if ((param_3 != (undefined8 *)0x0) && (acStack_1c99[uVar11] != '\0')) {
        puVar5 = auStack_2438;
        puVar6 = auStack_2360;
        FUN_006ef68c(param_1);
        if (bVar1) {
          func_0x006fd840(param_2,auStack_2438);
          func_0x006fd840(param_2 + 9,auStack_23f0);
          puVar5 = auStack_23a8;
          func_0x006fd840(param_2 + 0x12);
          bVar1 = false;
        }
        else {
          func_0x006fdfdc();
        }
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        if (puVar3[uVar11] != '\0') {
          puVar5 = auStack_2438;
          puVar6 = puVar7;
          FUN_006ef68c(param_1);
          if (bVar1) {
            func_0x006fd840(param_2,auStack_2438);
            func_0x006fd840(param_2 + 9,auStack_23f0);
            puVar5 = auStack_23a8;
            func_0x006fd840(param_2 + 0x12);
            bVar1 = false;
          }
          else {
            func_0x006fdfdc();
          }
        }
        puVar7 = puVar7 + 0xd8;
        puVar3 = puVar3 + 0x211;
      }
    }
    if (bVar1) {
      param_2[8] = 0;
      param_2[5] = 0;
      param_2[4] = 0;
      param_2[7] = 0;
      param_2[6] = 0;
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      param_2[10] = 0;
      param_2[9] = 0;
      param_2[0xc] = 0;
      param_2[0xb] = 0;
      param_2[0xe] = 0;
      param_2[0xd] = 0;
      param_2[0x10] = 0;
      param_2[0xf] = 0;
      param_2[0x11] = 0;
      param_2[0x13] = 0;
      param_2[0x12] = 0;
      param_2[0x15] = 0;
      param_2[0x14] = 0;
      param_2[0x17] = 0;
      param_2[0x16] = 0;
      param_2[0x19] = 0;
      param_2[0x18] = 0;
      param_2[0x1a] = 0;
    }
    lVar8 = 1;
  }
  else {
    uVar4 = param_6 == 0x25ed097b425ed0;
    if (param_6 < 0x25ed097b425ed0) {
      puStack_2440 = (undefined1 *)(param_6 * 0x211);
      FUN_00701e90();
      puStack_2448 = (undefined8 *)(param_6 * 0x6c0);
      FUN_00701e90();
      if ((puStack_2440 != (undefined1 *)0x0) && (puStack_2448 != (undefined8 *)0x0))
      goto LAB_006ef3bc;
      func_0x006fd520(0xf);
    }
    else {
      func_0x006fd880();
      puVar6 = (undefined8 *)((long)&segment_command_00000020.vmsize + 5);
      func_0x006fd5dc();
    }
    lVar8 = 0;
  }
  func_0x006fdb84();
  func_0x006fe928();
  func_0x006fd508();
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    puVar7 = puVar6;
    func_0x006fda04();
    func_0x006fd840(puVar5,puVar7);
    func_0x006fd840(lVar8 + 0x48,puVar6 + 9);
    lVar8 = lVar8 + 0x90;
    func_0x006fd840(lVar8,puVar6 + 0x12);
    func_0x006fdcb8();
    FUN_006ed530();
    lVar9 = 7;
    do {
      func_0x006fd7d4();
      FUN_006ed224();
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    return lVar8;
  }
  return lVar8;
}



/* Entry: 006ef600; end: 006ef68b;  */

void FUN_006ef600(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = param_3;
  func_0x006fda04();
  func_0x006fd840(param_2,lVar1);
  func_0x006fd840(unaff_x20 + 0x48,param_3 + 0x48);
  func_0x006fd840(unaff_x20 + 0x90,param_3 + 0x90);
  func_0x006fdcb8();
  FUN_006ed530();
  lVar1 = 7;
  do {
    func_0x006fd7d4();
    FUN_006ed224();
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



/* Entry: 006ef68c; end: 006ef72f;  */

void FUN_006ef68c(ulong param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (-1 < (int)param_4) {
    param_3 = param_3 + (param_4 >> 1 & 0x7fffffff) * 0xd8;
    func_0x006fd9d0();
    func_0x006fd840();
    func_0x006fd840(param_2 + 0x48,param_3 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)(param_2 + 0x90,param_3 + 0x90,0x48);
    return;
  }
  param_3 = param_3 + (ulong)((uint)-(int)param_4 >> 1) * 0xd8;
  func_0x006fdab0();
  func_0x006fd840();
  func_0x006fd840(param_2 + 0x48,param_3 + 0x48);
  func_0x006fd840(param_2 + 0x90,param_3 + 0x90);
  func_0x006fd8fc(param_1,param_2 + 0x48);
  FUN_006ed7cc();
  func_0x006e3b2c(unaff_x19,*(undefined8 *)(unaff_x20 + 0x38),param_2 + 0x48,
                  (long)*(int *)(unaff_x20 + 0x40));
  for (lVar1 = 0; lVar1 < *(int *)(unaff_x20 + 0x40); lVar1 = lVar1 + 1) {
    *(ulong *)(unaff_x19 + lVar1 * 8) = *(ulong *)(unaff_x19 + lVar1 * 8) & param_1;
  }
  return;
}



/* Entry: 006ef730; end: 006ef7cb;  */

undefined8 FUN_006ef730(void)

{
  int iVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  code *extraout_x8;
  undefined8 uStack_b0;
  long lStack_a8;
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
  int iVar2;
  
  iVar1 = (int)&uStack_b0;
  iVar2 = (int)&uStack_b0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  FUN_006ef7cc();
  if (iVar1 != 0) {
    func_0x006fdc08(*(undefined8 *)(lStack_a8 + 0x18),(ulong)&uStack_b0 | 8);
    (*extraout_x8)();
    FUN_006ef950(&uStack_b0,in_x5,in_x6);
    if (iVar2 != 0) goto LAB_006ef7ac;
  }
  in_x5 = 0;
LAB_006ef7ac:
  FUN_006ef9d0(&uStack_b0);
  return in_x5;
}



/* Entry: 006ef7cc; end: 006ef94f;  */

void FUN_006ef7cc(undefined8 param_1,long *param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  byte *pbVar6;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar7;
  undefined8 extraout_x8_01;
  byte *unaff_x21;
  undefined8 in_register_00005008;
  undefined4 uStack_1cc;
  undefined1 auStack_1c8 [64];
  undefined8 uStack_188;
  uint uStack_14c;
  byte abStack_148 [256];
  undefined8 uStack_48;
  
  func_0x006fdb48();
  plVar5 = param_2;
  func_0x006fd5fc();
  lVar1 = *plVar5;
  if (param_5 != 0) {
    lVar1 = param_5;
  }
  uStack_48 = extraout_x8;
  if ((param_3 == 0) && (uVar2 = lVar1 == *plVar5, (bool)uVar2)) {
LAB_006ef914:
    plVar5 = param_2 + 1;
    FUN_006ea838(plVar5,param_2 + 5);
  }
  else {
    uVar2 = unaff_x21 == (byte *)(ulong)*(uint *)(lVar1 + 0x28);
    iVar4 = (int)param_2;
    if ((byte *)(ulong)*(uint *)(lVar1 + 0x28) < unaff_x21) {
      iVar3 = iVar4 + 8;
      func_0x006fe8b0();
      if (iVar3 != 0) {
        func_0x006fdc08(*(undefined8 *)(param_2[1] + 0x18),param_2 + 1);
        (*extraout_x8_00)();
        func_0x006fe878(param_2 + 1);
        unaff_x21 = (byte *)(ulong)uStack_14c;
        goto LAB_006ef854;
      }
    }
    else {
      func_0x006fdc08(abStack_148);
      func_0x006e3440();
LAB_006ef854:
      if ((int)unaff_x21 != 0x80) {
        func_0x006fd9c0(abStack_148 + ((ulong)unaff_x21 & 0xffffffff));
      }
      for (lVar7 = 0; uVar2 = lVar7 == 0x80, !(bool)uVar2; lVar7 = lVar7 + 1) {
        abStack_148[lVar7 + 0x80] = abStack_148[lVar7] ^ 0x36;
      }
      iVar3 = iVar4 + 0x28;
      func_0x006fe8b0();
      if (iVar3 != 0) {
        unaff_x21 = abStack_148 + 0x80;
        (**(code **)(param_2[5] + 0x18))
                  (param_2 + 5,abStack_148 + 0x80,*(undefined4 *)(lVar1 + 0x28));
        for (lVar7 = 0; uVar2 = lVar7 == 0x80, !(bool)uVar2; lVar7 = lVar7 + 1) {
          unaff_x21[lVar7] = abStack_148[lVar7] ^ 0x5c;
        }
        iVar4 = iVar4 + 0x48;
        func_0x006fe8b0();
        if (iVar4 != 0) {
          (**(code **)(param_2[9] + 0x18))
                    (param_2 + 9,abStack_148 + 0x80,*(undefined4 *)(lVar1 + 0x28));
          *param_2 = lVar1;
          goto LAB_006ef914;
        }
      }
    }
    plVar5 = (long *)0x0;
  }
  func_0x006fd534(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x006fd720();
  func_0x006fd5fc();
  uStack_188 = extraout_x8_01;
  func_0x006fe878(plVar5 + 1);
  pbVar6 = unaff_x21 + 8;
  FUN_006ea838(pbVar6,unaff_x21 + 0x48);
  if ((int)pbVar6 == 0) {
    *(undefined4 *)param_2 = 0;
  }
  else {
    (**(code **)(*(long *)(unaff_x21 + 8) + 0x18))(unaff_x21 + 8,auStack_1c8,uStack_1cc);
    func_0x006fdbc4(unaff_x21 + 8);
    FUN_006ea9b8();
    pbVar6 = (byte *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fd534(uStack_188);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  FUN_006ea7fc(pbVar6 + 0x28);
  FUN_006ea7fc(pbVar6 + 0x48);
  FUN_006ea7fc(pbVar6 + 8);
  func_0x006fe580();
  *(undefined8 *)(pbVar6 + 0x28) = in_register_00005008;
  *(undefined8 *)(pbVar6 + 0x20) = param_1;
  *(undefined8 *)(pbVar6 + 0x38) = in_register_00005008;
  *(undefined8 *)(pbVar6 + 0x30) = param_1;
  *(undefined8 *)(pbVar6 + 0x48) = in_register_00005008;
  *(undefined8 *)(pbVar6 + 0x40) = param_1;
  *(undefined8 *)(pbVar6 + 0x58) = in_register_00005008;
  *(undefined8 *)(pbVar6 + 0x50) = param_1;
  pbVar6[0x60] = 0;
  pbVar6[0x61] = 0;
  pbVar6[0x62] = 0;
  pbVar6[99] = 0;
  pbVar6[100] = 0;
  pbVar6[0x65] = 0;
  pbVar6[0x66] = 0;
  pbVar6[0x67] = 0;
  return;
}



/* Entry: 006ef950; end: 006ef9cf;  */

void FUN_006ef950(undefined8 param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  long unaff_x21;
  undefined8 in_register_00005008;
  undefined4 uStack_7c;
  undefined1 auStack_78 [64];
  undefined8 uStack_38;
  
  func_0x006fd720();
  func_0x006fd5fc();
  uStack_38 = extraout_x8;
  func_0x006fe878(param_2 + 8);
  lVar1 = unaff_x21 + 8;
  FUN_006ea838(lVar1,unaff_x21 + 0x48);
  if ((int)lVar1 == 0) {
    *unaff_x19 = 0;
  }
  else {
    (**(code **)(*(long *)(unaff_x21 + 8) + 0x18))(unaff_x21 + 8,auStack_78,uStack_7c);
    func_0x006fdbc4(unaff_x21 + 8);
    FUN_006ea9b8();
    lVar1 = 1;
  }
  func_0x006fd534(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_006ea7fc(lVar1 + 0x28);
  FUN_006ea7fc(lVar1 + 0x48);
  FUN_006ea7fc(lVar1 + 8);
  func_0x006fe580();
  *(undefined8 *)(lVar1 + 0x28) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x38) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  *(undefined8 *)(lVar1 + 0x48) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x40) = param_1;
  *(undefined8 *)(lVar1 + 0x58) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  return;
}



/* Entry: 006ef9d0; end: 006efa63;  */

void FUN_006ef9d0(undefined8 param_1,long param_2)

{
  undefined8 in_register_00005008;
  
  FUN_006ea7fc(param_2 + 0x28);
  FUN_006ea7fc(param_2 + 0x48);
  FUN_006ea7fc(param_2 + 8);
  func_0x006fe580();
  *(undefined8 *)(param_2 + 0x28) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x20) = param_1;
  *(undefined8 *)(param_2 + 0x38) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x30) = param_1;
  *(undefined8 *)(param_2 + 0x48) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x40) = param_1;
  *(undefined8 *)(param_2 + 0x58) = in_register_00005008;
  *(undefined8 *)(param_2 + 0x50) = param_1;
  *(undefined8 *)(param_2 + 0x60) = 0;
  return;
}



/* Entry: 006efa64; end: 006efff3;  */

void FUN_006efa64(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  func_0x006fdc38();
  iVar2 = *param_1;
  uVar11 = param_1[1];
  uVar3 = param_1[2];
  uVar12 = param_1[3];
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar4 = *param_2;
    iVar13 = param_2[1];
    uVar1 = (uVar3 & uVar11 | uVar12 & (uVar11 ^ 0xffffffff)) + iVar2 + iVar4;
    uVar21 = uVar1 >> 0x1d | uVar1 * 8;
    uVar12 = iVar13 + uVar12 +
             (uVar11 & (uVar1 >> 0x1d | uVar1 * 8) |
             uVar3 & ((uVar1 >> 0x1d | uVar1 * 8) ^ 0xffffffff));
    uVar1 = uVar12 >> 0x19 | uVar12 * 0x80;
    iVar2 = param_2[2];
    iVar14 = param_2[3];
    uVar3 = iVar2 + uVar3 +
            (uVar21 & (uVar12 >> 0x19 | uVar12 * 0x80) |
            uVar11 & ((uVar12 >> 0x19 | uVar12 * 0x80) ^ 0xffffffff));
    uVar12 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar11 = iVar14 + uVar11 +
             (uVar1 & (uVar3 >> 0x15 | uVar3 * 0x800) |
             uVar21 & ((uVar3 >> 0x15 | uVar3 * 0x800) ^ 0xffffffff));
    uVar3 = uVar11 >> 0xd | uVar11 * 0x80000;
    iVar5 = param_2[4];
    iVar15 = param_2[5];
    uVar11 = iVar5 + uVar21 +
             (uVar12 & (uVar11 >> 0xd | uVar11 * 0x80000) |
             uVar1 & ((uVar11 >> 0xd | uVar11 * 0x80000) ^ 0xffffffff));
    uVar21 = uVar11 >> 0x1d | uVar11 * 8;
    uVar11 = uVar1 + iVar15 +
             (uVar3 & (uVar11 >> 0x1d | uVar11 * 8) |
             uVar12 & ((uVar11 >> 0x1d | uVar11 * 8) ^ 0xffffffff));
    uVar1 = uVar11 >> 0x19 | uVar11 * 0x80;
    iVar6 = param_2[6];
    iVar16 = param_2[7];
    uVar11 = uVar12 + iVar6 +
             (uVar21 & (uVar11 >> 0x19 | uVar11 * 0x80) |
             uVar3 & ((uVar11 >> 0x19 | uVar11 * 0x80) ^ 0xffffffff));
    uVar12 = uVar11 >> 0x15 | uVar11 * 0x800;
    uVar11 = uVar3 + iVar16 +
             (uVar1 & (uVar11 >> 0x15 | uVar11 * 0x800) |
             uVar21 & ((uVar11 >> 0x15 | uVar11 * 0x800) ^ 0xffffffff));
    uVar3 = uVar11 >> 0xd | uVar11 * 0x80000;
    iVar7 = param_2[8];
    iVar17 = param_2[9];
    uVar11 = uVar21 + iVar7 +
             (uVar12 & (uVar11 >> 0xd | uVar11 * 0x80000) |
             uVar1 & ((uVar11 >> 0xd | uVar11 * 0x80000) ^ 0xffffffff));
    uVar21 = uVar11 >> 0x1d | uVar11 * 8;
    uVar11 = uVar1 + iVar17 +
             (uVar3 & (uVar11 >> 0x1d | uVar11 * 8) |
             uVar12 & ((uVar11 >> 0x1d | uVar11 * 8) ^ 0xffffffff));
    uVar1 = uVar11 >> 0x19 | uVar11 * 0x80;
    iVar8 = param_2[10];
    iVar18 = param_2[0xb];
    uVar11 = uVar12 + iVar8 +
             (uVar21 & (uVar11 >> 0x19 | uVar11 * 0x80) |
             uVar3 & ((uVar11 >> 0x19 | uVar11 * 0x80) ^ 0xffffffff));
    uVar12 = uVar11 >> 0x15 | uVar11 * 0x800;
    uVar11 = uVar3 + iVar18 +
             (uVar1 & (uVar11 >> 0x15 | uVar11 * 0x800) |
             uVar21 & ((uVar11 >> 0x15 | uVar11 * 0x800) ^ 0xffffffff));
    uVar22 = uVar11 >> 0xd | uVar11 * 0x80000;
    iVar9 = param_2[0xc];
    iVar19 = param_2[0xd];
    uVar11 = uVar21 + iVar9 +
             (uVar12 & (uVar11 >> 0xd | uVar11 * 0x80000) |
             uVar1 & ((uVar11 >> 0xd | uVar11 * 0x80000) ^ 0xffffffff));
    uVar21 = uVar11 >> 0x1d | uVar11 * 8;
    uVar11 = uVar1 + iVar19 +
             (uVar22 & (uVar11 >> 0x1d | uVar11 * 8) |
             uVar12 & ((uVar11 >> 0x1d | uVar11 * 8) ^ 0xffffffff));
    iVar10 = param_2[0xe];
    iVar20 = param_2[0xf];
    uVar3 = uVar12 + iVar10 +
            (uVar21 & (uVar11 >> 0x19 | uVar11 * 0x80) |
            uVar22 & ((uVar11 >> 0x19 | uVar11 * 0x80) ^ 0xffffffff));
    uVar23 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar1 = uVar23 & (uVar11 >> 0x19 | uVar11 * 0x80);
    uVar12 = uVar22 + iVar20 + (uVar1 | uVar21 & ((uVar3 >> 0x15 | uVar3 * 0x800) ^ 0xffffffff));
    uVar22 = uVar12 >> 0xd | uVar12 * 0x80000;
    uVar1 = iVar4 + 0x5a827999 + uVar21 +
            ((uVar23 | uVar11 >> 0x19 | uVar11 * 0x80) & (uVar12 >> 0xd | uVar12 * 0x80000) | uVar1)
    ;
    uVar21 = uVar1 >> 0x1d | uVar1 * 8;
    uVar11 = iVar5 + 0x5a827999 + (uVar11 >> 0x19 | uVar11 * 0x80) +
             ((uVar22 | uVar3 >> 0x15 | uVar3 * 0x800) & (uVar1 >> 0x1d | uVar1 * 8) |
             uVar22 & (uVar3 >> 0x15 | uVar3 * 0x800));
    uVar24 = uVar11 >> 0x1b | uVar11 * 0x20;
    uVar3 = iVar7 + 0x5a827999 + uVar23 +
            ((uVar21 | uVar12 >> 0xd | uVar12 * 0x80000) & (uVar11 >> 0x1b | uVar11 * 0x20) |
            uVar21 & (uVar12 >> 0xd | uVar12 * 0x80000));
    uVar23 = uVar3 >> 0x17 | uVar3 * 0x200;
    uVar12 = iVar9 + 0x5a827999 + uVar22 +
             ((uVar24 | uVar1 >> 0x1d | uVar1 * 8) & (uVar3 >> 0x17 | uVar3 * 0x200) |
             uVar24 & (uVar1 >> 0x1d | uVar1 * 8));
    uVar1 = uVar12 >> 0x13 | uVar12 * 0x2000;
    uVar11 = iVar13 + 0x5a827999 + uVar21 +
             ((uVar23 | uVar11 >> 0x1b | uVar11 * 0x20) & (uVar12 >> 0x13 | uVar12 * 0x2000) |
             uVar23 & (uVar11 >> 0x1b | uVar11 * 0x20));
    uVar21 = uVar11 >> 0x1d | uVar11 * 8;
    uVar3 = iVar15 + 0x5a827999 + uVar24 +
            ((uVar1 | uVar3 >> 0x17 | uVar3 * 0x200) & (uVar11 >> 0x1d | uVar11 * 8) |
            uVar1 & (uVar3 >> 0x17 | uVar3 * 0x200));
    uVar22 = uVar3 >> 0x1b | uVar3 * 0x20;
    uVar12 = iVar17 + 0x5a827999 + uVar23 +
             ((uVar21 | uVar12 >> 0x13 | uVar12 * 0x2000) & (uVar3 >> 0x1b | uVar3 * 0x20) |
             uVar21 & (uVar12 >> 0x13 | uVar12 * 0x2000));
    uVar23 = uVar12 >> 0x17 | uVar12 * 0x200;
    uVar11 = iVar19 + 0x5a827999 + uVar1 +
             ((uVar22 | uVar11 >> 0x1d | uVar11 * 8) & (uVar12 >> 0x17 | uVar12 * 0x200) |
             uVar22 & (uVar11 >> 0x1d | uVar11 * 8));
    uVar1 = uVar11 >> 0x13 | uVar11 * 0x2000;
    uVar3 = iVar2 + 0x5a827999 + uVar21 +
            ((uVar23 | uVar3 >> 0x1b | uVar3 * 0x20) & (uVar11 >> 0x13 | uVar11 * 0x2000) |
            uVar23 & (uVar3 >> 0x1b | uVar3 * 0x20));
    uVar21 = uVar3 >> 0x1d | uVar3 * 8;
    uVar12 = iVar6 + 0x5a827999 + uVar22 +
             ((uVar1 | uVar12 >> 0x17 | uVar12 * 0x200) & (uVar3 >> 0x1d | uVar3 * 8) |
             uVar1 & (uVar12 >> 0x17 | uVar12 * 0x200));
    uVar22 = uVar12 >> 0x1b | uVar12 * 0x20;
    uVar11 = iVar8 + 0x5a827999 + uVar23 +
             ((uVar21 | uVar11 >> 0x13 | uVar11 * 0x2000) & (uVar12 >> 0x1b | uVar12 * 0x20) |
             uVar21 & (uVar11 >> 0x13 | uVar11 * 0x2000));
    uVar23 = uVar11 >> 0x17 | uVar11 * 0x200;
    uVar3 = iVar10 + 0x5a827999 + uVar1 +
            ((uVar22 | uVar3 >> 0x1d | uVar3 * 8) & (uVar11 >> 0x17 | uVar11 * 0x200) |
            uVar22 & (uVar3 >> 0x1d | uVar3 * 8));
    uVar1 = uVar3 >> 0x13 | uVar3 * 0x2000;
    uVar12 = iVar14 + 0x5a827999 + uVar21 +
             ((uVar23 | uVar12 >> 0x1b | uVar12 * 0x20) & (uVar3 >> 0x13 | uVar3 * 0x2000) |
             uVar23 & (uVar12 >> 0x1b | uVar12 * 0x20));
    uVar21 = uVar12 >> 0x1d | uVar12 * 8;
    uVar11 = iVar16 + 0x5a827999 + uVar22 +
             ((uVar1 | uVar11 >> 0x17 | uVar11 * 0x200) & (uVar12 >> 0x1d | uVar12 * 8) |
             uVar1 & (uVar11 >> 0x17 | uVar11 * 0x200));
    uVar22 = uVar11 >> 0x1b | uVar11 * 0x20;
    uVar3 = iVar18 + 0x5a827999 + uVar23 +
            ((uVar21 | uVar3 >> 0x13 | uVar3 * 0x2000) & (uVar11 >> 0x1b | uVar11 * 0x20) |
            uVar21 & (uVar3 >> 0x13 | uVar3 * 0x2000));
    uVar12 = iVar20 + 0x5a827999 + uVar1 +
             ((uVar22 | uVar12 >> 0x1d | uVar12 * 8) & (uVar3 >> 0x17 | uVar3 * 0x200) |
             uVar22 & (uVar12 >> 0x1d | uVar12 * 8));
    uVar23 = uVar12 >> 0x13 | uVar12 * 0x2000;
    uVar1 = uVar23 ^ (uVar3 >> 0x17 | uVar3 * 0x200);
    uVar11 = iVar4 + 0x6ed9eba1 + uVar21 + (uVar1 ^ (uVar11 >> 0x1b | uVar11 * 0x20));
    uVar1 = iVar7 + 0x6ed9eba1 + uVar22 + (uVar1 ^ (uVar11 >> 0x1d | uVar11 * 8));
    uVar22 = uVar1 >> 0x17 | uVar1 * 0x200;
    uVar21 = uVar22 ^ (uVar11 >> 0x1d | uVar11 * 8);
    uVar3 = iVar5 + 0x6ed9eba1 + (uVar3 >> 0x17 | uVar3 * 0x200) +
            (uVar21 ^ (uVar12 >> 0x13 | uVar12 * 0x2000));
    uVar24 = uVar3 >> 0x15 | uVar3 * 0x800;
    uVar12 = iVar9 + 0x6ed9eba1 + uVar23 + (uVar21 ^ (uVar3 >> 0x15 | uVar3 * 0x800));
    uVar21 = uVar12 >> 0x11 | uVar12 * 0x8000;
    uVar11 = iVar2 + 0x6ed9eba1 + (uVar11 >> 0x1d | uVar11 * 8) +
             (uVar24 ^ (uVar1 >> 0x17 | uVar1 * 0x200) ^ (uVar12 >> 0x11 | uVar12 * 0x8000));
    uVar1 = uVar11 >> 0x1d | uVar11 * 8;
    uVar3 = iVar8 + 0x6ed9eba1 + uVar22 +
            (uVar21 ^ (uVar3 >> 0x15 | uVar3 * 0x800) ^ (uVar11 >> 0x1d | uVar11 * 8));
    uVar22 = uVar3 >> 0x17 | uVar3 * 0x200;
    uVar12 = iVar6 + 0x6ed9eba1 + uVar24 +
             (uVar1 ^ (uVar12 >> 0x11 | uVar12 * 0x8000) ^ (uVar3 >> 0x17 | uVar3 * 0x200));
    uVar23 = uVar12 >> 0x15 | uVar12 * 0x800;
    uVar11 = iVar10 + 0x6ed9eba1 + uVar21 +
             (uVar22 ^ (uVar11 >> 0x1d | uVar11 * 8) ^ (uVar12 >> 0x15 | uVar12 * 0x800));
    uVar21 = uVar11 >> 0x11 | uVar11 * 0x8000;
    uVar3 = iVar13 + 0x6ed9eba1 + uVar1 +
            (uVar23 ^ (uVar3 >> 0x17 | uVar3 * 0x200) ^ (uVar11 >> 0x11 | uVar11 * 0x8000));
    uVar1 = uVar3 >> 0x1d | uVar3 * 8;
    uVar12 = iVar17 + 0x6ed9eba1 + uVar22 +
             (uVar21 ^ (uVar12 >> 0x15 | uVar12 * 0x800) ^ (uVar3 >> 0x1d | uVar3 * 8));
    uVar22 = uVar12 >> 0x17 | uVar12 * 0x200;
    uVar11 = iVar15 + 0x6ed9eba1 + uVar23 +
             (uVar1 ^ (uVar11 >> 0x11 | uVar11 * 0x8000) ^ (uVar12 >> 0x17 | uVar12 * 0x200));
    uVar23 = uVar11 >> 0x15 | uVar11 * 0x800;
    uVar3 = iVar19 + 0x6ed9eba1 + uVar21 +
            (uVar22 ^ (uVar3 >> 0x1d | uVar3 * 8) ^ (uVar11 >> 0x15 | uVar11 * 0x800));
    uVar21 = uVar3 >> 0x11 | uVar3 * 0x8000;
    uVar1 = iVar14 + 0x6ed9eba1 + uVar1 +
            (uVar23 ^ (uVar12 >> 0x17 | uVar12 * 0x200) ^ (uVar3 >> 0x11 | uVar3 * 0x8000));
    uVar24 = uVar1 >> 0x1d | uVar1 * 8;
    uVar11 = iVar18 + 0x6ed9eba1 + uVar22 +
             (uVar21 ^ (uVar11 >> 0x15 | uVar11 * 0x800) ^ (uVar1 >> 0x1d | uVar1 * 8));
    uVar12 = uVar11 >> 0x17 | uVar11 * 0x200;
    uVar3 = iVar16 + 0x6ed9eba1 + uVar23 +
            (uVar24 ^ (uVar3 >> 0x11 | uVar3 * 0x8000) ^ (uVar11 >> 0x17 | uVar11 * 0x200));
    uVar11 = iVar20 + 0x6ed9eba1 + uVar21 +
             (uVar12 ^ (uVar1 >> 0x1d | uVar1 * 8) ^ (uVar3 >> 0x15 | uVar3 * 0x800));
    iVar2 = uVar24 + *param_1;
    uVar11 = (uVar11 >> 0x11 | uVar11 * 0x8000) + param_1[1];
    *param_1 = iVar2;
    param_1[1] = uVar11;
    uVar3 = (uVar3 >> 0x15 | uVar3 * 0x800) + param_1[2];
    uVar12 = uVar12 + param_1[3];
    param_1[2] = uVar3;
    param_1[3] = uVar12;
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 006efff4; end: 006f01a7;  */

/* WARNING: Possible PIC construction at 0x006f0068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006f006c) */

void FUN_006efff4(code *param_1,undefined8 param_2,undefined8 *param_3,uint *param_4,int *param_5,
                 uint *param_6,long param_7,ulong param_8)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  func_0x006fe858();
  if (param_8 != 0) {
    uVar2 = *param_6;
    uVar1 = (int)param_8 * 8;
    *param_5 = (int)(param_8 >> 0x1d) + *param_5 + (uint)CARRY4(uVar2,uVar1);
    *param_6 = uVar2 + uVar1;
    uVar3 = (ulong)*param_4;
    if (*param_4 != 0) {
      if ((param_8 < 0x40) && (param_8 + uVar3 < 0x40)) goto SUB_006e3440;
      func_0x006fe3b8((long)param_3 + uVar3,param_7);
      func_0x006fe568();
      (*param_1)();
      param_7 = param_7 + (0x40 - uVar3);
      param_8 = param_8 - (0x40 - uVar3);
      *param_4 = 0;
      param_3[5] = 0;
      param_3[4] = 0;
      param_3[7] = 0;
      param_3[6] = 0;
      param_3[1] = 0;
      *param_3 = 0;
      param_3[3] = 0;
      param_3[2] = 0;
    }
    if (0x3f < param_8) {
      (*param_1)(param_2,param_7,param_8 >> 6);
      param_8 = param_8 & 0x3f;
    }
    if (param_8 != 0) {
      *param_4 = (uint)param_8;
      func_0x006fdc14();
SUB_006e3440:
      if (param_8 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_0099a3f8)();
      return;
    }
  }
  return;
}



/* Entry: 006f01a8; end: 006f01cf;  */

undefined8 FUN_006f01a8(void)

{
  func_0x006fe460();
  func_0x006fe9d8();
  FUN_006efff4();
  return 1;
}



/* Entry: 006f01d0; end: 006f021b;  */

undefined8 FUN_006f01d0(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  
  func_0x006fd8fc();
  func_0x006fe9d8();
  func_0x006f0108();
  *unaff_x20 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  unaff_x20[2] = unaff_x19[2];
  unaff_x20[3] = unaff_x19[3];
  return 1;
}



/* Entry: 006f021c; end: 006f0bff;  */

void FUN_006f021c(int *param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  func_0x006fdcd0();
  iVar2 = *param_1;
  uVar11 = param_1[1];
  uVar3 = param_1[2];
  uVar12 = param_1[3];
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar4 = *param_2;
    iVar13 = param_2[1];
    uVar1 = iVar2 + (uVar3 & uVar11 | uVar12 & (uVar11 ^ 0xffffffff)) + -0x28955b88 + iVar4;
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
    uVar12 = uVar12 + iVar13 + -0x173848aa + (uVar11 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
    iVar2 = param_2[2];
    iVar14 = param_2[3];
    uVar3 = uVar3 + iVar2 + 0x242070db + (uVar1 & uVar12 | uVar11 & (uVar12 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar12;
    uVar11 = uVar11 + iVar14 + -0x3e423112 + (uVar12 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar3;
    iVar5 = param_2[4];
    iVar15 = param_2[5];
    uVar1 = uVar1 + iVar5 + -0xa83f051 + (uVar3 & uVar11 | uVar12 & (uVar11 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
    uVar12 = iVar15 + uVar12 + 0x4787c62a + (uVar11 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
    iVar6 = param_2[6];
    iVar16 = param_2[7];
    uVar3 = iVar6 + uVar3 + -0x57cfb9ed + (uVar1 & uVar12 | uVar11 & (uVar12 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar12;
    uVar11 = iVar16 + uVar11 + -0x2b96aff + (uVar12 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar3;
    iVar7 = param_2[8];
    iVar17 = param_2[9];
    uVar1 = iVar7 + uVar1 + 0x698098d8 + (uVar3 & uVar11 | uVar12 & (uVar11 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
    uVar12 = iVar17 + uVar12 + -0x74bb0851 + (uVar11 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
    iVar8 = param_2[10];
    iVar18 = param_2[0xb];
    uVar3 = iVar8 + uVar3 + -0xa44f + (uVar1 & uVar12 | uVar11 & (uVar12 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar12;
    uVar11 = iVar18 + uVar11 + -0x76a32842 + (uVar12 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar3;
    iVar9 = param_2[0xc];
    iVar19 = param_2[0xd];
    uVar1 = iVar9 + uVar1 + 0x6b901122 + (uVar3 & uVar11 | uVar12 & (uVar11 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar11;
    uVar12 = iVar19 + uVar12 + -0x2678e6d + (uVar11 & uVar1 | uVar3 & (uVar1 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x14 | uVar12 * 0x1000) + uVar1;
    iVar10 = param_2[0xe];
    iVar20 = param_2[0xf];
    uVar3 = iVar10 + uVar3 + -0x5986bc72 + (uVar1 & uVar12 | uVar11 & (uVar12 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar12;
    uVar11 = iVar20 + uVar11 + 0x49b40821 + (uVar12 & uVar3 | uVar1 & (uVar3 ^ 0xffffffff));
    uVar11 = (uVar11 >> 10 | uVar11 * 0x400000) + uVar3;
    uVar1 = iVar13 + uVar1 + -0x9e1da9e + (uVar11 & uVar12 | uVar3 & (uVar12 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
    uVar12 = iVar6 + uVar12 + -0x3fbf4cc0 + (uVar1 & uVar3 | uVar11 & (uVar3 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
    uVar3 = iVar18 + uVar3 + 0x265e5a51 + (uVar12 & uVar11 | uVar1 & (uVar11 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar12;
    uVar11 = iVar4 + uVar11 + -0x16493856 + (uVar3 & uVar1 | uVar12 & (uVar1 ^ 0xffffffff));
    uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar3;
    uVar1 = iVar15 + uVar1 + -0x29d0efa3 + (uVar11 & uVar12 | uVar3 & (uVar12 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
    uVar12 = iVar8 + uVar12 + 0x2441453 + (uVar1 & uVar3 | uVar11 & (uVar3 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
    uVar3 = iVar20 + uVar3 + -0x275e197f + (uVar12 & uVar11 | uVar1 & (uVar11 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar12;
    uVar11 = iVar5 + uVar11 + -0x182c0438 + (uVar3 & uVar1 | uVar12 & (uVar1 ^ 0xffffffff));
    uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar3;
    uVar1 = iVar17 + uVar1 + 0x21e1cde6 + (uVar11 & uVar12 | uVar3 & (uVar12 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
    uVar12 = iVar10 + uVar12 + -0x3cc8f82a + (uVar1 & uVar3 | uVar11 & (uVar3 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
    uVar3 = iVar14 + uVar3 + -0xb2af279 + (uVar12 & uVar11 | uVar1 & (uVar11 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar12;
    uVar11 = iVar7 + uVar11 + 0x455a14ed + (uVar3 & uVar1 | uVar12 & (uVar1 ^ 0xffffffff));
    uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar3;
    uVar1 = iVar19 + uVar1 + -0x561c16fb + (uVar11 & uVar12 | uVar3 & (uVar12 ^ 0xffffffff));
    uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar11;
    uVar12 = iVar2 + uVar12 + -0x3105c08 + (uVar1 & uVar3 | uVar11 & (uVar3 ^ 0xffffffff));
    uVar12 = (uVar12 >> 0x17 | uVar12 * 0x200) + uVar1;
    uVar3 = iVar16 + uVar3 + 0x676f02d9 + (uVar12 & uVar11 | uVar1 & (uVar11 ^ 0xffffffff));
    uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar12;
    uVar11 = iVar9 + uVar11 + -0x72d5b376 + ((uVar3 ^ uVar12) & uVar1 ^ uVar12);
    uVar11 = (uVar11 >> 0xc | uVar11 * 0x100000) + uVar3;
    uVar1 = iVar15 + uVar1 + -0x5c6be + (uVar11 ^ uVar3 ^ uVar12);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
    uVar12 = iVar7 + uVar12 + -0x788e097f + (uVar1 ^ uVar11 ^ uVar3);
    uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
    uVar3 = iVar18 + uVar3 + 0x6d9d6122 + (uVar1 ^ uVar11 ^ uVar12);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar12;
    uVar11 = iVar10 + uVar11 + -0x21ac7f4 + (uVar12 ^ uVar1 ^ uVar3);
    uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar3;
    uVar1 = iVar13 + uVar1 + -0x5b4115bc + (uVar3 ^ uVar12 ^ uVar11);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
    uVar12 = iVar5 + uVar12 + 0x4bdecfa9 + (uVar11 ^ uVar3 ^ uVar1);
    uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
    uVar3 = iVar16 + uVar3 + -0x944b4a0 + (uVar1 ^ uVar11 ^ uVar12);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar12;
    uVar11 = iVar8 + uVar11 + -0x41404390 + (uVar12 ^ uVar1 ^ uVar3);
    uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar3;
    uVar1 = iVar19 + uVar1 + 0x289b7ec6 + (uVar3 ^ uVar12 ^ uVar11);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
    uVar12 = iVar4 + uVar12 + -0x155ed806 + (uVar11 ^ uVar3 ^ uVar1);
    uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
    uVar3 = iVar14 + uVar3 + -0x2b10cf7b + (uVar1 ^ uVar11 ^ uVar12);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar12;
    uVar11 = iVar6 + uVar11 + 0x4881d05 + (uVar12 ^ uVar1 ^ uVar3);
    uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar3;
    uVar1 = iVar17 + uVar1 + -0x262b2fc7 + (uVar3 ^ uVar12 ^ uVar11);
    uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar11;
    uVar12 = iVar9 + uVar12 + -0x1924661b + (uVar11 ^ uVar3 ^ uVar1);
    uVar12 = (uVar12 >> 0x15 | uVar12 * 0x800) + uVar1;
    uVar3 = iVar20 + uVar3 + 0x1fa27cf8 + (uVar1 ^ uVar11 ^ uVar12);
    uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar12;
    uVar11 = iVar2 + uVar11 + -0x3b53a99b + (uVar12 ^ uVar1 ^ uVar3);
    uVar11 = (uVar11 >> 9 | uVar11 * 0x800000) + uVar3;
    uVar1 = iVar4 + uVar1 + -0xbd6ddbc + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
    uVar12 = iVar16 + uVar12 + 0x432aff97 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar11);
    uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
    uVar3 = iVar10 + uVar3 + -0x546bdc59 + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar12;
    uVar11 = iVar15 + uVar11 + -0x36c5fc7 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar12);
    uVar11 = (uVar11 >> 0xb | uVar11 * 0x200000) + uVar3;
    uVar1 = iVar9 + uVar1 + 0x655b59c3 + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
    uVar12 = iVar14 + uVar12 + -0x70f3336e + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar11);
    uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
    uVar3 = iVar8 + uVar3 + -0x100b83 + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar12;
    uVar11 = iVar13 + uVar11 + -0x7a7ba22f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar12);
    uVar11 = (uVar11 >> 0xb | uVar11 * 0x200000) + uVar3;
    uVar1 = iVar7 + uVar1 + 0x6fa87e4f + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
    uVar12 = iVar20 + uVar12 + -0x1d31920 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar11);
    uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
    uVar3 = iVar6 + uVar3 + -0x5cfebcec + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar12;
    uVar11 = iVar19 + uVar11 + 0x4e0811a1 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar12);
    uVar11 = (uVar11 >> 0xb | uVar11 * 0x200000) + uVar3;
    uVar1 = iVar5 + uVar1 + -0x8ac817e + ((uVar11 | uVar12 ^ 0xffffffff) ^ uVar3);
    uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar11;
    uVar12 = iVar18 + uVar12 + -0x42c50dcb + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar11);
    uVar12 = (uVar12 >> 0x16 | uVar12 * 0x400) + uVar1;
    uVar3 = iVar2 + uVar3 + 0x2ad7d2bb + ((uVar12 | uVar11 ^ 0xffffffff) ^ uVar1);
    uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar12;
    uVar11 = iVar17 + uVar11 + -0x14792c6f + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar12);
    iVar2 = uVar1 + *param_1;
    uVar11 = uVar3 + param_1[1] + (uVar11 >> 0xb | uVar11 * 0x200000);
    uVar3 = uVar3 + param_1[2];
    uVar12 = uVar12 + param_1[3];
    *param_1 = iVar2;
    param_1[1] = uVar11;
    param_1[2] = uVar3;
    param_1[3] = uVar12;
    param_2 = param_2 + 0x10;
  }
  return;
}



/* Entry: 006f0c00; end: 006f0c5f;  */

void FUN_006f0c00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulong param_4)

{
  undefined1 in_ZR;
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x8_01;
  ulong uVar9;
  ulong unaff_x20;
  uint uVar10;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar11;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puVar3 = param_1;
  func_0x006fd5fc();
  uVar11 = puVar3[1];
  uVar6 = *puVar3;
  uStack_28 = extraout_x8;
  func_0x006fe134();
  puVar3 = (undefined8 *)param_2[1];
  uStack_40 = uVar6;
  uStack_38 = uVar11;
  FUN_006f1544(&uStack_40,*param_2);
  uVar6 = uStack_40;
  uVar11 = uStack_38;
  func_0x006fe134();
  param_1[1] = uVar11;
  *param_1 = uVar6;
  func_0x006fd534(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x006fd848();
  puVar5 = puVar4;
  func_0x006fd5fc();
  uVar11 = puVar5[1];
  uVar6 = *puVar5;
  uStack_78 = extraout_x8_00;
  func_0x006fe134();
  uStack_90 = uVar6;
  uStack_88 = uVar11;
  while( true ) {
    bVar1 = unaff_x20 < 0x10;
    unaff_x20 = unaff_x20 - 0x10;
    uVar2 = unaff_x20 == 0;
    if (bVar1) break;
    uVar11 = unaff_x21[1];
    uVar6 = *unaff_x21;
    func_0x006fe134();
    uStack_90 = CONCAT17((byte)((ulong)uStack_90 >> 0x38) ^ (byte)((ulong)uVar6 >> 0x38),
                         CONCAT16((byte)((ulong)uStack_90 >> 0x30) ^ (byte)((ulong)uVar6 >> 0x30),
                                  CONCAT15((byte)((ulong)uStack_90 >> 0x28) ^
                                           (byte)((ulong)uVar6 >> 0x28),
                                           CONCAT14((byte)((ulong)uStack_90 >> 0x20) ^
                                                    (byte)((ulong)uVar6 >> 0x20),
                                                    CONCAT13((byte)((ulong)uStack_90 >> 0x18) ^
                                                             (byte)((ulong)uVar6 >> 0x18),
                                                             CONCAT12((byte)((ulong)uStack_90 >>
                                                                            0x10) ^
                                                                      (byte)((ulong)uVar6 >> 0x10),
                                                                      CONCAT11((byte)((ulong)
                                                  uStack_90 >> 8) ^ (byte)((ulong)uVar6 >> 8),
                                                  (byte)uStack_90 ^ (byte)uVar6)))))));
    uStack_88 = CONCAT17((byte)((ulong)uStack_88 >> 0x38) ^ (byte)((ulong)uVar11 >> 0x38),
                         CONCAT16((byte)((ulong)uStack_88 >> 0x30) ^ (byte)((ulong)uVar11 >> 0x30),
                                  CONCAT15((byte)((ulong)uStack_88 >> 0x28) ^
                                           (byte)((ulong)uVar11 >> 0x28),
                                           CONCAT14((byte)((ulong)uStack_88 >> 0x20) ^
                                                    (byte)((ulong)uVar11 >> 0x20),
                                                    CONCAT13((byte)((ulong)uStack_88 >> 0x18) ^
                                                             (byte)((ulong)uVar11 >> 0x18),
                                                             CONCAT12((byte)((ulong)uStack_88 >>
                                                                            0x10) ^
                                                                      (byte)((ulong)uVar11 >> 0x10),
                                                                      CONCAT11((byte)((ulong)
                                                  uStack_88 >> 8) ^ (byte)((ulong)uVar11 >> 8),
                                                  (byte)uStack_88 ^ (byte)uVar11)))))));
    puVar3 = (undefined8 *)unaff_x22[1];
    puVar5 = &uStack_90;
    FUN_006f1544(&uStack_90,*unaff_x22);
    unaff_x21 = unaff_x21 + 2;
  }
  uVar6 = uStack_90;
  uVar11 = uStack_88;
  func_0x006fe134();
  puVar4[1] = uVar11;
  *puVar4 = uVar6;
  func_0x006fd534(uStack_78);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x006fda04();
    puVar5[0x30] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    uVar7 = param_4;
    if (param_4 == 0xc) {
      uVar6 = *puVar3;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
      *puVar4 = uVar6;
      *(undefined1 *)((long)puVar4 + 0xf) = 1;
      uVar10 = 2;
    }
    else {
      while (0xf < uVar7) {
        lVar8 = 0;
        while (lVar8 != 0x10) {
          func_0x006fec18();
          lVar8 = extraout_x8_01;
        }
        func_0x006fdf60();
        puVar3 = puVar3 + 2;
        uVar7 = uVar7 - 0x10;
      }
      if (uVar7 != 0) {
        for (uVar9 = 0; uVar9 < uVar7; uVar9 = uVar9 + 1) {
          *(byte *)((long)puVar4 + uVar9) =
               *(byte *)((long)puVar4 + uVar9) ^ *(byte *)((long)puVar3 + uVar9);
        }
        func_0x006fdf60();
      }
      uVar7 = (param_4 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_4 << 3 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      puVar4[1] = puVar4[1] ^ (uVar7 >> 0x20 | uVar7 << 0x20);
      func_0x006fdf60();
      uVar10 = (*(uint *)((long)puVar4 + 0xc) & 0xff00ff00) >> 8 |
               (*(uint *)((long)puVar4 + 0xc) & 0xff00ff) << 8;
      uVar10 = (uVar10 >> 0x10 | uVar10 << 0x10) + 1;
    }
    (*(code *)puVar4[0x2e])(puVar4,puVar4 + 4,unaff_x20);
    uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
    *(uint *)((long)puVar4 + 0xc) = uVar10 >> 0x10 | uVar10 << 0x10;
    return;
  }
  return;
}



/* Entry: 006f0c60; end: 006f0cdf;  */

void FUN_006f0c60(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8_00;
  ulong uVar7;
  ulong unaff_x20;
  uint uVar8;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  func_0x006fd848();
  puVar3 = param_1;
  func_0x006fd5fc();
  uVar9 = puVar3[1];
  uVar4 = *puVar3;
  uStack_38 = extraout_x8;
  func_0x006fe134();
  uStack_50 = uVar4;
  uStack_48 = uVar9;
  while( true ) {
    bVar1 = unaff_x20 < 0x10;
    unaff_x20 = unaff_x20 - 0x10;
    uVar2 = unaff_x20 == 0;
    if (bVar1) break;
    uVar9 = unaff_x21[1];
    uVar4 = *unaff_x21;
    func_0x006fe134();
    uStack_50 = CONCAT17((byte)((ulong)uStack_50 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                         CONCAT16((byte)((ulong)uStack_50 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                                  CONCAT15((byte)((ulong)uStack_50 >> 0x28) ^
                                           (byte)((ulong)uVar4 >> 0x28),
                                           CONCAT14((byte)((ulong)uStack_50 >> 0x20) ^
                                                    (byte)((ulong)uVar4 >> 0x20),
                                                    CONCAT13((byte)((ulong)uStack_50 >> 0x18) ^
                                                             (byte)((ulong)uVar4 >> 0x18),
                                                             CONCAT12((byte)((ulong)uStack_50 >>
                                                                            0x10) ^
                                                                      (byte)((ulong)uVar4 >> 0x10),
                                                                      CONCAT11((byte)((ulong)
                                                  uStack_50 >> 8) ^ (byte)((ulong)uVar4 >> 8),
                                                  (byte)uStack_50 ^ (byte)uVar4)))))));
    uStack_48 = CONCAT17((byte)((ulong)uStack_48 >> 0x38) ^ (byte)((ulong)uVar9 >> 0x38),
                         CONCAT16((byte)((ulong)uStack_48 >> 0x30) ^ (byte)((ulong)uVar9 >> 0x30),
                                  CONCAT15((byte)((ulong)uStack_48 >> 0x28) ^
                                           (byte)((ulong)uVar9 >> 0x28),
                                           CONCAT14((byte)((ulong)uStack_48 >> 0x20) ^
                                                    (byte)((ulong)uVar9 >> 0x20),
                                                    CONCAT13((byte)((ulong)uStack_48 >> 0x18) ^
                                                             (byte)((ulong)uVar9 >> 0x18),
                                                             CONCAT12((byte)((ulong)uStack_48 >>
                                                                            0x10) ^
                                                                      (byte)((ulong)uVar9 >> 0x10),
                                                                      CONCAT11((byte)((ulong)
                                                  uStack_48 >> 8) ^ (byte)((ulong)uVar9 >> 8),
                                                  (byte)uStack_48 ^ (byte)uVar9)))))));
    param_3 = (undefined8 *)unaff_x22[1];
    puVar3 = &uStack_50;
    FUN_006f1544(&uStack_50,*unaff_x22);
    unaff_x21 = unaff_x21 + 2;
  }
  uVar4 = uStack_50;
  uVar9 = uStack_48;
  func_0x006fe134();
  param_1[1] = uVar9;
  *param_1 = uVar4;
  func_0x006fd534(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x006fda04();
    puVar3[0x30] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[7] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[8] = 0;
    uVar5 = param_4;
    if (param_4 == 0xc) {
      uVar4 = *param_3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      *param_1 = uVar4;
      *(undefined1 *)((long)param_1 + 0xf) = 1;
      uVar8 = 2;
    }
    else {
      while (0xf < uVar5) {
        lVar6 = 0;
        while (lVar6 != 0x10) {
          func_0x006fec18();
          lVar6 = extraout_x8_00;
        }
        func_0x006fdf60();
        param_3 = param_3 + 2;
        uVar5 = uVar5 - 0x10;
      }
      if (uVar5 != 0) {
        for (uVar7 = 0; uVar7 < uVar5; uVar7 = uVar7 + 1) {
          *(byte *)((long)param_1 + uVar7) =
               *(byte *)((long)param_1 + uVar7) ^ *(byte *)((long)param_3 + uVar7);
        }
        func_0x006fdf60();
      }
      uVar5 = (param_4 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_4 << 3 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      param_1[1] = param_1[1] ^ (uVar5 >> 0x20 | uVar5 << 0x20);
      func_0x006fdf60();
      uVar8 = (*(uint *)((long)param_1 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)((long)param_1 + 0xc) & 0xff00ff) << 8;
      uVar8 = (uVar8 >> 0x10 | uVar8 << 0x10) + 1;
    }
    (*(code *)param_1[0x2e])(param_1,param_1 + 4,unaff_x20);
    uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    *(uint *)((long)param_1 + 0xc) = uVar8 >> 0x10 | uVar8 << 0x10;
    return;
  }
  return;
}



/* Entry: 006f0ce0; end: 006f0ddf;  */

void FUN_006f0ce0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  ulong uVar4;
  undefined8 *unaff_x19;
  uint uVar5;
  
  func_0x006fda04();
  param_1[0x30] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar2 = param_4;
  if (param_4 == 0xc) {
    uVar1 = *param_3;
    *(undefined4 *)(unaff_x19 + 1) = *(undefined4 *)(param_3 + 1);
    *unaff_x19 = uVar1;
    *(undefined1 *)((long)unaff_x19 + 0xf) = 1;
    uVar5 = 2;
  }
  else {
    while (0xf < uVar2) {
      lVar3 = 0;
      while (lVar3 != 0x10) {
        func_0x006fec18();
        lVar3 = extraout_x8;
      }
      func_0x006fdf60();
      param_3 = param_3 + 2;
      uVar2 = uVar2 - 0x10;
    }
    if (uVar2 != 0) {
      for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
        *(byte *)((long)unaff_x19 + uVar4) =
             *(byte *)((long)unaff_x19 + uVar4) ^ *(byte *)((long)param_3 + uVar4);
      }
      func_0x006fdf60();
    }
    uVar2 = (param_4 << 3 & 0xff00ff00ff00ff00) >> 8 | (param_4 << 3 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    unaff_x19[1] = unaff_x19[1] ^ (uVar2 >> 0x20 | uVar2 << 0x20);
    func_0x006fdf60();
    uVar5 = (*(uint *)((long)unaff_x19 + 0xc) & 0xff00ff00) >> 8 |
            (*(uint *)((long)unaff_x19 + 0xc) & 0xff00ff) << 8;
    uVar5 = (uVar5 >> 0x10 | uVar5 << 0x10) + 1;
  }
  (*(code *)unaff_x19[0x2e])();
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  *(uint *)((long)unaff_x19 + 0xc) = uVar5 >> 0x10 | uVar5 << 0x10;
  return;
}



/* Entry: 006f0de0; end: 006f0ed7;  */

undefined8 FUN_006f0de0(long param_1,byte *param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x38) != 0) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 0x30) + param_3;
  if (0x2000000000000000 < uVar3) {
    return 0;
  }
  if (CARRY8(*(ulong *)(param_1 + 0x30),param_3)) {
    return 0;
  }
  *(ulong *)(param_1 + 0x30) = uVar3;
  uVar1 = *(uint *)(param_1 + 0x184);
  if (uVar1 != 0) {
    while( true ) {
      uVar3 = (ulong)uVar1;
      if ((uVar1 == 0) || (param_3 == 0)) break;
      *(byte *)(param_1 + 0x40 + uVar3) = *(byte *)(param_1 + 0x40 + uVar3) ^ *param_2;
      uVar1 = uVar1 + 1 & 0xf;
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    if (uVar1 != 0) goto LAB_006f0ec8;
    func_0x006fdc30();
  }
  uVar4 = param_3 & 0xfffffffffffffff0;
  uVar3 = param_3;
  if (uVar4 != 0) {
    FUN_006f0c60(param_1 + 0x40,param_1 + 0x60,param_2,uVar4);
    param_2 = param_2 + uVar4;
    uVar3 = param_3 & 0xf;
  }
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x40);
    for (uVar4 = uVar3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar2 = *pbVar2 ^ *param_2;
      pbVar2 = pbVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
LAB_006f0ec8:
  *(int *)(param_1 + 0x184) = (int)uVar3;
  return 1;
}



/* Entry: 006f0ed8; end: 006f146f;  */

void FUN_006f0ed8(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong in_x4;
  int extraout_w8;
  int extraout_w8_00;
  ulong extraout_x8;
  ulong uVar5;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  ulong extraout_x8_03;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x10;
  byte extraout_w11;
  byte extraout_w12;
  long unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  long lVar8;
  code *pcVar9;
  
  func_0x006fdc38();
  func_0x006fd668();
  if ((bool)in_CY && !(bool)in_ZR) {
    return;
  }
  if ((extraout_x9 & 1) != 0) {
    return;
  }
  func_0x006fd848();
  pcVar9 = *(code **)(unaff_x19 + 0x170);
  func_0x006febac();
  if (extraout_w8 != 0) {
    func_0x006fdaec();
    *(undefined4 *)(unaff_x19 + 0x184) = 0;
  }
  if (*(int *)(unaff_x19 + 0x180) != 0) {
    func_0x006feba0();
    uVar5 = extraout_x8;
    while( true ) {
      if (((int)uVar5 == 0) || (in_x4 == 0)) break;
      func_0x006feb94();
      *unaff_x20 = extraout_w12 ^ extraout_w11;
      func_0x006fdec8();
      uVar5 = (ulong)(extraout_w8_00 + 1U & 0xf);
      unaff_x20 = unaff_x20 + 1;
      in_x4 = extraout_x10;
    }
    if ((int)uVar5 != 0) goto LAB_006f105c;
    func_0x006fdc30();
  }
  uVar4 = (*(uint *)(unaff_x19 + 0xc) & 0xff00ff00) >> 8 |
          (*(uint *)(unaff_x19 + 0xc) & 0xff00ff) << 8;
  pbVar1 = (byte *)(unaff_x19 + 0x40);
  uVar5 = in_x4;
  while (0xbff < uVar5) {
    lVar8 = 0xc00;
    do {
      func_0x006fd93c();
      (*pcVar9)();
      func_0x006feb58();
      uVar7 = extraout_x8_00;
      while (uVar7 < 0x10) {
        func_0x006fd804();
        uVar7 = extraout_x8_01;
      }
      func_0x006feb38();
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
    func_0x006fe39c(pbVar1,unaff_x19 + 0x60,unaff_x20 + -0xc00);
    uVar5 = uVar5 - 0xc00;
  }
  uVar7 = uVar5 & 0xff0;
  if (uVar7 != 0) {
    while (0xf < uVar5) {
      func_0x006fd93c();
      (*pcVar9)();
      func_0x006feb58();
      uVar6 = extraout_x8_02;
      while (uVar6 < 0x10) {
        func_0x006fd804();
        uVar6 = extraout_x8_03;
      }
      func_0x006feb38();
      uVar5 = uVar5 - 0x10;
    }
    func_0x006fe6c8(pbVar1,unaff_x19 + 0x60,(long)unaff_x20 - uVar7);
  }
  if (uVar5 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x006fd93c();
    (*pcVar9)();
    uVar4 = (uVar4 >> 0x10 | uVar4 << 0x10) + 1;
    uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
    *(uint *)(unaff_x19 + 0xc) = uVar4 >> 0x10 | uVar4 << 0x10;
    for (uVar7 = uVar5; uVar7 != 0; uVar7 = uVar7 - 1) {
      bVar2 = *unaff_x21;
      bVar3 = pbVar1[-0x30];
      *unaff_x20 = bVar3 ^ bVar2;
      *pbVar1 = *pbVar1 ^ bVar3 ^ bVar2;
      pbVar1 = pbVar1 + 1;
      unaff_x20 = unaff_x20 + 1;
      unaff_x21 = unaff_x21 + 1;
    }
  }
LAB_006f105c:
  *(int *)(unaff_x19 + 0x180) = (int)uVar5;
  return;
}



/* Entry: 006f1470; end: 006f1543;  */

bool FUN_006f1470(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x006fd720();
  if ((*(int *)(param_1 + 0x180) != 0) || (*(int *)(unaff_x21 + 0x184) != 0)) {
    FUN_006f0c00(unaff_x21 + 0x40,unaff_x21 + 0x60);
  }
  pauVar3 = (undefined1 (*) [16])(unaff_x21 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x21 + 0x48);
  uVar4 = *(undefined8 *)*pauVar3;
  auVar6._0_8_ = *(long *)(unaff_x21 + 0x30) << 3;
  auVar6._8_8_ = *(long *)(unaff_x21 + 0x38) << 3;
  auVar6 = NEON_rev64(auVar6,1);
  *(ulong *)(unaff_x21 + 0x48) =
       CONCAT17(auVar6[0xf] ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16(auVar6[0xe] ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15(auVar6[0xd] ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14(auVar6[0xc] ^ (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13(auVar6[0xb] ^ (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12(auVar6[10] ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11(auVar6[9] ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      auVar6[8] ^ (byte)uVar5)))))))
  ;
  *(ulong *)*pauVar3 =
       CONCAT17(auVar6[7] ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16(auVar6[6] ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15(auVar6[5] ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14(auVar6[4] ^ (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13(auVar6[3] ^ (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12(auVar6[2] ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11(auVar6[1] ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      auVar6[0] ^ (byte)uVar4)))))))
  ;
  FUN_006f0c00(pauVar3,unaff_x21 + 0x60);
  bVar1 = false;
  uVar5 = *(undefined8 *)(unaff_x21 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x21 + 0x20);
  auVar6 = *pauVar3;
  *(ulong *)(unaff_x21 + 0x48) =
       CONCAT17(auVar6[0xf] ^ (byte)((ulong)uVar5 >> 0x38),
                CONCAT16(auVar6[0xe] ^ (byte)((ulong)uVar5 >> 0x30),
                         CONCAT15(auVar6[0xd] ^ (byte)((ulong)uVar5 >> 0x28),
                                  CONCAT14(auVar6[0xc] ^ (byte)((ulong)uVar5 >> 0x20),
                                           CONCAT13(auVar6[0xb] ^ (byte)((ulong)uVar5 >> 0x18),
                                                    CONCAT12(auVar6[10] ^
                                                             (byte)((ulong)uVar5 >> 0x10),
                                                             CONCAT11(auVar6[9] ^
                                                                      (byte)((ulong)uVar5 >> 8),
                                                                      auVar6[8] ^ (byte)uVar5)))))))
  ;
  *(ulong *)*pauVar3 =
       CONCAT17(auVar6[7] ^ (byte)((ulong)uVar4 >> 0x38),
                CONCAT16(auVar6[6] ^ (byte)((ulong)uVar4 >> 0x30),
                         CONCAT15(auVar6[5] ^ (byte)((ulong)uVar4 >> 0x28),
                                  CONCAT14(auVar6[4] ^ (byte)((ulong)uVar4 >> 0x20),
                                           CONCAT13(auVar6[3] ^ (byte)((ulong)uVar4 >> 0x18),
                                                    CONCAT12(auVar6[2] ^
                                                             (byte)((ulong)uVar4 >> 0x10),
                                                             CONCAT11(auVar6[1] ^
                                                                      (byte)((ulong)uVar4 >> 8),
                                                                      auVar6[0] ^ (byte)uVar4)))))))
  ;
  if ((unaff_x20 != 0) && (unaff_x19 < 0x11)) {
    func_0x006fdbc4(pauVar3);
    iVar2 = (int)pauVar3;
    FUN_00701f80();
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}



/* Entry: 006f1544; end: 006f16df;  */

void FUN_006f1544(ulong *param_1)

{
  ulong *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong uVar1;
  ulong uVar2;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  func_0x006fd94c();
  uVar1 = *param_1;
  FUN_006fce70(&uStack_48,&uStack_50,uVar1);
  uVar2 = unaff_x19[1];
  func_0x006feaec();
  FUN_006fce70();
  FUN_006fce70(&uStack_68,&uStack_70,uVar2 ^ uVar1,unaff_x20 ^ unaff_x21);
  uVar1 = uStack_68 ^ uStack_48 ^ uStack_58 ^ uStack_50;
  uVar2 = uStack_48 << 0x3e ^ uStack_48 << 0x3f ^ uStack_48 << 0x39 ^ uVar1;
  *unaff_x19 = uStack_70 ^ (uStack_48 >> 1 | uVar1 << 0x3f) ^
               (uStack_48 >> 2 | uVar1 << 0x3e) ^ (uStack_48 >> 7 | uVar1 << 0x39) ^
               uStack_48 ^ uStack_58 ^ uStack_50 ^ uStack_60;
  unaff_x19[1] = uVar2 >> 2 ^ uVar2 >> 1 ^ uVar2 >> 7 ^ uStack_60 ^ uVar2;
  return;
}



/* Entry: 006f16e0; end: 006f16ff;  */

void FUN_006f16e0(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 006f1700; end: 006f17c3;  */

void FUN_006f1700(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  do {
    piVar2 = (int *)&UNK_009167a4;
    _open(&UNK_009167a4,0);
    if ((int)piVar2 != -1) goto LAB_006f174c;
    ___error();
  } while (*piVar2 == 4);
  do {
    piVar2 = (int *)&UNK_009167b1;
    while( true ) {
      _perror();
      _abort();
LAB_006f174c:
      iVar1 = (int)piVar2;
      if (iVar1 < 0) break;
      piVar3 = piVar2;
      _fcntl(piVar2,1);
      if ((int)piVar3 == -1) {
        ___error();
        if (*piVar3 == 0x4e) {
          iRam0000000000b63e88 = iVar1;
          return;
        }
        piVar2 = (int *)&UNK_009167cd;
      }
      else {
        _fcntl(piVar2,2);
        if ((int)piVar2 != -1) {
          iRam0000000000b63e88 = iVar1;
          return;
        }
        piVar2 = (int *)&UNK_009167f1;
      }
    }
  } while( true );
}



/* Entry: 006f17c4; end: 006f184b;  */

undefined8 FUN_006f17c4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  long unaff_x19;
  
  func_0x006fd8fc();
  func_0x006f16ec();
  puVar1 = (undefined4 *)0xb29cf8;
  func_0x00706544(0xb29cf8,FUN_006fd01c);
  ___error();
  *puVar1 = 0;
  do {
    if (unaff_x19 == 0) {
      return 1;
    }
    while( true ) {
      piVar2 = (int *)(ulong)uRam0000000000b63e88;
      func_0x006fdbc4();
      _read();
      if (piVar2 != (int *)0xffffffffffffffff) break;
      ___error();
      if (*piVar2 != 4) {
        return 0;
      }
    }
    unaff_x19 = unaff_x19 - (long)piVar2;
    if ((long)piVar2 < 1) {
      return 0;
    }
  } while( true );
}



/* Entry: 006f184c; end: 006f186f;  */

dword * FUN_006f184c(dword *param_1)

{
  dword *pdVar1;
  dword *pdVar2;
  
  FUN_006f17c4(param_1,0x30);
  if ((int)param_1 != 0) {
    return param_1;
  }
  func_0x006fe788();
  _abort();
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    func_0x006fd520(4);
  }
  else {
    *(undefined8 *)pdVar1 = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    pdVar2 = pdVar1;
    FUN_006e3c80();
    *(dword **)pdVar1 = pdVar2;
    if (pdVar2 != (dword *)0x0) {
      FUN_006e3c80();
      *(dword **)(pdVar1 + 2) = pdVar2;
      if (pdVar2 != (dword *)0x0) {
        pdVar1[4] = 0x1f;
        return pdVar1;
      }
    }
    func_0x006f18dc(pdVar1);
  }
  return (dword *)0x0;
}



/* Entry: 006f1870; end: 006f1907;  */

dword * FUN_006f1870(void)

{
  dword *pdVar1;
  dword *pdVar2;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    func_0x006fd520(4);
  }
  else {
    *(undefined8 *)pdVar1 = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    pdVar2 = pdVar1;
    FUN_006e3c80();
    *(dword **)pdVar1 = pdVar2;
    if (pdVar2 != (dword *)0x0) {
      FUN_006e3c80();
      *(dword **)(pdVar1 + 2) = pdVar2;
      if (pdVar2 != (dword *)0x0) {
        pdVar1[4] = 0x1f;
        return pdVar1;
      }
    }
    func_0x006f18dc(pdVar1);
  }
  return (dword *)0x0;
}



/* Entry: 006f1908; end: 006f1993;  */

undefined8 FUN_006f1908(undefined2 *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  ulong unaff_x19;
  long unaff_x21;
  
  bVar1 = 9 < param_2;
  bVar2 = param_2 == 10;
  if (param_2 < 0xb) {
    func_0x006fd834();
  }
  else {
    func_0x006fea28();
    if (!bVar1 || bVar2) {
      *param_1 = 0x100;
      FUN_006e3cc4(param_1 + 1,0xff,(unaff_x21 - unaff_x19) + -3);
      *(undefined1 *)((long)param_1 + ~unaff_x19 + unaff_x21) = 0;
      func_0x006fdbc4((long)param_1 + (unaff_x21 - unaff_x19));
      func_0x006e3440();
      return 1;
    }
    func_0x006fd834();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006f1994; end: 006f1a53;  */

undefined8 FUN_006f1994(undefined2 *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x21;
  undefined2 *puVar3;
  long lVar4;
  long lVar5;
  
  func_0x006fe858();
  bVar1 = 9 < param_2;
  bVar2 = param_2 == 10;
  if (param_2 < 0xb) {
    func_0x006fd834();
  }
  else {
    func_0x006fea28();
    if (!bVar1 || bVar2) {
      puVar3 = param_1 + 1;
      *param_1 = 0x200;
      lVar4 = (unaff_x21 - unaff_x19) + -3;
      FUN_006e92d4(puVar3,lVar4);
      for (lVar5 = 0; lVar5 != lVar4; lVar5 = lVar5 + 1) {
        while (*(char *)((long)puVar3 + lVar5) == '\0') {
          FUN_006e92d4((long)puVar3 + lVar5,1);
        }
      }
      *(undefined1 *)((long)param_1 + (unaff_x21 - unaff_x19) + -1) = 0;
      func_0x006fdbc4((long)param_1 + (unaff_x21 - unaff_x19));
      func_0x006e3440();
      return 1;
    }
    func_0x006fd834();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006f1a54; end: 006f1b2f;  */

undefined8 FUN_006f1a54(undefined8 param_1,ulong *param_2,ulong param_3,char *param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_5 == 0) {
    func_0x006fd834();
  }
  else if (param_5 < 0xb) {
    func_0x006fd834();
  }
  else {
    uVar2 = 0;
    uVar3 = 0xffffffffffffffff;
    for (uVar4 = 2; param_5 != uVar4; uVar4 = uVar4 + 1) {
      uVar1 = uVar3;
      if (param_4[uVar4] != '\0') {
        uVar1 = 0;
      }
      uVar2 = uVar2 & (uVar1 ^ 0xffffffffffffffff) | uVar1 & uVar4;
      uVar1 = 0;
      if (param_4[uVar4] != '\0') {
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
    }
    if ((((long)(9 - uVar2 | uVar2) < 0) && (*param_4 == '\0')) &&
       (param_4[1] == '\x02' && uVar3 != 0xffffffffffffffff)) {
      param_5 = param_5 - (uVar2 + 1);
      if (param_5 <= param_3) {
        func_0x006fdde4(param_1,param_4 + uVar2 + 1);
        *param_2 = param_5;
        return 1;
      }
    }
    func_0x006fd834();
  }
  FUN_006de8e4();
  return 0;
}



/* Entry: 006f1b30; end: 006f1b7b;  */

undefined8 FUN_006f1b30(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  if (param_2 <= param_4 && param_4 != param_2) {
    func_0x006fd834();
  }
  else {
    if (param_2 <= param_4) {
      func_0x006e3440(param_1,param_3,param_4);
      return 1;
    }
    func_0x006fd834();
  }
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006f1b7c; end: 006f1d3f;  */

dword * FUN_006f1b7c(dword *param_1,dword *param_2,dword *param_3,dword *param_4,dword *param_5,
                    undefined8 param_6,dword *param_7,dword *param_8)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  dword *pdVar7;
  bool bVar8;
  dword dVar9;
  undefined1 uVar10;
  uint uVar11;
  dword *pdVar12;
  dword *pdVar13;
  dword *pdVar14;
  dword *pdVar15;
  dword *pdVar16;
  dword *pdVar17;
  dword *pdVar18;
  dword *pdVar19;
  uint uVar20;
  undefined4 uVar21;
  dword *pdVar22;
  dword *pdVar23;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  byte *extraout_x8_03;
  ulong uVar24;
  undefined8 extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  ulong uVar25;
  long lVar26;
  dword *pdVar27;
  dword *pdVar28;
  dword *pdVar29;
  dword *pdVar30;
  dword *unaff_x21;
  byte *unaff_x23;
  uint uVar31;
  dword *pdVar32;
  ulong uVar33;
  uint uVar34;
  byte *pbVar35;
  dword *pdVar36;
  byte *unaff_x28;
  undefined8 in_stack_00000048;
  undefined8 in_stack_000000a0;
  dword adStack_2b0 [10];
  dword adStack_288 [16];
  undefined8 uStack_248;
  dword *pdStack_240;
  dword *pdStack_238;
  dword *pdStack_230;
  dword *pdStack_228;
  dword *pdStack_220;
  dword *pdStack_218;
  dword *pdStack_210;
  dword *pdStack_208;
  dword *pdStack_200;
  dword *pdStack_1f8;
  undefined8 ***pppuStack_1f0;
  undefined8 uStack_1e8;
  dword *pdStack_1d8;
  dword *pdStack_1d0;
  dword *pdStack_1c8;
  dword adStack_1c0 [16];
  dword adStack_180 [20];
  byte *pbStack_130;
  dword *pdStack_128;
  dword *pdStack_120;
  byte *pbStack_118;
  ulong uStack_110;
  dword *pdStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  dword *pdStack_e8;
  undefined8 **ppuStack_e0;
  code *pcStack_d8;
  dword *pdStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  dword adStack_98 [16];
  undefined8 uStack_58;
  dword *pdStack_50;
  dword *pdStack_48;
  dword *pdStack_40;
  byte *pbStack_38;
  dword *pdStack_30;
  dword *pdStack_28;
  dword *pdStack_20;
  dword *pdStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  uVar21 = (undefined4)((ulong)param_6 >> 0x20);
  uVar20 = (uint)param_6;
  func_0x006fdfa4();
  pdVar36 = (dword *)CONCAT44(uVar21,uVar20);
  pdVar29 = param_1;
  pdVar14 = param_2;
  pdVar17 = param_4;
  pdVar27 = param_5;
  pdVar30 = param_8;
  func_0x006fd5fc();
  in_stack_00000048 = extraout_x8;
  if (param_7 == (dword *)0x0) {
    FUN_006eaae0();
    param_7 = (dword *)0xb6cbe0;
  }
  pdVar15 = param_7;
  if (param_8 != (dword *)0x0) {
    pdVar15 = param_8;
  }
  pdVar28 = (dword *)(ulong)param_7[1];
  pbVar35 = (byte *)((long)pdVar28 * 2 + 2);
  uVar10 = param_2 == (dword *)pbVar35;
  pdVar22 = param_7;
  pdVar32 = param_3;
  pdVar13 = param_5;
  if (param_2 < pbVar35) {
    func_0x006fd834();
    pdVar16 = (dword *)(section_00000068.segname + 6);
    param_7 = pdVar27;
LAB_006f1c08:
    func_0x006fd5dc();
    param_5 = pdVar29;
LAB_006f1c0c:
    pdVar15 = unaff_x21;
    pdVar27 = (dword *)0x0;
    pdVar29 = param_4;
  }
  else {
    unaff_x28 = (byte *)((long)param_2 + -1);
    unaff_x21 = (dword *)~((long)pdVar28 * 2);
    uVar10 = param_4 == (dword *)(unaff_x28 + (long)unaff_x21);
    if (unaff_x28 + (long)unaff_x21 < param_4) {
      func_0x006fd834();
      pdVar16 = (dword *)(section_00000068.sectname + 10);
      param_7 = pdVar27;
      goto LAB_006f1c08;
    }
    unaff_x23 = (byte *)((long)param_1 + (long)pdVar28);
    *(byte *)param_1 = 0;
    pdVar13 = (dword *)(unaff_x23 + 1);
    pdVar17 = (dword *)0x0;
    pdVar14 = pdVar36;
    pdVar16 = pdVar13;
    FUN_006ea778();
    if ((int)param_5 == 0) goto LAB_006f1c0c;
    pdVar36 = (dword *)(unaff_x28 + -(long)param_4);
    func_0x006fd9c0((byte *)((long)pdVar13 + (long)pdVar28));
    ((byte *)((long)pdVar13 + (long)pdVar36))[~(ulong)pdVar28] = 1;
    pdVar29 = (dword *)(unaff_x23 + (long)param_2 + (-(long)pdVar28 - (long)param_4));
    pdVar16 = param_4;
    func_0x006e3440();
    func_0x006fd9d0();
    FUN_006e92d4();
    pdVar32 = (dword *)(unaff_x28 + -(long)pdVar28);
    func_0x006fe26c();
    if (pdVar29 == (dword *)0x0) {
      func_0x006fd63c();
      pdVar14 = param_3;
      goto LAB_006f1c08;
    }
    param_5 = pdVar29;
    pdVar14 = pdVar32;
    pdVar16 = (dword *)((long)param_1 + 1);
    pdVar17 = pdVar28;
    func_0x006fe274();
    pdVar27 = pdVar13;
    pdVar19 = pdVar32;
    pdVar7 = pdVar29;
    if ((int)param_5 == 0) {
LAB_006f1d28:
      pdVar27 = (dword *)0x0;
    }
    else {
      for (; pdVar19 != (dword *)0x0; pdVar19 = (dword *)((long)pdVar19 + -1)) {
        *(byte *)pdVar27 = (byte)*pdVar27 ^ (byte)*pdVar7;
        pdVar27 = (dword *)((long)pdVar27 + 1);
        pdVar7 = (dword *)((long)pdVar7 + 1);
      }
      param_5 = (dword *)&stack0x00000008;
      pdVar14 = pdVar28;
      pdVar16 = pdVar13;
      pdVar17 = pdVar32;
      func_0x006fe274();
      if ((int)param_5 == 0) goto LAB_006f1d28;
      pdVar27 = (dword *)((long)param_1 + 1);
      pbVar35 = &stack0x00000008;
      for (; pdVar28 != (dword *)0x0; pdVar28 = (dword *)((long)pdVar28 + -1)) {
        *(byte *)pdVar27 = (byte)*pdVar27 ^ *pbVar35;
        pdVar27 = (dword *)((long)pdVar27 + 1);
        pbVar35 = pbVar35 + 1;
      }
      pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
      pdVar28 = (dword *)0x0;
    }
    func_0x006fe928();
  }
  func_0x006fd534(in_stack_00000048);
  if ((bool)uVar10) {
    return pdVar27;
  }
  ___stack_chk_fail();
  pcStack_8 = FUN_006f1d40;
  pdStack_50 = pdVar36;
  pdStack_48 = param_2;
  pdStack_40 = pdVar32;
  pbStack_38 = unaff_x23;
  pdStack_30 = pdVar29;
  pdStack_28 = pdVar15;
  pdStack_20 = pdVar28;
  pdStack_18 = pdVar27;
  puStack_10 = &stack0x000000a0;
  func_0x006fdf8c();
  uVar33 = 0;
  pdVar29 = param_5;
  pdVar15 = pdVar14;
  pdVar32 = pdVar16;
  func_0x006fd5fc();
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  pbVar35 = (byte *)(ulong)param_7[1];
  uStack_58 = extraout_x8_00;
  pdVar19 = pdVar15;
  while (pdVar19 != (dword *)0x0) {
    uVar31 = (uint)uVar33;
    uVar5 = (uVar31 & 0xff00ff00) >> 8 | (uVar31 & 0xff00ff) << 8;
    uStack_c4 = uVar5 >> 0x10 | uVar5 << 0x10;
    pdVar29 = (dword *)&uStack_c0;
    pdVar15 = pdVar27;
    FUN_006ea94c();
    if ((int)pdVar29 == 0) {
      pdVar27 = (dword *)0x0;
      goto LAB_006f1e08;
    }
    func_0x006fd92c();
    func_0x006fda18();
    (*extraout_x8_01)();
    func_0x006fd92c();
    pdVar32 = &MACH_HEADER.cputype;
    (*extraout_x8_02)();
    pdVar29 = (dword *)&uStack_c0;
    pdVar36 = (dword *)((long)pdVar14 - (long)pbVar35);
    uVar10 = pdVar36 == (dword *)0x0;
    if (pdVar14 < pbVar35) {
      func_0x006fe448(pdVar29,adStack_98);
      pdVar15 = adStack_98;
      pdVar29 = param_5;
      func_0x006fde2c();
      pdVar14 = (dword *)0x0;
    }
    else {
      pdVar15 = param_5;
      func_0x006fe448();
      param_5 = (dword *)((long)param_5 + (long)pbVar35);
      pdVar14 = pdVar36;
    }
    uVar33 = (ulong)(uVar31 + 1);
    pdVar19 = pdVar14;
  }
  pdVar27 = (dword *)((long)&MACH_HEADER.magic + 1);
LAB_006f1e08:
  func_0x006fe17c();
  func_0x006fd534(uStack_58);
  if ((bool)uVar10) {
    return pdVar27;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_006f1e3c;
  pdVar7 = (dword *)CONCAT44(uVar21,uVar20);
  pdVar12 = pdVar29;
  pdVar18 = pdVar17;
  pdVar19 = param_7;
  pdVar23 = pdVar30;
  pdStack_1c8 = pdVar32;
  pbStack_130 = unaff_x28;
  pdStack_128 = pdVar13;
  pdStack_120 = pdVar36;
  pbStack_118 = pbVar35;
  uStack_110 = uVar33;
  pdStack_108 = pdVar14;
  pdStack_100 = param_5;
  pdStack_f8 = pdVar16;
  pdStack_f0 = pdVar28;
  pdStack_e8 = pdVar27;
  ppuStack_e0 = &puStack_10;
  func_0x006fd588();
  if (pdVar23 == (dword *)0x0) {
    FUN_006eaae0();
    pdVar30 = (dword *)0xb6cbe0;
  }
  pdVar36 = pdVar30;
  if (pdStack_d0 != (dword *)0x0) {
    pdVar36 = pdStack_d0;
  }
  pdVar27 = (dword *)(ulong)pdVar30[1];
  pbVar35 = (byte *)((long)pdVar27 * 2 + 2);
  uVar10 = param_7 == (dword *)pbVar35;
  pdVar14 = pdVar15;
  if (param_7 < pbVar35) {
    pdVar13 = pdVar12;
    pdVar12 = (dword *)0x0;
    pdVar15 = pdVar36;
    param_7 = pdVar29;
LAB_006f1eb4:
    func_0x006fd834();
    pdVar32 = (dword *)(section_00000068.segname + 0xd);
    pdVar36 = pdVar15;
LAB_006f1f60:
    func_0x006fd5dc();
LAB_006f1f64:
    pdVar29 = (dword *)0x0;
    pdVar15 = pdVar36;
  }
  else {
    param_7 = (dword *)((long)param_7 + ~(ulong)pdVar27);
    pdStack_1d0 = pdVar29;
    func_0x006fe26c();
    if (pdVar12 == (dword *)0x0) {
      pdVar13 = pdVar12;
      func_0x006fd63c();
      goto LAB_006f1f60;
    }
    pdVar32 = (dword *)((byte *)((long)pdVar17 + (long)pdVar27) + 1);
    pdVar14 = adStack_180;
    pdVar13 = adStack_180;
    pdVar18 = param_7;
    pdStack_1d8 = pdVar15;
    func_0x006fe274();
    if ((int)pdVar13 == 0) goto LAB_006f1f64;
    for (pbVar35 = (byte *)0x0; uVar10 = pdVar27 == (dword *)pbVar35, !(bool)uVar10;
        pbVar35 = pbVar35 + 1) {
      *(byte *)((long)pdVar14 + (long)pbVar35) =
           *(byte *)((long)pdVar14 + (long)pbVar35) ^ ((byte *)((long)pdVar17 + (long)pbVar35))[1];
    }
    pdVar32 = adStack_180;
    pdVar13 = pdVar12;
    pdVar18 = pdVar27;
    func_0x006fe274();
    pdVar15 = pdStack_1d8;
    if ((int)pdVar13 == 0) goto LAB_006f1f64;
    pbVar35 = (byte *)0x0;
    while (uVar10 = param_7 == (dword *)pbVar35, !(bool)uVar10) {
      func_0x006fec18();
      pbVar35 = extraout_x8_03;
    }
    pdVar32 = adStack_1c0;
    pdVar18 = (dword *)0x0;
    pdVar13 = pdVar7;
    pdVar19 = pdVar30;
    FUN_006ea778();
    pdVar36 = pdVar15;
    if ((int)pdVar13 == 0) goto LAB_006f1f64;
    pdVar13 = pdVar12;
    pdVar32 = pdVar27;
    FUN_00701f80();
    uVar24 = 0;
    uVar25 = -(ulong)((int)pdVar13 != 0 || (byte)*pdVar17 != 0);
    uVar33 = 0xffffffffffffffff;
    for (; uVar10 = pdVar27 == param_7, pdVar27 < param_7; pdVar27 = (dword *)((long)pdVar27 + 1)) {
      bVar4 = *(byte *)((long)pdVar12 + (long)pdVar27);
      uVar3 = uVar33;
      if (bVar4 != 1) {
        uVar3 = 0;
      }
      uVar24 = uVar24 & (uVar3 ^ 0xffffffffffffffff) | uVar3 & (ulong)pdVar27;
      uVar3 = 0;
      if (bVar4 != 1) {
        uVar3 = uVar33;
      }
      uVar33 = 0;
      if (bVar4 != 0) {
        uVar33 = uVar3;
      }
      uVar25 = uVar33 | uVar25;
      uVar33 = uVar3;
    }
    if (uVar33 != 0 || uVar25 != 0) goto LAB_006f1eb4;
    pbVar35 = (byte *)((long)param_7 - (uVar24 + 1));
    uVar10 = pdStack_1c8 == (dword *)pbVar35;
    if (pdStack_1c8 < pbVar35) {
      func_0x006fd834();
      pdVar32 = (dword *)(section_00000068.sectname + 9);
      goto LAB_006f1f60;
    }
    pdVar13 = pdStack_1d0;
    func_0x006fdde4();
    *(byte **)pdVar15 = pbVar35;
    pdVar29 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fdb84();
  func_0x006fd508();
  if ((bool)uVar10) {
    return pdVar29;
  }
  ___stack_chk_fail();
  uStack_1e8 = 0x6f205c;
  pdVar36 = pdVar13;
  pdVar28 = pdVar32;
  pdStack_240 = pdVar7;
  pdStack_238 = pdVar30;
  pdStack_230 = pdVar22;
  pdStack_228 = pdVar17;
  pdStack_220 = param_7;
  pdStack_218 = pdVar27;
  pdStack_210 = pdVar14;
  pdStack_208 = pdVar15;
  pdStack_200 = pdVar29;
  pdStack_1f8 = pdVar12;
  pppuStack_1f0 = &ppuStack_e0;
  func_0x006fd5fc();
  adStack_2b0[2] = 0;
  adStack_2b0[3] = 0;
  adStack_2b0[0] = 0;
  adStack_2b0[1] = 0;
  adStack_2b0[6] = 0;
  adStack_2b0[7] = 0;
  adStack_2b0[4] = 0;
  adStack_2b0[5] = 0;
  pdVar30 = pdVar28;
  if (pdVar18 != (dword *)0x0) {
    pdVar30 = pdVar18;
  }
  uVar5 = pdVar28[1];
  uStack_248 = extraout_x8_04;
  if (uVar20 == 0xfffffffe) {
    uVar10 = true;
    uVar31 = uVar20;
LAB_006f20d8:
    uVar11 = (uint)*(undefined8 *)(pdVar13 + 2);
    FUN_006e3e84();
    uVar20 = uVar11 - 1 & 7;
    FUN_006f22d4();
    if ((byte)((byte)*pdVar19 >> (ulong)uVar20) == 0) {
      uVar11 = uVar11 & 7;
      if (uVar11 == 1) {
        pdVar19 = (dword *)((long)pdVar19 + 1);
      }
      iVar6 = (int)pdVar13 - (uint)(uVar11 == 1);
      iVar2 = uVar5 + 2;
      uVar10 = iVar2 <= iVar6 && iVar6 == uVar31 + iVar2;
      if (iVar2 <= iVar6 && (int)(uVar31 + iVar2) <= iVar6) {
        uVar10 = *(byte *)((long)pdVar19 + (long)iVar6 + -1) == 0xbc;
        if ((bool)uVar10) {
          uVar34 = iVar6 + ~uVar5;
          pdVar36 = (dword *)(long)(int)uVar34;
          FUN_00701e90();
          if (pdVar36 == (dword *)0x0) {
            func_0x006fd63c();
LAB_006f2260:
            func_0x006fd5dc();
            pdVar13 = pdVar36;
          }
          else {
            lVar1 = (long)(int)uVar34;
            pdVar13 = pdVar36;
            FUN_006f1d40(pdVar36,(dword *)(long)(int)uVar34,(byte *)((long)pdVar19 + lVar1),uVar5,
                         pdVar30);
            if ((int)pdVar13 != 0) {
              for (uVar33 = 0; (uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU)) != uVar33;
                  uVar33 = uVar33 + 1) {
                *(byte *)((long)pdVar36 + uVar33) =
                     *(byte *)((long)pdVar36 + uVar33) ^ *(byte *)((long)pdVar19 + uVar33);
              }
              if (uVar11 != 1) {
                func_0x006fe508(8 - uVar20);
              }
              iVar2 = uVar34 - 1;
              lVar26 = 0;
              do {
                dVar9 = *pdVar36;
                uVar34 = uVar34 - 1;
                bVar8 = lVar26 < iVar2;
                lVar26 = lVar26 + 1;
                pdVar36 = (dword *)((long)pdVar36 + 1);
              } while ((byte)dVar9 == 0 && bVar8);
              uVar10 = (byte)dVar9 == 1;
              if ((bool)uVar10) {
                if (((int)uVar31 < 0) || (uVar10 = uVar31 == uVar34, (bool)uVar10)) {
                  pdVar13 = adStack_2b0;
                  FUN_006ea94c(pdVar13,pdVar32);
                  if ((int)pdVar13 == 0) goto LAB_006f2264;
                  func_0x006fdd0c();
                  func_0x006fd92c();
                  func_0x006fda18();
                  (*extraout_x8_05)();
                  func_0x006fd92c();
                  (*extraout_x8_06)();
                  func_0x006fe448(adStack_2b0,adStack_288);
                  pdVar13 = adStack_288;
                  func_0x006ee728(pdVar13,(byte *)((long)pdVar19 + lVar1),uVar5);
                  if ((int)pdVar13 == 0) {
                    pdVar30 = (dword *)((long)&MACH_HEADER.magic + 1);
                    goto LAB_006f21d0;
                  }
                  func_0x006fd834();
                  pdVar36 = pdVar13;
                }
                else {
                  func_0x006fd834();
                  pdVar36 = pdVar13;
                }
              }
              else {
                func_0x006fd834();
                pdVar36 = pdVar13;
              }
              goto LAB_006f2260;
            }
          }
LAB_006f2264:
          pdVar30 = (dword *)0x0;
          goto LAB_006f21d0;
        }
        func_0x006fd834();
      }
      else {
        func_0x006fd834();
      }
    }
    else {
      func_0x006fd834();
    }
  }
  else {
    uVar10 = true;
    uVar31 = uVar5;
    if ((uVar20 == 0xffffffff) || (uVar10 = uVar20 == 0xfffffffd, uVar31 = uVar20, -3 < (int)uVar20)
       ) goto LAB_006f20d8;
    func_0x006fd834();
    pdVar13 = pdVar36;
  }
  func_0x006fd5dc();
  pdVar30 = (dword *)0x0;
LAB_006f21d0:
  func_0x006fdb84();
  func_0x006fe17c();
  func_0x006fd534(uStack_248);
  if (!(bool)uVar10) {
    ___stack_chk_fail();
    if (*(code **)(*(long *)pdVar13 + 0x20) == (code *)0x0) {
      FUN_006f2a48();
    }
    else {
      (**(code **)(*(long *)pdVar13 + 0x20))();
    }
    return pdVar13;
  }
  return pdVar30;
}



/* Entry: 006f1d40; end: 006f1e3b;  */

dword * FUN_006f1d40(dword *param_1,dword *param_2,dword *param_3,dword *param_4,dword *param_5,
                    undefined8 param_6,undefined8 param_7,dword *param_8)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  dword *pdVar6;
  dword dVar7;
  undefined1 in_ZR;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  dword *pdVar11;
  dword *pdVar12;
  dword *pdVar13;
  dword *pdVar14;
  dword *pdVar15;
  dword *pdVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  byte *extraout_x8_02;
  ulong uVar19;
  undefined8 extraout_x8_03;
  ulong uVar20;
  code *extraout_x8_04;
  code *extraout_x8_05;
  ulong uVar21;
  long lVar22;
  dword *unaff_x19;
  dword *pdVar23;
  dword *pdVar24;
  dword *pdVar25;
  dword *pdVar26;
  uint uVar27;
  uint uVar28;
  byte *pbVar29;
  uint uVar30;
  dword adStack_2b0 [10];
  dword adStack_288 [16];
  undefined8 uStack_248;
  dword *pdStack_240;
  dword *pdStack_238;
  undefined8 uStack_230;
  dword *pdStack_228;
  dword *pdStack_220;
  dword *pdStack_218;
  dword *pdStack_210;
  dword *pdStack_208;
  dword *pdStack_200;
  dword *pdStack_1f8;
  undefined1 **ppuStack_1f0;
  undefined8 uStack_1e8;
  dword *pdStack_1d8;
  dword *pdStack_1d0;
  dword *pdStack_1c8;
  dword adStack_1c0 [16];
  dword adStack_180 [20];
  undefined1 *puStack_e0;
  code *pcStack_d8;
  dword *pdStack_d0;
  uint uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  dword adStack_98 [16];
  undefined8 uStack_58;
  
  uVar18 = (undefined4)((ulong)param_6 >> 0x20);
  uVar17 = (uint)param_6;
  func_0x006fdf8c();
  uVar27 = 0;
  pdVar24 = param_1;
  pdVar14 = param_2;
  func_0x006fd5fc();
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  pbVar29 = (byte *)(ulong)param_5[1];
  uStack_58 = extraout_x8;
  pdVar23 = pdVar14;
  while (pdVar23 != (dword *)0x0) {
    uVar30 = (uVar27 & 0xff00ff00) >> 8 | (uVar27 & 0xff00ff) << 8;
    uStack_c4 = uVar30 >> 0x10 | uVar30 << 0x10;
    pdVar24 = (dword *)&uStack_c0;
    pdVar14 = unaff_x19;
    FUN_006ea94c();
    if ((int)pdVar24 == 0) {
      pdVar23 = (dword *)0x0;
      goto LAB_006f1e08;
    }
    func_0x006fd92c();
    func_0x006fda18();
    (*extraout_x8_00)();
    func_0x006fd92c();
    param_3 = &MACH_HEADER.cputype;
    (*extraout_x8_01)();
    pdVar24 = (dword *)&uStack_c0;
    bVar8 = param_2 < pbVar29;
    param_2 = (dword *)((long)param_2 - (long)pbVar29);
    in_ZR = param_2 == (dword *)0x0;
    if (bVar8) {
      func_0x006fe448(pdVar24,adStack_98);
      pdVar14 = adStack_98;
      pdVar24 = param_1;
      func_0x006fde2c();
      param_2 = (dword *)0x0;
    }
    else {
      pdVar14 = param_1;
      func_0x006fe448();
      param_1 = (dword *)((long)param_1 + (long)pbVar29);
    }
    uVar27 = uVar27 + 1;
    pdVar23 = param_2;
  }
  pdVar23 = (dword *)((long)&MACH_HEADER.magic + 1);
LAB_006f1e08:
  func_0x006fe17c();
  func_0x006fd534(uStack_58);
  if ((bool)in_ZR) {
    return pdVar23;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_006f1e3c;
  pdVar6 = (dword *)CONCAT44(uVar18,uVar17);
  pdVar11 = pdVar24;
  pdVar16 = param_4;
  pdVar23 = param_5;
  pdVar13 = param_8;
  pdStack_1c8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  func_0x006fd588();
  if (pdVar13 == (dword *)0x0) {
    FUN_006eaae0();
    param_8 = (dword *)0xb6cbe0;
  }
  pdVar13 = param_8;
  if (pdStack_d0 != (dword *)0x0) {
    pdVar13 = pdStack_d0;
  }
  pdVar26 = (dword *)(ulong)param_8[1];
  pbVar29 = (byte *)((long)pdVar26 * 2 + 2);
  uVar9 = param_5 == (dword *)pbVar29;
  pdVar25 = pdVar14;
  if (param_5 < pbVar29) {
    pdVar12 = pdVar11;
    pdVar11 = (dword *)0x0;
    pdVar14 = pdVar13;
    param_5 = pdVar24;
LAB_006f1eb4:
    func_0x006fd834();
    param_3 = (dword *)(section_00000068.segname + 0xd);
    pdVar13 = pdVar14;
LAB_006f1f60:
    func_0x006fd5dc();
LAB_006f1f64:
    pdVar24 = (dword *)0x0;
    pdVar14 = pdVar13;
  }
  else {
    param_5 = (dword *)((long)param_5 + ~(ulong)pdVar26);
    pdStack_1d0 = pdVar24;
    func_0x006fe26c();
    if (pdVar11 == (dword *)0x0) {
      pdVar12 = pdVar11;
      func_0x006fd63c();
      goto LAB_006f1f60;
    }
    param_3 = (dword *)((byte *)((long)param_4 + (long)pdVar26) + 1);
    pdVar25 = adStack_180;
    pdVar12 = adStack_180;
    pdVar16 = param_5;
    pdStack_1d8 = pdVar14;
    func_0x006fe274();
    if ((int)pdVar12 == 0) goto LAB_006f1f64;
    for (pbVar29 = (byte *)0x0; uVar9 = pdVar26 == (dword *)pbVar29, !(bool)uVar9;
        pbVar29 = pbVar29 + 1) {
      *(byte *)((long)pdVar25 + (long)pbVar29) =
           *(byte *)((long)pdVar25 + (long)pbVar29) ^ ((byte *)((long)param_4 + (long)pbVar29))[1];
    }
    param_3 = adStack_180;
    pdVar12 = pdVar11;
    pdVar16 = pdVar26;
    func_0x006fe274();
    pdVar14 = pdStack_1d8;
    if ((int)pdVar12 == 0) goto LAB_006f1f64;
    pbVar29 = (byte *)0x0;
    while (uVar9 = param_5 == (dword *)pbVar29, !(bool)uVar9) {
      func_0x006fec18();
      pbVar29 = extraout_x8_02;
    }
    param_3 = adStack_1c0;
    pdVar16 = (dword *)0x0;
    pdVar12 = pdVar6;
    pdVar23 = param_8;
    FUN_006ea778();
    pdVar13 = pdVar14;
    if ((int)pdVar12 == 0) goto LAB_006f1f64;
    pdVar12 = pdVar11;
    param_3 = pdVar26;
    FUN_00701f80();
    uVar19 = 0;
    uVar21 = -(ulong)((int)pdVar12 != 0 || (byte)*param_4 != 0);
    uVar20 = 0xffffffffffffffff;
    for (; uVar9 = pdVar26 == param_5, pdVar26 < param_5; pdVar26 = (dword *)((long)pdVar26 + 1)) {
      bVar4 = *(byte *)((long)pdVar11 + (long)pdVar26);
      uVar3 = uVar20;
      if (bVar4 != 1) {
        uVar3 = 0;
      }
      uVar19 = uVar19 & (uVar3 ^ 0xffffffffffffffff) | uVar3 & (ulong)pdVar26;
      uVar3 = 0;
      if (bVar4 != 1) {
        uVar3 = uVar20;
      }
      uVar20 = 0;
      if (bVar4 != 0) {
        uVar20 = uVar3;
      }
      uVar21 = uVar20 | uVar21;
      uVar20 = uVar3;
    }
    if (uVar20 != 0 || uVar21 != 0) goto LAB_006f1eb4;
    pbVar29 = (byte *)((long)param_5 - (uVar19 + 1));
    uVar9 = pdStack_1c8 == (dword *)pbVar29;
    if (pdStack_1c8 < pbVar29) {
      func_0x006fd834();
      param_3 = (dword *)(section_00000068.sectname + 9);
      goto LAB_006f1f60;
    }
    pdVar12 = pdStack_1d0;
    func_0x006fdde4();
    *(byte **)pdVar14 = pbVar29;
    pdVar24 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fdb84();
  func_0x006fd508();
  if ((bool)uVar9) {
    return pdVar24;
  }
  ___stack_chk_fail();
  uStack_1e8 = 0x6f205c;
  pdVar13 = pdVar12;
  pdVar15 = param_3;
  pdStack_240 = pdVar6;
  pdStack_238 = param_8;
  uStack_230 = param_7;
  pdStack_228 = param_4;
  pdStack_220 = param_5;
  pdStack_218 = pdVar26;
  pdStack_210 = pdVar25;
  pdStack_208 = pdVar14;
  pdStack_200 = pdVar24;
  pdStack_1f8 = pdVar11;
  ppuStack_1f0 = &puStack_e0;
  func_0x006fd5fc();
  adStack_2b0[2] = 0;
  adStack_2b0[3] = 0;
  adStack_2b0[0] = 0;
  adStack_2b0[1] = 0;
  adStack_2b0[6] = 0;
  adStack_2b0[7] = 0;
  adStack_2b0[4] = 0;
  adStack_2b0[5] = 0;
  pdVar24 = pdVar15;
  if (pdVar16 != (dword *)0x0) {
    pdVar24 = pdVar16;
  }
  uVar27 = pdVar15[1];
  uStack_248 = extraout_x8_03;
  if (uVar17 == 0xfffffffe) {
    uVar9 = true;
    uVar30 = uVar17;
LAB_006f20d8:
    uVar10 = (uint)*(undefined8 *)(pdVar12 + 2);
    FUN_006e3e84();
    uVar17 = uVar10 - 1 & 7;
    FUN_006f22d4();
    if ((byte)((byte)*pdVar23 >> (ulong)uVar17) == 0) {
      uVar10 = uVar10 & 7;
      if (uVar10 == 1) {
        pdVar23 = (dword *)((long)pdVar23 + 1);
      }
      iVar5 = (int)pdVar12 - (uint)(uVar10 == 1);
      iVar2 = uVar27 + 2;
      uVar9 = iVar2 <= iVar5 && iVar5 == uVar30 + iVar2;
      if (iVar2 <= iVar5 && (int)(uVar30 + iVar2) <= iVar5) {
        uVar9 = *(byte *)((long)pdVar23 + (long)iVar5 + -1) == 0xbc;
        if ((bool)uVar9) {
          uVar28 = iVar5 + ~uVar27;
          pdVar14 = (dword *)(long)(int)uVar28;
          FUN_00701e90();
          if (pdVar14 == (dword *)0x0) {
            func_0x006fd63c();
LAB_006f2260:
            func_0x006fd5dc();
            pdVar12 = pdVar14;
          }
          else {
            lVar1 = (long)(int)uVar28;
            pdVar12 = pdVar14;
            FUN_006f1d40(pdVar14,(dword *)(long)(int)uVar28,(byte *)((long)pdVar23 + lVar1),uVar27,
                         pdVar24);
            if ((int)pdVar12 != 0) {
              for (uVar20 = 0; (uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU)) != uVar20;
                  uVar20 = uVar20 + 1) {
                *(byte *)((long)pdVar14 + uVar20) =
                     *(byte *)((long)pdVar14 + uVar20) ^ *(byte *)((long)pdVar23 + uVar20);
              }
              if (uVar10 != 1) {
                func_0x006fe508(8 - uVar17);
              }
              iVar2 = uVar28 - 1;
              lVar22 = 0;
              do {
                dVar7 = *pdVar14;
                uVar28 = uVar28 - 1;
                bVar8 = lVar22 < iVar2;
                lVar22 = lVar22 + 1;
                pdVar14 = (dword *)((long)pdVar14 + 1);
              } while ((byte)dVar7 == 0 && bVar8);
              uVar9 = (byte)dVar7 == 1;
              if ((bool)uVar9) {
                if (((int)uVar30 < 0) || (uVar9 = uVar30 == uVar28, (bool)uVar9)) {
                  pdVar12 = adStack_2b0;
                  FUN_006ea94c(pdVar12,param_3);
                  if ((int)pdVar12 == 0) goto LAB_006f2264;
                  func_0x006fdd0c();
                  func_0x006fd92c();
                  func_0x006fda18();
                  (*extraout_x8_04)();
                  func_0x006fd92c();
                  (*extraout_x8_05)();
                  func_0x006fe448(adStack_2b0,adStack_288);
                  pdVar12 = adStack_288;
                  func_0x006ee728(pdVar12,(byte *)((long)pdVar23 + lVar1),uVar27);
                  if ((int)pdVar12 == 0) {
                    pdVar24 = (dword *)((long)&MACH_HEADER.magic + 1);
                    goto LAB_006f21d0;
                  }
                  func_0x006fd834();
                  pdVar14 = pdVar12;
                }
                else {
                  func_0x006fd834();
                  pdVar14 = pdVar12;
                }
              }
              else {
                func_0x006fd834();
                pdVar14 = pdVar12;
              }
              goto LAB_006f2260;
            }
          }
LAB_006f2264:
          pdVar24 = (dword *)0x0;
          goto LAB_006f21d0;
        }
        func_0x006fd834();
      }
      else {
        func_0x006fd834();
      }
    }
    else {
      func_0x006fd834();
    }
  }
  else {
    uVar9 = true;
    uVar30 = uVar27;
    if ((uVar17 == 0xffffffff) || (uVar9 = uVar17 == 0xfffffffd, uVar30 = uVar17, -3 < (int)uVar17))
    goto LAB_006f20d8;
    func_0x006fd834();
    pdVar12 = pdVar13;
  }
  func_0x006fd5dc();
  pdVar24 = (dword *)0x0;
LAB_006f21d0:
  func_0x006fdb84();
  func_0x006fe17c();
  func_0x006fd534(uStack_248);
  if (!(bool)uVar9) {
    ___stack_chk_fail();
    if (*(code **)(*(long *)pdVar12 + 0x20) == (code *)0x0) {
      FUN_006f2a48();
    }
    else {
      (**(code **)(*(long *)pdVar12 + 0x20))();
    }
    return pdVar12;
  }
  return pdVar24;
}



/* Entry: 006f1e3c; end: 006f22d3;  */

char * FUN_006f1e3c(char *param_1,byte *param_2,char *param_3,char *param_4,byte *param_5,
                   char *param_6,undefined8 param_7,byte *param_8,byte *param_9)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *extraout_x8;
  ulong uVar18;
  undefined8 extraout_x8_00;
  ulong uVar19;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  char *pcVar23;
  byte *pbVar24;
  char *pcVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  byte abStack_1e0 [40];
  byte abStack_1b8 [64];
  undefined8 uStack_178;
  char *pcStack_170;
  byte *pbStack_168;
  undefined8 uStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  char *pcStack_130;
  char *pcStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  byte *pbStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char acStack_f0 [64];
  byte abStack_b0 [80];
  
  uVar14 = (uint)param_6;
  pcVar23 = param_1;
  pcVar13 = param_4;
  pbVar17 = param_5;
  pbVar15 = param_8;
  pcStack_f8 = param_3;
  func_0x006fd588();
  if (pbVar15 == (byte *)0x0) {
    FUN_006eaae0();
    param_8 = (byte *)0xb6cbe0;
  }
  pbVar15 = param_8;
  if (param_9 != (byte *)0x0) {
    pbVar15 = param_9;
  }
  pcVar25 = (char *)(ulong)*(uint *)(param_8 + 4);
  pbVar16 = (byte *)((long)pcVar25 * 2 + 2);
  uVar8 = param_5 == pbVar16;
  pbVar24 = param_2;
  if (param_5 < pbVar16) {
    pcVar10 = pcVar23;
    pcVar23 = (char *)0x0;
    pbVar16 = pbVar15;
    pcVar26 = param_1;
LAB_006f1eb4:
    func_0x006fd834();
    param_3 = section_00000068.segname + 0xd;
    pbVar15 = pbVar16;
LAB_006f1f60:
    func_0x006fd5dc();
LAB_006f1f64:
    pcVar22 = (char *)0x0;
    pbVar16 = pbVar15;
  }
  else {
    pcVar26 = (char *)(param_5 + ~(ulong)pcVar25);
    pcStack_100 = param_1;
    func_0x006fe26c();
    if (pcVar23 == (char *)0x0) {
      pcVar10 = pcVar23;
      func_0x006fd63c();
      goto LAB_006f1f60;
    }
    param_3 = param_4 + (long)pcVar25 + 1;
    pbVar24 = abStack_b0;
    pcVar10 = (char *)abStack_b0;
    pcVar13 = pcVar26;
    pbStack_108 = param_2;
    func_0x006fe274();
    if ((int)pcVar10 == 0) goto LAB_006f1f64;
    for (pbVar16 = (byte *)0x0; uVar8 = (byte *)pcVar25 == pbVar16, !(bool)uVar8;
        pbVar16 = pbVar16 + 1) {
      pbVar24[(long)pbVar16] = pbVar24[(long)pbVar16] ^ (param_4 + (long)pbVar16)[1];
    }
    param_3 = (char *)abStack_b0;
    pcVar10 = pcVar23;
    pcVar13 = pcVar25;
    func_0x006fe274();
    pbVar16 = pbStack_108;
    if ((int)pcVar10 == 0) goto LAB_006f1f64;
    pbVar17 = (byte *)0x0;
    while (uVar8 = (byte *)pcVar26 == pbVar17, !(bool)uVar8) {
      func_0x006fec18();
      pbVar17 = extraout_x8;
    }
    param_3 = acStack_f0;
    pcVar13 = (char *)0x0;
    pcVar10 = param_6;
    pbVar17 = param_8;
    FUN_006ea778();
    pbVar15 = pbVar16;
    if ((int)pcVar10 == 0) goto LAB_006f1f64;
    pcVar10 = pcVar23;
    param_3 = pcVar25;
    FUN_00701f80();
    uVar18 = 0;
    uVar20 = -(ulong)((int)pcVar10 != 0 || *param_4 != 0);
    uVar19 = 0xffffffffffffffff;
    for (; uVar8 = pcVar25 == pcVar26, pcVar25 < pcVar26; pcVar25 = pcVar25 + 1) {
      bVar5 = pcVar23[(long)pcVar25];
      uVar3 = uVar19;
      if (bVar5 != 1) {
        uVar3 = 0;
      }
      uVar18 = uVar18 & (uVar3 ^ 0xffffffffffffffff) | uVar3 & (ulong)pcVar25;
      uVar3 = 0;
      if (bVar5 != 1) {
        uVar3 = uVar19;
      }
      uVar19 = 0;
      if (bVar5 != 0) {
        uVar19 = uVar3;
      }
      uVar20 = uVar19 | uVar20;
      uVar19 = uVar3;
    }
    if (uVar19 != 0 || uVar20 != 0) goto LAB_006f1eb4;
    pcVar22 = pcVar26 + -(uVar18 + 1);
    uVar8 = pcStack_f8 == pcVar22;
    if (pcStack_f8 < pcVar22) {
      func_0x006fd834();
      param_3 = section_00000068.sectname + 9;
      goto LAB_006f1f60;
    }
    pcVar10 = pcStack_100;
    func_0x006fdde4();
    *(char **)pbVar16 = pcVar22;
    pcVar22 = (char *)((long)&MACH_HEADER.magic + 1);
  }
  func_0x006fdb84();
  func_0x006fd508();
  if ((bool)uVar8) {
    return pcVar22;
  }
  ___stack_chk_fail();
  uStack_118 = 0x6f205c;
  pcVar11 = pcVar10;
  pcVar12 = param_3;
  pcStack_170 = param_6;
  pbStack_168 = param_8;
  uStack_160 = param_7;
  pcStack_158 = param_4;
  pcStack_150 = pcVar26;
  pcStack_148 = pcVar25;
  pbStack_140 = pbVar24;
  pbStack_138 = pbVar16;
  pcStack_130 = pcVar22;
  pcStack_128 = pcVar23;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x006fd5fc();
  abStack_1e0[8] = 0;
  abStack_1e0[9] = 0;
  abStack_1e0[10] = 0;
  abStack_1e0[0xb] = 0;
  abStack_1e0[0xc] = 0;
  abStack_1e0[0xd] = 0;
  abStack_1e0[0xe] = 0;
  abStack_1e0[0xf] = 0;
  abStack_1e0[0] = 0;
  abStack_1e0[1] = 0;
  abStack_1e0[2] = 0;
  abStack_1e0[3] = 0;
  abStack_1e0[4] = 0;
  abStack_1e0[5] = 0;
  abStack_1e0[6] = 0;
  abStack_1e0[7] = 0;
  abStack_1e0[0x18] = 0;
  abStack_1e0[0x19] = 0;
  abStack_1e0[0x1a] = 0;
  abStack_1e0[0x1b] = 0;
  abStack_1e0[0x1c] = 0;
  abStack_1e0[0x1d] = 0;
  abStack_1e0[0x1e] = 0;
  abStack_1e0[0x1f] = 0;
  abStack_1e0[0x10] = 0;
  abStack_1e0[0x11] = 0;
  abStack_1e0[0x12] = 0;
  abStack_1e0[0x13] = 0;
  abStack_1e0[0x14] = 0;
  abStack_1e0[0x15] = 0;
  abStack_1e0[0x16] = 0;
  abStack_1e0[0x17] = 0;
  pcVar23 = pcVar12;
  if (pcVar13 != (char *)0x0) {
    pcVar23 = pcVar13;
  }
  uVar4 = *(uint *)(pcVar12 + 4);
  uStack_178 = extraout_x8_00;
  if (uVar14 == 0xfffffffe) {
    uVar8 = true;
    uVar28 = uVar14;
LAB_006f20d8:
    uVar9 = (uint)*(undefined8 *)(pcVar10 + 8);
    FUN_006e3e84();
    uVar14 = uVar9 - 1 & 7;
    FUN_006f22d4();
    if (*pbVar17 >> (ulong)uVar14 == 0) {
      uVar9 = uVar9 & 7;
      if (uVar9 == 1) {
        pbVar17 = pbVar17 + 1;
      }
      iVar6 = (int)pcVar10 - (uint)(uVar9 == 1);
      iVar2 = uVar4 + 2;
      uVar8 = iVar2 <= iVar6 && iVar6 == uVar28 + iVar2;
      if (iVar2 <= iVar6 && (int)(uVar28 + iVar2) <= iVar6) {
        uVar8 = pbVar17[(long)iVar6 + -1] == 0xbc;
        if ((bool)uVar8) {
          uVar27 = iVar6 + ~uVar4;
          pcVar13 = (char *)(long)(int)uVar27;
          FUN_00701e90();
          if (pcVar13 == (char *)0x0) {
            func_0x006fd63c();
LAB_006f2260:
            func_0x006fd5dc();
            pcVar10 = pcVar13;
          }
          else {
            lVar1 = (long)(int)uVar27;
            pcVar10 = pcVar13;
            FUN_006f1d40(pcVar13,(char *)(long)(int)uVar27,pbVar17 + lVar1,uVar4,pcVar23);
            if ((int)pcVar10 != 0) {
              for (uVar19 = 0; (uVar27 & ((int)uVar27 >> 0x1f ^ 0xffffffffU)) != uVar19;
                  uVar19 = uVar19 + 1) {
                pcVar13[uVar19] = pcVar13[uVar19] ^ pbVar17[uVar19];
              }
              if (uVar9 != 1) {
                func_0x006fe508(8 - uVar14);
              }
              iVar2 = uVar27 - 1;
              lVar21 = 0;
              do {
                bVar5 = *pcVar13;
                uVar27 = uVar27 - 1;
                bVar7 = lVar21 < iVar2;
                lVar21 = lVar21 + 1;
                pcVar13 = pcVar13 + 1;
              } while (bVar5 == 0 && bVar7);
              uVar8 = bVar5 == 1;
              if ((bool)uVar8) {
                if (((int)uVar28 < 0) || (uVar8 = uVar28 == uVar27, (bool)uVar8)) {
                  pcVar10 = (char *)abStack_1e0;
                  FUN_006ea94c(pcVar10,param_3);
                  if ((int)pcVar10 == 0) goto LAB_006f2264;
                  func_0x006fdd0c();
                  func_0x006fd92c();
                  func_0x006fda18();
                  (*extraout_x8_01)();
                  func_0x006fd92c();
                  (*extraout_x8_02)();
                  func_0x006fe448(abStack_1e0,abStack_1b8);
                  pcVar10 = (char *)abStack_1b8;
                  func_0x006ee728(pcVar10,pbVar17 + lVar1,uVar4);
                  if ((int)pcVar10 == 0) {
                    pcVar23 = (char *)((long)&MACH_HEADER.magic + 1);
                    goto LAB_006f21d0;
                  }
                  func_0x006fd834();
                  pcVar13 = pcVar10;
                }
                else {
                  func_0x006fd834();
                  pcVar13 = pcVar10;
                }
              }
              else {
                func_0x006fd834();
                pcVar13 = pcVar10;
              }
              goto LAB_006f2260;
            }
          }
LAB_006f2264:
          pcVar23 = (char *)0x0;
          goto LAB_006f21d0;
        }
        func_0x006fd834();
      }
      else {
        func_0x006fd834();
      }
    }
    else {
      func_0x006fd834();
    }
  }
  else {
    uVar8 = true;
    uVar28 = uVar4;
    if ((uVar14 == 0xffffffff) || (uVar8 = uVar14 == 0xfffffffd, uVar28 = uVar14, -3 < (int)uVar14))
    goto LAB_006f20d8;
    func_0x006fd834();
    pcVar10 = pcVar11;
  }
  func_0x006fd5dc();
  pcVar23 = (char *)0x0;
LAB_006f21d0:
  func_0x006fdb84();
  func_0x006fe17c();
  func_0x006fd534(uStack_178);
  if ((bool)uVar8) {
    return pcVar23;
  }
  ___stack_chk_fail();
  if (*(code **)(*(long *)pcVar10 + 0x20) == (code *)0x0) {
    FUN_006f2a48();
  }
  else {
    (**(code **)(*(long *)pcVar10 + 0x20))();
  }
  return pcVar10;
}



/* Entry: 006f22d4; end: 006f22fb;  */

void FUN_006f22d4(long *param_1)

{
  if (*(code **)(*param_1 + 0x20) == (code *)0x0) {
    FUN_006f2a48();
  }
  else {
    (**(code **)(*param_1 + 0x20))();
  }
  return;
}



/* Entry: 006f22fc; end: 006f2523;  */

undefined8
FUN_006f22fc(long param_1,undefined1 *param_2,undefined8 param_3,long param_4,long param_5,
            uint param_6)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  code *extraout_x8;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = param_4;
  if (param_5 != 0) {
    lVar5 = param_5;
  }
  uVar10 = (ulong)*(uint *)(param_4 + 4);
  pbVar8 = *(byte **)(param_1 + 8);
  pbVar9 = pbVar8;
  FUN_006e3858();
  if ((int)pbVar9 == 0) {
    FUN_006e3e84();
    pbVar9 = pbVar8;
    func_0x006fe748();
    uVar13 = (ulong)pbVar9 & 0xffffffff;
    uVar1 = (uint)pbVar8 & 7;
    puVar6 = param_2;
    if (uVar1 == 1) {
      puVar6 = param_2 + 1;
      *param_2 = 0;
      uVar13 = uVar13 - 1;
    }
    if (uVar10 + 2 <= uVar13) {
      uVar11 = uVar10;
      if (param_6 != 0xffffffff) {
        if (param_6 == 0xfffffffe) {
          uVar11 = (uVar13 - uVar10) - 2;
        }
        else {
          if ((int)param_6 < 0) {
            func_0x006fd834();
            goto LAB_006f23d0;
          }
          uVar11 = (ulong)param_6;
        }
      }
      if (uVar11 <= (uVar13 - uVar10) - 2) {
        if (uVar11 == 0) {
          pbVar9 = (byte *)0x0;
LAB_006f2424:
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          puVar3 = &uStack_80;
          FUN_006ea94c(puVar3,param_4);
          if ((int)puVar3 == 0) {
            func_0x006fe17c();
          }
          else {
            lVar12 = (uVar13 - uVar10) + -1;
            func_0x006fdd0c();
            func_0x006fd92c();
            (*extraout_x8)();
            func_0x006fd92c();
            func_0x006fe6dc();
            func_0x006fe448(&uStack_80,puVar6 + lVar12);
            func_0x006fe17c();
            puVar4 = puVar6;
            FUN_006f1d40(puVar6,lVar12,puVar6 + lVar12,uVar10,lVar5);
            if ((int)puVar4 != 0) {
              lVar5 = uVar13 - (uVar11 + uVar10);
              puVar6[lVar5 + -2] = puVar6[lVar5 + -2] ^ 1;
              if (uVar11 != 0) {
                pbVar2 = puVar6 + lVar5 + -1;
                for (; uVar11 != 0; uVar11 = uVar11 - 1) {
                  *pbVar2 = *pbVar2 ^ *pbVar9;
                  pbVar2 = pbVar2 + 1;
                  pbVar9 = pbVar9 + 1;
                }
              }
              if (uVar1 != 1) {
                func_0x006fe508(8 - ((uint)pbVar8 - 1 & 7));
              }
              puVar6[uVar13 - 1] = 0xbc;
              uVar7 = 1;
              goto LAB_006f23dc;
            }
          }
        }
        else {
          func_0x006fe26c();
          if (pbVar9 != (byte *)0x0) {
            func_0x006fea04();
            FUN_006e92d4();
            goto LAB_006f2424;
          }
          func_0x006fd520(4);
        }
        uVar7 = 0;
        goto LAB_006f23dc;
      }
    }
    func_0x006fd834();
  }
  else {
    func_0x006fd834();
  }
LAB_006f23d0:
  func_0x006fd5dc();
  uVar7 = 0;
LAB_006f23dc:
  func_0x006fe6f4();
  return uVar7;
}



/* Entry: 006f2524; end: 006f252b;  */

/* WARNING: Removing unreachable block (ram,0x006f255c) */

qword * FUN_006f2524(void)

{
  undefined4 uVar1;
  int iVar2;
  qword *pqVar3;
  qword qVar4;
  qword *pqVar5;
  
  pqVar5 = &section_00000158.size;
  FUN_00701e90();
  if (pqVar5 == (qword *)0x0) {
    func_0x006fd520(4);
  }
  else {
    pqVar3 = pqVar5;
    _bzero(pqVar5,0x180);
    qVar4 = *pqVar5;
    if (qVar4 == 0) {
      FUN_006f25e8();
      *pqVar5 = (qword)pqVar3;
      qVar4 = 0xb6cd80;
    }
    uVar1 = *(undefined4 *)(qVar4 + 0x48);
    *(undefined4 *)(pqVar5 + 10) = 1;
    *(undefined4 *)((long)pqVar5 + 0x54) = uVar1;
    iVar2 = (int)pqVar5 + 0x58;
    FUN_00706444();
    pqVar5[9] = 0;
    if ((*(long *)(*pqVar5 + 0x10) != 0) && (func_0x006fe2d4(), iVar2 == 0)) {
      func_0x006fe77c(0xb29d08);
      _pthread_rwlock_destroy(pqVar5 + 0xb);
      func_0x006fdb84();
      pqVar5 = (qword *)0x0;
    }
  }
  return pqVar5;
}



/* Entry: 006f252c; end: 006f25e7;  */

qword * FUN_006f252c(qword *param_1)

{
  undefined4 uVar1;
  int iVar2;
  qword *pqVar3;
  qword qVar4;
  qword *pqVar5;
  
  pqVar5 = &section_00000158.size;
  FUN_00701e90();
  if (pqVar5 == (qword *)0x0) {
    func_0x006fd520(4);
  }
  else {
    pqVar3 = pqVar5;
    _bzero(pqVar5,0x180);
    if (param_1 == (qword *)0x0) {
      qVar4 = *pqVar5;
    }
    else {
      qVar4 = *param_1;
      *pqVar5 = qVar4;
    }
    if (qVar4 == 0) {
      FUN_006f25e8();
      *pqVar5 = (qword)pqVar3;
      qVar4 = 0xb6cd80;
    }
    uVar1 = *(undefined4 *)(qVar4 + 0x48);
    *(undefined4 *)(pqVar5 + 10) = 1;
    *(undefined4 *)((long)pqVar5 + 0x54) = uVar1;
    iVar2 = (int)pqVar5 + 0x58;
    FUN_00706444();
    pqVar5[9] = 0;
    if ((*(long *)(*pqVar5 + 0x10) != 0) && (func_0x006fe2d4(), iVar2 == 0)) {
      func_0x006fe77c(0xb29d08);
      _pthread_rwlock_destroy(pqVar5 + 0xb);
      func_0x006fdb84();
      pqVar5 = (qword *)0x0;
    }
  }
  return pqVar5;
}



/* Entry: 006f25e8; end: 006f2613;  */

undefined8 FUN_006f25e8(void)

{
  func_0x00706544(0xb29df0,FUN_006f4840);
  return 0xb6cd80;
}



/* Entry: 006f2614; end: 006f2717;  */

/* WARNING: Possible PIC construction at 0x006f26f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006f26fc) */
/* WARNING: Removing unreachable block (ram,0x006fda60) */

void FUN_006f2614(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (int)param_1 + 0x50;
    func_0x00705a98();
    if (iVar1 != 0) {
      if (*(long *)(*param_1 + 0x18) != 0) {
        func_0x006fe2d4();
      }
      FUN_006e29e4(0xb29d08,param_1,param_1 + 9);
      func_0x006fe190();
      FUN_006e3cd0(param_1[2]);
      FUN_006e3cd0(param_1[3]);
      FUN_006e3cd0(param_1[4]);
      FUN_006e3cd0(param_1[5]);
      FUN_006e3cd0(param_1[6]);
      FUN_006e3cd0(param_1[7]);
      FUN_006e3cd0(param_1[8]);
      FUN_006e5880(param_1[0x24]);
      FUN_006e5880(param_1[0x25]);
      FUN_006e5880(param_1[0x26]);
      FUN_006e3cd0(param_1[0x27]);
      FUN_006e3cd0(param_1[0x28]);
      FUN_006e3cd0(param_1[0x29]);
      FUN_006e3cd0(param_1[0x2a]);
      uVar4 = 0;
      while( true ) {
        lVar2 = param_1[0x2c];
        if (*(uint *)(param_1 + 0x2b) <= uVar4) break;
        func_0x006f18dc(*(undefined8 *)(lVar2 + uVar4 * 8));
        uVar4 = uVar4 + 1;
      }
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + -8);
        FUN_00701f08(plVar3,*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__free_0099a260)(plVar3);
        return;
      }
      return;
    }
  }
  return;
}



/* Entry: 006f2718; end: 006f271f;  */

void FUN_006f2718(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  plVar1 = plVar2;
  FUN_006e3c4c();
  if ((int)plVar1 != 0) {
    func_0x006e3dfc(*(undefined8 *)(*plVar2 + (long)((int)plVar1 + -1) * 8));
  }
  return;
}



/* Entry: 006f2720; end: 006f28cf;  */

undefined8 FUN_006f2720(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 in_x6;
  ulong unaff_x19;
  ulong *unaff_x21;
  int unaff_w22;
  int iVar8;
  undefined8 uVar9;
  
  func_0x006fdc38();
  func_0x006fe480();
  uVar1 = param_1;
  FUN_006f348c();
  if ((int)uVar1 == 0) {
    return 0;
  }
  func_0x006fe748();
  if (unaff_x19 < (uVar1 & 0xffffffff)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return 0;
  }
  uVar2 = uVar1;
  FUN_006e4450();
  if (uVar2 == 0) {
    uVar9 = 0;
    goto LAB_006f27f8;
  }
  uVar3 = uVar2;
  FUN_006e44d0();
  func_0x006fd82c();
  uVar4 = uVar3;
  func_0x006fd82c();
  uVar5 = uVar1 & 0xffffffff;
  FUN_00701e90();
  if (((uVar3 == 0) || (uVar4 == 0)) || (uVar5 == 0)) {
    func_0x006fd63c();
LAB_006f27e8:
    func_0x006fd5dc();
LAB_006f27ec:
    uVar9 = 0;
  }
  else {
    iVar8 = (int)in_x6;
    if (iVar8 == 4) {
      uVar6 = uVar5;
      func_0x006fdbd8();
      iVar8 = (int)uVar6;
      FUN_006f1b7c();
    }
    else if (iVar8 == 3) {
      uVar6 = uVar5;
      func_0x006fdbd8();
      iVar8 = (int)uVar6;
      FUN_006f1b30();
    }
    else {
      if (iVar8 != 1) {
        func_0x006fd834();
        goto LAB_006f27e8;
      }
      uVar6 = uVar5;
      func_0x006fdbd8();
      iVar8 = (int)uVar6;
      FUN_006f1994();
    }
    if ((iVar8 == 0) || (FUN_006e405c(uVar5,in_x6,uVar3), uVar5 == 0)) goto LAB_006f27ec;
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar5 = uVar3;
    FUN_006e34dc(uVar3,uVar9);
    if (-1 < (int)uVar5) {
      func_0x006fd834();
      goto LAB_006f27e8;
    }
    lVar7 = param_1 + 0x120;
    FUN_006e80e4(lVar7,param_1 + 0x58,uVar9,uVar2);
    if (((int)lVar7 == 0) ||
       (FUN_006e5360(uVar4,uVar3,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x120) + 0x18,
                     uVar2), (int)uVar4 == 0)) goto LAB_006f27ec;
    func_0x006fe184();
    FUN_006e4138();
    if (unaff_w22 == 0) {
      func_0x006fd7ac();
      goto LAB_006f27e8;
    }
    *unaff_x21 = uVar1 & 0xffffffff;
    uVar9 = 1;
  }
  func_0x006fd8f4();
  func_0x006fe7b0();
LAB_006f27f8:
  func_0x006fe910();
  return uVar9;
}



/* Entry: 006f28d0; end: 006f28f7;  */

long * FUN_006f28d0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int in_w6;
  ulong unaff_x19;
  ulong *unaff_x20;
  long *plVar3;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f28dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x006fe858();
  func_0x006fe490();
  FUN_006f22d4();
  if (unaff_x19 < ((ulong)param_1 & 0xffffffff)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return (long *)0x0;
  }
  uVar2 = (ulong)param_1 & 0xffffffff;
  FUN_00701e90();
  if (uVar2 == 0) {
    func_0x006fd63c();
LAB_006f3ce4:
    func_0x006fd5dc();
  }
  else {
    if (in_w6 == 3) {
      func_0x006fe2c8();
      iVar1 = (int)uVar2;
      FUN_006f1b30();
    }
    else {
      if (in_w6 != 1) {
        func_0x006fd834();
        goto LAB_006f3ce4;
      }
      func_0x006fe2c8();
      iVar1 = (int)uVar2;
      FUN_006f1908();
    }
    if (iVar1 != 0) {
      func_0x006fdc14();
      FUN_006f35d0();
      if (iVar1 != 0) {
        *unaff_x20 = (ulong)param_1 & 0xffffffff;
        plVar3 = (long *)((long)&MACH_HEADER.magic + 1);
        goto LAB_006f3cec;
      }
    }
  }
  plVar3 = (long *)0x0;
LAB_006f3cec:
  func_0x006fdb84();
  return plVar3;
}



/* Entry: 006f28f8; end: 006f2a47;  */

undefined8
FUN_006f28f8(ulong param_1,ulong *param_2,ulong param_3,ulong param_4,undefined8 param_5,
            ulong param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1;
  FUN_006f22d4();
  if (param_4 < (uVar2 & 0xffffffff)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return 0;
  }
  uVar3 = param_3;
  if ((param_7 != 3) && (uVar3 = uVar2 & 0xffffffff, FUN_00701e90(), uVar3 == 0)) {
LAB_006f2a2c:
    func_0x006fd834();
    func_0x006fd5dc();
    uVar4 = 0;
    goto LAB_006f2a38;
  }
  if (param_6 == (uVar2 & 0xffffffff)) {
    FUN_006f35d0(param_1,uVar3,param_5,param_6);
    if ((int)param_1 == 0) goto LAB_006f29d4;
    if (param_7 == 4) {
      func_0x006fdc08();
      iVar1 = (int)param_3;
      FUN_006f1e3c();
    }
    else {
      if (param_7 == 3) {
        *param_2 = param_6;
        return 1;
      }
      if (param_7 != 1) goto LAB_006f2a2c;
      func_0x006fdc08();
      iVar1 = (int)param_3;
      FUN_006f1a54();
    }
    if (iVar1 == 0) goto LAB_006f29cc;
    uVar4 = 1;
  }
  else {
LAB_006f29cc:
    func_0x006fd834();
    func_0x006fd5dc();
LAB_006f29d4:
    uVar4 = 0;
  }
  if (param_7 == 3) {
    return uVar4;
  }
LAB_006f2a38:
  func_0x006fdb84();
  return uVar4;
}



/* Entry: 006f2a48; end: 006f2a63;  */

ulong FUN_006f2a48(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  FUN_006e3eb8(uVar1);
  return uVar1 & 0xffffffff;
}



/* Entry: 006f2a64; end: 006f2b4b;  */

undefined8
FUN_006f2a64(long param_1,undefined8 param_2,undefined8 param_3,int param_4,long param_5,
            ulong param_6)

{
  byte bVar1;
  byte *pbVar2;
  long lVar3;
  byte *pbVar4;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  
  func_0x006fdcd0();
  func_0x006fd720();
  if (param_4 == 0x72) {
    if (param_6 == 0x24) {
      *unaff_x21 = param_5;
      *unaff_x20 = 0x24;
      *unaff_x19 = 0;
      return 1;
    }
  }
  else {
    lVar3 = 7;
    pbVar2 = &UNK_00838630;
    do {
      pbVar4 = pbVar2;
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) {
        func_0x006fd834();
        goto LAB_006f2b34;
      }
      pbVar2 = pbVar4 + 0x1c;
    } while (*(int *)(pbVar4 + 0x18) != param_4);
    if (param_6 == pbVar4[0x1c]) {
      bVar1 = pbVar4[0x1d];
      func_0x006fe26c();
      if (param_1 != 0) {
        func_0x006fe3b8();
        func_0x006fde2c(param_1 + (ulong)bVar1,param_5);
        *unaff_x21 = param_1;
        *unaff_x20 = param_6 + bVar1;
        *unaff_x19 = 1;
        return 1;
      }
      func_0x006fd63c();
      goto LAB_006f2b34;
    }
  }
  func_0x006fd834();
LAB_006f2b34:
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006f2b4c; end: 006f2c43;  */

/* WARNING: Removing unreachable block (ram,0x006f2c20) */

undefined8
FUN_006f2b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined4 *param_5,long *param_6)

{
  int iVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_70;
  
  plVar2 = param_6;
  FUN_006f22d4();
  iVar1 = (int)plVar2;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_6 + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    func_0x006fe4b0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x006f2bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  func_0x006feaec();
  FUN_006f2a64();
  if (iVar1 != 0) {
    func_0x006fe3e4();
    FUN_006f28d0();
    if (iVar1 != 0) {
      *param_5 = uStack_70;
      return 1;
    }
  }
  return 0;
}



/* Entry: 006f2c44; end: 006f2d0b;  */

bool FUN_006f2c44(ulong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 in_x4;
  ulong in_x5;
  long in_x6;
  undefined8 in_x7;
  ulong uVar3;
  undefined4 in_stack_00000060;
  
  func_0x006fdcd0();
  if (in_x5 == *(uint *)(in_x6 + 4)) {
    func_0x006fe0f0();
    uVar3 = param_1;
    FUN_006f22d4();
    uVar3 = uVar3 & 0xffffffff;
    FUN_00701e90();
    if (uVar3 != 0) {
      FUN_006f22fc(param_1,uVar3,in_x4,in_x6,in_x7,in_stack_00000060);
      iVar2 = (int)param_1;
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        func_0x006fddbc();
        FUN_006f28d0();
        bVar1 = iVar2 != 0;
      }
      func_0x006fe6f4();
      return bVar1;
    }
    func_0x006fd63c();
  }
  else {
    func_0x006fd834();
  }
  func_0x006fd5dc();
  return false;
}



/* Entry: 006f2d0c; end: 006f2e4b;  */

/* WARNING: Removing unreachable block (ram,0x006f2e30) */

undefined8
FUN_006f2d0c(int param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
            ulong param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  if ((*(long *)(param_6 + 8) == 0) || (*(long *)(param_6 + 0x10) == 0)) {
    func_0x006fd834();
LAB_006f2d80:
    func_0x006fd5dc();
    return 0;
  }
  func_0x006fea3c();
  uVar2 = param_6;
  FUN_006f22d4();
  lStack_60 = 0;
  uStack_58 = 0;
  if ((param_1 == 0x72) && (param_3 != 0x24)) {
    func_0x006fd834();
    goto LAB_006f2d80;
  }
  uVar3 = uVar2 & 0xffffffff;
  FUN_00701e90();
  if (uVar3 == 0) {
    func_0x006fd63c();
    goto LAB_006f2d80;
  }
  FUN_006f2e4c(param_6,&lStack_68,uVar3,uVar2 & 0xffffffff);
  iVar1 = (int)param_6;
  if (iVar1 != 0) {
    func_0x006feaec();
    FUN_006f2a64();
    if (iVar1 != 0) {
      if ((lStack_68 == lStack_60) && (func_0x006ee728(uVar3,uStack_58), (int)uVar3 == 0)) {
        uVar4 = 1;
        goto LAB_006f2e24;
      }
      func_0x006fd834();
      func_0x006fd5dc();
    }
  }
  uVar4 = 0;
LAB_006f2e24:
  func_0x006fdb84();
  return uVar4;
}



/* Entry: 006f2e4c; end: 006f316f;  */

undefined8
FUN_006f2e4c(ulong param_1,undefined8 *param_2,char *param_3,ulong param_4,long param_5,
            char *param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  func_0x006fdcd0();
  uVar2 = param_1;
  FUN_006f348c();
  if ((int)uVar2 == 0) {
    return 0;
  }
  uVar2 = param_1;
  FUN_006f22d4();
  if (param_4 < (uVar2 & 0xffffffff)) {
    func_0x006fd834();
LAB_006f2f28:
    func_0x006fd5dc();
    return 0;
  }
  if (param_6 != (char *)(uVar2 & 0xffffffff)) {
    func_0x006fd834();
    goto LAB_006f2f28;
  }
  FUN_006e4450();
  if (uVar2 == 0) {
    return 0;
  }
  func_0x006fe8b8();
  func_0x006fd910();
  uVar3 = uVar2;
  func_0x006fd910();
  if ((uVar2 == 0) || (uVar3 == 0)) {
    func_0x006fd520(4);
    uVar8 = 0;
    pcVar7 = (char *)0x0;
    goto LAB_006f2fc4;
  }
  pcVar7 = param_3;
  if ((param_7 == 3) || (pcVar7 = param_6, FUN_00701e90(), pcVar7 != (char *)0x0)) {
    FUN_006e405c(param_5,param_6,uVar2);
    if (param_5 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 8);
      uVar4 = uVar2;
      FUN_006e34dc(uVar2,uVar8);
      if (-1 < (int)uVar4) {
        func_0x006fd834();
        goto LAB_006f2fbc;
      }
      lVar5 = param_1 + 0x120;
      FUN_006e80e4(lVar5,param_1 + 0x58,uVar8,param_4);
      if ((int)lVar5 != 0) {
        FUN_006e5360(uVar3,uVar2,*(undefined8 *)(param_1 + 0x10),*(long *)(param_1 + 0x120) + 0x18,
                     param_4);
        iVar1 = (int)uVar3;
        if (iVar1 != 0) {
          func_0x006fdf80();
          FUN_006e4138();
          if (iVar1 == 0) {
            func_0x006fd7ac();
          }
          else {
            if (param_7 == 3) {
LAB_006f3080:
              *param_2 = param_6;
              uVar8 = 1;
              goto LAB_006f2fc4;
            }
            if (param_7 == 1) {
              if ((((char *)((long)&MACH_HEADER.magic + 1) < param_6) && (*pcVar7 == '\0')) &&
                 (pcVar7[1] == '\x01')) {
                for (pcVar6 = (char *)0x0; param_6 + -2 != pcVar6; pcVar6 = pcVar6 + 1) {
                  if ((pcVar7 + (long)pcVar6)[2] != -1) {
                    if (((pcVar7 + (long)pcVar6)[2] == '\0') &&
                       ((char *)((long)&MACH_HEADER.cpusubtype + 2) <= pcVar6 + 2)) {
                      param_6 = param_6 + (-3 - (long)pcVar6);
                      func_0x006fde2c(param_3,pcVar7 + (long)pcVar6 + 3);
                      goto LAB_006f3080;
                    }
                    break;
                  }
                }
              }
              func_0x006fd834();
              func_0x006fd5dc();
              func_0x006fd834();
            }
            else {
              func_0x006fd834();
            }
          }
          goto LAB_006f2fbc;
        }
      }
    }
  }
  else {
    func_0x006fd63c();
LAB_006f2fbc:
    func_0x006fd5dc();
  }
  uVar8 = 0;
LAB_006f2fc4:
  func_0x006fdbd0();
  func_0x006fdda8();
  if (pcVar7 != param_3) {
    func_0x006fe6f4();
    return uVar8;
  }
  return uVar8;
}



/* Entry: 006f3170; end: 006f348b;  */

undefined8 FUN_006f3170(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*param_1 != 0) && ((*(byte *)(*param_1 + 0x48) & 1) != 0)) {
    return 1;
  }
  plVar2 = param_1;
  FUN_006f348c();
  if ((int)plVar2 == 0) {
    return 0;
  }
  lVar9 = param_1[4];
  if ((lVar9 != 0) == (param_1[5] == 0)) {
    func_0x006fd834();
LAB_006f31f4:
    func_0x006fd5dc();
    return 0;
  }
  lVar3 = param_1[3];
  if (lVar3 == 0) {
    return 1;
  }
  if ((*(int *)(lVar3 + 0x10) != 0) || (FUN_006e4264(lVar3,param_1[1]), -1 < (int)lVar3)) {
    func_0x006fd834();
    goto LAB_006f31f4;
  }
  if (lVar9 == 0) {
    return 1;
  }
  FUN_006e4450();
  if (lVar3 == 0) {
    func_0x006fd63c();
    goto LAB_006f31f4;
  }
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  lVar9 = param_1[4];
  if ((((*(int *)(lVar9 + 0x10) == 0) && (lVar10 = lVar9, func_0x006fdd04(), (int)lVar10 < 0)) &&
      (lVar10 = param_1[5], *(int *)(lVar10 + 0x10) == 0)) &&
     (lVar4 = lVar10, func_0x006fdd04(), (int)lVar4 < 0)) {
    puVar5 = &uStack_58;
    func_0x006fe348(puVar5,lVar9,lVar10);
    if ((int)puVar5 != 0) {
      puVar5 = &uStack_58;
      FUN_006e4264(puVar5,param_1[1]);
      if ((int)puVar5 != 0) goto LAB_006f3270;
      lVar9 = param_1[4];
      FUN_006e3dac();
      puVar6 = &uStack_88;
      FUN_006e3a38(puVar6,lVar9,puVar5);
      if ((int)puVar6 != 0) {
        lVar9 = param_1[5];
        FUN_006e3dac();
        puVar5 = &uStack_a0;
        FUN_006e3a38(puVar5,lVar9,puVar6);
        if ((int)puVar5 != 0) {
          FUN_006e3e84(&uStack_88);
          puVar5 = &uStack_a0;
          FUN_006e3e84(puVar5);
          puVar6 = &uStack_70;
          func_0x006fe348(puVar6,param_1[3],param_1[2]);
          if ((int)puVar6 != 0) {
            iVar1 = 0;
            func_0x006fe838(0,&uStack_58,&uStack_70,&uStack_88);
            if (iVar1 != 0) {
              iVar1 = 0;
              FUN_006e4d78(0,&uStack_70,&uStack_70,&uStack_a0,puVar5,lVar3);
              if (iVar1 != 0) {
                iVar1 = (int)&uStack_58;
                FUN_006e435c();
                if (iVar1 != 0) {
                  iVar1 = (int)&uStack_70;
                  FUN_006e435c();
                  if (iVar1 != 0) {
                    lVar9 = param_1[6];
                    if (((lVar9 != 0) == (param_1[7] == 0)) || ((lVar9 != 0) == (param_1[8] == 0)))
                    {
                      func_0x006fd834();
                    }
                    else {
                      if (lVar9 == 0) {
LAB_006f3454:
                        uVar8 = 1;
                        goto LAB_006f3280;
                      }
                      piVar7 = &iStack_d4;
                      func_0x006fe844(piVar7,param_1[2],lVar9,&uStack_88);
                      if ((int)piVar7 != 0) {
                        piVar7 = &iStack_d8;
                        FUN_006f3528(piVar7,param_1[2],param_1[7],&uStack_a0,puVar5,lVar3);
                        if ((int)piVar7 != 0) {
                          piVar7 = &iStack_dc;
                          func_0x006fe844(piVar7,param_1[5],param_1[8],param_1[4]);
                          if ((((int)piVar7 != 0) && (iStack_d4 != 0)) &&
                             ((iStack_d8 != 0 && (iStack_dc != 0)))) goto LAB_006f3454;
                        }
                      }
                      func_0x006fd834();
                    }
                    goto LAB_006f3278;
                  }
                }
                func_0x006fd834();
                goto LAB_006f3278;
              }
            }
          }
        }
      }
    }
    func_0x006fd834();
  }
  else {
LAB_006f3270:
    func_0x006fd834();
  }
LAB_006f3278:
  func_0x006fd5dc();
  uVar8 = 0;
LAB_006f3280:
  FUN_006e3cd0(&uStack_58);
  FUN_006e3cd0(&uStack_70);
  FUN_006e3cd0(&uStack_88);
  FUN_006e3cd0(&uStack_a0);
  FUN_006e3cd0(&uStack_b8);
  FUN_006e3cd0(&uStack_d0);
  func_0x006fe7b0();
  return uVar8;
}



/* Entry: 006f348c; end: 006f3527;  */

undefined8 FUN_006f348c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (puVar3 = *(undefined8 **)(param_1 + 0x10), puVar3 != (undefined8 *)0x0)) {
    FUN_006e3e84();
    if ((((uint)lVar1 < 0x4001) &&
        (((puVar2 = puVar3, FUN_006e3e84(), 0xffffffdf < (int)puVar2 - 0x22U &&
          (0 < *(int *)(puVar3 + 1))) && ((*(byte *)*puVar3 & 1) != 0)))) && (0x21 < (uint)lVar1)) {
      return 1;
    }
  }
  func_0x006fd834();
  func_0x006fd5dc();
  return 0;
}



/* Entry: 006f3528; end: 006f35cf;  */

undefined8 FUN_006f3528(int *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x006fe858();
  if (*(int *)(param_3 + 0x10) != 0) {
LAB_006f3568:
    *param_1 = 0;
    return 1;
  }
  func_0x006feae0();
  FUN_006e4264(param_3,param_4);
  if (-1 < (int)param_3) goto LAB_006f3568;
  func_0x006fda24();
  func_0x006fd82c();
  if ((param_3 != 0) && (lVar2 = param_3, func_0x006fe348(), (int)lVar2 != 0)) {
    iVar1 = 0;
    func_0x006fe838(0,param_3,param_3);
    if (iVar1 != 0) {
      func_0x006fe300();
      *param_1 = iVar1;
      uVar3 = 1;
      goto LAB_006f35c8;
    }
  }
  uVar3 = 0;
LAB_006f35c8:
  func_0x006fd8f4();
  return uVar3;
}



/* Entry: 006f35d0; end: 006f35e3;  */

long * FUN_006f35d0(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lStack0000000000000000;
  long lStack0000000000000020;
  long lStack0000000000000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  if (*(code **)(*param_1 + 0x40) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006f35dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))();
    return param_1;
  }
  func_0x006fdfa4();
  if ((param_1[1] == 0) || (param_1[3] == 0)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return (long *)0x0;
  }
  plVar12 = param_1;
  FUN_006e4450();
  if (plVar12 == (long *)0x0) {
    return (long *)0x0;
  }
  func_0x006fe8b8();
  func_0x006fd910();
  plVar4 = plVar12;
  func_0x006fd910();
  if ((plVar12 == (long *)0x0) || (plVar4 == (long *)0x0)) {
    func_0x006fd63c();
LAB_006f368c:
    func_0x006fd5dc();
  }
  else {
    FUN_006e405c(param_3,param_4,plVar12);
    if (param_3 != 0) {
      plVar5 = plVar12;
      FUN_006e34dc(plVar12,param_1[1]);
      iVar3 = (int)plVar5;
      if (iVar3 < 0) {
        func_0x006fd9d0();
        FUN_006f3cfc();
        if (iVar3 == 0) {
          func_0x006fd7ac();
        }
        else {
          uVar1 = *(uint *)((long)param_1 + 0x54);
          if ((param_1[2] != 0) || ((uVar1 >> 3 & 1) != 0)) {
            if ((uVar1 >> 3 & 1) == 0) {
              func_0x006fe680();
              uVar16 = *(uint *)(param_1 + 0x2b);
              if (param_1[0x2e] != 0) {
                for (lVar11 = 0; (ulong)uVar16 * 8 - lVar11 != 0; lVar11 = lVar11 + 8) {
                  *(undefined4 *)(*(long *)(param_1[0x2c] + lVar11) + 0x10) = 0x1f;
                }
                param_1[0x2e] = 0;
              }
              if (uVar16 == 0) {
LAB_006f38d0:
                uVar2 = uVar16 << 1;
                if (0x3ff < uVar2) {
                  uVar2 = 0x400;
                }
                if (uVar16 == 0) {
                  uVar2 = 1;
                }
                uVar17 = (ulong)uVar2;
                lVar11 = uVar17 << 3;
                FUN_00701e90();
                uVar6 = uVar17;
                FUN_00701e90();
                if ((lVar11 == 0) || (uVar6 == 0)) {
LAB_006f39a4:
                  func_0x00701ed0(uVar6);
                  func_0x00701ed0(lVar11);
                  uVar16 = 0;
                  puVar13 = (undefined8 *)0x0;
                }
                else {
                  uVar14 = (ulong)*(uint *)(param_1 + 0x2b);
                  func_0x006e3440(lVar11,param_1[0x2c],uVar14 << 3);
                  uVar7 = uVar6;
                  func_0x006fe3b8(uVar6,param_1[0x2d]);
                  for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
                    func_0x006f1870();
                    *(ulong *)(lVar11 + uVar14 * 8) = uVar7;
                    if (uVar7 == 0) {
                      for (uVar17 = (ulong)*(uint *)(param_1 + 0x2b); uVar17 < uVar14;
                          uVar17 = uVar17 + 1) {
                        func_0x006f18dc(*(undefined8 *)(lVar11 + uVar17 * 8));
                      }
                      goto LAB_006f39a4;
                    }
                  }
                  uVar16 = *(uint *)(param_1 + 0x2b);
                  uVar17 = (ulong)uVar16;
                  _bzero(uVar6 + uVar17,uVar2 - uVar16);
                  *(undefined1 *)(uVar6 + uVar17) = 1;
                  puVar13 = *(undefined8 **)(lVar11 + uVar17 * 8);
                  func_0x00701ed0(param_1[0x2c]);
                  param_1[0x2c] = lVar11;
                  func_0x00701ed0(param_1[0x2d]);
                  param_1[0x2d] = uVar6;
                  *(uint *)(param_1 + 0x2b) = uVar2;
                }
              }
              else {
                puVar13 = (undefined8 *)param_1[0x2d];
                _memchr(puVar13,0,(ulong)uVar16);
                if (puVar13 == (undefined8 *)0x0) {
                  if (uVar16 < 0x400) goto LAB_006f38d0;
                  uVar16 = 0x400;
                  func_0x006f1870();
                }
                else {
                  *(undefined1 *)puVar13 = 1;
                  uVar16 = (uint)((long)puVar13 - param_1[0x2d]);
                  puVar13 = *(undefined8 **)
                             (param_1[0x2c] + ((long)puVar13 - param_1[0x2d] & 0xffffffffU) * 8);
                }
              }
              func_0x006fe688();
              if (puVar13 != (undefined8 *)0x0) {
                lVar15 = param_1[2];
                lVar11 = param_1[0x24];
                iVar3 = *(int *)(puVar13 + 2);
                *(int *)(puVar13 + 2) = iVar3 + 1;
                if (iVar3 + 1 == 0x20) {
                  iVar3 = (int)*puVar13;
                  func_0x006fe75c();
                  if (iVar3 != 0) {
                    uVar10 = puVar13[1];
                    func_0x006e5820(uVar10,*puVar13,lVar11);
                    if ((int)uVar10 != 0) {
                      lVar8 = puVar13[1];
                      if ((*(int *)(lVar8 + 0x10) == 0) &&
                         (lVar9 = lVar8, FUN_006e4264(lVar8,lVar11 + 0x18), (int)lVar9 < 0)) {
                        in_stack_00000038 = 0;
                        in_stack_00000040 = 0;
                        in_stack_00000048 = 0;
                        iVar3 = (int)&stack0x00000038;
                        func_0x006fe75c();
                        if ((((iVar3 == 0) ||
                             (lVar9 = lVar8, func_0x006fd7e4(lVar8,&stack0x00000038),
                             (int)lVar9 == 0)) ||
                            (lVar9 = lVar8, FUN_006e6274(lVar8,&stack0x00000034,lVar8,lVar11 + 0x18)
                            , (int)lVar9 == 0)) ||
                           (func_0x006fd7e4(lVar8,&stack0x00000038), (int)lVar8 == 0)) {
                          func_0x006fd894();
                          func_0x006fd5dc();
                          FUN_006e3cd0(&stack0x00000038);
                        }
                        else {
                          FUN_006e3cd0(&stack0x00000038);
                          uVar10 = *puVar13;
                          FUN_006e5360(uVar10,uVar10,lVar15,lVar11 + 0x18);
                          if ((int)uVar10 != 0) {
                            uVar10 = *puVar13;
                            func_0x006fe660(uVar10,uVar10,lVar11);
                            iVar3 = (int)uVar10;
                            if (iVar3 != 0) {
                              *(undefined4 *)(puVar13 + 2) = 0;
                              goto LAB_006f3a64;
                            }
                          }
                        }
                      }
                      else {
                        func_0x006fd894();
                        func_0x006fd5dc();
                      }
                    }
                  }
                  func_0x006fd7ac();
                  func_0x006fd5dc();
                }
                else {
                  uVar10 = *puVar13;
                  func_0x006fd7e4(uVar10,uVar10);
                  if ((int)uVar10 != 0) {
                    uVar10 = puVar13[1];
                    func_0x006fd7e4(uVar10,uVar10);
                    iVar3 = (int)uVar10;
                    if (iVar3 != 0) {
LAB_006f3a64:
                      func_0x006fe0fc();
                      func_0x006fdc7c();
                      if (iVar3 != 0) goto LAB_006f3744;
                      goto LAB_006f3a3c;
                    }
                  }
                }
                plVar12 = (long *)0x0;
                *(undefined4 *)(puVar13 + 2) = 0x1f;
                goto LAB_006f369c;
              }
LAB_006f3a34:
              func_0x006fd7ac();
              func_0x006fd5dc();
            }
            else {
              uVar16 = 0;
              puVar13 = (undefined8 *)0x0;
LAB_006f3744:
              lVar11 = param_1[4];
              if ((((lVar11 == 0) || (lVar15 = param_1[5], lVar15 == 0)) ||
                  ((param_1[2] == 0 || ((param_1[6] == 0 || (param_1[7] == 0)))))) ||
                 ((param_1[8] == 0 ||
                  ((FUN_006e81f0(lVar15,param_1[0x25]), (int)lVar15 == 0 ||
                   (FUN_006e81f0(lVar11,param_1[0x26]), (int)lVar11 == 0)))))) {
                func_0x006fe950(plVar4,plVar12,param_1[0x27],param_1[1]);
                iVar3 = (int)plVar4;
                plVar5 = plVar4;
joined_r0x006f3810:
                if (iVar3 != 0) {
                  if ((param_1[2] == 0) ||
                     (((func_0x006fd910(), plVar5 != (long *)0x0 &&
                       (plVar4 = plVar5, FUN_006e5360(), (int)plVar4 != 0)) &&
                      (FUN_006e43a8(plVar5,plVar12), (int)plVar5 != 0)))) {
                    iVar3 = (int)plVar5;
                    if ((uVar1 >> 3 & 1) == 0) {
                      func_0x006fddb0();
                      func_0x006fdc7c();
                      if (iVar3 == 0) goto LAB_006f3a3c;
                    }
                    func_0x006fdc14();
                    FUN_006e4138();
                    if (iVar3 != 0) {
                      plVar12 = (long *)((long)&MACH_HEADER.magic + 1);
                      goto LAB_006f369c;
                    }
                  }
                  goto LAB_006f3a34;
                }
              }
              else {
                func_0x006fe918();
                func_0x006fd910();
                lVar15 = lVar11;
                func_0x006fd910();
                if ((lVar11 != 0) && (lVar15 != 0)) {
                  lVar8 = lVar15;
                  func_0x006fd9d0();
                  iVar3 = (int)lVar8;
                  FUN_006f3cfc();
                  if (iVar3 != 0) {
                    plVar5 = param_1 + 0x28;
                    lStack0000000000000028 = param_1[0x25];
                    lVar9 = param_1[0x26];
                    lVar8 = param_1[4];
                    FUN_006e4264(lVar8,param_1[5]);
                    iVar3 = (int)lVar8;
                    lStack0000000000000020 = lVar9;
                    if (-1 < iVar3) {
                      lStack0000000000000020 = lStack0000000000000028;
                      lStack0000000000000028 = lVar9;
                      plVar5 = param_1 + 0x29;
                    }
                    lStack0000000000000000 = *plVar5;
                    lVar8 = param_1[0x24];
                    func_0x006fdff0(lStack0000000000000020);
                    if (iVar3 != 0) {
                      func_0x006fe950(lVar15,lVar11,lStack0000000000000000,
                                      lStack0000000000000028 + 0x18);
                      iVar3 = (int)lVar15;
                      if ((iVar3 != 0) && (func_0x006fdff0(lStack0000000000000028), iVar3 != 0)) {
                        func_0x006fe544();
                        func_0x006fe950();
                        if (iVar3 != 0) {
                          func_0x006fddb0();
                          FUN_006e50b0();
                          if (iVar3 != 0) {
                            func_0x006fddb0();
                            func_0x006fdc7c();
                            if (iVar3 != 0) {
                              func_0x006fddb0();
                              func_0x006fe670();
                              if (iVar3 != 0) {
                                func_0x006fddb0();
                                FUN_006e3548();
                                if (iVar3 != 0) {
                                  FUN_006e3fc8(plVar4,(long)*(int *)(lVar8 + 0x20));
                                  plVar5 = plVar4;
                                  func_0x006fdbd0();
                                  iVar3 = (int)plVar4;
                                  goto joined_r0x006f3810;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                func_0x006fdbd0();
              }
            }
LAB_006f3a3c:
            plVar12 = (long *)0x0;
            goto LAB_006f369c;
          }
          func_0x006fd834();
        }
      }
      else {
        func_0x006fd834();
      }
      goto LAB_006f368c;
    }
  }
  plVar12 = (long *)0x0;
  puVar13 = (undefined8 *)0x0;
  uVar16 = 0;
LAB_006f369c:
  func_0x006fdbd0();
  func_0x006fdda8();
  if (puVar13 == (undefined8 *)0x0) {
    return plVar12;
  }
  if (uVar16 != 0x400) {
    func_0x006fe680();
    *(undefined1 *)(param_1[0x2d] + (ulong)uVar16) = 0;
    func_0x006fe688();
    return plVar12;
  }
  func_0x006f18dc(puVar13);
  return plVar12;
}



/* Entry: 006f35e4; end: 006f3c1b;  */

undefined8 FUN_006f35e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uStack0000000000000000;
  long lStack0000000000000020;
  long lStack0000000000000028;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  func_0x006fdfa4();
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x18) == 0)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return 0;
  }
  lVar5 = param_1;
  FUN_006e4450();
  if (lVar5 == 0) {
    return 0;
  }
  func_0x006fe8b8();
  func_0x006fd910();
  lVar6 = lVar5;
  func_0x006fd910();
  if ((lVar5 == 0) || (lVar6 == 0)) {
    func_0x006fd63c();
LAB_006f368c:
    func_0x006fd5dc();
  }
  else {
    FUN_006e405c(param_3,param_4,lVar5);
    if (param_3 != 0) {
      lVar10 = lVar5;
      FUN_006e34dc(lVar5,*(undefined8 *)(param_1 + 8));
      iVar4 = (int)lVar10;
      if (iVar4 < 0) {
        func_0x006fd9d0();
        FUN_006f3cfc();
        if (iVar4 == 0) {
          func_0x006fd7ac();
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x54);
          if ((*(long *)(param_1 + 0x10) != 0) || ((uVar2 >> 3 & 1) != 0)) {
            if ((uVar2 >> 3 & 1) == 0) {
              func_0x006fe680();
              uVar15 = *(uint *)(param_1 + 0x158);
              if (*(long *)(param_1 + 0x170) != 0) {
                for (lVar10 = 0; (ulong)uVar15 * 8 - lVar10 != 0; lVar10 = lVar10 + 8) {
                  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x160) + lVar10) + 0x10) = 0x1f;
                }
                *(undefined8 *)(param_1 + 0x170) = 0;
              }
              if (uVar15 == 0) {
LAB_006f38d0:
                uVar3 = uVar15 << 1;
                if (0x3ff < uVar3) {
                  uVar3 = 0x400;
                }
                if (uVar15 == 0) {
                  uVar3 = 1;
                }
                uVar17 = (ulong)uVar3;
                lVar10 = uVar17 << 3;
                FUN_00701e90();
                uVar16 = uVar17;
                FUN_00701e90();
                if ((lVar10 == 0) || (uVar16 == 0)) {
LAB_006f39a4:
                  func_0x00701ed0(uVar16);
                  func_0x00701ed0(lVar10);
                  uVar15 = 0;
                  puVar13 = (undefined8 *)0x0;
                }
                else {
                  uVar14 = (ulong)*(uint *)(param_1 + 0x158);
                  func_0x006e3440(lVar10,*(undefined8 *)(param_1 + 0x160),uVar14 << 3);
                  uVar7 = uVar16;
                  func_0x006fe3b8(uVar16,*(undefined8 *)(param_1 + 0x168));
                  for (; uVar14 < uVar17; uVar14 = uVar14 + 1) {
                    func_0x006f1870();
                    *(ulong *)(lVar10 + uVar14 * 8) = uVar7;
                    if (uVar7 == 0) {
                      for (uVar17 = (ulong)*(uint *)(param_1 + 0x158); uVar17 < uVar14;
                          uVar17 = uVar17 + 1) {
                        func_0x006f18dc(*(undefined8 *)(lVar10 + uVar17 * 8));
                      }
                      goto LAB_006f39a4;
                    }
                  }
                  uVar15 = *(uint *)(param_1 + 0x158);
                  uVar17 = (ulong)uVar15;
                  _bzero(uVar16 + uVar17,uVar3 - uVar15);
                  *(undefined1 *)(uVar16 + uVar17) = 1;
                  puVar13 = *(undefined8 **)(lVar10 + uVar17 * 8);
                  func_0x00701ed0(*(undefined8 *)(param_1 + 0x160));
                  *(long *)(param_1 + 0x160) = lVar10;
                  func_0x00701ed0(*(undefined8 *)(param_1 + 0x168));
                  *(ulong *)(param_1 + 0x168) = uVar16;
                  *(uint *)(param_1 + 0x158) = uVar3;
                }
              }
              else {
                puVar13 = *(undefined8 **)(param_1 + 0x168);
                _memchr(puVar13,0,(ulong)uVar15);
                if (puVar13 == (undefined8 *)0x0) {
                  if (uVar15 < 0x400) goto LAB_006f38d0;
                  uVar15 = 0x400;
                  func_0x006f1870();
                }
                else {
                  *(undefined1 *)puVar13 = 1;
                  uVar16 = (long)puVar13 - *(long *)(param_1 + 0x168);
                  uVar15 = (uint)uVar16;
                  puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x160) + (uVar16 & 0xffffffff) * 8)
                  ;
                }
              }
              func_0x006fe688();
              if (puVar13 != (undefined8 *)0x0) {
                uVar12 = *(undefined8 *)(param_1 + 0x10);
                lVar10 = *(long *)(param_1 + 0x120);
                iVar4 = *(int *)(puVar13 + 2);
                *(int *)(puVar13 + 2) = iVar4 + 1;
                if (iVar4 + 1 == 0x20) {
                  iVar4 = (int)*puVar13;
                  func_0x006fe75c();
                  if (iVar4 != 0) {
                    uVar9 = puVar13[1];
                    func_0x006e5820(uVar9,*puVar13,lVar10);
                    if ((int)uVar9 != 0) {
                      lVar8 = puVar13[1];
                      if ((*(int *)(lVar8 + 0x10) == 0) &&
                         (lVar11 = lVar8, FUN_006e4264(lVar8,lVar10 + 0x18), (int)lVar11 < 0)) {
                        in_stack_00000038 = 0;
                        in_stack_00000040 = 0;
                        in_stack_00000048 = 0;
                        iVar4 = (int)&stack0x00000038;
                        func_0x006fe75c();
                        if ((((iVar4 == 0) ||
                             (lVar11 = lVar8, func_0x006fd7e4(lVar8,&stack0x00000038),
                             (int)lVar11 == 0)) ||
                            (lVar11 = lVar8,
                            FUN_006e6274(lVar8,&stack0x00000034,lVar8,lVar10 + 0x18),
                            (int)lVar11 == 0)) ||
                           (func_0x006fd7e4(lVar8,&stack0x00000038), (int)lVar8 == 0)) {
                          func_0x006fd894();
                          func_0x006fd5dc();
                          FUN_006e3cd0(&stack0x00000038);
                        }
                        else {
                          FUN_006e3cd0(&stack0x00000038);
                          uVar9 = *puVar13;
                          FUN_006e5360(uVar9,uVar9,uVar12,lVar10 + 0x18);
                          if ((int)uVar9 != 0) {
                            uVar12 = *puVar13;
                            func_0x006fe660(uVar12,uVar12,lVar10);
                            iVar4 = (int)uVar12;
                            if (iVar4 != 0) {
                              *(undefined4 *)(puVar13 + 2) = 0;
                              goto LAB_006f3a64;
                            }
                          }
                        }
                      }
                      else {
                        func_0x006fd894();
                        func_0x006fd5dc();
                      }
                    }
                  }
                  func_0x006fd7ac();
                  func_0x006fd5dc();
                }
                else {
                  uVar12 = *puVar13;
                  func_0x006fd7e4(uVar12,uVar12);
                  if ((int)uVar12 != 0) {
                    uVar12 = puVar13[1];
                    func_0x006fd7e4(uVar12,uVar12);
                    iVar4 = (int)uVar12;
                    if (iVar4 != 0) {
LAB_006f3a64:
                      func_0x006fe0fc();
                      func_0x006fdc7c();
                      if (iVar4 != 0) goto LAB_006f3744;
                      goto LAB_006f3a3c;
                    }
                  }
                }
                uVar12 = 0;
                *(undefined4 *)(puVar13 + 2) = 0x1f;
                goto LAB_006f369c;
              }
LAB_006f3a34:
              func_0x006fd7ac();
              func_0x006fd5dc();
            }
            else {
              uVar15 = 0;
              puVar13 = (undefined8 *)0x0;
LAB_006f3744:
              lVar10 = *(long *)(param_1 + 0x20);
              if ((((lVar10 == 0) || (lVar8 = *(long *)(param_1 + 0x28), lVar8 == 0)) ||
                  ((*(long *)(param_1 + 0x10) == 0 ||
                   ((*(long *)(param_1 + 0x30) == 0 || (*(long *)(param_1 + 0x38) == 0)))))) ||
                 ((*(long *)(param_1 + 0x40) == 0 ||
                  ((FUN_006e81f0(lVar8,*(undefined8 *)(param_1 + 0x128)), (int)lVar8 == 0 ||
                   (FUN_006e81f0(lVar10,*(undefined8 *)(param_1 + 0x130)), (int)lVar10 == 0)))))) {
                func_0x006fe950(lVar6,lVar5,*(undefined8 *)(param_1 + 0x138),
                                *(undefined8 *)(param_1 + 8));
                iVar4 = (int)lVar6;
                lVar10 = lVar6;
joined_r0x006f3810:
                if (iVar4 != 0) {
                  if ((*(long *)(param_1 + 0x10) == 0) ||
                     (((func_0x006fd910(), lVar10 != 0 &&
                       (lVar6 = lVar10, FUN_006e5360(), (int)lVar6 != 0)) &&
                      (FUN_006e43a8(lVar10,lVar5), (int)lVar10 != 0)))) {
                    iVar4 = (int)lVar10;
                    if ((uVar2 >> 3 & 1) == 0) {
                      func_0x006fddb0();
                      func_0x006fdc7c();
                      if (iVar4 == 0) goto LAB_006f3a3c;
                    }
                    func_0x006fdc14();
                    FUN_006e4138();
                    if (iVar4 != 0) {
                      uVar12 = 1;
                      goto LAB_006f369c;
                    }
                  }
                  goto LAB_006f3a34;
                }
              }
              else {
                func_0x006fe918();
                func_0x006fd910();
                lVar8 = lVar10;
                func_0x006fd910();
                if ((lVar10 != 0) && (lVar8 != 0)) {
                  lVar11 = lVar8;
                  func_0x006fd9d0();
                  iVar4 = (int)lVar11;
                  FUN_006f3cfc();
                  if (iVar4 != 0) {
                    puVar1 = (undefined8 *)(param_1 + 0x140);
                    lStack0000000000000028 = *(long *)(param_1 + 0x128);
                    lVar11 = *(long *)(param_1 + 0x130);
                    uVar12 = *(undefined8 *)(param_1 + 0x20);
                    FUN_006e4264(uVar12,*(undefined8 *)(param_1 + 0x28));
                    iVar4 = (int)uVar12;
                    lStack0000000000000020 = lVar11;
                    if (-1 < iVar4) {
                      lStack0000000000000020 = lStack0000000000000028;
                      lStack0000000000000028 = lVar11;
                      puVar1 = (undefined8 *)(param_1 + 0x148);
                    }
                    uStack0000000000000000 = *puVar1;
                    lVar11 = *(long *)(param_1 + 0x120);
                    func_0x006fdff0(lStack0000000000000020);
                    if (iVar4 != 0) {
                      func_0x006fe950(lVar8,lVar10,uStack0000000000000000,
                                      lStack0000000000000028 + 0x18);
                      iVar4 = (int)lVar8;
                      if ((iVar4 != 0) && (func_0x006fdff0(lStack0000000000000028), iVar4 != 0)) {
                        func_0x006fe544();
                        func_0x006fe950();
                        if (iVar4 != 0) {
                          func_0x006fddb0();
                          FUN_006e50b0();
                          if (iVar4 != 0) {
                            func_0x006fddb0();
                            func_0x006fdc7c();
                            if (iVar4 != 0) {
                              func_0x006fddb0();
                              func_0x006fe670();
                              if (iVar4 != 0) {
                                func_0x006fddb0();
                                FUN_006e3548();
                                if (iVar4 != 0) {
                                  FUN_006e3fc8(lVar6,(long)*(int *)(lVar11 + 0x20));
                                  lVar10 = lVar6;
                                  func_0x006fdbd0();
                                  iVar4 = (int)lVar6;
                                  goto joined_r0x006f3810;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                func_0x006fdbd0();
              }
            }
LAB_006f3a3c:
            uVar12 = 0;
            goto LAB_006f369c;
          }
          func_0x006fd834();
        }
      }
      else {
        func_0x006fd834();
      }
      goto LAB_006f368c;
    }
  }
  uVar12 = 0;
  puVar13 = (undefined8 *)0x0;
  uVar15 = 0;
LAB_006f369c:
  func_0x006fdbd0();
  func_0x006fdda8();
  if (puVar13 == (undefined8 *)0x0) {
    return uVar12;
  }
  if (uVar15 != 0x400) {
    func_0x006fe680();
    *(undefined1 *)(*(long *)(param_1 + 0x168) + (ulong)uVar15) = 0;
    func_0x006fe688();
    return uVar12;
  }
  func_0x006f18dc(puVar13);
  return uVar12;
}



/* Entry: 006f3c1c; end: 006f3cfb;  */

undefined8 FUN_006f3c1c(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  int in_w6;
  ulong unaff_x19;
  ulong *unaff_x20;
  undefined8 uVar3;
  
  func_0x006fe858();
  func_0x006fe490();
  FUN_006f22d4();
  if (unaff_x19 < (param_1 & 0xffffffff)) {
    func_0x006fd834();
    func_0x006fd5dc();
    return 0;
  }
  uVar2 = param_1 & 0xffffffff;
  FUN_00701e90();
  if (uVar2 == 0) {
    func_0x006fd63c();
LAB_006f3ce4:
    func_0x006fd5dc();
  }
  else {
    if (in_w6 == 3) {
      func_0x006fe2c8();
      iVar1 = (int)uVar2;
      FUN_006f1b30();
    }
    else {
      if (in_w6 != 1) {
        func_0x006fd834();
        goto LAB_006f3ce4;
      }
      func_0x006fe2c8();
      iVar1 = (int)uVar2;
      FUN_006f1908();
    }
    if (iVar1 != 0) {
      func_0x006fdc14();
      FUN_006f35d0();
      if (iVar1 != 0) {
        *unaff_x20 = param_1 & 0xffffffff;
        uVar3 = 1;
        goto LAB_006f3cec;
      }
    }
  }
  uVar3 = 0;
LAB_006f3cec:
  func_0x006fdb84();
  return uVar3;
}



/* Entry: 006f3cfc; end: 006f3ec7;  */

undefined8 FUN_006f3cfc(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  undefined8 uVar6;
  long lVar7;
  
  func_0x006fda04();
  func_0x00706464(param_1 + 0x58);
  bVar1 = *(byte *)(unaff_x19 + 0x178);
  func_0x0070649c(unaff_x19 + 0x58);
  if ((bVar1 & 1) != 0) {
    return 1;
  }
  func_0x006fe680();
  if ((*(byte *)(unaff_x19 + 0x178) & 1) == 0) {
    lVar3 = *(long *)(unaff_x19 + 0x120);
    if (lVar3 == 0) {
      lVar3 = *(long *)(unaff_x19 + 8);
      func_0x006fe3b0();
      *(long *)(unaff_x19 + 0x120) = lVar3;
      if (lVar3 != 0) goto LAB_006f3d50;
      goto LAB_006f3eb4;
    }
LAB_006f3d50:
    if (*(long *)(unaff_x19 + 0x18) != 0) {
      lVar4 = unaff_x19 + 0x138;
      FUN_006fd044(lVar4,*(long *)(unaff_x19 + 0x18),*(undefined4 *)(lVar3 + 0x20));
      if ((int)lVar4 == 0) goto LAB_006f3eb4;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((lVar3 != 0) && (*(long *)(unaff_x19 + 0x28) != 0)) {
      lVar4 = *(long *)(unaff_x19 + 0x128);
      if (*(long *)(unaff_x19 + 0x128) == 0) {
        FUN_006e5680();
        *(long *)(unaff_x19 + 0x128) = lVar3;
        lVar4 = lVar3;
        if (lVar3 == 0) goto LAB_006f3eb4;
      }
      lVar7 = *(long *)(unaff_x19 + 0x130);
      if (*(long *)(unaff_x19 + 0x130) == 0) {
        lVar3 = *(long *)(unaff_x19 + 0x28);
        FUN_006e5680();
        *(long *)(unaff_x19 + 0x130) = lVar3;
        lVar7 = lVar3;
        if (lVar3 == 0) goto LAB_006f3eb4;
      }
      lVar5 = *(long *)(unaff_x19 + 0x30);
      if ((lVar5 != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
        if (*(long *)(unaff_x19 + 0x40) == 0) {
          FUN_006e3c80();
          if ((lVar3 != 0) &&
             (lVar5 = lVar3,
             FUN_006e6a8c(lVar3,*(undefined8 *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x20))
             , (int)lVar5 != 0)) {
            *(long *)(unaff_x19 + 0x40) = lVar3;
            lVar5 = *(long *)(unaff_x19 + 0x30);
            goto LAB_006f3dcc;
          }
          goto LAB_006f3eb0;
        }
LAB_006f3dcc:
        lVar3 = unaff_x19 + 0x140;
        FUN_006fd044(lVar3,lVar5,*(undefined4 *)(lVar4 + 0x20));
        if ((int)lVar3 != 0) {
          lVar3 = unaff_x19 + 0x148;
          FUN_006fd044(lVar3,*(undefined8 *)(unaff_x19 + 0x38),*(undefined4 *)(lVar7 + 0x20));
          if ((int)lVar3 != 0) {
            if (*(long *)(unaff_x19 + 0x150) != 0) goto LAB_006f3df8;
            FUN_006e3c80();
            lVar4 = *(long *)(unaff_x19 + 0x20);
            func_0x006fdd04();
            if ((int)lVar4 < 0) {
              if (lVar3 != 0) {
                func_0x006fe0d8();
                FUN_006e6a8c();
                if ((int)lVar4 != 0) {
                  func_0x006fe0cc();
                  goto LAB_006f3e9c;
                }
              }
            }
            else {
              lVar4 = lVar3;
              if (lVar3 != 0) {
LAB_006f3e9c:
                iVar2 = (int)lVar4;
                func_0x006fe660();
                if (iVar2 != 0) {
                  *(long *)(unaff_x19 + 0x150) = lVar3;
                  goto LAB_006f3df8;
                }
              }
            }
LAB_006f3eb0:
            FUN_006e3cd0(lVar3);
          }
        }
LAB_006f3eb4:
        uVar6 = 0;
        goto LAB_006f3eb8;
      }
    }
LAB_006f3df8:
    *(byte *)(unaff_x19 + 0x178) = *(byte *)(unaff_x19 + 0x178) | 1;
  }
  uVar6 = 1;
LAB_006f3eb8:
  func_0x006fe688();
  return uVar6;
}



/* Entry: 006f3ec8; end: 006f3ecf;  */

/* WARNING: Removing unreachable block (ram,0x006f439c) */
/* WARNING: Removing unreachable block (ram,0x006f43a4) */
/* WARNING: Removing unreachable block (ram,0x006f45fc) */
/* WARNING: Removing unreachable block (ram,0x006f43ac) */
/* WARNING: Removing unreachable block (ram,0x006f43b8) */
/* WARNING: Removing unreachable block (ram,0x006f43c4) */
/* WARNING: Removing unreachable block (ram,0x006f43e0) */
/* WARNING: Removing unreachable block (ram,0x006f43f0) */
/* WARNING: Removing unreachable block (ram,0x006f43fc) */
/* WARNING: Removing unreachable block (ram,0x006f4408) */
/* WARNING: Removing unreachable block (ram,0x006f4414) */
/* WARNING: Removing unreachable block (ram,0x006f4440) */
/* WARNING: Removing unreachable block (ram,0x006f444c) */
/* WARNING: Removing unreachable block (ram,0x006f445c) */
/* WARNING: Removing unreachable block (ram,0x006f4468) */
/* WARNING: Removing unreachable block (ram,0x006f447c) */
/* WARNING: Removing unreachable block (ram,0x006f4498) */
/* WARNING: Removing unreachable block (ram,0x006f44a4) */
/* WARNING: Removing unreachable block (ram,0x006f44b0) */
/* WARNING: Removing unreachable block (ram,0x006f44b4) */
/* WARNING: Removing unreachable block (ram,0x006f44c8) */
/* WARNING: Removing unreachable block (ram,0x006f44d0) */
/* WARNING: Removing unreachable block (ram,0x006f47b8) */
/* WARNING: Removing unreachable block (ram,0x006f44e4) */
/* WARNING: Removing unreachable block (ram,0x006f4518) */
/* WARNING: Removing unreachable block (ram,0x006f4520) */
/* WARNING: Removing unreachable block (ram,0x006f4524) */
/* WARNING: Removing unreachable block (ram,0x006f452c) */
/* WARNING: Removing unreachable block (ram,0x006f4534) */
/* WARNING: Removing unreachable block (ram,0x006f4544) */
/* WARNING: Removing unreachable block (ram,0x006f454c) */
/* WARNING: Removing unreachable block (ram,0x006f4558) */
/* WARNING: Removing unreachable block (ram,0x006f456c) */
/* WARNING: Removing unreachable block (ram,0x006f457c) */
/* WARNING: Removing unreachable block (ram,0x006f4588) */
/* WARNING: Removing unreachable block (ram,0x006f45a4) */
/* WARNING: Removing unreachable block (ram,0x006f45b8) */
/* WARNING: Removing unreachable block (ram,0x006f45c4) */
/* WARNING: Removing unreachable block (ram,0x006f45c8) */
/* WARNING: Removing unreachable block (ram,0x006f47cc) */
/* WARNING: Removing unreachable block (ram,0x006f47d0) */
/* WARNING: Removing unreachable block (ram,0x006f47d8) */
/* WARNING: Removing unreachable block (ram,0x006f47e0) */
/* WARNING: Removing unreachable block (ram,0x006f45d8) */
/* WARNING: Removing unreachable block (ram,0x006f45dc) */
/* WARNING: Removing unreachable block (ram,0x006f45e4) */
/* WARNING: Removing unreachable block (ram,0x006f45f0) */
/* WARNING: Removing unreachable block (ram,0x006f45f8) */
/* WARNING: Removing unreachable block (ram,0x006f47e8) */
/* WARNING: Removing unreachable block (ram,0x006f47f8) */
/* WARNING: Removing unreachable block (ram,0x006f4804) */
/* WARNING: Removing unreachable block (ram,0x006f4818) */
/* WARNING: Removing unreachable block (ram,0x006f4838) */
/* WARNING: Removing unreachable block (ram,0x006f45ac) */
/* WARNING: Removing unreachable block (ram,0x006f47bc) */
/* WARNING: Removing unreachable block (ram,0x006f4618) */
/* WARNING: Removing unreachable block (ram,0x006f4624) */
/* WARNING: Removing unreachable block (ram,0x006f4638) */
/* WARNING: Removing unreachable block (ram,0x006f4648) */
/* WARNING: Removing unreachable block (ram,0x006f4650) */
/* WARNING: Removing unreachable block (ram,0x006f4658) */
/* WARNING: Removing unreachable block (ram,0x006f46d8) */
/* WARNING: Removing unreachable block (ram,0x006f4678) */
/* WARNING: Removing unreachable block (ram,0x006f469c) */
/* WARNING: Removing unreachable block (ram,0x006f46c4) */
/* WARNING: Removing unreachable block (ram,0x006f46bc) */
/* WARNING: Removing unreachable block (ram,0x006f46d0) */
/* WARNING: Removing unreachable block (ram,0x006f46e4) */
/* WARNING: Removing unreachable block (ram,0x006f460c) */

undefined8 FUN_006f3ec8(long param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 in_ZR;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  uint uVar16;
  undefined1 auStack_a8 [24];
  ulong auStack_90 [5];
  undefined8 uStack_68;
  
  lVar14 = param_1;
  func_0x006fd5fc();
  uVar1 = param_2 & 0xffffff80;
  uVar3 = uVar1 >> 1;
  uVar16 = 0;
  uStack_68 = extraout_x8;
  do {
    FUN_006de5b0();
    FUN_006f2524();
    if (lVar14 == 0) goto LAB_006f434c;
    if ((int)uVar1 < 0x100) {
      lVar12 = lVar14;
      func_0x006fd834();
LAB_006f40a0:
      func_0x006fd5dc();
    }
    else {
      lVar5 = lVar14;
      func_0x006fe940();
      if (0x20 < (uint)lVar5) {
        func_0x006fd834();
        lVar12 = lVar5;
        goto LAB_006f40a0;
      }
      FUN_006e4450();
      if (lVar5 == 0) {
        func_0x006fd834();
        lVar12 = lVar5;
        goto LAB_006f40a0;
      }
      func_0x006fe8b8();
      func_0x006fd910();
      lVar6 = lVar5;
      func_0x006fd910();
      lVar7 = lVar6;
      func_0x006fd910();
      lVar8 = lVar7;
      func_0x006fd910();
      lVar9 = lVar8;
      func_0x006fd910();
      lVar10 = lVar9;
      func_0x006fd910();
      lVar12 = lVar10;
      if ((((lVar5 != 0) && (lVar6 != 0)) && (lVar7 != 0)) &&
         (((lVar8 != 0 && (lVar9 != 0)) &&
          ((lVar10 != 0 &&
           ((lVar12 = lVar9, FUN_006e805c(lVar9,uVar3 - 100), (int)lVar12 != 0 &&
            (lVar12 = lVar10, FUN_006e805c(lVar10,uVar3), (int)lVar12 != 0)))))))) {
        lVar12 = lVar14 + 8;
        func_0x006fd168();
        if ((int)lVar12 != 0) {
          lVar12 = lVar14 + 0x18;
          func_0x006fd168();
          if ((int)lVar12 != 0) {
            lVar12 = lVar14 + 0x10;
            func_0x006fd168();
            if ((int)lVar12 != 0) {
              lVar12 = lVar14 + 0x20;
              func_0x006fd168();
              if ((int)lVar12 != 0) {
                lVar12 = lVar14 + 0x28;
                func_0x006fd168();
                if ((int)lVar12 != 0) {
                  lVar12 = lVar14 + 0x30;
                  func_0x006fd168();
                  if ((int)lVar12 != 0) {
                    lVar12 = lVar14 + 0x38;
                    func_0x006fd168();
                    if ((int)lVar12 != 0) {
                      lVar11 = *(long *)(lVar14 + 0x10);
                      func_0x006e3d58(lVar11,param_3);
                      lVar12 = 0;
                      if ((lVar11 != 0) &&
                         (lVar12 = lVar8, FUN_006e3edc(lVar8,&UNK_00836560,0x20), (int)lVar12 != 0))
                      {
                        if (param_2 < 0x1000) {
                          lVar12 = lVar8;
                          FUN_006e4bd4(lVar8,lVar8,0x800 - (uVar1 >> 1));
                          iVar4 = (int)lVar12;
joined_r0x006f40f4:
                          if (iVar4 == 0) goto LAB_006f431c;
                        }
                        else if (0x1000 < uVar1) {
                          lVar12 = lVar8;
                          FUN_006e3774(lVar8,1);
                          if ((int)lVar12 == 0) goto LAB_006f431c;
                          lVar12 = lVar8;
                          FUN_006e4a24(lVar8,lVar8,uVar3 - 0x800);
                          iVar4 = (int)lVar12;
                          goto joined_r0x006f40f4;
                        }
                        do {
                          lVar12 = *(long *)(lVar14 + 0x20);
                          FUN_006fd198(lVar12,uVar3,*(undefined8 *)(lVar14 + 0x10),0,lVar8,lVar9,
                                       unaff_x20,param_4);
                          if ((int)lVar12 == 0) goto LAB_006f431c;
                          if (param_4 != 0) {
                            func_0x006fd894(*(undefined8 *)(param_4 + 8));
                            (*extraout_x8_00)();
                            if ((int)lVar12 == 0) goto LAB_006f431c;
                          }
                          lVar12 = *(long *)(lVar14 + 0x28);
                          FUN_006fd198(lVar12,uVar3,*(undefined8 *)(lVar14 + 0x10),
                                       *(undefined8 *)(lVar14 + 0x20),lVar8,lVar9,unaff_x20,param_4)
                          ;
                          if ((int)lVar12 == 0) goto LAB_006f431c;
                          if (param_4 != 0) {
                            lVar12 = 3;
                            (**(code **)(param_4 + 8))(3,1,param_4);
                            if ((int)lVar12 == 0) goto LAB_006f431c;
                          }
                          uVar15 = *(undefined8 *)(lVar14 + 0x20);
                          uVar2 = *(undefined8 *)(lVar14 + 0x28);
                          uVar13 = uVar15;
                          FUN_006e4264();
                          if ((int)uVar13 < 0) {
                            *(undefined8 *)(lVar14 + 0x20) = uVar2;
                            *(undefined8 *)(lVar14 + 0x28) = uVar15;
                            uVar15 = uVar2;
                          }
                          FUN_006e3dac();
                          lVar11 = lVar6;
                          FUN_006e3a38(lVar6,uVar15,uVar13);
                          lVar12 = lVar11;
                          if ((int)lVar11 == 0) goto LAB_006f431c;
                          uVar15 = *(undefined8 *)(lVar14 + 0x28);
                          FUN_006e3dac();
                          lVar12 = lVar7;
                          FUN_006e3a38(lVar7,uVar15,lVar11);
                          if ((int)lVar12 == 0) goto LAB_006f431c;
                          func_0x006fe918();
                          func_0x006fd910();
                          lVar11 = lVar12;
                          if ((((lVar12 == 0) ||
                               (lVar11 = lVar5, func_0x006fe670(lVar5,lVar6,lVar7), (int)lVar11 == 0
                               )) || (lVar11 = lVar12,
                                     FUN_006e6b3c(lVar12,auStack_90,lVar6,lVar7,unaff_x20),
                                     (int)lVar11 == 0)) ||
                             (lVar11 = lVar5, func_0x006fe70c(lVar5,0,lVar5,lVar12,0),
                             (int)lVar11 == 0)) {
                            lVar12 = lVar11;
                            func_0x006fdbd0();
                            goto LAB_006f431c;
                          }
                          lVar11 = lVar5;
                          FUN_006e6d60(lVar5,lVar5,auStack_90[0] & 0xffffffff,unaff_x20);
                          lVar12 = lVar11;
                          func_0x006fdbd0();
                          if ((int)lVar11 == 0) goto LAB_006f431c;
                          lVar12 = *(long *)(lVar14 + 0x18);
                          FUN_006e6518(lVar12,auStack_a8,*(undefined8 *)(lVar14 + 0x10),lVar5,
                                       unaff_x20);
                          if ((int)lVar12 == 0) goto LAB_006f431c;
                          uVar15 = *(undefined8 *)(lVar14 + 0x18);
                          FUN_006e4264(uVar15,lVar10);
                        } while ((int)uVar15 < 1);
                        lVar12 = *(long *)(lVar14 + 8);
                        func_0x006fe670(lVar12,*(undefined8 *)(lVar14 + 0x20),
                                        *(undefined8 *)(lVar14 + 0x28));
                        if ((int)lVar12 != 0) {
                          lVar12 = 0;
                          func_0x006fe70c(0,*(undefined8 *)(lVar14 + 0x30),
                                          *(undefined8 *)(lVar14 + 0x18),lVar6,uVar3);
                          if ((int)lVar12 != 0) {
                            lVar12 = 0;
                            func_0x006fe70c(0,*(undefined8 *)(lVar14 + 0x38),
                                            *(undefined8 *)(lVar14 + 0x18),lVar7,uVar3);
                            if ((int)lVar12 != 0) {
                              FUN_006e374c(*(undefined8 *)(lVar14 + 8));
                              lVar12 = *(long *)(lVar14 + 8);
                              FUN_006e3e84();
                              in_ZR = (uint)lVar12 == uVar1;
                              if ((bool)in_ZR) {
                                func_0x006fd9d0();
                                FUN_006f3cfc();
                                if (((int)lVar12 != 0) &&
                                   (lVar12 = lVar14, FUN_006f3170(), (int)lVar12 != 0))
                                goto LAB_006f438c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_006f431c:
      func_0x006fd834();
      func_0x006fd5dc();
      func_0x006fdbd0();
      func_0x006fdda8();
    }
    FUN_006de598();
    FUN_006f2614();
    in_ZR = uVar16 < 3 && ((uint)lVar12 & 0xff000fff) == 0x400008d;
    unaff_x20 = lVar12;
    uVar16 = uVar16 + 1;
  } while ((bool)in_ZR);
  lVar14 = 0;
LAB_006f434c:
  uVar15 = 0;
  while( true ) {
    FUN_006f2614(lVar14);
    func_0x006fd534(uStack_68);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_006f438c:
    func_0x006fdbd0();
    func_0x006fdda8();
    FUN_006fd110(param_1 + 8,lVar14 + 8);
    FUN_006fd110(param_1 + 0x10,lVar14 + 0x10);
    FUN_006fd110(param_1 + 0x18,lVar14 + 0x18);
    FUN_006fd110(param_1 + 0x20,lVar14 + 0x20);
    FUN_006fd110(param_1 + 0x28,lVar14 + 0x28);
    FUN_006fd110(param_1 + 0x30,lVar14 + 0x30);
    FUN_006fd110(param_1 + 0x38,lVar14 + 0x38);
    FUN_006fd110(param_1 + 0x40,lVar14 + 0x40);
    func_0x006fd13c(param_1 + 0x120,lVar14 + 0x120);
    func_0x006fd13c(param_1 + 0x128,lVar14 + 0x128);
    func_0x006fd13c(param_1 + 0x130,lVar14 + 0x130);
    FUN_006fd110(param_1 + 0x138,lVar14 + 0x138);
    FUN_006fd110(param_1 + 0x140,lVar14 + 0x140);
    FUN_006fd110(param_1 + 0x148,lVar14 + 0x148);
    FUN_006fd110(param_1 + 0x150,lVar14 + 0x150);
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) & 0xfe | *(byte *)(lVar14 + 0x178) & 1;
    uVar15 = 1;
  }
  return uVar15;
}



/* Entry: 006f3ed0; end: 006f483f;  */

undefined8 FUN_006f3ed0(long *param_1,uint param_2,undefined8 param_3,long param_4,int param_5)

{
  long lVar1;
  bool bVar2;
  undefined1 in_ZR;
  int iVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long *plVar24;
  long *unaff_x20;
  undefined8 uVar25;
  bool bVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  plVar24 = param_1;
  func_0x006fd5fc();
  uVar32 = param_2 & 0xffffff80;
  uVar31 = uVar32 >> 1;
  uVar30 = 0;
  uStack_68 = extraout_x8;
  do {
    FUN_006de5b0();
    FUN_006f2524();
    if (plVar24 == (long *)0x0) goto LAB_006f434c;
    if ((int)uVar32 < 0x100) {
      plVar12 = plVar24;
      func_0x006fd834();
LAB_006f40a0:
      func_0x006fd5dc();
    }
    else {
      plVar5 = plVar24;
      func_0x006fe940();
      if (0x20 < (uint)plVar5) {
        func_0x006fd834();
        plVar12 = plVar5;
        goto LAB_006f40a0;
      }
      FUN_006e4450();
      if (plVar5 == (long *)0x0) {
        func_0x006fd834();
        plVar12 = plVar5;
        goto LAB_006f40a0;
      }
      func_0x006fe8b8();
      func_0x006fd910();
      plVar6 = plVar5;
      func_0x006fd910();
      plVar7 = plVar6;
      func_0x006fd910();
      plVar8 = plVar7;
      func_0x006fd910();
      plVar9 = plVar8;
      func_0x006fd910();
      plVar10 = plVar9;
      func_0x006fd910();
      plVar12 = plVar10;
      if ((((plVar5 != (long *)0x0) && (plVar6 != (long *)0x0)) && (plVar7 != (long *)0x0)) &&
         (((plVar8 != (long *)0x0 && (plVar9 != (long *)0x0)) &&
          ((plVar10 != (long *)0x0 &&
           ((plVar12 = plVar9, FUN_006e805c(plVar9,uVar31 - 100), (int)plVar12 != 0 &&
            (plVar12 = plVar10, FUN_006e805c(plVar10,uVar31), (int)plVar12 != 0)))))))) {
        plVar12 = plVar24 + 1;
        func_0x006fd168();
        if ((int)plVar12 != 0) {
          plVar12 = plVar24 + 3;
          func_0x006fd168();
          if ((int)plVar12 != 0) {
            plVar12 = plVar24 + 2;
            func_0x006fd168();
            if ((int)plVar12 != 0) {
              plVar12 = plVar24 + 4;
              func_0x006fd168();
              if ((int)plVar12 != 0) {
                plVar12 = plVar24 + 5;
                func_0x006fd168();
                if ((int)plVar12 != 0) {
                  plVar12 = plVar24 + 6;
                  func_0x006fd168();
                  if ((int)plVar12 != 0) {
                    plVar12 = plVar24 + 7;
                    func_0x006fd168();
                    if ((int)plVar12 != 0) {
                      lVar11 = plVar24[2];
                      func_0x006e3d58(lVar11,param_3);
                      plVar12 = (long *)0x0;
                      if ((lVar11 != 0) &&
                         (plVar12 = plVar8, FUN_006e3edc(plVar8,&UNK_00836560,0x20),
                         (int)plVar12 != 0)) {
                        if (param_2 < 0x1000) {
                          plVar12 = plVar8;
                          FUN_006e4bd4(plVar8,plVar8,0x800 - (uVar32 >> 1));
                          iVar4 = (int)plVar12;
joined_r0x006f40f4:
                          if (iVar4 == 0) goto LAB_006f431c;
                        }
                        else if (0x1000 < uVar32) {
                          plVar12 = plVar8;
                          FUN_006e3774(plVar8,1);
                          if ((int)plVar12 == 0) goto LAB_006f431c;
                          plVar12 = plVar8;
                          FUN_006e4a24(plVar8,plVar8,uVar31 - 0x800);
                          iVar4 = (int)plVar12;
                          goto joined_r0x006f40f4;
                        }
                        do {
                          plVar12 = (long *)plVar24[4];
                          FUN_006fd198(plVar12,uVar31,plVar24[2],0,plVar8,plVar9,unaff_x20,param_4);
                          if ((int)plVar12 == 0) goto LAB_006f431c;
                          if (param_4 != 0) {
                            func_0x006fd894(*(undefined8 *)(param_4 + 8));
                            (*extraout_x8_00)();
                            if ((int)plVar12 == 0) goto LAB_006f431c;
                          }
                          plVar12 = (long *)plVar24[5];
                          FUN_006fd198(plVar12,uVar31,plVar24[2],plVar24[4],plVar8,plVar9,unaff_x20,
                                       param_4);
                          if ((int)plVar12 == 0) goto LAB_006f431c;
                          if (param_4 != 0) {
                            plVar12 = (long *)((long)&MACH_HEADER.magic + 3);
                            (**(code **)(param_4 + 8))(3,1,param_4);
                            if ((int)plVar12 == 0) goto LAB_006f431c;
                          }
                          lVar11 = plVar24[4];
                          lVar1 = plVar24[5];
                          lVar13 = lVar11;
                          FUN_006e4264();
                          if ((int)lVar13 < 0) {
                            plVar24[4] = lVar1;
                            plVar24[5] = lVar11;
                            lVar11 = lVar1;
                          }
                          FUN_006e3dac();
                          plVar14 = plVar6;
                          FUN_006e3a38(plVar6,lVar11,lVar13);
                          plVar12 = plVar14;
                          if ((int)plVar14 == 0) goto LAB_006f431c;
                          lVar11 = plVar24[5];
                          FUN_006e3dac();
                          plVar12 = plVar7;
                          FUN_006e3a38(plVar7,lVar11,plVar14);
                          if ((int)plVar12 == 0) goto LAB_006f431c;
                          func_0x006fe918();
                          func_0x006fd910();
                          plVar14 = plVar12;
                          if ((((plVar12 == (long *)0x0) ||
                               (plVar14 = plVar5, func_0x006fe670(plVar5,plVar6,plVar7),
                               (int)plVar14 == 0)) ||
                              (plVar14 = plVar12,
                              FUN_006e6b3c(plVar12,&uStack_90,plVar6,plVar7,unaff_x20),
                              (int)plVar14 == 0)) ||
                             (plVar14 = plVar5, func_0x006fe70c(plVar5,0,plVar5,plVar12,0),
                             (int)plVar14 == 0)) {
                            plVar12 = plVar14;
                            func_0x006fdbd0();
                            goto LAB_006f431c;
                          }
                          plVar14 = plVar5;
                          FUN_006e6d60(plVar5,plVar5,uStack_90 & 0xffffffff,unaff_x20);
                          plVar12 = plVar14;
                          func_0x006fdbd0();
                          if ((int)plVar14 == 0) goto LAB_006f431c;
                          plVar12 = (long *)plVar24[3];
                          FUN_006e6518(plVar12,&uStack_a8,plVar24[2],plVar5,unaff_x20);
                          if ((int)plVar12 == 0) goto LAB_006f431c;
                          lVar11 = plVar24[3];
                          FUN_006e4264(lVar11,plVar10);
                        } while ((int)lVar11 < 1);
                        plVar12 = (long *)plVar24[1];
                        func_0x006fe670(plVar12,plVar24[4],plVar24[5]);
                        if ((int)plVar12 != 0) {
                          plVar12 = (long *)0x0;
                          func_0x006fe70c(0,plVar24[6],plVar24[3],plVar6,uVar31);
                          if ((int)plVar12 != 0) {
                            plVar12 = (long *)0x0;
                            func_0x006fe70c(0,plVar24[7],plVar24[3],plVar7,uVar31);
                            if ((int)plVar12 != 0) {
                              FUN_006e374c(plVar24[1]);
                              plVar12 = (long *)plVar24[1];
                              FUN_006e3e84();
                              in_ZR = (uint)plVar12 == uVar32;
                              if ((bool)in_ZR) {
                                func_0x006fd9d0();
                                FUN_006f3cfc();
                                if (((int)plVar12 != 0) &&
                                   (plVar12 = plVar24, FUN_006f3170(), (int)plVar12 != 0))
                                goto LAB_006f438c;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_006f431c:
      func_0x006fd834();
      func_0x006fd5dc();
      func_0x006fdbd0();
      func_0x006fdda8();
    }
    FUN_006de598();
    FUN_006f2614();
    in_ZR = uVar30 < 3 && ((uint)plVar12 & 0xff000fff) == 0x400008d;
    unaff_x20 = plVar12;
    uVar30 = uVar30 + 1;
  } while ((bool)in_ZR);
  plVar24 = (long *)0x0;
LAB_006f434c:
  uVar25 = 0;
  do {
    while( true ) {
      FUN_006f2614(plVar24);
      func_0x006fd534(uStack_68);
      if ((bool)in_ZR) {
        return uVar25;
      }
      ___stack_chk_fail();
LAB_006f438c:
      func_0x006fdbd0();
      func_0x006fdda8();
      if (param_5 != 0) break;
LAB_006f46e8:
      FUN_006fd110(param_1 + 1,plVar24 + 1);
      FUN_006fd110(param_1 + 2,plVar24 + 2);
      FUN_006fd110(param_1 + 3,plVar24 + 3);
      FUN_006fd110(param_1 + 4,plVar24 + 4);
      FUN_006fd110(param_1 + 5,plVar24 + 5);
      FUN_006fd110(param_1 + 6,plVar24 + 6);
      FUN_006fd110(param_1 + 7,plVar24 + 7);
      FUN_006fd110(param_1 + 8,plVar24 + 8);
      func_0x006fd13c(param_1 + 0x24,plVar24 + 0x24);
      func_0x006fd13c(param_1 + 0x25,plVar24 + 0x25);
      func_0x006fd13c(param_1 + 0x26,plVar24 + 0x26);
      FUN_006fd110(param_1 + 0x27,plVar24 + 0x27);
      FUN_006fd110(param_1 + 0x28,plVar24 + 0x28);
      FUN_006fd110(param_1 + 0x29,plVar24 + 0x29);
      FUN_006fd110(param_1 + 0x2a,plVar24 + 0x2a);
      *(byte *)(param_1 + 0x2f) = *(byte *)(param_1 + 0x2f) & 0xfe | *(byte *)(plVar24 + 0x2f) & 1;
      uVar25 = 1;
    }
    if ((*plVar24 != 0) && ((*(byte *)(*plVar24 + 0x48) & 1) != 0)) {
      func_0x006fd834();
      func_0x006fd5dc();
      goto LAB_006f434c;
    }
    plVar5 = plVar24;
    FUN_006f3170();
    if ((int)plVar5 == 0) goto LAB_006f434c;
    FUN_006e4450();
    if (plVar5 != (long *)0x0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      puVar28 = (undefined8 *)plVar24[2];
      func_0x006fe940();
      uVar32 = (int)plVar5 - 0x101;
      in_ZR = uVar32 == 0xffffff10;
      if (0xffffff0f < uVar32) {
        puVar27 = (undefined8 *)plVar24[1];
        in_ZR = *(int *)(puVar27 + 1) == 1;
        if ((((0 < *(int *)(puVar27 + 1)) && ((*(byte *)*puVar27 & 1) != 0)) &&
            (iVar4 = *(int *)(puVar28 + 1), in_ZR = iVar4 == 1, 0 < iVar4)) &&
           ((*(byte *)*puVar28 & 1) != 0)) {
          func_0x00706544(0xb29de0,0x6fd020);
          puVar28 = &uStack_a8;
          func_0x006fe678(puVar28,puVar27,0xb63ea8);
          if ((int)puVar28 != 0) {
            iVar4 = (int)&uStack_a8;
            FUN_006e435c();
            if (iVar4 != 0) {
              puVar28 = (undefined8 *)plVar24[1];
              in_ZR = *(int *)(puVar28 + 1) == 1;
              if ((0 < *(int *)(puVar28 + 1)) && ((*(byte *)*puVar28 & 1) != 0)) {
                puVar27 = puVar28;
                FUN_006e4320(puVar28,3);
                in_ZR = (int)puVar27 == 0;
                if (0 < (int)puVar27) {
                  puVar27 = puVar28;
                  FUN_006e3e84();
                  FUN_006e8bc0();
                  puVar15 = puVar27;
                  func_0x006fe918();
                  func_0x006fd910();
                  if (((puVar15 == (undefined8 *)0x0) ||
                      (puVar16 = puVar15, func_0x006fdf58(), puVar16 == (undefined8 *)0x0)) ||
                     (puVar16 = puVar15, func_0x006fe8d4(), (int)puVar16 == 0)) {
LAB_006f47b8:
                    puVar29 = (undefined8 *)0x0;
                  }
                  else {
                    uVar32 = 0xffffffff;
                    do {
                      uVar32 = uVar32 + 1;
                      puVar16 = puVar15;
                      func_0x006e5334(puVar15,uVar32);
                    } while ((int)puVar16 == 0);
                    func_0x006fd910();
                    if ((puVar16 == (undefined8 *)0x0) ||
                       (puVar17 = puVar16, FUN_006e4bd4(), (int)puVar17 == 0)) goto LAB_006f47b8;
                    func_0x006fd910();
                    puVar18 = puVar17;
                    func_0x006fd910();
                    puVar19 = puVar18;
                    func_0x006fd910();
                    puVar20 = puVar19;
                    func_0x006fd910();
                    puVar21 = puVar20;
                    func_0x006fd910();
                    puVar29 = (undefined8 *)0x0;
                    if ((((puVar17 != (undefined8 *)0x0) && (puVar18 != (undefined8 *)0x0)) &&
                        (puVar19 != (undefined8 *)0x0)) &&
                       ((puVar20 != (undefined8 *)0x0 && (puVar21 != (undefined8 *)0x0)))) {
                      puVar29 = puVar21;
                      func_0x006fdc54();
                      FUN_006e6234();
                      if (puVar29 != (undefined8 *)0x0) {
                        iVar4 = 1;
                        while ((in_ZR = iVar4 == (int)puVar27 + 1, !(bool)in_ZR &&
                               (puVar22 = puVar17, FUN_006e6a34(puVar17,2,puVar15),
                               (int)puVar22 != 0))) {
                          puVar22 = puVar18;
                          func_0x006fe678(puVar18,puVar17,puVar28);
                          iVar3 = (int)puVar22;
                          if (iVar3 == 0) break;
                          func_0x006fe98c();
                          in_ZR = iVar3 == 0;
                          if (0 < iVar3) break;
                          puVar22 = puVar19;
                          func_0x006fe108(puVar19,puVar17,puVar16);
                          iVar3 = (int)puVar22;
                          FUN_006e5360();
                          if (iVar3 == 0) break;
                          func_0x006fe824();
                          if ((iVar3 == 0) &&
                             (puVar22 = puVar19, func_0x006fdd04(), (int)puVar22 != 0)) {
                            uVar31 = 0;
LAB_006f45c8:
                            func_0x006fe73c();
                            uVar31 = uVar31 + 1;
                            in_ZR = uVar31 == uVar32;
                            if (uVar32 <= uVar31) {
                              if (((puVar22 != (undefined8 *)0x0) &&
                                  (func_0x006fde7c(), (int)puVar22 != 0)) &&
                                 ((func_0x006fe824(), (int)puVar22 != 0 ||
                                  (func_0x006fe73c(), puVar22 != (undefined8 *)0x0))))
                              goto LAB_006f47e8;
                              break;
                            }
                            if ((puVar22 == (undefined8 *)0x0) ||
                               (func_0x006fde7c(), (int)puVar22 == 0)) break;
                            puVar22 = puVar19;
                            func_0x006fdd04();
                            if ((int)puVar22 != 0) goto code_r0x006f45f0;
                          }
                          iVar4 = iVar4 + 1;
                        }
                      }
                    }
                  }
LAB_006f47bc:
                  FUN_006e5880(puVar29);
                  func_0x006fdbd0();
                  goto LAB_006f4624;
                }
              }
              func_0x006fd894();
              func_0x006fd5dc();
            }
          }
        }
      }
LAB_006f4624:
      func_0x006fd834();
      func_0x006fd5dc();
      bVar2 = false;
      bVar26 = true;
LAB_006f4638:
      func_0x006e3cd0(&uStack_a8);
      func_0x006fdda8();
      if (((!bVar26) && (plVar24[3] != 0)) && (plVar24[4] != 0)) {
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        plVar5 = plVar24;
        FUN_006f22d4();
        uStack_ac = SUB84(plVar5,0);
        uVar23 = (ulong)plVar5 & 0xffffffff;
        FUN_00701e90();
        if (uVar23 == 0) {
          func_0x006fd520(4);
          bVar2 = false;
        }
        else {
          iVar4 = 0x2a0;
          FUN_006f2b4c(0x2a0,&uStack_90,0x20,uVar23,&uStack_ac,plVar24);
          if (iVar4 == 0) {
LAB_006f46c4:
            func_0x006fd7ac();
            func_0x006fd5dc();
            bVar2 = false;
          }
          else {
            iVar4 = 0x2a0;
            FUN_006f2d0c(0x2a0,&uStack_90,0x20,uVar23,uStack_ac,plVar24);
            if (iVar4 == 0) goto LAB_006f46c4;
            bVar2 = true;
          }
          func_0x006fe910();
        }
      }
      if (bVar2) goto LAB_006f46e8;
      goto LAB_006f434c;
    }
    func_0x006fd520(4);
    uVar25 = 0;
  } while( true );
code_r0x006f45f0:
  func_0x006fe824();
  if ((int)puVar22 != 0) {
LAB_006f47e8:
    puVar27 = puVar21;
    func_0x006e3d58(puVar21,puVar20);
    if ((puVar27 == (undefined8 *)0x0) || (puVar27 = puVar21, func_0x006fe8d4(), (int)puVar27 == 0))
    goto LAB_006f47bc;
    func_0x006fe678(puVar18,puVar21,puVar28);
    iVar4 = (int)puVar18;
    if (iVar4 == 0) goto LAB_006f47bc;
    bVar2 = true;
    func_0x006fe98c();
    FUN_006e5880(puVar29);
    func_0x006fdbd0();
    in_ZR = iVar4 == 0;
    if (0 < iVar4) goto LAB_006f4624;
    bVar26 = false;
    goto LAB_006f4638;
  }
  goto LAB_006f45c8;
}



/* Entry: 006f4840; end: 006f4863;  */

void FUN_006f4840(void)

{
  uRam0000000000b6cdb8 = 0;
  uRam0000000000b6cdb0 = 0;
  uRam0000000000b6cdc8 = 0;
  uRam0000000000b6cdc0 = 0;
  uRam0000000000b6cd98 = 0;
  uRam0000000000b6cd90 = 0;
  uRam0000000000b6cda8 = 0;
  uRam0000000000b6cda0 = 0;
  uRam0000000000b6cd88 = 0;
  uRam0000000000b6cd80 = 0x100000000;
  return;
}



/* Entry: 006f4864; end: 006f488b;  */

undefined8 FUN_006f4864(void)

{
  func_0x006fe460();
  func_0x006febf8();
  FUN_006efff4();
  return 1;
}



/* Entry: 006f488c; end: 006f48f3;  */

undefined8 FUN_006f488c(void)

{
  uint uVar1;
  uint *unaff_x19;
  uint *unaff_x20;
  
  func_0x006fd8fc();
  func_0x006febf8();
  func_0x006f0108();
  uVar1 = (*unaff_x19 & 0xff00ff00) >> 8 | (*unaff_x19 & 0xff00ff) << 8;
  *unaff_x20 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[1] & 0xff00ff00) >> 8 | (unaff_x19[1] & 0xff00ff) << 8;
  unaff_x20[1] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[2] & 0xff00ff00) >> 8 | (unaff_x19[2] & 0xff00ff) << 8;
  unaff_x20[2] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[3] & 0xff00ff00) >> 8 | (unaff_x19[3] & 0xff00ff) << 8;
  unaff_x20[3] = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (unaff_x19[4] & 0xff00ff00) >> 8 | (unaff_x19[4] & 0xff00ff) << 8;
  unaff_x20[4] = uVar1 >> 0x10 | uVar1 << 0x10;
  return 1;
}



/* Entry: 006f48f4; end: 006f48fb;  */

void FUN_006f48f4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar3;
  uint uVar6;
  uint uVar9;
  
  lVar39 = 1;
  func_0x006fec68();
  uVar41 = param_1[3];
  uVar44 = param_1[4];
  uVar42 = *param_1;
  uVar40 = param_1[1];
  uVar43 = param_1[2];
  do {
    uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar12 = uVar40 >> 2 | uVar40 << 0x1e;
    uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = uVar44 + 0x5a827999 + (uVar42 >> 0x1b | uVar42 << 5) +
            (uVar43 & uVar40 | uVar41 & (uVar40 ^ 0xffffffff)) + uVar3;
    uVar13 = uVar42 >> 2 | uVar42 << 0x1e;
    uVar1 = uVar41 + 0x5a827999 +
            (uVar42 & (uVar40 >> 2 | uVar40 << 0x1e) | uVar43 & (uVar42 ^ 0xffffffff)) + uVar4 +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar5 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar7 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar43 + 0x5a827999 + uVar6 +
            (uVar2 & (uVar42 >> 2 | uVar42 << 0x1e) | uVar12 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar9 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar12 + 0x5a827999 + uVar7 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar13 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar1 = uVar13 + 0x5a827999 + uVar9 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar14 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar8 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar13 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar14 + uVar13 + 0x5a827999 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar15 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar18 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar15 + uVar14 + 0x5a827999 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar16 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar8 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar15 + 0x5a827999 + uVar16 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar12 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar20 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar8 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar5 = uVar16 + 0x5a827999 + uVar12 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar17 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
    uVar10 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = uVar6 ^ uVar3 ^ uVar16 ^ uVar10;
    uVar3 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
    uVar11 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar11 + 0x5a827999 + uVar17 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar18 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar3 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
    uVar17 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar17 + 0x5a827999 + uVar18 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar19 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
    uVar18 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar18 + 0x5a827999 + uVar19 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar20 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
    uVar19 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar23 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar19 + 0x5a827999 + uVar20 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar12 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar3 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
    uVar20 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar10 + 0x5a827999 + uVar12 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar21 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar7 ^ uVar4 ^ uVar11 ^ uVar20;
    uVar4 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar20 + 0x5a827999 + uVar21 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar22 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
    uVar21 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar6 = uVar9 ^ uVar6 ^ uVar17 ^ uVar21;
    uVar25 = uVar6 >> 0x1f | uVar6 << 1;
    uVar3 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar21 + 0x5a827999 + uVar22 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar23 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar8 >> 0x1f | uVar8 << 1) + 0x5a827999 + uVar23 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar24 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar7 = uVar13 ^ uVar7 ^ uVar18 ^ (uVar8 >> 0x1f | uVar8 << 1);
    uVar23 = uVar7 >> 0x1f | uVar7 << 1;
    uVar9 = uVar14 ^ uVar9 ^ uVar19 ^ (uVar12 >> 0x1f | uVar12 << 1);
    uVar5 = (uVar12 >> 0x1f | uVar12 << 1) + 0x5a827999 + uVar24 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar4 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar24 = uVar9 >> 0x1f | uVar9 << 1;
    uVar13 = uVar15 ^ uVar13 ^ uVar10 ^ (uVar6 >> 0x1f | uVar6 << 1);
    uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar27 = uVar13 >> 0x1f | uVar13 << 1;
    uVar2 = uVar25 + 0x5a827999 + uVar4 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar3 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar23 + 0x5a827999 + uVar3 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar22 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar29 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar14 = uVar16 ^ uVar14 ^ uVar20 ^ (uVar7 >> 0x1f | uVar7 << 1);
    uVar30 = uVar14 >> 0x1f | uVar14 << 1;
    uVar4 = uVar24 + 0x6ed9eba1 + uVar22 + (uVar26 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar2) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar15 = uVar11 ^ uVar15 ^ uVar21 ^ (uVar9 >> 0x1f | uVar9 << 1);
    uVar22 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar1 = uVar27 + 0x6ed9eba1 + (uVar1 >> 2 | uVar1 * 0x40000000) +
            (uVar28 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar31 = uVar15 >> 0x1f | uVar15 << 1;
    uVar16 = uVar17 ^ uVar16 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1);
    uVar2 = uVar30 + 0x6ed9eba1 + uVar26 + (uVar29 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar4) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar26 = uVar16 >> 0x1f | uVar16 << 1;
    uVar5 = uVar31 + 0x6ed9eba1 + uVar28 + (uVar22 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar11 = uVar18 ^ uVar11 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1);
    uVar3 = uVar26 + 0x6ed9eba1 + uVar29 + (uVar28 ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar4 = uVar11 >> 0x1f | uVar11 << 1;
    uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar4 + 0x6ed9eba1 + uVar22 + (uVar29 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar17 = uVar19 ^ uVar17 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1);
    uVar22 = uVar17 >> 0x1f | uVar17 << 1;
    uVar32 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar22 + 0x6ed9eba1 + uVar28 + (uVar32 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar18 = uVar10 ^ uVar18 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1);
    uVar28 = uVar18 >> 0x1f | uVar18 << 1;
    uVar33 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar28 + 0x6ed9eba1 + uVar29 + (uVar33 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar19 = uVar20 ^ uVar19 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1);
    uVar29 = uVar19 >> 0x1f | uVar19 << 1;
    uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar29 + 0x6ed9eba1 + uVar32 + (uVar34 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar10 = uVar21 ^ uVar10 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1);
    uVar32 = uVar10 >> 0x1f | uVar10 << 1;
    uVar35 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar32 + 0x6ed9eba1 + uVar33 + (uVar35 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar20 = uVar20 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar33 = uVar20 >> 0x1f | uVar20 << 1;
    uVar36 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar33 + 0x6ed9eba1 + uVar34 + (uVar36 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar21 = uVar21 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar34 = uVar21 >> 0x1f | uVar21 << 1;
    uVar37 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar34 + 0x6ed9eba1 + uVar35 + (uVar37 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar8 = uVar25 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar25 = uVar8 >> 0x1f | uVar8 << 1;
    uVar35 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar25 + 0x6ed9eba1 + uVar36 + (uVar35 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar12 = uVar23 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar23 = uVar12 >> 0x1f | uVar12 << 1;
    uVar36 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar23 + 0x6ed9eba1 + uVar37 + (uVar36 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar6 = uVar24 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
            (uVar21 >> 0x1f | uVar21 << 1);
    uVar24 = uVar6 >> 0x1f | uVar6 << 1;
    uVar37 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar24 + 0x6ed9eba1 + uVar35 + (uVar37 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar7 = uVar27 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar27 = uVar7 >> 0x1f | uVar7 << 1;
    uVar35 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar27 + 0x6ed9eba1 + uVar36 + (uVar35 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = uVar30 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar30 = uVar9 >> 0x1f | uVar9 << 1;
    uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar30 + 0x6ed9eba1 + uVar37 + (uVar36 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar13 = uVar31 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar6 >> 0x1f | uVar6 << 1);
    uVar31 = uVar13 >> 0x1f | uVar13 << 1;
    uVar37 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar31 + 0x6ed9eba1 + uVar35 + (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar14 = uVar26 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    uVar26 = uVar14 >> 0x1f | uVar14 << 1;
    uVar35 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar26 + 0x6ed9eba1 + uVar36 + (uVar35 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar15 = uVar4 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar9 >> 0x1f | uVar9 << 1);
    uVar36 = uVar15 >> 0x1f | uVar15 << 1;
    uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar36 + 0x6ed9eba1 + uVar37 + (uVar4 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar16 = uVar22 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar8 >> 0x1f | uVar8 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    uVar22 = uVar16 >> 0x1f | uVar16 << 1;
    uVar3 = uVar22 + 0x8f1bbcdc + uVar35 +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar11 = uVar28 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar28 = uVar11 >> 0x1f | uVar11 << 1;
    uVar4 = uVar28 + 0x8f1bbcdc + uVar4 +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar17 = uVar29 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar29 = uVar17 >> 0x1f | uVar17 << 1;
    uVar1 = uVar29 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar18 = uVar32 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar7 >> 0x1f | uVar7 << 1) ^
             (uVar16 >> 0x1f | uVar16 << 1);
    uVar32 = uVar18 >> 0x1f | uVar18 << 1;
    uVar2 = uVar32 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar19 = uVar33 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar9 >> 0x1f | uVar9 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar33 = uVar19 >> 0x1f | uVar19 << 1;
    uVar5 = uVar33 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar10 = uVar34 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar17 >> 0x1f | uVar17 << 1);
    uVar34 = uVar10 >> 0x1f | uVar10 << 1;
    uVar3 = uVar34 + 0x8f1bbcdc + (uVar3 >> 2 | uVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar4 >> 2 | uVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar20 = uVar25 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar25 = uVar20 >> 0x1f | uVar20 << 1;
    uVar4 = uVar25 + 0x8f1bbcdc + (uVar4 >> 2 | uVar4 * 0x40000000) +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar21 = uVar23 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar23 = uVar21 >> 0x1f | uVar21 << 1;
    uVar1 = uVar23 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar8 = uVar24 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar24 = uVar8 >> 0x1f | uVar8 << 1;
    uVar2 = uVar24 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar12 = uVar27 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar27 = uVar12 >> 0x1f | uVar12 << 1;
    uVar5 = uVar27 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar6 = uVar30 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
            (uVar21 >> 0x1f | uVar21 << 1);
    uVar30 = uVar6 >> 0x1f | uVar6 << 1;
    uVar3 = uVar30 + 0x8f1bbcdc + (uVar3 >> 2 | uVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar4 >> 2 | uVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = uVar31 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar31 = uVar7 >> 0x1f | uVar7 << 1;
    uVar4 = uVar31 + 0x8f1bbcdc + (uVar4 >> 2 | uVar4 * 0x40000000) +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar9 = uVar26 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar26 = uVar9 >> 0x1f | uVar9 << 1;
    uVar1 = uVar26 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar13 = uVar36 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar6 >> 0x1f | uVar6 << 1);
    uVar35 = uVar13 >> 0x1f | uVar13 << 1;
    uVar2 = uVar35 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar14 = uVar22 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    uVar22 = uVar14 >> 0x1f | uVar14 << 1;
    uVar5 = uVar22 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar15 = uVar28 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar9 >> 0x1f | uVar9 << 1);
    uVar28 = uVar15 >> 0x1f | uVar15 << 1;
    uVar3 = uVar28 + 0x8f1bbcdc + (uVar3 >> 2 | uVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar4 >> 2 | uVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar16 = uVar29 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar8 >> 0x1f | uVar8 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    uVar29 = uVar16 >> 0x1f | uVar16 << 1;
    uVar4 = uVar29 + 0x8f1bbcdc + (uVar4 >> 2 | uVar4 * 0x40000000) +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar11 = uVar32 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar32 = uVar11 >> 0x1f | uVar11 << 1;
    uVar1 = uVar32 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar17 = uVar33 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar33 = uVar17 >> 0x1f | uVar17 << 1;
    uVar2 = uVar33 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar18 = uVar34 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar7 >> 0x1f | uVar7 << 1) ^
             (uVar16 >> 0x1f | uVar16 << 1);
    uVar34 = uVar18 >> 0x1f | uVar18 << 1;
    uVar19 = uVar25 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar9 >> 0x1f | uVar9 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar25 = uVar19 >> 0x1f | uVar19 << 1;
    uVar5 = uVar34 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar25 + 0xca62c1d6 + (uVar3 >> 2 | uVar3 * 0x40000000) +
            (uVar36 ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar10 = uVar23 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar17 >> 0x1f | uVar17 << 1);
    uVar23 = uVar10 >> 0x1f | uVar10 << 1;
    uVar37 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar23 + 0xca62c1d6 + (uVar4 >> 2 | uVar4 * 0x40000000) +
            (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar4 = uVar24 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
            (uVar18 >> 0x1f | uVar18 << 1);
    uVar24 = uVar4 >> 0x1f | uVar4 << 1;
    uVar38 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar24 + 0xca62c1d6 + uVar36 + (uVar38 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar20 = uVar27 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar21 = uVar20 >> 0x1f | uVar20 << 1;
    uVar27 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar21 + 0xca62c1d6 + uVar37 + (uVar27 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar8 = uVar30 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar30 = uVar8 >> 0x1f | uVar8 << 1;
    uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar30 + 0xca62c1d6 + uVar38 + (uVar36 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar12 = uVar31 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar4 >> 0x1f | uVar4 << 1);
    uVar31 = uVar12 >> 0x1f | uVar12 << 1;
    uVar37 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar31 + 0xca62c1d6 + uVar27 + (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar6 = uVar26 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
            (uVar20 >> 0x1f | uVar20 << 1);
    uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar6 >> 0x1f | uVar6 << 1) + 0xca62c1d6 + uVar36 +
            (uVar26 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar7 = uVar35 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar27 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = (uVar7 >> 0x1f | uVar7 << 1) + 0xca62c1d6 + uVar37 +
            (uVar27 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = uVar22 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = (uVar9 >> 0x1f | uVar9 << 1) + 0xca62c1d6 + uVar26 +
            (uVar22 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar13 = uVar28 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar6 >> 0x1f | uVar6 << 1);
    uVar26 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar13 >> 0x1f | uVar13 << 1) + 0xca62c1d6 + uVar27 +
            (uVar26 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar14 = uVar29 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar4 >> 0x1f | uVar4 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar14 >> 0x1f | uVar14 << 1) + 0xca62c1d6 + uVar22 +
            (uVar27 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar15 = uVar32 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar9 >> 0x1f | uVar9 << 1);
    uVar22 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = (uVar15 >> 0x1f | uVar15 << 1) + 0xca62c1d6 + uVar26 +
            (uVar22 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar8 = uVar33 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar8 >> 0x1f | uVar8 << 1) ^
            (uVar13 >> 0x1f | uVar13 << 1);
    uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = (uVar8 >> 0x1f | uVar8 << 1) + 0xca62c1d6 + uVar27 +
            (uVar16 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar12 = uVar34 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar12 >> 0x1f | uVar12 << 1) + 0xca62c1d6 + uVar22 +
            (uVar11 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar6 = uVar25 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
            (uVar15 >> 0x1f | uVar15 << 1);
    uVar17 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar6 >> 0x1f | uVar6 << 1) + 0xca62c1d6 + uVar16 +
            (uVar17 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = uVar23 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar7 >> 0x1f | uVar7 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar7 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = (uVar8 >> 0x1f | uVar8 << 1) + 0xca62c1d6 + uVar11 +
            (uVar7 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar24 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar9 >> 0x1f | uVar9 << 1) ^
             (uVar12 >> 0x1f | uVar12 << 1);
    uVar9 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = (uVar12 >> 0x1f | uVar12 << 1) + 0xca62c1d6 + uVar17 +
            (uVar9 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar6 = uVar21 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
            (uVar6 >> 0x1f | uVar6 << 1);
    uVar13 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar6 >> 0x1f | uVar6 << 1) + 0xca62c1d6 + uVar7 +
            (uVar13 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar4 = uVar30 ^ (uVar4 >> 0x1f | uVar4 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar8 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar4 >> 0x1f | uVar4 << 1) + 0xca62c1d6 + uVar9 +
            (uVar8 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar4 = uVar31 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar40 = uVar2 + uVar40;
    uVar42 = uVar42 + 0xca62c1d6 + (uVar4 >> 0x1f | uVar4 << 1) + uVar13 +
             (uVar3 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar43 = (uVar1 >> 2 | uVar1 * 0x40000000) + uVar43;
    uVar41 = uVar3 + uVar41;
    uVar44 = uVar8 + uVar44;
    *param_1 = uVar42;
    param_1[1] = uVar40;
    param_1[2] = uVar43;
    param_1[3] = uVar41;
    param_1[4] = uVar44;
    param_2 = param_2 + 0x10;
    lVar39 = lVar39 + -1;
  } while (lVar39 != 0);
  return;
}



/* Entry: 006f48fc; end: 006f5b5b;  */

void FUN_006f48fc(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar3;
  uint uVar6;
  uint uVar9;
  
  func_0x006fec68();
  uVar40 = param_1[3];
  uVar43 = param_1[4];
  uVar41 = *param_1;
  uVar39 = param_1[1];
  uVar42 = param_1[2];
  do {
    uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
    uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar12 = uVar39 >> 2 | uVar39 << 0x1e;
    uVar2 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
    uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = uVar43 + 0x5a827999 + (uVar41 >> 0x1b | uVar41 << 5) +
            (uVar42 & uVar39 | uVar40 & (uVar39 ^ 0xffffffff)) + uVar3;
    uVar13 = uVar41 >> 2 | uVar41 << 0x1e;
    uVar1 = uVar40 + 0x5a827999 +
            (uVar41 & (uVar39 >> 2 | uVar39 << 0x1e) | uVar42 & (uVar41 ^ 0xffffffff)) + uVar4 +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar14 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar5 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
    uVar6 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
    uVar7 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar15 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar42 + 0x5a827999 + uVar6 +
            (uVar2 & (uVar41 >> 2 | uVar41 << 0x1e) | uVar12 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
    uVar9 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar16 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar12 + 0x5a827999 + uVar7 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar13 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar1 = uVar13 + 0x5a827999 + uVar9 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar14 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar8 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
    uVar13 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar17 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar14 + uVar13 + 0x5a827999 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar15 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
    uVar14 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar18 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar15 + uVar14 + 0x5a827999 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar16 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar8 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
    uVar15 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar15 + 0x5a827999 + uVar16 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar12 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar20 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar8 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
    uVar16 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar5 = uVar16 + 0x5a827999 + uVar12 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar17 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
    uVar10 = uVar8 >> 0x10 | uVar8 << 0x10;
    uVar8 = uVar6 ^ uVar3 ^ uVar16 ^ uVar10;
    uVar3 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
    uVar11 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar11 + 0x5a827999 + uVar17 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar18 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar3 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
    uVar17 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar21 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar17 + 0x5a827999 + uVar18 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar19 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar3 = (param_2[0xb] & 0xff00ff00) >> 8 | (param_2[0xb] & 0xff00ff) << 8;
    uVar18 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar18 + 0x5a827999 + uVar19 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar20 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = (param_2[0xc] & 0xff00ff00) >> 8 | (param_2[0xc] & 0xff00ff) << 8;
    uVar19 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar23 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar19 + 0x5a827999 + uVar20 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar12 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar3 = (param_2[0xe] & 0xff00ff00) >> 8 | (param_2[0xe] & 0xff00ff) << 8;
    uVar20 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar24 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar10 + 0x5a827999 + uVar12 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar21 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar7 ^ uVar4 ^ uVar11 ^ uVar20;
    uVar4 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar5 = uVar20 + 0x5a827999 + uVar21 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar22 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar3 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
    uVar21 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar6 = uVar9 ^ uVar6 ^ uVar17 ^ uVar21;
    uVar25 = uVar6 >> 0x1f | uVar6 << 1;
    uVar3 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar21 + 0x5a827999 + uVar22 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar23 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar22 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar8 >> 0x1f | uVar8 << 1) + 0x5a827999 + uVar23 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar24 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar7 = uVar13 ^ uVar7 ^ uVar18 ^ (uVar8 >> 0x1f | uVar8 << 1);
    uVar23 = uVar7 >> 0x1f | uVar7 << 1;
    uVar9 = uVar14 ^ uVar9 ^ uVar19 ^ (uVar12 >> 0x1f | uVar12 << 1);
    uVar5 = (uVar12 >> 0x1f | uVar12 << 1) + 0x5a827999 + uVar24 +
            (uVar2 & (uVar5 >> 2 | uVar5 * 0x40000000) | uVar4 & (uVar2 ^ 0xffffffff)) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar24 = uVar9 >> 0x1f | uVar9 << 1;
    uVar13 = uVar15 ^ uVar13 ^ uVar10 ^ (uVar6 >> 0x1f | uVar6 << 1);
    uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar27 = uVar13 >> 0x1f | uVar13 << 1;
    uVar2 = uVar25 + 0x5a827999 + uVar4 +
            (uVar1 & (uVar2 >> 2 | uVar2 * 0x40000000) | uVar3 & (uVar1 ^ 0xffffffff)) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar28 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar3 = uVar23 + 0x5a827999 + uVar3 +
            (uVar5 & (uVar1 >> 2 | uVar1 * 0x40000000) | uVar22 & (uVar5 ^ 0xffffffff)) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar29 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar14 = uVar16 ^ uVar14 ^ uVar20 ^ (uVar7 >> 0x1f | uVar7 << 1);
    uVar30 = uVar14 >> 0x1f | uVar14 << 1;
    uVar4 = uVar24 + 0x6ed9eba1 + uVar22 + (uVar26 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar2) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar15 = uVar11 ^ uVar15 ^ uVar21 ^ (uVar9 >> 0x1f | uVar9 << 1);
    uVar22 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar1 = uVar27 + 0x6ed9eba1 + (uVar1 >> 2 | uVar1 * 0x40000000) +
            (uVar28 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar3) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar31 = uVar15 >> 0x1f | uVar15 << 1;
    uVar16 = uVar17 ^ uVar16 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1);
    uVar2 = uVar30 + 0x6ed9eba1 + uVar26 + (uVar29 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar4) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar26 = uVar16 >> 0x1f | uVar16 << 1;
    uVar5 = uVar31 + 0x6ed9eba1 + uVar28 + (uVar22 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar28 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar11 = uVar18 ^ uVar11 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1);
    uVar3 = uVar26 + 0x6ed9eba1 + uVar29 + (uVar28 ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar4 = uVar11 >> 0x1f | uVar11 << 1;
    uVar29 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar4 + 0x6ed9eba1 + uVar22 + (uVar29 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar17 = uVar19 ^ uVar17 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1);
    uVar22 = uVar17 >> 0x1f | uVar17 << 1;
    uVar32 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar22 + 0x6ed9eba1 + uVar28 + (uVar32 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar18 = uVar10 ^ uVar18 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1);
    uVar28 = uVar18 >> 0x1f | uVar18 << 1;
    uVar33 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar28 + 0x6ed9eba1 + uVar29 + (uVar33 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar19 = uVar20 ^ uVar19 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1);
    uVar29 = uVar19 >> 0x1f | uVar19 << 1;
    uVar34 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar29 + 0x6ed9eba1 + uVar32 + (uVar34 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar10 = uVar21 ^ uVar10 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1);
    uVar32 = uVar10 >> 0x1f | uVar10 << 1;
    uVar35 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar32 + 0x6ed9eba1 + uVar33 + (uVar35 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar20 = uVar20 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar33 = uVar20 >> 0x1f | uVar20 << 1;
    uVar36 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar33 + 0x6ed9eba1 + uVar34 + (uVar36 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar21 = uVar21 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar34 = uVar21 >> 0x1f | uVar21 << 1;
    uVar37 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar34 + 0x6ed9eba1 + uVar35 + (uVar37 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar8 = uVar25 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar25 = uVar8 >> 0x1f | uVar8 << 1;
    uVar35 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar25 + 0x6ed9eba1 + uVar36 + (uVar35 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar12 = uVar23 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar23 = uVar12 >> 0x1f | uVar12 << 1;
    uVar36 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar23 + 0x6ed9eba1 + uVar37 + (uVar36 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar6 = uVar24 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
            (uVar21 >> 0x1f | uVar21 << 1);
    uVar24 = uVar6 >> 0x1f | uVar6 << 1;
    uVar37 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar24 + 0x6ed9eba1 + uVar35 + (uVar37 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar7 = uVar27 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar27 = uVar7 >> 0x1f | uVar7 << 1;
    uVar35 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar27 + 0x6ed9eba1 + uVar36 + (uVar35 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = uVar30 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar30 = uVar9 >> 0x1f | uVar9 << 1;
    uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar30 + 0x6ed9eba1 + uVar37 + (uVar36 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar13 = uVar31 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar6 >> 0x1f | uVar6 << 1);
    uVar31 = uVar13 >> 0x1f | uVar13 << 1;
    uVar37 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar31 + 0x6ed9eba1 + uVar35 + (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar14 = uVar26 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    uVar26 = uVar14 >> 0x1f | uVar14 << 1;
    uVar35 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar26 + 0x6ed9eba1 + uVar36 + (uVar35 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar15 = uVar4 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar9 >> 0x1f | uVar9 << 1);
    uVar36 = uVar15 >> 0x1f | uVar15 << 1;
    uVar4 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar36 + 0x6ed9eba1 + uVar37 + (uVar4 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar16 = uVar22 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar8 >> 0x1f | uVar8 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    uVar22 = uVar16 >> 0x1f | uVar16 << 1;
    uVar3 = uVar22 + 0x8f1bbcdc + uVar35 +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar11 = uVar28 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar28 = uVar11 >> 0x1f | uVar11 << 1;
    uVar4 = uVar28 + 0x8f1bbcdc + uVar4 +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar17 = uVar29 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar29 = uVar17 >> 0x1f | uVar17 << 1;
    uVar1 = uVar29 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar18 = uVar32 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar7 >> 0x1f | uVar7 << 1) ^
             (uVar16 >> 0x1f | uVar16 << 1);
    uVar32 = uVar18 >> 0x1f | uVar18 << 1;
    uVar2 = uVar32 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar19 = uVar33 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar9 >> 0x1f | uVar9 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar33 = uVar19 >> 0x1f | uVar19 << 1;
    uVar5 = uVar33 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar10 = uVar34 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar17 >> 0x1f | uVar17 << 1);
    uVar34 = uVar10 >> 0x1f | uVar10 << 1;
    uVar3 = uVar34 + 0x8f1bbcdc + (uVar3 >> 2 | uVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar4 >> 2 | uVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar20 = uVar25 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
             (uVar18 >> 0x1f | uVar18 << 1);
    uVar25 = uVar20 >> 0x1f | uVar20 << 1;
    uVar4 = uVar25 + 0x8f1bbcdc + (uVar4 >> 2 | uVar4 * 0x40000000) +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar21 = uVar23 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar23 = uVar21 >> 0x1f | uVar21 << 1;
    uVar1 = uVar23 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar8 = uVar24 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar24 = uVar8 >> 0x1f | uVar8 << 1;
    uVar2 = uVar24 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar12 = uVar27 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar20 >> 0x1f | uVar20 << 1);
    uVar27 = uVar12 >> 0x1f | uVar12 << 1;
    uVar5 = uVar27 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar6 = uVar30 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
            (uVar21 >> 0x1f | uVar21 << 1);
    uVar30 = uVar6 >> 0x1f | uVar6 << 1;
    uVar3 = uVar30 + 0x8f1bbcdc + (uVar3 >> 2 | uVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar4 >> 2 | uVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar7 = uVar31 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar31 = uVar7 >> 0x1f | uVar7 << 1;
    uVar4 = uVar31 + 0x8f1bbcdc + (uVar4 >> 2 | uVar4 * 0x40000000) +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar9 = uVar26 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar26 = uVar9 >> 0x1f | uVar9 << 1;
    uVar1 = uVar26 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar13 = uVar36 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar6 >> 0x1f | uVar6 << 1);
    uVar35 = uVar13 >> 0x1f | uVar13 << 1;
    uVar2 = uVar35 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar14 = uVar22 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    uVar22 = uVar14 >> 0x1f | uVar14 << 1;
    uVar5 = uVar22 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar15 = uVar28 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar21 >> 0x1f | uVar21 << 1) ^
             (uVar9 >> 0x1f | uVar9 << 1);
    uVar28 = uVar15 >> 0x1f | uVar15 << 1;
    uVar3 = uVar28 + 0x8f1bbcdc + (uVar3 >> 2 | uVar3 * 0x40000000) +
            ((uVar2 | uVar1 >> 2 | uVar1 * 0x40000000) & (uVar4 >> 2 | uVar4 * 0x40000000) |
            uVar2 & (uVar1 >> 2 | uVar1 * 0x40000000)) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar16 = uVar29 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar8 >> 0x1f | uVar8 << 1) ^
             (uVar13 >> 0x1f | uVar13 << 1);
    uVar29 = uVar16 >> 0x1f | uVar16 << 1;
    uVar4 = uVar29 + 0x8f1bbcdc + (uVar4 >> 2 | uVar4 * 0x40000000) +
            ((uVar5 | uVar2 >> 2 | uVar2 * 0x40000000) & (uVar1 >> 2 | uVar1 * 0x40000000) |
            uVar5 & (uVar2 >> 2 | uVar2 * 0x40000000)) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar11 = uVar32 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar32 = uVar11 >> 0x1f | uVar11 << 1;
    uVar1 = uVar32 + 0x8f1bbcdc + (uVar1 >> 2 | uVar1 * 0x40000000) +
            ((uVar3 | uVar5 >> 2 | uVar5 * 0x40000000) & (uVar2 >> 2 | uVar2 * 0x40000000) |
            uVar3 & (uVar5 >> 2 | uVar5 * 0x40000000)) + (uVar4 >> 0x1b | uVar4 * 0x20);
    uVar17 = uVar33 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
             (uVar15 >> 0x1f | uVar15 << 1);
    uVar33 = uVar17 >> 0x1f | uVar17 << 1;
    uVar2 = uVar33 + 0x8f1bbcdc + (uVar2 >> 2 | uVar2 * 0x40000000) +
            ((uVar4 | uVar3 >> 2 | uVar3 * 0x40000000) & (uVar5 >> 2 | uVar5 * 0x40000000) |
            uVar4 & (uVar3 >> 2 | uVar3 * 0x40000000)) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar18 = uVar34 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar7 >> 0x1f | uVar7 << 1) ^
             (uVar16 >> 0x1f | uVar16 << 1);
    uVar34 = uVar18 >> 0x1f | uVar18 << 1;
    uVar19 = uVar25 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar9 >> 0x1f | uVar9 << 1) ^
             (uVar11 >> 0x1f | uVar11 << 1);
    uVar25 = uVar19 >> 0x1f | uVar19 << 1;
    uVar5 = uVar34 + 0x8f1bbcdc + (uVar5 >> 2 | uVar5 * 0x40000000) +
            ((uVar1 | uVar4 >> 2 | uVar4 * 0x40000000) & (uVar3 >> 2 | uVar3 * 0x40000000) |
            uVar1 & (uVar4 >> 2 | uVar4 * 0x40000000)) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar25 + 0xca62c1d6 + (uVar3 >> 2 | uVar3 * 0x40000000) +
            (uVar36 ^ (uVar4 >> 2 | uVar4 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar10 = uVar23 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
             (uVar17 >> 0x1f | uVar17 << 1);
    uVar23 = uVar10 >> 0x1f | uVar10 << 1;
    uVar37 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar23 + 0xca62c1d6 + (uVar4 >> 2 | uVar4 * 0x40000000) +
            (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar4 = uVar24 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
            (uVar18 >> 0x1f | uVar18 << 1);
    uVar24 = uVar4 >> 0x1f | uVar4 << 1;
    uVar38 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = uVar24 + 0xca62c1d6 + uVar36 + (uVar38 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) +
            (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar20 = uVar27 ^ (uVar21 >> 0x1f | uVar21 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
             (uVar19 >> 0x1f | uVar19 << 1);
    uVar21 = uVar20 >> 0x1f | uVar20 << 1;
    uVar27 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = uVar21 + 0xca62c1d6 + uVar37 + (uVar27 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) +
            (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar8 = uVar30 ^ (uVar8 >> 0x1f | uVar8 << 1) ^ (uVar16 >> 0x1f | uVar16 << 1) ^
            (uVar10 >> 0x1f | uVar10 << 1);
    uVar30 = uVar8 >> 0x1f | uVar8 << 1;
    uVar36 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar30 + 0xca62c1d6 + uVar38 + (uVar36 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) +
            (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar12 = uVar31 ^ (uVar12 >> 0x1f | uVar12 << 1) ^ (uVar11 >> 0x1f | uVar11 << 1) ^
             (uVar4 >> 0x1f | uVar4 << 1);
    uVar31 = uVar12 >> 0x1f | uVar12 << 1;
    uVar37 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = uVar31 + 0xca62c1d6 + uVar27 + (uVar37 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) +
            (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar6 = uVar26 ^ (uVar6 >> 0x1f | uVar6 << 1) ^ (uVar17 >> 0x1f | uVar17 << 1) ^
            (uVar20 >> 0x1f | uVar20 << 1);
    uVar26 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar6 >> 0x1f | uVar6 << 1) + 0xca62c1d6 + uVar36 +
            (uVar26 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar7 = uVar35 ^ (uVar7 >> 0x1f | uVar7 << 1) ^ (uVar18 >> 0x1f | uVar18 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar27 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = (uVar7 >> 0x1f | uVar7 << 1) + 0xca62c1d6 + uVar37 +
            (uVar27 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar9 = uVar22 ^ (uVar9 >> 0x1f | uVar9 << 1) ^ (uVar19 >> 0x1f | uVar19 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar22 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = (uVar9 >> 0x1f | uVar9 << 1) + 0xca62c1d6 + uVar26 +
            (uVar22 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar13 = uVar28 ^ (uVar13 >> 0x1f | uVar13 << 1) ^ (uVar10 >> 0x1f | uVar10 << 1) ^
             (uVar6 >> 0x1f | uVar6 << 1);
    uVar26 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar13 >> 0x1f | uVar13 << 1) + 0xca62c1d6 + uVar27 +
            (uVar26 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar14 = uVar29 ^ (uVar14 >> 0x1f | uVar14 << 1) ^ (uVar4 >> 0x1f | uVar4 << 1) ^
             (uVar7 >> 0x1f | uVar7 << 1);
    uVar27 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar14 >> 0x1f | uVar14 << 1) + 0xca62c1d6 + uVar22 +
            (uVar27 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar15 = uVar32 ^ (uVar15 >> 0x1f | uVar15 << 1) ^ (uVar20 >> 0x1f | uVar20 << 1) ^
             (uVar9 >> 0x1f | uVar9 << 1);
    uVar22 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = (uVar15 >> 0x1f | uVar15 << 1) + 0xca62c1d6 + uVar26 +
            (uVar22 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar8 = uVar33 ^ (uVar16 >> 0x1f | uVar16 << 1) ^ (uVar8 >> 0x1f | uVar8 << 1) ^
            (uVar13 >> 0x1f | uVar13 << 1);
    uVar16 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = (uVar8 >> 0x1f | uVar8 << 1) + 0xca62c1d6 + uVar27 +
            (uVar16 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar12 = uVar34 ^ (uVar11 >> 0x1f | uVar11 << 1) ^ (uVar12 >> 0x1f | uVar12 << 1) ^
             (uVar14 >> 0x1f | uVar14 << 1);
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar12 >> 0x1f | uVar12 << 1) + 0xca62c1d6 + uVar22 +
            (uVar11 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar6 = uVar25 ^ (uVar17 >> 0x1f | uVar17 << 1) ^ (uVar6 >> 0x1f | uVar6 << 1) ^
            (uVar15 >> 0x1f | uVar15 << 1);
    uVar17 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar6 >> 0x1f | uVar6 << 1) + 0xca62c1d6 + uVar16 +
            (uVar17 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar8 = uVar23 ^ (uVar18 >> 0x1f | uVar18 << 1) ^ (uVar7 >> 0x1f | uVar7 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar7 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar5 = (uVar8 >> 0x1f | uVar8 << 1) + 0xca62c1d6 + uVar11 +
            (uVar7 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar12 = uVar24 ^ (uVar19 >> 0x1f | uVar19 << 1) ^ (uVar9 >> 0x1f | uVar9 << 1) ^
             (uVar12 >> 0x1f | uVar12 << 1);
    uVar9 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = (uVar12 >> 0x1f | uVar12 << 1) + 0xca62c1d6 + uVar17 +
            (uVar9 ^ (uVar3 >> 2 | uVar3 * 0x40000000) ^ uVar2) + (uVar5 >> 0x1b | uVar5 * 0x20);
    uVar6 = uVar21 ^ (uVar10 >> 0x1f | uVar10 << 1) ^ (uVar13 >> 0x1f | uVar13 << 1) ^
            (uVar6 >> 0x1f | uVar6 << 1);
    uVar13 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar6 >> 0x1f | uVar6 << 1) + 0xca62c1d6 + uVar7 +
            (uVar13 ^ (uVar1 >> 2 | uVar1 * 0x40000000) ^ uVar5) + (uVar3 >> 0x1b | uVar3 * 0x20);
    uVar4 = uVar30 ^ (uVar4 >> 0x1f | uVar4 << 1) ^ (uVar14 >> 0x1f | uVar14 << 1) ^
            (uVar8 >> 0x1f | uVar8 << 1);
    uVar8 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar2 = (uVar4 >> 0x1f | uVar4 << 1) + 0xca62c1d6 + uVar9 +
            (uVar8 ^ (uVar2 >> 2 | uVar2 * 0x40000000) ^ uVar3) + (uVar1 >> 0x1b | uVar1 * 0x20);
    uVar4 = uVar31 ^ (uVar20 >> 0x1f | uVar20 << 1) ^ (uVar15 >> 0x1f | uVar15 << 1) ^
            (uVar12 >> 0x1f | uVar12 << 1);
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar39 = uVar2 + uVar39;
    uVar41 = uVar41 + 0xca62c1d6 + (uVar4 >> 0x1f | uVar4 << 1) + uVar13 +
             (uVar3 ^ (uVar5 >> 2 | uVar5 * 0x40000000) ^ uVar1) + (uVar2 >> 0x1b | uVar2 * 0x20);
    uVar42 = (uVar1 >> 2 | uVar1 * 0x40000000) + uVar42;
    uVar40 = uVar3 + uVar40;
    uVar43 = uVar8 + uVar43;
    *param_1 = uVar41;
    param_1[1] = uVar39;
    param_1[2] = uVar42;
    param_1[3] = uVar40;
    param_1[4] = uVar43;
    param_2 = param_2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



/* Entry: 006f5b5c; end: 006f5b8b;  */

undefined8 FUN_006f5b5c(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0xa54ff53a3c6ef372;
  *param_1 = 0xbb67ae856a09e667;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[2] = 0x9b05688c510e527f;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x20;
  return 1;
}



/* Entry: 006f5b8c; end: 006f5bb3;  */

undefined8 FUN_006f5b8c(void)

{
  func_0x006fe460();
  func_0x006feaf8();
  FUN_006efff4();
  return 1;
}



/* Entry: 006f5bb4; end: 006f6773;  */

uint * FUN_006f5bb4(uint *param_1,undefined1 (*param_2) [16],long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 in_ZR;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 extraout_x8;
  ulong uVar24;
  long extraout_x12;
  long lVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  uint *unaff_x19;
  uint *unaff_x20;
  int *piVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  func_0x006fd5fc();
  uStack_68 = extraout_x8;
  lVar25 = extraout_x12;
  while (param_3 != 0) {
    uVar6 = *param_1;
    uVar10 = param_1[1];
    uVar7 = param_1[2];
    uVar11 = param_1[3];
    uVar8 = param_1[4];
    uVar12 = param_1[5];
    uVar9 = param_1[6];
    uVar13 = param_1[7];
    auVar32 = NEON_rev32(*param_2,1);
    iVar1 = ((uVar8 >> 6 | uVar8 << 0x1a) ^ (uVar8 >> 0xb | uVar8 << 0x15) ^
            (uVar8 >> 0x19 | uVar8 << 7)) +
            uVar13 + (uVar9 & (uVar8 ^ 0xffffffff) | uVar12 & uVar8) + auVar32._0_4_ + 0x428a2f98;
    uVar29 = iVar1 + uVar11;
    uVar20 = ((uVar7 ^ uVar10) & uVar6 ^ uVar7 & uVar10) +
             ((uVar6 >> 2 | uVar6 << 0x1e) ^ (uVar6 >> 0xd | uVar6 << 0x13) ^
             (uVar6 >> 0x16 | uVar6 << 10)) + iVar1;
    iVar1 = uVar9 + auVar32._4_4_ + (uVar29 & uVar8 | uVar12 & (uVar29 ^ 0xffffffff)) + 0x71374491 +
            ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
            (uVar29 >> 0x19 | uVar29 * 0x80));
    uVar21 = iVar1 + uVar7;
    uVar22 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
             (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar10 ^ uVar6) ^ uVar10 & uVar6) +
             iVar1;
    iVar1 = uVar12 + auVar32._8_4_ + (uVar21 & uVar29 | uVar8 & (uVar21 ^ 0xffffffff)) + -0x4a3f0431
            + ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 0x19 | uVar21 * 0x80));
    uVar23 = iVar1 + uVar10;
    uVar26 = ((uVar22 >> 2 | uVar22 * 0x40000000) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
             (uVar22 >> 0x16 | uVar22 * 0x400)) + (uVar22 & (uVar20 ^ uVar6) ^ uVar20 & uVar6) +
             iVar1;
    iVar1 = uVar8 + auVar32._12_4_ + (uVar23 & uVar21 | uVar29 & (uVar23 ^ 0xffffffff)) +
            -0x164a245b +
            ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
            (uVar23 >> 0x19 | uVar23 * 0x80));
    uVar31 = iVar1 + uVar6;
    uVar2 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
            (uVar26 >> 0x16 | uVar26 * 0x400)) + (uVar26 & (uVar22 ^ uVar20) ^ uVar22 & uVar20) +
            iVar1;
    auVar33 = NEON_rev32(param_2[1],1);
    iVar1 = uVar29 + auVar33._0_4_ + (uVar31 & uVar23 | uVar21 & (uVar31 ^ 0xffffffff)) + 0x3956c25b
            + ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
              (uVar31 >> 0x19 | uVar31 * 0x80));
    uVar20 = iVar1 + uVar20;
    uVar29 = ((uVar2 >> 2 | uVar2 * 0x40000000) ^ (uVar2 >> 0xd | uVar2 * 0x80000) ^
             (uVar2 >> 0x16 | uVar2 * 0x400)) + (uVar2 & (uVar26 ^ uVar22) ^ uVar26 & uVar22) +
             iVar1;
    iVar1 = uVar21 + auVar33._4_4_ + (uVar20 & uVar31 | uVar23 & (uVar20 ^ 0xffffffff)) + 0x59f111f1
            + ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 0x19 | uVar20 * 0x80));
    uVar22 = iVar1 + uVar22;
    uVar21 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
             (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar2 ^ uVar26) ^ uVar2 & uVar26) +
             iVar1;
    iVar1 = auVar33._8_4_ + uVar23 + (uVar22 & uVar20 | uVar31 & (uVar22 ^ 0xffffffff)) +
            -0x6dc07d5c +
            ((uVar22 >> 6 | uVar22 * 0x4000000) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 0x19 | uVar22 * 0x80));
    uVar26 = iVar1 + uVar26;
    uVar23 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
             (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar29 ^ uVar2) ^ uVar29 & uVar2) +
             iVar1;
    iVar1 = auVar33._12_4_ + uVar31 + (uVar26 & uVar22 | uVar20 & (uVar26 ^ 0xffffffff)) +
            -0x54e3a12b +
            ((uVar26 >> 6 | uVar26 * 0x4000000) ^ (uVar26 >> 0xb | uVar26 * 0x200000) ^
            (uVar26 >> 0x19 | uVar26 * 0x80));
    uVar2 = iVar1 + uVar2;
    uVar31 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
             (uVar23 >> 0x16 | uVar23 * 0x400)) + (uVar23 & (uVar21 ^ uVar29) ^ uVar21 & uVar29) +
             iVar1;
    auVar34 = NEON_rev32(param_2[2],1);
    iVar1 = auVar34._0_4_ + uVar20 + (uVar2 & uVar26 | uVar22 & (uVar2 ^ 0xffffffff)) + -0x27f85568
            + ((uVar2 >> 6 | uVar2 * 0x4000000) ^ (uVar2 >> 0xb | uVar2 * 0x200000) ^
              (uVar2 >> 0x19 | uVar2 * 0x80));
    uVar29 = iVar1 + uVar29;
    uVar3 = ((uVar31 >> 2 | uVar31 * 0x40000000) ^ (uVar31 >> 0xd | uVar31 * 0x80000) ^
            (uVar31 >> 0x16 | uVar31 * 0x400)) + (uVar31 & (uVar23 ^ uVar21) ^ uVar23 & uVar21) +
            iVar1;
    iVar1 = auVar34._4_4_ + uVar22 + (uVar29 & uVar2 | uVar26 & (uVar29 ^ 0xffffffff)) + 0x12835b01
            + ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
              (uVar29 >> 0x19 | uVar29 * 0x80));
    uVar21 = iVar1 + uVar21;
    uVar20 = ((uVar3 >> 2 | uVar3 * 0x40000000) ^ (uVar3 >> 0xd | uVar3 * 0x80000) ^
             (uVar3 >> 0x16 | uVar3 * 0x400)) + (uVar3 & (uVar31 ^ uVar23) ^ uVar31 & uVar23) +
             iVar1;
    iVar1 = auVar34._8_4_ + uVar26 + (uVar21 & uVar29 | uVar2 & (uVar21 ^ 0xffffffff)) + 0x243185be
            + ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 0x19 | uVar21 * 0x80));
    uVar23 = iVar1 + uVar23;
    uVar22 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
             (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar3 ^ uVar31) ^ uVar3 & uVar31) +
             iVar1;
    iVar1 = auVar34._12_4_ + uVar2 + (uVar23 & uVar21 | uVar29 & (uVar23 ^ 0xffffffff)) + 0x550c7dc3
            + ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 0x19 | uVar23 * 0x80));
    uVar31 = iVar1 + uVar31;
    uVar26 = ((uVar22 >> 2 | uVar22 * 0x40000000) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
             (uVar22 >> 0x16 | uVar22 * 0x400)) + (uVar22 & (uVar20 ^ uVar3) ^ uVar20 & uVar3) +
             iVar1;
    auVar35 = NEON_rev32(param_2[3],1);
    uStack_a8 = auVar32._8_8_;
    uStack_b0 = auVar32._0_8_;
    uStack_98 = auVar33._8_8_;
    uStack_a0 = auVar33._0_8_;
    iVar1 = auVar35._0_4_ + uVar29 + (uVar31 & uVar23 | uVar21 & (uVar31 ^ 0xffffffff)) + 0x72be5d74
            + ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
              (uVar31 >> 0x19 | uVar31 * 0x80));
    uVar3 = iVar1 + uVar3;
    uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
             (uVar26 >> 0x16 | uVar26 * 0x400)) + (uVar26 & (uVar22 ^ uVar20) ^ uVar22 & uVar20) +
             iVar1;
    iVar1 = auVar35._4_4_ + uVar21 + (uVar3 & uVar31 | uVar23 & (uVar3 ^ 0xffffffff)) + -0x7f214e02
            + ((uVar3 >> 6 | uVar3 * 0x4000000) ^ (uVar3 >> 0xb | uVar3 * 0x200000) ^
              (uVar3 >> 0x19 | uVar3 * 0x80));
    uVar20 = iVar1 + uVar20;
    uVar21 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
             (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar26 ^ uVar22) ^ uVar26 & uVar22) +
             iVar1;
    uStack_88 = auVar34._8_8_;
    uStack_90 = auVar34._0_8_;
    uStack_78 = auVar35._8_8_;
    uStack_80 = auVar35._0_8_;
    iVar1 = auVar35._8_4_ + uVar23 + (uVar20 & uVar3 | uVar31 & (uVar20 ^ 0xffffffff)) + -0x6423f959
            + ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 0x19 | uVar20 * 0x80));
    uVar22 = iVar1 + uVar22;
    uVar23 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
             (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar29 ^ uVar26) ^ uVar29 & uVar26) +
             iVar1;
    lVar25 = lVar25 + -1;
    iVar1 = auVar35._12_4_ + uVar31 + (uVar22 & uVar20 | uVar3 & (uVar22 ^ 0xffffffff)) +
            -0x3e640e8c +
            ((uVar22 >> 6 | uVar22 * 0x4000000) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
            (uVar22 >> 0x19 | uVar22 * 0x80));
    uVar26 = iVar1 + uVar26;
    uVar31 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
             (uVar23 >> 0x16 | uVar23 * 0x400)) + (uVar23 & (uVar21 ^ uVar29) ^ uVar21 & uVar29) +
             iVar1;
    uVar28 = 0x10;
    piVar30 = (int *)&UNK_008387f4;
    uVar2 = uVar6;
    while( true ) {
      unaff_x20 = (uint *)(ulong)uVar2;
      unaff_x19 = (uint *)(ulong)uVar3;
      in_ZR = uVar28 == 0x3f;
      if (0x3f < uVar28) break;
      uVar27 = (uint)uVar28;
      uVar24 = (ulong)(uVar27 + 1) & 9;
      uVar2 = *(uint *)((long)&uStack_b0 + uVar24 * 4);
      uVar16 = *(uint *)((long)&uStack_b0 + ((ulong)(uVar27 + 0xe) & 0xe) * 4);
      uVar4 = ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3) +
              *(int *)((long)&uStack_b0 + ((ulong)(uVar27 + 9) & 9) * 4) +
              *(int *)((long)&uStack_b0 + (uVar28 & 8) * 4) +
              ((uVar16 >> 0x11 | uVar16 << 0xf) ^ (uVar16 >> 0x13 | uVar16 << 0xd) ^ uVar16 >> 10);
      *(uint *)((long)&uStack_b0 + (uVar28 & 8) * 4) = uVar4;
      uVar5 = uVar27 & 8;
      iVar14 = piVar30[-6];
      iVar1 = uVar3 + (uVar20 & (uVar26 ^ 0xffffffff) | uVar22 & uVar26) + piVar30[-7] +
              ((uVar26 >> 6 | uVar26 << 0x1a) ^ (uVar26 >> 0xb | uVar26 << 0x15) ^
              (uVar26 >> 0x19 | uVar26 << 7)) + uVar4;
      uVar29 = iVar1 + uVar29;
      uVar17 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 2) * 4);
      uVar3 = ((uVar21 ^ uVar23) & uVar31 ^ uVar21 & uVar23) +
              ((uVar31 >> 2 | uVar31 << 0x1e) ^ (uVar31 >> 0xd | uVar31 << 0x13) ^
              (uVar31 >> 0x16 | uVar31 << 10)) + iVar1;
      uVar18 = *(uint *)((long)&uStack_b0 + ((ulong)(uVar27 - 1) & 0xf) * 4);
      iVar1 = *(int *)((long)&uStack_b0 + ((ulong)(uVar27 + 10) & 10) * 4) + uVar2 +
              ((uVar17 >> 7 | uVar17 << 0x19) ^ (uVar17 >> 0x12 | uVar17 << 0xe) ^ uVar17 >> 3) +
              ((uVar18 >> 0x11 | uVar18 << 0xf) ^ (uVar18 >> 0x13 | uVar18 << 0xd) ^ uVar18 >> 10);
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar1;
      iVar1 = iVar14 + uVar20 + (uVar29 & uVar26 | uVar22 & (uVar29 ^ 0xffffffff)) + iVar1 +
              ((uVar29 >> 6 | uVar29 * 0x4000000) ^ (uVar29 >> 0xb | uVar29 * 0x200000) ^
              (uVar29 >> 0x19 | uVar29 * 0x80));
      uVar21 = iVar1 + uVar21;
      uVar20 = ((uVar3 >> 2 | uVar3 * 0x40000000) ^ (uVar3 >> 0xd | uVar3 * 0x80000) ^
               (uVar3 >> 0x16 | uVar3 * 0x400)) + (uVar3 & (uVar23 ^ uVar31) ^ uVar23 & uVar31) +
               iVar1;
      uVar2 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 3) * 4);
      uVar24 = (ulong)(uVar27 + 2) & 10;
      iVar1 = *(int *)((long)&uStack_b0 + ((ulong)(uVar27 + 0xb) & 0xb) * 4) +
              *(int *)((long)&uStack_b0 + uVar24 * 4) +
              ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3) +
              ((uVar4 >> 0x11 | uVar4 * 0x8000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000) ^ uVar4 >> 10);
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar1;
      iVar14 = piVar30[-4];
      iVar1 = piVar30[-5] + uVar22 + iVar1 + (uVar21 & uVar29 | uVar26 & (uVar21 ^ 0xffffffff)) +
              ((uVar21 >> 6 | uVar21 * 0x4000000) ^ (uVar21 >> 0xb | uVar21 * 0x200000) ^
              (uVar21 >> 0x19 | uVar21 * 0x80));
      uVar23 = iVar1 + uVar23;
      uVar22 = ((uVar20 >> 2 | uVar20 * 0x40000000) ^ (uVar20 >> 0xd | uVar20 * 0x80000) ^
               (uVar20 >> 0x16 | uVar20 * 0x400)) + (uVar20 & (uVar3 ^ uVar31) ^ uVar3 & uVar31) +
               iVar1;
      uVar2 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 4) * 4);
      uVar17 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 1) * 4);
      uVar24 = (ulong)(uVar27 + 3) & 0xb;
      iVar1 = ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3) +
              *(int *)((long)&uStack_b0 + ((ulong)(uVar27 + 0xc) & 0xc) * 4) +
              *(int *)((long)&uStack_b0 + uVar24 * 4) +
              ((uVar17 >> 0x11 | uVar17 << 0xf) ^ (uVar17 >> 0x13 | uVar17 << 0xd) ^ uVar17 >> 10);
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar1;
      iVar1 = iVar14 + uVar26 + iVar1 + (uVar23 & uVar21 | uVar29 & (uVar23 ^ 0xffffffff)) +
              ((uVar23 >> 6 | uVar23 * 0x4000000) ^ (uVar23 >> 0xb | uVar23 * 0x200000) ^
              (uVar23 >> 0x19 | uVar23 * 0x80));
      uVar31 = iVar1 + uVar31;
      uVar26 = ((uVar22 >> 2 | uVar22 * 0x40000000) ^ (uVar22 >> 0xd | uVar22 * 0x80000) ^
               (uVar22 >> 0x16 | uVar22 * 0x400)) + (uVar22 & (uVar20 ^ uVar3) ^ uVar20 & uVar3) +
               iVar1;
      uVar2 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 5) * 4);
      uVar17 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 2) * 4);
      uVar24 = (ulong)(uVar27 + 4) & 0xc;
      iVar1 = ((uVar2 >> 7 | uVar2 << 0x19) ^ (uVar2 >> 0x12 | uVar2 << 0xe) ^ uVar2 >> 3) +
              *(int *)((long)&uStack_b0 + ((ulong)(uVar27 + 0xd) & 0xd) * 4) +
              *(int *)((long)&uStack_b0 + uVar24 * 4) +
              ((uVar17 >> 0x11 | uVar17 << 0xf) ^ (uVar17 >> 0x13 | uVar17 << 0xd) ^ uVar17 >> 10);
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar1;
      iVar15 = piVar30[-2];
      iVar1 = piVar30[-3] + iVar1 + uVar29 + (uVar31 & uVar23 | uVar21 & (uVar31 ^ 0xffffffff)) +
              ((uVar31 >> 6 | uVar31 * 0x4000000) ^ (uVar31 >> 0xb | uVar31 * 0x200000) ^
              (uVar31 >> 0x19 | uVar31 * 0x80));
      uVar29 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 6) * 4);
      uVar17 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 3) * 4);
      uVar24 = (ulong)(uVar27 + 5) & 0xd;
      uVar2 = *(uint *)((long)&uStack_b0 + uVar24 * 4);
      uVar3 = iVar1 + uVar3;
      iVar14 = uVar2 + uVar16 +
               ((uVar29 >> 7 | uVar29 << 0x19) ^ (uVar29 >> 0x12 | uVar29 << 0xe) ^ uVar29 >> 3) +
               ((uVar17 >> 0x11 | uVar17 << 0xf) ^ (uVar17 >> 0x13 | uVar17 << 0xd) ^ uVar17 >> 10);
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar14;
      uVar29 = ((uVar26 >> 2 | uVar26 * 0x40000000) ^ (uVar26 >> 0xd | uVar26 * 0x80000) ^
               (uVar26 >> 0x16 | uVar26 * 0x400)) + (uVar26 & (uVar22 ^ uVar20) ^ uVar22 & uVar20) +
               iVar1;
      iVar1 = iVar15 + iVar14 + uVar21 + (uVar3 & uVar31 | uVar23 & (uVar3 ^ 0xffffffff)) +
              ((uVar3 >> 6 | uVar3 * 0x4000000) ^ (uVar3 >> 0xb | uVar3 * 0x200000) ^
              (uVar3 >> 0x19 | uVar3 * 0x80));
      uVar20 = iVar1 + uVar20;
      uVar21 = ((uVar29 >> 2 | uVar29 * 0x40000000) ^ (uVar29 >> 0xd | uVar29 * 0x80000) ^
               (uVar29 >> 0x16 | uVar29 * 0x400)) + (uVar29 & (uVar26 ^ uVar22) ^ uVar26 & uVar22) +
               iVar1;
      uVar16 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 7) * 4);
      uVar17 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 4) * 4);
      uVar24 = (ulong)(uVar27 + 6) & 0xe;
      iVar1 = *(int *)((long)&uStack_b0 + uVar24 * 4) + uVar18 +
              ((uVar16 >> 7 | uVar16 << 0x19) ^ (uVar16 >> 0x12 | uVar16 << 0xe) ^ uVar16 >> 3) +
              ((uVar17 >> 0x11 | uVar17 << 0xf) ^ (uVar17 >> 0x13 | uVar17 << 0xd) ^ uVar17 >> 10);
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar1;
      iVar1 = piVar30[-1] + iVar1 + uVar23 + (uVar20 & uVar3 | uVar31 & (uVar20 ^ 0xffffffff)) +
              ((uVar20 >> 6 | uVar20 * 0x4000000) ^ (uVar20 >> 0xb | uVar20 * 0x200000) ^
              (uVar20 >> 0x19 | uVar20 * 0x80));
      uVar22 = iVar1 + uVar22;
      uVar23 = ((uVar21 >> 2 | uVar21 * 0x40000000) ^ (uVar21 >> 0xd | uVar21 * 0x80000) ^
               (uVar21 >> 0x16 | uVar21 * 0x400)) + (uVar21 & (uVar29 ^ uVar26) ^ uVar29 & uVar26) +
               iVar1;
      uVar16 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 ^ 8) * 4);
      uVar5 = *(uint *)((long)&uStack_b0 + (ulong)(uVar5 | 5) * 4);
      uVar24 = (ulong)(uVar27 + 7) & 0xf;
      iVar1 = *(int *)((long)&uStack_b0 + uVar24 * 4) +
              ((uVar16 >> 7 | uVar16 << 0x19) ^ (uVar16 >> 0x12 | uVar16 << 0xe) ^ uVar16 >> 3) +
              ((uVar5 >> 0x11 | uVar5 << 0xf) ^ (uVar5 >> 0x13 | uVar5 << 0xd) ^ uVar5 >> 10) +
              uVar4;
      *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar1;
      iVar1 = *piVar30 + iVar1 + uVar31 + (uVar22 & uVar20 | uVar3 & (uVar22 ^ 0xffffffff)) +
              ((uVar22 >> 6 | uVar22 * 0x4000000) ^ (uVar22 >> 0xb | uVar22 * 0x200000) ^
              (uVar22 >> 0x19 | uVar22 * 0x80));
      uVar26 = iVar1 + uVar26;
      uVar31 = ((uVar23 >> 2 | uVar23 * 0x40000000) ^ (uVar23 >> 0xd | uVar23 * 0x80000) ^
               (uVar23 >> 0x16 | uVar23 * 0x400)) + (uVar23 & (uVar21 ^ uVar29) ^ uVar21 & uVar29) +
               iVar1;
      uVar28 = uVar28 + 8;
      piVar30 = piVar30 + 8;
    }
    param_2 = param_2 + 4;
    *param_1 = uVar31 + uVar6;
    param_1[1] = uVar23 + uVar10;
    param_1[2] = uVar21 + uVar7;
    param_1[3] = uVar29 + uVar11;
    param_1[4] = uVar26 + uVar8;
    param_1[5] = uVar22 + uVar12;
    param_1[6] = uVar20 + uVar9;
    param_1[7] = uVar3 + uVar13;
    param_3 = lVar25;
  }
  func_0x006fd534(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x006fd8fc();
    func_0x006feaf8();
    func_0x006f0108();
    if (unaff_x19[0x1b] < 0x21) {
      uVar28 = (ulong)(unaff_x19[0x1b] >> 2);
      for (; uVar28 != 0; uVar28 = uVar28 - 1) {
        uVar29 = (*unaff_x19 & 0xff00ff00) >> 8 | (*unaff_x19 & 0xff00ff) << 8;
        *unaff_x20 = uVar29 >> 0x10 | uVar29 << 0x10;
        unaff_x19 = unaff_x19 + 1;
        unaff_x20 = unaff_x20 + 1;
      }
      puVar19 = (uint *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      puVar19 = (uint *)0x0;
    }
    return puVar19;
  }
  return param_1;
}



/* Entry: 006f6774; end: 006f67cf;  */

undefined8 FUN_006f6774(void)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint *unaff_x19;
  uint *unaff_x20;
  
  func_0x006fd8fc();
  func_0x006feaf8();
  func_0x006f0108();
  if (unaff_x19[0x1b] < 0x21) {
    uVar3 = (ulong)(unaff_x19[0x1b] >> 2);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      uVar1 = (*unaff_x19 & 0xff00ff00) >> 8 | (*unaff_x19 & 0xff00ff) << 8;
      *unaff_x20 = uVar1 >> 0x10 | uVar1 << 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x19 = unaff_x19 + 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 006f67d0; end: 006f6877;  */

undefined8 FUN_006f67d0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong uVar6;
  
  func_0x006fd8fc();
  lVar1 = param_2 + 0x50;
  uVar2 = *(uint *)(param_2 + 0xd0);
  *(undefined1 *)(lVar1 + (ulong)uVar2) = 0x80;
  lVar4 = (ulong)uVar2 + 1;
  if (0x6f < uVar2) {
    func_0x006fd9c0(lVar1 + lVar4);
    func_0x006fdab0();
    func_0x006fe958();
    lVar4 = 0;
  }
  func_0x006fd9c0(lVar1 + lVar4);
  uVar6 = unaff_x19[9];
  uVar5 = unaff_x19[8];
  func_0x006fe134();
  unaff_x19[0x19] = uVar6;
  unaff_x19[0x18] = uVar5;
  func_0x006fdab0();
  func_0x006fe958();
  if (unaff_x20 == (ulong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar5 = (ulong)(*(uint *)((long)unaff_x19 + 0xd4) >> 3);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar6 = (*unaff_x19 & 0xff00ff00ff00ff00) >> 8 | (*unaff_x19 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      *unaff_x20 = uVar6 >> 0x20 | uVar6 << 0x20;
      unaff_x20 = unaff_x20 + 1;
      unaff_x19 = unaff_x19 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 006f6878; end: 006f7767;  */

void FUN_006f6878(ulong *param_1,ulong *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar5 = param_1[6];
  uVar9 = param_1[7];
  while (param_3 != 0) {
    param_3 = param_3 + -1;
    uVar15 = (*param_2 & 0xff00ff00ff00ff00) >> 8 | (*param_2 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uStack_68 = uVar15 >> 0x20 | uVar15 << 0x20;
    lVar1 = uVar9 + (uVar5 & (uVar4 ^ 0xffffffffffffffff) | uVar4 & uVar8) + uStack_68 +
            ((uVar4 >> 0xe | uVar4 << 0x32) ^ (uVar4 >> 0x12 | uVar4 << 0x2e) ^
            (uVar4 >> 0x29 | uVar4 << 0x17)) + 0x428a2f98d728ae22;
    uVar15 = lVar1 + uVar7;
    uVar26 = ((uVar2 >> 0x1c | uVar2 << 0x24) ^ (uVar2 >> 0x22 | uVar2 << 0x1e) ^
             (uVar2 >> 0x27 | uVar2 << 0x19)) + ((uVar6 ^ uVar3) & uVar2 ^ uVar6 & uVar3) + lVar1;
    uVar27 = (param_2[1] & 0xff00ff00ff00ff00) >> 8 | (param_2[1] & 0xff00ff00ff00ff) << 8;
    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
    uStack_78 = uVar27 >> 0x20 | uVar27 << 0x20;
    lVar1 = uVar5 + uStack_78 + (uVar15 & uVar4 | uVar8 & (uVar15 ^ 0xffffffffffffffff)) +
            0x7137449123ef65cd +
            ((uVar15 >> 0xe | uVar15 << 0x32) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
            (uVar15 >> 0x29 | uVar15 * 0x800000));
    uVar27 = lVar1 + uVar3;
    uVar10 = ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
             (uVar26 >> 0x27 | uVar26 * 0x2000000)) + (uVar26 & (uVar2 ^ uVar6) ^ uVar2 & uVar6) +
             lVar1;
    uVar13 = (param_2[2] & 0xff00ff00ff00ff00) >> 8 | (param_2[2] & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uStack_80 = uVar13 >> 0x20 | uVar13 << 0x20;
    lVar1 = uVar8 + uStack_80 + (uVar27 & uVar15 | uVar4 & (uVar27 ^ 0xffffffffffffffff)) +
            -0x4a3f043013b2c4d1 +
            ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
            (uVar27 >> 0x29 | uVar27 * 0x800000));
    uVar13 = lVar1 + uVar6;
    uVar17 = ((uVar10 >> 0x1c | uVar10 << 0x24) ^ (uVar10 >> 0x22 | uVar10 * 0x40000000) ^
             (uVar10 >> 0x27 | uVar10 * 0x2000000)) + (uVar10 & (uVar26 ^ uVar2) ^ uVar26 & uVar2) +
             lVar1;
    uVar12 = (param_2[3] & 0xff00ff00ff00ff00) >> 8 | (param_2[3] & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar19 = uVar12 >> 0x20 | uVar12 << 0x20;
    lVar1 = uVar4 + uVar19 + (uVar13 & uVar27 | uVar15 & (uVar13 ^ 0xffffffffffffffff)) +
            -0x164a245a7e762444 +
            ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0x29 | uVar13 * 0x800000));
    uVar12 = lVar1 + uVar2;
    uVar16 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
             (uVar17 >> 0x27 | uVar17 * 0x2000000)) + (uVar17 & (uVar10 ^ uVar26) ^ uVar10 & uVar26)
             + lVar1;
    uVar18 = (param_2[4] & 0xff00ff00ff00ff00) >> 8 | (param_2[4] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar15 + uVar20 + (uVar12 & uVar13 | uVar27 & (uVar12 ^ 0xffffffffffffffff)) +
            0x3956c25bf348b538 +
            ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
            (uVar12 >> 0x29 | uVar12 * 0x800000));
    uVar26 = lVar1 + uVar26;
    uVar15 = ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 * 0x40000000) ^
             (uVar16 >> 0x27 | uVar16 * 0x2000000)) + (uVar16 & (uVar17 ^ uVar10) ^ uVar17 & uVar10)
             + lVar1;
    uVar18 = (param_2[5] & 0xff00ff00ff00ff00) >> 8 | (param_2[5] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar21 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar21 + uVar27 + (uVar26 & uVar12 | uVar13 & (uVar26 ^ 0xffffffffffffffff)) +
            0x59f111f1b605d019 +
            ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
            (uVar26 >> 0x29 | uVar26 * 0x800000));
    uVar10 = lVar1 + uVar10;
    uVar27 = ((uVar15 >> 0x1c | uVar15 << 0x24) ^ (uVar15 >> 0x22 | uVar15 * 0x40000000) ^
             (uVar15 >> 0x27 | uVar15 * 0x2000000)) + (uVar15 & (uVar16 ^ uVar17) ^ uVar16 & uVar17)
             + lVar1;
    uVar18 = (param_2[6] & 0xff00ff00ff00ff00) >> 8 | (param_2[6] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar22 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar22 + uVar13 + (uVar10 & uVar26 | uVar12 & (uVar10 ^ 0xffffffffffffffff)) +
            -0x6dc07d5b50e6b065 +
            ((uVar10 >> 0xe | uVar10 << 0x32) ^ (uVar10 >> 0x12 | uVar10 << 0x2e) ^
            (uVar10 >> 0x29 | uVar10 * 0x800000));
    uVar17 = lVar1 + uVar17;
    uVar13 = ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
             (uVar27 >> 0x27 | uVar27 * 0x2000000)) + (uVar27 & (uVar15 ^ uVar16) ^ uVar15 & uVar16)
             + lVar1;
    uVar18 = (param_2[7] & 0xff00ff00ff00ff00) >> 8 | (param_2[7] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uStack_70 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uStack_70 + uVar12 + (uVar17 & uVar10 | uVar26 & (uVar17 ^ 0xffffffffffffffff)) +
            -0x54e3a12a25927ee8 +
            ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
            (uVar17 >> 0x29 | uVar17 * 0x800000));
    uVar16 = lVar1 + uVar16;
    uVar12 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
             (uVar13 >> 0x27 | uVar13 * 0x2000000)) + (uVar13 & (uVar27 ^ uVar15) ^ uVar27 & uVar15)
             + lVar1;
    uVar18 = (param_2[8] & 0xff00ff00ff00ff00) >> 8 | (param_2[8] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar11 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar11 + uVar26 + (uVar16 & uVar17 | uVar10 & (uVar16 ^ 0xffffffffffffffff)) +
            -0x27f855675cfcfdbe +
            ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
            (uVar16 >> 0x29 | uVar16 * 0x800000));
    uVar15 = lVar1 + uVar15;
    uVar26 = ((uVar12 >> 0x1c | uVar12 << 0x24) ^ (uVar12 >> 0x22 | uVar12 * 0x40000000) ^
             (uVar12 >> 0x27 | uVar12 * 0x2000000)) + (uVar12 & (uVar13 ^ uVar27) ^ uVar13 & uVar27)
             + lVar1;
    uVar18 = (param_2[9] & 0xff00ff00ff00ff00) >> 8 | (param_2[9] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar14 + uVar10 + (uVar15 & uVar16 | uVar17 & (uVar15 ^ 0xffffffffffffffff)) +
            0x12835b0145706fbe +
            ((uVar15 >> 0xe | uVar15 << 0x32) ^ (uVar15 >> 0x12 | uVar15 << 0x2e) ^
            (uVar15 >> 0x29 | uVar15 * 0x800000));
    uVar27 = lVar1 + uVar27;
    uVar10 = ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
             (uVar26 >> 0x27 | uVar26 * 0x2000000)) + (uVar26 & (uVar12 ^ uVar13) ^ uVar12 & uVar13)
             + lVar1;
    uVar18 = (param_2[10] & 0xff00ff00ff00ff00) >> 8 | (param_2[10] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar23 + uVar17 + (uVar27 & uVar15 | uVar16 & (uVar27 ^ 0xffffffffffffffff)) +
            0x243185be4ee4b28c +
            ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
            (uVar27 >> 0x29 | uVar27 * 0x800000));
    uVar13 = lVar1 + uVar13;
    uVar17 = ((uVar10 >> 0x1c | uVar10 << 0x24) ^ (uVar10 >> 0x22 | uVar10 * 0x40000000) ^
             (uVar10 >> 0x27 | uVar10 * 0x2000000)) + (uVar10 & (uVar26 ^ uVar12) ^ uVar26 & uVar12)
             + lVar1;
    uVar18 = (param_2[0xb] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xb] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar24 + uVar16 + (uVar13 & uVar27 | uVar15 & (uVar13 ^ 0xffffffffffffffff)) +
            0x550c7dc3d5ffb4e2 +
            ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
            (uVar13 >> 0x29 | uVar13 * 0x800000));
    uVar12 = lVar1 + uVar12;
    uVar16 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
             (uVar17 >> 0x27 | uVar17 * 0x2000000)) + (uVar17 & (uVar10 ^ uVar26) ^ uVar10 & uVar26)
             + lVar1;
    uVar18 = (param_2[0xc] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xc] & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar25 = uVar18 >> 0x20 | uVar18 << 0x20;
    lVar1 = uVar25 + uVar15 + (uVar12 & uVar13 | uVar27 & (uVar12 ^ 0xffffffffffffffff)) +
            0x72be5d74f27b896f +
            ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
            (uVar12 >> 0x29 | uVar12 * 0x800000));
    uVar26 = lVar1 + uVar26;
    uVar18 = ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 * 0x40000000) ^
             (uVar16 >> 0x27 | uVar16 * 0x2000000)) + (uVar16 & (uVar17 ^ uVar10) ^ uVar17 & uVar10)
             + lVar1;
    uVar15 = (param_2[0xd] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xd] & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar28 = uVar15 >> 0x20 | uVar15 << 0x20;
    lVar1 = uVar28 + uVar27 + (uVar26 & uVar12 | uVar13 & (uVar26 ^ 0xffffffffffffffff)) +
            -0x7f214e01c4e9694f +
            ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
            (uVar26 >> 0x29 | uVar26 * 0x800000));
    uVar10 = lVar1 + uVar10;
    uVar27 = ((uVar18 >> 0x1c | uVar18 << 0x24) ^ (uVar18 >> 0x22 | uVar18 * 0x40000000) ^
             (uVar18 >> 0x27 | uVar18 * 0x2000000)) + (uVar18 & (uVar16 ^ uVar17) ^ uVar16 & uVar17)
             + lVar1;
    uVar15 = (param_2[0xe] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xe] & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar29 = uVar15 >> 0x20 | uVar15 << 0x20;
    lVar1 = uVar29 + uVar13 + (uVar10 & uVar26 | uVar12 & (uVar10 ^ 0xffffffffffffffff)) +
            -0x6423f958da38edcb +
            ((uVar10 >> 0xe | uVar10 << 0x32) ^ (uVar10 >> 0x12 | uVar10 << 0x2e) ^
            (uVar10 >> 0x29 | uVar10 * 0x800000));
    uVar17 = lVar1 + uVar17;
    uVar13 = ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
             (uVar27 >> 0x27 | uVar27 * 0x2000000)) + (uVar27 & (uVar18 ^ uVar16) ^ uVar18 & uVar16)
             + lVar1;
    uVar15 = (param_2[0xf] & 0xff00ff00ff00ff00) >> 8 | (param_2[0xf] & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar30 = uVar15 >> 0x20 | uVar15 << 0x20;
    lVar1 = uVar30 + uVar12 + (uVar17 & uVar10 | uVar26 & (uVar17 ^ 0xffffffffffffffff)) +
            -0x3e640e8b3096d96c +
            ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
            (uVar17 >> 0x29 | uVar17 * 0x800000));
    uVar16 = lVar1 + uVar16;
    uVar12 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
             (uVar13 >> 0x27 | uVar13 * 0x2000000)) + (uVar13 & (uVar27 ^ uVar18) ^ uVar27 & uVar18)
             + lVar1;
    plVar31 = (long *)&UNK_00838990;
    for (uVar15 = 0x10; uVar15 < 0x50; uVar15 = uVar15 + 0x10) {
      uStack_68 = uVar14 + uStack_68 +
                  ((uVar29 >> 0x13 | uVar29 << 0x2d) ^ (uVar29 >> 0x3d | uVar29 << 3) ^ uVar29 >> 6)
                  + ((uStack_78 >> 1 | uStack_78 << 0x3f) ^ (uStack_78 >> 8 | uStack_78 << 0x38) ^
                    uStack_78 >> 7);
      lVar1 = uVar26 + (uVar10 & (uVar16 ^ 0xffffffffffffffff) | uVar17 & uVar16) +
              ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0x29 | uVar16 << 0x17)) + plVar31[-0xf] + uStack_68;
      uVar18 = lVar1 + uVar18;
      uVar26 = ((uVar27 ^ uVar13) & uVar12 ^ uVar27 & uVar13) +
               ((uVar12 >> 0x1c | uVar12 << 0x24) ^ (uVar12 >> 0x22 | uVar12 << 0x1e) ^
               (uVar12 >> 0x27 | uVar12 << 0x19)) + lVar1;
      uStack_78 = uVar23 + uStack_78 +
                  ((uVar30 >> 0x13 | uVar30 << 0x2d) ^ (uVar30 >> 0x3d | uVar30 << 3) ^ uVar30 >> 6)
                  + ((uStack_80 >> 1 | uStack_80 << 0x3f) ^ (uStack_80 >> 8 | uStack_80 << 0x38) ^
                    uStack_80 >> 7);
      lVar1 = uStack_78 + uVar10 + plVar31[-0xe] +
              (uVar18 & uVar16 | uVar17 & (uVar18 ^ 0xffffffffffffffff)) +
              ((uVar18 >> 0xe | uVar18 << 0x32) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0x29 | uVar18 * 0x800000));
      uVar27 = lVar1 + uVar27;
      uVar10 = ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
               (uVar26 >> 0x27 | uVar26 * 0x2000000)) +
               (uVar26 & (uVar13 ^ uVar12) ^ uVar13 & uVar12) + lVar1;
      uStack_80 = uStack_80 + uVar24 +
                  ((uVar19 >> 1 | uVar19 << 0x3f) ^ (uVar19 >> 8 | uVar19 << 0x38) ^ uVar19 >> 7) +
                  ((uStack_68 >> 0x13 | uStack_68 << 0x2d) ^ (uStack_68 >> 0x3d | uStack_68 * 8) ^
                  uStack_68 >> 6);
      lVar1 = uStack_80 + uVar17 + plVar31[-0xd] +
              (uVar27 & uVar18 | uVar16 & (uVar27 ^ 0xffffffffffffffff)) +
              ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
              (uVar27 >> 0x29 | uVar27 * 0x800000));
      uVar13 = lVar1 + uVar13;
      uVar17 = ((uVar10 >> 0x1c | uVar10 << 0x24) ^ (uVar10 >> 0x22 | uVar10 * 0x40000000) ^
               (uVar10 >> 0x27 | uVar10 * 0x2000000)) +
               (uVar10 & (uVar26 ^ uVar12) ^ uVar26 & uVar12) + lVar1;
      uVar19 = uVar19 + uVar25 +
               ((uVar20 >> 1 | uVar20 << 0x3f) ^ (uVar20 >> 8 | uVar20 << 0x38) ^ uVar20 >> 7) +
               ((uStack_78 >> 0x13 | uStack_78 << 0x2d) ^ (uStack_78 >> 0x3d | uStack_78 * 8) ^
               uStack_78 >> 6);
      lVar1 = uVar19 + uVar16 + plVar31[-0xc] +
              (uVar13 & uVar27 | uVar18 & (uVar13 ^ 0xffffffffffffffff)) +
              ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0x29 | uVar13 * 0x800000));
      uVar12 = lVar1 + uVar12;
      uVar16 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
               (uVar17 >> 0x27 | uVar17 * 0x2000000)) +
               (uVar17 & (uVar10 ^ uVar26) ^ uVar10 & uVar26) + lVar1;
      uVar20 = uVar20 + uVar28 +
               ((uVar21 >> 1 | uVar21 << 0x3f) ^ (uVar21 >> 8 | uVar21 << 0x38) ^ uVar21 >> 7) +
               ((uStack_80 >> 0x13 | uStack_80 << 0x2d) ^ (uStack_80 >> 0x3d | uStack_80 * 8) ^
               uStack_80 >> 6);
      lVar1 = uVar18 + plVar31[-0xb] + uVar20 +
              (uVar12 & uVar13 | uVar27 & (uVar12 ^ 0xffffffffffffffff)) +
              ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
              (uVar12 >> 0x29 | uVar12 * 0x800000));
      uVar26 = lVar1 + uVar26;
      uVar18 = ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 * 0x40000000) ^
               (uVar16 >> 0x27 | uVar16 * 0x2000000)) +
               (uVar16 & (uVar17 ^ uVar10) ^ uVar17 & uVar10) + lVar1;
      uVar21 = uVar21 + uVar29 +
               ((uVar22 >> 1 | uVar22 << 0x3f) ^ (uVar22 >> 8 | uVar22 << 0x38) ^ uVar22 >> 7) +
               ((uVar19 >> 0x13 | uVar19 << 0x2d) ^ (uVar19 >> 0x3d | uVar19 * 8) ^ uVar19 >> 6);
      lVar1 = plVar31[-10] + uVar27 + uVar21 +
              (uVar26 & uVar12 | uVar13 & (uVar26 ^ 0xffffffffffffffff)) +
              ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
              (uVar26 >> 0x29 | uVar26 * 0x800000));
      uVar10 = lVar1 + uVar10;
      uVar27 = ((uVar18 >> 0x1c | uVar18 << 0x24) ^ (uVar18 >> 0x22 | uVar18 * 0x40000000) ^
               (uVar18 >> 0x27 | uVar18 * 0x2000000)) +
               (uVar18 & (uVar16 ^ uVar17) ^ uVar16 & uVar17) + lVar1;
      uVar22 = uVar22 + uVar30 +
               ((uStack_70 >> 1 | uStack_70 << 0x3f) ^ (uStack_70 >> 8 | uStack_70 << 0x38) ^
               uStack_70 >> 7) +
               ((uVar20 >> 0x13 | uVar20 << 0x2d) ^ (uVar20 >> 0x3d | uVar20 * 8) ^ uVar20 >> 6);
      lVar1 = plVar31[-9] + uVar13 + uVar22 +
              (uVar10 & uVar26 | uVar12 & (uVar10 ^ 0xffffffffffffffff)) +
              ((uVar10 >> 0xe | uVar10 << 0x32) ^ (uVar10 >> 0x12 | uVar10 << 0x2e) ^
              (uVar10 >> 0x29 | uVar10 * 0x800000));
      uVar17 = lVar1 + uVar17;
      uVar13 = ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
               (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
               (uVar27 & (uVar18 ^ uVar16) ^ uVar18 & uVar16) + lVar1;
      uStack_70 = ((uVar11 >> 1 | uVar11 << 0x3f) ^ (uVar11 >> 8 | uVar11 << 0x38) ^ uVar11 >> 7) +
                  uStack_70 + uStack_68 +
                  ((uVar21 >> 0x13 | uVar21 << 0x2d) ^ (uVar21 >> 0x3d | uVar21 * 8) ^ uVar21 >> 6);
      lVar1 = plVar31[-8] + uStack_70 + uVar12 +
              (uVar17 & uVar10 | uVar26 & (uVar17 ^ 0xffffffffffffffff)) +
              ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
              (uVar17 >> 0x29 | uVar17 * 0x800000));
      uVar16 = lVar1 + uVar16;
      uVar12 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
               (uVar13 >> 0x27 | uVar13 * 0x2000000)) +
               (uVar13 & (uVar27 ^ uVar18) ^ uVar27 & uVar18) + lVar1;
      uVar11 = ((uVar14 >> 1 | uVar14 << 0x3f) ^ (uVar14 >> 8 | uVar14 << 0x38) ^ uVar14 >> 7) +
               uVar11 + uStack_78 +
               ((uVar22 >> 0x13 | uVar22 << 0x2d) ^ (uVar22 >> 0x3d | uVar22 * 8) ^ uVar22 >> 6);
      lVar1 = plVar31[-7] + uVar11 + uVar26 +
              (uVar16 & uVar17 | uVar10 & (uVar16 ^ 0xffffffffffffffff)) +
              ((uVar16 >> 0xe | uVar16 << 0x32) ^ (uVar16 >> 0x12 | uVar16 << 0x2e) ^
              (uVar16 >> 0x29 | uVar16 * 0x800000));
      uVar18 = lVar1 + uVar18;
      uVar26 = ((uVar12 >> 0x1c | uVar12 << 0x24) ^ (uVar12 >> 0x22 | uVar12 * 0x40000000) ^
               (uVar12 >> 0x27 | uVar12 * 0x2000000)) +
               (uVar12 & (uVar13 ^ uVar27) ^ uVar13 & uVar27) + lVar1;
      uVar14 = ((uVar23 >> 1 | uVar23 << 0x3f) ^ (uVar23 >> 8 | uVar23 << 0x38) ^ uVar23 >> 7) +
               uVar14 + uStack_80 +
               ((uStack_70 >> 0x13 | uStack_70 << 0x2d) ^ (uStack_70 >> 0x3d | uStack_70 * 8) ^
               uStack_70 >> 6);
      lVar1 = plVar31[-6] + uVar14 + uVar10 +
              (uVar18 & uVar16 | uVar17 & (uVar18 ^ 0xffffffffffffffff)) +
              ((uVar18 >> 0xe | uVar18 << 0x32) ^ (uVar18 >> 0x12 | uVar18 << 0x2e) ^
              (uVar18 >> 0x29 | uVar18 * 0x800000));
      uVar27 = lVar1 + uVar27;
      uVar10 = ((uVar26 >> 0x1c | uVar26 << 0x24) ^ (uVar26 >> 0x22 | uVar26 * 0x40000000) ^
               (uVar26 >> 0x27 | uVar26 * 0x2000000)) +
               (uVar26 & (uVar12 ^ uVar13) ^ uVar12 & uVar13) + lVar1;
      uVar23 = ((uVar24 >> 1 | uVar24 << 0x3f) ^ (uVar24 >> 8 | uVar24 << 0x38) ^ uVar24 >> 7) +
               uVar23 + uVar19 +
               ((uVar11 >> 0x13 | uVar11 << 0x2d) ^ (uVar11 >> 0x3d | uVar11 * 8) ^ uVar11 >> 6);
      lVar1 = plVar31[-5] + uVar23 + uVar17 +
              (uVar27 & uVar18 | uVar16 & (uVar27 ^ 0xffffffffffffffff)) +
              ((uVar27 >> 0xe | uVar27 << 0x32) ^ (uVar27 >> 0x12 | uVar27 << 0x2e) ^
              (uVar27 >> 0x29 | uVar27 * 0x800000));
      uVar13 = lVar1 + uVar13;
      uVar17 = ((uVar10 >> 0x1c | uVar10 << 0x24) ^ (uVar10 >> 0x22 | uVar10 * 0x40000000) ^
               (uVar10 >> 0x27 | uVar10 * 0x2000000)) +
               (uVar10 & (uVar26 ^ uVar12) ^ uVar26 & uVar12) + lVar1;
      uVar24 = ((uVar25 >> 1 | uVar25 << 0x3f) ^ (uVar25 >> 8 | uVar25 << 0x38) ^ uVar25 >> 7) +
               uVar24 + uVar20 +
               ((uVar14 >> 0x13 | uVar14 << 0x2d) ^ (uVar14 >> 0x3d | uVar14 * 8) ^ uVar14 >> 6);
      lVar1 = plVar31[-4] + uVar24 + uVar16 +
              (uVar13 & uVar27 | uVar18 & (uVar13 ^ 0xffffffffffffffff)) +
              ((uVar13 >> 0xe | uVar13 << 0x32) ^ (uVar13 >> 0x12 | uVar13 << 0x2e) ^
              (uVar13 >> 0x29 | uVar13 * 0x800000));
      uVar12 = lVar1 + uVar12;
      uVar16 = ((uVar17 >> 0x1c | uVar17 << 0x24) ^ (uVar17 >> 0x22 | uVar17 * 0x40000000) ^
               (uVar17 >> 0x27 | uVar17 * 0x2000000)) +
               (uVar17 & (uVar10 ^ uVar26) ^ uVar10 & uVar26) + lVar1;
      uVar25 = ((uVar28 >> 1 | uVar28 << 0x3f) ^ (uVar28 >> 8 | uVar28 << 0x38) ^ uVar28 >> 7) +
               uVar25 + uVar21 +
               ((uVar23 >> 0x13 | uVar23 << 0x2d) ^ (uVar23 >> 0x3d | uVar23 * 8) ^ uVar23 >> 6);
      lVar1 = plVar31[-3] + uVar25 + uVar18 +
              (uVar12 & uVar13 | uVar27 & (uVar12 ^ 0xffffffffffffffff)) +
              ((uVar12 >> 0xe | uVar12 << 0x32) ^ (uVar12 >> 0x12 | uVar12 << 0x2e) ^
              (uVar12 >> 0x29 | uVar12 * 0x800000));
      uVar26 = lVar1 + uVar26;
      uVar18 = ((uVar16 >> 0x1c | uVar16 << 0x24) ^ (uVar16 >> 0x22 | uVar16 * 0x40000000) ^
               (uVar16 >> 0x27 | uVar16 * 0x2000000)) +
               (uVar16 & (uVar17 ^ uVar10) ^ uVar17 & uVar10) + lVar1;
      uVar28 = ((uVar29 >> 1 | uVar29 << 0x3f) ^ (uVar29 >> 8 | uVar29 << 0x38) ^ uVar29 >> 7) +
               uVar28 + uVar22 +
               ((uVar24 >> 0x13 | uVar24 << 0x2d) ^ (uVar24 >> 0x3d | uVar24 * 8) ^ uVar24 >> 6);
      lVar1 = plVar31[-2] + uVar28 + uVar27 +
              (uVar26 & uVar12 | uVar13 & (uVar26 ^ 0xffffffffffffffff)) +
              ((uVar26 >> 0xe | uVar26 << 0x32) ^ (uVar26 >> 0x12 | uVar26 << 0x2e) ^
              (uVar26 >> 0x29 | uVar26 * 0x800000));
      uVar10 = lVar1 + uVar10;
      uVar27 = ((uVar18 >> 0x1c | uVar18 << 0x24) ^ (uVar18 >> 0x22 | uVar18 * 0x40000000) ^
               (uVar18 >> 0x27 | uVar18 * 0x2000000)) +
               (uVar18 & (uVar16 ^ uVar17) ^ uVar16 & uVar17) + lVar1;
      uVar29 = ((uVar30 >> 1 | uVar30 << 0x3f) ^ (uVar30 >> 8 | uVar30 << 0x38) ^ uVar30 >> 7) +
               uVar29 + uStack_70 +
               ((uVar25 >> 0x13 | uVar25 << 0x2d) ^ (uVar25 >> 0x3d | uVar25 * 8) ^ uVar25 >> 6);
      lVar1 = plVar31[-1] + uVar29 + uVar13 +
              (uVar10 & uVar26 | uVar12 & (uVar10 ^ 0xffffffffffffffff)) +
              ((uVar10 >> 0xe | uVar10 << 0x32) ^ (uVar10 >> 0x12 | uVar10 << 0x2e) ^
              (uVar10 >> 0x29 | uVar10 * 0x800000));
      uVar17 = lVar1 + uVar17;
      uVar13 = ((uVar27 >> 0x1c | uVar27 << 0x24) ^ (uVar27 >> 0x22 | uVar27 * 0x40000000) ^
               (uVar27 >> 0x27 | uVar27 * 0x2000000)) +
               (uVar27 & (uVar18 ^ uVar16) ^ uVar18 & uVar16) + lVar1;
      uVar30 = ((uStack_68 >> 1 | uStack_68 << 0x3f) ^ (uStack_68 >> 8 | uStack_68 << 0x38) ^
               uStack_68 >> 7) + uVar30 + uVar11 +
               ((uVar28 >> 0x13 | uVar28 << 0x2d) ^ (uVar28 >> 0x3d | uVar28 * 8) ^ uVar28 >> 6);
      lVar1 = *plVar31 + uVar30 + uVar12 +
              (uVar17 & uVar10 | uVar26 & (uVar17 ^ 0xffffffffffffffff)) +
              ((uVar17 >> 0xe | uVar17 << 0x32) ^ (uVar17 >> 0x12 | uVar17 << 0x2e) ^
              (uVar17 >> 0x29 | uVar17 * 0x800000));
      uVar16 = lVar1 + uVar16;
      uVar12 = ((uVar13 >> 0x1c | uVar13 << 0x24) ^ (uVar13 >> 0x22 | uVar13 * 0x40000000) ^
               (uVar13 >> 0x27 | uVar13 * 0x2000000)) +
               (uVar13 & (uVar27 ^ uVar18) ^ uVar27 & uVar18) + lVar1;
      plVar31 = plVar31 + 0x10;
    }
    uVar2 = uVar12 + uVar2;
    uVar6 = uVar13 + uVar6;
    *param_1 = uVar2;
    param_1[1] = uVar6;
    uVar3 = uVar27 + uVar3;
    uVar7 = uVar18 + uVar7;
    param_1[2] = uVar3;
    param_1[3] = uVar7;
    uVar4 = uVar16 + uVar4;
    uVar8 = uVar17 + uVar8;
    param_1[4] = uVar4;
    param_1[5] = uVar8;
    uVar5 = uVar10 + uVar5;
    uVar9 = uVar26 + uVar9;
    param_2 = param_2 + 0x10;
    param_1[6] = uVar5;
    param_1[7] = uVar9;
  }
  return;
}



/* Entry: 006f7768; end: 006f7a37;  */

/* WARNING: Possible PIC construction at 0x006f77f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006f77f4) */
/* WARNING: Removing unreachable block (ram,0x006f77f8) */

ulong FUN_006f7768(ulong param_1,ulong param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,ulong param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong *unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = &stack0xfffffffffffffff0;
  if (param_3 == 0) {
    return 1;
  }
  func_0x006feae0();
  uVar2 = param_11;
  uVar1 = param_10;
  uVar8 = param_9;
  uVar10 = param_2;
  uStack_68 = param_8;
  func_0x006fd9c0();
  FUN_006ead80();
  uVar3 = param_1 == param_2;
  if ((bool)uVar3) {
    param_5 = param_5 - (param_5 >> 1);
    FUN_006eaa70();
    uStack_78 = uVar1;
    uStack_70 = uVar2;
    uStack_80 = uVar8;
    param_1 = param_2;
    func_0x006fe55c();
    unaff_x30 = 0x6f77f4;
    register0x00000008 = (BADSPACEBASE *)&uStack_80;
    unaff_x20 = param_7;
    unaff_x29 = puVar5;
  }
  else {
    param_9 = uVar8;
    param_10 = uVar1;
    param_11 = uVar2;
    func_0x006fe55c();
  }
  uVar8 = uStack_68;
  func_0x006fdcd0(unaff_x30);
  *(undefined1 **)((long)register0x00000008 + 0x50) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + 0x58) = extraout_x8;
  *(ulong *)((long)register0x00000008 + -0x208) = param_7;
  *(undefined8 *)((long)register0x00000008 + -0x200) = uVar8;
  *(undefined8 *)((long)register0x00000008 + -0x18) = *(undefined8 *)PTR____stack_chk_guard_00999f88
  ;
  *(ulong *)((long)register0x00000008 + -0x210) = (ulong)*(uint *)(param_1 + 4);
  *(undefined8 *)((long)register0x00000008 + -0x108) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x110) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0;
  *(undefined8 *)((long)register0x00000008 + -200) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0xb0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x168) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x158) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x160) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x148) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x150) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x138) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x140) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x128) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x130) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x120) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1e8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1b8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1c0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x198) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x1a0) = 0;
  *(undefined8 *)((long)register0x00000008 + -400) = 0;
  puVar5 = (undefined1 *)((long)register0x00000008 + -0x1f0);
  FUN_006ef7cc(puVar5,unaff_x22,param_5,param_1);
  iVar4 = (int)puVar5;
  if ((iVar4 != 0) && (func_0x006fe768(), iVar4 != 0)) {
    unaff_x22 = *(ulong **)((long)register0x00000008 + 0x68);
    func_0x006fd858();
    func_0x006fe960();
    func_0x006fd858();
    func_0x006fe728();
    func_0x006fd858();
    func_0x006fe6dc();
    puVar5 = (undefined1 *)((long)register0x00000008 + -0x110);
    func_0x006fe7f8();
    if ((int)puVar5 != 0) {
      while( true ) {
        iVar4 = (int)puVar5;
        func_0x006fe768();
        if (iVar4 == 0) break;
        func_0x006fd858();
        (*extraout_x8_00)();
        uVar3 = uVar10 == *(ulong *)((long)register0x00000008 + -0x210);
        if (*(ulong *)((long)register0x00000008 + -0x210) < uVar10) {
          iVar4 = (int)(undefined1 *)((long)register0x00000008 + -0x180);
          unaff_x22 = (ulong *)((long)register0x00000008 + -0x110);
          func_0x006efa10();
          if (iVar4 == 0) break;
        }
        func_0x006fd858();
        func_0x006fe960();
        func_0x006fd858();
        func_0x006fe728();
        func_0x006fd858();
        func_0x006fe6dc();
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x110);
        unaff_x22 = (ulong *)((long)register0x00000008 + -0xa0);
        FUN_006ef950(puVar5,unaff_x22,(undefined1 *)((long)register0x00000008 + -0x1f8));
        if ((int)puVar5 == 0) break;
        uVar9 = 0;
        unaff_x20 = uVar10;
        if (*(uint *)((long)register0x00000008 + -0x1f8) <= uVar10) {
          unaff_x20 = (ulong)*(uint *)((long)register0x00000008 + -0x1f8);
        }
        for (; unaff_x20 != uVar9; uVar9 = uVar9 + 1) {
          *(byte *)(param_2 + uVar9) =
               *(byte *)(param_2 + uVar9) ^ *(byte *)((long)register0x00000008 + (uVar9 - 0xa0));
        }
        uVar10 = uVar10 - unaff_x20;
        uVar3 = uVar10 == 0;
        if ((bool)uVar3) {
          uVar10 = 1;
          goto LAB_006f79ec;
        }
        puVar5 = (undefined1 *)((long)register0x00000008 + -0x180);
        func_0x006fe7f8();
        if ((int)puVar5 == 0) break;
        param_2 = param_2 + unaff_x20;
      }
    }
  }
  uVar10 = 0;
LAB_006f79ec:
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x40) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x28) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x58) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x48) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x50) = 0;
  func_0x006ef9d0((undefined1 *)((long)register0x00000008 + -0x110));
  func_0x006ef9d0((undefined1 *)((long)register0x00000008 + -0x180));
  puVar6 = (ulong *)((long)register0x00000008 + -0x1f0);
  func_0x006ef9d0();
  func_0x006fd534(*(undefined8 *)((long)register0x00000008 + -0x18));
  if ((bool)uVar3) {
    return uVar10;
  }
  ___stack_chk_fail();
  *(ulong *)((long)register0x00000008 + -0x230) = unaff_x20;
  *(ulong *)((long)register0x00000008 + -0x228) = uVar10;
  *(undefined1 **)((long)register0x00000008 + -0x220) =
       (undefined1 *)((long)register0x00000008 + 0x50);
  *(code **)((long)register0x00000008 + -0x218) = FUN_006f7a38;
  uVar10 = *unaff_x22;
  puVar6[1] = unaff_x22[1];
  *puVar6 = uVar10;
  uVar10 = *puVar6;
  FUN_006f7ad4();
  uVar9 = puVar6[1];
  FUN_006f7ad4();
  uVar7 = uVar9 & 0xffffffff00000000 | uVar10 >> 0x20;
  *puVar6 = uVar10 & 0xffffffff | uVar9 << 0x20;
  puVar6[1] = uVar7;
  return uVar7;
}



/* Entry: 006f7a38; end: 006f7ad3;  */

void FUN_006f7a38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = *param_1;
  FUN_006f7ad4();
  uVar2 = param_1[1];
  FUN_006f7ad4();
  *param_1 = uVar1 & 0xffffffff | uVar2 << 0x20;
  param_1[1] = uVar2 & 0xffffffff00000000 | uVar1 >> 0x20;
  return;
}



/* Entry: 006f7ad4; end: 006f7b0b;  */

ulong FUN_006f7ad4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (param_1 ^ param_1 >> 4) & 0xf000f000f000f0;
  param_1 = param_1 ^ uVar1 << 4;
  uVar1 = param_1 ^ uVar1;
  uVar2 = (param_1 ^ uVar1 >> 8) & 0xff000000ff00;
  uVar1 = uVar1 ^ uVar2 << 8;
  uVar2 = uVar1 ^ uVar2;
  uVar1 = (ulong)((uint)(uVar2 >> 0x10) ^ (uint)uVar1) & 0xffff0000;
  return uVar2 ^ uVar1 << 0x10 ^ uVar1;
}



/* Entry: 006f7b0c; end: 006f7b87;  */

void FUN_006f7b0c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x006fda88(param_1,param_1 + 8);
  func_0x006fda88(param_1 + 0x10,param_1 + 0x18);
  func_0x006fda88(param_1 + 0x20,param_1 + 0x28);
  func_0x006fda88(param_1 + 0x30,param_1 + 0x38);
  func_0x006fde4c(param_1,param_1 + 0x10);
  func_0x006fde4c(param_1 + 8,param_1 + 0x18);
  func_0x006fde4c(param_1 + 0x20,param_1 + 0x30);
  puVar1 = (ulong *)(param_1 + 0x38);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uVar3 >> 2 ^ *puVar1) & 0x3333333333333333;
  *(ulong *)(param_1 + 0x28) = uVar2 << 2 ^ uVar3;
  *puVar1 = *puVar1 ^ uVar2;
  return;
}



/* Entry: 006f7b88; end: 006f7d8f;  */

void FUN_006f7b88(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  func_0x006fdc38();
  uVar15 = param_1[7];
  uVar1 = param_1[4];
  uVar7 = param_1[2];
  uVar9 = uVar7 ^ uVar1;
  uVar2 = *param_1;
  uVar12 = param_1[1] ^ uVar15;
  uVar11 = uVar1 ^ uVar15;
  uVar10 = uVar7 ^ uVar15;
  uVar8 = param_1[5] ^ param_1[6];
  uVar3 = uVar2 ^ uVar8;
  uVar16 = uVar12 ^ uVar9;
  uVar14 = uVar3 ^ param_1[1];
  uVar7 = uVar16 ^ param_1[3] ^ uVar7;
  uVar5 = uVar16 ^ param_1[3] ^ param_1[6];
  uVar4 = uVar7 ^ uVar8;
  uVar18 = uVar5 ^ uVar11;
  uVar8 = uVar18 ^ uVar8;
  uVar27 = (uVar18 ^ uVar4) & uVar9 ^ uVar18 & uVar11;
  uVar13 = uVar18 & uVar11 ^ uVar4 & uVar10;
  uVar6 = uVar5 ^ uVar7 & uVar16 ^ (uVar7 ^ uVar2) & (uVar14 ^ uVar10) ^ uVar27;
  uVar20 = (uVar3 ^ uVar1) & uVar2 ^ uVar10 ^ uVar7 & uVar16 ^ uVar4 ^ uVar13;
  uVar27 = uVar14 & uVar3 ^ uVar12 ^ uVar8 & uVar12 ^ uVar27;
  uVar23 = uVar27 ^ uVar8;
  uVar13 = (uVar18 ^ uVar2) & (uVar3 ^ uVar15) ^ uVar15 ^ uVar8 & uVar12 ^ uVar13;
  uVar5 = uVar13 ^ uVar8;
  uVar25 = uVar6 ^ uVar20;
  uVar6 = uVar23 & uVar6;
  uVar26 = (uVar6 ^ uVar5) & uVar25 ^ uVar20;
  uVar13 = (uVar6 ^ uVar20) & (uVar13 ^ uVar27);
  uVar21 = uVar13 ^ uVar5;
  uVar20 = (uVar13 ^ uVar6) & uVar5;
  uVar23 = uVar20 ^ uVar23;
  uVar13 = uVar23 ^ uVar21;
  uVar25 = (uVar20 ^ uVar6 ^ uVar5) & uVar26 ^ uVar25;
  uVar22 = uVar25 ^ uVar13;
  uVar24 = uVar21 ^ uVar26;
  uVar8 = (uVar25 ^ uVar26) & uVar8;
  uVar19 = uVar26 & (uVar18 ^ uVar2);
  uVar5 = (uVar22 ^ uVar24) & (uVar18 ^ uVar4);
  uVar27 = uVar13 & (uVar14 ^ uVar10);
  uVar12 = (uVar25 ^ uVar26) & uVar12;
  uVar9 = (uVar22 ^ uVar24) & uVar9;
  uVar20 = uVar9 ^ uVar24 & uVar11;
  uVar14 = uVar25 & uVar14 ^ uVar19;
  uVar6 = uVar8 ^ uVar23 & uVar7;
  uVar17 = uVar12 ^ uVar21 & uVar2 ^ uVar6;
  uVar11 = uVar20 ^ uVar25 & uVar3;
  uVar8 = uVar8 ^ uVar24 & uVar18 ^ uVar5;
  uVar5 = uVar5 ^ uVar22 & uVar4 ^ uVar11;
  uVar11 = uVar27 ^ uVar23 & uVar16 ^ uVar11;
  uVar4 = uVar8 ^ uVar25 & uVar3;
  uVar15 = uVar17 ^ uVar26 & (uVar3 ^ uVar15) ^ uVar5;
  uVar7 = uVar11 ^ uVar13 & (uVar7 ^ uVar2);
  uVar6 = uVar7 ^ uVar6;
  *param_1 = uVar14 ^ uVar20 ^ uVar17 ^ 0xffffffffffffffff;
  param_1[1] = uVar14 ^ uVar12 ^ uVar5 ^ 0xffffffffffffffff;
  param_1[2] = uVar27 ^ uVar21 & (uVar3 ^ uVar1) ^ uVar15;
  param_1[3] = uVar19 ^ uVar21 & uVar2 ^ uVar7;
  param_1[4] = uVar6;
  param_1[5] = uVar4 ^ uVar22 & uVar10 ^ uVar9 ^ uVar15 ^ 0xffffffffffffffff;
  param_1[6] = uVar4 ^ uVar6 ^ 0xffffffffffffffff;
  param_1[7] = uVar11 ^ uVar8;
  return;
}



/* Entry: 006f7d90; end: 006f7f83;  */

void FUN_006f7d90(ulong *param_1,ulong *param_2,undefined4 param_3,ulong param_4)

{
  ulong uVar1;
  
  uVar1 = (*param_1 >> (param_4 & 0x3f) ^ *param_2) & CONCAT44(param_3,param_3);
  *param_1 = uVar1 << (param_4 & 0x3f) ^ *param_1;
  *param_2 = *param_2 ^ uVar1;
  return;
}



/* Entry: 006f7f84; end: 006f7faf;  */

void FUN_006f7f84(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  FUN_006f7fb0();
  FUN_006f7b88(param_1);
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar7 = param_1[5];
  uVar4 = param_1[6];
  uVar8 = param_1[7];
  uVar11 = uVar6 ^ uVar1;
  uVar9 = uVar7 ^ uVar2;
  uVar10 = uVar3 ^ uVar5;
  *param_1 = uVar9 ^ uVar8 ^ 0xffffffffffffffff;
  param_1[1] = uVar4 ^ uVar11;
  param_1[2] = uVar8 ^ uVar10 ^ 0xffffffffffffffff;
  param_1[3] = uVar9 ^ uVar1;
  param_1[4] = uVar6 ^ uVar5 ^ uVar4;
  param_1[5] = uVar8 ^ uVar2 ^ uVar3;
  param_1[6] = uVar7 ^ uVar11;
  param_1[7] = uVar4 ^ uVar10;
  return;
}



/* Entry: 006f7fb0; end: 006f8013;  */

void FUN_006f7fb0(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar7 = param_1[5];
  uVar4 = param_1[6];
  uVar8 = param_1[7];
  uVar11 = uVar6 ^ uVar1;
  uVar9 = uVar7 ^ uVar2;
  uVar10 = uVar3 ^ uVar5;
  *param_1 = uVar9 ^ uVar8 ^ 0xffffffffffffffff;
  param_1[1] = uVar4 ^ uVar11;
  param_1[2] = uVar8 ^ uVar10 ^ 0xffffffffffffffff;
  param_1[3] = uVar9 ^ uVar1;
  param_1[4] = uVar6 ^ uVar5 ^ uVar4;
  param_1[5] = uVar8 ^ uVar2 ^ uVar3;
  param_1[6] = uVar7 ^ uVar11;
  param_1[7] = uVar4 ^ uVar10;
  return;
}



/* Entry: 006f8014; end: 006f80ab;  */

void FUN_006f8014(ulong param_1,long param_2,long param_3,int param_4,uint param_5)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)param_4;
  uVar4 = param_1;
  func_0x006e3b2c();
  if (param_5 != 0) {
    plVar1 = (long *)(param_1 + lVar7 * 8);
    if ((int)param_5 < 0) {
      plVar3 = (long *)(param_3 + lVar7 * 8);
      for (uVar5 = (ulong)-param_5; uVar5 != 0; uVar5 = uVar5 - 1) {
        lVar7 = *plVar3;
        *plVar1 = -(lVar7 + uVar4);
        uVar4 = uVar4 | lVar7 + uVar4 != 0;
        plVar1 = plVar1 + 1;
        plVar3 = plVar3 + 1;
      }
    }
    else {
      puVar2 = (ulong *)(param_2 + lVar7 * 8);
      for (uVar5 = (ulong)param_5; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar6 = *puVar2;
        *plVar1 = uVar6 - uVar4;
        uVar4 = (ulong)(uVar6 < uVar4);
        plVar1 = plVar1 + 1;
        puVar2 = puVar2 + 1;
      }
    }
  }
  return;
}



/* Entry: 006f80ac; end: 006f85f7;  */

void FUN_006f80ac(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                 uint param_6,ulong param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  ulong extraout_x9;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined8 unaff_x30;
  
  func_0x006fdfa4();
  iVar10 = (int)param_4;
  uVar5 = iVar10 * 2;
  uVar12 = (ulong)uVar5;
  uVar14 = (uint)param_5;
  if (iVar10 < 8) {
    func_0x006e8618(param_1,param_2,(long)(int)(uVar14 + iVar10),param_3,
                    (long)(int)(param_6 + iVar10));
    lVar9 = (long)(int)(uVar5 - (uVar14 + param_6));
    func_0x006fdc84(param_1 + (long)(int)uVar5 * 8 + (long)(int)uVar14 * 8 + (long)(int)param_6 * 8,
                    0,lVar9,unaff_x30);
    if (lVar9 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0077a870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memset_0099a408)();
    return;
  }
  uVar11 = param_4 & 0xffffffff;
  lVar9 = param_2 + (param_4 & 0xffffffff) * 8;
  lVar1 = param_7 + uVar12 * 8;
  uVar7 = param_7;
  FUN_006e83cc(param_7,param_2,lVar9,param_5,iVar10 - uVar14,lVar1);
  lVar2 = param_7 + (param_4 & 0xffffffff) * 8;
  lVar3 = param_3 + (param_4 & 0xffffffff) * 8;
  uVar8 = uVar7;
  func_0x006fe55c();
  FUN_006e83cc();
  lVar4 = param_1 + uVar12 * 8;
  if (iVar10 == 8) {
    func_0x006e6fe0(lVar1,param_7,lVar2);
    func_0x006e6fe0(param_1,param_2,param_3);
    func_0x006e8618(lVar4,lVar9,(long)(int)uVar14,lVar3,(long)(int)param_6);
    func_0x006fd9c0(param_1 + (long)(int)(param_6 + uVar14 + 0x10) * 8);
    uVar13 = 0x20;
  }
  else {
    uVar13 = (ulong)(uint)(iVar10 << 2);
    func_0x006fe018(lVar1,param_7,lVar2);
    func_0x006fe018(param_1,param_2,param_3);
    func_0x006fd9c0(lVar4);
    if ((int)uVar14 < 0x10 && (int)param_6 < 0x10) {
      func_0x006e8618(lVar4,lVar9,(long)(int)uVar14,lVar3,(long)(int)param_6);
    }
    else {
      uVar5 = uVar14;
      if ((int)uVar14 <= (int)param_6) {
        uVar5 = param_6;
      }
      do {
        uVar6 = (int)param_4 / 2;
        param_4 = (ulong)uVar6;
        if ((int)uVar6 < (int)uVar5) {
          FUN_006f80ac(lVar4,lVar9,lVar3,param_4,uVar14 - uVar6,param_6 - uVar6,param_7 + uVar13 * 8
                      );
          goto LAB_006f82d0;
        }
      } while (uVar14 != uVar6 && param_6 != uVar6);
      func_0x006f8380(lVar4);
    }
  }
LAB_006f82d0:
  func_0x006fdcc4();
  func_0x006fe0c0();
  FUN_006e3678();
  func_0x006fea74();
  func_0x006e3b2c();
  func_0x006fe8f4(lVar1,param_7);
  FUN_006e4030(lVar1,uVar8 ^ uVar7,param_7 + uVar13 * 8,lVar1,uVar12);
  param_1 = param_1 + uVar11 * 8;
  func_0x006fe8f4(param_1,param_1);
  uVar12 = (ulong)(uint)(iVar10 * 3);
  while ((int)uVar12 < (int)uVar13) {
    func_0x006fe5e0();
    uVar12 = extraout_x9;
  }
  return;
}



/* Entry: 006f85f8; end: 006f8627;  */

void FUN_006f85f8(void)

{
  uRam0000000000b6c8d8 = 0;
  uRam0000000000b6c8f0 = 0;
  uRam0000000000b6c8f8 = 0;
  uRam0000000000b6c8c8 = 0x1000000010;
  uRam0000000000b6c8c0 = 0x10000001a3;
  uRam0000000000b6c8d0 = 0x200000108;
  pcRam0000000000b6c8e0 = FUN_006f8628;
  pcRam0000000000b6c8e8 = FUN_006f86a4;
  return;
}



/* Entry: 006f8628; end: 006f86a3;  */

undefined8 FUN_006f8628(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  uVar2 = *(uint *)(*param_1 + 0x14) & 0x3f;
  FUN_006e2b7c(param_2,(int)param_1[3] << 3,lVar4);
  pcVar1 = FUN_006e32c4;
  if (uVar2 != 2) {
    pcVar1 = (code *)0x0;
  }
  pcVar3 = FUN_006e2af4;
  if (0xfffffffd < uVar2 - 3 && param_4 == 0) {
    pcVar3 = (code *)0x6e2b38;
  }
  *(code **)(lVar4 + 0xf8) = pcVar3;
  *(code **)(lVar4 + 0x100) = pcVar1;
  return 1;
}



/* Entry: 006f86a4; end: 006f88db;  */

undefined8 FUN_006f86a4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulong *puVar3;
  code *extraout_x8;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *unaff_x19;
  byte *unaff_x21;
  code *pcVar8;
  ulong auStack_60 [2];
  
  func_0x006fddc8();
  if (*(long *)(*(long *)(param_1 + 0x10) + 0x100) == 0) {
    pbVar1 = (byte *)(param_1 + 0x34);
    pcVar8 = *(code **)(*(long *)(param_1 + 0x10) + 0xf8);
    if (*(int *)(param_1 + 0x1c) == 0) {
      if (param_4 != 0) {
        pbVar4 = unaff_x19;
        pbVar7 = pbVar1;
        if ((unaff_x19 < unaff_x21) ||
           ((byte *)((long)&MACH_HEADER.reserved + 3) < unaff_x19 && unaff_x21 <= unaff_x19 + -0x20)
           ) {
          while (unaff_x19 = pbVar4, 0xf < param_4) {
            func_0x006fd7d4();
            (*pcVar8)();
            for (uVar5 = 0; uVar5 < 0x10; uVar5 = uVar5 + 8) {
              *(ulong *)(unaff_x21 + uVar5) =
                   *(ulong *)(pbVar7 + uVar5) ^ *(ulong *)(unaff_x21 + uVar5);
            }
            unaff_x21 = unaff_x21 + 0x10;
            pbVar4 = unaff_x19 + 0x10;
            param_4 = param_4 - 0x10;
            pbVar7 = unaff_x19;
          }
          uVar6 = *(undefined8 *)pbVar7;
          *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(pbVar7 + 8);
          *(undefined8 *)pbVar1 = uVar6;
        }
        else {
          while (0xf < param_4) {
            func_0x006fe0e4();
            func_0x006fdfc0();
            for (uVar5 = 0; uVar5 < 0x10; uVar5 = uVar5 + 8) {
              uVar6 = *(undefined8 *)(unaff_x19 + uVar5);
              *(ulong *)(unaff_x21 + uVar5) =
                   *(ulong *)(pbVar1 + uVar5) ^ *(ulong *)((long)auStack_60 + uVar5);
              *(undefined8 *)(pbVar1 + uVar5) = uVar6;
            }
            unaff_x19 = unaff_x19 + 0x10;
            unaff_x21 = unaff_x21 + 0x10;
            param_4 = param_4 - 0x10;
          }
        }
        if (param_4 != 0) {
          func_0x006fe0e4();
          func_0x006fdfc0();
          pbVar4 = pbVar1;
          pbVar7 = unaff_x19;
          puVar3 = auStack_60;
          for (uVar5 = param_4; uVar5 != 0; uVar5 = uVar5 - 1) {
            bVar2 = *pbVar7;
            *unaff_x21 = *pbVar4 ^ *(byte *)puVar3;
            *pbVar4 = bVar2;
            pbVar4 = pbVar4 + 1;
            pbVar7 = pbVar7 + 1;
            unaff_x21 = unaff_x21 + 1;
            puVar3 = (ulong *)((long)puVar3 + 1);
          }
          for (; param_4 != 0x10; param_4 = param_4 + 1) {
            pbVar1[param_4] = unaff_x19[param_4];
          }
        }
      }
    }
    else {
      pbVar4 = pbVar1;
      if (param_4 != 0) {
        while (0xf < param_4) {
          for (uVar5 = 0; uVar5 < 0x10; uVar5 = uVar5 + 8) {
            *(ulong *)(unaff_x21 + uVar5) =
                 *(ulong *)(pbVar4 + uVar5) ^ *(ulong *)(unaff_x19 + uVar5);
          }
          func_0x006fddb0();
          func_0x006fdfc0();
          unaff_x19 = unaff_x19 + 0x10;
          pbVar4 = unaff_x21;
          unaff_x21 = unaff_x21 + 0x10;
          param_4 = param_4 - 0x10;
        }
        if (param_4 != 0) {
          for (uVar5 = 0; uVar5 < param_4; uVar5 = uVar5 + 1) {
            unaff_x21[uVar5] = pbVar4[uVar5] ^ unaff_x19[uVar5];
          }
          pbVar7 = unaff_x21 + uVar5;
          for (; uVar5 < 0x10; uVar5 = uVar5 + 1) {
            *pbVar7 = pbVar4[uVar5];
            pbVar7 = pbVar7 + 1;
          }
          func_0x006fddb0();
          func_0x006fdfc0();
          pbVar4 = unaff_x21;
        }
        uVar6 = *(undefined8 *)pbVar4;
        *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(pbVar4 + 8);
        *(undefined8 *)pbVar1 = uVar6;
      }
    }
  }
  else {
    func_0x006fdab0();
    (*extraout_x8)();
  }
  return 1;
}



/* Entry: 006f88dc; end: 006f88fb;  */

void FUN_006f88dc(void)

{
  uRam0000000000b6c908 = 0xc00000010;
  uRam0000000000b6c900 = 0x10000037f;
  uRam0000000000b6c918 = 0;
  pcRam0000000000b6c920 = FUN_006f88fc;
  uRam0000000000b6c910 = 0x1f86000002b8;
  uRam0000000000b6c928 = 0x6f89c4;
  pcRam0000000000b6c930 = FUN_006f8abc;
  pcRam0000000000b6c938 = FUN_006f8afc;
  return;
}



/* Entry: 006f88fc; end: 006f8abb;  */

undefined8 FUN_006f88fc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  
  if (param_2 != 0 || param_3 != 0) {
    func_0x006fdbac();
    func_0x006fe9f8();
    lVar1 = extraout_x8 + extraout_x9;
    if (param_2 == 0) {
      if (*(int *)(lVar1 + 0x288) == 0) {
        func_0x006fe8a8(*(undefined8 *)(lVar1 + 0x290));
      }
      else {
        func_0x006fde94();
        FUN_006f0ce0();
      }
      *(undefined4 *)(lVar1 + 0x28c) = 1;
      *(undefined4 *)(lVar1 + 0x2a0) = 0;
    }
    else {
      func_0x006fe314(lVar1);
      func_0x006ea37c(lVar1 + 400,lVar1 + 0x50);
      *(code **)(lVar1 + 0x2a8) = FUN_006e3180;
      if ((unaff_x20 != 0) || ((*(int *)(lVar1 + 0x28c) != 0 && (*(long *)(lVar1 + 0x290) != 0)))) {
        func_0x006fde94();
        FUN_006f0ce0();
        *(undefined4 *)(lVar1 + 0x28c) = 1;
      }
      *(undefined4 *)(lVar1 + 0x288) = 1;
    }
  }
  return 1;
}



/* Entry: 006f8abc; end: 006f8afb;  */

void FUN_006f8abc(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x9;
  long *plVar2;
  
  func_0x006fe9f8();
  func_0x006fe314(extraout_x8 + extraout_x9);
  lVar1 = *(long *)(extraout_x8 + extraout_x9 + 0x290);
  if (lVar1 == param_1 + 0x34) {
    return;
  }
  if (lVar1 != 0) {
    plVar2 = (long *)(lVar1 + -8);
    FUN_00701f08(plVar2,*plVar2 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar2);
    return;
  }
  return;
}



/* Entry: 006f8afc; end: 006f8da7;  */

void FUN_006f8afc(long *param_1,int param_2,ulong param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x9;
  long lVar7;
  uint uVar8;
  
  func_0x006fe9f8();
  lVar5 = extraout_x8 + extraout_x9;
  uVar8 = (uint)param_3;
  switch(param_2) {
  case 8:
    lVar6 = *(ulong *)(param_4 + 0x10) + (*(ulong *)(param_4 + 0x10) & 8);
    func_0x006fdcc4();
    _memcpy();
    if (*(long *)(lVar5 + 0x290) == (long)param_1 + 0x34) {
      *(long *)(lVar6 + 0x290) = param_4 + 0x34;
      return;
    }
    lVar5 = (long)*(int *)(lVar5 + 0x298);
    func_0x00701e90();
    *(long *)(lVar6 + 0x290) = lVar5;
    if (lVar5 == 0) {
      return;
    }
    goto code_r0x006f8c24;
  case 9:
    if (0 < (int)uVar8) {
      if ((0x10 < uVar8) && (*(int *)(lVar5 + 0x298) < (int)uVar8)) {
        if (*(long *)(lVar5 + 0x290) != (long)param_1 + 0x34) {
          func_0x00701ed0();
        }
        param_3 = param_3 & 0xffffffff;
        func_0x00701e90();
        *(ulong *)(lVar5 + 0x290) = param_3;
        if (param_3 == 0) {
          return;
        }
      }
      *(uint *)(lVar5 + 0x298) = uVar8;
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    break;
  case 0x10:
    if (uVar8 - 0x11 < 0xfffffff0) {
      return;
    }
    if (*(int *)((long)param_1 + 0x1c) == 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x29c) < 0) {
      return;
    }
code_r0x006f8c24:
    func_0x006e3440();
    break;
  case 0x11:
    if ((0xffffffef < uVar8 - 0x11) && (*(int *)((long)param_1 + 0x1c) == 0)) {
      func_0x006fe420((long)param_1 + 0x44);
      *(uint *)(lVar5 + 0x29c) = uVar8;
    }
    break;
  case 0x12:
    if (uVar8 == 0xffffffff) {
      func_0x006fe420(*(undefined8 *)(lVar5 + 0x290));
    }
    else {
      if ((int)uVar8 < 4) {
        return;
      }
      if ((int)(*(int *)(lVar5 + 0x298) - uVar8) < 8) {
        return;
      }
      func_0x006fde2c(*(undefined8 *)(lVar5 + 0x290),param_4);
      if (*(int *)((long)param_1 + 0x1c) != 0) {
        FUN_006e92d4(*(long *)(lVar5 + 0x290) + (param_3 & 0xffffffff),
                     (long)*(int *)(lVar5 + 0x298) - (long)(int)uVar8);
      }
    }
    *(undefined4 *)(lVar5 + 0x2a0) = 1;
    break;
  case 0x13:
    if (*(int *)(lVar5 + 0x2a0) == 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x288) == 0) {
      return;
    }
    func_0x006fde94(0xffffffff);
    FUN_006f0ce0();
    uVar4 = *(uint *)(lVar5 + 0x298);
    uVar2 = uVar8;
    if ((int)uVar4 <= (int)uVar8) {
      uVar2 = uVar4;
    }
    uVar3 = uVar4;
    if (0 < (int)uVar8) {
      uVar3 = uVar2;
    }
    func_0x006e3440(param_4,(*(long *)(lVar5 + 0x290) + (long)(int)uVar4) - (long)(int)uVar3,
                    (long)(int)uVar3);
    lVar6 = 0;
    lVar7 = (long)*(int *)(lVar5 + 0x298) + *(long *)(lVar5 + 0x290) + -1;
    do {
      cVar1 = *(char *)(lVar7 + lVar6) + '\x01';
      *(char *)(lVar7 + lVar6) = cVar1;
      if (lVar6 == -7) break;
      lVar6 = lVar6 + -1;
    } while (cVar1 == '\0');
    goto code_r0x006f8d68;
  case 0x18:
    if (*(int *)(lVar5 + 0x2a0) == 0) {
      return;
    }
    if (*(int *)(lVar5 + 0x288) == 0) {
      return;
    }
    if (*(int *)((long)param_1 + 0x1c) != 0) {
      return;
    }
    func_0x006fe420((*(long *)(lVar5 + 0x290) + (long)*(int *)(lVar5 + 0x298)) - (long)(int)uVar8);
    func_0x006fde94();
    FUN_006f0ce0();
code_r0x006f8d68:
    *(undefined4 *)(lVar5 + 0x28c) = 1;
    break;
  default:
    if (param_2 == 0) {
      *(undefined8 *)(lVar5 + 0x288) = 0;
      *(undefined4 *)(lVar5 + 0x298) = *(undefined4 *)(*param_1 + 0xc);
      *(long *)(lVar5 + 0x290) = (long)param_1 + 0x34;
      *(undefined8 *)(lVar5 + 0x29c) = 0xffffffff;
    }
  }
  return;
}



/* Entry: 006f8da8; end: 006f8e27;  */

void FUN_006f8da8(void)

{
  uRam0000000000b6c958 = 0;
  uRam0000000000b6c970 = 0;
  uRam0000000000b6c978 = 0;
  uRam0000000000b6c948 = 0x1000000018;
  uRam0000000000b6c940 = 0x10000001a7;
  uRam0000000000b6c950 = 0x200000108;
  pcRam0000000000b6c960 = FUN_006f8628;
  pcRam0000000000b6c968 = FUN_006f86a4;
  return;
}



/* Entry: 006f8e28; end: 006f8e4f;  */

void FUN_006f8e28(int param_1)

{
  func_0x006fd9dc();
  func_0x006fde58();
  if (param_1 != 0) {
    func_0x006fe470();
  }
  return;
}



/* Entry: 006f8e50; end: 006f8e53;  */

void FUN_006f8e50(void)

{
  return;
}



/* Entry: 006f8e54; end: 006f90df;  */

undefined8 *
FUN_006f8e54(long param_1,ulong *param_2,ulong *param_3,ulong *param_4,dword *param_5,
            undefined8 param_6,ulong *param_7,char *param_8)

{
  char *pcVar1;
  dword *pdVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong *unaff_x20;
  char *pcVar9;
  undefined8 in_stack_00000050;
  dword *in_stack_00000060;
  char *in_stack_00000068;
  dword *in_stack_00000070;
  undefined8 in_stack_00000078;
  char *in_stack_00000080;
  undefined8 auStack_360 [10];
  undefined1 auStack_310 [320];
  undefined1 auStack_1d0 [40];
  ulong *puStack_1a8;
  undefined8 auStack_1a0 [8];
  undefined8 *puStack_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  
  func_0x006fdcd0();
  func_0x006fd588();
  pcVar9 = (char *)(ulong)*(byte *)(param_1 + 0x250);
  pcVar1 = (char *)((long)in_stack_00000070 + (long)pcVar9);
  uVar3 = pcVar1 == (char *)0x0;
  puVar7 = param_7;
  if (CARRY8((ulong)in_stack_00000070,(ulong)pcVar9)) {
    func_0x006fd918();
    in_stack_00000080 = section_00000068.sectname + 0xd;
    param_7 = param_4;
    pcVar8 = param_8;
LAB_006f8f34:
    func_0x006fd5dc();
    puVar5 = (undefined8 *)0x0;
    param_3 = unaff_x20;
  }
  else {
    uVar3 = param_5 == (dword *)pcVar1;
    if (param_5 < pcVar1) {
      func_0x006fd918();
      in_stack_00000080 = (char *)((long)&segment_command_00000020.flags + 3);
      param_7 = param_4;
      pcVar8 = param_8;
      goto LAB_006f8f34;
    }
    if (param_7 == (ulong *)0x0) {
      func_0x006fd918();
      in_stack_00000080 = section_00000068.sectname + 7;
      param_7 = param_4;
      pcVar8 = param_8;
      goto LAB_006f8f34;
    }
    pcVar8 = param_8;
    puStack_1a8 = param_4;
    func_0x006fe314(auStack_1a0);
    puVar5 = &uStack_150;
    _memcpy(puVar5,param_1 + 0x100,0x130);
    func_0x006fe4fc();
    FUN_006f0ce0();
    if (in_stack_00000080 == (char *)0x0) {
LAB_006f8f08:
      if (*(long *)(param_1 + 0x230) == 0) {
        func_0x006fe4fc();
        func_0x006f0ed8();
        iVar4 = (int)puVar5;
        param_7 = param_2;
        param_5 = in_stack_00000060;
      }
      else {
        func_0x006fe4fc();
        func_0x006f11f8();
        iVar4 = (int)puVar5;
        param_7 = param_2;
        param_5 = in_stack_00000060;
      }
      in_stack_00000080 = param_8;
      if (iVar4 != 0) {
        if (in_stack_00000070 != (dword *)0x0) {
          param_7 = param_3;
          param_5 = in_stack_00000070;
          if (*(long *)(param_1 + 0x230) == 0) {
            func_0x006fe4fc();
            func_0x006f0ed8();
            iVar4 = (int)puVar5;
          }
          else {
            func_0x006fe4fc();
            func_0x006f11f8();
            iVar4 = (int)puVar5;
          }
          in_stack_00000080 = in_stack_00000068;
          if (iVar4 == 0) goto LAB_006f8f3c;
        }
        func_0x006f1500(auStack_1a0,(long)param_3 + (long)in_stack_00000070,pcVar9);
        *puStack_1a8 = (ulong)pcVar1;
        puVar5 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        in_stack_00000080 = pcVar9;
      }
    }
    else {
      puVar5 = auStack_1a0;
      FUN_006f0de0(puVar5,in_stack_00000078,in_stack_00000080);
      if ((int)puVar5 != 0) goto LAB_006f8f08;
    }
  }
LAB_006f8f3c:
  func_0x006fd508();
  if ((bool)uVar3) {
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x006fdcd0(0x6f8fc4);
  puVar6 = auStack_360;
  puStack_160 = &stack0x00000050;
  func_0x006fd588();
  if (param_7 == (ulong *)0x0) {
    func_0x006fd918();
    pcVar8 = pcVar1;
    puVar7 = param_3;
  }
  else {
    uVar3 = (ulong *)pcVar8 == (ulong *)(ulong)*(byte *)(puVar5 + 0x4a);
    if ((bool)uVar3) {
      func_0x006fe314(auStack_360);
      _memcpy(auStack_310,puVar5 + 0x20,0x130);
      FUN_006f0ce0(auStack_360,puVar5 + 1,in_stack_00000080);
      FUN_006f0de0(auStack_360,uStack_150,uStack_148);
      if ((int)puVar6 == 0) goto LAB_006f90c0;
      if (puVar5[0x46] == 0) {
        func_0x006fe604();
        func_0x006f106c();
        iVar4 = (int)puVar6;
      }
      else {
        func_0x006fe604();
        func_0x006f1334();
        iVar4 = (int)puVar6;
      }
      if (iVar4 == 0) goto LAB_006f90c0;
      func_0x006f1500(auStack_360,auStack_1d0,pcVar8);
      iVar4 = (int)auStack_1d0;
      func_0x006fdbc4();
      FUN_00701f80();
      param_3 = puVar7;
      if (iVar4 == 0) {
        puVar6 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        goto LAB_006f90c0;
      }
    }
    func_0x006fd918();
    param_7 = (ulong *)0x0;
    puVar7 = param_3;
  }
  param_5 = (dword *)0x0;
  FUN_006de8e4();
  puVar6 = (undefined8 *)0x0;
LAB_006f90c0:
  func_0x006fd508();
  if ((bool)uVar3) {
    return puVar6;
  }
  ___stack_chk_fail();
  func_0x006fd8fc();
  if ((((ulong)param_7 & 0x1ffffffffffffff7) == 0x10) ||
     (((ulong)param_7 & 0x1fffffffffffffff) == 0x20)) {
    pdVar2 = &MACH_HEADER.ncmds;
    if (param_5 != (dword *)0x0) {
      pdVar2 = param_5;
    }
    if (pdVar2 < (dword *)0x11) {
      func_0x006ea37c(puVar7,puVar7 + 0x1f);
      puVar7[0x45] = (ulong)FUN_006e3180;
      *(dword **)pcVar8 = pdVar2;
      return (undefined8 *)((long)&MACH_HEADER.magic + 1);
    }
    func_0x006fd918();
  }
  else {
    func_0x006fd918();
  }
  func_0x006fd5dc();
  return (undefined8 *)0x0;
}



/* Entry: 006f90e0; end: 006f916b;  */

undefined8 FUN_006f90e0(void)

{
  ulong uVar1;
  ulong in_x3;
  ulong in_x4;
  ulong *unaff_x19;
  long unaff_x20;
  
  func_0x006fd8fc();
  if (((in_x3 & 0x1ffffffffffffff7) == 0x10) || ((in_x3 & 0x1fffffffffffffff) == 0x20)) {
    uVar1 = 0x10;
    if (in_x4 != 0) {
      uVar1 = in_x4;
    }
    if (uVar1 < 0x11) {
      func_0x006ea37c();
      *(code **)(unaff_x20 + 0x228) = FUN_006e3180;
      *unaff_x19 = uVar1;
      return 1;
    }
    func_0x006fd918();
  }
  else {
    func_0x006fd918();
  }
  func_0x006fd5dc();
  return 0;
}


