/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a01de4; end: 101a01f07;  */

long FUN_101a01de4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a01f04);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a01f08);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112deb068;
        func_0x0001000285a8(0x112deb068,&UNK_10d9b85d0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112deb068;
      func_0x0001000285a8(0x112deb068,&UNK_10d9b85d0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a01f00);
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



/* Entry: 101a01f08; end: 101a02137;  */

long FUN_101a01f08(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0201c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a02020);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_101a03e2c(0,0x112deb088,&PTR_PTR_1126bf6a8);
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
      FUN_101a03e2c(0,0x112deb088,&PTR_PTR_1126bf6a8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101a02018);
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



/* Entry: 101a02138; end: 101a0214b;  */

void FUN_101a02138(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deb070 == (undefined *)0x0 || ((ulong)puRam0000000112deb070 & 1) != 0) {
    puVar1 = &UNK_10e88f2c4;
    func_0x000107c61518(&UNK_10e88f2c4,0x25,0,0);
    puRam0000000112deb070 = puVar1;
  }
  return;
}



/* Entry: 101a0214c; end: 101a021c3;  */

void FUN_101a0214c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101a03e2c(0,param_1,param_2);
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



/* Entry: 101a021c4; end: 101a023eb;  */

void FUN_101a021c4(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  (*param_3)();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 101a023ec; end: 101a02617;  */

undefined * FUN_101a023ec(undefined *param_1,undefined1 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined1 *)0x0) {
    func_0x000107c615e8();
    puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112d5ced0,&UNK_10d9238b8);
    puVar6 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar6;
    func_0x000107c60418();
    puVar8 = param_1;
    func_0x000107c60444();
    if (puVar8 != (undefined *)0x0) {
      uVar7 = 0;
      FUN_101a03e2c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar8;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar7,7);
        ppuVar9 = &puStack_80;
        puStack_80 = param_2;
        func_0x000107c6147c(&puStack_78,&puStack_80,puVar2 + 8,uVar7,7);
        uVar4 = uStack_70;
        puVar3 = puStack_78;
        if (*(ulong *)(puVar6 + 0x18) <= *(ulong *)(puVar6 + 0x10)) {
          ppuVar9 = (undefined1 **)0x1;
          FUN_101a028c0(*(ulong *)(puVar6 + 0x10) + 1);
          puVar6 = puStack_68;
        }
        puVar8 = *(undefined **)(puVar6 + 0x28);
        func_0x000107c60114();
        uVar13 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
        uVar12 = (ulong)puVar8 & (uVar13 ^ 0xffffffffffffffff);
        uVar10 = uVar12 >> 6;
        uVar11 = -1L << (uVar12 & 0x3f) &
                 (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar1 = false;
          uVar11 = 0x3f - uVar13 >> 6;
          do {
            uVar12 = uVar10 + 1;
            if ((uVar12 == uVar11) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101a02618);
              (*pcVar5)();
            }
            uVar10 = 0;
            if (uVar12 != uVar11) {
              uVar10 = uVar12;
            }
            bVar1 = (bool)(uVar12 == uVar11 | bVar1);
          } while (*(ulong *)(puVar6 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar6 + uVar10 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar6 + uVar10 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar6 + uVar10 + 0x40);
        *(undefined8 *)(*(long *)(puVar6 + 0x30) + uVar11 * 8) = uVar4;
        *(undefined **)(*(long *)(puVar6 + 0x38) + uVar11 * 8) = puVar3;
        *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
        func_0x000107c60444();
        param_2 = (undefined1 *)ppuVar9;
      } while (puVar8 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar6;
}



/* Entry: 101a02618; end: 101a0275b;  */

void FUN_101a02618(undefined8 param_1,ulong param_2,uint param_3)

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
  func_0x000100121450();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a026ec);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_101a028c0(lVar5);
    uVar2 = param_2;
    func_0x000100121450();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_101a03e2c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a026b8);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_101a0275c();
    lVar5 = *unaff_x20;
    goto joined_r0x000101a02700;
  }
  lVar5 = *unaff_x20;
joined_r0x000101a02700:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0275c);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101a0275c; end: 101a028bf;  */

void FUN_101a0275c(void)

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
  
  func_0x0001000285a8(0x112d5ced0,&UNK_10d9238b8);
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
    if (uVar5 == 0) goto LAB_101a02838;
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
LAB_101a02838:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a028c0);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_101a02898;
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
LAB_101a02898:
  func_0x000107c61574(lVar8);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101a028c0; end: 101a02cb7;  */

void FUN_101a028c0(long param_1,ulong param_2)

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
  uVar11 = 0x112d5ced0;
  func_0x0001000285a8(0x112d5ced0,&UNK_10d9238b8);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar11);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101a02af4:
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a02b24);
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
          goto LAB_101a02af4;
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
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a02b28);
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



/* Entry: 101a02cb8; end: 101a02d13;  */

void FUN_101a02cb8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101a02d14();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101a02d14; end: 101a02f7b;  */

undefined * FUN_101a02d14(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a02e68);
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
    puVar3 = (undefined *)0x112deb0b0;
    FUN_101a0214c(0x112deb0b0,&PTR_PTR_1126bf6a0,0x112deb0b8,&UNK_10d9b73c8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_101a03e2c(0,0x112deb0b0,&PTR_PTR_1126bf6a0);
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



/* Entry: 101a02f7c; end: 101a03257;  */

undefined * FUN_101a02f7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101a03094);
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
    puVar3 = (undefined *)0x112deb0c0;
    func_0x0001000285a8(0x112deb0c0,&UNK_10d9b73d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101a03258; end: 101a033fb;  */

ulong FUN_101a03258(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a03330);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a03334);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000018,0x800000010efc8b10);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101a033fc);
  (*pcVar2)();
}



/* Entry: 101a033fc; end: 101a036c7;  */

ulong FUN_101a033fc(undefined8 *param_1,long param_2,ulong param_3)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a03564);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a03558);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_101a03e2c(0,0x112deb088,&PTR_PTR_1126bf6a8);
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
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a0355c);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101a03560);
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
          func_0x000101a03094(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 101a036c8; end: 101a038a7;  */

long FUN_101a036c8(long param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != 0) {
    lVar4 = param_1;
    func_0x000107c61174();
    lVar5 = lVar4;
    func_0x000107c309a4();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c51868();
    if ((((lVar6 == 1) && (lVar6 = lVar5, func_0x000107c5e9e8(), lVar6 == 1)) &&
        (lVar6 = lVar5, func_0x000107c5e9f8(), lVar6 == 1)) &&
       ((lVar6 = lVar5, func_0x000107c5090c(), lVar6 == 1 &&
        (lVar6 = lVar5, func_0x000107c5ca88(), lVar6 == 1)))) {
      lVar6 = lVar5;
      func_0x000107c51864();
      func_0x000107c61180();
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0389c);
        (*pcVar3)();
      }
      lVar7 = lVar6;
      func_0x000107c5dc14();
      func_0x000107c61170(lVar6);
      if ((int)lVar7 == 5000) {
        lVar6 = lVar5;
        func_0x000107c50908();
        func_0x000107c61180();
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a038a0);
          (*pcVar3)();
        }
        lVar7 = lVar6;
        func_0x000107c5dc14();
        func_0x000107c61170(lVar6);
        if ((int)lVar7 == 0) {
          lVar6 = lVar5;
          func_0x000107c5e9e4();
          func_0x000107c61180();
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a038a4);
            (*pcVar3)();
          }
          lVar7 = lVar6;
          func_0x000107c5dc14();
          func_0x000107c61170(lVar6);
          lVar6 = lVar4;
          func_0x000107c309a8();
          if ((int)(uint)lVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a0388c);
            (*pcVar3)();
          }
          uVar1 = (uint)lVar6 >> 1;
          uVar2 = (int)lVar7 - uVar1;
          if (SBORROW4((int)lVar7,uVar1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101a03890);
            (*pcVar3)();
          }
          uVar1 = -uVar2;
          if (-1 < (int)uVar2) {
            uVar1 = uVar2;
          }
          if (uVar1 < 2) {
            lVar6 = lVar5;
            func_0x000107c5e9f4();
            func_0x000107c61180();
            if (lVar6 == 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a038a8);
              (*pcVar3)();
            }
            lVar7 = lVar6;
            func_0x000107c5dc14();
            func_0x000107c61170(lVar6);
            lVar6 = lVar4;
            func_0x000107c309ac();
            if ((int)(uint)lVar6 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a03894);
              (*pcVar3)();
            }
            uVar1 = (uint)lVar6 >> 1;
            uVar2 = (int)lVar7 - uVar1;
            if (SBORROW4((int)lVar7,uVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101a03898);
              (*pcVar3)();
            }
            func_0x000107c61170(lVar5);
            uVar1 = -uVar2;
            if (-1 < (int)uVar2) {
              uVar1 = uVar2;
            }
            if (1 < uVar1) {
              return param_1;
            }
            param_1 = 0;
            lVar5 = lVar4;
          }
        }
      }
    }
    func_0x000107c61170(lVar5);
  }
  return param_1;
}



