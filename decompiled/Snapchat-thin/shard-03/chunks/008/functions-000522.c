/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102cc86e0; end: 102cc875f;  */

undefined * FUN_102cc86e0(undefined *param_1,undefined *param_2)

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
    FUN_102cc8270();
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



/* Entry: 102cc8760; end: 102cc884f;  */

long FUN_102cc8760(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1;
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc884c);
      (*pcVar2)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc8850);
        (*pcVar2)();
      }
      lVar3 = param_1;
      FUN_102cca8d4();
      lVar4 = param_1;
      do {
        lVar5 = lVar4 + 1;
        func_0x000107c60318(lVar4,param_4,lVar3);
        lVar4 = lVar5;
      } while (param_2 != lVar5);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      FUN_102cca8d4();
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,lVar5);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc8848);
    (*pcVar2)();
  }
  uVar1 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar1 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar1);
  return param_1;
}



/* Entry: 102cc8850; end: 102cc8b07;  */

void FUN_102cc8850(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f0ac48,&UNK_10db3db68);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_102cc892c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c6157c();
        if (uVar6 != 0) break;
LAB_102cc892c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc89ac);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_102cc8984;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102cc8984:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102cc8b08; end: 102cc8c43;  */

void FUN_102cc8b08(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8();
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_102cc8bd0;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_102cc8bd0:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102cc8c44);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_102cc8c24;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_102cc8c24:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 102cc8c44; end: 102cc8efb;  */

void FUN_102cc8c44(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f0ac60,&UNK_10db3db88);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar9 + 0x40);
    if (uVar5 == 0) goto LAB_102cc8d20;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar8;
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_102cc8d20:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc8da0);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_102cc8d78;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_102cc8d78:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 102cc8efc; end: 102cc9adb;  */

void FUN_102cc8efc(long param_1,ulong param_2)

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
  uVar13 = 0x112f0ac48;
  func_0x0001000285a8(0x112f0ac48,&UNK_10db3db68);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar13);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_102cc912c:
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc915c);
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
          goto LAB_102cc912c;
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
      func_0x000107c6157c(uVar13);
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102cc9160);
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



/* Entry: 102cc9adc; end: 102cca0d3;  */

void FUN_102cc9adc(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000100d23580();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc9ba0);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_102cc8efc(lVar5);
    uVar2 = param_2;
    func_0x000100d23580();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc9b6c);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_102cc8850();
    lVar5 = *unaff_x20;
    goto joined_r0x000102cc9bb4;
  }
  lVar5 = *unaff_x20;
joined_r0x000102cc9bb4:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc9c0c);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 102cca0d4; end: 102cca3ab;  */

void FUN_102cca0d4(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_102cca19c:
          puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar2 + 1 <= puVar3 || param_1 != uVar8)) {
            *puVar3 = *puVar2;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar3 + 1 <= puVar2 || param_1 != uVar8)) {
            *puVar2 = *puVar3;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_102cca19c;
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102cca240);
  (*pcVar5)();
}



/* Entry: 102cca3ac; end: 102cca3fb;  */

/* WARNING: Removing unreachable block (ram,0x000102cc85ec) */
/* WARNING: Removing unreachable block (ram,0x000102cc8610) */
/* WARNING: Removing unreachable block (ram,0x000102cc85f4) */
/* WARNING: Removing unreachable block (ram,0x000102cc86dc) */
/* WARNING: Removing unreachable block (ram,0x000102cc8600) */
/* WARNING: Removing unreachable block (ram,0x000102cc8608) */
/* WARNING: Removing unreachable block (ram,0x000102cc864c) */
/* WARNING: Removing unreachable block (ram,0x000102cc8660) */
/* WARNING: Removing unreachable block (ram,0x000102cc866c) */
/* WARNING: Removing unreachable block (ram,0x000102cc8674) */

ulong FUN_102cca3ac(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_102cc86e0(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_102cc8760(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cc86dc);
  (*pcVar1)();
}



/* Entry: 102cca3fc; end: 102cca8c3;  */

undefined * FUN_102cca3fc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  if (puVar8 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar5 = 0;
  func_0x0001000285a8(0x112f0ac68);
  puVar2 = puVar8;
  func_0x000107c60498();
  uVar9 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar9;
  func_0x000100d23580();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar9;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cca500);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar9 = puVar6[-1];
      uVar4 = *puVar6;
      func_0x000107c61174();
      uVar3 = uVar9;
      func_0x000100d23580();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cca4d0);
  (*pcVar1)();
}



/* Entry: 102cca8c4; end: 102cca8d3;  */

void FUN_102cca8c4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 102cca8d4; end: 102cca957;  */

void FUN_102cca8d4(void)

{
  func_0x000107c61168(&PTR_PTR_112f0abe0);
  return;
}



/* Entry: 102cca958; end: 102cca97f;  */

void FUN_102cca958(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cca964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102cca980; end: 102cca9bf;  */

void FUN_102cca980(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3dba0;
  func_0x000107c61520(&UNK_10db3dba0,&UNK_1105bead8);
  puRam0000000112f0ac70 = puVar1;
  return;
}



/* Entry: 102cca9c0; end: 102ccaa6b;  */

void FUN_102cca9c0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102ccaa6c; end: 102ccab73;  */

void FUN_102ccaa6c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_2;
  lVar1 = 0;
  if (lVar3 == 0x5a) {
    lVar1 = lVar3;
  }
  lVar2 = lVar3;
  if (lVar3 != 0 && lVar3 != 1000000) {
    lVar2 = lVar1;
  }
  *param_1 = lVar2;
  *(bool *)(param_1 + 1) = (lVar3 != 0 && lVar3 != 1000000) && lVar3 != 0x5a;
  return;
}



/* Entry: 102ccab74; end: 102ccabcf; -[SCOperaPageViewModelPositionVector compareTo:] */

undefined8 FUN_102ccab74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102ccaacc(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102ccabd0; end: 102ccaf8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102ccabd0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(*param_1 + _DAT_11307a9d8);
  uVar2 = *(ulong *)(*param_2 + _DAT_11307a9d8);
  if (uVar1 == uVar2) {
    uVar1 = *(long *)(*param_1 + _DAT_11307a9c8) - 1;
    if (uVar1 < 3) {
      uVar1 = *(ulong *)(&UNK_10db3de28 + uVar1 * 8);
    }
    else {
      uVar1 = 0;
    }
    uVar2 = *(long *)(*param_2 + _DAT_11307a9c8) - 1;
    if (uVar2 < 3) {
      uVar2 = *(ulong *)(&UNK_10db3de28 + uVar2 * 8);
    }
    else {
      uVar2 = 0;
    }
    return uVar1 < uVar2;
  }
  return uVar2 < uVar1;
}



/* Entry: 102ccaf8c; end: 102ccafd3;  */

void FUN_102ccaf8c(void)

{
  FUN_102ccafd4(0x112f0ac78,&SUB_104452240);
  return;
}



/* Entry: 102ccafd4; end: 102ccb013;  */

void FUN_102ccafd4(long *param_1,code *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
    func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Entry: 102ccb014; end: 102ccb017;  */

void FUN_102ccb014(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd007e0;
  func_0x000107c61520(&UNK_10dd007e0,&UNK_110770728);
  puRam0000000112f0ac88 = puVar1;
  return;
}



/* Entry: 102ccb018; end: 102ccb057;  */

void FUN_102ccb018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd007e0;
  func_0x000107c61520(&UNK_10dd007e0,&UNK_110770728);
  puRam0000000112f0ac88 = puVar1;
  return;
}



/* Entry: 102ccb058; end: 102ccb05b;  */

void FUN_102ccb058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00880;
  func_0x000107c61520(&UNK_10dd00880,&UNK_110770748);
  puRam0000000112f0ac90 = puVar1;
  return;
}



/* Entry: 102ccb05c; end: 102ccb09b;  */

void FUN_102ccb05c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00880;
  func_0x000107c61520(&UNK_10dd00880,&UNK_110770748);
  puRam0000000112f0ac90 = puVar1;
  return;
}



/* Entry: 102ccb09c; end: 102ccb09f;  */

void FUN_102ccb09c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00920;
  func_0x000107c61520(&UNK_10dd00920,&UNK_110770768);
  puRam0000000112f0ac98 = puVar1;
  return;
}



/* Entry: 102ccb0a0; end: 102ccb0df;  */

void FUN_102ccb0a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ac98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd00920;
  func_0x000107c61520(&UNK_10dd00920,&UNK_110770768);
  puRam0000000112f0ac98 = puVar1;
  return;
}



/* Entry: 102ccb0e0; end: 102ccb0f7;  */

void FUN_102ccb0e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSLsE2leoiySbx_xtFZ_11034d870)();
  return;
}



/* Entry: 102ccb0f8; end: 102ccb13f; -[SCOperaVideoPlayerPreloadPriorityRanker preloadStrategy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccb0f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0aca0;
  func_0x000107c61428(param_1 + _DAT_112f0aca0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102ccb140; end: 102ccb1a3; -[SCOperaVideoPlayerPreloadPriorityRanker setPreloadStrategy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccb140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0aca0;
  func_0x000107c61428(param_1 + _DAT_112f0aca0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102ccb1a4; end: 102ccb1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccb1a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f0aca0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ccb1f0; end: 102ccb247; -[SCOperaVideoPlayerPreloadPriorityRanker initWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccb1f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f0aca0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102ccb248; end: 102ccbdcf;  */

