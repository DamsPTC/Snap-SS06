/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f4a31c; end: 102f4a3d7;  */

undefined8 FUN_102f4a31c(long param_1,ulong param_2)

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
      FUN_102f4a588();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_102f4a3d8(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102f4a3d8; end: 102f4a587;  */

void FUN_102f4a3d8(ulong param_1,long param_2)

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
LAB_102f4a4cc:
          if ((long)param_1 < (long)uVar8) goto LAB_102f4a454;
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
      else if (uVar10 <= uVar8) goto LAB_102f4a4cc;
LAB_102f4a454:
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
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102f4a588);
  (*pcVar5)();
}



/* Entry: 102f4a588; end: 102f4a6f7;  */

void FUN_102f4a588(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112f2a040,&UNK_10db66188);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102f4a664;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c6157c(uVar12);
        if (uVar8 != 0) break;
LAB_102f4a664:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102f4a6f8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102f4a6d0;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102f4a6d0:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102f4a6f8; end: 102f4a993;  */

void FUN_102f4a6f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f2a040;
  func_0x0001000285a8(0x112f2a040,&UNK_10db66188);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102f4a960:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102f4a990);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102f4a960;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102f4a994);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102f4a994; end: 102f4aae3;  */

void FUN_102f4a994(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f4aa6c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102f4a6f8(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102f4aa34);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102f4a588();
    lVar6 = *unaff_x20;
    goto joined_r0x000102f4aa80;
  }
  lVar6 = *unaff_x20;
joined_r0x000102f4aa80:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102f4aae4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102f4aae4; end: 102f4aaef;  */

undefined1 FUN_102f4aae4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}



/* Entry: 102f4aaf0; end: 102f4ab2f;  */

void FUN_102f4aaf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f2a038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc63470;
  func_0x000107c61520(&UNK_10dc63470,&UNK_1106e5e88);
  puRam0000000112f2a038 = puVar1;
  return;
}



/* Entry: 102f4ab30; end: 102f4ab33;  */

void FUN_102f4ab30(void)

{
  return;
}



/* Entry: 102f4ab34; end: 102f4ab73;  */

undefined8 FUN_102f4ab34(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102f4ab74; end: 102f4ab9f;  */

void FUN_102f4ab74(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  return;
}



/* Entry: 102f4aba0; end: 102f4ac33;  */

/* WARNING: Possible PIC construction at 0x000102f4ac14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4ac18) */

void FUN_102f4aba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_7 & 0xff;
  if (uVar1 < 0xb) {
    uVar2 = 1 << (ulong)(param_7 & 0x1f);
    if (((uVar2 & 0x770) != 0) || ((uVar2 & 0x84) != 0)) goto code_r0x000107c61434;
    if (uVar1 == 3) {
      func_0x000107c61434(param_2);
      param_2 = param_4;
      goto code_r0x000107c61434;
    }
  }
  if ((uVar1 != 0) && (uVar1 != 1)) {
    return;
  }
code_r0x000107c61434:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 102f4ac34; end: 102f4ac4b;  */

/* WARNING: Possible PIC construction at 0x000102f4acc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4acc4) */

void FUN_102f4ac34(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = (uint)*(byte *)(param_1 + 0x30);
  if (*(byte *)(param_1 + 0x30) < 0xb) {
    uVar2 = 1 << (ulong)(uVar4 & 0x1f);
    if (((uVar2 & 0x770) != 0) || ((uVar2 & 0x84) != 0)) goto code_r0x000107c6142c;
    if (uVar4 == 3) {
      func_0x000107c6142c(uVar3,uVar3,*(undefined8 *)(param_1 + 0x10),uVar1,
                          *(undefined8 *)(param_1 + 0x20));
      uVar3 = uVar1;
      goto code_r0x000107c6142c;
    }
  }
  if ((uVar4 != 0) && (uVar4 != 1)) {
    return;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 102f4ac4c; end: 102f4acdf;  */

/* WARNING: Possible PIC construction at 0x000102f4acc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4acc4) */

void FUN_102f4ac4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_7 & 0xff;
  if (uVar1 < 0xb) {
    uVar2 = 1 << (ulong)(param_7 & 0x1f);
    if (((uVar2 & 0x770) != 0) || ((uVar2 & 0x84) != 0)) goto code_r0x000107c6142c;
    if (uVar1 == 3) {
      func_0x000107c6142c(param_2);
      param_2 = param_4;
      goto code_r0x000107c6142c;
    }
  }
  if ((uVar1 != 0) && (uVar1 != 1)) {
    return;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f4ace0; end: 102f4ade3;  */

undefined8 * FUN_102f4ace0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_102f4aba0(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 102f4ade4; end: 102f4ae37;  */

undefined8 * FUN_102f4ade4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_102f4ac4c(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 102f4ae38; end: 102f4af27;  */

int FUN_102f4ae38(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf4 < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xf5;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 0xc) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102f4af28; end: 102f4afb7;  */

/* WARNING: Possible PIC construction at 0x000102f4af64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4af68) */

long FUN_102f4af28(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 102f4afb8; end: 102f4afc7;  */

void FUN_102f4afb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102f4afc8; end: 102f4b01f;  */

uint FUN_102f4afc8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  func_0x000102f4b0e4(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 102f4b020; end: 102f4b42b;  */

undefined8 FUN_102f4b020(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 != 0) && (param_1 != param_2)) {
      plVar8 = (long *)(param_2 + 0x38);
      plVar9 = (long *)(param_1 + 0x38);
      do {
        uVar4 = plVar9[-3];
        uVar5 = plVar9[-1];
        lVar2 = *plVar9;
        uVar1 = plVar8[-1];
        lVar3 = *plVar8;
        if (((uVar4 != plVar8[-3] || plVar9[-2] != plVar8[-2]) &&
            (func_0x000107c605b8(), (uVar4 & 1) == 0)) ||
           ((uVar5 != uVar1 || lVar2 != lVar3 &&
            (func_0x000107c605b8(uVar5,lVar2,uVar1,lVar3,0), (uVar5 & 1) == 0))))
        goto LAB_102f4b0c0;
        plVar8 = plVar8 + 4;
        plVar9 = plVar9 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_102f4b0c0:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 102f4b42c; end: 102f4b48f;  */

/* WARNING: Possible PIC construction at 0x000102f4b440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4b444) */

void FUN_102f4b42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102f4b490; end: 102f4b4fb;  */

undefined8 * FUN_102f4b490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 102f4b4fc; end: 102f4b53f;  */

undefined8 * FUN_102f4b4fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102f4b540; end: 102f4b5df;  */

int FUN_102f4b540(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102f4b5e0; end: 102f4b607;  */

void FUN_102f4b5e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac8a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puRam0000000112f2a100 = puVar1;
  return;
}



/* Entry: 102f4b608; end: 102f4badf;  */

void FUN_102f4b608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = param_3;
  func_0x000107c5ed2c();
  uStack_60 = 0xd000000000000011;
  uStack_58 = 0x800000010f114f50;
  func_0x000107c5fb78(param_1,param_2);
  uVar4 = 0xe700000000000000;
  func_0x000107c5fb78(0x44454c49414620,0xe700000000000000);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x14);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0x69616d6f64207c20;
  uStack_68 = 0xea00000000003d6e;
  lVar8 = lVar2;
  func_0x000107c42210(lVar2);
  func_0x000107c61180();
  lVar3 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  func_0x000107c5fb78(lVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x3d65646f6320,0xe600000000000000);
  lVar8 = lVar2;
  func_0x000107c3fcb0();
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  lStack_78 = lVar8;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  uVar4 = uStack_68;
  uVar6 = uStack_68;
  func_0x000107c5fb78(uStack_70,uStack_68);
  func_0x000107c6142c(uVar4);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x11);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0x7263736564207c20;
  uStack_68 = 0xef3d6e6f69747069;
  lVar8 = lVar2;
  func_0x000107c4b85c(lVar2);
  func_0x000107c61180();
  lVar3 = lVar8;
  func_0x000107c5faec();
  func_0x000107c61170(lVar8);
  func_0x000107c5fb78(lVar3,uVar6);
  func_0x000107c6142c(uVar6);
  uVar4 = uStack_68;
  func_0x000107c5fb78(uStack_70,uStack_68);
  func_0x000107c6142c(uVar4);
  lVar8 = lVar2;
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar5 = PTR___sypN_11034f1a8;
  lVar3 = lVar8;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar8);
  lVar8 = *(long *)(lVar3 + 0x10);
  func_0x000107c6142c(lVar3);
  if (lVar8 != 0) {
    uStack_70 = 0x4972657375207c20;
    uStack_68 = 0xec0000003d6f666e;
    lVar8 = lVar2;
    func_0x000107c5d9a4(lVar2);
    func_0x000107c61180();
    puVar1 = PTR___sSSSHsWP_11034da90;
    puVar7 = PTR___sSSN_11034da80;
    lVar3 = lVar8;
    func_0x000107c5f9e8();
    func_0x000107c61170(lVar8);
    func_0x000107c5f9ec(lVar3,puVar7,puVar5 + 8,puVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(puVar7);
    uVar4 = uStack_68;
    func_0x000107c5fb78(uStack_70,uStack_68);
    func_0x000107c6142c(uVar4);
  }
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c5fb78(0x3d776172207c20,0xe700000000000000);
  uVar4 = 0x112d393f0;
  lStack_78 = param_3;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(&lStack_78,&uStack_70,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar4 = uStack_68;
  func_0x000107c5fb78(uStack_70,uStack_68);
  func_0x000107c6142c(uVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c6142c(uStack_58);
  return;
}



/* Entry: 102f4bae0; end: 102f4bc3f;  */

void FUN_102f4bae0(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_160 [96];
  undefined8 uStack_100;
  undefined1 auStack_f8 [88];
  undefined8 auStack_a0 [12];
  
  func_0x00010448a8f4(auStack_160);
  puVar11 = &uStack_100;
  func_0x00010448aa5c(&uStack_100);
  func_0x000100e19000(auStack_160);
  uVar6 = uRam0000000112f2a280;
  uVar5 = uRam0000000112f2a278;
  uVar1 = uRam0000000112f2a278 & 0xffffffffffff;
  if ((uRam0000000112f2a280 & 0x2000000000000000) != 0) {
    uVar1 = uRam0000000112f2a280 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    lVar7 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar7 + 0x18) = 2;
    *(undefined8 *)(lVar7 + 0x10) = 1;
    *(undefined8 *)(lVar7 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(lVar7 + 0x28) = 0x800000010efce730;
    *(ulong *)(lVar7 + 0x30) = uVar5;
    *(ulong *)(lVar7 + 0x38) = uVar6;
    func_0x000107c61434(uVar6);
    lVar8 = lVar7;
    func_0x0001001830b8(lVar7);
    func_0x000107c61588(lVar7);
    func_0x000102f5518c((undefined8 *)(lVar7 + 0x20),0x112d38308,&UNK_10d902040);
    puVar11 = (undefined8 *)(auStack_f8 + 0x58);
    func_0x00010448a92c(auStack_f8 + 0x58,lVar8);
    func_0x000107c6142c(lVar8);
    func_0x000100e19000(&uStack_100);
  }
  uVar9 = puVar11[8];
  uVar2 = *(undefined1 *)(puVar11 + 9);
  uVar3 = *(undefined1 *)(puVar11 + 3);
  uVar10 = puVar11[2];
  uVar4 = *(undefined1 *)(puVar11 + 1);
  *param_1 = *puVar11;
  *(undefined1 *)(param_1 + 1) = uVar4;
  param_1[2] = uVar10;
  *(undefined1 *)(param_1 + 3) = uVar3;
  uVar10 = puVar11[4];
  uVar13 = puVar11[7];
  uVar12 = puVar11[6];
  param_1[5] = puVar11[5];
  param_1[4] = uVar10;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  param_1[8] = uVar9;
  *(undefined1 *)(param_1 + 9) = uVar2;
  uVar9 = puVar11[10];
  param_1[0xb] = puVar11[0xb];
  param_1[10] = uVar9;
  return;
}



/* Entry: 102f4bc40; end: 102f4bcdf;  */

void FUN_102f4bc40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x858) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x850) = param_3;
  *(undefined8 *)(unaff_x22 + 0x848) = param_2;
  *(undefined8 *)(unaff_x22 + 0x840) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x860) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x868) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x870) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x878) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x880) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x888) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x890) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4bce0,0,0);
  return;
}



/* Entry: 102f4bce0; end: 102f4bebb;  */

void FUN_102f4bce0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x890);
  lVar11 = *(long *)(unaff_x22 + 0x888);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x880);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x878);
  lVar5 = *(long *)(unaff_x22 + 0x858);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x850);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x848);
  func_0x000107c5eec4(uVar6);
  func_0x000107c5eeac();
  *(undefined8 *)(unaff_x22 + 0x898) = param_2;
  (**(code **)(lVar11 + 8))(uVar6,uVar10);
  func_0x000107c61434(param_2);
  func_0x000107c61434(uVar7);
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar8,uVar7);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f114ff0);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(0x800000010f1151a0);
  func_0x000107c5f830(uVar9);
  puVar2 = (undefined8 *)(lVar5 + 0x10);
  func_0x0001000a8868(puVar2,*(undefined8 *)(lVar5 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x810) = param_1;
  *(undefined8 *)(unaff_x22 + 0x818) = param_2;
  *(undefined8 *)(unaff_x22 + 0x820) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x828) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x838) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x830) = 0;
  func_0x000102f4b994(unaff_x22 + 0x7b0);
  *(undefined8 *)(unaff_x22 + 0x778) = *(undefined8 *)(unaff_x22 + 0x7d8);
  *(undefined8 *)(unaff_x22 + 0x770) = *(undefined8 *)(unaff_x22 + 2000);
  *(undefined8 *)(unaff_x22 + 0x788) = *(undefined8 *)(unaff_x22 + 0x7e8);
  *(undefined8 *)(unaff_x22 + 0x780) = *(undefined8 *)(unaff_x22 + 0x7e0);
  *(undefined8 *)(unaff_x22 + 0x798) = *(undefined8 *)(unaff_x22 + 0x7f8);
  *(undefined8 *)(unaff_x22 + 0x790) = *(undefined8 *)(unaff_x22 + 0x7f0);
  *(undefined8 *)(unaff_x22 + 0x7a8) = *(undefined8 *)(unaff_x22 + 0x808);
  *(undefined8 *)(unaff_x22 + 0x7a0) = *(undefined8 *)(unaff_x22 + 0x800);
  *(undefined8 *)(unaff_x22 + 0x758) = *(undefined8 *)(unaff_x22 + 0x7b8);
  *(undefined8 *)(unaff_x22 + 0x750) = *(undefined8 *)(unaff_x22 + 0x7b0);
  *(undefined8 *)(unaff_x22 + 0x768) = *(undefined8 *)(unaff_x22 + 0x7c8);
  *(undefined8 *)(unaff_x22 + 0x760) = *(undefined8 *)(unaff_x22 + 0x7c0);
  piVar4 = *(int **)(*(long *)*puVar2 + 0x78);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x8a0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f4bebc;
                    /* WARNING: Could not recover jumptable at 0x000102f4beb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,unaff_x22 + 0x10,unaff_x22 + 0x810,unaff_x22 + 0x750);
  return;
}



/* Entry: 102f4bebc; end: 102f4bf1f;  */

