/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b92bbd4; end: 10b92c04b;  */

void FUN_10b92bbd4(void)

{
  return;
}



/* Entry: 10b92c04c; end: 10b92c073;  */

undefined8 * FUN_10b92c04c(undefined8 *param_1)

{
  FUN_10b92c20c(param_1 + 2);
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x000107c60d2c(*param_1);
  }
  return param_1;
}



/* Entry: 10b92c074; end: 10b92c097;  */

void FUN_10b92c074(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  int extraout_w11;
  long *plVar2;
  long unaff_x19;
  long unaff_x21;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 uStack_58;
  
  if (*(char *)(param_1 + 8) != '\x01') {
    return;
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    lVar1 = 1;
    __ZNSt3__120__throw_system_errorEiPKc(1,&UNK_10f47b5f6);
    func_0x000108111fec();
    lStack_60 = lVar1 + 0x98;
    uStack_58 = 1;
    __ZNSt3__115recursive_mutex4lockEv();
    func_0x000108110960(unaff_x21 + 0x40);
    plVar2 = *(long **)(unaff_x21 + 0x18);
    func_0x0001081109a8(&lStack_70,&stack0xffffffffffffff88);
    uStack_68 = 0;
    if (lStack_70 != 0) {
      do {
        func_0x000108111ef8();
        uStack_68 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    func_0x00010811200c(*(undefined8 *)(*plVar2 + 0x20));
    func_0x0001081099dc(uStack_68);
    func_0x00010811186c(lStack_70);
    func_0x000108112004();
    return;
  }
  func_0x0001081120cc();
  __ZNSt3__115recursive_mutex6unlockEv();
  *(undefined1 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 10b92c098; end: 10b92c1af;  */

long FUN_10b92c098(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1 + param_1[1] * 0x10;
  if (param_1[1] == param_1[2]) {
    FUN_10b92c2d0(&lStack_28,param_1,lVar1,1);
  }
  else {
    FUN_10b9269fc(lVar1,param_2);
    param_1[1] = param_1[1] + 1;
    lStack_28 = lVar1;
  }
  return lStack_28;
}



/* Entry: 10b92c1b0; end: 10b92c20b;  */

void FUN_10b92c1b0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_3;
  lVar1 = *param_2 + param_2[1] * 0x10;
  func_0x00010b92c444(lVar2 + 0x10,lVar1,lVar2);
  FUN_10b9244a4(lVar1 + -0x10);
  param_2[1] = param_2[1] + -1;
  *param_1 = lVar2;
  return;
}



/* Entry: 10b92c20c; end: 10b92c297;  */

undefined8 * FUN_10b92c20c(undefined8 *param_1)

{
  func_0x00010b92c234(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    FUN_10b92c298(param_1,param_1);
  }
  return param_1;
}



/* Entry: 10b92c298; end: 10b92c2b3;  */

void FUN_10b92c298(long param_1,long *param_2)

{
  if (param_1 + 0x18 != *param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92c2b4; end: 10b92c2cf;  */

void FUN_10b92c2b4(long param_1)

{
  FUN_10b9269fc();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10b92c2d0; end: 10b92c3fb;  */

long * FUN_10b92c2d0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  
  uVar3 = param_2[2];
  uVar1 = param_2[1] + (long)param_4;
  if (uVar1 - uVar3 <= 0x7ffffffffffffff - uVar3) {
    if (uVar3 >> 0x3d == 0) {
      uVar8 = (uVar3 << 3) / 5;
    }
    else {
      uVar8 = uVar3 << 3;
      if (4 < uVar3 >> 0x3d) {
        uVar8 = 0xffffffffffffffff;
      }
    }
    if (0x7fffffffffffffe < uVar8) {
      uVar8 = 0x7ffffffffffffff;
    }
    uVar3 = uVar1;
    if (uVar1 <= uVar8) {
      uVar3 = uVar8;
    }
    if (uVar1 >> 0x3b == 0) {
      lVar9 = *param_2;
      lVar5 = uVar3 << 4;
      __Znwm();
      lVar2 = *param_2;
      lVar4 = param_2[1];
      lVar6 = lVar2;
      FUN_10b92c3fc(lVar2,param_3,lVar5);
      FUN_10b9269fc();
      plVar7 = param_3;
      FUN_10b92c3fc(param_3,lVar2 + lVar4 * 0x10,lVar6 + (long)param_4 * 0x10);
      if (lVar2 != 0) {
        func_0x00010b92c234(param_2,lVar2,param_2[1]);
        plVar7 = param_2;
        FUN_10b92c298(param_2,param_2,param_2[2]);
      }
      *param_2 = lVar5;
      param_2[1] = param_2[1] + (long)param_4;
      param_2[2] = uVar3;
      *param_1 = (long)param_3 + (lVar5 - lVar9);
      return plVar7;
    }
  }
  _abort();
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    FUN_10b9269fc(param_4,param_2);
    param_4 = param_4 + 2;
  }
  return param_4;
}



/* Entry: 10b92c3fc; end: 10b92c48b;  */

long FUN_10b92c3fc(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_10b9269fc(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  return param_3;
}



/* Entry: 10b92c48c; end: 10b92c507;  */

long FUN_10b92c48c(long param_1,long param_2)

{
  func_0x00010b92c4bc();
  func_0x000107c31068(param_1 + 8,param_2 + 8);
  return param_1;
}



/* Entry: 10b92c508; end: 10b92c51b;  */

void FUN_10b92c508(void)

{
  return;
}



/* Entry: 10b92c51c; end: 10b92c577;  */

undefined8 FUN_10b92c51c(void)

{
  int iVar1;
  
  if ((bRam0000000113846828 & 1) == 0) {
    iVar1 = 0x13846828;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000107c31088(0x113846820,&UNK_10f7cdeb3);
      ___cxa_guard_release(0x113846828);
    }
  }
  return 0x113846820;
}



/* Entry: 10b92c578; end: 10b92c5a3;  */

undefined8 * FUN_10b92c578(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76fb8;
  FUN_10b92de1c(param_1 + 2);
  return param_1;
}



/* Entry: 10b92c5a4; end: 10b92c5a7;  */

undefined8 * FUN_10b92c5a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d76fb8;
  FUN_10b92de1c(param_1 + 2);
  return param_1;
}



/* Entry: 10b92c5a8; end: 10b92c5bb;  */

void FUN_10b92c5a8(void)

{
  FUN_10b92c578();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92c5bc; end: 10b92c617;  */

long FUN_10b92c5bc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x10;
  func_0x00010b92c5f4();
  lVar1 = 0;
  if (*(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x28) != lVar2) {
    lVar1 = param_2 + 8;
  }
  return lVar1;
}



/* Entry: 10b92c618; end: 10b92c973;  */

long * FUN_10b92c618(undefined8 *param_1,undefined8 param_2,undefined ***param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 extraout_x8;
  long lVar11;
  long lVar12;
  undefined8 extraout_x8_00;
  undefined8 uVar13;
  long lVar14;
  long extraout_x9;
  int extraout_w10;
  int extraout_w12;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined **ppuStack_138;
  long lStack_130;
  undefined1 auStack_128 [16];
  long lStack_118;
  undefined **ppuStack_110;
  byte bStack_108;
  undefined1 uStack_100;
  undefined1 uStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  long lStack_b8;
  undefined8 auStack_b0 [2];
  undefined *puStack_a0;
  undefined ***pppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x00010b92f918();
  uStack_70 = extraout_x8;
  FUN_10b9ad2f0(&lStack_b8);
  uVar6 = lStack_b8 == 1;
  if ((bool)uVar6) {
    bStack_108 = 1;
    ppuStack_110 = &PTR_FUN_110d7e6e0;
    uStack_100 = 0;
    uStack_f8 = 0;
    param_3 = &ppuStack_110;
    FUN_10b9aabd0(&lStack_118,auStack_b0);
    lVar14 = lStack_118;
    if ((bStack_108 & 1) == 0) {
      FUN_10b9a0084(&puStack_a0,&ppuStack_110);
      *param_1 = 2;
      param_1[1] = puStack_a0;
      puStack_a0 = (undefined *)0x0;
      func_0x00010b92fbcc();
    }
    else {
      uStack_c8 = 0;
      puStack_f0 = &UNK_10dd5b8b0;
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      puVar7 = (undefined *)(lStack_118 + 0x10);
      func_0x00010527d444();
      lVar11 = *(long *)(lVar14 + 0x10);
      lVar14 = *(long *)(lVar14 + 0x28);
      puStack_a0 = puVar7;
      pppuStack_98 = param_3;
      while (pppuVar5 = pppuStack_98, uVar6 = puStack_a0 == (undefined *)(lVar11 + lVar14),
            !(bool)uVar6) {
        ppuVar8 = &puStack_f0;
        FUN_10b92dfe8(ppuVar8,pppuStack_98);
        lVar12 = 0;
        uVar15 = (ulong)ppuVar8 >> 7;
        while( true ) {
          uVar15 = uVar15 & uStack_d8;
          uVar16 = *(ulong *)(puStack_f0 + uVar15);
          uVar17 = uVar16 ^ ((ulong)ppuVar8 & 0x7f) * 0x101010101010101;
          for (uVar17 = uVar17 + 0xfefefefefefefeff & (uVar17 ^ 0xffffffffffffffff) &
                        0x8080808080808080; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
            uVar2 = (uVar17 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar17 >> 7 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            ppuVar18 = (undefined **)
                       (uVar15 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uStack_d8);
            uVar6 = 1;
            if (*(undefined ***)(lStack_e8 + (long)ppuVar18 * 0x20) == *pppuVar5)
            goto LAB_10b92c7d8;
          }
          uVar6 = (uVar16 & ~uVar16 << 6 & 0x8080808080808080) == 0;
          if (!(bool)uVar6) break;
          lVar12 = lVar12 + 8;
          uVar15 = lVar12 + uVar15;
        }
        ppuVar18 = &puStack_f0;
        FUN_10b92e0dc(ppuVar18,ppuVar8);
        uVar13 = 0;
        lVar12 = lStack_e8;
        if (*pppuVar5 != (undefined **)0x0) {
          do {
            func_0x00010b92fa74();
            uVar13 = extraout_x8_00;
            lVar12 = extraout_x9;
          } while (extraout_w12 != 0);
        }
        puVar9 = (undefined8 *)(lVar12 + (long)ppuVar18 * 0x20);
        *puVar9 = uVar13;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        bVar3 = (byte)ppuVar8 & 0x7f;
        puStack_f0[(long)ppuVar18] = bVar3;
        puStack_f0[(uStack_d8 & 7) + (uStack_d8 & (ulong)(ppuVar18 + -1)) + 1] = bVar3;
LAB_10b92c7d8:
        lVar12 = lStack_e8;
        FUN_10b9aa82c(auStack_128,pppuVar5 + 1,&UNK_10f7cdec6);
        param_3 = &ppuStack_110;
        FUN_10b9aab20(&lStack_130,auStack_128);
        bVar3 = bStack_108;
        if ((bStack_108 & 1) == 0) {
          FUN_10b9a0084(&ppuStack_138,&ppuStack_110);
          *param_1 = 2;
          param_1[1] = ppuStack_138;
          ppuStack_138 = (undefined **)0x0;
          func_0x00010b92fbcc();
        }
        else {
          lVar1 = lStack_130 + 0x18;
          for (lVar19 = *(long *)(lStack_130 + 0x10) << 4; lVar19 != 0; lVar19 = lVar19 + -0x10) {
            FUN_10b9a9358(&ppuStack_138,lVar1);
            param_3 = &ppuStack_138;
            func_0x000104bdd2f0(lVar12 + (long)ppuVar18 * 0x20 + 8);
            func_0x000107c278f8(ppuStack_138);
            lVar1 = lVar1 + 0x10;
          }
        }
        func_0x000104bddf60(lStack_130);
        FUN_10b9a8d98(auStack_128);
        if (bVar3 == 0) goto LAB_10b92c924;
        func_0x00010527d4cc(&puStack_a0);
      }
      puVar9 = (undefined8 *)0x40;
      __Znwm();
      uVar4 = uStack_c8;
      uVar15 = uStack_d8;
      uVar13 = uStack_e0;
      lVar14 = lStack_e8;
      puVar7 = puStack_f0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      *puVar9 = &PTR_FUN_110d76fb8;
      puVar9[1] = 1;
      puStack_a0 = &UNK_10dd5b8b0;
      pppuStack_98 = (undefined ***)0x0;
      puStack_f0 = &UNK_10dd5b8b0;
      lStack_e8 = 0;
      puVar9[3] = lVar14;
      puVar9[2] = puVar7;
      puVar9[5] = uVar15;
      puVar9[4] = uVar13;
      puVar9[7] = uVar4;
      uStack_78 = 0;
      FUN_10b92de1c(&puStack_a0);
      *param_1 = 1;
      param_1[1] = puVar9;
      FUN_10b92e368(0);
LAB_10b92c924:
      FUN_10b92de1c(&puStack_f0);
    }
    func_0x000104bd4e64(lStack_118);
    FUN_10b9a01e4(&ppuStack_110);
  }
  else {
    *param_1 = 2;
    param_1[1] = auStack_b0[0];
    auStack_b0[0] = 0;
  }
  plVar10 = &lStack_b8;
  func_0x000104bda914();
  func_0x00010b92f7e8(uStack_70);
  if (!(bool)uVar6) {
    ___stack_chk_fail();
    if (param_3 != (undefined ***)0x0) {
      do {
        func_0x00010b92fd64();
      } while (extraout_w10 != 0);
    }
    *plVar10 = (long)param_3;
    plVar10[1] = (long)(param_3 + 6);
    __ZNSt3__115recursive_mutex4lockEv();
    return plVar10;
  }
  return plVar10;
}



/* Entry: 10b92c974; end: 10b92ca43;  */

long * FUN_10b92c974(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 != 0) {
    do {
      func_0x00010b92fd64();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + 0x30;
  __ZNSt3__115recursive_mutex4lockEv();
  return param_1;
}



/* Entry: 10b92ca44; end: 10b92ca5b;  */

void FUN_10b92ca44(long param_1)

{
  func_0x000104c6257c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10b92ca5c; end: 10b92cb27;  */

long * FUN_10b92ca5c(long *param_1)

{
  if (param_1[3] != 0) {
    func_0x00010b92fa20();
  }
  if (*param_1 != 0) {
    func_0x00010b92fa20();
  }
  return param_1;
}



/* Entry: 10b92cb28; end: 10b92ccb3;  */

undefined8 * FUN_10b92cb28(undefined8 *param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  long unaff_x22;
  
  *param_1 = &PTR_FUN_110d76fe8;
  func_0x000104bfe1e0(param_1 + 0x2c);
  FUN_10b9230ac(param_1 + 0x26);
  if (param_1[0x23] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0x20] + unaff_x22)) {
        func_0x00010b92deb8(param_1[0x21] + unaff_x21);
        lVar1 = param_1[0x23];
      }
      unaff_x21 = unaff_x21 + 0x28;
    }
    __ZdlPv();
    param_1[0x25] = 0;
    param_1[0x20] = &UNK_10dd5b8b0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if (param_1[0x1d] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8_00;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0x1a] + unaff_x22)) {
        func_0x00010b92ded8(param_1[0x1b] + unaff_x21);
        lVar1 = param_1[0x1d];
      }
      unaff_x21 = unaff_x21 + 0x10;
    }
    __ZdlPv();
    param_1[0x1f] = 0;
    param_1[0x1a] = &UNK_10dd5b8b0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  if (param_1[0x17] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8_01;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0x14] + unaff_x22)) {
        func_0x00010b92def8(param_1[0x15] + unaff_x21);
        lVar1 = param_1[0x17];
      }
      unaff_x21 = unaff_x21 + 0x10;
    }
    __ZdlPv();
    param_1[0x19] = 0;
    param_1[0x14] = &UNK_10dd5b8b0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if (param_1[0x11] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8_02;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0xe] + unaff_x22)) {
        func_0x00010b92df18(param_1[0xf] + unaff_x21);
        lVar1 = param_1[0x11];
      }
      unaff_x21 = unaff_x21 + 0x28;
    }
    __ZdlPv();
    param_1[0x13] = 0;
    param_1[0xe] = &UNK_10dd5b8b0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 6);
  FUN_10b92e3c4(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b92ccb4; end: 10b92ccb7;  */

undefined8 * FUN_10b92ccb4(undefined8 *param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  long unaff_x22;
  
  *param_1 = &PTR_FUN_110d76fe8;
  func_0x000104bfe1e0(param_1 + 0x2c);
  FUN_10b9230ac(param_1 + 0x26);
  if (param_1[0x23] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0x20] + unaff_x22)) {
        func_0x00010b92deb8(param_1[0x21] + unaff_x21);
        lVar1 = param_1[0x23];
      }
      unaff_x21 = unaff_x21 + 0x28;
    }
    __ZdlPv();
    param_1[0x25] = 0;
    param_1[0x20] = &UNK_10dd5b8b0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
  }
  if (param_1[0x1d] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8_00;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0x1a] + unaff_x22)) {
        func_0x00010b92ded8(param_1[0x1b] + unaff_x21);
        lVar1 = param_1[0x1d];
      }
      unaff_x21 = unaff_x21 + 0x10;
    }
    __ZdlPv();
    param_1[0x1f] = 0;
    param_1[0x1a] = &UNK_10dd5b8b0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  if (param_1[0x17] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8_01;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0x14] + unaff_x22)) {
        func_0x00010b92def8(param_1[0x15] + unaff_x21);
        lVar1 = param_1[0x17];
      }
      unaff_x21 = unaff_x21 + 0x10;
    }
    __ZdlPv();
    param_1[0x19] = 0;
    param_1[0x14] = &UNK_10dd5b8b0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  if (param_1[0x11] != 0) {
    func_0x00010b92fd00();
    lVar1 = extraout_x8_02;
    for (; unaff_x22 != lVar1; unaff_x22 = unaff_x22 + 1) {
      if (-1 < *(char *)(param_1[0xe] + unaff_x22)) {
        func_0x00010b92df18(param_1[0xf] + unaff_x21);
        lVar1 = param_1[0x11];
      }
      unaff_x21 = unaff_x21 + 0x28;
    }
    __ZdlPv();
    param_1[0x13] = 0;
    param_1[0xe] = &UNK_10dd5b8b0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 6);
  FUN_10b92e3c4(param_1 + 3);
  func_0x000107c278f4(param_1 + 2);
  return param_1;
}



