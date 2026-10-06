/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101e05574; end: 101e0558f;  */

void FUN_101e05574(long param_1,long param_2)

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



/* Entry: 101e05590; end: 101e055d7;  */

void FUN_101e05590(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101e055d8; end: 101e05603;  */

void FUN_101e055d8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    func_0x00010488ade0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101e05604; end: 101e0567b;  */

void FUN_101e05604(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101e05f34(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101e0567c; end: 101e056bf;  */

long FUN_101e0567c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101e056c0; end: 101e056d7;  */

undefined8 * FUN_101e056c0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101e056d8; end: 101e0570f;  */

void FUN_101e056d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101e049ac(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,unaff_x20 + 0x40,
                *(undefined1 *)(unaff_x20 + 0xc9),*(undefined8 *)(unaff_x20 + 0xd0),
                *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0),
                *(undefined8 *)(unaff_x20 + 0xe8));
  return;
}



/* Entry: 101e05710; end: 101e0571b;  */

void FUN_101e05710(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000101e05718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 101e0571c; end: 101e0597f;  */

void FUN_101e0571c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112e2f508;
  func_0x0001000285a8(0x112e2f508,&UNK_10da181e0);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_101e0594c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar12 = (ulong *)(lVar11 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar12;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e0597c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar12 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar12,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_101e0594c;
        }
        uVar16 = puVar12[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar13);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar14);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101e05980);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar14;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101e05980; end: 101e05a3b;  */

undefined8 FUN_101e05980(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_101b3d774();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_101e05a3c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 101e05a3c; end: 101e05beb;  */

void FUN_101e05a3c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_101e05b30:
          if ((long)param_1 < (long)uVar8) goto LAB_101e05ab8;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_101e05b30;
LAB_101e05ab8:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101e05bec);
  (*pcVar5)();
}



/* Entry: 101e05bec; end: 101e05d8f;  */

long FUN_101e05bec(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c43c94();
  iVar1 = (int)lVar2;
  func_0x000107c307bc();
  if (iVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c5b54c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5f9e8();
      func_0x000107c61170(lVar2);
      lVar2 = lVar3;
      FUN_101d7ca90();
      func_0x000107c6142c(lVar3);
      if (lVar2 != 0) {
        if (param_3 == 0) {
          func_0x000107c61170(param_1);
          func_0x000107c6142c(lVar2);
          return 0;
        }
        if (*(long *)(lVar2 + 0x10) != 0) {
          func_0x000107c61434(lVar2);
          lVar3 = param_2;
          uVar5 = param_3;
          func_0x000100029284();
          if ((uVar5 & 1) == 0) {
            func_0x000107c61170(param_1);
            func_0x000107c61430(lVar2,2);
            return 0;
          }
          uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + lVar3 * 8);
          func_0x000107c61174(uVar4);
          func_0x000107c6142c(lVar2);
          func_0x000107c61174(uVar4);
          lVar3 = lVar2;
          func_0x000107c61558(lVar2);
          FUN_101ceaca8(uVar4,param_4,param_5,lVar3);
          FUN_101e05980(param_2,param_3);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_2);
          return lVar2;
        }
        func_0x000107c6142c(lVar2);
      }
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 101e05d90; end: 101e05dcf;  */

undefined8 FUN_101e05d90(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101e05dd0; end: 101e05ee3;  */

void FUN_101e05dd0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c5eea4();
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  FUN_101e0411c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined4 *)(unaff_x20 + 0x30),*(undefined4 *)(unaff_x20 + 0x34),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101e05ee4; end: 101e05f33;  */

void FUN_101e05ee4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e04614(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),unaff_x20 + 0x48,unaff_x20 + 0x70,
                *(undefined1 *)(unaff_x20 + 0xf9));
  return;
}



/* Entry: 101e05f34; end: 101e05f73;  */

void FUN_101e05f34(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e05f74; end: 101e05fbb;  */

void FUN_101e05f74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e04afc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 101e05fbc; end: 101e05fd3;  */

void FUN_101e05fbc(long param_1,long param_2)

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



/* Entry: 101e05fd4; end: 101e06017;  */

void FUN_101e05fd4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e06018; end: 101e06453;  */

undefined8 * FUN_101e06018(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong auStack_98 [4];
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  puVar21 = param_1;
  func_0x0001000d224c(auStack_98);
  if (auStack_98[0] == 0) {
    FUN_101df6cf4();
    func_0x000107c613f8(&UNK_1106e3fc0,puVar21,0,0);
    puVar21[1] = 0;
    *puVar21 = 0x16;
    *(undefined1 *)(puVar21 + 2) = 0x80;
    func_0x000107c61654();
    return param_1;
  }
  if (lRam0000000112e2f0f0 != -1) {
    func_0x000107c61568(0x112e2f0f0,FUN_101de2a04);
  }
  uVar7 = auStack_98[0];
  func_0x000107c5076c();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c4412c();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101e06454);
    (*pcVar5)();
  }
  uVar9 = 0;
  func_0x000100fac9a0(0);
  uVar10 = 0x112d51160;
  func_0x0001000285a8(0x112d51160,&UNK_10da11350);
  uVar11 = uVar10;
  func_0x000100fac9e4();
  uVar12 = uVar8;
  func_0x000107c5f9e8(uVar8,uVar9,uVar10,uVar11);
  func_0x000107c61170(uVar8);
  uVar8 = uVar12 & 0xc000000000000001;
  if (uVar8 == 0) {
    uVar22 = *(ulong *)(uVar12 + 0x10);
    func_0x000107c61434(uVar12);
  }
  else {
    uVar22 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar22 = uVar12;
    }
    func_0x000107c61434(uVar12);
    func_0x000107c6042c();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar22 == 0) {
    func_0x000107c61430(uVar12,2);
    lVar18 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar16 = uVar22 & ((long)uVar22 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_10168d76c(0,uVar16,0);
    if (uVar8 == 0) {
      bVar1 = *(byte *)(uVar12 + 0x20);
      func_0x000107c61434(uVar12);
      uVar20 = uVar12 + 0x40;
      func_0x000107c60268(uVar20,~(-1L << ((ulong)bVar1 & 0x3f)));
      uVar16 = (ulong)*(uint *)(uVar12 + 0x24);
      func_0x000107c6142c(uVar12);
      cStack_68 = '\0';
    }
    else {
      uVar20 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar20 = uVar12;
      }
      func_0x000107c60414();
      cStack_68 = '\x01';
    }
    uStack_78 = uVar20;
    uStack_70 = uVar16;
    if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101e06448);
      (*pcVar5)();
    }
    uVar16 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar16 = uVar12;
    }
    do {
      while( true ) {
        cVar4 = cStack_68;
        uVar3 = uStack_70;
        uVar20 = uStack_78;
        if (uVar22 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e06428);
          (*pcVar5)();
        }
        uVar13 = uStack_78;
        func_0x000101e06598(uStack_78,uStack_70,cStack_68,uVar12);
        uVar14 = uVar13;
        func_0x000107c43fb4();
        func_0x000107c61180();
        if (uVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e0644c);
          (*pcVar5)();
        }
        uVar15 = uVar14;
        func_0x000107c44338();
        func_0x000107c615e8(uVar14);
        func_0x000107c615e8(uVar13);
        uVar13 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar13) {
          FUN_10168d76c(1 < *(ulong *)(puVar2 + 0x18),uVar13 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar13 + 1;
        *(ulong *)(puVar2 + uVar13 * 8 + 0x20) =
             uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
        if (uVar8 == 0) break;
        if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101e06450);
          (*pcVar5)();
        }
        func_0x000107c60420(uVar20,uVar3);
        if (uVar20 == 0) {
          uVar20 = 1;
        }
        else {
          func_0x000107c61558();
        }
        uVar10 = 0x112e2f5b0;
        func_0x0001000285a8(0x112e2f5b0,&UNK_10da18260);
        pcVar5 = (code *)auStack_98;
        func_0x000107c5fa04(pcVar5,uVar10);
        func_0x000107c6044c(uVar10,uVar20,uVar16);
        (*pcVar5)(auStack_98,0);
        uVar22 = uVar22 - 1;
        if (uVar22 == 0) goto LAB_101e063a0;
      }
      func_0x000107c61434(uVar12);
      uVar13 = uVar20;
      uVar14 = uVar3;
      cVar17 = cVar4;
      func_0x000101e06454();
      FUN_101e06718(uVar20,uVar3,cVar4);
      func_0x000107c6142c(uVar12);
      uVar22 = uVar22 - 1;
      uStack_78 = uVar13;
      uStack_70 = uVar14;
      cStack_68 = cVar17;
    } while (uVar22 != 0);
LAB_101e063a0:
    func_0x000107c6142c(uVar12);
    FUN_101e06718(uStack_78,uStack_70,cStack_68);
    func_0x000107c6142c(uVar12);
    lVar18 = *(long *)(puVar2 + 0x10);
  }
  if (lVar18 == 0) {
    puVar21 = (undefined8 *)0x0;
  }
  else {
    puVar21 = (undefined8 *)0x0;
    puVar19 = (ulong *)(puVar2 + 0x20);
    do {
      bVar6 = CARRY8((ulong)puVar21,*puVar19);
      puVar21 = (undefined8 *)((long)puVar21 + *puVar19);
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101e0642c);
        (*pcVar5)();
      }
      lVar18 = lVar18 + -1;
      puVar19 = puVar19 + 1;
    } while (lVar18 != 0);
  }
  func_0x000107c615e8(uVar7);
  func_0x000107c6142c(puVar2);
  func_0x000107c615e8(auStack_98[0]);
  return puVar21;
}



/* Entry: 101e06454; end: 101e06717;  */

void FUN_101e06454(ulong param_1,undefined8 param_2,char param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uVar4 = 0;
  if (param_3 == '\x01') {
    uVar2 = param_1;
    func_0x000107c60424(param_1,param_2);
    if ((int)uVar2 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e06588);
      (*pcVar1)();
    }
    uVar2 = param_1;
    func_0x000107c60428(param_1,param_2);
    uVar3 = 0;
    uStack_40 = uVar2;
    func_0x000100fac9a0(0);
    func_0x000107c6147c(&uStack_38,&uStack_40,PTR___syXlN_11034f1a0 + 8,uVar3,7);
    func_0x000100fac38c(uStack_38);
    func_0x000107c61170(uStack_38);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e06598);
      (*pcVar1)();
    }
    uVar4 = param_1;
    func_0x000107c6041c(param_1,param_2);
    func_0x000107c60430(param_1,param_2,uVar4);
    func_0x000107c615e8(uVar4);
  }
  else {
    uVar4 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    if (CARRY8(param_1,uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0658c);
      (*pcVar1)();
    }
    if ((*(ulong *)(param_4 + 0x40 + (param_1 >> 6) * 8) >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e06590);
      (*pcVar1)();
    }
    if (*(int *)(param_4 + 0x24) != (int)param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e06594);
      (*pcVar1)();
    }
    func_0x000107c60270(param_1,param_4 + 0x40,~uVar4);
  }
  return;
}



/* Entry: 101e06718; end: 101e0672b;  */

void FUN_101e06718(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101e0672c; end: 101e06807;  */

void FUN_101e0672c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x90) = param_18;
  *(undefined8 *)(unaff_x20 + 0x88) = param_17;
  *(undefined8 *)(unaff_x20 + 0xa0) = param_20;
  *(undefined8 *)(unaff_x20 + 0x98) = param_19;
  *(undefined8 *)(unaff_x20 + 0xa8) = param_21;
  *(undefined8 *)(unaff_x20 + 0xb0) = param_22;
  return;
}



/* Entry: 101e06808; end: 101e0686b;  */

/* WARNING: Possible PIC construction at 0x000101e06854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e06858) */

void FUN_101e06808(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101dfff74();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110488a90;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101e0686c; end: 101e06873;  */

/* WARNING: Possible PIC construction at 0x000101e06854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e06858) */

void FUN_101e0686c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000101dfff74();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110488a90;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101e06874; end: 101e06933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e06874(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_11303eaa0);
  lVar1 = 0;
  func_0x000101e097c0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  func_0x000107c6157c(uVar4);
  uVar4 = 0x112e1cb88;
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  pcVar3 = FUN_101e09600;
  func_0x0001000cb480(FUN_101e09600,0,uVar4);
  *(code **)(lVar2 + 0x18) = pcVar3;
  pcVar3 = FUN_101e09664;
  func_0x0001000cb480(FUN_101e09664,0,uVar4);
  *(code **)(lVar2 + 0x20) = pcVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110488f80;
  *param_1 = lVar2;
  return;
}