/* Entry: 101a038a8; end: 101a03d93;  */

undefined * FUN_101a038a8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  undefined *puStack_108;
  ulong auStack_100 [13];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_98 = param_2[1];
  auStack_100[0xc] = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  puVar17 = param_1;
  FUN_101eb005c();
  uVar12 = *puVar17;
  uVar20 = puVar17[1];
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar17 = *(undefined8 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar17 = param_1;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar20);
  if (puVar17 == (undefined8 *)0x0) {
    puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar19 = 0;
    puStack_108 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar14 = uVar20;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101a03d2c);
          (*pcVar3)();
        }
        uVar11 = param_1[uVar19 + 4];
        func_0x000107c615f0(uVar11);
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      }
      else {
        uVar11 = uVar19;
        FUN_101a03258(uVar19,param_1);
        puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      }
      PTR___sSis23CustomStringConvertiblesWP_11034df00 = puVar6;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a03d28);
        (*pcVar3)();
      }
      puVar13 = (undefined8 *)(uVar19 + 1);
      auStack_100[6] = 0x5f74757074756f;
      auStack_100[7] = 0xe700000000000000;
      auStack_100[0] = uVar19;
      func_0x000107c6057c(PTR___sSiN_11034deb0,puVar6);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      uVar20 = auStack_100[7];
      uVar2 = auStack_100[6];
      lVar16 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      lVar15 = lVar16;
      func_0x000107c613fc();
      *(undefined8 *)(lVar15 + 0x18) = 2;
      *(undefined8 *)(lVar15 + 0x10) = 1;
      *(ulong *)(lVar15 + 0x20) = uVar12;
      *(ulong *)(lVar15 + 0x28) = uVar14;
      func_0x000107c61434(uVar14);
      puVar6 = PTR___sSSN_11034da80;
      lVar4 = lVar15;
      func_0x000107c5fc48(lVar15,PTR___sSSN_11034da80);
      func_0x000107c61574(lVar15);
      func_0x000107c613fc(lVar16,0x30,7);
      *(undefined8 *)(lVar16 + 0x18) = 2;
      *(undefined8 *)(lVar16 + 0x10) = 1;
      *(ulong *)(lVar16 + 0x20) = uVar2;
      *(ulong *)(lVar16 + 0x28) = uVar20;
      func_0x000107c61434(uVar20);
      lVar15 = lVar16;
      func_0x000107c5fc48(lVar16,puVar6);
      func_0x000107c61574(lVar16);
      uVar12 = uVar11;
      func_0x000107c40a4c();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar15);
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101a03d94);
        (*pcVar3)();
      }
      puVar6 = puStack_108;
      func_0x000107c61550();
      if ((((int)puVar6 == 0) || ((long)puStack_108 < 0)) || (((ulong)puStack_108 >> 0x3e & 1) != 0)
         ) {
        if ((ulong)puStack_108 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puStack_108 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puStack_108 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puStack_108) {
            puVar6 = puStack_108;
          }
          func_0x000107c60480(puVar6);
        }
        puVar5 = (undefined *)0x0;
        FUN_101a0191c(0,puVar6 + 1,1,puStack_108);
        puStack_108 = puVar5;
      }
      uVar10 = (ulong)puStack_108 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar10 + 0x10);
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        FUN_101a0191c(puVar6,uVar1 + 1,1,puStack_108);
        uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
        puStack_108 = puVar6;
      }
      *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
      *(ulong *)(uVar10 + uVar1 * 8 + 0x20) = uVar12;
      func_0x000107c6142c(uVar14);
      func_0x000107c615e8(uVar11);
      uVar19 = uVar19 + 1;
      uVar14 = uVar20;
      uVar12 = uVar2;
    } while (puVar13 != puVar17);
  }
  puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
  auStack_100[7] = uStack_98;
  auStack_100[6] = auStack_100[0xc];
  auStack_100[9] = uStack_88;
  auStack_100[8] = uStack_90;
  auStack_100[0xb] = uStack_78;
  auStack_100[10] = uStack_80;
  func_0x000107c5dc60();
  func_0x000107c61180();
  puVar6 = puStack_108;
  if ((ulong)puStack_108 >> 0x3e == 0) {
    uVar12 = (ulong)puStack_108 & 0xffffffffffffff8;
    puVar7 = puStack_108;
    func_0x000107c61434();
    func_0x000107c605f8();
    uVar8 = 0;
    FUN_101a03e2c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61488(puVar7,uVar8);
    if (puVar7 == (undefined *)0x0) {
      lVar16 = *(long *)(uVar12 + 0x10);
      plVar18 = (long *)(uVar12 + 0x20);
      do {
        if (lVar16 == 0) goto LAB_101a03c58;
        lVar15 = *plVar18;
        puVar7 = PTR__OBJC_CLASS___NSObject_1126b1300;
        func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c6148c(lVar15,puVar7);
        lVar16 = lVar16 + -1;
        plVar18 = plVar18 + 1;
      } while (lVar15 != 0);
      puVar6 = (undefined *)(uVar12 | 1);
    }
  }
  else {
    puVar6 = (undefined *)((ulong)puStack_108 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_108) {
      puVar6 = puStack_108;
    }
    uVar8 = 0;
    FUN_101a03e2c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61434(puStack_108);
    func_0x000107c60458(puVar6,uVar8);
    func_0x000107c6142c(puStack_108);
  }
LAB_101a03c58:
  puVar7 = PTR_PTR_1126bf6b8;
  func_0x000107c610f8(PTR_PTR_1126bf6b8);
  FUN_101a03e2c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  puVar9 = puVar6;
  func_0x000107c5fc48(puVar6,uVar8);
  func_0x000107c6142c(puVar6);
  auStack_100[6] = 0x3ff0000000000000;
  auStack_100[7] = 0;
  auStack_100[8] = 0;
  auStack_100[9] = 0x3ff0000000000000;
  auStack_100[10] = 0;
  auStack_100[0xb] = 0;
  auStack_100[0] = 0x3ff0000000000000;
  auStack_100[1] = 0;
  auStack_100[2] = 0;
  auStack_100[3] = 0x3ff0000000000000;
  auStack_100[4] = 0;
  auStack_100[5] = 0;
  func_0x000107c309b0(puVar7,puVar5,auStack_100 + 6,auStack_100,2,0,0,puVar9,0);
  func_0x000107c6142c(puStack_108);
  func_0x000107c6142c(uVar20);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar9);
  return puVar7;
}



/* Entry: 101a03d94; end: 101a03ddb;  */

undefined8 FUN_101a03d94(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112deb078;
  func_0x0001000285a8(0x112deb078,&UNK_10d9b7350);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 101a03ddc; end: 101a03e2b;  */

void FUN_101a03ddc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112deb090 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112deb098;
  func_0x00010002969c(0x112deb098,&UNK_10d9b7368);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112deb090 = puVar2;
  return;
}



/* Entry: 101a03e2c; end: 101a03e6b;  */

void FUN_101a03e2c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101a03e6c; end: 101a03eab;  */

void FUN_101a03e6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112deb0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da212f0;
  func_0x000107c61520(&UNK_10da212f0,&UNK_110494c80);
  puRam0000000112deb0d0 = puVar1;
  return;
}



/* Entry: 101a03eac; end: 101a03ebb;  */

void FUN_101a03eac(void)

{
  long unaff_x20;
  
  **(undefined8 **)(unaff_x20 + 0x10) = 2;
  return;
}



/* Entry: 101a03ebc; end: 101a03edb;  */

void FUN_101a03ebc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101a03edc; end: 101a03f0b;  */

void FUN_101a03edc(long param_1,long param_2)

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



/* Entry: 101a03f0c; end: 101a03f4f;  */

void FUN_101a03f0c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101a03f50; end: 101a03f63;  */

long FUN_101a03f50(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101a03f64; end: 101a03fbf; -[_TtC22SCNGSMESnapBuilderImpl28NGSMESnapBuilderProviderImpl init] */

void FUN_101a03f64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCNGSMESnapBuilderImpl.NGSMESnapBuilderProviderImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a03f90);
  (*pcVar1)();
}



/* Entry: 101a03fc0; end: 101a04017; -[_TtC22SCNGSMESnapBuilderImpl28NGSMESnapBuilderProviderImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101a03fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a03ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a03fe0) */
/* WARNING: Removing unreachable block (ram,0x000101a04000) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a03fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112deb0e8));
  return;
}



/* Entry: 101a04018; end: 101a04037;  */

