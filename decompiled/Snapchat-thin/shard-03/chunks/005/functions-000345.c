/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10298fdf4; end: 10298ff57;  */

void FUN_10298fdf4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112ed1ae8,&UNK_10daf8a68);
  lVar8 = *unaff_x20;
  lVar4 = lVar8;
  func_0x000107c6048c();
  if (*(long *)(lVar8 + 0x10) != 0) {
    lVar1 = lVar8 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar8 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar8 + 0x40);
    if (uVar5 == 0) goto LAB_10298fed0;
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
        uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar8 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar9;
        func_0x000107c61174();
        func_0x000107c61174(uVar9);
        if (uVar5 != 0) break;
LAB_10298fed0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10298ff58);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_10298ff30;
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
LAB_10298ff30:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10298ff58; end: 10299034f;  */

void FUN_10298ff58(long param_1,ulong param_2)

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
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar11 = 0x112ed1ae8;
  func_0x0001000285a8(0x112ed1ae8,&UNK_10daf8a68);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10299018c:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029901bc);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_10299018c;
        }
        uVar16 = puVar13[lVar15];
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
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar14);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1029901c0);
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
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 102990350; end: 102990437;  */

undefined1  [16] FUN_102990350(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if (param_1 < 3) {
    if (param_1 == 1) {
      func_0x0001090259c0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903f4);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 2) {
      func_0x0001090259d8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903b8);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  else {
    if (param_1 == 3) {
      func_0x0001090259f0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903cc);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 4) {
      func_0x000109025a08();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903e0);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 5) {
      func_0x000109025a20();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102990394);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  func_0x0001090258a0();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102990438);
    (*pcVar1)();
  }
LAB_102990404:
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar2;
  return auVar3;
}



/* Entry: 102990438; end: 102990547;  */

undefined1  [16] FUN_102990438(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar2 = param_1;
  func_0x000107c436c4();
  if ((lVar2 == 5) && (lVar2 = param_1, func_0x000107c436c8(), lVar2 != 0)) {
    func_0x000109025a38();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      uVar5 = 0x48;
      func_0x000107c613fc();
      *(undefined8 *)(lVar2 + 0x18) = 2;
      *(undefined8 *)(lVar2 + 0x10) = 1;
      func_0x000107c436c8();
      FUN_102990350();
      *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = param_1;
      func_0x00010075bbf0();
      *(long *)(lVar2 + 0x40) = lVar4;
      *(long *)(lVar2 + 0x20) = param_1;
      *(undefined8 *)(lVar2 + 0x28) = uVar5;
      uVar5 = param_2;
      func_0x000107c5fb00(lVar3,param_2,lVar2);
      func_0x000107c6142c(param_2);
      auVar7._8_8_ = uVar5;
      auVar7._0_8_ = lVar3;
      return auVar7;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102990548);
    (*pcVar1)();
  }
  func_0x000107c436c4();
  if (param_1 < 3) {
    if (param_1 == 1) {
      func_0x0001090259c0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903f4);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 2) {
      func_0x0001090259d8();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903b8);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  else {
    if (param_1 == 3) {
      func_0x0001090259f0();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903cc);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 4) {
      func_0x000109025a08();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1029903e0);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
    if (param_1 == 5) {
      func_0x000109025a20();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102990394);
        (*pcVar1)();
      }
      goto LAB_102990404;
    }
  }
  func_0x0001090258a0();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102990438);
    (*pcVar1)();
  }
LAB_102990404:
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = lVar2;
  return auVar6;
}



/* Entry: 102990548; end: 10299082f;  */

undefined * FUN_102990548(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puStack_68;
  
  lVar14 = 0;
  puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  do {
    puVar3 = PTR_PTR_1126c19d0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c5e56c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    func_0x000107c5e570();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    puVar5 = puVar3;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      puVar5 = puVar4;
      FUN_10298fa38(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
    }
    else {
      puVar11 = param_2;
      puVar7 = puStack_68;
      if (((ulong)puStack_68 & 0xc000000000000001) != 0) {
        puVar7 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_68) {
          puVar7 = puStack_68;
        }
        puVar6 = puVar7;
        func_0x000107c6042c();
        puVar11 = puVar6 + 1;
        if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10299080c);
          (*pcVar2)();
        }
        FUN_10298fbac();
      }
      puVar8 = puVar7;
      func_0x000107c61558();
      puVar6 = puVar4;
      func_0x000100121450();
      uVar12 = (ulong)~(uint)puVar11 & 1;
      lVar1 = *(long *)(puVar7 + 0x10) + uVar12;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102990808);
        (*pcVar2)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar1) {
        FUN_10298ff58(lVar1);
        puVar6 = puVar4;
        func_0x000100121450();
        param_2 = puVar8;
        if (((uint)puVar11 & 1) != ((uint)puVar8 & 1)) {
          FUN_102991170(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c60624();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102990830);
          (*pcVar2)();
        }
      }
      else {
        param_2 = puVar11;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_10298fdf4();
        }
      }
      puStack_68 = puVar7;
      if (((ulong)puVar11 & 1) == 0) {
        *(ulong *)(puVar7 + ((ulong)puVar6 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + ((ulong)puVar6 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar6 & 0x3f);
        *(undefined **)(*(long *)(puVar7 + 0x30) + (long)puVar6 * 8) = puVar4;
        *(undefined **)(*(long *)(puVar7 + 0x38) + (long)puVar6 * 8) = puVar5;
        func_0x000107c61170(puVar3);
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102990810);
          (*pcVar2)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(puVar7 + 0x38) + (long)puVar6 * 8);
        *(undefined **)(*(long *)(puVar7 + 0x38) + (long)puVar6 * 8) = puVar5;
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(uVar13);
      }
    }
    lVar14 = lVar14 + 8;
    if (lVar14 == 0x28) {
      uVar9 = 0;
      FUN_102991170(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar10 = 0;
      FUN_102991170(0,0x112e469c8,&PTR_PTR_1126c19c0);
      uVar13 = uVar10;
      func_0x000100120cb0();
      puVar3 = puStack_68;
      func_0x000107c5f9dc(puStack_68,uVar9,uVar10,uVar13);
      func_0x000107c6142c(puStack_68);
      return puVar3;
    }
  } while( true );
}