/* WARNING: Removing unreachable block (ram,0x000102ccbdc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102ccb248(ulong param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puStack_80;
  undefined *apuStack_78 [3];
  
  uVar22 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar20 = *(ulong *)(uVar22 + 0x10);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar20 = uVar22;
    if (0x7fffffffffffffff < param_1) {
      uVar20 = param_1;
    }
    func_0x000107c60480();
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar13;
  if (uVar20 != 0) {
    uVar18 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar22 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccb394);
            (*pcVar2)();
          }
          uVar4 = *(ulong *)(param_1 + uVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar4 = uVar18;
          FUN_102ccc44c(uVar18,param_1);
        }
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccb390);
          (*pcVar2)();
        }
        uVar23 = uVar18 + 1;
        if (*(long *)(uVar4 + _DAT_11307aa18) != 3) break;
        puVar11 = puVar13;
        func_0x000107c61558();
        apuStack_78[0] = puVar13;
        if (((ulong)puVar11 & 1) == 0) {
          FUN_102ccd6f8(0,*(long *)(puVar13 + 0x10) + 1,1);
        }
        uVar18 = *(ulong *)(apuStack_78[0] + 0x10);
        if (*(ulong *)(apuStack_78[0] + 0x18) >> 1 <= uVar18) {
          FUN_102ccd6f8(1 < *(ulong *)(apuStack_78[0] + 0x18),uVar18 + 1,1);
        }
        *(ulong *)(apuStack_78[0] + 0x10) = uVar18 + 1;
        *(ulong *)(apuStack_78[0] + uVar18 * 8 + 0x20) = uVar4;
        puVar13 = apuStack_78[0];
        uVar18 = uVar23;
        if (uVar23 == uVar20) goto LAB_102ccb3b0;
      }
      func_0x000107c61170();
      uVar18 = uVar18 + 1;
    } while (uVar23 != uVar20);
  }
LAB_102ccb3b0:
  lVar19 = _DAT_112f0aca0;
  uVar22 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112f0aca0,apuStack_78,0);
  lVar17 = *(long *)(*(long *)(unaff_x20 + lVar19) + _DAT_11307a988);
  puVar11 = (undefined *)(lVar17 - (param_2 & 1));
  if (SBORROW8(lVar17,param_2 & 1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbcac);
    (*pcVar2)();
  }
  if (((long)puVar13 < 0) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
    puVar14 = puVar13;
    func_0x000107c60480();
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c6157c(puVar13);
      puVar24 = puVar14;
      FUN_102ccc2d4(puVar14,0);
      puVar6 = puVar13;
      FUN_102ccd838(puVar24 + 0x20,puVar14);
      func_0x000107c6142c();
      puStack_80 = puVar24;
      if (puVar6 != puVar14) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd3c);
        (*pcVar2)();
      }
    }
  }
  else {
    func_0x000107c6157c(puVar13);
    puStack_80 = puVar13;
  }
  FUN_102ccbeb4(&puStack_80);
  func_0x000107c61574(puVar13);
  puVar13 = puStack_80;
  uVar15 = (uint)((ulong)puStack_80 >> 0x3e) & 1;
  if ((long)puStack_80 < 0) {
    uVar15 = 1;
  }
  puVar14 = puVar11;
  if (uVar15 == 1) {
    puVar24 = puStack_80;
    func_0x000107c60480();
    if ((long)puVar24 <= (long)puVar11) {
      puVar14 = puVar24;
    }
    if ((long)puVar14 < 0) goto LAB_102ccbcec;
    puVar6 = puVar13;
    func_0x000107c60480();
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbdc4);
      (*pcVar2)();
    }
    puVar6 = puVar13;
    func_0x000107c60480();
    bVar3 = (long)puVar11 < (long)puVar24;
    if ((long)puVar6 < (long)puVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbcec);
      (*pcVar2)();
    }
  }
  else {
    if ((long)puVar11 < 0) {
LAB_102ccbcec:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbcf0);
      (*pcVar2)();
    }
    bVar3 = puVar11 < *(undefined **)(puStack_80 + 0x10);
    if (!bVar3) {
      puVar14 = *(undefined **)(puStack_80 + 0x10);
    }
  }
  if ((((ulong)puVar13 & 0xc000000000000001) == 0) || (puVar14 == (undefined *)0x0)) {
    func_0x000107c61434(puVar13);
  }
  else {
    uVar5 = 0;
    func_0x000104452240(0);
    func_0x000107c61434(puVar13);
    puVar11 = (undefined *)0x0;
    do {
      puVar24 = puVar11 + 1;
      func_0x000107c60318(puVar11,puVar13,uVar5);
      puVar11 = puVar24;
    } while (puVar14 != puVar24);
  }
  if (uVar15 == 0) {
    puVar24 = (undefined *)0x0;
    puVar11 = puVar13 + 0x20;
    puVar6 = puVar13;
    puVar12 = puVar14;
  }
  else {
    func_0x000107c61574(puVar13);
    puVar6 = (undefined *)0x0;
    puVar11 = puVar14;
    puVar24 = puVar13;
    func_0x000107c60484();
    puVar12 = (undefined *)(uVar22 >> 1);
  }
  func_0x000107c615f0(puVar6);
  puVar7 = puVar24;
  puVar9 = puVar24;
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  while (puVar12 != puVar7) {
    if (((long)puVar9 < (long)puVar24) || ((long)puVar12 <= (long)puVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbca4);
      (*pcVar2)();
    }
    lVar17 = *(long *)(puVar11 + (long)puVar7 * 8);
    puVar7 = puVar7 + 1;
    if (*(long *)(*(long *)(lVar17 + _DAT_11307aa08) + _DAT_11307a9d0) == 1) {
      func_0x000107c61174();
      puVar9 = puVar21;
      func_0x000107c61558();
      puStack_80 = puVar21;
      if (((ulong)puVar9 & 1) == 0) {
        FUN_102ccd6f8(0,*(long *)(puVar21 + 0x10) + 1,1);
      }
      uVar20 = *(ulong *)(puStack_80 + 0x10);
      if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar20) {
        FUN_102ccd6f8(1 < *(ulong *)(puStack_80 + 0x18),uVar20 + 1,1);
      }
      *(ulong *)(puStack_80 + 0x10) = uVar20 + 1;
      *(long *)(puStack_80 + uVar20 * 8 + 0x20) = lVar17;
      puVar9 = puVar7;
      puVar21 = puStack_80;
    }
  }
  func_0x000107c615e8(puVar6);
  lVar17 = *(long *)(*(long *)(unaff_x20 + lVar19) + _DAT_11307a990);
  uVar16 = (uint)((ulong)puVar21 >> 0x3e) & 1;
  if ((long)puVar21 < 0) {
    uVar16 = 1;
  }
  if (uVar16 == 1) {
    puVar7 = puVar21;
    func_0x000107c60480();
  }
  else {
    puVar7 = *(undefined **)(puVar21 + 0x10);
  }
  if (lVar17 < (long)puVar7) {
    lVar17 = *(long *)(*(long *)(unaff_x20 + lVar19) + _DAT_11307a990);
    if (lVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd60);
      (*pcVar2)();
    }
    if (uVar16 == 0) {
      puVar7 = *(undefined **)(puVar21 + 0x10);
    }
    else {
      puVar7 = puVar21;
      func_0x000107c60480();
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd7c);
        (*pcVar2)();
      }
      puVar7 = puVar21;
      func_0x000107c60480();
    }
    if ((long)puVar7 < lVar17) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd64);
      (*pcVar2)();
    }
    if ((((ulong)puVar21 & 0xc000000000000001) == 0) || (lVar17 == 0)) {
      func_0x000107c61434(puVar21);
    }
    else {
      uVar5 = 0;
      func_0x000104452240(0);
      func_0x000107c61434(puVar21);
      lVar8 = 0;
      do {
        lVar1 = lVar8 + 1;
        func_0x000107c60318(lVar8,puVar21,uVar5);
        lVar8 = lVar1;
      } while (lVar17 != lVar1);
    }
    if (uVar16 == 0) {
      puVar7 = (undefined *)0x0;
      puVar9 = puVar21;
      uVar20 = lVar17 << 1 | 1;
LAB_102ccb704:
      uVar5 = 0;
      func_0x000107c605fc(0);
      puVar10 = puVar9;
      func_0x000107c615f4(puVar9,2);
      func_0x000107c61480();
      if (puVar10 == (undefined *)0x0) {
        func_0x000107c615e8(puVar9);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar17 = *(long *)(puVar10 + 0x10);
      func_0x000107c61574();
      if (SBORROW8(uVar20 >> 1,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd80);
        (*pcVar2)();
      }
      if (lVar17 != (uVar20 >> 1) - (long)puVar7) {
        func_0x000107c615e8();
        uVar22 = uVar20;
        goto LAB_102ccb6f0;
      }
      puVar7 = puVar9;
      func_0x000107c61480(puVar9,uVar5);
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar21);
        func_0x000107c615ec(puVar9,2);
        puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
        goto LAB_102ccb780;
      }
    }
    else {
      func_0x000107c61574(puVar21);
      puVar9 = (undefined *)0x0;
      puVar7 = puVar21;
      func_0x000107c60484();
      uVar20 = uVar22;
      if ((uVar22 & 1) != 0) goto LAB_102ccb704;
LAB_102ccb6f0:
      puVar7 = puVar9;
      FUN_102ccd990();
    }
    func_0x000107c615e8(puVar9);
    func_0x000107c61574(puVar21);
    puVar21 = puVar7;
  }
LAB_102ccb780:
  func_0x000107c615f0(puVar6);
  puVar7 = puVar24;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = puVar24;
  while (puVar12 != puVar7) {
    if (((long)puVar10 < (long)puVar24) || ((long)puVar12 <= (long)puVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbca8);
      (*pcVar2)();
    }
    lVar17 = *(long *)(puVar11 + (long)puVar7 * 8);
    puVar7 = puVar7 + 1;
    if (*(long *)(*(long *)(lVar17 + _DAT_11307aa08) + _DAT_11307a9d0) == 0) {
      func_0x000107c61174();
      puVar10 = puVar9;
      func_0x000107c61558();
      puStack_80 = puVar9;
      if (((ulong)puVar10 & 1) == 0) {
        FUN_102ccd6f8(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar20 = *(ulong *)(puStack_80 + 0x10);
      if (*(ulong *)(puStack_80 + 0x18) >> 1 <= uVar20) {
        FUN_102ccd6f8(1 < *(ulong *)(puStack_80 + 0x18),uVar20 + 1,1);
      }
      *(ulong *)(puStack_80 + 0x10) = uVar20 + 1;
      *(long *)(puStack_80 + uVar20 * 8 + 0x20) = lVar17;
      puVar9 = puStack_80;
      puVar10 = puVar7;
    }
  }
  func_0x000107c615e8(puVar6);
  lVar17 = *(long *)(*(long *)(unaff_x20 + lVar19) + _DAT_11307a998);
  uVar16 = (uint)((ulong)puVar9 >> 0x3e) & 1;
  if ((long)puVar9 < 0) {
    uVar16 = 1;
  }
  if (uVar16 == 1) {
    puVar11 = puVar9;
    func_0x000107c60480();
  }
  else {
    puVar11 = *(undefined **)(puVar9 + 0x10);
  }
  puVar24 = puVar9;
  if (lVar17 < (long)puVar11) {
    lVar19 = *(long *)(*(long *)(unaff_x20 + lVar19) + _DAT_11307a998);
    if (lVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd68);
      (*pcVar2)();
    }
    if (uVar16 == 0) {
      puVar11 = *(undefined **)(puVar9 + 0x10);
    }
    else {
      puVar11 = puVar9;
      func_0x000107c60480();
      if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd90);
        (*pcVar2)();
      }
      puVar11 = puVar9;
      func_0x000107c60480();
    }
    if ((long)puVar11 < lVar19) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd6c);
      (*pcVar2)();
    }
    if ((((ulong)puVar9 & 0xc000000000000001) == 0) || (lVar19 == 0)) {
      func_0x000107c61434(puVar9);
      if (uVar16 != 0) goto LAB_102ccb938;
LAB_102ccb970:
      puVar11 = (undefined *)0x0;
      puVar12 = puVar9;
      uVar20 = lVar19 << 1 | 1;
LAB_102ccb9bc:
      uVar5 = 0;
      func_0x000107c605fc(0);
      puVar24 = puVar12;
      func_0x000107c615f4(puVar12,2);
      func_0x000107c61480();
      if (puVar24 == (undefined *)0x0) {
        func_0x000107c615e8(puVar12);
        puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar19 = *(long *)(puVar24 + 0x10);
      func_0x000107c61574();
      if (SBORROW8(uVar20 >> 1,(long)puVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd9c);
        (*pcVar2)();
      }
      if (lVar19 == (uVar20 >> 1) - (long)puVar11) {
        puVar24 = puVar12;
        func_0x000107c61480(puVar12,uVar5);
        if (puVar24 == (undefined *)0x0) {
          func_0x000107c61574(puVar9);
          func_0x000107c615ec(puVar12,2);
          puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          func_0x000107c615e8(puVar12);
          func_0x000107c61574(puVar9);
        }
        goto joined_r0x000102ccba44;
      }
      func_0x000107c615e8();
    }
    else {
      uVar5 = 0;
      func_0x000104452240(0);
      func_0x000107c61434(puVar9);
      lVar17 = 0;
      do {
        lVar8 = lVar17 + 1;
        func_0x000107c60318(lVar17,puVar9,uVar5);
        lVar17 = lVar8;
      } while (lVar19 != lVar8);
      if (uVar16 == 0) goto LAB_102ccb970;
LAB_102ccb938:
      func_0x000107c61574(puVar9);
      puVar12 = (undefined *)0x0;
      puVar11 = puVar9;
      func_0x000107c60484(0,lVar19);
      uVar20 = uVar22;
      if ((uVar22 & 1) != 0) goto LAB_102ccb9bc;
    }
    puVar24 = puVar12;
    FUN_102ccd990(puVar12);
    func_0x000107c615e8(puVar12);
    func_0x000107c61574(puVar9);
    uVar22 = uVar20;
  }
joined_r0x000102ccba44:
  if (!bVar3) {
    func_0x000107c61574(puVar13);
    puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    goto LAB_102ccbc24;
  }
  if (uVar15 == 0) {
    puVar11 = *(undefined **)(puVar13 + 0x10);
    if ((long)puVar11 < (long)puVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd98);
      (*pcVar2)();
    }
  }
  else {
    puVar11 = puVar13;
    func_0x000107c60480();
    if ((long)puVar11 < (long)puVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbd94);
      (*pcVar2)();
    }
    puVar12 = puVar13;
    func_0x000107c60480();
    if ((long)puVar12 < (long)puVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccba78);
      (*pcVar2)();
    }
  }
  if ((((ulong)puVar13 & 0xc000000000000001) == 0) || (puVar14 == puVar11)) {
    func_0x000107c61434(puVar13);
  }
  else {
    if ((long)puVar11 <= (long)puVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbda0);
      (*pcVar2)();
    }
    uVar5 = 0;
    func_0x000104452240(0);
    func_0x000107c61434(puVar13);
    puVar12 = puVar14;
    do {
      puVar7 = puVar12 + 1;
      func_0x000107c60318(puVar12,puVar13,uVar5);
      puVar12 = puVar7;
    } while (puVar11 != puVar7);
  }
  func_0x000107c61574(puVar13);
  if (uVar15 == 0) {
    uVar22 = (long)puVar11 << 1 | 1;
    puVar11 = puVar13 + 0x20;
    puVar12 = puVar14;
LAB_102ccbb50:
    puVar14 = puVar13;
    uVar5 = 0;
    func_0x000107c605fc(0);
    puVar13 = puVar14;
    func_0x000107c615f4(puVar14,3);
    func_0x000107c61480();
    if (puVar13 == (undefined *)0x0) {
      func_0x000107c615e8(puVar14);
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar19 = *(long *)(puVar13 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(uVar22 >> 1,(long)puVar12)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccbdb4);
      (*pcVar2)();
    }
    if (lVar19 == (uVar22 >> 1) - (long)puVar12) {
      puVar13 = puVar14;
      func_0x000107c61480(puVar14,uVar5);
      func_0x000107c615ec(puVar14,2);
      if (puVar13 == (undefined *)0x0) {
        func_0x000107c615e8(puVar14);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      goto LAB_102ccbc24;
    }
    func_0x000107c615ec(puVar14,2);
  }
  else {
    puVar12 = puVar13;
    func_0x000107c60484(puVar14,puVar11);
    func_0x000107c61574(puVar13);
    puVar13 = puVar14;
    if ((uVar22 & 1) != 0) goto LAB_102ccbb50;
  }
  puVar13 = puVar14;
  FUN_102ccd990(puVar14,puVar11,puVar12,uVar22);
  func_0x000107c615e8(puVar14);
LAB_102ccbc24:
  puStack_80 = puVar21;
  func_0x000107c61434(puVar21);
  func_0x000107c61434(puVar24);
  FUN_102ccc010();
  puVar11 = puStack_80;
  func_0x00010445199c(0);
  func_0x000107c610f8();
  func_0x0001044518f8(puVar11,puVar13);
  func_0x000107c6142c(puVar24);
  func_0x000107c615e8(puVar6);
  func_0x000107c6142c(puVar21);
  return puVar11;
}



/* Entry: 102ccbdd0; end: 102ccbe43; -[SCOperaVideoPlayerPreloadPriorityRanker rankBasedOnPreloadPriorityWith:isCurrentViewModelUsingPlayer:] */