void FUN_101a04018(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0b28);
  return;
}



/* Entry: 101a04038; end: 101a04143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a04038(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar5 + _DAT_112deb0f0);
  func_0x000107c415b4();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(lVar5 + _DAT_112deb0f8);
  func_0x000107c3e6c0(uVar2);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(lVar5 + _DAT_112deb100);
  uVar3 = 0;
  func_0x0001019feea0();
  uVar4 = uVar3;
  func_0x000107c613fc();
  FUN_1019fd204(uVar1,uVar2,uVar6,uVar4);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_11042c480;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar6);
  return;
}



/* Entry: 101a04144; end: 101a04217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a04144(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar2 = 0;
  FUN_101a04018();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112deb0e8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112deb0f0) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112deb0f8) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112deb100) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_60,puVar1);
  param_1[3] = lVar2;
  param_1[4] = &PTR_DAT_11042c598;
  *param_1 = plVar4;
  return;
}



/* Entry: 101a04218; end: 101a04223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a04218(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_60;
  lVar6 = 0;
  FUN_101a04018();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112deb0e8) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112deb0f0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112deb0f8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112deb100) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_60,puVar5);
  param_1[3] = lVar6;
  param_1[4] = &PTR_DAT_11042c598;
  *param_1 = plVar8;
  return;
}



/* Entry: 101a04224; end: 101a0424f;  */

/* WARNING: Possible PIC construction at 0x000101a04230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a04240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a04234) */
/* WARNING: Removing unreachable block (ram,0x000101a04244) */

void FUN_101a04224(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101a04250; end: 101a042ab;  */

void FUN_101a04250(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a042ac; end: 101a04383;  */

void FUN_101a042ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_11042c5e8;
  func_0x000107c613fc(&UNK_11042c5e8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  func_0x0001000285a8(0x112deb130,&UNK_10d9b7450);
  func_0x000107c613fc();
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  pcVar5 = FUN_101a043c0;
  func_0x0001000bdd8c(FUN_101a043c0,puVar4);
  uVar6 = 0;
  func_0x00010023c888(0);
  func_0x000107c610f8();
  func_0x0001006d9594(pcVar5,uVar6);
  *param_1 = pcVar5;
  return;
}



/* Entry: 101a04384; end: 101a043bf;  */

void FUN_101a04384(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101a043c0; end: 101a043d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a043c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_60;
  lVar6 = 0;
  FUN_101a04018();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112deb0e8) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112deb0f0) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112deb0f8) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112deb100) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c61154(&lStack_60,puVar5);
  param_1[3] = lVar6;
  param_1[4] = &PTR_DAT_11042c598;
  *param_1 = plVar8;
  return;
}



/* Entry: 101a043d4; end: 101a0447f;  */

void FUN_101a043d4(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101a04480; end: 101a04483;  */

void FUN_101a04480(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112deb220 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100fdc390(0xff);
  puVar2 = &UNK_10d9193b0;
  func_0x000107c61520(&UNK_10d9193b0,uVar1);
  puRam0000000112deb220 = puVar2;
  return;
}



/* Entry: 101a04484; end: 101a044c7;  */

void FUN_101a04484(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112deb220 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000100fdc390(0xff);
  puVar2 = &UNK_10d9193b0;
  func_0x000107c61520(&UNK_10d9193b0,uVar1);
  puRam0000000112deb220 = puVar2;
  return;
}



/* Entry: 101a044c8; end: 101a044cf;  */

bool FUN_101a044c8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101a044d0; end: 101a045d3;  */

void FUN_101a044d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x28);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    uVar2 = 0x112deb360;
    func_0x0001000285a8(0x112deb360,&UNK_10d9b7628);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,uVar2,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  }
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar2);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (lVar3 != 0) {
    func_0x000107c4218c();
    func_0x000107c61180();
    (**(code **)(lVar3 + 0x10))();
    func_0x000107c60bd0(lVar3);
  }
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101a045d4; end: 101a04613;  */

void FUN_101a045d4(void)

{
  FUN_101a044d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a04614; end: 101a046b7;  */

void FUN_101a04614(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c438e8();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  lVar2 = param_2;
  (**(code **)(param_2 + 0x10))(param_2,param_3,puVar1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c60bd0(param_2);
  *param_1 = lVar3;
  param_1[1] = param_3;
  return;
}



/* Entry: 101a046b8; end: 101a0471b;  */

void FUN_101a046b8(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0471c,0,0);
  return;
}



/* Entry: 101a0471c; end: 101a0488b;  */

void FUN_101a0471c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  
  lVar9 = *(long *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(lVar9 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  func_0x000107c4b940(uVar7);
  lVar3 = *(long *)(lVar9 + 0x28);
  lVar4 = lVar3;
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x10);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
    func_0x000107c5fcfc(uVar1);
    lVar4 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar1,0,1,lVar4);
    puVar5 = &UNK_11042c760;
    func_0x000107c613fc(&UNK_11042c760,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = uVar8;
    *(undefined8 *)(puVar5 + 0x28) = uVar2;
    func_0x000107c61174(uVar8);
    func_0x000107c61174(uVar2);
    lVar4 = 0;
    FUN_101a05214(0,0,uVar1,&UNK_10d9b7620,puVar5);
    uVar8 = *(undefined8 *)(lVar9 + 0x28);
    *(long *)(lVar9 + 0x28) = lVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar8);
    lVar3 = 0;
  }
  *(long *)(unaff_x22 + 0x38) = lVar4;
  func_0x000107c6157c(lVar3);
  func_0x000107c5d278(uVar7);
  plVar6 = (long *)(ulong)*(uint *)(PTR___sScT5valuexvgTu_11034fdc0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar6;
  uVar7 = 0x112deb360;
  func_0x0001000285a8(0x112deb360,&UNK_10d9b7628);
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101a0488c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT5valuexvg_11034fdb8)
            (unaff_x22 + 0x10,lVar4,uVar7,uVar8,PTR___ss5ErrorWS_11034ee10);
  return;
}



/* Entry: 101a0488c; end: 101a048e7;  */

void FUN_101a0488c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101a048e8;
  }
  else {
    pcVar1 = FUN_101a04990;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a048e8; end: 101a0498f;  */

/* WARNING: Possible PIC construction at 0x000101a04950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a04954) */

void FUN_101a048e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c4b940(*(undefined8 *)(unaff_x22 + 0x30));
  FUN_101a049d0(uVar1,uVar3,uVar2);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 101a04990; end: 101a049cf;  */

void FUN_101a04990(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a049cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a049d0; end: 101a04a33;  */

void FUN_101a049d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    func_0x000107c61174(param_2);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x38);
  }
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    func_0x000107c615f0(param_3);
  }
  return;
}



/* Entry: 101a04a34; end: 101a04a4f;  */

void FUN_101a04a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a04a50,0,0);
  return;
}



/* Entry: 101a04a50; end: 101a04c37;  */

void FUN_101a04a50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long unaff_x22;
  
  lVar5 = unaff_x22 + 0x68;
  puVar6 = *(undefined8 **)(unaff_x22 + 0xb8);
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 200) = param_1;
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar4 = 0x800000010efc8ca0;
  uVar2 = 0xd000000000000029;
  func_0x000100029b28();
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c41214();
  func_0x000107c61180();
  if (puVar6 == (undefined8 *)0x0) {
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar6,0,0);
    puVar6[1] = 0;
    *puVar6 = 1;
    *(undefined1 *)(puVar6 + 2) = 4;
    func_0x000107c61654();
  }
  else {
    puVar7 = *(undefined8 **)(unaff_x22 + 0xc0);
    puVar3 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    *(undefined8 **)(unaff_x22 + 0xd8) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(undefined8 **)(unaff_x22 + 0xe8) = puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      *(long *)(unaff_x22 + 0x38) = lVar5;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_101a04c38;
      func_0x000107c61448(unaff_x22 + 0x10,1);
      FUN_101a04db8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    lVar5 = unaff_x22 + 0x80;
    func_0x000101a058d8();
    func_0x000107c613f8(&UNK_11042c930,puVar7,0,0);
    *puVar7 = 0;
    puVar7[1] = 0;
    *(undefined1 *)(puVar7 + 2) = 4;
    func_0x000107c61654();
    func_0x00010006c090(puVar3,uVar4);
  }
  puVar6 = *(undefined8 **)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61428(puVar6,lVar5,0,0);
  uVar2 = *puVar6;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a04c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a04c38; end: 101a04ca3;  */

void FUN_101a04c38(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xf0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x100) = *(undefined8 *)(lVar2 + 0x70);
    *(undefined8 *)(lVar2 + 0xf8) = *(undefined8 *)(lVar2 + 0x68);
    pcVar1 = FUN_101a04ca4;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101a04d30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101a04ca4; end: 101a04d2f;  */