/* Entry: 102990830; end: 10299114f;  */

undefined1  [16] FUN_102990830(double param_1,ulong param_2,undefined *param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong *puVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  
  puVar3 = &uStack_d0;
  uStack_80 = 0;
  puStack_78 = (undefined *)0xe000000000000000;
  if (((ulong)param_3 & 1) == 0) {
    uVar19 = 0;
  }
  else {
    uVar23 = param_2;
    func_0x000107c436c8();
    FUN_102990350();
    uVar19 = uVar23 & 0xffffffffffff;
    uStack_80 = uVar23;
    puStack_78 = param_3;
  }
  puVar7 = puStack_78;
  uVar23 = param_2;
  func_0x000107c436c8();
  if (uVar23 - 1 < 4) {
    param_3 = (&PTR_DAT_1105770d8)[uVar23 - 1];
    puVar5 = (undefined *)0x112ed1950;
    func_0x0001000285a8(0x112ed1950,&UNK_10daf8a40);
    func_0x000107c61538();
    uVar23 = *(ulong *)(puVar5 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar23 = *(ulong *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
  if (uVar23 == 0) {
    func_0x000107c6142c(puVar5);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar20 = 0;
    uStack_d0 = uVar19;
    puStack_c8 = puVar7;
    uStack_a8 = uVar23;
    puStack_a0 = puVar5;
    uStack_98 = param_2;
    do {
      if (*(ulong *)(puVar5 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10299111c);
        (*pcVar2)();
      }
      lVar16 = *(long *)(puVar5 + uVar20 * 8 + 0x20);
      if (lVar16 < 2) {
        if (lVar16 == 0) {
          uVar19 = param_2;
          func_0x000107c42378();
          if (uVar19 != 0) {
            func_0x000107c42378();
            puVar7 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
            func_0x000107c610f8();
            func_0x000107c453e4();
            func_0x000107c5a18c();
            func_0x000107c5a188(puVar7);
            puVar5 = puVar7;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991124);
              (*pcVar2)();
            }
            func_0x000107c566ec();
            func_0x000107c61170(puVar5);
            puVar5 = puVar7;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991120);
              (*pcVar2)();
            }
            func_0x000107c56390();
            func_0x000107c61170(puVar5);
            puVar11 = (undefined *)0x112da9b98;
            func_0x0001000285a8(0x112da9b98,&UNK_10daf89c0);
            lVar16 = *(long *)(puVar11 + -8);
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
            uVar23 = (long)puVar3 - extraout_x8_00;
            param_1 = (double)param_2;
            puVar5 = PTR__OBJC_CLASS___NSUnitDuration_1126a74b8;
            func_0x000107c61168(PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
            func_0x000107c51b2c();
            func_0x000107c61180();
            puVar8 = (undefined *)0x0;
            FUN_102991170(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
            func_0x000107c5eb5c(uVar23,puVar5,puVar8);
            uVar19 = uVar23;
            func_0x000107c60070();
            func_0x000107c61170(puVar7);
            (**(code **)(lVar16 + 8))(uVar23);
            param_2 = uStack_98;
            puVar5 = puStack_a0;
            uVar23 = uStack_a8;
            goto LAB_102990fc8;
          }
        }
        else if ((lVar16 == 1) && (func_0x000107c4219c(param_2), 0.0 < param_1)) {
          func_0x000107c4219c(param_2);
          iVar4 = 2;
          func_0x000100029b9c(2,0x10,0,0);
          uVar23 = 0;
          func_0x000107c5ef14();
          lVar16 = *(long *)(uVar23 - 8);
          uVar19 = uVar23;
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
          puVar18 = (undefined1 *)((long)puVar3 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
          func_0x000107c5ef04(puVar18);
          if (iVar4 == 0) {
            func_0x000107c5eee8();
            (**(code **)(lVar16 + 8))(puVar18,uVar23);
          }
          else {
            lVar6 = 0;
            func_0x000107c5eef0();
            lVar26 = *(long *)(lVar6 + -8);
            lVar24 = *(long *)(lVar26 + 0x40);
            puStack_b0 = puVar18;
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            uVar19 = lVar24 + 0xfU & 0xfffffffffffffff0;
            lVar21 = (long)puVar18 - uVar19;
            puStack_b8 = (undefined1 *)puVar3;
            func_0x000107c5eef8(lVar21);
            (**(code **)(lVar16 + 8))(puVar18,uVar23);
            lStack_c0 = lVar21;
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar22 = lVar21 - uVar19;
            lVar16 = lVar22;
            (**(code **)(lVar26 + 0x10))(lVar22,lVar21,lVar6);
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar25 = lVar22 - uVar19;
            func_0x000107c5eeec(lVar25);
            FUN_10298f810();
            lVar24 = lVar25;
            func_0x000107c5fab8(lVar25,lVar22,lVar6,lVar16);
            pcVar2 = *(code **)(lVar26 + 8);
            (*pcVar2)(lVar25,lVar6);
            (*pcVar2)(lVar22,lVar6);
            (*pcVar2)(lVar21,lVar6);
            uVar19 = (ulong)((uint)lVar24 ^ 1);
            puVar3 = (ulong *)puStack_b8;
          }
          puVar11 = (undefined *)0x112e57030;
          func_0x0001000285a8(0x112e57030,&UNK_10daf8a30);
          puStack_b8 = *(undefined1 **)(puVar11 + -8);
          lVar16 = *(long *)(puStack_b8 + 0x40);
          puStack_b0 = (undefined1 *)puVar3;
          (*(code *)PTR____chkstk_darwin_11034bd40)(lVar16 + 0xfU & 0xfffffffffffffff0);
          uVar23 = (long)puVar3 - extraout_x8_01;
          puVar7 = PTR__OBJC_CLASS___NSUnitLength_1126de068;
          func_0x000107c61168(PTR__OBJC_CLASS___NSUnitLength_1126de068);
          puVar5 = puVar7;
          func_0x000107c4ce58();
          func_0x000107c61180();
          puVar8 = (undefined *)0x0;
          FUN_102991170(0,0x112e57038,&PTR__OBJC_CLASS___NSUnitLength_1126de068);
          func_0x000107c5eb5c(uVar23,puVar5,puVar8);
          puVar5 = PTR__OBJC_CLASS___NSMeasurementFormatter_1126dc3b0;
          func_0x000107c610f8();
          func_0x000107c453e4();
          if ((uVar19 & 1) == 0) {
            func_0x000107c5a18c();
            func_0x000107c5a188(puVar5);
            puVar9 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10299112c);
              (*pcVar2)();
            }
            func_0x000107c566ec();
            func_0x000107c61170(puVar9);
            puVar9 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991128);
              (*pcVar2)();
            }
            func_0x000107c56390();
            func_0x000107c61170(puVar9);
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            uVar17 = uVar23 - (lVar16 + 0xfU & 0xfffffffffffffff0);
            func_0x000107c42f78(puVar7);
            func_0x000107c61180();
            func_0x000107c5eb64(uVar17);
            func_0x000107c61170(puVar7);
            uVar19 = uVar17;
            func_0x000107c60070();
            func_0x000107c61170(puVar5);
            pcVar2 = *(code **)(puStack_b8 + 8);
            (*pcVar2)(uVar17,puVar11);
            (*pcVar2)(uVar23);
            puVar3 = (ulong *)puStack_b0;
            param_2 = uStack_98;
            puVar5 = puStack_a0;
            uVar23 = uStack_a8;
          }
          else {
            func_0x000107c5a18c();
            func_0x000107c5a188(puVar5);
            puVar7 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991134);
              (*pcVar2)();
            }
            func_0x000107c566ec();
            func_0x000107c61170(puVar7);
            puVar7 = puVar5;
            func_0x000107c4d900();
            func_0x000107c61180();
            if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102991130);
              (*pcVar2)();
            }
            func_0x000107c56390();
            func_0x000107c61170(puVar7);
            uVar19 = uVar23;
            func_0x000107c60070();
            func_0x000107c61170(puVar5);
            (**(code **)(puStack_b8 + 8))(uVar23);
            puVar3 = (ulong *)puStack_b0;
            param_2 = uStack_98;
            puVar5 = puStack_a0;
            uVar23 = uStack_a8;
          }