void FUN_102ccbdd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000104452240(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102ccb248(param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ccbe44; end: 102ccbea3; -[SCOperaVideoPlayerPreloadPriorityRanker init] */

void FUN_102ccbe44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("OperaVideoPlayerPreloadUtils.OperaVideoPlayerPreloadPriorityRanker",0x42,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccbe70);
  (*pcVar1)();
}



/* Entry: 102ccbea4; end: 102ccbeb3; -[SCOperaVideoPlayerPreloadPriorityRanker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccbea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f0aca0));
  return;
}



/* Entry: 102ccbeb4; end: 102ccbfb3;  */

void FUN_102ccbeb4(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_102ccda8c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar5) {
      uVar2 = 0;
      func_0x000104452240(0);
      puVar3 = puVar6;
      func_0x000107c60380(puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_102ccc5e8(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_102ccccb8(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102ccbfb4; end: 102ccc00f;  */

void FUN_102ccbfb4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000104452240();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f0acd0;
  plVar5 = (long *)&UNK_10db3de68;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102ccc010; end: 102ccc2d3;  */

void FUN_102ccc010(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000102ccc0fc(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102ccd838(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccc0f8);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccc0fc);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccc0f4);
  (*pcVar1)();
}



/* Entry: 102ccc2d4; end: 102ccc353;  */

undefined * FUN_102ccc2d4(undefined *param_1,undefined *param_2)

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
    FUN_102ccbfb4();
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



/* Entry: 102ccc354; end: 102ccc44b;  */

long FUN_102ccc354(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102ccc448);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102ccc44c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000104452240(0);
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
      func_0x000104452240(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102ccc444);
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



/* Entry: 102ccc44c; end: 102ccc5e7;  */

ulong FUN_102ccc44c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccc51c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccc520);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000104452240(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000104452240(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f1082a0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccc5e8);
  (*pcVar2)();
}



/* Entry: 102ccc5e8; end: 102ccccb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccc5e8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x21;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar11 = 0;
    do {
      lVar15 = lVar11 + 1;
      if (lVar15 < lVar18) {
        lVar14 = *param_3;
        uVar3 = *(undefined8 *)(lVar14 + lVar15 * 8);
        uVar22 = *(ulong *)(lVar14 + lVar11 * 8);
        func_0x000107c61174(uVar3);
        func_0x000107c61174();
        uVar17 = uVar22;
        func_0x000102ccae88();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar22);
        lVar15 = lVar11 + 2;
        if (lVar15 < lVar18) {
          plVar10 = (long *)(lVar14 + lVar11 * 8 + 0x10);
          lVar14 = lVar15;
          do {
            lVar15 = lVar14;
            lVar14 = plVar10[-1];
            lVar9 = *plVar10;
            lVar20 = *(long *)(lVar14 + _DAT_11307aa08);
            lVar23 = *(long *)(lVar9 + _DAT_11307aa08);
            if (*(ulong *)(lVar20 + _DAT_11307a9d8) == *(ulong *)(lVar23 + _DAT_11307a9d8)) {
              lVar19 = *(long *)(lVar14 + _DAT_11307aa10);
              lVar25 = *(long *)(lVar9 + _DAT_11307aa10);
              func_0x000107c61174();
              func_0x000107c61174(lVar14);
              if ((int)lVar19 != (int)lVar25) {
                func_0x000107c61170(lVar9);
                func_0x000107c61170(lVar14);
                uVar7 = (uint)((lVar19 != 2 && lVar25 == 2 || lVar25 == 1) && lVar19 != 1);
                goto LAB_102ccc810;
              }
              if ((int)*(long *)(lVar20 + _DAT_11307a9c8) != (int)*(long *)(lVar23 + _DAT_11307a9c8)
                 ) {
                uVar22 = *(long *)(lVar20 + _DAT_11307a9c8) - 1;
                if (uVar22 < 3) {
                  uVar22 = *(ulong *)(&UNK_10db3de78 + uVar22 * 8);
                }
                else {
                  uVar22 = 0;
                }
                uVar8 = *(long *)(lVar23 + _DAT_11307a9c8) - 1;
                if (uVar8 < 3) {
                  uVar8 = *(ulong *)(&UNK_10db3de78 + uVar8 * 8);
                }
                else {
                  uVar8 = 0;
                }
                func_0x000107c61170(lVar9);
                func_0x000107c61170(lVar14);
                bVar2 = uVar8 <= uVar22;
LAB_102ccc80c:
                uVar7 = (uint)!bVar2;
                goto LAB_102ccc810;
              }
              lVar20 = *(long *)(lVar20 + _DAT_11307a9d0);
              lVar23 = *(long *)(lVar23 + _DAT_11307a9d0);
              func_0x000107c61170(lVar9);
              func_0x000107c61170(lVar14);
              if ((int)lVar20 != (int)lVar23) {
                bVar2 = (lVar20 == 0 || lVar23 != 0) && lVar23 != 1 || lVar20 == 1;
                goto LAB_102ccc80c;
              }
              if ((uVar17 & 1) != 0) {
                if (lVar11 <= lVar15) goto LAB_102ccc858;
                goto LAB_102cccc88;
              }
            }
            else {
              uVar7 = (uint)(*(ulong *)(lVar23 + _DAT_11307a9d8) <
                            *(ulong *)(lVar20 + _DAT_11307a9d8));
LAB_102ccc810:
              if ((((uint)uVar17 ^ uVar7) & 1) != 0) break;
            }
            plVar10 = plVar10 + 1;
            lVar14 = lVar15 + 1;
            lVar15 = lVar18;
          } while (lVar18 != lVar14);
        }
        if ((uVar17 & 1) != 0) {
          if (lVar15 < lVar11) {
LAB_102cccc88:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc8c);
            (*pcVar1)();
          }
LAB_102ccc858:
          if (lVar11 < lVar15) {
            lVar9 = *param_3;
            puVar12 = (undefined8 *)(lVar9 + lVar15 * 8);
            puVar13 = (undefined8 *)(lVar9 + lVar11 * 8);
            lVar14 = lVar15;
            lVar18 = lVar11;
            do {
              puVar12 = puVar12 + -1;
              lVar14 = lVar14 + -1;
              if (lVar18 != lVar14) {
                if (lVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccccac);
                  (*pcVar1)();
                }
                uVar3 = *puVar13;
                *puVar13 = *puVar12;
                *puVar12 = uVar3;
              }
              lVar18 = lVar18 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 < lVar14);
          }
        }
      }
      lVar18 = param_3[1];
      lVar14 = lVar15;
      if (lVar15 < lVar18) {
        if (SBORROW8(lVar15,lVar11)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc88);
          (*pcVar1)();
        }
        if (lVar15 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc90);
            (*pcVar1)();
          }
          lVar9 = lVar11 + param_4;
          if (lVar18 <= lVar11 + param_4) {
            lVar9 = lVar18;
          }
          if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc94);
            (*pcVar1)();
          }
          if (lVar15 != lVar9) {
            lVar20 = *param_3;
            plVar10 = (long *)(lVar20 + lVar15 * 8 + -8);
            lVar18 = lVar11 - lVar15;
            do {
              lVar23 = *(long *)(lVar20 + lVar15 * 8);
              plVar16 = plVar10;
              lVar14 = lVar18;
              do {
                lVar19 = *plVar16;
                lVar26 = *(long *)(lVar19 + _DAT_11307aa08);
                lVar25 = *(long *)(lVar23 + _DAT_11307aa08);
                if (*(ulong *)(lVar26 + _DAT_11307a9d8) == *(ulong *)(lVar25 + _DAT_11307a9d8)) {
                  lVar24 = *(long *)(lVar19 + _DAT_11307aa10);
                  lVar21 = *(long *)(lVar23 + _DAT_11307aa10);
                  func_0x000107c61174();
                  func_0x000107c61174(lVar19);
                  if ((int)lVar24 == (int)lVar21) {
                    if ((int)*(long *)(lVar26 + _DAT_11307a9c8) ==
                        (int)*(long *)(lVar25 + _DAT_11307a9c8)) {
                      lVar26 = *(long *)(lVar26 + _DAT_11307a9d0);
                      lVar25 = *(long *)(lVar25 + _DAT_11307a9d0);
                      func_0x000107c61170(lVar23);
                      func_0x000107c61170(lVar19);
                      if (((int)lVar26 == (int)lVar25) ||
                         (lVar26 == 1 || (lVar26 == 0 || lVar25 != 0) && lVar25 != 1)) break;
                    }
                    else {
                      uVar17 = *(long *)(lVar26 + _DAT_11307a9c8) - 1;
                      if (uVar17 < 3) {
                        uVar17 = *(ulong *)(&UNK_10db3de78 + uVar17 * 8);
                      }
                      else {
                        uVar17 = 0;
                      }
                      uVar22 = *(long *)(lVar25 + _DAT_11307a9c8) - 1;
                      if (uVar22 < 3) {
                        uVar22 = *(ulong *)(&UNK_10db3de78 + uVar22 * 8);
                      }
                      else {
                        uVar22 = 0;
                      }
                      func_0x000107c61170(lVar23);
                      func_0x000107c61170(lVar19);
                      if (uVar22 <= uVar17) break;
                    }
                  }
                  else {
                    func_0x000107c61170(lVar23);
                    func_0x000107c61170(lVar19);
                    if ((lVar24 == 1) || ((lVar24 == 2 || lVar21 != 2) && lVar21 != 1)) break;
                  }
                }
                else if (*(ulong *)(lVar26 + _DAT_11307a9d8) <= *(ulong *)(lVar25 + _DAT_11307a9d8))
                break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc98);
                  (*pcVar1)();
                }
                lVar19 = *plVar16;
                lVar23 = plVar16[1];
                *plVar16 = lVar23;
                plVar16[1] = lVar19;
                bVar2 = lVar14 != -1;
                lVar14 = lVar14 + 1;
                plVar16 = plVar16 + -1;
              } while (bVar2);
              lVar15 = lVar15 + 1;
              plVar10 = plVar10 + 1;
              lVar18 = lVar18 + -1;
              lVar14 = lVar9;
            } while (lVar15 != lVar9);
          }
        }
      }
      puVar6 = puStack_58;
      if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc7c);
        (*pcVar1)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar17 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar17) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar17 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar17 + 1;
      *(long *)(puVar6 + uVar17 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar6 + uVar17 * 0x10 + 0x28) = lVar14;
      puStack_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccccb0);
        (*pcVar1)();
      }
      FUN_102cccee8(&puStack_58,*param_1,param_3);
      puVar6 = puStack_58;
      if (unaff_x21 != 0) goto LAB_102cccc4c;
      lVar18 = param_3[1];
      lVar11 = lVar14;
    } while (lVar14 < lVar18);
  }
  puVar6 = puStack_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccccb8);
    (*pcVar1)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar17 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar17) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccccb4);
      (*pcVar1)();
    }
    lVar9 = uVar17 - 1;
    lVar14 = *(long *)(puVar6 + uVar17 * 0x10);
    lVar15 = *(long *)(puVar6 + lVar9 * 0x10 + 0x28);
    FUN_102ccd150(lVar11 + lVar14 * 8,lVar11 + *(long *)(puVar6 + lVar9 * 0x10 + 0x20) * 8,
                  lVar11 + lVar15 * 8,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar14) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc80);
      (*pcVar1)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccc84);
      (*pcVar1)();
    }
    *(long *)(puVar6 + uVar17 * 0x10) = lVar14;
    *(long *)((long)(puVar6 + uVar17 * 0x10) + 8) = lVar15;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar9);
    puVar6 = puStack_58;
    uVar17 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102cccc4c:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 102ccccb8; end: 102cccee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccccb8(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  if (param_3 != param_2) {
    lVar6 = *param_4;
    plVar11 = (long *)(lVar6 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      lVar3 = *(long *)(lVar6 + param_3 * 8);
      plVar12 = plVar11;
      lVar13 = param_1;
      do {
        lVar10 = *plVar12;
        lVar9 = *(long *)(lVar10 + _DAT_11307aa08);
        lVar14 = *(long *)(lVar3 + _DAT_11307aa08);
        if (*(ulong *)(lVar9 + _DAT_11307a9d8) == *(ulong *)(lVar14 + _DAT_11307a9d8)) {
          lVar7 = *(long *)(lVar10 + _DAT_11307aa10);
          lVar8 = *(long *)(lVar3 + _DAT_11307aa10);
          func_0x000107c61174();
          func_0x000107c61174(lVar10);
          if ((int)lVar7 == (int)lVar8) {
            if ((int)*(long *)(lVar9 + _DAT_11307a9c8) == (int)*(long *)(lVar14 + _DAT_11307a9c8)) {
              lVar9 = *(long *)(lVar9 + _DAT_11307a9d0);
              lVar14 = *(long *)(lVar14 + _DAT_11307a9d0);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar10);
              if (((int)lVar9 == (int)lVar14) ||
                 (lVar9 == 1 || (lVar9 == 0 || lVar14 != 0) && lVar14 != 1)) break;
            }
            else {
              uVar5 = *(long *)(lVar9 + _DAT_11307a9c8) - 1;
              if (uVar5 < 3) {
                uVar5 = *(ulong *)(&UNK_10db3de78 + uVar5 * 8);
              }
              else {
                uVar5 = 0;
              }
              uVar4 = *(long *)(lVar14 + _DAT_11307a9c8) - 1;
              if (uVar4 < 3) {
                uVar4 = *(ulong *)(&UNK_10db3de78 + uVar4 * 8);
              }
              else {
                uVar4 = 0;
              }
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar10);
              if (uVar4 <= uVar5) break;
            }
          }
          else {
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar10);
            if ((lVar7 == 1) || ((lVar7 == 2 || lVar8 != 2) && lVar8 != 1)) break;
          }
        }
        else if (*(ulong *)(lVar9 + _DAT_11307a9d8) <= *(ulong *)(lVar14 + _DAT_11307a9d8)) break;
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102cccee8);
          (*pcVar1)();
        }
        lVar10 = *plVar12;
        lVar3 = plVar12[1];
        *plVar12 = lVar3;
        plVar12[1] = lVar10;
        bVar2 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        plVar12 = plVar12 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      plVar11 = plVar11 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102cccee8; end: 102ccd14f;  */

undefined8 FUN_102cccee8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102cccfbc;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd138);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_102ccd020:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd128);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd130);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd110);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd114);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd11c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd124);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_102cccfbc:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd118);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd120);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd12c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd134);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_102ccd020;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd13c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd104);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd150);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_102ccd150(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd108);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccd10c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 102ccd150; end: 102ccd6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102ccd150(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = (long)param_2 - (long)param_1;
  lVar2 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar2 = lVar12;
  }
  lVar2 = lVar2 >> 3;
  lVar13 = (long)param_3 - (long)param_2;
  lVar4 = lVar13 + 7;
  if (-1 < lVar13) {
    lVar4 = lVar13;
  }
  lVar4 = lVar4 >> 3;
  if (lVar2 < lVar4) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar2 << 3);
    }
    plVar7 = param_4 + lVar2;
    plVar1 = param_1;
    if (7 < lVar12) {
      do {
        if (param_3 <= param_2) break;
        lVar12 = *param_4;
        lVar13 = *(long *)(lVar12 + _DAT_11307aa08);
        lVar2 = *param_2;
        lVar4 = *(long *)(lVar2 + _DAT_11307aa08);
        if (*(ulong *)(lVar13 + _DAT_11307a9d8) == *(ulong *)(lVar4 + _DAT_11307a9d8)) {
          lVar10 = *(long *)(lVar12 + _DAT_11307aa10);
          lVar9 = *(long *)(lVar2 + _DAT_11307aa10);
          func_0x000107c61174();
          func_0x000107c61174(lVar12);
          if ((int)lVar10 != (int)lVar9) {
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar12);
            if ((lVar10 == 1) || ((lVar10 == 2 || lVar9 != 2) && lVar9 != 1)) goto LAB_102ccd320;
            goto LAB_102ccd408;
          }
          if ((int)*(long *)(lVar13 + _DAT_11307a9c8) == (int)*(long *)(lVar4 + _DAT_11307a9c8)) {
            lVar13 = *(long *)(lVar13 + _DAT_11307a9d0);
            lVar4 = *(long *)(lVar4 + _DAT_11307a9d0);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar12);
            if (((int)lVar13 == (int)lVar4) ||
               (lVar13 == 1 || (lVar13 == 0 || lVar4 != 0) && lVar4 != 1)) goto LAB_102ccd320;
            goto LAB_102ccd408;
          }
          uVar5 = *(long *)(lVar13 + _DAT_11307a9c8) - 1;
          if (uVar5 < 3) {
            uVar5 = *(ulong *)(&UNK_10db3de78 + uVar5 * 8);
          }
          else {
            uVar5 = 0;
          }
          uVar3 = *(long *)(lVar4 + _DAT_11307a9c8) - 1;
          if (uVar3 < 3) {
            uVar3 = *(ulong *)(&UNK_10db3de78 + uVar3 * 8);
          }
          else {
            uVar3 = 0;
          }
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar12);
          if (uVar5 < uVar3) goto LAB_102ccd408;