/* Entry: 10b92ccb8; end: 10b92cccb;  */

void FUN_10b92ccb8(void)

{
  FUN_10b92cb28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b92cccc; end: 10b92cd13;  */

undefined1 FUN_10b92cccc(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x00010b92f9e4();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x21);
  func_0x00010b92fafc();
  return uVar1;
}



/* Entry: 10b92cd14; end: 10b92ce63;  */

void FUN_10b92cd14(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  int extraout_w11;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 0x22) != '\x01') {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = param_2;
      func_0x000107c31084();
      lStack_70 = param_2 + 0x10;
      puStack_68 = &UNK_1003ab990;
      func_0x000107c2793c(&UNK_10f7cded4);
      func_0x000107c3173c(&uStack_50);
      func_0x000107c31080(&uStack_38,lVar3,&uStack_50);
      FUN_10b99f560(&lStack_70,&uStack_38);
      *param_1 = 2;
      param_1[1] = lStack_70;
      lStack_70 = 0;
      func_0x00010b92fbcc();
      func_0x000107c278f8(uStack_38);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_50);
      return;
    }
    *(undefined1 *)(param_2 + 0x22) = 1;
    lVar1 = *(long *)(lVar3 + 0x68);
    for (lVar3 = *(long *)(lVar3 + 0x60); uVar2 = lVar3 == lVar1, !(bool)uVar2; lVar3 = lVar3 + 8) {
      func_0x00010b92fc44(param_2 + 0x130);
      func_0x00010b92fb7c(*(undefined8 *)(param_2 + 0x130));
      if ((bool)uVar2) {
        func_0x00010b93fc94(&uStack_50,*(undefined8 *)(param_2 + 0x18),lVar3);
        lVar4 = *(long *)(param_2 + 0x18);
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
          do {
            func_0x00010b92fc6c();
            lVar4 = extraout_x8;
          } while (extraout_w11 != 0);
        }
        puStack_68 = (undefined *)uStack_50;
        uStack_60 = uStack_48;
        lStack_70 = lVar4;
        func_0x00010b922e38(param_2 + 0x130,lVar3);
        func_0x000104c625c4();
        if (lStack_70 != 0) {
          func_0x00010b92fa20();
        }
        func_0x00010811ffc4(param_2 + 0x160,lVar3);
      }
    }
  }
  *param_1 = 1;
  return;
}