void FUN_102f4bebc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x8a8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x8a0));
  func_0x000100e19000(lVar2 + 0x7b0);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4bf20;
  }
  else {
    pcVar1 = FUN_102f4c698;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4bf20; end: 102f4c697;  */

void FUN_102f4bf20(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined1 *puVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  undefined1 *puVar37;
  undefined8 *puVar38;
  long lVar39;
  undefined8 *puVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  long unaff_x22;
  ulong *puVar43;
  ulong uVar44;
  undefined8 *puVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 *puVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  long lVar55;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar56;
  undefined8 *puVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar8 = uRam0000000112f2a100;
  puVar38 = *(undefined8 **)(unaff_x22 + 0x878);
  lVar39 = *(long *)(unaff_x22 + 0x870);
  lVar55 = *(long *)(unaff_x22 + 0x868);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x860);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1151c0);
  lVar4 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar5 = lVar4;
  func_0x000107c5f830(lVar39);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar55 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar39,uVar41);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar8,uVar3,lVar4,(ulong)(lVar5 - lVar39) / 1000000);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1151c0);
  func_0x0001067ccf5c(uVar8,uVar3,1);
  func_0x000107c61170(uVar3);
  (*UNRECOVERED_JUMPTABLE)(puVar38,uVar41);
  FUN_102fa6224();
  if (((ulong)puVar38 & 1) == 0) {
    FUN_102f54b20();
    puVar6 = &UNK_1105ec4f0;
    func_0x000107c613f8(&UNK_1105ec4f0,puVar38,0,0);
    *puVar38 = 1;
    puVar38[2] = 0;
    puVar38[1] = 0;
    puVar38[4] = 0;
    puVar38[3] = 0;
    puVar38[5] = 0;
    *(undefined1 *)(puVar38 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f55290(unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x898);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x890);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x878);
    uVar51 = *(undefined8 *)(unaff_x22 + 0x870);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x850);
    FUN_102f4b608(0xd000000000000015,0x800000010f1151c0,puVar6);
    func_0x000107c61654();
    func_0x000107c6142c(uVar8);
    func_0x000107c6142c(uVar12);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar41);
    func_0x000107c615c0(uVar51);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar38 = (undefined8 *)(unaff_x22 + 800);
    func_0x000107c602fc(0x2e);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x3a0) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x3b8) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x3b0) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x388) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x390) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x28);
    *puVar38 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x50);
    puVar57 = puVar38;
    FUN_102f54fec();
    if ((int)puVar57 == 1) {
      FUN_102f7a134((undefined8 *)(unaff_x22 + 0x260));
      puVar57 = (undefined8 *)(unaff_x22 + 0x2f0);
      puVar18 = (undefined8 *)(unaff_x22 + 0x2f8);
      puVar27 = (undefined8 *)(unaff_x22 + 0x300);
      puVar45 = (undefined8 *)(unaff_x22 + 0x308);
      puVar50 = (undefined8 *)(unaff_x22 + 0x310);
      puVar22 = (undefined8 *)(unaff_x22 + 0x318);
      puVar35 = (undefined8 *)(unaff_x22 + 0x2d0);
      puVar16 = (undefined8 *)(unaff_x22 + 0x2d8);
      puVar19 = (undefined8 *)(unaff_x22 + 0x2e0);
      puVar43 = (ulong *)(unaff_x22 + 0x2e8);
      puVar11 = (undefined8 *)(unaff_x22 + 0x2c0);
      puVar13 = (undefined8 *)(unaff_x22 + 0x2c8);
      puVar14 = (undefined8 *)(unaff_x22 + 0x2b8);
      puVar10 = (undefined8 *)(unaff_x22 + 0x2b0);
      puVar7 = (undefined8 *)(unaff_x22 + 0x2a8);
      puVar9 = (undefined8 *)(unaff_x22 + 0x2a0);
      puVar28 = (undefined8 *)(unaff_x22 + 0x290);
      puVar37 = (undefined1 *)(unaff_x22 + 0x298);
      puVar25 = (undefined8 *)(unaff_x22 + 0x280);
      puVar31 = (undefined8 *)(unaff_x22 + 0x288);
      puVar20 = (undefined8 *)(unaff_x22 + 0x270);
      puVar30 = (undefined1 *)(unaff_x22 + 0x278);
      puVar23 = (undefined8 *)(unaff_x22 + 0x268);
      puVar40 = (undefined8 *)(unaff_x22 + 0x260);
    }
    else {
      puVar23 = (undefined8 *)(unaff_x22 + 0x328);
      puVar20 = (undefined8 *)(unaff_x22 + 0x330);
      puVar30 = (undefined1 *)(unaff_x22 + 0x338);
      puVar25 = (undefined8 *)(unaff_x22 + 0x340);
      puVar31 = (undefined8 *)(unaff_x22 + 0x348);
      puVar28 = (undefined8 *)(unaff_x22 + 0x350);
      puVar37 = (undefined1 *)(unaff_x22 + 0x358);
      puVar9 = (undefined8 *)(unaff_x22 + 0x360);
      puVar7 = (undefined8 *)(unaff_x22 + 0x368);
      puVar10 = (undefined8 *)(unaff_x22 + 0x370);
      puVar14 = (undefined8 *)(unaff_x22 + 0x378);
      puVar11 = (undefined8 *)(unaff_x22 + 0x380);
      puVar13 = (undefined8 *)(unaff_x22 + 0x388);
      puVar35 = (undefined8 *)(unaff_x22 + 0x390);
      puVar16 = (undefined8 *)(unaff_x22 + 0x398);
      puVar19 = (undefined8 *)(unaff_x22 + 0x3a0);
      puVar43 = (ulong *)(unaff_x22 + 0x3a8);
      puVar57 = (undefined8 *)(unaff_x22 + 0x3b0);
      puVar18 = (undefined8 *)(unaff_x22 + 0x3b8);
      puVar27 = (undefined8 *)(unaff_x22 + 0x3c0);
      puVar45 = (undefined8 *)(unaff_x22 + 0x3c8);
      puVar50 = (undefined8 *)(unaff_x22 + 0x3d0);
      puVar22 = (undefined8 *)(unaff_x22 + 0x3d8);
      puVar40 = puVar38;
    }
    uVar53 = *puVar22;
    uVar56 = *puVar50;
    uVar58 = *puVar45;
    uVar42 = *puVar27;
    uVar17 = *puVar18;
    uVar36 = *puVar57;
    uVar44 = *puVar43;
    uVar46 = *puVar19;
    uVar3 = *puVar16;
    uVar51 = *puVar35;
    uVar34 = *puVar13;
    uVar12 = *puVar11;
    uVar15 = *puVar14;
    uVar41 = *puVar10;
    uVar8 = *puVar7;
    uVar33 = *puVar9;
    uVar1 = *puVar37;
    uVar29 = *puVar28;
    uVar32 = *puVar31;
    uVar26 = *puVar25;
    uVar2 = *puVar30;
    uVar21 = *puVar20;
    uVar24 = *puVar23;
    *(undefined8 *)(unaff_x22 + 0x3e0) = *puVar40;
    *(undefined8 *)(unaff_x22 + 1000) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x3f0) = uVar21;
    *(undefined1 *)(unaff_x22 + 0x3f8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x400) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x408) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x410) = uVar29;
    *(undefined1 *)(unaff_x22 + 0x418) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x420) = uVar33;
    *(undefined8 *)(unaff_x22 + 0x428) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x430) = uVar41;
    *(undefined8 *)(unaff_x22 + 0x438) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x440) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x448) = uVar34;
    *(undefined8 *)(unaff_x22 + 0x450) = uVar51;
    *(undefined8 *)(unaff_x22 + 0x458) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x460) = uVar46;
    *(ulong *)(unaff_x22 + 0x468) = uVar44;
    *(undefined8 *)(unaff_x22 + 0x470) = uVar36;
    *(undefined8 *)(unaff_x22 + 0x478) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x480) = uVar42;
    *(undefined8 *)(unaff_x22 + 0x488) = uVar58;
    *(undefined8 *)(unaff_x22 + 0x490) = uVar56;
    *(undefined8 *)(unaff_x22 + 0x498) = uVar53;
    func_0x000100d2cb48(uVar51,uVar3,uVar46,uVar44);
    FUN_102f55004(puVar38,unaff_x22 + 0x4a0,0x112f2a130,&UNK_10db663d0);
    func_0x000102f5504c(unaff_x22 + 0x3e0);
    if (0xe < uVar44 >> 0x3c) {
      uVar51 = 0;
      uVar3 = 0;
      uVar46 = 0;
      uVar44 = 0xc000000000000000;
    }
    func_0x000103ee3894(uVar3,uVar51);
    func_0x00010006c090(uVar46,uVar44);
    func_0x000107c5fb78(uVar3,uVar51);
    func_0x000107c6142c(uVar51);
    func_0x000107c6142c(0x800000010f1151e0);
    puVar57 = puVar38;
    FUN_102f54fec();
    if ((int)puVar57 == 1) {
      FUN_102f7a134();
      puVar57 = (undefined8 *)(unaff_x22 + 0x230);
      puVar18 = (undefined8 *)(unaff_x22 + 0x238);
      puVar27 = (undefined8 *)(unaff_x22 + 0x240);
      puVar45 = (undefined8 *)(unaff_x22 + 0x248);
      puVar50 = (undefined8 *)(unaff_x22 + 0x250);
      puVar22 = (undefined8 *)(unaff_x22 + 600);
      puVar35 = (undefined8 *)(unaff_x22 + 0x210);
      puVar16 = (undefined8 *)(unaff_x22 + 0x218);
      puVar19 = (undefined8 *)(unaff_x22 + 0x220);
      puVar11 = (undefined8 *)(unaff_x22 + 0x228);
      puVar13 = (undefined8 *)(unaff_x22 + 0x200);
      puVar14 = (undefined8 *)(unaff_x22 + 0x208);
      puVar10 = (undefined8 *)(unaff_x22 + 0x1f8);
      puVar7 = (undefined8 *)(unaff_x22 + 0x1f0);
      puVar9 = (undefined8 *)(unaff_x22 + 0x1e8);
      puVar28 = (undefined8 *)(unaff_x22 + 0x1e0);
      puVar25 = (undefined8 *)(unaff_x22 + 0x1d0);
      puVar37 = (undefined1 *)(unaff_x22 + 0x1d8);
      puVar31 = (undefined8 *)(unaff_x22 + 0x1c0);
      puVar20 = (undefined8 *)(unaff_x22 + 0x1c8);
      puVar23 = (undefined8 *)(unaff_x22 + 0x1b0);
      puVar30 = (undefined1 *)(unaff_x22 + 0x1b8);
      puStack_88 = (undefined8 *)(unaff_x22 + 0x1a8);
      puStack_80 = (undefined8 *)(unaff_x22 + 0x1a0);
    }
    else {
      puStack_88 = (undefined8 *)(unaff_x22 + 0x328);
      puVar23 = (undefined8 *)(unaff_x22 + 0x330);
      puVar30 = (undefined1 *)(unaff_x22 + 0x338);
      puVar31 = (undefined8 *)(unaff_x22 + 0x340);
      puVar20 = (undefined8 *)(unaff_x22 + 0x348);
      puVar25 = (undefined8 *)(unaff_x22 + 0x350);
      puVar37 = (undefined1 *)(unaff_x22 + 0x358);
      puVar28 = (undefined8 *)(unaff_x22 + 0x360);
      puVar9 = (undefined8 *)(unaff_x22 + 0x368);
      puVar7 = (undefined8 *)(unaff_x22 + 0x370);
      puVar10 = (undefined8 *)(unaff_x22 + 0x378);
      puVar13 = (undefined8 *)(unaff_x22 + 0x380);
      puVar14 = (undefined8 *)(unaff_x22 + 0x388);
      puVar35 = (undefined8 *)(unaff_x22 + 0x390);
      puVar16 = (undefined8 *)(unaff_x22 + 0x398);
      puVar19 = (undefined8 *)(unaff_x22 + 0x3a0);
      puVar11 = (undefined8 *)(unaff_x22 + 0x3a8);
      puVar57 = (undefined8 *)(unaff_x22 + 0x3b0);
      puVar18 = (undefined8 *)(unaff_x22 + 0x3b8);
      puVar27 = (undefined8 *)(unaff_x22 + 0x3c0);
      puVar45 = (undefined8 *)(unaff_x22 + 0x3c8);
      puVar50 = (undefined8 *)(unaff_x22 + 0x3d0);
      puVar22 = (undefined8 *)(unaff_x22 + 0x3d8);
      puStack_80 = puVar38;
    }
    uVar59 = *puVar22;
    uVar56 = *puVar50;
    uVar26 = *puVar45;
    uVar29 = *puVar27;
    uVar15 = *puVar18;
    uVar46 = *puVar57;
    uVar32 = *puVar11;
    uVar21 = *puVar19;
    uVar12 = *puVar16;
    uVar42 = *puVar35;
    uVar17 = *puVar14;
    uVar41 = *puVar13;
    uVar51 = *puVar10;
    uVar3 = *puVar7;
    uVar8 = *puVar9;
    uVar36 = *puVar28;
    uVar1 = *puVar37;
    uVar33 = *puVar25;
    uVar34 = *puVar20;
    uVar53 = *puVar31;
    uVar2 = *puVar30;
    uVar54 = *puVar23;
    uVar24 = *puStack_88;
    uVar52 = *(undefined8 *)(unaff_x22 + 0x898);
    uVar58 = *(undefined8 *)(unaff_x22 + 0x890);
    uVar47 = *(undefined8 *)(unaff_x22 + 0x878);
    uVar48 = *(undefined8 *)(unaff_x22 + 0x870);
    uVar49 = *(undefined8 *)(unaff_x22 + 0x850);
    puVar57 = *(undefined8 **)(unaff_x22 + 0x840);
    *(undefined8 *)(unaff_x22 + 0x560) = *puStack_80;
    *(undefined8 *)(unaff_x22 + 0x568) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x570) = uVar54;
    *(undefined1 *)(unaff_x22 + 0x578) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x580) = uVar53;
    *(undefined8 *)(unaff_x22 + 0x588) = uVar34;
    *(undefined8 *)(unaff_x22 + 0x590) = uVar33;
    *(undefined1 *)(unaff_x22 + 0x598) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x5a0) = uVar36;
    *(undefined8 *)(unaff_x22 + 0x5a8) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x5b0) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x5b8) = uVar51;
    *(undefined8 *)(unaff_x22 + 0x5c0) = uVar41;
    *(undefined8 *)(unaff_x22 + 0x5c8) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x5d0) = uVar42;
    *(undefined8 *)(unaff_x22 + 0x5d8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x5e0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x5e8) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x5f0) = uVar46;
    *(undefined8 *)(unaff_x22 + 0x5f8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x600) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x608) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x610) = uVar56;
    *(undefined8 *)(unaff_x22 + 0x618) = uVar59;
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x588);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x580);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x598);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x590);
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x5e8);
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x5e0);
    *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x5f8);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x5f0);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x568);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x560);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x578);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x570);
    *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x5c8);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x5c0);
    *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x5d8);
    *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x5d0);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x5a8);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x5a0);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x5b8);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x5b0);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x608);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x600);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x618);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x610);
    FUN_102f55004(puVar38,unaff_x22 + 0x620,0x112f2a130,&UNK_10db663d0);
    FUN_102f4c874((undefined8 *)(unaff_x22 + 0x6e0));
    func_0x000102f5504c(unaff_x22 + 0x560);
    func_0x000102f55290(unaff_x22 + 0x10);
    func_0x000107c6142c(uVar52);
    func_0x000107c6142c(uVar49);
    func_0x00010006c090(0,0xc000000000000000);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x6e8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x6e0);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x6f0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x708);
    uVar51 = *(undefined8 *)(unaff_x22 + 0x700);
    puVar57[3] = *(undefined8 *)(unaff_x22 + 0x6f8);
    puVar57[2] = uVar41;
    puVar57[5] = uVar12;
    puVar57[4] = uVar51;
    puVar57[1] = uVar3;
    *puVar57 = uVar8;
    uVar3 = *(undefined8 *)(unaff_x22 + 0x718);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar51 = *(undefined8 *)(unaff_x22 + 0x728);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x720);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x730);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x748);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x740);
    puVar57[0xb] = *(undefined8 *)(unaff_x22 + 0x738);
    puVar57[10] = uVar12;
    puVar57[0xd] = uVar17;
    puVar57[0xc] = uVar15;
    puVar57[7] = uVar3;
    puVar57[6] = uVar8;
    puVar57[9] = uVar51;
    puVar57[8] = uVar41;
    func_0x000107c615c0(uVar58);
    func_0x000107c615c0(uVar47);
    func_0x000107c615c0(uVar48);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f4c67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f4c698; end: 102f4c873;  */

void FUN_102f4c698(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar6 = uRam0000000112f2a100;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x878);
  lVar7 = *(long *)(unaff_x22 + 0x870);
  lVar4 = *(long *)(unaff_x22 + 0x868);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x860);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1151c0);
  lVar2 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(lVar7,uVar10);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar6,uVar1,lVar2,(ulong)(lVar3 - lVar7) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1151c0);
  func_0x0001067cd0d0(uVar6,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  (*pcVar5)(uVar8,uVar10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x898);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x890);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x878);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x870);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x850);
  FUN_102f4b608(0xd000000000000015,0x800000010f1151c0,*(undefined8 *)(unaff_x22 + 0x8a8));
  func_0x000107c61654();
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar9);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000102f4c858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f4c874; end: 102f4c9e3;  */

/* WARNING: Possible PIC construction at 0x000102f4c8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f4c8ec) */
/* WARNING: Removing unreachable block (ram,0x000102f4c94c) */
/* WARNING: Removing unreachable block (ram,0x000102f4c8f4) */
/* WARNING: Removing unreachable block (ram,0x000102f4c908) */
/* WARNING: Removing unreachable block (ram,0x000102f4c910) */
/* WARNING: Removing unreachable block (ram,0x000102f4c918) */
/* WARNING: Removing unreachable block (ram,0x000102f4c920) */
/* WARNING: Removing unreachable block (ram,0x000102f4c924) */
/* WARNING: Removing unreachable block (ram,0x000102f4c954) */
/* WARNING: Removing unreachable block (ram,0x000102f4c96c) */
/* WARNING: Removing unreachable block (ram,0x000102f4c984) */
/* WARNING: Removing unreachable block (ram,0x000102f4c994) */
/* WARNING: Removing unreachable block (ram,0x000102f4c9a0) */

void FUN_102f4c874(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar3 = *(ulong *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x78);
  if (0xe < uVar3 >> 0x3c) {
    uVar2 = 0;
    uVar4 = 0;
    uVar1 = 0;
    uVar3 = 0xc000000000000000;
  }
  func_0x000100d2cb48();
  func_0x000103ee3894(uVar4,uVar2);
  func_0x00010006c090(uVar1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Entry: 102f4c9e4; end: 102f4ca7f;  */

void FUN_102f4c9e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x628) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x620) = param_2;
  *(undefined8 *)(unaff_x22 + 0x618) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x630) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x638) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x640) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x648) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x650) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x658) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x660) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4ca80,0,0);
  return;
}



/* Entry: 102f4ca80; end: 102f4cec7;  */