/* Entry: 101e06934; end: 101e0693b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e06934(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11303eaa0);
  lVar1 = 0;
  func_0x000101e097c0(0,*(undefined8 *)(unaff_x20 + 0x18));
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  func_0x000107c6157c(uVar4);
  uVar4 = 0x112e1cb88;
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  pcVar3 = FUN_101e09600;
  func_0x0001000cb480(FUN_101e09600,0,uVar4);
  *(code **)(lVar2 + 0x18) = pcVar3;
  pcVar3 = FUN_101e09664;
  func_0x0001000cb480(FUN_101e09664,0,uVar4);
  *(code **)(lVar2 + 0x20) = pcVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110488f80;
  *param_1 = lVar2;
  return;
}



/* Entry: 101e0693c; end: 101e07577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0693c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined8 *puVar21;
  undefined1 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lStack_3d0;
  char *pcStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  long lStack_388;
  long lStack_380;
  undefined8 uStack_378;
  long lStack_370;
  undefined8 *puStack_368;
  undefined8 *puStack_360;
  undefined8 *puStack_358;
  long lStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  long lStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  long *plStack_300;
  undefined *puStack_2f8;
  long lStack_2f0;
  undefined8 *puStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 auStack_298 [3];
  long lStack_280;
  undefined **ppuStack_278;
  undefined8 auStack_270 [3];
  long lStack_258;
  undefined **ppuStack_250;
  undefined8 auStack_248 [3];
  undefined *puStack_230;
  undefined **ppuStack_228;
  undefined8 auStack_220 [3];
  long lStack_208;
  undefined **ppuStack_200;
  undefined8 auStack_1f8 [3];
  long lStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 auStack_1d0 [3];
  long lStack_1b8;
  undefined **ppuStack_1b0;
  long alStack_1a8 [3];
  long lStack_190;
  undefined **ppuStack_188;
  long alStack_180 [3];
  long lStack_168;
  undefined **ppuStack_160;
  undefined *apuStack_158 [3];
  undefined *puStack_140;
  undefined **ppuStack_138;
  long alStack_130 [3];
  long lStack_118;
  undefined **ppuStack_110;
  long alStack_108 [3];
  long lStack_f0;
  undefined **ppuStack_e8;
  long alStack_e0 [3];
  long lStack_c8;
  undefined **ppuStack_c0;
  long alStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [48];
  
  uStack_308 = param_24;
  puStack_340 = (undefined8 *)param_23;
  uStack_310 = param_22;
  uStack_318 = param_21;
  uStack_320 = param_20;
  uStack_328 = param_19;
  uStack_330 = param_18;
  puStack_348 = (undefined8 *)param_17;
  uStack_2b8 = param_16;
  puStack_2e8 = (undefined8 *)param_15;
  uStack_378 = param_14;
  uStack_2c0 = param_13;
  uStack_2c8 = param_12;
  uStack_390 = param_11;
  lVar5 = 0;
  plStack_300 = param_1;
  uStack_2b0 = param_3;
  func_0x000107c5ffd8();
  puStack_368 = *(undefined8 **)(lVar5 + -8);
  puStack_358 = (undefined8 *)lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)((long)puStack_368 + 0x40));
  lVar20 = (long)&lStack_3d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  puStack_360 = (undefined8 *)lVar20;
  func_0x000107c5ffc4();
  lStack_380 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_370 = lVar20;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_388 = lVar20;
  func_0x00010079c35c(param_2,auStack_90);
  lVar5 = 0;
  func_0x000101df8b18();
  lStack_2d0 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_4;
  *(undefined8 *)(lVar5 + 0x18) = param_5;
  lStack_350 = lVar5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar5 = 0;
  func_0x000101df907c();
  lStack_338 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = param_6;
  *(undefined8 *)(lVar5 + 0x18) = param_5;
  *(undefined8 *)(lVar5 + 0x20) = param_7;
  *(undefined8 *)(lVar5 + 0x28) = param_8;
  *(undefined8 *)(lVar5 + 0x30) = param_4;
  *(undefined8 *)(lVar5 + 0x38) = param_9;
  lStack_2e0 = param_8;
  if (param_10 == 0) {
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(param_7);
    func_0x000107c6157c(lStack_2e0);
    func_0x000107c6157c(param_9);
    uVar22 = 0;
  }
  else {
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(param_7);
    func_0x000107c6157c(lStack_2e0);
    func_0x000107c6157c(param_9);
    func_0x000107c615f0(param_10);
    uVar14 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f00ed10);
    lVar7 = param_10;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(param_10);
    func_0x000107c61170(uVar14);
    if (lVar7 != 0) {
      lVar6 = lVar7;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      lVar7 = lVar6;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar6);
    }
    uVar22 = (undefined1)lVar7;
    func_0x000107c615e8(param_10);
  }
  *(undefined1 *)(lVar5 + 0x40) = uVar22;
  lVar7 = 0;
  uStack_3b8 = param_5;
  func_0x000101dfef0c();
  lStack_2f0 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = param_5;
  lVar8 = 0;
  lStack_398 = lVar7;
  func_0x000101e05ff8();
  lVar7 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = param_5;
  lVar9 = 0;
  func_0x000101e07fc4();
  lVar6 = lVar9;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = param_4;
  *(undefined8 **)(lVar6 + 0x18) = puStack_2e8;
  ppuStack_98 = &PTR_DAT_110488cc8;
  ppuStack_c0 = &PTR_DAT_110488de0;
  puVar10 = (undefined *)0x0;
  alStack_e0[0] = lVar6;
  lStack_c8 = lVar9;
  alStack_b8[0] = lVar7;
  lStack_a0 = lVar8;
  func_0x000101e00f94();
  puStack_2f8 = puVar10;
  func_0x000107c613fc();
  func_0x0001000c6518(alStack_b8,lVar8);
  lStack_3a8 = lVar20;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  plVar26 = (long *)(lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  lStack_3a0 = lVar5;
  (**(code **)(extraout_x12 + 0x10))(plVar26);
  func_0x0001000c6518(alStack_e0,lVar9);
  plStack_3b0 = plVar26;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  plVar24 = (long *)((long)plVar26 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(plVar24);
  uVar13 = uStack_2c8;
  uVar14 = uStack_390;
  alStack_108[0] = *plVar26;
  alStack_130[0] = *plVar24;
  ppuStack_e8 = &PTR_DAT_110488cc8;
  ppuStack_110 = &PTR_DAT_110488de0;
  *(undefined8 *)(puVar10 + 0x10) = uStack_390;
  *(undefined8 *)(puVar10 + 0x18) = uStack_2c8;
  lStack_118 = lVar9;
  lStack_f0 = lVar8;
  func_0x00010079c35c(alStack_108,puVar10 + 0x20);
  uVar1 = uStack_2c0;
  lVar5 = lStack_2e0;
  uVar12 = uStack_378;
  *(long *)(puVar10 + 0x48) = lStack_2e0;
  *(undefined8 *)(puVar10 + 0x50) = param_4;
  *(undefined8 *)(puVar10 + 0x58) = uStack_2c0;
  *(undefined8 *)(puVar10 + 0x60) = uStack_378;
  uStack_2d8 = param_4;
  func_0x00010079c35c(alStack_130,puVar10 + 0x68);
  uVar11 = 0;
  func_0x0001000295c4();
  pcStack_3c8 = "sSaveServiceProvider";
  uStack_3c0 = uVar11;
  func_0x000107c61580(param_4,2);
  func_0x000107c61580(uStack_3b8,2);
  func_0x000107c6157c(lVar5);
  func_0x000107c6157c(puStack_2e8);
  func_0x000107c6157c(lVar7);
  func_0x000107c6157c(lVar6);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar12);
  lVar5 = lStack_388;
  func_0x000107c5f810(lStack_388);
  apuStack_158[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100029608();
  uVar14 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar13 = uVar14;
  func_0x00010002964c();
  lVar20 = lStack_370;
  func_0x000107c60264(lStack_370,apuStack_158,uVar14,uVar13,lStack_380,uVar12);
  puVar19 = puStack_360;
  (**(code **)((long)puStack_368 + 0x68))
            (puStack_360,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,puStack_358);
  uVar14 = 0xd000000000000016;
  func_0x000107c5ffec(0xd000000000000016,(ulong)pcStack_3c8 | 0x8000000000000000,lVar5,lVar20,
                      puVar19,0);
  func_0x000107c61574(lVar7);
  func_0x000107c61574(lVar6);
  func_0x0001000834e4(alStack_130);
  func_0x0001000834e4(alStack_108);
  *(undefined8 *)(puVar10 + 0x90) = uVar14;
  func_0x0001000834e4(alStack_e0);
  func_0x0001000834e4(alStack_b8);
  lVar5 = lStack_3a8;
  lVar15 = 0;
  func_0x000101e077a8();
  lVar8 = lVar15;
  func_0x000107c613fc();
  puVar19 = puStack_348;
  *(undefined8 **)(lVar8 + 0x10) = puStack_348;
  lVar16 = 0;
  func_0x000101de1870();
  lVar9 = lVar16;
  func_0x000107c613fc();
  puVar17 = PTR_PTR_1126a95d0;
  func_0x000107c610f8();
  func_0x000107c615f0(puVar19);
  func_0x000107c453e4();
  *(undefined **)(lVar9 + 0x10) = puVar17;
  func_0x000100083b20(alStack_b8);
  lVar6 = lStack_2d0;
  lVar7 = lStack_2f0;
  puVar17 = puStack_2f8;
  lVar20 = lStack_338;
  lStack_c8 = lStack_2d0;
  alStack_e0[0] = lStack_350;
  ppuStack_c0 = &PTR_DAT_110488858;
  lStack_f0 = lStack_338;
  ppuStack_e8 = &PTR_DAT_110488910;
  alStack_108[0] = lStack_3a0;
  ppuStack_110 = &PTR_DAT_110488978;
  lStack_118 = lStack_2f0;
  alStack_130[0] = lStack_398;
  ppuStack_138 = &PTR_DAT_110488b20;
  puStack_140 = puStack_2f8;
  ppuStack_160 = &PTR_DAT_110488d68;
  ppuStack_188 = &PTR_DAT_1104882b0;
  lVar18 = 0;
  alStack_1a8[0] = lVar9;
  lStack_190 = lVar16;
  alStack_180[0] = lVar8;
  lStack_168 = lVar15;
  apuStack_158[0] = puVar10;
  FUN_101de2c2c();
  lStack_350 = lVar18;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_e0,lVar6);
  lStack_2e0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar19 = (undefined8 *)(lVar5 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  puStack_368 = puVar19;
  (**(code **)(extraout_x12_01 + 0x10))();
  func_0x0001000c6518(alStack_108,lVar20);
  puStack_2e8 = puVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar20 + -8) + 0x40));
  puVar19 = (undefined8 *)((long)puVar19 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_02 + 0x10))(puVar19);
  func_0x0001000c6518(alStack_130,lVar7);
  puStack_340 = puVar19;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar23 = (undefined8 *)((long)puVar19 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_03 + 0x10))(puVar23);
  func_0x0001000c6518(apuStack_158,puVar17);
  puStack_348 = puVar23;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  puVar21 = (undefined8 *)((long)puVar23 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_04 + 0x10))(puVar21);
  func_0x0001000c6518(alStack_180,lVar15);
  puStack_358 = puVar21;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  puVar25 = (undefined8 *)((long)puVar21 - (extraout_x8_08 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_05 + 0x10))(puVar25);
  func_0x0001000c6518(alStack_1a8,lVar16);
  puStack_360 = puVar25;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  puVar27 = (undefined8 *)((long)puVar25 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_06 + 0x10))(puVar27);
  auStack_1d0[0] = *puStack_368;
  auStack_1f8[0] = *puVar19;
  auStack_220[0] = *puVar23;
  auStack_248[0] = *puVar21;
  auStack_270[0] = *puVar25;
  auStack_298[0] = *puVar27;
  ppuStack_1b0 = &PTR_DAT_110488858;
  lStack_1b8 = lStack_2d0;
  lStack_1e0 = lVar20;
  ppuStack_1d8 = &PTR_DAT_110488910;
  lStack_208 = lStack_2f0;
  ppuStack_200 = &PTR_DAT_110488978;
  puStack_230 = puStack_2f8;
  ppuStack_228 = &PTR_DAT_110488b20;
  ppuStack_250 = &PTR_DAT_110488d68;
  ppuStack_278 = &PTR_DAT_1104882b0;
  lStack_280 = lVar16;
  lStack_258 = lVar15;
  func_0x00010079c35c(auStack_90,lVar18 + _DAT_112e2ef98);
  *(undefined8 *)(lVar18 + _DAT_112e2efa0) = uStack_2b0;
  *(undefined8 *)(lVar18 + _DAT_112e2efc8) = uStack_2d8;
  func_0x00010079c35c(auStack_1d0,lVar18 + _DAT_112e2efa8);
  func_0x00010079c35c(auStack_1f8,lVar18 + _DAT_112e2efb0);
  func_0x00010079c35c(auStack_220,lVar18 + _DAT_112e2efb8);
  func_0x00010079c35c(auStack_248,lVar18 + _DAT_112e2efc0);
  *(undefined8 *)(lVar18 + _DAT_112e2efd0) = uStack_2b8;
  func_0x00010079c35c(auStack_270,lVar18 + _DAT_112e2efd8);
  func_0x00010079c35c(auStack_298,lVar18 + _DAT_112e2efe0);
  uVar4 = uStack_2c0;
  uVar3 = uStack_2c8;
  uVar11 = uStack_310;
  uVar1 = uStack_318;
  uVar13 = uStack_320;
  uVar12 = uStack_328;
  uVar14 = uStack_330;
  *(undefined8 *)(lVar18 + _DAT_112e2efe8) = uStack_2c8;
  *(undefined8 *)(lVar18 + _DAT_112e2eff0) = uStack_2c0;
  *(undefined8 *)(lVar18 + _DAT_112e2eff8) = uStack_330;
  *(undefined8 *)(lVar18 + _DAT_112e2f000) = uStack_328;
  *(undefined8 *)(lVar18 + _DAT_112e2f008) = uStack_320;
  *(undefined8 *)(lVar18 + _DAT_112e2f010) = uStack_318;
  *(undefined8 *)(lVar18 + _DAT_112e2f018) = uStack_310;
  func_0x00010079c35c(alStack_b8,lVar18 + _DAT_112e2f020);
  uVar2 = uStack_308;
  *(undefined8 *)(lVar18 + _DAT_112e2f028) = uStack_308;
  puVar17 = PTR_s_init_1125d9248;
  lStack_2a0 = lStack_350;
  lStack_2a8 = lVar18;
  func_0x000107c6157c(uStack_2d8);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uStack_2b0);
  func_0x000107c615f0(uStack_2b8);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar11);
  func_0x000107c615f0(uVar2);
  plVar24 = &lStack_2a8;
  func_0x000107c61154(plVar24,puVar17);
  func_0x0001000834e4(alStack_b8);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_298);
  func_0x0001000834e4(auStack_270);
  func_0x0001000834e4(auStack_248);
  func_0x0001000834e4(auStack_220);
  func_0x0001000834e4(auStack_1f8);
  func_0x0001000834e4(auStack_1d0);
  func_0x0001000834e4(alStack_1a8);
  func_0x0001000834e4(alStack_180);
  func_0x0001000834e4(apuStack_158);
  func_0x0001000834e4(alStack_130);
  func_0x0001000834e4(alStack_108);
  func_0x0001000834e4(alStack_e0);
  *plStack_300 = (long)plVar24;
  plStack_300[1] = (long)&PTR_DAT_110488300;
  return;
}



/* Entry: 101e07578; end: 101e0775f;  */