void FUN_101a04ca4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar6 = *(undefined8 **)(unaff_x22 + 200);
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar5[1] = *(undefined8 *)(unaff_x22 + 0x100);
  *puVar5 = uVar7;
  func_0x000107c615e8(uVar2);
  func_0x00010006c090(uVar3,uVar4);
  func_0x000107c61428(puVar6,unaff_x22 + 0x68,0,0);
  uVar4 = *puVar6;
  func_0x000107c61174(uVar4);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101a04d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a04d30; end: 101a04db7;  */

void FUN_101a04d30(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe8));
  func_0x00010006c090(uVar3,uVar1);
  puVar2 = *(undefined8 **)(unaff_x22 + 200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61428(puVar2,unaff_x22 + 0x98,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a04db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a04db8; end: 101a04f1b;  */

void FUN_101a04db8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar1 = &puStack_70;
  func_0x000107c509b4();
  func_0x000107c61180();
  if (param_2 != (undefined8 *)0x0) {
    puVar2 = &UNK_11042c788;
    func_0x000107c613fc(&UNK_11042c788,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    pcStack_50 = FUN_101a05918;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100f1c768;
    puStack_58 = &UNK_11042c7a0;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x00010006c00c(param_3,param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c440d8(param_2);
    func_0x000107c60bd0(ppuVar1);
    func_0x000107c615e8(param_2);
    return;
  }
  func_0x000101a058d8();
  puVar2 = &UNK_11042c930;
  func_0x000107c613f8(&UNK_11042c930,param_2,0,0);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 4;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_1,uVar3);
  return;
}



/* Entry: 101a04f1c; end: 101a05213;  */

/* WARNING: Possible PIC construction at 0x000101a04f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a04fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a051e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a05124) */
/* WARNING: Removing unreachable block (ram,0x000101a0510c) */
/* WARNING: Removing unreachable block (ram,0x000101a0506c) */
/* WARNING: Removing unreachable block (ram,0x000101a051b0) */
/* WARNING: Removing unreachable block (ram,0x000101a05074) */
/* WARNING: Removing unreachable block (ram,0x000101a0502c) */
/* WARNING: Removing unreachable block (ram,0x000101a05004) */
/* WARNING: Removing unreachable block (ram,0x000101a04fc4) */
/* WARNING: Removing unreachable block (ram,0x000101a04f8c) */
/* WARNING: Removing unreachable block (ram,0x000101a051e8) */
/* WARNING: Removing unreachable block (ram,0x000101a051fc) */

void FUN_101a04f1c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c615f0();
    uVar1 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010d9b75a0);
    func_0x000107c40b60(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  func_0x000101a058d8();
  puVar2 = &UNK_11042c930;
  func_0x000107c613f8(&UNK_11042c930,param_1,0,0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 4;
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_2,uVar1);
  return;
}



/* Entry: 101a05214; end: 101a05443;  */

void FUN_101a05214(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  func_0x0001000abe04(param_3,puVar5);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  uVar7 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar5);
    uVar7 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar7 = uVar7 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar8 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar6 = 0;
    lVar8 = 0;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    uVar3 = 0x112deb360;
    func_0x0001000285a8(0x112deb360,&UNK_10d9b7628);
    if (lVar8 == 0 && lVar6 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar6;
      lStack_68 = lVar8;
    }
    func_0x000107c615bc(uVar7,puVar4,uVar3,param_4,param_5);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c6157c(param_5);
    uVar3 = 0x112deb360;
    func_0x0001000285a8(0x112deb360,&UNK_10d9b7628);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar8 != 0 || lVar6 != 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar6;
      lStack_88 = lVar8;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    func_0x000107c615bc(uVar7,&uStack_b8,uVar3,param_4,param_5);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 101a05444; end: 101a05487;  */

void FUN_101a05444(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a05488;
  plVar3[4] = unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0471c,0,0);
  return;
}



/* Entry: 101a05488; end: 101a054ff;  */

void FUN_101a05488(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a054d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))(0);
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a05500,0,0);
  return;
}



/* Entry: 101a05500; end: 101a0556b;  */

void FUN_101a05500(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar1 = lVar3;
  func_0x000107c44760();
  func_0x000107c61180();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c60bd0(lVar1);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a05568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 101a0556c; end: 101a055af;  */

void FUN_101a0556c(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a055b0;
  plVar3[4] = unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0471c,0,0);
  return;
}



/* Entry: 101a055b0; end: 101a05627;  */

void FUN_101a055b0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a055fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))(0);
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a05628,0,0);
  return;
}



/* Entry: 101a05628; end: 101a05693;  */

void FUN_101a05628(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  lVar1 = lVar3;
  func_0x000107c44a00();
  func_0x000107c61180();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  func_0x000107c60bd0(lVar1);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a05690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar2);
  return;
}



/* Entry: 101a05694; end: 101a056df;  */

void FUN_101a05694(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined4 *)(unaff_x22 + 0x78) = param_1;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a056e0;
  plVar3[4] = unaff_x20;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[5] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a0471c,0,0);
  return;
}



/* Entry: 101a056e0; end: 101a05753;  */

void FUN_101a056e0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101a05728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x70) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a05754,0,0);
  return;
}



/* Entry: 101a05754; end: 101a05813;  */

void FUN_101a05754(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x78);
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined4 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  func_0x000107c61174(uVar2);
  func_0x0001048d866c(unaff_x22 + 0x50,0xd000000000000023,0x800000010efc8c70,FUN_101a05814,
                      unaff_x22 + 0x10,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101a05810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101a05814; end: 101a05823;  */

void FUN_101a05814(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = (ulong)*(uint *)(unaff_x20 + 0x18);
  func_0x000107c438e8();
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c47580();
  lVar2 = lVar4;
  (**(code **)(lVar4 + 0x10))(lVar4,uVar5,puVar1);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c60bd0(lVar4);
  *param_1 = lVar3;
  param_1[1] = uVar5;
  return;
}



/* Entry: 101a05824; end: 101a0589b;  */

void FUN_101a05824(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101a0589c;
  plVar3[0x17] = lVar1;
  plVar3[0x18] = lVar2;
  plVar3[0x16] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a04a50,0,0);
  return;
}



/* Entry: 101a0589c; end: 101a05917;  */

void FUN_101a0589c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a058d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a05918; end: 101a0593f;  */

/* WARNING: Possible PIC construction at 0x000101a04f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a04fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a05120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101a051e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101a05124) */
/* WARNING: Removing unreachable block (ram,0x000101a0510c) */
/* WARNING: Removing unreachable block (ram,0x000101a0506c) */
/* WARNING: Removing unreachable block (ram,0x000101a051b0) */
/* WARNING: Removing unreachable block (ram,0x000101a05074) */
/* WARNING: Removing unreachable block (ram,0x000101a0502c) */
/* WARNING: Removing unreachable block (ram,0x000101a05004) */
/* WARNING: Removing unreachable block (ram,0x000101a04fc4) */
/* WARNING: Removing unreachable block (ram,0x000101a04f8c) */
/* WARNING: Removing unreachable block (ram,0x000101a051e8) */
/* WARNING: Removing unreachable block (ram,0x000101a051fc) */

void FUN_101a05918(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 != (undefined8 *)0x0) {
    func_0x000107c615f0();
    uVar1 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010d9b75a0);
    func_0x000107c40b60(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  func_0x000101a058d8(0,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  puVar2 = &UNK_11042c930;
  func_0x000107c613f8(&UNK_11042c930,param_1,0,0);
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 4;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar1,uVar3);
  return;
}



/* Entry: 101a05940; end: 101a05d47;  */