void FUN_102f4ca80(void)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  puVar7 = (undefined8 *)(unaff_x22 + 0x148);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar12 = *(long *)(unaff_x22 + 0x658);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x650);
  puVar22 = *(undefined8 **)(unaff_x22 + 0x620);
  FUN_102f7ad6c(puVar7);
  *(undefined8 *)(unaff_x22 + 0x5e0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x5d8) = *puVar7;
  lVar6 = unaff_x22 + 0x280;
  uVar10 = 0x138;
  func_0x000107c610b4();
  func_0x000107c5eec4(uVar17);
  func_0x000107c5eeac();
  (**(code **)(lVar12 + 8))(uVar17,uVar19);
  func_0x000107c61434(puVar7);
  func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x5d8));
  *(long *)(unaff_x22 + 0x280) = lVar6;
  *(undefined8 **)(unaff_x22 + 0x288) = puVar7;
  uVar19 = *puVar22;
  uVar2 = puVar22[1];
  uVar13 = uVar19;
  uVar9 = uVar2;
  func_0x000103ee34e0();
  *(char *)(unaff_x22 + 0x5d1) = (char)uVar10;
  *(undefined8 *)(unaff_x22 + 0x668) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x670) = uVar13;
  bVar5 = (uVar10 & 0xff) != 1;
  uVar17 = 0;
  if (bVar5) {
    uVar17 = uVar9;
  }
  uVar9 = 0;
  if (bVar5) {
    uVar9 = uVar13;
  }
  *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x5e8) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x5f8) = *(undefined8 *)(unaff_x22 + 0x158);
  func_0x000100d2cb64(0,0,0,0xf000000000000000);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x2e0) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x2f8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
  *(undefined8 *)(unaff_x22 + 0x308) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x300) = 0;
  func_0x000100d2cb48(uVar17,uVar9,0,0xc000000000000000);
  func_0x00010006c00c(0,0xc000000000000000);
  func_0x000102f550e8(uVar20,uVar15,uVar16,uVar18,uVar13,uVar21);
  uVar17 = puVar22[2];
  uVar9 = puVar22[3];
  func_0x000107c61434(uVar9);
  func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x5f8));
  *(undefined8 *)(unaff_x22 + 0x290) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x298) = uVar9;
  uVar13 = puVar22[8];
  uVar15 = puVar22[9];
  func_0x000107c61434(uVar15);
  func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x5e8));
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x2a8) = uVar15;
  if (*(char *)(puVar22 + 7) != -1) {
    lVar12 = *(long *)(unaff_x22 + 0x620);
    FUN_102f4d514(unaff_x22 + 0x550,*(undefined8 *)(lVar12 + 0x20),*(undefined8 *)(lVar12 + 0x28),
                  *(undefined8 *)(lVar12 + 0x30));
    uVar13 = *(undefined8 *)(unaff_x22 + 0x580);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x558);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x550);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x568);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x560);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x578);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x570);
    func_0x000102f54e24(*(undefined8 *)(unaff_x22 + 0x310),*(undefined8 *)(unaff_x22 + 0x318),
                        *(undefined8 *)(unaff_x22 + 800),*(undefined8 *)(unaff_x22 + 0x328),
                        *(undefined8 *)(unaff_x22 + 0x330),*(undefined8 *)(unaff_x22 + 0x338),
                        *(undefined8 *)(unaff_x22 + 0x340));
    *(undefined8 *)(unaff_x22 + 0x328) = uVar18;
    *(undefined8 *)(unaff_x22 + 800) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x338) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x330) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x318) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x310) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x340) = uVar13;
  }
  lVar12 = *(long *)(unaff_x22 + 0x620);
  cVar3 = *(char *)(lVar12 + 0x70);
  if (cVar3 != -1) {
    uVar13 = *(undefined8 *)(lVar12 + 0x50);
    uVar16 = *(undefined8 *)(lVar12 + 0x68);
    uVar15 = *(undefined8 *)(lVar12 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x5b8) = *(undefined8 *)(lVar12 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x5b0) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x5c8) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x5c0) = uVar15;
    *(char *)(unaff_x22 + 0x5d0) = cVar3;
    func_0x000102f4d604(&uStack_98);
    func_0x000102f5518c((undefined8 *)(unaff_x22 + 0x348),0x112f2a138,&UNK_10db6af50);
    *(undefined8 *)(unaff_x22 + 0x350) = uStack_90;
    *(undefined8 *)(unaff_x22 + 0x348) = uStack_98;
    *(undefined8 *)(unaff_x22 + 0x360) = uStack_80;
    *(undefined8 *)(unaff_x22 + 0x358) = uStack_88;
    *(undefined8 *)(unaff_x22 + 0x370) = uStack_70;
    *(undefined8 *)(unaff_x22 + 0x368) = uStack_78;
    *(undefined8 *)(unaff_x22 + 0x380) = uStack_60;
    *(undefined8 *)(unaff_x22 + 0x378) = uStack_68;
    lVar12 = *(long *)(unaff_x22 + 0x620);
  }
  bVar4 = *(byte *)(lVar12 + 0x71);
  *(ulong *)(unaff_x22 + 0x2b0) = (ulong)bVar4;
  *(bool *)(unaff_x22 + 0x2b8) = (ulong)bVar4 < 3;
  lVar14 = *(long *)(lVar12 + 0x80);
  if (lVar14 != 0) {
    uVar13 = *(undefined8 *)(lVar12 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x610) = *(undefined8 *)(unaff_x22 + 400);
    *(undefined8 *)(unaff_x22 + 0x608) = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c61434(lVar14);
    func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x608));
    *(undefined8 *)(unaff_x22 + 0x2c0) = uVar13;
    *(long *)(unaff_x22 + 0x2c8) = lVar14;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x648);
  lVar12 = *(long *)(unaff_x22 + 0x628);
  uStack_98 = 0;
  uStack_90 = 0xe000000000000000;
  func_0x000107c602fc(0x37);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f115160);
  func_0x000107c5fb78(uVar19,uVar2);
  func_0x000107c5fb78(0x3d656c74697420,0xe700000000000000);
  func_0x000107c5fb78(uVar17,uVar9);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f114ff0);
  func_0x000107c5fb78(lVar6,puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(uStack_90);
  func_0x000107c5f830(uVar13);
  puVar7 = (undefined8 *)(lVar12 + 0x10);
  func_0x0001000a8868(puVar7,*(undefined8 *)(lVar12 + 0x28));
  func_0x000107c610b4(unaff_x22 + 0x10,unaff_x22 + 0x280,0x138);
  func_0x000102f4b994(unaff_x22 + 0x4f0);
  *(undefined8 *)(unaff_x22 + 0x4b8) = *(undefined8 *)(unaff_x22 + 0x518);
  *(undefined8 *)(unaff_x22 + 0x4b0) = *(undefined8 *)(unaff_x22 + 0x510);
  *(undefined8 *)(unaff_x22 + 0x4c8) = *(undefined8 *)(unaff_x22 + 0x528);
  *(undefined8 *)(unaff_x22 + 0x4c0) = *(undefined8 *)(unaff_x22 + 0x520);
  *(undefined8 *)(unaff_x22 + 0x4d8) = *(undefined8 *)(unaff_x22 + 0x538);
  *(undefined8 *)(unaff_x22 + 0x4d0) = *(undefined8 *)(unaff_x22 + 0x530);
  *(undefined8 *)(unaff_x22 + 0x4e8) = *(undefined8 *)(unaff_x22 + 0x548);
  *(undefined8 *)(unaff_x22 + 0x4e0) = *(undefined8 *)(unaff_x22 + 0x540);
  *(undefined8 *)(unaff_x22 + 0x498) = *(undefined8 *)(unaff_x22 + 0x4f8);
  *(undefined8 *)(unaff_x22 + 0x490) = *(undefined8 *)(unaff_x22 + 0x4f0);
  *(undefined8 *)(unaff_x22 + 0x4a8) = *(undefined8 *)(unaff_x22 + 0x508);
  *(undefined8 *)(unaff_x22 + 0x4a0) = *(undefined8 *)(unaff_x22 + 0x500);
  piVar11 = *(int **)(*(long *)*puVar7 + 0x90);
  iVar1 = *piVar11;
  plVar8 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x678) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102f4cec8;
                    /* WARNING: Could not recover jumptable at 0x000102f4cec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))
            (plVar8,unaff_x22 + 0x588,unaff_x22 + 0x10,unaff_x22 + 0x490);
  return;
}



/* Entry: 102f4cec8; end: 102f4cf2b;  */

void FUN_102f4cec8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x680) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x678));
  func_0x000100e19000(lVar2 + 0x4f0);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4cf2c;
  }
  else {
    pcVar1 = FUN_102f4d30c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4cf2c; end: 102f4d30b;  */

void FUN_102f4cf2c(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  undefined8 *puVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar14 = uRam0000000112f2a100;
  uVar12 = 0x7645657461657243;
  puVar11 = *(undefined8 **)(unaff_x22 + 0x648);
  lVar10 = *(long *)(unaff_x22 + 0x640);
  lVar9 = *(long *)(unaff_x22 + 0x638);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x630);
  uVar6 = uVar12;
  func_0x000107c5fadc(0x7645657461657243,0xeb00000000746e65);
  lVar2 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar10);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar10,uVar13);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar14,uVar6,lVar2,(ulong)(lVar3 - lVar10) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c5fadc(0x7645657461657243,0xeb00000000746e65);
  uVar6 = 1;
  func_0x0001067ccf5c(uVar14,uVar12,1);
  func_0x000107c61170(uVar12);
  (*UNRECOVERED_JUMPTABLE)(puVar11,uVar13);
  func_0x000102fa622c();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_102f54b20();
    puVar5 = &UNK_1105ec4f0;
    func_0x000107c613f8(&UNK_1105ec4f0,puVar11,0,0);
    *puVar11 = 1;
    puVar11[2] = 0;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[5] = 0;
    *(undefined1 *)(puVar11 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f55158(unaff_x22 + 0x588);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x660);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x648);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x640);
    bVar1 = *(char *)(unaff_x22 + 0x5d1) != '\x01';
    uVar14 = 0;
    if (bVar1) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x668);
    }
    uVar7 = 0;
    if (bVar1) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x670);
    }
    FUN_102f4b608(0x7645657461657243,0xeb00000000746e65,puVar5);
    func_0x000107c61654();
    func_0x000100d2cb64(uVar14,uVar7,0,0xc000000000000000);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000102f55124(unaff_x22 + 0x280);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x660);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x648);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x640);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x618);
    bVar1 = *(char *)(unaff_x22 + 0x5d1) != '\x01';
    uVar14 = 0;
    if (bVar1) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x668);
    }
    uVar15 = 0;
    if (bVar1) {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x670);
    }
    func_0x000107c602fc(0x21);
    uVar4 = 0xe000000000000000;
    func_0x000107c6142c(0xe000000000000000);
    func_0x000102fa6228();
    uVar16 = uVar4;
    uVar17 = uVar13;
    uVar18 = uVar6;
    FUN_102f7a2d4();
    func_0x00010006c090(uVar4,uVar13);
    func_0x000107c61574(uVar6);
    uVar6 = uVar17;
    func_0x000107c5fb78(uVar16,uVar17);
    func_0x000107c6142c(uVar17);
    uVar13 = 0x800000010f115180;
    func_0x000107c6142c(0x800000010f115180);
    func_0x000102fa6228();
    FUN_102f4d720((undefined8 *)(unaff_x22 + 0x3b8));
    func_0x000102f55158(unaff_x22 + 0x588);
    func_0x00010006c090(uVar13,uVar6);
    func_0x000107c61574(uVar18);
    func_0x000100d2cb64(uVar14,uVar15,0,0xc000000000000000);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000102f55124(unaff_x22 + 0x280);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x3b8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3c8);
    puVar11[1] = *(undefined8 *)(unaff_x22 + 0x3c0);
    *puVar11 = uVar13;
    puVar11[3] = uVar6;
    puVar11[2] = uVar14;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3f8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x410);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x408);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x3d8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x3f0);
    uVar15 = *(undefined8 *)(unaff_x22 + 1000);
    puVar11[9] = *(undefined8 *)(unaff_x22 + 0x400);
    puVar11[8] = uVar14;
    puVar11[0xb] = uVar13;
    puVar11[10] = uVar6;
    puVar11[5] = uVar18;
    puVar11[4] = uVar17;
    puVar11[7] = uVar16;
    puVar11[6] = uVar15;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x438);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x450);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x448);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x420);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x418);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x430);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x428);
    puVar11[0x11] = *(undefined8 *)(unaff_x22 + 0x440);
    puVar11[0x10] = uVar14;
    puVar11[0x13] = uVar13;
    puVar11[0x12] = uVar6;
    puVar11[0xd] = uVar18;
    puVar11[0xc] = uVar17;
    puVar11[0xf] = uVar16;
    puVar11[0xe] = uVar15;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x468);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x480);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x460);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x458);
    puVar11[0x1a] = *(undefined8 *)(unaff_x22 + 0x488);
    puVar11[0x17] = uVar15;
    puVar11[0x16] = uVar13;
    puVar11[0x19] = uVar6;
    puVar11[0x18] = uVar14;
    puVar11[0x15] = uVar17;
    puVar11[0x14] = uVar16;
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f4d2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f4d30c; end: 102f4d513;  */

void FUN_102f4d30c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar1 = uRam0000000112f2a100;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x648);
  lVar7 = *(long *)(unaff_x22 + 0x640);
  lVar8 = *(long *)(unaff_x22 + 0x638);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x630);
  uVar4 = 0x7645657461657243;
  func_0x000107c5fadc(0x7645657461657243,0xeb00000000746e65);
  lVar5 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar6 = lVar5;
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar7,uVar11);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar1,uVar4,lVar5,(ulong)(lVar6 - lVar7) / 1000000);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar4);
  uVar4 = 0x7645657461657243;
  func_0x000107c5fadc(0x7645657461657243,0xeb00000000746e65);
  func_0x0001067cd0d0(uVar1,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61654();
  (*pcVar9)(uVar10,uVar11);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x660);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x640);
  bVar3 = *(char *)(unaff_x22 + 0x5d1) != '\x01';
  uVar1 = 0;
  if (bVar3) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x668);
  }
  uVar2 = 0;
  if (bVar3) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x670);
  }
  FUN_102f4b608(0x7645657461657243,0xeb00000000746e65,*(undefined8 *)(unaff_x22 + 0x680));
  func_0x000107c61654();
  func_0x000100d2cb64(uVar1,uVar2,0,0xc000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000102f55124(unaff_x22 + 0x280);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000102f4d4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f4d514; end: 102f4d71f;  */

void FUN_102f4d514(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0xe000000000000000;
  if (param_5 != '\x01') {
    uVar1 = 0xc000000000000000;
  }
  FUN_102f4a26c();
  func_0x000107c61434(param_3);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_102f54e60(0,0,0,0,0x3000000000000000);
  func_0x000107c6142c(param_3);
  func_0x00010006c090(0,0xc000000000000000);
  FUN_102f54ea4(param_2,param_3,param_4,0,uVar1);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_102f54e60(param_2,param_3,param_4,0,uVar1);
  func_0x00010006c090(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = uVar1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 102f4d720; end: 102f4da0b;  */

void FUN_102f4d720(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
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
  byte bVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  byte bVar24;
  ulong uStack_1e0;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_118;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e0;
  undefined1 auStack_c8 [104];
  
  uVar3 = param_2;
  uVar15 = param_3;
  FUN_102f7a2d4();
  uVar4 = param_2;
  func_0x000102f7a320(param_2,param_3,param_4);
  uVar5 = param_2;
  func_0x000102f7a35c(param_2,param_3,param_4);
  uVar6 = param_2;
  func_0x000102f7a398(param_2,param_3,param_4);
  uVar7 = param_2;
  uVar8 = param_3;
  uVar9 = param_4;
  FUN_102f7a3d4(param_2,param_3,param_4);
  uVar21 = param_5;
  func_0x000103ee3894();
  func_0x00010006c090(uVar9,param_5);
  uVar9 = param_2;
  FUN_102f7a44c(param_2,param_3,param_4);
  uVar10 = param_2;
  uVar16 = param_3;
  func_0x000102f7a488(param_2,param_3,param_4);
  uVar11 = param_2;
  uVar17 = param_3;
  func_0x000102f7a4d4(param_2,param_3,param_4);
  FUN_102f7a520(&uStack_140,param_2,param_3,param_4);
  if (((uStack_118 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    func_0x000102f54d20(&uStack_140);
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    bVar20 = 0xff;
  }
  else {
    uStack_1c0 = -(uStack_118 >> 0x3d & 1);
    uStack_1b0 = uStack_140;
    uStack_1a8 = uStack_138;
    func_0x000107c61434();
    func_0x000102f54d20(&uStack_140);
    uStack_1b8 = uStack_1c0 & uStack_130;
    uStack_1c0 = uStack_1c0 & uStack_128;
    bVar20 = (byte)(uStack_118 >> 0x3d) & 1;
  }
  uVar12 = param_2;
  uVar18 = param_3;
  FUN_102f7a5e4(param_2,param_3,param_4);
  FUN_102f7a630(&uStack_100,param_2,param_3,param_4);
  if (((uStack_e0 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    func_0x000102f54d54(&uStack_100);
    uStack_1e0 = 0;
    bVar24 = 0xff;
    uVar22 = 0;
    uVar23 = 0;
  }
  else {
    uStack_1e0 = uStack_f0;
    func_0x000107c61434(uStack_f8);
    func_0x000102f54d54(&uStack_100);
    bVar24 = (byte)(uStack_e0 >> 0x3d) & 1;
    uVar22 = uStack_f8;
    uVar23 = uStack_100;
  }
  uVar13 = param_2;
  uVar19 = param_3;
  FUN_102f7a6d4(param_2,param_3,param_4);
  uVar14 = param_2;
  FUN_102f7a820(param_2,param_3,param_4);
  if ((uVar14 & 1) == 0) {
    param_2 = 0;
    param_3 = 0;
    param_4 = 0;
    uVar21 = 0;
  }
  else {
    FUN_102f7a714(auStack_c8);
    FUN_102f54670();
    func_0x000102f54d88(auStack_c8);
  }
  *param_1 = uVar3;
  param_1[1] = uVar15;
  uVar1 = 2;
  if (uVar13 != 2) {
    uVar1 = uVar13 == 1;
  }
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar2 = (char)uVar13;
  if (((uint)uVar19 & 0xff) != 1) {
    uVar2 = uVar1;
  }
  param_1[4] = uVar6;
  param_1[5] = uVar8;
  param_1[6] = uVar7;
  param_1[7] = uVar9;
  param_1[8] = uVar10;
  param_1[9] = uVar16;
  param_1[10] = uVar11;
  param_1[0xb] = uVar17;
  param_1[0xc] = uStack_1b0;
  param_1[0xd] = uStack_1a8;
  param_1[0xe] = uStack_1b8;
  param_1[0xf] = uStack_1c0;
  *(byte *)(param_1 + 0x10) = bVar20;
  param_1[0x11] = uVar12;
  param_1[0x12] = uVar18;
  param_1[0x13] = uVar23;
  param_1[0x14] = uVar22;
  param_1[0x15] = uStack_1e0;
  *(byte *)(param_1 + 0x16) = bVar24;
  *(undefined1 *)((long)param_1 + 0xb1) = uVar2;
  param_1[0x17] = param_2;
  param_1[0x18] = param_3;
  param_1[0x19] = param_4;
  param_1[0x1a] = uVar21;
  return;
}



/* Entry: 102f4da0c; end: 102f4dab7;  */

void FUN_102f4da0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x438) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x430) = param_6;
  *(undefined8 *)(unaff_x22 + 0x428) = param_5;
  *(undefined8 *)(unaff_x22 + 0x420) = param_4;
  *(undefined8 *)(unaff_x22 + 0x418) = param_3;
  *(undefined8 *)(unaff_x22 + 0x410) = param_2;
  *(undefined8 *)(unaff_x22 + 0x408) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x440) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x448) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x450) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x458) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x460) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x468) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x470) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4dab8,0,0);
  return;
}



/* Entry: 102f4dab8; end: 102f4dca7;  */