/* Entry: 10b92ce64; end: 10b92cfb7;  */

long * FUN_10b92ce64(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010b92f820();
  uStack_58 = extraout_x8;
  func_0x00010b92fa40();
  FUN_10b92cd14(&lStack_68);
  uVar1 = lStack_68 == 1;
  if ((bool)uVar1) {
    lVar2 = unaff_x19 + 0x130;
    func_0x00010b92fc44();
    func_0x00010b92fb7c(*(undefined8 *)(unaff_x19 + 0x130));
    if ((bool)uVar1) {
      func_0x000107c31084();
      func_0x00010b9a6554(&uStack_c8,unaff_x19 + 0x160,&UNK_10f7cdf2a,2);
      puStack_98 = &UNK_1003ab990;
      puStack_88 = &UNK_1003ab990;
      puStack_78 = &UNK_1003ab990;
      uStack_a0 = param_2;
      lStack_90 = unaff_x19 + 0x10;
      puStack_80 = &uStack_c8;
      func_0x000107c2793c(&UNK_10f7cdeef);
      func_0x000107c3173c(auStack_c0);
      func_0x000107c31080(&uStack_a8,lVar2,auStack_c0);
      FUN_10b99f560(&uStack_a0,&uStack_a8);
      *unaff_x20 = 2;
      unaff_x20[1] = uStack_a0;
      uStack_a0 = 0;
      func_0x00010b92fbcc();
      func_0x000107c278f8(uStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
      func_0x000107c278f8(uStack_c8);
    }
    else {
      func_0x00010b92fcd4();
      func_0x0001080e6ccc();
    }
  }
  else {
    *unaff_x20 = 2;
    unaff_x20[1] = uStack_60;
    uStack_60 = 0;
  }
  plVar3 = &lStack_68;
  func_0x0001080c6234(plVar3);
  func_0x00010b92fafc();
  func_0x00010b92f7e8(uStack_58);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010b92fb68();
  func_0x00010b92f918();
  uStack_f8 = extraout_x8_00;
  func_0x00010b92fa40();
  FUN_10b92cd14(auStack_108);
  func_0x0001080c6234(auStack_108);
  func_0x00010b922ebc(unaff_x20 + 0x26);
  func_0x00010b92fb7c(unaff_x20[0x26]);
  plVar3 = (long *)(ulong)!(bool)uVar1;
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x20 + 6);
  func_0x00010b92f7e8(uStack_f8);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  func_0x00010b92f9e4();
  func_0x00010b92fc44(plVar3 + 0x26);
  func_0x00010b92fb7c(plVar3[0x26]);
  if ((bool)uVar1) {
    func_0x00010811ffc4(plVar3 + 0x2c,unaff_x19);
  }
  func_0x00010b922e38(plVar3 + 0x26,unaff_x19);
  func_0x000105c3d468();
  plVar3 = plVar3 + 6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(plVar3);
  return plVar3;
}