LAB_102ccd320:
          plVar11 = param_2;
          plVar6 = param_4;
          param_4 = param_4 + 1;
        }
        else {
          if (*(ulong *)(lVar13 + _DAT_11307a9d8) <= *(ulong *)(lVar4 + _DAT_11307a9d8))
          goto LAB_102ccd320;
LAB_102ccd408:
          plVar11 = param_2 + 1;
          plVar6 = param_2;
        }
        param_2 = plVar11;
        if (plVar1 != plVar6) {
          *plVar1 = *plVar6;
        }
        plVar1 = plVar1 + 1;
      } while (param_4 < plVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar4 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar4 << 3);
    }
    plVar6 = param_4 + lVar4;
    plVar1 = param_2;
    plVar7 = plVar6;
    if ((param_1 < param_2) && (7 < lVar13)) {
LAB_102ccd464:
      plVar8 = param_2 + -1;
      plVar11 = param_3;
      do {
        param_3 = plVar11 + -1;
        plVar7 = plVar6 + -1;
        lVar2 = *plVar7;
        lVar12 = *plVar8;
        lVar13 = *(long *)(lVar12 + _DAT_11307aa08);
        lVar4 = *(long *)(lVar2 + _DAT_11307aa08);
        if (*(ulong *)(lVar13 + _DAT_11307a9d8) == *(ulong *)(lVar4 + _DAT_11307a9d8)) {
          lVar10 = *(long *)(lVar12 + _DAT_11307aa10);
          lVar9 = *(long *)(lVar2 + _DAT_11307aa10);
          func_0x000107c61174();
          func_0x000107c61174(lVar12);
          if ((int)lVar10 == (int)lVar9) {
            if ((int)*(long *)(lVar13 + _DAT_11307a9c8) == (int)*(long *)(lVar4 + _DAT_11307a9c8)) {
              lVar13 = *(long *)(lVar13 + _DAT_11307a9d0);
              lVar4 = *(long *)(lVar4 + _DAT_11307a9d0);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar12);
              if (((int)lVar13 != (int)lVar4) &&
                 (lVar13 != 1 && (lVar13 != 0 && lVar4 == 0 || lVar4 == 1))) goto LAB_102ccd660;
            }
            else {
              uVar5 = *(long *)(lVar13 + _DAT_11307a9c8) - 1;
              if (uVar5 < 3) {
                uVar5 = *(ulong *)(&UNK_10db3de78 + uVar5 * 8);
              }
              else {
                uVar5 = 0;
              }
              uVar3 = *(long *)(lVar4 + _DAT_11307a9c8) - 1;
              if (uVar3 < 3) {
                uVar3 = *(ulong *)(&UNK_10db3de78 + uVar3 * 8);
              }
              else {
                uVar3 = 0;
              }
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar12);
              if (uVar5 < uVar3) goto LAB_102ccd660;
            }
          }
          else {
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar12);
            if ((lVar10 != 1) && (lVar10 != 2 && lVar9 == 2 || lVar9 == 1)) goto LAB_102ccd660;
          }
        }
        else if (*(ulong *)(lVar4 + _DAT_11307a9d8) < *(ulong *)(lVar13 + _DAT_11307a9d8))
        goto LAB_102ccd660;
        if (plVar11 != plVar6) {
          *param_3 = *plVar7;
        }
        plVar1 = param_2;
        plVar6 = plVar7;
        plVar11 = param_3;
        if (plVar7 <= param_4) break;
      } while( true );
    }
  }