void FUN_102f4dab8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x470);
  lVar11 = *(long *)(unaff_x22 + 0x468);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x458);
  lVar4 = *(long *)(unaff_x22 + 0x438);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x410);
  *(undefined8 *)(unaff_x22 + 0x2e8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
  func_0x000107c5eec4(uVar10);
  func_0x000107c5eeac();
  (**(code **)(lVar11 + 8))(uVar10,uVar13);
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar6;
  func_0x000107c61434(uVar14);
  func_0x000107c61438(uVar12,2);
  func_0x000107c61434(0xe900000000000072);
  func_0x00010006c00c(0,0xc000000000000000);
  func_0x000107c6142c(0xe900000000000072);
  func_0x000107c6142c(uVar12);
  func_0x00010006c090(0,0xc000000000000000);
  FUN_102f545f0(0,0,0,0,0,0);
  *(undefined8 *)(unaff_x22 + 0x2f8) = 0xe900000000000072;
  *(undefined8 *)(unaff_x22 + 0x2f0) = 0x6573752d70616e73;
  *(undefined8 *)(unaff_x22 + 0x300) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x308) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x318) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x310) = 0;
  func_0x000107c5f830(uVar8);
  puVar2 = (undefined8 *)(lVar4 + 0x10);
  func_0x0001000a8868(puVar2,*(undefined8 *)(lVar4 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x2f8);
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x310);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x318);
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x2c0);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2e8);
  func_0x000102f4b994(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x3a8);
  *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x3a0);
  *(undefined8 *)(unaff_x22 + 0x358) = *(undefined8 *)(unaff_x22 + 0x3b8);
  *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x3b0);
  *(undefined8 *)(unaff_x22 + 0x368) = *(undefined8 *)(unaff_x22 + 0x3c8);
  *(undefined8 *)(unaff_x22 + 0x360) = *(undefined8 *)(unaff_x22 + 0x3c0);
  *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x3d8);
  *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x388);
  *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x398);
  *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x390);
  piVar7 = *(int **)(*(long *)*puVar2 + 200);
  iVar1 = *piVar7;
  plVar3 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x478) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f4dca8;
                    /* WARNING: Could not recover jumptable at 0x000102f4dca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(plVar3,unaff_x22 + 0x10,unaff_x22 + 0x250,unaff_x22 + 800)
  ;
  return;
}



/* Entry: 102f4dca8; end: 102f4dd0b;  */

void FUN_102f4dca8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x480) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x478));
  func_0x000100e19000(lVar2 + 0x380);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4dd0c;
  }
  else {
    pcVar1 = FUN_102f4e024;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4dd0c; end: 102f4e023;  */

void FUN_102f4dd0c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x458);
  lVar8 = *(long *)(unaff_x22 + 0x450);
  lVar12 = *(long *)(unaff_x22 + 0x448);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f115140);
  lVar2 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar8);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar8,uVar9);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar1,lVar2,(ulong)(lVar3 - lVar8) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f115140);
  func_0x0001067ccf5c(uVar4,uVar1,1);
  func_0x000107c61170(uVar1);
  (*UNRECOVERED_JUMPTABLE)(puVar6,uVar9);
  func_0x000102fa6240();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_102f54b20();
    func_0x000107c613f8(&UNK_1105ec4f0,puVar6,0,0);
    *puVar6 = 1;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[5] = 0;
    *(undefined1 *)(puVar6 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f550b4(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x458);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x450);
    func_0x000102f55080(unaff_x22 + 0x2b8);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x148);
    if (lVar3 == 1) {
      uVar4 = 0;
      uVar1 = 0;
      lVar3 = 0;
      uVar13 = 0xf000000000000000;
      uVar9 = 0;
      uVar15 = 0xc000000000000000;
      uVar14 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar5 = 1;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar5 = *(undefined1 *)(unaff_x22 + 0x108);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x160);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x458);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x450);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x408);
    *(undefined8 *)(unaff_x22 + 0x170) = uVar4;
    *(undefined1 *)(unaff_x22 + 0x178) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar17;
    *(undefined8 *)(unaff_x22 + 400) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar1;
    *(long *)(unaff_x22 + 0x1b8) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1c0) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x1c8);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x1d8);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x1d0);
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a8);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1a0);
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x198);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 400);
    FUN_102f55004(unaff_x22 + 0x100,unaff_x22 + 0x1e0,0x112f2a110,&UNK_10db66360);
    FUN_102f4e1c4(unaff_x22 + 0x3e0);
    func_0x000102f54b94(unaff_x22 + 0x170);
    func_0x000102f550b4(unaff_x22 + 0x10);
    func_0x000102f55080(unaff_x22 + 0x2b8);
    uVar5 = *(undefined1 *)(unaff_x22 + 0x400);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x3f8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3f0);
    puVar6[1] = *(undefined8 *)(unaff_x22 + 1000);
    *puVar6 = uVar9;
    puVar6[3] = uVar1;
    puVar6[2] = uVar4;
    *(undefined1 *)(puVar6 + 4) = uVar5;
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f4e008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f4e024; end: 102f4e1c3;  */

void FUN_102f4e024(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x458);
  lVar5 = *(long *)(unaff_x22 + 0x450);
  lVar8 = *(long *)(unaff_x22 + 0x448);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f115140);
  lVar2 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar5);
  func_0x000107c5f82c();
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar5,uVar7);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar1,lVar2,(ulong)(lVar3 - lVar5) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f115140);
  func_0x0001067cd0d0(uVar4,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  (*pcVar9)(uVar6,uVar7);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x470);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x450);
  func_0x000102f55080(unaff_x22 + 0x2b8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102f4e1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f4e1c4; end: 102f4e2bf;  */

void FUN_102f4e1c4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = unaff_x20[6];
  uVar9 = unaff_x20[7];
  uVar6 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  if (0xe < uVar9 >> 0x3c) {
    uVar6 = 0;
    uVar5 = 0;
    uVar8 = 0;
    uVar9 = 0xc000000000000000;
  }
  func_0x000100d2cb48();
  func_0x000103ee3894();
  func_0x00010006c090(uVar8,uVar9);
  FUN_102f7a958();
  if ((uVar8 & 1) == 0) {
    uVar8 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    bVar4 = unaff_x20[9] != 0;
    uVar1 = 0xe000000000000000;
    if (bVar4) {
      uVar1 = unaff_x20[9];
    }
    uVar8 = 0;
    if (bVar4) {
      uVar8 = unaff_x20[10];
    }
    uVar9 = 0xe000000000000000;
    if (bVar4) {
      uVar9 = unaff_x20[0xb];
    }
    uVar2 = 0;
    if (bVar4) {
      uVar2 = unaff_x20[0xc];
    }
    uVar3 = 0xc000000000000000;
    if (bVar4) {
      uVar3 = unaff_x20[0xd];
    }
    FUN_102f54bc8(unaff_x20[8]);
    func_0x000107c6142c(uVar1);
    func_0x00010006c090(uVar2,uVar3);
  }
  uVar7 = (undefined1)*unaff_x20;
  if (3 < *unaff_x20 && (char)unaff_x20[1] != '\x01') {
    uVar7 = 0;
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  *(undefined1 *)(param_1 + 4) = uVar7;
  return;
}



/* Entry: 102f4e2c0; end: 102f4e367;  */

void FUN_102f4e2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 1000) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x3c1) = param_5;
  *(undefined8 *)(unaff_x22 + 0x3e0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x3d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x3d0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3c8) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x3f0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x3f8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x400) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x408) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x410) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x418) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x420) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4e368,0,0);
  return;
}



/* Entry: 102f4e368; end: 102f4e4df;  */

void FUN_102f4e368(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x420);
  lVar9 = *(long *)(unaff_x22 + 0x418);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x410);
  bVar3 = *(byte *)(unaff_x22 + 0x3c1);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3d0);
  *(undefined8 *)(unaff_x22 + 0x398) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x390) = 0;
  func_0x000107c5eec4(uVar8);
  func_0x000107c5eeac();
  (**(code **)(lVar9 + 8))(uVar8,uVar7);
  *(undefined8 *)(unaff_x22 + 0x358) = param_1;
  *(undefined8 *)(unaff_x22 + 0x360) = param_2;
  *(undefined8 *)(unaff_x22 + 0x370) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x368) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x378) = uVar10;
  bVar1 = 3 < bVar3;
  if (bVar1) {
    bVar3 = *(byte *)(unaff_x22 + 0x3c1);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x408);
  lVar9 = *(long *)(unaff_x22 + 1000);
  *(ulong *)(unaff_x22 + 0x380) = (ulong)bVar3;
  *(bool *)(unaff_x22 + 0x388) = !bVar1;
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x3d8));
  func_0x000107c5f830(uVar7);
  puVar4 = (undefined8 *)(lVar9 + 0x10);
  func_0x0001000a8868(puVar4,*(undefined8 *)(lVar9 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x380);
  *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x378);
  *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x390);
  *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(unaff_x22 + 0x388);
  *(undefined8 *)(unaff_x22 + 0x350) = *(undefined8 *)(unaff_x22 + 0x398);
  *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0x360);
  *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0x358);
  *(undefined8 *)(unaff_x22 + 0x328) = *(undefined8 *)(unaff_x22 + 0x370);
  *(undefined8 *)(unaff_x22 + 800) = *(undefined8 *)(unaff_x22 + 0x368);
  func_0x000102f4b994(unaff_x22 + 0x2b0);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x2d8);
  *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x2f8);
  *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x2f0);
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x308);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x300);
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x2b0);
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x2c0);
  piVar6 = *(int **)(*(long *)*puVar4 + 0xe8);
  iVar2 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x428) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f4e4e0;
                    /* WARNING: Could not recover jumptable at 0x000102f4e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,unaff_x22 + 0x310,unaff_x22 + 0x250);
  return;
}



/* Entry: 102f4e4e0; end: 102f4e543;  */

void FUN_102f4e4e0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x430) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x428));
  func_0x000100e19000(lVar2 + 0x2b0);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4e544;
  }
  else {
    pcVar1 = FUN_102f4e850;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4e544; end: 102f4e84f;  */

void FUN_102f4e544(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x408);
  lVar8 = *(long *)(unaff_x22 + 0x400);
  lVar12 = *(long *)(unaff_x22 + 0x3f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar1 = 0x70767352;
  func_0x000107c5fadc(0x70767352,0xe400000000000000);
  lVar2 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar8);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar8,uVar9);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar1,lVar2,(ulong)(lVar3 - lVar8) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0x70767352;
  func_0x000107c5fadc(0x70767352,0xe400000000000000);
  func_0x0001067ccf5c(uVar4,uVar1,1);
  func_0x000107c61170(uVar1);
  (*UNRECOVERED_JUMPTABLE)(puVar6,uVar9);
  func_0x000102f7afc4();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_102f54b20();
    func_0x000107c613f8(&UNK_1105ec4f0,puVar6,0,0);
    *puVar6 = 1;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    puVar6[5] = 0;
    *(undefined1 *)(puVar6 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f54b60(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x420);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x408);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x400);
    FUN_102f54aec(unaff_x22 + 0x358);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x40);
    lVar3 = *(long *)(unaff_x22 + 0x148);
    if (lVar3 == 1) {
      uVar4 = 0;
      uVar1 = 0;
      lVar3 = 0;
      uVar13 = 0xf000000000000000;
      uVar9 = 0;
      uVar15 = 0xc000000000000000;
      uVar14 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar5 = 1;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar5 = *(undefined1 *)(unaff_x22 + 0x108);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x168);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x160);
    }
    uVar11 = *(undefined8 *)(unaff_x22 + 0x420);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x408);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x400);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x3c8);
    *(undefined8 *)(unaff_x22 + 0x170) = uVar4;
    *(undefined1 *)(unaff_x22 + 0x178) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x188) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar17;
    *(undefined8 *)(unaff_x22 + 400) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar1;
    *(long *)(unaff_x22 + 0x1b8) = lVar3;
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x1c0) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x1c8);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x1d8);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x1d0);
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a8);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1a0);
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x198);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 400);
    FUN_102f55004(unaff_x22 + 0x100,unaff_x22 + 0x1e0,0x112f2a110,&UNK_10db66360);
    FUN_102f4e1c4(unaff_x22 + 0x3a0);
    func_0x000102f54b94(unaff_x22 + 0x170);
    func_0x000102f54b60(unaff_x22 + 0x10);
    FUN_102f54aec(unaff_x22 + 0x358);
    uVar5 = *(undefined1 *)(unaff_x22 + 0x3c0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x3b8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3b0);
    puVar6[1] = *(undefined8 *)(unaff_x22 + 0x3a8);
    *puVar6 = uVar9;
    puVar6[3] = uVar1;
    puVar6[2] = uVar4;
    *(undefined1 *)(puVar6 + 4) = uVar5;
    func_0x000107c615c0(uVar11);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f4e834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f4e850; end: 102f4e9db;  */

void FUN_102f4e850(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar5 = uRam0000000112f2a100;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x408);
  lVar6 = *(long *)(unaff_x22 + 0x400);
  lVar8 = *(long *)(unaff_x22 + 0x3f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar1 = 0x70767352;
  func_0x000107c5fadc(0x70767352,0xe400000000000000);
  lVar2 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar6);
  func_0x000107c5f82c();
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar6,uVar7);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar5,uVar1,lVar2,(ulong)(lVar3 - lVar6) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0x70767352;
  func_0x000107c5fadc(0x70767352,0xe400000000000000);
  func_0x0001067cd0d0(uVar5,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  (*pcVar9)(uVar4,uVar7);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x400);
  FUN_102f54aec(unaff_x22 + 0x358);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102f4e9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f4e9dc; end: 102f4ea57;  */

void FUN_102f4e9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x628) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x620) = param_4;
  *(undefined8 *)(unaff_x22 + 0x618) = param_3;
  *(undefined8 *)(unaff_x22 + 0x610) = param_2;
  *(undefined8 *)(unaff_x22 + 0x608) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x630) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x638) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x640) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x648) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4ea58,0,0);
  return;
}



/* Entry: 102f4ea58; end: 102f4eb8b;  */

void FUN_102f4ea58(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x648);
  lVar10 = *(long *)(unaff_x22 + 0x628);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x620);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x618);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x610);
  func_0x000103ee34e0();
  *(char *)(unaff_x22 + 0x670) = (char)param_3;
  *(undefined8 *)(unaff_x22 + 0x650) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x658) = uVar4;
  bVar3 = (param_3 & 0xff) != 1;
  uVar1 = 0;
  if (bVar3) {
    uVar1 = uVar7;
  }
  uVar7 = 0;
  if (bVar3) {
    uVar7 = uVar4;
  }
  func_0x000100d2cb64(0,0,0,0xf000000000000000);
  func_0x000107c5f830(uVar9);
  puVar5 = (undefined8 *)(lVar10 + 0x10);
  func_0x0001000a8868(puVar5,*(undefined8 *)(lVar10 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x5d0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
  *(undefined8 *)(unaff_x22 + 0x5e0) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x5e8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x5f0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x5f8) = 0;
  *(undefined8 *)(unaff_x22 + 0x600) = 0xc000000000000000;
  func_0x000102f4b994(unaff_x22 + 0x570);
  *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x598);
  *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x590);
  *(undefined8 *)(unaff_x22 + 0x548) = *(undefined8 *)(unaff_x22 + 0x5a8);
  *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x5a0);
  *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x5b8);
  *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x5b0);
  *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x5c8);
  *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x518) = *(undefined8 *)(unaff_x22 + 0x578);
  *(undefined8 *)(unaff_x22 + 0x510) = *(undefined8 *)(unaff_x22 + 0x570);
  *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x588);
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x580);
  piVar8 = *(int **)(*(long *)*puVar5 + 0x80);
  iVar2 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x660) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102f4eb8c;
                    /* WARNING: Could not recover jumptable at 0x000102f4eb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar8))
            (plVar6,unaff_x22 + 0x10,unaff_x22 + 0x5d0,unaff_x22 + 0x510);
  return;
}



/* Entry: 102f4eb8c; end: 102f4ebef;  */