LAB_102990fc8:
          puVar7 = puVar10;
          func_0x000107c61558();
          param_3 = puVar11;
          puVar11 = puVar10;
          if (((ulong)puVar7 & 1) == 0) {
            param_3 = (undefined *)(*(long *)(puVar10 + 0x10) + 1);
            puVar11 = (undefined *)0x0;
            func_0x0001000d182c(0,param_3,1,puVar10);
          }
          uVar17 = *(ulong *)(puVar11 + 0x10);
          puVar7 = (undefined *)(uVar17 + 1);
          puVar10 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar17) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            param_3 = puVar7;
            func_0x0001000d182c(puVar10,puVar7,1,puVar11);
          }
          *(undefined **)(puVar10 + 0x10) = puVar7;
          *(ulong *)(puVar10 + uVar17 * 0x10 + 0x20) = uVar19;
          *(undefined **)(puVar10 + uVar17 * 0x10 + 0x28) = puVar8;
        }
      }
      else {
        uVar17 = param_2;
        if (lVar16 == 2) {
          uVar19 = param_2;
          func_0x000107c3f5b8();
          if (uVar19 != 0) {
            func_0x000107c3f5b8();
            if (uVar17 == 3) {
              func_0x000109025978();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991150);
                (*pcVar2)();
              }
            }
            else if (uVar17 == 2) {
              func_0x000109025960();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10299114c);
                (*pcVar2)();
              }
            }
            else if (uVar17 == 1) {
              func_0x000109025948();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991148);
                (*pcVar2)();
              }
            }
            else {
              func_0x0001090258a0();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991144);
                (*pcVar2)();
              }
            }