void FUN_101e07578(void)

{
  long unaff_x20;
  
  FUN_101e0693c(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40)
                ,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined8 *)(unaff_x20 + 0xa8),*(undefined8 *)(unaff_x20 + 0xb0),
                *(undefined8 *)(unaff_x20 + 0xb8),*(undefined8 *)(unaff_x20 + 0xc0),
                *(undefined8 *)(unaff_x20 + 200),*(undefined8 *)(unaff_x20 + 0xd0),
                *(undefined8 *)(unaff_x20 + 0xd8),*(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 101e07760; end: 101e07783;  */

void FUN_101e07760(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010079aeec();
  *param_1 = param_2;
  return;
}



/* Entry: 101e07784; end: 101e077c7;  */

void FUN_101e07784(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e077c8; end: 101e0794f;  */

undefined8 FUN_101e077c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126b25c0;
  func_0x000107c610f8(PTR_PTR_1126b25c0);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126bcf30;
  func_0x000107c610f8(PTR_PTR_1126bcf30);
  func_0x000107c453e4();
  func_0x000107c5ee8c();
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07948);
    (*pcVar1)();
  }
  if (-1.0 < param_1) {
    if (param_1 < 1.8446744073709552e+19) {
      func_0x000107c59340(puVar3);
      func_0x000107c59df8(puVar2);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
      func_0x000107c42428();
      func_0x000107c61180();
      uVar6 = uVar4;
      func_0x000107c614f0();
      func_0x000101e07a14(param_2,0,uVar6);
      puVar5 = &UNK_110488da0;
      func_0x000107c613fc(&UNK_110488da0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar4;
      *(undefined8 *)(puVar5 + 0x18) = param_4;
      uVar6 = 0;
      func_0x000100fa1670(0);
      func_0x000107c615f0(uVar4);
      func_0x000107c61174(param_4);
      uVar7 = 0;
      func_0x000100775264(0,1,FUN_101e07d10,puVar5,uVar6);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(uVar4);
      func_0x000107c61574(param_2);
      func_0x000107c61574(puVar5);
      return uVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07950);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0794c);
  (*pcVar1)();
}



/* Entry: 101e07950; end: 101e07b2b;  */

undefined * FUN_101e07950(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0);
  func_0x000107c5dd5c();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b3068;
  func_0x000107c610f8(PTR_PTR_1126b3068);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b25e8;
  func_0x000107c610f8(PTR_PTR_1126b25e8);
  func_0x000107c453e4();
  if ((param_2 & 1) == 0) {
    func_0x000107c57494(puVar2);
  }
  else {
    func_0x000107c55388();
  }
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  FUN_101e077c8(puVar1,param_3,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101e07b2c; end: 101e07d0f;  */

void FUN_101e07b2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b25d0;
  func_0x000107c610f8(PTR_PTR_1126b25d0);
  func_0x000107c453e4();
  func_0x000107c563e8();
  puVar2 = PTR_PTR_1126affe8;
  func_0x000107c61168(PTR_PTR_1126affe8);
  puVar3 = puVar2;
  func_0x000107c4b838();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c3d7f4(param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar4);
  puVar3 = PTR_PTR_1126b25d0;
  func_0x000107c610f8(PTR_PTR_1126b25d0);
  func_0x000107c453e4();
  puVar5 = PTR_PTR_1126b0cc0;
  func_0x000107c610f8(PTR_PTR_1126b0cc0);
  func_0x000107c453e4();
  puVar6 = PTR_PTR_1126b37e0;
  func_0x000107c610f8(PTR_PTR_1126b37e0);
  func_0x000107c453e4();
  uVar4 = 0x112d48d68;
  func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
  uVar8 = 0x112e2f7f8;
  func_0x000107c61538();
  func_0x0001004496cc();
  uVar7 = uVar4;
  func_0x000107c5ee20();
  func_0x00010006c090(uVar4,uVar8);
  func_0x000107c55b9c(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c5667c(puVar5);
  func_0x000107c53b78(puVar3);
  func_0x000107c44410(puVar2);
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c3d7f4(param_3);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c574c8(param_3);
  func_0x000107c5b198();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  *param_1 = param_3;
  return;
}



/* Entry: 101e07d10; end: 101e07d27;  */

void FUN_101e07d10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101e07b2c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101e07d28; end: 101e07dbb;  */

void FUN_101e07d28(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puStack_28;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 == 0)) {
    puStack_28 = param_1;
    func_0x000107c61174();
    func_0x000100b60084(&puStack_28);
    func_0x000107c61170(param_1);
    return;
  }
  FUN_101df6cf4();
  puVar1 = &UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,param_1,0,0);
  param_1[1] = 0;
  *param_1 = 1;
  *(undefined1 *)(param_1 + 2) = 0x80;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101e07dbc; end: 101e07e33;  */

/* WARNING: Possible PIC construction at 0x000101e07e18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e07e1c) */

void FUN_101e07dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101e07e34; end: 101e07f73;  */

undefined * FUN_101e07e34(double param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b3068;
  func_0x000107c610f8(PTR_PTR_1126b3068);
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b25e8;
  if (((param_2 & 1) == 0) && ((ulong)ABS(param_1) < 0x7ff0000000000000)) {
    if (0.0 < param_1) {
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07f64);
        (*pcVar1)();
      }
      if (4294967296.0 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07f68);
        (*pcVar1)();
      }
      func_0x000107c54370(puVar2,param_3,(int)param_1);
      param_1 = param_1 * 1000.0;
      if (0x7fe < (ulong)param_1 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07f6c);
        (*pcVar1)();
      }
      if (-1.0 < param_1) {
        if (param_1 < 4294967296.0) {
          func_0x000107c54364(puVar2,param_3,(int)param_1);
          return puVar2;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07f74);
        (*pcVar1)();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e07f70);
      (*pcVar1)();
    }
    func_0x000107c610f8(PTR_PTR_1126b25e8);
    func_0x000107c453e4();
    func_0x000107c57494(puVar2,param_3,puVar3);
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126b25e8);
    func_0x000107c453e4();
    func_0x000107c55388(puVar2,param_3,puVar3);
  }
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 101e07f74; end: 101e07f97;  */

void FUN_101e07f74(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puStack_28;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 == 0)) {
    puStack_28 = param_1;
    func_0x000107c61174();
    func_0x000100b60084(&puStack_28);
    func_0x000107c61170(param_1);
    return;
  }
  FUN_101df6cf4();
  puVar1 = &UNK_1106e3fc0;
  func_0x000107c613f8(&UNK_1106e3fc0,param_1,0,0);
  param_1[1] = 0;
  *param_1 = 1;
  *(undefined1 *)(param_1 + 2) = 0x80;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101e07f98; end: 101e07fe3;  */

void FUN_101e07f98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101e07fe4; end: 101e08403;  */

void FUN_101e07fe4(ulong *param_1,double param_2,ulong param_3)