LAB_102ccd694:
  uVar3 = (long)plVar7 - (long)param_4;
  uVar5 = uVar3 + 7;
  if (-1 < (long)uVar3) {
    uVar5 = uVar3;
  }
  if ((plVar1 != param_4) || ((long *)((long)param_4 + (uVar5 & 0xfffffffffffffff8)) <= plVar1)) {
    func_0x000107c610b8(plVar1,param_4,((long)uVar5 >> 3) << 3);
  }
  return 1;
LAB_102ccd660:
  if (plVar11 != param_2) {
    *param_3 = *plVar8;
  }
  plVar1 = plVar8;
  plVar7 = plVar6;
  if ((plVar8 <= param_1) || (param_2 = plVar8, plVar6 <= param_4)) goto LAB_102ccd694;
  goto LAB_102ccd464;
}



/* Entry: 102ccd6f8; end: 102ccd713;  */

void FUN_102ccd6f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102ccd714();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102ccd714; end: 102ccd837;  */

undefined * FUN_102ccd714(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccd838);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_102ccbfb4();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000104452240(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102ccd838; end: 102ccd98f;  */

ulong FUN_102ccd838(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccd990);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccd984);
        (*pcVar1)();
      }
      uVar2 = 0;
      func_0x000104452240(0);
      func_0x000107c6140c(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      func_0x000107c60480();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccd988);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102ccd98c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            func_0x000107c61174(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        func_0x000107c61174(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_102ccc44c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 102ccd990; end: 102ccda6b;  */

undefined * FUN_102ccd990(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccda6c);
    (*pcVar2)();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      FUN_102ccbfb4();
      func_0x000107c613fc();
      puVar3 = param_1;
      func_0x000107c610a4();
      puVar5 = puVar3 + -0x19;
      if (0x1f < (long)puVar3) {
        puVar5 = puVar3 + -0x20;
      }
      *(long *)(param_1 + 0x10) = lVar1;
      *(ulong *)(param_1 + 0x18) = ((long)puVar5 >> 3) << 1 | 1;
      puVar5 = param_1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102ccda68);
      (*pcVar2)();
    }
    uVar4 = 0;
    func_0x000104452240(0);
    func_0x000107c6140c(puVar5 + 0x20,param_2 + param_3 * 8,lVar1,uVar4);
  }
  return puVar5;
}