LAB_102990fb0:
            uVar19 = uVar17;
            func_0x000107c5faec();
            puVar11 = param_3;
            func_0x000107c61170(uVar17);
            puVar8 = param_3;
            goto LAB_102990fc8;
          }
        }
        else if (lVar16 == 3) {
          uVar19 = param_2;
          func_0x000107c5ce44();
          if (uVar19 != 0) {
            func_0x000107c5ce44();
            if (uVar17 == 2) {
              func_0x0001090259a8();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991140);
                (*pcVar2)();
              }
            }
            else if (uVar17 == 1) {
              func_0x000109025990();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10299113c);
                (*pcVar2)();
              }
            }
            else {
              func_0x0001090258a0();
              func_0x000107c61180();
              if (uVar17 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102991138);
                (*pcVar2)();
              }
            }
            goto LAB_102990fb0;
          }
        }
        else if ((lVar16 == 4) && (uVar19 = param_2, func_0x000107c436c8(), uVar19 != 0)) {
          uVar19 = 0;
          puVar11 = param_3;
          puVar8 = (undefined *)0xe000000000000000;
          goto LAB_102990fc8;
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar23 != uVar20);
    func_0x000107c6142c(puVar5);
    puVar7 = puStack_c8;
    uVar19 = uStack_d0;
  }
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar19 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if ((uVar19 != 0) && (*(long *)(puVar10 + 0x10) != 0)) {
    func_0x000107c5fb78(0x203a,0xe200000000000000);
  }
  puVar7 = puStack_78;
  uVar19 = uStack_80;
  uVar12 = 0x112d38270;
  puStack_90 = puVar10;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar13 = uVar12;
  func_0x00010011d734();
  uVar14 = 0x202c;
  uVar15 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar12,uVar13);
  func_0x000107c6142c(puVar10);
  puStack_90 = (undefined *)uVar19;
  puStack_88 = puVar7;
  func_0x000107c61434(puVar7);
  func_0x000107c5fb78(uVar14,uVar15);
  func_0x000107c6142c(puVar7);
  func_0x000107c6142c(uVar15);
  auVar1._8_8_ = puStack_88;
  auVar1._0_8_ = puStack_90;
  return auVar1;
}



/* Entry: 102991150; end: 10299116f;  */

void FUN_102991150(void)

{
  func_0x000107c61168(&PTR_PTR_112875b00);
  return;
}



/* Entry: 102991170; end: 1029911af;  */

void FUN_102991170(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1029911b0; end: 10299121b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029911b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1029915a4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ed1af8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10299121c; end: 102991287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299121c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed1af8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102991288; end: 1029912e7; -[_TtC52FamilyCenterInvitePromptScopedFactoryServiceProvider40SCFamilyCenterInvitePromptScopedServices init] */

void FUN_102991288(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterInvitePromptScopedFactoryServiceProvider.SCFamilyCenterInvitePromptScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1029912b4);
  (*pcVar1)();
}



/* Entry: 1029912e8; end: 1029912f7; -[_TtC52FamilyCenterInvitePromptScopedFactoryServiceProvider40SCFamilyCenterInvitePromptScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029912e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed1af8));
  return;
}



/* Entry: 1029912f8; end: 102991363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029912f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105772c0;
  func_0x000107c613fc(&UNK_1105772c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10299163c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102991364; end: 1029913ff;  */

void FUN_102991364(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105771d0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105771d0;
  return;
}



/* Entry: 102991400; end: 102991437;  */