{
  ulong *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  ulong auStack_90 [2];
  
  uVar13 = 0;
  uVar5 = param_3;
  func_0x00010801f580();
  func_0x000107c61180();
  if (uVar5 == 0) {
    FUN_101e092b4();
                    /* WARNING: Could not recover jumptable at 0x000101e080c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(uVar5 - 8) + 0x38))(param_1,1,1,uVar5);
    return;
  }
  uVar6 = uVar5;
  func_0x000103be31a4();
  dVar17 = param_2;
  if ((uVar6 & 1) == 0) {
LAB_101e08064:
    func_0x000108020980(param_3);
    uVar6 = param_3;
    param_2 = dVar17;
    func_0x0001080207d4();
    if (dVar17 <= 0.0) {
      dVar17 = param_2;
    }
  }
  else {
    func_0x0001000d224c(auStack_90);
    uVar6 = auStack_90[0];
    uVar7 = auStack_90[0];
    func_0x000107c41ef4();
    func_0x000107c615e8();
    dVar17 = param_2;
    if ((uVar7 & 1) != 0) goto LAB_101e08064;
    func_0x000103be2c94();
    dVar17 = param_2;
  }
  func_0x000103be30d0();
  if (uVar6 == 0) {
    uVar6 = uVar5;
    func_0x000107c61174();
  }
  uVar7 = uVar6;
  FUN_101e08404();
  func_0x000107c61170(uVar6);
  uVar6 = param_3;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e083e8);
    (*pcVar3)();
  }
  uVar8 = uVar6;
  func_0x000107c4e8ec();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e083ec);
    (*pcVar3)();
  }
  uVar9 = uVar8;
  func_0x000107c420f4();
  func_0x000107c61170();
  bVar4 = (byte)uVar8;
  FUN_101e08868();
  uVar8 = uVar5;
  func_0x000107c4e080();
  uVar6 = 3;
  if ((int)uVar8 != 1) {
    uVar6 = 0;
  }
  uVar8 = param_3;
  func_0x000107c44950();
  puVar14 = (undefined *)0x0;
  if ((int)uVar8 != 0) {
    uVar8 = param_3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e083fc);
      (*pcVar3)();
    }
    func_0x000107c4ab14();
    dVar18 = param_2;
    func_0x000107c61170(uVar8);
    uVar8 = param_3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e08400);
      (*pcVar3)();
    }
    func_0x000107c4c0e4();
    func_0x000107c61170(uVar8);
    puVar14 = PTR__OBJC_CLASS___CLLocation_1126b30c8;
    func_0x000107c610f8();
    func_0x000107c470f8(param_2,dVar18);
  }
  uVar8 = param_3;
  func_0x000107c44bb8();
  lVar10 = 0;
  FUN_101e092b4();
  iVar2 = *(int *)(lVar10 + 0x30);
  if ((int)uVar8 == 0) {
    func_0x000107c5eea0((long)param_1 + (long)iVar2);
  }
  else {
    uVar8 = param_3;
    func_0x000107c5ca90();
    func_0x000107c61180();
    if (uVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101e08404);
      (*pcVar3)();
    }
    uVar16 = uVar8;
    func_0x000107c5b184();
    func_0x000107c61170(uVar8);
    func_0x000107c5ee88((long)param_1 + (long)iVar2,(double)uVar16 / 1000.0);
  }
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e083f0);
    (*pcVar3)();
  }
  uVar8 = param_3;
  func_0x000107c3f5b8();
  func_0x000107c61170(param_3);
  uVar15 = (uint)uVar8;
  if (uVar15 < 2) {
    uVar15 = 1;
  }
  func_0x0001000d224c(auStack_90);
  uVar8 = auStack_90[0];
  func_0x000107c44328();
  func_0x000107c61180();
  func_0x000107c615e8(auStack_90[0]);
  if (uVar8 != 0) {
    uVar16 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
    uVar8 = uVar16 & 0xffffffffffff;
    if ((uVar13 & 0x2000000000000000) != 0) {
      uVar8 = uVar13 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) goto LAB_101e08300;
    func_0x000107c6142c(uVar13);
  }
  uVar16 = 0;
  uVar13 = 0;
LAB_101e08300:
  uVar8 = uVar5;
  func_0x000107c41e40();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101e083f4);
    (*pcVar3)();
  }
  uVar11 = uVar8;
  func_0x000107c5e304();
  func_0x000107c61170(uVar8);
  uVar8 = uVar5;
  func_0x000107c41e40();
  func_0x000107c61180();
  if (uVar8 != 0) {
    uVar12 = uVar8;
    func_0x000107c44d98();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar5);
    *param_1 = uVar7;
    *(int *)(param_1 + 1) = (int)uVar11;
    *(int *)((long)param_1 + 0xc) = (int)uVar12;
    param_1[2] = (ulong)dVar17;
    *(bool *)(param_1 + 3) = (int)uVar9 == 6;
    *(byte *)((long)param_1 + 0x19) = bVar4 & 1;
    param_1[4] = uVar6;
    param_1[5] = (ulong)puVar14;
    *(uint *)((long)param_1 + (long)*(int *)(lVar10 + 0x34)) = uVar15;
    puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar10 + 0x38));
    *puVar1 = uVar16;
    puVar1[1] = uVar13;
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,0,1,lVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101e083f8);
  (*pcVar3)();
}



/* Entry: 101e08404; end: 101e08867;  */

long FUN_101e08404(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong unaff_x20;
  
  iVar3 = (int)param_1;
  uVar4 = unaff_x20;
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0882c);
    (*pcVar1)();
  }
  uVar5 = uVar4;
  func_0x000107c3f5b8();
  func_0x000107c61170(uVar4);
  if ((int)uVar5 == 2) {
    return 1;
  }
  func_0x000103be8288(0);
  uVar4 = unaff_x20;
  func_0x000103be6c7c();
  if (((uVar4 & 1) == 0) && (uVar4 = unaff_x20, func_0x00010801f73c(), (int)uVar4 != 0)) {
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08834);
      (*pcVar1)();
    }
    uVar4 = unaff_x20;
    func_0x000107c4e8ec();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e084b4);
      (*pcVar1)();
    }
  }
  else {
    uVar4 = unaff_x20;
    func_0x000107c44b30();
    if ((int)uVar4 != 0) {
      uVar4 = unaff_x20;
      func_0x000107c5b6dc();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08830);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c5dd14();
      func_0x000107c61170(uVar4);
      iVar7 = (int)uVar5;
      if (iVar7 < 3) {
        if (iVar7 == 1) {
          func_0x000107c5d0f0();
          if (iVar3 == 0) {
            return 10;
          }
          func_0x000107c4e8d8();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08850);
            (*pcVar1)();
          }
          uVar4 = unaff_x20;
          func_0x000107c4e8ec();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x20);
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08864);
            (*pcVar1)();
          }
          uVar5 = uVar4;
          func_0x000107c44b24();
          func_0x000107c61170(uVar4);
          bVar2 = (int)uVar5 == 0;
          lVar6 = 5;
        }
        else {
          if (iVar7 != 2) {
            return -9999;
          }
          func_0x000107c5d0f0();
          if (iVar3 == 0) {
            return 0xb;
          }
          func_0x000107c4e8d8();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08844);
            (*pcVar1)();
          }
          uVar4 = unaff_x20;
          func_0x000107c4e8ec();
          func_0x000107c61180();
          func_0x000107c61170(unaff_x20);
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08858);
            (*pcVar1)();
          }
          uVar5 = uVar4;
          func_0x000107c44b24();
          func_0x000107c61170(uVar4);
          bVar2 = (int)uVar5 == 0;
          lVar6 = 0xc;
        }
      }
      else if (iVar7 == 3) {
        func_0x000107c5d0f0();
        if (iVar3 == 0) {
          return 0x10;
        }
        func_0x000107c4e8d8();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08848);
          (*pcVar1)();
        }
        uVar4 = unaff_x20;
        func_0x000107c4e8ec();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0885c);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44b24();
        func_0x000107c61170(uVar4);
        bVar2 = (int)uVar5 == 0;
        lVar6 = 0x11;
      }
      else if (iVar7 == 4) {
        func_0x000107c5d0f0();
        if (iVar3 == 0) {
          return 0x15;
        }
        func_0x000107c4e8d8();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0884c);
          (*pcVar1)();
        }
        uVar4 = unaff_x20;
        func_0x000107c4e8ec();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08860);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44b24();
        func_0x000107c61170(uVar4);
        bVar2 = (int)uVar5 == 0;
        lVar6 = 0x16;
      }
      else {
        if (iVar7 != 5) {
          return -9999;
        }
        func_0x000107c5d0f0();
        if (iVar3 == 0) {
          return 0x18;
        }
        func_0x000107c4e8d8();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08840);
          (*pcVar1)();
        }
        uVar4 = unaff_x20;
        func_0x000107c4e8ec();
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08854);
          (*pcVar1)();
        }
        uVar5 = uVar4;
        func_0x000107c44b24();
        func_0x000107c61170(uVar4);
        bVar2 = (int)uVar5 == 0;
        lVar6 = 0x19;
      }
      goto LAB_101e085d8;
    }
    func_0x000107c5d0f0();
    iVar3 = (int)param_1;
    if (1 < iVar3) {
      if (iVar3 == 2) {
        return 7;
      }
      if (iVar3 != 3) {
        return -9999;
      }
      return 0x13;
    }
    if (iVar3 == 0) {
      func_0x000103be31a4();
      if (((param_1 & 1) == 0) || (uVar4 = unaff_x20, func_0x000103be6c7c(), (uVar4 & 1) != 0)) {
        return 0;
      }
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08868);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c4e8ec();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08828);
        (*pcVar1)();
      }
    }
    else {
      if (iVar3 != 1) {
        return -9999;
      }
      func_0x000107c4e8d8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08838);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c4e8ec();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0883c);
        (*pcVar1)();
      }
    }
  }
  uVar5 = uVar4;
  func_0x000107c44b24();
  func_0x000107c61170(uVar4);
  bVar2 = (int)uVar5 == 0;
  lVar6 = 1;
LAB_101e085d8:
  if (bVar2) {
    lVar6 = lVar6 + 1;
  }
  return lVar6;
}



/* Entry: 101e08868; end: 101e08a23;  */

bool FUN_101e08868(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_68;
  
  func_0x000101de1648();
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar8 = 0;
  lStack_68 = 0;
  lVar9 = 0;
  do {
    while( true ) {
      if (uVar8 == uVar6) {
        func_0x000107c6142c(param_1);
        return 0 < lVar9 && lStack_68 <= lVar9;
      }
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar7 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08a00);
          (*pcVar1)();
        }
        uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar8;
        func_0x00010121c1ac(uVar8,param_1);
      }
      bVar2 = SCARRY8(uVar8,1);
      uVar8 = uVar8 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e089fc);
        (*pcVar1)();
      }
      uVar4 = uVar3;
      func_0x000107c4abb4();
      if ((int)uVar4 == 1) break;
LAB_101e088c0:
      func_0x000107c61170(uVar3);
    }
    uVar4 = uVar3;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08a1c);
      (*pcVar1)();
    }
    uVar5 = uVar4;
    func_0x000107c44788();
    func_0x000107c61170(uVar4);
    if ((int)uVar5 == 0) goto LAB_101e088c0;
    uVar4 = uVar3;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08a24);
      (*pcVar1)();
    }
    uVar5 = uVar4;
    func_0x000107c3f584();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08a20);
      (*pcVar1)();
    }
    uVar4 = uVar5;
    func_0x000107c43b4c();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    if ((int)uVar4 == 0) {
      bVar2 = SCARRY8(lStack_68,1);
      lStack_68 = lStack_68 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e089c0);
        (*pcVar1)();
      }
    }
    else {
      bVar2 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101e08a18);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Entry: 101e08a24; end: 101e08be7;  */

ulong FUN_101e08a24(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e08b08);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e08b0c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b25c8;
    func_0x000107c61168(PTR_PTR_1126b25c8);
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
    puVar4 = PTR_PTR_1126b25c8;
    func_0x000107c61168(PTR_PTR_1126b25c8);
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
  FUN_101e08be8(0,0x112e2f0c8,&PTR_PTR_1126b25c8);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101e08be8);
  (*pcVar2)();
}



/* Entry: 101e08be8; end: 101e08c27;  */

void FUN_101e08be8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101e08c28; end: 101e08d8f;  */

int FUN_101e08c28(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e08ca4;
        goto LAB_101e08c88;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e08c88:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101e08ca4:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e08d90; end: 101e08dcf;  */

void FUN_101e08d90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2f8d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da184c4;
  func_0x000107c61520(&UNK_10da184c4,&UNK_110488e70);
  puRam0000000112e2f8d0 = puVar1;
  return;
}



/* Entry: 101e08dd0; end: 101e08de3;  */

bool FUN_101e08dd0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e08de4; end: 101e08e8f;  */

void FUN_101e08de4(void)

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



/* Entry: 101e08e90; end: 101e08f73;  */

long * FUN_101e08e90(long *param_1,long *param_2,long param_3)

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
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(short *)(param_1 + 3) = (short)param_2[3];
    lVar7 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar7;
    iVar5 = *(int *)(param_3 + 0x30);
    lVar6 = 0;
    func_0x000107c5eea4();
    pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
    func_0x000107c61174(lVar7);
    (*pcVar9)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    iVar5 = *(int *)(param_3 + 0x38);
    *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
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



/* Entry: 101e08f74; end: 101e08fcf;  */

void FUN_101e08f74(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_2 + 0x30);
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x38) + 8));
  return;
}



/* Entry: 101e08fd0; end: 101e09087;  */