/* Entry: 102ccda6c; end: 102ccda8b;  */

void FUN_102ccda6c(void)

{
  func_0x000107c61168(&PTR_PTR_11289df98);
  return;
}



/* Entry: 102ccda8c; end: 102ccda9f;  */

/* WARNING: Removing unreachable block (ram,0x000102ccd734) */
/* WARNING: Removing unreachable block (ram,0x000102ccd744) */
/* WARNING: Removing unreachable block (ram,0x000102ccd834) */
/* WARNING: Removing unreachable block (ram,0x000102ccd750) */
/* WARNING: Removing unreachable block (ram,0x000102ccd758) */
/* WARNING: Removing unreachable block (ram,0x000102ccd7d0) */
/* WARNING: Removing unreachable block (ram,0x000102ccd7d8) */
/* WARNING: Removing unreachable block (ram,0x000102ccd7dc) */
/* WARNING: Removing unreachable block (ram,0x000102ccd7e0) */
/* WARNING: Removing unreachable block (ram,0x000102ccd7f0) */

undefined * FUN_102ccda8c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar4 = (undefined *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    FUN_102ccbfb4();
    func_0x000107c613fc();
    puVar2 = puVar4;
    func_0x000107c610a4();
    puVar6 = puVar2 + -0x19;
    if (0x1f < (long)puVar2) {
      puVar6 = puVar2 + -0x20;
    }
    *(long *)(puVar4 + 0x10) = lVar5;
    *(ulong *)(puVar4 + 0x18) = ((long)puVar6 >> 3) << 1 | 1;
    puVar6 = puVar4;
  }
  uVar3 = 0;
  func_0x000104452240(0);
  func_0x000107c6140c(puVar6 + 0x20,param_1 + 0x20,lVar5,uVar3);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 102ccdaa0; end: 102ccdadf;  */

void FUN_102ccdaa0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102ccdae0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &DAT_112f0acf8);
  return;
}



/* Entry: 102ccdae0; end: 102ccdb47;  */

void FUN_102ccdae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102ccdb48; end: 102ccdb67;  */

void FUN_102ccdb48(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102ccdae0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &DAT_112f0acf0);
  return;
}



/* Entry: 102ccdb68; end: 102ccdc0b; -[SCOperaMediaEventAnnouncerImpl publishEvent:page:] */

void FUN_102ccdb68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_80 = param_1;
  uStack_78 = param_4;
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000103bb3504(0x102cce458,auStack_50,0x102cce45c,auStack_70,0x102cce460,auStack_90);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102ccdc0c; end: 102ccdc27; -[SCOperaMediaEventAnnouncerImpl onImageStartsToDisplay:observeOn:] */