void FUN_102f4eb8c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x668) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x660));
  func_0x000100e19000(lVar2 + 0x570);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4ebf0;
  }
  else {
    pcVar1 = FUN_102f4f0dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4ebf0; end: 102f4f0db;  */

void FUN_102f4ebf0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined1 *puVar39;
  undefined8 *puVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  long lVar43;
  undefined8 uVar44;
  undefined1 *puVar45;
  long unaff_x22;
  undefined8 *puVar46;
  undefined8 uVar47;
  long lVar48;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 *puVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 *puStack_68;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar56 = uRam0000000112f2a100;
  puVar40 = *(undefined8 **)(unaff_x22 + 0x648);
  lVar43 = *(long *)(unaff_x22 + 0x640);
  lVar48 = *(long *)(unaff_x22 + 0x638);
  uVar44 = *(undefined8 *)(unaff_x22 + 0x630);
  uVar5 = 0x6e656c6143746547;
  func_0x000107c5fadc(0x6e656c6143746547,0xeb00000000726164);
  lVar6 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar7 = lVar6;
  func_0x000107c5f830(lVar43);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar48 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar43,uVar44);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar56,uVar5,lVar6,(ulong)(lVar7 - lVar43) / 1000000);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  uVar5 = 0x6e656c6143746547;
  func_0x000107c5fadc(0x6e656c6143746547,0xeb00000000726164);
  func_0x0001067ccf5c(uVar56,uVar5,1);
  func_0x000107c61170(uVar5);
  (*UNRECOVERED_JUMPTABLE)(puVar40,uVar44);
  FUN_102f7aa24();
  if (((ulong)puVar40 & 1) == 0) {
    FUN_102f54b20();
    func_0x000107c613f8(&UNK_1105ec4f0,puVar40,0,0);
    *puVar40 = 1;
    puVar40[2] = 0;
    puVar40[1] = 0;
    puVar40[4] = 0;
    puVar40[3] = 0;
    puVar40[5] = 0;
    *(undefined1 *)(puVar40 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f54fb8(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x648);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x640);
    bVar4 = *(char *)(unaff_x22 + 0x670) != '\x01';
    uVar56 = 0;
    if (bVar4) {
      uVar56 = *(undefined8 *)(unaff_x22 + 0x650);
    }
    uVar11 = 0;
    if (bVar4) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x658);
    }
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000100d2cb64(uVar56,uVar11,0,0xc000000000000000);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar44);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar40 = (undefined8 *)(unaff_x22 + 0x260);
    *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0xa8);
    *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(unaff_x22 + 0xa0);
    *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0xb0);
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(unaff_x22 + 200);
    *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0xc0);
    *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x310) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x2c8) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x2d8) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x2d0) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x28);
    *puVar40 = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x50);
    puVar54 = puVar40;
    FUN_102f54fec();
    if ((int)puVar54 == 1) {
      FUN_102f7a134();
      puVar54 = (undefined8 *)(unaff_x22 + 0x230);
      puVar16 = (undefined8 *)(unaff_x22 + 0x238);
      puVar24 = (undefined8 *)(unaff_x22 + 0x240);
      puVar49 = (undefined8 *)(unaff_x22 + 0x248);
      puVar50 = (undefined8 *)(unaff_x22 + 0x250);
      puVar51 = (undefined8 *)(unaff_x22 + 600);
      puVar36 = (undefined8 *)(unaff_x22 + 0x210);
      puVar14 = (undefined8 *)(unaff_x22 + 0x218);
      puVar20 = (undefined8 *)(unaff_x22 + 0x220);
      puVar26 = (undefined8 *)(unaff_x22 + 0x228);
      puVar10 = (undefined8 *)(unaff_x22 + 0x200);
      puVar18 = (undefined8 *)(unaff_x22 + 0x208);
      puVar12 = (undefined8 *)(unaff_x22 + 0x1f8);
      puVar9 = (undefined8 *)(unaff_x22 + 0x1f0);
      puVar8 = (undefined8 *)(unaff_x22 + 0x1e8);
      puVar34 = (undefined8 *)(unaff_x22 + 0x1e0);
      puVar28 = (undefined8 *)(unaff_x22 + 0x1d0);
      puVar39 = (undefined1 *)(unaff_x22 + 0x1d8);
      puVar30 = (undefined8 *)(unaff_x22 + 0x1c0);
      puVar32 = (undefined8 *)(unaff_x22 + 0x1c8);
      puVar41 = (undefined8 *)(unaff_x22 + 0x1b0);
      puVar45 = (undefined1 *)(unaff_x22 + 0x1b8);
      puVar46 = (undefined8 *)(unaff_x22 + 0x1a8);
      puStack_68 = (undefined8 *)(unaff_x22 + 0x1a0);
    }
    else {
      puVar46 = (undefined8 *)(unaff_x22 + 0x268);
      puVar41 = (undefined8 *)(unaff_x22 + 0x270);
      puVar45 = (undefined1 *)(unaff_x22 + 0x278);
      puVar30 = (undefined8 *)(unaff_x22 + 0x280);
      puVar32 = (undefined8 *)(unaff_x22 + 0x288);
      puVar28 = (undefined8 *)(unaff_x22 + 0x290);
      puVar39 = (undefined1 *)(unaff_x22 + 0x298);
      puVar34 = (undefined8 *)(unaff_x22 + 0x2a0);
      puVar8 = (undefined8 *)(unaff_x22 + 0x2a8);
      puVar9 = (undefined8 *)(unaff_x22 + 0x2b0);
      puVar12 = (undefined8 *)(unaff_x22 + 0x2b8);
      puVar10 = (undefined8 *)(unaff_x22 + 0x2c0);
      puVar18 = (undefined8 *)(unaff_x22 + 0x2c8);
      puVar36 = (undefined8 *)(unaff_x22 + 0x2d0);
      puVar14 = (undefined8 *)(unaff_x22 + 0x2d8);
      puVar20 = (undefined8 *)(unaff_x22 + 0x2e0);
      puVar26 = (undefined8 *)(unaff_x22 + 0x2e8);
      puVar54 = (undefined8 *)(unaff_x22 + 0x2f0);
      puVar16 = (undefined8 *)(unaff_x22 + 0x2f8);
      puVar24 = (undefined8 *)(unaff_x22 + 0x300);
      puVar49 = (undefined8 *)(unaff_x22 + 0x308);
      puVar50 = (undefined8 *)(unaff_x22 + 0x310);
      puVar51 = (undefined8 *)(unaff_x22 + 0x318);
      puStack_68 = puVar40;
    }
    uVar22 = *puVar51;
    uVar55 = *puVar50;
    uVar23 = *puVar49;
    uVar25 = *puVar24;
    uVar17 = *puVar16;
    uVar38 = *puVar54;
    uVar27 = *puVar26;
    uVar21 = *puVar20;
    uVar15 = *puVar14;
    uVar37 = *puVar36;
    uVar19 = *puVar18;
    uVar11 = *puVar10;
    uVar13 = *puVar12;
    uVar44 = *puVar9;
    uVar5 = *puVar8;
    uVar35 = *puVar34;
    uVar2 = *puVar39;
    uVar29 = *puVar28;
    uVar33 = *puVar32;
    uVar31 = *puVar30;
    uVar3 = *puVar45;
    uVar42 = *puVar41;
    uVar47 = *puVar46;
    uVar52 = *(undefined8 *)(unaff_x22 + 0x648);
    uVar53 = *(undefined8 *)(unaff_x22 + 0x640);
    puVar54 = *(undefined8 **)(unaff_x22 + 0x608);
    bVar4 = *(char *)(unaff_x22 + 0x670) != '\x01';
    uVar56 = 0;
    if (bVar4) {
      uVar56 = *(undefined8 *)(unaff_x22 + 0x650);
    }
    uVar1 = 0;
    if (bVar4) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x658);
    }
    *(undefined8 *)(unaff_x22 + 800) = *puStack_68;
    *(undefined8 *)(unaff_x22 + 0x328) = uVar47;
    *(undefined8 *)(unaff_x22 + 0x330) = uVar42;
    *(undefined1 *)(unaff_x22 + 0x338) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x340) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x348) = uVar33;
    *(undefined8 *)(unaff_x22 + 0x350) = uVar29;
    *(undefined1 *)(unaff_x22 + 0x358) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x360) = uVar35;
    *(undefined8 *)(unaff_x22 + 0x368) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x370) = uVar44;
    *(undefined8 *)(unaff_x22 + 0x378) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x380) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x388) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x390) = uVar37;
    *(undefined8 *)(unaff_x22 + 0x398) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x3a0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x3a8) = uVar27;
    *(undefined8 *)(unaff_x22 + 0x3b0) = uVar38;
    *(undefined8 *)(unaff_x22 + 0x3b8) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x3c0) = uVar25;
    *(undefined8 *)(unaff_x22 + 0x3c8) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x3d0) = uVar55;
    *(undefined8 *)(unaff_x22 + 0x3d8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x340);
    *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x358);
    *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x350);
    *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x3a0);
    *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x3b8);
    *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x3b0);
    *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x328);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 800);
    *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x338);
    *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x330);
    *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x388);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x380);
    *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x398);
    *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x390);
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x368);
    *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x360);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x378);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x370);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x3c8);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x3c0);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x3d8);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x3d0);
    FUN_102f55004(puVar40,unaff_x22 + 0x3e0,0x112f2a130,&UNK_10db663d0);
    FUN_102f4c874((undefined8 *)(unaff_x22 + 0x4a0));
    func_0x000102f5504c(unaff_x22 + 800);
    func_0x000102f54fb8(unaff_x22 + 0x10);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000100d2cb64(uVar56,uVar1,0,0xc000000000000000);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x4a8);
    uVar56 = *(undefined8 *)(unaff_x22 + 0x4a0);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x4b0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4c0);
    puVar54[3] = *(undefined8 *)(unaff_x22 + 0x4b8);
    puVar54[2] = uVar44;
    puVar54[5] = uVar13;
    puVar54[4] = uVar11;
    puVar54[1] = uVar5;
    *puVar54 = uVar56;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar56 = *(undefined8 *)(unaff_x22 + 0x4d0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4e8);
    uVar44 = *(undefined8 *)(unaff_x22 + 0x4e0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x4f0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x508);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x500);
    puVar54[0xb] = *(undefined8 *)(unaff_x22 + 0x4f8);
    puVar54[10] = uVar13;
    puVar54[0xd] = uVar17;
    puVar54[0xc] = uVar15;
    puVar54[7] = uVar5;
    puVar54[6] = uVar56;
    puVar54[9] = uVar11;
    puVar54[8] = uVar44;
    func_0x000107c615c0(uVar52);
    func_0x000107c615c0(uVar53);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f4f0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f4f0dc; end: 102f4f2b3;  */

void FUN_102f4f0dc(void)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar1 = uRam0000000112f2a100;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x648);
  lVar7 = *(long *)(unaff_x22 + 0x640);
  lVar8 = *(long *)(unaff_x22 + 0x638);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x630);
  uVar3 = 0x6e656c6143746547;
  func_0x000107c5fadc(0x6e656c6143746547,0xeb00000000726164);
  lVar4 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar5 = lVar4;
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  pcVar10 = *(code **)(lVar8 + 8);
  (*pcVar10)(lVar7,uVar9);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar1,uVar3,lVar4,(ulong)(lVar5 - lVar7) / 1000000);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  uVar3 = 0x6e656c6143746547;
  func_0x000107c5fadc(0x6e656c6143746547,0xeb00000000726164);
  func_0x0001067cd0d0(uVar1,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
  (*pcVar10)(uVar6,uVar9);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x640);
  bVar2 = *(char *)(unaff_x22 + 0x670) != '\x01';
  uVar1 = 0;
  if (bVar2) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x650);
  }
  uVar9 = 0;
  if (bVar2) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x658);
  }
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000100d2cb64(uVar1,uVar9,0,0xc000000000000000);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000102f4f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f4f2b4; end: 102f4f323;  */

void FUN_102f4f2b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x168) = param_2;
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x178) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 400) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4f324,0,0);
  return;
}



/* Entry: 102f4f324; end: 102f4f583;  */

void FUN_102f4f324(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  int *piVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar4 = *(long *)(unaff_x22 + 0x170);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = uVar15;
  uVar10 = uVar3;
  func_0x000103ee34e0();
  *(char *)(unaff_x22 + 0x1b8) = (char)param_3;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar7;
  bVar6 = (param_3 & 0xff) != 1;
  uVar1 = 0;
  if (bVar6) {
    uVar1 = uVar10;
  }
  uVar10 = 0;
  if (bVar6) {
    uVar10 = uVar7;
  }
  func_0x000100d2cb64(0,0,0,0xf000000000000000);
  func_0x000107c602fc(0x3d);
  *(undefined8 *)(unaff_x22 + 0x138) = 0;
  *(undefined8 *)(unaff_x22 + 0x140) = 0xe000000000000000;
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f1150b0);
  func_0x000107c5fb78(uVar15,uVar3);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f1150d0);
  func_0x000100d2cb48(uVar1,uVar10,0,0xc000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
  *(undefined8 *)(unaff_x22 + 0x148) = uVar1;
  puVar12 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  puVar5 = PTR___ss6UInt64VN_11034f048;
  puVar11 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
  func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                      PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar11);
  func_0x000107c5fb78(0x3d68676968202c,0xe700000000000000);
  func_0x000100d2cb48(uVar1,uVar10,0,0xc000000000000000);
  func_0x00010006c090(0,0xc000000000000000);
  *(undefined8 *)(unaff_x22 + 0x150) = uVar10;
  func_0x000107c6057c(puVar5,puVar12);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar12);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x140));
  func_0x000107c5f830(uVar14);
  puVar8 = (undefined8 *)(lVar4 + 0x10);
  func_0x0001000a8868(puVar8,*(undefined8 *)(lVar4 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x108) = 0;
  *(undefined8 *)(unaff_x22 + 0x110) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x128) = 0;
  *(undefined8 *)(unaff_x22 + 0x130) = 0xc000000000000000;
  func_0x000102f4b994(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  piVar13 = *(int **)(*(long *)*puVar8 + 0x88);
  iVar2 = *piVar13;
  plVar9 = (long *)(ulong)(uint)piVar13[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1a8) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_102f4f584;
                    /* WARNING: Could not recover jumptable at 0x000102f4f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar13))
            (plVar9,unaff_x22 + 0xd0,unaff_x22 + 0x108,unaff_x22 + 0x10);
  return;
}



/* Entry: 102f4f584; end: 102f4f5e7;  */

void FUN_102f4f584(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1a8));
  func_0x000100e19000(lVar2 + 0x70);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4f5e8;
  }
  else {
    pcVar1 = FUN_102f4f918;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4f5e8; end: 102f4f917;  */

void FUN_102f4f5e8(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long unaff_x22;
  code *pcVar20;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar1 = uRam0000000112f2a100;
  lVar13 = *(long *)(unaff_x22 + 0x188);
  uVar14 = *(undefined8 *)(unaff_x22 + 400);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar6 = *(long *)(unaff_x22 + 0x180);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1150f0);
  lVar11 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar12 = lVar11;
  func_0x000107c5f830(lVar13);
  func_0x000107c5f82c();
  pcVar20 = *(code **)(lVar6 + 8);
  (*pcVar20)(lVar13,uVar15);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar1,uVar10,lVar11,(ulong)(lVar12 - lVar13) / 1000000);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar10);
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1150f0);
  func_0x0001067ccf5c(uVar1,uVar10,1);
  func_0x000107c61170(uVar10);
  (*pcVar20)(uVar14,uVar15);
  func_0x000107c602fc(0x3b);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f115110);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(ulong *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = uVar7;
  uVar1 = uVar10;
  uVar14 = uVar8;
  uVar15 = uVar5;
  if (0xe < uVar7 >> 0x3c) {
    uVar15 = 0;
    uVar14 = 0;
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
  }
  func_0x000100d2cb48(uVar5,uVar8,uVar10,uVar7);
  func_0x000103ee3894(uVar14,uVar15);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000107c5fb78(uVar14,uVar15);
  func_0x000107c6142c(uVar15);
  func_0x000107c5fb78(0x6f69736976657220,0xec0000003d64496e);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x158) = uVar17;
  puVar16 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar16);
  func_0x000107c6142c(0xe000000000000000);
  uVar2 = uVar7;
  uVar1 = uVar10;
  uVar14 = uVar8;
  uVar15 = uVar5;
  if (0xe < uVar7 >> 0x3c) {
    uVar15 = 0;
    uVar14 = 0;
    uVar1 = 0;
    uVar2 = 0xc000000000000000;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 400);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x188);
  bVar9 = *(char *)(unaff_x22 + 0x1b8) != '\x01';
  uVar3 = 0;
  if (bVar9) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  }
  uVar4 = 0;
  if (bVar9) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
  }
  func_0x000100d2cb48(uVar5,uVar8,uVar10,uVar7);
  func_0x000103ee3894(uVar14,uVar15);
  func_0x00010006c090(uVar1,uVar2);
  func_0x000102f54f84(unaff_x22 + 0xd0);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000100d2cb64(uVar3,uVar4,0,0xc000000000000000);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar19);
                    /* WARNING: Could not recover jumptable at 0x000102f4f8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar14,uVar15,uVar17);
  return;
}



/* Entry: 102f4f918; end: 102f4faf3;  */

void FUN_102f4f918(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  code *pcVar13;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar6 = uRam0000000112f2a100;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar3 = *(long *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 400);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar11 = *(long *)(unaff_x22 + 0x180);
  bVar7 = *(char *)(unaff_x22 + 0x1b8) != '\x01';
  uVar1 = 0;
  if (bVar7) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  }
  uVar2 = 0;
  if (bVar7) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  }
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1150f0);
  lVar9 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar10 = lVar9;
  func_0x000107c5f830(lVar3);
  func_0x000107c5f82c();
  pcVar13 = *(code **)(lVar11 + 8);
  lVar11 = lVar3;
  (*pcVar13)(lVar3,uVar4);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar6,uVar8,lVar9,(ulong)(lVar10 - lVar11) / 1000000);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(uVar8);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f1150f0);
  func_0x0001067cd0d0(uVar6,uVar8,1);
  func_0x000107c61170(uVar8);
  func_0x000107c61654();
  (*pcVar13)(uVar5,uVar4);
  FUN_102f4b608(0xd000000000000014,0x800000010f1150f0,uVar12);
  func_0x000107c61654();
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000100d2cb64(uVar1,uVar2,0,0xc000000000000000);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000102f4fad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f4faf4; end: 102f4fb6f;  */

void FUN_102f4faf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x220) = param_4;
  *(undefined8 *)(unaff_x22 + 0x218) = param_3;
  *(undefined8 *)(unaff_x22 + 0x210) = param_2;
  *(undefined8 *)(unaff_x22 + 0x208) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x230) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x240) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x248) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f4fb70,0,0);
  return;
}



/* Entry: 102f4fb70; end: 102f4fd17;  */

void FUN_102f4fb70(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  int *piVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar6 = *(long *)(unaff_x22 + 0x228);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x210);
  func_0x000107c61434(uVar7);
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar8,uVar7);
  func_0x000107c5fb78(0x6f69736976657220,0xec0000003d64496e);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar10;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(0x800000010f115070);
  func_0x000107c5f830(uVar9);
  puVar2 = (undefined8 *)(lVar6 + 0x10);
  func_0x0001000a8868(puVar2,*(undefined8 *)(lVar6 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1c8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
  func_0x000102f4b994((undefined8 *)(unaff_x22 + 0x148));
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x158);
  piVar5 = *(int **)(*(long *)*puVar2 + 0x98);
  iVar1 = *piVar5;
  plVar3 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x250) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f4fd18;
                    /* WARNING: Could not recover jumptable at 0x000102f4fd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar3,unaff_x22 + 0x1d0,unaff_x22 + 0x1a8,unaff_x22 + 0xe8);
  return;
}



/* Entry: 102f4fd18; end: 102f4fd7b;  */