/* Entry: 10b92cfb8; end: 10b92d033;  */

ulong FUN_10b92cfb8(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010b92fb68();
  func_0x00010b92f918();
  uStack_28 = extraout_x8;
  func_0x00010b92fa40();
  FUN_10b92cd14(auStack_38);
  func_0x0001080c6234(auStack_38);
  func_0x00010b922ebc(unaff_x20 + 0x130);
  func_0x00010b92fb7c(*(undefined8 *)(unaff_x20 + 0x130));
  uVar1 = (ulong)!(bool)in_ZR;
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x20 + 0x30);
  func_0x00010b92f7e8(uStack_28);
  if ((bool)in_ZR) {
    return uVar1;
  }
  ___stack_chk_fail();
  func_0x00010b92f9e4();
  func_0x00010b92fc44(uVar1 + 0x130);
  func_0x00010b92fb7c(*(undefined8 *)(uVar1 + 0x130));
  if ((bool)in_ZR) {
    func_0x00010811ffc4(uVar1 + 0x160,unaff_x19);
  }
  func_0x00010b922e38(uVar1 + 0x130,unaff_x19);
  func_0x000105c3d468();
  uVar1 = uVar1 + 0x30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar1);
  return uVar1;
}



/* Entry: 10b92d034; end: 10b92d093;  */