void FUN_102ccdc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_1105becf8;
  uVar2 = 0x102cce454;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105becf8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102ccdefc(0x102cce454,puVar1,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102ccdc28; end: 102ccdc43; -[SCOperaMediaEventAnnouncerImpl onMediaStartsToDisplay:observeOn:] */

void FUN_102ccdc28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1105becd0;
  pcVar2 = FUN_102cce414;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105becd0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x102cce0a4)(FUN_102cce414,puVar1,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 102ccdc44; end: 102ccdc5f; -[SCOperaMediaEventAnnouncerImpl onVideoPlaybackProgressDidUpdate:observeOn:] */

void FUN_102ccdc44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1105beca8;
  pcVar2 = FUN_102cce450;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105beca8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x102cce24c)(FUN_102cce450,puVar1,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 102ccdc60; end: 102ccdd0f;  */

void FUN_102ccdc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  (*param_7)(param_6,param_5,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 102ccdd10; end: 102ccde3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccdd10(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f0acf0;
  uVar2 = 0x112f0acd8;
  func_0x0001000285a8(0x112f0acd8,&UNK_10db3de90);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f0acf8;
  uVar2 = 0x112f0ace0;
  func_0x0001000285a8(0x112f0ace0,&UNK_10db3de98);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f0ad00;
  uVar2 = 0x112f0ace8;
  func_0x0001000285a8(0x112f0ace8,&UNK_10db3dea0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f0ad08;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112f0ad10;
  puVar3 = &UNK_10db3deb0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102ccde40; end: 102ccde5f; -[SCOperaMediaEventAnnouncerImpl init] */

void FUN_102ccde40(void)

{
  FUN_102ccdd10();
  return;
}



/* Entry: 102ccde60; end: 102ccde93;  */

void FUN_102ccde60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ccde94; end: 102ccdefb; -[SCOperaMediaEventAnnouncerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccde94(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0acf0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0acf8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0ad00));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0ad08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0ad10));
  return;
}



/* Entry: 102ccdefc; end: 102cce3f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccdefc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plVar6;
  code *pcVar7;
  
  if (param_3 == (long *)0x0) {
    plVar6 = *(long **)(unaff_x20 + _DAT_112f0ad10);
    plVar1 = plVar6;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar6);
    puVar2 = &UNK_1105bedc0;
    func_0x000107c613fc(&UNK_1105bedc0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcVar7 = *(code **)(*plVar1 + 0x60);
    func_0x000107c6157c(param_2);
    uVar3 = 0x102cce470;
    puVar5 = puVar2;
    (*pcVar7)(0x102cce470);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    uVar4 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f0ad08),uVar4,puVar5);
  }
  else {
    plVar1 = param_3;
    func_0x000107c615f0();
    func_0x000100471e0c();
    puVar2 = &UNK_1105bede8;
    func_0x000107c613fc(&UNK_1105bede8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcVar7 = *(code **)(*plVar1 + 0x60);
    func_0x000107c6157c(param_2);
    uVar3 = 0x102cce474;
    puVar5 = puVar2;
    (*pcVar7)(0x102cce474);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    uVar4 = uVar3;
    func_0x000107c614f0(uVar3);
    (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f0ad08),uVar4,puVar5);
    func_0x000107c615e8(param_3);
  }
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 102cce3f4; end: 102cce413;  */

void FUN_102cce3f4(void)

{
  func_0x000107c61168(&PTR_PTR_11289e058);
  return;
}



/* Entry: 102cce414; end: 102cce427;  */

void FUN_102cce414(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cce424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 102cce428; end: 102cce44f;  */

void FUN_102cce428(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102cce450; end: 102cce477;  */

void FUN_102cce450(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cce424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 102cce478; end: 102cce497;  */

void FUN_102cce478(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102cce498(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &DAT_112f0ad58);
  return;
}



/* Entry: 102cce498; end: 102cce4ff;  */

void FUN_102cce498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  uStack_38 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001002a64a8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102cce500; end: 102cce51f;  */

void FUN_102cce500(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102cce498(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                &DAT_112f0ad50);
  return;
}



/* Entry: 102cce520; end: 102cce5b3; -[SCOperaViewLifecycleEventAnnouncerImpl publishEvent:page:] */

void FUN_102cce520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = param_1;
  uStack_58 = param_4;
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000103bb3b38(0x102ccebd0,auStack_50,0x102ccebd4,auStack_70);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102cce5b4; end: 102cce5cf; -[SCOperaViewLifecycleEventAnnouncerImpl onOpenViewLoaded:observeOn:] */

void FUN_102cce5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1105bee38;
  pcVar2 = FUN_102cceb90;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105bee38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102cce820(FUN_102cceb90,puVar1,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 102cce5d0; end: 102cce5eb; -[SCOperaViewLifecycleEventAnnouncerImpl onOpenView:observeOn:] */

void FUN_102cce5d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &UNK_1105bee10;
  pcVar2 = FUN_102ccebcc;
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_1105bee10,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x102cce9c8)(FUN_102ccebcc,puVar1,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 102cce5ec; end: 102cce69b;  */

void FUN_102cce5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  (*param_7)(param_6,param_5,param_4);
  func_0x000107c61180();
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_6);
  return;
}



/* Entry: 102cce69c; end: 102cce793; -[SCOperaViewLifecycleEventAnnouncerImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cce69c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0ad50;
  uVar3 = 0x112f0ad18;
  func_0x0001000285a8(0x112f0ad18,&UNK_10db3ded0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lVar1 = _DAT_112f0ad58;
  uVar3 = 0x112f0ad20;
  func_0x0001000285a8(0x112f0ad20,&UNK_10db3ded8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lVar1 = _DAT_112f0ad60;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lVar1 = _DAT_112f0ad68;
  puVar4 = &UNK_10db3df00;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(param_1 + lVar1) = puVar4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cce794; end: 102cce7c7;  */

void FUN_102cce794(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cce7c8; end: 102cce81f; -[SCOperaViewLifecycleEventAnnouncerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cce7c8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0ad50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0ad58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0ad60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f0ad68));
  return;
}



/* Entry: 102cce820; end: 102cceb6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cce820(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  long *plVar5;
  code *pcVar6;
  
  if (param_3 == (long *)0x0) {
    plVar5 = *(long **)(unaff_x20 + _DAT_112f0ad68);
    plVar1 = plVar5;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar5);
    puVar2 = &UNK_1105beeb0;
    func_0x000107c613fc(&UNK_1105beeb0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcVar6 = *(code **)(*plVar1 + 0x60);
    func_0x000107c6157c(param_2);
    pcVar3 = FUN_102cceba4;
    puVar4 = puVar2;
    (*pcVar6)(FUN_102cceba4);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    pcVar6 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f0ad60),pcVar6,puVar4);
  }
  else {
    plVar1 = param_3;
    func_0x000107c615f0();
    func_0x000100471e0c();
    puVar2 = &UNK_1105beed8;
    func_0x000107c613fc(&UNK_1105beed8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    pcVar6 = *(code **)(*plVar1 + 0x60);
    func_0x000107c6157c(param_2);
    pcVar3 = (code *)0x102ccebe0;
    puVar4 = puVar2;
    (*pcVar6)(0x102ccebe0);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(puVar2);
    pcVar6 = pcVar3;
    func_0x000107c614f0(pcVar3);
    (**(code **)(puVar4 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f0ad60),pcVar6,puVar4);
    func_0x000107c615e8(param_3);
  }
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102cceb70; end: 102cceb8f;  */

void FUN_102cceb70(void)

{
  func_0x000107c61168(&PTR_PTR_11289e130);
  return;
}



/* Entry: 102cceb90; end: 102cceba3;  */

void FUN_102cceb90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cceba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 102cceba4; end: 102ccebcb;  */

void FUN_102cceba4(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102ccebcc; end: 102ccebe3;  */

void FUN_102ccebcc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102cceba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2);
  return;
}



/* Entry: 102ccebe4; end: 102ccec37;  */

void FUN_102ccebe4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 102ccec38; end: 102cced57;  */

undefined * FUN_102ccec38(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f0ae48,&UNK_10db3dfe0);
    puVar9 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar14 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar14[-4];
      uVar4 = puVar14[-3];
      uVar6 = *(undefined1 *)(puVar14 + -2);
      uVar7 = *(undefined1 *)((long)puVar14 + -0xf);
      uVar3 = puVar14[-1];
      uVar5 = *puVar14;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar4);
      uVar10 = uVar2;
      uVar11 = uVar4;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102cced54);
        (*pcVar8)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar12 = (undefined1 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x18);
      *puVar12 = uVar6;
      puVar12[1] = uVar7;
      *(undefined8 *)(puVar12 + 8) = uVar3;
      *(undefined8 *)(puVar12 + 0x10) = uVar5;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x102cced58);
        (*pcVar8)();
      }
      puVar14 = puVar14 + 5;
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 102cced58; end: 102ccee53;  */

undefined * FUN_102cced58(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f0ae40,&UNK_10db3e060);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c6157c(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccee50);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccee54);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ccee54; end: 102ccef4f;  */

undefined * FUN_102ccee54(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f0ae38,&UNK_10db3dfd0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined4 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar9 + -4);
      uVar3 = *(ulong *)(puVar9 + -2);
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccef4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined4 *)(*(long *)(puVar5 + 0x38) + uVar6 * 4) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccef50);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 6;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102ccef50; end: 102ccef53;  */

void FUN_102ccef50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102ccef54; end: 102ccefb3;  */

void FUN_102ccef54(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBbWV_11034d660 + 0x40;
  puStack_20 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = puStack_30;
  func_0x000107c61524(param_1,0,4,&puStack_30,param_1 + 0x70);
  return;
}



/* Entry: 102ccefb4; end: 102ccefbf;  */

void FUN_102ccefb4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getGenericMetadata_11034f380)(param_1,param_2,&DAT_10e727a2c);
  return;
}



/* Entry: 102ccefc0; end: 102ccf617;  */

ulong FUN_102ccefc0(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  byte bStack_c0;
  char cStack_bf;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  byte bStack_90;
  byte bStack_8f;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar11 = 1;
  uVar7 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar6 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(lVar6 + 0x40);
  pcVar4 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c61434();
  uVar12 = 0;
  uVar10 = 0;
  lVar9 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar3 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      pbVar8 = (byte *)(*(long *)(lVar6 + 0x38) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x18 +
                       lVar9 * 0x600);
      bStack_90 = *pbVar8;
      bStack_8f = pbVar8[1];
      uVar1 = *(undefined8 *)(pbVar8 + 8);
      lVar2 = *(long *)(pbVar8 + 0x10);
      uStack_88 = uVar1;
      lStack_80 = lVar2;
      if (lVar11 == 1) {
        uVar10 = 0x100;
        if (bStack_8f == 0) {
          uVar10 = 0;
        }
        uVar10 = uVar10 | bStack_90;
        func_0x000107c61434(lVar2);
        lVar11 = lVar2;
        uVar12 = uVar1;
      }
      else {
        func_0x000102cd1c70(uVar10,uVar12,lVar11);
        func_0x000107c61434(lVar2);
        func_0x000102cd1c70(uVar10,uVar12,lVar11);
        func_0x000107c6142c(lVar11);
        FUN_102cd0034(uVar10,uVar12,lVar11);
        FUN_102cd0034(0,0,1);
        uStack_a8 = uVar10;
        uStack_a0 = uVar12;
        lStack_98 = lVar11;
        func_0x000107c61434(lVar11);
        (*pcVar4)(&bStack_c0,&uStack_a8,&bStack_90);
        FUN_102cd0034(uVar10,uVar12,lVar11);
        func_0x000107c6142c(lVar2);
        lVar11 = lStack_b0;
        uVar12 = uStack_b8;
        uVar10 = 0x100;
        if (cStack_bf == '\0') {
          uVar10 = 0;
        }
        uVar10 = uVar10 | bStack_c0;
        func_0x000107c6142c(lStack_98);
      }
    }
    bVar5 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar5) break;
    if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
      func_0x000107c61574(lVar6);
      return uVar10;
    }
    uVar13 = ((ulong *)(lVar6 + 0x40))[lVar9];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102ccf1e4);
  (*pcVar4)();
}