void FUN_102f4fd18(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 600) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x250));
  func_0x000100e19000(lVar2 + 0x148);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f4fd7c;
  }
  else {
    pcVar1 = FUN_102f50144;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f4fd7c; end: 102f50143;  */

void FUN_102f4fd7c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar16;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  uVar8 = 0x746e657645746547;
  puVar11 = *(undefined8 **)(unaff_x22 + 0x248);
  lVar10 = *(long *)(unaff_x22 + 0x240);
  lVar15 = *(long *)(unaff_x22 + 0x238);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar7 = uVar8;
  func_0x000107c5fadc(0x746e657645746547,0xe800000000000000);
  lVar1 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar2 = lVar1;
  func_0x000107c5f830(lVar10);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar10,uVar13);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar7,lVar1,(ulong)(lVar2 - lVar10) / 1000000);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(0x746e657645746547,0xe800000000000000);
  uVar7 = 1;
  func_0x0001067ccf5c(uVar4,uVar8,1);
  func_0x000107c61170(uVar8);
  (*UNRECOVERED_JUMPTABLE)(puVar11,uVar13);
  func_0x000102f7add8();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_102f54b20();
    puVar5 = &UNK_1105ec4f0;
    func_0x000107c613f8(&UNK_1105ec4f0,puVar11,0,0);
    *puVar11 = 1;
    puVar11[2] = 0;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[5] = 0;
    *(undefined1 *)(puVar11 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f54f50(unaff_x22 + 0x1d0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
    FUN_102f4b608(0x746e657645746547,0xe800000000000000,puVar5);
    func_0x000107c61654();
    func_0x000107c6142c(uVar8);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x208);
    func_0x000107c602fc(0x2a);
    uVar3 = 0xe000000000000000;
    func_0x000107c6142c(0xe000000000000000);
    func_0x000102f7add4();
    uVar4 = uVar3;
    uVar8 = uVar13;
    uVar16 = uVar7;
    func_0x000102f7a488();
    func_0x00010006c090(uVar3,uVar13);
    func_0x000107c61574(uVar7);
    func_0x000107c5fb78(uVar4,uVar8);
    func_0x000107c6142c(uVar8);
    uVar8 = 0x6f69736976657220;
    uVar13 = 0xec0000003d64496e;
    func_0x000107c5fb78(0x6f69736976657220,0xec0000003d64496e);
    func_0x000102f7add4();
    uVar4 = uVar8;
    uVar7 = uVar16;
    func_0x000102f7a44c();
    func_0x00010006c090(uVar8,uVar13);
    func_0x000107c61574(uVar16);
    *(undefined8 *)(unaff_x22 + 0x200) = uVar4;
    puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                        PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
    puVar6 = puVar5;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    uVar4 = 0x800000010f115090;
    func_0x000107c6142c(0x800000010f115090);
    func_0x000102f7add4();
    FUN_102f4d720(unaff_x22 + 0x10);
    func_0x00010006c090(uVar4,puVar6);
    func_0x000107c61574(uVar7);
    func_0x000102f54f50(unaff_x22 + 0x1d0);
    func_0x000107c6142c(uVar14);
    func_0x00010006c090(0,0xc000000000000000);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar11[1] = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar11 = uVar4;
    puVar11[3] = uVar8;
    puVar11[2] = uVar7;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar11[9] = *(undefined8 *)(unaff_x22 + 0x58);
    puVar11[8] = uVar16;
    puVar11[0xb] = uVar14;
    puVar11[10] = uVar3;
    puVar11[5] = uVar7;
    puVar11[4] = uVar4;
    puVar11[7] = uVar13;
    puVar11[6] = uVar8;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar11[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
    puVar11[0x10] = uVar16;
    puVar11[0x13] = uVar14;
    puVar11[0x12] = uVar3;
    puVar11[0xd] = uVar7;
    puVar11[0xc] = uVar4;
    puVar11[0xf] = uVar13;
    puVar11[0xe] = uVar8;
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
    puVar11[0x1a] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar11[0x17] = uVar13;
    puVar11[0x16] = uVar8;
    puVar11[0x19] = uVar3;
    puVar11[0x18] = uVar16;
    puVar11[0x15] = uVar7;
    puVar11[0x14] = uVar4;
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f50128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f50144; end: 102f502ff;  */

void FUN_102f50144(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar8 = uRam0000000112f2a100;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar6 = *(long *)(unaff_x22 + 0x240);
  lVar4 = *(long *)(unaff_x22 + 0x238);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar1 = 0x746e657645746547;
  func_0x000107c5fadc(0x746e657645746547,0xe800000000000000);
  lVar2 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar6);
  func_0x000107c5f82c();
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(lVar6,uVar9);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar8,uVar1,lVar2,(ulong)(lVar3 - lVar6) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0x746e657645746547;
  func_0x000107c5fadc(0x746e657645746547,0xe800000000000000);
  func_0x0001067cd0d0(uVar8,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  (*pcVar5)(uVar7,uVar9);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x218);
  FUN_102f4b608(0x746e657645746547,0xe800000000000000,*(undefined8 *)(unaff_x22 + 600));
  func_0x000107c61654();
  func_0x000107c6142c(uVar7);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f502e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f50300; end: 102f5036f;  */

void FUN_102f50300(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x248) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x240) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x250) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 600) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x260) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x268) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f50370,0,0);
  return;
}



/* Entry: 102f50370; end: 102f50603;  */

void FUN_102f50370(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined8 *puVar12;
  long lVar13;
  long unaff_x22;
  
  puVar12 = *(undefined8 **)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  *(undefined8 *)(unaff_x22 + 200) = 0xe000000000000000;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined1 *)(unaff_x22 + 0xd8) = 1;
  *(undefined8 *)(unaff_x22 + 0xe8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  uVar2 = *puVar12;
  uVar4 = puVar12[1];
  uVar7 = uVar2;
  uVar9 = uVar4;
  func_0x000103ee34e0();
  bVar6 = (param_3 & 0xff) != 1;
  uVar3 = 0;
  if (bVar6) {
    uVar3 = uVar9;
  }
  uVar9 = 0;
  if (bVar6) {
    uVar9 = uVar7;
  }
  func_0x000100d2cb64(0,0,0,0xf000000000000000);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x108) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x100) = 0;
  uVar3 = puVar12[2];
  uVar9 = puVar12[3];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar9;
  uVar7 = puVar12[4];
  uVar5 = puVar12[5];
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  uVar10 = puVar12[6];
  *(undefined8 *)(unaff_x22 + 0x200) = puVar12[7];
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar10;
  uVar10 = puVar12[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = puVar12[7];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar10;
  uVar10 = puVar12[8];
  *(undefined8 *)(unaff_x22 + 0x210) = puVar12[9];
  *(undefined8 *)(unaff_x22 + 0x208) = uVar10;
  if (*(long *)(unaff_x22 + 0x210) != 0) {
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x208);
    *(long *)(unaff_x22 + 200) = *(long *)(unaff_x22 + 0x210);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar13 = *(long *)(unaff_x22 + 0x248);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar5);
  func_0x000100402194((undefined8 *)(unaff_x22 + 0x1f8),unaff_x22 + 0x218);
  FUN_102f55004((undefined8 *)(unaff_x22 + 0x208),unaff_x22 + 0x228,0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c602fc(0x33);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f115030);
  func_0x000107c5fb78(uVar2,uVar4);
  func_0x000107c5fb78(0x6144747261747320,0xeb000000003d6574);
  func_0x000107c5fb78(uVar3,uVar9);
  func_0x000107c5fb78(0x65746144646e6520,0xe90000000000003d);
  func_0x000107c5fb78(uVar7,uVar5);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5f830(uVar10);
  puVar12 = (undefined8 *)(lVar13 + 0x10);
  func_0x0001000a8868(puVar12,*(undefined8 *)(lVar13 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000102f4b994(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x180);
  piVar11 = *(int **)(*(long *)*puVar12 + 0xa8);
  iVar1 = *piVar11;
  plVar8 = (long *)(ulong)(uint)piVar11[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x270) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_102f50604;
                    /* WARNING: Could not recover jumptable at 0x000102f50600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))
            (plVar8,unaff_x22 + 0x1d0,unaff_x22 + 0x10,unaff_x22 + 0x110);
  return;
}



/* Entry: 102f50604; end: 102f50667;  */

void FUN_102f50604(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x278) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x270));
  func_0x000100e19000(lVar2 + 0x170);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f50668;
  }
  else {
    pcVar1 = FUN_102f5093c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f50668; end: 102f5093b;  */

void FUN_102f50668(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar3 = uRam0000000112f2a100;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar9 = *(long *)(unaff_x22 + 0x260);
  lVar15 = *(long *)(unaff_x22 + 600);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar13 = 0x6e6576457473694c;
  uVar4 = uVar13;
  func_0x000107c5fadc(0x6e6576457473694c,0xea00000000007374);
  lVar5 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar8 = lVar5;
  func_0x000107c5f830(lVar9);
  func_0x000107c5f82c();
  pcVar16 = *(code **)(lVar15 + 8);
  (*pcVar16)(lVar9,uVar10);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar3,uVar4,lVar5,(ulong)(lVar8 - lVar9) / 1000000);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c5fadc(0x6e6576457473694c,0xea00000000007374);
  func_0x0001067ccf5c(uVar3,uVar13,1);
  func_0x000107c61170(uVar13);
  (*pcVar16)(uVar7,uVar10);
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(0xe000000000000000);
  lVar5 = *(long *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(lVar5 + 0x10);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(0x800000010f115050);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = *(long *)(lVar5 + 0x10);
  if (lVar8 != 0) {
    func_0x0001012b58b0(0,lVar8,0);
    lVar9 = *(ulong *)(puVar6 + 0x10) * 0x20 + 0x38;
    puVar14 = (undefined8 *)(lVar5 + 0x38);
    uVar11 = *(ulong *)(puVar6 + 0x10);
    do {
      uVar3 = puVar14[-3];
      uVar13 = puVar14[-2];
      uVar4 = puVar14[-1];
      uVar7 = *puVar14;
      uVar1 = uVar11 + 1;
      uVar12 = *(ulong *)(puVar6 + 0x18);
      func_0x000107c61434(uVar13);
      if (uVar12 >> 1 <= uVar11) {
        func_0x0001012b58b0(1 < uVar12,uVar1,1);
      }
      puVar14 = puVar14 + 8;
      *(ulong *)(puVar6 + 0x10) = uVar1;
      puVar2 = (undefined8 *)(puVar6 + lVar9);
      puVar2[-3] = uVar3;
      puVar2[-2] = uVar13;
      lVar9 = lVar9 + 0x20;
      puVar2[-1] = uVar4;
      *puVar2 = uVar7;
      lVar8 = lVar8 + -1;
      uVar11 = uVar1;
    } while (lVar8 != 0);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c61434(uVar4);
  func_0x000102f54f1c(unaff_x22 + 0x1d0);
  func_0x000102f54ee8(unaff_x22 + 0x90);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102f50920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6,uVar3,uVar4);
  return;
}



/* Entry: 102f5093c; end: 102f50afb;  */

void FUN_102f5093c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar1 = uRam0000000112f2a100;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar6 = *(long *)(unaff_x22 + 0x260);
  lVar9 = *(long *)(unaff_x22 + 600);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar2 = 0x6e6576457473694c;
  func_0x000107c5fadc(0x6e6576457473694c,0xea00000000007374);
  lVar3 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar4 = lVar3;
  func_0x000107c5f830(lVar6);
  func_0x000107c5f82c();
  pcVar10 = *(code **)(lVar9 + 8);
  lVar9 = lVar6;
  (*pcVar10)(lVar6,uVar7);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar1,uVar2,lVar3,(ulong)(lVar4 - lVar9) / 1000000);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  uVar2 = 0x6e6576457473694c;
  func_0x000107c5fadc(0x6e6576457473694c,0xea00000000007374);
  func_0x0001067cd0d0(uVar1,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61654();
  (*pcVar10)(uVar8,uVar7);
  FUN_102f4b608(0x6e6576457473694c,0xea00000000007374,uVar5);
  func_0x000107c61654();
  func_0x000102f54ee8(unaff_x22 + 0x90);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(lVar6);
                    /* WARNING: Could not recover jumptable at 0x000102f50ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f50afc; end: 102f50b97;  */

void FUN_102f50afc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x518) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x510) = param_2;
  *(undefined8 *)(unaff_x22 + 0x508) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x520) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x528) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x530) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x538) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x540) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x548) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x550) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f50b98,0,0);
  return;
}



/* Entry: 102f50b98; end: 102f50f83;  */

void FUN_102f50b98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x550);
  lVar13 = *(long *)(unaff_x22 + 0x548);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x540);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x510);
  func_0x000102f7aea0(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x4b0) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x4a8) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x4c0) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x4b8) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x270) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x298) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x290) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x238) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x248) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x240) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x268) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x220) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x100);
  func_0x000107c5eec4(uVar8);
  func_0x000107c5eeac();
  (**(code **)(lVar13 + 8))(uVar8,uVar11);
  func_0x000107c61434(param_2);
  func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x4b8));
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_2;
  uVar8 = *puVar12;
  uVar2 = puVar12[1];
  func_0x000107c61434(uVar2);
  func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x4a8));
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar2;
  uVar5 = puVar12[2];
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar5;
  uVar11 = puVar12[3];
  lVar13 = puVar12[4];
  if (lVar13 != 0) {
    *(undefined8 *)(unaff_x22 + 0x4d0) = *(undefined8 *)(unaff_x22 + 0x120);
    *(undefined8 *)(unaff_x22 + 0x4c8) = *(undefined8 *)(unaff_x22 + 0x118);
    func_0x000107c61438(lVar13,2);
    func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x4c8));
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar11;
    *(long *)(unaff_x22 + 0x200) = lVar13;
  }
  lVar6 = *(long *)(unaff_x22 + 0x510);
  lVar9 = *(long *)(lVar6 + 0x30);
  if (lVar9 != 0) {
    uVar10 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x4e0) = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 0x4d8) = *(undefined8 *)(unaff_x22 + 0x128);
    func_0x000107c61434(lVar9);
    func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x4d8));
    *(undefined8 *)(unaff_x22 + 0x208) = uVar10;
    *(long *)(unaff_x22 + 0x210) = lVar9;
    lVar6 = *(long *)(unaff_x22 + 0x510);
  }
  if (*(char *)(lVar6 + 0x50) != -1) {
    FUN_102f4d514((undefined8 *)(unaff_x22 + 0x448),*(undefined8 *)(lVar6 + 0x38),
                  *(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x48));
    uVar10 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x450);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x448);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x460);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x458);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x468);
    func_0x000102f54e24(*(undefined8 *)(unaff_x22 + 0x228),*(undefined8 *)(unaff_x22 + 0x230),
                        *(undefined8 *)(unaff_x22 + 0x238),*(undefined8 *)(unaff_x22 + 0x240),
                        *(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x250),
                        *(undefined8 *)(unaff_x22 + 600));
    *(undefined8 *)(unaff_x22 + 0x240) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x238) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x250) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x248) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x230) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x228) = uVar18;
    *(undefined8 *)(unaff_x22 + 600) = uVar10;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x538);
  lVar6 = *(long *)(unaff_x22 + 0x518);
  func_0x000107c602fc(0x44);
  *(undefined8 *)(unaff_x22 + 0x4e8) = 0;
  *(undefined8 *)(unaff_x22 + 0x4f0) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000017,0x800000010f114fd0);
  func_0x000107c5fb78(uVar8,uVar2);
  func_0x000107c5fb78(0x7369766552666920,0xee003d64496e6f69);
  *(undefined8 *)(unaff_x22 + 0x4f8) = uVar5;
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                      PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0x3d656c74697420,0xe700000000000000);
  uVar8 = 0x3e6c696e3c;
  if (lVar13 != 0) {
    uVar8 = uVar11;
  }
  lVar9 = -0x1b00000000000000;
  if (lVar13 != 0) {
    lVar9 = lVar13;
  }
  func_0x000107c5fb78(uVar8,lVar9);
  func_0x000107c6142c(lVar9);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f114ff0);
  func_0x000107c5fb78(param_1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x4f0));
  func_0x000107c5f830(uVar10);
  puVar12 = (undefined8 *)(lVar6 + 0x10);
  func_0x0001000a8868(puVar12,*(undefined8 *)(lVar6 + 0x28));
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x278);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x270);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x288);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x280);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x298);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x290);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x2a0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x230);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 600);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x268);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x260);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x210);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000102f4b994((undefined8 *)(unaff_x22 + 1000));
  *(undefined8 *)(unaff_x22 + 0x3b0) = *(undefined8 *)(unaff_x22 + 0x410);
  *(undefined8 *)(unaff_x22 + 0x3a8) = *(undefined8 *)(unaff_x22 + 0x408);
  *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x420);
  *(undefined8 *)(unaff_x22 + 0x3b8) = *(undefined8 *)(unaff_x22 + 0x418);
  *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x430);
  *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x428);
  *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x440);
  *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x438);
  *(undefined8 *)(unaff_x22 + 0x390) = *(undefined8 *)(unaff_x22 + 0x3f0);
  *(undefined8 *)(unaff_x22 + 0x388) = *(undefined8 *)(unaff_x22 + 1000);
  *(undefined8 *)(unaff_x22 + 0x3a0) = *(undefined8 *)(unaff_x22 + 0x400);
  *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(unaff_x22 + 0x3f8);
  piVar7 = *(int **)(*(long *)*puVar12 + 0xb8);
  iVar1 = *piVar7;
  plVar3 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x558) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f50f84;
                    /* WARNING: Could not recover jumptable at 0x000102f50f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar3,unaff_x22 + 0x480,unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0x388));
  return;
}



/* Entry: 102f50f84; end: 102f50fe7;  */