undefined8 * FUN_101e08fd0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  iVar3 = *(int *)(param_3 + 0x30);
  lVar4 = 0;
  func_0x000107c5eea4();
  pcVar5 = *(code **)(*(long *)(lVar4 + -8) + 0x10);
  func_0x000107c61174(uVar2);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x38);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar2 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101e09088; end: 101e0929b;  */

undefined8 * FUN_101e09088(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  iVar2 = *(int *)(param_3 + 0x30);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *param_2;
  uVar4 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  return param_1;
}



/* Entry: 101e0929c; end: 101e092b3;  */

void FUN_101e0929c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101e092b4; end: 101e092eb;  */

void FUN_101e092b4(undefined8 param_1)

{
  if (lRam0000000112e2f930 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6920e4);
  return;
}



/* Entry: 101e092ec; end: 101e09397;  */

void FUN_101e092ec(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = PTR___sBi64_WV_11034d670 + 0x40;
  puVar1 = PTR___sBi32_WV_11034d668 + 0x40;
  puStack_58 = &UNK_10da18508;
  puStack_50 = &UNK_10da18508;
  puStack_40 = &UNK_10da18520;
  lVar2 = 0x13f;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puStack_78;
  puStack_48 = puStack_78;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = &UNK_10da18538;
    puStack_30 = puVar1;
    func_0x000107c6153c(param_1,0x100,0xb,&puStack_78,param_1 + 0x10);
  }
  return;
}



/* Entry: 101e09398; end: 101e094ff;  */

int FUN_101e09398(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101e09414;
        goto LAB_101e093f8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101e093f8:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101e09414:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101e09500; end: 101e0953f;  */

void FUN_101e09500(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2f990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da185cc;
  func_0x000107c61520(&UNK_10da185cc,&UNK_110488f38);
  puRam0000000112e2f990 = puVar1;
  return;
}



/* Entry: 101e09540; end: 101e09553;  */

bool FUN_101e09540(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e09554; end: 101e095ff;  */

void FUN_101e09554(void)

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



/* Entry: 101e09600; end: 101e0962b;  */

void FUN_101e09600(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110488fc8;
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  func_0x000107c613fc(&UNK_110488fc8,0x20,7);
  uVar2 = *param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x000107c615f0(uVar2);
  uVar2 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000014,0x800000010f0122e0,&UNK_10da18668,puVar1);
  func_0x000107c61574(puVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101e0962c; end: 101e09663;  */

void FUN_101e0962c(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined1 **)(unaff_x22 + 0x10);
  uVar2 = (undefined1)*(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c42688();
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e09660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e09664; end: 101e09677;  */

void FUN_101e09664(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110488fa0;
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  func_0x000107c613fc(&UNK_110488fa0,0x20,7);
  uVar2 = *param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x000107c615f0(uVar2);
  uVar2 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000014,0x800000010f0122e0,&UNK_10da18658,puVar1);
  func_0x000107c61574(puVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101e09678; end: 101e0973b;  */

void FUN_101e09678(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112e1cb88,&UNK_10d9fe2d0);
  func_0x000107c613fc(param_3,0x20,7);
  uVar1 = *param_2;
  *(undefined8 *)(param_3 + 0x18) = param_2[1];
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  func_0x000107c615f0(uVar1);
  uVar1 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,3,0xd000000000000014,0x800000010f0122e0,param_4,param_3);
  func_0x000107c61574(param_3);
  *param_1 = uVar1;
  return;
}



/* Entry: 101e0973c; end: 101e09753;  */

void FUN_101e0973c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e09754,0,0);
  return;
}



/* Entry: 101e09754; end: 101e097df;  */

void FUN_101e09754(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined1 **)(unaff_x22 + 0x10);
  uVar2 = (undefined1)*(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c4a45c();
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000101e09788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e097e0; end: 101e097fb;  */

void FUN_101e097e0(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x6a) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e097fc,0,0);
  return;
}



/* Entry: 101e097fc; end: 101e098bf;  */

void FUN_101e097fc(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0xb8);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xf0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101e0986c;
                    /* WARNING: Could not recover jumptable at 0x000101e09868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101dae210();
  return;
}



/* Entry: 101e098c0; end: 101e09a27;  */

void FUN_101e098c0(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  uVar6 = *(ulong *)(unaff_x22 + 0xf8);
  if (*(char *)(unaff_x22 + 0x6b) == '\x01') {
    *(ulong *)(unaff_x22 + 0xc0) = uVar6;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xc0,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
    if ((uVar6 & 1) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
    else {
      uVar6 = *(ulong *)(unaff_x22 + 0xd8);
      func_0x000107c42400();
      func_0x000107c61180();
      if (uVar6 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101e09a28);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar3 = uVar6;
      func_0x000107c44b0c();
      func_0x000107c61170(uVar6);
      if ((uVar3 & 1) != 0) {
        plVar7 = *(long **)(*(long *)(unaff_x22 + 0xe0) + 0x10);
        plVar4 = (long *)0x70;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x118) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = 0x101e09b5c;
        plVar4[5] = unaff_x22 + 0x98;
        plVar4[6] = (long)plVar7;
        lVar8 = *(long *)(*plVar7 + 0x50);
        plVar4[7] = lVar8;
        lVar5 = 0;
        __sSqMa(0,lVar8);
        plVar4[8] = lVar5;
        lVar5 = *(long *)(lVar5 + -8);
        plVar4[9] = lVar5;
        uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar4[10] = uVar6;
        lVar5 = *(long *)(lVar8 + -8);
        plVar4[0xb] = lVar5;
        uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar4[0xc] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
        return;
      }
      func_0x0001000d224c(unaff_x22 + 200);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 200);
      plVar4 = (long *)0x80;
      UNRECOVERED_JUMPTABLE = FUN_101dae210;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x108) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101e09a28;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101e09a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101e09a28; end: 101e09ba3;  */

void FUN_101e09a28(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x110) = param_1;
  *(undefined1 *)(lVar1 + 0x6c) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101e09a7c,0,0);
  return;
}



/* Entry: 101e09ba4; end: 101e09cef;  */

void FUN_101e09ba4(void)

{
  int iVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar11 = 0x70756b636162;
  cVar3 = *(char *)(unaff_x22 + 0x6a);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar4;
  if (cVar3 == '\x02') {
    uVar10 = 0xe600000000000000;
  }
  else {
    puVar9 = (undefined8 *)(unaff_x22 + 0xa8);
    *puVar9 = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0xe000000000000000;
    func_0x000107c5fb78(0x70756b636162,0xe600000000000000);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    *(char *)(unaff_x22 + 0x69) = cVar3;
    func_0x000107c603d0((char *)(unaff_x22 + 0x69),puVar9,&UNK_110488f38,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar11 = *puVar9;
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  }
  *(undefined8 *)(unaff_x22 + 0x128) = uVar10;
  func_0x000107c614f0(uVar4);
  *(undefined8 *)(unaff_x22 + 0x70) = 0xd000000000000070;
  *(undefined8 *)(unaff_x22 + 0x78) = 0x800000010f012220;
  *(undefined8 *)(unaff_x22 + 0x80) = 0xd000000000000031;
  *(undefined8 *)(unaff_x22 + 0x88) = 0x800000010f0122a0;
  *(undefined8 *)(unaff_x22 + 0x90) = 0x11;
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x130) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101e09cf0;
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  plVar5[0xe] = unaff_x22 + 0x10;
  piVar8 = *(int **)(lVar2 + 8);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  plVar5[0xf] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = (long)&UNK_103fc117c;
                    /* WARNING: Could not recover jumptable at 0x000103fc1178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (uVar7,uVar11,uVar10,(undefined8 *)(unaff_x22 + 0x70),plVar5 + 2,uVar4,lVar2);
  return;
}



/* Entry: 101e09cf0; end: 101e09d93;  */

void FUN_101e09cf0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x130));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x120);
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x128));
    func_0x000107c615e8(uVar1);
    pcVar2 = FUN_101e09e34;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x120);
    *(undefined8 *)(lVar3 + 0x140) = *(undefined8 *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x138) = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x150) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x148) = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(lVar3 + 0x160) = *(undefined8 *)(lVar3 + 0x38);
    *(undefined8 *)(lVar3 + 0x158) = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x170) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x168) = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar3 + 0x180) = *(undefined8 *)(lVar3 + 0x58);
    *(undefined8 *)(lVar3 + 0x178) = *(undefined8 *)(lVar3 + 0x50);
    *(undefined8 *)(lVar3 + 0x188) = *(undefined8 *)(lVar3 + 0x60);
    *(undefined1 *)(lVar3 + 0x6d) = *(undefined1 *)(lVar3 + 0x68);
    func_0x000107c6142c(*(undefined8 *)(lVar3 + 0x128));
    func_0x000107c615e8(uVar1);
    pcVar2 = FUN_101e09d94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101e09d94; end: 101e09e33;  */

void FUN_101e09d94(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x6d);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000101a66374();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  func_0x000107c613f8(&UNK_11072caa8,param_1,0,0);
  param_1[1] = uVar8;
  *param_1 = uVar7;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  param_1[5] = uVar12;
  param_1[4] = uVar11;
  param_1[7] = uVar6;
  param_1[6] = uVar4;
  param_1[9] = uVar5;
  param_1[8] = uVar3;
  param_1[10] = uVar2;
  *(undefined1 *)(param_1 + 0xb) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000101e09e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e09e34; end: 101e09e3f;  */

void FUN_101e09e34(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101e09e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101e09e40; end: 101e09ea3;  */

void FUN_101e09e40(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e09ea4;
  plVar2[2] = param_1;
  plVar2[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e09754,0,0);
  return;
}



/* Entry: 101e09ea4; end: 101e09edf;  */

void FUN_101e09ea4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e09edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e09ee0; end: 101e09f43;  */

void FUN_101e09ee0(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101e09f44;
  plVar2[2] = param_1;
  plVar2[3] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101e0962c,0,0);
  return;
}



/* Entry: 101e09f44; end: 101e09f47;  */

void FUN_101e09f44(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101e09edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101e09f48; end: 101e09f57; -[MemoriesValdiSaveServices saver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e09f48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e2fa50));
  return;
}



/* Entry: 101e09f58; end: 101e0a01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101e09f58(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar4 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e2fa48) = param_1;
  func_0x000107c6157c(param_1);
  uVar1 = 0x112e2fa58;
  func_0x0001000285a8(0x112e2fa58,&UNK_10da18670);
  pcVar2 = FUN_101e0a020;
  func_0x0001000cb480(FUN_101e0a020,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar2);
  *(code **)(unaff_x20 + _DAT_112e2fa50) = pcVar3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 101e0a020; end: 101e0a02b;  */

void FUN_101e0a020(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101e0a02c; end: 101e0a08b; -[MemoriesValdiSaveServices init] */

void FUN_101e0a02c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiSaveServicesAPI.MemoriesValdiSaveServices",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0a058);
  (*pcVar1)();
}



/* Entry: 101e0a08c; end: 101e0a0c3; -[MemoriesValdiSaveServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0a08c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2fa48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e2fa50));
  return;
}



/* Entry: 101e0a0c4; end: 101e0a1ff;  */

void FUN_101e0a0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101e0a200; end: 101e0a213;  */

bool FUN_101e0a200(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101e0a214; end: 101e0a2bf;  */

void FUN_101e0a214(void)

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



/* Entry: 101e0a2c0; end: 101e0a2cf;  */

void FUN_101e0a2c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101e0a2d0; end: 101e0a403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101e0a2d0(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112e2fad8;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e2fad8);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010f0124a0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar3);
  return puVar4;
}



/* Entry: 101e0a404; end: 101e0a463; -[_TtC31SCMemoriesOperaSaveServicesImpl28MemoriesOperaSaveManagerImpl init] */

void FUN_101e0a404(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesOperaSaveServicesImpl.MemoriesOperaSaveManagerImpl",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101e0a430);
  (*pcVar1)();
}



/* Entry: 101e0a464; end: 101e0a54b; -[_TtC31SCMemoriesOperaSaveServicesImpl28MemoriesOperaSaveManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0a464(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2fab0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2faa0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2fab8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2fa88));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2fad0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2fac8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e2fad8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e2fae0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e2fae8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2fac0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e2faf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e2fa90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e2fa98));
  return;
}



/* Entry: 101e0a54c; end: 101e0a5eb;  */