void FUN_101a05940(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long extraout_x8;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uStack_180;
  ulong uStack_178;
  undefined1 auStack_170 [72];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined5 uStack_d8;
  undefined3 uStack_d3;
  undefined5 uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char cStack_7c;
  
  lVar4 = 0x112deb538;
  func_0x0001000285a8(0x112deb538,&UNK_10d9b7730);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)&uStack_180 - extraout_x8;
  uStack_b8 = *(ulong *)(unaff_x20 + 0x78);
  uStack_c0 = *(ulong *)(unaff_x20 + 0x70);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_98 = (uint)*(undefined8 *)(unaff_x20 + 0x98);
  uStack_94 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x98) >> 0x20);
  uStack_88 = (undefined4)*(undefined8 *)(unaff_x20 + 0xa8);
  uStack_90 = (undefined4)*(undefined8 *)(unaff_x20 + 0xa0);
  uStack_8c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xa0) >> 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xad);
  uStack_84._0_1_ = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0xa8) >> 0x20);
  uStack_84._1_3_ = (undefined3)uVar7;
  uStack_80 = (undefined4)((ulong)uVar7 >> 0x18);
  cStack_7c = (char)((ulong)uVar7 >> 0x38);
  uVar6 = *param_3;
  if (((uVar6 == uStack_c0) && (param_3[1] == uStack_b8)) ||
     (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
    uVar2 = uStack_a0;
    uVar1 = uStack_a8;
    uVar7 = uStack_b0;
    if ((char)param_3[5] == '\x01') {
      if ((uStack_98 & 0xff) == 1) {
        FUN_101a08220(&uStack_c0,&uStack_110);
LAB_101a05a6c:
        cVar3 = cStack_7c;
        if (*(char *)((long)param_3 + 0x44) == '\x01') {
          func_0x000101a0825c(&uStack_c0);
          if (cVar3 == '\x01') goto LAB_101a05b0c;
        }
        else {
          if (cStack_7c == '\x01') goto LAB_101a05a98;
          uVar6 = *(ulong *)((long)param_3 + 0x2c);
          func_0x000107c600bc(uVar6,*(undefined8 *)((long)param_3 + 0x34),
                              *(undefined8 *)((long)param_3 + 0x3c),CONCAT44(uStack_90,uStack_94),
                              CONCAT44(uStack_88,uStack_8c),CONCAT44(uStack_80,uStack_84));
          func_0x000101a0825c(&uStack_c0);
          if ((uVar6 & 1) != 0) goto LAB_101a05b0c;
        }
      }
    }
    else if ((uStack_98 & 0xff) != 1) {
      uStack_178 = param_3[2];
      uStack_180 = param_3[3];
      uVar8 = param_3[4];
      FUN_101a08220(&uStack_c0,&uStack_110);
      uVar6 = uStack_178;
      func_0x000107c600bc(uStack_178,uStack_180,uVar8,uVar7,uVar1,uVar2);
      if ((uVar6 & 1) != 0) goto LAB_101a05a6c;
LAB_101a05a98:
      func_0x000101a0825c(&uStack_c0);
    }
  }
  func_0x000107c61428(unaff_x20 + 0xb8,auStack_128,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined **)(unaff_x20 + 0xb8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar7);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_d8 = (undefined5)*(undefined8 *)(unaff_x20 + 0xa8);
  uStack_d3 = (undefined3)*(undefined8 *)(unaff_x20 + 0xad);
  uStack_d0 = (undefined5)((ulong)*(undefined8 *)(unaff_x20 + 0xad) >> 0x18);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar6 = param_3[4];
  uVar9 = param_3[7];
  uVar8 = param_3[6];
  *(ulong *)(unaff_x20 + 0x98) = param_3[5];
  *(ulong *)(unaff_x20 + 0x90) = uVar6;
  *(ulong *)(unaff_x20 + 0xa8) = uVar9;
  *(ulong *)(unaff_x20 + 0xa0) = uVar8;
  *(undefined8 *)(unaff_x20 + 0xad) = *(undefined8 *)((long)param_3 + 0x3d);
  uVar9 = *param_3;
  uVar8 = param_3[3];
  uVar6 = param_3[2];
  *(ulong *)(unaff_x20 + 0x78) = param_3[1];
  *(ulong *)(unaff_x20 + 0x70) = uVar9;
  *(ulong *)(unaff_x20 + 0x88) = uVar8;
  *(ulong *)(unaff_x20 + 0x80) = uVar6;
  FUN_101a08220(param_3,auStack_170);
  func_0x000101a0825c(&uStack_110);
LAB_101a05b0c:
  FUN_101a07e98(param_2,lVar4);
  lVar5 = 0;
  FUN_101a0782c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar4,0,1,lVar5);
  func_0x000107c61428(unaff_x20 + 0xb8,&uStack_110,0x21,0);
  func_0x000101a05bb8(lVar4,param_1);
  func_0x000107c614a8(&uStack_110);
  return;
}



/* Entry: 101a05d48; end: 101a05e03;  */

void FUN_101a05d48(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    func_0x00010149a22c();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        func_0x000101a14458();
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x000101a07be4(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    func_0x000101a1023c(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 101a05e04; end: 101a05f83;  */

void FUN_101a05e04(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_f8 [72];
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  char cStack_6c;
  
  uStack_a8 = *(ulong *)(unaff_x20 + 0x78);
  uStack_b0 = *(ulong *)(unaff_x20 + 0x70);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_88 = (uint)*(undefined8 *)(unaff_x20 + 0x98);
  uStack_84 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x98) >> 0x20);
  uStack_78 = (undefined4)*(undefined8 *)(unaff_x20 + 0xa8);
  uStack_80 = (undefined4)*(undefined8 *)(unaff_x20 + 0xa0);
  uStack_7c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0xa0) >> 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xad);
  uStack_74._0_1_ = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0xa8) >> 0x20);
  uStack_74._1_3_ = (undefined3)uVar6;
  uStack_70 = (undefined4)((ulong)uVar6 >> 0x18);
  cStack_6c = (char)((ulong)uVar6 >> 0x38);
  uVar5 = *param_1;
  if (((uVar5 != uStack_b0) || (param_1[1] != uStack_a8)) &&
     (func_0x000107c605b8(), (uVar5 & 1) == 0)) {
    return;
  }
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar6 = uStack_a0;
  if ((char)param_1[5] == '\x01') {
    if ((uStack_88 & 0xff) != 1) {
      return;
    }
    FUN_101a08220(&uStack_b0,auStack_f8);
LAB_101a05ed8:
    cVar4 = cStack_6c;
    if (*(char *)((long)param_1 + 0x44) == '\x01') {
      func_0x000101a0825c(&uStack_b0);
      if (cVar4 != '\x01') {
        return;
      }
    }
    else {
      if (cStack_6c == '\x01') goto LAB_101a05f04;
      uVar5 = *(ulong *)((long)param_1 + 0x2c);
      func_0x000107c600bc(uVar5,*(undefined8 *)((long)param_1 + 0x34),
                          *(undefined8 *)((long)param_1 + 0x3c),CONCAT44(uStack_80,uStack_84),
                          CONCAT44(uStack_78,uStack_7c),CONCAT44(uStack_70,uStack_74));
      func_0x000101a0825c(&uStack_b0);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    func_0x000107c61428(unaff_x20 + 0xb8,auStack_f8,0,0);
    if (*(long *)(*(long *)(unaff_x20 + 0xb8) + 0x10) != 0) {
      func_0x000107c61434();
    }
  }
  else {
    if ((uStack_88 & 0xff) == 1) {
      return;
    }
    uVar5 = param_1[2];
    uVar1 = param_1[3];
    uVar7 = param_1[4];
    FUN_101a08220(&uStack_b0,auStack_f8);
    func_0x000107c600bc(uVar5,uVar1,uVar7,uVar6,uVar2,uVar3);
    if ((uVar5 & 1) != 0) goto LAB_101a05ed8;
LAB_101a05f04:
    func_0x000101a0825c(&uStack_b0);
  }
  return;
}



/* Entry: 101a05f84; end: 101a05fcf;  */