void FUN_102f50f84(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x560) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x558));
  func_0x000100e19000(lVar2 + 1000);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f50fe8;
  }
  else {
    pcVar1 = FUN_102f513c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f50fe8; end: 102f513c7;  */

void FUN_102f50fe8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  uVar13 = 0x7645657461647055;
  puVar11 = *(undefined8 **)(unaff_x22 + 0x538);
  lVar10 = *(long *)(unaff_x22 + 0x530);
  lVar9 = *(long *)(unaff_x22 + 0x528);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar7 = uVar13;
  func_0x000107c5fadc(0x7645657461647055,0xeb00000000746e65);
  lVar1 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar2 = lVar1;
  func_0x000107c5f830(lVar10);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar10,uVar15);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar7,lVar1,(ulong)(lVar2 - lVar10) / 1000000);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c5fadc(0x7645657461647055,0xeb00000000746e65);
  uVar7 = 1;
  func_0x0001067ccf5c(uVar4,uVar13,1);
  func_0x000107c61170(uVar13);
  (*UNRECOVERED_JUMPTABLE)(puVar11,uVar15);
  func_0x000102fa6234();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_102f54b20();
    puVar5 = &UNK_1105ec4f0;
    func_0x000107c613f8(&UNK_1105ec4f0,puVar11,0,0);
    *puVar11 = 1;
    puVar11[2] = 0;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[5] = 0;
    *(undefined1 *)(puVar11 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f54df0(unaff_x22 + 0x480);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x550);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x538);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x530);
    FUN_102f4b608(0x7645657461647055,0xeb00000000746e65,puVar5);
    func_0x000107c61654();
    func_0x000102f54dbc(unaff_x22 + 0x1d0);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x550);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x538);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x530);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x508);
    func_0x000107c602fc(0x32);
    uVar3 = 0xe000000000000000;
    func_0x000107c6142c(0xe000000000000000);
    func_0x000102fa6230();
    uVar4 = uVar3;
    uVar13 = uVar15;
    uVar16 = uVar7;
    FUN_102f7a2d4();
    func_0x00010006c090(uVar3,uVar15);
    func_0x000107c61574(uVar7);
    func_0x000107c5fb78(uVar4,uVar13);
    func_0x000107c6142c(uVar13);
    uVar13 = 0x6976655277656e20;
    uVar15 = 0xef3d64496e6f6973;
    func_0x000107c5fb78(0x6976655277656e20,0xef3d64496e6f6973);
    func_0x000102fa6230();
    uVar4 = uVar13;
    uVar7 = uVar16;
    FUN_102f7a44c();
    func_0x00010006c090(uVar13,uVar15);
    func_0x000107c61574(uVar16);
    *(undefined8 *)(unaff_x22 + 0x500) = uVar4;
    puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
    func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                        PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
    puVar6 = puVar5;
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar5);
    uVar4 = 0x800000010f115010;
    func_0x000107c6142c(0x800000010f115010);
    func_0x000102fa6230();
    FUN_102f4d720((undefined8 *)(unaff_x22 + 0x2b0));
    func_0x00010006c090(uVar4,puVar6);
    func_0x000107c61574(uVar7);
    func_0x000102f54df0(unaff_x22 + 0x480);
    func_0x000102f54dbc(unaff_x22 + 0x1d0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x2b0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2c0);
    puVar11[1] = *(undefined8 *)(unaff_x22 + 0x2b8);
    *puVar11 = uVar13;
    puVar11[3] = uVar7;
    puVar11[2] = uVar4;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2f0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2e0);
    puVar11[9] = *(undefined8 *)(unaff_x22 + 0x2f8);
    puVar11[8] = uVar4;
    puVar11[0xb] = uVar13;
    puVar11[10] = uVar7;
    puVar11[5] = uVar17;
    puVar11[4] = uVar3;
    puVar11[7] = uVar16;
    puVar11[6] = uVar15;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x330);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x348);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x340);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar15 = *(undefined8 *)(unaff_x22 + 800);
    puVar11[0x11] = *(undefined8 *)(unaff_x22 + 0x338);
    puVar11[0x10] = uVar4;
    puVar11[0x13] = uVar13;
    puVar11[0x12] = uVar7;
    puVar11[0xd] = uVar17;
    puVar11[0xc] = uVar3;
    puVar11[0xf] = uVar16;
    puVar11[0xe] = uVar15;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x350);
    puVar11[0x1a] = *(undefined8 *)(unaff_x22 + 0x380);
    puVar11[0x17] = uVar15;
    puVar11[0x16] = uVar13;
    puVar11[0x19] = uVar7;
    puVar11[0x18] = uVar4;
    puVar11[0x15] = uVar3;
    puVar11[0x14] = uVar16;
    func_0x000107c615c0(uVar14);
    func_0x000107c615c0(uVar12);
    func_0x000107c615c0(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f513ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f513c8; end: 102f51593;  */

void FUN_102f513c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x538);
  lVar5 = *(long *)(unaff_x22 + 0x530);
  lVar6 = *(long *)(unaff_x22 + 0x528);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x520);
  uVar1 = 0x7645657461647055;
  func_0x000107c5fadc(0x7645657461647055,0xeb00000000746e65);
  lVar2 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar5);
  func_0x000107c5f82c();
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(lVar5,uVar9);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar1,lVar2,(ulong)(lVar3 - lVar5) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0x7645657461647055;
  func_0x000107c5fadc(0x7645657461647055,0xeb00000000746e65);
  func_0x0001067cd0d0(uVar4,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  (*pcVar7)(uVar8,uVar9);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x550);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x538);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x530);
  FUN_102f4b608(0x7645657461647055,0xeb00000000746e65,*(undefined8 *)(unaff_x22 + 0x560));
  func_0x000107c61654();
  func_0x000102f54dbc(unaff_x22 + 0x1d0);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102f51578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f51594; end: 102f51637;  */

void FUN_102f51594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x220) = param_4;
  *(undefined8 *)(unaff_x22 + 0x218) = param_3;
  *(undefined8 *)(unaff_x22 + 0x210) = param_2;
  *(undefined8 *)(unaff_x22 + 0x208) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x230) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x240) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x248) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x250) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 600) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x260) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f51638,0,0);
  return;
}



/* Entry: 102f51638; end: 102f5177f;  */

void FUN_102f51638(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x260);
  lVar10 = *(long *)(unaff_x22 + 600);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar11 = *(long *)(unaff_x22 + 0x228);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
  func_0x000107c5eec4(uVar8);
  func_0x000107c5eeac();
  *(undefined8 *)(unaff_x22 + 0x268) = param_2;
  (**(code **)(lVar10 + 8))(uVar8,uVar9);
  func_0x000107c61434(uVar12);
  func_0x000107c5f830(uVar7);
  puVar2 = (undefined8 *)(lVar11 + 0x10);
  func_0x0001000a8868(puVar2,*(undefined8 *)(lVar11 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x1d8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
  func_0x000102f4b994((undefined8 *)(unaff_x22 + 0x148));
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x158);
  piVar6 = *(int **)(*(long *)*puVar2 + 0xc0);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x270) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102f51780;
                    /* WARNING: Could not recover jumptable at 0x000102f5177c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar3,unaff_x22 + 0x1e0,unaff_x22 + 0x1a8,unaff_x22 + 0xe8);
  return;
}



/* Entry: 102f51780; end: 102f517e3;  */

void FUN_102f51780(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x278) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x270));
  func_0x000100e19000(lVar2 + 0x148);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f517e4;
  }
  else {
    pcVar1 = FUN_102f51ac4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f517e4; end: 102f51ac3;  */

void FUN_102f517e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar6 = uRam0000000112f2a100;
  puVar5 = *(undefined8 **)(unaff_x22 + 0x248);
  lVar7 = *(long *)(unaff_x22 + 0x240);
  lVar10 = *(long *)(unaff_x22 + 0x238);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar1 = 0x76456574656c6544;
  func_0x000107c5fadc(0x76456574656c6544,0xeb00000000746e65);
  lVar2 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
  (*UNRECOVERED_JUMPTABLE)(lVar7,uVar8);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar6,uVar1,lVar2,(ulong)(lVar3 - lVar7) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0x76456574656c6544;
  func_0x000107c5fadc(0x76456574656c6544,0xeb00000000746e65);
  uVar4 = 1;
  func_0x0001067ccf5c(uVar6,uVar1,1);
  func_0x000107c61170(uVar1);
  (*UNRECOVERED_JUMPTABLE)(puVar5,uVar8);
  func_0x000102fa623c();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_102f54b20();
    func_0x000107c613f8(&UNK_1105ec4f0,puVar5,0,0);
    *puVar5 = 1;
    puVar5[2] = 0;
    puVar5[1] = 0;
    puVar5[4] = 0;
    puVar5[3] = 0;
    puVar5[5] = 0;
    *(undefined1 *)(puVar5 + 6) = 0xb;
    func_0x000107c61654();
    func_0x000102f54cec(unaff_x22 + 0x1e0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x218);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x268));
    func_0x000107c6142c(uVar4);
    func_0x00010006c090(0,0xc000000000000000);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
    puVar13 = *(undefined8 **)(unaff_x22 + 0x208);
    func_0x000102fa6238();
    FUN_102f4d720(unaff_x22 + 0x10);
    func_0x00010006c090(puVar5,uVar8);
    func_0x000107c61574(uVar4);
    func_0x000102f54cec(unaff_x22 + 0x1e0);
    func_0x000107c6142c(uVar11);
    func_0x000107c6142c(uVar12);
    func_0x00010006c090(0,0xc000000000000000);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar13[1] = *(undefined8 *)(unaff_x22 + 0x18);
    *puVar13 = uVar8;
    puVar13[3] = uVar11;
    puVar13[2] = uVar4;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar13[9] = *(undefined8 *)(unaff_x22 + 0x58);
    puVar13[8] = uVar14;
    puVar13[0xb] = uVar16;
    puVar13[10] = uVar15;
    puVar13[5] = uVar4;
    puVar13[4] = uVar8;
    puVar13[7] = uVar12;
    puVar13[6] = uVar11;
    uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar13[0x11] = *(undefined8 *)(unaff_x22 + 0x98);
    puVar13[0x10] = uVar14;
    puVar13[0x13] = uVar16;
    puVar13[0x12] = uVar15;
    puVar13[0xd] = uVar4;
    puVar13[0xc] = uVar8;
    puVar13[0xf] = uVar12;
    puVar13[0xe] = uVar11;
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
    puVar13[0x1a] = *(undefined8 *)(unaff_x22 + 0xe0);
    puVar13[0x17] = uVar12;
    puVar13[0x16] = uVar11;
    puVar13[0x19] = uVar15;
    puVar13[0x18] = uVar14;
    puVar13[0x15] = uVar4;
    puVar13[0x14] = uVar8;
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102f51aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102f51ac4; end: 102f51c8f;  */

void FUN_102f51ac4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  code *pcVar9;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar5 = uRam0000000112f2a100;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar6 = *(long *)(unaff_x22 + 0x240);
  lVar7 = *(long *)(unaff_x22 + 0x238);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar1 = 0x76456574656c6544;
  func_0x000107c5fadc(0x76456574656c6544,0xeb00000000746e65);
  lVar2 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar3 = lVar2;
  func_0x000107c5f830(lVar6);
  func_0x000107c5f82c();
  pcVar9 = *(code **)(lVar7 + 8);
  (*pcVar9)(lVar6,uVar8);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar5,uVar1,lVar2,(ulong)(lVar3 - lVar6) / 1000000);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar1);
  uVar1 = 0x76456574656c6544;
  func_0x000107c5fadc(0x76456574656c6544,0xeb00000000746e65);
  func_0x0001067cd0d0(uVar5,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61654();
  (*pcVar9)(uVar4,uVar8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x218);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x268));
  func_0x000107c6142c(uVar8);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102f51c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f51c90; end: 102f51d2b;  */

void FUN_102f51c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x1e0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x200) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x208) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x210) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f51d2c,0,0);
  return;
}



/* Entry: 102f51d2c; end: 102f51fc7;  */

void FUN_102f51d2c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined *puVar13;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar12 = *(long *)(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar10 = *(long *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
  FUN_102f7af9c(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c5eec4(uVar11);
  func_0x000107c5eeac();
  (**(code **)(lVar12 + 8))(uVar11,uVar9);
  func_0x000100bcb1dc(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  func_0x000107c61434(uVar5);
  func_0x000100bcb1dc(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar2;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    func_0x000102f5518c(unaff_x22 + 0x1b0,0x112f2a118,&UNK_10db66370);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x1d0);
    FUN_102f54784(0,lVar10,0);
    puVar6 = (undefined8 *)(lVar12 + 0x28);
    do {
      uVar2 = puVar6[-1];
      uVar3 = *puVar6;
      func_0x000107c61438(uVar3,2);
      func_0x000107c61434(0xe900000000000072);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(0xe900000000000072);
      func_0x000107c6142c(uVar3);
      func_0x00010006c090(0,0xc000000000000000);
      uVar4 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
        FUN_102f54784(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
      }
      puVar6 = puVar6 + 2;
      *(ulong *)(puVar13 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x20) = 0x6573752d70616e73;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x28) = 0xe900000000000072;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x30) = uVar2;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x38) = uVar3;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x48) = 0xc000000000000000;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x40) = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000102f5518c(unaff_x22 + 0x1b0,0x112f2a118,&UNK_10db66370);
  }
  lVar10 = *(long *)(unaff_x22 + 0x1d8);
  *(undefined **)(unaff_x22 + 0x178) = puVar13;
  func_0x000107c5f830(*(undefined8 *)(unaff_x22 + 0x1f8));
  puVar6 = (undefined8 *)(lVar10 + 0x10);
  func_0x0001000a8868(puVar6,*(undefined8 *)(lVar10 + 0x28));
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000102f4b994(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  piVar8 = *(int **)(*(long *)*puVar6 + 0xd0);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x218) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102f51fc8;
                    /* WARNING: Could not recover jumptable at 0x000102f51fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar7,unaff_x22 + 0xd0,unaff_x22 + 0x10);
  return;
}



/* Entry: 102f51fc8; end: 102f5203f;  */

void FUN_102f51fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x220) = param_1;
  *(undefined8 *)(lVar2 + 0x228) = param_2;
  *(undefined8 *)(lVar2 + 0x230) = param_3;
  *(undefined8 *)(lVar2 + 0x238) = param_4;
  *(long *)(lVar2 + 0x240) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x218));
  func_0x000100e19000(lVar2 + 0x70);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f52040;
  }
  else {
    pcVar1 = FUN_102f52380;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f52040; end: 102f5237f;  */

void FUN_102f52040(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar12 = uRam0000000112f2a100;
  lVar5 = *(long *)(unaff_x22 + 0x220);
  lVar9 = *(long *)(unaff_x22 + 0x1f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar14 = *(long *)(unaff_x22 + 0x1e8);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f114fb0);
  lVar4 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar6 = lVar4;
  func_0x000107c5f830(lVar9);
  func_0x000107c5f82c();
  pcVar16 = *(code **)(lVar14 + 8);
  (*pcVar16)(lVar9,uVar10);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar12,uVar3,lVar4,(ulong)(lVar6 - lVar9) / 1000000);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f114fb0);
  func_0x0001067ccf5c(uVar12,uVar3,1);
  func_0x000107c61170(uVar3);
  (*pcVar16)(uVar11,uVar10);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar5 + 0x10);
  if (lVar9 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x220);
    func_0x000100403514(0,lVar9,0);
    lVar14 = *(ulong *)(puVar2 + 0x10) << 4;
    puVar15 = (undefined8 *)(lVar6 + 0x38);
    uVar7 = *(ulong *)(puVar2 + 0x10);
    do {
      uVar10 = puVar15[-1];
      uVar11 = *puVar15;
      uVar1 = uVar7 + 1;
      uVar13 = *(ulong *)(puVar2 + 0x18);
      func_0x000107c61434(uVar11);
      if (uVar13 >> 1 <= uVar7) {
        func_0x000100403514(1 < uVar13,uVar1,1);
      }
      puVar15 = puVar15 + 6;
      *(ulong *)(puVar2 + 0x10) = uVar1;
      *(undefined8 *)(puVar2 + lVar14 + 0x20) = uVar10;
      *(undefined8 *)(puVar2 + lVar14 + 0x28) = uVar11;
      lVar14 = lVar14 + 0x10;
      lVar9 = lVar9 + -1;
      uVar7 = uVar1;
    } while (lVar9 != 0);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = *(long *)(unaff_x22 + 0x228);
  lVar9 = *(long *)(lVar14 + 0x10);
  if (lVar9 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c6142c(lVar14);
    func_0x00010006c090(uVar11,uVar10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,lVar9,0);
    lVar6 = *(ulong *)(puVar8 + 0x10) << 4;
    puVar15 = (undefined8 *)(lVar14 + 0x38);
    uVar7 = *(ulong *)(puVar8 + 0x10);
    do {
      uVar10 = puVar15[-1];
      uVar11 = *puVar15;
      uVar1 = uVar7 + 1;
      uVar13 = *(ulong *)(puVar8 + 0x18);
      func_0x000107c61434(uVar11);
      if (uVar13 >> 1 <= uVar7) {
        func_0x000100403514(1 < uVar13,uVar1,1);
      }
      puVar15 = puVar15 + 6;
      *(ulong *)(puVar8 + 0x10) = uVar1;
      *(undefined8 *)(puVar8 + lVar6 + 0x20) = uVar10;
      *(undefined8 *)(puVar8 + lVar6 + 0x28) = uVar11;
      lVar6 = lVar6 + 0x10;
      lVar9 = lVar9 + -1;
      uVar7 = uVar1;
    } while (lVar9 != 0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c6142c(uVar12);
    func_0x00010006c090(uVar11,uVar10);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f8);
  func_0x000102f54cb8(unaff_x22 + 0x150);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000102f52364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2,puVar8);
  return;
}



/* Entry: 102f52380; end: 102f5251b;  */

void FUN_102f52380(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  code *pcVar10;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar1 = *(long *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar8 = *(long *)(unaff_x22 + 0x1e8);
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f114fb0);
  lVar6 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar7 = lVar6;
  func_0x000107c5f830(lVar1);
  func_0x000107c5f82c();
  pcVar10 = *(code **)(lVar8 + 8);
  lVar8 = lVar1;
  (*pcVar10)(lVar1,uVar2);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar5,lVar6,(ulong)(lVar7 - lVar8) / 1000000);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  uVar5 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f114fb0);
  func_0x0001067cd0d0(uVar4,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x000107c61654();
  (*pcVar10)(uVar3,uVar2);
  func_0x000102f54cb8(unaff_x22 + 0x150);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f52500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f5251c; end: 102f52597;  */

void FUN_102f5251c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x220) = param_4;
  *(undefined8 *)(unaff_x22 + 0x218) = param_3;
  *(undefined8 *)(unaff_x22 + 0x210) = param_2;
  *(undefined8 *)(unaff_x22 + 0x208) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x230) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x238) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x240) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x248) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f52598,0,0);
  return;
}



/* Entry: 102f52598; end: 102f5269f;  */