void FUN_102991400(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 102991438; end: 10299143f;  */

undefined8 FUN_102991438(void)

{
  return 0x1b;
}



/* Entry: 102991440; end: 102991573;  */

void FUN_102991440(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105772e8;
  func_0x000107c613fc(&UNK_1105772e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102991614;
  func_0x00010058fa64(FUN_102991614,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102991574; end: 1029915a3;  */

undefined ** FUN_102991574(void)

{
  return &PTR_DAT_112ed1e28;
}



/* Entry: 1029915a4; end: 1029915c3;  */

void FUN_1029915a4(void)

{
  func_0x000107c61168(&PTR_PTR_112875bb0);
  return;
}



/* Entry: 1029915c4; end: 102991613;  */

undefined1  [16] FUN_1029915c4(void)

{
  return ZEXT816(0x110577220);
}



/* Entry: 102991614; end: 10299163b;  */

void FUN_102991614(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10299163c; end: 10299163f;  */

void FUN_10299163c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102991640; end: 102991747;  */

/* WARNING: Possible PIC construction at 0x0001029916fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299170c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299171c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102991710) */
/* WARNING: Removing unreachable block (ram,0x000102991700) */
/* WARNING: Removing unreachable block (ram,0x000102991720) */

void FUN_102991640(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110577370;
  func_0x000107c613fc(&UNK_110577370,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  uVar2 = 0x112ed1b68;
  func_0x0001000285a8(0x112ed1b68,&UNK_10daf8d38);
  func_0x000107c613fc();
  pcVar3 = FUN_102991b8c;
  func_0x0001000841fc(FUN_102991b8c,puVar1,uVar2);
  func_0x000100084214(&UNK_10daf8d00,0x36,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102991748; end: 10299176b;  */

/* WARNING: Possible PIC construction at 0x0001029916fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299170c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299171c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102991710) */
/* WARNING: Removing unreachable block (ram,0x000102991700) */
/* WARNING: Removing unreachable block (ram,0x000102991720) */

void FUN_102991748(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar6 = &UNK_110577370;
  func_0x000107c613fc(&UNK_110577370,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  *(undefined8 *)(puVar6 + 0x38) = uVar5;
  *(undefined8 *)(puVar6 + 0x40) = uVar9;
  uVar7 = 0x112ed1b68;
  func_0x0001000285a8(0x112ed1b68,&UNK_10daf8d38);
  func_0x000107c613fc();
  pcVar8 = FUN_102991b8c;
  func_0x0001000841fc(FUN_102991b8c,puVar6,uVar7);
  func_0x000100084214(&UNK_10daf8d00,0x36,2);
  *param_1 = pcVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10299176c; end: 102991b37;  */

void FUN_10299176c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112ed1b70,&UNK_10daf8d40);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10299329c();
  func_0x000100082720("SCSettingsScopeExposerSubjectServiceProvider",0x2c,2);
  puVar3 = puVar2;
  FUN_102993328();
  func_0x000100082720("SCSettingsScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_102991400;
  func_0x0001000823a8(FUN_102991400,0);
  func_0x000100082720("SCFamilyCenterInvitePromptScopedServicesCleanupRelayServiceProvider",0x43,2);
  puVar5 = puVar2;
  FUN_102993150();
  func_0x000100082720("FamilyCenterInvitePromptScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ed1b78,&UNK_10daf8d50);
  puVar6 = &UNK_110577398;
  func_0x000107c613fc(&UNK_110577398,0x58,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 **)(puVar6 + 0x50) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(puVar3);
  pcVar7 = FUN_102991ba0;
  func_0x0001000823a8(FUN_102991ba0,puVar6);
  func_0x000100082720("SCFamilyCenterInvitePromptEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ed1b80,&UNK_10daf8d58);
  puVar6 = &UNK_1105773c0;
  func_0x000107c613fc(&UNK_1105773c0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(code **)(puVar6 + 0x20) = pcVar7;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_102991bd4;
  func_0x0001000823a8(FUN_102991bd4,puVar6);
  func_0x000100082720("SCFamilyCenterInvitePromptScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112ed1b00,&UNK_10daf8a80);
  func_0x000107c6157c(pcVar8);
  uVar10 = 0x102991be0;
  func_0x0001000823a8(0x102991be0,pcVar8);
  func_0x000100082720("SCFamilyCenterInvitePromptScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ed1af0,&UNK_10daf8a70);
  func_0x000107c6157c(uVar10);
  uVar9 = 0x102991be8;
  func_0x0001000823a8(0x102991be8,uVar10);
  func_0x000100082720("SCFamilyCenterInvitePromptScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1105773e8;
  func_0x000107c613fc(&UNK_1105773e8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x102991bf0;
  func_0x0001000823a8(0x102991bf0,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCFamilyCenterInvitePromptScopeEntryPointProvider",0x31,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102991b38; end: 102991b8b;  */

void FUN_102991b38(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102991b8c; end: 102991b9f;  */

void FUN_102991b8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar16 = *param_2;
  func_0x0001000285a8(0x112ed1b70,&UNK_10daf8d40);
  puVar5 = &uStack_68;
  uStack_68 = uVar16;
  func_0x0001000838ec();
  puVar6 = puVar5;
  FUN_10299329c();
  func_0x000100082720("SCSettingsScopeExposerSubjectServiceProvider",0x2c,2);
  puVar7 = puVar6;
  FUN_102993328();
  func_0x000100082720("SCSettingsScopeExposerObservableServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar8 = FUN_102991400;
  func_0x0001000823a8(FUN_102991400,0);
  func_0x000100082720("SCFamilyCenterInvitePromptScopedServicesCleanupRelayServiceProvider",0x43,2);
  puVar9 = puVar6;
  FUN_102993150();
  func_0x000100082720("FamilyCenterInvitePromptScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112ed1b78,&UNK_10daf8d50);
  puVar10 = &UNK_110577398;
  func_0x000107c613fc(&UNK_110577398,0x58,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar5;
  *(undefined8 *)(puVar10 + 0x18) = uVar13;
  *(undefined8 *)(puVar10 + 0x20) = uVar2;
  *(undefined8 *)(puVar10 + 0x28) = uVar14;
  *(undefined8 *)(puVar10 + 0x30) = uVar3;
  *(undefined8 *)(puVar10 + 0x38) = uVar1;
  *(undefined8 *)(puVar10 + 0x40) = uVar4;
  *(undefined8 *)(puVar10 + 0x48) = uVar15;
  *(undefined8 **)(puVar10 + 0x50) = puVar7;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar15);
  func_0x000107c6157c(puVar7);
  pcVar11 = FUN_102991ba0;
  func_0x0001000823a8(FUN_102991ba0,puVar10);
  func_0x000100082720("SCFamilyCenterInvitePromptEntryPointWrapperServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112ed1b80,&UNK_10daf8d58);
  puVar10 = &UNK_1105773c0;
  func_0x000107c613fc(&UNK_1105773c0,0x30,7);
  *(undefined8 **)(puVar10 + 0x10) = puVar5;
  *(undefined8 **)(puVar10 + 0x18) = puVar9;
  *(code **)(puVar10 + 0x20) = pcVar11;
  *(code **)(puVar10 + 0x28) = pcVar8;
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar11);
  func_0x000107c6157c(pcVar8);
  pcVar12 = FUN_102991bd4;
  func_0x0001000823a8(FUN_102991bd4,puVar10);
  func_0x000100082720("SCFamilyCenterInvitePromptScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112ed1b00,&UNK_10daf8a80);
  func_0x000107c6157c(pcVar12);
  uVar13 = 0x102991be0;
  func_0x0001000823a8(0x102991be0,pcVar12);
  func_0x000100082720("SCFamilyCenterInvitePromptScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112ed1af0,&UNK_10daf8a70);
  func_0x000107c6157c(uVar13);
  uVar14 = 0x102991be8;
  func_0x0001000823a8(0x102991be8,uVar13);
  func_0x000100082720("SCFamilyCenterInvitePromptScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar10 = &UNK_1105773e8;
  func_0x000107c613fc(&UNK_1105773e8,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar14;
  *(code **)(puVar10 + 0x18) = pcVar8;
  func_0x000107c6157c(pcVar8);
  uVar14 = 0x102991bf0;
  func_0x0001000823a8(0x102991bf0,puVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(pcVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(uVar13);
  func_0x000100082720("SCFamilyCenterInvitePromptScopeEntryPointProvider",0x31,2);
  *param_1 = uVar14;
  return;
}



/* Entry: 102991ba0; end: 102991bd3;  */

void FUN_102991ba0(void)

{
  long unaff_x20;
  
  FUN_102991bf8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102991bd4; end: 102991bf7;  */

void FUN_102991bd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029928b8(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCFamilyCenterInvitePromptScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102991bf8; end: 10299267f;  */

void FUN_102991bf8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  FUN_102992808();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  func_0x0001000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174();
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar11 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar8;
  puVar9 = PTR_PTR_1126abbb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f0d1a90);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f0d1ab0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef1a530);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c530);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61574(uStack_a8);
  *param_1 = param_2;
  return;
}



/* Entry: 102992680; end: 1029926fb;  */

void FUN_102992680(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1029926fc; end: 102992703;  */

undefined8 FUN_1029926fc(void)

{
  return 0x1b;
}



/* Entry: 102992704; end: 102992787;  */

void FUN_102992704(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102992848,param_2,FUN_10299284c,param_2,FUN_102992874,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102992788; end: 1029927d7;  */

undefined8 FUN_102992788(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1029927d8; end: 102992807;  */

undefined ** FUN_1029927d8(void)

{
  return &PTR_DAT_112ed1e28;
}



/* Entry: 102992808; end: 102992827;  */

void FUN_102992808(void)

{
  func_0x000107c61168(&PTR_PTR_112ed1bf0);
  return;
}



/* Entry: 102992828; end: 10299284b;  */

undefined1  [16] FUN_102992828(void)

{
  return ZEXT816(0x110577440);
}



/* Entry: 10299284c; end: 102992873;  */

void FUN_10299284c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102992874; end: 10299287b;  */

undefined8 FUN_102992874(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 10299287c; end: 1029928b7;  */

void FUN_10299287c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1029928b8();
  func_0x0001000a7f38("SCFamilyCenterInvitePromptScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1029928b8; end: 102992aa3;  */

void FUN_1029928b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105777d0;
  ppuVar4 = &PTR_DAT_112ed1e28;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110577490;
  func_0x000107c613fc(&UNK_110577490,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ed1c90;
  func_0x0001000285a8(0x112ed1c90,&UNK_10daf8ef0);
  func_0x0001000a6ee8(&UNK_110577688,
                      "FamilyCenterInvitePromptScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_102992aa4,puVar2,uVar3,&UNK_110577688,&PTR_DAT_112ed1d28);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110577440,
                      "SCFamilyCenterInvitePromptEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_102992b58,param_3,uVar3,&UNK_110577440,&PTR_DAT_112ed1b88);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105774b8;
  func_0x000107c613fc(&UNK_1105774b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110577260,
                      "SCFamilyCenterInvitePromptScopedServicesScopeInitializationPluginKey",0x44,2,
                      FUN_102992c08,puVar2,uVar3,&UNK_110577260,&PTR_DAT_112ed1b08);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ed1c98;
  func_0x0001000285a8(0x112ed1c98,&UNK_10daf8ef8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102992aa4; end: 102992ae3;  */

void FUN_102992aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1029933d0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("FamilyCenterInvitePromptScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102992ae4; end: 102992b57;  */

void FUN_102992ae4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102992c44;
  func_0x0001000823a8(0x102992c44,param_3);
  func_0x000100082720("SCFamilyCenterInvitePromptEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102992b58; end: 102992b5f;  */

void FUN_102992b58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102992c44;
  func_0x0001000823a8();
  func_0x000100082720("SCFamilyCenterInvitePromptEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102992b60; end: 102992c07;  */

void FUN_102992b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105774e0;
  func_0x000107c613fc(&UNK_1105774e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102992c3c;
  func_0x0001000823a8(FUN_102992c3c,puVar1);
  func_0x000100082720("SCFamilyCenterInvitePromptScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102992c08; end: 102992c0f;  */

void FUN_102992c08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105774e0;
  func_0x000107c613fc(&UNK_1105774e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102992c3c;
  func_0x0001000823a8(FUN_102992c3c,puVar3);
  func_0x000100082720("SCFamilyCenterInvitePromptScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102992c10; end: 102992c3b;  */

void FUN_102992c10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102992c3c; end: 102992c4b;  */

void FUN_102992c3c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1105772e8;
  func_0x000107c613fc(&UNK_1105772e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102991614;
  func_0x00010058fa64(FUN_102991614,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102992c4c; end: 102992d27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102992c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102993060();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ed1ca0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ed1ca8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102992d28);
  (*pcVar1)();
}



/* Entry: 102992d28; end: 102992d87; -[_TtC40FamilyCenterInvitePromptScopeGraphBridge55FamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint init] */

void FUN_102992d28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterInvitePromptScopeGraphBridge.FamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102992d54);
  (*pcVar1)();
}



/* Entry: 102992d88; end: 102992dbf; -[_TtC40FamilyCenterInvitePromptScopeGraphBridge55FamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102992da4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102992da8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102992d88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1ca0));
  return;
}



/* Entry: 102992dc0; end: 102992de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102992dc0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ed1ca8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ed1ca0));
  return;
}



/* Entry: 102992de8; end: 102992e07;  */

void FUN_102992de8(void)

{
  func_0x000107c61168(&PTR_PTR_112875c70);
  return;
}



/* Entry: 102992e08; end: 102992e8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102992e08(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed1cd8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ed1ce0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102992e90);
  (*pcVar2)();
}



/* Entry: 102992e90; end: 102992f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102992e90(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed1cd8);
  *(undefined **)(unaff_x20 + _DAT_112ed1cd8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ed1ce0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ed1ce0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105775a8;
  func_0x000107c613fc(&UNK_1105775a8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102992f7c,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102992f78; end: 102992f83;  */

void FUN_102992f78(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102992f84; end: 102992fe3; -[_TtC40FamilyCenterInvitePromptScopeGraphBridge55SCFamilyCenterInvitePromptScopedServicesSaberEntryPoint init] */

void FUN_102992f84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterInvitePromptScopeGraphBridge.SCFamilyCenterInvitePromptScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102992fb0);
  (*pcVar1)();
}



/* Entry: 102992fe4; end: 10299301b; -[_TtC40FamilyCenterInvitePromptScopeGraphBridge55SCFamilyCenterInvitePromptScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102992fe4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ed1ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1cd8));
  return;
}



/* Entry: 10299301c; end: 10299301f;  */

void FUN_10299301c(void)

{
  return;
}



/* Entry: 102993020; end: 10299303f;  */

void FUN_102993020(void)

{
  FUN_102992e90();
  return;
}



/* Entry: 102993040; end: 10299305f;  */

void FUN_102993040(void)

{
  func_0x000107c61168(&PTR_PTR_112875d38);
  return;
}



/* Entry: 102993060; end: 10299312f;  */

undefined8 FUN_102993060(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ed1d10,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_102993130();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102993130; end: 10299314f;  */

void FUN_102993130(void)

{
  func_0x000107c61168(&PTR_PTR_112875e00);
  return;
}



/* Entry: 102993150; end: 10299316b;  */

void FUN_102993150(undefined8 param_1)

{
  func_0x0001000285a8(0x112ed1d18,&UNK_10daf8fc8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1029931d8,param_1);
  return;
}



/* Entry: 10299316c; end: 1029931d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299316c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102993130();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ed1d20) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1029931d8; end: 1029931df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029931d8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102993130();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ed1d20) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1029931e0; end: 10299322b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029931e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ed1d20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10299322c; end: 10299328b; -[_TtC40FamilyCenterInvitePromptScopeGraphBridge48FamilyCenterInvitePromptScopeGraphBridgeServices init] */

void FUN_10299322c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterInvitePromptScopeGraphBridge.FamilyCenterInvitePromptScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102993258);
  (*pcVar1)();
}



/* Entry: 10299328c; end: 10299329b; -[_TtC40FamilyCenterInvitePromptScopeGraphBridge48FamilyCenterInvitePromptScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299328c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ed1d20));
  return;
}



/* Entry: 10299329c; end: 102993327;  */

void FUN_10299329c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1029932dc,0);
  return;
}



/* Entry: 102993328; end: 102993343;  */

void FUN_102993328(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102993394,param_1);
  return;
}



/* Entry: 102993344; end: 102993393;  */

void FUN_102993344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102993394; end: 1029933c7;  */

void FUN_102993394(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1029933c8; end: 1029933cf;  */

undefined8 FUN_1029933c8(void)

{
  return 0x1b;
}



/* Entry: 1029933d0; end: 102993547;  */

void FUN_1029933d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105775f0;
  func_0x000107c613fc(&UNK_1105775f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102993548,puVar1);
  return;
}



/* Entry: 102993548; end: 10299354f;  */

void FUN_102993548(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112ed1d10,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ed1d10,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105776c8;
  func_0x000107c613fc(&UNK_1105776c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10299361c;
  func_0x00010058fa64(0x10299361c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102993550; end: 1029935ab;  */

void FUN_102993550(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ed1d10,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ed1d10,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1029935ac; end: 102993623;  */

undefined ** FUN_1029935ac(void)

{
  return &PTR_DAT_112ed1e28;
}



/* Entry: 102993624; end: 10299366b; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993624(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed1d78;
  func_0x000107c61428(param_1 + _DAT_112ed1d78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10299366c; end: 1029936c3; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299366c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed1d78;
  func_0x000107c61428(param_1 + _DAT_112ed1d78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1029936c4; end: 10299370b; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint sCSettingsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029936c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed1d80;
  func_0x000107c61428(param_1 + _DAT_112ed1d80,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10299370c; end: 102993717; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint setSCSettingsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10299370c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed1d80;
  func_0x000107c61428(param_1 + _DAT_112ed1d80,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102993718; end: 10299375f; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint familyCenterInvitePromptScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993718(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed1d88;
  func_0x000107c61428(param_1 + _DAT_112ed1d88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102993760; end: 10299376b; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint setFamilyCenterInvitePromptScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993760(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed1d88;
  func_0x000107c61428(param_1 + _DAT_112ed1d88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10299376c; end: 1029937cb;  */

void FUN_10299376c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1029937cc; end: 102993987;  */

/* WARNING: Possible PIC construction at 0x0001029938e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102993908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102993918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010299395c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010299391c) */
/* WARNING: Removing unreachable block (ram,0x00010299390c) */
/* WARNING: Removing unreachable block (ram,0x0001029938e8) */
/* WARNING: Removing unreachable block (ram,0x000102993960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029937cc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c512b4();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c42d9c();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102992de8();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102993060();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102993988);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ed1ca0) = lVar5;
      *(long *)(lVar3 + _DAT_112ed1ca8) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102993988; end: 1029939af; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102993988(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1029937cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029939b0; end: 1029939f3; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint end] */

void FUN_1029939b0(undefined8 param_1)

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



/* Entry: 1029939f4; end: 102993bf7;  */

void FUN_1029939f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0fa21c0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f05de40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000037;
        if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef0f2e210)) &&
           (func_0x000107c605b8(0xd000000000000037,0x800000010f0d1df0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "FamilyCenterInvitePromptScopeGraphBridge/SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x68,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102993bf8);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5488c();
        goto LAB_102993a80;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5885c();
  }
LAB_102993a80:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102993bf8; end: 102993ca3; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102993bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1029939f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102993ca4; end: 102993d1b; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993ca4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ed1d78,0);
  *(undefined8 *)(param_1 + _DAT_112ed1d80) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed1d88) = 0;
  *(undefined8 *)(param_1 + _DAT_112ed1d90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102993d1c; end: 102993d4f;  */

void FUN_102993d1c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102993d50; end: 102993da7; -[SCFamilyCenterInvitePromptScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102993d7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102993d80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993d50(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ed1d78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ed1d80));
  return;
}



/* Entry: 102993da8; end: 102993dc7;  */

void FUN_102993da8(void)

{
  func_0x000107c61168(&PTR_PTR_112875ec0);
  return;
}



/* Entry: 102993dc8; end: 102993e0f; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993dc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ed1dc0;
  func_0x000107c61428(param_1 + _DAT_112ed1dc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102993e10; end: 102993e67; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ed1dc0;
  func_0x000107c61428(param_1 + _DAT_112ed1dc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102993e68; end: 102993f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993e68(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_102993040();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ed1cd8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102993f40);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ed1ce0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ed1dc8);
    *(long **)(unaff_x20 + _DAT_112ed1dc8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102993f40; end: 102993f67; -[SCSCFamilyCenterInvitePromptScopedServicesSaberEntryPoint begin] */

void FUN_102993f40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102993e68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102993f68; end: 1029940df;  */

/* WARNING: Possible PIC construction at 0x000102993fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102994068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102993fd4) */
/* WARNING: Removing unreachable block (ram,0x00010299406c) */
/* WARNING: Removing unreachable block (ram,0x000102994084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102993f68(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ed1dc8);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1029940e0; end: 1029940e7;  */

void FUN_1029940e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}