void FUN_101a05f84(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 101a05fd0; end: 101a05fdb;  */

void FUN_101a05fd0(void)

{
  return;
}



/* Entry: 101a05fdc; end: 101a05fff;  */

void FUN_101a05fdc(undefined8 param_1)

{
  func_0x0001006d98f8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uRam0000000113803a20 = param_1;
  return;
}



/* Entry: 101a06000; end: 101a062db;  */

void FUN_101a06000(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  undefined8 unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long alStack_e0 [2];
  long alStack_d0 [3];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  
  lVar3 = 0;
  FUN_101a0782c();
  lVar12 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)alStack_d0 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - extraout_x12;
  func_0x000103aeb250(0);
  func_0x000103ae9d4c(&uStack_a8,param_1);
  if (lStack_a0 != 0) {
    alStack_d0[2] = uStack_a8;
    lVar4 = param_2;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a062cc);
      (*pcVar2)();
    }
    lVar5 = lVar4;
    func_0x000107c4c99c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a062d0);
      (*pcVar2)();
    }
    lVar4 = lVar5;
    func_0x000107c4c9b4();
    func_0x000107c61170(lVar5);
    lVar5 = param_2;
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a062d4);
      (*pcVar2)();
    }
    lVar6 = lVar5;
    func_0x000107c5d04c();
    alStack_d0[1] = lVar6;
    func_0x000107c61170(lVar5);
    func_0x000107c4f4ec();
    func_0x000107c61180();
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a062d8);
      (*pcVar2)();
    }
    lVar5 = param_2;
    func_0x000107c44430();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101a062dc);
      (*pcVar2)();
    }
    lVar6 = lVar5;
    func_0x000107c42378();
    func_0x000107c61170(lVar5);
    lVar5 = lVar4;
    FUN_101a07d54(lVar4,param_1);
    if (lVar5 == 0) {
      func_0x000101a08368(&uStack_a8,0x112deb530,&UNK_10d9b82d0);
    }
    else {
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar11,param_3,lVar7);
      *(long *)(lVar11 + *(int *)(lVar3 + 0x14)) = alStack_d0[1];
      *(long *)(lVar11 + *(int *)(lVar3 + 0x18)) = lVar6;
      *(long *)(lVar11 + *(int *)(lVar3 + 0x1c)) = lVar5;
      FUN_101a07e98(lVar11,lVar14);
      uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
      uVar13 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
      uVar16 = lVar15 + uVar13 + 7 & 0xfffffffffffffff8;
      puVar8 = &UNK_11042c7e8;
      func_0x000107c613fc(&UNK_11042c7e8,uVar16 + 0x45,uVar10 | 7);
      *(undefined8 *)(puVar8 + 0x10) = unaff_x20;
      *(long *)(puVar8 + 0x18) = lVar4;
      func_0x000101a07edc(lVar14,puVar8 + uVar13);
      puVar1 = (undefined8 *)(puVar8 + uVar16);
      *puVar1 = alStack_d0[2];
      puVar1[1] = lStack_a0;
      puVar1[3] = uStack_90;
      puVar1[2] = uStack_98;
      puVar1[5] = uStack_80;
      puVar1[4] = uStack_88;
      puVar1[7] = CONCAT35(uStack_6b,uStack_70);
      puVar1[6] = uStack_78;
      *(ulong *)((long)puVar1 + 0x3d) = CONCAT53(uStack_68,uStack_6b);
      func_0x000107c61174(unaff_x20);
      *(undefined **)(lVar11 + -0x10) = PTR___sytN_11034f1b0 + 8;
      uVar9 = 0xce;
      func_0x0001001ca524(0xce,0,0x40,4,0,0,&UNK_10d9b76d8,puVar8);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(uVar9);
      FUN_101a07ff8(lVar11);
    }
  }
  return;
}



/* Entry: 101a062dc; end: 101a0631b;  */

void FUN_101a062dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a062f8,0,0);
  return;
}



/* Entry: 101a0631c; end: 101a0634f;  */

void FUN_101a0631c(void)

{
  long unaff_x22;
  
  FUN_101a05940(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101a0634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a06350; end: 101a06433; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl36SnapRendererLensTranscodingCacheImpl cacheLensBakedInVideoFor:playbackLayer:url:] */

void FUN_101a06350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_5);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101a06000(param_3,param_4,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101a06434; end: 101a06553;  */

void FUN_101a06434(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  lVar1 = 0x112deb540;
  func_0x0001000285a8(0x112deb540,&UNK_10d9b7740);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  lVar1 = 0;
  FUN_101a0782c();
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a06554,0,0);
  return;
}



/* Entry: 101a06554; end: 101a06677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a06554(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = 0;
  func_0x000103aeb250(0);
  func_0x000103ae9d4c(unaff_x22 + 0x58,uVar8,uVar6);
  if (*(long *)(unaff_x22 + 0x60) != 0) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x58);
    *(long *)(unaff_x22 + 0x18) = *(long *)(unaff_x22 + 0x60);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x70);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x4d) = *(undefined8 *)(unaff_x22 + 0x95);
    uVar6 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112deb468);
    *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101a06678,uVar6,0);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a06674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101a06678; end: 101a066d3;  */

void FUN_101a06678(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = unaff_x22 + 0x10;
  FUN_101a05e04();
  *(long *)(unaff_x22 + 0x128) = lVar1;
  func_0x000101a08368(unaff_x22 + 0x58,0x112deb530,&UNK_10d9b82d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a066d4,0,0);
  return;
}