void FUN_102f52598(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar8 = *(long *)(unaff_x22 + 0x228);
  lVar9 = *(long *)(unaff_x22 + 0x220);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = 0;
  if (lVar9 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x218);
  }
  lVar2 = -0x2000000000000000;
  if (lVar9 != 0) {
    lVar2 = lVar9;
  }
  func_0x000107c61434(uVar10);
  func_0x000107c61434(lVar9);
  func_0x000107c5f830(uVar7);
  puVar4 = (undefined8 *)(lVar8 + 0x10);
  func_0x0001000a8868(puVar4,*(undefined8 *)(lVar8 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar1;
  *(long *)(unaff_x22 + 0x1c8) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x1d8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
  func_0x000102f4b994(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x160);
  piVar6 = *(int **)(*(long *)*puVar4 + 0xd8);
  iVar3 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x250) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102f526a0;
                    /* WARNING: Could not recover jumptable at 0x000102f5269c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar3 + (long)piVar6))
            (plVar5,unaff_x22 + 0x1e0,unaff_x22 + 0x1b0,unaff_x22 + 0xf0);
  return;
}



/* Entry: 102f526a0; end: 102f52703;  */

void FUN_102f526a0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 600) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x250));
  func_0x000100e19000(lVar2 + 0x150);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f52704;
  }
  else {
    pcVar1 = FUN_102f52a88;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f52704; end: 102f52a87;  */

void FUN_102f52704(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar13 = uRam0000000112f2a100;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar11 = *(long *)(unaff_x22 + 0x240);
  lVar17 = *(long *)(unaff_x22 + 0x238);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f114f90);
  lVar6 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar16 = lVar6;
  func_0x000107c5f830(lVar11);
  func_0x000107c5f82c();
  pcVar18 = *(code **)(lVar17 + 8);
  (*pcVar18)(lVar11,uVar14);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar13,uVar5,lVar6,(ulong)(lVar16 - lVar11) / 1000000);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  uVar5 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f114f90);
  func_0x0001067ccf5c(uVar13,uVar5,1);
  func_0x000107c61170(uVar5);
  (*pcVar18)(uVar10,uVar14);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = *(long *)(unaff_x22 + 0x1e0);
  lVar16 = *(long *)(lVar6 + 0x10);
  if (lVar16 != 0) {
    func_0x000102f547a0(0,lVar16,0);
    puVar15 = (undefined8 *)(lVar6 + 0x20);
    do {
      uVar5 = puVar15[1];
      uVar13 = *puVar15;
      uVar14 = puVar15[3];
      uVar10 = puVar15[2];
      uVar12 = puVar15[4];
      *(undefined8 *)(unaff_x22 + 0x38) = puVar15[5];
      *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
      uVar8 = puVar15[7];
      uVar12 = puVar15[6];
      uVar20 = puVar15[9];
      uVar19 = puVar15[8];
      uVar21 = puVar15[10];
      uVar23 = puVar15[0xd];
      uVar22 = puVar15[0xc];
      *(undefined8 *)(unaff_x22 + 0x68) = puVar15[0xb];
      *(undefined8 *)(unaff_x22 + 0x60) = uVar21;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar23;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x10) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
      uVar2 = *(ulong *)(unaff_x22 + 0x40);
      uVar3 = *(ulong *)(unaff_x22 + 0x48);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
      uVar1 = uVar3;
      uVar7 = uVar2;
      uVar5 = uVar14;
      uVar13 = uVar10;
      if (0xe < uVar3 >> 0x3c) {
        uVar13 = 0;
        uVar5 = 0;
        uVar7 = 0;
        uVar1 = 0xc000000000000000;
      }
      func_0x000102f54c48(unaff_x22 + 0x10,unaff_x22 + 0x80);
      func_0x000100d2cb48(uVar10,uVar14,uVar2,uVar3);
      func_0x000103ee3894();
      func_0x00010006c090(uVar7,uVar1);
      FUN_102f7a958();
      if ((uVar7 & 1) == 0) {
        uVar14 = 0;
        uVar10 = 0xe000000000000000;
      }
      else {
        lVar6 = *(long *)(unaff_x22 + 0x58);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
        if (lVar6 == 0) {
          uVar14 = 0;
          uVar12 = 0;
          uVar8 = 0xc000000000000000;
          lVar6 = -0x2000000000000000;
          uVar10 = 0xe000000000000000;
        }
        FUN_102f54bc8(*(undefined8 *)(unaff_x22 + 0x50));
        func_0x000107c6142c(lVar6);
        func_0x00010006c090(uVar12,uVar8);
      }
      func_0x000102f54b94(unaff_x22 + 0x10);
      uVar9 = (undefined1)*(ulong *)(unaff_x22 + 0x10);
      if (3 < *(ulong *)(unaff_x22 + 0x10) && *(char *)(unaff_x22 + 0x18) != '\x01') {
        uVar9 = 0;
      }
      uVar7 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar7) {
        func_0x000102f547a0(1 < *(ulong *)(puVar4 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar7 + 1;
      *(undefined8 *)(puVar4 + uVar7 * 0x28 + 0x20) = uVar5;
      *(undefined8 *)(puVar4 + uVar7 * 0x28 + 0x28) = uVar13;
      *(undefined8 *)(puVar4 + uVar7 * 0x28 + 0x30) = uVar14;
      *(undefined8 *)(puVar4 + uVar7 * 0x28 + 0x38) = uVar10;
      puVar4[uVar7 * 0x28 + 0x40] = uVar9;
      puVar15 = puVar15 + 0xe;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar16 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 0x220) != 0) {
    lVar16 = *(long *)(unaff_x22 + 0x220);
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1f0);
  func_0x000107c61434(uVar12);
  func_0x000102f54c84(unaff_x22 + 0x1e0);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(lVar16);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102f52a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4,uVar14,uVar12);
  return;
}



/* Entry: 102f52a88; end: 102f52c4b;  */

void FUN_102f52a88(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar2 = uRam0000000112f2a100;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar7 = *(long *)(unaff_x22 + 0x240);
  lVar9 = *(long *)(unaff_x22 + 0x238);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar1 = -0x2000000000000000;
  if (*(long *)(unaff_x22 + 0x220) != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x220);
  }
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f114f90);
  lVar4 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar5 = lVar4;
  func_0x000107c5f830(lVar7);
  func_0x000107c5f82c();
  pcVar10 = *(code **)(lVar9 + 8);
  lVar9 = lVar7;
  (*pcVar10)(lVar7,uVar8);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar2,uVar3,lVar4,(ulong)(lVar5 - lVar9) / 1000000);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f114f90);
  func_0x0001067cd0d0(uVar2,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
  (*pcVar10)(uVar11,uVar8);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(lVar1);
  func_0x00010006c090(0,0xc000000000000000);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(lVar7);
                    /* WARNING: Could not recover jumptable at 0x000102f52c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f52c4c; end: 102f52ce7;  */

void FUN_102f52c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x1e0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x200) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x208) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x210) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f52ce8,0,0);
  return;
}



/* Entry: 102f52ce8; end: 102f52f83;  */

void FUN_102f52ce8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined *puVar13;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar12 = *(long *)(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar10 = *(long *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1c0);
  func_0x000102fa5294(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c5eec4(uVar11);
  func_0x000107c5eeac();
  (**(code **)(lVar12 + 8))(uVar11,uVar9);
  func_0x000100bcb1dc(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x150) = param_1;
  *(undefined8 *)(unaff_x22 + 0x158) = param_2;
  func_0x000107c61434(uVar5);
  func_0x000100bcb1dc(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar2;
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar10 = *(long *)(lVar10 + 0x10);
  if (lVar10 == 0) {
    func_0x000102f5518c(unaff_x22 + 0x1b0,0x112f2a118,&UNK_10db66370);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x1d0);
    FUN_102f54784(0,lVar10,0);
    puVar6 = (undefined8 *)(lVar12 + 0x28);
    do {
      uVar2 = puVar6[-1];
      uVar3 = *puVar6;
      func_0x000107c61438(uVar3,2);
      func_0x000107c61434(0xe900000000000072);
      func_0x00010006c00c(0,0xc000000000000000);
      func_0x000107c6142c(0xe900000000000072);
      func_0x000107c6142c(uVar3);
      func_0x00010006c090(0,0xc000000000000000);
      uVar4 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
        FUN_102f54784(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
      }
      puVar6 = puVar6 + 2;
      *(ulong *)(puVar13 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x20) = 0x6573752d70616e73;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x28) = 0xe900000000000072;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x30) = uVar2;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x38) = uVar3;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x48) = 0xc000000000000000;
      *(undefined8 *)(puVar13 + uVar4 * 0x30 + 0x40) = 0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000102f5518c(unaff_x22 + 0x1b0,0x112f2a118,&UNK_10db66370);
  }
  lVar10 = *(long *)(unaff_x22 + 0x1d8);
  *(undefined **)(unaff_x22 + 0x178) = puVar13;
  func_0x000107c5f830(*(undefined8 *)(unaff_x22 + 0x1f8));
  puVar6 = (undefined8 *)(lVar10 + 0x10);
  func_0x0001000a8868(puVar6,*(undefined8 *)(lVar10 + 0x28));
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x180);
  func_0x000102f4b994(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  piVar8 = *(int **)(*(long *)*puVar6 + 0xe0);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x218) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102f52f84;
                    /* WARNING: Could not recover jumptable at 0x000102f52f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar7,unaff_x22 + 0xd0,unaff_x22 + 0x10);
  return;
}



/* Entry: 102f52f84; end: 102f52ffb;  */

void FUN_102f52f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x220) = param_1;
  *(undefined8 *)(lVar2 + 0x228) = param_2;
  *(undefined8 *)(lVar2 + 0x230) = param_3;
  *(undefined8 *)(lVar2 + 0x238) = param_4;
  *(long *)(lVar2 + 0x240) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x218));
  func_0x000100e19000(lVar2 + 0x70);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f52ffc;
  }
  else {
    pcVar1 = FUN_102f5333c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f52ffc; end: 102f5333b;  */

void FUN_102f52ffc(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar12 = uRam0000000112f2a100;
  lVar5 = *(long *)(unaff_x22 + 0x220);
  lVar9 = *(long *)(unaff_x22 + 0x1f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar14 = *(long *)(unaff_x22 + 0x1e8);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f114f70);
  lVar4 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar6 = lVar4;
  func_0x000107c5f830(lVar9);
  func_0x000107c5f82c();
  pcVar16 = *(code **)(lVar14 + 8);
  (*pcVar16)(lVar9,uVar10);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar12,uVar3,lVar4,(ulong)(lVar6 - lVar9) / 1000000);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f114f70);
  func_0x0001067ccf5c(uVar12,uVar3,1);
  func_0x000107c61170(uVar3);
  (*pcVar16)(uVar11,uVar10);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(lVar5 + 0x10);
  if (lVar9 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x220);
    func_0x000100403514(0,lVar9,0);
    lVar14 = *(ulong *)(puVar2 + 0x10) << 4;
    puVar15 = (undefined8 *)(lVar6 + 0x38);
    uVar7 = *(ulong *)(puVar2 + 0x10);
    do {
      uVar10 = puVar15[-1];
      uVar11 = *puVar15;
      uVar1 = uVar7 + 1;
      uVar13 = *(ulong *)(puVar2 + 0x18);
      func_0x000107c61434(uVar11);
      if (uVar13 >> 1 <= uVar7) {
        func_0x000100403514(1 < uVar13,uVar1,1);
      }
      puVar15 = puVar15 + 6;
      *(ulong *)(puVar2 + 0x10) = uVar1;
      *(undefined8 *)(puVar2 + lVar14 + 0x20) = uVar10;
      *(undefined8 *)(puVar2 + lVar14 + 0x28) = uVar11;
      lVar14 = lVar14 + 0x10;
      lVar9 = lVar9 + -1;
      uVar7 = uVar1;
    } while (lVar9 != 0);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = *(long *)(unaff_x22 + 0x228);
  lVar9 = *(long *)(lVar14 + 0x10);
  if (lVar9 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c6142c(lVar14);
    func_0x00010006c090(uVar11,uVar10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,lVar9,0);
    lVar6 = *(ulong *)(puVar8 + 0x10) << 4;
    puVar15 = (undefined8 *)(lVar14 + 0x38);
    uVar7 = *(ulong *)(puVar8 + 0x10);
    do {
      uVar10 = puVar15[-1];
      uVar11 = *puVar15;
      uVar1 = uVar7 + 1;
      uVar13 = *(ulong *)(puVar8 + 0x18);
      func_0x000107c61434(uVar11);
      if (uVar13 >> 1 <= uVar7) {
        func_0x000100403514(1 < uVar13,uVar1,1);
      }
      puVar15 = puVar15 + 6;
      *(ulong *)(puVar8 + 0x10) = uVar1;
      *(undefined8 *)(puVar8 + lVar6 + 0x20) = uVar10;
      *(undefined8 *)(puVar8 + lVar6 + 0x28) = uVar11;
      lVar6 = lVar6 + 0x10;
      lVar9 = lVar9 + -1;
      uVar7 = uVar1;
    } while (lVar9 != 0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x220));
    func_0x000107c6142c(uVar12);
    func_0x00010006c090(uVar11,uVar10);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f8);
  FUN_102f54c14(unaff_x22 + 0x150);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000102f53320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar2,puVar8);
  return;
}



/* Entry: 102f5333c; end: 102f534d7;  */

void FUN_102f5333c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  code *pcVar10;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar4 = uRam0000000112f2a100;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar1 = *(long *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar8 = *(long *)(unaff_x22 + 0x1e8);
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f114f70);
  lVar6 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  lVar7 = lVar6;
  func_0x000107c5f830(lVar1);
  func_0x000107c5f82c();
  pcVar10 = *(code **)(lVar8 + 8);
  lVar8 = lVar1;
  (*pcVar10)(lVar1,uVar2);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar4,uVar5,lVar6,(ulong)(lVar7 - lVar8) / 1000000);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar5);
  uVar5 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f114f70);
  func_0x0001067cd0d0(uVar4,uVar5,1);
  func_0x000107c61170(uVar5);
  func_0x000107c61654();
  (*pcVar10)(uVar3,uVar2);
  FUN_102f54c14(unaff_x22 + 0x150);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102f534bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102f534d8; end: 102f53547;  */

void FUN_102f534d8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x288) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x280) = param_1;
  lVar1 = 0;
  func_0x000107c5f83c();
  *(long *)(unaff_x22 + 0x290) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x298) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2a0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x2a8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f53548,0,0);
  return;
}



/* Entry: 102f53548; end: 102f53813;  */

void FUN_102f53548(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x280);
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined8 *)(unaff_x22 + 0xd8) = 0xe000000000000000;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined1 *)(unaff_x22 + 0xe8) = 1;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0;
  uVar12 = *puVar9;
  *(undefined8 *)(unaff_x22 + 0x220) = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x218) = uVar12;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar11;
  uVar12 = puVar9[2];
  uVar3 = puVar9[3];
  *(undefined8 *)(unaff_x22 + 0x2b8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x128) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  func_0x000100402194((undefined8 *)(unaff_x22 + 0x218),unaff_x22 + 0x248);
  func_0x000107c61438(uVar3,2);
  func_0x000107c61434(uVar11);
  func_0x00010006c00c(0,0xc000000000000000);
  FUN_102f545f0(0,0,0,0,0,0);
  uVar11 = puVar9[4];
  uVar4 = puVar9[5];
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  uVar2 = puVar9[6];
  uVar5 = puVar9[7];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  uVar7 = puVar9[8];
  *(undefined8 *)(unaff_x22 + 0x230) = puVar9[9];
  *(undefined8 *)(unaff_x22 + 0x228) = uVar7;
  uVar7 = puVar9[8];
  *(undefined8 *)(unaff_x22 + 200) = puVar9[9];
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar7;
  uVar7 = puVar9[10];
  *(undefined8 *)(unaff_x22 + 0x240) = puVar9[0xb];
  *(undefined8 *)(unaff_x22 + 0x238) = uVar7;
  if (*(long *)(unaff_x22 + 0x240) != 0) {
    *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x238);
    *(long *)(unaff_x22 + 0xd8) = *(long *)(unaff_x22 + 0x240);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2a8);
  lVar10 = *(long *)(unaff_x22 + 0x288);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000100402194((undefined8 *)(unaff_x22 + 0x228),unaff_x22 + 600);
  FUN_102f55004((undefined8 *)(unaff_x22 + 0x238),unaff_x22 + 0x268,0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c602fc(0x46);
  func_0x000107c5fb78(0xd00000000000002c,0x800000010f114ed0);
  func_0x000107c5fb78(uVar12,uVar3);
  func_0x000107c5fb78(0x6144747261747320,0xeb000000003d6574);
  func_0x000107c5fb78(uVar11,uVar4);
  func_0x000107c5fb78(0x65746144646e6520,0xe90000000000003d);
  func_0x000107c5fb78(uVar2,uVar5);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5f830(uVar7);
  puVar9 = (undefined8 *)(lVar10 + 0x10);
  func_0x0001000a8868(puVar9,*(undefined8 *)(lVar10 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000102f4b994(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x1e8);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x1a0);
  piVar8 = *(int **)(*(long *)*puVar9 + 0xb0);
  iVar1 = *piVar8;
  plVar6 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2c0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102f53814;
                    /* WARNING: Could not recover jumptable at 0x000102f53810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar6,unaff_x22 + 0x1f0,unaff_x22 + 0x10,unaff_x22 + 0x130);
  return;
}



/* Entry: 102f53814; end: 102f53877;  */

void FUN_102f53814(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2c0));
  func_0x000100e19000(lVar2 + 400);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102f53878;
  }
  else {
    pcVar1 = FUN_102f53b70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102f53878; end: 102f53b6f;  */

void FUN_102f53878(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  code *pcVar17;
  
  if (lRam0000000112f2a0f8 != -1) {
    func_0x000107c61568(0x112f2a0f8,FUN_102f4b5e0);
  }
  uVar3 = uRam0000000112f2a100;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2a8);
  lVar9 = *(long *)(unaff_x22 + 0x2a0);
  lVar16 = *(long *)(unaff_x22 + 0x298);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f114f00);
  lVar5 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  lVar8 = lVar5;
  func_0x000107c5f830(lVar9);
  func_0x000107c5f82c();
  pcVar17 = *(code **)(lVar16 + 8);
  (*pcVar17)(lVar9,uVar10);
  func_0x000107c5f82c();
  func_0x0001067ccd2c(uVar3,uVar4,lVar5,(ulong)(lVar8 - lVar9) / 1000000);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar4);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f114f00);
  func_0x0001067ccf5c(uVar3,uVar4,1);
  func_0x000107c61170(uVar4);
  (*pcVar17)(uVar7,uVar10);
  func_0x000107c602fc(0x31);
  func_0x000107c6142c(0xe000000000000000);
  lVar5 = *(long *)(unaff_x22 + 0x1f0);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(lVar5 + 0x10);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(0x800000010f114f20);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar8 = *(long *)(lVar5 + 0x10);
  if (lVar8 != 0) {
    func_0x0001012b58b0(0,lVar8,0);
    lVar9 = *(ulong *)(puVar6 + 0x10) * 0x20 + 0x38;
    puVar15 = (undefined8 *)(lVar5 + 0x38);
    uVar11 = *(ulong *)(puVar6 + 0x10);
    do {
      uVar3 = puVar15[-3];
      uVar7 = puVar15[-2];
      uVar4 = puVar15[-1];
      uVar10 = *puVar15;
      uVar1 = uVar11 + 1;
      uVar12 = *(ulong *)(puVar6 + 0x18);
      func_0x000107c61434(uVar7);
      if (uVar12 >> 1 <= uVar11) {
        func_0x0001012b58b0(1 < uVar12,uVar1,1);
      }
      puVar15 = puVar15 + 8;
      *(ulong *)(puVar6 + 0x10) = uVar1;
      puVar2 = (undefined8 *)(puVar6 + lVar9);
      puVar2[-3] = uVar3;
      puVar2[-2] = uVar7;
      lVar9 = lVar9 + 0x20;
      puVar2[-1] = uVar4;
      *puVar2 = uVar10;
      lVar8 = lVar8 + -1;
      uVar11 = uVar1;
    } while (lVar8 != 0);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x200);
  func_0x000107c61434(uVar4);
  FUN_102f54750(unaff_x22 + 0x1f0);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(uVar7);
  func_0x00010006c090(0,0xc000000000000000);
  FUN_102f5463c(unaff_x22 + 0xa0);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000102f53b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6,uVar3,uVar4);
  return;
}