void FUN_10b92d034(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010b92f9e4();
  func_0x00010b92fc44(unaff_x19 + 0x130);
  func_0x00010b92fb7c(*(undefined8 *)(unaff_x19 + 0x130));
  if ((bool)in_ZR) {
    func_0x00010811ffc4(unaff_x19 + 0x160,param_2);
  }
  func_0x00010b922e38(unaff_x19 + 0x130,param_2);
  func_0x000105c3d468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10b92d094; end: 10b92d1bf;  */

void FUN_10b92d094(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined1 auStack_90 [32];
  int aiStack_70 [2];
  undefined *puStack_68;
  long alStack_60 [3];
  undefined8 uStack_48;
  
  func_0x00010b92f820();
  uStack_48 = extraout_x8;
  func_0x00010b92fa40();
  lVar2 = unaff_x19 + 0x70;
  FUN_10b92d1c0(lVar2,param_2);
  iVar1 = (int)lVar2;
  func_0x00010b92fb7c(*(undefined8 *)(unaff_x19 + 0x70));
  if ((bool)in_ZR) {
    puStack_68 = &UNK_10f7cdf2d;
    alStack_60[0] = 3;
    FUN_10b9a63dc(aiStack_70,param_2,&puStack_68);
    lVar3 = unaff_x19;
    FUN_10b92ce64(&puStack_68);
    lVar2 = alStack_60[0];
    in_ZR = puStack_68 == (undefined *)0x1;
    if ((bool)in_ZR) {
      alStack_60[0] = 0;
      FUN_10b9a6a00();
      func_0x00010b92dde8(auStack_90,alStack_60,lVar3);
      FUN_10b92d1e4(unaff_x19 + 0x70,param_2);
      FUN_10b92d204();
      func_0x00010b92e890();
      func_0x00010b92ddb8(auStack_90);
      if (lVar2 != 0) {
        func_0x00010b92fbd4();
      }
    }
    else {
      *unaff_x20 = 2;
      unaff_x20[1] = alStack_60[0];
      alStack_60[0] = 0;
    }
    func_0x0001080c5c8c(&puStack_68);
    iVar1 = aiStack_70[0];
    func_0x000107c278f8();
  }
  else {
    func_0x00010b92fcd4();
    FUN_10b92e4e4();
  }
  func_0x00010b92fafc();
  func_0x00010b92f7e8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b92fb68();
  FUN_10b92e420();
  func_0x00010b92fb20();
  func_0x00010b92fd38();
  FUN_10b92e43c();
  if (iVar1 == 0) {
    func_0x00010b92fb58();
  }
  else {
    func_0x00010b92fb10();
  }
  return;
}



/* Entry: 10b92d1c0; end: 10b92d1e3;  */

void FUN_10b92d1c0(int param_1)

{
  func_0x00010b92fb68();
  FUN_10b92e420();
  func_0x00010b92fb20();
  func_0x00010b92fd38();
  FUN_10b92e43c();
  if (param_1 == 0) {
    func_0x00010b92fb58();
  }
  else {
    func_0x00010b92fb10();
  }
  return;
}



/* Entry: 10b92d1e4; end: 10b92d203;  */

void FUN_10b92d1e4(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10b92e538(auStack_28);
  func_0x00010b92fd0c();
  return;
}



/* Entry: 10b92d204; end: 10b92d22f;  */

void FUN_10b92d204(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92fb68();
  func_0x000105c3d468();
  func_0x000107c31068(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10b92d230; end: 10b92d303;  */

long * FUN_10b92d230(undefined8 param_1,long **param_2)

{
  long *plVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar7;
  int extraout_w11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plStack_60;
  long alStack_58 [2];
  undefined8 uStack_48;
  
  func_0x00010b92f820();
  uStack_48 = extraout_x8;
  func_0x00010b92fa40();
  FUN_10b92cd14(alStack_58);
  plVar3 = alStack_58;
  func_0x0001080c6234();
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  plVar1 = *(long **)(unaff_x19 + 0x168);
  for (plVar5 = *(long **)(unaff_x19 + 0x160); uVar2 = plVar5 == plVar1, !(bool)uVar2;
      plVar5 = plVar5 + 1) {
    plVar3 = plVar5;
    param_2 = (long **)&UNK_10f7cdf2d;
    FUN_10b9a6170();
    if ((int)plVar3 != 0) {
      if (*plVar5 == 0) {
        lVar6 = -3;
      }
      else {
        lVar6 = (ulong)*(uint *)(*plVar5 + 0xc) - 3;
      }
      FUN_10b9a6488(&plStack_60,plVar5,0,lVar6);
      param_2 = &plStack_60;
      FUN_10b92d304();
      plVar3 = plStack_60;
      func_0x000107c278f8();
    }
  }
  func_0x00010b92fafc();
  func_0x00010b92f7e8(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    puVar4 = (undefined8 *)plVar3[1];
    if (puVar4 < (undefined8 *)plVar3[2]) {
      uVar7 = 0;
      if (*param_2 != (long *)0x0) {
        do {
          func_0x00010b92fcb4();
          uVar7 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      plVar5 = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      plVar5 = plVar3;
      FUN_10b92df38();
    }
    plVar3[1] = (long)plVar5;
    return plVar5 + -1;
  }
  return plVar3;
}



/* Entry: 10b92d304; end: 10b92d357;  */

undefined8 * FUN_10b92d304(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 uVar3;
  int extraout_w11;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b92fcb4();
        uVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    puVar2 = puVar1 + 1;
    *puVar1 = uVar3;
  }
  else {
    puVar2 = param_1;
    FUN_10b92df38();
  }
  param_1[1] = puVar2;
  return puVar2 + -1;
}



/* Entry: 10b92d358; end: 10b92d46f;  */

void FUN_10b92d358(void)

{
  long unaff_x21;
  
  func_0x00010b92f980();
  FUN_10b92d1e4(unaff_x21 + 0x70);
  FUN_10b92d204();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x21 + 0x30);
  return;
}



/* Entry: 10b92d470; end: 10b92d493;  */

void FUN_10b92d470(int param_1)

{
  func_0x00010b92fb68();
  FUN_10b92e8e8();
  func_0x00010b92fb20();
  func_0x00010b92fd38();
  FUN_10b92e904();
  if (param_1 == 0) {
    func_0x00010b92fb58();
  }
  else {
    func_0x00010b92fb10();
  }
  return;
}



/* Entry: 10b92d494; end: 10b92d4c7;  */

void FUN_10b92d494(void)

{
  long unaff_x21;
  
  func_0x00010b92f980();
  FUN_10b92d4c8(unaff_x21 + 0x100);
  FUN_10b92d4e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x21 + 0x30);
  return;
}



/* Entry: 10b92d4c8; end: 10b92d4e7;  */

void FUN_10b92d4c8(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10b92e9ec(auStack_28);
  func_0x00010b92fd0c();
  return;
}



/* Entry: 10b92d4e8; end: 10b92d513;  */

void FUN_10b92d4e8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b92fb68();
  func_0x000105c3d468();
  func_0x000107c282f4(unaff_x20 + 0x18,unaff_x19 + 0x18);
  return;
}



/* Entry: 10b92d514; end: 10b92d643;  */

void FUN_10b92d514(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_48;
  
  func_0x00010b92f820();
  uStack_48 = extraout_x8;
  func_0x00010b92fa40();
  lVar2 = unaff_x19 + 0xa0;
  FUN_10b92d644(lVar2,param_2);
  iVar1 = (int)lVar2;
  func_0x00010b92fb7c(*(undefined8 *)(unaff_x19 + 0xa0));
  if ((bool)in_ZR) {
    func_0x00010b92fc84(&lStack_68);
    lVar2 = lStack_60;
    in_ZR = lStack_68 == 1;
    if ((bool)in_ZR) {
      lStack_60 = 0;
      uStack_78 = 0;
      if (*(long *)(unaff_x19 + 0x10) != 0) {
        do {
          func_0x00010b92fcb4();
          uStack_78 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      uStack_70 = 0;
      if (*param_2 != 0) {
        do {
          func_0x00010b92fa74();
          uStack_78 = extraout_x8_01;
          uStack_70 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      FUN_10b8bc278(&uStack_78);
      func_0x00010b8bc430(&uStack_78);
      func_0x00010b92fc58();
      func_0x00010b92fc58();
      in_ZR = *unaff_x20 == 1;
      if ((bool)in_ZR) {
        FUN_10b92d668(unaff_x19 + 0xa0,param_2);
        FUN_10b92d688();
      }
      if (lVar2 != 0) {
        func_0x00010b92fbd4();
      }
    }
    else {
      *unaff_x20 = 2;
      unaff_x20[1] = lStack_60;
      lStack_60 = 0;
    }
    iVar1 = (int)&lStack_68;
    func_0x0001080c5c8c();
  }
  else {
    func_0x00010b92fcd4();
    FUN_10b92ee38();
  }
  func_0x00010b92fafc();
  func_0x00010b92f7e8(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b92fb68();
    FUN_10b92ed78();
    func_0x00010b92fb20();
    func_0x00010b92fd38();
    FUN_10b92ed94();
    if (iVar1 == 0) {
      func_0x00010b92fb58();
    }
    else {
      func_0x00010b92fb10();
    }
    return;
  }
  return;
}



/* Entry: 10b92d644; end: 10b92d667;  */

void FUN_10b92d644(int param_1)

{
  func_0x00010b92fb68();
  FUN_10b92ed78();
  func_0x00010b92fb20();
  func_0x00010b92fd38();
  FUN_10b92ed94();
  if (param_1 == 0) {
    func_0x00010b92fb58();
  }
  else {
    func_0x00010b92fb10();
  }
  return;
}



/* Entry: 10b92d668; end: 10b92d687;  */

void FUN_10b92d668(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10b92ee6c(auStack_28);
  func_0x00010b92fd0c();
  return;
}



/* Entry: 10b92d688; end: 10b92d6cf;  */

void FUN_10b92d688(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  long *unaff_x19;
  
  func_0x00010b92fd2c();
  if (!(bool)in_ZR) {
    lVar1 = *param_2;
    if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
      do {
        func_0x00010b92fc6c();
        lVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = lVar1;
    FUN_10b8bb3c0();
  }
  return;
}



/* Entry: 10b92d6d0; end: 10b92d703;  */

void FUN_10b92d6d0(void)

{
  long unaff_x21;
  
  func_0x00010b92f980();
  FUN_10b92d668(unaff_x21 + 0xa0);
  FUN_10b92d688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x21 + 0x30);
  return;
}



/* Entry: 10b92d704; end: 10b92d72b;  */

ulong FUN_10b92d704(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 extraout_x8;
  ulong uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_10b92c51c();
  func_0x00010b92fb68(param_1,uVar1);
  func_0x00010b92f918();
  uStack_28 = extraout_x8;
  func_0x00010b92fa40();
  FUN_10b92cd14(auStack_38,unaff_x20);
  func_0x0001080c6234(auStack_38);
  func_0x00010b922ebc(unaff_x20 + 0x130,unaff_x19);
  func_0x00010b92fb7c(*(undefined8 *)(unaff_x20 + 0x130));
  uVar2 = (ulong)!(bool)in_ZR;
  __ZNSt3__115recursive_mutex6unlockEv(unaff_x20 + 0x30);
  func_0x00010b92f7e8(uStack_28);
  if ((bool)in_ZR) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x00010b92f9e4();
  func_0x00010b92fc44(uVar2 + 0x130);
  func_0x00010b92fb7c(*(undefined8 *)(uVar2 + 0x130));
  if ((bool)in_ZR) {
    func_0x00010811ffc4(uVar2 + 0x160,unaff_x19);
  }
  func_0x00010b922e38(uVar2 + 0x130,unaff_x19);
  func_0x000105c3d468();
  uVar2 = uVar2 + 0x30;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(uVar2);
  return uVar2;
}



/* Entry: 10b92d72c; end: 10b92d8a7;  */

void FUN_10b92d72c(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar4;
  long *extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  undefined8 *unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  func_0x00010b92f820();
  uStack_38 = extraout_x8;
  func_0x00010b92fa40();
  FUN_10b92c51c();
  func_0x00010b92d38c(&lStack_60);
  uVar1 = lStack_60 == 1;
  if ((bool)uVar1) {
    FUN_10b92d8a8(&lStack_78,auStack_40);
    if (lStack_78 == 0) {
      FUN_10b92c618(&lStack_70,uStack_50,uStack_48);
      uVar1 = lStack_70 == 1;
      if ((bool)uVar1) {
        FUN_10b92c51c();
        plVar2 = plStack_68;
        if (plStack_68 == (long *)0x0) {
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
        }
        else {
          do {
            func_0x00010b92fd64();
          } while (extraout_w10 != 0);
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_88 = 0;
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
        plStack_80 = plVar2;
        FUN_10b92d494();
        FUN_10b92ca5c(&uStack_98);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        *unaff_x20 = 1;
        uVar4 = 0;
        if (plStack_68 != (long *)0x0) {
          do {
            func_0x00010b92fcc4();
            uVar4 = extraout_x8_00;
          } while (extraout_w11 != 0);
        }
        unaff_x20[1] = uVar4;
      }
      else {
        *unaff_x20 = 2;
        unaff_x20[1] = plStack_68;
        plStack_68 = (long *)0x0;
      }
      func_0x00010b92f1a0(&lStack_70);
    }
    else {
      *unaff_x20 = 1;
      unaff_x20[1] = lStack_78;
      lStack_78 = 0;
    }
    FUN_10b92e368(lStack_78);
  }
  else {
    *unaff_x20 = 2;
    unaff_x20[1] = uStack_58;
    uStack_58 = 0;
  }
  plVar2 = &lStack_60;
  func_0x00010b91c480();
  func_0x00010b92fafc();
  func_0x00010b92f7e8(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar3 = *plVar2;
    if ((lVar3 != 0) && (___dynamic_cast(lVar3,&PTR_DAT_1107e3600,&PTR_DAT_110d77008,0), lVar3 != 0)
       ) {
      do {
        func_0x00010b92fd64();
      } while (extraout_w10_00 != 0);
    }
    *extraout_x8_01 = lVar3;
    return;
  }
  return;
}



/* Entry: 10b92d8a8; end: 10b92d98b;  */

void FUN_10b92d8a8(long *param_1,long *param_2)

{
  long lVar1;
  int extraout_w10;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d77008,0), lVar1 != 0))
  {
    do {
      func_0x00010b92fd64();
    } while (extraout_w10 != 0);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10b92d98c; end: 10b92dbb7;  */

void FUN_10b92d98c(void)

{
  undefined8 extraout_x8;
  long unaff_x20;
  
  func_0x00010b92fb68();
  func_0x00010b92fa40();
  func_0x00010b92d9c4(extraout_x8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10b92dbb8; end: 10b92dbd7;  */

void FUN_10b92dbb8(void)

{
  undefined1 auStack_28 [24];
  
  FUN_10b92f3d4(auStack_28);
  func_0x00010b92fd0c();
  return;
}



/* Entry: 10b92dbd8; end: 10b92dc17;  */

void FUN_10b92dbd8(undefined8 param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b92fd2c();
  if (!(bool)in_ZR) {
    uVar1 = 0;
    if (*param_2 != 0) {
      do {
        func_0x00010b92fcc4();
        uVar1 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    *unaff_x19 = uVar1;
    FUN_10b8fc3f0();
  }
  return;
}



/* Entry: 10b92dc18; end: 10b92dcf7;  */

void FUN_10b92dc18(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  func_0x00010b92f820();
  uStack_38 = extraout_x8;
  if ((bRam0000000113846838 & 1) == 0) {
    iVar2 = 0x13846838;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x000107c31088(0x113846830,&UNK_10f7cdf3f);
      ___cxa_guard_release(0x113846838);
    }
  }
  __ZNSt3__115recursive_mutex4lockEv(unaff_x19 + 0x30);
  uVar3 = 0x113846830;
  func_0x00010b92d38c(&lStack_60);
  uVar5 = uStack_58;
  uVar1 = lStack_60 == 1;
  if ((bool)uVar1) {
    func_0x000107c31084();
    func_0x000107c3107c(&uStack_68);
    uVar5 = uStack_68;
    uStack_68 = 0;
    func_0x00010b92fc58();
    uVar4 = 1;
    uVar3 = uStack_50;
  }
  else {
    uStack_58 = 0;
    uVar4 = 2;
  }
  *unaff_x20 = uVar4;
  unaff_x20[1] = uVar5;
  func_0x00010b91c480(&lStack_60);
  func_0x00010b92fafc();
  func_0x00010b92f7e8(uStack_38);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b92f9e4();
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    func_0x00010b92dd30((long *)(unaff_x19 + 0x18),uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10b92dcf8; end: 10b92de1b;  */

void FUN_10b92dcf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  
  func_0x00010b92f9e4();
  if (*(long *)(unaff_x19 + 0x18) == 0) {
    func_0x00010b92dd30((long *)(unaff_x19 + 0x18),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(unaff_x19 + 0x30);
  return;
}



/* Entry: 10b92de1c; end: 10b92de97;  */

void FUN_10b92de1c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    lVar2 = 0;
    for (lVar3 = 0; lVar3 != lVar1; lVar3 = lVar3 + 1) {
      if (-1 < *(char *)(*param_1 + lVar3)) {
        FUN_10b92de98(param_1[1] + lVar2);
        lVar1 = param_1[3];
      }
      lVar2 = lVar2 + 0x20;
    }
    __ZdlPv();
    param_1[5] = 0;
    *param_1 = (long)&UNK_10dd5b8b0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10b92de98; end: 10b92df37;  */

undefined8 FUN_10b92de98(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b92fc38();
  func_0x000104bfe1e0();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b92df38; end: 10b92dfe7;  */

long FUN_10b92df38(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *extraout_x8;
  undefined8 *puVar3;
  undefined8 extraout_x9;
  undefined8 uVar4;
  int extraout_w12;
  long lVar5;
  long *plStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar2 = param_1;
  func_0x0001080c40b0(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar5 = *param_1;
  lVar1 = param_1[1];
  plStack_58 = param_1 + 2;
  plStack_38 = plStack_58;
  if (plVar2 == (long *)0x0) {
    plStack_58 = (long *)0x0;
  }
  else {
    func_0x000104bfe148();
  }
  puVar3 = (undefined8 *)((long)plStack_58 + (lVar1 - lVar5));
  plStack_40 = plStack_58 + (long)plVar2;
  uVar4 = 0;
  puStack_50 = puVar3;
  if (*param_2 != 0) {
    do {
      func_0x00010b92fa74();
      puVar3 = extraout_x8;
      uVar4 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  puStack_48 = puVar3 + 1;
  *puVar3 = uVar4;
  func_0x000104bdd41c(param_1,&plStack_58);
  lVar5 = param_1[1];
  func_0x000104bdd4f0(&plStack_58);
  return lVar5;
}



/* Entry: 10b92dfe8; end: 10b92e003;  */

void FUN_10b92dfe8(void)

{
  func_0x00010b92faec();
  FUN_10b92e0c4();
  return;
}



/* Entry: 10b92e004; end: 10b92e037;  */

void FUN_10b92e004(int param_1)

{
  func_0x00010b92fd38();
  FUN_10b92e038();
  if (param_1 == 0) {
    func_0x00010b92fb58();
  }
  else {
    func_0x00010b92fb10();
  }
  return;
}



/* Entry: 10b92e038; end: 10b92e0c3;  */

bool FUN_10b92e038(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b92fb88(0);
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x11 + uVar2);
    lVar5 = *param_2;
    for (uVar3 = (uVar4 ^ extraout_x10) + extraout_x12 & (uVar4 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar6 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar2 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x20) == lVar5) goto LAB_10b92e0bc;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b92e0bc:
  return uVar3 != 0;
}



/* Entry: 10b92e0c4; end: 10b92e0db;  */

void FUN_10b92e0c4(void)

{
  func_0x00010b92fa14();
  return;
}



/* Entry: 10b92e0dc; end: 10b92e14b;  */

void FUN_10b92e0dc(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b92f858();
  FUN_10b92e14c();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b92e108;
  func_0x00010b92fc20();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b92e108;
  }
  if (unaff_x22 == 0) {
    func_0x00010b92fc2c();
LAB_10b92e12c:
    FUN_10b92e174();
  }
  else {
    func_0x00010b92facc();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b92fabc();
      goto LAB_10b92e12c;
    }
    func_0x00010b92e20c();
  }
  func_0x00010b92f9d0();
  FUN_10b92e14c();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b92e108:
  func_0x00010b92f7fc(lVar1);
  return;
}



/* Entry: 10b92e14c; end: 10b92e173;  */

ulong FUN_10b92e14c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b92fc9c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b92e174; end: 10b92e2f7;  */

void FUN_10b92e174(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long lVar3;
  
  func_0x00010b92f958();
  lVar3 = extraout_x8 + 0x10 + param_2 * 0x20;
  __Znwm(lVar3);
  func_0x00010b92f970(lVar3 + extraout_x8 + 0x10);
  lVar3 = 0;
  func_0x00010b92f940();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b92f9a4(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b92e2f8(unaff_x21);
      func_0x00010b92f928();
      FUN_10b92e14c();
      func_0x00010b92f774();
      FUN_10b92e310(extraout_x8_01 + lVar2 * 0x20,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x20;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92e2f8; end: 10b92e30f;  */

void FUN_10b92e2f8(void)

{
  func_0x00010b92fa08();
  return;
}



/* Entry: 10b92e310; end: 10b92e343;  */

undefined8 FUN_10b92e310(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 unaff_x19;
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  func_0x00010b92fc38(param_2);
  func_0x000104bfe1e0();
  func_0x00010007e5d0();
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b92e344; end: 10b92e367;  */

undefined8 * FUN_10b92e344(undefined8 *param_1)

{
  FUN_10b92e368(*param_1);
  return param_1;
}



/* Entry: 10b92e368; end: 10b92e393;  */

void FUN_10b92e368(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b92e38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b92e394; end: 10b92e3b7;  */

undefined8 * FUN_10b92e394(undefined8 *param_1)

{
  __ZNSt3__115recursive_mutex6unlockEv(*param_1);
  return param_1;
}



/* Entry: 10b92e3b8; end: 10b92e3c3;  */

void FUN_10b92e3b8(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 10b92e3c4; end: 10b92e41f;  */

undefined8 * FUN_10b92e3c4(undefined8 *param_1)

{
  FUN_10b92e3b8(*param_1);
  return param_1;
}



/* Entry: 10b92e420; end: 10b92e43b;  */

void FUN_10b92e420(void)

{
  func_0x00010b92faec();
  FUN_10b92e4cc();
  return;
}



/* Entry: 10b92e43c; end: 10b92e4cb;  */

bool FUN_10b92e43c(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x14;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x00010b92fb88(0);
  lVar2 = extraout_x8;
  uVar3 = extraout_x14;
  while( true ) {
    uVar3 = uVar3 & extraout_x9;
    uVar5 = *(ulong *)(extraout_x11 + uVar3);
    lVar6 = *param_2;
    for (uVar4 = (uVar5 ^ extraout_x10) + extraout_x12 & (uVar5 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar1;
      if (*(long *)(*(long *)(param_1 + 8) + uVar1 * 0x28) == lVar6) goto LAB_10b92e4c4;
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
LAB_10b92e4c4:
  return uVar4 != 0;
}



/* Entry: 10b92e4cc; end: 10b92e4e3;  */

void FUN_10b92e4cc(void)

{
  func_0x00010b92fa14();
  return;
}



/* Entry: 10b92e4e4; end: 10b92e537;  */

void FUN_10b92e4e4(void)

{
  func_0x00010b92fb48();
  func_0x00010b92e504();
  return;
}



/* Entry: 10b92e538; end: 10b92e5a3;  */

void FUN_10b92e538(long param_1,uint param_2)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  int extraout_w12;
  long *unaff_x20;
  byte unaff_w21;
  
  func_0x00010b92fb04();
  FUN_10b92e420();
  func_0x00010b92fa48();
  FUN_10b92e5a4();
  if ((param_2 & 1) != 0) {
    func_0x00010b92fd44();
    uVar2 = 0;
    puVar1 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x00010b92fa74();
        puVar1 = extraout_x8_00;
        uVar2 = extraout_x9_00;
      } while (extraout_w12 != 0);
    }
    *puVar1 = uVar2;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    *(byte *)(*unaff_x20 + param_1) = unaff_w21 & 0x7f;
    func_0x00010b92f7d0();
    func_0x00010b92f994();
  }
  func_0x00010b92fba8();
  return;
}



/* Entry: 10b92e5a4; end: 10b92e63b;  */

ulong FUN_10b92e5a4(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b92f878();
  uVar4 = extraout_x8;
  lVar3 = extraout_x9;
  while( true ) {
    uVar4 = uVar4 & extraout_x10;
    uVar5 = *(ulong *)(extraout_x12 + uVar4);
    for (uVar1 = (uVar5 ^ extraout_x11) + extraout_x14 & (uVar5 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar2 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar2 * 0x28) == extraout_x13) {
        return uVar2;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  FUN_10b92e63c();
  func_0x00010b92fd58();
  return extraout_x8_00;
}



/* Entry: 10b92e63c; end: 10b92e6ab;  */

void FUN_10b92e63c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b92f858();
  FUN_10b92e6ac();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b92e668;
  func_0x00010b92fc20();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b92e668;
  }
  if (unaff_x22 == 0) {
    func_0x00010b92fc2c();
LAB_10b92e68c:
    FUN_10b92e6d4();
  }
  else {
    func_0x00010b92facc();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b92fabc();
      goto LAB_10b92e68c;
    }
    func_0x00010b92e764();
  }
  func_0x00010b92f9d0();
  FUN_10b92e6ac();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b92e668:
  func_0x00010b92f7fc(lVar1);
  return;
}



/* Entry: 10b92e6ac; end: 10b92e6d3;  */

ulong FUN_10b92e6ac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b92fc9c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b92e6d4; end: 10b92e853;  */

void FUN_10b92e6d4(long param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar3;
  
  func_0x00010b92f958();
  func_0x00010b92fbec();
  func_0x00010b92f970(param_1 + unaff_x26);
  lVar3 = 0;
  func_0x00010b92f940();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b92f9a4(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b92e854(unaff_x21);
      func_0x00010b92f928();
      FUN_10b92e6ac();
      func_0x00010b92f774();
      FUN_10b92e86c(extraout_x8_00 + lVar2 * unaff_x25,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x28;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92e854; end: 10b92e86b;  */

void FUN_10b92e854(void)

{
  func_0x00010b92fa08();
  return;
}



/* Entry: 10b92e86c; end: 10b92e8e7;  */

undefined8 FUN_10b92e86c(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b92fd18();
  func_0x00010b92e504();
  func_0x00010b92fc38();
  func_0x00010b92ddb8();
  func_0x00010007e5d0(unaff_x19);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b92e8e8; end: 10b92e903;  */

void FUN_10b92e8e8(void)

{
  func_0x00010b92faec();
  FUN_10b92e994();
  return;
}



/* Entry: 10b92e904; end: 10b92e993;  */

bool FUN_10b92e904(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x14;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  func_0x00010b92fb88(0);
  lVar2 = extraout_x8;
  uVar3 = extraout_x14;
  while( true ) {
    uVar3 = uVar3 & extraout_x9;
    uVar5 = *(ulong *)(extraout_x11 + uVar3);
    lVar6 = *param_2;
    for (uVar4 = (uVar5 ^ extraout_x10) + extraout_x12 & (uVar5 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar1 = (uVar4 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar4 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar1;
      if (*(long *)(*(long *)(param_1 + 8) + uVar1 * 0x28) == lVar6) goto LAB_10b92e98c;
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
LAB_10b92e98c:
  return uVar4 != 0;
}



/* Entry: 10b92e994; end: 10b92e9ab;  */

void FUN_10b92e994(void)

{
  func_0x00010b92fa14();
  return;
}



/* Entry: 10b92e9ac; end: 10b92e9eb;  */

void FUN_10b92e9ac(void)

{
  func_0x00010b92fb48();
  func_0x00010b91c0ec();
  return;
}



/* Entry: 10b92e9ec; end: 10b92ea57;  */

void FUN_10b92e9ec(long param_1,uint param_2)

{
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *puVar1;
  long extraout_x9;
  undefined8 extraout_x9_00;
  undefined8 uVar2;
  int extraout_w12;
  long *unaff_x20;
  byte unaff_w21;
  
  func_0x00010b92fb04();
  FUN_10b92e8e8();
  func_0x00010b92fa48();
  FUN_10b92ea58();
  if ((param_2 & 1) != 0) {
    func_0x00010b92fd44();
    uVar2 = 0;
    puVar1 = extraout_x8;
    if (extraout_x9 != 0) {
      do {
        func_0x00010b92fa74();
        puVar1 = extraout_x8_00;
        uVar2 = extraout_x9_00;
      } while (extraout_w12 != 0);
    }
    *puVar1 = uVar2;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    *(byte *)(*unaff_x20 + param_1) = unaff_w21 & 0x7f;
    func_0x00010b92f7d0();
    func_0x00010b92f994();
  }
  func_0x00010b92fba8();
  return;
}



/* Entry: 10b92ea58; end: 10b92eaef;  */

ulong FUN_10b92ea58(long param_1)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar3;
  ulong extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b92f878();
  uVar4 = extraout_x8;
  lVar3 = extraout_x9;
  while( true ) {
    uVar4 = uVar4 & extraout_x10;
    uVar5 = *(ulong *)(extraout_x12 + uVar4);
    for (uVar1 = (uVar5 ^ extraout_x11) + extraout_x14 & (uVar5 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
      uVar2 = (uVar1 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar1 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar2 = uVar4 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar2 * 0x28) == extraout_x13) {
        return uVar2;
      }
    }
    if ((uVar5 & ~uVar5 << 6 & 0x8080808080808080) != 0) break;
    lVar3 = lVar3 + 8;
    uVar4 = lVar3 + uVar4;
  }
  FUN_10b92eaf0();
  func_0x00010b92fd58();
  return extraout_x8_00;
}



/* Entry: 10b92eaf0; end: 10b92eb5f;  */

void FUN_10b92eaf0(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b92f858();
  FUN_10b92eb60();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b92eb1c;
  func_0x00010b92fc20();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b92eb1c;
  }
  if (unaff_x22 == 0) {
    func_0x00010b92fc2c();
LAB_10b92eb40:
    FUN_10b92eb88();
  }
  else {
    func_0x00010b92facc();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b92fabc();
      goto LAB_10b92eb40;
    }
    func_0x00010b92ec18();
  }
  func_0x00010b92f9d0();
  FUN_10b92eb60();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b92eb1c:
  func_0x00010b92f7fc(lVar1);
  return;
}



/* Entry: 10b92eb60; end: 10b92eb87;  */

ulong FUN_10b92eb60(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b92fc9c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b92eb88; end: 10b92ed07;  */

void FUN_10b92eb88(long param_1)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar3;
  
  func_0x00010b92f958();
  func_0x00010b92fbec();
  func_0x00010b92f970(param_1 + unaff_x26);
  lVar3 = 0;
  func_0x00010b92f940();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8;
  }
  func_0x00010b92f9a4(uVar1);
  for (; unaff_x24 != lVar3; lVar3 = lVar3 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar3)) {
      lVar2 = unaff_x21;
      FUN_10b92ed08(unaff_x21);
      func_0x00010b92f928();
      FUN_10b92eb60();
      func_0x00010b92f774();
      FUN_10b92ed20(extraout_x8_00 + lVar2 * unaff_x25,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x28;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b92ed08; end: 10b92ed1f;  */

void FUN_10b92ed08(void)

{
  func_0x00010b92fa08();
  return;
}



/* Entry: 10b92ed20; end: 10b92ed77;  */

undefined8 FUN_10b92ed20(void)

{
  undefined8 unaff_x19;
  
  func_0x00010b92fd18();
  func_0x00010b91c0ec();
  func_0x00010b92fc38();
  FUN_10b92ca5c();
  func_0x00010007e5d0(unaff_x19);
  func_0x0001003a8cb8();
  return unaff_x19;
}



/* Entry: 10b92ed78; end: 10b92ed93;  */

void FUN_10b92ed78(void)

{
  func_0x00010b92faec();
  FUN_10b92ee20();
  return;
}



/* Entry: 10b92ed94; end: 10b92ee1f;  */

bool FUN_10b92ed94(long param_1,long *param_2,undefined8 param_3,ulong *param_4)

{
  long extraout_x8;
  long lVar1;
  ulong extraout_x9;
  ulong extraout_x10;
  long extraout_x11;
  long extraout_x12;
  ulong extraout_x13;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  func_0x00010b92fb88(0);
  lVar1 = extraout_x8;
  uVar2 = extraout_x13;
  while( true ) {
    uVar2 = uVar2 & extraout_x9;
    uVar4 = *(ulong *)(extraout_x11 + uVar2);
    lVar5 = *param_2;
    for (uVar3 = (uVar4 ^ extraout_x10) + extraout_x12 & (uVar4 ^ extraout_x10 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar6 = (uVar3 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar3 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar2 + ((ulong)LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) >> 3) & extraout_x9;
      *param_4 = uVar6;
      if (*(long *)(*(long *)(param_1 + 8) + uVar6 * 0x10) == lVar5) goto LAB_10b92ee18;
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar1 = lVar1 + 8;
    uVar2 = lVar1 + uVar2;
  }
LAB_10b92ee18:
  return uVar3 != 0;
}



/* Entry: 10b92ee20; end: 10b92ee37;  */

void FUN_10b92ee20(void)

{
  func_0x00010b92fa14();
  return;
}



/* Entry: 10b92ee38; end: 10b92ee6b;  */

void FUN_10b92ee38(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  
  *param_1 = 1;
  lVar1 = *param_2;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
    do {
      func_0x00010b92fc6c();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10b92ee6c; end: 10b92eed3;  */

void FUN_10b92ee6c(long param_1,uint param_2)

{
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  undefined8 extraout_x9;
  undefined8 uVar2;
  int extraout_w12;
  long *unaff_x20;
  byte unaff_w21;
  long *unaff_x22;
  
  func_0x00010b92fb04();
  FUN_10b92ed78();
  func_0x00010b92fa48();
  FUN_10b92eed4();
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)(unaff_x20[1] + param_1 * 0x10);
    uVar2 = 0;
    if (*unaff_x22 != 0) {
      do {
        func_0x00010b92fa74();
        puVar1 = extraout_x8;
        uVar2 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    *puVar1 = uVar2;
    puVar1[1] = 0;
    *(byte *)(*unaff_x20 + param_1) = unaff_w21 & 0x7f;
    func_0x00010b92f7d0();
    func_0x00010b92f994();
  }
  func_0x00010b92fbfc();
  return;
}



/* Entry: 10b92eed4; end: 10b92ef67;  */

ulong FUN_10b92eed4(long param_1)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  long extraout_x9;
  long lVar2;
  ulong extraout_x10;
  ulong extraout_x11;
  long extraout_x12;
  long extraout_x13;
  long extraout_x14;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x00010b92f878();
  uVar3 = extraout_x8;
  lVar2 = extraout_x9;
  while( true ) {
    uVar3 = uVar3 & extraout_x10;
    uVar4 = *(ulong *)(extraout_x12 + uVar3);
    for (uVar5 = (uVar4 ^ extraout_x11) + extraout_x14 & (uVar4 ^ extraout_x11 ^ 0xffffffffffffffff)
                 & 0x8080808080808080; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
      uVar1 = (uVar5 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar5 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar1 = uVar3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & extraout_x10;
      if (*(long *)(*(long *)(param_1 + 8) + uVar1 * 0x10) == extraout_x13) {
        return uVar1;
      }
    }
    if ((uVar4 & ~uVar4 << 6 & 0x8080808080808080) != 0) break;
    lVar2 = lVar2 + 8;
    uVar3 = lVar2 + uVar3;
  }
  FUN_10b92ef68();
  func_0x00010b92fd58();
  return extraout_x8_00;
}



/* Entry: 10b92ef68; end: 10b92efd7;  */

void FUN_10b92ef68(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x22;
  
  func_0x00010b92f858();
  FUN_10b92efd8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
  if (lVar1 != 0) goto LAB_10b92ef94;
  func_0x00010b92fc20();
  if ((bool)in_ZR) {
    lVar1 = 0;
    goto LAB_10b92ef94;
  }
  if (unaff_x22 == 0) {
    func_0x00010b92fc2c();
LAB_10b92efb8:
    FUN_10b92f000();
  }
  else {
    func_0x00010b92facc();
    if ((bool)in_CY && !(bool)in_ZR) {
      func_0x00010b92fabc();
      goto LAB_10b92efb8;
    }
    func_0x00010b92f090();
  }
  func_0x00010b92f9d0();
  FUN_10b92efd8();
  lVar1 = *(long *)(unaff_x19 + 0x28);
LAB_10b92ef94:
  func_0x00010b92f7fc(lVar1);
  return;
}



/* Entry: 10b92efd8; end: 10b92efff;  */

ulong FUN_10b92efd8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 in_ZR;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  ulong extraout_x10;
  
  lVar2 = 0;
  while (func_0x00010b92fc9c(lVar2), (bool)in_ZR) {
    lVar2 = extraout_x8 + 8;
    in_ZR = 1;
  }
  uVar1 = (extraout_x10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (extraout_x10 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return extraout_x9 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}