/* WARNING: Possible PIC construction at 0x000101e0a598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e0a59c) */

void FUN_101e0a54c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107dfde50(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101e0a5ec; end: 101e0a60b;  */

/* WARNING: Possible PIC construction at 0x000101e0a598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e0a59c) */

void FUN_101e0a5ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107dfde50(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101e0a60c; end: 101e0a693; -[_TtC31SCMemoriesOperaSaveServicesImpl28MemoriesOperaSaveManagerImpl fetchSaveStatusWithSnapId:completion:] */

void FUN_101e0a60c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c5faec(param_3);
  func_0x000107c60bc4(param_4);
  func_0x000107c61174(param_1);
  FUN_101e0e1f8(param_3,param_2,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101e0a694; end: 101e0bc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101e0a694(undefined8 param_1,undefined1 *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined1 **ppuVar16;
  undefined *puVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long unaff_x20;
  undefined8 uVar27;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  
  uVar27 = *(undefined8 *)(unaff_x20 + _DAT_112e2fa90);
  func_0x000107c4b940(uVar27);
  func_0x000107c61428(unaff_x20 + _DAT_112e2fa98,&puStack_b8,0x21,0);
  func_0x000107c61434(param_3);
  puVar3 = auStack_88;
  func_0x000100403b00(puVar3,param_2,param_3);
  func_0x000107c614a8(&puStack_b8);
  func_0x000107c6142c(uStack_80);
  func_0x000107c5d278(uVar27);
  if (((ulong)puVar3 & 1) == 0) goto LAB_101e0ab14;
  puVar4 = &UNK_1104891d8;
  func_0x000107c613fc(&UNK_1104891d8,0x11,7);
  puVar4[0x10] = 0;
  puVar5 = &UNK_110489200;
  func_0x000107c613fc(&UNK_110489200,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_110489228;
  func_0x000107c613fc(&UNK_110489228,0x40,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined1 **)(puVar6 + 0x20) = param_2;
  *(undefined8 *)(puVar6 + 0x28) = param_3;
  *(undefined8 *)(puVar6 + 0x30) = param_9;
  *(undefined8 *)(puVar6 + 0x38) = param_10;
  func_0x000107c61580(puVar4,3);
  func_0x000107c61438(param_3,2);
  func_0x000107c61580(puVar5,2);
  func_0x000107c61580(param_10,2);
  puVar7 = puVar6;
  func_0x000107c6157c();
  func_0x0001000d224c(&puStack_b8);
  puVar12 = puStack_b8;
  if (puStack_b8 != (undefined1 *)0x0) {
    func_0x0001000d224c(&puStack_b8);
    puVar7 = puStack_b8;
    if (puStack_b8 == (undefined1 *)0x0) {
LAB_101e0a9cc:
      func_0x000107c61170();
      puVar7 = puVar12;
    }
    else {
      func_0x0001000d224c(&puStack_b8);
      puVar25 = puStack_b8;
      if (puStack_b8 != (undefined1 *)0x0) {
        func_0x0001000d224c(&puStack_b8);
        puVar1 = puStack_b8;
        if (puStack_b8 == (undefined1 *)0x0) {
          func_0x000107c61170(puVar12);
          func_0x000107c615e8(puVar7);
          puVar12 = puVar25;
          goto LAB_101e0a9cc;
        }
        puVar13 = PTR_PTR_1126af4d0;
        func_0x000107c61168();
        puVar8 = param_2;
        uVar27 = param_3;
        func_0x000107c5fadc();
        func_0x000107c430f4();
        func_0x000107c61180();
        func_0x000107c61170();
        if (puVar13 == (undefined1 *)0x0) {
          FUN_101e0df2c();
          puVar15 = &UNK_1104896f8;
          func_0x000107c613f8(&UNK_1104896f8,puVar8,0,0);
          *puVar8 = 1;
          pcVar14 = 
          "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)";
          func_0x0001000c10c0(
                             "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                             );
          func_0x000107c61180();
          puVar13 = &UNK_1104892a0;
          func_0x000107c613fc(&UNK_1104892a0,0x48,7);
          *(undefined **)(puVar13 + 0x10) = puVar4;
          *(undefined **)(puVar13 + 0x18) = puVar5;
          *(undefined1 **)(puVar13 + 0x20) = param_2;
          *(undefined8 *)(puVar13 + 0x28) = param_3;
          *(undefined8 *)(puVar13 + 0x30) = param_9;
          *(undefined8 *)(puVar13 + 0x38) = param_10;
          *(undefined **)(puVar13 + 0x40) = puVar15;
          pcStack_98 = (code *)0x101e0e820;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1000f6b44;
          puStack_a0 = &UNK_1104892b8;
          ppuVar16 = &puStack_b8;
          puStack_90 = puVar13;
          func_0x000107c60bc4(ppuVar16);
          puVar13 = puStack_90;
          func_0x000107c61434(param_3);
          func_0x000107c6157c(puVar4);
          func_0x000107c6157c(puVar5);
          func_0x000107c6157c(param_10);
          func_0x000107c614b0(puVar15);
          func_0x000107c61574(puVar13);
          func_0x000107c4e524(pcVar14);
          func_0x000107c60bd0(ppuVar16);
          func_0x000107c61574(param_10);
          func_0x000107c6142c(param_3);
          func_0x000107c61578(puVar5,2);
          func_0x000107c615e8(puVar7);
          func_0x000107c615e8(puVar1);
          func_0x000107c61170(puVar25);
LAB_101e0aee4:
          func_0x000107c61170(puVar12);
          func_0x000107c61578(puVar6,2);
          func_0x000107c61578(puVar4,2);
          func_0x000107c615e8(pcVar14);
        }
        else {
          puVar8 = puVar1;
          func_0x000107c430dc();
          func_0x000107c61180();
          if (puVar8 == (undefined1 *)0x0) {
            FUN_101e0df2c();
            puVar15 = &UNK_1104896f8;
            func_0x000107c613f8(&UNK_1104896f8,puVar8,0,0);
            *puVar8 = 2;
            pcVar14 = 
            "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
            ;
            func_0x0001000c10c0(
                               "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                               );
            func_0x000107c61180();
            puVar17 = &UNK_1104892f0;
            func_0x000107c613fc(&UNK_1104892f0,0x48,7);
            *(undefined **)(puVar17 + 0x10) = puVar4;
            *(undefined **)(puVar17 + 0x18) = puVar5;
            *(undefined1 **)(puVar17 + 0x20) = param_2;
            *(undefined8 *)(puVar17 + 0x28) = param_3;
            *(undefined8 *)(puVar17 + 0x30) = param_9;
            *(undefined8 *)(puVar17 + 0x38) = param_10;
            *(undefined **)(puVar17 + 0x40) = puVar15;
            pcStack_98 = (code *)0x101e0e824;
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0x42000000;
            puStack_a8 = &UNK_1000f6b44;
            puStack_a0 = &UNK_110489308;
            ppuVar16 = &puStack_b8;
            puStack_90 = puVar17;
            func_0x000107c60bc4(ppuVar16);
            puVar17 = puStack_90;
            func_0x000107c61434(param_3);
            func_0x000107c6157c(puVar4);
            func_0x000107c6157c(puVar5);
            func_0x000107c6157c(param_10);
            func_0x000107c614b0(puVar15);
            func_0x000107c61574(puVar17);
            func_0x000107c4e524(pcVar14);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c61574(param_10);
            func_0x000107c6142c(param_3);
            func_0x000107c61578(puVar5,2);
LAB_101e0aec4:
            func_0x000107c615e8(puVar13);
            func_0x000107c615e8(puVar7);
            func_0x000107c615e8(puVar1);
            func_0x000107c61170(puVar25);
            goto LAB_101e0aee4;
          }
          puVar26 = puVar13;
          func_0x000107c5b1b0();
          func_0x000107c61180();
          if (puVar26 == (undefined1 *)0x0) {
            FUN_101e0df2c();
            puVar15 = &UNK_1104896f8;
            func_0x000107c613f8(&UNK_1104896f8,puVar26,0,0);
            *puVar26 = 3;
            pcVar14 = 
            "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
            ;
            func_0x0001000c10c0(
                               "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                               );
            func_0x000107c61180();
            puVar17 = &UNK_110489340;
            func_0x000107c613fc(&UNK_110489340,0x48,7);
            *(undefined **)(puVar17 + 0x10) = puVar4;
            *(undefined **)(puVar17 + 0x18) = puVar5;
            *(undefined1 **)(puVar17 + 0x20) = param_2;
            *(undefined8 *)(puVar17 + 0x28) = param_3;
            *(undefined8 *)(puVar17 + 0x30) = param_9;
            *(undefined8 *)(puVar17 + 0x38) = param_10;
            *(undefined **)(puVar17 + 0x40) = puVar15;
            pcStack_98 = (code *)0x101e0e828;
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0x42000000;
            puStack_a8 = &UNK_1000f6b44;
            puStack_a0 = &UNK_110489358;
            ppuVar16 = &puStack_b8;
            puStack_90 = puVar17;
            func_0x000107c60bc4(ppuVar16);
            puVar17 = puStack_90;
            func_0x000107c61434(param_3);
            func_0x000107c6157c(puVar4);
            func_0x000107c6157c(puVar5);
            func_0x000107c6157c(param_10);
            func_0x000107c614b0(puVar15);
            func_0x000107c61574(puVar17);
            func_0x000107c4e524(pcVar14);
            func_0x000107c60bd0(ppuVar16);
            func_0x000107c61574(param_10);
            func_0x000107c6142c(param_3);
            func_0x000107c61578(puVar5,2);
            func_0x000107c615e8(puVar13);
            puVar13 = puVar8;
            goto LAB_101e0aec4;
          }
          puVar9 = puVar26;
          func_0x000107c5ee30();
          func_0x000107c61170(puVar26);
          puVar26 = puVar9;
          func_0x000107c5ee20(puVar9,uVar27);
          puVar10 = puVar26;
          func_0x000108020568();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar10 != (undefined1 *)0x0) {
            func_0x0001000d224c(&puStack_b8);
            puVar26 = puStack_b8;
            puVar11 = puStack_b8;
            func_0x000107c4b6e4();
            func_0x000107c615e8(puVar26);
            if ((int)puVar11 == 0) {
              puVar26 = (undefined1 *)0x0;
            }
            else {
              puVar26 = puVar10;
              func_0x000107e6277c();
            }
            func_0x0001000d224c(&puStack_b8);
            puVar11 = puStack_b8;
            if (puStack_b8 == (undefined1 *)0x0) {
              if (((ulong)puVar26 & 1) != 0) goto LAB_101e0b0c8;
LAB_101e0b5b8:
              FUN_101e0a2d0();
              puVar15 = &UNK_1104893e0;
              func_0x000107c613fc(&UNK_1104893e0,0x68,7);
              *(long *)(puVar15 + 0x10) = unaff_x20;
              *(undefined1 **)(puVar15 + 0x18) = puVar10;
              *(undefined **)(puVar15 + 0x20) = puVar13;
              *(undefined1 **)(puVar15 + 0x28) = puVar8;
              *(undefined1 **)(puVar15 + 0x30) = param_2;
              *(undefined8 *)(puVar15 + 0x38) = param_3;
              *(undefined1 **)(puVar15 + 0x40) = puVar7;
              *(undefined1 **)(puVar15 + 0x48) = puVar1;
              *(undefined1 **)(puVar15 + 0x50) = puVar25;
              *(code **)(puVar15 + 0x58) = FUN_101e0df1c;
              *(undefined1 **)(puVar15 + 0x60) = puVar6;
              pcStack_98 = FUN_101e0df70;
              puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_b0 = 0x42000000;
              puStack_a8 = &UNK_1000f6b44;
              puStack_a0 = &UNK_1104893f8;
              ppuVar16 = &puStack_b8;
              puStack_90 = puVar15;
              func_0x000107c60bc4(ppuVar16);
              puVar15 = puStack_90;
              func_0x000107c61434(param_3);
              func_0x000107c6157c(puVar6);
              func_0x000107c615f0(puVar13);
              func_0x000107c615f0(puVar8);
              func_0x000107c615f0(puVar7);
              func_0x000107c615f0(puVar1);
              func_0x000107c61174(puVar25);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c61574(puVar15);
              func_0x000107c4e524(puVar11);
              func_0x000107c61170(puVar25);
              func_0x000107c615e8(puVar7);
              func_0x000107c61170(puVar12);
              func_0x000107c61574(puVar5);
              func_0x000107c61574(puVar4);
              func_0x000107c61574(puVar6);
              func_0x00010006c090(puVar9,uVar27);
              func_0x000107c615e8(puVar1);
              func_0x000107c615e8(puVar13);
              func_0x000107c615e8(puVar8);
              func_0x000107c61574(param_10);
              func_0x000107c6142c(param_3);
              func_0x000107c61574(puVar5);
              func_0x000107c61574(puVar4);
              func_0x000107c61574(puVar6);
              func_0x000107c61170(puVar10);
              func_0x000107c60bd0(ppuVar16);
              func_0x000107c61574(puVar4);
            }
            else {
              func_0x000107c615e8();
              if ((int)puVar26 == 0) goto LAB_101e0b5b8;
LAB_101e0b0c8:
              func_0x0001000d224c(&puStack_b8);
              puVar26 = puStack_b8;
              if (puStack_b8 == (undefined1 *)0x0) {
                pcVar14 = (char *)0x0;
                if (param_4 != 0) {
                  func_0x000107c61174();
                  pcVar14 = 
                  "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                  ;
                  func_0x0001000c10c0();
                  func_0x000107c61180();
                  puVar15 = &UNK_110489480;
                  func_0x000107c613fc(&UNK_110489480,0x19,7);
                  *(long *)(puVar15 + 0x10) = param_4;
                  puVar15[0x18] = 5;
                  pcStack_98 = FUN_101e0dfac;
                  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_b0 = 0x42000000;
                  puStack_a8 = &UNK_1000f6b44;
                  puStack_a0 = &UNK_110489498;
                  ppuVar16 = &puStack_b8;
                  puStack_90 = puVar15;
                  func_0x000107c60bc4(ppuVar16);
                  puVar15 = puStack_90;
                  func_0x000107c61174(param_4);
                  func_0x000107c61574(puVar15);
                  func_0x000107c4e524(pcVar14);
                  func_0x000107c60bd0(ppuVar16);
                  func_0x000107c61170(param_4);
                  func_0x000107c615e8();
                }
                FUN_101e0df2c();
                puVar15 = &UNK_1104896f8;
                func_0x000107c613f8(&UNK_1104896f8,pcVar14,0,0);
                *pcVar14 = '\x05';
                pcVar14 = 
                "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                ;
                func_0x0001000c10c0(
                                   "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                                   );
                func_0x000107c61180();
                puVar17 = &UNK_110489430;
                func_0x000107c613fc(&UNK_110489430,0x48,7);
                *(undefined **)(puVar17 + 0x10) = puVar4;
                *(undefined **)(puVar17 + 0x18) = puVar5;
                *(undefined1 **)(puVar17 + 0x20) = param_2;
                *(undefined8 *)(puVar17 + 0x28) = param_3;
                *(undefined8 *)(puVar17 + 0x30) = param_9;
                *(undefined8 *)(puVar17 + 0x38) = param_10;
                *(undefined **)(puVar17 + 0x40) = puVar15;
                pcStack_98 = (code *)0x101e0e830;
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0x42000000;
                puStack_a8 = &UNK_1000f6b44;
                puStack_a0 = &UNK_110489448;
                ppuVar16 = &puStack_b8;
                puStack_90 = puVar17;
                func_0x000107c60bc4(ppuVar16);
                puVar17 = puStack_90;
                func_0x000107c61434(param_3);
                func_0x000107c6157c(puVar4);
                func_0x000107c6157c(puVar5);
                func_0x000107c6157c(param_10);
                func_0x000107c614b0(puVar15);
                func_0x000107c61574(puVar17);
                func_0x000107c4e524(pcVar14);
                func_0x000107c60bd0(ppuVar16);
                func_0x000107c615e8(pcVar14);
                func_0x000107c614ac(puVar15);
                func_0x000107c61170(puVar10);
              }
              else {
                func_0x000107c50558(puStack_b8);
                if (param_4 != 0) {
                  func_0x000107c50558(puVar26);
                }
                puVar11 = puVar26;
                func_0x000107c50098();
                func_0x000107c61180();
                if (puVar11 != (undefined1 *)0x0) {
                  func_0x000107c6071c();
                  puVar15 = &UNK_110489200;
                  func_0x000107c613fc(&UNK_110489200,0x18,7);
                  func_0x000107c61614(puVar15 + 0x10);
                  puVar17 = &UNK_110489570;
                  func_0x000107c613fc(&UNK_110489570,0x20,7);
                  *(undefined **)(puVar17 + 0x10) = puVar15;
                  *(undefined8 *)(puVar17 + 0x18) = param_1;
                  puVar15 = &UNK_110489598;
                  func_0x000107c613fc(&UNK_110489598,0x18,7);
                  *(undefined8 *)(puVar15 + 0x10) = 0;
                  if (param_4 != 0) {
                    puVar18 = puVar11;
                    func_0x000107c614f0();
                    lVar19 = param_4;
                    func_0x000107c61174();
                    puVar20 = puVar11;
                    func_0x000107c4f3f4();
                    func_0x000107c61180();
                    if (puVar20 == (undefined1 *)0x0) {
                      func_0x000107c61574(param_10);
                      func_0x000107c6142c(param_3);
                      func_0x000107c61578(puVar5,2);
                      func_0x000107c61578(puVar4,2);
                      func_0x000107c61574(puVar6);
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x101e0bc04);
                      (*pcVar2)();
                    }
                    uVar21 = 0;
                    FUN_101e0ee14();
                    func_0x000107c615f0(puVar11);
                    func_0x000100b64c10(param_5,param_6);
                    func_0x000100b64c10(param_7,param_8);
                    FUN_101e0eee0(puVar20,puVar11,param_5,param_6,param_7,param_8,uVar21,puVar18);
                    *(undefined1 **)(puVar15 + 0x10) = puVar20;
                    func_0x000107c61174();
                    pcVar14 = 
                    "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                    ;
                    func_0x0001000c10c0(
                                       "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                                       );
                    func_0x000107c61180();
                    puVar22 = &UNK_110489638;
                    func_0x000107c613fc(&UNK_110489638,0x20,7);
                    *(undefined1 **)(puVar22 + 0x10) = puVar20;
                    *(long *)(puVar22 + 0x18) = lVar19;
                    pcStack_98 = FUN_101e0e014;
                    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_b0 = 0x42000000;
                    puStack_a8 = &UNK_1000f6b44;
                    puStack_a0 = &UNK_110489650;
                    ppuVar16 = &puStack_b8;
                    puStack_90 = puVar22;
                    func_0x000107c60bc4(ppuVar16);
                    puVar22 = puStack_90;
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174(puVar20);
                    func_0x000107c61574(puVar22);
                    func_0x000107c4e524(pcVar14);
                    func_0x000107c60bd0(ppuVar16);
                    func_0x000107c61170(lVar19);
                    func_0x000107c61170(puVar20);
                    func_0x000107c615e8(pcVar14);
                  }
                  puVar22 = &UNK_1104895c0;
                  func_0x000107c613fc(&UNK_1104895c0,0x28,7);
                  *(undefined **)(puVar22 + 0x10) = puVar15;
                  *(code **)(puVar22 + 0x18) = FUN_101e0df1c;
                  *(undefined1 **)(puVar22 + 0x20) = puVar6;
                  func_0x000107c6157c(puVar6);
                  func_0x000107c6157c(puVar15);
                  puVar18 = puVar11;
                  func_0x000107c506cc();
                  func_0x000107c61180();
                  if (puVar18 == (undefined1 *)0x0) {
                    func_0x000107c61574(param_10);
                    func_0x000107c6142c(param_3);
                    func_0x000107c61578(puVar5,2);
                    func_0x000107c61578(puVar4,2);
                    func_0x000107c61574(puVar6);
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x101e0bbd0);
                    (*pcVar2)();
                  }
                  puVar23 = &UNK_110489200;
                  func_0x000107c613fc(&UNK_110489200,0x18,7);
                  func_0x000107c61614(puVar23 + 0x10);
                  puVar24 = &UNK_1104895e8;
                  func_0x000107c613fc(&UNK_1104895e8,0x90,7);
                  puVar24[0x10] = param_4 != 0;
                  *(undefined1 **)(puVar24 + 0x18) = puVar26;
                  *(undefined **)(puVar24 + 0x20) = puVar23;
                  *(undefined8 *)(puVar24 + 0x28) = 0x101e0dfc4;
                  *(undefined **)(puVar24 + 0x30) = puVar22;
                  *(undefined1 **)(puVar24 + 0x38) = param_2;
                  *(undefined8 *)(puVar24 + 0x40) = param_3;
                  *(undefined1 **)(puVar24 + 0x48) = puVar11;
                  *(undefined8 *)(puVar24 + 0x50) = 0x101e0dfb8;
                  *(undefined **)(puVar24 + 0x58) = puVar17;
                  *(undefined **)(puVar24 + 0x60) = puVar13;
                  *(undefined1 **)(puVar24 + 0x68) = puVar12;
                  *(undefined1 **)(puVar24 + 0x70) = puVar8;
                  *(undefined1 **)(puVar24 + 0x78) = puVar7;
                  *(undefined1 **)(puVar24 + 0x80) = puVar1;
                  *(undefined1 **)(puVar24 + 0x88) = puVar25;
                  pcStack_98 = FUN_101e0dfd0;
                  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_b0 = 0x42000000;
                  puStack_a8 = &UNK_101383914;
                  puStack_a0 = &UNK_110489600;
                  ppuVar16 = &puStack_b8;
                  puStack_90 = puVar24;
                  func_0x000107c60bc4();
                  puVar23 = puStack_90;
                  func_0x000107c61434(param_3);
                  func_0x000107c615f0(puVar11);
                  func_0x000107c615f0(puVar26);
                  func_0x000107c6157c(puVar22);
                  func_0x000107c6157c(puVar17);
                  func_0x000107c615f0(puVar13);
                  func_0x000107c61174(puVar12);
                  func_0x000107c615f0(puVar8);
                  func_0x000107c615f0(puVar7);
                  func_0x000107c615f0(puVar1);
                  func_0x000107c61174(puVar25);
                  func_0x000107c61574(puVar23);
                  pcVar14 = 
                  "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                  ;
                  func_0x0001000c10c0(
                                     "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                                     );
                  func_0x000107c61180();
                  func_0x000107c5dc64(puVar18);
                  func_0x000107c61170(puVar25);
                  func_0x000107c615e8(puVar7);
                  func_0x000107c61170(puVar12);
                  func_0x000107c61574(puVar5);
                  func_0x000107c61574(puVar4);
                  func_0x000107c61574(puVar6);
                  func_0x00010006c090(puVar9,uVar27);
                  func_0x000107c615e8(pcVar14);
                  func_0x000107c615e8(puVar1);
                  func_0x000107c615e8(puVar13);
                  func_0x000107c615e8(puVar26);
                  func_0x000107c615e8(puVar8);
                  func_0x000107c61574(puVar17);
                  func_0x000107c61574(puVar22);
                  func_0x000107c61574(param_10);
                  func_0x000107c6142c(param_3);
                  func_0x000107c61574(puVar5);
                  func_0x000107c61574(puVar4);
                  func_0x000107c61574(puVar6);
                  func_0x000107c61170(puVar10);
                  func_0x000107c60bd0(ppuVar16);
                  func_0x000107c61574(puVar4);
                  func_0x000107c61574(puVar15);
                  func_0x000107c615e8(puVar11);
                  func_0x000107c61170(puVar18);
                  goto LAB_101e0ab14;
                }
                pcVar14 = (char *)0x0;
                if (param_4 != 0) {
                  func_0x000107c50558(puVar26);
                  func_0x000107c61174();
                  pcVar14 = 
                  "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                  ;
                  func_0x0001000c10c0();
                  func_0x000107c61180();
                  puVar15 = &UNK_1104894d0;
                  func_0x000107c613fc(&UNK_1104894d0,0x19,7);
                  *(long *)(puVar15 + 0x10) = param_4;
                  puVar15[0x18] = 6;
                  pcStack_98 = (code *)0x101e0e814;
                  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_b0 = 0x42000000;
                  puStack_a8 = &UNK_1000f6b44;
                  puStack_a0 = &UNK_1104894e8;
                  ppuVar16 = &puStack_b8;
                  puStack_90 = puVar15;
                  func_0x000107c60bc4(ppuVar16);
                  puVar15 = puStack_90;
                  func_0x000107c61174(param_4);
                  func_0x000107c61574(puVar15);
                  func_0x000107c4e524(pcVar14);
                  func_0x000107c60bd0(ppuVar16);
                  func_0x000107c61170(param_4);
                  func_0x000107c615e8();
                }
                FUN_101e0df2c();
                puVar15 = &UNK_1104896f8;
                func_0x000107c613f8(&UNK_1104896f8,pcVar14,0,0);
                *pcVar14 = '\x06';
                pcVar14 = 
                "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                ;
                func_0x0001000c10c0(
                                   "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                                   );
                func_0x000107c61180();
                puVar17 = &UNK_110489520;
                func_0x000107c613fc(&UNK_110489520,0x48,7);
                *(undefined **)(puVar17 + 0x10) = puVar4;
                *(undefined **)(puVar17 + 0x18) = puVar5;
                *(undefined1 **)(puVar17 + 0x20) = param_2;
                *(undefined8 *)(puVar17 + 0x28) = param_3;
                *(undefined8 *)(puVar17 + 0x30) = param_9;
                *(undefined8 *)(puVar17 + 0x38) = param_10;
                *(undefined **)(puVar17 + 0x40) = puVar15;
                pcStack_98 = (code *)0x101e0e834;
                puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_b0 = 0x42000000;
                puStack_a8 = &UNK_1000f6b44;
                puStack_a0 = &UNK_110489538;
                ppuVar16 = &puStack_b8;
                puStack_90 = puVar17;
                func_0x000107c60bc4(ppuVar16);
                puVar17 = puStack_90;
                func_0x000107c61434(param_3);
                func_0x000107c6157c(puVar4);
                func_0x000107c6157c(puVar5);
                func_0x000107c6157c(param_10);
                func_0x000107c614b0(puVar15);
                func_0x000107c61574(puVar17);
                func_0x000107c4e524(pcVar14);
                func_0x000107c60bd0(ppuVar16);
                func_0x000107c615e8(pcVar14);
                func_0x000107c614ac(puVar15);
                func_0x000107c61170(puVar10);
                func_0x000107c615e8(puVar26);
              }
              func_0x00010006c090(puVar9,uVar27);
              func_0x000107c61574(param_10);
              func_0x000107c6142c(param_3);
              func_0x000107c61578(puVar5,2);
              func_0x000107c61578(puVar4,3);
              func_0x000107c61578(puVar6,2);
              func_0x000107c61170(puVar12);
              func_0x000107c615e8(puVar7);
              func_0x000107c61170(puVar25);
              func_0x000107c615e8(puVar1);
              func_0x000107c615e8(puVar13);
              puVar11 = puVar8;
            }
            func_0x000107c615e8(puVar11);
            goto LAB_101e0ab14;
          }
          FUN_101e0df2c();
          puVar15 = &UNK_1104896f8;
          func_0x000107c613f8(&UNK_1104896f8,puVar26,0,0);
          *puVar26 = 4;
          pcVar14 = 
          "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)";
          func_0x0001000c10c0(
                             "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                             );
          func_0x000107c61180();
          puVar17 = &UNK_110489390;
          func_0x000107c613fc(&UNK_110489390,0x48,7);
          *(undefined **)(puVar17 + 0x10) = puVar4;
          *(undefined **)(puVar17 + 0x18) = puVar5;
          *(undefined1 **)(puVar17 + 0x20) = param_2;
          *(undefined8 *)(puVar17 + 0x28) = param_3;
          *(undefined8 *)(puVar17 + 0x30) = param_9;
          *(undefined8 *)(puVar17 + 0x38) = param_10;
          *(undefined **)(puVar17 + 0x40) = puVar15;
          pcStack_98 = (code *)0x101e0e82c;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_1000f6b44;
          puStack_a0 = &UNK_1104893a8;
          ppuVar16 = &puStack_b8;
          puStack_90 = puVar17;
          func_0x000107c60bc4(ppuVar16);
          puVar17 = puStack_90;
          func_0x000107c61434(param_3);
          func_0x000107c6157c(puVar4);
          func_0x000107c6157c(puVar5);
          func_0x000107c6157c(param_10);
          func_0x000107c614b0(puVar15);
          func_0x000107c61574(puVar17);
          func_0x000107c4e524(pcVar14);
          func_0x000107c61574(puVar4);
          func_0x000107c60bd0(ppuVar16);
          func_0x000107c615e8(pcVar14);
          func_0x00010006c090(puVar9,uVar27);
          func_0x000107c61574(param_10);
          func_0x000107c6142c(param_3);
          func_0x000107c61578(puVar5,2);
          func_0x000107c61574(puVar4);
          func_0x000107c615e8(puVar13);
          func_0x000107c615e8(puVar8);
          func_0x000107c615e8(puVar7);
          func_0x000107c615e8(puVar1);
          func_0x000107c61170(puVar25);
          func_0x000107c61170(puVar12);
          func_0x000107c61578(puVar6,2);
        }
        func_0x000107c614ac(puVar15);
        func_0x000107c61574(puVar4);
        goto LAB_101e0ab14;
      }
      func_0x000107c61170(puVar12);
      func_0x000107c615e8();
    }
  }
  FUN_101e0df2c();
  puVar13 = &UNK_1104896f8;
  func_0x000107c613f8(&UNK_1104896f8,puVar7,0,0);
  *puVar7 = 0;
  pcVar14 = 
  "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)";
  func_0x0001000c10c0(
                     "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                     );
  func_0x000107c61180();
  puVar15 = &UNK_110489250;
  func_0x000107c613fc(&UNK_110489250,0x48,7);
  *(undefined **)(puVar15 + 0x10) = puVar4;
  *(undefined **)(puVar15 + 0x18) = puVar5;
  *(undefined1 **)(puVar15 + 0x20) = param_2;
  *(undefined8 *)(puVar15 + 0x28) = param_3;
  *(undefined8 *)(puVar15 + 0x30) = param_9;
  *(undefined8 *)(puVar15 + 0x38) = param_10;
  *(undefined **)(puVar15 + 0x40) = puVar13;
  pcStack_98 = FUN_101e0df6c;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0x42000000;
  puStack_a8 = &UNK_1000f6b44;
  puStack_a0 = &UNK_110489268;
  ppuVar16 = &puStack_b8;
  puStack_90 = puVar15;
  func_0x000107c60bc4(ppuVar16);
  puVar15 = puStack_90;
  func_0x000107c61434(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(param_10);
  func_0x000107c614b0(puVar13);
  func_0x000107c61574(puVar15);
  func_0x000107c4e524(pcVar14);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c61574(param_10);
  func_0x000107c6142c(param_3);
  func_0x000107c61578(puVar5,2);
  func_0x000107c61578(puVar6,2);
  func_0x000107c61578(puVar4,2);
  func_0x000107c615e8(pcVar14);
  func_0x000107c614ac(puVar13);
  func_0x000107c61574(puVar4);
LAB_101e0ab14:
  return (uint)puVar3 & 1;
}



/* Entry: 101e0bc04; end: 101e0be47;  */

void FUN_101e0bc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
  ;
  func_0x0001000c10c0(
                     "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110489ba0;
  func_0x000107c613fc(&UNK_110489ba0,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = param_6;
  *(undefined8 *)(puVar2 + 0x38) = param_7;
  *(undefined8 *)(puVar2 + 0x40) = param_1;
  uStack_60 = 0x101e0e83c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110489bb8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c614b0(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101e0be48; end: 101e0bec3;  */

/* WARNING: Possible PIC construction at 0x000101e0be98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101e0be9c) */

void FUN_101e0be48(undefined1 *param_1,undefined1 param_2)

{
  undefined *puVar1;
  
  FUN_101e0df2c();
  puVar1 = &UNK_1104896f8;
  func_0x000107c613f8(&UNK_1104896f8,param_1,0,0);
  *param_1 = param_2;
  func_0x000107c5ed2c();
  func_0x000107c5ed2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101e0bec4; end: 101e0bf93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0bec4(double param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  double dVar2;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  dVar2 = param_1;
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar1 = *(undefined8 *)(param_4 + _DAT_112e2faf0);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_4);
    func_0x0001000d224c(&lStack_60);
    func_0x000107c61574(uVar1);
    if (lStack_60 != 0) {
      func_0x000107c6071c();
      if (param_3 != 0) {
        func_0x000107c5ed2c(param_3);
      }
      func_0x000103a37370(dVar2 - param_1,param_2,param_3);
      func_0x000107c61170(lStack_60);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 101e0bf94; end: 101e0bfff;  */

void FUN_101e0bf94(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  func_0x000107c5fcec(0);
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000100f7a598(FUN_101e0e3bc,auStack_50,
                      "SCMemoriesOperaSaveServicesImpl/MemoriesOperaSaveManagerImpl.swift",0x42,2,
                      0xe4,uVar1);
  return;
}



/* Entry: 101e0c000; end: 101e0c1b3;  */

void FUN_101e0c000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
  ;
  func_0x0001000c10c0(
                     "saveFromOpera(snapId:presentingViewController:pausePlayback:resumePlayback:completion:)"
                     );
  func_0x000107c61180();
  puVar2 = &UNK_110489ab0;
  func_0x000107c613fc(&UNK_110489ab0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  uStack_50 = 0x101e0e614;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110489ac8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c614b0(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101e0c1b4; end: 101e0c443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101e0c1b4(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar4 = &UNK_110489b00;
  func_0x000107c613fc(&UNK_110489b00,0x28,7);
  *(code **)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(long *)(puVar4 + 0x20) = param_2;
  lVar5 = param_1 + _DAT_112e2fb48;
  func_0x000107c61618();
  bVar3 = *(byte *)(param_1 + _DAT_112e2fb60);
  pcVar1 = *(code **)(param_1 + _DAT_112e2fb40);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e2fb40))[1];
  puVar6 = &UNK_110489b28;
  func_0x000107c613fc(&UNK_110489b28,0x48,7);
  *(code **)(puVar6 + 0x10) = pcVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  *(long *)(puVar6 + 0x20) = param_2;
  puVar6[0x28] = bVar3;
  *(long *)(puVar6 + 0x30) = lVar5;
  *(code **)(puVar6 + 0x38) = FUN_101e0e63c;
  *(undefined **)(puVar6 + 0x40) = puVar4;
  lVar10 = *(long *)(param_1 + _DAT_112e2fb50);
  *(undefined8 *)(param_1 + _DAT_112e2fb50) = 0;
  if (lVar10 == 0) {
    func_0x000107c614b0(param_2);
    func_0x000107c614b0(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(puVar4);
    func_0x000100b64c10(pcVar1,uVar2);
    func_0x000107c61174(lVar5);
  }
  else {
    func_0x000107c614b0(param_2);
    func_0x000107c614b0(param_2);
    func_0x000107c6157c(param_4);
    func_0x000107c6157c(puVar4);
    lVar7 = lVar10;
    func_0x000107c61174();
    func_0x000100b64c10(pcVar1,uVar2);
    lVar8 = lVar5;
    func_0x000107c61174();
    lVar9 = lVar7;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c61170();
      func_0x000107c61170(lVar7);
      FUN_101e0efdc(lVar7,FUN_101e0e664,puVar6);
      func_0x000107c61170(lVar7);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(lVar8);
      func_0x000107c61574(puVar4);
      return;
    }
    func_0x000107c61170(lVar7);
  }
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  if ((param_2 != 0 && (bVar3 & 1) == 0) && (lVar5 != 0)) {
    lVar7 = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c614b0(param_2);
    func_0x000107c61174(lVar7);
    lVar8 = param_2;
    func_0x000107c5ed2c(param_2);
    lVar9 = lVar8;
    func_0x000107c5ed2c();
    func_0x000107c61170(lVar8);
    func_0x000107dffcbc(lVar7,lVar9);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar9);
    func_0x000107c614ac(param_2);
  }
  (*param_3)(param_2);
  func_0x000107c61170(lVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(lVar10);
  return;
}