/* Entry: 101a066d4; end: 101a070cb;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_101a066d4(void)

{
  undefined8 *******pppppppuVar1;
  undefined8 ******ppppppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 *****pppppuVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *******pppppppuVar30;
  ulong *puVar31;
  undefined8 *******pppppppuVar32;
  undefined8 *******pppppppuVar33;
  undefined8 uVar34;
  long unaff_x22;
  undefined8 *******pppppppuVar35;
  undefined8 *******pppppppuVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 *****pppppuVar40;
  undefined8 *******pppppppuVar41;
  undefined8 *******pppppppuStack_70;
  undefined8 *******pppppppuStack_60;
  
  lVar24 = *(long *)(unaff_x22 + 0x128);
  if (lVar24 != 0) {
    lVar10 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070c4);
      (*pcVar8)();
    }
    lVar11 = lVar10;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070c8);
      (*pcVar8)();
    }
    pppppppuStack_60 = (undefined8 *******)0x0;
    uVar12 = 0;
    func_0x000101a08290(0,0x112d55598,&PTR_PTR_1126b25d0);
    pppppppuVar33 = &pppppppuStack_60;
    func_0x000107c5fc4c(lVar11,pppppppuVar33,uVar12);
    pppppppuVar36 = pppppppuStack_60;
    if (pppppppuStack_60 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070cc);
      (*pcVar8)();
    }
    func_0x000107c61170(lVar11);
    pppppppuVar41 = (undefined8 *******)((ulong)pppppppuVar36 & 0xffffffffffffff8);
    if ((ulong)pppppppuVar36 >> 0x3e == 0) {
      pppppppuVar35 = (undefined8 *******)pppppppuVar41[2];
      pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      pppppppuVar35 = pppppppuVar36;
      if (-1 < (long)pppppppuVar36) {
        pppppppuVar35 = pppppppuVar41;
      }
      func_0x000107c60480();
      pppppppuVar32 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)pppppppuVar32;
    if (pppppppuVar35 != (undefined8 *******)0x0) {
      pppppppuVar30 = (undefined8 *******)0x0;
      do {
        while( true ) {
          if (((ulong)pppppppuVar36 & 0xc000000000000001) == 0) {
            if (pppppppuVar41[2] <= pppppppuVar30) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101a068bc);
              (*pcVar8)();
            }
            pppppppuVar13 = (undefined8 *******)pppppppuVar36[(long)((long)pppppppuVar30 + 4)];
            func_0x000107c61174();
          }
          else {
            pppppppuVar13 = pppppppuVar30;
            pppppppuVar33 = pppppppuVar36;
            func_0x00010121c1ac();
          }
          pppppppuVar1 = (undefined8 *******)((long)pppppppuVar30 + 1);
          if (SCARRY8((long)pppppppuVar30,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x101a068b8);
            (*pcVar8)();
          }
          pppppppuVar14 = pppppppuVar13;
          func_0x000107c4abb4();
          if ((int)pppppppuVar14 == 1) break;
LAB_101a067a4:
          func_0x000107c61170(pppppppuVar13);
          pppppppuVar30 = (undefined8 *******)((long)pppppppuVar30 + 1);
          if (pppppppuVar1 == pppppppuVar35) goto LAB_101a068d8;
        }
        pppppppuVar14 = pppppppuVar13;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (pppppppuVar14 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070ac);
          (*pcVar8)();
        }
        pppppppuVar15 = pppppppuVar14;
        func_0x000107c3e240();
        func_0x000107c61170(pppppppuVar14);
        if ((int)pppppppuVar15 != 5) goto LAB_101a067a4;
        pppppppuVar30 = pppppppuVar32;
        func_0x000107c61558();
        pppppppuStack_60 = pppppppuVar32;
        if (((ulong)pppppppuVar30 & 1) == 0) {
          pppppppuVar33 = (undefined8 *******)((long)pppppppuVar32[2] + 1);
          FUN_101a17c14(0,pppppppuVar33,1);
        }
        ppppppuVar2 = pppppppuStack_60[2];
        pppppppuVar32 = (undefined8 *******)((long)ppppppuVar2 + 1);
        if ((undefined8 ******)((ulong)pppppppuStack_60[3] >> 1) <= ppppppuVar2) {
          pppppppuVar33 = pppppppuVar32;
          FUN_101a17c14((undefined8 ******)0x1 < pppppppuStack_60[3],pppppppuVar32,1);
        }
        pppppppuStack_60[2] = pppppppuVar32;
        pppppppuStack_60[(long)ppppppuVar2 + 4] = pppppppuVar13;
        pppppppuVar32 = pppppppuStack_60;
        pppppppuVar30 = pppppppuVar1;
      } while (pppppppuVar1 != pppppppuVar35);
    }
LAB_101a068d8:
    func_0x000107c6142c(pppppppuVar36);
    if (((long)pppppppuVar32 < 0) || (((ulong)pppppppuVar32 >> 0x3e & 1) != 0)) {
      pppppppuStack_70 = pppppppuVar32;
      func_0x000107c60480();
    }
    else {
      pppppppuStack_70 = (undefined8 *******)pppppppuVar32[2];
    }
    pppppppuVar36 = (undefined8 *******)0x0;
    lVar10 = *(long *)(unaff_x22 + 0xf8);
    lVar11 = *(long *)(unaff_x22 + 0x100);
    do {
      if (pppppppuStack_70 == pppppppuVar36) {
        lVar10 = *(long *)(unaff_x22 + 0xe0);
        lVar25 = *(long *)(unaff_x22 + 0xb8);
        func_0x000107c61574(pppppppuVar32);
        pppppppuVar33 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101a10934();
        puVar31 = (ulong *)(lVar24 + 0x40);
        uVar29 = -1L << ((ulong)*(byte *)(lVar24 + 0x20) & 0x3f);
        uVar16 = 0xffffffffffffffff;
        if (-uVar29 < 0x40) {
          uVar16 = ~(-1L << (-uVar29 & 0x3f));
        }
        uVar16 = uVar16 & *puVar31;
        func_0x000107c61434(lVar24);
        lVar27 = 0;
        lVar28 = lVar27;
        goto joined_r0x000101a06c60;
      }
      if (((ulong)pppppppuVar32 & 0xc000000000000001) == 0) {
        if (pppppppuVar32[2] <= pppppppuVar36) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101a0708c);
          (*pcVar8)();
        }
        pppppppuVar41 = (undefined8 *******)pppppppuVar32[(long)((long)pppppppuVar36 + 4)];
        func_0x000107c61174();
      }
      else {
        pppppppuVar41 = pppppppuVar36;
        pppppppuVar33 = pppppppuVar32;
        func_0x00010121c1ac();
      }
      if (SCARRY8((long)pppppppuVar36,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a07088);
        (*pcVar8)();
      }
      pppppppuVar35 = pppppppuVar41;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (pppppppuVar35 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070b0);
        (*pcVar8)();
      }
      pppppppuVar30 = pppppppuVar35;
      func_0x000107c4c99c();
      func_0x000107c61180();
      func_0x000107c61170(pppppppuVar35);
      if (pppppppuVar30 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070b4);
        (*pcVar8)();
      }
      pppppppuVar35 = pppppppuVar30;
      func_0x000107c4c9b4();
      func_0x000107c61170(pppppppuVar30);
      if ((*(long *)(lVar24 + 0x10) == 0) ||
         (pppppppuVar30 = pppppppuVar35, func_0x000100f89a68(pppppppuVar35),
         ((ulong)pppppppuVar33 & 1) == 0)) {
        func_0x000107c6142c(lVar24);
        func_0x000107c61170(pppppppuVar41);
LAB_101a06b84:
        func_0x000107c61574(pppppppuVar32);
        goto LAB_101a06fd8;
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
      lVar25 = *(long *)(unaff_x22 + 0x118);
      FUN_101a07e98(*(long *)(lVar24 + 0x38) + *(long *)(lVar11 + 0x48) * (long)pppppppuVar30,uVar12
                   );
      func_0x000101a07edc(uVar12,lVar25);
      pppppppuVar30 = *(undefined8 ********)(lVar25 + *(int *)(lVar10 + 0x14));
      pppppppuVar33 = pppppppuVar41;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (pppppppuVar33 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070b8);
        (*pcVar8)();
      }
      pppppppuVar13 = pppppppuVar33;
      func_0x000107c5d04c();
      func_0x000107c61170(pppppppuVar33);
      if (pppppppuVar30 != pppppppuVar13) {
LAB_101a06b70:
        FUN_101a07ff8();
        func_0x000107c61170(pppppppuVar41);
        func_0x000107c6142c(lVar24);
        goto LAB_101a06b84;
      }
      pppppppuVar30 =
           *(undefined8 ********)(*(long *)(unaff_x22 + 0x118) + (long)*(int *)(lVar10 + 0x18));
      pppppppuVar33 = pppppppuVar41;
      func_0x000107c4f4ec();
      func_0x000107c61180();
      if (pppppppuVar33 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070c0);
        (*pcVar8)();
      }
      pppppppuVar13 = pppppppuVar33;
      func_0x000107c44430();
      func_0x000107c61180();
      func_0x000107c61170(pppppppuVar33);
      if (pppppppuVar13 == (undefined8 *******)0x0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070bc);
        (*pcVar8)();
      }
      pppppppuVar33 = pppppppuVar13;
      func_0x000107c42378();
      func_0x000107c61170(pppppppuVar13);
      if (pppppppuVar30 != pppppppuVar33) goto LAB_101a06b70;
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar16 = *(ulong *)(*(long *)(unaff_x22 + 0x118) + (long)*(int *)(lVar10 + 0x1c));
      func_0x000107c61174();
      FUN_101a07d54(pppppppuVar35,uVar12);
      if (pppppppuVar35 == (undefined8 *******)0x0) {
        func_0x000107c61170(uVar16);
LAB_101a06fa0:
        uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
        func_0x000107c61170(pppppppuVar41);
        func_0x000107c61574(pppppppuVar32);
        func_0x000107c6142c(lVar24);
        FUN_101a07ff8(uVar12);
        goto LAB_101a06fd8;
      }
      func_0x000101a08290(0,0x112d512f8,&PTR_PTR_1126b25d8);
      uVar29 = uVar16;
      pppppppuVar30 = pppppppuVar35;
      func_0x000107c60118();
      func_0x000107c61170(pppppppuVar35);
      func_0x000107c61170(uVar16);
      if ((uVar29 & 1) == 0) goto LAB_101a06fa0;
      uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
      puVar17 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar18 = puVar17;
      func_0x000107c5edc4();
      pppppppuVar33 = pppppppuVar30;
      func_0x000107c5fadc();
      func_0x000107c6142c(pppppppuVar30);
      puVar19 = puVar17;
      func_0x000107c43418();
      func_0x000107c61170(pppppppuVar41);
      func_0x000107c61170(puVar18);
      func_0x000107c61170(puVar17);
      FUN_101a07ff8(uVar12);
      pppppppuVar36 = (undefined8 *******)((long)pppppppuVar36 + 1);
    } while (((ulong)puVar19 & 1) != 0);
    func_0x000107c61574(pppppppuVar32);
    func_0x000107c6142c(lVar24);
  }
LAB_101a06fd8:
  pppppppuVar33 = (undefined8 *******)0x0;
LAB_101a06fdc:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar38 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar37 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar39 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar34);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar38);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar37);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar39);
                    /* WARNING: Could not recover jumptable at 0x000101a07058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pppppppuVar33);
  return;
joined_r0x000101a06c60:
  if (uVar16 != 0) {
    uVar39 = *(undefined8 *)(unaff_x22 + 0x108);
    puVar3 = *(undefined8 **)(unaff_x22 + 0xe8);
    puVar4 = *(undefined8 **)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar38 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar37 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar26 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
    uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
    uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
    uVar26 = LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) | lVar27 << 6;
    uVar16 = uVar16 - 1 & uVar16;
    *puVar4 = *(undefined8 *)(*(long *)(lVar24 + 0x30) + uVar26 * 8);
    FUN_101a07e98(*(long *)(lVar24 + 0x38) + *(long *)(lVar11 + 0x48) * uVar26,
                  (long)puVar4 + (long)*(int *)(lVar10 + 0x30));
    FUN_101a082d8(puVar4,puVar3,0x112deb540,&UNK_10d9b7740);
    pppppuVar40 = (undefined8 *****)*puVar3;
    func_0x000101a07edc((long)puVar3 + (long)*(int *)(lVar10 + 0x30),uVar39);
    (**(code **)(lVar25 + 0x10))(uVar38,uVar39,uVar37);
    pcVar8 = *(code **)(lVar25 + 0x38);
    (*pcVar8)(uVar38,0,1,uVar37);
    uVar26 = 0x112d36580;
    func_0x000101a08320(uVar38,uVar12,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar25 + 0x30))(uVar12,1,uVar37);
    uVar22 = *(ulong *)(unaff_x22 + 0xd0);
    lVar28 = lVar27;
    if ((int)uVar12 == 1) {
      uVar23 = uVar26;
      func_0x000101a08368(uVar22,0x112d36580,&UNK_10d9016d0);
      func_0x000100f89a68(pppppuVar40);
      if ((uVar23 & 1) == 0) {
        uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
        FUN_101a07ff8(*(undefined8 *)(unaff_x22 + 0x108));
        func_0x000101a08368(uVar12,0x112deb540,&UNK_10d9b7740);
        uVar12 = 1;
      }
      else {
        pppppppuVar36 = pppppppuVar33;
        func_0x000107c61558();
        pppppppuStack_60 = pppppppuVar33;
        if ((int)pppppppuVar36 == 0) {
          func_0x000101a14244();
        }
        pppppppuVar33 = pppppppuStack_60;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
        uVar38 = *(undefined8 *)(unaff_x22 + 0xf0);
        (**(code **)(lVar25 + 0x20))
                  (*(undefined8 *)(unaff_x22 + 200),
                   (undefined8 ******)
                   ((long)pppppppuStack_60[7] + *(long *)(lVar25 + 0x48) * (long)pppppuVar40),
                   *(undefined8 *)(unaff_x22 + 0xb0));
        FUN_101a07a50(pppppuVar40,pppppppuVar33,PTR___s10Foundation3URLVMa_110350988);
        FUN_101a07ff8(uVar12);
        func_0x000101a08368(uVar38,0x112deb540,&UNK_10d9b7740);
        uVar12 = 0;
      }
      uVar38 = *(undefined8 *)(unaff_x22 + 200);
      (*pcVar8)(uVar38,uVar12,1,*(undefined8 *)(unaff_x22 + 0xb0));
      puVar17 = &UNK_10d9016d0;
    }
    else {
      pcVar8 = *(code **)(lVar25 + 0x20);
      (*pcVar8)(*(undefined8 *)(unaff_x22 + 0xc0),uVar22,*(undefined8 *)(unaff_x22 + 0xb0));
      pppppppuVar36 = pppppppuVar33;
      func_0x000107c61558();
      uVar21 = (uint)pppppppuVar36;
      pppppuVar20 = pppppuVar40;
      pppppppuStack_60 = pppppppuVar33;
      func_0x000100f89a68();
      uVar26 = (ulong)~(uint)uVar22 & 1;
      if (SCARRY8((long)pppppppuVar33[2],uVar26)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070a4);
        (*pcVar8)();
      }
      if ((long)pppppppuVar33[3] < (long)((long)pppppppuVar33[2] + uVar26)) {
        func_0x000101a14b78();
        pppppppuVar33 = pppppppuStack_60;
        pppppuVar20 = pppppuVar40;
        func_0x000100f89a68();
        if (((uint)uVar22 & 1) != (uVar21 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                    (PTR___ss5Int64VN_11034ee50);
          return;
        }
      }
      else if (((ulong)pppppppuVar36 & 1) == 0) {
        func_0x000101a14244();
        pppppppuVar33 = pppppppuStack_60;
      }
      uVar39 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar38 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar37 = *(undefined8 *)(unaff_x22 + 0xb0);
      if ((uVar22 & 1) == 0) {
        pppppppuVar33[((ulong)pppppuVar20 >> 6) + 8] =
             (undefined8 ******)
             ((ulong)pppppppuVar33[((ulong)pppppuVar20 >> 6) + 8] |
             1L << ((ulong)pppppuVar20 & 0x3f));
        pppppppuVar33[6][(long)pppppuVar20] = pppppuVar40;
        (*pcVar8)((undefined8 ******)
                  ((long)pppppppuVar33[7] + *(long *)(lVar25 + 0x48) * (long)pppppuVar20),uVar12,
                  uVar37);
        FUN_101a07ff8(uVar39);
        func_0x000101a08368(uVar38,0x112deb540,&UNK_10d9b7740);
        if (SCARRY8((long)pppppppuVar33[2],1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101a070a8);
          (*pcVar8)();
        }
        pppppppuVar33[2] = (undefined8 ******)((long)pppppppuVar33[2] + 1);
        goto joined_r0x000101a06c60;
      }
      (**(code **)(lVar25 + 0x28))
                ((undefined8 ******)
                 ((long)pppppppuVar33[7] + *(long *)(lVar25 + 0x48) * (long)pppppuVar20));
      FUN_101a07ff8(uVar39);
      uVar26 = 0x112deb540;
      puVar17 = &UNK_10d9b7740;
    }
    func_0x000101a08368(uVar38,uVar26,puVar17);
    goto joined_r0x000101a06c60;
  }
  bVar9 = SCARRY8(lVar27,1);
  lVar27 = lVar27 + 1;
  if (bVar9) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x101a07090);
    (*pcVar8)();
  }
  if ((long)(0x3f - uVar29 >> 6) <= lVar27) goto LAB_101a06f68;
  uVar16 = puVar31[lVar27];
  goto joined_r0x000101a06c60;
LAB_101a06f68:
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c6142c(lVar24);
  FUN_101a082d0(uVar12,puVar31,~uVar29,lVar28,0);
  goto LAB_101a06fdc;
}



/* Entry: 101a070cc; end: 101a0720f; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl36SnapRendererLensTranscodingCacheImpl fetchCachedVideosFor:completionHandler:] */