/* Entry: 102ccf618; end: 102ccf76f;  */

void FUN_102ccf618(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 **ppuStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    lVar3 = 0x21;
    func_0x000107c61428(param_4 + 0x10,&ppuStack_70,0x21,0);
    func_0x000107c61434(param_6);
    if (param_3 == 1) {
      param_2 = param_6;
      FUN_102cd23d0(param_5);
      FUN_102cd0034();
      func_0x000107c6142c(param_6);
      param_3 = lVar3;
    }
    else {
      func_0x000102cd1c70(param_1,param_2,param_3);
      uVar1 = *(undefined8 *)(param_4 + 0x10);
      func_0x000107c61558(uVar1);
      uVar4 = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(param_4 + 0x10) = 0x8000000000000000;
      FUN_102cd0bd4((uint)param_1 & 0x101,param_2,param_3,param_5,param_6,uVar1);
      func_0x000107c6142c(param_6);
      *(undefined8 *)(param_4 + 0x10) = uVar4;
    }
    pppuVar2 = &ppuStack_70;
    func_0x000107c614a8();
    FUN_102ccefc0();
    ppuStack_70 = pppuVar2;
    uStack_68 = param_2;
    lStack_60 = param_3;
    func_0x0001002a64a8(&ppuStack_70);
    FUN_102cd0034(pppuVar2,param_2,param_3);
    func_0x000107c61574(param_4);
  }
  return;
}



/* Entry: 102ccf770; end: 102ccf8e3;  */

void FUN_102ccf770(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,1,0);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar5);
  puVar6 = auStack_80;
  uVar5 = 1;
  func_0x000107c61428(unaff_x20 + 0x18,puVar6,1,0);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar9 + 0x40);
  func_0x000107c61434(lVar9);
  lVar11 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar8 = *(undefined8 *)
               (*(long *)(lVar9 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
               lVar11 * 0x200);
      func_0x000107c6157c(uVar8);
      func_0x000100c82230();
      func_0x000107c61574(uVar8);
    }
    bVar4 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar4) break;
    if ((long)(uVar7 + 0x3f >> 6) <= lVar11) {
      func_0x000107c61574(lVar9);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined **)(unaff_x20 + 0x18) = puVar2;
      func_0x000107c6142c();
      FUN_102ccefc0();
      uStack_98 = uVar8;
      puStack_90 = puVar6;
      uStack_88 = uVar5;
      func_0x0001002a64a8(&uStack_98);
      FUN_102cd0034(uVar8,puVar6,uVar5);
      return;
    }
    uVar10 = ((ulong *)(lVar9 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102ccf8e4);
  (*pcVar3)();
}



/* Entry: 102ccf8e4; end: 102ccfa63;  */

undefined1  [16] FUN_102ccf8e4(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uVar6;
  func_0x000107c61434();
  FUN_102ccfa64();
  func_0x000107c6142c(uVar6);
  uVar6 = 0x112d38270;
  uStack_88 = uVar2;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar6;
  func_0x00010011d734();
  uVar3 = 0x90a;
  uVar5 = 0xe200000000000000;
  func_0x000107c5fa80(0x90a,0xe200000000000000,uVar6,uVar4);
  func_0x000107c6142c(uVar2);
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x38);
  uStack_70 = uStack_88;
  uStack_68 = uStack_80;
  func_0x000107c5fb78(0xd00000000000001f,0x800000010f108330);
  func_0x000107c5fb78(uVar3,uVar5);
  func_0x000107c6142c(uVar5);
  uVar3 = 0x800000010f108350;
  uVar4 = 0xd000000000000013;
  func_0x000107c5fb78();
  FUN_102ccefc0();
  uVar2 = 0x112f0ae60;
  uStack_88 = uVar4;
  uStack_80 = uVar3;
  uStack_78 = uVar6;
  func_0x0001000285a8(0x112f0ae60,&UNK_10db3dff0);
  func_0x000107c5fb18(&uStack_88,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x290a,0xe200000000000000);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = uStack_70;
  return auVar1;
}



/* Entry: 102ccfa64; end: 102ccfd3b;  */

undefined * FUN_102ccfa64(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined2 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != 0) {
    func_0x000100403514(0,lVar15,0);
    uVar1 = param_1 + 0x40;
    uVar10 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar13 = 0;
    iVar6 = *(int *)(param_1 + 0x24);
    do {
      if (uVar10 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102ccfd28);
        (*pcVar9)();
      }
      uVar18 = uVar10 >> 6;
      uVar19 = 1L << (uVar10 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar18 * 8) & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102ccfd2c);
        (*pcVar9)();
      }
      if (iVar6 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102ccfd30);
        (*pcVar9)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      uStack_88 = *puVar2;
      uVar4 = puVar2[1];
      puVar11 = (undefined2 *)(*(long *)(param_1 + 0x38) + uVar10 * 0x18);
      uVar7 = *puVar11;
      uVar3 = *(undefined8 *)(puVar11 + 4);
      uVar5 = *(undefined8 *)(puVar11 + 8);
      uStack_70 = 0;
      uStack_68 = 0xe000000000000000;
      uStack_80 = uVar4;
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar4);
      func_0x000107c603d0(&uStack_88,&uStack_70,PTR___sSSN_11034da80,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x203a,0xe200000000000000);
      uStack_88 = CONCAT62(uStack_88._2_6_,uVar7);
      uStack_80 = uVar3;
      uStack_78 = uVar5;
      func_0x000107c603d0(&uStack_88,&uStack_70,&UNK_1105bf0a0,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar4);
      uVar4 = uStack_68;
      uVar3 = uStack_70;
      uVar16 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar16 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar16 + 1;
      *(undefined8 *)(puVar8 + uVar16 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(puVar8 + uVar16 * 0x10 + 0x28) = uVar4;
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar16 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102ccfd34);
        (*pcVar9)();
      }
      uVar12 = *(ulong *)(uVar1 + uVar18 * 8);
      if ((uVar12 & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102ccfd38);
        (*pcVar9)();
      }
      if (iVar6 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102ccfd3c);
        (*pcVar9)();
      }
      uVar12 = uVar12 & -2L << (uVar10 & 0x3f);
      if (uVar12 == 0) {
        lVar17 = uVar18 << 6;
        puVar14 = (ulong *)(param_1 + 0x48 + uVar18 * 8);
        do {
          uVar18 = uVar18 + 1;
          if (uVar16 + 0x3f >> 6 <= uVar18) {
            func_0x000102cd1c44(uVar10,iVar6,0);
            goto LAB_102ccfb04;
          }
          uVar19 = *puVar14;
          lVar17 = lVar17 + 0x40;
          puVar14 = puVar14 + 1;
        } while (uVar19 == 0);
        func_0x000102cd1c44(uVar10,iVar6,0);
        uVar10 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + lVar17;
      }
      else {
        uVar18 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar16 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | uVar10 & 0x7fffffffffffffc0;
      }
LAB_102ccfb04:
      lVar13 = lVar13 + 1;
      uVar10 = uVar16;
    } while (lVar13 != lVar15);
  }
  return puVar8;
}



/* Entry: 102ccfd3c; end: 102ccfd63;  */

byte FUN_102ccfd3c(byte *param_1,byte *param_2)

{
  return ((*param_1 ^ *param_2 | param_1[1] ^ param_2[1]) ^ 0xff) & 1;
}



/* Entry: 102ccfd64; end: 102ccfdc7;  */

void FUN_102ccfd64(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  bVar1 = *param_2;
  uVar6 = (ulong)bVar1;
  bVar2 = param_2[1];
  uVar5 = *(undefined8 *)(param_2 + 8);
  bVar3 = *param_3;
  bVar4 = param_3[1];
  FUN_102cd1c84(uVar6,uVar5,*(undefined8 *)(param_2 + 0x10),bVar3,*(undefined8 *)(param_3 + 8),
                *(undefined8 *)(param_3 + 0x10));
  *param_1 = (bVar1 | bVar3) & 1;
  param_1[1] = (bVar2 | bVar4) & 1;
  *(ulong *)(param_1 + 8) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  return;
}



/* Entry: 102ccfdc8; end: 102ccfdd3; -[SCOperaPauseController isPausedChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccfdc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = FUN_102ccfe84;
  uVar1 = param_1;
  FUN_102ccfdd4();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x0001000bfde0(FUN_102ccfe84,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ccfdd4; end: 102ccfe43;  */

void FUN_102ccfdd4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112f0ae58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f0ae60;
  func_0x00010002969c(0x112f0ae60,&UNK_10db3dff0);
  uVar2 = uVar1;
  FUN_102ccfe44();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112f0ae58 = puVar3;
  return;
}



/* Entry: 102ccfe44; end: 102ccfe83;  */

void FUN_102ccfe44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f0ae68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db3e030;
  func_0x000107c61520(&UNK_10db3e030,&UNK_1105bf0a0);
  puRam0000000112f0ae68 = puVar1;
  return;
}