void FUN_101a070cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11042c838;
  func_0x000107c613fc(&UNK_11042c838,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11042c860;
  func_0x000107c613fc(&UNK_11042c860,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9b7700;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11042c888;
  func_0x000107c613fc(&UNK_11042c888,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9b7710;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9b7720,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101a07210; end: 101a07283;  */

void FUN_101a07210(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(long *)(unaff_x22 + 0x10) = param_1;
  plVar4 = (long *)0x130;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101a07284;
  plVar4[0x14] = param_1;
  plVar4[0x15] = param_3;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar4[0x16] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x17] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x19] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1a] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1b] = uVar2;
  lVar1 = 0x112deb540;
  func_0x0001000285a8(0x112deb540,&UNK_10d9b7740);
  plVar4[0x1c] = lVar1;
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1d] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1e] = uVar2;
  lVar1 = 0;
  FUN_101a0782c();
  plVar4[0x1f] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x20] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x22] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x23] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a06554,0,0);
  return;
}



/* Entry: 101a07284; end: 101a07333;  */

void FUN_101a07284(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  uVar3 = *(undefined8 *)(lVar5 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x28));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000107c5ede0(0);
    lVar2 = param_1;
    func_0x000107c5f9dc(param_1,PTR___ss5Int64VN_11034ee50,uVar1,PTR___ss5Int64VSHsWP_11034ee58);
    func_0x000107c6142c(param_1);
  }
  (**(code **)(*(long *)(lVar5 + 0x18) + 0x10))(*(long *)(lVar5 + 0x18),lVar2);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a07330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 101a07334; end: 101a0736f;  */

void FUN_101a07334(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101a0734c,0,0);
  return;
}



/* Entry: 101a07370; end: 101a073c3;  */

void FUN_101a07370(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61428(lVar2 + 0xb8,unaff_x22 + 0x10,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  *(undefined **)(lVar2 + 0xb8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101a073c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a073c4; end: 101a0746b; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl36SnapRendererLensTranscodingCacheImpl clearCache] */

void FUN_101a073c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_11042c810;
  func_0x000107c613fc(&UNK_11042c810,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0xce;
  func_0x0001001ca524(0xce,0,0x40,4,0,0,&UNK_10d9b76e8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101a0746c; end: 101a0750f; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl36SnapRendererLensTranscodingCacheImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a0746c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = _DAT_112deb468;
  lVar2 = 0;
  func_0x000101a05fb0();
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0xe000000000000000;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined1 *)(lVar2 + 0x98) = 1;
  *(undefined8 *)(lVar2 + 0x9c) = 0;
  *(undefined8 *)(lVar2 + 0xac) = 0;
  *(undefined8 *)(lVar2 + 0xa4) = 0;
  *(undefined1 *)(lVar2 + 0xb4) = 1;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101a107c4();
  *(undefined **)(lVar2 + 0xb8) = puVar3;
  *(long *)(param_1 + lVar1) = lVar2;
  func_0x0001006d98f8();
  lStack_40 = param_1;
  puStack_38 = puVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101a07510; end: 101a0753f;  */

void FUN_101a07510(void)

{
  func_0x0001006d98f8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101a07540; end: 101a0754f; -[_TtC44SCSnapRenderNGSMESnapDocConverterServiceImpl36SnapRendererLensTranscodingCacheImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a07540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112deb468));
  return;
}



/* Entry: 101a07550; end: 101a075ef;  */

long * FUN_101a07550(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    func_0x000107c61174();
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101a075f0; end: 101a07633;  */

void FUN_101a075f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  return;
}



/* Entry: 101a07634; end: 101a07813;  */

long FUN_101a07634(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  func_0x000107c61174();
  return param_1;
}



/* Entry: 101a07814; end: 101a0782b;  */

void FUN_101a07814(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101a0782c; end: 101a07863;  */

void FUN_101a0782c(undefined8 param_1)

{
  if (lRam0000000112deb4f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e667884);
  return;
}



/* Entry: 101a07864; end: 101a078e7;  */

void FUN_101a07864(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = PTR___sBOWV_11034d658 + 0x40;
    puStack_30 = puStack_38;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 101a078e8; end: 101a07963;  */

void FUN_101a078e8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a07920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


